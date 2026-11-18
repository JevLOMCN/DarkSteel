// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// AddSamplePoint @ 147543110

/* WARNING: Removing unreachable block (ram,0x00014754327b) */

void __thiscall
FDelaunayTriangleGenerator::AddSamplePoint
          (FDelaunayTriangleGenerator *this,TVector2<double> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  
  pFVar7 = (this->SamplePointList).AllocatorInstance.Data;
  pFVar2 = pFVar7 + (longlong)(this->SamplePointList).ArrayNum * 0x28;
  if (pFVar7 != pFVar2) {
    do {
      if (((param_1->field0_0x0)._s_0.X == *(double *)pFVar7) &&
         (*(double *)(pFVar7 + 8) == (param_1->field0_0x0)._s_0.Y)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SamplePointList.Contains(NewPoint)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                           ,0x35,L"Found duplicate points in blendspace");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      pFVar7 = pFVar7 + 0x28;
    } while (pFVar7 != pFVar2);
  }
  local_38 = (param_1->field0_0x0)._s_0.X;
  dStack_30 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (this->SamplePointList).AllocatorInstance.Data;
  local_28 = 0;
  local_20 = 0;
  local_18 = param_2;
  if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar2 + (longlong)(this->SamplePointList).ArrayMax * 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->SamplePointList).ArrayNum;
  piVar1 = &(this->SamplePointList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar1);
  }
  lVar6 = (longlong)iVar5;
  (this->SamplePointList).ArrayNum = iVar5 + 1;
  pFVar2 = (this->SamplePointList).AllocatorInstance.Data;
  *(double *)(pFVar2 + lVar6 * 0x28) = local_38;
  *(double *)(pFVar2 + lVar6 * 0x28 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + lVar6 * 0x28 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar6 * 0x28 + 0x10) = local_28;
  *(undefined4 *)(pFVar2 + lVar6 * 0x28 + 0x18) = (undefined4)local_20;
  *(undefined4 *)(pFVar2 + lVar6 * 0x28 + 0x1c) = local_20._4_4_;
  *(int *)(pFVar2 + lVar6 * 0x28 + 0x20) = local_18;
  return;
}

// AddTriangle @ 147543950

void __thiscall
FDelaunayTriangleGenerator::AddTriangle
          (FDelaunayTriangleGenerator *this,FTriangle *param_1,bool param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FVertex *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  FTriangle *local_res8;
  FTriangle *local_res20;
  FTriangle *local_38;
  FTriangle *local_30;
  
  uVar11 = 0;
  if (0 < (this->TriangleList).ArrayNum) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->TriangleList).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar2 = *(longlong **)((this->TriangleList).AllocatorInstance.Data + lVar13);
      if ((((FVertex *)*plVar2 == param_1->Vertices[0]) &&
          ((FVertex *)plVar2[1] == param_1->Vertices[1])) &&
         ((FVertex *)plVar2[2] == param_1->Vertices[2])) {
        return;
      }
      if (param_2) {
        uVar9 = 0;
        if ((int)uVar11 < (this->TriangleList).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = 0;
        lVar3 = *(longlong *)((this->TriangleList).AllocatorInstance.Data + lVar13);
        do {
          uVar10 = 0;
          do {
            if ((param_1->Edges[uVar10].Vertices[0] == *(FVertex **)(lVar3 + 0x28 + uVar12 * 0x10))
               && (param_1->Edges[uVar10].Vertices[1] == *(FVertex **)(lVar3 + 0x30 + uVar12 * 0x10)
                  )) {
              return;
            }
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
          } while ((int)uVar9 < 3);
          uVar9 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar9;
        } while ((int)uVar9 < 3);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar11 < (this->TriangleList).ArrayNum);
  }
  local_38 = ::operator_new(0x58);
  if (local_38 == (FTriangle *)0x0) {
    local_38 = (FTriangle *)0x0;
  }
  else {
    pFVar6 = param_1->Vertices[1];
    local_38->Vertices[0] = param_1->Vertices[0];
    local_38->Vertices[1] = pFVar6;
    local_38->Vertices[2] = param_1->Vertices[2];
    pFVar6 = param_1->Edges[0].Vertices[1];
    local_38->Edges[0].Vertices[0] = param_1->Edges[0].Vertices[0];
    local_38->Edges[0].Vertices[1] = pFVar6;
    pFVar6 = param_1->Edges[1].Vertices[1];
    local_38->Edges[1].Vertices[0] = param_1->Edges[1].Vertices[0];
    local_38->Edges[1].Vertices[1] = pFVar6;
    pFVar6 = param_1->Edges[2].Vertices[1];
    local_38->Edges[2].Vertices[0] = param_1->Edges[2].Vertices[0];
    local_38->Edges[2].Vertices[1] = pFVar6;
    dVar14 = ((local_38->Vertices[1]->Position).field0_0x0._s_0.Y +
              (local_38->Vertices[0]->Position).field0_0x0._s_0.Y +
             (local_38->Vertices[2]->Position).field0_0x0._s_0.Y) * __real_3fd5555555555555;
    (local_38->Center).field0_0x0._s_0.X =
         ((local_38->Vertices[0]->Position).field0_0x0._s_0.X +
          (local_38->Vertices[1]->Position).field0_0x0._s_0.X +
         (local_38->Vertices[2]->Position).field0_0x0._s_0.X) * __real_3fd5555555555555;
    (local_38->Center).field0_0x0._s_0.Y = dVar14;
    local_res8 = local_38;
    TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
              (&local_38->Vertices[0]->Triangles,&local_res8);
    local_res20 = local_38;
    TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
              (&local_38->Vertices[1]->Triangles,&local_res20);
    local_30 = local_38;
    TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
              (&local_38->Vertices[2]->Triangles,&local_30);
  }
  pFVar4 = (this->TriangleList).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)(this->TriangleList).ArrayMax * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->TriangleList).ArrayNum;
  piVar1 = &(this->TriangleList).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->TriangleList).AllocatorInstance,piVar1);
  }
  (this->TriangleList).ArrayNum = iVar8 + 1;
  *(FTriangle **)((this->TriangleList).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38;
  return;
}

// AdjustEdgeDirections @ 147543c30

void __thiscall
FDelaunayTriangleGenerator::AdjustEdgeDirections
          (FDelaunayTriangleGenerator *this,EPreferredTriangulationDirection param_1)

