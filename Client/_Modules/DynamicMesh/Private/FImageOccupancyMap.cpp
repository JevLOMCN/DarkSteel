// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// ~FImageOccupancyMap @ 14c89a260

void __thiscall UE::Geometry::FImageOccupancyMap::~FImageOccupancyMap(FImageOccupancyMap *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GutterTexels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BorderTexels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TexelQueryUVChart).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TexelQueryTriangle).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TexelQueryUV).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TexelInteriorSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TexelType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14c89b4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FImageOccupancyMap::
ClassifySamplesFromUVSpaceMesh<UE::Geometry::FDynamicMesh3,``UE::Geometry::FMeshMapBaker::Bake'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  FDynamicMesh3 *pFVar8;
  longlong *plVar9;
  code *pcVar10;
  double dVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int *piVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auStackY_388 [32];
  int local_358;
  int local_354;
  TVector2<double>_u_0 local_348;
  float local_338;
  float fStack_334;
  float local_330;
  float fStack_32c;
  ulonglong local_328;
  float local_320;
  float fStack_31c;
  longlong local_318;
  double local_310;
  double dStack_308;
  double local_300;
  double local_2e8;
  double local_2d8;
  ulonglong local_2d0;
  TVector2<double>_u_0 local_2c8;
  TVector2<double>_u_0 local_2b8;
  TVector2<double>_u_0 local_2a8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 TStack_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_180;
  double local_178;
  TVector<double>_u_0 local_168;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_f0;
  double local_e8;
  ulonglong local_d8;
  
  dVar15 = __real_3ee4f8b588000000;
  dVar14 = __real_3fe0000000000000;
  dVar13 = __real_3ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  piVar23 = *(int **)this;
  local_354 = 0;
  if (0 < piVar23[6]) {
    do {
      iVar1 = *piVar23;
      lVar26 = (longlong)iVar1;
      iVar18 = param_1 * piVar23[6] + local_354;
      lVar25 = (longlong)iVar18;
      lVar21 = (piVar23[3] + param_1) * lVar26 + (longlong)(piVar23[2] + local_354);
      local_318 = 0;
      local_358 = 0;
      iVar2 = piVar23[1];
      if (0 < piVar23[0x34] * piVar23[0x34]) {
        do {
          iVar3 = piVar23[0x34];
          pdVar5 = *(double **)((longlong)this + 0x30);
          auVar33._0_8_ = dVar13 / (double)iVar3;
          auVar33._8_8_ = 0;
          lVar24 = (iVar3 * iVar3) * lVar25 + local_318;
          dVar31 = (((double)(int)(lVar21 % lVar26) + dVar14) / (double)iVar1 - *pdVar5 * dVar14) +
                   ((double)(local_358 % iVar3) + dVar14) * auVar33._0_8_ * *pdVar5;
          local_300 = 0.0;
          dVar32 = (((double)(int)(lVar21 / lVar26) + dVar14) / (double)iVar2 - pdVar5[1] * dVar14)
                   + ((double)(local_358 / iVar3) + dVar14) * auVar33._0_8_ * pdVar5[1];
          local_348._s_0.X = dVar31;
          local_348._s_0.Y = dVar32;
          local_310 = dVar31;
          dStack_308 = dVar32;
          uVar19 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x20))
                             (*(longlong **)((longlong)this + 0x18),&local_310,&local_2d8,
                              *(undefined8 *)((longlong)this + 0x28));
          if (-1 < (int)uVar19) {
            uVar29 = (ulonglong)(uVar19 & 0x1ff);
            local_328 = (ulonglong)(uVar19 >> 9);
            lVar6 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x10);
            lVar7 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + local_328 * 8);
            uVar27 = *(uint *)(lVar7 + uVar29 * 0xc);
            pdVar5 = (double *)
                     (*(longlong *)(lVar6 + (ulonglong)(uVar27 >> 9) * 8) +
                     (ulonglong)(uVar27 & 0x1ff) * 0x18);
            local_2c8._s_0.X = *pdVar5;
            local_2c8._s_0.Y = pdVar5[1];
            uVar27 = *(uint *)(lVar7 + 4 + uVar29 * 0xc);
            pdVar5 = (double *)
                     (*(longlong *)(lVar6 + (ulonglong)(uVar27 >> 9) * 8) +
                     (ulonglong)(uVar27 & 0x1ff) * 0x18);
            local_2b8._s_0.X = *pdVar5;
            local_2b8._s_0.Y = pdVar5[1];
            uVar27 = *(uint *)(lVar7 + 8 + uVar29 * 0xc);
            uVar22 = (ulonglong)(uVar27 & 0x1ff);
            lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar27 >> 9) * 8);
            pdVar5 = (double *)(lVar6 + uVar22 * 0x18);
            local_2a8._s_0.X = *pdVar5;
            local_2a8._s_0.Y = pdVar5[1];
            local_2e8 = *(double *)(lVar6 + 0x10 + uVar22 * 0x18);
            local_2d0 = uVar29;
            uVar20 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                               ((FDynamicMesh3 *)(**(longlong **)((longlong)this + 0x10) + 0x130),
                                uVar19);
            bVar17 = UE::Geometry::TTriangle2<double>::IsInsideOrOn
                               ((TVector2<double> *)&local_2c8._s_0,
                                (TVector2<double> *)&local_2b8._s_0,
                                (TVector2<double> *)&local_2a8._s_0,
                                (TVector2<double> *)&local_348._s_0,0.0);
            dVar16 = dStack_308;
            dVar11 = local_310;
            uVar27 = (uint)((ulonglong)lVar24 >> 0x20);
            uVar12 = iVar18 >> 0x1f;
            if (bVar17) {
              lVar6 = *(longlong *)this;
              uVar27 = uVar27 >> 0x1f ^ 1;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x30)) {
                uVar19 = uVar27;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_338 = (float)dVar31;
              *(undefined1 *)(lVar24 + *(longlong *)(lVar6 + 0x28)) = 1;
              lVar6 = *(longlong *)this;
              fStack_334 = (float)dVar32;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x60)) {
                uVar19 = uVar27;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(ulonglong *)(*(longlong *)(lVar6 + 0x58) + lVar24 * 8) =
                   CONCAT44(fStack_334,local_338);
              lVar6 = *(longlong *)this;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x78)) {
                uVar19 = uVar27;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)(*(longlong *)(lVar6 + 0x70) + lVar24 * 4) = uVar20;
              lVar24 = *(longlong *)this;
              uVar19 = 0;
              if (lVar25 < *(longlong *)(lVar24 + 0x48)) {
                uVar19 = uVar12 >> 0x1f ^ 1;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
LAB_14c89bc6a:
              piVar23 = (int *)(*(longlong *)(lVar24 + 0x40) + lVar25 * 4);
              *piVar23 = *piVar23 + 1;
            }
            else {
              if (local_2d8 <
                  *(double *)((longlong)this + 0x20) * *(double *)((longlong)this + 0x20)) {
                pFVar8 = *(FDynamicMesh3 **)((longlong)this + 8);
                local_2e8 = local_300;
                if ((((int)((pFVar8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                           (pFVar8->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar19) ||
                    (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   ((pFVar8->TriangleRefCounts).RefCounts.Blocks.
                                                    AllocatorInstance.Data + local_328 * 8) +
                                                 uVar29 * 2) - 1U))) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mesh.IsTriangle(TriIdx)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                        ,0x1e,L""), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                          (pFVar8,uVar19,(TVector<double> *)&local_298._s_0,
                           (TVector<double> *)&TStack_280._s_0,(TVector<double> *)&local_268._s_0);
                local_1f8._s_0.Z = local_2e8;
                local_1e0 = local_298._s_0.X;
                dStack_1d8 = local_298._s_0.Y;
                local_1d0 = local_298._s_0.Z;
                dStack_1c8 = TStack_280._s_0.X;
                local_1c0 = TStack_280._s_0.Y;
                dStack_1b8 = TStack_280._s_0.Z;
                local_1f8._s_0.X = dVar11;
                local_1b0 = local_268._s_0.X;
                dStack_1a8 = local_268._s_0.Y;
                local_1a0 = local_268._s_0.Z;
                local_1f8._s_0.Y = dVar16;
                UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                          ((TDistPoint3Triangle3<double> *)&local_1f8._s_0);
                dVar31 = local_180 - dVar31;
                dVar32 = local_178 - dVar32;
                auVar30._0_8_ = dVar32 * dVar32 + dVar31 * dVar31;
                auVar30._8_8_ = 0;
                auVar33 = sqrtpd(auVar33,auVar30);
                if (auVar33._0_8_ <= 0.0) {
                  dVar11 = 0.0;
                  dVar31 = 0.0;
                }
                else {
                  dVar11 = dVar13 / auVar33._0_8_;
                  dVar31 = dVar11 * dVar31;
                  dVar11 = dVar11 * dVar32;
                }
                lVar6 = *(longlong *)this;
                uVar27 = uVar27 >> 0x1f ^ 1;
                dVar31 = dVar31 * dVar15 + local_180;
                uVar19 = 0;
                if (lVar24 < *(longlong *)(lVar6 + 0x30)) {
                  uVar19 = uVar27;
                }
                dVar32 = dVar11 * dVar15 + local_178;
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_330 = (float)dVar31;
                *(undefined1 *)(lVar24 + *(longlong *)(lVar6 + 0x28)) = 1;
                lVar6 = *(longlong *)this;
                fStack_32c = (float)dVar32;
                uVar19 = 0;
                if (lVar24 < *(longlong *)(lVar6 + 0x60)) {
                  uVar19 = uVar27;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(ulonglong *)(*(longlong *)(lVar6 + 0x58) + lVar24 * 8) =
                     CONCAT44(fStack_32c,local_330);
                lVar6 = *(longlong *)this;
                uVar19 = 0;
                if (lVar24 < *(longlong *)(lVar6 + 0x78)) {
                  uVar19 = uVar27;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(uint *)(*(longlong *)(lVar6 + 0x70) + lVar24 * 4) = uVar20;
                lVar24 = *(longlong *)this;
                uVar19 = 0;
                if (lVar25 < *(longlong *)(lVar24 + 0x48)) {
                  uVar19 = uVar12 >> 0x1f ^ 1;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                goto LAB_14c89bc6a;
              }
              lVar6 = *(longlong *)this;
              uVar28 = uVar27 >> 0x1f ^ 1;
              uVar27 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x30)) {
                uVar27 = uVar28;
              }
              if ((uVar27 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              dVar32 = dStack_308;
              dVar31 = local_310;
              *(undefined1 *)(lVar24 + *(longlong *)(lVar6 + 0x28)) = 3;
              pFVar8 = *(FDynamicMesh3 **)((longlong)this + 8);
              local_2e8 = local_300;
              if ((((int)((pFVar8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         (pFVar8->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar19) ||
                  (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 ((pFVar8->TriangleRefCounts).RefCounts.Blocks.
                                                  AllocatorInstance.Data + local_328 * 8) +
                                               local_2d0 * 2) - 1U))) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Mesh.IsTriangle(TriIdx)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                      ,0x1e,L""), bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                        (pFVar8,uVar19,(TVector<double> *)&local_248._s_0,
                         (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
              local_168._s_0.Z = local_2e8;
              local_150 = local_248._s_0.X;
              dStack_148 = local_248._s_0.Y;
              local_140 = local_248._s_0.Z;
              dStack_138 = TStack_230._s_0.X;
              local_130 = TStack_230._s_0.Y;
              dStack_128 = TStack_230._s_0.Z;
              local_168._s_0.X = dVar31;
              local_120 = local_218._s_0.X;
              dStack_118 = local_218._s_0.Y;
              local_110 = local_218._s_0.Z;
              local_168._s_0.Y = dVar32;
              UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_168._s_0);
              lVar6 = *(longlong *)this;
              local_320 = (float)local_f0;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x60)) {
                uVar19 = uVar28;
              }
              fStack_31c = (float)local_e8;
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(ulonglong *)(*(longlong *)(lVar6 + 0x58) + lVar24 * 8) =
                   CONCAT44(fStack_31c,local_320);
              lVar6 = *(longlong *)this;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x78)) {
                uVar19 = uVar28;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)(*(longlong *)(lVar6 + 0x70) + lVar24 * 4) = uVar20;
            }
            if ((int)uVar20 < *(int *)((longlong)this + 0x40)) {
              lVar24 = *(longlong *)this;
              uVar27 = uVar12 >> 0x1f ^ 1;
              uVar19 = 0;
              if (lVar25 < *(longlong *)(lVar24 + 0x90)) {
                uVar19 = uVar27;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (*(int *)(*(longlong *)(lVar24 + 0x88) + lVar25 * 4) == -1) {
                plVar9 = *(longlong **)((longlong)this + 0x38);
                uVar19 = 0;
                if ((int)uVar20 < (int)plVar9[1]) {
                  uVar19 = ~uVar20 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar24 = *(longlong *)this;
                uVar4 = *(undefined4 *)(*plVar9 + (longlong)(int)uVar20 * 4);
                uVar19 = 0;
                if (lVar25 < *(longlong *)(lVar24 + 0x90)) {
                  uVar19 = uVar27;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(undefined4 *)(*(longlong *)(lVar24 + 0x88) + lVar25 * 4) = uVar4;
              }
            }
          }
          piVar23 = *(int **)this;
          local_358 = local_358 + 1;
          local_318 = local_318 + 1;
        } while (local_358 < piVar23[0x34] * piVar23[0x34]);
      }
      local_354 = local_354 + 1;
    } while (local_354 < piVar23[6]);
  }
  return;
}

