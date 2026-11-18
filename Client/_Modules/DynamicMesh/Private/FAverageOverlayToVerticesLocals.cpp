// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 10

// AverageFullMesh<float,1> @ 14c6bd1c0

void __cdecl
FAverageOverlayToVerticesLocals::AverageFullMesh<float,1>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<float,1> *param_2,bool param_3,bool param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_6,
          TArray<double,TSizedDefaultAllocator<32>_> *param_7)

{
  float fVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TVector<double>_u_0 *pTVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool local_d8 [4];
  uint local_d4;
  float local_d0;
  uint local_cc;
  TVector<double>_u_0 local_c8;
  uint local_b0 [4];
  double local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TVector<double> local_88 [3];
  
  local_d0 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (param_5,&local_d0,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  local_d8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (param_6,local_d8,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  local_a0 = 0.0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (param_7,&local_a0,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar10 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_d4 = 0;
  if ((uVar10 != 0) &&
     (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar8 = 1;
    local_d4 = 1;
    bVar14 = uVar10 == 1;
    if ((int)uVar10 < 2) goto LAB_14c6bd2dc;
    do {
      lVar12 = *(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8);
      if ((*(short *)(lVar12 + (ulonglong)(uVar8 & 0x1ff) * 2) != 0) &&
         (local_d4 = uVar8, *(short *)(lVar12 + (ulonglong)(uVar8 & 0x1ff) * 2) != -1)) break;
      uVar8 = uVar8 + 1;
      local_d4 = uVar8;
    } while ((int)uVar8 < (int)uVar10);
  }
  bVar14 = local_d4 == uVar10;
LAB_14c6bd2dc:
  local_cc = uVar10;
  if (!bVar14) {
LAB_14c6bd2f2:
    do {
      uVar9 = local_d4;
      pFVar3 = (param_2->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar8 = local_d4 * 3;
      local_b0[0] = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                             (ulonglong)(uVar8 & 0x1ff) * 4);
      if (-1 < (int)local_b0[0]) {
        lVar12 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_d4 >> 9) * 8);
        local_98 = *(undefined8 *)(lVar12 + (ulonglong)(local_d4 & 0x1ff) * 0xc);
        local_90 = *(undefined4 *)(lVar12 + 8 + (ulonglong)(local_d4 & 0x1ff) * 0xc);
        local_b0[1] = *(undefined4 *)
                       (*(longlong *)(pFVar3 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        local_b0[2] = *(undefined4 *)
                       (*(longlong *)(pFVar3 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                       (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
        dVar6 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,local_d4);
        local_c8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_c8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_c8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if (param_4) {
          pTVar7 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(param_1,local_88,uVar9);
          local_c8._0_16_ = *(undefined1 (*) [16])&pTVar7->field0_0x0;
          local_c8._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
        }
        if (param_3) {
          auVar5._8_4_ = SUB84(local_c8._s_0.Y * dVar6,0);
          auVar5._0_8_ = local_c8._s_0.X * dVar6;
          auVar5._12_4_ = (int)((ulonglong)(local_c8._s_0.Y * dVar6) >> 0x20);
          local_c8._0_16_ = auVar5;
          local_c8._s_0.Z = local_c8._s_0.Z * dVar6;
        }
        pTVar11 = &local_c8;
        lVar12 = 0;
        do {
          uVar10 = *(uint *)((longlong)&local_98 + lVar12);
          lVar13 = (longlong)(int)uVar10;
          dVar6 = (pTVar11->_s_0).X;
          uVar9 = ~uVar10 >> 0x1f;
          fVar1 = *(float *)(*(longlong *)
                              ((param_2->Elements).Blocks.AllocatorInstance.Data +
                              (ulonglong)(*(uint *)((longlong)local_b0 + lVar12) >> 9) * 8) +
                            (ulonglong)(*(uint *)((longlong)local_b0 + lVar12) & 0x1ff) * 4);
          uVar8 = 0;
          if ((int)uVar10 < param_7->ArrayNum) {
            uVar8 = uVar9;
          }
          if ((uVar8 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_7->AllocatorInstance).Data;
          dVar2 = (pTVar11->_s_0).X;
          *(double *)(pFVar3 + lVar13 * 8) = dVar6 + *(double *)(pFVar3 + lVar13 * 8);
          uVar8 = 0;
          if ((int)uVar10 < param_5->ArrayNum) {
            uVar8 = uVar9;
          }
          if ((uVar8 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_5->AllocatorInstance).Data;
          *(float *)(pFVar3 + lVar13 * 4) =
               (float)((double)fVar1 * dVar2) + *(float *)(pFVar3 + lVar13 * 4);
          uVar8 = 0;
          if ((int)uVar10 < param_6->ArrayNum) {
            uVar8 = uVar9;
          }
          if ((uVar8 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar12 = lVar12 + 4;
          pTVar11 = (TVector<double>_u_0 *)&(pTVar11->_s_0).Y;
          (param_6->AllocatorInstance).Data[lVar13] = (FScriptContainerElement)0x1;
          uVar10 = local_cc;
        } while (lVar12 < 0xc);
      }
      local_d4 = local_d4 + 1;
      if ((int)local_d4 < (int)uVar10) {
        pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(local_d4 >> 9) * 8) +
                         (ulonglong)(local_d4 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(local_d4 >> 9) * 8) +
                        (ulonglong)(local_d4 & 0x1ff) * 2) != -1)) goto LAB_14c6bd2f2;
          local_d4 = local_d4 + 1;
        } while ((int)local_d4 < (int)uVar10);
      }
    } while (local_d4 != uVar10);
  }
  return;
}

// AverageFullMesh<float,2> @ 14c6bd600

void __cdecl
FAverageOverlayToVerticesLocals::AverageFullMesh<float,2>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<float,2> *param_2,bool param_3,bool param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_6,
          TArray<double,TSizedDefaultAllocator<32>_> *param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  TVector<double>_u_0 *pTVar15;
  bool bVar16;
  bool local_e8 [4];
  uint local_e4;
  float local_e0;
  uint local_dc;
  TVector<double>_u_0 local_d8;
  uint local_c0 [4];
  double local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  TVector<double> local_98 [3];
  
  local_e0 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (param_5,&local_e0,
             ((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed) * 2);
  local_e8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (param_6,local_e8,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  local_b0 = 0.0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (param_7,&local_b0,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar11 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_e4 = 0;
  if ((uVar11 != 0) &&
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar10 = 1;
    local_e4 = 1;
    bVar16 = uVar11 == 1;
    if ((int)uVar11 < 2) goto LAB_14c6bd71c;
    do {
      lVar13 = *(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8);
      if ((*(short *)(lVar13 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
         (local_e4 = uVar10, *(short *)(lVar13 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
      uVar10 = uVar10 + 1;
      local_e4 = uVar10;
    } while ((int)uVar10 < (int)uVar11);
  }
  bVar16 = local_e4 == uVar11;
LAB_14c6bd71c:
  local_dc = uVar11;
  if (!bVar16) {
LAB_14c6bd740:
    do {
      uVar8 = local_e4;
      pFVar4 = (param_2->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar10 = local_e4 * 3;
      local_c0[0] = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                             (ulonglong)(uVar10 & 0x1ff) * 4);
      if (-1 < (int)local_c0[0]) {
        lVar13 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_e4 >> 9) * 8);
        local_a8 = *(undefined8 *)(lVar13 + (ulonglong)(local_e4 & 0x1ff) * 0xc);
        local_a0 = *(undefined4 *)(lVar13 + 8 + (ulonglong)(local_e4 & 0x1ff) * 0xc);
        local_c0[1] = *(undefined4 *)
                       (*(longlong *)(pFVar4 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
        local_c0[2] = *(undefined4 *)
                       (*(longlong *)(pFVar4 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                       (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
        dVar7 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,local_e4);
        local_d8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_d8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_d8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if (param_4) {
          pTVar9 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(param_1,local_98,uVar8);
          local_d8._0_16_ = *(undefined1 (*) [16])&pTVar9->field0_0x0;
          local_d8._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
        }
        if (param_3) {
          auVar6._8_4_ = SUB84(local_d8._s_0.Y * dVar7,0);
          auVar6._0_8_ = local_d8._s_0.X * dVar7;
          auVar6._12_4_ = (int)((ulonglong)(local_d8._s_0.Y * dVar7) >> 0x20);
          local_d8._0_16_ = auVar6;
          local_d8._s_0.Z = local_d8._s_0.Z * dVar7;
        }
        pTVar15 = &local_d8;
        lVar13 = 0;
        do {
          pFVar4 = (param_2->Elements).Blocks.AllocatorInstance.Data;
          uVar11 = *(uint *)((longlong)&local_a8 + lVar13);
          lVar14 = (longlong)(int)uVar11;
          uVar10 = *(uint *)((longlong)local_c0 + lVar13);
          dVar7 = (pTVar15->_s_0).X;
          uVar8 = uVar11 * 2;
          fVar1 = *(float *)(*(longlong *)(pFVar4 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar10 * 2 & 0x1ff) * 4);
          fVar2 = *(float *)(*(longlong *)(pFVar4 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar10 * 2 + 1 & 0x1ff) * 4);
          uVar10 = 0;
          if ((int)uVar11 < param_7->ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (param_7->AllocatorInstance).Data;
          dVar3 = (pTVar15->_s_0).X;
          *(double *)(pFVar4 + lVar14 * 8) = dVar7 + *(double *)(pFVar4 + lVar14 * 8);
          uVar10 = 0;
          if ((int)uVar8 < param_5->ArrayNum) {
            uVar10 = ~uVar8 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar12 = uVar8 + 1;
          pFVar4 = (param_5->AllocatorInstance).Data;
          dVar7 = (pTVar15->_s_0).X;
          *(float *)(pFVar4 + (longlong)(int)uVar8 * 4) =
               (float)((double)fVar1 * dVar3) + *(float *)(pFVar4 + (longlong)(int)uVar8 * 4);
          uVar10 = 0;
          if ((int)uVar12 < param_5->ArrayNum) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (param_5->AllocatorInstance).Data;
          *(float *)(pFVar4 + (longlong)(int)uVar12 * 4) =
               (float)((double)fVar2 * dVar7) + *(float *)(pFVar4 + (longlong)(int)uVar12 * 4);
          uVar10 = 0;
          if ((int)uVar11 < param_6->ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar13 = lVar13 + 4;
          pTVar15 = (TVector<double>_u_0 *)&(pTVar15->_s_0).Y;
          (param_6->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
          uVar11 = local_dc;
        } while (lVar13 < 0xc);
      }
      local_e4 = local_e4 + 1;
      if ((int)local_e4 < (int)uVar11) {
        pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          if ((*(short *)(*(longlong *)(pFVar4 + (ulonglong)(local_e4 >> 9) * 8) +
                         (ulonglong)(local_e4 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar4 + (ulonglong)(local_e4 >> 9) * 8) +
                        (ulonglong)(local_e4 & 0x1ff) * 2) != -1)) goto LAB_14c6bd740;
          local_e4 = local_e4 + 1;
        } while ((int)local_e4 < (int)uVar11);
      }
    } while (local_e4 != uVar11);
  }
  return;
}

// AverageFullMesh<float,3> @ 14c6bdaf0

void __cdecl
FAverageOverlayToVerticesLocals::AverageFullMesh<float,3>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<float,3> *param_2,bool param_3,bool param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_6,
          TArray<double,TSizedDefaultAllocator<32>_> *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  uint uVar15;
  TVector<double>_u_0 *pTVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  bool local_108;
  char local_107;
  char local_106;
  uint local_104;
  float local_100;
  uint local_fc;
  uint local_f8;
  TArray<double,TSizedDefaultAllocator<32>_> *local_f0;
  TVector<double>_u_0 local_e8;
  TDynamicMeshOverlay<float,3> *local_d0;
  int local_c8 [4];
  double local_b8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_b0;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_a8;
  FDynamicMesh3 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TVector<double> local_88 [4];
  
  local_b0 = param_5;
  local_a8 = param_6;
  local_f0 = param_7;
  local_100 = 0.0;
  local_107 = param_3;
  local_106 = param_4;
  local_d0 = param_2;
  local_a0 = param_1;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (param_5,&local_100,
             ((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  local_108 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (param_6,&local_108,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  local_b8 = 0.0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (param_7,&local_b8,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_104 = 0;
  if ((uVar15 != 0) &&
     (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar14 = 1;
    local_104 = 1;
    bVar19 = uVar15 == 1;
    if ((int)uVar15 < 2) goto LAB_14c6bdc2c;
    do {
      lVar18 = *(longlong *)(pFVar5 + (ulonglong)(uVar14 >> 9) * 8);
      if ((*(short *)(lVar18 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
         (local_104 = uVar14, *(short *)(lVar18 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
      uVar14 = uVar14 + 1;
      local_104 = uVar14;
    } while ((int)uVar14 < (int)uVar15);
  }
  bVar19 = local_104 == uVar15;
LAB_14c6bdc2c:
  local_f8 = uVar15;
  if (!bVar19) {
LAB_14c6bdc60:
    do {
      uVar11 = local_104;
      pFVar5 = (param_2->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar14 = local_104 * 3;
      local_c8[0] = *(int *)(*(longlong *)(pFVar5 + (ulonglong)(uVar14 >> 9) * 8) +
                            (ulonglong)(uVar14 & 0x1ff) * 4);
      if (-1 < local_c8[0]) {
        lVar18 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_104 >> 9) * 8);
        local_98 = *(undefined8 *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 0xc);
        local_90 = *(undefined4 *)(lVar18 + 8 + (ulonglong)(local_104 & 0x1ff) * 0xc);
        local_c8[1] = *(undefined4 *)
                       (*(longlong *)(pFVar5 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
        local_c8[2] = *(undefined4 *)
                       (*(longlong *)(pFVar5 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                       (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
        dVar8 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,local_104);
        local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_e8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if (param_4 != false) {
          pTVar13 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(param_1,local_88,uVar11);
          local_e8._0_16_ = *(undefined1 (*) [16])&pTVar13->field0_0x0;
          local_e8._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
        }
        pTVar9 = local_b0;
        if (param_3 != false) {
          auVar7._8_4_ = SUB84(local_e8._s_0.Y * dVar8,0);
          auVar7._0_8_ = local_e8._s_0.X * dVar8;
          auVar7._12_4_ = (int)((ulonglong)(local_e8._s_0.Y * dVar8) >> 0x20);
          local_e8._0_16_ = auVar7;
          local_e8._s_0.Z = local_e8._s_0.Z * dVar8;
        }
        pTVar16 = &local_e8;
        lVar18 = 0;
        do {
          pFVar5 = (param_2->Elements).Blocks.AllocatorInstance.Data;
          uVar14 = *(uint *)((longlong)&local_98 + lVar18);
          lVar17 = (longlong)(int)uVar14;
          dVar8 = (pTVar16->_s_0).X;
          uVar11 = *(int *)((longlong)local_c8 + lVar18) * 3;
          uVar15 = uVar14 * 3;
          fVar1 = *(float *)(*(longlong *)(pFVar5 + (ulonglong)(uVar11 >> 9) * 8) +
                            (ulonglong)(uVar11 & 0x1ff) * 4);
          fVar2 = *(float *)(*(longlong *)(pFVar5 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                            (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
          local_fc = ~uVar14 >> 0x1f;
          fVar3 = *(float *)(*(longlong *)(pFVar5 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                            (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
          uVar11 = 0;
          if ((int)uVar14 < param_7->ArrayNum) {
            uVar11 = local_fc;
          }
          if ((uVar11 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (local_f0->AllocatorInstance).Data;
          dVar4 = (pTVar16->_s_0).X;
          *(double *)(pFVar5 + lVar17 * 8) = dVar8 + *(double *)(pFVar5 + lVar17 * 8);
          uVar11 = 0;
          if ((int)uVar15 < pTVar9->ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (pTVar9->AllocatorInstance).Data;
          uVar11 = uVar15 + 1;
          dVar8 = (pTVar16->_s_0).X;
          *(float *)(pFVar5 + (longlong)(int)uVar15 * 4) =
               (float)((double)fVar1 * dVar4) + *(float *)(pFVar5 + (longlong)(int)uVar15 * 4);
          uVar12 = 0;
          if ((int)uVar11 < pTVar9->ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (pTVar9->AllocatorInstance).Data;
          uVar15 = uVar15 + 2;
          dVar4 = (pTVar16->_s_0).X;
          *(float *)(pFVar5 + (longlong)(int)uVar11 * 4) =
               (float)((double)fVar2 * dVar8) + *(float *)(pFVar5 + (longlong)(int)uVar11 * 4);
          uVar11 = 0;
          if ((int)uVar15 < pTVar9->ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar10 = local_a8;
          pFVar5 = (pTVar9->AllocatorInstance).Data;
          *(float *)(pFVar5 + (longlong)(int)uVar15 * 4) =
               (float)((double)fVar3 * dVar4) + *(float *)(pFVar5 + (longlong)(int)uVar15 * 4);
          uVar15 = 0;
          if ((int)uVar14 < local_a8->ArrayNum) {
            uVar15 = local_fc;
          }
          if ((uVar15 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar18 = lVar18 + 4;
          pTVar16 = (TVector<double>_u_0 *)&(pTVar16->_s_0).Y;
          (pTVar10->AllocatorInstance).Data[lVar17] = (FScriptContainerElement)0x1;
          param_1 = local_a0;
          param_7 = local_f0;
          param_2 = local_d0;
          param_4 = (bool)local_106;
          uVar15 = local_f8;
          param_3 = (bool)local_107;
        } while (lVar18 < 0xc);
      }
      local_104 = local_104 + 1;
      if ((int)local_104 < (int)uVar15) {
        do {
          lVar18 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_104 >> 9) * 8);
          if ((*(short *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 2) != -1)) goto LAB_14c6bdc60;
          local_104 = local_104 + 1;
        } while ((int)local_104 < (int)uVar15);
      }
    } while (local_104 != uVar15);
  }
  return;
}

// AverageFullMesh<float,4> @ 14c6be0b0

void __cdecl
FAverageOverlayToVerticesLocals::AverageFullMesh<float,4>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<float,4> *param_2,bool param_3,bool param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_6,
          TArray<double,TSizedDefaultAllocator<32>_> *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  uint uVar15;
  TVector<double>_u_0 *pTVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  bool local_108;
  char local_107;
  char local_106;
  uint local_104;
  float local_100 [2];
  uint local_f8;
  uint local_f4;
  TArray<double,TSizedDefaultAllocator<32>_> *local_f0;
  TVector<double>_u_0 local_e8;
  TDynamicMeshOverlay<float,4> *local_d0;
  uint local_c8 [4];
  double local_b8;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_b0;
  FDynamicMesh3 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  TVector<double> local_90 [4];
  
  local_b0 = param_6;
  local_f0 = param_7;
  local_100[0] = 0.0;
  local_107 = param_4;
  local_106 = param_3;
  local_d0 = param_2;
  local_a8 = param_1;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (param_5,local_100,
             ((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed) * 4);
  local_108 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (param_6,&local_108,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  local_b8 = 0.0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (param_7,&local_b8,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_104 = 0;
  if ((uVar15 != 0) &&
     (pFVar7 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
    uVar14 = 1;
    local_104 = 1;
    bVar19 = uVar15 == 1;
    if ((int)uVar15 < 2) goto LAB_14c6be1ec;
    do {
      lVar18 = *(longlong *)(pFVar7 + (ulonglong)(uVar14 >> 9) * 8);
      if ((*(short *)(lVar18 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
         (local_104 = uVar14, *(short *)(lVar18 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
      uVar14 = uVar14 + 1;
      local_104 = uVar14;
    } while ((int)uVar14 < (int)uVar15);
  }
  bVar19 = local_104 == uVar15;
LAB_14c6be1ec:
  local_f4 = uVar15;
  if (!bVar19) {
LAB_14c6be220:
    do {
      uVar6 = local_104;
      pFVar7 = (param_2->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar14 = local_104 * 3;
      local_c8[0] = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar14 >> 9) * 8) +
                             (ulonglong)(uVar14 & 0x1ff) * 4);
      if (-1 < (int)local_c8[0]) {
        lVar18 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_104 >> 9) * 8);
        local_a0 = *(undefined8 *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 0xc);
        local_98 = *(undefined4 *)(lVar18 + 8 + (ulonglong)(local_104 & 0x1ff) * 0xc);
        local_c8[1] = *(undefined4 *)
                       (*(longlong *)(pFVar7 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
        local_c8[2] = *(undefined4 *)
                       (*(longlong *)(pFVar7 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                       (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
        dVar10 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,local_104);
        local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_e8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if (local_107 != '\0') {
          pTVar13 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(param_1,local_90,uVar6);
          local_e8._0_16_ = *(undefined1 (*) [16])&pTVar13->field0_0x0;
          local_e8._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
        }
        pTVar11 = local_b0;
        if (param_3 != false) {
          auVar9._8_4_ = SUB84(local_e8._s_0.Y * dVar10,0);
          auVar9._0_8_ = local_e8._s_0.X * dVar10;
          auVar9._12_4_ = (int)((ulonglong)(local_e8._s_0.Y * dVar10) >> 0x20);
          local_e8._0_16_ = auVar9;
          local_e8._s_0.Z = local_e8._s_0.Z * dVar10;
        }
        pTVar16 = &local_e8;
        lVar18 = 0;
        do {
          pFVar7 = (param_2->Elements).Blocks.AllocatorInstance.Data;
          uVar14 = *(uint *)((longlong)local_c8 + lVar18);
          uVar6 = *(uint *)((longlong)&local_a0 + lVar18);
          lVar17 = (longlong)(int)uVar6;
          dVar10 = (pTVar16->_s_0).X;
          uVar12 = uVar14 * 4;
          uVar15 = uVar6 * 4;
          fVar1 = *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar12 & 0x1ff) * 4);
          fVar2 = *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
          fVar3 = *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
          local_f8 = ~uVar6 >> 0x1f;
          fVar4 = *(float *)(*(longlong *)(pFVar7 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
                            (ulonglong)(uVar12 + 3 & 0x1ff) * 4);
          uVar14 = 0;
          if ((int)uVar6 < param_7->ArrayNum) {
            uVar14 = local_f8;
          }
          if ((uVar14 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (local_f0->AllocatorInstance).Data;
          dVar5 = (pTVar16->_s_0).X;
          *(double *)(pFVar7 + lVar17 * 8) = dVar10 + *(double *)(pFVar7 + lVar17 * 8);
          uVar14 = 0;
          if ((int)uVar15 < param_5->ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_5->AllocatorInstance).Data;
          uVar14 = uVar15 + 1;
          dVar10 = (pTVar16->_s_0).X;
          *(float *)(pFVar7 + (longlong)(int)uVar15 * 4) =
               (float)((double)fVar1 * dVar5) + *(float *)(pFVar7 + (longlong)(int)uVar15 * 4);
          uVar12 = 0;
          if ((int)uVar14 < param_5->ArrayNum) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_5->AllocatorInstance).Data;
          uVar12 = uVar15 + 2;
          dVar5 = (pTVar16->_s_0).X;
          *(float *)(pFVar7 + (longlong)(int)uVar14 * 4) =
               (float)((double)fVar2 * dVar10) + *(float *)(pFVar7 + (longlong)(int)uVar14 * 4);
          uVar14 = 0;
          if ((int)uVar12 < param_5->ArrayNum) {
            uVar14 = ~uVar12 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_5->AllocatorInstance).Data;
          uVar15 = uVar15 + 3;
          dVar10 = (pTVar16->_s_0).X;
          *(float *)(pFVar7 + (longlong)(int)uVar12 * 4) =
               (float)((double)fVar3 * dVar5) + *(float *)(pFVar7 + (longlong)(int)uVar12 * 4);
          uVar14 = 0;
          if ((int)uVar15 < param_5->ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_5->AllocatorInstance).Data;
          *(float *)(pFVar7 + (longlong)(int)uVar15 * 4) =
               (float)((double)fVar4 * dVar10) + *(float *)(pFVar7 + (longlong)(int)uVar15 * 4);
          uVar15 = 0;
          if ((int)uVar6 < pTVar11->ArrayNum) {
            uVar15 = local_f8;
          }
          if ((uVar15 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar18 = lVar18 + 4;
          pTVar16 = (TVector<double>_u_0 *)&(pTVar16->_s_0).Y;
          (pTVar11->AllocatorInstance).Data[lVar17] = (FScriptContainerElement)0x1;
          param_1 = local_a8;
          param_7 = local_f0;
          param_2 = local_d0;
          uVar15 = local_f4;
          param_3 = (bool)local_106;
        } while (lVar18 < 0xc);
      }
      local_104 = local_104 + 1;
      if ((int)local_104 < (int)uVar15) {
        do {
          lVar18 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_104 >> 9) * 8);
          if ((*(short *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 2) != -1)) goto LAB_14c6be220;
          local_104 = local_104 + 1;
        } while ((int)local_104 < (int)uVar15);
      }
    } while (local_104 != uVar15);
  }
  return;
}

// AverageFullMesh<double,3> @ 14c6be6f0

void __cdecl
FAverageOverlayToVerticesLocals::AverageFullMesh<double,3>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<double,3> *param_2,bool param_3,bool param_4,
          TArray<double,TSizedDefaultAllocator<32>_> *param_5,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_6,
          TArray<double,TSizedDefaultAllocator<32>_> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  uint uVar15;
  TVector<double>_u_0 *pTVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  bool local_108;
  char local_107;
  char local_106;
  uint local_104;
  uint local_100;
  uint local_fc;
  TArray<double,TSizedDefaultAllocator<32>_> *local_f8;
  TVector<double>_u_0 local_f0;
  TDynamicMeshOverlay<double,3> *local_d8;
  int local_d0 [4];
  double local_c0;
  double local_b8;
  TArray<double,TSizedDefaultAllocator<32>_> *local_b0;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_a8;
  FDynamicMesh3 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  TVector<double> local_88 [4];
  
  local_c0 = 0.0;
  local_b0 = param_5;
  local_a8 = param_6;
  local_f8 = param_7;
  local_107 = param_3;
  local_106 = param_4;
  local_d8 = param_2;
  local_a0 = param_1;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (param_5,&local_c0,
             ((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  local_108 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (param_6,&local_108,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  local_b8 = 0.0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (param_7,&local_b8,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_104 = 0;
  if ((uVar15 != 0) &&
     (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar14 = 1;
    local_104 = 1;
    bVar19 = uVar15 == 1;
    if ((int)uVar15 < 2) goto LAB_14c6be82c;
    do {
      lVar18 = *(longlong *)(pFVar5 + (ulonglong)(uVar14 >> 9) * 8);
      if ((*(short *)(lVar18 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
         (local_104 = uVar14, *(short *)(lVar18 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
      uVar14 = uVar14 + 1;
      local_104 = uVar14;
    } while ((int)uVar14 < (int)uVar15);
  }
  bVar19 = local_104 == uVar15;
LAB_14c6be82c:
  local_fc = uVar15;
  if (!bVar19) {
LAB_14c6be850:
    do {
      uVar11 = local_104;
      pFVar5 = (param_2->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar14 = local_104 * 3;
      local_d0[0] = *(int *)(*(longlong *)(pFVar5 + (ulonglong)(uVar14 >> 9) * 8) +
                            (ulonglong)(uVar14 & 0x1ff) * 4);
      if (-1 < local_d0[0]) {
        lVar18 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_104 >> 9) * 8);
        local_98 = *(undefined8 *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 0xc);
        local_90 = *(undefined4 *)(lVar18 + 8 + (ulonglong)(local_104 & 0x1ff) * 0xc);
        local_d0[1] = *(undefined4 *)
                       (*(longlong *)(pFVar5 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
        local_d0[2] = *(undefined4 *)
                       (*(longlong *)(pFVar5 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                       (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
        dVar8 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,local_104);
        local_f0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_f0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_f0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        if (param_4 != false) {
          pTVar13 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(param_1,local_88,uVar11);
          local_f0._0_16_ = *(undefined1 (*) [16])&pTVar13->field0_0x0;
          local_f0._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
        }
        pTVar9 = local_b0;
        if (param_3 != false) {
          auVar7._8_4_ = SUB84(local_f0._s_0.Y * dVar8,0);
          auVar7._0_8_ = local_f0._s_0.X * dVar8;
          auVar7._12_4_ = (int)((ulonglong)(local_f0._s_0.Y * dVar8) >> 0x20);
          local_f0._0_16_ = auVar7;
          local_f0._s_0.Z = local_f0._s_0.Z * dVar8;
        }
        pTVar16 = &local_f0;
        lVar18 = 0;
        do {
          pFVar5 = (param_2->Elements).Blocks.AllocatorInstance.Data;
          uVar14 = *(uint *)((longlong)&local_98 + lVar18);
          lVar17 = (longlong)(int)uVar14;
          dVar8 = (pTVar16->_s_0).X;
          uVar11 = *(int *)((longlong)local_d0 + lVar18) * 3;
          uVar15 = uVar14 * 3;
          dVar1 = *(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(uVar11 >> 9) * 8) +
                   (ulonglong)(uVar11 & 0x1ff) * 8);
          dVar2 = *(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                   (ulonglong)(uVar11 + 1 & 0x1ff) * 8);
          local_100 = ~uVar14 >> 0x1f;
          dVar3 = *(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                   (ulonglong)(uVar11 + 2 & 0x1ff) * 8);
          uVar11 = 0;
          if ((int)uVar14 < param_7->ArrayNum) {
            uVar11 = local_100;
          }
          if ((uVar11 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          dVar4 = (pTVar16->_s_0).X;
          pFVar5 = (local_f8->AllocatorInstance).Data;
          *(double *)(pFVar5 + lVar17 * 8) = dVar8 + *(double *)(pFVar5 + lVar17 * 8);
          uVar11 = 0;
          if ((int)uVar15 < pTVar9->ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (pTVar9->AllocatorInstance).Data;
          uVar11 = uVar15 + 1;
          dVar8 = (pTVar16->_s_0).X;
          *(double *)(pFVar5 + (longlong)(int)uVar15 * 8) =
               dVar1 * dVar4 + *(double *)(pFVar5 + (longlong)(int)uVar15 * 8);
          uVar12 = 0;
          if ((int)uVar11 < pTVar9->ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (pTVar9->AllocatorInstance).Data;
          dVar1 = (pTVar16->_s_0).X;
          uVar15 = uVar15 + 2;
          *(double *)(pFVar5 + (longlong)(int)uVar11 * 8) =
               dVar2 * dVar8 + *(double *)(pFVar5 + (longlong)(int)uVar11 * 8);
          uVar11 = 0;
          if ((int)uVar15 < pTVar9->ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar10 = local_a8;
          pFVar5 = (pTVar9->AllocatorInstance).Data;
          *(double *)(pFVar5 + (longlong)(int)uVar15 * 8) =
               dVar3 * dVar1 + *(double *)(pFVar5 + (longlong)(int)uVar15 * 8);
          uVar15 = 0;
          if ((int)uVar14 < local_a8->ArrayNum) {
            uVar15 = local_100;
          }
          if ((uVar15 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar18 = lVar18 + 4;
          pTVar16 = (TVector<double>_u_0 *)&(pTVar16->_s_0).Y;
          (pTVar10->AllocatorInstance).Data[lVar17] = (FScriptContainerElement)0x1;
          param_1 = local_a0;
          param_7 = local_f8;
          param_2 = local_d8;
          param_4 = (bool)local_106;
          uVar15 = local_fc;
          param_3 = (bool)local_107;
        } while (lVar18 < 0xc);
      }
      local_104 = local_104 + 1;
      if ((int)local_104 < (int)uVar15) {
        do {
          lVar18 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_104 >> 9) * 8);
          if ((*(short *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar18 + (ulonglong)(local_104 & 0x1ff) * 2) != -1)) goto LAB_14c6be850;
          local_104 = local_104 + 1;
        } while ((int)local_104 < (int)uVar15);
      }
    } while (local_104 != uVar15);
  }
  return;
}

// AverageSelection<float,1> @ 14c6bf310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAverageOverlayToVerticesLocals::AverageSelection<float,1>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<float,1> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4,bool param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_7,
          TArray<double,TSizedDefaultAllocator<32>_> *param_8)

{
  float fVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  TVector<double> *pTVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  TDynamicMeshOverlay<float,1> *pTVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  FDynamicMesh3 *this;
  int iVar23;
  TVector<double>_u_0 *pTVar24;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  bool local_1c7;
  char local_1c6;
  FScriptContainerElement *local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  float local_1b0 [2];
  TArray<double,TSizedDefaultAllocator<32>_> *local_1a8;
  TVector<double>_u_0 local_1a0;
  TDynamicMeshOverlay<float,1> *local_188;
  FDynamicMesh3 *local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  uint local_168 [4];
  undefined4 local_158;
  undefined1 local_154 [20];
  undefined8 local_140;
  undefined4 local_138;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  undefined4 *local_108;
  int *local_100;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  TVector<double> local_d8;
  undefined1 local_b8 [40];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  uVar12 = param_3->ArrayNum;
  uVar21 = 0;
  local_154._12_8_ = param_6;
  local_1a8 = param_8;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_b8._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_1c6 = param_4;
  local_188 = param_2;
  local_180 = param_1;
  if (uVar12 == 0) goto LAB_14c6bf53d;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_b8,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar18 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_158 = (undefined4)lVar22;
    uVar12 = 1 << ((byte)lVar22 & 0x1f);
  }
  if ((local_70 != 0) && ((int)uVar12 <= (int)local_70)) goto LAB_14c6bf53d;
  local_70 = uVar12;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
  }
  if (uVar12 != 0) {
    uVar17 = uVar12;
    if (uVar12 < 2) {
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        uVar17 = 0;
        goto LAB_14c6bf43d;
      }
    }
    else {
LAB_14c6bf43d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar17,4);
    }
    if (0 < (int)uVar12) {
      uVar19 = (ulonglong)uVar12;
      uVar18 = uVar21;
      do {
        FVar11.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_78.Data;
        }
        uVar8 = uVar18 & (longlong)(int)uVar12 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if ((local_70 != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_130,
                 (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b8), local_128.CurrentBitIndex < (local_128.Array)->NumBits)) {
    do {
      lVar20 = (longlong)local_128.CurrentBitIndex * 0x10;
      lVar22 = *local_130;
      uVar12 = local_70 - 1 & *(uint *)(lVar20 + lVar22);
      *(uint *)(lVar20 + 0xc + lVar22) = uVar12;
      FVar11.Data = local_80;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_78.Data;
      }
      uVar18 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar12;
      *(undefined4 *)(lVar20 + 8 + lVar22) = *(undefined4 *)(FVar11.Data + uVar18 * 4);
      *(int *)(FVar11.Data + uVar18 * 4) = local_128.CurrentBitIndex;
      local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
    } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
  }
LAB_14c6bf53d:
  pFVar13 = (param_3->AllocatorInstance).Data;
  iVar23 = param_3->ArrayNum;
  pFVar16 = pFVar13 + (longlong)iVar23 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar23) {
      local_1c8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1c8);
    }
    this = local_180;
    if (pFVar13 == pFVar16) break;
    local_1b8 = *(undefined4 *)pFVar13;
    local_108 = &local_1b8;
    local_1b4 = (int)uVar21;
    local_100 = &local_1b4;
    uVar21 = (ulonglong)(local_1b4 + 1);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_b8,(TPairInitializer<int_const_&,int_&&> *)local_154,(bool *)&local_108);
    pFVar13 = pFVar13 + 4;
  }
  pFVar16 = (FScriptContainerElement *)0x0;
  local_170 = (FScriptContainerElement *)0x0;
  iVar23 = 0;
  pTVar9 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVertexSelectedTriangles
                     (&local_f8,local_180,param_3);
  if (&local_e8 != pTVar9) {
    pFVar16 = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar23 = pTVar9->ArrayNum;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
    local_170 = pFVar16;
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  local_1b0[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(param_6,local_1b0,param_3->ArrayNum);
  local_1c7 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(param_7,&local_1c7,param_3->ArrayNum);
  local_154._4_8_ = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (local_1a8,(double *)(local_154 + 4),param_3->ArrayNum);
  pFVar13 = pFVar16 + (longlong)iVar23 * 4;
  FVar11.Data = local_78.Data;
  local_178 = pFVar16;
  local_1c0 = pFVar13;
  do {
    pTVar14 = local_188;
    if (local_178 == pFVar13) {
      if (local_170 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170);
        FVar11.Data = local_78.Data;
      }
      local_70 = 0;
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b8);
      return;
    }
    uVar12 = *(uint *)local_178;
    if ((-1 < (int)uVar12) &&
       (pFVar13 = local_1c0,
       (int)uVar12 <
       (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (this->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar21 = (ulonglong)(uVar12 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar12 >> 9) * 8) + uVar21 * 2) - 1U) < 0xfffe) {
        uVar15 = uVar12 * 3;
        pFVar16 = (local_188->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar17 = *(uint *)(*(longlong *)(pFVar16 + (ulonglong)(uVar15 >> 9) * 8) +
                          (ulonglong)(uVar15 & 0x1ff) * 4);
        if (-1 < (int)uVar17) {
          lVar22 = *(longlong *)
                    ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)
          ;
          local_140 = *(undefined8 *)(lVar22 + uVar21 * 0xc);
          local_138 = *(undefined4 *)(lVar22 + 8 + uVar21 * 0xc);
          local_168[1] = *(undefined4 *)
                          (*(longlong *)(pFVar16 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                          (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
          local_168[2] = *(undefined4 *)
                          (*(longlong *)(pFVar16 + (ulonglong)(uVar15 + 2 >> 9) * 8) +
                          (ulonglong)(uVar15 + 2 & 0x1ff) * 4);
          local_168[0] = uVar17;
          dVar5 = UE::Geometry::FDynamicMesh3::GetTriArea(this,uVar12);
          local_1a0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_1a0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_1a0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          if (param_5) {
            pTVar10 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(this,&local_d8,uVar12);
            local_1a0._0_16_ = *(undefined1 (*) [16])&pTVar10->field0_0x0;
            local_1a0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
          }
          uVar6 = local_154._12_8_;
          if (local_1c6 != '\0') {
            auVar4._8_4_ = SUB84(local_1a0._s_0.Y * dVar5,0);
            auVar4._0_8_ = local_1a0._s_0.X * dVar5;
            auVar4._12_4_ = (int)((ulonglong)(local_1a0._s_0.Y * dVar5) >> 0x20);
            local_1a0._0_16_ = auVar4;
            local_1a0._s_0.Z = local_1a0._s_0.Z * dVar5;
          }
          pTVar24 = &local_1a0;
          lVar22 = 0;
          pFVar16 = (FScriptContainerElement *)local_b8._0_8_;
          FVar11.Data = local_78.Data;
LAB_14c6bf7e4:
          uVar12 = *(uint *)((longlong)&local_140 + lVar22);
          if (local_b8._8_4_ != local_84) {
            pFVar13 = local_80;
            if (FVar11.Data != (FScriptContainerElement *)0x0) {
              pFVar13 = FVar11.Data;
            }
            uVar21 = (ulonglong)(local_70 - 1 & uVar12);
            for (iVar23 = *(int *)(pFVar13 + uVar21 * 4); iVar23 != -1;
                iVar23 = *(int *)(pFVar16 + (longlong)iVar23 * 0x10 + 8)) {
              if (*(uint *)(pFVar16 + (longlong)iVar23 * 0x10) == uVar12) {
                fVar1 = *(float *)(*(longlong *)
                                    ((pTVar14->Elements).Blocks.AllocatorInstance.Data +
                                    (ulonglong)(*(uint *)((longlong)local_168 + lVar22) >> 9) * 8) +
                                  (ulonglong)(*(uint *)((longlong)local_168 + lVar22) & 0x1ff) * 4);
                pFVar13 = local_80;
                if (FVar11.Data != (FScriptContainerElement *)0x0) {
                  pFVar13 = FVar11.Data;
                }
                uVar17 = *(uint *)(pFVar13 + uVar21 * 4);
                goto joined_r0x00014c6bf86a;
              }
            }
          }
          goto LAB_14c6bf9d1;
        }
      }
    }
LAB_14c6bf9f7:
    local_178 = local_178 + 4;
  } while( true );
joined_r0x00014c6bf86a:
  if (uVar17 == 0xffffffff) goto LAB_14c6bf88b;
  pFVar13 = pFVar16 + (longlong)(int)uVar17 * 0x10;
  if (*(uint *)pFVar13 == uVar12) {
    if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_14c6bf8b3;
    goto LAB_14c6bf88d;
  }
  uVar17 = *(uint *)(pFVar13 + 8);
  goto joined_r0x00014c6bf86a;
LAB_14c6bf88b:
  pFVar13 = (FScriptContainerElement *)0x0;
LAB_14c6bf88d:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14c6bf8b3:
  uVar12 = *(uint *)(pFVar13 + 4);
  lVar20 = (longlong)(int)uVar12;
  dVar5 = (pTVar24->_s_0).X;
  uVar15 = ~uVar12 >> 0x1f;
  uVar17 = 0;
  if ((int)uVar12 < local_1a8->ArrayNum) {
    uVar17 = uVar15;
  }
  if ((uVar17 == 0) &&
     (local_1d8 = lVar20, local_1d0 = (longlong)local_1a8->ArrayNum,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar16 = (local_1a8->AllocatorInstance).Data;
  dVar2 = (pTVar24->_s_0).X;
  *(double *)(pFVar16 + lVar20 * 8) = dVar5 + *(double *)(pFVar16 + lVar20 * 8);
  iVar23 = *(int *)(uVar6 + 8);
  uVar17 = 0;
  if ((int)uVar12 < iVar23) {
    uVar17 = uVar15;
  }
  if ((uVar17 == 0) &&
     (local_1d8 = lVar20, local_1d0 = (longlong)iVar23,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar16 = ((ForAnyElementType *)uVar6)->Data;
  *(float *)(pFVar16 + lVar20 * 4) =
       (float)((double)fVar1 * dVar2) + *(float *)(pFVar16 + lVar20 * 4);
  uVar17 = 0;
  if ((int)uVar12 < param_7->ArrayNum) {
    uVar17 = uVar15;
  }
  if ((uVar17 == 0) &&
     (local_1d8 = lVar20, local_1d0 = (longlong)param_7->ArrayNum,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_7->AllocatorInstance).Data[lVar20] = (FScriptContainerElement)0x1;
  pTVar14 = local_188;
  pFVar16 = (FScriptContainerElement *)local_b8._0_8_;
  FVar11.Data = local_78.Data;
LAB_14c6bf9d1:
  lVar22 = lVar22 + 4;
  pTVar24 = (TVector<double>_u_0 *)&(pTVar24->_s_0).Y;
  pFVar13 = local_1c0;
  this = local_180;
  if (0xb < lVar22) goto LAB_14c6bf9f7;
  goto LAB_14c6bf7e4;
}

// AverageSelection<float,2> @ 14c6bfaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAverageOverlayToVerticesLocals::AverageSelection<float,2>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<float,2> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4,bool param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_7,
          TArray<double,TSizedDefaultAllocator<32>_> *param_8)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  TVector<double> *pTVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  TVector<double>_u_0 *pTVar22;
  TDynamicMeshOverlay<float,2> *pTVar23;
  int iVar24;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar25;
  longlong lVar26;
  FDynamicMesh3 *this;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  bool local_1d7;
  char local_1d6;
  FScriptContainerElement *local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  float local_1c0 [2];
  TArray<double,TSizedDefaultAllocator<32>_> *local_1b8;
  TDynamicMeshOverlay<float,2> *local_1b0;
  TVector<double>_u_0 local_1a8;
  FDynamicMesh3 *local_190;
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  uint local_178 [4];
  undefined4 local_168;
  undefined1 local_164 [20];
  undefined8 local_150;
  undefined4 local_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  undefined4 *local_118;
  int *local_110;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TVector<double> local_e8;
  undefined1 local_c8 [40];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_208;
  uVar13 = param_3->ArrayNum;
  uVar14 = 0;
  local_164._12_8_ = param_7;
  local_1b8 = param_8;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_c8._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = -1;
  local_94 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_1d6 = param_4;
  local_1b0 = param_2;
  local_190 = param_1;
  if (uVar13 == 0) goto LAB_14c6bfccd;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_c8,uVar13);
  if (uVar13 < 4) {
    uVar13 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_168 = (undefined4)lVar26;
    uVar13 = 1 << ((byte)lVar26 & 0x1f);
  }
  if ((local_80 != 0) && ((int)uVar13 <= (int)local_80)) goto LAB_14c6bfccd;
  local_80 = uVar13;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
  }
  if (uVar13 != 0) {
    uVar18 = uVar13;
    if (uVar13 < 2) {
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_14c6bfbcd;
      }
    }
    else {
LAB_14c6bfbcd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar18,4);
    }
    if (0 < (int)uVar13) {
      uVar20 = (ulonglong)uVar13;
      uVar19 = uVar14;
      do {
        FVar12.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_88.Data;
        }
        uVar9 = (longlong)(int)uVar13 - 1U & uVar19;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if ((local_80 != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_140,
                 (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8), local_138.CurrentBitIndex < (local_138.Array)->NumBits)) {
    do {
      lVar21 = (longlong)local_138.CurrentBitIndex * 0x10;
      lVar26 = *local_140;
      uVar13 = local_80 - 1 & *(uint *)(lVar21 + lVar26);
      *(uint *)(lVar21 + 0xc + lVar26) = uVar13;
      FVar12.Data = local_90;
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FVar12.Data = local_88.Data;
      }
      uVar19 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar13;
      *(undefined4 *)(lVar21 + 8 + lVar26) = *(undefined4 *)(FVar12.Data + uVar19 * 4);
      *(int *)(FVar12.Data + uVar19 * 4) = local_138.CurrentBitIndex;
      local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
    } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
  }
LAB_14c6bfccd:
  pFVar15 = (param_3->AllocatorInstance).Data;
  iVar24 = param_3->ArrayNum;
  pFVar17 = pFVar15 + (longlong)iVar24 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar24) {
      local_1d8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1d8);
    }
    this = local_190;
    if (pFVar15 == pFVar17) break;
    local_1c8 = *(undefined4 *)pFVar15;
    local_118 = &local_1c8;
    local_1c4 = (int)uVar14;
    local_110 = &local_1c4;
    uVar14 = (ulonglong)(local_1c4 + 1);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_c8,(TPairInitializer<int_const_&,int_&&> *)local_164,(bool *)&local_118);
    pFVar15 = pFVar15 + 4;
  }
  iVar24 = 0;
  pFVar17 = (FScriptContainerElement *)0x0;
  local_180 = (FScriptContainerElement *)0x0;
  pTVar10 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVertexSelectedTriangles
                      (&local_108,local_190,param_3);
  if (&local_f8 != pTVar10) {
    pFVar17 = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar24 = pTVar10->ArrayNum;
    pTVar10->ArrayNum = 0;
    pTVar10->ArrayMax = 0;
    local_180 = pFVar17;
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  local_1c0[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(param_6,local_1c0,param_3->ArrayNum * 2);
  local_1d7 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(param_7,&local_1d7,param_3->ArrayNum);
  pTVar25 = local_1b8;
  local_164._4_8_ = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (local_1b8,(double *)(local_164 + 4),param_3->ArrayNum);
  pFVar15 = pFVar17 + (longlong)iVar24 * 4;
  local_188 = pFVar17;
  FVar12.Data = local_88.Data;
  pTVar23 = local_1b0;
  local_1d0 = pFVar15;
  do {
    if (local_188 == pFVar15) {
      if (local_180 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180);
        FVar12.Data = local_88.Data;
      }
      local_80 = 0;
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_c8);
      return;
    }
    uVar13 = *(uint *)local_188;
    if ((-1 < (int)uVar13) &&
       (pFVar15 = local_1d0,
       (int)uVar13 <
       (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (this->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar14 = (ulonglong)(uVar13 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar13 >> 9) * 8) + uVar14 * 2) - 1U) < 0xfffe) {
        pFVar17 = (pTVar23->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar16 = uVar13 * 3;
        uVar18 = *(uint *)(*(longlong *)(pFVar17 + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
        if (-1 < (int)uVar18) {
          lVar26 = *(longlong *)
                    ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8)
          ;
          local_150 = *(undefined8 *)(lVar26 + uVar14 * 0xc);
          local_148 = *(undefined4 *)(lVar26 + 8 + uVar14 * 0xc);
          local_178[1] = *(undefined4 *)
                          (*(longlong *)(pFVar17 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                          (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
          local_178[2] = *(undefined4 *)
                          (*(longlong *)(pFVar17 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                          (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
          local_178[0] = uVar18;
          dVar6 = UE::Geometry::FDynamicMesh3::GetTriArea(this,uVar13);
          local_1a8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_1a8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_1a8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          if (param_5) {
            pTVar11 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(this,&local_e8,uVar13);
            local_1a8._0_16_ = *(undefined1 (*) [16])&pTVar11->field0_0x0;
            local_1a8._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
          }
          if (local_1d6 != '\0') {
            auVar5._8_4_ = SUB84(local_1a8._s_0.Y * dVar6,0);
            auVar5._0_8_ = local_1a8._s_0.X * dVar6;
            auVar5._12_4_ = (int)((ulonglong)(local_1a8._s_0.Y * dVar6) >> 0x20);
            local_1a8._0_16_ = auVar5;
            local_1a8._s_0.Z = local_1a8._s_0.Z * dVar6;
          }
          pTVar22 = &local_1a8;
          lVar26 = 0;
          FVar12.Data = local_88.Data;
          pFVar17 = (FScriptContainerElement *)local_c8._0_8_;
LAB_14c6bff80:
          uVar13 = *(uint *)((longlong)&local_150 + lVar26);
          if (local_c8._8_4_ != local_94) {
            pFVar15 = local_90;
            if (FVar12.Data != (FScriptContainerElement *)0x0) {
              pFVar15 = FVar12.Data;
            }
            uVar14 = (ulonglong)(local_80 - 1 & uVar13);
            for (iVar24 = *(int *)(pFVar15 + uVar14 * 4); iVar24 != -1;
                iVar24 = *(int *)(pFVar17 + (longlong)iVar24 * 0x10 + 8)) {
              if (*(uint *)(pFVar17 + (longlong)iVar24 * 0x10) == uVar13) {
                uVar18 = *(uint *)((longlong)local_178 + lVar26);
                pFVar15 = (local_1b0->Elements).Blocks.AllocatorInstance.Data;
                fVar1 = *(float *)(*(longlong *)
                                    (pFVar15 + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
                                  (ulonglong)(uVar18 * 2 & 0x1ff) * 4);
                fVar2 = *(float *)(*(longlong *)
                                    (pFVar15 + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
                                  (ulonglong)(uVar18 * 2 + 1 & 0x1ff) * 4);
                pFVar15 = local_90;
                if (FVar12.Data != (FScriptContainerElement *)0x0) {
                  pFVar15 = FVar12.Data;
                }
                uVar18 = *(uint *)(pFVar15 + uVar14 * 4);
                if (uVar18 == 0xffffffff) goto LAB_14c6c004b;
                goto LAB_14c6c0030;
              }
            }
          }
          goto LAB_14c6c020b;
        }
      }
    }
LAB_14c6c0236:
    local_188 = local_188 + 4;
  } while( true );
  while (uVar18 = *(uint *)(pFVar15 + 8), uVar18 != 0xffffffff) {
LAB_14c6c0030:
    pFVar15 = pFVar17 + (longlong)(int)uVar18 * 0x10;
    if (*(uint *)pFVar15 == uVar13) {
      if (pFVar15 != (FScriptContainerElement *)0x0) goto LAB_14c6c0073;
      goto LAB_14c6c004d;
    }
  }
LAB_14c6c004b:
  pFVar15 = (FScriptContainerElement *)0x0;
LAB_14c6c004d:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14c6c0073:
  uVar13 = *(uint *)(pFVar15 + 4);
  lVar21 = (longlong)(int)uVar13;
  dVar6 = (pTVar22->_s_0).X;
  uVar18 = uVar13 * 2;
  uVar16 = 0;
  if ((int)uVar13 < pTVar25->ArrayNum) {
    uVar16 = ~uVar13 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (local_1e8 = lVar21, local_1e0 = (longlong)pTVar25->ArrayNum,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar17 = (local_1b8->AllocatorInstance).Data;
  dVar3 = (pTVar22->_s_0).X;
  *(double *)(pFVar17 + lVar21 * 8) = dVar6 + *(double *)(pFVar17 + lVar21 * 8);
  uVar16 = 0;
  if ((int)uVar18 < param_6->ArrayNum) {
    uVar16 = ~uVar18 >> 0x1f;
  }
  if (uVar16 == 0) {
    local_1e8 = (longlong)(int)uVar18;
    local_1e0 = (longlong)param_6->ArrayNum;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar17 = (param_6->AllocatorInstance).Data;
  uVar16 = uVar18 + 1;
  dVar6 = (pTVar22->_s_0).X;
  *(float *)(pFVar17 + (longlong)(int)uVar18 * 4) =
       (float)((double)fVar1 * dVar3) + *(float *)(pFVar17 + (longlong)(int)uVar18 * 4);
  uVar18 = 0;
  if ((int)uVar16 < param_6->ArrayNum) {
    uVar18 = ~uVar16 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_1e8 = (longlong)(int)uVar16;
    local_1e0 = (longlong)param_6->ArrayNum;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = local_164._12_8_;
  pFVar17 = (param_6->AllocatorInstance).Data;
  *(float *)(pFVar17 + (longlong)(int)uVar16 * 4) =
       (float)((double)fVar2 * dVar6) + *(float *)(pFVar17 + (longlong)(int)uVar16 * 4);
  uVar18 = 0;
  if ((int)uVar13 < *(int *)(local_164._12_8_ + 8)) {
    uVar18 = ~uVar13 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (local_1e8 = lVar21, local_1e0 = (longlong)*(int *)(local_164._12_8_ + 8),
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((ForAnyElementType *)uVar7)->Data[lVar21] = (FScriptContainerElement)0x1;
  FVar12.Data = local_88.Data;
  pFVar17 = (FScriptContainerElement *)local_c8._0_8_;
  pTVar25 = local_1b8;
LAB_14c6c020b:
  lVar26 = lVar26 + 4;
  pTVar22 = (TVector<double>_u_0 *)&(pTVar22->_s_0).Y;
  pFVar15 = local_1d0;
  pTVar23 = local_1b0;
  this = local_190;
  if (0xb < lVar26) goto LAB_14c6c0236;
  goto LAB_14c6bff80;
}

// AverageSelection<float,3> @ 14c6c02e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAverageOverlayToVerticesLocals::AverageSelection<float,3>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<float,3> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4,bool param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_7,
          TArray<double,TSizedDefaultAllocator<32>_> *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  TVector<double> *pTVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  TDynamicMeshOverlay<float,3> *pTVar25;
  TVector<double>_u_0 *pTVar26;
  int iVar27;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar28;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar29;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  undefined1 local_1e8;
  bool local_1e7;
  char local_1e6;
  FScriptContainerElement *local_1e0;
  undefined4 local_1d8;
  int local_1d4;
  float local_1d0 [2];
  TArray<float,TSizedDefaultAllocator<32>_> *local_1c8;
  TArray<double,TSizedDefaultAllocator<32>_> *local_1c0;
  TDynamicMeshOverlay<float,3> *local_1b8;
  TVector<double>_u_0 local_1b0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  int local_188 [4];
  undefined4 local_178;
  undefined1 local_174 [20];
  FDynamicMesh3 *local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_140;
  undefined4 *local_120;
  int *local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  TVector<double> local_f0;
  undefined1 local_d8 [40];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_218;
  uVar16 = param_3->ArrayNum;
  uVar17 = 0;
  local_1c8 = param_6;
  local_174._12_8_ = param_7;
  local_1c0 = param_8;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_d8._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_1e6 = param_4;
  local_1b8 = param_2;
  local_160 = param_1;
  if (uVar16 == 0) goto LAB_14c6c050d;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_d8,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar21 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_178 = (undefined4)lVar24;
    uVar16 = 1 << ((byte)lVar24 & 0x1f);
  }
  if ((local_90 != 0) && ((int)uVar16 <= (int)local_90)) goto LAB_14c6c050d;
  local_90 = uVar16;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
  }
  if (uVar16 != 0) {
    uVar19 = uVar16;
    if (uVar16 < 2) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14c6c0414;
      }
    }
    else {
LAB_14c6c0414:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar19,4);
    }
    if (0 < (int)uVar16) {
      uVar22 = (ulonglong)uVar16;
      uVar21 = uVar17;
      do {
        FVar15.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_98.Data;
        }
        uVar12 = (longlong)(int)uVar16 - 1U & uVar21;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(FVar15.Data + uVar12 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if ((local_90 != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_148,
                 (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8), local_140.CurrentBitIndex < (local_140.Array)->NumBits)) {
    do {
      lVar23 = (longlong)local_140.CurrentBitIndex * 0x10;
      lVar24 = *local_148;
      uVar16 = local_90 - 1 & *(uint *)(lVar23 + lVar24);
      *(uint *)(lVar23 + 0xc + lVar24) = uVar16;
      FVar15.Data = local_a0;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_98.Data;
      }
      uVar21 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar16;
      *(undefined4 *)(lVar23 + 8 + lVar24) = *(undefined4 *)(FVar15.Data + uVar21 * 4);
      *(int *)(FVar15.Data + uVar21 * 4) = local_140.CurrentBitIndex;
      local_140.UnvisitedBitMask = local_140.UnvisitedBitMask & ~local_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_140);
    } while (local_140.CurrentBitIndex < (local_140.Array)->NumBits);
  }
LAB_14c6c050d:
  pFVar18 = (param_3->AllocatorInstance).Data;
  iVar27 = param_3->ArrayNum;
  pFVar20 = pFVar18 + (longlong)iVar27 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar27) {
      local_1e8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1e8);
    }
    if (pFVar18 == pFVar20) break;
    local_1d8 = *(undefined4 *)pFVar18;
    local_120 = &local_1d8;
    local_1d4 = (int)uVar17;
    local_118 = &local_1d4;
    uVar17 = (ulonglong)(local_1d4 + 1);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_d8,(TPairInitializer<int_const_&,int_&&> *)local_174,(bool *)&local_120);
    pFVar18 = pFVar18 + 4;
  }
  iVar27 = 0;
  pFVar20 = (FScriptContainerElement *)0x0;
  local_190 = (FScriptContainerElement *)0x0;
  pTVar13 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVertexSelectedTriangles
                      (&local_110,param_1,param_3);
  if (&local_100 != pTVar13) {
    pFVar20 = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar27 = pTVar13->ArrayNum;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
    local_190 = pFVar20;
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  pTVar28 = local_1c8;
  local_1d0[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(local_1c8,local_1d0,param_3->ArrayNum * 3);
  local_1e7 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(param_7,&local_1e7,param_3->ArrayNum);
  pTVar29 = local_1c0;
  local_174._4_8_ = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (local_1c0,(double *)(local_174 + 4),param_3->ArrayNum);
  pFVar18 = pFVar20 + (longlong)iVar27 * 4;
  local_198 = pFVar20;
  FVar15.Data = local_98.Data;
  pTVar25 = local_1b8;
  local_1e0 = pFVar18;
  do {
    if (local_198 == pFVar18) {
      if (local_190 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190);
        FVar15.Data = local_98.Data;
      }
      local_90 = 0;
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      return;
    }
    uVar16 = *(uint *)local_198;
    if ((-1 < (int)uVar16) &&
       (pFVar18 = local_1e0,
       (int)uVar16 <
       (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar17 = (ulonglong)(uVar16 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar16 >> 9) * 8) + uVar17 * 2) - 1U) < 0xfffe) {
        pFVar20 = (pTVar25->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar19 = uVar16 * 3;
        iVar27 = *(int *)(*(longlong *)(pFVar20 + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 4);
        if (-1 < iVar27) {
          lVar24 = *(longlong *)
                    ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8);
          local_158 = *(undefined8 *)(lVar24 + uVar17 * 0xc);
          local_150 = *(undefined4 *)(lVar24 + 8 + uVar17 * 0xc);
          local_188[1] = *(undefined4 *)
                          (*(longlong *)(pFVar20 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                          (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
          local_188[2] = *(undefined4 *)
                          (*(longlong *)(pFVar20 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                          (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
          local_188[0] = iVar27;
          dVar7 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,uVar16);
          local_1b0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_1b0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_1b0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          if (param_5) {
            pTVar14 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(param_1,&local_f0,uVar16);
            local_1b0._0_16_ = *(undefined1 (*) [16])&pTVar14->field0_0x0;
            local_1b0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
          }
          if (local_1e6 != '\0') {
            auVar6._8_4_ = SUB84(local_1b0._s_0.Y * dVar7,0);
            auVar6._0_8_ = local_1b0._s_0.X * dVar7;
            auVar6._12_4_ = (int)((ulonglong)(local_1b0._s_0.Y * dVar7) >> 0x20);
            local_1b0._0_16_ = auVar6;
            local_1b0._s_0.Z = local_1b0._s_0.Z * dVar7;
          }
          pTVar26 = &local_1b0;
          lVar24 = 0;
          pFVar20 = (FScriptContainerElement *)local_d8._0_8_;
          FVar15.Data = local_98.Data;
LAB_14c6c07c0:
          uVar16 = *(uint *)((longlong)&local_158 + lVar24);
          if (local_d8._8_4_ != local_a4) {
            pFVar18 = local_a0;
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              pFVar18 = FVar15.Data;
            }
            uVar17 = (ulonglong)(local_90 - 1 & uVar16);
            for (iVar27 = *(int *)(pFVar18 + uVar17 * 4); iVar27 != -1;
                iVar27 = *(int *)(pFVar20 + (longlong)iVar27 * 0x10 + 8)) {
              if (*(uint *)(pFVar20 + (longlong)iVar27 * 0x10) == uVar16) {
                uVar19 = *(int *)((longlong)local_188 + lVar24) * 3;
                pFVar18 = (local_1b8->Elements).Blocks.AllocatorInstance.Data;
                fVar1 = *(float *)(*(longlong *)(pFVar18 + (ulonglong)(uVar19 >> 9) * 8) +
                                  (ulonglong)(uVar19 & 0x1ff) * 4);
                fVar2 = *(float *)(*(longlong *)(pFVar18 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                                  (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
                fVar3 = *(float *)(*(longlong *)(pFVar18 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                                  (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
                pFVar18 = local_a0;
                if (FVar15.Data != (FScriptContainerElement *)0x0) {
                  pFVar18 = FVar15.Data;
                }
                uVar19 = *(uint *)(pFVar18 + uVar17 * 4);
                if (uVar19 == 0xffffffff) goto LAB_14c6c089b;
                goto LAB_14c6c0880;
              }
            }
          }
          goto LAB_14c6c0ad5;
        }
      }
    }
LAB_14c6c0aff:
    local_198 = local_198 + 4;
  } while( true );
  while (uVar19 = *(uint *)(pFVar18 + 8), uVar19 != 0xffffffff) {
LAB_14c6c0880:
    pFVar18 = pFVar20 + (longlong)(int)uVar19 * 0x10;
    if (*(uint *)pFVar18 == uVar16) {
      if (pFVar18 != (FScriptContainerElement *)0x0) goto LAB_14c6c08c3;
      goto LAB_14c6c089d;
    }
  }
LAB_14c6c089b:
  pFVar18 = (FScriptContainerElement *)0x0;
LAB_14c6c089d:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar9) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14c6c08c3:
  uVar16 = *(uint *)(pFVar18 + 4);
  lVar23 = (longlong)(int)uVar16;
  dVar7 = (pTVar26->_s_0).X;
  uVar19 = uVar16 * 3;
  uVar10 = 0;
  if ((int)uVar16 < pTVar29->ArrayNum) {
    uVar10 = ~uVar16 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_1f8 = lVar23, local_1f0 = (longlong)pTVar29->ArrayNum,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar20 = (local_1c0->AllocatorInstance).Data;
  dVar4 = (pTVar26->_s_0).X;
  *(double *)(pFVar20 + lVar23 * 8) = dVar7 + *(double *)(pFVar20 + lVar23 * 8);
  uVar10 = 0;
  if ((int)uVar19 < pTVar28->ArrayNum) {
    uVar10 = ~uVar19 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_1f8 = (longlong)(int)uVar19;
    local_1f0 = (longlong)pTVar28->ArrayNum;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar20 = (pTVar28->AllocatorInstance).Data;
  uVar10 = uVar19 + 1;
  dVar7 = (pTVar26->_s_0).X;
  *(float *)(pFVar20 + (longlong)(int)uVar19 * 4) =
       (float)((double)fVar1 * dVar4) + *(float *)(pFVar20 + (longlong)(int)uVar19 * 4);
  uVar11 = 0;
  if ((int)uVar10 < local_1c8->ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    local_1f8 = (longlong)(int)uVar10;
    local_1f0 = (longlong)local_1c8->ArrayNum;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar28 = local_1c8;
  uVar19 = uVar19 + 2;
  pFVar20 = (local_1c8->AllocatorInstance).Data;
  dVar4 = (pTVar26->_s_0).X;
  *(float *)(pFVar20 + (longlong)(int)uVar10 * 4) =
       (float)((double)fVar2 * dVar7) + *(float *)(pFVar20 + (longlong)(int)uVar10 * 4);
  uVar10 = 0;
  if ((int)uVar19 < local_1c8->ArrayNum) {
    uVar10 = ~uVar19 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_1f8 = (longlong)(int)uVar19;
    local_1f0 = (longlong)local_1c8->ArrayNum;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar8 = local_174._12_8_;
  pFVar20 = (pTVar28->AllocatorInstance).Data;
  *(float *)(pFVar20 + (longlong)(int)uVar19 * 4) =
       (float)((double)fVar3 * dVar4) + *(float *)(pFVar20 + (longlong)(int)uVar19 * 4);
  uVar19 = 0;
  if ((int)uVar16 < *(int *)(local_174._12_8_ + 8)) {
    uVar19 = ~uVar16 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (local_1f8 = lVar23, local_1f0 = (longlong)*(int *)(local_174._12_8_ + 8),
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ((ForAnyElementType *)uVar8)->Data[lVar23] = (FScriptContainerElement)0x1;
  pFVar20 = (FScriptContainerElement *)local_d8._0_8_;
  FVar15.Data = local_98.Data;
  pTVar29 = local_1c0;
LAB_14c6c0ad5:
  lVar24 = lVar24 + 4;
  pTVar26 = (TVector<double>_u_0 *)&(pTVar26->_s_0).Y;
  pFVar18 = local_1e0;
  pTVar25 = local_1b8;
  param_1 = local_160;
  if (0xb < lVar24) goto LAB_14c6c0aff;
  goto LAB_14c6c07c0;
}

// AverageSelection<float,4> @ 14c6c0bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAverageOverlayToVerticesLocals::AverageSelection<float,4>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<float,4> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4,bool param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_7,
          TArray<double,TSizedDefaultAllocator<32>_> *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  TVector<double> *pTVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  TVector<double>_u_0 *pTVar27;
  longlong lVar28;
  FDynamicMesh3 *this;
  TDynamicMeshOverlay<float,4> *pTVar29;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8;
  bool local_1f7;
  char local_1f6;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1f0;
  FScriptContainerElement *local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  float local_1d8 [2];
  TVector<double>_u_0 local_1d0;
  TArray<double,TSizedDefaultAllocator<32>_> *local_1b8;
  TDynamicMeshOverlay<float,4> *local_1b0;
  FDynamicMesh3 *local_1a8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  uint local_190 [4];
  undefined4 local_180;
  undefined1 local_17c [20];
  undefined8 local_168;
  undefined4 local_160;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  undefined4 *local_130;
  int *local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  TVector<double> local_100;
  undefined1 local_e8 [40];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_228;
  uVar18 = param_3->ArrayNum;
  uVar19 = 0;
  local_1f0 = param_6;
  local_17c._12_8_ = param_7;
  local_1b8 = param_8;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_1f6 = param_4;
  local_1b0 = param_2;
  local_1a8 = param_1;
  if (uVar18 == 0) goto LAB_14c6c0ddd;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,uVar18);
  if (uVar18 < 4) {
    uVar18 = 1;
  }
  else {
    uVar24 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_180 = (undefined4)lVar28;
    uVar18 = 1 << ((byte)lVar28 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar18 <= (int)local_a0)) goto LAB_14c6c0ddd;
  local_a0 = uVar18;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar18 != 0) {
    uVar23 = uVar18;
    if (uVar18 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_14c6c0ce1;
      }
    }
    else {
LAB_14c6c0ce1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar23,4);
    }
    if (0 < (int)uVar18) {
      uVar25 = (ulonglong)uVar18;
      uVar24 = uVar19;
      do {
        FVar17.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_a8.Data;
        }
        uVar14 = uVar24 & (longlong)(int)uVar18 - 1U;
        uVar24 = uVar24 + 1;
        *(undefined4 *)(FVar17.Data + uVar14 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if ((local_a0 != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_158,
                 (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8), local_150.CurrentBitIndex < (local_150.Array)->NumBits)) {
    do {
      lVar26 = (longlong)local_150.CurrentBitIndex * 0x10;
      lVar28 = *local_158;
      uVar18 = local_a0 - 1 & *(uint *)(lVar26 + lVar28);
      *(uint *)(lVar26 + 0xc + lVar28) = uVar18;
      FVar17.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar17.Data = local_a8.Data;
      }
      uVar24 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar18;
      *(undefined4 *)(lVar26 + 8 + lVar28) = *(undefined4 *)(FVar17.Data + uVar24 * 4);
      *(int *)(FVar17.Data + uVar24 * 4) = local_150.CurrentBitIndex;
      local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
    } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
  }
LAB_14c6c0ddd:
  pFVar20 = (param_3->AllocatorInstance).Data;
  iVar21 = param_3->ArrayNum;
  pFVar22 = pFVar20 + (longlong)iVar21 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar21) {
      local_1f8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1f8);
    }
    this = local_1a8;
    if (pFVar20 == pFVar22) break;
    local_1e0 = *(undefined4 *)pFVar20;
    local_130 = &local_1e0;
    local_1dc = (int)uVar19;
    local_128 = &local_1dc;
    uVar19 = (ulonglong)(local_1dc + 1);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_e8,(TPairInitializer<int_const_&,int_&&> *)local_17c,(bool *)&local_130);
    pFVar20 = pFVar20 + 4;
  }
  pFVar22 = (FScriptContainerElement *)0x0;
  local_198 = (FScriptContainerElement *)0x0;
  iVar21 = 0;
  pTVar15 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVertexSelectedTriangles
                      (&local_120,local_1a8,param_3);
  if (&local_110 != pTVar15) {
    pFVar22 = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar21 = pTVar15->ArrayNum;
    pTVar15->ArrayNum = 0;
    pTVar15->ArrayMax = 0;
    local_198 = pFVar22;
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  local_1d8[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(param_6,local_1d8,param_3->ArrayNum << 2);
  local_1f7 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(param_7,&local_1f7,param_3->ArrayNum);
  local_17c._4_8_ = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (local_1b8,(double *)(local_17c + 4),param_3->ArrayNum);
  pFVar20 = pFVar22 + (longlong)iVar21 * 4;
  local_1a0 = pFVar22;
  FVar17.Data = local_a8.Data;
  local_1e8 = pFVar20;
  do {
    pTVar29 = local_1b0;
    if (local_1a0 == pFVar20) {
      if (local_198 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198);
        FVar17.Data = local_a8.Data;
      }
      local_a0 = 0;
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      return;
    }
    uVar18 = *(uint *)local_1a0;
    if ((-1 < (int)uVar18) &&
       (pFVar20 = local_1e8,
       (int)uVar18 <
       (int)((this->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (this->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar19 = (ulonglong)(uVar18 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar18 >> 9) * 8) + uVar19 * 2) - 1U) < 0xfffe) {
        uVar12 = uVar18 * 3;
        pFVar22 = (local_1b0->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar23 = *(uint *)(*(longlong *)(pFVar22 + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 4);
        if (-1 < (int)uVar23) {
          lVar28 = *(longlong *)
                    ((this->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
          ;
          local_168 = *(undefined8 *)(lVar28 + uVar19 * 0xc);
          local_160 = *(undefined4 *)(lVar28 + 8 + uVar19 * 0xc);
          local_190[1] = *(undefined4 *)
                          (*(longlong *)(pFVar22 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                          (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
          local_190[2] = *(undefined4 *)
                          (*(longlong *)(pFVar22 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                          (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
          local_190[0] = uVar23;
          dVar8 = UE::Geometry::FDynamicMesh3::GetTriArea(this,uVar18);
          local_1d0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_1d0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_1d0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          if (param_5) {
            pTVar16 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(this,&local_100,uVar18);
            local_1d0._0_16_ = *(undefined1 (*) [16])&pTVar16->field0_0x0;
            local_1d0._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
          }
          if (local_1f6 != '\0') {
            auVar7._8_4_ = SUB84(local_1d0._s_0.Y * dVar8,0);
            auVar7._0_8_ = local_1d0._s_0.X * dVar8;
            auVar7._12_4_ = (int)((ulonglong)(local_1d0._s_0.Y * dVar8) >> 0x20);
            local_1d0._0_16_ = auVar7;
            local_1d0._s_0.Z = local_1d0._s_0.Z * dVar8;
          }
          pTVar27 = &local_1d0;
          lVar28 = 0;
          FVar17.Data = local_a8.Data;
          pFVar22 = (FScriptContainerElement *)local_e8._0_8_;
LAB_14c6c1091:
          uVar18 = *(uint *)((longlong)&local_168 + lVar28);
          if (local_e8._8_4_ != local_b4) {
            pFVar20 = local_b0;
            if (FVar17.Data != (FScriptContainerElement *)0x0) {
              pFVar20 = FVar17.Data;
            }
            uVar19 = (ulonglong)(local_a0 - 1 & uVar18);
            for (iVar21 = *(int *)(pFVar20 + uVar19 * 4); iVar21 != -1;
                iVar21 = *(int *)(pFVar22 + (longlong)iVar21 * 0x10 + 8)) {
              if (*(uint *)(pFVar22 + (longlong)iVar21 * 0x10) == uVar18) {
                pFVar20 = (pTVar29->Elements).Blocks.AllocatorInstance.Data;
                uVar23 = *(uint *)((longlong)local_190 + lVar28);
                uVar12 = uVar23 * 4;
                fVar1 = *(float *)(*(longlong *)
                                    (pFVar20 + (ulonglong)((uVar23 & 0x3fffffff) >> 7) * 8) +
                                  (ulonglong)(uVar12 & 0x1ff) * 4);
                fVar2 = *(float *)(*(longlong *)
                                    (pFVar20 + (ulonglong)((uVar23 & 0x3fffffff) >> 7) * 8) +
                                  (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
                fVar3 = *(float *)(*(longlong *)
                                    (pFVar20 + (ulonglong)((uVar23 & 0x3fffffff) >> 7) * 8) +
                                  (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
                fVar4 = *(float *)(*(longlong *)
                                    (pFVar20 + (ulonglong)((uVar23 & 0x3fffffff) >> 7) * 8) +
                                  (ulonglong)(uVar12 + 3 & 0x1ff) * 4);
                pFVar20 = local_b0;
                if (FVar17.Data != (FScriptContainerElement *)0x0) {
                  pFVar20 = FVar17.Data;
                }
                uVar23 = *(uint *)(pFVar20 + uVar19 * 4);
                if (uVar23 == 0xffffffff) goto LAB_14c6c118b;
                goto LAB_14c6c1170;
              }
            }
          }
          goto LAB_14c6c1449;
        }
      }
    }
LAB_14c6c146e:
    local_1a0 = local_1a0 + 4;
  } while( true );
  while (uVar23 = *(uint *)(pFVar20 + 8), uVar23 != 0xffffffff) {
LAB_14c6c1170:
    pFVar20 = pFVar22 + (longlong)(int)uVar23 * 0x10;
    if (*(uint *)pFVar20 == uVar18) {
      if (pFVar20 != (FScriptContainerElement *)0x0) goto LAB_14c6c11b3;
      goto LAB_14c6c118d;
    }
  }
LAB_14c6c118b:
  pFVar20 = (FScriptContainerElement *)0x0;
LAB_14c6c118d:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14c6c11b3:
  pTVar9 = local_1b8;
  uVar23 = *(uint *)(pFVar20 + 4);
  lVar26 = (longlong)(int)uVar23;
  dVar8 = (pTVar27->_s_0).X;
  uVar18 = uVar23 * 4;
  uVar12 = 0;
  if ((int)uVar23 < local_1b8->ArrayNum) {
    uVar12 = ~uVar23 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (local_208 = lVar26, local_200 = (longlong)local_1b8->ArrayNum,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar22 = (pTVar9->AllocatorInstance).Data;
  dVar5 = (pTVar27->_s_0).X;
  *(double *)(pFVar22 + lVar26 * 8) = dVar8 + *(double *)(pFVar22 + lVar26 * 8);
  uVar12 = 0;
  if ((int)uVar18 < local_1f0->ArrayNum) {
    uVar12 = ~uVar18 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_208 = (longlong)(int)uVar18;
    local_200 = (longlong)local_1f0->ArrayNum;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar12 = uVar18 + 1;
  pFVar22 = (local_1f0->AllocatorInstance).Data;
  dVar8 = (pTVar27->_s_0).X;
  *(float *)(pFVar22 + (longlong)(int)uVar18 * 4) =
       (float)((double)fVar1 * dVar5) + *(float *)(pFVar22 + (longlong)(int)uVar18 * 4);
  uVar13 = 0;
  if ((int)uVar12 < local_1f0->ArrayNum) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if (uVar13 == 0) {
    local_208 = (longlong)(int)uVar12;
    local_200 = (longlong)local_1f0->ArrayNum;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar13 = uVar18 + 2;
  pFVar22 = (local_1f0->AllocatorInstance).Data;
  dVar5 = (pTVar27->_s_0).X;
  *(float *)(pFVar22 + (longlong)(int)uVar12 * 4) =
       (float)((double)fVar2 * dVar8) + *(float *)(pFVar22 + (longlong)(int)uVar12 * 4);
  uVar12 = 0;
  if ((int)uVar13 < local_1f0->ArrayNum) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_208 = (longlong)(int)uVar13;
    local_200 = (longlong)local_1f0->ArrayNum;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar18 = uVar18 + 3;
  pFVar22 = (local_1f0->AllocatorInstance).Data;
  dVar8 = (pTVar27->_s_0).X;
  *(float *)(pFVar22 + (longlong)(int)uVar13 * 4) =
       (float)((double)fVar3 * dVar5) + *(float *)(pFVar22 + (longlong)(int)uVar13 * 4);
  uVar12 = 0;
  if ((int)uVar18 < local_1f0->ArrayNum) {
    uVar12 = ~uVar18 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_208 = (longlong)(int)uVar18;
    local_200 = (longlong)local_1f0->ArrayNum;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar10 = local_17c._12_8_;
  pFVar22 = (local_1f0->AllocatorInstance).Data;
  *(float *)(pFVar22 + (longlong)(int)uVar18 * 4) =
       (float)((double)fVar4 * dVar8) + *(float *)(pFVar22 + (longlong)(int)uVar18 * 4);
  uVar18 = 0;
  if ((int)uVar23 < *(int *)(local_17c._12_8_ + 8)) {
    uVar18 = ~uVar23 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (local_208 = lVar26, local_200 = (longlong)*(int *)(local_17c._12_8_ + 8),
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  ((ForAnyElementType *)uVar10)->Data[lVar26] = (FScriptContainerElement)0x1;
  FVar17.Data = local_a8.Data;
  pFVar22 = (FScriptContainerElement *)local_e8._0_8_;
  pTVar29 = local_1b0;
LAB_14c6c1449:
  lVar28 = lVar28 + 4;
  pTVar27 = (TVector<double>_u_0 *)&(pTVar27->_s_0).Y;
  pFVar20 = local_1e8;
  this = local_1a8;
  if (0xb < lVar28) goto LAB_14c6c146e;
  goto LAB_14c6c1091;
}

// AverageSelection<double,3> @ 14c6c1530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAverageOverlayToVerticesLocals::AverageSelection<double,3>
          (FDynamicMesh3 *param_1,TDynamicMeshOverlay<double,3> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,bool param_4,bool param_5,
          TArray<double,TSizedDefaultAllocator<32>_> *param_6,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_7,
          TArray<double,TSizedDefaultAllocator<32>_> *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  TVector<double> *pTVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  TDynamicMeshOverlay<double,3> *pTVar25;
  TVector<double>_u_0 *pTVar26;
  int iVar27;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar28;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar29;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  undefined1 local_1e8;
  bool local_1e7;
  char local_1e6;
  FScriptContainerElement *local_1e0;
  undefined4 local_1d8;
  int local_1d4;
  TArray<double,TSizedDefaultAllocator<32>_> *local_1d0;
  TArray<double,TSizedDefaultAllocator<32>_> *local_1c8;
  TDynamicMeshOverlay<double,3> *local_1c0;
  TVector<double>_u_0 local_1b8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  int local_190 [4];
  undefined4 local_180;
  undefined1 local_17c [12];
  double local_170;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_168;
  FDynamicMesh3 *local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_140;
  undefined4 *local_120;
  int *local_118;
  TArray<int,TSizedDefaultAllocator<32>_> local_110;
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  TVector<double> local_f0;
  undefined1 local_d8 [40];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_218;
  uVar16 = param_3->ArrayNum;
  uVar17 = 0;
  local_1d0 = param_6;
  local_168 = param_7;
  local_1c8 = param_8;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_d8._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_1e6 = param_4;
  local_1c0 = param_2;
  local_160 = param_1;
  if (uVar16 == 0) goto LAB_14c6c175d;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_d8,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar21 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_180 = (undefined4)lVar24;
    uVar16 = 1 << ((byte)lVar24 & 0x1f);
  }
  if ((local_90 != 0) && ((int)uVar16 <= (int)local_90)) goto LAB_14c6c175d;
  local_90 = uVar16;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
  }
  if (uVar16 != 0) {
    uVar19 = uVar16;
    if (uVar16 < 2) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14c6c1664;
      }
    }
    else {
LAB_14c6c1664:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar19,4);
    }
    if (0 < (int)uVar16) {
      uVar22 = (ulonglong)uVar16;
      uVar21 = uVar17;
      do {
        FVar15.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_98.Data;
        }
        uVar12 = (longlong)(int)uVar16 - 1U & uVar21;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(FVar15.Data + uVar12 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if ((local_90 != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_148,
                 (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8), local_140.CurrentBitIndex < (local_140.Array)->NumBits)) {
    do {
      lVar23 = (longlong)local_140.CurrentBitIndex * 0x10;
      lVar24 = *local_148;
      uVar16 = local_90 - 1 & *(uint *)(lVar23 + lVar24);
      *(uint *)(lVar23 + 0xc + lVar24) = uVar16;
      FVar15.Data = local_a0;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_98.Data;
      }
      uVar21 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar16;
      *(undefined4 *)(lVar23 + 8 + lVar24) = *(undefined4 *)(FVar15.Data + uVar21 * 4);
      *(int *)(FVar15.Data + uVar21 * 4) = local_140.CurrentBitIndex;
      local_140.UnvisitedBitMask = local_140.UnvisitedBitMask & ~local_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_140);
    } while (local_140.CurrentBitIndex < (local_140.Array)->NumBits);
  }
LAB_14c6c175d:
  pFVar18 = (param_3->AllocatorInstance).Data;
  iVar27 = param_3->ArrayNum;
  pFVar20 = pFVar18 + (longlong)iVar27 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar27) {
      local_1e8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1e8);
    }
    if (pFVar18 == pFVar20) break;
    local_1d8 = *(undefined4 *)pFVar18;
    local_120 = &local_1d8;
    local_1d4 = (int)uVar17;
    local_118 = &local_1d4;
    uVar17 = (ulonglong)(local_1d4 + 1);
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_d8,(TPairInitializer<int_const_&,int_&&> *)local_17c,(bool *)&local_120);
    pFVar18 = pFVar18 + 4;
  }
  iVar27 = 0;
  pFVar20 = (FScriptContainerElement *)0x0;
  local_198 = (FScriptContainerElement *)0x0;
  pTVar13 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVertexSelectedTriangles
                      (&local_110,param_1,param_3);
  if (&local_100 != pTVar13) {
    pFVar20 = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar27 = pTVar13->ArrayNum;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
    local_198 = pFVar20;
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  pTVar28 = local_1d0;
  local_17c._4_8_ = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (local_1d0,(double *)(local_17c + 4),param_3->ArrayNum * 3);
  local_1e7 = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(param_7,&local_1e7,param_3->ArrayNum);
  pTVar29 = local_1c8;
  local_170 = 0.0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init(local_1c8,&local_170,param_3->ArrayNum);
  pFVar18 = pFVar20 + (longlong)iVar27 * 4;
  local_1a0 = pFVar20;
  FVar15.Data = local_98.Data;
  pTVar25 = local_1c0;
  local_1e0 = pFVar18;
  do {
    if (local_1a0 == pFVar18) {
      if (local_198 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198);
        FVar15.Data = local_98.Data;
      }
      local_90 = 0;
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      return;
    }
    uVar16 = *(uint *)local_1a0;
    if ((-1 < (int)uVar16) &&
       (pFVar18 = local_1e0,
       (int)uVar16 <
       (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar17 = (ulonglong)(uVar16 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar16 >> 9) * 8) + uVar17 * 2) - 1U) < 0xfffe) {
        pFVar20 = (pTVar25->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar19 = uVar16 * 3;
        iVar27 = *(int *)(*(longlong *)(pFVar20 + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 4);
        if (-1 < iVar27) {
          lVar24 = *(longlong *)
                    ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8);
          local_158 = *(undefined8 *)(lVar24 + uVar17 * 0xc);
          local_150 = *(undefined4 *)(lVar24 + 8 + uVar17 * 0xc);
          local_190[1] = *(undefined4 *)
                          (*(longlong *)(pFVar20 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                          (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
          local_190[2] = *(undefined4 *)
                          (*(longlong *)(pFVar20 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                          (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
          local_190[0] = iVar27;
          dVar7 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,uVar16);
          local_1b8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          local_1b8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          local_1b8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          if (param_5) {
            pTVar14 = UE::Geometry::FDynamicMesh3::GetTriInternalAnglesR(param_1,&local_f0,uVar16);
            local_1b8._0_16_ = *(undefined1 (*) [16])&pTVar14->field0_0x0;
            local_1b8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
          }
          if (local_1e6 != '\0') {
            auVar6._8_4_ = SUB84(local_1b8._s_0.Y * dVar7,0);
            auVar6._0_8_ = local_1b8._s_0.X * dVar7;
            auVar6._12_4_ = (int)((ulonglong)(local_1b8._s_0.Y * dVar7) >> 0x20);
            local_1b8._0_16_ = auVar6;
            local_1b8._s_0.Z = local_1b8._s_0.Z * dVar7;
          }
          pTVar26 = &local_1b8;
          lVar24 = 0;
          pFVar20 = (FScriptContainerElement *)local_d8._0_8_;
          FVar15.Data = local_98.Data;
LAB_14c6c1a10:
          uVar16 = *(uint *)((longlong)&local_158 + lVar24);
          if (local_d8._8_4_ != local_a4) {
            pFVar18 = local_a0;
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              pFVar18 = FVar15.Data;
            }
            uVar17 = (ulonglong)(local_90 - 1 & uVar16);
            for (iVar27 = *(int *)(pFVar18 + uVar17 * 4); iVar27 != -1;
                iVar27 = *(int *)(pFVar20 + (longlong)iVar27 * 0x10 + 8)) {
              if (*(uint *)(pFVar20 + (longlong)iVar27 * 0x10) == uVar16) {
                uVar19 = *(int *)((longlong)local_190 + lVar24) * 3;
                pFVar18 = (local_1c0->Elements).Blocks.AllocatorInstance.Data;
                dVar7 = *(double *)
                         (*(longlong *)(pFVar18 + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 8);
                dVar1 = *(double *)
                         (*(longlong *)(pFVar18 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                         (ulonglong)(uVar19 + 1 & 0x1ff) * 8);
                dVar2 = *(double *)
                         (*(longlong *)(pFVar18 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                         (ulonglong)(uVar19 + 2 & 0x1ff) * 8);
                pFVar18 = local_a0;
                if (FVar15.Data != (FScriptContainerElement *)0x0) {
                  pFVar18 = FVar15.Data;
                }
                uVar19 = *(uint *)(pFVar18 + uVar17 * 4);
                if (uVar19 == 0xffffffff) goto LAB_14c6c1aeb;
                goto LAB_14c6c1ad0;
              }
            }
          }
          goto LAB_14c6c1d06;
        }
      }
    }
LAB_14c6c1d31:
    local_1a0 = local_1a0 + 4;
  } while( true );
  while (uVar19 = *(uint *)(pFVar18 + 8), uVar19 != 0xffffffff) {
LAB_14c6c1ad0:
    pFVar18 = pFVar20 + (longlong)(int)uVar19 * 0x10;
    if (*(uint *)pFVar18 == uVar16) {
      if (pFVar18 != (FScriptContainerElement *)0x0) goto LAB_14c6c1b13;
      goto LAB_14c6c1aed;
    }
  }
LAB_14c6c1aeb:
  pFVar18 = (FScriptContainerElement *)0x0;
LAB_14c6c1aed:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar9) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14c6c1b13:
  uVar16 = *(uint *)(pFVar18 + 4);
  lVar23 = (longlong)(int)uVar16;
  dVar3 = (pTVar26->_s_0).X;
  uVar19 = uVar16 * 3;
  uVar10 = 0;
  if ((int)uVar16 < pTVar29->ArrayNum) {
    uVar10 = ~uVar16 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_1f8 = lVar23, local_1f0 = (longlong)pTVar29->ArrayNum,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar4 = (pTVar26->_s_0).X;
  pFVar20 = (local_1c8->AllocatorInstance).Data;
  *(double *)(pFVar20 + lVar23 * 8) = dVar3 + *(double *)(pFVar20 + lVar23 * 8);
  uVar10 = 0;
  if ((int)uVar19 < pTVar28->ArrayNum) {
    uVar10 = ~uVar19 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_1f8 = (longlong)(int)uVar19;
    local_1f0 = (longlong)pTVar28->ArrayNum;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar20 = (pTVar28->AllocatorInstance).Data;
  uVar10 = uVar19 + 1;
  dVar3 = (pTVar26->_s_0).X;
  *(double *)(pFVar20 + (longlong)(int)uVar19 * 8) =
       dVar7 * dVar4 + *(double *)(pFVar20 + (longlong)(int)uVar19 * 8);
  uVar11 = 0;
  if ((int)uVar10 < local_1d0->ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    local_1f8 = (longlong)(int)uVar10;
    local_1f0 = (longlong)local_1d0->ArrayNum;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar28 = local_1d0;
  dVar7 = (pTVar26->_s_0).X;
  uVar19 = uVar19 + 2;
  pFVar20 = (local_1d0->AllocatorInstance).Data;
  *(double *)(pFVar20 + (longlong)(int)uVar10 * 8) =
       dVar1 * dVar3 + *(double *)(pFVar20 + (longlong)(int)uVar10 * 8);
  uVar10 = 0;
  if ((int)uVar19 < local_1d0->ArrayNum) {
    uVar10 = ~uVar19 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_1f8 = (longlong)(int)uVar19;
    local_1f0 = (longlong)local_1d0->ArrayNum;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar8 = local_168;
  pFVar20 = (pTVar28->AllocatorInstance).Data;
  *(double *)(pFVar20 + (longlong)(int)uVar19 * 8) =
       dVar2 * dVar7 + *(double *)(pFVar20 + (longlong)(int)uVar19 * 8);
  uVar19 = 0;
  if ((int)uVar16 < local_168->ArrayNum) {
    uVar19 = ~uVar16 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (local_1f8 = lVar23, local_1f0 = (longlong)local_168->ArrayNum,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (pTVar8->AllocatorInstance).Data[lVar23] = (FScriptContainerElement)0x1;
  pFVar20 = (FScriptContainerElement *)local_d8._0_8_;
  FVar15.Data = local_98.Data;
  pTVar29 = local_1c8;
LAB_14c6c1d06:
  lVar24 = lVar24 + 4;
  pTVar26 = (TVector<double>_u_0 *)&(pTVar26->_s_0).Y;
  pFVar18 = local_1e0;
  pTVar25 = local_1c0;
  param_1 = local_160;
  if (0xb < lVar24) goto LAB_14c6c1d31;
  goto LAB_14c6c1a10;
}