{
  double dVar1;
  double dVar2;
  FTriangle *pFVar3;
  FVertex *pFVar4;
  FVertex *pFVar5;
  longlong *plVar6;
  FTriangle *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  double dVar20;
  longlong local_res20;
  
  dVar10 = __real_3fd5555555555555;
  dVar9 = __real_3fd0000000000000;
  if ((param_1 != None) && (uVar19 = 0, (this->TriangleList).ArrayNum != 0)) {
    local_res20 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar19 < (this->TriangleList).ArrayNum) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar3 = *(FTriangle **)((this->TriangleList).AllocatorInstance.Data + local_res20);
      iVar12 = GetCandidateEdgeIndex(pFVar3);
      if (-1 < iVar12) {
        pFVar4 = pFVar3->Vertices[iVar12];
        iVar18 = iVar12 + 1;
        iVar18 = iVar18 + (iVar18 / 3 + (iVar18 >> 0x1f) +
                          (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        pFVar5 = pFVar3->Vertices[iVar18];
        dVar1 = (pFVar5->Position).field0_0x0._s_0.X;
        dVar2 = (pFVar5->Position).field0_0x0._s_0.Y;
        dVar20 = (dVar2 + (pFVar4->Position).field0_0x0._s_0.Y) *
                 (dVar1 + (pFVar4->Position).field0_0x0._s_0.X) * dVar9;
        if (param_1 == Tangential) {
          bVar11 = dVar20 < 0.0;
        }
        else {
          bVar11 = 0.0 <= dVar20;
        }
        if (0.0 < (dVar2 - (pFVar4->Position).field0_0x0._s_0.Y) *
                  (dVar1 - (pFVar4->Position).field0_0x0._s_0.X) != bVar11) {
          iVar16 = pFVar4->SampleIndex;
          uVar15 = 0;
          iVar14 = pFVar5->SampleIndex;
          lVar17 = 0;
          if ((this->TriangleList).ArrayNum != 0) {
            do {
              uVar13 = 0;
              if ((int)uVar15 < (this->TriangleList).ArrayNum) {
                uVar13 = ~uVar15 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              plVar6 = *(longlong **)((this->TriangleList).AllocatorInstance.Data + lVar17 * 8);
              if ((*(int *)(*plVar6 + 0x20) == iVar14) && (*(int *)(plVar6[1] + 0x20) == iVar16)) {
                iVar16 = 0;
LAB_147543e4b:
                if (-1 < (int)uVar15) {
                  uVar13 = 0;
                  if ((int)uVar15 < (this->TriangleList).ArrayNum) {
                    uVar13 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar7 = *(FTriangle **)((this->TriangleList).AllocatorInstance.Data + lVar17 * 8)
                  ;
                  iVar14 = GetCandidateEdgeIndex(pFVar7);
                  if (iVar14 == iVar16) {
                    pFVar3->Vertices[iVar18] = pFVar7->Vertices[(int)((iVar16 + 2U) % 3)];
                    iVar12 = iVar12 + 2;
                    pFVar7->Vertices[(int)((iVar16 + 1U) % 3)] =
                         pFVar3->Vertices
                         [iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                                   (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) &
                                         0xffffffffU) >> 0x1f)) * -3];
                    dVar1 = (pFVar3->Vertices[1]->Position).field0_0x0._s_0.Y;
                    dVar2 = (pFVar3->Vertices[0]->Position).field0_0x0._s_0.Y;
                    dVar20 = (pFVar3->Vertices[2]->Position).field0_0x0._s_0.Y;
                    (pFVar3->Center).field0_0x0._s_0.X =
                         ((pFVar3->Vertices[1]->Position).field0_0x0._s_0.X +
                          (pFVar3->Vertices[0]->Position).field0_0x0._s_0.X +
                         (pFVar3->Vertices[2]->Position).field0_0x0._s_0.X) * dVar10;
                    (pFVar3->Center).field0_0x0._s_0.Y = (dVar1 + dVar2 + dVar20) * dVar10;
                    dVar1 = (pFVar7->Vertices[1]->Position).field0_0x0._s_0.Y;
                    dVar2 = (pFVar7->Vertices[0]->Position).field0_0x0._s_0.Y;
                    dVar20 = (pFVar7->Vertices[2]->Position).field0_0x0._s_0.Y;
                    (pFVar7->Center).field0_0x0._s_0.X =
                         ((pFVar7->Vertices[0]->Position).field0_0x0._s_0.X +
                          (pFVar7->Vertices[1]->Position).field0_0x0._s_0.X +
                         (pFVar7->Vertices[2]->Position).field0_0x0._s_0.X) * dVar10;
                    (pFVar7->Center).field0_0x0._s_0.Y = (dVar1 + dVar2 + dVar20) * dVar10;
                  }
                }
                break;
              }
              if ((*(int *)(plVar6[1] + 0x20) == iVar14) && (*(int *)(plVar6[2] + 0x20) == iVar16))
              {
                iVar16 = 1;
                goto LAB_147543e4b;
              }
              if ((*(int *)(plVar6[2] + 0x20) == iVar14) && (*(int *)(*plVar6 + 0x20) == iVar16)) {
                iVar16 = 2;
                goto LAB_147543e4b;
              }
              uVar15 = uVar15 + 1;
              lVar17 = lVar17 + 1;
            } while (uVar15 != (this->TriangleList).ArrayNum);
          }
        }
      }
      uVar19 = uVar19 + 1;
      local_res20 = local_res20 + 8;
    } while (uVar19 != (this->TriangleList).ArrayNum);
  }
  return;
}

// AllCoincident @ 147544000

bool __thiscall
FDelaunayTriangleGenerator::AllCoincident
          (FDelaunayTriangleGenerator *this,TArray<FVertex,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = param_1->ArrayNum;
  if (iVar9 < 1) {
LAB_1475440a8:
    bVar4 = false;
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    uVar7 = 0;
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar9) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((*(double *)pFVar1 != *(double *)(pFVar2 + lVar8)) ||
         (*(double *)(pFVar1 + 8) != *(double *)(pFVar2 + lVar8 + 8))) goto LAB_1475440a8;
      iVar9 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while ((int)uVar7 < iVar9);
    bVar4 = true;
  }
  return bVar4;
}

