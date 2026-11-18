// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c6f4250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::__l2::<lambda_2>::
operator()(void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  FPolygroupSet *this_00;
  FDynamicMesh3 *pFVar6;
  undefined8 uVar7;
  code *pcVar8;
  double dVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FComponent *pFVar16;
  TAxisAlignedBox3<double> *pTVar17;
  TVector<double> *pTVar18;
  FIndex3i *pFVar19;
  ulonglong uVar20;
  byte bVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  ForElementType<unsigned_int> FVar27;
  ForAnyElementType FVar28;
  uint *puVar29;
  longlong lVar30;
  FComponent *pFVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  undefined8 *puVar36;
  longlong *plVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStackY_308 [32];
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6 [2];
  uint local_2b4;
  ForAnyElementType local_2b0;
  int local_2a8;
  int local_2a4;
  uint local_2a0;
  int local_29c;
  undefined8 *local_298;
  uint local_290;
  int local_28c;
  uint local_288 [2];
  longlong local_280;
  uint local_278;
  uint uStack_274;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_270;
  undefined4 local_268;
  uint uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  FIndex3i_u_0 local_258;
  undefined4 local_248;
  int local_244;
  undefined4 local_240;
  int local_23c;
  int local_238;
  int local_234;
  longlong *local_230;
  FScriptContainerElement *local_228;
  int local_220;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  longlong *local_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  FSparseArrayAllocationInfo local_190;
  FIndex3i local_180;
  TVector<double> local_170;
  TVector<double> local_158;
  TVector<double> local_140;
  TVector<double> local_128 [2];
  undefined4 local_f4;
  TAxisAlignedBox3<double> local_f0;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2b4 = param_1;
  local_298 = this;
  pFVar16 = UE::Geometry::FMeshConnectedComponents::operator[]
                      (*(FMeshConnectedComponents **)this,param_1);
  this_00 = *(FPolygroupSet **)((longlong)this + 0x10);
  if (((pFVar16->Indices).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar12 = UE::Geometry::FPolygroupSet::GetGroup
                     (this_00,*(int *)(pFVar16->Indices).AllocatorInstance.Data);
  lVar23 = *(longlong *)((longlong)this + 8);
  uVar25 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  if (param_1 < *(int *)(lVar23 + 0x10)) {
    uVar13 = uVar25;
  }
  local_2a0 = uVar25;
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar30 = (longlong)param_1 * 0x68;
  *(int *)(lVar30 + *(longlong *)(lVar23 + 8)) = iVar12;
  lVar23 = *(longlong *)((longlong)this + 8);
  uVar13 = 0;
  if (param_1 < *(int *)(lVar23 + 0x10)) {
    uVar13 = uVar25;
  }
  local_280 = lVar30;
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar23 = *(longlong *)(lVar23 + 8);
  plVar37 = local_298 + 3;
  *(undefined8 *)(lVar30 + 8 + lVar23) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar30 + 0x10 + lVar23) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar30 + 0x18 + lVar23) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar30 + 0x20 + lVar23) = 0xffefffffffffffff;
  *(undefined8 *)(lVar30 + 0x28 + lVar23) = 0xffefffffffffffff;
  *(undefined8 *)(lVar30 + 0x30 + lVar23) = 0xffefffffffffffff;
  local_290 = (pFVar16->Indices).ArrayNum;
  uVar22 = (ulonglong)(int)local_290;
  pFVar35 = (pFVar16->Indices).AllocatorInstance.Data;
  local_228 = pFVar35 + uVar22 * 4;
  local_230 = plVar37;
  while( true ) {
    pFVar1 = local_228;
    plVar10 = local_230;
    if ((pFVar16->Indices).ArrayNum != (int)uVar22) {
      local_2b8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_2b8);
      plVar37 = plVar10;
    }
    puVar36 = local_298;
    if (pFVar35 == pFVar1) break;
    local_28c = *(int *)pFVar35;
    lVar23 = local_298[1];
    uVar13 = 0;
    if (param_1 < *(int *)(lVar23 + 0x10)) {
      uVar13 = local_2a0;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    plVar37 = puVar36 + 3;
    lVar23 = *(longlong *)(lVar23 + 8);
    lVar30 = (longlong)param_1 * 0x68;
    pTVar17 = UE::Geometry::FDynamicMesh3::GetTriBounds
                        ((FDynamicMesh3 *)puVar36[3],&local_f0,local_28c);
    dVar4 = *(double *)(lVar30 + 8 + lVar23);
    uVar38 = SUB84(dVar4,0);
    uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
    pFVar35 = pFVar35 + 4;
    uVar22 = (ulonglong)local_290;
    dVar5 = *(double *)&(pTVar17->Min).field0_0x0;
    if (dVar5 <= dVar4) {
      uVar38 = SUB84(dVar5,0);
      uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    *(ulonglong *)(lVar30 + 8 + lVar23) = CONCAT44(uVar39,uVar38);
    dVar4 = *(double *)((longlong)&(pTVar17->Min).field0_0x0 + 8);
    uVar38 = SUB84(dVar4,0);
    uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = *(double *)(lVar30 + 0x10 + lVar23);
    if (dVar5 <= dVar4) {
      uVar38 = SUB84(dVar5,0);
      uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    *(ulonglong *)(lVar30 + 0x10 + lVar23) = CONCAT44(uVar39,uVar38);
    dVar4 = *(double *)((longlong)&(pTVar17->Min).field0_0x0 + 0x10);
    uVar38 = SUB84(dVar4,0);
    uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = *(double *)(lVar30 + 0x18 + lVar23);
    if (dVar5 <= dVar4) {
      uVar38 = SUB84(dVar5,0);
      uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    *(ulonglong *)(lVar30 + 0x18 + lVar23) = CONCAT44(uVar39,uVar38);
    dVar4 = *(double *)&(pTVar17->Max).field0_0x0;
    uVar38 = SUB84(dVar4,0);
    uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = *(double *)(lVar30 + 0x20 + lVar23);
    if (dVar4 <= dVar5) {
      uVar38 = SUB84(dVar5,0);
      uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    *(ulonglong *)(lVar30 + 0x20 + lVar23) = CONCAT44(uVar39,uVar38);
    dVar4 = *(double *)((longlong)&(pTVar17->Max).field0_0x0 + 8);
    uVar38 = SUB84(dVar4,0);
    uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = *(double *)(lVar30 + 0x28 + lVar23);
    if (dVar4 <= dVar5) {
      uVar38 = SUB84(dVar5,0);
      uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    *(ulonglong *)(lVar30 + 0x28 + lVar23) = CONCAT44(uVar39,uVar38);
    dVar4 = *(double *)((longlong)&(pTVar17->Max).field0_0x0 + 0x10);
    uVar38 = SUB84(dVar4,0);
    uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = *(double *)(lVar30 + 0x30 + lVar23);
    if (dVar4 <= dVar5) {
      uVar38 = SUB84(dVar5,0);
      uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    *(ulonglong *)(lVar30 + 0x30 + lVar23) = CONCAT44(uVar39,uVar38);
  }
  iVar12 = (pFVar16->Indices).ArrayNum;
  if (iVar12 == 1) {
    pTVar18 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                        ((FDynamicMesh3 *)*plVar37,&local_170,
                         *(int *)(pFVar16->Indices).AllocatorInstance.Data);
    puVar36 = local_298;
    uVar13 = local_2a0;
    dVar5 = (pTVar18->field0_0x0)._s_0.X;
    dVar9 = (pTVar18->field0_0x0)._s_0.Y;
    lVar23 = local_298[1];
    dVar4 = (pTVar18->field0_0x0)._s_0.Z;
    uVar25 = 0;
    if (param_1 < *(int *)(lVar23 + 0x10)) {
      uVar25 = local_2a0;
    }
    if ((uVar25 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar30 = local_280;
    lVar23 = *(longlong *)(lVar23 + 8);
    pdVar3 = (double *)(lVar23 + 0x38 + local_280);
    *pdVar3 = dVar5;
    pdVar3[1] = dVar9;
    *(double *)(lVar23 + 0x48 + local_280) = dVar4;
    if (((pFVar16->Indices).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar38 = *(undefined4 *)(pFVar16->Indices).AllocatorInstance.Data;
    if (((pFVar16->Indices).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar23 = puVar36[1];
    uVar39 = *(undefined4 *)(pFVar16->Indices).AllocatorInstance.Data;
    uVar25 = 0;
    if (param_1 < *(int *)(lVar23 + 0x10)) {
      uVar25 = uVar13;
    }
    if ((uVar25 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(ulonglong *)(*(longlong *)(lVar23 + 8) + 0x50 + lVar30) = CONCAT44(uVar38,uVar39);
    goto LAB_14c6f5647;
  }
  if (iVar12 == 2) {
    pFVar19 = UE::Geometry::FDynamicMesh3::GetTriNeighbourTris
                        ((FDynamicMesh3 *)*plVar37,&local_180,
                         *(int *)(pFVar16->Indices).AllocatorInstance.Data);
    if (((pFVar16->Indices).ArrayNum < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = *(int *)((pFVar16->Indices).AllocatorInstance.Data + 4);
    if ((((pFVar19->field0_0x0)._s_0.A == iVar12) || ((pFVar19->field0_0x0)._s_0.B == iVar12)) ||
       ((pFVar19->field0_0x0)._s_0.C == iVar12)) {
      pFVar6 = (FDynamicMesh3 *)*plVar37;
      if (((pFVar16->Indices).ArrayNum < 2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = *(int *)((pFVar16->Indices).AllocatorInstance.Data + 4);
      if (((pFVar16->Indices).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = UE::Geometry::FDynamicMesh3::FindEdgeFromTriPair
                         (pFVar6,*(int *)(pFVar16->Indices).AllocatorInstance.Data,iVar12);
      pFVar6 = (FDynamicMesh3 *)*plVar37;
      if (uVar13 == 0xffffffff) {
        if (((pFVar16->Indices).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar18 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                            (pFVar6,&local_140,*(int *)(pFVar16->Indices).AllocatorInstance.Data);
        puVar36 = local_298;
        uVar13 = local_2a0;
        dVar5 = (pTVar18->field0_0x0)._s_0.X;
        dVar9 = (pTVar18->field0_0x0)._s_0.Y;
        lVar23 = local_298[1];
        dVar4 = (pTVar18->field0_0x0)._s_0.Z;
        uVar25 = 0;
        if (param_1 < *(int *)(lVar23 + 0x10)) {
          uVar25 = local_2a0;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar30 = local_280;
        lVar23 = *(longlong *)(lVar23 + 8);
        pdVar3 = (double *)(local_280 + 0x38 + lVar23);
        *pdVar3 = dVar5;
        pdVar3[1] = dVar9;
        *(double *)(local_280 + 0x48 + lVar23) = dVar4;
        if (((pFVar16->Indices).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar38 = *(undefined4 *)(pFVar16->Indices).AllocatorInstance.Data;
        if (((pFVar16->Indices).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar23 = puVar36[1];
        uVar39 = *(undefined4 *)(pFVar16->Indices).AllocatorInstance.Data;
        uVar25 = 0;
        if (param_1 < *(int *)(lVar23 + 0x10)) {
          uVar25 = uVar13;
        }
        if ((uVar25 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(ulonglong *)(lVar30 + 0x50 + *(longlong *)(lVar23 + 8)) = CONCAT44(uVar38,uVar39);
      }
      else {
        pTVar18 = UE::Geometry::FDynamicMesh3::GetEdgePoint
                            (pFVar6,&local_158,uVar13,__real_3fe0000000000000);
        puVar36 = local_298;
        uVar25 = local_2a0;
        dVar5 = (pTVar18->field0_0x0)._s_0.X;
        dVar9 = (pTVar18->field0_0x0)._s_0.Y;
        lVar23 = local_298[1];
        dVar4 = (pTVar18->field0_0x0)._s_0.Z;
        uVar15 = 0;
        if (param_1 < *(int *)(lVar23 + 0x10)) {
          uVar15 = local_2a0;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar30 = local_280;
        lVar23 = *(longlong *)(lVar23 + 8);
        pdVar3 = (double *)(lVar23 + 0x38 + local_280);
        *pdVar3 = dVar5;
        pdVar3[1] = dVar9;
        *(double *)(lVar23 + 0x48 + local_280) = dVar4;
        lVar23 = puVar36[1];
        uVar7 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*plVar37 + 0x1c0) + (ulonglong)(uVar13 >> 9) * 8) + 8
                 + (ulonglong)(uVar13 & 0x1ff) * 0x10);
        uVar13 = 0;
        if (param_1 < *(int *)(lVar23 + 0x10)) {
          uVar13 = uVar25;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined8 *)(lVar30 + 0x50 + *(longlong *)(lVar23 + 8)) = uVar7;
      }
      goto LAB_14c6f5647;
    }
  }
  uVar13 = (pFVar16->Indices).ArrayNum;
  iVar12 = -1;
  pFVar35 = (pFVar16->Indices).AllocatorInstance.Data;
  if (((int)uVar13 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar22 = 0;
  local_8c = 0x80;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  uVar33 = uVar22;
  if (uVar13 != 0) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_b8,uVar13);
    uVar25 = 1;
    if (3 < uVar13) {
      uVar33 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_248 = (undefined4)lVar23;
      uVar25 = 1 << ((byte)lVar23 & 0x1f);
    }
    if ((local_70 == 0) || ((int)local_70 < (int)uVar25)) {
      local_70 = uVar25;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
      }
      if (uVar25 != 0) {
        uVar15 = uVar25;
        if (uVar25 < 2) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar15 = 0;
            goto LAB_14c6f4b48;
          }
        }
        else {
LAB_14c6f4b48:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar15,4)
          ;
        }
        if (0 < (int)uVar25) {
          uVar34 = (ulonglong)uVar25;
          uVar33 = uVar22;
          do {
            FVar28.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar28.Data = local_78.Data;
            }
            uVar20 = uVar33 & (longlong)(int)uVar25 - 1U;
            uVar33 = uVar33 + 1;
            *(undefined4 *)(FVar28.Data + uVar20 * 4) = 0xffffffff;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
        }
      }
      if (local_70 != 0) {
        uVar33 = (ulonglong)local_90;
        pTStack_270 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
        local_278 = 0;
        uStack_274 = 1;
        uStack_264 = 0;
        uStack_260 = 0;
        if (local_90 != 0) {
          FVar27 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
          if (local_98 != (ForElementType<unsigned_int>)0x0) {
            FVar27 = local_98;
          }
          uVar25 = *(uint *)FVar27;
          uVar34 = uVar22;
          while (uVar25 == 0) {
            uStack_260 = (int)uVar34 + 0x20;
            uVar34 = (ulonglong)uStack_260;
            iVar26 = (int)uVar22;
            local_278 = iVar26 + 1;
            uVar22 = (ulonglong)local_278;
            if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_278)
            goto LAB_14c6f4c5b;
            uVar25 = ((uint *)((longlong)FVar27 + 4))[iVar26];
          }
          uStack_274 = -uVar25 & uVar25;
          uVar22 = (ulonglong)uStack_274 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_244 = (int)lVar23;
          uStack_264 = (uStack_260 - 1) + local_244;
          uVar22 = (ulonglong)uStack_264;
          if ((int)local_90 < (int)uStack_264) {
LAB_14c6f4c5b:
            uVar22 = (ulonglong)local_90;
            uStack_264 = local_90;
          }
        }
        local_268 = 0xffffffff;
        local_218 = (longlong *)local_b8;
        local_210._padding_ = CONCAT44(uStack_274,local_278);
        local_210.CurrentBitIndex = uStack_264;
        local_210.UnvisitedBitMask = 0xffffffff;
        local_210._28_4_ = uStack_25c;
        local_210.BaseBitIndex = uStack_260;
        local_210.Array = pTStack_270;
        if ((int)local_90 <= (int)uVar22) goto LAB_14c6f4d0e;
        do {
          lVar23 = *local_218;
          lVar30 = (longlong)(int)uVar22;
          uVar25 = local_70 - 1 & *(uint *)(lVar23 + lVar30 * 0xc);
          *(uint *)(lVar23 + 8 + lVar30 * 0xc) = uVar25;
          FVar28.Data = local_80;
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            FVar28.Data = local_78.Data;
          }
          uVar33 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar25;
          *(undefined4 *)(lVar23 + 4 + lVar30 * 0xc) = *(undefined4 *)(FVar28.Data + uVar33 * 4);
          *(int *)(FVar28.Data + uVar33 * 4) = (int)uVar22;
          local_210.UnvisitedBitMask = local_210.UnvisitedBitMask & ~local_210._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
          uVar22 = (ulonglong)(uint)local_210.CurrentBitIndex;
        } while (local_210.CurrentBitIndex < (local_210.Array)->NumBits);
      }
    }
    uVar33 = (ulonglong)local_90;
  }
LAB_14c6f4d0e:
  pFVar1 = pFVar35 + (longlong)(int)uVar13 * 4;
  if (pFVar35 != pFVar1) {
    do {
      puVar29 = (uint *)0x0;
      if (local_84 == 0) {
        iVar26 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)local_b8,(int *)(local_b8 + 8),
                            (int *)(local_b8 + 0xc));
        iVar14 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),1);
        FVar27 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
        if (local_98 != (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_98;
        }
        bVar21 = (byte)iVar14 & 0x1f;
        if (iVar14 < 0) {
          iVar14 = iVar14 + 0x1f;
          bVar21 = bVar21 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar27 + (longlong)(iVar14 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar21 & 0x1f));
        iVar14 = local_88;
      }
      else {
        iVar14 = *(int *)(local_b8._0_8_ + (longlong)local_88 * 0xc + 4);
        local_84 = local_84 + -1;
        iVar26 = local_88;
        if (local_84 != 0) {
          *(undefined4 *)(local_b8._0_8_ + (longlong)iVar14 * 0xc) = 0xffffffff;
        }
      }
      local_88 = iVar14;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b8,&local_190,iVar26);
      if (local_190.Pointer != (uint *)0x0) {
        *(uint *)local_190.Pointer = *(uint *)pFVar35;
        *(uint *)((longlong)local_190.Pointer + 4) = 0xffffffff;
        puVar29 = local_190.Pointer;
      }
      uVar13 = *puVar29;
      if ((local_b8._8_4_ - local_84 != 1) && (local_b8._8_4_ != local_84)) {
        FVar28.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar28.Data = local_78.Data;
        }
        for (iVar26 = *(int *)(FVar28.Data + (ulonglong)(local_70 - 1 & uVar13) * 4); iVar26 != -1;
            iVar26 = *(int *)(local_b8._0_8_ + (longlong)iVar26 * 0xc + 4)) {
          if (*(uint *)(local_b8._0_8_ + (longlong)iVar26 * 0xc) == uVar13) {
            if (iVar26 != -1) {
              *(uint *)(local_b8._0_8_ + (longlong)iVar26 * 0xc) = uVar13;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_b8,local_190.Index,1);
              goto LAB_14c6f4f55;
            }
            break;
          }
        }
      }
      uVar25 = local_b8._8_4_ - local_84;
      if (uVar25 < 4) {
        uVar15 = 1;
      }
      else {
        uVar22 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_240 = (undefined4)lVar23;
        uVar15 = 1 << ((byte)lVar23 & 0x1f);
      }
      if (((int)uVar25 < 1) || ((int)uVar15 <= (int)local_70)) {
        uVar13 = local_70 - 1 & uVar13;
        puVar29[2] = uVar13;
        FVar28.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar28.Data = local_78.Data;
        }
        uVar22 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar13;
        puVar29[1] = *(uint *)(FVar28.Data + uVar22 * 4);
        *(int *)(FVar28.Data + uVar22 * 4) = local_190.Index;
      }
      else {
        local_70 = uVar15;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_b8);
      }
LAB_14c6f4f55:
      pFVar35 = pFVar35 + 4;
    } while (pFVar35 != pFVar1);
    uVar33 = (ulonglong)local_90;
  }
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a4 = 0;
  do {
    uVar13 = 0;
    local_2a8 = 0;
    uVar25 = (uint)uVar33;
    if ((local_2a4 < 0) && (local_2a4 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_2b0,0,&local_2a4);
      uVar25 = local_90;
    }
    uStack_1e4 = 1;
    uStack_1d4 = uVar13;
    local_1d0 = uVar13;
    if (uVar25 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_98;
      }
      uVar15 = *(uint *)FVar27;
      while (uVar15 == 0) {
        lVar23 = (longlong)(int)uVar13;
        local_1d0 = local_1d0 + 0x20;
        uVar13 = uVar13 + 1;
        uStack_1d4 = uVar25;
        if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
        goto LAB_14c6f502f;
        uVar15 = ((uint *)((longlong)FVar27 + 4))[lVar23];
      }
      uStack_1e4 = -uVar15 & uVar15;
      uVar22 = (ulonglong)uStack_1e4 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_23c = (int)lVar23;
      uStack_1d4 = (local_1d0 - 1) + local_23c;
      if ((int)uVar25 < (int)uStack_1d4) {
        uStack_1d4 = uVar25;
      }
    }
LAB_14c6f502f:
    local_1f0 = (longlong *)local_b8;
    uStack_1cc = local_f4;
    local_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    iStack_1c8 = local_b8._8_4_ - local_84;
    uVar15 = uVar25 & 0xffffffe0;
    TStack_1b8._padding_ = CONCAT44(uStack_1e4,uVar13);
    uStack_1d8 = 0xffffffff;
    TStack_1b8.CurrentBitIndex = uStack_1d4;
    TStack_1b8.UnvisitedBitMask = 0xffffffff;
    iVar26 = (int)uVar25 >> 5;
    TStack_1b8._28_4_ = local_f4;
    TStack_1b8.BaseBitIndex = local_1d0;
    uStack_198 = CONCAT44(uStack_1c4,iStack_1c8);
    uVar32 = uVar25;
    uStack_1e8 = uVar13;
    local_1c0 = local_1f0;
    TStack_1b8.Array = local_1e0;
    if (((int)uVar25 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), uVar32 = local_90, bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar36 = local_298;
    if (uVar25 != uVar32) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_98;
      }
      uVar13 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)((longlong)FVar27 + (longlong)iVar26 * 4);
      while (uVar13 == 0) {
        lVar23 = (longlong)iVar26;
        uVar15 = uVar15 + 0x20;
        iVar26 = iVar26 + 1;
        uVar25 = uVar32;
        if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
        goto LAB_14c6f5160;
        uVar13 = ((uint *)((longlong)FVar27 + 4))[lVar23];
      }
      uVar22 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_238 = (int)lVar23;
      uVar25 = (uVar15 - 1) + local_238;
      if ((int)uVar32 < (int)uVar25) {
        uVar25 = uVar32;
      }
    }
LAB_14c6f5160:
    while( true ) {
      plVar37 = local_1c0;
      if ((int)local_1c0[1] - *(int *)((longlong)local_1c0 + 0x34) != (int)uStack_198) {
        local_2b7 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b7);
      }
      iVar26 = local_2a8;
      if (((TStack_1b8.CurrentBitIndex == uVar25) &&
          (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
         (plVar37 == (longlong *)local_b8)) break;
      local_29c = *(int *)(*plVar37 + (longlong)TStack_1b8.CurrentBitIndex * 0xc);
      UE::Geometry::FDynamicMesh3::GetTriNeighbourTris
                ((FDynamicMesh3 *)puVar36[3],(FIndex3i *)&local_258._s_0,local_29c);
      if (local_b8._8_4_ != local_84) {
        FVar28.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar28.Data = local_78.Data;
        }
        for (iVar26 = *(int *)(FVar28.Data + (ulonglong)(local_70 - 1 & local_258._s_0.A) * 4);
            iVar26 != -1; iVar26 = *(int *)(local_b8._0_8_ + (longlong)iVar26 * 0xc + 4)) {
          if (*(uint *)(local_b8._0_8_ + (longlong)iVar26 * 0xc) == local_258._s_0.A) {
            FVar28.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar28.Data = local_78.Data;
            }
            iVar26 = *(int *)(FVar28.Data + (ulonglong)(local_70 - 1 & local_258._s_0.B) * 4);
            goto joined_r0x00014c6f525a;
          }
        }
      }
LAB_14c6f52ba:
      if (((local_2b0.Data <= (FScriptContainerElement *)&local_29c) &&
          ((FScriptContainerElement *)&local_29c < local_2b0.Data + (longlong)local_2a4 * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_2a8 == local_2a4) {
        local_2a8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2b0,&local_2a4);
      }
      *(int *)(local_2b0.Data + (longlong)local_2a8 * 4) = local_29c;
      local_2a8 = local_2a8 + 1;
LAB_14c6f5362:
      TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
    }
    if (local_2a8 == 0) {
      uVar13 = 0;
      iVar12 = 0;
      if (local_90 == 0) goto LAB_14c6f551c;
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_98;
      }
      uVar25 = *(uint *)FVar27;
      goto joined_r0x00014c6f54de;
    }
    pFVar35 = local_2b0.Data + (longlong)local_2a8 * 4;
    FVar28.Data = local_2b0.Data;
    while( true ) {
      if (local_2a8 != iVar26) {
        local_2b6[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2b6);
      }
      if (FVar28.Data == pFVar35) goto LAB_14c6f548f;
      local_288[0] = *(uint *)FVar28.Data;
      if (local_b8._8_4_ != local_84) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_b8,local_288[0],
                   (int *)local_288);
      }
      if (local_b8._8_4_ - local_84 == 1) break;
      FVar28.Data = FVar28.Data + 4;
    }
    iVar12 = 0;
    uVar13 = 0;
    if (local_90 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_98;
      }
      uVar25 = *(uint *)FVar27;
      while (uVar25 == 0) {
        lVar23 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14c6f5469;
        uVar25 = ((uint *)((longlong)FVar27 + 4))[lVar23];
      }
      uVar22 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_234 = (int)lVar23;
      uVar13 = (uVar13 - 1) + local_234;
      if ((int)local_90 < (int)uVar13) {
LAB_14c6f5469:
        uVar13 = local_90;
      }
    }
    iVar12 = *(int *)(local_b8._0_8_ + (longlong)(int)uVar13 * 0xc);
LAB_14c6f548f:
    uVar33 = (ulonglong)local_90;
  } while (iVar12 == -1);
  goto LAB_14c6f552d;
joined_r0x00014c6f525a:
  if (iVar26 == -1) goto LAB_14c6f52ba;
  if (*(uint *)(local_b8._0_8_ + (longlong)iVar26 * 0xc) == local_258._s_0.B) {
    FVar28.Data = local_80;
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FVar28.Data = local_78.Data;
    }
    iVar26 = *(int *)(FVar28.Data + (ulonglong)(local_70 - 1 & local_258._s_0.C) * 4);
    goto joined_r0x00014c6f5297;
  }
  iVar26 = *(int *)(local_b8._0_8_ + (longlong)iVar26 * 0xc + 4);
  goto joined_r0x00014c6f525a;
joined_r0x00014c6f5297:
  if (iVar26 == -1) goto LAB_14c6f52ba;
  if (*(uint *)(local_b8._0_8_ + (longlong)iVar26 * 0xc) == local_258._s_0.C) goto LAB_14c6f5362;
  iVar26 = *(int *)(local_b8._0_8_ + (longlong)iVar26 * 0xc + 4);
  goto joined_r0x00014c6f5297;
joined_r0x00014c6f54de:
  if (uVar25 != 0) goto LAB_14c6f54f6;
  lVar23 = (longlong)iVar12;
  uVar13 = uVar13 + 0x20;
  iVar12 = iVar12 + 1;
  if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
  goto LAB_14c6f5519;
  uVar25 = ((uint *)((longlong)FVar27 + 4))[lVar23];
  goto joined_r0x00014c6f54de;
LAB_14c6f54f6:
  uVar22 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
  lVar23 = 0x3f;
  if (uVar22 != 0) {
    for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  local_220 = (int)lVar23;
  uVar13 = (uVar13 - 1) + local_220;
  if ((int)local_90 < (int)uVar13) {
LAB_14c6f5519:
    uVar13 = local_90;
  }
LAB_14c6f551c:
  iVar12 = *(int *)(local_b8._0_8_ + (longlong)(int)uVar13 * 0xc);
LAB_14c6f552d:
  pTVar18 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                      ((FDynamicMesh3 *)puVar36[3],local_128,iVar12);
  param_1 = local_2b4;
  lVar30 = (longlong)(int)local_2b4;
  lVar23 = puVar36[1];
  dVar5 = (pTVar18->field0_0x0)._s_0.X;
  dVar9 = (pTVar18->field0_0x0)._s_0.Y;
  dVar4 = (pTVar18->field0_0x0)._s_0.Z;
  uVar13 = 0;
  if ((int)local_2b4 < *(int *)(lVar23 + 0x10)) {
    uVar13 = ~local_2b4 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar23 = *(longlong *)(lVar23 + 8);
  lVar24 = lVar30 * 0x68;
  pdVar3 = (double *)(lVar24 + 0x38 + lVar23);
  *pdVar3 = dVar5;
  pdVar3[1] = dVar9;
  *(double *)(lVar24 + 0x48 + lVar23) = dVar4;
  lVar23 = puVar36[1];
  uVar13 = 0;
  if (param_1 < *(int *)(lVar23 + 0x10)) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(ulonglong *)(lVar30 * 0x68 + 0x50 + *(longlong *)(lVar23 + 8)) = CONCAT44(iVar12,iVar12);
  if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  local_70 = 0;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
LAB_14c6f5647:
  if (*(char *)puVar36[1] != '\0') {
    pFVar16 = UE::Geometry::FMeshConnectedComponents::operator[]
                        ((FMeshConnectedComponents *)*puVar36,param_1);
    lVar23 = puVar36[1];
    uVar13 = 0;
    if (param_1 < *(int *)(lVar23 + 0x10)) {
      uVar13 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar31 = (FComponent *)(*(longlong *)(lVar23 + 8) + 0x58 + (longlong)param_1 * 0x68);
    if (pFVar31 != pFVar16) {
      pFVar35 = (pFVar31->Indices).AllocatorInstance.Data;
      if (pFVar35 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar35);
      }
      (pFVar31->Indices).AllocatorInstance.Data = (pFVar16->Indices).AllocatorInstance.Data;
      (pFVar16->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar31->Indices).ArrayNum = (pFVar16->Indices).ArrayNum;
      (pFVar31->Indices).ArrayMax = (pFVar16->Indices).ArrayMax;
      (pFVar16->Indices).ArrayNum = 0;
      (pFVar16->Indices).ArrayMax = 0;
    }
  }
  return;
}

// UpdateGroupInfo_ConnectedComponents @ 14c773e30

void __thiscall
UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents
          (FGroupVisualizationCache *this,FDynamicMesh3 *param_1,FPolygroupSet *param_2,bool param_3
          )

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  bool bVar8;
  <lambda_1> local_res8;
  FMeshConnectedComponents local_c8;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  FMeshConnectedComponents **local_98;
  FMeshConnectedComponents *local_90;
  FGroupVisualizationCache *local_88;
  FPolygroupSet *local_80;
  FDynamicMesh3 *local_78;
  code *local_68 [2];
  undefined **local_58;
  FPolygroupSet *local_50;
  undefined8 local_40;
  
  local_c8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_c8.Components.Array.ArrayNum = 0;
  local_c8.Components.Array.ArrayMax = 0;
  local_68[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::__l2::<lambda_1>,bool,int,int>
                ::Call;
  local_40 = 0;
  local_c8.Mesh = param_1;
  local_50 = param_2;
  FMeshConnectedComponents::FindConnectedTriangles
            (&local_c8,(TFunction<bool___cdecl(int,int)> *)local_68);
  iVar5 = (this->GroupInfo).ArrayNum;
  piVar1 = &(this->GroupInfo).ArrayNum;
  iVar4 = local_c8.Components.Array.ArrayNum;
  if (iVar5 < local_c8.Components.Array.ArrayNum) {
    iVar5 = local_c8.Components.Array.ArrayNum - iVar5;
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,iVar5,&(this->GroupInfo).AllocatorInstance,piVar1,
                       &(this->GroupInfo).ArrayMax);
    DefaultConstructItems<UE::Geometry::FGroupVisualizationCache::FGroupInfo,int>
              ((this->GroupInfo).AllocatorInstance.Data + (longlong)iVar4 * 0x68,iVar5);
  }
  else {
    if (local_c8.Components.Array.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(local_c8.Components.Array._8_8_ & 0xffffffff);
    }
    if (local_c8.Components.Array.ArrayNum < iVar5) {
      uVar7 = iVar5 - local_c8.Components.Array.ArrayNum;
      if (((int)(uVar7 | local_c8.Components.Array.ArrayNum) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        TArray<UE::Geometry::FGroupVisualizationCache::FGroupInfo,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->GroupInfo,iVar4,uVar7);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,&(this->GroupInfo).AllocatorInstance,*piVar1,&(this->GroupInfo).ArrayMax);
      }
    }
  }
  local_90 = &local_c8;
  local_a0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents'::__l2::<lambda_2>,void,int>
             ::Call;
  local_98 = &local_90;
  local_b0.DataPtr = (void **)0x0;
  local_b0.ArrayNum = 0;
  local_88 = this;
  local_80 = param_2;
  local_78 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_c8.Components.Array.ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_a0,local_res8,param_3 ^ ForceSingleThread,
             &local_b0);
  FVar6.Data = local_c8.Components.Array.AllocatorInstance.Data;
  for (iVar5 = local_c8.Components.Array.ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = *(undefined8 **)FVar6.Data;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x10);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  local_c8.Components.Array.ArrayMax = (int)((ulonglong)local_c8.Components.Array._8_8_ >> 0x20);
  bVar8 = local_c8.Components.Array.ArrayMax != 0;
  local_c8.Components.Array._8_8_ = (ulonglong)(uint)local_c8.Components.Array.ArrayMax << 0x20;
  if (bVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_c8.Components,0,&local_c8.Components.Array.ArrayMax
              );
  }
  if (local_c8.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Components.Array.AllocatorInstance.Data);
  }
  return;
}

