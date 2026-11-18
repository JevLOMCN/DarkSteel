// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// ArePolygonsValid @ 147c372e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGeomTools2D::ArePolygonsValid
          (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  float fVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  uint local_res20;
  longlong local_108;
  
  fVar11 = __real_3f800000;
  iVar1 = param_1->ArrayNum;
  local_res20 = 0;
  if (0 < iVar1) {
    lVar26 = 0;
    lVar24 = 0;
    while( true ) {
      uVar15 = 0;
      if ((int)local_res20 < param_1->ArrayNum) {
        uVar15 = ~local_res20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      pTVar22 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                ((param_1->AllocatorInstance).Data + lVar24);
      bVar12 = IsPolygonWindingCCW(pTVar22);
      local_108 = lVar26 + 1;
      lVar10 = lVar24;
      uVar15 = local_res20;
      if (iVar1 <= local_108) break;
      do {
        uVar15 = uVar15 + 1;
        uVar20 = 0;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        pTVar23 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                  ((param_1->AllocatorInstance).Data + lVar10 + 0x10);
        bVar14 = IsPolygonWindingCCW(pTVar23);
        if ((!bVar12) || (!bVar14)) {
          iVar16 = pTVar22->ArrayNum;
          uVar20 = 0;
          if (0 < iVar16) {
            lVar25 = 0;
            do {
              uVar19 = 0;
              if ((int)uVar20 < iVar16) {
                uVar19 = ~uVar20 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              pFVar2 = (pTVar22->AllocatorInstance).Data;
              uVar17 = (int)(uVar20 + 1) % pTVar22->ArrayNum;
              uVar19 = 0;
              if ((int)uVar17 < pTVar22->ArrayNum) {
                uVar19 = ~uVar17 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              pFVar3 = (pTVar22->AllocatorInstance).Data;
              iVar16 = pTVar23->ArrayNum;
              uVar19 = 0;
              dVar6 = *(double *)(pFVar3 + (longlong)(int)uVar17 * 0x10) -
                      *(double *)(pFVar2 + lVar25);
              dVar7 = *(double *)(pFVar3 + (longlong)(int)uVar17 * 0x10 + 8) -
                      *(double *)(pFVar2 + lVar25 + 8);
              if (0 < iVar16) {
                lVar21 = 0;
                do {
                  uVar17 = 0;
                  if ((int)uVar19 < iVar16) {
                    uVar17 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  pFVar3 = (pTVar23->AllocatorInstance).Data + lVar21;
                  dVar8 = *(double *)pFVar3;
                  dVar9 = *(double *)(pFVar3 + 8);
                  uVar18 = (int)(uVar19 + 1) % pTVar23->ArrayNum;
                  uVar17 = 0;
                  if ((int)uVar18 < pTVar23->ArrayNum) {
                    uVar17 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  pFVar3 = (pTVar23->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x10;
                  dVar27 = *(double *)(pFVar3 + 8) - dVar9;
                  dVar5 = *(double *)pFVar3 - dVar8;
                  fVar29 = (float)(dVar27 * dVar6 - dVar5 * dVar7);
                  fVar28 = (float)(dVar5 * dVar7 - dVar27 * dVar6);
                  if ((fVar29 != 0.0) && (fVar28 != 0.0)) {
                    fVar29 = (float)((((*(double *)(pFVar2 + lVar25 + 8) * dVar5 - dVar5 * dVar9) -
                                      *(double *)(pFVar2 + lVar25) * dVar27) + dVar27 * dVar8) /
                                    (double)fVar29);
                    fVar28 = (float)((((dVar6 * dVar9 - *(double *)(pFVar2 + lVar25 + 8) * dVar6) -
                                      dVar7 * dVar8) + *(double *)(pFVar2 + lVar25) * dVar7) /
                                    (double)fVar28);
                    if ((0.0 <= fVar29) &&
                       (((fVar29 <= fVar11 && (0.0 <= fVar28)) && (fVar28 <= fVar11)))) {
                      if (4 < (byte)LogGeomTools._0_1_) {
                        UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogGeomTools);
                      }
                      return false;
                    }
                  }
                  iVar16 = pTVar23->ArrayNum;
                  uVar19 = uVar19 + 1;
                  lVar21 = lVar21 + 0x10;
                } while ((int)uVar19 < iVar16);
              }
              iVar16 = pTVar22->ArrayNum;
              uVar20 = uVar20 + 1;
              lVar25 = lVar25 + 0x10;
            } while ((int)uVar20 < iVar16);
          }
        }
        local_108 = local_108 + 1;
        lVar10 = lVar10 + 0x10;
      } while (local_108 < iVar1);
      local_res20 = local_res20 + 1;
      lVar26 = lVar26 + 1;
      lVar24 = lVar24 + 0x10;
    }
  }
  return true;
}

// CorrectPolygonWinding @ 147c3f190

void __cdecl
FGeomTools2D::CorrectPolygonWinding
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  bool bVar10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1281,"FGeomTools2D::CorrectPolygonWinding",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeomTools.cpp"
               ,0x501);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1281);
  }
  if (param_2->ArrayNum < 3) goto LAB_147c3f327;
  bVar4 = IsPolygonWindingCCW(param_2);
  if (param_3) {
    if (!bVar4) goto LAB_147c3f22a;
  }
  else if (bVar4) {
LAB_147c3f22a:
    uVar7 = 0;
    if (0 < param_2->ArrayNum) {
      lVar9 = 0;
      do {
        uVar5 = param_1->ArrayNum;
        if (uVar5 == param_1->ArrayMax) {
          uVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = uVar5 + 1;
        uVar6 = 0;
        if ((int)uVar5 < (int)(uVar5 + 1)) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          uVar5 = 0;
          if ((int)uVar7 < param_2->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data + lVar9;
          uVar3 = *(undefined8 *)(pFVar1 + 8);
          *(undefined8 *)pFVar8 = *(undefined8 *)pFVar1;
          *(undefined8 *)(pFVar8 + 8) = uVar3;
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar7 < param_2->ArrayNum);
    }
    goto LAB_147c3f327;
  }
  uVar7 = param_2->ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar9 = (longlong)(int)uVar7 << 4;
    do {
      uVar5 = param_1->ArrayNum;
      if (uVar5 == param_1->ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = uVar5 + 1;
      uVar6 = 0;
      if ((int)uVar5 < (int)(uVar5 + 1)) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        uVar5 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        pFVar1 = (param_2->AllocatorInstance).Data + lVar9;
        uVar3 = *(undefined8 *)(pFVar1 + 8);
        *(undefined8 *)pFVar8 = *(undefined8 *)pFVar1;
        *(undefined8 *)(pFVar8 + 8) = uVar3;
      }
      lVar9 = lVar9 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
LAB_147c3f327:
  if (!bVar10) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// GenerateConvexHullFromPoints @ 147c51d70

void __cdecl
FGeomTools2D::GenerateConvexHullFromPoints
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  if (2 < param_2->ArrayNum) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    ConvexHull2D::ComputeConvexHull<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
              (param_2,&local_38);
    uVar11 = local_38._8_8_ & 0xffffffff;
    if (local_38.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != local_38.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_38.ArrayNum,&param_1->AllocatorInstance,0,piVar1);
      uVar11 = local_38._8_8_ & 0xffffffff;
    }
    iVar10 = (int)uVar11;
    pFVar2 = local_38.AllocatorInstance.Data + (longlong)iVar10 * 4;
    FVar13.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar2) break;
      uVar3 = *(uint *)FVar13.Data;
      uVar8 = 0;
      if ((int)uVar3 < param_2->ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar12 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
      if (((pFVar4 <= pFVar12) && (pFVar12 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      uVar6 = *(undefined8 *)(pFVar12 + 8);
      FVar13.Data = FVar13.Data + 4;
      pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar12;
      *(undefined8 *)(pFVar4 + 8) = uVar6;
      uVar11 = local_38._8_8_ & 0xffffffff;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// GenerateConvexPolygonsFromTriangles @ 147c51f70

void __cdecl
FGeomTools2D::GenerateConvexPolygonsFromTriangles
          (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  ForAnyElementType _Src;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  bool bVar19;
  uint local_80;
  uint uStack_7c;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_70;
  ForAnyElementType local_60;
  uint local_58;
  uint auStack_54 [5];
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1572,"FGeomTools2D::GenerateConvexPolygonsFromTriangles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeomTools.cpp"
               ,0x624);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1572);
  }
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  auStack_54[0] = 0;
  iVar16 = 0;
  if (0 < param_2->ArrayNum) {
    do {
      uVar8 = local_58;
      if (local_58 == auStack_54[0]) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&local_60,(int *)auStack_54);
      }
      local_58 = uVar8 + 1;
      uVar13 = 0;
      if ((int)uVar8 < (int)local_58) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = iVar16 + 2;
      iVar9 = iVar16 + 1;
      pFVar17 = (FScriptContainerElement *)0x0;
      if (local_60.Data + (longlong)(int)uVar8 * 0xc != (FScriptContainerElement *)0x0) {
        pFVar17 = local_60.Data + (longlong)(int)uVar8 * 0xc;
      }
      *(int *)pFVar17 = iVar16;
      iVar16 = iVar16 + 3;
      *(int *)(pFVar17 + 4) = iVar9;
      *(int *)(pFVar17 + 8) = iVar14;
    } while (iVar16 < param_2->ArrayNum);
    while (0 < (int)local_58) {
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      if (((int)local_58 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar16 = local_58 - 1;
      uVar1 = *(undefined8 *)(local_60.Data + (longlong)iVar16 * 0xc);
      pFVar17 = local_60.Data + (longlong)iVar16 * 0xc;
      uVar8 = *(uint *)(pFVar17 + 8);
      iVar16 = (local_58 - iVar16) + -1;
      if (iVar16 != 0) {
        memmove(pFVar17,pFVar17 + 0xc,(longlong)iVar16 * 0xc);
      }
      local_80 = (uint)uVar1;
      local_58 = local_58 - 1;
      uVar13 = 0;
      if ((int)local_80 < param_2->ArrayNum) {
        uVar13 = ~local_80 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (param_2->AllocatorInstance).Data + (longlong)(int)local_80 * 0x10;
      if (((local_70.AllocatorInstance.Data <= pFVar17) &&
          (pFVar17 < local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_70.ArrayNum == local_70.ArrayMax) {
        local_70.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      lVar15 = (longlong)local_70.ArrayNum;
      local_70.ArrayNum = local_70.ArrayNum + 1;
      uVar6 = *(undefined8 *)(pFVar17 + 8);
      uStack_7c = (uint)((ulonglong)uVar1 >> 0x20);
      *(undefined8 *)(local_70.AllocatorInstance.Data + lVar15 * 0x10) = *(undefined8 *)pFVar17;
      *(undefined8 *)(local_70.AllocatorInstance.Data + lVar15 * 0x10 + 8) = uVar6;
      uVar13 = 0;
      if ((int)uStack_7c < param_2->ArrayNum) {
        uVar13 = ~uStack_7c >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (param_2->AllocatorInstance).Data + (longlong)(int)uStack_7c * 0x10;
      if (((local_70.AllocatorInstance.Data <= pFVar17) &&
          (pFVar17 < local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_70.ArrayNum == local_70.ArrayMax) {
        local_70.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      iVar16 = local_70.ArrayNum + 1;
      uVar1 = *(undefined8 *)(pFVar17 + 8);
      *(undefined8 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 0x10) =
           *(undefined8 *)pFVar17;
      *(undefined8 *)(local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 0x10 + 8) =
           uVar1;
      uVar13 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      local_70.ArrayNum = iVar16;
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
      if (((local_70.AllocatorInstance.Data <= pFVar17) &&
          (pFVar17 < local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar16 = local_70.ArrayNum;
      if (local_70.ArrayNum == local_70.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      lVar15 = 0;
      local_70.ArrayNum = iVar16 + 1;
      uVar1 = *(undefined8 *)(pFVar17 + 8);
      uVar8 = 0;
      *(undefined8 *)(local_70.AllocatorInstance.Data + (longlong)iVar16 * 0x10) =
           *(undefined8 *)pFVar17;
      *(undefined8 *)(local_70.AllocatorInstance.Data + (longlong)iVar16 * 0x10 + 8) = uVar1;
      if (0 < (int)local_58) {
        do {
          uVar13 = 0;
          if ((int)uVar8 < (int)local_58) {
            uVar13 = ~uVar8 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar17 = local_60.Data + lVar15 * 0xc;
          uVar13 = *(uint *)(pFVar17 + 8);
          uVar10 = 0;
          if ((int)uVar13 < param_2->ArrayNum) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = *(uint *)(pFVar17 + 4);
          pFVar2 = (param_2->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          uVar11 = *(uint *)pFVar17;
          uVar12 = 0;
          if ((int)uVar11 < param_2->ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar7 = MergeTriangleIntoPolygon
                            (&local_70,
                             (TVector2<double> *)
                             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10),
                             (TVector2<double> *)(pFVar3 + (longlong)(int)uVar10 * 0x10),
                             (TVector2<double> *)(pFVar2 + (longlong)(int)uVar13 * 0x10),true);
          if (bVar7) {
            uVar13 = 0;
            if ((int)uVar8 < (int)local_58) {
              uVar13 = ~uVar8 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar16 = (local_58 - uVar8) + -1;
            if (1 < iVar16) {
              iVar16 = 1;
            }
            if (iVar16 != 0) {
              memmove(local_60.Data + lVar15 * 0xc,
                      local_60.Data + (longlong)(int)(local_58 - iVar16) * 0xc,
                      (longlong)iVar16 * 0xc);
            }
            local_58 = local_58 - 1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&local_60,local_58,(int *)auStack_54);
            uVar8 = 0xffffffff;
            lVar15 = -1;
          }
          uVar8 = uVar8 + 1;
          lVar15 = lVar15 + 1;
        } while ((int)uVar8 < (int)local_58);
      }
      piVar18 = &param_1->ArrayMax;
      pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               (param_1->AllocatorInstance).Data;
      if (((pTVar4 <= &local_70) && (&local_70 < pTVar4 + *piVar18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar16 = param_1->ArrayNum;
      if (iVar16 == *piVar18) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar18);
      }
      _Src.Data = local_70.AllocatorInstance.Data;
      pFVar17 = (param_1->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
      param_1->ArrayNum = iVar16 + 1;
      *(undefined8 *)&pFVar17->field_0x0 = 0;
      lVar15 = (longlong)local_70.ArrayNum;
      *(int *)&pFVar17[8].field_0x0 = local_70.ArrayNum;
      if (local_70.ArrayNum == 0) {
        *(int *)(pFVar17 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_70.ArrayNum,0,(ForAnyElementType *)pFVar17,local_70.ArrayNum,
                   (int *)(pFVar17 + 0xc));
        memcpy(*(void **)&pFVar17->field_0x0,_Src.Data,lVar15 << 4);
      }
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
    }
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsPointInPolygon @ 147c69300

bool __cdecl
FGeomTools2D::IsPointInPolygon
          (TVector2<double> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  dVar8 = __real_bff0000000000000;
  dVar7 = __real_3ff0000000000000;
  iVar1 = param_2->ArrayNum;
  uVar13 = 0;
  fVar23 = 0.0;
  if (0 < iVar1) {
    lVar14 = 0;
    uVar24 = SUB84(__real_bff0000000000000,0);
    uVar5 = (ulonglong)__real_bff0000000000000 >> 0x20;
    uVar25 = SUB84(__real_3ff0000000000000,0);
    uVar6 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    do {
      uVar11 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar13 = uVar13 + 1;
      dVar18 = *(double *)(pFVar2 + lVar14) - (param_1->field0_0x0)._s_0.X;
      dVar19 = *(double *)(pFVar2 + lVar14 + 8) - (param_1->field0_0x0)._s_0.Y;
      uVar12 = (int)uVar13 % iVar1;
      uVar11 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      dVar4 = *(double *)(pFVar2 + (longlong)(int)uVar12 * 0x10) - (param_1->field0_0x0)._s_0.X;
      dVar20 = *(double *)(pFVar2 + (longlong)(int)uVar12 * 0x10 + 8) - (param_1->field0_0x0)._s_0.Y
      ;
      dVar17 = dVar20 * dVar18 - dVar4 * dVar19;
      uVar21 = uVar25;
      uVar22 = (int)uVar6;
      if ((dVar17 <= 0.0) && (uVar21 = uVar24, uVar22 = (int)uVar5, 0.0 <= dVar17)) {
        uVar21 = 0;
        uVar22 = 0;
      }
      auVar15._0_8_ = dVar20 * dVar19;
      auVar15._8_8_ = 0;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (dVar4 * dVar4 + dVar20 * dVar20) * (dVar18 * dVar18 + dVar19 * dVar19);
      auVar16 = sqrtpd(auVar15,auVar16);
      dVar18 = (dVar4 * dVar18 + auVar15._0_8_) / auVar16._0_8_;
      if (dVar7 <= dVar18) {
        dVar18 = dVar7;
      }
      if (dVar18 <= dVar8) {
        dVar18 = dVar8;
      }
      dVar19 = dVar8;
      if ((dVar8 <= dVar18) && (dVar19 = dVar18, dVar7 <= dVar18)) {
        dVar19 = dVar7;
      }
      dVar18 = acos(dVar19);
      lVar14 = lVar14 + 0x10;
      fVar23 = fVar23 + (float)(dVar18 * (double)CONCAT44(uVar22,uVar21));
    } while ((int)uVar13 < iVar1);
  }
  return __real_3a83126f < (float)((uint)fVar23 & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// IsPolygonWindingCCW @ 147c69780

bool __cdecl
FGeomTools2D::IsPolygonWindingCCW
          (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  
  iVar2 = param_1->ArrayNum;
  iVar12 = 0;
  uVar11 = 0;
  if (0 < iVar2) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      uVar10 = (int)uVar11 % iVar2;
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar6 = lVar13 + 4;
      pFVar1 = pFVar3 + lVar13;
      lVar13 = lVar13 + 8;
      iVar12 = iVar12 + (*(int *)(pFVar4 + (longlong)(int)uVar10 * 8 + 4) + *(int *)(pFVar3 + lVar6)
                        ) * (*(int *)(pFVar4 + (longlong)(int)uVar10 * 8) - *(int *)pFVar1);
    } while ((int)uVar11 < iVar2);
  }
  return SUB41((uint)iVar12 >> 0x1f,0);
}

// IsPolygonWindingCCW @ 147c698b0

bool __cdecl
FGeomTools2D::IsPolygonWindingCCW
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  
  iVar2 = param_1->ArrayNum;
  uVar11 = 0;
  fVar13 = 0.0;
  if (0 < iVar2) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      uVar10 = (int)uVar11 % iVar2;
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar6 = lVar12 + 8;
      pFVar1 = pFVar3 + lVar12;
      lVar12 = lVar12 + 0x10;
      fVar13 = (float)((*(double *)(pFVar4 + (longlong)(int)uVar10 * 0x10 + 8) +
                       *(double *)(pFVar3 + lVar6)) *
                       (*(double *)(pFVar4 + (longlong)(int)uVar10 * 0x10) - *(double *)pFVar1) +
                      (double)fVar13);
    } while ((int)uVar11 < iVar2);
  }
  return fVar13 < 0.0;
}

// ReducePolygons @ 147c78dd0

TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__cdecl FGeomTools2D::ReducePolygons
                  (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,
                  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *_Src;
  FScriptContainerElement *pFVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  float fVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  uint local_res20;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  uint local_c8;
  float local_c4;
  ForAnyElementType local_c0;
  int local_b8;
  int iStack_b4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_b0;
  uint local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar21 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_90 = param_1->ArrayNum;
  lVar14 = (longlong)local_90;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  iStack_b4 = 0;
  local_68 = lVar14;
  if (0 < lVar14) {
    lVar20 = 0;
    do {
      local_c4 = -3.4e+38;
      uVar16 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar15;
      }
      pFVar17 = (param_1->AllocatorInstance).Data;
      uVar16 = 0;
      iVar13 = *(int *)(pFVar17 + lVar20 + 8);
      if (0 < iVar13) {
        lVar19 = 0;
        do {
          fVar7 = local_c4;
          uVar18 = 0;
          if ((int)uVar16 < iVar13) {
            uVar18 = ~uVar16 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar6)();
            return pTVar15;
          }
          uVar16 = uVar16 + 1;
          pdVar1 = (double *)(lVar19 + *(longlong *)(pFVar17 + lVar20));
          lVar19 = lVar19 + 0x10;
          dVar23 = *pdVar1;
          if (*pdVar1 <= (double)fVar7) {
            dVar23 = (double)fVar7;
          }
          local_c4 = (float)dVar23;
          iVar13 = *(int *)(pFVar17 + lVar20 + 8);
        } while ((int)uVar16 < iVar13);
      }
      if (((local_c0.Data <= (FScriptContainerElement *)&local_c4) &&
          ((FScriptContainerElement *)&local_c4 < local_c0.Data + (longlong)iStack_b4 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar15;
      }
      if (local_b8 == iStack_b4) {
        local_b8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_c0,&iStack_b4);
      }
      lVar19 = (longlong)local_b8;
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x10;
      local_b8 = local_b8 + 1;
      *(float *)(local_c0.Data + lVar19 * 4) = local_c4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    local_res20 = 0;
    local_88 = 0;
    do {
      lVar14 = local_88;
      uVar21 = 0;
      if ((int)local_res20 < param_2->ArrayNum) {
        uVar21 = ~local_res20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar15;
      }
      if ((param_2->AllocatorInstance).Data[lVar14] == (FScriptContainerElement)0x0) {
        uVar21 = 0;
        if ((int)local_res20 < param_1->ArrayNum) {
          uVar21 = ~local_res20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar15;
        }
        pFVar17 = (param_1->AllocatorInstance).Data;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.ArrayNum = *(int *)(pFVar17 + lVar14 * 0x10 + 8);
        lVar20 = (longlong)local_b0.ArrayNum;
        _Src = *(void **)(pFVar17 + lVar14 * 0x10);
        if (local_b0.ArrayNum == 0) {
          local_b0.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_b0.ArrayNum,0,&local_b0.AllocatorInstance,local_b0.ArrayNum,
                     &local_b0.ArrayMax);
          memcpy(local_b0.AllocatorInstance.Data,_Src,lVar20 << 4);
        }
        iVar13 = local_90;
        local_d8.Data = (FScriptContainerElement *)0x0;
        local_d0 = 0;
        local_c8 = 0;
        if (0 < local_90) {
          do {
            uVar21 = local_c8;
            uVar16 = 0;
            if ((int)local_c8 < param_1->ArrayNum) {
              uVar16 = ~local_c8 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar6)();
              return pTVar15;
            }
            lVar14 = (longlong)(int)local_c8;
            pFVar17 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x10;
            uVar21 = 0;
            if ((int)local_c8 < param_2->ArrayNum) {
              uVar21 = ~local_c8 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar6)();
              return pTVar15;
            }
            if ((param_2->AllocatorInstance).Data[lVar14] != (FScriptContainerElement)0x0) {
              if ((*(int *)(pFVar17 + 8) < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar6)();
                return pTVar15;
              }
              bVar9 = IsPointInPolygon(*(TVector2<double> **)pFVar17,&local_b0);
              if (bVar9) {
                if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
                    ((FScriptContainerElement *)&local_c8 <
                     local_d8.Data + (longlong)local_d0._4_4_ * 4)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar6)();
                  return pTVar15;
                }
                iVar10 = (int)local_d0;
                if ((int)local_d0 == local_d0._4_4_) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_d8,(int *)((longlong)&local_d0 + 4));
                }
                local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 1);
                *(uint *)(local_d8.Data + (longlong)iVar10 * 4) = local_c8;
              }
            }
            local_c8 = local_c8 + 1;
          } while ((int)local_c8 < iVar13);
        }
        uVar21 = 0;
        lVar14 = 0;
        if (0 < (int)local_d0) {
          do {
            uVar16 = 0;
            if ((int)uVar21 < (int)local_d0) {
              uVar16 = ~uVar21 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar6)();
              return pTVar15;
            }
            uVar16 = *(uint *)(local_d8.Data + lVar14 * 4);
            uVar18 = 0;
            if ((int)uVar16 < param_1->ArrayNum) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar6)();
              return pTVar15;
            }
            uVar18 = 0;
            pFVar17 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10;
            lVar20 = 0;
            if (0 < (int)local_d0) {
              do {
                if (lVar14 != lVar20) {
                  uVar16 = 0;
                  if ((int)uVar18 < (int)local_d0) {
                    uVar16 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar6)();
                    return pTVar15;
                  }
                  uVar16 = *(uint *)(local_d8.Data + lVar20 * 4);
                  uVar22 = 0;
                  if ((int)uVar16 < param_1->ArrayNum) {
                    uVar22 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar6)();
                    return pTVar15;
                  }
                  pFVar4 = (param_1->AllocatorInstance).Data;
                  if ((*(int *)(pFVar17 + 8) < 1) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar6)();
                    return pTVar15;
                  }
                  bVar9 = IsPointInPolygon(*(TVector2<double> **)pFVar17,
                                           (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
                                            *)(pFVar4 + (longlong)(int)uVar16 * 0x10));
                  if (bVar9) {
                    uVar16 = 0;
                    if ((int)uVar21 < (int)local_d0) {
                      uVar16 = ~uVar21 >> 0x1f;
                    }
                    if (uVar16 == 0) {
                      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar9) {
                        pcVar6 = (code *)swi(3);
                        pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar6)();
                        return pTVar15;
                      }
                    }
                    iVar10 = ((int)local_d0 - uVar21) + -1;
                    iVar13 = (int)local_d0;
                    if (iVar10 != 0) {
                      memmove(local_d8.Data + (longlong)(int)uVar21 * 4,
                              local_d8.Data + (longlong)(int)uVar21 * 4 + 4,(longlong)iVar10 << 2);
                      iVar13 = (int)local_d0;
                    }
                    local_d0 = CONCAT44(local_d0._4_4_,iVar13 + -1);
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,&local_d8,iVar13 + -1,(int *)((longlong)&local_d0 + 4));
                    goto LAB_147c794e5;
                  }
                }
                uVar18 = uVar18 + 1;
                lVar20 = lVar20 + 1;
              } while ((int)uVar18 < (int)local_d0);
            }
            uVar21 = uVar21 + 1;
            lVar14 = lVar14 + 1;
LAB_147c794e5:
          } while ((int)uVar21 < (int)local_d0);
        }
        lVar14 = (longlong)(int)local_d0;
        uVar21 = 0;
        local_70 = lVar14;
        if (0 < lVar14) {
          local_98 = 0;
          local_80 = 1;
          local_78 = lVar14;
          do {
            if (local_80 < lVar14) {
              local_a0 = ~uVar21 >> 0x1f;
              lVar20 = local_80;
              uVar16 = uVar21;
              do {
                uVar16 = uVar16 + 1;
                uVar22 = ~uVar16 >> 0x1f;
                uVar18 = 0;
                if ((int)uVar16 < (int)local_d0) {
                  uVar18 = uVar22;
                }
                if ((uVar18 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar6)();
                  return pTVar15;
                }
                uVar18 = *(uint *)(local_d8.Data + lVar20 * 4);
                uVar11 = 0;
                if ((int)uVar18 < local_b8) {
                  uVar11 = ~uVar18 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar6)();
                  return pTVar15;
                }
                FVar8.Data = local_c0.Data;
                uVar11 = 0;
                if ((int)uVar21 < (int)local_d0) {
                  uVar11 = local_a0;
                }
                if ((uVar11 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar6)();
                  return pTVar15;
                }
                uVar11 = *(uint *)(local_d8.Data + local_98);
                uVar12 = 0;
                if ((int)uVar11 < local_b8) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar6)();
                  return pTVar15;
                }
                uVar12 = local_a0;
                if (*(float *)(local_c0.Data + (longlong)(int)uVar11 * 4) <=
                    *(float *)(FVar8.Data + (longlong)(int)uVar18 * 4) &&
                    *(float *)(FVar8.Data + (longlong)(int)uVar18 * 4) !=
                    *(float *)(local_c0.Data + (longlong)(int)uVar11 * 4)) {
                  uVar18 = 0;
                  if ((int)uVar21 < (int)local_d0) {
                    uVar18 = local_a0;
                  }
                  if ((uVar18 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar6)();
                    return pTVar15;
                  }
                  uVar2 = *(undefined4 *)(local_d8.Data + local_98);
                  uVar18 = 0;
                  if ((int)uVar16 < (int)local_d0) {
                    uVar18 = uVar22;
                  }
                  if ((uVar18 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar6)();
                    return pTVar15;
                  }
                  uVar3 = *(undefined4 *)(local_d8.Data + lVar20 * 4);
                  uVar18 = 0;
                  if ((int)uVar21 < (int)local_d0) {
                    uVar18 = uVar12;
                  }
                  if ((uVar18 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar6)();
                    return pTVar15;
                  }
                  *(undefined4 *)(local_d8.Data + local_98) = uVar3;
                  uVar18 = 0;
                  if ((int)uVar16 < (int)local_d0) {
                    uVar18 = uVar22;
                  }
                  if ((uVar18 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar6)();
                    return pTVar15;
                  }
                  *(undefined4 *)(local_d8.Data + lVar20 * 4) = uVar2;
                }
                lVar20 = lVar20 + 1;
                lVar14 = local_70;
              } while (lVar20 < local_70);
            }
            local_80 = local_80 + 1;
            local_98 = local_98 + 4;
            uVar21 = uVar21 + 1;
            local_78 = local_78 + -1;
          } while (local_78 != 0);
          uVar21 = 0;
          lVar20 = 0;
          local_78 = 0;
          do {
            uVar16 = 0;
            if ((int)uVar21 < (int)local_d0) {
              uVar16 = ~uVar21 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar6)();
              return pTVar15;
            }
            uVar16 = *(uint *)(local_d8.Data + lVar20 * 4);
            uVar18 = 0;
            if ((int)uVar16 < param_1->ArrayNum) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar6)();
              return pTVar15;
            }
            JoinMutuallyVisible(&local_b0,
                                (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                                ((param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10));
            uVar21 = uVar21 + 1;
            lVar20 = lVar20 + 1;
          } while (lVar20 < lVar14);
        }
        pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                 (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pTVar5 <= &local_b0) && (&local_b0 < pTVar5 + __return_storage_ptr__->ArrayMax)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar15;
        }
        iVar13 = __return_storage_ptr__->ArrayNum;
        if (iVar13 == __return_storage_ptr__->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        FVar8.Data = local_b0.AllocatorInstance.Data;
        pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
        __return_storage_ptr__->ArrayNum = iVar13 + 1;
        *(undefined8 *)&pFVar17->field_0x0 = 0;
        lVar14 = (longlong)local_b0.ArrayNum;
        *(int *)&pFVar17[8].field_0x0 = local_b0.ArrayNum;
        if (local_b0.ArrayNum == 0) {
          *(int *)(pFVar17 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_b0.ArrayNum,0,(ForAnyElementType *)pFVar17,local_b0.ArrayNum,
                     (int *)(pFVar17 + 0xc));
          memcpy(*(void **)&pFVar17->field_0x0,FVar8.Data,lVar14 << 4);
        }
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
        lVar14 = local_88;
        if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.AllocatorInstance.Data);
          lVar14 = local_88;
        }
      }
      local_res20 = local_res20 + 1;
      local_88 = lVar14 + 1;
    } while (local_88 < local_68);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return __return_storage_ptr__;
}