// CalculateTriangles @ 14754c530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> * __thiscall
FDelaunayTriangleGenerator::CalculateTriangles
          (FDelaunayTriangleGenerator *this,
          TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *pTVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  double *pdVar25;
  uint *puVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStackY_248 [32];
  uint local_1f8;
  longlong local_1f0;
  uint local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  double local_1c0 [2];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  double local_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar21 = (this->TriangleList).ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,uVar21,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  dVar15 = __real_3e45798ee0000000;
  uVar14 = _UNK_15060db28;
  uVar13 = ___xmm_ffffffffffffffffffffffffffffffff;
  dVar12 = __real_3ff0000000000000;
  local_1f8 = 0;
  if ((this->TriangleList).ArrayNum != 0) {
    local_1d8 = 0;
    do {
      uVar21 = 0;
      if ((int)local_1f8 < (this->TriangleList).ArrayNum) {
        uVar21 = ~local_1f8 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
      dVar35 = (this->GridMin).field0_0x0._s_0.X;
      pdVar25 = local_1c0 + 1;
      dVar2 = (this->GridMin).field0_0x0._s_0.Y;
      puVar26 = (uint *)&local_128;
      dVar34 = (this->RecipGridSize).field0_0x0._s_0.X;
      dVar32 = (this->RecipGridSize).field0_0x0._s_0.Y;
      local_1e0 = 0;
      iVar27 = 1;
      plVar5 = *(longlong **)((this->TriangleList).AllocatorInstance.Data + local_1d8);
      local_138 = 0;
      uStack_130 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_128 = uVar13;
      uStack_120 = uVar14;
      uStack_118 = 0xffffffff;
      uStack_110 = 0;
      uStack_108 = 0;
      local_100 = 0xffffffffffffffff;
      local_f8 = 0xffffffffffffffff;
      uStack_f0 = 0xffffffff;
      local_d8 = uVar13;
      uStack_d0 = uVar14;
      local_c8 = 0xffffffff;
      local_168 = (*(double *)*plVar5 - dVar35) * dVar34;
      dStack_160 = (((double *)*plVar5)[1] - dVar2) * dVar32;
      dVar11 = (*(double *)plVar5[1] - dVar35) * dVar34;
      dVar33 = (((double *)plVar5[1])[1] - dVar2) * dVar32;
      dVar34 = (*(double *)plVar5[2] - dVar35) * dVar34;
      dVar32 = (((double *)plVar5[2])[1] - dVar2) * dVar32;
      uVar28 = SUB84(dVar33,0);
      uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
      local_158._8_4_ = uVar28;
      local_158._0_8_ = dVar11;
      local_158._12_4_ = uVar29;
      local_1c0[0] = local_168;
      uVar30 = SUB84(dVar32,0);
      uVar31 = (undefined4)((ulonglong)dVar32 >> 0x20);
      local_148._8_4_ = uVar30;
      local_148._0_8_ = dVar34;
      local_148._12_4_ = uVar31;
      local_1c0[1] = dStack_160;
      local_1b0._8_4_ = uVar28;
      local_1b0._0_8_ = dVar11;
      local_1b0._12_4_ = uVar29;
      local_1a0._8_4_ = uVar30;
      local_1a0._0_8_ = dVar34;
      local_1a0._12_4_ = uVar31;
      local_178 = CONCAT44(*(undefined4 *)(plVar5[1] + 0x20),*(undefined4 *)(*plVar5 + 0x20));
      uStack_170 = *(undefined4 *)(plVar5[2] + 0x20);
      do {
        uVar21 = 0;
        iVar19 = iVar27 + (iVar27 / 3 + (iVar27 >> 0x1f) +
                          (int)(((longlong)iVar27 / 3 + ((longlong)iVar27 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        iVar3 = *(int *)(plVar5[local_1e0] + 0x20);
        iVar4 = *(int *)(plVar5[iVar19] + 0x20);
        if ((this->TriangleList).ArrayNum != 0) {
          lVar24 = 0;
          do {
            uVar23 = 0;
            if ((int)uVar21 < (this->TriangleList).ArrayNum) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              pTVar18 = (TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
              return pTVar18;
            }
            plVar6 = *(longlong **)((this->TriangleList).AllocatorInstance.Data + lVar24);
            if ((((*(int *)(*plVar6 + 0x20) == iVar4) && (*(int *)(plVar6[1] + 0x20) == iVar3)) ||
                ((*(int *)(plVar6[1] + 0x20) == iVar4 && (*(int *)(plVar6[2] + 0x20) == iVar3)))) ||
               ((*(int *)(plVar6[2] + 0x20) == iVar4 && (*(int *)(*plVar6 + 0x20) == iVar3))))
            goto LAB_14754c8ba;
            uVar21 = uVar21 + 1;
            lVar24 = lVar24 + 8;
          } while (uVar21 != (this->TriangleList).ArrayNum);
        }
        uVar21 = 0xffffffff;
LAB_14754c8ba:
        dVar35 = pdVar25[-1];
        *puVar26 = uVar21;
        dVar34 = *(double *)(local_1b0 + (longlong)iVar19 * 0x10 + -8) - *pdVar25;
        dVar35 = dVar35 - local_1c0[(longlong)iVar19 * 2];
        dVar2 = dVar34 * dVar34 + dVar35 * dVar35;
        if (dVar2 <= dVar15) {
          dVar34 = 0.0;
          dVar35 = 0.0;
        }
        else {
          local_190 = dVar12 / SQRT(dVar2);
          dVar34 = dVar34 * local_190;
          dVar35 = dVar35 * local_190;
        }
        uVar28 = (undefined4)((ulonglong)dVar35 >> 0x20);
        pdVar25 = pdVar25 + 2;
        local_1e0 = local_1e0 + 1;
        auVar10._8_4_ = SUB84(dVar35,0);
        auVar10._0_8_ = dVar34;
        auVar10._12_4_ = uVar28;
        *(undefined1 (*) [16])(puVar26 + -4) = auVar10;
        puVar26[1] = 0xffffffff;
        puVar26[2] = 0xffffffff;
        iVar27 = iVar27 + 1;
        puVar26[3] = 0xffffffff;
        puVar26[4] = 0xffffffff;
        puVar26 = puVar26 + 10;
        local_188._8_4_ = SUB84(dVar35,0);
        local_188._0_8_ = dVar34;
        local_188._12_4_ = uVar28;
      } while (local_1e0 != 3);
      pFVar20 = (__return_storage_ptr__->AllocatorInstance).Data;
      piVar1 = &__return_storage_ptr__->ArrayMax;
      if (((pFVar20 <= (FScriptContainerElement *)&local_178) &&
          ((FScriptContainerElement *)&local_178 < pFVar20 + (longlong)*piVar1 * 0xb8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
      iVar27 = __return_storage_ptr__->ArrayNum;
      if (iVar27 == *piVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8b8,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      local_1f8 = local_1f8 + 1;
      __return_storage_ptr__->ArrayNum = iVar27 + 1;
      local_1d8 = local_1d8 + 8;
      pFVar20 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar27 * 0xb8;
      *(undefined8 *)pFVar20 = local_178;
      *(ulonglong *)(pFVar20 + 8) = CONCAT44(uStack_16c,uStack_170);
      *(double *)(pFVar20 + 0x10) = local_168;
      *(double *)(pFVar20 + 0x18) = dStack_160;
      *(undefined8 *)(pFVar20 + 0x20) = local_158._0_8_;
      *(undefined8 *)(pFVar20 + 0x28) = local_158._8_8_;
      *(undefined8 *)(pFVar20 + 0x30) = local_148._0_8_;
      *(undefined8 *)(pFVar20 + 0x38) = local_148._8_8_;
      *(undefined8 *)(pFVar20 + 0x40) = local_138;
      *(undefined8 *)(pFVar20 + 0x48) = uStack_130;
      *(undefined8 *)(pFVar20 + 0x50) = local_128;
      *(undefined8 *)(pFVar20 + 0x58) = uStack_120;
      *(ulonglong *)(pFVar20 + 0x60) = CONCAT44(uStack_114,uStack_118);
      *(undefined8 *)(pFVar20 + 0x68) = uStack_110;
      *(undefined8 *)(pFVar20 + 0x70) = uStack_108;
      *(undefined8 *)(pFVar20 + 0x78) = local_100;
      *(undefined8 *)(pFVar20 + 0x80) = local_f8;
      *(ulonglong *)(pFVar20 + 0x88) = CONCAT44(uStack_ec,uStack_f0);
      *(undefined8 *)(pFVar20 + 0x90) = local_e8;
      *(undefined8 *)(pFVar20 + 0x98) = uStack_e0;
      *(undefined8 *)(pFVar20 + 0xa0) = local_d8;
      *(undefined8 *)(pFVar20 + 0xa8) = uStack_d0;
      *(ulonglong *)(pFVar20 + 0xb0) = CONCAT44(uStack_c4,local_c8);
    } while (local_1f8 != (this->TriangleList).ArrayNum);
  }
  uVar21 = __return_storage_ptr__->ArrayNum;
  local_1e8 = 0;
  if (uVar21 != 0) {
    local_1f0 = 0;
    local_1e0 = 0;
    do {
      uVar23 = 0;
      if ((int)local_1e8 < (int)uVar21) {
        uVar23 = ~local_1e8 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
        return pTVar18;
      }
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_1f8 = 1;
      local_1d8 = 0;
      pFVar20 = pFVar7 + local_1e0 + 0x5c;
      do {
        if (*(int *)(pFVar20 + -0xc) == -1) {
          iVar27 = *(int *)(pFVar7 + local_1d8 * 4 + local_1e0);
          uVar23 = 0;
          lVar24 = 0;
          uVar21 = __return_storage_ptr__->ArrayNum;
          iVar3 = *(int *)(pFVar7 + (longlong)
                                    (int)(local_1f8 +
                                         ((int)local_1f8 / 3 + ((int)local_1f8 >> 0x1f) +
                                         (int)(((longlong)(int)local_1f8 / 3 +
                                                ((longlong)(int)local_1f8 >> 0x3f) & 0xffffffffU) >>
                                              0x1f)) * -3) * 4 + local_1e0);
          if (uVar21 != 0) {
            lVar22 = 0;
            do {
              if (lVar24 != local_1f0) {
                uVar17 = 0;
                if ((int)uVar23 < (int)uVar21) {
                  uVar17 = ~uVar23 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  pTVar18 = (TArray<FBlendSpaceTriangle,TSizedDefaultAllocator<32>_> *)(*pcVar9)();
                  return pTVar18;
                }
                pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
                if ((*(int *)(pFVar8 + lVar22) == iVar27) &&
                   (*(int *)(pFVar8 + lVar22 + 0xa0) == -1)) {
                  *(uint *)(pFVar20 + -8) = uVar23;
                  *(undefined4 *)pFVar20 = 2;
                }
                if ((*(int *)(pFVar8 + lVar22) == iVar3) && (*(int *)(pFVar8 + lVar22 + 0x50) == -1)
                   ) {
                  *(uint *)(pFVar20 + -4) = uVar23;
                  *(undefined4 *)(pFVar20 + 4) = 0;
                }
                if ((*(int *)(pFVar8 + lVar22 + 4) == iVar27) &&
                   (*(int *)(pFVar8 + lVar22 + 0x50) == -1)) {
                  *(uint *)(pFVar20 + -8) = uVar23;
                  *(undefined4 *)pFVar20 = 0;
                }
                if ((*(int *)(pFVar8 + lVar22 + 4) == iVar3) &&
                   (*(int *)(pFVar8 + lVar22 + 0x78) == -1)) {
                  *(uint *)(pFVar20 + -4) = uVar23;
                  *(undefined4 *)(pFVar20 + 4) = 1;
                }
                if ((*(int *)(pFVar8 + lVar22 + 8) == iVar27) &&
                   (*(int *)(pFVar8 + lVar22 + 0x78) == -1)) {
                  *(uint *)(pFVar20 + -8) = uVar23;
                  *(undefined4 *)pFVar20 = 1;
                }
                if ((*(int *)(pFVar8 + lVar22 + 8) == iVar3) &&
                   (*(int *)(pFVar8 + lVar22 + 0xa0) == -1)) {
                  *(uint *)(pFVar20 + -4) = uVar23;
                  *(undefined4 *)(pFVar20 + 4) = 2;
                }
              }
              uVar21 = __return_storage_ptr__->ArrayNum;
              uVar23 = uVar23 + 1;
              lVar24 = lVar24 + 1;
              lVar22 = lVar22 + 0xb8;
            } while (uVar23 != uVar21);
          }
        }
        local_1f8 = local_1f8 + 1;
        local_1d8 = local_1d8 + 1;
        pFVar20 = pFVar20 + 0x28;
      } while (local_1d8 != 3);
      local_1f0 = local_1f0 + 1;
      local_1e8 = local_1e8 + 1;
      uVar21 = __return_storage_ptr__->ArrayNum;
      local_1e0 = local_1e0 + 0xb8;
    } while (local_1e8 != uVar21);
  }
  return __return_storage_ptr__;
}

// EmptySamplePoints @ 147550d60

void __thiscall FDelaunayTriangleGenerator::EmptySamplePoints(FDelaunayTriangleGenerator *this)

{
  int *piVar1;
  
  DestructItems<FVertex,int>
            ((FVertex *)(this->SamplePointList).AllocatorInstance.Data,
             (this->SamplePointList).ArrayNum);
  piVar1 = &(this->SamplePointList).ArrayMax;
  (this->SamplePointList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// EmptyTriangles @ 147550db0

void __thiscall FDelaunayTriangleGenerator::EmptyTriangles(FDelaunayTriangleGenerator *this)

{
  FTriangle *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->TriangleList).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->TriangleList).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(FTriangle **)((this->TriangleList).AllocatorInstance.Data + lVar5);
      if (this_00 != (FTriangle *)0x0) {
        FTriangle::~FTriangle(this_00);
        ::operator_delete(this_00,0x58);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->TriangleList).ArrayNum);
  }
  (this->TriangleList).ArrayNum = 0;
  if ((this->TriangleList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TriangleList).AllocatorInstance,0,&(this->TriangleList).ArrayMax);
  }
  return;
}

// FindTriangleIndexWithEdge @ 147555400

int __thiscall
FDelaunayTriangleGenerator::FindTriangleIndexWithEdge
          (FDelaunayTriangleGenerator *this,int param_1,int param_2,int *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if ((this->TriangleList).ArrayNum != 0) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->TriangleList).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      plVar1 = *(longlong **)((this->TriangleList).AllocatorInstance.Data + lVar7);
      if ((*(int *)(*plVar1 + 0x20) == param_1) && (*(int *)(plVar1[1] + 0x20) == param_2)) {
        if (param_3 == (int *)0x0) {
          return uVar6;
        }
        *param_3 = 0;
        return uVar6;
      }
      if ((*(int *)(plVar1[1] + 0x20) == param_1) && (*(int *)(plVar1[2] + 0x20) == param_2)) {
        if (param_3 == (int *)0x0) {
          return uVar6;
        }
        *param_3 = 1;
        return uVar6;
      }
      if ((*(int *)(plVar1[2] + 0x20) == param_1) && (*(int *)(*plVar1 + 0x20) == param_2)) {
        if (param_3 == (int *)0x0) {
          return uVar6;
        }
        *param_3 = 2;
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar6 != (this->TriangleList).ArrayNum);
  }
  return -1;
}

// FlipTriangles @ 147555ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDelaunayTriangleGenerator::FlipTriangles(FDelaunayTriangleGenerator *this,int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  FVertex *pFVar8;
  longlong *plVar9;
  FVertex *pFVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  ECircumCircleState EVar14;
  FVertex **ppFVar15;
  uint uVar16;
  longlong lVar17;
  FTriangle *pFVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FVertex *pFVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  int local_1f8;
  FTriangle *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  FDelaunayTriangleGenerator *local_1d0;
  FTriangle *local_1c8;
  FTriangle *local_1c0;
  FTriangle *local_1b8 [2];
  FTriangle local_1a8;
  FTriangle local_148 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_228;
  uVar20 = 0;
  iVar7 = (this->TriangleList).ArrayNum;
  uVar16 = 0;
  if (param_1 < iVar7) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  local_1d0 = this;
  if ((uVar16 == 0) &&
     (local_208 = (longlong)param_1, local_200 = (longlong)iVar7,
     bVar12 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  iVar7 = (this->TriangleList).ArrayNum;
  pFVar18 = *(FTriangle **)((this->TriangleList).AllocatorInstance.Data + (longlong)param_1 * 8);
  uVar16 = 0;
  if (param_2 < iVar7) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  local_1f0 = pFVar18;
  if ((uVar16 == 0) &&
     (local_208 = (longlong)param_2, local_200 = (longlong)iVar7,
     bVar12 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  pFVar8 = pFVar18->Vertices[0];
  plVar9 = *(longlong **)((this->TriangleList).AllocatorInstance.Data + (longlong)param_2 * 8);
  dVar1 = (pFVar8->Position).field0_0x0._s_0.X;
  pFVar22 = (FVertex *)*plVar9;
  dVar24 = (pFVar22->Position).field0_0x0._s_0.X;
  if ((((dVar1 == dVar24) &&
       ((pFVar22->Position).field0_0x0._s_0.Y == (pFVar8->Position).field0_0x0._s_0.Y)) ||
      ((dVar24 == (pFVar18->Vertices[1]->Position).field0_0x0._s_0.X &&
       ((pFVar22->Position).field0_0x0._s_0.Y == (pFVar18->Vertices[1]->Position).field0_0x0._s_0.Y)
       ))) || ((dVar24 == (pFVar18->Vertices[2]->Position).field0_0x0._s_0.X &&
               ((pFVar22->Position).field0_0x0._s_0.Y ==
                (pFVar18->Vertices[2]->Position).field0_0x0._s_0.Y)))) {
    pFVar22 = (FVertex *)plVar9[1];
    dVar24 = (pFVar22->Position).field0_0x0._s_0.X;
    if (((dVar1 == dVar24) &&
        ((pFVar22->Position).field0_0x0._s_0.Y == (pFVar8->Position).field0_0x0._s_0.Y)) ||
       (((dVar24 == (pFVar18->Vertices[1]->Position).field0_0x0._s_0.X &&
         ((pFVar22->Position).field0_0x0._s_0.Y ==
          (pFVar18->Vertices[1]->Position).field0_0x0._s_0.Y)) ||
        ((dVar24 == (pFVar18->Vertices[2]->Position).field0_0x0._s_0.X &&
         ((pFVar22->Position).field0_0x0._s_0.Y ==
          (pFVar18->Vertices[2]->Position).field0_0x0._s_0.Y)))))) {
      pFVar22 = (FVertex *)plVar9[2];
      dVar1 = (pFVar22->Position).field0_0x0._s_0.X;
      if ((((dVar1 == (pFVar18->Vertices[0]->Position).field0_0x0._s_0.X) &&
           ((pFVar22->Position).field0_0x0._s_0.Y ==
            (pFVar18->Vertices[0]->Position).field0_0x0._s_0.Y)) ||
          ((dVar1 == (pFVar18->Vertices[1]->Position).field0_0x0._s_0.X &&
           ((pFVar22->Position).field0_0x0._s_0.Y ==
            (pFVar18->Vertices[1]->Position).field0_0x0._s_0.Y)))) ||
         ((dVar1 == (pFVar18->Vertices[2]->Position).field0_0x0._s_0.X &&
          ((pFVar22->Position).field0_0x0._s_0.Y ==
           (pFVar18->Vertices[2]->Position).field0_0x0._s_0.Y)))) {
        pFVar22 = (FVertex *)0x0;
      }
    }
  }
  EVar14 = GetCircumcircleState(this,pFVar18,pFVar22);
  dVar1 = __real_3fd5555555555555;
  if (EVar14 == ECCS_Inside) {
    ppFVar15 = local_148[0].Vertices + 2;
    lVar17 = 2;
    local_1e0 = 2;
    do {
      ((FTriangle *)(ppFVar15 + -2))->Vertices[0] = (FVertex *)0x0;
      ppFVar15[-1] = (FVertex *)0x0;
      *ppFVar15 = (FVertex *)0x0;
      ppFVar15 = ppFVar15 + 0xb;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    local_1e8 = 0;
    local_1f8 = 1;
    local_1d8 = 2;
    uVar23 = uVar20;
    do {
      lVar17 = local_1e8;
      if (local_1f8 < 3) {
        pFVar18 = local_148 + uVar23;
        ppFVar15 = local_1f0->Vertices + local_1e8 + 1;
        uVar21 = (ulonglong)(3 - local_1f8);
        puVar19 = (undefined8 *)((longlong)local_1f0 + (local_1e0 - local_1e8) * 8);
        do {
          pFVar8 = *ppFVar15;
          pFVar10 = local_1f0->Vertices[lVar17];
          dVar24 = (pFVar22->Position).field0_0x0._s_0.Y;
          dVar2 = (pFVar22->Position).field0_0x0._s_0.X;
          dVar3 = (pFVar8->Position).field0_0x0._s_0.X;
          dVar4 = (pFVar10->Position).field0_0x0._s_0.X;
          dVar5 = (pFVar10->Position).field0_0x0._s_0.Y;
          dVar6 = (pFVar8->Position).field0_0x0._s_0.Y;
          if ((dVar3 - dVar4) * (dVar24 - dVar5) - (dVar6 - dVar5) * (dVar2 - dVar4) != 0.0) {
            local_1c0 = &local_1a8;
            local_1a8.Center.field0_0x0._s_0.X = (dVar4 + dVar3 + dVar2) * dVar1;
            local_1a8.Center.field0_0x0._s_0.Y = (dVar6 + dVar5 + dVar24) * dVar1;
            local_1a8.Vertices[0] = pFVar10;
            local_1a8.Vertices[1] = pFVar8;
            local_1a8.Vertices[2] = pFVar22;
            TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
                      (&pFVar10->Triangles,&local_1c0);
            local_1b8[0] = &local_1a8;
            TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
                      (&local_1a8.Vertices[1]->Triangles,local_1b8);
            local_1c8 = &local_1a8;
            TArray<FTriangle_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTriangle_*_const_&>
                      (&local_1a8.Vertices[2]->Triangles,&local_1c8);
            pFVar8 = local_1a8.Vertices[2];
            dVar24 = ((local_1a8.Vertices[2]->Position).field0_0x0._s_0.Y -
                     (local_1a8.Vertices[0]->Position).field0_0x0._s_0.Y) *
                     ((local_1a8.Vertices[1]->Position).field0_0x0._s_0.X -
                     (local_1a8.Vertices[0]->Position).field0_0x0._s_0.X) -
                     ((local_1a8.Vertices[1]->Position).field0_0x0._s_0.Y -
                     (local_1a8.Vertices[0]->Position).field0_0x0._s_0.Y) *
                     ((local_1a8.Vertices[2]->Position).field0_0x0._s_0.X -
                     (local_1a8.Vertices[0]->Position).field0_0x0._s_0.X);
            if (dVar24 == 0.0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result != 0.f",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.h"
                                  ,0x10c,L"");
              if (bVar12) {
                pcVar11 = (code *)swi(3);
                uVar13 = (*pcVar11)();
                return (bool)uVar13;
              }
            }
            else if (dVar24 < 0.0) {
              local_1a8.Vertices[2] = local_1a8.Vertices[1];
              local_1a8.Vertices[1] = pFVar8;
            }
            local_1a8.Edges[1].Vertices[0] = local_1a8.Vertices[1];
            local_1a8.Edges[1].Vertices[1] = local_1a8.Vertices[2];
            local_1a8.Edges[0].Vertices[0] = local_1a8.Vertices[0];
            local_1a8.Edges[0].Vertices[1] = local_1a8.Vertices[1];
            local_1a8.Edges[2].Vertices[0] = local_1a8.Vertices[2];
            local_1a8.Edges[2].Vertices[1] = local_1a8.Vertices[0];
            EVar14 = GetCircumcircleState(local_1d0,&local_1a8,(FVertex *)*puVar19);
            if (EVar14 == ECCS_Outside) {
              if ((1 < (longlong)uVar23) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TrianglesMade < 2",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\BlendSpaceHelpers.cpp"
                                      ,0x1cc,L"Incorrect number of triangles created"), bVar12)) {
                pcVar11 = (code *)swi(3);
                uVar13 = (*pcVar11)();
                return (bool)uVar13;
              }
              uVar20 = (ulonglong)((int)uVar20 + 1);
              uVar23 = uVar23 + 1;
              pFVar18->Vertices[0] = local_1a8.Vertices[0];
              pFVar18->Vertices[1] = local_1a8.Vertices[1];
              pFVar18->Vertices[2] = local_1a8.Vertices[2];
              (pFVar18->Center).field0_0x0._s_0.X = local_1a8.Center.field0_0x0._s_0.X;
              (pFVar18->Center).field0_0x0._s_0.Y = local_1a8.Center.field0_0x0._s_0.Y;
              pFVar18->Edges[0].Vertices[0] = local_1a8.Edges[0].Vertices[0];
              pFVar18->Edges[0].Vertices[1] = local_1a8.Edges[0].Vertices[1];
              pFVar18->Edges[1].Vertices[0] = local_1a8.Edges[1].Vertices[0];
              pFVar18->Edges[1].Vertices[1] = local_1a8.Edges[1].Vertices[1];
              pFVar18->Edges[2].Vertices[0] = local_1a8.Edges[2].Vertices[0];
              pFVar18->Edges[2].Vertices[1] = local_1a8.Edges[2].Vertices[1];
              pFVar18 = pFVar18 + 1;
            }
            FTriangle::~FTriangle(&local_1a8);
            lVar17 = local_1e8;
          }
          ppFVar15 = ppFVar15 + 1;
          puVar19 = puVar19 + -1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      local_1f8 = local_1f8 + 1;
      local_1e8 = lVar17 + 1;
      local_1e0 = local_1e0 + -1;
      local_1d8 = local_1d8 + -1;
    } while (local_1d8 != 0);
    bVar12 = (int)uVar20 == 2;
    if (bVar12) {
      AddTriangle(local_1d0,local_148,false);
      AddTriangle(local_1d0,local_148 + 1,false);
    }
    FTriangle::~FTriangle(local_148 + 1);
    FTriangle::~FTriangle(local_148);
  }
  else {
    bVar12 = false;
  }
  return bVar12;
}

// GenerateTriangles @ 1475569b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FDelaunayTriangleGenerator::GenerateTriangles
          (FDelaunayTriangleGenerator *this,TArray<FVertex,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  FVertex *pFVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  FVertex *pFVar11;
  FVertex *pFVar12;
  FTriangle *pFVar13;
  code *pcVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStackY_288 [32];
  FTriangle local_238;
  FTriangle local_1d8;
  FTriangle local_178;
  FTriangle local_118;
  FTriangle local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (param_2 == 3) {
    if ((param_1->ArrayNum < 3) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      iVar16 = (*pcVar14)();
      return iVar16;
    }
    pFVar7 = (param_1->AllocatorInstance).Data;
    if ((param_1->ArrayNum < 2) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      iVar16 = (*pcVar14)();
      return iVar16;
    }
    pFVar8 = (param_1->AllocatorInstance).Data;
    if ((param_1->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      iVar16 = (*pcVar14)();
      return iVar16;
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
    if ((*(double *)(pFVar7 + 0x58) - *(double *)(pFVar9 + 8)) *
        (*(double *)(pFVar8 + 0x28) - *(double *)pFVar9) -
        (*(double *)(pFVar8 + 0x30) - *(double *)(pFVar9 + 8)) *
        (*(double *)(pFVar7 + 0x50) - *(double *)pFVar9) != 0.0) {
      if ((param_1->ArrayNum < 3) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        iVar16 = (*pcVar14)();
        return iVar16;
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      if ((param_1->ArrayNum < 2) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        iVar16 = (*pcVar14)();
        return iVar16;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      if ((param_1->ArrayNum < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        iVar16 = (*pcVar14)();
        return iVar16;
      }
      FTriangle::FTriangle
                (&local_238,(FVertex *)(param_1->AllocatorInstance).Data,(FVertex *)(pFVar8 + 0x28),
                 (FVertex *)(pFVar7 + 0x50));
      AddTriangle(this,&local_238,true);
      FTriangle::~FTriangle(&local_238);
    }
    iVar16 = (this->TriangleList).ArrayNum;
  }
  else {
    uVar22 = param_2 - 1;
    if ((this->TriangleList).ArrayNum == 0) {
      uVar20 = 0;
      if ((int)uVar22 < param_1->ArrayNum) {
        uVar20 = ~uVar22 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        iVar16 = (*pcVar14)();
        return iVar16;
      }
      pFVar4 = (FVertex *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x28);
      if (0 < param_2 + -2) {
        lVar26 = 0;
        uVar22 = 0;
        while( true ) {
          uVar20 = uVar22 + 1;
          uVar25 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar25 = ~uVar20 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar14 = (code *)swi(3);
            iVar16 = (*pcVar14)();
            return iVar16;
          }
          pFVar7 = (param_1->AllocatorInstance).Data;
          lVar1 = lVar26 + 0x28;
          uVar25 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar25 = ~uVar22 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) break;
          pFVar8 = (param_1->AllocatorInstance).Data;
          dVar5 = *(double *)(pFVar8 + lVar26);
          dVar6 = *(double *)(pFVar8 + lVar26 + 8);
          if ((*(double *)(pFVar7 + lVar1) - dVar5) * ((pFVar4->Position).field0_0x0._s_0.Y - dVar6)
              - (*(double *)(pFVar7 + lVar26 + 0x30) - dVar6) *
                ((pFVar4->Position).field0_0x0._s_0.X - dVar5) != 0.0) {
            uVar25 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar25 = ~uVar20 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar14 = (code *)swi(3);
              iVar16 = (*pcVar14)();
              return iVar16;
            }
            pFVar7 = (param_1->AllocatorInstance).Data;
            uVar25 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar25 = ~uVar22 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar14 = (code *)swi(3);
              iVar16 = (*pcVar14)();
              return iVar16;
            }
            FTriangle::FTriangle
                      (&local_1d8,(FVertex *)((param_1->AllocatorInstance).Data + lVar26),
                       (FVertex *)(pFVar7 + lVar1),pFVar4);
            AddTriangle(this,&local_1d8,true);
            FTriangle::~FTriangle(&local_1d8);
          }
          lVar26 = lVar1;
          uVar22 = uVar20;
          if (param_2 + -2 <= (int)uVar20) {
            return (this->TriangleList).ArrayNum;
          }
        }
        pcVar14 = (code *)swi(3);
        iVar16 = (*pcVar14)();
        return iVar16;
      }
    }
    else {
      uVar20 = 0;
      if ((int)uVar22 < param_1->ArrayNum) {
        uVar20 = ~uVar22 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        iVar16 = (*pcVar14)();
        return iVar16;
      }
      uVar20 = 0;
      pFVar4 = (FVertex *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x28);
      if (0 < (this->TriangleList).ArrayNum) {
        lVar26 = 0;
        do {
          uVar22 = 0;
          if ((int)uVar20 < (this->TriangleList).ArrayNum) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar14 = (code *)swi(3);
            iVar16 = (*pcVar14)();
            return iVar16;
          }
          puVar10 = *(undefined8 **)((this->TriangleList).AllocatorInstance.Data + lVar26);
          pFVar11 = (FVertex *)*puVar10;
          pFVar12 = (FVertex *)puVar10[1];
          if (((pFVar4->Position).field0_0x0._s_0.Y - (pFVar11->Position).field0_0x0._s_0.Y) *
              ((pFVar12->Position).field0_0x0._s_0.X - (pFVar11->Position).field0_0x0._s_0.X) -
              ((pFVar12->Position).field0_0x0._s_0.Y - (pFVar11->Position).field0_0x0._s_0.Y) *
              ((pFVar4->Position).field0_0x0._s_0.X - (pFVar11->Position).field0_0x0._s_0.X) != 0.0)
          {
            FTriangle::FTriangle(&local_178,pFVar11,pFVar12,pFVar4);
            AddTriangle(this,&local_178,true);
            FTriangle::~FTriangle(&local_178);
          }
          pFVar11 = (FVertex *)*puVar10;
          pFVar12 = (FVertex *)puVar10[2];
          if (((pFVar4->Position).field0_0x0._s_0.Y - (pFVar11->Position).field0_0x0._s_0.Y) *
              ((pFVar12->Position).field0_0x0._s_0.X - (pFVar11->Position).field0_0x0._s_0.X) -
              ((pFVar12->Position).field0_0x0._s_0.Y - (pFVar11->Position).field0_0x0._s_0.Y) *
              ((pFVar4->Position).field0_0x0._s_0.X - (pFVar11->Position).field0_0x0._s_0.X) != 0.0)
          {
            FTriangle::FTriangle(&local_118,pFVar11,pFVar12,pFVar4);
            AddTriangle(this,&local_118,true);
            FTriangle::~FTriangle(&local_118);
          }
          pFVar11 = (FVertex *)puVar10[1];
          pFVar12 = (FVertex *)puVar10[2];
          if (((pFVar4->Position).field0_0x0._s_0.Y - (pFVar11->Position).field0_0x0._s_0.Y) *
              ((pFVar12->Position).field0_0x0._s_0.X - (pFVar11->Position).field0_0x0._s_0.X) -
              ((pFVar12->Position).field0_0x0._s_0.Y - (pFVar11->Position).field0_0x0._s_0.Y) *
              ((pFVar4->Position).field0_0x0._s_0.X - (pFVar11->Position).field0_0x0._s_0.X) != 0.0)
          {
            FTriangle::FTriangle(&local_b8,pFVar11,pFVar12,pFVar4);
            AddTriangle(this,&local_b8,true);
            FTriangle::~FTriangle(&local_b8);
          }
          iVar16 = (this->TriangleList).ArrayNum;
          uVar20 = uVar20 + 1;
          lVar26 = lVar26 + 8;
        } while ((int)uVar20 < iVar16);
        uVar22 = 0;
        if (iVar16 < 1) {
          return iVar16;
        }
        lVar26 = 0;
        do {
          uVar25 = ~uVar22 >> 0x1f;
          uVar20 = 0;
          if ((int)uVar22 < (this->TriangleList).ArrayNum) {
            uVar20 = uVar25;
          }
          if ((uVar20 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar14 = (code *)swi(3);
            iVar16 = (*pcVar14)();
            return iVar16;
          }
          uVar20 = uVar22 + 1;
          lVar1 = *(longlong *)((this->TriangleList).AllocatorInstance.Data + lVar26 * 8);
          if ((int)uVar20 < (this->TriangleList).ArrayNum) {
            lVar21 = lVar26;
            do {
              lVar21 = lVar21 + 1;
              uVar17 = 0;
              if ((int)uVar20 < (this->TriangleList).ArrayNum) {
                uVar17 = ~uVar20 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar14 = (code *)swi(3);
                iVar16 = (*pcVar14)();
                return iVar16;
              }
              lVar24 = 0;
              plVar23 = (longlong *)
                        (*(longlong *)((this->TriangleList).AllocatorInstance.Data + lVar21 * 8) +
                        0x28);
              do {
                lVar19 = 0;
                plVar18 = (longlong *)(lVar1 + 0x28);
                do {
                  if ((*plVar23 == plVar18[1]) && (plVar23[1] == *plVar18)) {
                    bVar15 = FlipTriangles(this,uVar22,uVar20);
                    if (!bVar15) goto LAB_1475571c5;
                    uVar17 = 0;
                    if ((int)uVar22 < (this->TriangleList).ArrayNum) {
                      uVar17 = uVar25;
                    }
                    if ((uVar17 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar14 = (code *)swi(3);
                      iVar16 = (*pcVar14)();
                      return iVar16;
                    }
                    pFVar13 = *(FTriangle **)
                               ((this->TriangleList).AllocatorInstance.Data + lVar26 * 8);
                    if (pFVar13 != (FTriangle *)0x0) {
                      FTriangle::~FTriangle(pFVar13);
                      ::operator_delete(pFVar13,0x58);
                    }
                    uVar17 = 0;
                    if ((int)uVar20 < (this->TriangleList).ArrayNum) {
                      uVar17 = ~uVar20 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar14 = (code *)swi(3);
                      iVar16 = (*pcVar14)();
                      return iVar16;
                    }
                    pFVar13 = *(FTriangle **)
                               ((this->TriangleList).AllocatorInstance.Data + lVar21 * 8);
                    if (pFVar13 != (FTriangle *)0x0) {
                      FTriangle::~FTriangle(pFVar13);
                      ::operator_delete(pFVar13,0x58);
                    }
                    uVar17 = 0;
                    if ((int)uVar20 < (this->TriangleList).ArrayNum) {
                      uVar17 = ~uVar20 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar14 = (code *)swi(3);
                      iVar16 = (*pcVar14)();
                      return iVar16;
                    }
                    pFVar7 = (this->TriangleList).AllocatorInstance.Data + (longlong)(int)uVar20 * 8
                    ;
                    iVar16 = (this->TriangleList).ArrayNum + ~uVar20;
                    if (iVar16 != 0) {
                      memmove(pFVar7,pFVar7 + 8,(longlong)iVar16 << 3);
                    }
                    piVar2 = &(this->TriangleList).ArrayNum;
                    *piVar2 = *piVar2 + -1;
                    piVar2 = &(this->TriangleList).ArrayMax;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,&(this->TriangleList).AllocatorInstance,
                               (this->TriangleList).ArrayNum,piVar2);
                    uVar20 = 0;
                    if ((int)uVar22 < (this->TriangleList).ArrayNum) {
                      uVar20 = uVar25;
                    }
                    if ((uVar20 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar14 = (code *)swi(3);
                      iVar16 = (*pcVar14)();
                      return iVar16;
                    }
                    pFVar7 = (this->TriangleList).AllocatorInstance.Data + (longlong)(int)uVar22 * 8
                    ;
                    iVar16 = (this->TriangleList).ArrayNum + ~uVar22;
                    if (iVar16 != 0) {
                      memmove(pFVar7,pFVar7 + 8,(longlong)iVar16 << 3);
                    }
                    piVar3 = &(this->TriangleList).ArrayNum;
                    *piVar3 = *piVar3 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,&(this->TriangleList).AllocatorInstance,
                               (this->TriangleList).ArrayNum,piVar2);
                    uVar22 = 0xffffffff;
                    lVar26 = -1;
                    goto LAB_1475573d4;
                  }
                  lVar19 = lVar19 + 1;
                  plVar18 = plVar18 + 2;
                } while (lVar19 < 3);
                lVar24 = lVar24 + 1;
                plVar23 = plVar23 + 2;
              } while (lVar24 < 3);
LAB_1475571c5:
              uVar20 = uVar20 + 1;
            } while ((int)uVar20 < (this->TriangleList).ArrayNum);
          }
LAB_1475573d4:
          uVar22 = uVar22 + 1;
          lVar26 = lVar26 + 1;
        } while ((int)uVar22 < (this->TriangleList).ArrayNum);
      }
    }
    iVar16 = (this->TriangleList).ArrayNum;
  }
  return iVar16;
}

// GetCircumcircleState @ 14755aee0

ECircumCircleState __thiscall
FDelaunayTriangleGenerator::GetCircumcircleState
          (FDelaunayTriangleGenerator *this,FTriangle *param_1,FVertex *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ECircumCircleState EVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar12 = (this->GridMin).field0_0x0._s_0.X;
  dVar1 = (this->GridMin).field0_0x0._s_0.Y;
  dVar2 = (this->RecipGridSize).field0_0x0._s_0.X;
  dVar3 = (this->RecipGridSize).field0_0x0._s_0.Y;
  dVar11 = ((param_2->Position).field0_0x0._s_0.Y - dVar1) * dVar3;
  dVar13 = ((param_2->Position).field0_0x0._s_0.X - dVar12) * dVar2;
  dVar6 = ((param_1->Vertices[0]->Position).field0_0x0._s_0.X - dVar12) * dVar2;
  dVar4 = ((param_1->Vertices[0]->Position).field0_0x0._s_0.Y - dVar1) * dVar3;
  dVar7 = ((param_1->Vertices[1]->Position).field0_0x0._s_0.X - dVar12) * dVar2;
  dVar5 = ((param_1->Vertices[1]->Position).field0_0x0._s_0.Y - dVar1) * dVar3;
  dVar2 = ((param_1->Vertices[2]->Position).field0_0x0._s_0.X - dVar12) * dVar2;
  dVar3 = ((param_1->Vertices[2]->Position).field0_0x0._s_0.Y - dVar1) * dVar3;
  dVar10 = dVar11 * dVar11;
  dVar9 = dVar13 * dVar13;
  dVar1 = ((dVar6 * dVar6 - dVar9) + dVar4 * dVar4) - dVar10;
  dVar12 = ((dVar2 * dVar2 - dVar9) + dVar3 * dVar3) - dVar10;
  dVar10 = ((dVar7 * dVar7 - dVar9) + dVar5 * dVar5) - dVar10;
  dVar12 = ((dVar5 - dVar11) * (dVar6 - dVar13) * dVar12 +
            dVar10 * (dVar4 - dVar11) * (dVar2 - dVar13) +
           (dVar7 - dVar13) * dVar1 * (dVar3 - dVar11)) -
           ((dVar5 - dVar11) * dVar1 * (dVar2 - dVar13) +
            (dVar7 - dVar13) * (dVar4 - dVar11) * dVar12 +
           dVar10 * (dVar6 - dVar13) * (dVar3 - dVar11));
  if (0.0 <= dVar12) {
    EVar8 = (ECircumCircleState)
            (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  }
  else {
    EVar8 = ECCS_Outside;
  }
  return EVar8;
}

// IsCollinear @ 14756a480

bool __thiscall
FDelaunayTriangleGenerator::IsCollinear
          (FDelaunayTriangleGenerator *this,FVertex *param_1,FVertex *param_2,FVertex *param_3)

{
  if (((param_3->Position).field0_0x0._s_0.Y - (param_1->Position).field0_0x0._s_0.Y) *
      ((param_2->Position).field0_0x0._s_0.X - (param_1->Position).field0_0x0._s_0.X) -
      ((param_2->Position).field0_0x0._s_0.Y - (param_1->Position).field0_0x0._s_0.Y) *
      ((param_3->Position).field0_0x0._s_0.X - (param_1->Position).field0_0x0._s_0.X) == 0.0) {
    return true;
  }
  return false;
}

// Reset @ 147575940

void __thiscall FDelaunayTriangleGenerator::Reset(FDelaunayTriangleGenerator *this)

{
  int *piVar1;
  FTriangle *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->TriangleList).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->TriangleList).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FTriangle **)((this->TriangleList).AllocatorInstance.Data + lVar6);
      if (this_00 != (FTriangle *)0x0) {
        FTriangle::~FTriangle(this_00);
        ::operator_delete(this_00,0x58);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->TriangleList).ArrayNum);
  }
  piVar1 = &(this->TriangleList).ArrayMax;
  (this->TriangleList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->TriangleList).AllocatorInstance,0,piVar1);
  }
  DestructItems<FVertex,int>
            ((FVertex *)(this->SamplePointList).AllocatorInstance.Data,
             (this->SamplePointList).ArrayNum);
  piVar1 = &(this->SamplePointList).ArrayMax;
  (this->SamplePointList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// SetGridBox @ 147578e90

void __thiscall
FDelaunayTriangleGenerator::SetGridBox
          (FDelaunayTriangleGenerator *this,FBlendParameter *param_1,FBlendParameter *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (double)param_1->Max - (double)param_1->Min;
  if (dVar1 <= __real_3ee4f8b580000000) {
    dVar1 = __real_3ee4f8b580000000;
  }
  dVar3 = (double)param_2->Max - (double)param_2->Min;
  if (dVar3 <= __real_3ee4f8b580000000) {
    dVar3 = __real_3ee4f8b580000000;
  }
  dVar4 = ((double)param_2->Max + (double)param_2->Min) * __real_3fe0000000000000;
  dVar2 = dVar3 * __real_3fe0000000000000;
  (this->GridMin).field0_0x0._s_0.X =
       ((double)param_1->Max + (double)param_1->Min) * __real_3fe0000000000000 -
       dVar1 * __real_3fe0000000000000;
  (this->GridMin).field0_0x0._s_0.Y = dVar4 - dVar2;
  dVar3 = __real_3ff0000000000000 / dVar3;
  (this->RecipGridSize).field0_0x0._s_0.X = __real_3ff0000000000000 / dVar1;
  (this->RecipGridSize).field0_0x0._s_0.Y = dVar3;
  return;
}

// SortSamples @ 14757a700

void __thiscall FDelaunayTriangleGenerator::SortSamples(FDelaunayTriangleGenerator *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FVertex,int,FIdentityFunctor,TDereferenceWrapper<FVertex,_FDelaunayTriangleGenerator::SortSamples_::__l2::FComparePoints>_>
            ((FVertex *)(this->SamplePointList).AllocatorInstance.Data,
             (this->SamplePointList).ArrayNum,local_res8[0],(FComparePoints *)local_res8);
  return;
}

// Triangulate @ 147580950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDelaunayTriangleGenerator::Triangulate
          (FDelaunayTriangleGenerator *this,EPreferredTriangulationDirection param_1)

{
  FVertex *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  FIdentityFunctor local_1b8 [16];
  FTriangle local_1a8;
  FTriangle local_148;
  FTriangle local_e8;
  FTriangle local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  iVar7 = (this->SamplePointList).ArrayNum;
  if (iVar7 == 0) {
    return;
  }
  pFVar1 = (FVertex *)(this->SamplePointList).AllocatorInstance.Data;
  if (iVar7 == 1) {
    FTriangle::FTriangle(&local_1a8,pFVar1);
    AddTriangle(this,&local_1a8,true);
    FTriangle::~FTriangle(&local_1a8);
    goto LAB_147580c78;
  }
  if (iVar7 == 2) {
    FTriangle::FTriangle(&local_148,pFVar1,pFVar1 + 1);
    AddTriangle(this,&local_148,true);
    FTriangle::~FTriangle(&local_148);
    goto LAB_147580c78;
  }
  AlgoImpl::
  IntroSortInternal<FVertex,int,FIdentityFunctor,TDereferenceWrapper<FVertex,_FDelaunayTriangleGenerator::SortSamples_::__l2::FComparePoints>_>
            (pFVar1,iVar7,local_1b8[0],(FComparePoints *)local_1b8);
  iVar7 = (this->SamplePointList).ArrayNum;
  iVar9 = 2;
  if (2 < iVar7) {
    do {
      iVar9 = iVar9 + 1;
      GenerateTriangles(this,&this->SamplePointList,iVar9);
      iVar7 = (this->SamplePointList).ArrayNum;
    } while (iVar9 < iVar7);
  }
  if ((this->TriangleList).ArrayNum != 0) goto LAB_147580c78;
  if (iVar7 < 1) {
LAB_147580b55:
    iVar7 = (this->SamplePointList).ArrayNum;
    uVar10 = 0;
    if (0 < iVar7 + -1) {
      do {
        uVar11 = uVar10 + 1;
        uVar6 = 0;
        if ((int)uVar11 < iVar7) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_1c0 = (longlong)iVar7;
          local_1c8 = (longlong)(int)uVar11;
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
        iVar7 = (this->SamplePointList).ArrayNum;
        pFVar2 = (this->SamplePointList).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar10 < iVar7) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_1c8 = (longlong)(int)uVar10;
          local_1c0 = (longlong)iVar7;
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
        FTriangle::FTriangle
                  (&local_88,
                   (FVertex *)
                   ((this->SamplePointList).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x28),
                   (FVertex *)(pFVar2 + (longlong)(int)uVar11 * 0x28));
        AddTriangle(this,&local_88,true);
        FTriangle::~FTriangle(&local_88);
        iVar7 = (this->SamplePointList).ArrayNum;
        uVar10 = uVar11;
      } while ((int)uVar11 < iVar7 + -1);
    }
    goto LAB_147580c78;
  }
  pFVar2 = (this->SamplePointList).AllocatorInstance.Data;
  uVar10 = 0;
  if (iVar7 < 1) {
LAB_147580ae9:
    local_1c0 = (longlong)iVar7;
    local_1c8 = 0;
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
  else {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_1c0 = (longlong)iVar7;
        local_1c8 = (longlong)(int)uVar10;
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
      pFVar3 = (this->SamplePointList).AllocatorInstance.Data;
      if ((*(double *)pFVar2 != *(double *)(pFVar3 + lVar8)) ||
         (*(double *)(pFVar2 + 8) != *(double *)(pFVar3 + lVar8 + 8))) goto LAB_147580b55;
      iVar7 = (this->SamplePointList).ArrayNum;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x28;
    } while ((int)uVar10 < iVar7);
    if (iVar7 < 1) goto LAB_147580ae9;
  }
  FTriangle::FTriangle(&local_e8,(FVertex *)(this->SamplePointList).AllocatorInstance.Data);
  AddTriangle(this,&local_e8,true);
  FTriangle::~FTriangle(&local_e8);
LAB_147580c78:
  AdjustEdgeDirections(this,param_1);
  return;
}

