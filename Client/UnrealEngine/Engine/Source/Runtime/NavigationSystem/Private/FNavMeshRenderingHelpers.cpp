// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 17

// AddCluster @ 146ddd1b0

void __cdecl
FNavMeshRenderingHelpers::AddCluster
          (TArray<FNavMeshSceneProxyData::FDebugMeshData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,FColor param_4,
          TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FDebugMeshData *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar14;
  longlong lVar15;
  TVector<double>_u_0 local_68;
  FDebugMeshData local_50;
  ulonglong uVar13;
  
  if (param_2->ArrayNum != 0) {
    iVar10 = param_3->ArrayNum;
    uVar11 = 0;
    local_50.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Vertices.ArrayNum = 0;
    local_50.Vertices.ArrayMax = 0;
    local_50.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Indices.ArrayNum = 0;
    local_50.Indices.ArrayMax = 0;
    uVar13 = uVar11;
    if (0 < iVar10) {
      do {
        uVar12 = (uint)uVar13;
        uVar8 = 0;
        if ((int)uVar12 < iVar10) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (param_3->AllocatorInstance).Data;
        local_68._s_0.X = *(double *)(pFVar3 + uVar11) + (param_5->field0_0x0)._s_0.X;
        local_68._s_0.Y = *(double *)(pFVar3 + uVar11 + 8) + (param_5->field0_0x0)._s_0.Y;
        local_68._s_0.Z = *(double *)(pFVar3 + uVar11 + 0x10) + (param_5->field0_0x0)._s_0.Z;
        AddVertex(&local_50,(TVector<double> *)&local_68._s_0,param_4);
        iVar10 = param_3->ArrayNum;
        uVar11 = uVar11 + 0x18;
        uVar13 = (ulonglong)(uVar12 + 1);
      } while ((int)(uVar12 + 1) < iVar10);
    }
    iVar10 = param_2->ArrayNum;
    if (0 < iVar10) {
      lVar15 = 4;
      uVar8 = 1;
      do {
        uVar9 = 0;
        uVar12 = uVar9;
        if ((int)(uVar8 + 1) < iVar10) {
          uVar12 = ~(uVar8 + 1) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)((param_2->AllocatorInstance).Data + lVar15 + 4);
        uVar12 = uVar9;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = *(int *)((param_2->AllocatorInstance).Data + lVar15);
        if ((int)(uVar8 - 1) < param_2->ArrayNum) {
          uVar9 = ~(uVar8 - 1) >> 0x1f;
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
        AddTriangleIndices(&local_50,*(int *)((param_2->AllocatorInstance).Data + lVar15 + -4),iVar2
                           ,iVar10);
        iVar10 = param_2->ArrayNum;
        lVar15 = lVar15 + 0xc;
        iVar2 = uVar8 + 2;
        uVar8 = uVar8 + 3;
      } while (iVar2 < iVar10);
    }
    pFVar4 = (FDebugMeshData *)(param_1->AllocatorInstance).Data;
    local_50.ClusterColor.field0_0x0 = param_4.field0_0x0;
    if (((pFVar4 <= &local_50) && (&local_50 < pFVar4 + param_1->ArrayMax)) &&
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
    iVar10 = param_1->ArrayNum;
    if (iVar10 == param_1->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    FVar6.Data = local_50.Vertices.AllocatorInstance.Data;
    lVar15 = (longlong)iVar10;
    param_1->ArrayNum = iVar10 + 1;
    pFVar3 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + lVar15 * 0x28) = 0;
    lVar14 = (longlong)local_50.Vertices.ArrayNum;
    *(int *)(pFVar3 + lVar15 * 0x28 + 8) = local_50.Vertices.ArrayNum;
    pFVar3 = pFVar3 + lVar15 * 0x28;
    if (local_50.Vertices.ArrayNum == 0) {
      *(int *)(pFVar3 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,local_50.Vertices.ArrayNum,0,(ForAnyElementType *)pFVar3,
                 local_50.Vertices.ArrayNum,(int *)(pFVar3 + 0xc));
      memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar6.Data,lVar14 * 0x58);
    }
    FVar6.Data = local_50.Indices.AllocatorInstance.Data;
    pFVar1 = pFVar3 + 0x10;
    *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
    lVar15 = (longlong)local_50.Indices.ArrayNum;
    *(int *)&pFVar3[0x18].field_0x0 = local_50.Indices.ArrayNum;
    if (local_50.Indices.ArrayNum == 0) {
      *(int *)(pFVar3 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_50.Indices.ArrayNum,0,(ForAnyElementType *)pFVar1,
                 local_50.Indices.ArrayNum,(int *)(pFVar3 + 0x1c));
      memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,FVar6.Data,lVar15 << 2);
    }
    ((FColor_u_0 *)(pFVar3 + 0x20))->_s_0 = (FColor_u_0_s_0)local_50.ClusterColor.field0_0x0;
    if (local_50.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Indices.AllocatorInstance.Data);
    }
    if (local_50.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Vertices.AllocatorInstance.Data);
    }
  }
  return;
}

// AddRecastGeometry @ 146ddeb30