// operator() @ 14c89c080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FImageOccupancyMap::
ClassifySamplesFromUVSpaceMesh<UE::Geometry::FDynamicMesh3,`UE::Geometry::FMeshImageBakingCache::ValidateCache'::__l19::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  FDynamicMesh3 *pFVar8;
  longlong *plVar9;
  code *pcVar10;
  double dVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int *piVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auStackY_388 [32];
  int local_358;
  int local_354;
  TVector2<double>_u_0 local_348;
  float local_338;
  float fStack_334;
  float local_330;
  float fStack_32c;
  ulonglong local_328;
  float local_320;
  float fStack_31c;
  longlong local_318;
  double local_310;
  double dStack_308;
  double local_300;
  double local_2e8;
  double local_2d8;
  ulonglong local_2d0;
  TVector2<double>_u_0 local_2c8;
  TVector2<double>_u_0 local_2b8;
  TVector2<double>_u_0 local_2a8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 TStack_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_180;
  double local_178;
  TVector<double>_u_0 local_168;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_f0;
  double local_e8;
  ulonglong local_d8;
  
  dVar15 = __real_3ee4f8b588000000;
  dVar14 = __real_3fe0000000000000;
  dVar13 = __real_3ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  piVar23 = *(int **)this;
  local_354 = 0;
  if (0 < piVar23[6]) {
    do {
      iVar1 = *piVar23;
      lVar26 = (longlong)iVar1;
      iVar18 = param_1 * piVar23[6] + local_354;
      lVar25 = (longlong)iVar18;
      lVar21 = (piVar23[3] + param_1) * lVar26 + (longlong)(piVar23[2] + local_354);
      local_318 = 0;
      local_358 = 0;
      iVar2 = piVar23[1];
      if (0 < piVar23[0x34] * piVar23[0x34]) {
        do {
          iVar3 = piVar23[0x34];
          pdVar5 = *(double **)((longlong)this + 0x30);
          auVar33._0_8_ = dVar13 / (double)iVar3;
          auVar33._8_8_ = 0;
          lVar24 = (iVar3 * iVar3) * lVar25 + local_318;
          dVar31 = (((double)(int)(lVar21 % lVar26) + dVar14) / (double)iVar1 - *pdVar5 * dVar14) +
                   ((double)(local_358 % iVar3) + dVar14) * auVar33._0_8_ * *pdVar5;
          local_300 = 0.0;
          dVar32 = (((double)(int)(lVar21 / lVar26) + dVar14) / (double)iVar2 - pdVar5[1] * dVar14)
                   + ((double)(local_358 / iVar3) + dVar14) * auVar33._0_8_ * pdVar5[1];
          local_348._s_0.X = dVar31;
          local_348._s_0.Y = dVar32;
          local_310 = dVar31;
          dStack_308 = dVar32;
          uVar19 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x20))
                             (*(longlong **)((longlong)this + 0x18),&local_310,&local_2d8,
                              *(undefined8 *)((longlong)this + 0x28));
          if (-1 < (int)uVar19) {
            uVar29 = (ulonglong)(uVar19 & 0x1ff);
            local_328 = (ulonglong)(uVar19 >> 9);
            lVar6 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x10);
            lVar7 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + local_328 * 8);
            uVar27 = *(uint *)(lVar7 + uVar29 * 0xc);
            pdVar5 = (double *)
                     (*(longlong *)(lVar6 + (ulonglong)(uVar27 >> 9) * 8) +
                     (ulonglong)(uVar27 & 0x1ff) * 0x18);
            local_2c8._s_0.X = *pdVar5;
            local_2c8._s_0.Y = pdVar5[1];
            uVar27 = *(uint *)(lVar7 + 4 + uVar29 * 0xc);
            pdVar5 = (double *)
                     (*(longlong *)(lVar6 + (ulonglong)(uVar27 >> 9) * 8) +
                     (ulonglong)(uVar27 & 0x1ff) * 0x18);
            local_2b8._s_0.X = *pdVar5;
            local_2b8._s_0.Y = pdVar5[1];
            uVar27 = *(uint *)(lVar7 + 8 + uVar29 * 0xc);
            uVar22 = (ulonglong)(uVar27 & 0x1ff);
            lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar27 >> 9) * 8);
            pdVar5 = (double *)(lVar6 + uVar22 * 0x18);
            local_2a8._s_0.X = *pdVar5;
            local_2a8._s_0.Y = pdVar5[1];
            local_2e8 = *(double *)(lVar6 + 0x10 + uVar22 * 0x18);
            local_2d0 = uVar29;
            uVar20 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                               ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x10),uVar19);
            bVar17 = UE::Geometry::TTriangle2<double>::IsInsideOrOn
                               ((TVector2<double> *)&local_2c8._s_0,
                                (TVector2<double> *)&local_2b8._s_0,
                                (TVector2<double> *)&local_2a8._s_0,
                                (TVector2<double> *)&local_348._s_0,0.0);
            dVar16 = dStack_308;
            dVar11 = local_310;
            uVar27 = (uint)((ulonglong)lVar24 >> 0x20);
            uVar12 = iVar18 >> 0x1f;
            if (bVar17) {
              lVar6 = *(longlong *)this;
              uVar27 = uVar27 >> 0x1f ^ 1;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x30)) {
                uVar19 = uVar27;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_338 = (float)dVar31;
              *(undefined1 *)(lVar24 + *(longlong *)(lVar6 + 0x28)) = 1;
              lVar6 = *(longlong *)this;
              fStack_334 = (float)dVar32;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x60)) {
                uVar19 = uVar27;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(ulonglong *)(*(longlong *)(lVar6 + 0x58) + lVar24 * 8) =
                   CONCAT44(fStack_334,local_338);
              lVar6 = *(longlong *)this;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x78)) {
                uVar19 = uVar27;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)(*(longlong *)(lVar6 + 0x70) + lVar24 * 4) = uVar20;
              lVar24 = *(longlong *)this;
              uVar19 = 0;
              if (lVar25 < *(longlong *)(lVar24 + 0x48)) {
                uVar19 = uVar12 >> 0x1f ^ 1;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
LAB_14c89c823:
              piVar23 = (int *)(*(longlong *)(lVar24 + 0x40) + lVar25 * 4);
              *piVar23 = *piVar23 + 1;
            }
            else {
              if (local_2d8 <
                  *(double *)((longlong)this + 0x20) * *(double *)((longlong)this + 0x20)) {
                pFVar8 = *(FDynamicMesh3 **)((longlong)this + 8);
                local_2e8 = local_300;
                if ((((int)((pFVar8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                           (pFVar8->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar19) ||
                    (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   ((pFVar8->TriangleRefCounts).RefCounts.Blocks.
                                                    AllocatorInstance.Data + local_328 * 8) +
                                                 uVar29 * 2) - 1U))) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mesh.IsTriangle(TriIdx)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                        ,0x1e,L""), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                          (pFVar8,uVar19,(TVector<double> *)&local_298._s_0,
                           (TVector<double> *)&TStack_280._s_0,(TVector<double> *)&local_268._s_0);
                local_1f8._s_0.Z = local_2e8;
                local_1e0 = local_298._s_0.X;
                dStack_1d8 = local_298._s_0.Y;
                local_1d0 = local_298._s_0.Z;
                dStack_1c8 = TStack_280._s_0.X;
                local_1c0 = TStack_280._s_0.Y;
                dStack_1b8 = TStack_280._s_0.Z;
                local_1f8._s_0.X = dVar11;
                local_1b0 = local_268._s_0.X;
                dStack_1a8 = local_268._s_0.Y;
                local_1a0 = local_268._s_0.Z;
                local_1f8._s_0.Y = dVar16;
                UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                          ((TDistPoint3Triangle3<double> *)&local_1f8._s_0);
                dVar31 = local_180 - dVar31;
                dVar32 = local_178 - dVar32;
                auVar30._0_8_ = dVar32 * dVar32 + dVar31 * dVar31;
                auVar30._8_8_ = 0;
                auVar33 = sqrtpd(auVar33,auVar30);
                if (auVar33._0_8_ <= 0.0) {
                  dVar11 = 0.0;
                  dVar31 = 0.0;
                }
                else {
                  dVar11 = dVar13 / auVar33._0_8_;
                  dVar31 = dVar11 * dVar31;
                  dVar11 = dVar11 * dVar32;
                }
                lVar6 = *(longlong *)this;
                uVar27 = uVar27 >> 0x1f ^ 1;
                dVar31 = dVar31 * dVar15 + local_180;
                uVar19 = 0;
                if (lVar24 < *(longlong *)(lVar6 + 0x30)) {
                  uVar19 = uVar27;
                }
                dVar32 = dVar11 * dVar15 + local_178;
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_330 = (float)dVar31;
                *(undefined1 *)(lVar24 + *(longlong *)(lVar6 + 0x28)) = 1;
                lVar6 = *(longlong *)this;
                fStack_32c = (float)dVar32;
                uVar19 = 0;
                if (lVar24 < *(longlong *)(lVar6 + 0x60)) {
                  uVar19 = uVar27;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(ulonglong *)(*(longlong *)(lVar6 + 0x58) + lVar24 * 8) =
                     CONCAT44(fStack_32c,local_330);
                lVar6 = *(longlong *)this;
                uVar19 = 0;
                if (lVar24 < *(longlong *)(lVar6 + 0x78)) {
                  uVar19 = uVar27;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(uint *)(*(longlong *)(lVar6 + 0x70) + lVar24 * 4) = uVar20;
                lVar24 = *(longlong *)this;
                uVar19 = 0;
                if (lVar25 < *(longlong *)(lVar24 + 0x48)) {
                  uVar19 = uVar12 >> 0x1f ^ 1;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                goto LAB_14c89c823;
              }
              lVar6 = *(longlong *)this;
              uVar28 = uVar27 >> 0x1f ^ 1;
              uVar27 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x30)) {
                uVar27 = uVar28;
              }
              if ((uVar27 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              dVar32 = dStack_308;
              dVar31 = local_310;
              *(undefined1 *)(lVar24 + *(longlong *)(lVar6 + 0x28)) = 3;
              pFVar8 = *(FDynamicMesh3 **)((longlong)this + 8);
              local_2e8 = local_300;
              if ((((int)((pFVar8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         (pFVar8->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar19) ||
                  (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 ((pFVar8->TriangleRefCounts).RefCounts.Blocks.
                                                  AllocatorInstance.Data + local_328 * 8) +
                                               local_2d0 * 2) - 1U))) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Mesh.IsTriangle(TriIdx)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                      ,0x1e,L""), bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                        (pFVar8,uVar19,(TVector<double> *)&local_248._s_0,
                         (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
              local_168._s_0.Z = local_2e8;
              local_150 = local_248._s_0.X;
              dStack_148 = local_248._s_0.Y;
              local_140 = local_248._s_0.Z;
              dStack_138 = TStack_230._s_0.X;
              local_130 = TStack_230._s_0.Y;
              dStack_128 = TStack_230._s_0.Z;
              local_168._s_0.X = dVar31;
              local_120 = local_218._s_0.X;
              dStack_118 = local_218._s_0.Y;
              local_110 = local_218._s_0.Z;
              local_168._s_0.Y = dVar32;
              UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_168._s_0);
              lVar6 = *(longlong *)this;
              local_320 = (float)local_f0;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x60)) {
                uVar19 = uVar28;
              }
              fStack_31c = (float)local_e8;
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(ulonglong *)(*(longlong *)(lVar6 + 0x58) + lVar24 * 8) =
                   CONCAT44(fStack_31c,local_320);
              lVar6 = *(longlong *)this;
              uVar19 = 0;
              if (lVar24 < *(longlong *)(lVar6 + 0x78)) {
                uVar19 = uVar28;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              *(uint *)(*(longlong *)(lVar6 + 0x70) + lVar24 * 4) = uVar20;
            }
            if ((int)uVar20 < *(int *)((longlong)this + 0x40)) {
              lVar24 = *(longlong *)this;
              uVar27 = uVar12 >> 0x1f ^ 1;
              uVar19 = 0;
              if (lVar25 < *(longlong *)(lVar24 + 0x90)) {
                uVar19 = uVar27;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (*(int *)(*(longlong *)(lVar24 + 0x88) + lVar25 * 4) == -1) {
                plVar9 = *(longlong **)((longlong)this + 0x38);
                uVar19 = 0;
                if ((int)uVar20 < (int)plVar9[1]) {
                  uVar19 = ~uVar20 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar24 = *(longlong *)this;
                uVar4 = *(undefined4 *)(*plVar9 + (longlong)(int)uVar20 * 4);
                uVar19 = 0;
                if (lVar25 < *(longlong *)(lVar24 + 0x90)) {
                  uVar19 = uVar27;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                *(undefined4 *)(*(longlong *)(lVar24 + 0x88) + lVar25 * 4) = uVar4;
              }
            }
          }
          piVar23 = *(int **)this;
          local_358 = local_358 + 1;
          local_318 = local_318 + 1;
        } while (local_358 < piVar23[0x34] * piVar23[0x34]);
      }
      local_354 = local_354 + 1;
    } while (local_354 < piVar23[6]);
  }
  return;
}

// operator() @ 14c89ceb0

void __thiscall
`UE::Geometry::FImageOccupancyMap::ParallelProcessingPass<float>'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 local_res8 [2];
  int local_res10;
  int local_res18;
  int local_res20;
  float local_c8 [2];
  int local_c0;
  int local_bc;
  uint local_b8;
  float local_b0 [2];
  longlong local_a8;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80 [8];
  
  piVar9 = *(int **)this;
  local_res20 = 0;
  iVar17 = *piVar9;
  if (0 < iVar17) {
    local_res18 = 0;
    local_res10 = param_1;
    do {
      iVar10 = local_res20;
      iVar12 = local_res18;
      uVar6 = iVar17 * param_1 + local_res20;
      lVar11 = (longlong)(int)uVar6;
      uVar5 = 0;
      if (lVar11 < *(longlong *)(piVar9 + 0xc)) {
        uVar5 = (uint)((int)uVar6 >> 0x1f) >> 0x1f ^ 1;
      }
      local_b8 = uVar6;
      local_88 = lVar11;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(char *)(lVar11 + *(longlong *)(piVar9 + 10)) != '\0') {
        local_98 = lVar11;
        local_res8[0] =
             (*(code *)**(undefined8 **)((longlong)this + 8))
                       ((*(undefined8 **)((longlong)this + 8))[1],&local_98);
        iVar17 = *(int *)((longlong)this + 0x28);
        fVar19 = 0.0;
        iVar14 = **(int **)this + -1;
        iVar15 = iVar14;
        if (iVar17 + iVar10 < iVar14) {
          iVar15 = iVar17 + iVar10;
        }
        iVar16 = 0;
        if (0 < iVar15) {
          iVar16 = iVar15;
        }
        iVar7 = (*(int **)this)[1] + -1;
        iVar15 = iVar7;
        if (iVar17 + param_1 < iVar7) {
          iVar15 = iVar17 + param_1;
        }
        local_bc = 0;
        if (0 < iVar15) {
          local_bc = iVar15;
        }
        if (iVar10 - iVar17 < iVar14) {
          iVar14 = iVar10 - iVar17;
        }
        local_c0 = 0;
        if (0 < iVar14) {
          local_c0 = iVar14;
        }
        if (param_1 - iVar17 < iVar7) {
          iVar7 = param_1 - iVar17;
        }
        iVar17 = 0;
        if (0 < iVar7) {
          iVar17 = iVar7;
        }
        if (iVar17 <= local_bc) {
          lVar8 = (longlong)iVar17;
          iVar7 = iVar17 - local_res10;
          iVar15 = local_bc;
          iVar14 = local_c0;
          do {
            iVar10 = iVar14;
            if (iVar14 <= iVar16) {
              lVar11 = (longlong)iVar14;
              local_a8 = lVar8;
              do {
                piVar9 = *(int **)this;
                if ((((-1 < iVar14) && (iVar14 < *piVar9)) && (-1 < iVar17)) && (iVar17 < piVar9[1])
                   ) {
                  local_a0 = iVar12 + iVar14;
                  lVar13 = *piVar9 * lVar8 + lVar11;
                  uVar6 = 0;
                  if (lVar13 < *(longlong *)(piVar9 + 0xc)) {
                    uVar6 = (uint)((ulonglong)lVar13 >> 0x3f) ^ 1;
                  }
                  local_9c = iVar7;
                  if ((uVar6 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  lVar8 = local_a8;
                  iVar12 = local_res18;
                  if (*(char *)(lVar13 + *(longlong *)(piVar9 + 10)) != '\0') {
                    fVar18 = (float)(*(code *)**(undefined8 **)((longlong)this + 0x20))
                                              ((*(undefined8 **)((longlong)this + 0x20))[1],
                                               &local_a0);
                    local_c8[0] = fVar18;
                    local_90 = lVar13;
                    (*(code *)**(undefined8 **)((longlong)this + 0x10))
                              ((*(undefined8 **)((longlong)this + 0x10))[1],&local_90,local_c8,
                               local_res8);
                    fVar19 = fVar19 + fVar18;
                    lVar8 = local_a8;
                    iVar12 = local_res18;
                  }
                }
                iVar14 = iVar14 + 1;
                lVar11 = lVar11 + 1;
                iVar15 = local_bc;
                iVar10 = local_c0;
              } while (iVar14 <= iVar16);
            }
            iVar14 = iVar10;
            lVar8 = lVar8 + 1;
            iVar17 = iVar17 + 1;
            iVar7 = iVar7 + 1;
            lVar11 = local_88;
            iVar10 = local_res20;
            uVar6 = local_b8;
            local_a8 = lVar8;
          } while (iVar17 <= iVar15);
        }
        local_b0[0] = fVar19;
        local_80[0] = lVar11;
        (*(code *)**(undefined8 **)((longlong)this + 0x18))
                  ((*(undefined8 **)((longlong)this + 0x18))[1],local_80,local_b0,local_res8);
        uVar3 = local_res8[0];
        plVar1 = *(longlong **)((longlong)this + 0x30);
        uVar5 = 0;
        if ((int)uVar6 < (int)plVar1[1]) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)(*plVar1 + lVar11 * 4) = uVar3;
        param_1 = local_res10;
      }
      piVar9 = *(int **)this;
      local_res20 = iVar10 + 1;
      local_res18 = iVar12 + -1;
      iVar17 = *piVar9;
    } while (local_res20 < iVar17);
  }
  return;
}

