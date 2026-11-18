// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// operator() @ 14c9a9750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FImageOccupancyMap::
ClassifySamplesFromUVSpaceMesh<UE::PlanarCut::FGeomFlatUVMesh,`UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  FGeomFlatUVMesh *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  bool *pbVar22;
  int *piVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auStackY_3c8 [32];
  int local_398;
  int local_394;
  TVector2<double>_u_0 local_380;
  float local_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  longlong local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double local_330;
  undefined8 local_328;
  double local_308;
  TVector2<double>_u_0 local_2f8;
  TVector2<double>_u_0 local_2e8;
  TVector2<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 TStack_2b0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 TStack_260;
  TVector<double>_u_0 local_248;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TVector<double>_u_0 local_208;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_190;
  double local_188;
  TVector<double>_u_0 local_178;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_100;
  double local_f8;
  ulonglong local_e8;
  
  dVar16 = __real_3ee4f8b588000000;
  dVar15 = __real_3fe0000000000000;
  dVar14 = __real_3ff0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  piVar23 = *(int **)this;
  local_394 = 0;
  if (0 < piVar23[6]) {
    do {
      iVar3 = *piVar23;
      lVar27 = (longlong)iVar3;
      iVar18 = param_1 * piVar23[6] + local_394;
      lVar26 = (longlong)iVar18;
      lVar21 = (piVar23[3] + param_1) * lVar27 + (longlong)(piVar23[2] + local_394);
      local_350 = 0;
      local_398 = 0;
      iVar4 = piVar23[1];
      if (0 < piVar23[0x34] * piVar23[0x34]) {
        do {
          iVar5 = piVar23[0x34];
          pdVar7 = *(double **)((longlong)this + 0x30);
          dVar34 = dVar14 / (double)iVar5;
          lVar25 = (iVar5 * iVar5) * lVar26 + local_350;
          local_380._s_0.X =
               (((double)(int)(lVar21 % lVar27) + dVar15) / (double)iVar3 - *pdVar7 * dVar15) +
               ((double)(local_398 % iVar5) + dVar15) * dVar34 * *pdVar7;
          local_338 = 0.0;
          local_380._s_0.Y =
               (((double)(int)(lVar21 / lVar27) + dVar15) / (double)iVar4 - pdVar7[1] * dVar15) +
               ((double)(local_398 / iVar5) + dVar15) * dVar34 * pdVar7[1];
          local_348 = local_380._s_0.X;
          dStack_340 = local_380._s_0.Y;
          uVar19 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x20))
                             (*(longlong **)((longlong)this + 0x18),&local_348,&local_330,
                              *(undefined8 *)((longlong)this + 0x28));
          lVar30 = (longlong)(int)uVar19;
          if (-1 < (int)uVar19) {
            plVar8 = *(longlong **)((longlong)this + 8);
            lVar9 = *plVar8;
            uVar20 = 0;
            if ((int)uVar19 < *(int *)(lVar9 + 0x2f8)) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar9 = *(longlong *)(lVar9 + 0x2f0);
            local_328 = *(longlong *)(lVar9 + lVar30 * 0xc);
            iVar5 = *(int *)(lVar9 + 8 + lVar30 * 0xc);
            lVar9 = plVar8[4];
            lVar29 = (longlong)(int)local_328;
            if (((int)local_328 < 0 || *(int *)(lVar9 + 0x18) <= (int)local_328) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar9 = *(longlong *)(lVar9 + 0x10);
            fVar1 = *(float *)(lVar9 + lVar29 * 8);
            fVar2 = *(float *)(lVar9 + 4 + lVar29 * 8);
            lVar9 = plVar8[4];
            lVar29 = (longlong)local_328._4_4_;
            if ((local_328 < 0 || *(int *)(lVar9 + 0x18) <= local_328._4_4_) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar9 = *(longlong *)(lVar9 + 0x10);
            lVar10 = plVar8[4];
            dVar34 = (double)*(float *)(lVar9 + lVar29 * 8);
            dVar13 = (double)*(float *)(lVar9 + 4 + lVar29 * 8);
            if ((iVar5 < 0 || *(int *)(lVar10 + 0x18) <= iVar5) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar9 = *(longlong *)(lVar10 + 0x10);
            local_2d8._s_0.X = (double)*(float *)(lVar9 + (longlong)iVar5 * 8);
            auVar33._0_8_ = (double)*(float *)(lVar9 + 4 + (longlong)iVar5 * 8);
            auVar33._8_8_ = 0;
            local_2f8._s_0.X = (double)fVar1;
            local_2f8._s_0.Y = (double)fVar2;
            local_2e8._s_0.X = dVar34;
            local_2e8._s_0.Y = dVar13;
            local_2d8._s_0.Y = auVar33._0_8_;
            local_228 = dVar34;
            dStack_220 = dVar13;
            local_218 = local_2d8._s_0.X;
            dStack_210 = auVar33._0_8_;
            bVar17 = UE::Geometry::TTriangle2<double>::IsInsideOrOn
                               ((TVector2<double> *)&local_2f8._s_0,
                                (TVector2<double> *)&local_2e8._s_0,
                                (TVector2<double> *)&local_2d8._s_0,
                                (TVector2<double> *)&local_380._s_0,0.0);
            dVar13 = dStack_340;
            dVar34 = local_348;
            uVar20 = (uint)((ulonglong)lVar25 >> 0x20);
            uVar24 = iVar18 >> 0x1f;
            if (bVar17) {
              lVar9 = *(longlong *)this;
              uVar28 = uVar20 >> 0x1f ^ 1;
              uVar20 = 0;
              if (lVar25 < *(longlong *)(lVar9 + 0x30)) {
                uVar20 = uVar28;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_370 = (float)local_380._s_0.X;
              *(undefined1 *)(lVar25 + *(longlong *)(lVar9 + 0x28)) = 1;
              lVar9 = *(longlong *)this;
              fStack_36c = (float)local_380._s_0.Y;
              uVar20 = 0;
              if (lVar25 < *(longlong *)(lVar9 + 0x60)) {
                uVar20 = uVar28;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              *(ulonglong *)(*(longlong *)(lVar9 + 0x58) + lVar25 * 8) =
                   CONCAT44(fStack_36c,local_370);
              lVar9 = *(longlong *)this;
              uVar20 = 0;
              if (lVar25 < *(longlong *)(lVar9 + 0x78)) {
                uVar20 = uVar28;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              *(uint *)(*(longlong *)(lVar9 + 0x70) + lVar25 * 4) = uVar19;
              lVar25 = *(longlong *)this;
              uVar20 = 0;
              if (lVar26 < *(longlong *)(lVar25 + 0x48)) {
                uVar20 = uVar24 >> 0x1f ^ 1;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
LAB_14c9a9fc5:
              piVar23 = (int *)(*(longlong *)(lVar25 + 0x40) + lVar26 * 4);
              *piVar23 = *piVar23 + 1;
            }
            else {
              if (local_330 <
                  *(double *)((longlong)this + 0x20) * *(double *)((longlong)this + 0x20)) {
                pFVar11 = *(FGeomFlatUVMesh **)((longlong)this + 8);
                local_308 = local_338;
                pbVar22 = TArrayView<bool,int>::operator[](&pFVar11->ActiveTriangles,uVar19);
                if ((*pbVar22 == false) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mesh.IsTriangle(TriIdx)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                        ,0x1e,L""), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                UE::PlanarCut::FGeomFlatUVMesh::GetTriVertices
                          (pFVar11,uVar19,(TVector<double> *)&local_2c8._s_0,
                           (TVector<double> *)&TStack_2b0._s_0,(TVector<double> *)&local_298._s_0);
                local_208._s_0.Z = local_308;
                local_1f0 = local_2c8._s_0.X;
                dStack_1e8 = local_2c8._s_0.Y;
                local_1e0 = local_2c8._s_0.Z;
                dStack_1d8 = TStack_2b0._s_0.X;
                local_1d0 = TStack_2b0._s_0.Y;
                dStack_1c8 = TStack_2b0._s_0.Z;
                local_208._s_0.X = dVar34;
                local_1c0 = local_298._s_0.X;
                dStack_1b8 = local_298._s_0.Y;
                local_1b0 = local_298._s_0.Z;
                local_208._s_0.Y = dVar13;
                UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                          ((TDistPoint3Triangle3<double> *)&local_208._s_0);
                dVar13 = local_190 - local_380._s_0.X;
                dVar34 = local_188 - local_380._s_0.Y;
                auVar32._0_8_ = dVar34 * dVar34 + dVar13 * dVar13;
                auVar32._8_8_ = 0;
                auVar33 = sqrtpd(auVar33,auVar32);
                if (auVar33._0_8_ <= 0.0) {
                  dVar34 = 0.0;
                  dVar13 = 0.0;
                }
                else {
                  dVar31 = dVar14 / auVar33._0_8_;
                  dVar34 = dVar34 * dVar31;
                  dVar13 = dVar13 * dVar31;
                }
                lVar9 = *(longlong *)this;
                uVar28 = uVar20 >> 0x1f ^ 1;
                dVar13 = dVar13 * dVar16 + local_190;
                uVar20 = 0;
                if (lVar25 < *(longlong *)(lVar9 + 0x30)) {
                  uVar20 = uVar28;
                }
                dVar34 = dVar34 * dVar16 + local_188;
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                local_368 = (float)dVar13;
                *(undefined1 *)(lVar25 + *(longlong *)(lVar9 + 0x28)) = 1;
                lVar9 = *(longlong *)this;
                fStack_364 = (float)dVar34;
                uVar20 = 0;
                if (lVar25 < *(longlong *)(lVar9 + 0x60)) {
                  uVar20 = uVar28;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                *(ulonglong *)(*(longlong *)(lVar9 + 0x58) + lVar25 * 8) =
                     CONCAT44(fStack_364,local_368);
                lVar9 = *(longlong *)this;
                uVar20 = 0;
                if (lVar25 < *(longlong *)(lVar9 + 0x78)) {
                  uVar20 = uVar28;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                *(uint *)(*(longlong *)(lVar9 + 0x70) + lVar25 * 4) = uVar19;
                lVar25 = *(longlong *)this;
                uVar20 = 0;
                if (lVar26 < *(longlong *)(lVar25 + 0x48)) {
                  uVar20 = uVar24 >> 0x1f ^ 1;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                goto LAB_14c9a9fc5;
              }
              lVar9 = *(longlong *)this;
              uVar28 = uVar20 >> 0x1f ^ 1;
              uVar20 = 0;
              if (lVar25 < *(longlong *)(lVar9 + 0x30)) {
                uVar20 = uVar28;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              dVar13 = dStack_340;
              dVar34 = local_348;
              *(undefined1 *)(lVar25 + *(longlong *)(lVar9 + 0x28)) = 3;
              pFVar11 = *(FGeomFlatUVMesh **)((longlong)this + 8);
              local_308 = local_338;
              pbVar22 = TArrayView<bool,int>::operator[](&pFVar11->ActiveTriangles,uVar19);
              if ((*pbVar22 == false) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Mesh.IsTriangle(TriIdx)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                      ,0x1e,L""), bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              UE::PlanarCut::FGeomFlatUVMesh::GetTriVertices
                        (pFVar11,uVar19,(TVector<double> *)&local_278._s_0,
                         (TVector<double> *)&TStack_260._s_0,(TVector<double> *)&local_248._s_0);
              local_178._s_0.Z = local_308;
              local_160 = local_278._s_0.X;
              dStack_158 = local_278._s_0.Y;
              local_150 = local_278._s_0.Z;
              dStack_148 = TStack_260._s_0.X;
              local_140 = TStack_260._s_0.Y;
              dStack_138 = TStack_260._s_0.Z;
              local_178._s_0.X = dVar34;
              local_130 = local_248._s_0.X;
              dStack_128 = local_248._s_0.Y;
              local_120 = local_248._s_0.Z;
              local_178._s_0.Y = dVar13;
              UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_178._s_0);
              lVar9 = *(longlong *)this;
              local_360 = (float)local_100;
              uVar20 = 0;
              if (lVar25 < *(longlong *)(lVar9 + 0x60)) {
                uVar20 = uVar28;
              }
              fStack_35c = (float)local_f8;
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              *(ulonglong *)(*(longlong *)(lVar9 + 0x58) + lVar25 * 8) =
                   CONCAT44(fStack_35c,local_360);
              lVar9 = *(longlong *)this;
              uVar20 = 0;
              if (lVar25 < *(longlong *)(lVar9 + 0x78)) {
                uVar20 = uVar28;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              *(uint *)(*(longlong *)(lVar9 + 0x70) + lVar25 * 4) = uVar19;
            }
            if ((int)uVar19 < *(int *)((longlong)this + 0x40)) {
              lVar25 = *(longlong *)this;
              uVar24 = uVar24 >> 0x1f ^ 1;
              uVar20 = 0;
              if (lVar26 < *(longlong *)(lVar25 + 0x90)) {
                uVar20 = uVar24;
              }
              if ((uVar20 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(int *)(*(longlong *)(lVar25 + 0x88) + lVar26 * 4) == -1) {
                plVar8 = *(longlong **)((longlong)this + 0x38);
                uVar20 = 0;
                if ((int)uVar19 < (int)plVar8[1]) {
                  uVar20 = ~uVar19 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                lVar25 = *(longlong *)this;
                uVar6 = *(undefined4 *)(*plVar8 + lVar30 * 4);
                uVar19 = 0;
                if (lVar26 < *(longlong *)(lVar25 + 0x90)) {
                  uVar19 = uVar24;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                *(undefined4 *)(*(longlong *)(lVar25 + 0x88) + lVar26 * 4) = uVar6;
              }
            }
          }
          piVar23 = *(int **)this;
          local_398 = local_398 + 1;
          local_350 = local_350 + 1;
        } while (local_398 < piVar23[0x34] * piVar23[0x34]);
      }
      local_394 = local_394 + 1;
    } while (local_394 < piVar23[6]);
  }
  return;
}