// RemoveRedundantTriangles @ 147c7bed0

void __cdecl
FGeomTools2D::RemoveRedundantTriangles
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  uint local_88;
  uint uStack_84;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_78;
  ForAnyElementType local_68;
  uint local_60;
  uint uStack_5c;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_58;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1524,"FGeomTools2D::RemoveRedundantTriangles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeomTools.cpp"
               ,0x5f4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1524);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  uStack_5c = 0;
  iVar15 = 0;
  if (0 < param_2->ArrayNum) {
    do {
      uVar7 = local_60;
      if (local_60 == uStack_5c) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&local_68,(int *)&uStack_5c);
      }
      local_60 = uVar7 + 1;
      uVar12 = 0;
      if ((int)uVar7 < (int)local_60) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = iVar15 + 2;
      iVar8 = iVar15 + 1;
      pFVar16 = (FScriptContainerElement *)0x0;
      if (local_68.Data + (longlong)(int)uVar7 * 0xc != (FScriptContainerElement *)0x0) {
        pFVar16 = local_68.Data + (longlong)(int)uVar7 * 0xc;
      }
      *(int *)pFVar16 = iVar15;
      iVar15 = iVar15 + 3;
      *(int *)(pFVar16 + 4) = iVar8;
      *(int *)(pFVar16 + 8) = iVar13;
    } while (iVar15 < param_2->ArrayNum);
    while (0 < (int)local_60) {
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      if (((int)local_60 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = local_60 - 1;
      uVar1 = *(undefined8 *)(local_68.Data + (longlong)iVar15 * 0xc);
      pFVar16 = local_68.Data + (longlong)iVar15 * 0xc;
      uVar7 = *(uint *)(pFVar16 + 8);
      iVar15 = (local_60 - iVar15) + -1;
      if (iVar15 != 0) {
        memmove(pFVar16,pFVar16 + 0xc,(longlong)iVar15 * 0xc);
      }
      local_88 = (uint)uVar1;
      local_60 = local_60 - 1;
      uVar12 = 0;
      if ((int)local_88 < param_2->ArrayNum) {
        uVar12 = ~local_88 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (param_2->AllocatorInstance).Data + (longlong)(int)local_88 * 0x10;
      if (((local_78.AllocatorInstance.Data <= pFVar16) &&
          (pFVar16 < local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_78.ArrayNum == local_78.ArrayMax) {
        local_78.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      lVar14 = (longlong)local_78.ArrayNum;
      local_78.ArrayNum = local_78.ArrayNum + 1;
      uVar5 = *(undefined8 *)(pFVar16 + 8);
      uStack_84 = (uint)((ulonglong)uVar1 >> 0x20);
      *(undefined8 *)(local_78.AllocatorInstance.Data + lVar14 * 0x10) = *(undefined8 *)pFVar16;
      *(undefined8 *)(local_78.AllocatorInstance.Data + lVar14 * 0x10 + 8) = uVar5;
      uVar12 = 0;
      if ((int)uStack_84 < param_2->ArrayNum) {
        uVar12 = ~uStack_84 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (param_2->AllocatorInstance).Data + (longlong)(int)uStack_84 * 0x10;
      if (((local_78.AllocatorInstance.Data <= pFVar16) &&
          (pFVar16 < local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_78.ArrayNum == local_78.ArrayMax) {
        local_78.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      iVar15 = local_78.ArrayNum + 1;
      uVar1 = *(undefined8 *)(pFVar16 + 8);
      *(undefined8 *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10) =
           *(undefined8 *)pFVar16;
      *(undefined8 *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10 + 8) =
           uVar1;
      uVar12 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      local_78.ArrayNum = iVar15;
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10;
      if (((local_78.AllocatorInstance.Data <= pFVar16) &&
          (pFVar16 < local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = local_78.ArrayNum;
      if (local_78.ArrayNum == local_78.ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_78.AllocatorInstance,&local_78.ArrayMax);
      }
      lVar14 = 0;
      local_78.ArrayNum = iVar15 + 1;
      uVar1 = *(undefined8 *)(pFVar16 + 8);
      uVar7 = 0;
      *(undefined8 *)(local_78.AllocatorInstance.Data + (longlong)iVar15 * 0x10) =
           *(undefined8 *)pFVar16;
      *(undefined8 *)(local_78.AllocatorInstance.Data + (longlong)iVar15 * 0x10 + 8) = uVar1;
      if (0 < (int)local_60) {
        do {
          uVar12 = 0;
          if ((int)uVar7 < (int)local_60) {
            uVar12 = ~uVar7 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar16 = local_68.Data + lVar14 * 0xc;
          uVar12 = *(uint *)(pFVar16 + 8);
          uVar9 = 0;
          if ((int)uVar12 < param_2->ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar9 = *(uint *)(pFVar16 + 4);
          pFVar2 = (param_2->AllocatorInstance).Data;
          uVar10 = 0;
          if ((int)uVar9 < param_2->ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          uVar10 = *(uint *)pFVar16;
          uVar11 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar6 = MergeTriangleIntoPolygon
                            (&local_78,
                             (TVector2<double> *)
                             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10),
                             (TVector2<double> *)(pFVar3 + (longlong)(int)uVar9 * 0x10),
                             (TVector2<double> *)(pFVar2 + (longlong)(int)uVar12 * 0x10),false);
          if (bVar6) {
            uVar12 = 0;
            if ((int)uVar7 < (int)local_60) {
              uVar12 = ~uVar7 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar15 = (local_60 - uVar7) + -1;
            if (1 < iVar15) {
              iVar15 = 1;
            }
            if (iVar15 != 0) {
              memmove(local_68.Data + lVar14 * 0xc,
                      local_68.Data + (longlong)(int)(local_60 - iVar15) * 0xc,
                      (longlong)iVar15 * 0xc);
            }
            local_60 = local_60 - 1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&local_68,local_60,(int *)&uStack_5c);
            uVar7 = 0xffffffff;
            lVar14 = -1;
          }
          uVar7 = uVar7 + 1;
          lVar14 = lVar14 + 1;
        } while ((int)uVar7 < (int)local_60);
      }
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      TriangulatePoly(&local_58,&local_78,false);
      if ((param_1 == &local_58) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)local_58.ArrayNum;
      if (local_58.ArrayNum != 0) {
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,local_58.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                            &param_1->ArrayMax);
        memcpy((param_1->AllocatorInstance).Data + (longlong)iVar15 * 0x10,
               local_58.AllocatorInstance.Data,lVar14 << 4);
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TriangulatePoly @ 147c8b230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGeomTools2D::TriangulatePoly
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  uint uVar41;
  ForAnyElementType local_138;
  uint local_130;
  int local_12c;
  uint local_128;
  uint local_124;
  longlong local_120;
  uint local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  uint local_100;
  longlong local_f8;
  longlong local_f0;
  
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1420,"FGeomTools2D::TriangulatePoly",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GeomTools.cpp"
               ,0x58c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1420);
  }
  uVar13 = param_2->ArrayNum;
  if ((int)uVar13 < 3) {
    bVar10 = true;
LAB_147c8c295:
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar10;
  }
  pFVar20 = (param_2->AllocatorInstance).Data;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = uVar13;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,uVar13,0,&local_138,uVar13,&local_12c);
  memcpy(local_138.Data,pFVar20,(longlong)(int)uVar13 << 4);
  fVar6 = __real_bf800000;
  fVar5 = __real_3f800000;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar41 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  do {
    dVar36 = __real_3ef4f8b580000000;
    fVar37 = __real_3727c5ac;
    uVar21 = local_130;
    if ((!param_3) && (iVar26 = 0, 0 < (int)local_130)) {
      iVar17 = 1;
      iVar23 = 2;
      do {
        uVar14 = iVar26 % (int)uVar21;
        uVar15 = iVar17 % (int)uVar21;
        uVar16 = iVar23 % (int)uVar21;
        uVar24 = 0;
        if ((int)uVar16 < (int)uVar21) {
          uVar24 = ~uVar16 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar21 = local_130, bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        pFVar20 = local_138.Data + (longlong)(int)uVar16 * 0x10;
        uVar24 = 0;
        if ((int)uVar15 < (int)uVar21) {
          uVar24 = ~uVar15 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar21 = local_130, bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        local_110 = local_138.Data;
        lVar22 = (longlong)(int)uVar15 * 0x10;
        uVar24 = 0;
        if ((int)uVar14 < (int)uVar21) {
          uVar24 = ~uVar14 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar21 = local_130, bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        dVar39 = *(double *)(local_138.Data + (longlong)(int)uVar14 * 0x10);
        dVar2 = *(double *)(local_138.Data + (longlong)(int)uVar14 * 0x10 + 8);
        dVar38 = *(double *)pFVar20 - dVar39;
        dVar35 = *(double *)(pFVar20 + 8) - dVar2;
        fVar40 = (float)(dVar35 * dVar35 + dVar38 * dVar38);
        if (fVar40 <= fVar37) {
LAB_147c8b5c9:
          uVar24 = 0;
          if ((int)uVar15 < (int)uVar21) {
            uVar24 = ~uVar15 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar21 = local_130, bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          iVar12 = (uVar21 - uVar15) + -1;
          if (iVar12 != 0) {
            memmove(local_138.Data + lVar22,local_138.Data + lVar22 + 0x10,(longlong)iVar12 << 4);
            uVar21 = local_130;
          }
          local_130 = uVar21 - 1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&local_138,local_130,&local_12c);
          iVar26 = iVar26 + -1;
          iVar17 = iVar17 + -1;
          iVar23 = iVar23 + -1;
          uVar21 = local_130;
        }
        else {
          dVar32 = (double)(float)(((*(double *)(local_110 + lVar22) - dVar39) * dVar38 +
                                   (*(double *)(local_110 + lVar22 + 8) - dVar2) * dVar35) /
                                  (double)fVar40);
          dVar39 = (dVar38 * dVar32 + dVar39) - *(double *)(local_110 + lVar22);
          if ((dVar36 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar41,
                                         SUB84(dVar39,0) & uVar13)) ||
             (dVar39 = (dVar35 * dVar32 + dVar2) - *(double *)(local_110 + lVar22 + 8),
             dVar36 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar41,
                                       SUB84(dVar39,0) & uVar13))) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (bVar10) goto LAB_147c8b5c9;
        }
        iVar26 = iVar26 + 1;
        iVar17 = iVar17 + 1;
        iVar23 = iVar23 + 1;
      } while (iVar26 < (int)uVar21);
    }
    if ((int)uVar21 < 3) {
      bVar10 = true;
LAB_147c8c216:
      if (local_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data);
      }
      goto LAB_147c8c295;
    }
    uVar24 = 0;
    local_110 = (FScriptContainerElement *)0x0;
    if ((int)uVar21 < 1) {
LAB_147c8c1b8:
      if (4 < (byte)LogGeomTools._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGeomTools);
      }
      param_1->ArrayNum = 0;
      if (param_1->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
      }
      bVar10 = false;
      goto LAB_147c8c216;
    }
    local_108 = 0;
    while( true ) {
      lVar22 = local_108;
      uVar14 = uVar21;
      if (uVar24 != 0) {
        uVar14 = uVar24;
      }
      uVar14 = uVar14 - 1;
      uVar18 = (ulonglong)uVar14;
      uVar16 = (int)(uVar24 + 1) % (int)uVar21;
      local_100 = ~uVar24 >> 0x1f;
      lVar27 = (longlong)(int)uVar16;
      uVar15 = 0;
      if ((int)uVar24 < (int)uVar21) {
        uVar15 = local_100;
      }
      local_118 = uVar14;
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar21 = local_130, bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      FVar7.Data = local_138.Data;
      uVar25 = ~uVar14 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar14 < (int)uVar21) {
        uVar15 = uVar25;
      }
      local_128 = uVar25;
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar21 = local_130, bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      dVar36 = *(double *)(FVar7.Data + lVar22);
      dVar39 = *(double *)(FVar7.Data + lVar22 + 8);
      local_f0 = (longlong)(int)uVar14;
      local_120 = local_f0 * 0x10;
      dVar2 = *(double *)(local_138.Data + local_120);
      dVar35 = *(double *)(local_138.Data + local_120 + 8);
      local_124 = ~uVar16 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar16 < (int)uVar21) {
        uVar15 = local_124;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar21 = local_130, bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      pFVar20 = local_138.Data + lVar27 * 0x10;
      uVar15 = 0;
      if ((int)uVar14 < (int)uVar21) {
        uVar15 = uVar25;
      }
      local_f8 = lVar27;
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar21 = local_130, bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      if (0.0 <= (*(double *)(pFVar20 + 8) - *(double *)(local_138.Data + local_120 + 8)) *
                 (dVar36 - dVar2) -
                 (*(double *)pFVar20 - *(double *)(local_138.Data + local_120)) * (dVar39 - dVar35))
      break;
LAB_147c8bdd1:
      local_110 = local_110 + 1;
      local_108 = local_108 + 0x10;
      uVar24 = uVar24 + 1;
      if ((int)uVar21 <= (int)uVar24) goto LAB_147c8c1b8;
    }
    uVar15 = 0;
    if (0 < (int)uVar21) {
      lVar27 = 0;
      lVar22 = local_120;
      do {
        uVar14 = 0;
        if ((int)uVar15 < (int)uVar21) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar21 = local_130, bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        FVar7.Data = local_138.Data;
        if (((uVar15 != (uint)uVar18) && (uVar15 != uVar24)) && (uVar15 != uVar16)) {
          uVar14 = 0;
          if ((int)(uint)uVar18 < (int)uVar21) {
            uVar14 = local_128;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar21 = local_130, bVar10)) {
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return (bool)uVar11;
          }
          if ((*(double *)(local_138.Data + lVar22) != *(double *)(FVar7.Data + lVar27)) ||
             (*(double *)(local_138.Data + lVar22 + 8) != *(double *)(FVar7.Data + lVar27 + 8))) {
            uVar14 = 0;
            if ((int)uVar24 < (int)uVar21) {
              uVar14 = local_100;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar21 = local_130, bVar10)) {
              pcVar3 = (code *)swi(3);
              uVar11 = (*pcVar3)();
              return (bool)uVar11;
            }
            lVar9 = local_f8;
            if ((*(double *)(local_138.Data + local_108) != *(double *)(FVar7.Data + lVar27)) ||
               (*(double *)(local_138.Data + local_108 + 8) != *(double *)(FVar7.Data + lVar27 + 8))
               ) {
              uVar14 = 0;
              if ((int)uVar16 < (int)uVar21) {
                uVar14 = local_124;
              }
              uVar25 = uVar16;
              if (uVar14 == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                uVar25 = (uint)lVar9;
                uVar21 = local_130;
              }
              if ((*(double *)(local_138.Data + lVar9 * 0x10) != *(double *)(FVar7.Data + lVar27))
                 || (lVar22 = local_120,
                    *(double *)(local_138.Data + lVar9 * 0x10 + 8) !=
                    *(double *)(FVar7.Data + lVar27 + 8))) {
                uVar13 = 0;
                if ((int)uVar25 < (int)uVar21) {
                  uVar13 = local_124;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar21 = local_130, bVar10)) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                pFVar20 = local_138.Data + lVar9 * 0x10;
                uVar13 = 0;
                if ((int)uVar24 < (int)uVar21) {
                  uVar13 = local_100;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar21 = local_130, bVar10)) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                FVar8.Data = local_138.Data;
                uVar13 = 0;
                if ((int)local_118 < (int)uVar21) {
                  uVar13 = local_128;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar21 = local_130, bVar10)) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                dVar36 = *(double *)(FVar7.Data + lVar27);
                dVar39 = *(double *)(FVar7.Data + lVar27 + 8);
                dVar2 = *(double *)(local_138.Data + local_f0 * 0x10 + 8);
                dVar35 = *(double *)(local_138.Data + local_f0 * 0x10);
                dVar38 = *(double *)(FVar8.Data + local_108 + 8);
                dVar32 = *(double *)(FVar8.Data + local_108);
                dVar33 = (dVar38 - dVar2) * (dVar36 - dVar35) - (dVar32 - dVar35) * (dVar39 - dVar2)
                ;
                fVar37 = fVar5;
                if ((dVar33 <= 0.0) && (fVar37 = fVar6, 0.0 <= dVar33)) {
                  fVar37 = 0.0;
                }
                dVar33 = *(double *)(pFVar20 + 8);
                dVar34 = *(double *)pFVar20;
                dVar38 = (dVar33 - dVar38) * (dVar36 - dVar32) -
                         (dVar34 - dVar32) * (dVar39 - dVar38);
                fVar40 = fVar5;
                if ((dVar38 <= 0.0) && (fVar40 = fVar6, 0.0 <= dVar38)) {
                  fVar40 = 0.0;
                }
                dVar36 = (dVar36 - dVar34) * (dVar2 - dVar33) -
                         (dVar39 - dVar33) * (dVar35 - dVar34);
                fVar29 = fVar5;
                if ((dVar36 <= 0.0) && (fVar29 = fVar6, 0.0 <= dVar36)) {
                  fVar29 = 0.0;
                }
                if ((fVar37 == fVar40) &&
                   (uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                   uVar41 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, fVar40 == fVar29))
                goto LAB_147c8bdd1;
                uVar18 = (ulonglong)(int)local_118;
                uVar13 = 0;
                if ((int)local_118 < (int)uVar21) {
                  uVar13 = local_128;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar21 = local_130, bVar10)) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                pFVar20 = local_138.Data + uVar18 * 0x10;
                uVar13 = 0;
                if ((int)uVar16 < (int)uVar21) {
                  uVar13 = local_124;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), uVar21 = local_130, bVar10)) {
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return (bool)uVar11;
                }
                dVar36 = *(double *)pFVar20;
                dVar39 = *(double *)(pFVar20 + 8);
                dVar2 = *(double *)(FVar7.Data + lVar27);
                dVar35 = *(double *)(FVar7.Data + lVar27 + 8);
                dVar38 = *(double *)(local_138.Data + local_f8 * 0x10);
                dVar32 = *(double *)(local_138.Data + local_f8 * 0x10 + 8);
                uVar30 = SUB84(dVar36,0);
                uVar31 = (int)((ulonglong)dVar36 >> 0x20);
                if (dVar38 <= dVar36) {
                  uVar30 = SUB84(dVar38,0);
                  uVar31 = (int)((ulonglong)dVar38 >> 0x20);
                }
                dVar33 = dVar39 - dVar32;
                dVar34 = dVar36 - dVar38;
                lVar22 = local_120;
                uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar41 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                if ((double)CONCAT44(uVar31,uVar30) <= dVar2) {
                  if (dVar36 <= dVar38) {
                    dVar36 = dVar38;
                  }
                  if (dVar2 <= dVar36) {
                    uVar30 = SUB84(dVar39,0);
                    uVar31 = (int)((ulonglong)dVar39 >> 0x20);
                    if (dVar32 <= dVar39) {
                      uVar30 = SUB84(dVar32,0);
                      uVar31 = (int)((ulonglong)dVar32 >> 0x20);
                    }
                    if ((double)CONCAT44(uVar31,uVar30) <= dVar35) {
                      if (dVar39 <= dVar32) {
                        dVar39 = dVar32;
                      }
                      if ((dVar35 <= dVar39) &&
                         (dVar36 = (dVar35 - dVar32) * dVar34 - (dVar2 - dVar38) * dVar33,
                         (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar36,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
                         (dVar34 * dVar34 + dVar33 * dVar33) * __real_3f1a36e2eb1c432d))
                      goto LAB_147c8bdd1;
                    }
                  }
                }
              }
            }
          }
        }
        uVar14 = (uint)uVar18;
        uVar15 = uVar15 + 1;
        lVar27 = lVar27 + 0x10;
        if ((int)uVar21 <= (int)uVar15) break;
      } while( true );
    }
    uVar15 = 0;
    if ((int)uVar14 < (int)uVar21) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    pFVar19 = local_138.Data + (longlong)(int)uVar14 * 0x10;
    pFVar20 = (param_1->AllocatorInstance).Data;
    if (((pFVar20 <= pFVar19) && (pFVar19 < pFVar20 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    iVar26 = param_1->ArrayNum;
    piVar1 = &param_1->ArrayNum;
    if (iVar26 == param_1->ArrayMax) {
      iVar26 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    *piVar1 = iVar26 + 1;
    uVar4 = *(undefined8 *)(pFVar19 + 8);
    pFVar20 = (param_1->AllocatorInstance).Data + (longlong)iVar26 * 0x10;
    *(undefined8 *)pFVar20 = *(undefined8 *)pFVar19;
    *(undefined8 *)(pFVar20 + 8) = uVar4;
    uVar21 = 0;
    if ((int)uVar24 < (int)local_130) {
      uVar21 = ~uVar24 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    pFVar20 = (param_1->AllocatorInstance).Data;
    pFVar19 = local_138.Data + (longlong)local_110 * 0x10;
    if (((pFVar20 <= pFVar19) && (pFVar19 < pFVar20 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    iVar26 = *piVar1;
    if (iVar26 == param_1->ArrayMax) {
      iVar26 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      *piVar1 = iVar26;
    }
    *piVar1 = iVar26 + 1;
    uVar4 = *(undefined8 *)(pFVar19 + 8);
    pFVar20 = (param_1->AllocatorInstance).Data + (longlong)iVar26 * 0x10;
    *(undefined8 *)pFVar20 = *(undefined8 *)pFVar19;
    *(undefined8 *)(pFVar20 + 8) = uVar4;
    uVar21 = 0;
    if ((int)uVar16 < (int)local_130) {
      uVar21 = ~uVar16 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    pFVar20 = (param_1->AllocatorInstance).Data;
    pFVar19 = local_138.Data + (longlong)(int)uVar16 * 0x10;
    if (((pFVar20 <= pFVar19) && (pFVar19 < pFVar20 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    iVar26 = param_1->ArrayNum;
    if (iVar26 == param_1->ArrayMax) {
      iVar26 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar26 + 1;
    uVar4 = *(undefined8 *)(pFVar19 + 8);
    pFVar20 = (param_1->AllocatorInstance).Data + (longlong)iVar26 * 0x10;
    *(undefined8 *)pFVar20 = *(undefined8 *)pFVar19;
    *(undefined8 *)(pFVar20 + 8) = uVar4;
    uVar21 = 0;
    if ((int)uVar24 < (int)local_130) {
      uVar21 = ~uVar24 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      uVar11 = (*pcVar3)();
      return (bool)uVar11;
    }
    iVar26 = (local_130 - uVar24) + -1;
    if (iVar26 != 0) {
      memmove(local_138.Data + (longlong)(int)uVar24 * 0x10,
              local_138.Data + (longlong)(int)uVar24 * 0x10 + 0x10,(longlong)iVar26 << 4);
    }
    local_130 = local_130 - 1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_138,local_130,&local_12c);
  } while( true );
}