void __cdecl
FNavMeshRenderingHelpers::AddRecastGeometry
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,double *param_3,int param_4,
          int *param_5,int param_6,TTransform<double> *param_7)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  double *pdVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  undefined1 local_b8 [16];
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined1 local_88 [16];
  
  iVar2 = param_1->ArrayNum;
  if (0 < param_4 * 3) {
    pdVar16 = param_3 + 1;
    uVar15 = (uint)__xmm_80000000000000008000000000000000;
    uVar32 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lVar17 = ((longlong)(param_4 * 3) - 1U) / 3 + 1;
    do {
      local_90 = *pdVar16;
      dVar10 = local_90 * (param_7->Scale3D).ZW.m128d_f64[0];
      dVar11 = (param_7->Scale3D).ZW.m128d_f64[1] * 0.0;
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_a0 = (double)CONCAT44((uint)((ulonglong)pdVar16[-1] >> 0x20) ^ uVar32,
                                  SUB84(pdVar16[-1],0) ^ uVar15);
      auVar23 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
      dVar12 = (param_7->Rotation).ZW.m128d_f64[1];
      dStack_98 = (double)CONCAT44((uint)((ulonglong)pdVar16[1] >> 0x20) ^ uVar32,
                                   SUB84(pdVar16[1],0) ^ uVar15);
      auVar27 = *(undefined1 (*) [16])(param_7->Rotation).ZW.m128d_f64;
      dVar8 = (param_7->Scale3D).XY.m128d_f64[0] * local_a0;
      dVar9 = (param_7->Scale3D).XY.m128d_f64[1] * dStack_98;
      uVar28 = (undefined4)((ulonglong)dVar9 >> 0x20);
      local_88 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
      auVar29._8_4_ = SUB84(dVar9,0);
      auVar29._0_8_ = dVar8;
      auVar29._12_4_ = uVar28;
      dVar7 = auVar27._0_8_;
      auVar21 = blendpd(local_88,auVar27,2);
      auVar30._0_8_ = auVar29._8_8_ * local_88._0_8_ - local_88._8_8_ * dVar8;
      auVar30._8_8_ = dVar10 * local_88._8_8_ - dVar7 * dVar9;
      auVar24._8_4_ = SUB84(dVar9,0);
      auVar24._0_8_ = dVar8;
      auVar24._12_4_ = uVar28;
      auVar19._8_4_ = SUB84(dVar11,0);
      auVar19._0_8_ = dVar10;
      auVar19._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar19 = blendpd(auVar24,auVar19,2);
      auVar20._0_8_ = auVar19._0_8_ * dVar7 - auVar21._0_8_ * dVar10;
      auVar20._8_8_ = auVar19._8_8_ * auVar27._8_8_ - auVar21._8_8_ * dVar11;
      auVar19 = blendpd(auVar30,auVar20,2);
      dVar11 = auVar30._8_8_ + auVar30._8_8_;
      dVar6 = auVar20._0_8_ + auVar20._0_8_;
      uVar28 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar31._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar31._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar25._8_4_ = SUB84(dVar6,0);
      auVar25._0_8_ = dVar11;
      auVar25._12_4_ = uVar28;
      auVar22._8_4_ = SUB84(dVar6,0);
      auVar22._0_8_ = dVar11;
      auVar22._12_4_ = uVar28;
      auVar19 = blendpd(auVar22,auVar31,2);
      auVar26._0_8_ = auVar25._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar11;
      auVar26._8_8_ = auVar31._0_8_ * auVar23._8_8_ - dVar7 * dVar6;
      auVar21._8_4_ = SUB84(auVar26._8_8_,0);
      auVar21._0_8_ = auVar26._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
      auVar24 = blendpd(auVar23,auVar27,2);
      auVar23._0_8_ = auVar19._0_8_ * dVar7 - auVar24._0_8_ * auVar31._0_8_;
      auVar23._8_8_ = auVar19._8_8_ * auVar27._8_8_ - auVar24._8_8_ * auVar31._8_8_;
      auVar27 = blendpd(auVar26,auVar23,2);
      dVar7 = dVar6 * dVar12 + dVar9 + auVar23._0_8_ + (param_7->Translation).XY.m128d_f64[1];
      local_a8 = auVar31._0_8_ * dVar12 + dVar10 + auVar27._0_8_ +
                 (param_7->Translation).ZW.m128d_f64[0];
      local_b8._8_4_ = SUB84(dVar7,0);
      local_b8._0_8_ =
           dVar11 * dVar12 + dVar8 + auVar21._8_8_ + (param_7->Translation).XY.m128d_f64[0];
      local_b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      if (((pFVar3 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < pFVar3 + (longlong)param_1->ArrayMax * 0x18)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = param_1->ArrayNum;
      if (iVar14 == param_1->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      pdVar16 = pdVar16 + 3;
      param_1->ArrayNum = iVar14 + 1;
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar3 = pFVar4 + (longlong)iVar14 * 0x18;
      *(undefined8 *)pFVar3 = local_b8._0_8_;
      *(undefined8 *)(pFVar3 + 8) = local_b8._8_8_;
      *(double *)(pFVar4 + (longlong)iVar14 * 0x18 + 0x10) = local_a8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  piVar1 = &param_2->ArrayNum;
  uVar15 = *piVar1;
  uVar32 = param_6 * 3;
  uVar18 = (ulonglong)uVar32;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar32,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  if (uVar32 != 0) {
    do {
      iVar14 = *param_5;
      uVar32 = 0;
      if ((int)uVar15 < *piVar1) {
        uVar32 = ~uVar15 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_5 = param_5 + 1;
      lVar17 = (longlong)(int)uVar15;
      uVar15 = uVar15 + 1;
      *(int *)((param_2->AllocatorInstance).Data + lVar17 * 4) = iVar14 + iVar2;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return;
}

// AddTriangleIndices @ 146ddf110

void __cdecl
FNavMeshRenderingHelpers::AddTriangleIndices
          (FDebugMeshData *param_1,int param_2,int param_3,int param_4)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10 [2];
  
  pTVar1 = &param_1->Indices;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_18 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(param_1->Indices).ArrayMax * 4)) {
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
  iVar5 = (param_1->Indices).ArrayNum;
  if (iVar5 == (param_1->Indices).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(param_1->Indices).ArrayMax);
  }
  (param_1->Indices).ArrayNum = iVar5 + 1;
  *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_14 = param_3;
  if ((pFVar2 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar2 + (longlong)(param_1->Indices).ArrayMax * 4)) {
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
  iVar5 = (param_1->Indices).ArrayNum;
  if (iVar5 == (param_1->Indices).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(param_1->Indices).ArrayMax);
  }
  (param_1->Indices).ArrayNum = iVar5 + 1;
  *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_14;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_10[0] = param_4;
  if ((pFVar2 <= (FScriptContainerElement *)local_10) &&
     ((FScriptContainerElement *)local_10 < pFVar2 + (longlong)(param_1->Indices).ArrayMax * 4)) {
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
  iVar5 = (param_1->Indices).ArrayNum;
  if (iVar5 == (param_1->Indices).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(param_1->Indices).ArrayMax);
  }
  (param_1->Indices).ArrayNum = iVar5 + 1;
  *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_10[0];
  return;
}

// AddVertex @ 146ddf320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNavMeshRenderingHelpers::AddVertex(FDebugMeshData *param_1,TVector<double> *param_2,FColor param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  uVar6 = (param_1->Vertices).ArrayNum;
  piVar1 = &(param_1->Vertices).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x458,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Vertices).ArrayNum = uVar6 + 1;
  uVar7 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  pFVar8 = (param_1->Vertices).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x58;
  if (pFVar8 == (FScriptContainerElement *)0x0) {
    pFVar8 = (FScriptContainerElement *)0x0;
  }
  else {
    *(undefined8 *)(pFVar8 + 0x4c) = 0;
  }
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  *(float *)pFVar8 = (float)(param_2->field0_0x0)._s_0.X;
  *(float *)(pFVar8 + 4) = (float)dVar2;
  *(float *)(pFVar8 + 8) = (float)dVar3;
  local_48._s_0.Y = _UNK_150689518;
  local_48._s_0.X = ___xmm_00000000000000003ff0000000000000;
  ((TVector2<float>_u_0 *)(pFVar8 + 0xc))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_48._s_0.Z = 0.0;
  FPackedNormal::operator=((FPackedNormal *)(pFVar8 + 0x4c),(TVector<double> *)&local_48._s_0);
  local_30._s_0.Z = 0.0;
  local_30._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_30._s_0.Y = _UNK_15061cbc8;
  FPackedNormal::operator=((FPackedNormal *)(pFVar8 + 0x50),(TVector<double> *)&local_30._s_0);
  ((FColor_u_0 *)(pFVar8 + 0x54))->_s_0 = (FColor_u_0_s_0)param_3.field0_0x0;
  pFVar8[0x53] = (FScriptContainerElement)0x7f;
  return;
}

// CacheArc @ 146de1460

void __cdecl
FNavMeshRenderingHelpers::CacheArc
          (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,double param_4,uint param_5,
          FLinearColor *param_6,float param_7,float param_8)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  float fStack_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  
  if (param_5 != 0) {
    local_e8 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar9 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    uVar25 = SUB84(__real_3ff0000000000000,0);
    uVar26 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar11 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
    dVar10 = __real_3ff0000000000000 / (double)param_5;
    auVar16._0_8_ = dVar9 * dVar9;
    auVar16._8_8_ = 0;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_e8 * local_e8 + dVar11 * dVar11 + auVar16._0_8_;
    auVar17 = sqrtpd(auVar16,auVar17);
    if (dVar9 <= 0.0) {
      if (0.0 <= dVar9) {
        uVar25 = 0;
        uVar26 = 0;
      }
      else {
        uVar25 = (undefined4)__real_bff0000000000000;
        uVar26 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      }
    }
    uVar15 = 1;
    uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
    uVar23 = (undefined4)uVar1;
    uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
    if (param_5 != 0) {
      local_e0 = dVar10 + dVar10;
      local_f0 = auVar17._0_8_ * param_4;
      dVar18 = __real_3ff0000000000000;
      uVar19 = *(undefined4 *)&param_2->field0_0x0;
      uVar20 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uVar21 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uVar22 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      do {
        dVar6 = (double)uVar15 * dVar10;
        dVar4 = local_e0 * (double)uVar15 - dVar18;
        dVar7 = dVar6 * dVar11 + (param_2->field0_0x0)._s_0.X;
        dVar8 = dVar6 * local_e8 + (param_2->field0_0x0)._s_0.Y;
        if (uVar15 < param_5) {
          dVar5 = (double)param_8 * (double)CONCAT44(uVar26,uVar25);
        }
        else {
          dVar5 = 0.0;
        }
        dVar5 = (dVar18 - dVar4 * dVar4) * local_f0 + dVar6 * dVar9 + (param_2->field0_0x0)._s_0.Z +
                dVar5;
        local_d8 = dVar7;
        uStack_d0 = dVar8;
        local_c8 = dVar5;
        FLinearColor::ToFColorSRGB(param_6);
        pFVar2 = (param_1->AllocatorInstance).Data;
        uStack_f7 = (undefined1)(param_5 >> 8);
        local_f8 = (undefined1)param_5;
        uStack_f5 = (undefined1)(param_5 >> 0x18);
        fStack_f4 = param_7;
        local_118 = CONCAT44(uVar24,uVar23);
        uStack_f6 = (undefined1)(param_5 >> 0x10);
        local_128 = uVar19;
        uStack_124 = uVar20;
        uStack_120 = uVar21;
        uStack_11c = uVar22;
        dStack_110 = dVar7;
        local_108 = dVar8;
        dStack_100 = dVar5;
        if (((pFVar2 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < pFVar2 + (longlong)param_1->ArrayMax * 0x38))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar13 = param_1->ArrayNum;
        if (iVar13 == param_1->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        uVar15 = uVar15 + 1;
        param_1->ArrayNum = iVar13 + 1;
        dVar18 = __real_3ff0000000000000;
        uVar23 = SUB84(local_c8,0);
        uVar24 = (undefined4)((ulonglong)local_c8 >> 0x20);
        lVar14 = (longlong)iVar13 * 0x38;
        pFVar2 = (param_1->AllocatorInstance).Data;
        *(ulonglong *)(pFVar2 + lVar14) = CONCAT44(uStack_124,local_128);
        *(ulonglong *)(pFVar2 + lVar14 + 8) = CONCAT44(uStack_11c,uStack_120);
        *(undefined8 *)(pFVar2 + lVar14 + 0x10) = local_118;
        *(double *)(pFVar2 + lVar14 + 0x10 + 8) = dStack_110;
        *(double *)(pFVar2 + lVar14 + 0x20) = local_108;
        *(double *)(pFVar2 + lVar14 + 0x20 + 8) = dStack_100;
        *(ulonglong *)(pFVar2 + lVar14 + 0x30) =
             CONCAT44(fStack_f4,CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8)))
                     );
        uVar19 = (undefined4)local_d8;
        uVar20 = local_d8._4_4_;
        uVar21 = (undefined4)uStack_d0;
        uVar22 = uStack_d0._4_4_;
      } while (uVar15 <= param_5);
    }
  }
  return;
}