// operator() @ 14c89d260

void __thiscall
`UE::Geometry::FImageOccupancyMap::ParallelProcessingPass<UE::Math::TVector<float>_>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  int local_res8;
  int local_res18;
  float local_res20 [2];
  float local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88 [9];
  
  piVar11 = *(int **)this;
  local_res18 = 0;
  iVar17 = *piVar11;
  if (0 < iVar17) {
    local_res8 = 0;
    do {
      uVar1 = iVar17 * param_1 + local_res18;
      lVar12 = (longlong)(int)uVar1;
      uVar7 = 0;
      if (lVar12 < *(longlong *)(piVar11 + 0xc)) {
        uVar7 = (uint)((int)uVar1 >> 0x1f) >> 0x1f ^ 1;
      }
      local_90 = lVar12;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)(lVar12 + *(longlong *)(piVar11 + 10)) != '\0') {
        local_a0 = lVar12;
        (*(code *)**(undefined8 **)((longlong)this + 8))
                  (&local_b8,(*(undefined8 **)((longlong)this + 8))[1],&local_a0);
        iVar17 = *(int *)((longlong)this + 0x28);
        fVar19 = 0.0;
        iVar14 = **(int **)this + -1;
        iVar8 = iVar14;
        if (iVar17 + local_res18 < iVar14) {
          iVar8 = iVar17 + local_res18;
        }
        iVar16 = 0;
        if (0 < iVar8) {
          iVar16 = iVar8;
        }
        iVar9 = (*(int **)this)[1] + -1;
        iVar8 = iVar9;
        if (iVar17 + param_1 < iVar9) {
          iVar8 = iVar17 + param_1;
        }
        iVar15 = 0;
        if (0 < iVar8) {
          iVar15 = iVar8;
        }
        if (local_res18 - iVar17 < iVar14) {
          iVar14 = local_res18 - iVar17;
        }
        iVar8 = 0;
        if (0 < iVar14) {
          iVar8 = iVar14;
        }
        if (param_1 - iVar17 < iVar9) {
          iVar9 = param_1 - iVar17;
        }
        iVar17 = 0;
        if (0 < iVar9) {
          iVar17 = iVar9;
        }
        if (iVar17 <= iVar15) {
          lVar10 = (longlong)iVar17;
          iVar14 = iVar17 - param_1;
          do {
            if (iVar8 <= iVar16) {
              lVar12 = (longlong)iVar8;
              iVar9 = iVar8;
              local_c0 = lVar10;
              do {
                piVar11 = *(int **)this;
                if ((((-1 < iVar9) && (iVar9 < *piVar11)) && (-1 < iVar17)) && (iVar17 < piVar11[1])
                   ) {
                  local_a8 = local_res8 + iVar9;
                  lVar13 = *piVar11 * lVar10 + lVar12;
                  uVar7 = 0;
                  if (lVar13 < *(longlong *)(piVar11 + 0xc)) {
                    uVar7 = (uint)((ulonglong)lVar13 >> 0x3f) ^ 1;
                  }
                  local_a4 = iVar14;
                  if ((uVar7 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  lVar10 = local_c0;
                  if (*(char *)(lVar13 + *(longlong *)(piVar11 + 10)) != '\0') {
                    fVar18 = (float)(*(code *)**(undefined8 **)((longlong)this + 0x20))
                                              ((*(undefined8 **)((longlong)this + 0x20))[1],
                                               &local_a8);
                    local_res20[0] = fVar18;
                    local_98 = lVar13;
                    (*(code *)**(undefined8 **)((longlong)this + 0x10))
                              ((*(undefined8 **)((longlong)this + 0x10))[1],&local_98,local_res20,
                               &local_b8);
                    fVar19 = fVar19 + fVar18;
                    lVar10 = local_c0;
                  }
                }
                iVar9 = iVar9 + 1;
                lVar12 = lVar12 + 1;
              } while (iVar9 <= iVar16);
            }
            lVar10 = lVar10 + 1;
            iVar17 = iVar17 + 1;
            iVar14 = iVar14 + 1;
            lVar12 = local_90;
            local_c0 = lVar10;
          } while (iVar17 <= iVar15);
        }
        local_c8[0] = fVar19;
        local_88[0] = lVar12;
        (*(code *)**(undefined8 **)((longlong)this + 0x18))
                  ((*(undefined8 **)((longlong)this + 0x18))[1],local_88,local_c8,&local_b8);
        uVar5 = local_b0;
        uVar4 = local_b8;
        plVar2 = *(longlong **)((longlong)this + 0x30);
        uVar7 = 0;
        if ((int)uVar1 < (int)plVar2[1]) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar10 = *plVar2;
        *(undefined8 *)(lVar10 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(lVar10 + 8 + lVar12 * 0xc) = uVar5;
      }
      piVar11 = *(int **)this;
      local_res18 = local_res18 + 1;
      local_res8 = local_res8 + -1;
      iVar17 = *piVar11;
    } while (local_res18 < iVar17);
  }
  return;
}

// operator() @ 14c89f1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FImageOccupancyMap::ComputeGutterTexelsFromGutterSamples'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  int *piVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint local_res10;
  longlong local_58;
  longlong lStack_50;
  
  lVar12 = _UNK_15060db28;
  lVar11 = ___xmm_ffffffffffffffffffffffffffffffff;
  piVar23 = *(int **)this;
  uVar26 = 0;
  lVar25 = (longlong)param_1;
  local_res10 = 0;
  uVar20 = uVar26;
  if (0 < piVar23[6]) {
    do {
      iVar2 = piVar23[3];
      iVar3 = *piVar23;
      iVar4 = piVar23[2];
      iVar5 = piVar23[6];
      local_58 = lVar11;
      lStack_50 = lVar12;
      uVar21 = uVar26;
      uVar24 = uVar26;
      if (0 < piVar23[0x34] * piVar23[0x34]) {
        do {
          lVar17 = (longlong)(piVar23[0x34] * piVar23[0x34]) *
                   (longlong)(param_1 * iVar5 + (int)uVar20);
          lVar18 = (int)uVar21 + lVar17;
          uVar22 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
          lVar17 = uVar24 + lVar17;
          uVar19 = 0;
          if (lVar18 < *(longlong *)(piVar23 + 0xc)) {
            uVar19 = uVar22;
          }
          if ((uVar19 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(char *)(lVar17 + *(longlong *)(piVar23 + 10)) == '\x01') {
            lStack_50 = lVar12;
            local_58 = lVar11;
            break;
          }
          lVar18 = *(longlong *)this;
          uVar14 = 0;
          uVar19 = uVar14;
          if (lVar17 < *(longlong *)(lVar18 + 0x30)) {
            uVar19 = uVar22;
          }
          if ((uVar19 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(char *)(lVar17 + *(longlong *)(lVar18 + 0x28)) == '\x03') {
            lVar18 = *(longlong *)this;
            uVar19 = uVar14;
            if (lVar17 < *(longlong *)(lVar18 + 0x60)) {
              uVar19 = uVar22;
            }
            if ((uVar19 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar18 = *(longlong *)(lVar18 + 0x58);
            iVar6 = **(int **)this;
            iVar7 = (*(int **)this)[1];
            uVar19 = iVar7 - 1;
            uVar15 = (uint)((float)iVar6 * *(float *)(lVar18 + lVar17 * 8));
            uVar22 = iVar6 - 1U;
            if ((int)uVar15 < (int)(iVar6 - 1U)) {
              uVar22 = uVar15;
            }
            uVar15 = (uint)(*(float *)(lVar18 + 4 + lVar17 * 8) * (float)iVar7);
            if ((int)uVar15 < (int)uVar19) {
              uVar19 = uVar15;
            }
            uVar15 = uVar14;
            if (0 < (int)uVar19) {
              uVar15 = uVar19;
            }
            if (0 < (int)uVar22) {
              uVar14 = uVar22;
            }
            lStack_50 = (longlong)(int)uVar15 * (longlong)iVar6 + (longlong)(int)uVar14;
            local_58 = (longlong)(iVar2 + param_1) * (longlong)iVar3 +
                       (longlong)(iVar4 + (int)uVar20);
          }
          piVar23 = *(int **)this;
          uVar19 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar19;
          uVar24 = uVar24 + 1;
        } while ((int)uVar19 < piVar23[0x34] * piVar23[0x34]);
        if ((local_58 != -1) || (lStack_50 != -1)) {
          plVar8 = *(longlong **)((longlong)this + 0x10);
          uVar19 = 0;
          if (param_1 < (int)plVar8[1]) {
            uVar19 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar17 = *plVar8;
          pFVar1 = (ForAnyElementType *)(lVar17 + lVar25 * 0x18);
          plVar8 = *(longlong **)(lVar17 + lVar25 * 0x18);
          if (((plVar8 <= &local_58) && (&local_58 < plVar8 + (longlong)pFVar1[2].Data * 2)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar16 = pFVar1[1].Data;
          if (pFVar16 == pFVar1[2].Data) {
            pFVar16 = (FScriptContainerElement *)
                      UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                                (0x810,pFVar1,(long64 *)(pFVar1 + 2));
          }
          pFVar1[1].Data = pFVar16 + 1;
          pFVar9 = pFVar1->Data;
          *(longlong *)(pFVar9 + (longlong)pFVar16 * 0x10) = local_58;
          *(longlong *)(pFVar9 + (longlong)pFVar16 * 0x10 + 8) = lStack_50;
        }
      }
      piVar23 = *(int **)this;
      local_res10 = local_res10 + 1;
      uVar20 = (ulonglong)local_res10;
    } while ((int)local_res10 < piVar23[6]);
  }
  plVar8 = *(longlong **)((longlong)this + 0x10);
  uVar19 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  LOCK();
  **(longlong **)((longlong)this + 8) =
       **(longlong **)((longlong)this + 8) + *(longlong *)(*plVar8 + 8 + lVar25 * 0x18);
  UNLOCK();
  return;
}

// ComputeGutterTexelsFromGutterSamples @ 14c8c9880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FImageOccupancyMap::ComputeGutterTexelsFromGutterSamples(FImageOccupancyMap *this)

{
  long64 *plVar1;
  TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *pTVar2;
  TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  long64 lVar9;
  ForAnyElementType FVar10;
  <lambda_1> local_res8 [8];
  ulong64 local_res10;
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
  local_78;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FImageOccupancyMap **local_50;
  FImageOccupancyMap *local_48;
  ulong64 *local_40;
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
  *local_38;
  
  local_res10 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>::
  SetNum(&local_78,(this->Tile).Height,Default);
  local_40 = &local_res10;
  local_38 = &local_78;
  local_68.DataPtr = (void **)0x0;
  local_68.ArrayNum = 0;
  local_58 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FImageOccupancyMap::ComputeGutterTexelsFromGutterSamples'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = &local_48;
  local_48 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Tile).Height,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             local_res8[0],(uint)(this->bParallel == false),&local_68);
  pTVar2 = &this->GutterTexels;
  if ((longlong)local_res10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(local_res10);
  }
  plVar1 = &(this->GutterTexels).ArrayMax;
  if (*plVar1 < (longlong)local_res10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,8,local_res10,&pTVar2->AllocatorInstance,(this->GutterTexels).ArrayNum,plVar1);
  }
  iVar6 = local_78.ArrayNum;
  pTVar3 = (TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)
           (local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x18);
  FVar10.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar6) {
      local_res8[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)FVar10.Data == pTVar3) break;
    if (pTVar2 == (TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)FVar10.Data) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    lVar4 = ((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)FVar10.Data)->ArrayNum;
    if (lVar4 != 0) {
      lVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                        (0x10,8,lVar4,&pTVar2->AllocatorInstance,&(this->GutterTexels).ArrayNum,
                         plVar1);
      memcpy((pTVar2->AllocatorInstance).Data + lVar9 * 0x10,
             (((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)FVar10.Data)->
             AllocatorInstance).Data,lVar4 << 4);
    }
    FVar10.Data = FVar10.Data + 0x18;
  }
  DestructItems<TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_>,int>
            ((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)
             local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)local_78.AllocatorInstance.Data
      != (TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<64>_> *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return true;
}

