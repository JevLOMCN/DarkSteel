// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 26

// <lambda_invoker_cdecl> @ 14c85c880

bool __cdecl
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::<lambda_42_>::<lambda_invoker_cdecl>
          (void)

{
  return false;
}

// operator() @ 14c8a6060

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::compute_intersections'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 uVar25;
  int *piVar26;
  longlong *plVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  
  if (-1 < param_1) {
    plVar10 = *(longlong **)this;
    lVar11 = *plVar10;
    if (param_1 < *(int *)(lVar11 + 0x140) * 0x200 + *(int *)(lVar11 + 0x144)) {
      uVar29 = (ulonglong)(param_1 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar11 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8)
                             + uVar29 * 2) - 1U) < 0xfffe) {
        if (param_1 == ((uint)param_1 / 100) * 100) {
          UE::Core::Private::Function::CheckCallable((void *)plVar10[0xc]);
          pcVar12 = (code *)plVar10[0xc];
          plVar27 = plVar10 + 0xe;
          if ((longlong *)plVar10[0x11] != (longlong *)0x0) {
            plVar27 = (longlong *)plVar10[0x11];
          }
          uVar25 = (**(code **)(*plVar27 + 8))();
          cVar19 = (*pcVar12)(uVar25);
          if (cVar19 == '\x01') {
            **(undefined1 **)((longlong)this + 0x50) = 1;
          }
        }
        if (**(char **)((longlong)this + 0x50) == '\0') {
          lVar11 = **(longlong **)this;
          lVar13 = *(longlong *)(lVar11 + 0x10);
          lVar11 = *(longlong *)
                    (*(longlong *)(lVar11 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
          bVar18 = false;
          uVar9 = *(uint *)(lVar11 + uVar29 * 0xc);
          uVar28 = (ulonglong)(uVar9 & 0x1ff);
          lVar14 = *(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8);
          auVar6 = *(undefined1 (*) [16])(lVar14 + uVar28 * 0x18);
          dVar1 = *(double *)(lVar14 + 0x10 + uVar28 * 0x18);
          uVar9 = *(uint *)(lVar11 + 4 + uVar29 * 0xc);
          uVar28 = (ulonglong)(uVar9 & 0x1ff);
          lVar14 = *(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8);
          uVar9 = *(uint *)(lVar11 + 8 + uVar29 * 0xc);
          auVar7 = *(undefined1 (*) [16])(lVar14 + uVar28 * 0x18);
          dVar2 = *(double *)(lVar14 + 0x10 + uVar28 * 0x18);
          uVar29 = (ulonglong)(uVar9 & 0x1ff);
          lVar11 = *(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8);
          auVar8 = *(undefined1 (*) [16])(lVar11 + uVar29 * 0x18);
          dVar3 = *(double *)(lVar11 + 0x10 + uVar29 * 0x18);
          dVar17 = auVar6._8_8_;
          dVar36 = auVar7._8_8_;
          dVar33 = auVar8._8_8_;
          if (*(int *)((longlong)*(longlong **)this + 0x4c) == 1) {
            bVar18 = 0.0 < (dVar2 - dVar1) * (dVar33 - dVar17) - (dVar36 - dVar17) * (dVar3 - dVar1)
            ;
          }
          dVar4 = **(double **)((longlong)this + 0x30);
          dVar5 = **(double **)((longlong)this + 0x48);
          dVar37 = **(double **)((longlong)this + 0x38);
          dVar16 = (auVar8._0_8_ - dVar4) * dVar5;
          dVar38 = **(double **)((longlong)this + 0x40);
          dVar36 = (dVar36 - dVar37) * dVar5;
          dVar33 = (dVar33 - dVar37) * dVar5;
          iVar30 = **(int **)((longlong)this + 0x18) + -1;
          dVar17 = (dVar17 - dVar37) * dVar5;
          dVar2 = (dVar2 - dVar38) * dVar5;
          dVar1 = (dVar1 - dVar38) * dVar5;
          dVar37 = dVar36;
          if (dVar17 <= dVar36) {
            dVar37 = dVar17;
          }
          dVar3 = (dVar3 - dVar38) * dVar5;
          if (dVar33 <= dVar37) {
            dVar37 = dVar33;
          }
          dVar38 = dVar36;
          if (dVar36 <= dVar17) {
            dVar38 = dVar17;
          }
          if (dVar38 <= dVar33) {
            dVar38 = dVar33;
          }
          iVar21 = -((int)ROUND(__real_bfe0000000000000 - (dVar37 + dVar37)) >> 1);
          iVar22 = iVar30;
          if (iVar21 < iVar30) {
            iVar22 = iVar21;
          }
          iVar21 = 0;
          if (0 < iVar22) {
            iVar21 = iVar22;
          }
          iVar22 = (int)ROUND((dVar38 + dVar38) - __real_3fe0000000000000) >> 1;
          dVar37 = dVar2;
          if (dVar1 <= dVar2) {
            dVar37 = dVar1;
          }
          if (iVar22 < iVar30) {
            iVar30 = iVar22;
          }
          if (dVar3 <= dVar37) {
            dVar37 = dVar3;
          }
          iVar22 = 0;
          if (0 < iVar30) {
            iVar22 = iVar30;
          }
          iVar30 = **(int **)((longlong)this + 0x20) + -1;
          dVar38 = dVar2;
          if (dVar2 <= dVar1) {
            dVar38 = dVar1;
          }
          if (dVar38 <= dVar3) {
            dVar38 = dVar3;
          }
          iVar23 = -((int)ROUND(__real_bfe0000000000000 - (dVar37 + dVar37)) >> 1);
          iVar32 = iVar30;
          if (iVar23 < iVar30) {
            iVar32 = iVar23;
          }
          iVar23 = (int)ROUND((dVar38 + dVar38) - __real_3fe0000000000000) >> 1;
          if (iVar23 < iVar30) {
            iVar30 = iVar23;
          }
          iVar23 = 0;
          if (0 < iVar30) {
            iVar23 = iVar30;
          }
          iVar30 = 0;
          if (0 < iVar32) {
            iVar30 = iVar32;
          }
          for (; iVar30 <= iVar23; iVar30 = iVar30 + 1) {
            if (iVar21 <= iVar22) {
              dVar34 = (double)iVar30;
              dVar37 = dVar1 - dVar34;
              dVar38 = dVar2 - dVar34;
              dVar34 = dVar3 - dVar34;
              iVar32 = iVar21;
              do {
                dVar35 = (double)iVar32;
                dVar39 = dVar33 - dVar35;
                dVar40 = dVar36 - dVar35;
                dVar35 = dVar17 - dVar35;
                dVar41 = dVar39 * dVar38 - dVar40 * dVar34;
                if (dVar41 <= 0.0) {
                  if (dVar41 < 0.0) {
LAB_14c8a64b7:
                    iVar31 = -1;
                    goto LAB_14c8a64bc;
                  }
                  if (dVar38 < dVar34) {
                    iVar31 = 1;
                    goto LAB_14c8a64bc;
                  }
                  if (dVar34 < dVar38) goto LAB_14c8a64b7;
                  if (dVar39 < dVar40) {
                    iVar31 = 1;
                    goto LAB_14c8a64bc;
                  }
                  if (dVar40 < dVar39) goto LAB_14c8a64b7;
                }
                else {
                  iVar31 = 1;
LAB_14c8a64bc:
                  dVar15 = dVar35 * dVar34 - dVar37 * dVar39;
                  if (dVar15 <= 0.0) {
                    if (0.0 <= dVar15) {
                      if (dVar37 <= dVar34) {
                        if (dVar34 <= dVar37) {
                          if (dVar39 <= dVar35) {
                            iVar24 = (dVar35 <= dVar39) - 1;
                          }
                          else {
                            iVar24 = 1;
                          }
                        }
                        else {
                          iVar24 = -1;
                        }
                      }
                      else {
                        iVar24 = 1;
                      }
                    }
                    else {
                      iVar24 = -1;
                    }
                  }
                  else {
                    iVar24 = 1;
                  }
                  if (iVar24 == iVar31) {
                    dVar39 = dVar37 * dVar40 - dVar35 * dVar38;
                    if (dVar39 <= 0.0) {
                      if (0.0 <= dVar39) {
                        if (dVar38 <= dVar37) {
                          if (dVar37 <= dVar38) {
                            if (dVar35 <= dVar40) {
                              iVar24 = (dVar40 <= dVar35) - 1;
                            }
                            else {
                              iVar24 = 1;
                            }
                          }
                          else {
                            iVar24 = -1;
                          }
                        }
                        else {
                          iVar24 = 1;
                        }
                      }
                      else {
                        iVar24 = -1;
                      }
                    }
                    else {
                      iVar24 = 1;
                    }
                    if (iVar24 == iVar31) {
                      dVar35 = dVar41 + dVar15 + dVar39;
                      if ((dVar35 == 0.0) &&
                         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                             ("sum != 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\SweepingMeshSDF.h"
                                              ,0x4fa,
                                              L"TCachingMeshSDF::PointInTriangle2d: impossible config?"
                                             ), bVar20)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      dVar35 = __real_3ff0000000000000 / dVar35;
                      dVar41 = dVar35 * dVar15 * (auVar7._0_8_ - dVar4) * dVar5 +
                               dVar35 * dVar41 * (auVar6._0_8_ - dVar4) * dVar5;
                      iVar31 = -((int)ROUND(__real_bfe0000000000000 -
                                            ((dVar16 + dVar16) * dVar35 * dVar39 + dVar41 + dVar41))
                                >> 1);
                      if (iVar31 < 0) {
                        iVar31 = 0;
                      }
                      else if (**(int **)((longlong)this + 0x10) <= iVar31) goto LAB_14c8a663e;
                      piVar26 = UE::Geometry::TDenseGrid3<int>::At
                                          (*(TDenseGrid3<int> **)((longlong)this + 0x28),iVar31,
                                           iVar32,iVar30);
                      if (bVar18) {
                        LOCK();
                        *piVar26 = *piVar26 + -1;
                        UNLOCK();
                      }
                      else {
                        LOCK();
                        *piVar26 = *piVar26 + 1;
                        UNLOCK();
                      }
                    }
                  }
                }
LAB_14c8a663e:
                iVar32 = iVar32 + 1;
              } while (iVar32 <= iVar22);
            }
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c8a6710

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  undefined1 uVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong *plVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  TVector<double>_u_0 *pTVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  double dStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  float local_138;
  float local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  double local_120;
  undefined1 local_118 [16];
  TVector<double>_u_0 local_108;
  double local_f0;
  
  if (-1 < param_1) {
    plVar6 = *(longlong **)this;
    lVar7 = *plVar6;
    if ((param_1 < *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar7 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      if (param_1 == ((uint)param_1 / 100) * 100) {
        UE::Core::Private::Function::CheckCallable((void *)plVar6[0xc]);
        pcVar8 = (code *)plVar6[0xc];
        plVar25 = plVar6 + 0xe;
        if ((longlong *)plVar6[0x11] != (longlong *)0x0) {
          plVar25 = (longlong *)plVar6[0x11];
        }
        uVar20 = (**(code **)(*plVar25 + 8))();
        uVar16 = (*pcVar8)(uVar20);
        **(undefined1 **)((longlong)this + 0x78) = uVar16;
      }
      if (**(char **)((longlong)this + 0x78) == '\0') {
        dVar33 = *(double *)((longlong)this + 0x58);
        uVar21 = (ulonglong)(param_1 & 0x1ff);
        dVar40 = *(double *)((longlong)this + 0x40);
        dVar34 = *(double *)((longlong)this + 0x48);
        lVar7 = *(longlong *)(**(longlong **)this + 0x10);
        lVar9 = *(longlong *)
                 (*(longlong *)(**(longlong **)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
        uVar19 = *(uint *)(lVar9 + uVar21 * 0xc);
        uVar26 = (ulonglong)(uVar19 & 0x1ff);
        lVar10 = *(longlong *)(lVar7 + (ulonglong)(uVar19 >> 9) * 8);
        local_1d0._0_16_ = *(undefined1 (*) [16])(lVar10 + uVar26 * 0x18);
        uVar43 = local_1d0._0_4_;
        uVar44 = local_1d0._4_4_;
        dVar3 = *(double *)(lVar10 + 0x10 + uVar26 * 0x18);
        uVar19 = *(uint *)(lVar9 + 4 + uVar21 * 0xc);
        uVar26 = (ulonglong)(uVar19 & 0x1ff);
        local_118._8_4_ = local_1d0._8_4_;
        local_118._0_8_ = local_1d0._8_8_;
        local_118._12_4_ = local_1d0._12_4_;
        lVar10 = *(longlong *)(lVar7 + (ulonglong)(uVar19 >> 9) * 8);
        uVar19 = *(uint *)(lVar9 + 8 + uVar21 * 0xc);
        dVar36 = *(double *)((longlong)this + 0x50);
        pdVar1 = (double *)(lVar10 + uVar26 * 0x18);
        dVar14 = *pdVar1;
        local_1b8._s_0.Y = pdVar1[1];
        dVar4 = *(double *)(lVar10 + 0x10 + uVar26 * 0x18);
        uVar26 = (ulonglong)(uVar19 & 0x1ff);
        lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar19 >> 9) * 8);
        local_1a0._0_16_ = *(undefined1 (*) [16])(lVar7 + uVar26 * 0x18);
        uVar47 = local_1a0._0_4_;
        uVar48 = local_1a0._4_4_;
        uVar45 = local_1a0._8_4_;
        uVar46 = local_1a0._12_4_;
        dVar5 = *(double *)(lVar7 + 0x10 + uVar26 * 0x18);
        local_178 = SUB84(local_1b8._s_0.Y,0);
        uStack_174 = (undefined4)((ulonglong)local_1b8._s_0.Y >> 0x20);
        dVar35 = (local_1d0._0_8_ - dVar40) * dVar33;
        dVar39 = (local_1d0._8_8_ - dVar34) * dVar33;
        dVar13 = (dVar3 - dVar36) * dVar33;
        dVar37 = (dVar14 - dVar40) * dVar33;
        dVar38 = (local_1b8._s_0.Y - dVar34) * dVar33;
        dVar12 = (dVar4 - dVar36) * dVar33;
        iVar24 = *(int *)((longlong)this + 0x28);
        iVar27 = *(int *)((longlong)this + 0x14) + -1;
        dVar32 = (local_1a0._0_8_ - dVar40) * dVar33;
        local_168._8_4_ = uVar45;
        local_168._0_8_ = local_1a0._8_8_;
        local_168._12_4_ = uVar46;
        dVar40 = dVar37;
        if (dVar35 <= dVar37) {
          dVar40 = dVar35;
        }
        if (dVar37 <= dVar35) {
          dVar37 = dVar35;
        }
        dVar34 = (local_1a0._8_8_ - dVar34) * dVar33;
        dVar33 = (dVar5 - dVar36) * dVar33;
        if (dVar32 <= dVar40) {
          dVar40 = dVar32;
        }
        if (dVar37 <= dVar32) {
          dVar37 = dVar32;
        }
        dVar36 = dVar38;
        if (dVar38 <= dVar39) {
          dVar36 = dVar39;
        }
        if (dVar39 <= dVar38) {
          dVar38 = dVar39;
        }
        iVar22 = iVar27;
        if ((int)dVar40 - iVar24 < iVar27) {
          iVar22 = (int)dVar40 - iVar24;
        }
        if (dVar36 <= dVar34) {
          dVar36 = dVar34;
        }
        if (dVar34 <= dVar38) {
          dVar38 = dVar34;
        }
        local_130 = 0;
        if (0 < iVar22) {
          local_130 = iVar22;
        }
        iVar22 = iVar24 + 1 + (int)dVar37;
        if (iVar22 < iVar27) {
          iVar27 = iVar22;
        }
        iVar22 = 0;
        if (0 < iVar27) {
          iVar22 = iVar27;
        }
        iVar27 = *(int *)((longlong)this + 0x18) + -1;
        dVar40 = dVar12;
        if (dVar12 <= dVar13) {
          dVar40 = dVar13;
        }
        if (dVar13 <= dVar12) {
          dVar12 = dVar13;
        }
        iVar23 = iVar27;
        if ((int)dVar38 - iVar24 < iVar27) {
          iVar23 = (int)dVar38 - iVar24;
        }
        if (dVar40 <= dVar33) {
          dVar40 = dVar33;
        }
        local_128 = 0;
        if (0 < iVar23) {
          local_128 = iVar23;
        }
        if (dVar33 <= dVar12) {
          dVar12 = dVar33;
        }
        iVar23 = iVar24 + 1 + (int)dVar36;
        if (iVar23 < iVar27) {
          iVar27 = iVar23;
        }
        local_12c = 0;
        if (0 < iVar27) {
          local_12c = iVar27;
        }
        iVar23 = *(int *)((longlong)this + 0x1c) + -1;
        iVar27 = iVar23;
        if ((int)dVar12 - iVar24 < iVar23) {
          iVar27 = (int)dVar12 - iVar24;
        }
        iVar24 = iVar24 + 1 + (int)dVar40;
        if (iVar24 < iVar23) {
          iVar23 = iVar24;
        }
        local_124 = 0;
        if (0 < iVar23) {
          local_124 = iVar23;
        }
        iVar24 = 0;
        if (0 < iVar27) {
          iVar24 = iVar27;
        }
        local_1d0._s_0.Z = dVar3;
        local_1b8._s_0.X = dVar14;
        local_1b8._s_0.Z = dVar4;
        local_1a0._s_0.Z = dVar5;
        dStack_170 = local_1b8._s_0.Y;
        local_158 = local_1d0._0_16_;
        local_148 = local_1a0._0_16_;
        iVar27 = local_130;
        iVar23 = local_128;
        iVar28 = local_12c;
        iVar18 = local_124;
        if (iVar24 <= local_124) {
          do {
            iVar30 = iVar23;
            if (iVar23 <= iVar28) {
              do {
                iVar18 = *(int *)((longlong)this + 0x68);
                iVar30 = *(int *)((longlong)this + 100);
                iVar15 = iVar27;
                if (iVar27 <= iVar22) {
                  local_138 = (float)iVar24;
                  local_134 = (float)iVar23;
                  uVar41 = local_178;
                  uVar42 = uStack_174;
                  do {
                    fVar2 = *(float *)((longlong)this + 0x10);
                    dVar36 = (double)CONCAT44(uVar42,uVar41) - (double)CONCAT44(uVar46,uVar45);
                    pfVar11 = *(float **)((longlong)this + 8);
                    dVar40 = (double)local_118._0_8_ - (double)CONCAT44(uVar46,uVar45);
                    dVar38 = (double)CONCAT44(uVar44,uVar43) - (double)CONCAT44(uVar48,uVar47);
                    dVar39 = dVar4 - dVar5;
                    dVar35 = dVar3 - dVar5;
                    dVar12 = dVar14 - (double)CONCAT44(uVar48,uVar47);
                    local_108._s_0.Z = (double)(fVar2 * local_138 + pfVar11[2]);
                    local_188 = (double)(local_134 * fVar2 + pfVar11[1]);
                    local_120 = local_188 - (double)local_168._0_8_;
                    local_108._s_0.X = (double)((float)iVar27 * fVar2 + *pfVar11);
                    dVar34 = local_108._s_0.X - (double)CONCAT44(uVar48,uVar47);
                    dVar13 = dVar40 * dVar40 + dVar38 * dVar38 + dVar35 * dVar35;
                    dVar32 = dVar36 * dVar36 + dVar12 * dVar12 + dVar39 * dVar39;
                    dVar33 = dVar36 * dVar40 + dVar12 * dVar38 + dVar39 * dVar35;
                    dVar37 = dVar32 * dVar13 - dVar33 * dVar33;
                    if (dVar37 <= __real_39b4484bfeebc2a0) {
                      dVar37 = __real_39b4484bfeebc2a0;
                    }
                    dVar35 = local_120 * dVar40 + dVar34 * dVar38 +
                             (local_108._s_0.Z - dVar5) * dVar35;
                    dVar40 = local_120 * dVar36 + dVar34 * dVar12 +
                             (local_108._s_0.Z - dVar5) * dVar39;
                    dVar34 = (dVar40 * dVar13 - dVar35 * dVar33) *
                             (__real_3ff0000000000000 / dVar37);
                    dVar33 = (dVar35 * dVar32 - dVar40 * dVar33) *
                             (__real_3ff0000000000000 / dVar37);
                    dVar40 = (__real_3ff0000000000000 - dVar33) - dVar34;
                    local_108._s_0.Y = local_188;
                    local_f0 = local_108._s_0.Z;
                    if (dVar33 < 0.0) {
LAB_14c8a6fd5:
                      dVar33 = UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::
                               PointSegmentDistance
                                         ((TVector<double> *)&local_108._s_0,
                                          (TVector<double> *)&local_1b8._s_0,
                                          (TVector<double> *)&local_1a0._s_0);
                      pTVar31 = &local_1b8;
                      if (dVar34 <= 0.0) {
                        pTVar31 = &local_1a0;
                      }
                      dVar40 = UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::
                               PointSegmentDistance
                                         ((TVector<double> *)&local_108._s_0,
                                          (TVector<double> *)&local_1d0._s_0,
                                          (TVector<double> *)&pTVar31->_s_0);
                      uVar41 = SUB84(dVar40,0);
                      uVar42 = (int)((ulonglong)dVar40 >> 0x20);
                      if (dVar33 <= dVar40) {
                        uVar41 = SUB84(dVar33,0);
                        uVar42 = (int)((ulonglong)dVar33 >> 0x20);
                      }
                      uVar43 = local_158._0_4_;
                      uVar44 = local_158._4_4_;
                      uVar45 = local_168._0_4_;
                      uVar46 = local_168._4_4_;
                      uVar47 = local_148._0_4_;
                      uVar48 = local_148._4_4_;
                      dVar33 = (double)CONCAT44(uVar42,uVar41);
                    }
                    else {
                      uVar45 = local_168._0_4_;
                      uVar46 = local_168._4_4_;
                      uVar43 = local_158._0_4_;
                      uVar44 = local_158._4_4_;
                      dVar36 = local_158._0_8_;
                      uVar47 = local_148._0_4_;
                      uVar48 = local_148._4_4_;
                      dVar35 = local_148._0_8_;
                      if ((dVar34 < 0.0) || (dVar40 < 0.0)) {
                        if (dVar33 <= 0.0) goto LAB_14c8a6fd5;
                        dVar40 = dVar35 - dVar36;
                        dVar34 = (double)local_168._0_8_ - (double)local_118._0_8_;
                        dVar33 = dVar5 - dVar3;
                        dVar33 = ((dVar35 - local_108._s_0.X) * dVar40 +
                                  ((double)local_168._0_8_ - local_188) * dVar34 +
                                 (dVar5 - local_108._s_0.Z) * dVar33) /
                                 (dVar34 * dVar34 + dVar40 * dVar40 + dVar33 * dVar33);
                        if (0.0 <= dVar33) {
                          if (__real_3ff0000000000000 <= dVar33) {
                            dVar33 = __real_3ff0000000000000;
                          }
                        }
                        else {
                          dVar33 = 0.0;
                        }
                        dVar34 = __real_3ff0000000000000 - dVar33;
                        dVar38 = ((double)local_118._0_8_ * dVar33 +
                                 (double)local_168._0_8_ * dVar34) - local_188;
                        dVar35 = (dVar36 * dVar33 + dVar35 * dVar34) - local_108._s_0.X;
                        dVar40 = (double)CONCAT44(uStack_174,local_178);
                        dVar33 = (dVar3 * dVar33 + dVar5 * dVar34) - local_108._s_0.Z;
                        dVar39 = dVar14 - dVar36;
                        dVar34 = dVar4 - dVar3;
                        local_120 = SQRT(dVar35 * dVar35 + dVar38 * dVar38 + dVar33 * dVar33);
                        dVar33 = dVar40 - (double)local_118._0_8_;
                        dVar33 = ((dVar14 - local_108._s_0.X) * dVar39 +
                                  (dVar40 - local_188) * dVar33 +
                                 (dVar4 - local_108._s_0.Z) * dVar34) /
                                 (dVar33 * dVar33 + dVar39 * dVar39 + dVar34 * dVar34);
                        if (0.0 <= dVar33) {
                          if (__real_3ff0000000000000 <= dVar33) {
                            dVar33 = __real_3ff0000000000000;
                          }
                        }
                        else {
                          dVar33 = 0.0;
                        }
                        dVar34 = __real_3ff0000000000000 - dVar33;
                        dVar35 = ((double)local_118._0_8_ * dVar33 + dVar40 * dVar34) - local_188;
                        dVar40 = (dVar36 * dVar33 + dVar14 * dVar34) - local_108._s_0.X;
                        dVar33 = (dVar3 * dVar33 + dVar4 * dVar34) - local_108._s_0.Z;
                        dVar33 = SQRT(dVar40 * dVar40 + dVar35 * dVar35 + dVar33 * dVar33);
                        if (local_120 <= dVar33) {
                          dVar33 = local_120;
                        }
                      }
                      else {
                        dVar35 = (dVar14 * dVar34 + dVar36 * dVar33 + dVar35 * dVar40) -
                                 local_108._s_0.X;
                        dVar36 = ((double)CONCAT44(uStack_174,local_178) * dVar34 +
                                  (double)local_118._0_8_ * dVar33 +
                                 (double)local_168._0_8_ * dVar40) - local_188;
                        dVar33 = (dVar4 * dVar34 + dVar3 * dVar33 + dVar5 * dVar40) -
                                 local_108._s_0.Z;
                        dVar33 = SQRT(dVar36 * dVar36 + dVar35 * dVar35 + dVar33 * dVar33);
                      }
                    }
                    uVar42 = uStack_174;
                    uVar41 = local_178;
                    plVar6 = *(longlong **)((longlong)this + 0x20);
                    uVar29 = (iVar24 * *(int *)((longlong)plVar6 + 0x14) + iVar23) * (int)plVar6[2]
                             + iVar27;
                    uVar19 = 0;
                    if ((int)uVar29 < (int)plVar6[1]) {
                      uVar19 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar17)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if ((float)dVar33 < *(float *)(*plVar6 + (longlong)(int)uVar29 * 4)) {
                      uVar26 = 4;
                      if (iVar27 < *(int *)((longlong)this + 0x60)) {
                        uVar26 = 0;
                      }
                      uVar21 = 2;
                      if (iVar24 < iVar18) {
                        uVar21 = 0;
                      }
                      lpCriticalSection =
                           (LPCRITICAL_SECTION)
                           (*(longlong *)((longlong)this + 0x70) +
                           (uVar26 | uVar21 | (ulonglong)(iVar30 <= iVar23)) * 0x28);
                      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection(lpCriticalSection);
                      plVar6 = *(longlong **)((longlong)this + 0x20);
                      uVar29 = (iVar24 * *(int *)((longlong)plVar6 + 0x14) + iVar23) *
                               (int)plVar6[2] + iVar27;
                      uVar19 = 0;
                      if ((int)uVar29 < (int)plVar6[1]) {
                        uVar19 = ~uVar29 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      if ((float)dVar33 < *(float *)(*plVar6 + (longlong)(int)uVar29 * 4)) {
                        plVar6 = *(longlong **)((longlong)this + 0x20);
                        uVar29 = (iVar24 * *(int *)((longlong)plVar6 + 0x14) + iVar23) *
                                 (int)plVar6[2] + iVar27;
                        uVar19 = 0;
                        if ((int)uVar29 < (int)plVar6[1]) {
                          uVar19 = ~uVar29 >> 0x1f;
                        }
                        if ((uVar19 == 0) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar17)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        *(float *)(*plVar6 + (longlong)(int)uVar29 * 4) = (float)dVar33;
                        plVar6 = *(longlong **)((longlong)this + 0x30);
                        uVar29 = (iVar24 * *(int *)((longlong)plVar6 + 0x14) + iVar23) *
                                 (int)plVar6[2] + iVar27;
                        uVar19 = 0;
                        if ((int)uVar29 < (int)plVar6[1]) {
                          uVar19 = ~uVar29 >> 0x1f;
                        }
                        if ((uVar19 == 0) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar17)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        *(int *)(*plVar6 + (longlong)(int)uVar29 * 4) = param_1;
                      }
                      LeaveCriticalSection(lpCriticalSection);
                    }
                    iVar27 = iVar27 + 1;
                    iVar15 = local_130;
                    iVar28 = local_12c;
                  } while (iVar27 <= iVar22);
                }
                iVar27 = iVar15;
                iVar23 = iVar23 + 1;
                iVar30 = local_128;
                iVar18 = local_124;
              } while (iVar23 <= iVar28);
            }
            iVar24 = iVar24 + 1;
            iVar23 = iVar30;
          } while (iVar24 <= iVar18);
        }
      }
    }
  }
  return;
}

// operator() @ 14c8a7500

FWindowsRecursiveMutex * __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill'
::__l2::<lambda_1>::operator()(void *this,FVector3i *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FWindowsRecursiveMutex *pFVar4;
  uint uVar5;
  uint uVar6;
  
  plVar1 = *(longlong **)((longlong)this + 0x18);
  uVar6 = (uint)((longlong)
                 ((*(int *)(*(longlong *)((longlong)this + 0x10) + 0x14) *
                   (param_1->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Y) *
                  *(int *)(*(longlong *)((longlong)this + 0x10) + 0x10) +
                 (param_1->field0_0x0)._s_0.X) / *(longlong *)((longlong)this + 8));
  uVar5 = 0;
  if ((int)uVar6 < (int)plVar1[1]) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWindowsRecursiveMutex *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FWindowsRecursiveMutex *)(*plVar1 + (longlong)(int)uVar6 * 0x28);
}

// operator() @ 14c8a75a0

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_spatial'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  undefined1 uVar16;
  bool bVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  
  if (-1 < param_1) {
    plVar6 = *(longlong **)this;
    lVar7 = *plVar6;
    if ((param_1 < *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar7 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      if (param_1 == ((uint)param_1 / 100) * 100) {
        UE::Core::Private::Function::CheckCallable((void *)plVar6[0xc]);
        pcVar8 = (code *)plVar6[0xc];
        plVar23 = plVar6 + 0xe;
        if ((longlong *)plVar6[0x11] != (longlong *)0x0) {
          plVar23 = (longlong *)plVar6[0x11];
        }
        uVar19 = (**(code **)(*plVar23 + 8))();
        uVar16 = (*pcVar8)(uVar19);
        **(undefined1 **)((longlong)this + 0x60) = uVar16;
      }
      if (**(char **)((longlong)this + 0x60) == '\0') {
        dVar3 = *(double *)((longlong)this + 0x58);
        uVar26 = (ulonglong)(param_1 & 0x1ff);
        dVar4 = *(double *)((longlong)this + 0x50);
        dVar33 = *(double *)((longlong)this + 0x40);
        dVar5 = *(double *)((longlong)this + 0x48);
        lVar7 = *(longlong *)(**(longlong **)this + 0x10);
        lVar9 = *(longlong *)
                 (*(longlong *)(**(longlong **)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
        uVar18 = *(uint *)(lVar9 + uVar26 * 0xc);
        uVar24 = (ulonglong)(uVar18 & 0x1ff);
        lVar10 = *(longlong *)(lVar7 + (ulonglong)(uVar18 >> 9) * 8);
        pdVar1 = (double *)(lVar10 + uVar24 * 0x18);
        uVar18 = *(uint *)(lVar9 + 4 + uVar26 * 0xc);
        uVar25 = (ulonglong)(uVar18 & 0x1ff);
        lVar11 = *(longlong *)(lVar7 + (ulonglong)(uVar18 >> 9) * 8);
        uVar18 = *(uint *)(lVar9 + 8 + uVar26 * 0xc);
        iVar22 = *(int *)((longlong)this + 0x28);
        pdVar2 = (double *)(lVar11 + uVar25 * 0x18);
        uVar26 = (ulonglong)(uVar18 & 0x1ff);
        lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar18 >> 9) * 8);
        dVar12 = (*pdVar1 - dVar33) * dVar3;
        dVar13 = (pdVar1[1] - dVar5) * dVar3;
        pdVar1 = (double *)(lVar7 + uVar26 * 0x18);
        iVar27 = *(int *)((longlong)this + 0x14) + -1;
        dVar36 = (*pdVar2 - dVar33) * dVar3;
        dVar14 = (*(double *)(lVar10 + 0x10 + uVar24 * 0x18) - dVar4) * dVar3;
        dVar35 = (*pdVar1 - dVar33) * dVar3;
        dVar33 = (pdVar2[1] - dVar5) * dVar3;
        dVar32 = dVar36;
        if (dVar12 <= dVar36) {
          dVar32 = dVar12;
        }
        dVar34 = (*(double *)(lVar11 + 0x10 + uVar25 * 0x18) - dVar4) * dVar3;
        dVar5 = (pdVar1[1] - dVar5) * dVar3;
        dVar3 = (*(double *)(lVar7 + 0x10 + uVar26 * 0x18) - dVar4) * dVar3;
        if (dVar35 <= dVar32) {
          dVar32 = dVar35;
        }
        if (dVar36 <= dVar12) {
          dVar36 = dVar12;
        }
        dVar4 = dVar33;
        if (dVar33 <= dVar13) {
          dVar4 = dVar13;
        }
        if (dVar36 <= dVar35) {
          dVar36 = dVar35;
        }
        if (dVar13 <= dVar33) {
          dVar33 = dVar13;
        }
        iVar20 = iVar27;
        if ((int)dVar32 - iVar22 < iVar27) {
          iVar20 = (int)dVar32 - iVar22;
        }
        if (dVar4 <= dVar5) {
          dVar4 = dVar5;
        }
        iVar31 = 0;
        if (0 < iVar20) {
          iVar31 = iVar20;
        }
        if (dVar5 <= dVar33) {
          dVar33 = dVar5;
        }
        iVar20 = iVar22 + 1 + (int)dVar36;
        if (iVar20 < iVar27) {
          iVar27 = iVar20;
        }
        iVar20 = 0;
        if (0 < iVar27) {
          iVar20 = iVar27;
        }
        iVar27 = *(int *)((longlong)this + 0x18) + -1;
        dVar5 = dVar34;
        if (dVar34 <= dVar14) {
          dVar5 = dVar14;
        }
        if (dVar14 <= dVar34) {
          dVar34 = dVar14;
        }
        iVar21 = iVar27;
        if ((int)dVar33 - iVar22 < iVar27) {
          iVar21 = (int)dVar33 - iVar22;
        }
        if (dVar5 <= dVar3) {
          dVar5 = dVar3;
        }
        iVar30 = 0;
        if (0 < iVar21) {
          iVar30 = iVar21;
        }
        if (dVar3 <= dVar34) {
          dVar34 = dVar3;
        }
        iVar21 = iVar22 + 1 + (int)dVar4;
        if (iVar21 < iVar27) {
          iVar27 = iVar21;
        }
        iVar21 = 0;
        if (0 < iVar27) {
          iVar21 = iVar27;
        }
        iVar29 = *(int *)((longlong)this + 0x1c) + -1;
        iVar27 = iVar29;
        if ((int)dVar34 - iVar22 < iVar29) {
          iVar27 = (int)dVar34 - iVar22;
        }
        iVar22 = iVar22 + 1 + (int)dVar5;
        if (iVar22 < iVar29) {
          iVar29 = iVar22;
        }
        iVar22 = 0;
        if (0 < iVar29) {
          iVar22 = iVar29;
        }
        iVar29 = 0;
        if (0 < iVar27) {
          iVar29 = iVar27;
        }
        for (; iVar27 = iVar30, iVar29 <= iVar22; iVar29 = iVar29 + 1) {
          for (; iVar15 = iVar31, iVar27 <= iVar21; iVar27 = iVar27 + 1) {
            for (; iVar15 <= iVar20; iVar15 = iVar15 + 1) {
              plVar6 = *(longlong **)((longlong)this + 0x20);
              uVar28 = (iVar29 * *(int *)((longlong)plVar6 + 0x14) + iVar27) * (int)plVar6[2] +
                       iVar15;
              uVar18 = 0;
              if ((int)uVar28 < (int)plVar6[1]) {
                uVar18 = ~uVar28 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined4 *)(*plVar6 + (longlong)(int)uVar28 * 4) = 0x3f800000;
            }
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c8a85b0

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::compute_signs'::__l5::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  lVar1 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x60));
  pcVar2 = *(code **)(lVar1 + 0x60);
  plVar9 = (longlong *)(lVar1 + 0x70);
  if (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0) {
    plVar9 = *(longlong **)(lVar1 + 0x88);
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  cVar5 = (*pcVar2)(uVar8);
  uVar4 = __xmm_80000000800000008000000080000000;
  if (cVar5 == '\0') {
    uVar11 = 0;
    iVar10 = 0;
    iVar14 = param_1 / **(int **)((longlong)this + 0x10);
    iVar15 = param_1 % **(int **)((longlong)this + 0x10);
    if (0 < **(int **)((longlong)this + 8)) {
      do {
        plVar9 = *(longlong **)((longlong)this + 0x28);
        uVar12 = (iVar14 * *(int *)((longlong)plVar9 + 0x14) + iVar15) * (int)plVar9[2] + iVar10;
        uVar7 = 0;
        if ((int)uVar12 < (int)plVar9[1]) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = uVar11 + *(int *)(*plVar9 + (longlong)(int)uVar12 * 4);
        if (*(int *)(*(longlong *)this + 0x4c) == 1) {
          if (0 < (int)uVar11) {
LAB_14c8a86db:
            plVar9 = *(longlong **)((longlong)this + 0x20);
            uVar12 = (iVar14 * *(int *)((longlong)plVar9 + 0x14) + iVar15) * (int)plVar9[2] + iVar10
            ;
            uVar7 = 0;
            if ((int)uVar12 < (int)plVar9[1]) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            plVar3 = *(longlong **)((longlong)this + 0x20);
            uVar7 = *(uint *)(*plVar9 + (longlong)(int)uVar12 * 4);
            uVar13 = (iVar14 * *(int *)((longlong)plVar3 + 0x14) + iVar15) * (int)plVar3[2] + iVar10
            ;
            uVar12 = 0;
            if ((int)uVar13 < (int)plVar3[1]) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(uint *)(*plVar3 + (longlong)(int)uVar13 * 4) = uVar7 ^ uVar4;
          }
        }
        else if (*(int *)(*(longlong *)this + 0x4c) == 0) {
          uVar7 = uVar11 & 0x80000001;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
          }
          if (uVar7 == 1) goto LAB_14c8a86db;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < **(int **)((longlong)this + 8));
    }
  }
  return;
}

// operator() @ 14c8ad8c0

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill'
::__l2::<lambda_2>::operator()(void *this,long64 param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  undefined4 local_18 [4];
  
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar7 = (uint)(param_1 / *(longlong *)this);
  uVar6 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = (ForAnyElementType *)((longlong)(int)uVar7 * 0x10 + *plVar2);
  local_18[0] = (undefined4)param_1;
  if ((pFVar8->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar8[1].Data;
  piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar8,piVar1);
  }
  *(int *)&pFVar8[1].Data = iVar5 + 1;
  *(undefined4 *)(pFVar8->Data + (longlong)iVar5 * 4) = local_18[0];
  return;
}

// operator() @ 14c8ad9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_spatial'::
__l2::<lambda_2>::operator()(void *this,int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98 [2];
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  plVar9 = *(longlong **)((longlong)this + 0x20);
  iVar11 = *(int *)(*(longlong *)this + 0xb0);
  iVar7 = *(int *)(*(longlong *)this + 0xb4);
  iVar12 = param_1 % iVar11;
  iVar6 = param_1 / (iVar7 * iVar11);
  iVar11 = (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar11) >> 0x1f) << 0x20 |
                 (longlong)param_1 / (longlong)iVar11 & 0xffffffffU) % (longlong)iVar7);
  uVar10 = (iVar6 * *(int *)((longlong)plVar9 + 0x14) + iVar11) * (int)plVar9[2] + iVar12;
  uVar8 = 0;
  if ((int)uVar10 < (int)plVar9[1]) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_c8 = (longlong)(int)uVar10;
    local_c0 = (longlong)(int)plVar9[1];
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (__real_3f800000 == *(float *)(*plVar9 + (longlong)(int)uVar10 * 4)) {
    pfVar3 = *(float **)((longlong)this + 8);
    fVar1 = *(float *)((longlong)this + 0x10);
    local_a0 = (double)((float)iVar6 * fVar1 + pfVar3[2]);
    local_a8 = (double)((float)iVar11 * fVar1 + pfVar3[1]);
    local_b0 = (double)((float)iVar12 * fVar1 + *pfVar3);
    local_98[0] = *(undefined8 *)((longlong)this + 0x28);
    local_88 = 0;
    local_60 = (longlong *)0x0;
    local_58 = 0;
    iVar7 = (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x20))
                      (*(longlong **)(*(longlong *)this + 8),&local_b0,&local_b8,local_98);
    if (local_88 != 0) {
      plVar9 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar9 = local_60;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (iVar7 == -1) {
      uVar2 = *(undefined4 *)((longlong)this + 0x30);
      plVar9 = *(longlong **)((longlong)this + 0x20);
      local_c0 = (longlong)(int)plVar9[1];
      uVar10 = (iVar6 * *(int *)((longlong)plVar9 + 0x14) + iVar11) * (int)plVar9[2] + iVar12;
      uVar8 = 0;
      if ((int)uVar10 < (int)plVar9[1]) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_c8 = (longlong)(int)uVar10;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(undefined4 *)(*plVar9 + (longlong)(int)uVar10 * 4) = uVar2;
    }
    else {
      plVar9 = *(longlong **)((longlong)this + 0x20);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_b8;
      auVar13 = sqrtpd(auVar13,auVar13);
      local_c0 = (longlong)(int)plVar9[1];
      uVar10 = (iVar6 * *(int *)((longlong)plVar9 + 0x14) + iVar11) * (int)plVar9[2] + iVar12;
      uVar8 = 0;
      if ((int)uVar10 < (int)plVar9[1]) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_c8 = (longlong)(int)uVar10;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(float *)(*plVar9 + (longlong)(int)uVar10 * 4) = (float)auVar13._0_8_;
      plVar9 = *(longlong **)((longlong)this + 0x38);
      local_c0 = (longlong)(int)plVar9[1];
      uVar10 = (iVar6 * *(int *)((longlong)plVar9 + 0x14) + iVar11) * (int)plVar9[2] + iVar12;
      uVar8 = 0;
      if ((int)uVar10 < (int)plVar9[1]) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_c8 = (longlong)(int)uVar10;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(int *)(*plVar9 + (longlong)(int)uVar10 * 4) = iVar7;
    }
  }
  return;
}

// operator() @ 14c8b0ab0

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill'
::__l2::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ForAnyElementType *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 local_48 [4];
  
  pFVar10 = *(ForAnyElementType **)this;
  iVar3 = *(int *)((longlong)&pFVar10[1].Data + 4);
  *(undefined4 *)&pFVar10[1].Data = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar10,0,(int *)((longlong)&pFVar10[1].Data + 4));
  }
  plVar4 = *(longlong **)((longlong)this + 8);
  local_res18 = *(uint *)(plVar4 + 1);
  uVar9 = (ulonglong)(int)local_res18;
  pFVar10 = (ForAnyElementType *)*plVar4;
  pFVar12 = pFVar10 + uVar9 * 2;
  while( true ) {
    if ((int)plVar4[1] != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar12) break;
    pFVar11 = pFVar10->Data;
    iVar3 = *(int *)&pFVar10[1].Data;
    pFVar2 = pFVar11 + (longlong)iVar3 * 4;
    while( true ) {
      if (*(int *)&pFVar10[1].Data != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar2) break;
      local_48[0] = *(undefined4 *)pFVar11;
      pFVar5 = *(ForAnyElementType **)this;
      if ((pFVar5->Data <= (FScriptContainerElement *)local_48) &&
         ((FScriptContainerElement *)local_48 <
          pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar8 + 1;
      pFVar11 = pFVar11 + 4;
      *(undefined4 *)(pFVar5->Data + (longlong)iVar8 * 4) = local_48[0];
    }
    iVar3 = *(int *)((longlong)&pFVar10[1].Data + 4);
    *(undefined4 *)&pFVar10[1].Data = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,pFVar10,0,(int *)((longlong)&pFVar10[1].Data + 4));
    }
    uVar9 = (ulonglong)local_res18;
    pFVar10 = pFVar10 + 2;
  }
  return;
}

// operator() @ 14c8b1d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill'
::__l3::<lambda_4>::operator()(void *this,int param_1)

{
  double *pdVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  FVector3i_u_0 local_c8;
  ulonglong local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98 [2];
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  if (-1 < param_1) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
    plVar18 = *(longlong **)this;
    lVar14 = *plVar18;
    if ((param_1 < *(int *)(lVar14 + 0x20) * 0x200 + *(int *)(lVar14 + 0x24)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar14 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      if (param_1 == ((uint)param_1 / 100) * 100) {
        UE::Core::Private::Function::CheckCallable((void *)plVar18[0xc]);
        pcVar6 = (code *)plVar18[0xc];
        plVar13 = plVar18 + 0xe;
        if ((longlong *)plVar18[0x11] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar18[0x11];
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        uVar7 = (*pcVar6)(uVar12);
        **(undefined1 **)((longlong)this + 8) = uVar7;
      }
      if (**(char **)((longlong)this + 8) == '\0') {
        lVar14 = *(longlong *)
                  (*(longlong *)(**(longlong **)this + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar1 = (double *)(lVar14 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        local_a0 = *(double *)(lVar14 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        uVar17 = **(int **)((longlong)this + 0x40) - 1;
        dVar4 = **(double **)((longlong)this + 0x18);
        uVar9 = (uint)((local_a0 - **(double **)((longlong)this + 0x28)) * dVar4);
        if ((int)uVar9 < (int)uVar17) {
          uVar17 = uVar9;
        }
        uVar9 = **(int **)((longlong)this + 0x38) - 1;
        uVar10 = (uint)((pdVar1[1] - **(double **)((longlong)this + 0x20)) * dVar4);
        if ((int)uVar10 < (int)uVar9) {
          uVar9 = uVar10;
        }
        uVar10 = **(int **)((longlong)this + 0x30) - 1;
        uVar11 = (uint)((*pdVar1 - **(double **)((longlong)this + 0x10)) * dVar4);
        if ((int)uVar11 < (int)uVar10) {
          uVar10 = uVar11;
        }
        uVar16 = 0;
        uVar11 = uVar16;
        if (0 < (int)uVar10) {
          uVar11 = uVar10;
        }
        uVar10 = uVar16;
        if (0 < (int)uVar9) {
          uVar10 = uVar9;
        }
        uVar9 = uVar16;
        if (0 < (int)uVar17) {
          uVar9 = uVar17;
        }
        local_c8._s_0.X = uVar11;
        local_c8._s_0.Y = uVar10;
        local_c8._s_0.Z = uVar9;
        lpCriticalSection =
             (LPCRITICAL_SECTION)
             make_level_set3_parallel_floodfill'::__l2::<lambda_1>::operator()
                       (*(void **)((longlong)this + 0x48),(FVector3i *)&local_c8._s_0);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        plVar18 = *(longlong **)((longlong)this + 0x50);
        uVar15 = (uVar9 * *(int *)((longlong)plVar18 + 0x14) + uVar10) * (int)plVar18[2] + uVar11;
        uVar17 = uVar16;
        if ((int)uVar15 < (int)plVar18[1]) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_e8 = (longlong)(int)uVar15;
          local_e0 = (longlong)(int)plVar18[1];
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pfVar2 = (float *)(*plVar18 + (longlong)(int)uVar15 * 4);
        if (**(float **)((longlong)this + 0x58) < *pfVar2 ||
            **(float **)((longlong)this + 0x58) == *pfVar2) {
          lVar14 = *(longlong *)this;
          fVar3 = *(float *)(lVar14 + 0x10);
          local_b0 = (double)((float)(int)uVar11 * fVar3 + *(float *)(lVar14 + 0x90));
          local_a0 = (double)((float)(int)uVar9 * fVar3 + *(float *)(lVar14 + 0x98));
          local_a8 = (double)((float)(int)uVar10 * fVar3 + *(float *)(lVar14 + 0x94));
          local_98[0] = __real_7fefffffffffffff;
          local_88 = 0;
          local_60 = (longlong *)0x0;
          local_58 = 0;
          local_d8 = (**(code **)(**(longlong **)(lVar14 + 8) + 0x20))
                               (*(longlong **)(lVar14 + 8),&local_b0,&local_b8,local_98);
          if (local_88 != 0) {
            plVar18 = local_78;
            if (local_60 != (longlong *)0x0) {
              plVar18 = local_60;
            }
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
          plVar18 = *(longlong **)((longlong)this + 0x50);
          auVar19._8_8_ = 0;
          auVar19._0_8_ = local_b8;
          auVar19 = sqrtpd(auVar19,auVar19);
          uVar15 = (uVar9 * *(int *)((longlong)plVar18 + 0x14) + uVar10) * (int)plVar18[2] + uVar11;
          uVar17 = uVar16;
          if ((int)uVar15 < (int)plVar18[1]) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if (uVar17 == 0) {
            local_e8 = (longlong)(int)uVar15;
            local_e0 = (longlong)(int)plVar18[1];
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          plVar13 = *(longlong **)((longlong)this + 0x60);
          *(float *)(*plVar18 + (longlong)(int)uVar15 * 4) = (float)auVar19._0_8_;
          uVar15 = (uVar9 * *(int *)((longlong)plVar13 + 0x14) + uVar10) * (int)plVar13[2] + uVar11;
          uVar17 = uVar16;
          if ((int)uVar15 < (int)plVar13[1]) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if (uVar17 == 0) {
            local_e8 = (longlong)(int)uVar15;
            local_e0 = (longlong)(int)plVar13[1];
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          *(undefined4 *)(*plVar13 + (longlong)(int)uVar15 * 4) = local_d8;
          uVar11 = (uVar10 + uVar9 * *(int *)(*(longlong *)((longlong)this + 0x50) + 0x14)) *
                   *(int *)(*(longlong *)((longlong)this + 0x50) + 0x10) + uVar11;
          plVar18 = *(longlong **)((longlong)this + 0x68);
          iVar5 = (int)plVar18[1];
          uVar17 = uVar16;
          if ((int)uVar11 < iVar5) {
            uVar17 = ~uVar11 >> 0x1f;
          }
          if (uVar17 == 0) {
            local_e8 = (longlong)(int)uVar11;
            local_e0 = (longlong)iVar5;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          lVar14 = (longlong)(int)uVar11;
          if (*(char *)(lVar14 + *plVar18) == '\0') {
            plVar18 = *(longlong **)((longlong)this + 0x68);
            iVar5 = (int)plVar18[1];
            if ((int)uVar11 < iVar5) {
              uVar16 = ~uVar11 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (local_e8 = lVar14, local_e0 = (longlong)iVar5,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined1 *)(lVar14 + *plVar18) = 1;
            make_level_set3_parallel_floodfill'::__l2::<lambda_2>::operator()
                      (*(void **)((longlong)this + 0x70),lVar14);
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return;
}

// operator() @ 14c8b3370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill'
::__l9::<lambda_5>::operator()(void *this,int param_1)

{
  float fVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  int local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  FVector3i *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_a8 [2];
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  plVar10 = *(longlong **)this;
  iVar11 = (int)plVar10[1];
  uVar8 = 0;
  if (param_1 < iVar11) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_108 = (longlong)param_1;
    local_100 = (longlong)iVar11;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar14 = *(longlong *)((longlong)this + 8);
  iVar11 = *(int *)(*plVar10 + (longlong)param_1 * 4);
  uVar15 = (longlong)iVar11 / (longlong)*(int *)(lVar14 + 0x10);
  uVar16 = (longlong)iVar11 % (longlong)*(int *)(lVar14 + 0x10);
  local_f4 = (uint)uVar16;
  uVar16 = uVar16 & 0xffffffff;
  uVar12 = (longlong)((ulonglong)(uint)((int)uVar15 >> 0x1f) << 0x20 | uVar15 & 0xffffffff) %
           (longlong)*(int *)(lVar14 + 0x14);
  local_f0 = (uint)uVar12;
  uVar12 = uVar12 & 0xffffffff;
  uVar15 = (longlong)iVar11 / (longlong)(*(int *)(lVar14 + 0x14) * *(int *)(lVar14 + 0x10));
  local_ec = (uint)uVar15;
  uVar15 = uVar15 & 0xffffffff;
  local_e8 = IndexUtil::GridOffsets26;
  do {
    local_d8 = *(undefined8 *)&local_e8->field0_0x0;
    piVar2 = *(int **)((longlong)this + 0x10);
    iVar17 = (int)local_d8 + (int)uVar16;
    iVar19 = (int)((ulonglong)local_d8 >> 0x20) + (int)uVar12;
    iVar11 = (int)uVar15 + (local_e8->field0_0x0)._s_0.Z;
    if ((((*piVar2 <= iVar17) && (piVar2[1] <= iVar19)) && (piVar2[2] <= iVar11)) &&
       (((iVar17 <= piVar2[3] && (iVar19 <= piVar2[4])) && (iVar11 <= piVar2[5])))) {
      plVar10 = *(longlong **)((longlong)this + 0x18);
      iVar7 = (int)plVar10[1];
      uVar13 = (iVar11 * *(int *)(*(longlong *)((longlong)this + 8) + 0x14) + iVar19) *
               *(int *)(*(longlong *)((longlong)this + 8) + 0x10) + iVar17;
      uVar18 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < iVar7) {
        uVar8 = uVar18;
      }
      if (uVar8 == 0) {
        local_108 = (longlong)(int)uVar13;
        local_100 = (longlong)iVar7;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar14 = (longlong)(int)uVar13;
      if (*(char *)(lVar14 + *plVar10) == '\0') {
        lVar3 = *(longlong *)((longlong)this + 0x20);
        fVar1 = *(float *)(lVar3 + 0x10);
        local_c8 = (double)((float)iVar17 * fVar1 + *(float *)(lVar3 + 0x90));
        local_b8 = (double)((float)iVar11 * fVar1 + *(float *)(lVar3 + 0x98));
        local_c0 = (double)((float)iVar19 * fVar1 + *(float *)(lVar3 + 0x94));
        local_a8[0] = **(undefined8 **)((longlong)this + 0x28);
        local_98 = 0;
        local_70 = (longlong *)0x0;
        local_68 = 0;
        iVar7 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x20))
                          (*(longlong **)(lVar3 + 8),&local_c8,&local_e0,local_a8);
        local_f8 = iVar7;
        if (local_98 != 0) {
          plVar10 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar10 = local_70;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        lVar3 = *(longlong *)((longlong)this + 0x30);
        uVar8 = (uint)((longlong)
                       (iVar17 + (iVar11 * *(int *)(*(longlong *)(lVar3 + 0x10) + 0x14) + iVar19) *
                                 *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10)) /
                      *(longlong *)(lVar3 + 8));
        plVar10 = *(longlong **)(lVar3 + 0x18);
        iVar11 = (int)plVar10[1];
        if (iVar7 == -1) {
          uVar9 = 0;
          if ((int)uVar8 < iVar11) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_108 = (longlong)(int)uVar8;
            local_100 = (longlong)iVar11;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          lpCriticalSection = (LPCRITICAL_SECTION)(*plVar10 + (longlong)(int)uVar8 * 0x28);
          if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
LAB_14c8b3924:
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection(lpCriticalSection);
          plVar10 = *(longlong **)((longlong)this + 0x18);
          iVar11 = (int)plVar10[1];
          uVar8 = 0;
          if ((int)uVar13 < iVar11) {
            uVar8 = uVar18;
          }
          if (uVar8 == 0) {
            local_108 = lVar14;
            local_100 = (longlong)iVar11;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          *(undefined1 *)(lVar14 + *plVar10) = 1;
        }
        else {
          auVar20._8_8_ = 0;
          auVar20._0_8_ = local_e0;
          auVar20 = sqrtpd(auVar20,auVar20);
          uVar9 = 0;
          if ((int)uVar8 < iVar11) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_108 = (longlong)(int)uVar8;
            local_100 = (longlong)iVar11;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          lpCriticalSection = (LPCRITICAL_SECTION)(*plVar10 + (longlong)(int)uVar8 * 0x28);
          if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_14c8b3924;
          EnterCriticalSection(lpCriticalSection);
          plVar10 = *(longlong **)((longlong)this + 0x18);
          iVar11 = (int)plVar10[1];
          uVar8 = 0;
          if ((int)uVar13 < iVar11) {
            uVar8 = uVar18;
          }
          if (uVar8 == 0) {
            local_108 = lVar14;
            local_100 = (longlong)iVar11;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(char *)(lVar14 + *plVar10) == '\0') {
            plVar10 = *(longlong **)((longlong)this + 8);
            iVar11 = (int)plVar10[1];
            uVar8 = 0;
            if ((int)uVar13 < iVar11) {
              uVar8 = uVar18;
            }
            if (uVar8 == 0) {
              local_108 = lVar14;
              local_100 = (longlong)iVar11;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar4 = *(longlong **)((longlong)this + 0x38);
            *(float *)(*plVar10 + lVar14 * 4) = (float)auVar20._0_8_;
            iVar11 = (int)plVar4[1];
            uVar8 = 0;
            if ((int)uVar13 < iVar11) {
              uVar8 = uVar18;
            }
            if (uVar8 == 0) {
              local_108 = lVar14;
              local_100 = (longlong)iVar11;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            *(int *)(*plVar4 + lVar14 * 4) = local_f8;
            plVar10 = *(longlong **)((longlong)this + 0x18);
            iVar11 = (int)plVar10[1];
            uVar8 = 0;
            if ((int)uVar13 < iVar11) {
              uVar8 = uVar18;
            }
            if (uVar8 == 0) {
              local_108 = lVar14;
              local_100 = (longlong)iVar11;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            *(undefined1 *)(lVar14 + *plVar10) = 1;
            if (auVar20._0_8_ < **(double **)((longlong)this + 0x40)) {
              make_level_set3_parallel_floodfill'::__l2::<lambda_2>::operator()
                        (*(void **)((longlong)this + 0x48),lVar14);
            }
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    local_e8 = local_e8 + 1;
    if (local_e8 == (FVector3i *)&DAT_150aa30e8) {
      return;
    }
    uVar16 = (ulonglong)local_f4;
    uVar12 = (ulonglong)local_f0;
    uVar15 = (ulonglong)local_ec;
  } while( true );
}

// Compute @ 14c8c8f70

bool __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TAxisAlignedBox3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  atomic<unsigned_char> *paVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FVector3i_u_0 local_b8;
  TVector<float>_u_0 local_a8;
  double local_98 [18];
  
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  if ((((param_1->Min).field0_0x0._s_0.X <= dVar1) &&
      (dVar2 = (param_1->Max).field0_0x0._s_0.Y, (param_1->Min).field0_0x0._s_0.Y <= dVar2)) &&
     (dVar3 = (param_1->Max).field0_0x0._s_0.Z, (param_1->Min).field0_0x0._s_0.Z <= dVar3)) {
    dVar2 = dVar2 - (param_1->Min).field0_0x0._s_0.Y;
    dVar3 = dVar3 - (param_1->Min).field0_0x0._s_0.Z;
    dVar6 = dVar1 - (param_1->Min).field0_0x0._s_0.X;
    dVar4 = dVar2;
    if (dVar2 <= 0.0) {
      dVar4 = 0.0;
    }
    dVar14 = dVar3;
    if (dVar3 <= 0.0) {
      dVar14 = 0.0;
    }
    dVar17 = dVar6;
    if (dVar6 <= 0.0) {
      dVar17 = 0.0;
    }
    if (dVar14 <= dVar4) {
      dVar14 = dVar4;
    }
    if (dVar14 <= dVar17) {
      dVar14 = dVar17;
    }
    iVar9 = _finite(dVar14);
    if (((iVar9 != 0) && (0.0 < this->CellSize)) &&
       ((iVar9 = _finite((double)this->CellSize), iVar9 != 0 &&
        (4 < this->ApproxMaxCellsPerDimension)))) {
      if (this->ApproxMaxCellsPerDimension <= this->ExactBandWidth * 2) {
        local_res10[0] = 0;
        bVar7 = `UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute'::__l6::
                <lambda_1>::operator()(local_res10);
        if (!bVar7) {
          iVar9 = this->ApproxMaxCellsPerDimension / 2 + -1;
          iVar10 = 1;
          if (1 < iVar9) {
            iVar10 = iVar9;
          }
          this->ExactBandWidth = iVar10;
        }
      }
      dVar4 = (this->ExpandBounds).field0_0x0._s_0.X;
      dVar14 = (this->ExpandBounds).field0_0x0._s_0.Y;
      dVar17 = (this->ExpandBounds).field0_0x0._s_0.Z;
      local_98[2] = __real_3ff0000000000000 / (double)this->CellSize;
      local_98[3] = dVar4 + dVar4 + dVar6;
      local_98[4] = dVar14 + dVar14 + dVar2;
      local_98[5] = dVar17 + dVar17 + dVar3;
      local_98[0] = local_98[3] * local_98[2];
      local_98[1] = local_98[4] * local_98[2];
      local_98[2] = local_98[5] * local_98[2];
      if (local_98[0] < local_98[1]) {
        uVar11 = (local_98[1] < local_98[2]) + 1;
      }
      else {
        uVar11 = 2;
        if (local_98[2] <= local_98[0]) {
          uVar11 = 0;
        }
      }
      if (local_98[uVar11] <= (double)(this->ApproxMaxCellsPerDimension + this->ExactBandWidth * -2)
         ) {
LAB_14c8c919a:
        fVar15 = (float)this->ExactBandWidth * this->CellSize;
        fVar18 = fVar15;
        if ((this->ComputeMode == NarrowBand_SpatialFloodFill) &&
           (fVar18 = (float)this->NarrowBandMaxDistance,
           (float)this->NarrowBandMaxDistance <= fVar15)) {
          fVar18 = fVar15;
        }
        fVar16 = __real_3f800000 / this->CellSize;
        fVar15 = (float)(this->ExpandBounds).field0_0x0._s_0.X;
        fVar19 = (float)(this->ExpandBounds).field0_0x0._s_0.Y;
        local_a8._s_0.X =
             ((float)(param_1->Min).field0_0x0._s_0.X -
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar18) - fVar15;
        fVar20 = (float)(this->ExpandBounds).field0_0x0._s_0.Z;
        local_a8._s_0.Y =
             ((float)(param_1->Min).field0_0x0._s_0.Y -
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * fVar18) - fVar19;
        local_a8._s_0.Z =
             ((float)(param_1->Min).field0_0x0._s_0.Z -
             UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * fVar18) - fVar20;
        local_b8._s_0.X =
             (int)((((float)dVar1 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar18 +
                    fVar15) - local_a8._s_0.X) * fVar16) + 1;
        local_b8._s_0.Y =
             (int)((((float)(param_1->Max).field0_0x0._s_0.Y +
                     UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * fVar18 + fVar19) -
                   local_a8._s_0.Y) * fVar16) + 1;
        local_b8._s_0.Z =
             (int)((((float)(param_1->Max).field0_0x0._s_0.Z +
                     UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * fVar18 + fVar20) -
                   local_a8._s_0.Z) * fVar16) + 1;
        bVar7 = Compute(this,(TVector<float> *)&local_a8._s_0,(FVector3i *)&local_b8._s_0);
        return bVar7;
      }
      local_res18[0] = 0;
      bVar7 = `UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute'::__l9::
              <lambda_2>::operator()(local_res18);
      if (bVar7) goto LAB_14c8c919a;
      fVar18 = ((float)(local_98[(ulonglong)uVar11 + 3] /
                       (double)(this->ApproxMaxCellsPerDimension + this->ExactBandWidth * -2)) /
               this->CellSize) * this->CellSize;
      this->CellSize = fVar18;
      if ((0.0 < fVar18) && (iVar9 = _finite((double)fVar18), iVar9 != 0)) goto LAB_14c8c919a;
      pcVar12 = "IsValid(CellSize)";
      iVar9 = 0xe2;
      paVar13 = &bGEnsureHasExecuted<_1174976994895462174>;
      goto LAB_14c8c92fc;
    }
  }
  pcVar12 = "Validate(Bounds)";
  iVar9 = 0xd1;
  paVar13 = &bGEnsureHasExecuted<_1174976994895462191>;
LAB_14c8c92fc:
  bVar7 = Assert::Private::ExecCheckImplInternal
                    (paVar13,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\SweepingMeshSDF.h"
                     ,iVar9,pcVar12);
  if (!bVar7) {
    return false;
  }
  pcVar5 = (code *)swi(3);
  uVar8 = (*pcVar5)();
  return (bool)uVar8;
}

// Compute @ 14c8c9350

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TVector<float> *param_1,
          FVector3i *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  TDenseGrid3<float> *pTVar7;
  undefined1 local_res8 [8];
  TVector<float>_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  iVar2 = (param_2->field0_0x0)._s_0.X;
  local_18._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  iVar3 = (param_2->field0_0x0)._s_0.Y;
  iVar4 = (param_2->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->GridOrigin).field0_0x0 = local_18._0_8_;
  (this->GridOrigin).field0_0x0._s_0.Z = local_18._s_0.Z;
  if (((iVar2 < 0) || (iVar3 < 0)) || (iVar4 < 0)) {
LAB_14c8c94ab:
    bVar6 = false;
  }
  else {
    if (this->ComputeMode == NarrowBand_SpatialFloodFill) {
      if ((this->Spatial == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) ||
         (this->NarrowBandMaxDistance == 0.0)) {
        bVar6 = `UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute'::__l9::
                <lambda_1>::operator()(local_res8);
        if (!bVar6) goto LAB_14c8c94ab;
      }
      local_18._s_0.Z = (this->GridOrigin).field0_0x0._s_0.Z;
      local_18._0_8_ = *(undefined8 *)&(this->GridOrigin).field0_0x0;
      make_level_set3_parallel_floodfill
                (this,(TVector<float> *)&local_18._s_0,this->CellSize,iVar2,iVar3,iVar4,&this->Grid)
      ;
    }
    else {
      iVar5 = this->ExactBandWidth;
      pTVar7 = &this->Grid;
      fVar1 = this->CellSize;
      if (this->bUseParallel == false) {
        make_level_set3(this,(TVector<float> *)&local_18._s_0,fVar1,iVar2,iVar3,iVar4,pTVar7,iVar5);
      }
      else if (this->Spatial == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
        make_level_set3_parallel
                  (this,(TVector<float> *)&local_18._s_0,fVar1,iVar2,iVar3,iVar4,pTVar7,iVar5);
      }
      else {
        make_level_set3_parallel_spatial
                  (this,(TVector<float> *)&local_18._s_0,fVar1,iVar2,iVar3,iVar4,pTVar7,iVar5);
      }
    }
    if (this->bWantIntersectionsGrid == false) {
      TDenseGrid3<int>::Resize(&this->IntersectionsGrid,0,0,0,Default);
    }
    if (this->bWantClosestTriGrid == false) {
      TDenseGrid3<int>::Resize(&this->ClosestTriGrid,0,0,0,Default);
    }
    bVar6 = Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>::
            operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                        *)&this->CancelF);
    bVar6 = !bVar6;
  }
  return bVar6;
}

// PointSegmentDistance @ 14c90f3a0

double __cdecl
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::PointSegmentDistance
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_3->field0_0x0)._s_0.X - dVar3;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Y - dVar1;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_3->field0_0x0)._s_0.Z - dVar5;
  dVar6 = (((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) * dVar6 +
           ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * dVar7 +
          ((param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) * dVar4) /
          (dVar6 * dVar6 + dVar7 * dVar7 + dVar4 * dVar4);
  dVar4 = 0.0;
  if ((0.0 <= dVar6) && (dVar4 = dVar6, __real_3ff0000000000000 <= dVar6)) {
    dVar4 = __real_3ff0000000000000;
  }
  dVar6 = __real_3ff0000000000000 - dVar4;
  dVar1 = (dVar6 * (param_3->field0_0x0)._s_0.Y + dVar1 * dVar4) - (param_1->field0_0x0)._s_0.Y;
  dVar3 = (dVar6 * (param_3->field0_0x0)._s_0.X + dVar3 * dVar4) - (param_1->field0_0x0)._s_0.X;
  dVar5 = (dVar6 * (param_3->field0_0x0)._s_0.Z + dVar5 * dVar4) - (param_1->field0_0x0)._s_0.Z;
  auVar2._0_8_ = dVar1 * dVar1 + dVar3 * dVar3 + dVar5 * dVar5;
  auVar2._8_8_ = 0;
  auVar2 = sqrtpd(auVar2,auVar2);
  return auVar2._0_8_;
}

// PointTriangleDistance @ 14c90f4c0

double __cdecl
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::PointTriangleDistance
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector<double> *pTVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar13 = (param_4->field0_0x0)._s_0.X;
  dVar15 = (param_4->field0_0x0)._s_0.Y;
  dVar17 = (param_4->field0_0x0)._s_0.Z;
  dVar11 = (param_1->field0_0x0)._s_0.X;
  dVar2 = dVar11 - dVar13;
  dVar4 = (param_3->field0_0x0)._s_0.Y - dVar15;
  dVar7 = (param_3->field0_0x0)._s_0.X - dVar13;
  dVar5 = (param_3->field0_0x0)._s_0.Z - dVar17;
  dVar13 = (param_2->field0_0x0)._s_0.X - dVar13;
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Y - dVar15;
  dVar16 = (param_2->field0_0x0)._s_0.Z - dVar17;
  dVar14 = (param_1->field0_0x0)._s_0.Z;
  dVar15 = dVar9 - dVar15;
  dVar17 = dVar14 - dVar17;
  dVar3 = dVar6 * dVar6 + dVar13 * dVar13 + dVar16 * dVar16;
  dVar18 = dVar4 * dVar4 + dVar7 * dVar7 + dVar5 * dVar5;
  dVar1 = dVar4 * dVar6 + dVar7 * dVar13 + dVar5 * dVar16;
  dVar12 = dVar18 * dVar3 - dVar1 * dVar1;
  if (dVar12 <= __real_39b4484bfeebc2a0) {
    dVar12 = __real_39b4484bfeebc2a0;
  }
  dVar16 = dVar15 * dVar6 + dVar2 * dVar13 + dVar17 * dVar16;
  dVar13 = dVar15 * dVar4 + dVar2 * dVar7 + dVar17 * dVar5;
  dVar15 = (dVar13 * dVar3 - dVar16 * dVar1) * (__real_3ff0000000000000 / dVar12);
  dVar13 = (dVar16 * dVar18 - dVar13 * dVar1) * (__real_3ff0000000000000 / dVar12);
  dVar17 = (__real_3ff0000000000000 - dVar13) - dVar15;
  if (0.0 <= dVar13) {
    if ((0.0 <= dVar15) && (0.0 <= dVar17)) {
      dVar11 = ((param_2->field0_0x0)._s_0.X * dVar13 + (param_3->field0_0x0)._s_0.X * dVar15 +
               (param_4->field0_0x0)._s_0.X * dVar17) - dVar11;
      dVar9 = ((param_2->field0_0x0)._s_0.Y * dVar13 + (param_3->field0_0x0)._s_0.Y * dVar15 +
              (param_4->field0_0x0)._s_0.Y * dVar17) - dVar9;
      dVar14 = ((param_2->field0_0x0)._s_0.Z * dVar13 + (param_3->field0_0x0)._s_0.Z * dVar15 +
               (param_4->field0_0x0)._s_0.Z * dVar17) - dVar14;
      auVar10._0_8_ = dVar9 * dVar9 + dVar11 * dVar11 + dVar14 * dVar14;
      auVar10._8_8_ = 0;
      auVar10 = sqrtpd(auVar10,auVar10);
      return auVar10._0_8_;
    }
    if (0.0 < dVar13) {
      dVar13 = PointSegmentDistance(param_1,param_2,param_3);
      goto LAB_14c90f793;
    }
  }
  pTVar8 = param_3;
  if (dVar15 <= 0.0) {
    pTVar8 = param_4;
  }
  dVar13 = PointSegmentDistance(param_1,param_2,pTVar8);
  param_2 = param_3;
LAB_14c90f793:
  dVar15 = PointSegmentDistance(param_1,param_2,param_4);
  if (dVar13 <= dVar15) {
    dVar15 = dVar13;
  }
  return dVar15;
}

// compute_intersections @ 14c927850

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::compute_intersections
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TDenseGrid3<int> *param_6)

{
  double local_res8;
  double local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  double local_98;
  double local_90;
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **local_70;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *local_68;
  TVector<float> *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  TDenseGrid3<int> *local_40;
  double *local_38;
  double *local_30;
  double *local_28;
  double *local_20;
  undefined1 *local_18;
  
  local_58 = local_res20;
  local_res10 = (double)(param_1->field0_0x0)._s_0.Y;
  local_50 = &param_4;
  local_48 = &param_5;
  local_40 = param_6;
  local_38 = &local_res8;
  local_30 = &local_res10;
  local_28 = &local_98;
  local_20 = &local_90;
  local_18 = local_res18;
  local_res18[0] = 0;
  local_88.DataPtr = (void **)0x0;
  local_88.ArrayNum = 0;
  local_res8 = (double)(param_1->field0_0x0)._s_0.X;
  local_90 = __real_3ff0000000000000 / (double)param_2;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::compute_intersections'::__l2::<lambda_1>,void,int>
             ::Call;
  local_70 = &local_68;
  local_98 = (double)(param_1->field0_0x0)._s_0.Z;
  local_res20[0] = param_3;
  local_68 = this;
  local_60 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_78,(<lambda_1>)0x0,
             (uint)(this->bUseParallel == false),&local_88);
  return;
}

// compute_signs @ 14c927970

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::compute_signs
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,int param_1,int param_2,int param_3
          ,TDenseGrid3<float> *param_4,TDenseGrid3<int> *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  <lambda_1> local_res8;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_c8;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **local_a8;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  TDenseGrid3<float> *local_80;
  TDenseGrid3<int> *local_78;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  uVar15 = 0;
  uVar16 = 0;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if (this->bUseParallel != false) {
    local_98 = local_res10;
    local_90 = local_res18;
    local_88 = local_res20;
    local_c0.DataPtr = (void **)0x0;
    local_80 = param_4;
    local_78 = param_5;
    local_b0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::compute_signs'::__l5::<lambda_1>,void,int>
               ::Call;
    local_a8 = &local_a0;
    local_res8 = SUB81(this,0);
    local_c0.ArrayNum = 0;
    local_a0 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_2 * param_3,1,(TFunctionRef<void___cdecl(int)> *)&local_b0,
               local_res8,None,&local_c0);
    return;
  }
  local_c8 = 0;
  if (0 < param_3) {
    do {
      Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
      plVar1 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar2 = *(code **)&this->CancelF;
      plVar9 = (longlong *)&(this->CancelF).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar9 = plVar1;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar4 = (*pcVar2)(uVar8);
      if (cVar4 != '\0') {
        return;
      }
      iVar6 = local_res18[0];
      uVar14 = uVar15;
      if (0 < local_res18[0]) {
        do {
          uVar12 = uVar15;
          uVar13 = uVar15;
          if (0 < local_res10[0]) {
            do {
              uVar10 = (local_c8 * (param_5->Dimensions).field0_0x0._s_0.Y + uVar14) *
                       (param_5->Dimensions).field0_0x0._s_0.X + uVar13;
              uVar7 = uVar16;
              if ((int)uVar10 < (param_5->Buffer).ArrayNum) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar12 = uVar12 + *(int *)((param_5->Buffer).AllocatorInstance.Data +
                                        (longlong)(int)uVar10 * 4);
              if (this->InsideMode == WindingCount) {
                if (0 < (int)uVar12) {
LAB_14c927b83:
                  uVar10 = (local_c8 * (param_4->Dimensions).field0_0x0._s_0.Y + uVar14) *
                           (param_4->Dimensions).field0_0x0._s_0.X + uVar13;
                  uVar7 = uVar16;
                  if ((int)uVar10 < (param_4->Buffer).ArrayNum) {
                    uVar7 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar7 = *(uint *)((param_4->Buffer).AllocatorInstance.Data +
                                   (longlong)(int)uVar10 * 4);
                  uVar11 = (local_c8 * (param_4->Dimensions).field0_0x0._s_0.Y + uVar14) *
                           (param_4->Dimensions).field0_0x0._s_0.X + uVar13;
                  uVar10 = uVar16;
                  if ((int)uVar11 < (param_4->Buffer).ArrayNum) {
                    uVar10 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  *(uint *)((param_4->Buffer).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) =
                       uVar7 ^ uVar3;
                }
              }
              else if (this->InsideMode == CrossingCount) {
                uVar7 = uVar12 & 0x80000001;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                }
                if (uVar7 == 1) goto LAB_14c927b83;
              }
              uVar13 = uVar13 + 1;
              iVar6 = local_res18[0];
            } while ((int)uVar13 < local_res10[0]);
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar6);
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 < local_res20[0]);
  }
  return;
}

// make_level_set3 @ 14c92e880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TDenseGrid3<float> *param_6,int param_7)

{
  TDenseGrid3<int> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  TDenseGrid3<float> *pTVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FDynamicMesh3 *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  longlong *plVar28;
  TVector<double>_u_0 *pTVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 local_208;
  undefined4 uStack_204;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  float local_1a0;
  float local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  double local_188;
  double local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_f8 [15];
  
  pTVar10 = param_6;
  TDenseGrid3<float>::Resize(param_6,param_3,param_4,param_5,Default);
  TDenseGrid3<float>::Assign
            (param_6,((float)(param_6->Dimensions).field0_0x0._s_0.Y +
                      (float)(param_6->Dimensions).field0_0x0._s_0.X +
                     (float)(param_6->Dimensions).field0_0x0._s_0.Z) * this->CellSize);
  this_00 = &this->ClosestTriGrid;
  TDenseGrid3<int>::Resize(this_00,param_3,param_4,param_5,Default);
  TDenseGrid3<int>::Assign(this_00,-1);
  TDenseGrid3<int>::Resize(&this->IntersectionsGrid,param_3,param_4,param_5,Default);
  TDenseGrid3<int>::Assign(&this->IntersectionsGrid,0);
  pFVar20 = this->Mesh;
  param_6._0_4_ = 0;
  dVar39 = (double)(param_1->field0_0x0)._s_0.X;
  dVar36 = (double)(param_1->field0_0x0)._s_0.Y;
  local_130 = (double)(param_1->field0_0x0)._s_0.Z;
  dVar33 = (double)param_2;
  dVar30 = __real_3ff0000000000000;
  local_188 = dVar36;
  local_120 = dVar39;
  local_118 = dVar33;
  if (0 < (int)((pFVar20->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar20->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    do {
      if ((-1 < (int)(uint)param_6) &&
         ((int)(uint)param_6 <
          (int)((pFVar20->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar20->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        uVar22 = (ulonglong)((uint)param_6 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar20->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)((uint)param_6 >> 9) * 8) + uVar22 * 2) - 1U) <
            0xfffe) {
          if ((uint)param_6 == ((int)(uint)param_6 / 100) * 100) {
            Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
            plVar28 = *(longlong **)&(this->CancelF).field_0x28;
            pcVar4 = *(code **)&this->CancelF;
            plVar24 = (longlong *)&(this->CancelF).field_0x10;
            if (plVar28 != (longlong *)0x0) {
              plVar24 = plVar28;
            }
            uVar16 = (**(code **)(*plVar24 + 8))();
            cVar12 = (*pcVar4)(uVar16);
            if (cVar12 != '\0') break;
          }
          dVar30 = dVar30 / dVar33;
          pFVar5 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
          lVar6 = *(longlong *)
                   ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                   (ulonglong)((uint)param_6 >> 9) * 8);
          uVar15 = *(uint *)(lVar6 + uVar22 * 0xc);
          uVar21 = (ulonglong)(uVar15 & 0x1ff);
          local_1b8._0_16_ =
               *(undefined1 (*) [16])
                (*(longlong *)(pFVar5 + (ulonglong)(uVar15 >> 9) * 8) + uVar21 * 0x18);
          uVar47 = local_1b8._0_4_;
          uVar48 = local_1b8._4_4_;
          dVar1 = *(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(uVar15 >> 9) * 8) + 0x10 + uVar21 * 0x18);
          uVar15 = *(uint *)(lVar6 + 4 + uVar22 * 0xc);
          uVar21 = (ulonglong)(uVar15 & 0x1ff);
          dVar40 = (dVar1 - local_130) * dVar30;
          uVar27 = *(uint *)(lVar6 + 8 + uVar22 * 0xc);
          dVar9 = local_1b8._8_8_;
          local_1d0._0_16_ =
               *(undefined1 (*) [16])
                (*(longlong *)(pFVar5 + (ulonglong)(uVar15 >> 9) * 8) + uVar21 * 0x18);
          dVar2 = *(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(uVar15 >> 9) * 8) + 0x10 + uVar21 * 0x18);
          dVar46 = local_1d0._8_8_;
          uVar22 = (ulonglong)(uVar27 & 0x1ff);
          local_208 = local_1d0._8_4_;
          uStack_204 = local_1d0._12_4_;
          dVar35 = (local_1d0._0_8_ - dVar39) * dVar30;
          local_1e8._0_16_ =
               *(undefined1 (*) [16])
                (*(longlong *)(pFVar5 + (ulonglong)(uVar27 >> 9) * 8) + uVar22 * 0x18);
          uVar49 = local_1e8._0_4_;
          uVar50 = local_1e8._4_4_;
          dVar3 = *(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(uVar27 >> 9) * 8) + 0x10 + uVar22 * 0x18);
          dVar38 = (local_1b8._0_8_ - dVar39) * dVar30;
          iVar25 = param_3 + -1;
          dVar41 = (dVar9 - dVar36) * dVar30;
          dVar42 = (dVar46 - dVar36) * dVar30;
          dVar7 = local_1e8._8_8_;
          dVar36 = (dVar2 - local_130) * dVar30;
          dVar32 = (local_1e8._0_8_ - dVar39) * dVar30;
          dVar33 = (dVar7 - local_188) * dVar30;
          dVar30 = (dVar3 - local_130) * dVar30;
          dVar39 = dVar35;
          if (dVar38 <= dVar35) {
            dVar39 = dVar38;
          }
          if (dVar35 <= dVar38) {
            dVar35 = dVar38;
          }
          if (dVar32 <= dVar39) {
            dVar39 = dVar32;
          }
          if (dVar35 <= dVar32) {
            dVar35 = dVar32;
          }
          dVar32 = dVar42;
          if (dVar42 <= dVar41) {
            dVar32 = dVar41;
          }
          if (dVar41 <= dVar42) {
            dVar42 = dVar41;
          }
          iVar17 = iVar25;
          if ((int)dVar39 - param_7 < iVar25) {
            iVar17 = (int)dVar39 - param_7;
          }
          if (dVar32 <= dVar33) {
            dVar32 = dVar33;
          }
          if (dVar33 <= dVar42) {
            dVar42 = dVar33;
          }
          local_198 = 0;
          if (0 < iVar17) {
            local_198 = iVar17;
          }
          iVar17 = param_7 + 1 + (int)dVar35;
          if (iVar17 < iVar25) {
            iVar25 = iVar17;
          }
          iVar17 = 0;
          if (0 < iVar25) {
            iVar17 = iVar25;
          }
          iVar25 = param_4 + -1;
          dVar33 = dVar36;
          if (dVar36 <= dVar40) {
            dVar33 = dVar40;
          }
          if (dVar40 <= dVar36) {
            dVar36 = dVar40;
          }
          iVar18 = iVar25;
          if ((int)dVar42 - param_7 < iVar25) {
            iVar18 = (int)dVar42 - param_7;
          }
          if (dVar33 <= dVar30) {
            dVar33 = dVar30;
          }
          local_190 = 0;
          if (0 < iVar18) {
            local_190 = iVar18;
          }
          if (dVar30 <= dVar36) {
            dVar36 = dVar30;
          }
          iVar18 = param_7 + 1 + (int)dVar32;
          if (iVar18 < iVar25) {
            iVar25 = iVar18;
          }
          local_194 = 0;
          if (0 < iVar25) {
            local_194 = iVar25;
          }
          iVar18 = param_5 + -1;
          iVar25 = iVar18;
          if ((int)dVar36 - param_7 < iVar18) {
            iVar25 = (int)dVar36 - param_7;
          }
          iVar19 = param_7 + 1 + (int)dVar33;
          if (iVar19 < iVar18) {
            iVar18 = iVar19;
          }
          local_18c = 0;
          if (0 < iVar18) {
            local_18c = iVar18;
          }
          iVar18 = 0;
          if (0 < iVar25) {
            iVar18 = iVar25;
          }
          dVar33 = local_118;
          dVar36 = local_188;
          dVar39 = local_120;
          dVar30 = __real_3ff0000000000000;
          local_1e8._s_0.Z = dVar3;
          local_1d0._s_0.Z = dVar2;
          local_1b8._s_0.Z = dVar1;
          local_178 = local_1e8._0_16_;
          local_168 = local_1b8._0_16_;
          local_158 = local_1d0._0_16_;
          iVar25 = local_198;
          iVar19 = local_190;
          iVar26 = local_194;
          iVar14 = local_18c;
          if (iVar18 <= local_18c) {
            do {
              iVar11 = iVar19;
              if (iVar19 <= iVar26) {
                do {
                  iVar26 = iVar25;
                  if (iVar25 <= iVar17) {
                    local_1a0 = (float)iVar18 * param_2;
                    local_19c = (float)iVar19 * param_2;
                    do {
                      dVar33 = dVar9 - dVar7;
                      dVar39 = dVar46 - dVar7;
                      dVar40 = dVar2 - dVar3;
                      local_148._s_0.Z = (double)(local_1a0 + (param_1->field0_0x0)._s_0.Z);
                      local_148._s_0.Y = (double)(local_19c + (param_1->field0_0x0)._s_0.Y);
                      auVar44._8_4_ = local_208;
                      auVar44._0_8_ = dVar39;
                      auVar44._12_4_ = uStack_204;
                      dVar41 = (double)CONCAT44(uVar48,uVar47) - (double)CONCAT44(uVar50,uVar49);
                      auVar43._8_8_ = auVar44._8_8_;
                      dVar30 = dVar1 - dVar3;
                      local_148._s_0.X =
                           (double)((float)iVar25 * param_2 + (param_1->field0_0x0)._s_0.X);
                      dVar35 = (double)local_158._0_8_ - (double)CONCAT44(uVar50,uVar49);
                      local_180 = local_148._s_0.Y - dVar7;
                      dVar36 = local_148._s_0.X - (double)CONCAT44(uVar50,uVar49);
                      dVar42 = dVar33 * dVar33 + dVar41 * dVar41 + dVar30 * dVar30;
                      dVar38 = dVar39 * dVar39 + dVar35 * dVar35 + dVar40 * dVar40;
                      auVar43._0_8_ = dVar39 * dVar33 + dVar35 * dVar41 + dVar40 * dVar30;
                      dVar32 = dVar38 * dVar42 - auVar43._0_8_ * auVar43._0_8_;
                      if (dVar32 <= __real_39b4484bfeebc2a0) {
                        dVar32 = __real_39b4484bfeebc2a0;
                      }
                      dVar39 = local_180 * dVar39 + dVar36 * dVar35 +
                               (local_148._s_0.Z - dVar3) * dVar40;
                      dVar33 = local_180 * dVar33 + dVar36 * dVar41 +
                               (local_148._s_0.Z - dVar3) * dVar30;
                      dVar36 = (dVar33 * dVar38 - dVar39 * auVar43._0_8_) *
                               (__real_3ff0000000000000 / dVar32);
                      dVar33 = (dVar39 * dVar42 - dVar33 * auVar43._0_8_) *
                               (__real_3ff0000000000000 / dVar32);
                      dVar39 = (__real_3ff0000000000000 - dVar36) - dVar33;
                      local_128 = local_148._s_0.Z;
                      if (dVar36 < 0.0) {
LAB_14c92f21b:
                        dVar36 = PointSegmentDistance
                                           ((TVector<double> *)&local_148._s_0,
                                            (TVector<double> *)&local_1d0._s_0,
                                            (TVector<double> *)&local_1e8._s_0);
                        pTVar29 = &local_1d0;
                        if (dVar33 <= 0.0) {
                          pTVar29 = &local_1e8;
                        }
                        dVar33 = PointSegmentDistance
                                           ((TVector<double> *)&local_148._s_0,
                                            (TVector<double> *)&local_1b8._s_0,
                                            (TVector<double> *)&pTVar29->_s_0);
                        if (dVar36 <= dVar33) {
                          dVar33 = dVar36;
                        }
                        uVar47 = local_168._0_4_;
                        uVar48 = local_168._4_4_;
                        uVar49 = local_178._0_4_;
                        uVar50 = local_178._4_4_;
                      }
                      else {
                        uVar47 = local_168._0_4_;
                        uVar48 = local_168._4_4_;
                        dVar30 = local_168._0_8_;
                        uVar49 = local_178._0_4_;
                        uVar50 = local_178._4_4_;
                        dVar41 = local_178._0_8_;
                        if ((dVar33 < 0.0) || (dVar39 < 0.0)) {
                          if (dVar36 <= 0.0) goto LAB_14c92f21b;
                          dVar33 = dVar41 - dVar30;
                          dVar39 = dVar7 - dVar9;
                          auVar45._8_8_ = 0;
                          auVar45._0_8_ = local_148._s_0.Z;
                          dVar36 = dVar3 - dVar1;
                          dVar33 = ((dVar7 - local_148._s_0.Y) * dVar39 +
                                    (dVar41 - local_148._s_0.X) * dVar33 +
                                   (dVar3 - local_148._s_0.Z) * dVar36) /
                                   (dVar39 * dVar39 + dVar33 * dVar33 + dVar36 * dVar36);
                          if (0.0 <= dVar33) {
                            if (__real_3ff0000000000000 <= dVar33) {
                              dVar33 = __real_3ff0000000000000;
                            }
                          }
                          else {
                            dVar33 = 0.0;
                          }
                          dVar36 = __real_3ff0000000000000 - dVar33;
                          dVar40 = (dVar36 * dVar7 + dVar33 * dVar9) - local_148._s_0.Y;
                          auVar31._0_8_ = dVar3 * dVar36;
                          auVar31._8_8_ = 0;
                          dVar36 = (dVar36 * dVar41 + dVar33 * dVar30) - local_148._s_0.X;
                          dVar33 = (dVar1 * dVar33 + auVar31._0_8_) - local_148._s_0.Z;
                          dVar41 = (double)local_158._0_8_ - dVar30;
                          dVar39 = dVar2 - dVar1;
                          auVar8._8_8_ = 0;
                          auVar8._0_8_ = dVar36 * dVar36 + dVar40 * dVar40 + dVar33 * dVar33;
                          auVar44 = sqrtpd(auVar31,auVar8);
                          dVar33 = dVar46 - dVar9;
                          local_180 = auVar44._0_8_;
                          dVar33 = ((dVar46 - local_148._s_0.Y) * dVar33 +
                                    ((double)local_158._0_8_ - local_148._s_0.X) * dVar41 +
                                   (dVar2 - local_148._s_0.Z) * dVar39) /
                                   (dVar33 * dVar33 + dVar41 * dVar41 + dVar39 * dVar39);
                          if (0.0 <= dVar33) {
                            if (__real_3ff0000000000000 <= dVar33) {
                              dVar33 = __real_3ff0000000000000;
                            }
                          }
                          else {
                            dVar33 = 0.0;
                          }
                          dVar36 = __real_3ff0000000000000 - dVar33;
                          dVar30 = (dVar36 * (double)local_158._0_8_ + dVar33 * dVar30) -
                                   local_148._s_0.X;
                          dVar39 = (dVar36 * dVar46 + dVar33 * dVar9) - local_148._s_0.Y;
                          dVar33 = (dVar36 * dVar2 + dVar1 * dVar33) - local_148._s_0.Z;
                          auVar34._0_8_ = dVar39 * dVar39 + dVar30 * dVar30 + dVar33 * dVar33;
                          auVar34._8_8_ = 0;
                          auVar44 = sqrtpd(auVar45,auVar34);
                          dVar33 = auVar44._0_8_;
                          if (local_180 <= auVar44._0_8_) {
                            dVar33 = local_180;
                          }
                        }
                        else {
                          dVar40 = (dVar33 * dVar46 + dVar36 * dVar9 + dVar39 * dVar7) -
                                   local_148._s_0.Y;
                          dVar30 = (dVar33 * (double)local_158._0_8_ + dVar36 * dVar30 +
                                   dVar39 * dVar41) - local_148._s_0.X;
                          dVar33 = (dVar1 * dVar36 + dVar33 * dVar2 + dVar3 * dVar39) -
                                   local_148._s_0.Z;
                          auVar37._0_8_ = dVar30 * dVar30 + dVar40 * dVar40 + dVar33 * dVar33;
                          auVar37._8_8_ = 0;
                          auVar44 = sqrtpd(auVar43,auVar37);
                          dVar33 = auVar44._0_8_;
                        }
                      }
                      uVar27 = (iVar18 * (pTVar10->Dimensions).field0_0x0._s_0.Y + iVar19) *
                               (pTVar10->Dimensions).field0_0x0._s_0.X + iVar25;
                      uVar15 = 0;
                      if ((int)uVar27 < (pTVar10->Buffer).ArrayNum) {
                        uVar15 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar15 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      if ((float)dVar33 <
                          *(float *)((pTVar10->Buffer).AllocatorInstance.Data +
                                    (longlong)(int)uVar27 * 4)) {
                        uVar27 = (iVar18 * (pTVar10->Dimensions).field0_0x0._s_0.Y + iVar19) *
                                 (pTVar10->Dimensions).field0_0x0._s_0.X + iVar25;
                        uVar15 = 0;
                        if ((int)uVar27 < (pTVar10->Buffer).ArrayNum) {
                          uVar15 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar15 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        *(float *)((pTVar10->Buffer).AllocatorInstance.Data +
                                  (longlong)(int)uVar27 * 4) = (float)dVar33;
                        uVar27 = (iVar18 * (this->ClosestTriGrid).Dimensions.field0_0x0._s_0.Y +
                                 iVar19) * (this->ClosestTriGrid).Dimensions.field0_0x0._s_0.X +
                                 iVar25;
                        uVar15 = 0;
                        if ((int)uVar27 < (this->ClosestTriGrid).Buffer.ArrayNum) {
                          uVar15 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar15 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        *(uint *)((this_00->Buffer).AllocatorInstance.Data +
                                 (longlong)(int)uVar27 * 4) = (uint)param_6;
                      }
                      iVar25 = iVar25 + 1;
                      iVar26 = local_198;
                    } while (iVar25 <= iVar17);
                  }
                  iVar25 = iVar26;
                  iVar19 = iVar19 + 1;
                  iVar11 = local_190;
                  iVar26 = local_194;
                  iVar14 = local_18c;
                } while (iVar19 <= local_194);
              }
              iVar19 = iVar11;
              iVar18 = iVar18 + 1;
              dVar33 = local_118;
              dVar36 = local_188;
              dVar39 = local_120;
              dVar30 = __real_3ff0000000000000;
            } while (iVar18 <= iVar14);
          }
        }
      }
      pFVar20 = this->Mesh;
      param_6._0_4_ = (uint)param_6 + 1;
    } while ((int)(uint)param_6 <
             (int)((pFVar20->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar20->TriangleRefCounts).RefCounts.CurBlockUsed));
  }
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar4 = *(code **)&this->CancelF;
  plVar28 = (longlong *)&(this->CancelF).field_0x10;
  plVar24 = *(longlong **)&(this->CancelF).field_0x28;
  plVar23 = plVar28;
  if (plVar24 != (longlong *)0x0) {
    plVar23 = plVar24;
  }
  uVar16 = (**(code **)(*plVar23 + 8))();
  cVar12 = (*pcVar4)(uVar16);
  if (cVar12 != '\0') {
    return;
  }
  if (this->bComputeSigns == true) {
    local_108._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_108._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    compute_intersections
              (this,(TVector<float> *)&local_108._s_0,param_2,param_3,param_4,param_5,
               &this->IntersectionsGrid);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    plVar24 = *(longlong **)&(this->CancelF).field_0x28;
    pcVar4 = *(code **)&this->CancelF;
    if (plVar24 != (longlong *)0x0) {
      plVar28 = plVar24;
    }
    uVar16 = (**(code **)(*plVar28 + 8))(plVar28);
    cVar12 = (*pcVar4)(uVar16);
    if (cVar12 != '\0') {
      return;
    }
    if (this->ComputeMode == FullGrid) {
      iVar25 = 0;
      do {
        local_f8[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
        local_f8[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
        sweep_pass(this,(TVector<float> *)&local_f8[0]._s_0,param_2,pTVar10,this_00);
        Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
        plVar28 = *(longlong **)&(this->CancelF).field_0x28;
        pcVar4 = *(code **)&this->CancelF;
        plVar24 = (longlong *)&(this->CancelF).field_0x10;
        if (plVar28 != (longlong *)0x0) {
          plVar24 = plVar28;
        }
        uVar16 = (**(code **)(*plVar24 + 8))();
        cVar12 = (*pcVar4)(uVar16);
        if (cVar12 != '\0') {
          return;
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < 2);
    }
    compute_signs(this,param_3,param_4,param_5,pTVar10,&this->IntersectionsGrid);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    pcVar4 = *(code **)&this->CancelF;
    plVar28 = *(longlong **)&(this->CancelF).field_0x28;
    plVar24 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar28 != (longlong *)0x0) {
      plVar24 = plVar28;
    }
    uVar16 = (**(code **)(*plVar24 + 8))();
    cVar12 = (*pcVar4)(uVar16);
    if (cVar12 != '\0') {
      return;
    }
    if (this->bWantIntersectionsGrid == false) {
      TDenseGrid3<int>::Resize(&this->IntersectionsGrid,0,0,0,Default);
    }
  }
  if (this->bWantClosestTriGrid == false) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this_00->Buffer,0,Default);
    *(undefined8 *)&(this->ClosestTriGrid).Dimensions.field0_0x0 = 0;
    (this->ClosestTriGrid).Dimensions.field0_0x0._s_0.Z = 0;
  }
  return;
}

// make_level_set3_parallel @ 14c92f7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TDenseGrid3<float> *param_6,int param_7)

{
  TDenseGrid3<int> *this_00;
  TDenseGrid3<int> *this_01;
  float fVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStackY_2c8 [32];
  undefined1 local_288 [4];
  int local_284;
  TVector<float>_u_0 local_278;
  TDenseGrid3<float> *local_268;
  code *local_260;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **local_258;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *local_250;
  TVector<float> *local_248;
  float local_240;
  int local_23c;
  int local_238;
  int local_234;
  TDenseGrid3<float> *local_230;
  int local_228;
  TDenseGrid3<int> *local_220;
  TDenseGrid3<int> *local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  LPCRITICAL_SECTION local_1e0;
  undefined1 *local_1d8;
  _RTL_CRITICAL_SECTION local_1c8;
  _RTL_CRITICAL_SECTION local_1a0;
  _RTL_CRITICAL_SECTION local_178;
  _RTL_CRITICAL_SECTION local_150;
  _RTL_CRITICAL_SECTION local_128;
  _RTL_CRITICAL_SECTION local_100;
  _RTL_CRITICAL_SECTION local_d8;
  _RTL_CRITICAL_SECTION local_b0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_268 = param_6;
  local_284 = param_3;
  TDenseGrid3<float>::Resize(param_6,param_3,param_4,param_5,Default);
  TDenseGrid3<float>::Assign
            (param_6,((float)(this->Grid).Dimensions.field0_0x0._s_0.Y +
                      (float)(this->Grid).Dimensions.field0_0x0._s_0.X +
                     (float)(this->Grid).Dimensions.field0_0x0._s_0.Z) * this->CellSize);
  this_00 = &this->ClosestTriGrid;
  TDenseGrid3<int>::Resize(this_00,param_3,param_4,param_5,Default);
  TDenseGrid3<int>::Assign(this_00,-1);
  this_01 = &this->IntersectionsGrid;
  TDenseGrid3<int>::Resize(this_01,param_3,param_4,param_5,Default);
  TDenseGrid3<int>::Assign(this_01,0);
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar5 = *(undefined8 *)&param_1->field0_0x0;
  InitializeCriticalSectionAndSpinCount(&local_1c8,4000);
  InitializeCriticalSectionAndSpinCount(&local_1a0,4000);
  InitializeCriticalSectionAndSpinCount(&local_178,4000);
  InitializeCriticalSectionAndSpinCount(&local_150,4000);
  InitializeCriticalSectionAndSpinCount(&local_128,4000);
  InitializeCriticalSectionAndSpinCount(&local_100,4000);
  InitializeCriticalSectionAndSpinCount(&local_d8,4000);
  InitializeCriticalSectionAndSpinCount(&local_b0,4000);
  local_238 = param_4;
  local_288[0] = 0;
  local_234 = param_5;
  local_230 = param_6;
  local_228 = param_7;
  local_210 = (double)(float)uVar5;
  dStack_208 = (double)(float)((ulonglong)uVar5 >> 0x20);
  iVar7 = 0;
  local_1f0 = param_3 / 2;
  local_260 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel'::__l2::<lambda_1>,void,int>
              ::Call;
  local_278._0_8_ = 0;
  local_1ec = param_4 / 2;
  local_258 = &local_250;
  local_278._s_0.Z = 0.0;
  local_1e8 = param_5 / 2;
  local_1d8 = local_288;
  local_1f8 = __real_3ff0000000000000 / (double)param_2;
  local_250 = this;
  local_248 = param_1;
  local_240 = param_2;
  local_23c = param_3;
  local_220 = this_00;
  local_218 = this_01;
  local_200 = (double)fVar1;
  local_1e0 = &local_1c8;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_260,(<lambda_1>)0x0,None,
             (TArrayView<std::nullptr_t,int> *)&local_278._s_0);
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar2 = *(code **)&this->CancelF;
  plVar8 = (longlong *)&(this->CancelF).field_0x10;
  plVar3 = *(longlong **)&(this->CancelF).field_0x28;
  plVar6 = plVar8;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar2)(uVar5);
  if (cVar4 != '\0') goto LAB_14c92fc26;
  if (this->bComputeSigns == true) {
    local_278._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_278._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    compute_intersections
              (this,(TVector<float> *)&local_278._s_0,param_2,local_284,param_4,param_5,this_01);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    plVar3 = *(longlong **)&(this->CancelF).field_0x28;
    pcVar2 = *(code **)&this->CancelF;
    plVar6 = plVar8;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar2)(uVar5);
    if (cVar4 != '\0') goto LAB_14c92fc26;
    if (this->ComputeMode == FullGrid) {
      do {
        local_278._0_8_ = *(undefined8 *)&param_1->field0_0x0;
        local_278._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        sweep_pass(this,(TVector<float> *)&local_278._s_0,param_2,local_268,this_00);
        Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
        plVar3 = *(longlong **)&(this->CancelF).field_0x28;
        pcVar2 = *(code **)&this->CancelF;
        plVar6 = (longlong *)&(this->CancelF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar6 = plVar3;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar2)(uVar5);
        if (cVar4 != '\0') goto LAB_14c92fc26;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 2);
    }
    compute_signs(this,local_284,param_4,param_5,local_268,&this->IntersectionsGrid);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    plVar3 = *(longlong **)&(this->CancelF).field_0x28;
    pcVar2 = *(code **)&this->CancelF;
    if (plVar3 != (longlong *)0x0) {
      plVar8 = plVar3;
    }
    uVar5 = (**(code **)(*plVar8 + 8))(plVar8);
    cVar4 = (*pcVar2)(uVar5);
    if (cVar4 != '\0') goto LAB_14c92fc26;
    if (this->bWantIntersectionsGrid == false) {
      TDenseGrid3<int>::Resize(&this->IntersectionsGrid,0,0,0,Default);
    }
  }
  if (this->bWantClosestTriGrid == false) {
    TDenseGrid3<int>::Resize(this_00,0,0,0,Default);
  }
LAB_14c92fc26:
  DeleteCriticalSection(&local_b0);
  DeleteCriticalSection(&local_d8);
  DeleteCriticalSection(&local_100);
  DeleteCriticalSection(&local_128);
  DeleteCriticalSection(&local_150);
  DeleteCriticalSection(&local_178);
  DeleteCriticalSection(&local_1a0);
  DeleteCriticalSection(&local_1c8);
  return;
}

// make_level_set3_parallel_floodfill @ 14c92fcc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TDenseGrid3<float> *param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)> *this_00;
  TDenseGrid3<int> *this_01;
  longlong *plVar3;
  code *pcVar4;
  TFunctionStorage<0> *pTVar5;
  _func___cdecl_bool_void_ptr *p_Var6;
  TDenseGrid3<float> *pTVar7;
  ForAnyElementType *pFVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  void *pvVar14;
  ulonglong uVar15;
  TFunctionStorage<0> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined4 *puVar21;
  TDenseGrid3<float> *this_02;
  ForAnyElementType *pFVar22;
  bool bVar23;
  <lambda_1> <Var24;
  <lambda_1> local_res18;
  int local_res20 [2];
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276 [2];
  undefined4 local_274;
  ForAnyElementType local_270;
  undefined8 local_268;
  ForAnyElementType local_260;
  undefined8 local_258;
  float local_250;
  uint local_24c;
  ForAnyElementType local_248;
  undefined8 local_240;
  ForAnyElementType *local_238;
  ForAnyElementType *local_230;
  TArray<bool,TSizedDefaultAllocator<32>_> local_228;
  undefined8 local_218;
  undefined4 local_210;
  int local_20c;
  int local_208;
  int local_204;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  ForAnyElementType *local_1d0;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)> *local_1c8;
  TVector<float>_u_0 local_1b8;
  TVector<float>_u_0 local_1a8;
  longlong local_198;
  ForAnyElementType *local_190;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **local_170;
  TArrayView<std::nullptr_t,int> local_168;
  code *local_158;
  ForAnyElementType **local_150;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *local_148;
  longlong local_140;
  TDenseGrid3<float> *local_138;
  ForAnyElementType *local_130;
  ForAnyElementType *local_128;
  TDenseGrid3<float> *local_120;
  undefined8 *local_118;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_110;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *local_108;
  double *local_100;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **local_f8;
  TDenseGrid3<int> *local_f0;
  double *local_e8;
  longlong *local_e0;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *local_d8;
  undefined1 *local_d0;
  double *local_c8;
  double *local_c0;
  double *local_b8;
  double *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **local_90;
  TDenseGrid3<float> *local_88;
  float *local_80;
  TDenseGrid3<int> *local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_70;
  longlong *local_68;
  
  this_02 = param_6;
  local_res20[0] = param_3;
  TDenseGrid3<float>::Resize(param_6,param_3,param_4,param_5,Default);
  local_250 = ((float)(this_02->Dimensions).field0_0x0._s_0.Y +
               (float)(this_02->Dimensions).field0_0x0._s_0.X +
              (float)(this_02->Dimensions).field0_0x0._s_0.Z) * this->CellSize;
  TDenseGrid3<float>::Assign(this_02,local_250);
  this_01 = &this->ClosestTriGrid;
  TDenseGrid3<int>::Resize(this_01,local_res20[0],param_4,param_5,Default);
  TDenseGrid3<int>::Assign(this_01,-1);
  TDenseGrid3<int>::Resize(&this->IntersectionsGrid,local_res20[0],param_4,param_5,Default);
  TDenseGrid3<int>::Assign(&this->IntersectionsGrid,0);
  local_1f0 = (double)(param_1->field0_0x0)._s_0.Y;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258 = 0;
  local_200 = (double)(param_1->field0_0x0)._s_0.X;
  local_1f8 = __real_3ff0000000000000 / (double)param_2;
  local_1e8 = (double)(param_1->field0_0x0)._s_0.Z;
  iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x28,8,0x100,&local_260,(int *)&local_258,(int *)((longlong)&local_258 + 4));
  DefaultConstructItems<UE::FWindowsRecursiveMutex,int>
            (local_260.Data + (longlong)iVar11 * 0x28,0x100);
  local_138 = this_02;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268 = 0;
  lVar18 = (longlong)
           -((int)ROUND(__real_bf000000 -
                        (float)(local_res20[0] * param_4 * param_5) * __real_3c000000) >> 1);
  local_130 = &local_260;
  local_148 = this;
  local_140 = lVar18;
  iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,0x100,&local_270,(int *)&local_268,(int *)((longlong)&local_268 + 4));
  memset(local_270.Data + (longlong)iVar11 * 0x10,0,0x1000);
  local_190 = &local_270;
  local_248.Data = (FScriptContainerElement *)0x0;
  local_240 = 0;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_198 = lVar18;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_228,
             (this_02->Dimensions).field0_0x0._s_0.Z * (this_02->Dimensions).field0_0x0._s_0.Y *
             (this_02->Dimensions).field0_0x0._s_0.X,Default);
  local_230 = &local_270;
  local_278 = 0;
  pFVar22 = &local_248;
  bVar23 = -1 < CpuChannel->Enabled;
  local_238 = pFVar22;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill(UE::Math::TVector<float>,float,int,int,int,UE::Geometry::TDenseGrid3<float>&___ptr64)___ptr64'
                ::__l3::__CpuProfilerEventSpecId843,"Geometry_SweepingMeshSDF_Distances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\SweepingMeshSDF.h"
               ,0x34b);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill(UE::Math::TVector<float>,float,int,int,int,UE::Geometry::TDenseGrid3<float>&___ptr64)___ptr64'
               ::__l3::__CpuProfilerEventSpecId843);
  }
  local_d0 = &local_278;
  local_c8 = &local_200;
  local_c0 = &local_1f8;
  local_b8 = &local_1f0;
  local_b0 = &local_1e8;
  local_a8 = local_res20;
  local_a0 = &param_4;
  local_98 = &param_5;
  local_90 = &local_148;
  local_80 = &local_250;
  local_70 = &local_228;
  local_68 = &local_198;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill'::__l3::<lambda_4>,void,int>
              ::Call;
  local_170 = &local_d8;
  local_88 = this_02;
  local_188.DataPtr = (void **)0x0;
  local_188.ArrayNum = 0;
  local_d8 = this;
  local_78 = this_01;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_178,local_res18,
             (uint)(this->bUseParallel == false),&local_188);
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  this_00 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)> *
            )&this->CancelF;
  local_1c8 = this_00;
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  plVar3 = *(longlong **)&(this->CancelF).field_0x28;
  pcVar4 = *(code **)&((TFunction<bool___cdecl(void)> *)this_00)->field_0x0;
  plVar17 = (longlong *)&(this->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar17 = plVar3;
  }
  uVar13 = (**(code **)(*plVar17 + 8))();
  cVar9 = (*pcVar4)(uVar13);
  if (cVar9 == '\0') {
    `UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::
    make_level_set3_parallel_floodfill'::__l2::<lambda_3>::operator()(&local_238);
    local_20c = (this_02->Dimensions).field0_0x0._s_0.X + -1;
    local_1d8 = this->NarrowBandMaxDistance;
    local_208 = (this_02->Dimensions).field0_0x0._s_0.Y + -1;
    local_204 = (this_02->Dimensions).field0_0x0._s_0.Z + -1;
    local_218 = 0;
    local_210 = 0;
    local_1e0 = (double)(param_2 * __real_3fddb3d7) + local_1d8;
    <Var24 = (<lambda_1>)(-1 < CpuChannel->Enabled);
    if ((bool)<Var24) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill(UE::Math::TVector<float>,float,int,int,int,UE::Geometry::TDenseGrid3<float>&___ptr64)___ptr64'
                  ::__l7::__CpuProfilerEventSpecId899,"Geometry_SweepingMeshSDF_FloodFill",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\SweepingMeshSDF.h"
                 ,899);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill(UE::Math::TVector<float>,float,int,int,int,UE::Geometry::TDenseGrid3<float>&___ptr64)___ptr64'
                 ::__l7::__CpuProfilerEventSpecId899);
    }
    while (0 < (int)local_240) {
      local_128 = &local_248;
      local_158 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill'::__l9::<lambda_5>,void,int>
                  ::Call;
      local_118 = &local_218;
      local_110 = &local_228;
      local_100 = &local_1e0;
      local_f8 = &local_148;
      local_f0 = &this->ClosestTriGrid;
      local_168.DataPtr = (void **)0x0;
      local_e8 = &local_1d8;
      local_e0 = &local_198;
      local_150 = &local_128;
      local_168.ArrayNum = 0;
      local_120 = this_02;
      local_108 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(int)local_240,1,(TFunctionRef<void___cdecl(int)> *)&local_158,
                 <Var24,(uint)(this->bUseParallel == false),&local_168);
      iVar11 = *(int *)((longlong)&pFVar22[1].Data + 4);
      *(undefined4 *)&pFVar22[1].Data = 0;
      pFVar8 = local_238;
      if (iVar11 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,local_238,0,(int *)((longlong)&pFVar22[1].Data + 4));
      }
      local_1d0 = local_230;
      local_24c = *(uint *)&local_230[1].Data;
      uVar15 = (ulonglong)(int)local_24c;
      pFVar20 = local_230->Data;
      pFVar19 = pFVar20 + uVar15 * 0x10;
      pFVar22 = pFVar8;
      while( true ) {
        if (*(int *)&local_1d0[1].Data != (int)uVar15) {
          local_277 = 0;
          `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_277);
        }
        if (pFVar20 == pFVar19) break;
        puVar21 = *(undefined4 **)&pFVar20->field_0x0;
        iVar11 = *(int *)&pFVar20[8].field_0x0;
        puVar2 = puVar21 + iVar11;
        while( true ) {
          if (*(int *)&pFVar20[8].field_0x0 != iVar11) {
            local_276[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_276);
          }
          if (puVar21 == puVar2) break;
          local_274 = *puVar21;
          if (((pFVar22->Data <= (FScriptContainerElement *)&local_274) &&
              ((FScriptContainerElement *)&local_274 <
               pFVar22->Data + (longlong)*(int *)((longlong)&pFVar22[1].Data + 4) * 4)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar12 = *(int *)&pFVar22[1].Data;
          piVar1 = (int *)((longlong)&pFVar22[1].Data + 4);
          if (iVar12 == *piVar1) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar22,piVar1);
          }
          *(int *)&pFVar22[1].Data = iVar12 + 1;
          puVar21 = puVar21 + 1;
          *(undefined4 *)(pFVar22->Data + (longlong)iVar12 * 4) = local_274;
        }
        iVar11 = *(int *)(pFVar20 + 0xc);
        *(undefined4 *)&pFVar20[8].field_0x0 = 0;
        if (iVar11 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pFVar20,0,(int *)(pFVar20 + 0xc));
        }
        pFVar20 = pFVar20 + 0x10;
        uVar15 = (ulonglong)local_24c;
        pFVar22 = local_238;
      }
      this_00 = local_1c8;
      this_02 = param_6;
    }
    iVar11 = 0;
    if ((bool)<Var24) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    Core::Private::Function::CheckCallable(this_00->Callable);
    pTVar5 = *(TFunctionStorage<0> **)&(this_00->Storage).field_0x18;
    p_Var6 = this_00->Callable;
    pTVar16 = &this_00->Storage;
    if (pTVar5 != (TFunctionStorage<0> *)0x0) {
      pTVar16 = pTVar5;
    }
    pvVar14 = (void *)(**(code **)(*(longlong *)pTVar16 + 8))();
    bVar23 = (*p_Var6)(pvVar14);
    if ((!bVar23) && (this->bComputeSigns == true)) {
      bVar23 = -1 < CpuChannel->Enabled;
      if (bVar23) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`private:_void___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill(UE::Math::TVector<float>,float,int,int,int,UE::Geometry::TDenseGrid3<float>&___ptr64)___ptr64'
                    ::__l15::__CpuProfilerEventSpecId966,"Geometry_SweepingMeshSDF_Signs",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\SweepingMeshSDF.h"
                   ,0x3c6);
        FCpuProfilerTrace::OutputBeginEvent
                  (`private:_void___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_floodfill(UE::Math::TVector<float>,float,int,int,int,UE::Geometry::TDenseGrid3<float>&___ptr64)___ptr64'
                   ::__l15::__CpuProfilerEventSpecId966);
      }
      local_1b8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      local_1b8._0_8_ = *(undefined8 *)&param_1->field0_0x0;
      compute_intersections
                (this,(TVector<float> *)&local_1b8._s_0,param_2,local_res20[0],param_4,param_5,
                 &this->IntersectionsGrid);
      bVar10 = Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
               ::operator()(this_00);
      pTVar7 = param_6;
      if (!bVar10) {
        if (this->ComputeMode == FullGrid) {
          do {
            local_1a8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
            local_1a8._0_8_ = *(undefined8 *)&param_1->field0_0x0;
            sweep_pass(this,(TVector<float> *)&local_1a8._s_0,param_2,pTVar7,&this->ClosestTriGrid);
            Core::Private::Function::CheckCallable(this_00->Callable);
            plVar3 = *(longlong **)&(this->CancelF).field_0x28;
            p_Var6 = this_00->Callable;
            plVar17 = (longlong *)&(this->CancelF).field_0x10;
            if (plVar3 != (longlong *)0x0) {
              plVar17 = plVar3;
            }
            pvVar14 = (void *)(**(code **)(*plVar17 + 8))();
            bVar10 = (*p_Var6)(pvVar14);
            if (bVar10) goto joined_r0x00014c9305d3;
            iVar11 = iVar11 + 1;
            this_02 = pTVar7;
          } while (iVar11 < 2);
        }
        compute_signs(this,local_res20[0],param_4,param_5,this_02,&this->IntersectionsGrid);
        Core::Private::Function::CheckCallable(this_00->Callable);
        pTVar5 = *(TFunctionStorage<0> **)&(this_00->Storage).field_0x18;
        p_Var6 = this_00->Callable;
        pTVar16 = &this_00->Storage;
        if (pTVar5 != (TFunctionStorage<0> *)0x0) {
          pTVar16 = pTVar5;
        }
        pvVar14 = (void *)(**(code **)(*(longlong *)pTVar16 + 8))(pTVar16);
        (*p_Var6)(pvVar14);
      }
joined_r0x00014c9305d3:
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  if (local_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_270.Data,(int)local_268);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_270.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_270.Data);
  }
  DestructItems<UE::FWindowsRecursiveMutex,int>
            ((FWindowsRecursiveMutex *)local_260.Data,(int)local_258);
  if (local_260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data);
  }
  return;
}

// make_level_set3_parallel_spatial @ 14c930660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_spatial
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TVector<float> *param_1,
          float param_2,int param_3,int param_4,int param_5,TDenseGrid3<float> *param_6,int param_7)

{
  TDenseGrid3<int> *this_00;
  TDenseGrid3<int> *this_01;
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 local_res18 [8];
  int local_res20;
  undefined1 local_e8 [12];
  uint uStack_dc;
  undefined1 local_d8 [16];
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *local_c8;
  TVector<float> *local_c0;
  float local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  TDenseGrid3<float> *local_a8;
  undefined8 local_a0;
  TDenseGrid3<int> *local_98;
  TDenseGrid3<int> *local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  undefined1 *local_68;
  
  local_res20 = param_3;
  TDenseGrid3<float>::Resize(param_6,param_3,param_4,param_5,Default);
  fVar8 = ((float)(param_6->Dimensions).field0_0x0._s_0.Y +
           (float)(param_6->Dimensions).field0_0x0._s_0.X +
          (float)(param_6->Dimensions).field0_0x0._s_0.Z) * this->CellSize;
  TDenseGrid3<float>::Assign(param_6,fVar8);
  this_00 = &this->ClosestTriGrid;
  TDenseGrid3<int>::Resize(this_00,param_3,param_4,param_5,Default);
  TDenseGrid3<int>::Assign(this_00,-1);
  this_01 = &this->IntersectionsGrid;
  TDenseGrid3<int>::Resize(this_01,param_3,param_4,param_5,Default);
  TDenseGrid3<int>::Assign(this_01,0);
  local_88 = (double)(float)*(undefined8 *)&param_1->field0_0x0;
  dStack_80 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  local_b0 = param_4;
  local_68 = local_res18;
  local_ac = param_5;
  iVar6 = 0;
  local_d8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_spatial'::__l2::<lambda_1>,void,int>
       ::Call;
  local_d8._8_8_ = &local_c8;
  local_res18[0] = 0;
  local_78 = (double)(param_1->field0_0x0)._s_0.Z;
  local_a8 = param_6;
  local_e8._0_8_ = (void **)0x0;
  stack0xffffffffffffff20 =
       (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **)((ulonglong)uStack_dc << 0x20);
  local_70 = __real_3ff0000000000000 / (double)param_2;
  local_a0 = (double)CONCAT44(fVar8,param_7);
  local_c8 = this;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b4 = param_3;
  local_98 = this_00;
  local_90 = this_01;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)local_d8,param_4._0_1_,None,
             (TArrayView<std::nullptr_t,int> *)local_e8);
  local_b0 = param_4;
  local_ac = param_5;
  local_e8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::make_level_set3_parallel_spatial'::__l2::<lambda_2>,void,int>
       ::Call;
  unique0x00009c00 = &local_c8;
  local_a8 = param_6;
  local_a0 = (double)(param_2 * __real_3fddb3d7) * (double)param_7;
  local_98 = (TDenseGrid3<int> *)CONCAT44(local_98._4_4_,fVar8);
  local_d8._0_8_ = (void **)0x0;
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  local_c8 = this;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b4 = param_3;
  local_90 = this_00;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Grid).Dimensions.field0_0x0._s_0.Z * (this->Grid).Dimensions.field0_0x0._s_0.Y *
             (this->Grid).Dimensions.field0_0x0._s_0.X,1,(TFunctionRef<void___cdecl(int)> *)local_e8
             ,param_4._0_1_,None,(TArrayView<std::nullptr_t,int> *)local_d8);
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar1 = *(code **)&this->CancelF;
  plVar7 = (longlong *)&(this->CancelF).field_0x10;
  plVar2 = *(longlong **)&(this->CancelF).field_0x28;
  plVar5 = plVar7;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar1)(uVar4);
  if (cVar3 != '\0') {
    return;
  }
  if (this->bComputeSigns == true) {
    local_e8._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    stack0xffffffffffffff20 =
         (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **)
         CONCAT44(uStack_dc,(param_1->field0_0x0)._s_0.Z);
    compute_intersections
              (this,(TVector<float> *)local_e8,param_2,local_res20,param_4,param_5,
               &this->IntersectionsGrid);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    pcVar1 = *(code **)&this->CancelF;
    plVar5 = plVar7;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar1)(uVar4);
    if (cVar3 != '\0') {
      return;
    }
    if (this->ComputeMode == FullGrid) {
      do {
        local_e8._0_8_ = *(undefined8 *)&param_1->field0_0x0;
        stack0xffffffffffffff20 =
             (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> **)
             CONCAT44(uStack_dc,(param_1->field0_0x0)._s_0.Z);
        sweep_pass(this,(TVector<float> *)local_e8,param_2,param_6,this_00);
        Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
        plVar2 = *(longlong **)&(this->CancelF).field_0x28;
        pcVar1 = *(code **)&this->CancelF;
        plVar5 = (longlong *)&(this->CancelF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar5 = plVar2;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        cVar3 = (*pcVar1)(uVar4);
        if (cVar3 != '\0') {
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
    }
    compute_signs(this,local_res20,param_4,param_5,param_6,&this->IntersectionsGrid);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    pcVar1 = *(code **)&this->CancelF;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    uVar4 = (**(code **)(*plVar7 + 8))(plVar7);
    cVar3 = (*pcVar1)(uVar4);
    if (cVar3 != '\0') {
      return;
    }
    if (this->bWantIntersectionsGrid == false) {
      TDenseGrid3<int>::Resize(&this->IntersectionsGrid,0,0,0,Default);
    }
  }
  if (this->bWantClosestTriGrid == false) {
    TDenseGrid3<int>::Resize(this_00,0,0,0,Default);
  }
  return;
}

// sweep @ 14c935200

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::sweep
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TDenseGrid3<float> *param_1,
          TDenseGrid3<int> *param_2,TVector<float> *param_3,float param_4,int param_5,int param_6,
          int param_7)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  code *pcVar8;
  FDynamicMesh3 *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  undefined8 uVar15;
  int *piVar16;
  uint *puVar17;
  float *pfVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  double dVar26;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  int local_a8;
  int local_a4;
  TVector<double>_u_0 local_a0 [4];
  
  local_100 = (param_1->Dimensions).field0_0x0._s_0.X;
  iVar25 = 1;
  if (param_5 < 1) {
    local_fc = local_100 + -2;
    local_100 = -1;
  }
  else {
    local_fc = 1;
  }
  local_104 = (param_1->Dimensions).field0_0x0._s_0.Y;
  if (param_6 < 1) {
    local_f8 = local_104 + -2;
    local_104 = -1;
  }
  else {
    local_f8 = 1;
  }
  local_a4 = (param_1->Dimensions).field0_0x0._s_0.Z;
  if (param_7 < 1) {
    iVar25 = local_a4 + -2;
    local_a4 = -1;
  }
  if (iVar25 != local_a4) {
    do {
      Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
      plVar7 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar8 = *(code **)&this->CancelF;
      plVar19 = (longlong *)&(this->CancelF).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar19 = plVar7;
      }
      uVar15 = (**(code **)(*plVar19 + 8))();
      cVar13 = (*pcVar8)(uVar15);
      iVar12 = local_f8;
      if (cVar13 != '\0') {
        return;
      }
      for (; iVar12 != local_104; iVar12 = iVar12 + param_6) {
        if (local_fc != local_100) {
          iVar24 = iVar25 - param_7;
          fVar2 = (param_3->field0_0x0)._s_0.X;
          fVar3 = (param_3->field0_0x0)._s_0.Z;
          fVar4 = (param_3->field0_0x0)._s_0.Y;
          iVar14 = -param_5;
          iVar23 = iVar12 - param_6;
          local_a8 = iVar14 + local_fc;
          iVar22 = local_fc;
          do {
            local_a0[0]._0_8_ = (undefined8)((float)iVar22 * param_4 + fVar2);
            local_a0[0]._8_8_ = (double)((float)iVar12 * param_4 + fVar4);
            local_a0[0]._16_8_ = (double)((float)iVar25 * param_4 + fVar3);
            piVar16 = TDenseGrid3<int>::At(param_2,local_a8,iVar12,iVar25);
            if (-1 < *piVar16) {
              pFVar9 = this->Mesh;
              puVar17 = (uint *)TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar12,iVar25);
              pFVar10 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
              uVar21 = (ulonglong)(*puVar17 & 0x1ff);
              lVar11 = *(longlong *)
                        ((pFVar9->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar17 >> 9) * 8);
              uVar5 = *(uint *)(lVar11 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_c0._s_0.X = *pdVar1;
              local_c0._s_0.Y = pdVar1[1];
              local_c0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_d8._s_0.X = *pdVar1;
              local_d8._s_0.Y = pdVar1[1];
              local_d8._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_f0._s_0.X = *pdVar1;
              local_f0._s_0.Y = pdVar1[1];
              local_f0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              dVar26 = PointTriangleDistance
                                 ((TVector<double> *)&local_a0[0]._s_0,
                                  (TVector<double> *)&local_c0._s_0,
                                  (TVector<double> *)&local_d8._s_0,
                                  (TVector<double> *)&local_f0._s_0);
              pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
              if ((float)dVar26 < *pfVar18) {
                pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
                *pfVar18 = (float)dVar26;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar12,iVar25);
                iVar6 = *piVar16;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar25);
                *piVar16 = iVar6;
              }
            }
            piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar23,iVar25);
            if (-1 < *piVar16) {
              pFVar9 = this->Mesh;
              puVar17 = (uint *)TDenseGrid3<int>::At(param_2,iVar22,iVar23,iVar25);
              pFVar10 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
              uVar21 = (ulonglong)(*puVar17 & 0x1ff);
              lVar11 = *(longlong *)
                        ((pFVar9->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar17 >> 9) * 8);
              uVar5 = *(uint *)(lVar11 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_f0._s_0.X = *pdVar1;
              local_f0._s_0.Y = pdVar1[1];
              local_f0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_d8._s_0.X = *pdVar1;
              local_d8._s_0.Y = pdVar1[1];
              local_d8._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_c0._s_0.X = *pdVar1;
              local_c0._s_0.Y = pdVar1[1];
              local_c0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              dVar26 = PointTriangleDistance
                                 ((TVector<double> *)&local_a0[0]._s_0,
                                  (TVector<double> *)&local_f0._s_0,
                                  (TVector<double> *)&local_d8._s_0,
                                  (TVector<double> *)&local_c0._s_0);
              pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
              if ((float)dVar26 < *pfVar18) {
                pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
                *pfVar18 = (float)dVar26;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar23,iVar25);
                iVar6 = *piVar16;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar25);
                *piVar16 = iVar6;
              }
            }
            piVar16 = TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar23,iVar25);
            if (-1 < *piVar16) {
              pFVar9 = this->Mesh;
              puVar17 = (uint *)TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar23,iVar25);
              pFVar10 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
              uVar21 = (ulonglong)(*puVar17 & 0x1ff);
              lVar11 = *(longlong *)
                        ((pFVar9->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar17 >> 9) * 8);
              uVar5 = *(uint *)(lVar11 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_f0._s_0.X = *pdVar1;
              local_f0._s_0.Y = pdVar1[1];
              local_f0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_d8._s_0.X = *pdVar1;
              local_d8._s_0.Y = pdVar1[1];
              local_d8._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_c0._s_0.X = *pdVar1;
              local_c0._s_0.Y = pdVar1[1];
              local_c0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              dVar26 = PointTriangleDistance
                                 ((TVector<double> *)&local_a0[0]._s_0,
                                  (TVector<double> *)&local_f0._s_0,
                                  (TVector<double> *)&local_d8._s_0,
                                  (TVector<double> *)&local_c0._s_0);
              pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
              if ((float)dVar26 < *pfVar18) {
                pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
                *pfVar18 = (float)dVar26;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar23,iVar25);
                iVar6 = *piVar16;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar25);
                *piVar16 = iVar6;
              }
            }
            piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar24);
            if (-1 < *piVar16) {
              pFVar9 = this->Mesh;
              puVar17 = (uint *)TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar24);
              pFVar10 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
              uVar21 = (ulonglong)(*puVar17 & 0x1ff);
              lVar11 = *(longlong *)
                        ((pFVar9->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar17 >> 9) * 8);
              uVar5 = *(uint *)(lVar11 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_f0._s_0.X = *pdVar1;
              local_f0._s_0.Y = pdVar1[1];
              local_f0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_d8._s_0.X = *pdVar1;
              local_d8._s_0.Y = pdVar1[1];
              local_d8._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_c0._s_0.X = *pdVar1;
              local_c0._s_0.Y = pdVar1[1];
              local_c0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              dVar26 = PointTriangleDistance
                                 ((TVector<double> *)&local_a0[0]._s_0,
                                  (TVector<double> *)&local_f0._s_0,
                                  (TVector<double> *)&local_d8._s_0,
                                  (TVector<double> *)&local_c0._s_0);
              pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
              if ((float)dVar26 < *pfVar18) {
                pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
                *pfVar18 = (float)dVar26;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar24);
                iVar6 = *piVar16;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar25);
                *piVar16 = iVar6;
              }
            }
            piVar16 = TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar12,iVar24);
            if (-1 < *piVar16) {
              pFVar9 = this->Mesh;
              puVar17 = (uint *)TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar12,iVar24);
              pFVar10 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
              uVar21 = (ulonglong)(*puVar17 & 0x1ff);
              lVar11 = *(longlong *)
                        ((pFVar9->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar17 >> 9) * 8);
              uVar5 = *(uint *)(lVar11 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_f0._s_0.X = *pdVar1;
              local_f0._s_0.Y = pdVar1[1];
              local_f0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_d8._s_0.X = *pdVar1;
              local_d8._s_0.Y = pdVar1[1];
              local_d8._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_c0._s_0.X = *pdVar1;
              local_c0._s_0.Y = pdVar1[1];
              local_c0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              dVar26 = PointTriangleDistance
                                 ((TVector<double> *)&local_a0[0]._s_0,
                                  (TVector<double> *)&local_f0._s_0,
                                  (TVector<double> *)&local_d8._s_0,
                                  (TVector<double> *)&local_c0._s_0);
              pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
              if ((float)dVar26 < *pfVar18) {
                pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
                *pfVar18 = (float)dVar26;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar12,iVar24);
                iVar6 = *piVar16;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar25);
                *piVar16 = iVar6;
              }
            }
            piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar23,iVar24);
            if (-1 < *piVar16) {
              pFVar9 = this->Mesh;
              puVar17 = (uint *)TDenseGrid3<int>::At(param_2,iVar22,iVar23,iVar24);
              pFVar10 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
              uVar21 = (ulonglong)(*puVar17 & 0x1ff);
              lVar11 = *(longlong *)
                        ((pFVar9->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar17 >> 9) * 8);
              uVar5 = *(uint *)(lVar11 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_f0._s_0.X = *pdVar1;
              local_f0._s_0.Y = pdVar1[1];
              local_f0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_d8._s_0.X = *pdVar1;
              local_d8._s_0.Y = pdVar1[1];
              local_d8._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_c0._s_0.X = *pdVar1;
              local_c0._s_0.Y = pdVar1[1];
              local_c0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              dVar26 = PointTriangleDistance
                                 ((TVector<double> *)&local_a0[0]._s_0,
                                  (TVector<double> *)&local_f0._s_0,
                                  (TVector<double> *)&local_d8._s_0,
                                  (TVector<double> *)&local_c0._s_0);
              pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
              if ((float)dVar26 < *pfVar18) {
                pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
                *pfVar18 = (float)dVar26;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar23,iVar24);
                iVar6 = *piVar16;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar25);
                *piVar16 = iVar6;
              }
            }
            piVar16 = TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar23,iVar24);
            if (-1 < *piVar16) {
              pFVar9 = this->Mesh;
              puVar17 = (uint *)TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar23,iVar24);
              pFVar10 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
              uVar21 = (ulonglong)(*puVar17 & 0x1ff);
              lVar11 = *(longlong *)
                        ((pFVar9->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar17 >> 9) * 8);
              uVar5 = *(uint *)(lVar11 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_f0._s_0.X = *pdVar1;
              local_f0._s_0.Y = pdVar1[1];
              local_f0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 4 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_d8._s_0.X = *pdVar1;
              local_d8._s_0.Y = pdVar1[1];
              local_d8._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              uVar5 = *(uint *)(lVar11 + 8 + uVar21 * 0xc);
              uVar20 = (ulonglong)(uVar5 & 0x1ff);
              pdVar1 = (double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + uVar20 * 0x18);
              local_c0._s_0.X = *pdVar1;
              local_c0._s_0.Y = pdVar1[1];
              local_c0._s_0.Z =
                   *(double *)
                    (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar20 * 0x18);
              dVar26 = PointTriangleDistance
                                 ((TVector<double> *)&local_a0[0]._s_0,
                                  (TVector<double> *)&local_f0._s_0,
                                  (TVector<double> *)&local_d8._s_0,
                                  (TVector<double> *)&local_c0._s_0);
              pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
              if ((float)dVar26 < *pfVar18) {
                pfVar18 = TDenseGrid3<float>::At(param_1,iVar22,iVar12,iVar25);
                *pfVar18 = (float)dVar26;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar14 + iVar22,iVar23,iVar24);
                iVar6 = *piVar16;
                piVar16 = TDenseGrid3<int>::At(param_2,iVar22,iVar12,iVar25);
                *piVar16 = iVar6;
              }
            }
            local_a8 = local_a8 + param_5;
            iVar22 = iVar22 + param_5;
          } while (iVar22 != local_100);
        }
      }
      iVar25 = iVar25 + param_7;
    } while (iVar25 != local_a4);
  }
  return;
}

// sweep_pass @ 14c935d80

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::sweep_pass
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this,TVector<float> *param_1,
          float param_2,TDenseGrid3<float> *param_3,TDenseGrid3<int> *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  TVector<float>_u_0 local_48 [2];
  
  local_48[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
  sweep(this,param_3,param_4,(TVector<float> *)&local_48[0]._s_0,param_2,1,1,1);
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  plVar1 = *(longlong **)&(this->CancelF).field_0x28;
  plVar7 = (longlong *)&(this->CancelF).field_0x10;
  pcVar2 = *(code **)&this->CancelF;
  plVar6 = plVar7;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar3 = (*pcVar2)(uVar5);
  if (cVar3 == '\0') {
    local_48[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_48[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
    sweep(this,param_3,param_4,(TVector<float> *)&local_48[0]._s_0,param_2,-1,-1,-1);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    plVar1 = *(longlong **)&(this->CancelF).field_0x28;
    pcVar2 = *(code **)&this->CancelF;
    plVar6 = plVar7;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar5);
    if (cVar3 == '\0') {
      local_48[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
      local_48[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
      sweep(this,param_3,param_4,(TVector<float> *)&local_48[0]._s_0,param_2,1,1,-1);
      Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
      plVar1 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar2 = *(code **)&this->CancelF;
      if (plVar1 != (longlong *)0x0) {
        plVar7 = plVar1;
      }
      uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
      cVar3 = (*pcVar2)(uVar5);
      if (cVar3 == '\0') {
        local_48[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
        local_48[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
        sweep(this,param_3,param_4,(TVector<float> *)&local_48[0]._s_0,param_2,-1,-1,1);
        bVar4 = Core::Private::Function::
                TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                              *)&this->CancelF);
        if (!bVar4) {
          local_48[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
          local_48[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
          sweep(this,param_3,param_4,(TVector<float> *)&local_48[0]._s_0,param_2,1,-1,1);
          bVar4 = Core::Private::Function::
                  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                                *)&this->CancelF);
          if (!bVar4) {
            local_48[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
            local_48[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
            sweep(this,param_3,param_4,(TVector<float> *)&local_48[0]._s_0,param_2,-1,1,-1);
            bVar4 = Core::Private::Function::
                    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                                  *)&this->CancelF);
            if (!bVar4) {
              local_48[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
              local_48[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
              sweep(this,param_3,param_4,(TVector<float> *)&local_48[0]._s_0,param_2,1,-1,-1);
              bVar4 = Core::Private::Function::
                      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                                    *)&this->CancelF);
              if (!bVar4) {
                local_48[0]._0_8_ = *(undefined8 *)&param_1->field0_0x0;
                local_48[0]._8_4_ = (param_1->field0_0x0)._s_0.Z;
                sweep(this,param_3,param_4,(TVector<float> *)&local_48[0]._s_0,param_2,-1,1,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// operator() @ 1505748e0

bool __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1174976994895462186>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1174976994895462186>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute(UE::Geometry::TAxisAlignedBox3<double>)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505749e0

bool __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute'::__l9::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1174976994895462121>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1174976994895462121>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute(UE::Math::TVector<float>,UE::Geometry::FVector3i)___ptr64'::`9'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574a60

bool __thiscall
`UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute'::__l9::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1174976994895462178>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1174976994895462178>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::Compute(UE::Geometry::TAxisAlignedBox3<double>)___ptr64'::`9'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