// CacheArrowHead @ 146de1800

void __cdecl
FNavMeshRenderingHelpers::CacheArrowHead
          (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,double param_4,FLinearColor *param_5,
          float param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  undefined4 local_res8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  float fStack_b4;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  undefined1 local_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  float fStack_7c;
  
  dVar3 = (param_3->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar5 = (param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar12 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
  uVar6 = dVar3;
  uVar7 = dVar4;
  uVar8 = dVar5;
  if ((dVar12 != __real_3ff0000000000000) &&
     (uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar12)) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    uVar6 = dVar3 * dVar12;
    uVar7 = dVar4 * dVar12;
    uVar8 = dVar5 * dVar12;
  }
  FLinearColor::ToFColorSRGB(param_5);
  local_e8 = (param_2->field0_0x0)._s_0.X;
  dStack_e0 = (param_2->field0_0x0)._s_0.Y;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_d8 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (double)uVar7 * param_4;
  uStack_b7 = (undefined1)((uint)local_res8 >> 8);
  dVar3 = (double)uVar6 * param_4;
  local_b8 = (undefined1)local_res8;
  dVar12 = dVar4 * __real_3fd5555555555555;
  uStack_b5 = (undefined1)((uint)local_res8 >> 0x18);
  dVar5 = dVar3 * __real_bfd5555555555555;
  uStack_b6 = (undefined1)((uint)local_res8 >> 0x10);
  fStack_b4 = param_6;
  dStack_d0 = dVar3 + (param_2->field0_0x0)._s_0.X + dVar12;
  dStack_c0 = dVar4 + (param_2->field0_0x0)._s_0.Z + dVar5;
  local_c8 = (double)uVar8 * param_4 + (param_2->field0_0x0)._s_0.Y;
  if (((pFVar1 <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 < pFVar1 + (longlong)param_1->ArrayMax * 0x38)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = param_1->ArrayNum;
  if (iVar10 == param_1->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  lVar11 = (longlong)iVar10 * 0x38;
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = iVar10 + 1;
  *(double *)(pFVar1 + lVar11) = local_e8;
  *(double *)(pFVar1 + lVar11 + 8) = dStack_e0;
  *(double *)(pFVar1 + lVar11 + 0x10) = local_d8;
  *(double *)(pFVar1 + lVar11 + 0x10 + 8) = dStack_d0;
  *(double *)(pFVar1 + lVar11 + 0x20) = local_c8;
  *(double *)(pFVar1 + lVar11 + 0x20 + 8) = dStack_c0;
  *(ulonglong *)(pFVar1 + lVar11 + 0x30) =
       CONCAT44(fStack_b4,CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
  FLinearColor::ToFColorSRGB(param_5);
  local_90 = (double)uVar8 * param_4 + (param_2->field0_0x0)._s_0.Y;
  local_b0 = (param_2->field0_0x0)._s_0.X;
  dStack_a8 = (param_2->field0_0x0)._s_0.Y;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_a0 = (param_2->field0_0x0)._s_0.Z;
  dStack_98 = (dVar3 + (param_2->field0_0x0)._s_0.X) - dVar12;
  dStack_88 = (dVar4 + (param_2->field0_0x0)._s_0.Z) - dVar5;
  uStack_7f = (undefined1)((uint)param_6 >> 8);
  local_80 = SUB41(param_6,0);
  uStack_7d = (undefined1)((uint)param_6 >> 0x18);
  fStack_7c = param_6;
  uStack_7e = (undefined1)((uint)param_6 >> 0x10);
  if (((pFVar1 <= (FScriptContainerElement *)&local_b0) &&
      ((FScriptContainerElement *)&local_b0 < pFVar1 + (longlong)param_1->ArrayMax * 0x38)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = param_1->ArrayNum;
  if (iVar10 == param_1->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar10 + 1;
  lVar11 = (longlong)iVar10 * 0x38;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar11) = local_b0;
  *(double *)(pFVar1 + lVar11 + 8) = dStack_a8;
  *(double *)(pFVar1 + lVar11 + 0x10) = local_a0;
  *(double *)(pFVar1 + lVar11 + 0x10 + 8) = dStack_98;
  *(double *)(pFVar1 + lVar11 + 0x20) = local_90;
  *(double *)(pFVar1 + lVar11 + 0x20 + 8) = dStack_88;
  *(ulonglong *)(pFVar1 + lVar11 + 0x30) =
       CONCAT44(fStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,local_80))));
  return;
}

// CacheLink @ 146de1b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNavMeshRenderingHelpers::CacheLink
          (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,FColor param_4,uchar param_5,
          bool param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar13 [16];
  FLinearColor_u_0 local_a8;
  TVector<double>_u_0 local_98 [2];
  
  fVar10 = __real_40000000;
  if (param_6) {
    fVar10 = __real_40800000;
  }
  if (param_5 == '\0') {
    fVar8 = fVar10 * __real_3f000000 + __real_3fc00000;
  }
  else {
    fVar8 = 0.0;
  }
  uVar5 = (ulonglong)((uint)param_4.field0_0x0 >> 0x10) & 0xff;
  bVar4 = param_4.field0_0x0._0_1_;
  uVar6 = (uint)param_4.field0_0x0 >> 8 & 0xff;
  local_a8._s_0.R = FLinearColor::sRGBToLinearTable[uVar5];
  local_a8._s_0.G = FLinearColor::sRGBToLinearTable[uVar6];
  local_a8._s_0.B = FLinearColor::sRGBToLinearTable[bVar4];
  fVar11 = (float)((uint)param_4.field0_0x0 >> 0x18) * __real_3b808081;
  local_a8._s_0.A = fVar11;
  CacheArc(param_1,param_2,param_3,__real_3fd99999a0000000,4,(FLinearColor *)&local_a8._s_0,fVar10,
           fVar8);
  local_98[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_98[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  dVar9 = dVar1 - (double)local_98[0]._0_8_;
  dVar12 = dVar2 - (double)local_98[0]._8_8_;
  dVar7 = dVar3 - (param_2->field0_0x0)._s_0.Z;
  local_a8._s_0.R = FLinearColor::sRGBToLinearTable[uVar5];
  local_a8._s_0.B = FLinearColor::sRGBToLinearTable[bVar4];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar12 * dVar12 + dVar9 * dVar9 + dVar7 * dVar7;
  auVar13 = sqrtpd(unaff_XMM9,auVar13);
  local_a8._s_0.G = FLinearColor::sRGBToLinearTable[uVar6];
  dVar12 = auVar13._0_8_ * ___real_3ff553f7c0000000;
  local_98[0]._16_8_ = dVar12 + (param_2->field0_0x0)._s_0.Z;
  local_a8._s_0.A = fVar11;
  CacheArrowHead(param_1,param_3,(TVector<double> *)&local_98[0]._s_0,__real_403e000000000000,
                 (FLinearColor *)&local_a8._s_0,fVar10);
  if (param_5 != '\0') {
    local_a8._s_0.R = FLinearColor::sRGBToLinearTable[uVar5];
    local_98[0]._16_8_ = dVar3 + dVar12;
    local_a8._s_0.G = FLinearColor::sRGBToLinearTable[uVar6];
    local_a8._s_0.B = FLinearColor::sRGBToLinearTable[bVar4];
    local_a8._s_0.A = fVar11;
    local_98[0]._0_8_ = dVar1;
    local_98[0]._8_8_ = dVar2;
    CacheArrowHead(param_1,param_2,(TVector<double> *)&local_98[0]._s_0,__real_403e000000000000,
                   (FLinearColor *)&local_a8._s_0,fVar10);
  }
  return;
}

// DarkenColor @ 146de6c70

FColor __cdecl FNavMeshRenderingHelpers::DarkenColor(FColor *param_1)

{
  uint *in_RDX;
  
  (param_1->field0_0x0).Bits = *in_RDX >> 1 & 0x7f7f7f | *in_RDX & 0xff000000;
  return (FColor)SUB84(param_1,0);
}

// DrawDebugBox @ 146def330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FNavMeshRenderingHelpers::DrawDebugBox
          (FPrimitiveDrawInterface *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FColor *param_4)

{
  float fVar1;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  
  fVar1 = __real_3b808081;
  if (param_1 != (FPrimitiveDrawInterface *)0x0) {
    local_48 = (param_2->field0_0x0)._s_0.Y;
    local_68 = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_58 = (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_6c = (float)(param_4->field0_0x0)._s_0.A * __real_3b808081;
    local_60 = local_48 - (param_3->field0_0x0)._s_0.Y;
    local_48 = local_48 + (param_3->field0_0x0)._s_0.Y;
    local_50 = local_68;
    local_40 = local_58;
    (**(code **)(param_1->_padding_ + 0x30))(local_60,&local_50,&local_68,&local_78,0,0,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_50 = local_68 - (param_3->field0_0x0)._s_0.X;
    local_68 = local_68 + (param_3->field0_0x0)._s_0.X;
    local_58 = (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_60 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_48 = local_60;
    local_40 = local_58;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_60 = (param_2->field0_0x0)._s_0.Y;
    local_68 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_48 = local_60 + (param_3->field0_0x0)._s_0.Y;
    local_60 = local_60 - (param_3->field0_0x0)._s_0.Y;
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_58 = (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_40 = local_58;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_50 = local_68 + (param_3->field0_0x0)._s_0.X;
    local_68 = local_68 - (param_3->field0_0x0)._s_0.X;
    local_58 = (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_60 = (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
    local_48 = local_60;
    local_40 = local_58;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_60 = (param_2->field0_0x0)._s_0.Y;
    local_68 = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_48 = local_60 - (param_3->field0_0x0)._s_0.Y;
    local_60 = local_60 + (param_3->field0_0x0)._s_0.Y;
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_58 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_40 = local_58;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_50 = local_68 - (param_3->field0_0x0)._s_0.X;
    local_68 = local_68 + (param_3->field0_0x0)._s_0.X;
    local_58 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_60 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_48 = local_60;
    local_40 = local_58;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_60 = (param_2->field0_0x0)._s_0.Y;
    local_68 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_48 = local_60 + (param_3->field0_0x0)._s_0.Y;
    local_60 = local_60 - (param_3->field0_0x0)._s_0.Y;
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_58 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_40 = local_58;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_50 = local_68 + (param_3->field0_0x0)._s_0.X;
    local_68 = local_68 - (param_3->field0_0x0)._s_0.X;
    local_58 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_60 = (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
    local_48 = local_60;
    local_40 = local_58;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_68 = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_60 = (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_58 = (param_2->field0_0x0)._s_0.Z;
    local_40 = local_58 - (param_3->field0_0x0)._s_0.Z;
    local_58 = local_58 + (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_48 = local_60;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_60 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_58 = (param_2->field0_0x0)._s_0.Z;
    local_40 = local_58 - (param_3->field0_0x0)._s_0.Z;
    local_58 = local_58 + (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_48 = local_60;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_58 = (param_2->field0_0x0)._s_0.Z;
    local_60 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_40 = local_58 - (param_3->field0_0x0)._s_0.Z;
    local_58 = local_58 + (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_48 = local_60;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_78 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.R];
    local_60 = (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
    local_74 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.G];
    local_70 = FLinearColor::sRGBToLinearTable[(param_4->field0_0x0)._s_0.B];
    local_6c = (float)(param_4->field0_0x0)._s_0.A * fVar1;
    local_58 = (param_2->field0_0x0)._s_0.Z;
    local_40 = local_58 - (param_3->field0_0x0)._s_0.Z;
    local_58 = local_58 + (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_48 = local_60;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_68,&local_50,&local_78,0,0,0,0);
  }
  return;
}

// DrawWireCylinder @ 146df2070

void __cdecl
FNavMeshRenderingHelpers::DrawWireCylinder
          (TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4,
          TVector<double> *param_5,FColor param_6,double param_7,double param_8,int param_9,
          uchar param_10,float param_11)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  FColor_u_0 local_138;
  undefined4 uStack_134;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  FColor_u_0 local_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  FColor_u_0 local_c8;
  undefined4 uStack_c4;
  
  iVar10 = 0;
  dVar3 = param_7 * (param_3->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  dVar4 = param_7 * (param_3->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  dVar5 = param_7 * (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  if (0 < param_9) {
    do {
      iVar10 = iVar10 + 1;
      __libm_sse2_sincos_();
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_138 = param_6.field0_0x0;
      uStack_134 = 0;
      local_148 = param_8 * (param_5->field0_0x0)._s_0.Y;
      dStack_140 = param_8 * (param_5->field0_0x0)._s_0.Z;
      dStack_160 = dVar4 - local_148;
      dStack_150 = param_8 * (param_5->field0_0x0)._s_0.X;
      dVar7 = (extraout_XMM0_Qb * (param_3->field0_0x0)._s_0.X +
              extraout_XMM0_Qa * (param_4->field0_0x0)._s_0.X) * param_7 +
              (param_2->field0_0x0)._s_0.X;
      dVar8 = (extraout_XMM0_Qb * (param_3->field0_0x0)._s_0.Y +
              extraout_XMM0_Qa * (param_4->field0_0x0)._s_0.Y) * param_7 +
              (param_2->field0_0x0)._s_0.Y;
      local_168 = dVar3 - dStack_150;
      dVar6 = (extraout_XMM0_Qa * (param_4->field0_0x0)._s_0.Z +
              extraout_XMM0_Qb * (param_3->field0_0x0)._s_0.Z) * param_7 +
              (param_2->field0_0x0)._s_0.Z;
      dStack_150 = dVar7 - dStack_150;
      local_158 = dVar5 - dStack_140;
      dStack_140 = dVar6 - dStack_140;
      local_148 = dVar8 - local_148;
      if (((pFVar1 <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 < pFVar1 + (longlong)param_1->ArrayMax * 0x38)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      local_100 = param_6.field0_0x0;
      param_1->ArrayNum = iVar11 + 1;
      lVar12 = (longlong)iVar11 * 0x38;
      pFVar1 = (param_1->AllocatorInstance).Data;
      uStack_fc = 0;
      *(double *)(pFVar1 + lVar12) = local_168;
      *(double *)(pFVar1 + lVar12 + 8) = dStack_160;
      *(double *)(pFVar1 + lVar12 + 0x10) = local_158;
      *(double *)(pFVar1 + lVar12 + 0x10 + 8) = dStack_150;
      *(double *)(pFVar1 + lVar12 + 0x20) = local_148;
      *(double *)(pFVar1 + lVar12 + 0x20 + 8) = dStack_140;
      *(ulonglong *)(pFVar1 + lVar12 + 0x30) = CONCAT44(uStack_134,local_138.Bits);
      dStack_118 = param_8 * (param_5->field0_0x0)._s_0.X;
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_110 = param_8 * (param_5->field0_0x0)._s_0.Y;
      dStack_108 = param_8 * (param_5->field0_0x0)._s_0.Z;
      local_130 = dVar3 + dStack_118;
      dStack_128 = dVar4 + local_110;
      local_120 = dVar5 + dStack_108;
      dStack_118 = dVar7 + dStack_118;
      local_110 = dVar8 + local_110;
      dStack_108 = dVar6 + dStack_108;
      if (((pFVar1 <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 < pFVar1 + (longlong)param_1->ArrayMax * 0x38)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      local_c8 = param_6.field0_0x0;
      param_1->ArrayNum = iVar11 + 1;
      lVar12 = (longlong)iVar11 * 0x38;
      pFVar1 = (param_1->AllocatorInstance).Data;
      uStack_c4 = 0;
      *(double *)(pFVar1 + lVar12) = local_130;
      *(double *)(pFVar1 + lVar12 + 8) = dStack_128;
      *(double *)(pFVar1 + lVar12 + 0x10) = local_120;
      *(double *)(pFVar1 + lVar12 + 0x10 + 8) = dStack_118;
      *(double *)(pFVar1 + lVar12 + 0x20) = local_110;
      *(double *)(pFVar1 + lVar12 + 0x20 + 8) = dStack_108;
      *(ulonglong *)(pFVar1 + lVar12 + 0x30) = CONCAT44(uStack_fc,local_100.Bits);
      dStack_e0 = param_8 * (param_5->field0_0x0)._s_0.X;
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_d8 = param_8 * (param_5->field0_0x0)._s_0.Y;
      dStack_d0 = param_8 * (param_5->field0_0x0)._s_0.Z;
      local_f8 = dVar3 - dStack_e0;
      dStack_f0 = dVar4 - local_d8;
      dStack_e0 = dVar3 + dStack_e0;
      local_d8 = dVar4 + local_d8;
      local_e8 = dVar5 - dStack_d0;
      dStack_d0 = dVar5 + dStack_d0;
      if (((pFVar1 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < pFVar1 + (longlong)param_1->ArrayMax * 0x38)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar11 + 1;
      lVar12 = (longlong)iVar11 * 0x38;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(double *)(pFVar1 + lVar12) = local_f8;
      *(double *)(pFVar1 + lVar12 + 8) = dStack_f0;
      *(double *)(pFVar1 + lVar12 + 0x10) = local_e8;
      *(double *)(pFVar1 + lVar12 + 0x10 + 8) = dStack_e0;
      *(double *)(pFVar1 + lVar12 + 0x20) = local_d8;
      *(double *)(pFVar1 + lVar12 + 0x20 + 8) = dStack_d0;
      *(ulonglong *)(pFVar1 + lVar12 + 0x30) = CONCAT44(uStack_c4,local_c8.Bits);
      dVar3 = dVar7;
      dVar4 = dVar8;
      dVar5 = dVar6;
    } while (iVar10 < param_9);
  }
  return;
}

// EvalArc @ 146df2800

TVector<double> * __cdecl
FNavMeshRenderingHelpers::EvalArc
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,double param_3,double param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  
  dVar3 = param_4 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = param_4 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  dVar3 = (param_4 + param_4) - __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       param_4 * dVar1 + (param_1->field0_0x0)._s_0.Z +
       (__real_3ff0000000000000 - dVar3 * dVar3) * param_3;
  return __return_storage_ptr__;
}

// GetClusterColor @ 146e00d50

FColor __cdecl FNavMeshRenderingHelpers::GetClusterColor(int param_1)

{
  undefined4 in_register_0000000c;
  char *pcVar1;
  int in_EDX;
  
  pcVar1 = (char *)CONCAT44(in_register_0000000c,param_1);
  pcVar1[3] = -0x5c;
  *pcVar1 = (((byte)(in_EDX >> 5) & 1) * '\x02' + ((byte)in_EDX & 1) + 1) * '?';
  pcVar1[1] = (((byte)(in_EDX >> 4) & 1) * '\x02' + ((byte)(in_EDX >> 2) & 1) + 1) * '?';
  pcVar1[2] = (((byte)(in_EDX >> 3) & 1) * '\x02' + ((byte)(in_EDX >> 1) & 1) + 1) * '?';
  return (FColor)(FColor_u_0)param_1;
}

// GetDetailFlags @ 146e02580

int __cdecl FNavMeshRenderingHelpers::GetDetailFlags(ARecastNavMesh *param_1)

{
  uint uVar1;
  
  if (param_1 == (ARecastNavMesh *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)&param_1->field_0x518;
  return (((uVar1 & 0x20) << 5 | uVar1 & 0x300) << 9 | uVar1 & 4) * 2 |
         (uVar1 >> 2 & 0x7ff00 | uVar1 & 200) >> 1 | uVar1 & 0x13;
}

// LineInCorrectDistance @ 146e15e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
FNavMeshRenderingHelpers::LineInCorrectDistance
          (TVector<double> *param_1,TVector<double> *param_2,FSceneView *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = ARecastNavMesh::DrawDistanceSq;
  if (0.0 < param_4) {
    dVar4 = param_4 * param_4;
  }
  dVar5 = (param_3->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
  dVar3 = (param_3->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
  dVar2 = dVar5 - (param_1->field0_0x0)._s_0.X;
  dVar1 = dVar3 - (param_1->field0_0x0)._s_0.Y;
  if ((dVar1 * dVar1 + dVar2 * dVar2 < dVar4) &&
     (dVar3 = dVar3 - (param_2->field0_0x0)._s_0.Y, dVar5 = dVar5 - (param_2->field0_0x0)._s_0.X,
     dVar3 * dVar3 + dVar5 * dVar5 < dVar4)) {
    return true;
  }
  return false;
}

// LineInView @ 146e15e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
FNavMeshRenderingHelpers::LineInView
          (TVector<double> *param_1,TVector<double> *param_2,FSceneView *param_3)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ForElementType<UE::Math::TPlane<double>_> FVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = (param_3->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
  dVar12 = (param_3->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
  dVar10 = dVar11 - (param_1->field0_0x0)._s_0.X;
  dVar9 = dVar12 - (param_1->field0_0x0)._s_0.Y;
  if ((ARecastNavMesh::DrawDistanceSq < dVar10 * dVar10 + dVar9 * dVar9) ||
     (dVar11 = dVar11 - (param_2->field0_0x0)._s_0.X, dVar12 = dVar12 - (param_2->field0_0x0)._s_0.Y
     , ARecastNavMesh::DrawDistanceSq < dVar11 * dVar11 + dVar12 * dVar12)) {
LAB_146e15ffa:
    bVar3 = false;
  }
  else {
    uVar7 = 0;
    if (0 < (param_3->ViewFrustum).Planes.ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (param_3->ViewFrustum).Planes.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        FVar1 = (param_3->ViewFrustum).Planes.AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<UE::Math::TPlane<double>_>)&param_3->ViewFrustum;
        if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar6 = FVar1;
        }
        dVar11 = *(double *)(lVar8 + 8 + (longlong)FVar6);
        dVar12 = *(double *)(lVar8 + 0x10 + (longlong)FVar6);
        dVar9 = *(double *)(lVar8 + 0x18 + (longlong)FVar6);
        if ((0.0 < (dVar11 * (param_1->field0_0x0)._s_0.Y +
                    *(double *)(lVar8 + (longlong)FVar6) * (param_1->field0_0x0)._s_0.X +
                   dVar12 * (param_1->field0_0x0)._s_0.Z) - dVar9) &&
           (0.0 < (*(double *)(lVar8 + (longlong)FVar6) * (param_2->field0_0x0)._s_0.X +
                   dVar11 * (param_2->field0_0x0)._s_0.Y + dVar12 * (param_2->field0_0x0)._s_0.Z) -
                  dVar9)) goto LAB_146e15ffa;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while ((int)uVar7 < (param_3->ViewFrustum).Planes.ArrayNum);
    }
    bVar3 = true;
  }
  return bVar3;
}

// PointInView @ 146e1afe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FNavMeshRenderingHelpers::PointInView(TVector<double> *param_1,FSceneView *param_2)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ForElementType<UE::Math::TPlane<double>_> FVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = (param_2->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_2->ViewMatrices).ViewOrigin.field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X;
  if (ARecastNavMesh::DrawDistanceSq < dVar9 * dVar9 + dVar10 * dVar10) {
LAB_146e1b0fb:
    bVar3 = false;
  }
  else {
    uVar7 = 0;
    if (0 < (param_2->ViewFrustum).Planes.ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (param_2->ViewFrustum).Planes.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        FVar1 = (param_2->ViewFrustum).Planes.AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<UE::Math::TPlane<double>_>)&param_2->ViewFrustum;
        if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar6 = FVar1;
        }
        if (0.0 < (*(double *)(lVar8 + 8 + (longlong)FVar6) * (param_1->field0_0x0)._s_0.Y +
                   *(double *)(lVar8 + (longlong)FVar6) * (param_1->field0_0x0)._s_0.X +
                  *(double *)(lVar8 + 0x10 + (longlong)FVar6) * (param_1->field0_0x0)._s_0.Z) -
                  *(double *)(lVar8 + 0x18 + (longlong)FVar6)) goto LAB_146e1b0fb;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while ((int)uVar7 < (param_2->ViewFrustum).Planes.ArrayNum);
    }
    bVar3 = true;
  }
  return bVar3;
}

// SemiDarkenColor @ 146e22630

FColor __cdecl FNavMeshRenderingHelpers::SemiDarkenColor(FColor *param_1)

{
  uint uVar1;
  uint *in_RDX;
  
  uVar1 = *in_RDX;
  (param_1->field0_0x0).Bits =
       (uVar1 >> 2 & 0x3f3f3f) + (uVar1 >> 1 & 0x7f7f7f) | uVar1 & 0xff000000;
  return (FColor)SUB84(param_1,0);
}

