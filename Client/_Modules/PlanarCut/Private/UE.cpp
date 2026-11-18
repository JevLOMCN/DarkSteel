// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 49

// SplitOverlayHelper<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,UE::Math::TVector2<float>_> @ 14c996700

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::
SplitOverlayHelper<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,UE::Math::TVector2<float>_>
          (FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  ForAnyElementType local_168;
  undefined8 local_160;
  undefined1 local_158 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  TArray<int,TSizedDefaultAllocator<32>_> local_140;
  uint local_130;
  int local_12c;
  undefined8 local_128;
  TArray<bool,TSizedDefaultAllocator<32>_> local_120;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  uint local_d8 [6];
  undefined8 local_c0;
  undefined8 local_b0;
  FScriptContainerElement *local_a0;
  int local_98;
  FScriptContainerElement *local_90;
  int local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [56];
  
  fVar5 = __real_358637bd;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_12c = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar19 = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  if (0 < local_12c) {
    local_e0 = 0;
    do {
      lVar18 = local_e0;
      if (((int)uVar19 <
           (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar19 >> 9) * 8) +
                             (ulonglong)((uint)local_e0 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        pTVar12 = &local_120;
        UE::Geometry::FDynamicMesh3::
        GetVtxContiguousTriangles<TArray<int,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
                  (param_1,uVar19,&local_140,&local_150,pTVar12);
        uVar17 = 0;
        local_158._4_4_ = 0;
        local_e8 = 0;
        if (0 < local_150.ArrayNum) {
          do {
            lVar18 = local_e8;
            uVar7 = local_158._4_4_;
            uVar14 = ~local_158._4_4_;
            uVar9 = 0;
            if ((int)local_158._4_4_ < local_150.ArrayNum) {
              uVar9 = uVar14 >> 0x1f;
            }
            if (uVar9 == 0) {
              pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)local_158._4_4_;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            iVar11 = *(int *)(local_150.AllocatorInstance.Data + lVar18 * 4);
            uVar9 = 0;
            if ((int)uVar7 < local_120.ArrayNum) {
              uVar9 = uVar14 >> 0x1f;
            }
            if (uVar9 == 0) {
              pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar7;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            FVar1 = local_120.AllocatorInstance.Data[lVar18];
            uVar9 = 0;
            if ((int)uVar17 < local_140.ArrayNum) {
              uVar9 = ~uVar17 >> 0x1f;
            }
            if (uVar9 == 0) {
              pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar17;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            uVar9 = *(uint *)(local_140.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
            lVar18 = *(longlong *)
                      ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar9 >> 9) * 8);
            local_c0 = *(undefined8 *)(lVar18 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
            if ((uint)local_c0 == uVar19) {
              iVar15 = 0;
            }
            else if ((uint)((ulonglong)local_c0 >> 0x20) == uVar19) {
              iVar15 = 1;
            }
            else {
              iVar15 = -1;
              if (*(uint *)(lVar18 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc) == uVar19) {
                iVar15 = 2;
              }
              else {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("SubIdx >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                   ,0x145,L"");
                if (bVar8) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
            }
            uVar9 = uVar9 * 3;
            lVar18 = *(longlong *)&param_2->field_0x78;
            local_d8[0] = *(uint *)(*(longlong *)(lVar18 + (ulonglong)(uVar9 >> 9) * 8) +
                                   (ulonglong)(uVar9 & 0x1ff) * 4);
            local_d8[1] = *(undefined4 *)
                           (*(longlong *)(lVar18 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                           (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
            local_d8[2] = *(undefined4 *)
                           (*(longlong *)(lVar18 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
                           (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
            uVar9 = local_d8[iVar15];
            if ((int)uVar9 < 0) {
              local_108 = 0;
              local_128 = 0;
            }
            else {
              local_110 = *(undefined4 *)
                           (*(longlong *)
                             (*(longlong *)&param_2->field_0x48 +
                             (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                           (ulonglong)(uVar9 * 2 & 0x1ff) * 4);
              uStack_10c = *(undefined4 *)
                            (*(longlong *)
                              (*(longlong *)&param_2->field_0x48 +
                              (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
              local_128 = CONCAT44(uStack_10c,local_110);
            }
            bVar8 = false;
            bVar20 = (longlong)local_160 < 0;
            local_160 = local_160 & 0xffffffff00000000;
            local_130 = uVar9;
            if (bVar20) {
              pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                        ((ulonglong)pTVar12 & 0xffffffff00000000);
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_168,0,(int *)((longlong)&local_160 + 4));
            }
            uVar14 = iVar11 + uVar17;
            uVar17 = uVar17 + 1;
            lVar18 = (longlong)(int)uVar17;
            if (lVar18 < (int)uVar14) {
              do {
                uVar10 = 0;
                if ((int)uVar17 < local_140.ArrayNum) {
                  uVar10 = ~uVar17 >> 0x1f;
                }
                if (uVar10 == 0) {
                  pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar17;
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                uVar10 = *(uint *)(local_140.AllocatorInstance.Data + lVar18 * 4);
                lVar13 = *(longlong *)
                          ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar10 >> 9) * 8);
                local_b0 = *(undefined8 *)(lVar13 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
                local_158._0_4_ = uVar10;
                if ((uint)local_b0 == uVar19) {
                  iVar11 = 0;
                }
                else if ((uint)((ulonglong)local_b0 >> 0x20) == uVar19) {
                  iVar11 = 1;
                }
                else {
                  iVar11 = -1;
                  if (*(uint *)(lVar13 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc) == uVar19) {
                    iVar11 = 2;
                  }
                  else {
                    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("SubIdx >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                        ,0x145,L"");
                    if (bVar20) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                }
                uVar10 = uVar10 * 3;
                lVar13 = *(longlong *)&param_2->field_0x78;
                local_d8[3] = *(undefined4 *)
                               (*(longlong *)(lVar13 + (ulonglong)(uVar10 >> 9) * 8) +
                               (ulonglong)(uVar10 & 0x1ff) * 4);
                local_d8[4] = *(undefined4 *)
                               (*(longlong *)(lVar13 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                               (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
                local_d8[5] = *(undefined4 *)
                               (*(longlong *)(lVar13 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                               (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
                uVar10 = local_d8[(longlong)iVar11 + 3];
                if (uVar10 == uVar9) {
LAB_14c996d1b:
                  if (bVar8) goto LAB_14c996d24;
                }
                else {
                  if ((int)uVar10 < 0) {
                    local_f8 = 0;
                    uVar16 = 0;
                  }
                  else {
                    local_100 = *(undefined4 *)
                                 (*(longlong *)
                                   (*(longlong *)&param_2->field_0x48 +
                                   (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar10 * 2 & 0x1ff) * 4);
                    uStack_fc = *(undefined4 *)
                                 (*(longlong *)
                                   (*(longlong *)&param_2->field_0x48 +
                                   (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar10 * 2 + 1 & 0x1ff) * 4);
                    uVar16 = CONCAT44(uStack_fc,local_100);
                  }
                  local_f0._0_4_ = (float)uVar16;
                  local_f0 = uVar16;
                  if ((float)((uint)((float)local_f0 - (float)local_128) & uVar4) <= fVar5) {
                    local_f0._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
                    fVar21 = local_f0._4_4_ - local_128._4_4_;
                    if ((float)((uint)fVar21 & uVar4) <= fVar5) goto LAB_14c996d1b;
                  }
                  if (0 < (int)local_160) {
                    local_a0 = local_168.Data;
                    local_98 = (int)local_160;
                    (**(code **)(param_1->_padding_ + 0x48))
                              (param_1,uVar19,&local_a0,local_80,pTVar12);
                    uVar6 = local_160;
                    uVar3 = local_160 >> 0x20;
                    local_160 = local_160 & 0xffffffff00000000;
                    if (((longlong)uVar6 < 0) && ((int)uVar3 != 0)) {
                      pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                                ((ulonglong)pTVar12 & 0xffffffff00000000);
                      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,0,&local_168,0,(int *)((longlong)&local_160 + 4));
                    }
                  }
                  bVar8 = true;
                  uVar9 = uVar10;
                  local_128 = uVar16;
LAB_14c996d24:
                  if ((local_168.Data <= (FScriptContainerElement *)local_158) &&
                     ((FScriptContainerElement *)local_158 <
                      local_168.Data + (longlong)local_160._4_4_ * 4)) {
                    pTVar12 = (TArray<bool,TSizedDefaultAllocator<32>_> *)local_158;
                    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar20) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                  if ((int)local_160 == local_160._4_4_) {
                    iVar11 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_168,(int *)((longlong)&local_160 + 4));
                    local_160 = CONCAT44(local_160._4_4_,iVar11);
                  }
                  lVar13 = (longlong)(int)local_160;
                  local_160 = CONCAT44(local_160._4_4_,(int)local_160 + 1);
                  *(undefined4 *)(local_168.Data + lVar13 * 4) = local_158._0_4_;
                }
                uVar17 = uVar17 + 1;
                lVar18 = lVar18 + 1;
              } while (lVar18 < (int)uVar14);
              if (((bVar8) && (0 < (int)local_160)) &&
                 ((FVar1 == (FScriptContainerElement)0x0 || (uVar9 != local_130)))) {
                local_90 = local_168.Data;
                local_88 = (int)local_160;
                (**(code **)(param_1->_padding_ + 0x48))(param_1,uVar19,&local_90,local_78);
              }
            }
            local_158._4_4_ = local_158._4_4_ + 1;
            local_e8 = local_e8 + 1;
            lVar18 = local_e0;
            uVar17 = uVar14;
          } while ((int)local_158._4_4_ < local_150.ArrayNum);
        }
      }
      local_e0 = lVar18 + 1;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < local_12c);
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// SplitOverlayHelper<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,UE::Math::TVector<float>_> @ 14c996f10

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::
SplitOverlayHelper<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,UE::Math::TVector<float>_>
          (FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ForAnyElementType local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined1 local_198 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  TArray<int,TSizedDefaultAllocator<32>_> local_180;
  int local_170;
  int local_16c;
  TArray<bool,TSizedDefaultAllocator<32>_> local_168;
  longlong local_158;
  undefined8 local_150;
  int local_148 [6];
  undefined8 local_130;
  undefined8 local_120;
  FScriptContainerElement *local_110;
  int local_108;
  FScriptContainerElement *local_100;
  int local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [168];
  
  fVar4 = __real_358637bd;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_16c = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar16 = 0;
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.ArrayNum = 0;
  local_180.ArrayMax = 0;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  iStack_19c = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  if (0 < local_16c) {
    local_150 = 0;
    do {
      lVar15 = local_150;
      if (((int)uVar16 <
           (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar16 >> 9) * 8) +
                             (ulonglong)((uint)local_150 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        pTVar9 = &local_168;
        UE::Geometry::FDynamicMesh3::
        GetVtxContiguousTriangles<TArray<int,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>_>
                  (param_1,uVar16,&local_180,&local_190,pTVar9);
        uVar14 = 0;
        local_198._4_4_ = 0;
        local_158 = 0;
        if (0 < local_190.ArrayNum) {
          do {
            lVar15 = local_158;
            uVar5 = local_198._4_4_;
            uVar11 = ~local_198._4_4_;
            uVar8 = 0;
            if ((int)local_198._4_4_ < local_190.ArrayNum) {
              uVar8 = uVar11 >> 0x1f;
            }
            if (uVar8 == 0) {
              pTVar9 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)local_198._4_4_;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            iVar13 = *(int *)(local_190.AllocatorInstance.Data + lVar15 * 4);
            uVar8 = 0;
            if ((int)uVar5 < local_168.ArrayNum) {
              uVar8 = uVar11 >> 0x1f;
            }
            if (uVar8 == 0) {
              pTVar9 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar5;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            FVar1 = local_168.AllocatorInstance.Data[lVar15];
            uVar8 = 0;
            if ((int)uVar14 < local_180.ArrayNum) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if (uVar8 == 0) {
              pTVar9 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar14;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            uVar8 = *(uint *)(local_180.AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
            lVar15 = *(longlong *)
                      ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar8 >> 9) * 8);
            local_130 = *(undefined8 *)(lVar15 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
            if ((uint)local_130 == uVar16) {
              iVar12 = 0;
            }
            else if ((uint)((ulonglong)local_130 >> 0x20) == uVar16) {
              iVar12 = 1;
            }
            else {
              iVar12 = -1;
              if (*(uint *)(lVar15 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc) == uVar16) {
                iVar12 = 2;
              }
              else {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("SubIdx >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                   ,0x145,L"");
                if (bVar6) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
            }
            uVar8 = uVar8 * 3;
            lVar15 = *(longlong *)&param_2->field_0x78;
            local_148[0] = *(int *)(*(longlong *)(lVar15 + (ulonglong)(uVar8 >> 9) * 8) +
                                   (ulonglong)(uVar8 & 0x1ff) * 4);
            local_148[1] = *(undefined4 *)
                            (*(longlong *)(lVar15 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                            (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
            local_148[2] = *(undefined4 *)
                            (*(longlong *)(lVar15 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                            (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
            iVar12 = local_148[iVar12];
            if (iVar12 < 0) {
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar22 = 0.0;
            }
            else {
              lVar15 = *(longlong *)&param_2->field_0x48;
              uVar8 = iVar12 * 3;
              fVar21 = *(float *)(*(longlong *)(lVar15 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
              fVar20 = *(float *)(*(longlong *)(lVar15 + (ulonglong)(uVar8 >> 9) * 8) +
                                 (ulonglong)(uVar8 & 0x1ff) * 4);
              fVar22 = *(float *)(*(longlong *)(lVar15 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
            }
            bVar6 = false;
            local_1a0 = 0;
            local_170 = iVar12;
            if (iStack_19c < 0) {
              pTVar9 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                       ((ulonglong)pTVar9 & 0xffffffff00000000);
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_1a8,0,&iStack_19c);
            }
            uVar8 = iVar13 + uVar14;
            uVar14 = uVar14 + 1;
            lVar15 = (longlong)(int)uVar14;
            if (lVar15 < (int)uVar8) {
              do {
                uVar11 = 0;
                if ((int)uVar14 < local_180.ArrayNum) {
                  uVar11 = ~uVar14 >> 0x1f;
                }
                if (uVar11 == 0) {
                  pTVar9 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar14;
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar7) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                uVar11 = *(uint *)(local_180.AllocatorInstance.Data + lVar15 * 4);
                lVar10 = *(longlong *)
                          ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8);
                local_120 = *(undefined8 *)(lVar10 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
                local_198._0_4_ = uVar11;
                if ((uint)local_120 == uVar16) {
                  iVar13 = 0;
                }
                else if ((uint)((ulonglong)local_120 >> 0x20) == uVar16) {
                  iVar13 = 1;
                }
                else {
                  iVar13 = -1;
                  if (*(uint *)(lVar10 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc) == uVar16) {
                    iVar13 = 2;
                  }
                  else {
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("SubIdx >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                       ,0x145,L"");
                    if (bVar7) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                }
                uVar11 = uVar11 * 3;
                lVar10 = *(longlong *)&param_2->field_0x78;
                local_148[3] = *(undefined4 *)
                                (*(longlong *)(lVar10 + (ulonglong)(uVar11 >> 9) * 8) +
                                (ulonglong)(uVar11 & 0x1ff) * 4);
                local_148[4] = *(undefined4 *)
                                (*(longlong *)(lVar10 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                                (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
                local_148[5] = *(undefined4 *)
                                (*(longlong *)(lVar10 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                                (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
                iVar13 = local_148[(longlong)iVar13 + 3];
                if (iVar13 == iVar12) {
LAB_14c997586:
                  if (bVar6) goto LAB_14c99758f;
                }
                else {
                  if (iVar13 < 0) {
                    fVar17 = 0.0;
                    fVar18 = 0.0;
                    fVar19 = 0.0;
                  }
                  else {
                    lVar10 = *(longlong *)&param_2->field_0x48;
                    uVar11 = iVar13 * 3;
                    fVar18 = *(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                                       (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
                    fVar17 = *(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar11 >> 9) * 8) +
                                       (ulonglong)(uVar11 & 0x1ff) * 4);
                    fVar19 = *(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                                       (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
                  }
                  if ((((float)((uint)(fVar17 - fVar20) & uVar3) <= fVar4) &&
                      ((float)((uint)(fVar18 - fVar21) & uVar3) <= fVar4)) &&
                     ((float)((uint)(fVar19 - fVar22) & uVar3) <= fVar4)) goto LAB_14c997586;
                  if (0 < local_1a0) {
                    local_110 = local_1a8.Data;
                    local_108 = local_1a0;
                    (**(code **)(param_1->_padding_ + 0x48))
                              (param_1,uVar16,&local_110,local_f0,pTVar9);
                    local_1a0 = 0;
                    if ((iStack_19c < 0) && (iStack_19c != 0)) {
                      pTVar9 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                               ((ulonglong)pTVar9 & 0xffffffff00000000);
                      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,0,&local_1a8,0,&iStack_19c);
                    }
                  }
                  bVar6 = true;
                  fVar20 = fVar17;
                  fVar21 = fVar18;
                  fVar22 = fVar19;
                  iVar12 = iVar13;
LAB_14c99758f:
                  if ((local_1a8.Data <= (FScriptContainerElement *)local_198) &&
                     ((FScriptContainerElement *)local_198 <
                      local_1a8.Data + (longlong)iStack_19c * 4)) {
                    pTVar9 = (TArray<bool,TSizedDefaultAllocator<32>_> *)local_198;
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar7) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                  }
                  if (local_1a0 == iStack_19c) {
                    local_1a0 = Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x404,&local_1a8,&iStack_19c);
                  }
                  lVar10 = (longlong)local_1a0;
                  local_1a0 = local_1a0 + 1;
                  *(undefined4 *)(local_1a8.Data + lVar10 * 4) = local_198._0_4_;
                }
                uVar14 = uVar14 + 1;
                lVar15 = lVar15 + 1;
              } while (lVar15 < (int)uVar8);
              if (((bVar6) && (0 < local_1a0)) &&
                 ((FVar1 == (FScriptContainerElement)0x0 || (iVar12 != local_170)))) {
                local_100 = local_1a8.Data;
                local_f8 = local_1a0;
                (**(code **)(param_1->_padding_ + 0x48))(param_1,uVar16,&local_100,local_e8);
              }
            }
            local_198._4_4_ = local_198._4_4_ + 1;
            local_158 = local_158 + 1;
            lVar15 = local_150;
            uVar14 = uVar8;
          } while ((int)local_198._4_4_ < local_190.ArrayNum);
        }
      }
      local_150 = lVar15 + 1;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < local_16c);
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14c9aa6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UE::PlanarCut::BoxProjectUVs'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  double *pdVar10;
  code *pcVar11;
  uint uVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  FDynamicMeshAttributeSet *pFVar16;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar17;
  FDynamicMeshAttributeSet *pFVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  FDynamicMeshAttributeSet *pFVar23;
  uint uVar24;
  uint uVar25;
  FDynamicMeshAttributeSet *pFVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  undefined1 local_res20 [8];
  uint local_108 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  uint local_f0;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double local_c8;
  double local_c0;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *local_b8;
  TVector<double>_u_0 local_b0;
  code *local_98;
  undefined1 *local_90;
  TVector<double>_u_0 local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  FDynamicMeshUVEditor local_50;
  
  pFVar23 = (FDynamicMeshAttributeSet *)0x0;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  uVar24 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  pFVar26 = pFVar23;
  if (((uVar24 != 0) &&
      (pFVar7 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(**(short **)pFVar7 - 1U))) &&
     (pFVar26 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < (int)uVar24)) {
    do {
      uVar19 = (ulonglong)((uint)pFVar26 & 0x1ff);
      lVar8 = *(longlong *)(pFVar7 + ((ulonglong)pFVar26 >> 9) * 8);
      if ((*(short *)(lVar8 + uVar19 * 2) != 0) && (*(short *)(lVar8 + uVar19 * 2) != -1)) break;
      uVar25 = (uint)pFVar26 + 1;
      pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar25;
    } while ((int)uVar25 < (int)uVar24);
  }
  if ((uint)pFVar26 != uVar24) {
LAB_14c9aa760:
    do {
      pFVar18 = (param_1->AttributeSet).Ptr;
      iVar15 = *(int *)((longlong)this + 0x18);
      plVar9 = *(longlong **)this;
      uVar25 = (uint)pFVar26;
      pFVar16 = pFVar23;
      if (pFVar18 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar16 = pFVar18;
      }
      local_f0 = *(uint *)(*(longlong *)
                            (*(longlong *)&((pFVar16->MaterialIDAttrib).Ptr)->field_0x20 +
                            ((ulonglong)pFVar26 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
      local_108[0] = uVar25;
      pTVar17 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                        *)&pFVar18->GenericAttributes,
                       UE::PlanarCut::AugmentedDynamicMesh::InternalAttribName);
      if ((pTVar17 ==
           (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
            *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      uVar12 = local_108[0];
      cVar3 = *(char *)((ulonglong)(uVar25 & 0x1ff) +
                       *(longlong *)
                        (*(longlong *)(*(longlong *)&pTVar17->field_0x8 + 0x20) +
                        ((ulonglong)pFVar26 >> 9) * 8));
      pFVar26 = (param_1->AttributeSet).Ptr;
      pFVar18 = pFVar23;
      if (pFVar26 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar18 = pFVar26;
      }
      local_b8 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                         *)&pFVar18->GenericAttributes,
                        UE::PlanarCut::AugmentedDynamicMesh::VisibleAttribName);
      if ((local_b8 ==
           (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
            *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      if (*(char *)((ulonglong)(uVar12 & 0x1ff) +
                   *(longlong *)
                    (*(longlong *)(*(longlong *)&local_b8->field_0x8 + 0x20) +
                    (ulonglong)(uVar12 >> 9) * 8)) != '\0') {
        if (iVar15 != 0) {
          if (iVar15 == 1) {
            if (cVar3 != '\x01') {
LAB_14c9aaa14:
              if (0 < (int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34)) {
                plVar20 = plVar9 + 7;
                if ((longlong *)plVar9[8] != (longlong *)0x0) {
                  plVar20 = (longlong *)plVar9[8];
                }
                iVar15 = *(int *)((longlong)plVar20 +
                                 (ulonglong)((int)plVar9[9] - 1U & local_f0) * 4);
                if (iVar15 != -1) {
                  do {
                    if (*(uint *)(*plVar9 + (longlong)iVar15 * 0xc) == local_f0) goto LAB_14c9aa897;
                    iVar15 = *(int *)(*plVar9 + 4 + (longlong)iVar15 * 0xc);
                  } while (iVar15 != -1);
                }
              }
              goto LAB_14c9aa93f;
            }
          }
          else if ((iVar15 != 2) || (cVar3 == '\x01')) goto LAB_14c9aaa14;
        }
LAB_14c9aa897:
        if (((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)local_108) &&
            ((FScriptContainerElement *)local_108 <
             local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          uVar14 = (*pcVar11)();
          return (bool)uVar14;
        }
        iVar15 = local_100.ArrayNum;
        if (local_100.ArrayNum == local_100.ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
        }
        local_100.ArrayNum = iVar15 + 1;
        *(uint *)(local_100.AllocatorInstance.Data + (longlong)iVar15 * 4) = local_108[0];
      }
LAB_14c9aa93f:
      uVar25 = uVar25 + 1;
      pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar25;
      if ((int)uVar25 < (int)uVar24) {
        do {
          uVar19 = (ulonglong)((uint)pFVar26 & 0x1ff);
          lVar8 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar26 >> 9) * 8);
          if ((*(short *)(lVar8 + uVar19 * 2) != 0) && (*(short *)(lVar8 + uVar19 * 2) != -1))
          goto LAB_14c9aa760;
          uVar25 = (uint)pFVar26 + 1;
          pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)uVar25;
        } while ((int)uVar25 < (int)uVar24);
      }
    } while (uVar25 != uVar24);
    if (local_100.ArrayNum != 0) {
      UE::Geometry::FDynamicMeshUVEditor::FDynamicMeshUVEditor
                (&local_50,param_1,*(int *)((longlong)this + 8),false);
      pdVar10 = *(double **)((longlong)this + 0x10);
      local_70 = 0;
      uStack_68 = 0;
      local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_60 = ___xmm_3ff00000000000000000000000000000;
      uStack_58 = _UNK_15061cbc8;
      if (*(char *)((longlong)this + 0x32) == '\0') {
        local_b0._0_4_ = *(undefined4 *)pdVar10;
        local_b0._4_4_ = *(undefined4 *)((longlong)pdVar10 + 4);
        local_b0._8_4_ = *(undefined4 *)(pdVar10 + 1);
        local_b0._12_4_ = *(undefined4 *)((longlong)pdVar10 + 0xc);
        local_b0._s_0.Z = pdVar10[2];
      }
      else {
        local_b0._16_8_ = *pdVar10;
        local_b0._0_4_ = SUB84(local_b0._s_0.Z,0);
        local_b0._4_4_ = (undefined4)((ulonglong)local_b0._s_0.Z >> 0x20);
        local_b0._8_4_ = local_b0._0_4_;
        local_b0._12_4_ = local_b0._4_4_;
        local_e8._16_8_ = local_b0._s_0.Z;
      }
      if ((*(char *)((longlong)this + 0x31) == '\0') || (*(char *)((longlong)this + 0x30) != '\0'))
      {
        UE::Geometry::FDynamicMesh3::GetBounds
                  (param_1,(TAxisAlignedBox3<double> *)&local_e8._s_0,true);
        if (*(char *)((longlong)this + 0x31) == '\0') {
          local_88._s_0.X = (local_d0 + local_e8._s_0.X) * __real_3fe0000000000000;
          local_88._s_0.Z = (local_c0 + local_e8._s_0.Z) * __real_3fe0000000000000;
          local_88._s_0.Y = (local_c8 + local_e8._s_0.Y) * __real_3fe0000000000000;
        }
        if (*(char *)((longlong)this + 0x30) != '\0') {
          local_b0._s_0.Y = local_c8 - local_e8._s_0.Y;
          local_b0._s_0.Z = local_c0 - local_e8._s_0.Z;
          local_b0._s_0.X = local_d0 - local_e8._s_0.X;
          if (*(char *)((longlong)this + 0x32) != '\0') {
            dVar28 = 0.0;
            if (local_b0._s_0.Y <= 0.0) {
              local_b0._s_0.Y = dVar28;
            }
            if (local_b0._s_0.Z <= 0.0) {
              local_b0._s_0.Z = dVar28;
            }
            dVar29 = local_b0._s_0.X;
            if (local_b0._s_0.X <= 0.0) {
              dVar29 = dVar28;
            }
            if (local_b0._s_0.Y <= local_b0._s_0.Z) {
              local_b0._s_0.Y = local_b0._s_0.Z;
            }
            local_b0._s_0.X = local_b0._s_0.Y;
            local_b0._s_0.Z = local_b0._s_0.Y;
            if (local_b0._s_0.Y <= dVar29) {
              local_b0._s_0.X = dVar29;
              local_b0._s_0.Y = dVar29;
              local_b0._s_0.Z = dVar29;
            }
          }
        }
      }
      local_90 = local_res20;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UE::PlanarCut::BoxProjectUVs'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                 ::Call;
      UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection
                (&local_50,&local_100,
                 (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                  *)&local_98,(TFrame3<double> *)&local_88._s_0,(TVector<double> *)&local_b0._s_0,1,
                 (FUVEditResult *)0x0);
      iVar15 = *(int *)&(local_50.UVOverlay)->field_0xc +
               *(int *)&(local_50.UVOverlay)->field_0x8 * 0x200;
      if (((iVar15 != 0) &&
          (0xfffd < (ushort)(*(short *)**(undefined8 **)&(local_50.UVOverlay)->field_0x10 - 1U))) &&
         (pFVar23 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < iVar15)) {
        do {
          uVar19 = (ulonglong)((uint)pFVar23 & 0x1ff);
          lVar8 = (*(undefined8 **)&(local_50.UVOverlay)->field_0x10)[(ulonglong)pFVar23 >> 9];
          if ((*(short *)(lVar8 + uVar19 * 2) != 0) && (*(short *)(lVar8 + uVar19 * 2) != -1))
          break;
          uVar24 = (uint)pFVar23 + 1;
          pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar24;
        } while ((int)uVar24 < iVar15);
      }
      iVar5 = *(int *)&(local_50.UVOverlay)->field_0x8;
      iVar6 = *(int *)&(local_50.UVOverlay)->field_0xc;
      iVar22 = (int)pFVar23;
      while (iVar22 != iVar5 * 0x200 + iVar6) {
        while( true ) {
          uVar24 = (uint)pFVar23;
          pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar24 + 1);
          uVar27 = (ulonglong)(uVar24 * 2 & 0x1ff);
          uVar19 = (ulonglong)((uVar24 & 0x7fffffff) >> 8);
          lVar8 = *(longlong *)
                   (*(longlong *)&(local_50.UVOverlay)->field_0x48 +
                   (ulonglong)((uVar24 & 0x7fffffff) >> 8) * 8);
          uVar21 = (ulonglong)(uVar24 * 2 + 1 & 0x1ff);
          fVar1 = *(float *)(*(longlong *)
                              (*(longlong *)&(local_50.UVOverlay)->field_0x48 + uVar19 * 8) +
                            uVar21 * 4);
          fVar2 = (*(float **)((longlong)this + 0x28))[1];
          *(float *)(lVar8 + uVar27 * 4) =
               **(float **)((longlong)this + 0x28) + *(float *)(lVar8 + uVar27 * 4);
          *(float *)(*(longlong *)(*(longlong *)&(local_50.UVOverlay)->field_0x48 + uVar19 * 8) +
                    uVar21 * 4) = fVar1 + fVar2;
          if (iVar15 <= (int)(uVar24 + 1)) break;
          while( true ) {
            sVar4 = *(short *)(*(longlong *)
                                (*(longlong *)&(local_50.UVOverlay)->field_0x10 +
                                ((ulonglong)pFVar23 >> 9) * 8) +
                              (ulonglong)((uint)pFVar23 & 0x1ff) * 2);
            if ((sVar4 != 0) && (sVar4 != -1)) break;
            uVar24 = (uint)pFVar23 + 1;
            pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar24;
            if (iVar15 <= (int)uVar24) goto LAB_14c9aac8f;
          }
        }
LAB_14c9aac8f:
        iVar22 = (int)pFVar23;
      }
      bVar13 = true;
      goto LAB_14c9aacaa;
    }
  }
  bVar13 = false;
LAB_14c9aacaa:
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return bVar13;
}

// operator() @ 14c9ab9e0

void __thiscall
`UE::PlanarCut::AugmentedDynamicMesh::FillHoles'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  longlong lVar2;
  TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
  *this_01;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int *piVar8;
  ForElementType<FSetElementId> FVar9;
  undefined1 local_res8 [8];
  uint local_res10 [4];
  longlong local_a8;
  TVector<double>_u_0 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  TTuple<int,double> local_78;
  TVector<double>_u_0 local_68 [4];
  
  this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 0x20);
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar9 = (this_00->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar7 = *(int *)((longlong)FVar9 + (ulonglong)(this_00->HashSize - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)(*(longlong *)&this_00->Elements + (longlong)iVar7 * 0xc) == param_1) {
          return;
        }
        iVar7 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (this_00,(int *)local_res8,(bool *)local_res10);
  local_a8 = *(longlong *)this;
  lVar2 = *(longlong *)(*(longlong *)(local_a8 + 0x10) + (ulonglong)(local_res10[0] >> 9) * 8);
  pdVar1 = (double *)(lVar2 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_68[0]._0_8_ = *pdVar1;
  local_68[0]._8_8_ = pdVar1[1];
  local_68[0]._16_8_ = *(double *)(lVar2 + 0x10 + (ulonglong)(local_res10[0] & 0x1ff) * 0x18);
  local_a0 = local_68;
  local_90 = local_res8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindNearestInRadius'::__l2::<lambda_1>,bool,int_const_&>
             ::Call;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``UE::PlanarCut::AugmentedDynamicMesh::FillHoles'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,double,int_const_&>
       ::Call;
  local_88._8_8_ = &local_a8;
  UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>
            (*(TPointHashGrid3<int,double> **)((longlong)this + 0x10),&local_78,
             (TVector<double> *)&local_68[0]._s_0,*(double *)((longlong)this + 8),
             (TFunctionRef<double___cdecl(int_const_&)> *)local_88,
             (TFunctionRef<bool___cdecl(int_const_&)> *)&local_98);
  if (local_78._0_4_ != -1) {
    local_res8._0_4_ = local_78._0_4_;
    piVar8 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::Find
                       (*(TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          **)((longlong)this + 0x18),local_78._0_4_);
    if (piVar8 != (int *)0x0) {
      local_res8._0_4_ = *piVar8;
    }
    local_88._0_8_ = local_res10;
    local_88._8_8_ = local_res8;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x18),
               (TPairInitializer<int_const_&,int_const_&> *)(local_res10 + 2),(bool *)local_88);
  }
  dVar6 = __real_41f0000000000000;
  this_01 = *(TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
              **)((longlong)this + 0x10);
  dVar3 = FGenericPlatformMath::Fmod
                    ((double)local_68[0]._16_8_ / *(double *)&this_01[1].Elements.field_0x8,
                     __real_41f0000000000000);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar6;
  }
  dVar4 = FGenericPlatformMath::Fmod
                    ((double)local_68[0]._8_8_ / *(double *)&this_01[1].Elements.field_0x8,dVar6);
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + dVar6;
  }
  dVar5 = FGenericPlatformMath::Fmod
                    ((double)local_68[0]._0_8_ / *(double *)&this_01[1].Elements.field_0x8,dVar6);
  if (dVar5 < 0.0) {
    dVar5 = dVar5 + dVar6;
  }
  local_a8 = CONCAT44((int)(longlong)dVar4,(int)(longlong)dVar5);
  local_a0 = (TVector<double>_u_0 *)CONCAT44(local_a0._4_4_,(int)(longlong)dVar3);
  local_88._0_8_ = &local_a8;
  local_88._8_8_ = local_res10;
  TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
            (this_01,(TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)local_res8,
             (bool *)local_88);
  return;
}

// operator() @ 14c9acfa0

bool __thiscall
`UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  short sVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  double *pdVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  FDynamicMeshAttributeSet *this_00;
  atomic<unsigned_char> *paVar16;
  longlong lVar17;
  uint uVar18;
  ulong64 uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  longlong local_res20;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_1a8;
  uint local_198 [2];
  ForAnyElementType local_190;
  int local_188 [2];
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_178;
  ForAnyElementType local_168;
  int local_160 [3];
  undefined4 uStack_154;
  TArray<bool,TSizedDefaultAllocator<32>_> local_150;
  FMeshConnectedComponents local_140;
  float local_128;
  undefined8 local_124;
  int *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  code *local_108;
  float *local_100;
  FPatchBasedMeshUVGenerator local_f8;
  TArrayView<int_const_,int> local_98;
  code *local_88 [2];
  undefined **local_78;
  FDynamicMesh3 *local_70;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_68;
  undefined8 local_60;
  
  pFVar4 = (param_1->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar4;
  }
  local_res10 = param_1;
  local_180 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                        (this_00,*(int *)((longlong)this + 0x18));
  if (local_180 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    pcVar15 = "UVLayer";
    iVar14 = 0x1ca;
    paVar16 = &bGEnsureHasExecuted<3583510206845288906>;
LAB_14c9adb20:
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (paVar16,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                        ,iVar14,pcVar15);
    if (!bVar10) {
      return false;
    }
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  lVar17 = *(longlong *)((longlong)this + 0x10);
  uVar18 = 0;
  if (param_2 < *(int *)(lVar17 + 0x198)) {
    uVar18 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  lVar23 = *(longlong *)((longlong)this + 0x10);
  uVar18 = *(uint *)(*(longlong *)(lVar17 + 400) + (longlong)param_2 * 4);
  uVar21 = 0;
  if ((int)uVar18 < *(int *)(lVar23 + 0x478)) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  lVar17 = *(longlong *)((longlong)this + 0x10);
  iVar14 = (param_1->TriangleRefCounts).UsedCount;
  iVar13 = *(int *)(*(longlong *)(lVar23 + 0x470) + (longlong)(int)uVar18 * 4);
  uVar21 = 0;
  if ((int)uVar18 < *(int *)(lVar17 + 0x498)) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if ((*(int *)(*(longlong *)(lVar17 + 0x490) + (longlong)(int)uVar18 * 4) != iVar14) ||
     ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed != 0)) {
    pcVar15 = "Collection.FaceCount[GeometryIndex] == Mesh.TriangleCount() && Mesh.IsCompactT()";
    iVar14 = 0x1d3;
    paVar16 = &bGEnsureHasExecuted<3583510206845288915>;
    goto LAB_14c9adb20;
  }
  uVar22 = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  uVar21 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar18 = uVar22;
  if ((uVar21 == 0) ||
     (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar5 - 1U) < 0xfffe)) {
LAB_14c9ad1b8:
    bVar10 = uVar18 == uVar21;
  }
  else {
    uVar18 = 1;
    bVar10 = uVar21 == 1;
    if (1 < (int)uVar21) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)uVar21);
      goto LAB_14c9ad1b8;
    }
  }
  if (!bVar10) {
LAB_14c9ad1c1:
    do {
      plVar6 = *(longlong **)((longlong)this + 8);
      uVar1 = iVar13 + uVar18;
      uVar12 = uVar22;
      if ((int)uVar1 < (int)plVar6[1]) {
        uVar12 = ~uVar1 >> 0x1f;
      }
      local_198[0] = uVar18;
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      if (*(char *)((longlong)(int)uVar1 + *plVar6) != '\0') {
        if (((local_178.AllocatorInstance.Data <= (FScriptContainerElement *)local_198) &&
            ((FScriptContainerElement *)local_198 <
             local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if (local_178.ArrayNum == local_178.ArrayMax) {
          local_178.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_178.AllocatorInstance,&local_178.ArrayMax);
        }
        lVar17 = (longlong)local_178.ArrayNum;
        local_178.ArrayNum = local_178.ArrayNum + 1;
        *(uint *)(local_178.AllocatorInstance.Data + lVar17 * 4) = local_198[0];
      }
      uVar18 = uVar18 + 1;
      if ((int)uVar18 < (int)uVar21) {
        pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          if ((*(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) goto LAB_14c9ad1c1;
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar21);
      }
    } while (uVar18 != uVar21);
    if (local_178.ArrayNum != 0) {
      pdVar7 = *(double **)this;
      local_f8.PatchNormalWeight = __real_3ff0000000000000;
      local_f8.CompactnessThreshold = __real_416312cfe0000000;
      local_f8.GroupConstraint = (FPolygroupSet *)0x0;
      local_f8.TargetPatchCount = 100;
      local_f8.bNormalWeightedPatches = true;
      local_f8.MinPatchSize = 2;
      local_f8.bAutoAlignPatches = true;
      local_f8.bAutoPack = true;
      local_f8.PackingTextureResolution = 0x200;
      local_f8.PackingGutterWidth = 1.0;
      local_f8.MergingThreshold = *pdVar7;
      local_f8.MaxNormalDeviationDeg = pdVar7[1];
      local_f8.NormalSmoothingAlpha = pdVar7[3];
      local_f8.NormalSmoothingRounds = *(int *)(pdVar7 + 2);
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<``UE::PlanarCut::MergeUVIslands'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68 = &local_180;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
                    ::Call;
      local_140.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Components.Array.ArrayNum = 0;
      local_140.Components.Array.ArrayMax = 0;
      local_60 = 0;
      local_140.Mesh = param_1;
      local_70 = param_1;
      UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
                (&local_140,&local_178,(TFunction<bool___cdecl(int,int)> *)local_88);
      local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.ArrayNum = 0;
      local_1a8.ArrayMax = 0;
      UE::Geometry::FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging
                (&local_f8,param_1,local_180,&local_140,true,&local_1a8,(FProgressCancel *)0x0);
      iVar14 = local_1a8.ArrayNum;
      uVar19 = local_1a8._8_8_ & 0xffffffff;
      if (local_1a8.ArrayNum == 0) {
        bVar10 = false;
        iVar14 = 0;
      }
      else {
        iVar13 = 0;
        local_168.Data = (FScriptContainerElement *)0x0;
        local_160[0] = 0;
        local_160[1] = 0;
        local_190.Data = (FScriptContainerElement *)0x0;
        local_188[0] = 0;
        local_188[1] = 0;
        if (local_1a8.ArrayNum < 1) {
          if (local_1a8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar19);
          }
        }
        else {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,local_1a8.ArrayNum,&local_168,local_160,local_160 + 1);
          memset(local_168.Data + (longlong)iVar13 * 8,0,(longlong)iVar14 << 3);
          uVar19 = local_1a8._8_8_ & 0xffffffff;
          iVar13 = local_188[0];
        }
        uVar18 = (uint)uVar19;
        if (iVar13 < (int)uVar18) {
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,4,uVar18 - iVar13,&local_190,local_188,local_188 + 1);
          memset(local_190.Data + (longlong)iVar14 * 8,0,(longlong)(int)(uVar18 - iVar13) << 3);
LAB_14c9ad5ad:
          uVar19 = local_1a8._8_8_ & 0xffffffff;
        }
        else {
          if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar19);
          }
          if ((int)uVar18 < iVar13) {
            uVar21 = iVar13 - uVar18;
            if ((int)(uVar21 | uVar18) < 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 );
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              uVar19 = local_1a8._8_8_ & 0xffffffff;
              iVar13 = local_188[0];
            }
            if (uVar21 != 0) {
              iVar14 = (iVar13 - uVar18) - uVar21;
              if (iVar14 != 0) {
                memmove(local_190.Data + (longlong)(int)uVar18 * 8,
                        local_190.Data + (longlong)(int)uVar18 * 8 + (longlong)(int)uVar21 * 8,
                        (longlong)iVar14 << 3);
                iVar13 = local_188[0];
              }
              local_188[0] = iVar13 - uVar21;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,&local_190,iVar13 - uVar21,local_188 + 1);
              goto LAB_14c9ad5ad;
            }
          }
        }
        uVar18 = 0;
        if (0 < (int)uVar19) {
          local_res20 = 0;
          lVar17 = 0;
          do {
            uVar22 = ~uVar18 >> 0x1f;
            uVar21 = 0;
            if ((int)uVar18 < (int)uVar19) {
              uVar21 = uVar22;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            dVar24 = UE::Geometry::FDynamicMeshUVEditor::DetermineAreaFromUVs
                               (local_180,
                                (TArray<int,TSizedDefaultAllocator<32>_> *)
                                (local_1a8.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10),
                                (TAxisAlignedBox2<float> *)0x0);
            uVar21 = 0;
            if ((int)uVar18 < local_160[0]) {
              uVar21 = uVar22;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            *(double *)(local_168.Data + local_res20 * 8) = dVar24;
            uVar21 = 0;
            if ((int)uVar18 < local_1a8.ArrayNum) {
              uVar21 = uVar22;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            FVar9.Data = local_1a8.AllocatorInstance.Data;
            piVar20 = *(int **)(local_1a8.AllocatorInstance.Data + lVar17);
            iVar14 = *(int *)(local_1a8.AllocatorInstance.Data + lVar17 + 8);
            piVar2 = piVar20 + iVar14;
            while( true ) {
              if (*(int *)(FVar9.Data + lVar17 + 8) != iVar14) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res8);
              }
              if (piVar20 == piVar2) goto LAB_14c9ad7d3;
              uVar21 = *(uint *)(*(longlong *)
                                  (*(longlong *)&local_180->field_0x78 +
                                  (ulonglong)((uint)(*piVar20 * 3) >> 9) * 8) +
                                (ulonglong)(*piVar20 * 3 & 0x1ff) * 4);
              if (uVar21 != 0xffffffff) break;
              piVar20 = piVar20 + 1;
            }
            local_160[2] = *(undefined4 *)
                            (*(longlong *)
                              (*(longlong *)&local_180->field_0x48 +
                              (ulonglong)((uVar21 & 0x7fffffff) >> 8) * 8) +
                            (ulonglong)(uVar21 * 2 & 0x1ff) * 4);
            uStack_154 = *(undefined4 *)
                          (*(longlong *)
                            (*(longlong *)&local_180->field_0x48 +
                            (ulonglong)((uVar21 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar21 * 2 + 1 & 0x1ff) * 4);
            uVar21 = 0;
            if ((int)uVar18 < local_188[0]) {
              uVar21 = uVar22;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            *(ulonglong *)(local_190.Data + local_res20 * 8) = CONCAT44(uStack_154,local_160[2]);
LAB_14c9ad7d3:
            uVar19 = local_1a8._8_8_ & 0xffffffff;
            local_res20 = local_res20 + 1;
            uVar18 = uVar18 + 1;
            lVar17 = lVar17 + 0x10;
            param_1 = local_res10;
          } while ((int)uVar18 < local_1a8.ArrayNum);
        }
        local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_150.ArrayNum = 0;
        local_150.ArrayMax = 0;
        UE::Geometry::FPatchBasedMeshUVGenerator::ComputeUVsFromTriangleSets
                  (&local_f8,param_1,local_180,&local_1a8,&local_150,(FProgressCancel *)0x0);
        uVar18 = 0;
        if (0 < local_1a8.ArrayNum) {
          lVar23 = 0;
          lVar17 = 0;
          do {
            uVar22 = ~uVar18 >> 0x1f;
            uVar21 = 0;
            if ((int)uVar18 < local_1a8.ArrayNum) {
              uVar21 = uVar22;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            dVar24 = UE::Geometry::FDynamicMeshUVEditor::DetermineAreaFromUVs
                               (local_180,
                                (TArray<int,TSizedDefaultAllocator<32>_> *)
                                (local_1a8.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10),
                                (TAxisAlignedBox2<float> *)0x0);
            uVar21 = 0;
            if ((int)uVar18 < local_160[0]) {
              uVar21 = uVar22;
            }
            if (uVar21 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
            }
            if ((0.0 < *(double *)(local_168.Data + lVar17)) && (0.0 < dVar24)) {
              uVar21 = 0;
              if ((int)uVar18 < local_160[0]) {
                uVar21 = uVar22;
              }
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              auVar25._0_8_ = *(double *)(local_168.Data + lVar17) / dVar24;
              auVar25._8_8_ = 0;
              uVar21 = 0;
              if ((int)uVar18 < local_188[0]) {
                uVar21 = uVar22;
              }
              auVar25 = sqrtpd(auVar25,auVar25);
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              local_108 = UE::Core::Private::Function::
                          TFunctionRefCaller<``UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>::operator()'::__l37::<lambda_2>,UE::Math::TVector2<float>,UE::Math::TVector2<float>_const_&>
                          ::Call;
              local_124 = *(undefined8 *)(local_190.Data + lVar17);
              local_100 = &local_128;
              uVar21 = 0;
              if ((int)uVar18 < local_1a8.ArrayNum) {
                uVar21 = uVar22;
              }
              local_128 = (float)auVar25._0_8_;
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              local_118 = *(int **)(local_1a8.AllocatorInstance.Data + lVar23);
              iVar14 = *(int *)(local_1a8.AllocatorInstance.Data + lVar23 + 8);
              if ((iVar14 < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              local_98._12_4_ = uStack_10c;
              local_98.ArrayNum = iVar14;
              local_98.DataPtr = local_118;
              iStack_110 = iVar14;
              UE::Geometry::FDynamicMeshUVEditor::TransformTriangleSelectionUVs
                        (local_180,&local_98,
                         (TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>_const_&)>
                          *)&local_108);
            }
            uVar18 = uVar18 + 1;
            lVar17 = lVar17 + 8;
            lVar23 = lVar23 + 0x10;
          } while ((int)uVar18 < local_1a8.ArrayNum);
        }
        bVar10 = true;
        iVar14 = local_1a8.ArrayNum;
        if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.AllocatorInstance.Data);
          iVar14 = local_1a8.ArrayNum;
        }
        if (local_190.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data);
          iVar14 = local_1a8.ArrayNum;
        }
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data);
          iVar14 = local_1a8.ArrayNum;
        }
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1a8.AllocatorInstance.Data,iVar14)
      ;
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1a8.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1a8.AllocatorInstance.Data);
      }
      TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                (&local_140.Components);
      goto LAB_14c9adaf8;
    }
  }
  bVar10 = false;
LAB_14c9adaf8:
  if (local_178.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return bVar10;
  }
  FMemory::Free(local_178.AllocatorInstance.Data);
  return bVar10;
}

// operator() @ 14c9ae990

bool __thiscall
`UE::PlanarCut::AugmentedDynamicMesh::ComputeTangents'::__l5::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  double dVar6;
  
  cVar1 = *(char *)((ulonglong)(param_2 & 0x1ff) +
                   *(longlong *)
                    (*(longlong *)(**(longlong **)this + 0x20) + (ulonglong)((uint)param_2 >> 9) * 8
                    ));
  cVar2 = *(char *)((ulonglong)(param_3 & 0x1ff) +
                   *(longlong *)
                    (*(longlong *)(**(longlong **)this + 0x20) + (ulonglong)((uint)param_3 >> 9) * 8
                    ));
  if (cVar1 != cVar2) {
    return false;
  }
  if ((**(char **)((longlong)this + 8) != '\0') && ((cVar1 == '\0' || (cVar2 == '\0')))) {
    bVar3 = UE::Geometry::TDynamicMeshOverlay<float,3>::AreTrianglesConnected
                      (*(TDynamicMeshOverlay<float,3> **)((longlong)this + 0x20),param_2,param_3);
    return bVar3;
  }
  pTVar4 = UE::Geometry::FMeshNormals::operator[](*(FMeshNormals **)((longlong)this + 0x10),param_2)
  ;
  pTVar5 = UE::Geometry::FMeshNormals::operator[](*(FMeshNormals **)((longlong)this + 0x10),param_3)
  ;
  dVar6 = (pTVar5->field0_0x0)._s_0.Y * (pTVar4->field0_0x0)._s_0.Y +
          (pTVar5->field0_0x0)._s_0.X * (pTVar4->field0_0x0)._s_0.X +
          (pTVar5->field0_0x0)._s_0.Z * (pTVar4->field0_0x0)._s_0.Z;
  return **(double **)((longlong)this + 0x18) <= dVar6 &&
         dVar6 != **(double **)((longlong)this + 0x18);
}

// operator() @ 14c9aebd0

float __thiscall
`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l31::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  plVar1 = *(longlong **)this;
  uVar8 = param_1 - *(int *)((longlong)this + 0x10);
  uVar6 = 0;
  if ((int)uVar8 < (int)plVar1[1]) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar9 = (float)(*pcVar4)();
      return fVar9;
    }
  }
  lVar2 = *plVar1;
  lVar7 = (longlong)(int)uVar8;
  pfVar3 = *(float **)((longlong)this + 8);
  fVar9 = *(float *)(lVar2 + 4 + lVar7 * 0xc) - pfVar3[1];
  fVar11 = *(float *)(lVar2 + lVar7 * 0xc) - *pfVar3;
  fVar10 = *(float *)(lVar2 + 8 + lVar7 * 0xc) - pfVar3[2];
  return fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
}

// operator() @ 14c9af1f0

bool __thiscall
`UE::PlanarCut::AugmentedDynamicMesh::FillHoles'::__l2::<lambda_3>::operator()
          (void *this,int param_1,int param_2)

{
  TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
  *this_00;
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iStack_2c;
  
  this_00 = *(TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
              **)this;
  iVar2 = -1;
  iStack_2c = -1;
  if (this_00->HashSize != 0) {
    FVar3 = (this_00->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + ((longlong)this_00->HashSize - 1U & (longlong)param_1) * 4);
    iStack_2c = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)&this_00->Elements + 0xc + (longlong)iStack_2c * 0x14);
        if (*(int *)(*(longlong *)&this_00->Elements + (longlong)iStack_2c * 0x14) == param_1)
        break;
        iStack_2c = iVar2;
      } while (iVar2 != -1);
    }
  }
  if (iStack_2c != -1) {
    lVar1 = *(longlong *)&this_00->Elements;
    do {
      if (*(int *)(lVar1 + 4 + (longlong)iStack_2c * 0x14) == param_2) {
        TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
        ::RemoveByIndex(this_00,iStack_2c);
        return true;
      }
      do {
        iStack_2c = iVar2;
        iVar2 = iStack_2c;
        if (iStack_2c == -1) break;
        iVar2 = *(int *)(lVar1 + 0xc + (longlong)iStack_2c * 0x14);
      } while (*(int *)(lVar1 + (longlong)iStack_2c * 0x14) != param_1);
    } while (iStack_2c != -1);
  }
  return false;
}

// operator() @ 14c9af310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  FGeomFlatUVMesh *this_00;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  bool *pbVar16;
  TVector<float> *pTVar17;
  TVector4<float> *pTVar18;
  longlong *plVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auStackY_308 [32];
  undefined8 local_2d8;
  float local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  double *local_298;
  undefined8 *local_290;
  double local_288;
  double local_280;
  double local_278;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 TStack_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<float> local_1a8;
  undefined8 local_198 [2];
  longlong local_188;
  longlong local_178 [3];
  longlong *local_160;
  undefined1 local_158;
  TVector<double>_u_0 local_148;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_b8;
  
  uVar11 = _UNK_15076b1f8;
  uVar10 = ___xmm_3f8000003f8000003f8000003f800000;
  fVar9 = __real_3f000000;
  fVar8 = __real_3f800000;
  dVar7 = __real_3ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  piVar20 = *(int **)((longlong)this + 0x18);
  iVar22 = 0;
  iVar14 = *piVar20;
  if (0 < iVar14) {
    lVar23 = 0;
    local_2a8 = (longlong)param_1;
    do {
      lVar24 = iVar14 * local_2a8 + lVar23;
      uVar21 = (uint)((ulonglong)lVar24 >> 0x3f) ^ 1;
      uVar15 = 0;
      if (lVar24 < *(longlong *)(piVar20 + 0xc)) {
        uVar15 = uVar21;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(char *)(lVar24 + *(longlong *)(piVar20 + 10)) == '\x01') {
        lVar1 = *(longlong *)((longlong)this + 0x18);
        local_2c8 = uVar10;
        uStack_2c0 = uVar11;
        uVar15 = 0;
        if (lVar24 < *(longlong *)(lVar1 + 0x78)) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)((longlong)this + 0x18);
        iVar14 = *(int *)(*(longlong *)(lVar1 + 0x70) + lVar24 * 4);
        uVar15 = 0;
        if (lVar24 < *(longlong *)(lVar2 + 0x60)) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = *(FGeomFlatUVMesh **)((longlong)this + 0x10);
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x58) + lVar24 * 8);
        local_2b8._0_4_ = (float)uVar3;
        local_2b8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        dVar5 = (double)(float)local_2b8;
        dVar6 = (double)local_2b8._4_4_;
        local_2b8 = uVar3;
        pbVar16 = TArrayView<bool,int>::operator[](&this_00->ActiveTriangles,iVar14);
        if ((*pbVar16 == false) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mesh.IsTriangle(TriIdx)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                ,0x1e,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::PlanarCut::FGeomFlatUVMesh::GetTriVertices
                  (this_00,iVar14,(TVector<double> *)&local_1f8._s_0,
                   (TVector<double> *)&TStack_1e0._s_0,(TVector<double> *)&local_1c8._s_0);
        local_130 = local_1f8._s_0.X;
        dStack_128 = local_1f8._s_0.Y;
        local_110 = TStack_1e0._s_0.Y;
        dStack_108 = TStack_1e0._s_0.Z;
        local_120 = local_1f8._s_0.Z;
        dStack_118 = TStack_1e0._s_0.X;
        local_f0 = local_1c8._s_0.Z;
        local_148._s_0.Z = 0.0;
        local_100 = local_1c8._s_0.X;
        dStack_f8 = local_1c8._s_0.Y;
        local_148._s_0.X = dVar5;
        local_148._s_0.Y = dVar6;
        UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                  ((TDistPoint3Triangle3<double> *)&local_148._s_0);
        dVar6 = dStack_e0;
        dVar5 = local_e8;
        local_218._s_0.X = local_e8;
        local_218._s_0.Y = dStack_e0;
        local_218._s_0.Z = local_d8;
        local_2d8 = 0;
        local_2d0 = 1.0;
        if ((((**(uint **)((longlong)this + 0x40) < 0x80000000) ||
             (**(uint **)((longlong)this + 0x48) < 0x80000000)) ||
            (**(uint **)((longlong)this + 0x50) < 0x80000000)) ||
           (-1 < **(int **)((longlong)this + 0x38))) {
          pTVar17 = UE::PlanarCut::FGeomMesh::GetInterpolatedNormal
                              (*(FGeomMesh **)((longlong)this + 0x20),&local_1a8,iVar14,
                               (TVector<double> *)&local_218._s_0);
          local_2d8 = *(undefined8 *)&pTVar17->field0_0x0;
          local_2d0 = (pTVar17->field0_0x0)._s_0.Z;
        }
        if (((**(uint **)((longlong)this + 0x30) < 0x80000000) ||
            (**(uint **)((longlong)this + 0x58) < 0x80000000)) ||
           ((**(uint **)((longlong)this + 0x60) < 0x80000000 ||
            (-1 < **(int **)((longlong)this + 0x68))))) {
          UE::PlanarCut::FGeomMesh::GetTriVertices
                    (*(FGeomMesh **)((longlong)this + 0x20),iVar14,
                     (TVector<double> *)&local_268._s_0,(TVector<double> *)&local_250._s_0,
                     (TVector<double> *)&local_238._s_0);
          local_288 = dVar6 * local_250._s_0.X + dVar5 * local_268._s_0.X +
                      local_d8 * local_238._s_0.X;
          local_280 = dVar6 * local_250._s_0.Y + dVar5 * local_268._s_0.Y +
                      local_d8 * local_238._s_0.Y;
          local_278 = dVar6 * local_250._s_0.Z + dVar5 * local_268._s_0.Z +
                      local_d8 * local_238._s_0.Z;
          if (-1 < **(int **)((longlong)this + 0x30)) {
            local_198[0] = **(undefined8 **)this;
            local_188 = 0;
            local_160 = (longlong *)0x0;
            local_158 = 0;
            (**(code **)(**(longlong **)((longlong)this + 0x28) + 0x20))
                      (*(longlong **)((longlong)this + 0x28),&local_288,&local_2b0,local_198);
            if (local_188 != 0) {
              plVar19 = local_178;
              if (local_160 != (longlong *)0x0) {
                plVar19 = local_160;
              }
              (**(code **)(*plVar19 + 0x10))();
            }
            auVar25._8_8_ = 0;
            auVar25._0_8_ = local_2b0;
            auVar25 = sqrtpd(auVar25,auVar25);
            uVar15 = **(uint **)((longlong)this + 0x30);
            fVar26 = (float)(auVar25._0_8_ * (dVar7 / **(double **)this));
            if (fVar8 <= fVar26) {
              fVar26 = fVar8;
            }
            if ((3 < uVar15) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(Index)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                    ,0x310,L""), bVar13)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(float *)((longlong)&local_2c8 + (longlong)(int)uVar15 * 4) = fVar26;
          }
          local_2a0 = *(undefined8 *)((longlong)this + 0x28);
          local_298 = &local_288;
          local_290 = &local_2c8;
          ``UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_3>::operator()'::__l14::<lambda_1>
          ::operator()(&local_2a0,**(int **)((longlong)this + 0x58),0);
          ``UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_3>::operator()'::__l14::<lambda_1>
          ::operator()(&local_2a0,**(int **)((longlong)this + 0x60),1);
          ``UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_3>::operator()'::__l14::<lambda_1>
          ::operator()(&local_2a0,**(int **)((longlong)this + 0x68),2);
        }
        uVar15 = **(uint **)((longlong)this + 0x40);
        if (-1 < (int)uVar15) {
          if ((3 < uVar15) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x310,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(float *)((longlong)&local_2c8 + (longlong)(int)uVar15 * 4) =
               ((float)local_2d8 + fVar8) * fVar9;
        }
        uVar15 = **(uint **)((longlong)this + 0x48);
        if (-1 < (int)uVar15) {
          if ((3 < uVar15) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x310,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(float *)((longlong)&local_2c8 + (longlong)(int)uVar15 * 4) =
               (local_2d8._4_4_ + fVar8) * fVar9;
        }
        uVar15 = **(uint **)((longlong)this + 0x50);
        if (-1 < (int)uVar15) {
          if ((3 < uVar15) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x310,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(float *)((longlong)&local_2c8 + (longlong)(int)uVar15 * 4) = (local_2d0 + fVar8) * fVar9
          ;
        }
        uVar12 = uStack_2c0;
        uVar3 = local_2c8;
        pTVar18 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                            ((TDenseGrid2<UE::Math::TVector4<float>_> *)
                             (*(longlong *)((longlong)this + 8) + 8),lVar24);
        *(undefined8 *)&pTVar18->field0_0x0 = uVar3;
        *(undefined8 *)((longlong)&pTVar18->field0_0x0 + 8) = uVar12;
      }
      piVar20 = *(int **)((longlong)this + 0x18);
      iVar22 = iVar22 + 1;
      lVar23 = lVar23 + 1;
      iVar14 = *piVar20;
    } while (iVar22 < iVar14);
  }
  return;
}

// operator() @ 14c9af980

float __thiscall
`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l45::<lambda_3>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  plVar1 = *(longlong **)this;
  uVar8 = param_1 - *(int *)((longlong)this + 0x10);
  uVar6 = 0;
  if ((int)uVar8 < (int)plVar1[1]) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar9 = (float)(*pcVar4)();
      return fVar9;
    }
  }
  lVar2 = *plVar1;
  lVar7 = (longlong)(int)uVar8;
  pfVar3 = *(float **)((longlong)this + 8);
  fVar9 = *(float *)(lVar2 + 4 + lVar7 * 0xc) - pfVar3[1];
  fVar11 = *(float *)(lVar2 + lVar7 * 0xc) - *pfVar3;
  fVar10 = *(float *)(lVar2 + 8 + lVar7 * 0xc) - pfVar3[2];
  return fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
}

// operator() @ 14c9afa40

void __thiscall
`UE::PlanarCut::AugmentedDynamicMesh::FillHoles'::__l2::<lambda_4>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  int local_res8;
  int local_resc;
  int local_res10 [2];
  TPairInitializer<int_const_&,TTuple<int,int>_&&> local_res18;
  int *local_28;
  int *local_20;
  
  plVar1 = (longlong *)**(longlong **)((longlong)this + 8);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar6 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar6 = plVar1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *plVar1);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 1;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            param_1 = *piVar4;
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  plVar1 = (longlong *)**(longlong **)((longlong)this + 8);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar6 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar6 = plVar1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *plVar1);
        if (*piVar5 == param_2) {
          piVar4 = piVar5 + 1;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            param_2 = *piVar4;
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  if ((param_1 != param_2) &&
     (local_res10[0] = param_1,
     bVar2 = __l2::<lambda_3>::operator()(*(void **)((longlong)this + 0x10),param_2,param_1), !bVar2
     )) {
    local_28 = local_res10;
    local_20 = &local_res8;
    local_res8 = param_2;
    local_resc = param_3;
    TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TTuple<int,int>_&&>_>
              (*(TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
                 **)this,&local_res18,(bool *)&local_28);
  }
  return;
}

// operator() @ 14c9afb70

void __thiscall
`UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_4>::operator()
          (void *this,int param_1,TArray<float,TSizedDefaultAllocator<64>_> *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TVector4<float> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (-1 < param_1) {
    lVar6 = 0;
    lVar7 = (longlong)(*(int **)((longlong)this + 8))[1] * (longlong)**(int **)((longlong)this + 8);
    if (0 < lVar7) {
      do {
        pTVar5 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                           ((TDenseGrid2<UE::Math::TVector4<float>_> *)(*(longlong *)this + 8),lVar6
                           );
        local_38 = *(undefined8 *)&pTVar5->field0_0x0;
        uStack_30 = *(undefined8 *)((longlong)&pTVar5->field0_0x0 + 8);
        if ((param_2->ArrayNum <= lVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(undefined4 *)((param_2->AllocatorInstance).Data + lVar6 * 4);
        if ((3 < (uint)param_1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x310,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)this;
        *(undefined4 *)((longlong)&local_38 + (longlong)param_1 * 4) = uVar1;
        pTVar5 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                           ((TDenseGrid2<UE::Math::TVector4<float>_> *)(lVar2 + 8),lVar6);
        lVar6 = lVar6 + 1;
        *(undefined8 *)&pTVar5->field0_0x0 = local_38;
        *(undefined8 *)((longlong)&pTVar5->field0_0x0 + 8) = uStack_30;
      } while (lVar6 < lVar7);
    }
  }
  return;
}

// AddCollisionSamplesPerComponent @ 14c9b0ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::AddCollisionSamplesPerComponent
          (FDynamicMesh3 *param_1,double param_2)

{
  double *pdVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  ForAnyElementType FVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
  *pTVar19;
  uint *puVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  uint local_3a8;
  undefined1 local_3a4;
  undefined1 local_3a3 [3];
  TArray<int,TSizedDefaultAllocator<32>_> local_3a0;
  ForAnyElementType local_390;
  int local_388;
  int local_384;
  undefined1 local_380 [8];
  FDynamicMesh3 *local_378;
  undefined1 local_370 [16];
  double dStack_360;
  double local_358;
  undefined1 local_350 [16];
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  undefined8 local_318;
  uint local_310;
  longlong local_308;
  FMeshConnectedComponents local_300;
  double local_2e8;
  double dStack_2e0;
  undefined8 local_2d8;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  FVector3i *local_2c0;
  uint *local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  FVector3i local_298;
  double local_288 [6];
  uint *local_258;
  double local_250;
  double local_248;
  longlong local_240;
  uint *local_238;
  TVector<double>_u_0 local_230;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_208;
  ulonglong local_1f8;
  double local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  undefined8 *local_1d8;
  double local_1d0 [3];
  code *local_1b8;
  undefined1 *local_1b0;
  code *local_1a8;
  FDynamicMesh3 **local_1a0;
  TVector<double>_u_0 local_198;
  float local_180;
  float local_17c;
  float local_178;
  undefined8 local_174;
  float local_16c;
  TVector2<float>_u_0 local_168;
  undefined2 local_160;
  undefined1 local_15e;
  undefined4 *local_158;
  int *local_150;
  TTuple<int,double> local_148;
  TVector4<float>_u_0 local_138;
  FDynamicMesh3 *local_128;
  undefined1 local_120 [16];
  double local_110;
  TFunction<bool___cdecl(int,int)> local_108 [3];
  
  uVar23 = 0;
  local_300.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.Components.Array.ArrayNum = 0;
  local_300.Components.Array.ArrayMax = 0;
  local_108[0]._0_8_ = 0;
  local_108[0]._40_8_ = 0;
  local_378 = param_1;
  local_300.Mesh = param_1;
  local_248 = param_2;
  UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles(&local_300,local_108);
  local_390.Data = (FScriptContainerElement *)0x0;
  local_388 = 0;
  local_384 = 0;
  if (local_300.Components.Array.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(local_300.Components.Array._8_8_ & 0xffffffff);
  }
  if (0 < local_300.Components.Array.ArrayNum) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,local_300.Components.Array.ArrayNum,&local_390,0,&local_384);
  }
  if (0 < local_300.Components.Array.ArrayNum) {
    dVar36 = param_2 * ___real_3febb67ae8584ca9;
    uVar18 = uVar23;
    do {
      if (local_388 == local_384) {
        local_388 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&local_390,&local_384);
      }
      lVar12 = (longlong)local_388;
      local_388 = local_388 + 1;
      UE::Geometry::TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
                ((TPointHashGrid3<int,double> *)(local_390.Data + lVar12 * 0x68),dVar36,-1);
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < local_300.Components.Array.ArrayNum);
  }
  local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.ArrayNum = 0;
  local_3a0.ArrayMax = 0;
  local_29c = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_3a0,&local_29c,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  if (0 < local_300.Components.Array.ArrayNum) {
    local_308 = 0;
    iVar25 = local_3a0.ArrayNum;
    do {
      lVar12 = local_308;
      uVar27 = ~uVar23 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar23 < local_300.Components.Array.ArrayNum) {
        uVar18 = uVar27;
      }
      if (uVar18 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar25 = local_3a0.ArrayNum;
      }
      puVar3 = *(undefined8 **)(local_300.Components.Array.AllocatorInstance.Data + lVar12);
      puVar20 = (uint *)*puVar3;
      iVar21 = *(int *)(puVar3 + 1);
      puVar22 = puVar20 + iVar21;
      while( true ) {
        if (*(int *)(puVar3 + 1) != iVar21) {
          local_3a4 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3a4)
          ;
          iVar25 = local_3a0.ArrayNum;
        }
        if (puVar20 == puVar22) break;
        uVar24 = (ulonglong)(*puVar20 & 0x1ff);
        lVar12 = *(longlong *)
                  ((local_378->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*puVar20 >> 9) * 8);
        local_318 = *(undefined8 *)(lVar12 + uVar24 * 0xc);
        local_310 = *(uint *)(lVar12 + 8 + uVar24 * 0xc);
        uVar18 = (uint)local_318;
        local_3a8 = (uint)local_318;
        uVar14 = 0;
        if ((int)(uint)local_318 < iVar25) {
          uVar14 = ~(uint)local_318 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar25 = local_3a0.ArrayNum;
        }
        if (*(uint *)(local_3a0.AllocatorInstance.Data + (longlong)(int)uVar18 * 4) != uVar23) {
          lVar12 = (longlong)(int)local_3a8;
          uVar18 = 0;
          if ((int)local_3a8 < iVar25) {
            uVar18 = ~local_3a8 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(local_3a0.AllocatorInstance.Data + lVar12 * 4) = uVar23;
          uVar18 = 0;
          if ((int)uVar23 < local_388) {
            uVar18 = uVar27;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar19 = (TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                     *)(local_390.Data + (longlong)(int)uVar23 * 0x68);
          lVar12 = *(longlong *)
                    ((local_378->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_3a8 >> 9) * 8);
          pdVar1 = (double *)(lVar12 + (ulonglong)(local_3a8 & 0x1ff) * 0x18);
          local_230._s_0.X = *pdVar1;
          local_230._s_0.Y = pdVar1[1];
          local_230._s_0.Z = *(double *)(lVar12 + 0x10 + (ulonglong)(local_3a8 & 0x1ff) * 0x18);
          UE::Geometry::TWrapAroundGridIndexer3<double>::ToGrid
                    ((TWrapAroundGridIndexer3<double> *)&pTVar19[1].Elements.field_0x8,&local_298,
                     (TVector<double> *)&local_230._s_0);
          local_2c0 = &local_298;
          local_2b8 = &local_3a8;
          TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                    (pTVar19,(TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)
                             local_370,(bool *)&local_2c0);
          iVar25 = local_3a0.ArrayNum;
        }
        uVar18 = local_318._4_4_;
        local_3a8 = local_318._4_4_;
        uVar14 = 0;
        if ((int)local_318._4_4_ < iVar25) {
          uVar14 = ~local_318._4_4_ >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar25 = local_3a0.ArrayNum;
        }
        if (*(uint *)(local_3a0.AllocatorInstance.Data + (longlong)(int)uVar18 * 4) != uVar23) {
          lVar12 = (longlong)(int)local_3a8;
          uVar18 = 0;
          if ((int)local_3a8 < iVar25) {
            uVar18 = ~local_3a8 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(local_3a0.AllocatorInstance.Data + lVar12 * 4) = uVar23;
          uVar18 = 0;
          if ((int)uVar23 < local_388) {
            uVar18 = uVar27;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar19 = (TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                     *)(local_390.Data + (longlong)(int)uVar23 * 0x68);
          lVar12 = *(longlong *)
                    ((local_378->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_3a8 >> 9) * 8);
          pdVar1 = (double *)(lVar12 + (ulonglong)(local_3a8 & 0x1ff) * 0x18);
          local_230._s_0.X = *pdVar1;
          local_230._s_0.Y = pdVar1[1];
          local_230._s_0.Z = *(double *)(lVar12 + 0x10 + (ulonglong)(local_3a8 & 0x1ff) * 0x18);
          UE::Geometry::TWrapAroundGridIndexer3<double>::ToGrid
                    ((TWrapAroundGridIndexer3<double> *)&pTVar19[1].Elements.field_0x8,&local_298,
                     (TVector<double> *)&local_230._s_0);
          local_2c0 = &local_298;
          local_2b8 = &local_3a8;
          TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                    (pTVar19,(TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)
                             local_370,(bool *)&local_2c0);
          iVar25 = local_3a0.ArrayNum;
        }
        local_3a8 = local_310;
        uVar18 = 0;
        if ((int)local_310 < iVar25) {
          uVar18 = ~local_310 >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar25 = local_3a0.ArrayNum;
        }
        if (*(uint *)(local_3a0.AllocatorInstance.Data + (longlong)(int)local_310 * 4) != uVar23) {
          lVar12 = (longlong)(int)local_3a8;
          uVar18 = 0;
          if ((int)local_3a8 < iVar25) {
            uVar18 = ~local_3a8 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(local_3a0.AllocatorInstance.Data + lVar12 * 4) = uVar23;
          uVar18 = 0;
          if ((int)uVar23 < local_388) {
            uVar18 = uVar27;
          }
          if ((uVar18 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar19 = (TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                     *)(local_390.Data + (longlong)(int)uVar23 * 0x68);
          lVar12 = *(longlong *)
                    ((local_378->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_3a8 >> 9) * 8);
          pdVar1 = (double *)(lVar12 + (ulonglong)(local_3a8 & 0x1ff) * 0x18);
          local_230._s_0.X = *pdVar1;
          local_230._s_0.Y = pdVar1[1];
          local_230._s_0.Z = *(double *)(lVar12 + 0x10 + (ulonglong)(local_3a8 & 0x1ff) * 0x18);
          UE::Geometry::TWrapAroundGridIndexer3<double>::ToGrid
                    ((TWrapAroundGridIndexer3<double> *)&pTVar19[1].Elements.field_0x8,&local_298,
                     (TVector<double> *)&local_230._s_0);
          local_2c0 = &local_298;
          local_2b8 = &local_3a8;
          TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                    (pTVar19,(TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)
                             local_370,(bool *)&local_2c0);
          iVar25 = local_3a0.ArrayNum;
        }
        puVar20 = puVar20 + 1;
      }
      uVar23 = uVar23 + 1;
      local_308 = local_308 + 8;
      param_1 = local_378;
    } while ((int)uVar23 < local_300.Components.Array.ArrayNum);
  }
  bVar11 = local_3a0.ArrayMax != 0;
  local_3a0._8_8_ = (ulonglong)(uint)local_3a0.ArrayMax << 0x20;
  iVar25 = local_300.Components.Array.ArrayNum;
  if (bVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_3a0.AllocatorInstance,0,&local_3a0.ArrayMax);
    iVar25 = local_300.Components.Array.ArrayNum;
  }
  dVar8 = __real_41f0000000000000;
  dVar7 = __real_3ff0000000000000;
  uVar24 = 0;
  dVar36 = param_2 * param_2;
  local_250 = dVar36;
  if (0 < iVar25) {
    uVar34 = SUB84(__real_3fe0000000000000,0);
    uVar35 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    uVar26 = uVar24;
    uVar15 = uVar24;
    do {
      uVar27 = (uint)uVar15;
      uVar18 = ~uVar27 >> 0x1f;
      uVar23 = 0;
      if ((int)uVar27 < iVar25) {
        uVar23 = uVar18;
      }
      if ((uVar23 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_1d8 = *(undefined8 **)(local_300.Components.Array.AllocatorInstance.Data + uVar26 * 8);
      uVar15 = (ulonglong)*(int *)(local_1d8 + 1);
      puVar20 = (uint *)*local_1d8;
      local_378 = (FDynamicMesh3 *)CONCAT44(local_378._4_4_,*(int *)(local_1d8 + 1));
      puVar22 = puVar20 + uVar15;
      local_238 = puVar22;
      while( true ) {
        local_258 = puVar20;
        if (*(int *)(local_1d8 + 1) != (int)uVar15) {
          local_3a3[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3a3);
        }
        if (puVar20 == puVar22) break;
        pFVar4 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        uVar16 = (ulonglong)(*puVar20 & 0x1ff);
        lVar12 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*puVar20 >> 9) * 8);
        uVar23 = *(uint *)(lVar12 + uVar16 * 0xc);
        uVar15 = (ulonglong)(uVar23 & 0x1ff);
        unique0x0000d600 =
             *(undefined1 (*) [16])
              (*(longlong *)(pFVar4 + (ulonglong)(uVar23 >> 9) * 8) + uVar15 * 0x18);
        local_358 = *(double *)
                     (*(longlong *)(pFVar4 + (ulonglong)(uVar23 >> 9) * 8) + 0x10 + uVar15 * 0x18);
        uVar23 = *(uint *)(lVar12 + 4 + uVar16 * 0xc);
        uVar15 = (ulonglong)(uVar23 & 0x1ff);
        dVar29 = local_370._8_8_;
        uVar14 = *(uint *)(lVar12 + 8 + uVar16 * 0xc);
        local_340 = *(double *)
                     (*(longlong *)(pFVar4 + (ulonglong)(uVar23 >> 9) * 8) + 0x10 + uVar15 * 0x18);
        local_350 = *(undefined1 (*) [16])
                     (*(longlong *)(pFVar4 + (ulonglong)(uVar23 >> 9) * 8) + uVar15 * 0x18);
        uVar15 = (ulonglong)(uVar14 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar4 + (ulonglong)(uVar14 >> 9) * 8) + uVar15 * 0x18);
        local_338 = *pdVar1;
        dStack_330 = pdVar1[1];
        local_328 = *(double *)
                     (*(longlong *)(pFVar4 + (ulonglong)(uVar14 >> 9) * 8) + 0x10 + uVar15 * 0x18);
        local_1d0[2] = (dStack_360 - dStack_330) * (dStack_360 - dStack_330) +
                       (dVar29 - local_338) * (dVar29 - local_338) +
                       (local_358 - local_328) * (local_358 - local_328);
        dVar30 = 0.0;
        if (0.0 < local_1d0[2]) {
          dVar30 = local_1d0[2];
        }
        dVar28 = local_350._0_8_;
        lVar12 = 2;
        if (local_1d0[2] <= 0.0) {
          lVar12 = 0;
        }
        iVar25 = 2;
        if (local_1d0[2] <= 0.0) {
          iVar25 = 0;
        }
        local_1d0[0] = ((double)local_350._8_8_ - dStack_360) *
                       ((double)local_350._8_8_ - dStack_360) +
                       (dVar28 - dVar29) * (dVar28 - dVar29) +
                       (local_340 - local_358) * (local_340 - local_358);
        dVar37 = dVar30;
        if (dVar30 < local_1d0[0]) {
          dVar37 = local_1d0[0];
        }
        local_240 = 0;
        if (local_1d0[0] <= dVar30) {
          local_240 = lVar12;
        }
        iVar21 = 0;
        if (local_1d0[0] <= dVar30) {
          iVar21 = iVar25;
        }
        local_1d0[1] = (dStack_330 - (double)local_350._8_8_) *
                       (dStack_330 - (double)local_350._8_8_) +
                       (local_338 - dVar28) * (local_338 - dVar28) +
                       (local_328 - local_340) * (local_328 - local_340);
        if (dVar37 < local_1d0[1]) {
          iVar21 = 1;
          local_240 = 1;
          dVar37 = local_1d0[1];
        }
        if (dVar36 < dVar37) {
          auVar32._0_8_ = local_328 - local_358;
          auVar32._8_8_ = 0;
          dVar30 = auVar32._0_8_ * (dVar28 - dVar29) -
                   (local_340 - local_358) * (local_338 - dVar29);
          dVar36 = (dStack_330 - dStack_360) * (local_340 - local_358) -
                   ((double)local_350._8_8_ - dStack_360) * auVar32._0_8_;
          dVar29 = ((double)local_350._8_8_ - dStack_360) * (local_338 - dVar29) -
                   (dStack_330 - dStack_360) * (dVar28 - dVar29);
          auVar33._0_8_ = dVar36 * dVar36 + dVar30 * dVar30 + dVar29 * dVar29;
          auVar33._8_8_ = 0;
          auVar33 = sqrtpd(auVar32,auVar33);
          if (auVar33._0_8_ <= 0.0) {
            dVar36 = 0.0;
            dVar30 = 0.0;
            dVar28 = 0.0;
          }
          else {
            dVar28 = dVar7 / auVar33._0_8_;
            dVar36 = dVar28 * dVar36;
            dVar30 = dVar28 * dVar30;
            dVar28 = dVar28 * dVar29;
          }
          local_2b0 = (float)dVar36;
          local_2a8 = (float)dVar28;
          local_2ac = (float)dVar30;
          local_1f0 = dVar7 / param_2;
          iVar25 = (int)ROUND(SQRT(dVar37) * (local_1f0 + local_1f0) -
                              (double)CONCAT44(uVar35,uVar34)) >> 1;
          local_308 = CONCAT44(local_308._4_4_,iVar25);
          local_208.Value = (int *)(dVar7 / (double)(iVar25 + 1));
          uVar14 = (iVar21 + 1U) % 3;
          local_1e8 = (ulonglong)(int)uVar14;
          uVar23 = (iVar21 + 2U) % 3;
          if (local_1d0[(int)uVar23] <= local_1d0[local_1e8]) {
            uVar23 = uVar14;
          }
          local_370._4_4_ = 0;
          puVar22 = local_238;
          dVar36 = local_250;
          if (0 < iVar25) {
            uVar15 = (ulonglong)(int)uVar23;
            local_1e0 = (ulonglong)(int)((uVar23 + 1) % 3);
            local_1f8 = uVar15;
            do {
              uVar16 = local_1e8;
              local_288[2] = 0.0;
              local_288[5] = 0.0;
              local_288[0] = 0.0;
              local_288[1] = 0.0;
              dVar36 = (double)(local_370._4_4_ + 1) * (double)local_208.Value;
              local_288[3] = 0.0;
              local_288[4] = 0.0;
              local_288[local_240] = dVar36;
              if ((2 < uVar16) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7a2,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_288[uVar16] = dVar7 - dVar36;
              if ((2 < uVar15) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7a2,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar16 = local_1e0;
              local_288[uVar15 + 3] = dVar7 - dVar36;
              if ((2 < uVar16) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                      ,0x7a2,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar21 = 0;
              local_288[uVar16 + 3] = dVar36;
              dVar30 = ((double)local_350._0_8_ * local_288[4] +
                        (double)local_370._8_8_ * local_288[3] + local_338 * local_288[5]) -
                       ((double)local_350._0_8_ * local_288[1] +
                        (double)local_370._8_8_ * local_288[0] + local_338 * local_288[2]);
              dVar29 = ((double)local_350._8_8_ * local_288[4] + dStack_360 * local_288[3] +
                       dStack_330 * local_288[5]) -
                       ((double)local_350._8_8_ * local_288[1] + dStack_360 * local_288[0] +
                       dStack_330 * local_288[2]);
              auVar31._0_8_ = local_328 * local_288[2];
              auVar31._8_8_ = 0;
              dVar36 = (local_340 * local_288[4] + local_358 * local_288[3] +
                       local_328 * local_288[5]) -
                       (local_340 * local_288[1] + local_358 * local_288[0] + auVar31._0_8_);
              auVar6._8_8_ = 0;
              auVar6._0_8_ = dVar29 * dVar29 + dVar30 * dVar30 + dVar36 * dVar36;
              auVar33 = sqrtpd(auVar31,auVar6);
              local_2a0 = -((int)ROUND(__real_bfe0000000000000 -
                                       auVar33._0_8_ * (local_1f0 + local_1f0)) >> 1);
              iVar25 = local_2a0 + 1;
              if (0 < local_2a0) {
                do {
                  uVar23 = 0;
                  if ((int)uVar27 < local_388) {
                    uVar23 = uVar18;
                  }
                  dVar30 = (double)(iVar21 + 1) * (dVar7 / (double)iVar25);
                  dVar36 = dVar7 - dVar30;
                  dVar28 = local_288[0] * dVar36 + local_288[3] * dVar30;
                  dVar29 = local_288[1] * dVar36 + local_288[4] * dVar30;
                  dVar30 = local_288[2] * dVar36 + local_288[5] * dVar30;
                  dVar37 = (double)local_350._0_8_ * dVar29 + (double)local_370._8_8_ * dVar28 +
                           local_338 * dVar30;
                  dVar36 = (double)local_350._8_8_ * dVar29 + dStack_360 * dVar28 +
                           dStack_330 * dVar30;
                  uVar34 = SUB84(dVar36,0);
                  uVar35 = (undefined4)((ulonglong)dVar36 >> 0x20);
                  dStack_2e0 = dVar36;
                  local_2e8 = dVar37;
                  local_2d8 = local_340 * dVar29 + local_358 * dVar28 + local_328 * dVar30;
                  if ((uVar23 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FVar9.Data = local_390.Data;
                  dVar29 = FGenericPlatformMath::Fmod
                                     ((double)local_2d8 /
                                      *(double *)(local_390.Data + uVar24 + 0x58),dVar8);
                  if (dVar29 < 0.0) {
                    dVar29 = dVar29 + dVar8;
                  }
                  dVar30 = FGenericPlatformMath::Fmod
                                     (dVar36 / *(double *)(FVar9.Data + uVar24 + 0x58),dVar8);
                  if (dVar30 < 0.0) {
                    dVar30 = dVar30 + dVar8;
                  }
                  dVar28 = FGenericPlatformMath::Fmod
                                     (dVar37 / *(double *)(FVar9.Data + uVar24 + 0x58),dVar8);
                  if (dVar28 < 0.0) {
                    dVar28 = dVar28 + dVar8;
                  }
                  local_2d0 = (int)(longlong)dVar28;
                  local_2cc = (int)(longlong)dVar30;
                  local_2c8 = (int)(longlong)dVar29;
                  uVar23 = FCrc::MemCrc_DEPRECATED(&local_2d0,0xc,0);
                  if (*(int *)(FVar9.Data + uVar24 + 8) != *(int *)(FVar9.Data + uVar24 + 0x34)) {
                    pFVar4 = *(FScriptContainerElement **)(FVar9.Data + uVar24 + 0x38 + 8);
                    pFVar17 = FVar9.Data + uVar24 + 0x38;
                    if (pFVar4 != (FScriptContainerElement *)0x0) {
                      pFVar17 = pFVar4;
                    }
                    iVar2 = *(int *)(pFVar17 +
                                    (ulonglong)(*(int *)(FVar9.Data + uVar24 + 0x48) - 1U & uVar23)
                                    * 4);
                    if (iVar2 != -1) {
                      lVar12 = *(longlong *)(FVar9.Data + uVar24);
                      do {
                        lVar13 = (longlong)iVar2;
                        if (((*(int *)(lVar12 + lVar13 * 0x18) == local_2d0) &&
                            (*(int *)(lVar12 + 4 + lVar13 * 0x18) == local_2cc)) &&
                           (*(int *)(lVar12 + 8 + lVar13 * 0x18) == local_2c8)) {
                          if (iVar2 != -1) goto LAB_14c9b1ec9;
                          break;
                        }
                        iVar2 = *(int *)(lVar12 + 0x10 + lVar13 * 0x18);
                      } while (iVar2 != -1);
                    }
                  }
                  uVar23 = 0;
                  if ((int)uVar27 < local_388) {
                    uVar23 = uVar18;
                  }
                  if ((uVar23 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar10 = local_2d8;
                  local_1b0 = local_380;
                  local_1b8 = Core::Private::Function::
                              TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindNearestInRadius'::__l2::<lambda_1>,bool,int_const_&>
                              ::Call;
                  local_1a8 = Core::Private::Function::
                              TFunctionRefCaller<`UE::PlanarCut::AugmentedDynamicMesh::AddCollisionSamplesPerComponent'::__l37::<lambda_1>,double,int_const_&>
                              ::Call;
                  local_1a0 = &local_128;
                  unique0x10000925 = uVar34;
                  unique0x10000929 = uVar35;
                  local_120._8_4_ = uVar34;
                  local_120._0_8_ = dVar37;
                  local_120._12_4_ = uVar35;
                  local_110 = (double)local_2d8;
                  local_128 = param_1;
                  UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>
                            ((TPointHashGrid3<int,double> *)(local_390.Data + uVar24),&local_148,
                             (TVector<double> *)&local_2e8,local_248 * __real_3fe0000000000000,
                             (TFunctionRef<double___cdecl(int_const_&)> *)&local_1a8,
                             (TFunctionRef<bool___cdecl(int_const_&)> *)&local_1b8);
                  if (local_148._0_4_ == -1) {
                    local_180 = local_2b0;
                    local_17c = local_2ac;
                    local_178 = local_2a8;
                    local_16c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    local_174 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    local_198._8_4_ = uVar34;
                    local_198._0_8_ = dVar37;
                    local_198._12_4_ = uVar35;
                    local_198._s_0.Z = (double)uVar10;
                    local_168 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                    local_160 = 1;
                    local_15e = 0;
                    local_2a4 = UE::Geometry::FDynamicMesh3::AppendVertex
                                          (param_1,(FVertexInfo *)&local_198._s_0);
                    local_138 = DefaultVertexColor.field0_0x0;
                    SetVertexColor(param_1,local_2a4,(TVector4<float> *)&local_138._s_0);
                    uVar23 = 0;
                    if ((int)uVar27 < local_388) {
                      uVar23 = uVar18;
                    }
                    if ((uVar23 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pTVar19 = (TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                               *)(local_390.Data + uVar24);
                    dVar29 = FGenericPlatformMath::Fmod
                                       ((double)local_2d8 /
                                        *(double *)&pTVar19[1].Elements.field_0x8,dVar8);
                    if (dVar29 < 0.0) {
                      dVar29 = dVar29 + dVar8;
                    }
                    dVar36 = FGenericPlatformMath::Fmod
                                       (dVar36 / *(double *)&pTVar19[1].Elements.field_0x8,dVar8);
                    if (dVar36 < 0.0) {
                      dVar36 = dVar36 + dVar8;
                    }
                    dVar30 = FGenericPlatformMath::Fmod
                                       (dVar37 / *(double *)&pTVar19[1].Elements.field_0x8,dVar8);
                    if (dVar30 < 0.0) {
                      dVar30 = dVar30 + dVar8;
                    }
                    local_218 = (undefined4)(longlong)dVar30;
                    local_214 = (undefined4)(longlong)dVar36;
                    local_210 = (undefined4)(longlong)dVar29;
                    local_158 = &local_218;
                    local_150 = &local_2a4;
                    TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                              (pTVar19,&local_208,(bool *)&local_158);
                  }
LAB_14c9b1ec9:
                  iVar21 = iVar21 + 1;
                  uVar15 = local_1f8;
                } while (iVar21 < local_2a0);
              }
              local_370._4_4_ = local_370._4_4_ + 1;
            } while ((int)local_370._4_4_ < (int)local_308);
            uVar34 = SUB84(__real_3fe0000000000000,0);
            uVar35 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
            puVar20 = local_258;
            puVar22 = local_238;
            param_2 = local_248;
            dVar36 = local_250;
          }
        }
        puVar20 = puVar20 + 1;
        uVar15 = (ulonglong)local_378 & 0xffffffff;
      }
      uVar15 = (ulonglong)(uVar27 + 1);
      uVar26 = uVar26 + 1;
      uVar24 = uVar24 + 0x68;
      iVar25 = local_300.Components.Array.ArrayNum;
    } while ((int)(uVar27 + 1) < local_300.Components.Array.ArrayNum);
  }
  if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::TPointHashGrid3<int,double>,int>
            ((TPointHashGrid3<int,double> *)local_390.Data,local_388);
  if ((TPointHashGrid3<int,double> *)local_390.Data != (TPointHashGrid3<int,double> *)0x0) {
    FMemory::Free(local_390.Data);
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_300.Components);
  return;
}

// AddVertexColorAttribute @ 14c9b3040

void __cdecl UE::PlanarCut::AugmentedDynamicMesh::AddVertexColorAttribute(FDynamicMesh3 *param_1)

{
  TDynamicVector<float,512> *this;
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshAttributeSet *this_00;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar2 = (FDynamicMeshAttributeSet *)0x0;
  this_00 = pFVar2;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar1;
  }
  pFVar1 = ::operator_new(0x30);
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this = (TDynamicVector<float,512> *)&pFVar1->ParentMesh;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)param_1;
    pFVar1->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar1->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar1->UVLayers).Array.ArrayNum = 0;
    (pFVar1->UVLayers).Array.ArrayMax = 0;
    UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(this);
    UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *)pFVar1,0.0);
    pFVar2 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (this_00,ColorAttribName,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar2);
  return;
}

// ApplyDynamicMeshBasedUVProcessing @ 14c9b5510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::PrivateUVHelpers::ApplyDynamicMeshBasedUVProcessing
          (int param_1,FGeometryCollection *param_2,TArrayView<int_const_,int> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::FDynamicMesh3_&,int)> *param_4,bool param_5,
          bool param_6,bool param_7)

{
  FDynamicMesh3 *this;
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  FDynamicMeshAttributeSet *pFVar8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  FDynamicMeshCollection local_158;
  FMergeCoincidentMeshEdges local_108;
  TTransform<double> local_a8;
  
  iVar6 = FGeometryCollection::NumUVLayers(param_2);
  if ((-1 < param_1) && (param_1 < iVar6)) {
    local_158.Bounds.Min.field0_0x0._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_158.Bounds.Min.field0_0x0._s_0.Y = _UNK_150a9e648;
    local_158.Bounds.Max.field0_0x0._s_0.Y = ___xmm_ffefffffffffffffffefffffffffffff;
    local_158.Bounds.Max.field0_0x0._s_0.Z = _UNK_1508ffb58;
    local_158.Bounds.Min.field0_0x0._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    local_158.Bounds.Max.field0_0x0._s_0.X = _UNK_150a9e6d8;
    local_a8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_a8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_a8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_a8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_158.Meshes.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Meshes.Array.ArrayNum = 0;
    local_158.Meshes.Array.ArrayMax = 0;
    local_158.bSkipInvisible = false;
    local_158.bComponentSpaceTransforms = false;
    local_158.bGenerateMeshToCollectionFaceMapping = false;
    local_a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    PlanarCut::FDynamicMeshCollection::Init
              (&local_158,param_2,(TManagedArray<UE::Math::TTransform<float>_> *)&param_2->_padding_
               ,param_3,&local_a8,param_6);
    bVar13 = false;
    uVar12 = 0;
    if (0 < local_158.Meshes.Array.ArrayNum) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < local_158.Meshes.Array.ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        iVar10 = local_158.Meshes.Array.ArrayNum;
        if (uVar7 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar10 = local_158.Meshes.Array.ArrayNum;
        }
        uVar7 = 0;
        if ((int)uVar12 < iVar10) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if (uVar7 == 0) {
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
        this = *(FDynamicMesh3 **)(local_158.Meshes.Array.AllocatorInstance.Data + lVar11);
        pFVar1 = (this->AttributeSet).Ptr;
        pFVar8 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar8 = pFVar1;
        }
        if ((pFVar8->NormalLayers).Array.ArrayNum < 1) {
          pTVar9 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
        }
        else {
          pTVar9 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                    (pFVar8->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals(pTVar9,true);
        PlanarCut::AugmentedDynamicMesh::InitializeOverlayToPerVertexTangents(this);
        PlanarCut::AugmentedDynamicMesh::InitializeOverlayToPerVertexUVs(this,iVar6,0);
        if (param_5) {
          local_108._padding_ = (longlong)&___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
          local_108.MergeVertexTolerance =
               UE::Geometry::FMergeCoincidentMeshEdges::DEFAULT_TOLERANCE;
          local_108.InitialNumBoundaryEdges = 0;
          local_108.FinalNumBoundaryEdges = 0;
          local_108.bWeldAttrsOnMergedEdges = false;
          local_108.SplitAttributeWelder.UVDistSqrdThreshold = 0.0;
          local_108.SplitAttributeWelder.ColorDistSqrdThreshold = 0.0;
          local_108.SplitAttributeWelder.NormalVecDotThreshold = 0.0;
          local_108.SplitAttributeWelder.TangentVecDotThreshold = 0.0;
          local_108.EdgesToMerge = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
          local_108.MergeSearchTolerance = 0.0;
          local_108.OnlyUniquePairs = false;
          local_108.Mesh = this;
          UE::Geometry::FMergeCoincidentMeshEdges::Apply(&local_108);
        }
        cVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8);
        if (cVar5 != '\0') {
          bVar13 = true;
          UE::Geometry::FDynamicMesh3::CompactInPlace(this,(FCompactMaps *)0x0);
          if ((param_5) || (param_7)) {
            PlanarCut::AugmentedDynamicMesh::SplitOverlayAttributesToPerVertex(this,true,true);
          }
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar12 < local_158.Meshes.Array.ArrayNum);
      if (bVar13 != false) {
        PlanarCut::FDynamicMeshCollection::UpdateAllCollections(&local_158,param_2);
      }
    }
    TIndirectArray<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TSizedDefaultAllocator<32>_>::
    DestructAndFreeItems(&local_158.Meshes);
    bVar3 = local_158.Meshes.Array.ArrayMax != 0;
    local_158.Meshes.Array._8_8_ = (ulonglong)(uint)local_158.Meshes.Array.ArrayMax << 0x20;
    if (bVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&local_158,0,&local_158.Meshes.Array.ArrayMax);
    }
    if (local_158.Meshes.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Meshes.Array.AllocatorInstance.Data);
    }
    return bVar13;
  }
  return false;
}

// Augment @ 14c9b6990

void __cdecl UE::PlanarCut::AugmentedDynamicMesh::Augment(FDynamicMesh3 *param_1,int param_2)

{
  TDynamicVector<float,512> *pTVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FDynamicMeshAttributeSet *this;
  FDynamicMeshAttributeSet *pFVar4;
  TVector<float>_u_0 local_28;
  
  local_28._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  local_28._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::FDynamicMesh3::EnableVertexNormals(param_1,(TVector<float> *)&local_28._s_0);
  UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  pFVar4 = (param_1->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  pFVar3 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar3);
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar3 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar4;
  }
  pFVar2 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar2->ParentMesh;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)param_1;
    pFVar2->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar2->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->UVLayers).Array.ArrayNum = 0;
    (pFVar2->UVLayers).Array.ArrayMax = 0;
    UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
    UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *)pFVar2,0.0);
    pFVar4 = pFVar2;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (pFVar3,ColorAttribName,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar3 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar4;
  }
  pFVar2 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar2->ParentMesh;
    pFVar2->_padding_ = 0;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar2->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->UVLayers).Array.ArrayNum = 0;
    (pFVar2->UVLayers).Array.ArrayMax = 0;
    pFVar2->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    pFVar2->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
    UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)pFVar2,0.0);
    pFVar4 = pFVar2;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (pFVar3,TangentUAttribName,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4)
  ;
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar3 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar4;
  }
  pFVar2 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar2->ParentMesh;
    pFVar2->_padding_ = 0;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar2->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->UVLayers).Array.ArrayNum = 0;
    (pFVar2->UVLayers).Array.ArrayMax = 0;
    pFVar2->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    pFVar2->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
    UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)pFVar2,0.0);
    pFVar4 = pFVar2;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (pFVar3,TangentVAttribName,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4)
  ;
  pFVar3 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar3->ParentMesh;
    pFVar3->_padding_ = 0;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar3->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar3->UVLayers).Array.ArrayNum = 0;
    (pFVar3->UVLayers).Array.ArrayMax = 0;
    pFVar3->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute__N_00_Geometry_UE__6B_;
    UE::Geometry::TDynamicVector<bool,512>::AddAllocatedBlock((TDynamicVector<bool,512> *)pTVar1);
    pFVar3->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
              ((TDynamicMeshTriangleAttribute<bool,1> *)pFVar3,false);
    pFVar3->_padding_ = (longlong)&___7__TDynamicMeshScalarTriangleAttribute__N_Geometry_UE__6B_;
    pFVar4 = pFVar3;
  }
  UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
            ((TDynamicMeshTriangleAttribute<bool,1> *)pFVar4,true);
  pFVar3 = (param_1->AttributeSet).Ptr;
  pFVar2 = this;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar3;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (pFVar2,VisibleAttribName,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
  pFVar3 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar3->ParentMesh;
    pFVar3->_padding_ = 0;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar3->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar3->UVLayers).Array.ArrayNum = 0;
    (pFVar3->UVLayers).Array.ArrayMax = 0;
    pFVar3->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute__N_00_Geometry_UE__6B_;
    UE::Geometry::TDynamicVector<bool,512>::AddAllocatedBlock((TDynamicVector<bool,512> *)pTVar1);
    pFVar3->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
              ((TDynamicMeshTriangleAttribute<bool,1> *)pFVar3,false);
    pFVar3->_padding_ = (longlong)&___7__TDynamicMeshScalarTriangleAttribute__N_Geometry_UE__6B_;
    pFVar4 = pFVar3;
  }
  UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
            ((TDynamicMeshTriangleAttribute<bool,1> *)pFVar4,true);
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar3;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (this,InternalAttribName,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
  EnableUVChannels(param_1,param_2,false,true);
  return;
}

// AxisAlignedFrame @ 14c9b6c40

TFrame3<double> * __cdecl
UE::PlanarCut::`anonymous_namespace'::AxisAlignedFrame
          (TFrame3<double> *__return_storage_ptr__,TPlane<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double extraout_XMM0_Qa;
  double dVar8;
  double extraout_XMM0_Qb;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0 [7];
  
  local_f8._0_4_ = (undefined4)param_1->_padding_;
  local_f8._4_4_ = *(uint *)((longlong)&param_1->_padding_ + 4);
  local_f8._8_4_ = (undefined4)param_1->_padding_;
  local_f8._12_4_ = *(uint *)((longlong)&param_1->_padding_ + 4);
  local_f8._s_0.Z = (double)param_1->_padding_;
  dVar1 = param_1->W;
  dVar8 = param_1->W;
  dVar2 = (double)param_1->_padding_;
  dVar11 = (double)CONCAT44(local_f8._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_f8._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar9 = local_f8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = local_f8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar14 = (double)CONCAT44((uint)((ulonglong)local_f8._s_0.Z >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_f8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
  ;
  dVar12 = (double)param_1->_padding_;
  dVar4 = dVar1 * (double)param_1->_padding_;
  if (dVar11 <= (double)CONCAT44(uVar10,uVar9) && (double)CONCAT44(uVar10,uVar9) != dVar11) {
    uVar7 = (ulonglong)((dVar14 < dVar11) + 1);
  }
  else {
    uVar7 = 2;
    if ((double)CONCAT44(uVar10,uVar9) <= dVar14) {
      uVar7 = 0;
    }
  }
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar1 * dVar12;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar3;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar8 * dVar2;
  local_b0[0]._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_b0[0]._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_b0[0]._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::SetFromTo
            (&__return_storage_ptr__->Rotation,(TVector<double> *)&local_b0[0]._s_0,
             (TVector<double> *)&local_f8._s_0);
  dVar11 = __real_3ff0000000000000;
  dVar1 = (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y;
  dVar8 = (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z;
  dVar2 = (__return_storage_ptr__->Rotation).field0_0x0._s_0.X;
  dVar4 = (__return_storage_ptr__->Rotation).field0_0x0._s_0.W;
  local_e0._s_0.X = 0.0;
  local_e0._s_0.Y = 0.0;
  dVar14 = dVar1 + dVar1;
  dVar12 = dVar8 + dVar8;
  local_e0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&local_e0 + uVar7 * 8) = 0x3ff0000000000000;
  local_c8._s_0.X = __real_3ff0000000000000 - (dVar12 * dVar8 + dVar14 * dVar1);
  local_c8._s_0.Y = dVar4 * dVar12 + dVar2 * dVar14;
  local_c8._s_0.Z = dVar2 * dVar12 - dVar4 * dVar14;
  UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
            ((TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_e0._s_0,
             (TVector<double> *)&local_f8._s_0);
  __libm_sse2_sincos_();
  dVar13 = extraout_XMM0_Qa * (double)CONCAT44(local_f8._12_4_,local_f8._8_4_);
  dVar12 = extraout_XMM0_Qa * (double)CONCAT44(local_f8._4_4_,local_f8._0_4_);
  dVar15 = extraout_XMM0_Qa * local_f8._s_0.Z;
  dVar14 = (dVar12 * dVar4 + extraout_XMM0_Qb * dVar2 + dVar13 * dVar8) - dVar15 * dVar1;
  dVar5 = (dVar13 * dVar4 + extraout_XMM0_Qb * dVar1 + dVar15 * dVar2) - dVar12 * dVar8;
  dVar6 = (dVar15 * dVar4 + extraout_XMM0_Qb * dVar8 + dVar12 * dVar1) - dVar13 * dVar2;
  dVar1 = ((extraout_XMM0_Qb * dVar4 - dVar12 * dVar2) - dVar13 * dVar1) - dVar15 * dVar8;
  dVar8 = SQRT(dVar1 * dVar1 + dVar6 * dVar6 + dVar5 * dVar5 + dVar14 * dVar14);
  if (0.0 < dVar8) {
    dVar11 = dVar11 / dVar8;
    if (0.0 < dVar11) {
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = dVar11 * dVar14;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = dVar11 * dVar5;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = dVar11 * dVar6;
      (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = dVar11 * dVar1;
    }
  }
  return __return_storage_ptr__;
}

// BoxProjectUVs @ 14c9b7100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::PlanarCut::BoxProjectUVs
          (int param_1,FGeometryCollection *param_2,TVector<double> *param_3,ETargetFaces param_4,
          TArrayView<int,int> *param_5,TVector2<float> param_6,bool param_7,bool param_8,
          bool param_9)

{
  TManagedArray<int> *pTVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulong64 uVar11;
  ForElementType<unsigned_int> FVar12;
  ForAnyElementType FVar13;
  uint *puVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  bool bVar26;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  ETargetFaces local_1c4;
  uint local_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_198;
  undefined4 local_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  FGeometryCollection *local_180;
  undefined4 local_178;
  int local_174;
  undefined4 local_16c;
  int local_168;
  TVector<double> *local_160;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FSparseArrayAllocationInfo local_108;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_e0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_d8;
  int local_d0;
  TVector<double> *local_c8;
  ETargetFaces local_c0;
  TArrayView<int,int> *local_b8;
  TVector2<float> *local_b0;
  bool local_a8;
  bool local_a7;
  bool local_a6;
  TArrayView<int_const_,int> local_98;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar1 = &param_2->TransformIndex;
  uVar18 = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  local_1c8 = param_1;
  local_1c4 = param_4;
  local_180 = param_2;
  local_160 = param_3;
  iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  uVar21 = uVar18;
  if (0 < iVar6) {
    do {
      uVar15 = (uint)uVar21;
      uVar20 = 0;
      if ((int)uVar15 < *(int *)&(param_2->TransformIndex).field_0x18) {
        uVar20 = ~uVar15 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar16 = (FScriptContainerElement *)
                (*(longlong *)&(param_2->TransformIndex).field_0x10 + uVar18);
      if (((local_1d8.Data <= pFVar16) && (pFVar16 < local_1d8.Data + (longlong)local_1d0._4_4_ * 4)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = (int)local_1d0;
      if ((int)local_1d0 == local_1d0._4_4_) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_1d8,(int *)((longlong)&local_1d0 + 4));
      }
      uVar21 = (ulonglong)(uVar15 + 1);
      local_1d0 = CONCAT44(local_1d0._4_4_,iVar6 + 1);
      uVar18 = uVar18 + 4;
      *(undefined4 *)(local_1d8.Data + (longlong)iVar6 * 4) = *(undefined4 *)pFVar16;
      iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
      param_2 = local_180;
    } while ((int)(uVar15 + 1) < iVar6);
  }
  uVar21 = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar20 = param_5->ArrayNum;
  puVar25 = (uint *)param_5->DataPtr;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar20 == 0) goto LAB_14c9b7535;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_88,uVar20);
  uVar15 = 1;
  if (3 < uVar20) {
    uVar18 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_178 = (undefined4)lVar10;
    uVar15 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar15 <= (int)local_40)) goto LAB_14c9b7535;
  local_40 = uVar15;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar15 != 0) {
    uVar19 = uVar15;
    if (uVar15 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_14c9b7365;
      }
    }
    else {
LAB_14c9b7365:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar19,4);
    }
    if (0 < (int)uVar15) {
      uVar23 = (ulonglong)uVar15;
      uVar18 = uVar21;
      do {
        FVar13.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_48.Data;
        }
        uVar9 = uVar18 & (longlong)(int)uVar15 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar13.Data + uVar9 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_1b8 = &local_88.AllocationFlags;
    local_1c0 = 0;
    uStack_1bc = 1;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    if (local_88.AllocationFlags.NumBits != 0) {
      FVar12 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar15 = *(uint *)FVar12;
      uVar18 = uVar21;
      while (uVar15 == 0) {
        uStack_1a8 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1a8;
        iVar6 = (int)uVar21;
        local_1c0 = iVar6 + 1;
        uVar21 = (ulonglong)local_1c0;
        if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                 ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_1c0) goto LAB_14c9b7491;
        uVar15 = *(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)iVar6 * 4);
      }
      uStack_1bc = -uVar15 & uVar15;
      uVar21 = (ulonglong)uStack_1bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_174 = (int)lVar10;
      uStack_1ac = local_174 + -1 + uStack_1a8;
      uVar21 = (ulonglong)uStack_1ac;
      if (local_88.AllocationFlags.NumBits < (int)uStack_1ac) {
LAB_14c9b7491:
        uVar21 = (ulonglong)(uint)local_88.AllocationFlags.NumBits;
        uStack_1ac = local_88.AllocationFlags.NumBits;
      }
    }
    local_1b0 = 0xffffffff;
    local_158 = &local_88;
    local_150._padding_ = CONCAT44(uStack_1bc,local_1c0);
    local_150.CurrentBitIndex = uStack_1ac;
    local_150.UnvisitedBitMask = 0xffffffff;
    local_150._28_4_ = uStack_1a4;
    local_150.BaseBitIndex = uStack_1a8;
    local_150.Array = pTStack_1b8;
    if ((int)uVar21 < local_88.AllocationFlags.NumBits) {
      do {
        lVar10 = (longlong)(int)uVar21;
        pFVar16 = (local_158->Data).AllocatorInstance.Data;
        uVar15 = local_40 - 1 & *(uint *)(pFVar16 + lVar10 * 0xc);
        *(uint *)(pFVar16 + lVar10 * 0xc + 8) = uVar15;
        FVar13.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_48.Data;
        }
        uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pFVar16 + lVar10 * 0xc + 4) = *(undefined4 *)(FVar13.Data + uVar18 * 4);
        *(int *)(FVar13.Data + uVar18 * 4) = (int)uVar21;
        local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
        uVar21 = (ulonglong)(uint)local_150.CurrentBitIndex;
      } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
    }
  }
LAB_14c9b7535:
  puVar2 = puVar25 + (int)uVar20;
  if (puVar25 != puVar2) {
    puVar24 = (uint *)0x0;
    do {
      if (local_88.NumFreeIndices == 0) {
        iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)&local_88,&local_88.Data.ArrayNum,
                           &local_88.Data.ArrayMax);
        iVar6 = local_88.AllocationFlags.NumBits;
        if (local_88.AllocationFlags.NumBits == 0) {
          iVar17 = 0;
LAB_14c9b75ea:
          if (local_88.AllocationFlags.MaxBits < (int)(local_88.AllocationFlags.NumBits + 1U)) {
            uVar20 = local_88.AllocationFlags.MaxBits + 0x1fU >> 5;
            uVar15 = local_88.AllocationFlags.NumBits + 0x20U >> 5;
            if (uVar15 < 5) {
              iVar8 = 4;
            }
            else {
              uVar21 = (ulonglong)uVar15;
              if (uVar20 < 5) {
                uVar20 = 0;
              }
              if (uVar20 == 0) {
                uVar18 = 4;
                if (4 < uVar21) {
                  uVar18 = uVar21;
                }
              }
              else {
                uVar18 = ((ulonglong)uVar15 * 3 >> 3) + 0x10 + uVar21;
              }
              uVar11 = FMemory::QuantizeSize(uVar18 * 4,0);
              iVar8 = (int)(uVar11 >> 2);
              if (iVar8 < (int)uVar15) {
                iVar8 = 0x7fffffff;
              }
            }
            local_88.AllocationFlags.MaxBits = iVar8 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      (&local_88.AllocationFlags,local_88.AllocationFlags.NumBits);
          }
          local_88.AllocationFlags.NumBits = local_88.AllocationFlags.NumBits + 1;
          uVar15 = local_88.AllocationFlags.NumBits >> 0x1f & 0x1f;
          uVar20 = local_88.AllocationFlags.NumBits + uVar15;
          iVar8 = (uVar20 & 0x1f) - uVar15;
          if (iVar8 != 0) {
            FVar12 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
            if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            puVar14 = (uint *)((longlong)FVar12 + (longlong)((int)uVar20 >> 5) * 4);
            *puVar14 = *puVar14 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
          }
        }
        else {
          iVar17 = (int)(local_88.AllocationFlags.NumBits +
                        (local_88.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
          if (iVar17 != (int)(((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU) +
                             (local_88.AllocationFlags.NumBits - 1U)) >> 5) goto LAB_14c9b75ea;
          local_88.AllocationFlags.NumBits = local_88.AllocationFlags.NumBits + 1;
        }
        FVar12 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
        if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar12 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        puVar14 = (uint *)((longlong)FVar12 + (longlong)iVar17 * 4);
        *puVar14 = *puVar14 & ~(1 << ((byte)iVar6 & 0x1f));
        iVar6 = local_88.FirstFreeIndex;
      }
      else {
        iVar6 = *(int *)(local_88.Data.AllocatorInstance.Data +
                        (longlong)local_88.FirstFreeIndex * 0xc + 4);
        local_88.NumFreeIndices = local_88.NumFreeIndices + -1;
        iVar7 = local_88.FirstFreeIndex;
        if (local_88.NumFreeIndices != 0) {
          *(undefined4 *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) = 0xffffffff
          ;
        }
      }
      local_88.FirstFreeIndex = iVar6;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex(&local_88,&local_108,iVar7);
      puVar14 = puVar24;
      if (local_108.Pointer != (uint *)0x0) {
        *(uint *)local_108.Pointer = *puVar25;
        *(uint *)((longlong)local_108.Pointer + 4) = 0xffffffff;
        puVar14 = local_108.Pointer;
      }
      uVar20 = *puVar14;
      if ((local_88.Data.ArrayNum - local_88.NumFreeIndices != 1) &&
         (local_88.Data.ArrayNum != local_88.NumFreeIndices)) {
        FVar13.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_48.Data;
        }
        for (iVar6 = *(int *)(FVar13.Data + (ulonglong)(local_40 - 1 & uVar20) * 4); iVar6 != -1;
            iVar6 = *(int *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc + 4)) {
          if (*(uint *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) == uVar20) {
            if (iVar6 != -1) {
              *(uint *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) = uVar20;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized(&local_88,local_108.Index,1);
              goto LAB_14c9b7a95;
            }
            break;
          }
        }
      }
      uVar19 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
      uVar15 = 1;
      if (3 < uVar19) {
        uVar21 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_16c = (undefined4)lVar10;
        uVar15 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((int)uVar19 < 1) || ((int)uVar15 <= (int)local_40)) {
        uVar20 = local_40 - 1 & uVar20;
        puVar14[2] = uVar20;
        FVar13.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_48.Data;
        }
        uVar21 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar20;
        puVar14[1] = *(uint *)(FVar13.Data + uVar21 * 4);
        *(int *)(FVar13.Data + uVar21 * 4) = local_108.Index;
      }
      else {
        local_40 = uVar15;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar15 != 0) {
          uVar20 = uVar15;
          if (uVar15 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar20 = 0;
              goto LAB_14c9b7890;
            }
          }
          else {
LAB_14c9b7890:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar20,4);
          }
          if (0 < (int)uVar15) {
            uVar21 = (ulonglong)uVar15;
            puVar14 = puVar24;
            do {
              FVar13.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar13.Data = local_48.Data;
              }
              uVar18 = (ulonglong)puVar14 & (longlong)(int)uVar15 - 1U;
              puVar14 = (uint *)((longlong)puVar14 + 1);
              *(undefined4 *)(FVar13.Data + uVar18 * 4) = 0xffffffff;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
        }
        if (local_40 != 0) {
          pTStack_198 = &local_88.AllocationFlags;
          local_1a0 = 0;
          uStack_19c = 1;
          uStack_18c = 0;
          uStack_188 = 0;
          puVar14 = puVar24;
          if (local_88.AllocationFlags.NumBits != 0) {
            FVar12 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
            if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar20 = *(uint *)FVar12;
            puVar22 = puVar24;
            while (uVar20 == 0) {
              uStack_188 = (int)puVar22 + 0x20;
              puVar22 = (uint *)(ulonglong)uStack_188;
              iVar6 = (int)puVar14;
              local_1a0 = iVar6 + 1;
              puVar14 = (uint *)(ulonglong)local_1a0;
              if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                       ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_1a0) goto LAB_14c9b79ad;
              uVar20 = *(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)iVar6 * 4);
            }
            uStack_19c = -uVar20 & uVar20;
            uVar21 = (ulonglong)uStack_19c * 2 + 1;
            lVar10 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            local_168 = (int)lVar10;
            uStack_18c = local_168 + -1 + uStack_188;
            puVar14 = (uint *)(ulonglong)uStack_18c;
            if (local_88.AllocationFlags.NumBits < (int)uStack_18c) {
LAB_14c9b79ad:
              puVar14 = (uint *)(ulonglong)(uint)local_88.AllocationFlags.NumBits;
              uStack_18c = local_88.AllocationFlags.NumBits;
            }
          }
          local_190 = 0xffffffff;
          local_130 = &local_88;
          local_128._padding_ = CONCAT44(uStack_19c,local_1a0);
          local_128.CurrentBitIndex = uStack_18c;
          local_128.UnvisitedBitMask = 0xffffffff;
          local_128._28_4_ = uStack_184;
          local_128.BaseBitIndex = uStack_188;
          local_128.Array = pTStack_198;
          if ((int)puVar14 < local_88.AllocationFlags.NumBits) {
            do {
              lVar10 = (longlong)(int)puVar14;
              pFVar16 = (local_130->Data).AllocatorInstance.Data;
              uVar20 = local_40 - 1 & *(uint *)(pFVar16 + lVar10 * 0xc);
              *(uint *)(pFVar16 + lVar10 * 0xc + 8) = uVar20;
              FVar13.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar13.Data = local_48.Data;
              }
              uVar21 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar20;
              *(undefined4 *)(pFVar16 + lVar10 * 0xc + 4) =
                   *(undefined4 *)(FVar13.Data + uVar21 * 4);
              *(int *)(FVar13.Data + uVar21 * 4) = (int)puVar14;
              local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
              puVar14 = (uint *)(ulonglong)(uint)local_128.CurrentBitIndex;
            } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
          }
        }
      }
LAB_14c9b7a95:
      puVar25 = puVar25 + 1;
    } while (puVar25 != puVar2);
  }
  iVar7 = local_1c8;
  iVar6 = (int)local_1d0;
  local_d8 = &local_88;
  local_c8 = local_160;
  local_c0 = local_1c4;
  local_b0 = &param_6;
  local_a8 = param_7;
  local_a7 = param_8;
  local_a6 = param_9;
  local_e0 = &local_d8;
  local_e8 = Core::Private::Function::
             TFunctionRefCaller<`UE::PlanarCut::BoxProjectUVs'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_&,int>
             ::Call;
  local_f8 = local_1d8.Data;
  local_d0 = local_1c8;
  local_b8 = param_5;
  if (((int)local_1d0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iStack_f0 = iVar6;
  local_98._12_4_ = uStack_ec;
  local_98.ArrayNum = iVar6;
  local_98.DataPtr = (int *)local_f8;
  bVar4 = PrivateUVHelpers::ApplyDynamicMeshBasedUVProcessing
                    (iVar7,local_180,&local_98,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FDynamicMesh3_&,int)> *)&local_e8,true
                     ,true,true);
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  bVar26 = local_88.Data.ArrayMax != 0;
  local_88.Data._8_8_ = (ulonglong)(uint)local_88.Data.ArrayMax << 0x20;
  if (bVar26) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&local_88,0,&local_88.Data.ArrayMax);
  }
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_88.AllocationFlags.NumBits = 0;
  if (0x80 < (uint)local_88.AllocationFlags.MaxBits) {
    local_88.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88.AllocationFlags,0);
  }
  if (local_88.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_88.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  return bVar4;
}

// ClearCustomGeometryCollectionAttributes @ 14c9b9b10

void __cdecl UE::PlanarCut::ClearCustomGeometryCollectionAttributes(FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshAttributeSet *this;
  
  UE::Geometry::FDynamicMesh3::DiscardVertexNormals(param_1);
  pFVar1 = (param_1->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  pFVar2 = this;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::RemoveAttribute
            (pFVar2,AugmentedDynamicMesh::ColorAttribName);
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar2 = this;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::RemoveAttribute
            (pFVar2,AugmentedDynamicMesh::TangentUAttribName);
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar2 = this;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::RemoveAttribute
            (pFVar2,AugmentedDynamicMesh::TangentVAttribName);
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar2 = this;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::RemoveAttribute
            (pFVar2,AugmentedDynamicMesh::VisibleAttribName);
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::RemoveAttribute
            (this,AugmentedDynamicMesh::InternalAttribName);
  AugmentedDynamicMesh::EnableUVChannels(param_1,0,false,true);
  return;
}

// ComputeTangents @ 14c9bb9d0

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::ComputeTangents
          (FDynamicMesh3 *param_1,bool param_2,bool param_3,bool param_4,float param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar8;
  code *pcVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FDynamicMeshAttributeSet *pFVar15;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar16;
  FDynamicMeshAttributeSet *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  char cVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  FDynamicMeshAttributeSet *this;
  ulonglong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  ulonglong local_res8;
  char local_res10 [8];
  char local_res18;
  char local_res20;
  FComputeTangentsOptions local_314 [2];
  float local_310;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_308;
  IndexIterator local_300;
  undefined8 local_2f0;
  undefined4 local_2e8;
  TDynamicVector<unsigned_short,512> local_2e0;
  TDynamicVector<int,512> local_2c8;
  int local_2b0;
  float local_2a8;
  longlong local_2a0;
  FDynamicMeshAttributeSet *local_298;
  FDynamicMesh3 *local_288;
  TDynamicVector<unsigned_short,512> local_280;
  TDynamicVector<int,512> local_268;
  int local_250;
  TDynamicVector<float,512> local_248;
  TDynamicVector<int,512> local_230;
  TDynamicVector<int,512> local_218;
  uint local_1f8 [4];
  undefined8 local_1e8;
  float local_1e0;
  int local_1d8 [4];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  FMeshNormals local_1b8;
  TMeshTangents<float> local_1a0;
  FMeshNormals local_168;
  double local_150;
  undefined8 local_148;
  undefined4 local_140;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  code *local_108;
  longlong **local_100;
  FMergeCoincidentMeshEdges local_f8;
  longlong *local_98;
  char *local_90;
  FMeshNormals *local_88;
  double *local_80;
  FDynamicMesh3 **local_78;
  
  if ((param_4) && (param_3)) {
    cVar21 = '\x01';
  }
  else {
    cVar21 = '\0';
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  pFVar17 = (FDynamicMeshAttributeSet *)0x0;
  this = pFVar17;
  if (0 < (pFVar5->NormalLayers).Array.ArrayNum) {
    this = *(FDynamicMeshAttributeSet **)(pFVar5->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_res20 = cVar21;
  local_298 = this;
  if ((param_3) && (cVar21 == '\0')) {
    UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals
              ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)this,false);
LAB_14c9bba59:
    iVar12 = 1;
  }
  else {
    UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals
              ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)this,true);
    if (cVar21 == '\0') goto LAB_14c9bba59;
    iVar12 = NumEnabledUVChannels(param_1);
  }
  InitializeOverlayToPerVertexUVs(param_1,iVar12,0);
  pFVar5 = (param_1->AttributeSet).Ptr;
  pFVar15 = pFVar17;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar15 = pFVar5;
  }
  if ((pFVar15->UVLayers).Array.ArrayNum < 1) {
    local_308 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
  }
  else {
    local_308 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                 (pFVar15->UVLayers).Array.AllocatorInstance.Data;
    cVar21 = local_res20;
  }
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar17 = pFVar5;
  }
  pTVar16 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                    *)&pFVar17->GenericAttributes,InternalAttribName);
  if ((pTVar16 ==
       (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
        *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  cVar10 = local_res10[0];
  local_2a0 = *(longlong *)&pTVar16->field_0x8;
  if (cVar21 != '\0') {
    local_280.CurBlock = 0;
    local_280.CurBlockUsed = 0;
    local_280.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.Blocks.ArrayNum = 0;
    local_280.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&local_280);
    local_268.CurBlock = 0;
    local_268.CurBlockUsed = 0;
    local_268.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Blocks.ArrayNum = 0;
    local_268.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_268);
    local_250 = 0;
    local_248.CurBlock = 0;
    local_248.CurBlockUsed = 0;
    local_248.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.Blocks.ArrayNum = 0;
    local_248.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(&local_248);
    local_230.CurBlock = 0;
    local_230.CurBlockUsed = 0;
    local_230.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.Blocks.ArrayNum = 0;
    local_230.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_230);
    local_218.CurBlock = 0;
    local_218.CurBlockUsed = 0;
    local_218.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Blocks.ArrayNum = 0;
    local_218.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_218);
    local_288 = param_1;
    InitializeOverlayToPerVertexTangents(param_1);
    local_f8.MergeVertexTolerance = UE::Geometry::FMergeCoincidentMeshEdges::DEFAULT_TOLERANCE;
    local_f8.MergeSearchTolerance = 0.0;
    local_f8._padding_ = (longlong)&___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
    local_f8.OnlyUniquePairs = false;
    local_f8.InitialNumBoundaryEdges = 0;
    local_f8.FinalNumBoundaryEdges = 0;
    local_f8.bWeldAttrsOnMergedEdges = false;
    local_f8.SplitAttributeWelder.UVDistSqrdThreshold = 0.0;
    local_f8.SplitAttributeWelder.ColorDistSqrdThreshold = 0.0;
    local_f8.SplitAttributeWelder.NormalVecDotThreshold = 0.0;
    local_f8.SplitAttributeWelder.TangentVecDotThreshold = 0.0;
    local_f8.EdgesToMerge = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    local_f8.Mesh = param_1;
    UE::Geometry::FMergeCoincidentMeshEdges::Apply(&local_f8);
    UE::Geometry::TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
              (&local_2e0,(TDynamicVector<unsigned_short,512> *)&this->_padding_);
    UE::Geometry::TDynamicVector<int,512>::TDynamicVector<int,512>
              (&local_2c8,(TDynamicVector<int,512> *)&this->UVLayers);
    local_2b0 = (this->NormalLayers).Array.ArrayNum;
    UE::Geometry::TDynamicVector<unsigned_short,512>::Empty(&local_280,0);
    if (local_280.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Blocks.AllocatorInstance.Data);
    }
    local_280.Blocks.AllocatorInstance.Data = local_2e0.Blocks.AllocatorInstance.Data;
    local_2e0.Blocks.ArrayNum = 0;
    local_2e0.Blocks.ArrayMax = 0;
    local_2e0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e0.CurBlock = 0;
    local_2e0.CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&local_2e0);
    UE::Geometry::TDynamicVector<int,512>::Empty(&local_268,0);
    if (local_268.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Blocks.AllocatorInstance.Data);
    }
    local_268.Blocks.AllocatorInstance.Data = local_2c8.Blocks.AllocatorInstance.Data;
    local_2c8.Blocks.ArrayNum = 0;
    local_2c8.Blocks.ArrayMax = 0;
    local_2c8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.CurBlock = 0;
    local_2c8.CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_2c8);
    local_250 = local_2b0;
    local_2b0 = 0;
    UE::Geometry::TDynamicVector<int,512>::Empty(&local_2c8,0);
    if (local_2c8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<unsigned_short,512>::Empty(&local_2e0,0);
    if (local_2e0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<float,512>::operator=
              (&local_248,(TDynamicVector<float,512> *)&this->ColorLayer);
    UE::Geometry::TDynamicVector<int,512>::operator=
              (&local_230,(TDynamicVector<int,512> *)&(this->WeightLayers).Array.ArrayNum);
    UE::Geometry::TDynamicVector<int,512>::operator=
              (&local_218,(TDynamicVector<int,512> *)&this->SkinWeightAttributes);
    local_150 = cos((double)param_5 * __real_3f91df46a2529d39);
    local_168.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Normals.ArrayNum = 0;
    local_168.Normals.ArrayMax = 0;
    local_168.Mesh = param_1;
    UE::Geometry::FMeshNormals::Compute_Triangle(&local_168);
    local_98 = &local_2a0;
    local_90 = local_res10;
    local_88 = &local_168;
    local_80 = &local_150;
    local_78 = &local_288;
    local_100 = &local_98;
    local_108 = Core::Private::Function::
                TFunctionRefCaller<`UE::PlanarCut::AugmentedDynamicMesh::ComputeTangents'::__l5::<lambda_2>,bool,int,int,int>
                ::Call;
    UE::Geometry::TDynamicMeshOverlay<float,3>::CreateFromPredicate
              ((TDynamicMeshOverlay<float,3> *)this,
               (TFunctionRef<bool___cdecl(int,int,int)> *)&local_108,0.0);
    local_1b8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Normals.ArrayNum = 0;
    local_1b8.Normals.ArrayMax = 0;
    local_1b8.Mesh = param_1;
    UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
              (&local_1b8,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)this,true,
               true);
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_300,&param_1->TriangleRefCounts,0,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    uVar23 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
    uVar19 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    iVar12 = local_300._12_4_;
joined_r0x00014c9bbe48:
    if (local_300._8_4_ != uVar23 * 0x200 + uVar19) {
      lVar22 = *(longlong *)&(this->SkinWeightAttributes).field_0x8;
      uVar14 = local_300._8_4_ * 3;
      uVar20 = (ulonglong)(uVar14 + 1 >> 9);
      uVar18 = (ulonglong)(uVar14 + 1 & 0x1ff);
      uVar24 = (ulonglong)(uVar14 + 2 & 0x1ff);
      uVar26 = (ulonglong)(uVar14 + 2 >> 9);
      local_1f8[0] = *(uint *)(*(longlong *)(lVar22 + (ulonglong)(uVar14 >> 9) * 8) +
                              (ulonglong)(uVar14 & 0x1ff) * 4);
      local_1f8[1] = *(undefined4 *)(*(longlong *)(lVar22 + uVar20 * 8) + uVar18 * 4);
      local_1f8[2] = *(undefined4 *)(*(longlong *)(lVar22 + uVar26 * 8) + uVar24 * 4);
      if ((cVar10 == '\0') ||
         (*(char *)((ulonglong)(local_300._8_4_ & 0x1ff) +
                   *(longlong *)
                    (*(longlong *)(local_2a0 + 0x20) + (ulonglong)((uint)local_300._8_4_ >> 9) * 8))
          != '\0')) {
        lVar22 = 0;
        do {
          uVar14 = local_1f8[lVar22];
          lVar25 = (longlong)(int)uVar14;
          uVar13 = 0;
          if ((int)uVar14 < local_1b8.Normals.ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar14 = uVar14 * 3;
          lVar22 = lVar22 + 1;
          dVar2 = *(double *)(local_1b8.Normals.AllocatorInstance.Data + lVar25 * 0x18 + 8);
          dVar3 = *(double *)(local_1b8.Normals.AllocatorInstance.Data + lVar25 * 0x18 + 0x10);
          *(float *)(*(longlong *)
                      (&((this->MaterialIDAttrib).Ptr)->field_0x0 + (ulonglong)(uVar14 >> 9) * 8) +
                    (ulonglong)(uVar14 & 0x1ff) * 4) =
               (float)*(double *)(local_1b8.Normals.AllocatorInstance.Data + lVar25 * 0x18);
          *(float *)(*(longlong *)
                      (&((this->MaterialIDAttrib).Ptr)->field_0x0 + (ulonglong)(uVar14 + 1 >> 9) * 8
                      ) + (ulonglong)(uVar14 + 1 & 0x1ff) * 4) = (float)dVar2;
          *(float *)(*(longlong *)
                      (&((this->MaterialIDAttrib).Ptr)->field_0x0 + (ulonglong)(uVar14 + 2 >> 9) * 8
                      ) + (ulonglong)(uVar14 + 2 & 0x1ff) * 4) = (float)dVar3;
          iVar12 = local_300._12_4_;
        } while (lVar22 < 3);
      }
      else {
        local_1d8[0] = *(int *)(*(longlong *)
                                 (local_218.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
        lVar22 = 0;
        local_1d8[1] = *(undefined4 *)
                        (*(longlong *)(local_218.Blocks.AllocatorInstance.Data + uVar20 * 8) +
                        uVar18 * 4);
        local_1d8[2] = *(undefined4 *)
                        (*(longlong *)(local_218.Blocks.AllocatorInstance.Data + uVar26 * 8) +
                        uVar24 * 4);
        do {
          uVar14 = *(int *)((longlong)local_1d8 + lVar22) * 3;
          uVar27 = *(undefined4 *)
                    (*(longlong *)
                      (local_248.Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                    (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
          uVar28 = *(undefined4 *)
                    (*(longlong *)
                      (local_248.Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                    (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
          piVar1 = (int *)((longlong)local_1f8 + lVar22);
          lVar22 = lVar22 + 4;
          uVar13 = *piVar1 * 3;
          *(undefined4 *)
           (*(longlong *)(&((this->MaterialIDAttrib).Ptr)->field_0x0 + (ulonglong)(uVar13 >> 9) * 8)
           + (ulonglong)(uVar13 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)
                  (local_248.Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4);
          *(undefined4 *)
           (*(longlong *)
             (&((this->MaterialIDAttrib).Ptr)->field_0x0 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
           (ulonglong)(uVar13 + 1 & 0x1ff) * 4) = uVar27;
          *(undefined4 *)
           (*(longlong *)
             (&((this->MaterialIDAttrib).Ptr)->field_0x0 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
           (ulonglong)(uVar13 + 2 & 0x1ff) * 4) = uVar28;
        } while (lVar22 < 0xc);
      }
      local_300._8_4_ = local_300._8_4_ + 1;
      cVar21 = local_res20;
      if ((int)local_300._8_4_ < iVar12) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_300._0_8_ + 8) +
                           (ulonglong)((uint)local_300._8_4_ >> 9) * 8) +
                         (ulonglong)(local_300._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(local_300._0_8_ + 8) +
                          (ulonglong)((uint)local_300._8_4_ >> 9) * 8) +
                        (ulonglong)(local_300._8_4_ & 0x1ff) * 2) != -1)) break;
          local_300._8_4_ = local_300._8_4_ + 1;
        } while ((int)local_300._8_4_ < iVar12);
      }
      goto joined_r0x00014c9bbe48;
    }
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
    SplitOverlayAttributesToPerVertex(param_1,true,true);
    if (local_1b8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Normals.AllocatorInstance.Data);
    }
    if (local_168.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Normals.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<int,512>::Empty(&local_218,0);
    if (local_218.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<int,512>::Empty(&local_230,0);
    if (local_230.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<float,512>::Empty(&local_248,0);
    if (local_248.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<int,512>::Empty(&local_268,0);
    if (local_268.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Blocks.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<unsigned_short,512>::Empty(&local_280,0);
    if (local_280.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Blocks.AllocatorInstance.Data);
    }
  }
  local_314[0].bAveraged = true;
  local_314[0].bAngleWeighted = true;
  local_1a0.Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Tangents.ArrayNum = 0;
  local_1a0.Tangents.ArrayMax = 0;
  local_1a0.Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Bitangents.ArrayNum = 0;
  local_1a0.Bitangents.ArrayMax = 0;
  local_1a0.AllDegenerateTris.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.AllDegenerateTris.ArrayNum = 0;
  local_1a0.AllDegenerateTris.ArrayMax = 0;
  local_1a0.Mesh = param_1;
  UE::Geometry::TMeshTangents<float>::ComputeTriVertexTangents
            (&local_1a0,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)this,
             local_308,local_314);
  uVar23 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_res8 = 0;
  local_308 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
              CONCAT44(local_308._4_4_,uVar23);
  if ((uVar23 != 0) &&
     (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar20 = 1;
    local_res8 = 1;
    uVar19 = 1;
    if ((int)uVar23 < 2) goto LAB_14c9bc2ff;
    do {
      uVar18 = (ulonglong)((uint)uVar20 & 0x1ff);
      lVar22 = *(longlong *)(pFVar6 + (uVar20 >> 9) * 8);
      if ((*(short *)(lVar22 + uVar18 * 2) != 0) &&
         (local_res8 = uVar20, *(short *)(lVar22 + uVar18 * 2) != -1)) break;
      uVar19 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      local_res8 = uVar20;
    } while ((int)uVar19 < (int)uVar23);
  }
  uVar19 = (uint)local_res8;
LAB_14c9bc2ff:
  uVar20 = local_res8;
  if (uVar19 != uVar23) {
LAB_14c9bc320:
    do {
      pFVar5 = local_298;
      lVar22 = 0;
      uVar19 = (uint)uVar20;
      if ((cVar10 == '\0') ||
         (*(char *)((ulonglong)(uVar19 & 0x1ff) +
                   *(longlong *)(*(longlong *)(local_2a0 + 0x20) + (uVar20 >> 9) * 8)) != '\0')) {
        uVar23 = uVar19 * 3;
        local_2f0 = 0xffffffffffffffff;
        local_2e8 = 0xffffffff;
        lVar25 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar20 >> 9) * 8);
        local_148 = *(undefined8 *)(lVar25 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
        local_140 = *(undefined4 *)(lVar25 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
        if (cVar21 == '\0') {
          lVar25 = *(longlong *)&(this->SkinWeightAttributes).field_0x8;
          local_2f0 = CONCAT44(*(undefined4 *)
                                (*(longlong *)(lVar25 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                                (ulonglong)(uVar23 + 1 & 0x1ff) * 4),
                               *(undefined4 *)
                                (*(longlong *)(lVar25 + (ulonglong)(uVar23 >> 9) * 8) +
                                (ulonglong)(uVar23 & 0x1ff) * 4));
          local_2e8 = *(undefined4 *)
                       (*(longlong *)(lVar25 + (ulonglong)(uVar23 + 2 >> 9) * 8) +
                       (ulonglong)(uVar23 + 2 & 0x1ff) * 4);
        }
        lVar25 = (longlong)(int)uVar23 * 0xc;
        do {
          uVar19 = *(uint *)((longlong)&local_148 + lVar22);
          if (cVar21 == '\0') {
            pTVar8 = (pFVar5->MaterialIDAttrib).Ptr;
            uVar14 = *(int *)((longlong)&local_2f0 + lVar22) * 3;
            uVar27 = *(undefined4 *)
                      (*(longlong *)(&pTVar8->field_0x0 + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
            uVar28 = *(undefined4 *)
                      (*(longlong *)(&pTVar8->field_0x0 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                      (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
            local_310 = *(float *)(*(longlong *)
                                    (&pTVar8->field_0x0 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                                  (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
            local_1c8 = uVar27;
            uStack_1c4 = uVar28;
            local_1c0 = local_310;
            if ((local_res18 != '\0') && ((param_1->VertexNormals).bIsSet != false)) {
              lVar7 = *(longlong *)
                       ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar19 >> 9) * 8);
              *(ulonglong *)(lVar7 + (ulonglong)(uVar19 & 0x1ff) * 0xc) = CONCAT44(uVar28,uVar27);
              *(float *)(lVar7 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc) = local_310;
            }
          }
          else {
            local_1e8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
            local_310 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
            if ((param_1->VertexNormals).bIsSet != false) {
              lVar7 = *(longlong *)
                       ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar19 >> 9) * 8);
              local_1e8 = *(undefined8 *)(lVar7 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
              local_310 = *(float *)(lVar7 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
            }
            uVar27 = (undefined4)local_1e8;
            uVar28 = (undefined4)((ulonglong)local_1e8 >> 0x20);
            local_1e0 = local_310;
          }
          uVar14 = 0;
          if ((int)uVar23 < local_1a0.Bitangents.ArrayNum) {
            uVar14 = ~uVar23 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar4 = *(undefined8 *)(local_1a0.Bitangents.AllocatorInstance.Data + lVar25);
          local_2a8 = *(float *)(local_1a0.Bitangents.AllocatorInstance.Data + lVar25 + 8);
          uVar14 = 0;
          if ((int)uVar23 < local_1a0.Tangents.ArrayNum) {
            uVar14 = ~uVar23 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_138._s_0.Z = local_2a8;
          local_118._0_8_ = CONCAT44(uVar28,uVar27);
          local_128._0_8_ = *(undefined8 *)(local_1a0.Tangents.AllocatorInstance.Data + lVar25);
          local_128._s_0.Z =
               (float)*(undefined4 *)(local_1a0.Tangents.AllocatorInstance.Data + lVar25 + 8);
          local_118._s_0.Z = local_310;
          local_138._0_8_ = uVar4;
          SetTangent(param_1,uVar19,(TVector<float> *)&local_118._s_0,
                     (TVector<float> *)&local_128._s_0,(TVector<float> *)&local_138._s_0);
          uVar23 = uVar23 + 1;
          lVar25 = lVar25 + 0xc;
          lVar22 = lVar22 + 4;
          cVar21 = local_res20;
        } while (lVar22 < 0xc);
        this = local_298;
        uVar23 = (uint)local_308;
        uVar19 = (uint)local_res8;
      }
      uVar19 = uVar19 + 1;
      uVar20 = (ulonglong)uVar19;
      local_res8 = (ulonglong)uVar19;
      cVar21 = local_res20;
      if ((int)uVar19 < (int)uVar23) {
        pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          uVar18 = (ulonglong)((uint)uVar20 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar6 + (uVar20 >> 9) * 8) + uVar18 * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar6 + (uVar20 >> 9) * 8) + uVar18 * 2) != -1))
          goto LAB_14c9bc320;
          uVar19 = (uint)uVar20 + 1;
          uVar20 = (ulonglong)uVar19;
          local_res8 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)uVar23);
      }
    } while (uVar19 != uVar23);
  }
  if (local_1a0.AllDegenerateTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllDegenerateTris.AllocatorInstance.Data);
  }
  if (local_1a0.Bitangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Bitangents.AllocatorInstance.Data);
  }
  if (local_1a0.Tangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Tangents.AllocatorInstance.Data);
  }
  return;
}

// EnableUVChannels @ 14c9cab20

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::EnableUVChannels
          (FDynamicMesh3 *param_1,int param_2,bool param_3,bool param_4)

{
  FDynamicMeshAttributeSet *pFVar1;
  FName FVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar8;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar9;
  undefined1 *puVar10;
  FDynamicMeshAttributeSet *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FName *pFVar14;
  float local_res10 [4];
  char local_res20;
  FName local_48 [2];
  
  local_res20 = param_4;
  UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  if (8 < param_2) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5943927746286583904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                       ,0x60,"NumUVChannels <= MAX_NUM_UV_CHANNELS");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_2 = 8;
  }
  lVar13 = (longlong)param_2;
  if (0 < param_2) {
    lVar12 = 0;
    do {
      if (!param_3) {
        pFVar1 = (param_1->AttributeSet).Ptr;
        FVar2 = UVChannelNames[lVar12];
        pFVar11 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar11 = pFVar1;
        }
        uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        if (*(int *)&(pFVar11->GenericAttributes).field_0x8 !=
            *(int *)&(pFVar11->GenericAttributes).field_0x34) {
          puVar3 = *(undefined1 **)&(pFVar11->GenericAttributes).field_0x40;
          puVar10 = &(pFVar11->GenericAttributes).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar10 = puVar3;
          }
          iVar7 = *(int *)(puVar10 +
                          (ulonglong)
                          (*(int *)&(pFVar11->GenericAttributes).field_0x48 - 1U &
                          FVar2.Number + uVar6) * 4);
          if (iVar7 != -1) {
            do {
              if (*(FName *)(*(longlong *)&pFVar11->GenericAttributes + (longlong)iVar7 * 0x18) ==
                  FVar2) goto LAB_14c9cacfe;
              iVar7 = *(int *)(*(longlong *)&pFVar11->GenericAttributes + 0x10 +
                              (longlong)iVar7 * 0x18);
            } while (iVar7 != -1);
          }
        }
      }
      pFVar1 = (param_1->AttributeSet).Ptr;
      pFVar11 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar11 = pFVar1;
      }
      pTVar8 = ::operator_new(0x30);
      if (pTVar8 == (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0) {
        pTVar8 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)0x0;
      }
      else {
        pTVar8->_padding_ =
             (longlong)
             &___7__TDynamicVertexAttribute_M_01VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        (pTVar8->Name).ComparisonIndex = 0;
        (pTVar8->Name).Number = 0;
        pTVar8[1]._padding_ = (longlong)param_1;
        pTVar8[1].Name.ComparisonIndex = 0;
        pTVar8[1].Name.Number = 0;
        pTVar8[2]._padding_ = 0;
        pTVar8[2].Name.ComparisonIndex = 0;
        pTVar8[2].Name.Number = 0;
        UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock
                  ((TDynamicVector<float,512> *)&pTVar8[1].Name);
        local_res10[0] = 0.0;
        if ((pTVar8[1]._padding_ == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Parent != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                               ,0x9a,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Geometry::TDynamicVector<float,512>::Resize
                  ((TDynamicVector<float,512> *)&pTVar8[1].Name,
                   (*(int *)(pTVar8[1]._padding_ + 0x24) +
                   *(int *)(pTVar8[1]._padding_ + 0x20) * 0x200) * 2);
        UE::Geometry::TDynamicVector<float,512>::Fill
                  ((TDynamicVector<float,512> *)&pTVar8[1].Name,local_res10);
      }
      UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute(pFVar11,UVChannelNames[lVar12],pTVar8)
      ;
LAB_14c9cacfe:
      lVar12 = lVar12 + 1;
      param_4 = (bool)local_res20;
    } while (lVar12 < lVar13);
  }
  if ((param_4 != false) && (lVar13 < 8)) {
    pFVar14 = UVChannelNames + lVar13;
    do {
      pFVar1 = (param_1->AttributeSet).Ptr;
      FVar2 = *pFVar14;
      pFVar11 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar11 = pFVar1;
      }
      uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(pFVar11->GenericAttributes).field_0x8 !=
          *(int *)&(pFVar11->GenericAttributes).field_0x34) {
        puVar3 = *(undefined1 **)&(pFVar11->GenericAttributes).field_0x40;
        puVar10 = &(pFVar11->GenericAttributes).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        iVar7 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&(pFVar11->GenericAttributes).field_0x48 - 1U &
                        FVar2.Number + uVar6) * 4);
        if (iVar7 != -1) {
          do {
            if (*(FName *)(*(longlong *)&pFVar11->GenericAttributes + (longlong)iVar7 * 0x18) ==
                FVar2) {
              pTVar9 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                               *)&pFVar11->GenericAttributes,FVar2);
              if ((pTVar9 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                              *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x288,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::
              UnregisterExternalAttribute
                        ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)pFVar11,
                         *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar9->field_0x8)
              ;
              local_48[0] = FVar2;
              if (*(int *)&(pFVar11->GenericAttributes).field_0x8 !=
                  *(int *)&(pFVar11->GenericAttributes).field_0x34) {
                uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
                TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                     *)&pFVar11->GenericAttributes,FVar2.Number + uVar6,local_48);
              }
              break;
            }
            iVar7 = *(int *)(*(longlong *)&pFVar11->GenericAttributes + 0x10 +
                            (longlong)iVar7 * 0x18);
          } while (iVar7 != -1);
        }
      }
      pFVar14 = pFVar14 + 1;
    } while ((longlong)pFVar14 < 0x155346e80);
  }
  return;
}

// FillHoles @ 14c9cae90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::FillHoles
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          double param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
  *pTVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar20;
  uint *puVar21;
  undefined8 uVar22;
  TTuple<int,UE::Math::TVector<double>_> *pTVar23;
  TVector<double> *pTVar24;
  FIndex2i FVar25;
  ulonglong uVar26;
  TVector4<float> *pTVar27;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar28;
  byte bVar29;
  longlong *plVar30;
  FDynamicMeshAttributeSet *pFVar31;
  double *pdVar32;
  FScriptContainerElement *pFVar33;
  FDynamicMeshAttributeSet *pFVar34;
  ForElementType<FSetElementId> FVar35;
  ulonglong uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  ulong64 uVar40;
  FScriptContainerElement *pFVar41;
  longlong lVar42;
  double dVar43;
  TBitArray<FDefaultBitArrayAllocator> *pTVar44;
  ForAnyElementType FVar45;
  ForElementType<FSetElementId> FVar46;
  float fVar47;
  FDynamicMeshAttributeSet *pFVar48;
  char cVar49;
  uint uVar50;
  float fVar51;
  uint uVar52;
  longlong lVar53;
  longlong lVar54;
  int *piVar55;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  FScriptContainerElement *extraout_XMM0_Qb_00;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  double dVar63;
  undefined4 uVar64;
  double dVar65;
  double dVar66;
  undefined4 uVar68;
  double dVar67;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auStackY_bc8 [32];
  ForAnyElementType local_b78;
  undefined8 local_b70;
  float local_b68;
  ForAnyElementType local_b60;
  undefined8 local_b58;
  uint local_b50;
  FDisjointSet local_b48;
  uint local_b38;
  uint local_b34;
  undefined8 local_b30;
  ForAnyElementType local_b28;
  undefined8 local_b20;
  undefined1 local_b18;
  char local_b17;
  undefined1 local_b16 [2];
  uint local_b14;
  float local_b10;
  undefined1 local_b0c [4];
  float local_b08;
  FScriptContainerElement *local_b00;
  uint local_af8;
  longlong local_af0;
  ForAnyElementType local_ae8;
  int local_ae0;
  int local_adc;
  FScriptContainerElement *local_ad8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_ad0;
  uint local_ac0;
  uint local_abc;
  undefined4 local_ab8;
  uint local_ab4;
  longlong local_ab0;
  FScriptContainerElement *local_aa8;
  TArray<int,TSizedDefaultAllocator<32>_> local_aa0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_a90;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a80;
  undefined1 auStack_a78 [16];
  undefined8 uStack_a68;
  longlong lStack_a60;
  int local_a58;
  undefined4 uStack_a54;
  uint local_a50 [2];
  FScriptContainerElement *local_a48;
  double local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  longlong local_a20;
  int local_a18 [2];
  int local_a10;
  undefined4 local_a0c;
  int local_a08 [4];
  uint local_9f8;
  undefined4 uStack_9f4;
  TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
  *local_9f0;
  TDynamicMeshScalarTriangleAttribute<int> *local_9e8;
  undefined1 local_9d8 [16];
  double local_9c8;
  undefined8 local_9b8;
  uint uStack_9b0;
  int iStack_9ac;
  int local_9a8;
  undefined4 uStack_9a4;
  uint local_9a0;
  uint local_99c;
  uint local_998;
  TVector<float>_u_0 local_990;
  TVector<float>_u_0 local_980;
  int local_970;
  int local_96c;
  TVector2<float>_u_0 local_968;
  undefined1 local_960 [16];
  double local_950;
  TVector2<float>_u_0 local_948;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_940;
  longlong lStack_920;
  int local_918;
  undefined4 uStack_914;
  TVector<float>_u_0 local_908;
  FIndex3i_u_0 local_8f8;
  TVector<float>_u_0 local_8e8;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  uint uStack_8d0;
  int iStack_8cc;
  undefined8 local_8c8;
  FScriptContainerElement *local_8b8;
  double dStack_8b0;
  undefined8 local_8a8;
  TBaseKeyIterator<0> local_898;
  longlong local_880;
  longlong lStack_878;
  undefined8 local_870;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_868;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_848;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_828;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_808;
  double local_7e8;
  undefined8 local_7e0;
  double local_7d0;
  undefined8 local_7c8;
  TVector2<float>_u_0 local_7c0;
  double local_7b8;
  TVector<float>_u_0 local_7a8;
  TVector<float>_u_0 local_798;
  undefined8 local_788;
  TVector<float>_u_0 local_778;
  TVector<float>_u_0 local_768;
  FIndex3i_u_0 local_758;
  undefined1 local_74c [20];
  undefined1 local_738 [12];
  uint uStack_72c;
  TBitArray<FDefaultBitArrayAllocator> *local_728;
  undefined8 uStack_720;
  longlong local_718;
  int iStack_710;
  undefined4 uStack_70c;
  undefined1 local_708 [12];
  uint uStack_6fc;
  TBitArray<FDefaultBitArrayAllocator> *local_6f8;
  undefined8 uStack_6f0;
  longlong local_6e8;
  int iStack_6e0;
  undefined4 uStack_6dc;
  TVector<double>_u_0 local_6d8;
  uint *local_6c0;
  TVector<double>_u_0 *local_6b8;
  double local_6b0;
  double dStack_6a8;
  TVector<double>_u_0 local_698;
  float local_680;
  float local_67c;
  float local_678;
  undefined8 local_674;
  float local_66c;
  TVector2<float>_u_0 local_668;
  undefined2 local_660;
  undefined1 local_65e;
  FDynamicMesh3 *local_658;
  undefined8 local_650;
  undefined1 *local_648;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_640;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_638;
  undefined8 *local_630;
  undefined1 *local_628;
  TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
  **local_620;
  IndexIterator local_618;
  double local_608;
  double local_5f8;
  TBaseKeyIterator<0> local_5e8;
  double local_5d0;
  undefined1 local_5c8 [8];
  double local_5c0;
  TVector4<float>_u_0 local_5b8;
  TRangedForConstIterator local_5a8;
  TRangedForConstIterator local_578;
  double local_548;
  double dStack_540;
  double local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  TVector4<float> local_518;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_508;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4e8;
  undefined1 local_4c8 [32];
  undefined8 local_4a8;
  int local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  int local_494;
  undefined1 local_490 [8];
  ForElementType<FSetElementId> local_488;
  int local_480;
  undefined1 local_478 [32];
  undefined8 local_458;
  uint local_450;
  undefined4 local_44c;
  undefined4 local_448;
  int local_444;
  ForElementType<FSetElementId> local_438;
  int local_430;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_428;
  void *local_3e8;
  undefined4 local_3e0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_3d8;
  void *local_398;
  undefined4 local_390;
  undefined1 local_388 [32];
  longlong local_368 [3];
  longlong *local_350;
  IndexIterator local_348;
  undefined1 local_338 [40];
  longlong *local_310;
  undefined1 local_308 [48];
  IndexEnumerable local_2d8;
  undefined1 local_2c8 [72];
  undefined4 local_280;
  double adStack_258 [24];
  double adStack_198 [24];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  local_74c._12_8_ = param_3;
  UE::Geometry::TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
            ((TPointHashGrid3<int,double> *)local_2c8,__real_3f847ae147ae147b,-1);
  local_648 = local_2c8;
  uVar40 = 0;
  local_640 = &local_428;
  local_428._0_8_ = 0;
  puVar1 = &(param_2->Elements).field_0x10;
  local_638 = &local_3d8;
  local_428._8_8_ = 0;
  local_428._32_8_ = 0;
  local_428._40_4_ = 0;
  local_428._44_4_ = 0x80;
  local_428._48_4_ = 0xffffffff;
  local_428._52_4_ = 0;
  local_3e8 = (void *)0x0;
  local_3e0 = 0;
  local_3d8._0_8_ = 0;
  local_3d8._8_8_ = 0;
  local_3d8._32_8_ = 0;
  local_3d8._40_4_ = 0;
  local_3d8._44_4_ = 0x80;
  local_3d8._48_4_ = 0xffffffff;
  local_3d8._52_4_ = 0;
  local_398 = (void *)0x0;
  local_390 = 0;
  local_650 = __real_3f50624dd2f1a9fc;
  local_868._padding_._0_4_ = 0;
  local_868._padding_._4_4_ = 1;
  local_868.UnvisitedBitMask = 0xffffffff;
  local_868.CurrentBitIndex = 0;
  local_868.BaseBitIndex = 0;
  local_868.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_658 = param_1;
  if (*(int *)&(param_2->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_868);
  }
  auStack_a78._0_8_ = CONCAT44(local_868._padding_._4_4_,(undefined4)local_868._padding_);
  uStack_720 = CONCAT44(local_868.CurrentBitIndex,local_868.UnvisitedBitMask);
  lStack_a60 = CONCAT44(local_868._28_4_,local_868.BaseBitIndex);
  local_a58 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  auStack_a78._8_8_ = local_868.Array;
  uStack_70c = uStack_a54;
  local_728 = local_868.Array;
  local_a80 = param_2;
  local_738._0_8_ = param_2;
  unique0x10007707 = auStack_a78._0_8_;
  local_718 = lStack_a60;
  uStack_a68 = uStack_720;
  iStack_710 = local_a58;
  pTVar20 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_508,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_2->Elements).field_0x28);
  auStack_a78._0_8_ = pTVar20->_padding_;
  local_5a8._padding_ = (longlong)pTVar20->Array;
  local_5a8._padding_._0_4_ = pTVar20->UnvisitedBitMask;
  local_5a8._padding_._4_4_ = pTVar20->CurrentBitIndex;
  auStack_a78._8_8_ = pTVar20->Array;
  uStack_a68._0_4_ = pTVar20->UnvisitedBitMask;
  uStack_a68._4_4_ = pTVar20->CurrentBitIndex;
  lStack_a60 = *(longlong *)&pTVar20->BaseBitIndex;
  local_a58 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  local_5a8.InitialNum = local_a58;
  local_5a8._44_4_ = uStack_a54;
  local_a80 = param_2;
  local_5a8._padding_ = (longlong)param_2;
  local_5a8._padding_ = auStack_a78._0_8_;
  local_5a8._padding_ = lStack_a60;
  bVar15 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_738,&local_5a8);
  if (bVar15) {
    do {
      uVar39 = *(uint *)(*(longlong *)
                          (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_738._0_8_ + (longlong)uStack_720._4_4_ * 0xc);
      uVar36 = (ulonglong)(uVar39 & 0x1ff);
      lVar53 = *(longlong *)
                ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar39 >> 9) * 8);
      auVar61 = *(undefined1 (*) [16])(lVar53 + uVar36 * 0x10);
      if ((int)((ulonglong)*(undefined8 *)(lVar53 + 8 + uVar36 * 0x10) >> 0x20) == -1) {
        `UE::PlanarCut::AugmentedDynamicMesh::FillHoles'::__l2::<lambda_1>::operator()
                  (&local_658,auVar61._0_4_);
        `UE::PlanarCut::AugmentedDynamicMesh::FillHoles'::__l2::<lambda_1>::operator()
                  (&local_658,auVar61._4_4_);
      }
      uStack_720 = CONCAT44(uStack_720._4_4_,(uint)uStack_720 & ~uStack_72c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_738 + 8));
      bVar15 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_738,&local_5a8);
    } while (bVar15);
  }
  local_74c._4_8_ = &local_428;
  local_4c8._0_8_ = 0;
  local_9f0 = (TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
               *)local_4c8;
  local_630 = (undefined8 *)local_4c8;
  local_628 = local_74c + 4;
  local_620 = &local_9f0;
  local_4c8._8_8_ = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_49c = 0x80;
  local_498 = 0xffffffff;
  local_494 = 0;
  local_488 = (ForElementType<FSetElementId>)0x0;
  local_480 = 0;
  local_848._padding_._0_4_ = 0;
  local_848._padding_._4_4_ = 1;
  local_848.UnvisitedBitMask = 0xffffffff;
  local_848.CurrentBitIndex = 0;
  local_848.BaseBitIndex = 0;
  local_848.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_2->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_848);
  }
  auStack_a78._0_8_ = CONCAT44(local_848._padding_._4_4_,(undefined4)local_848._padding_);
  uStack_6f0 = CONCAT44(local_848.CurrentBitIndex,local_848.UnvisitedBitMask);
  lStack_a60 = CONCAT44(local_848._28_4_,local_848.BaseBitIndex);
  iStack_6e0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  auStack_a78._8_8_ = local_848.Array;
  local_6f8 = local_848.Array;
  uStack_6dc = uStack_a54;
  local_a80 = param_2;
  local_708._0_8_ = param_2;
  unique0x1000771f = auStack_a78._0_8_;
  local_6e8 = lStack_a60;
  uStack_a68 = uStack_6f0;
  local_a58 = iStack_6e0;
  pTVar20 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_4e8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_2->Elements).field_0x28);
  auStack_a78._0_8_ = pTVar20->_padding_;
  local_578._padding_ = (longlong)pTVar20->Array;
  local_578._padding_._0_4_ = pTVar20->UnvisitedBitMask;
  local_578._padding_._4_4_ = pTVar20->CurrentBitIndex;
  auStack_a78._8_8_ = pTVar20->Array;
  uStack_a68._0_4_ = pTVar20->UnvisitedBitMask;
  uStack_a68._4_4_ = pTVar20->CurrentBitIndex;
  lStack_a60 = *(longlong *)&pTVar20->BaseBitIndex;
  local_a58 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  local_578.InitialNum = local_a58;
  local_578._44_4_ = uStack_a54;
  local_a80 = param_2;
  local_578._padding_ = (longlong)param_2;
  local_578._padding_ = auStack_a78._0_8_;
  local_578._padding_ = lStack_a60;
  bVar15 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_708,&local_578);
  if (bVar15) {
    do {
      uVar39 = *(uint *)(*(longlong *)
                          (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_708._0_8_ + (longlong)uStack_6f0._4_4_ * 0xc);
      lVar53 = *(longlong *)
                ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar39 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar53 + (ulonglong)(uVar39 & 0x1ff) * 0x10);
      local_530 = *puVar2;
      uStack_528 = puVar2[1];
      if ((int)((ulonglong)*(undefined8 *)(lVar53 + 8 + (ulonglong)(uVar39 & 0x1ff) * 0x10) >> 0x20)
          == -1) {
        UE::Geometry::FDynamicMesh3::GetOrientedBoundaryEdgeV(param_1,(int)&local_970);
        `UE::PlanarCut::AugmentedDynamicMesh::FillHoles'::__l2::<lambda_4>::operator()
                  (&local_630,local_970,local_96c,uVar39);
      }
      uStack_6f0 = CONCAT44(uStack_6f0._4_4_,(uint)uStack_6f0 & ~uStack_6fc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_708 + 8));
      bVar15 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_708,&local_578);
    } while (bVar15);
  }
  if (2 < local_4c8._8_4_ - local_494) {
    local_b78.Data = (FScriptContainerElement *)0x0;
    local_b70 = 0;
    local_b60.Data = (FScriptContainerElement *)0x0;
    local_b58 = 0;
    while( true ) {
      pFVar48 = (FDynamicMeshAttributeSet *)0x0;
      local_828.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_4c8 + 0x10);
      local_828._padding_._0_4_ = 0;
      local_828._padding_._4_4_ = 1;
      local_828.UnvisitedBitMask = 0xffffffff;
      local_828.CurrentBitIndex = 0;
      local_828.BaseBitIndex = 0;
      if (local_4a0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_828);
      }
      iVar17 = (int)uVar40;
      if ((local_828.Array)->NumBits <= local_828.CurrentBitIndex) break;
      local_ac0 = 0xffffffff;
      local_b14 = *(uint *)(local_4c8._0_8_ + (longlong)local_828.CurrentBitIndex * 0x14);
      local_a30 = *(undefined8 *)(local_4c8._0_8_ + 4 + (longlong)local_828.CurrentBitIndex * 0x14);
      local_b34 = (uint)local_a30;
      if (((local_b78.Data <= (FScriptContainerElement *)&local_ac0) &&
          ((FScriptContainerElement *)&local_ac0 < local_b78.Data + (longlong)local_b70._4_4_ * 4))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uint)local_b70 == local_b70._4_4_) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_b78,(int *)((longlong)&local_b70 + 4));
        local_b70 = CONCAT44(local_b70._4_4_,iVar16);
      }
      uVar39 = (uint)local_b70;
      uVar36 = local_b70 & 0xffffffff;
      lVar53 = (longlong)(int)(uint)local_b70;
      local_abc = 0xffffffff;
      local_b70 = CONCAT44(local_b70._4_4_,(uint)local_b70 + 1);
      *(uint *)(local_b78.Data + lVar53 * 4) = local_ac0;
      if (((local_b60.Data <= (FScriptContainerElement *)&local_abc) &&
          ((FScriptContainerElement *)&local_abc < local_b60.Data + (longlong)local_b58._4_4_ * 4))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar16 = (int)local_b58;
      if ((int)local_b58 == local_b58._4_4_) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_b60,(int *)((longlong)&local_b58 + 4));
      }
      local_b58 = CONCAT44(local_b58._4_4_,iVar16 + 1);
      *(uint *)(local_b60.Data + (longlong)iVar16 * 4) = local_abc;
      if (((local_b78.Data <= (FScriptContainerElement *)&local_b14) &&
          ((FScriptContainerElement *)&local_b14 < local_b78.Data + (longlong)local_b70._4_4_ * 4))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar16 = (uint)local_b70;
      if ((uint)local_b70 == local_b70._4_4_) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_b78,(int *)((longlong)&local_b70 + 4));
      }
      local_b70 = CONCAT44(local_b70._4_4_,iVar16 + 1);
      *(uint *)(local_b78.Data + (longlong)iVar16 * 4) = local_b14;
      if (((local_b60.Data <= (FScriptContainerElement *)((longlong)&local_a30 + 4U)) &&
          ((FScriptContainerElement *)((longlong)&local_a30 + 4U) <
           local_b60.Data + (longlong)local_b58._4_4_ * 4)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar16 = (int)local_b58;
      if ((int)local_b58 == local_b58._4_4_) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_b60,(int *)((longlong)&local_b58 + 4));
      }
      uVar50 = local_b34;
      local_b58 = CONCAT44(local_b58._4_4_,iVar16 + 1);
      *(undefined4 *)(local_b60.Data + (longlong)iVar16 * 4) = local_a30._4_4_;
      TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<0>::TBaseKeyIterator<0>(&local_5e8,local_9f0,local_b14);
      local_898.Set._0_4_ = local_5e8.Set._0_4_;
      local_898.Set._4_4_ = local_5e8.Set._4_4_;
      local_898.Key = local_5e8.Key;
      local_898.Index = local_5e8.Index;
      local_898.NextIndex = local_5e8.NextIndex;
      local_898._20_4_ = local_5e8._20_4_;
      while (local_898.Index != -1) {
        if (*(uint *)(*(longlong *)
                       &((TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
                          *)CONCAT44(local_898.Set._4_4_,local_898.Set._0_4_))->Elements + 4 +
                     (longlong)local_898.Index * 0x14) == uVar50) {
          TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
                           *)CONCAT44(local_898.Set._4_4_,local_898.Set._0_4_),local_898.Index);
          local_898.Index = -1;
          break;
        }
        TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<0>::operator++(&local_898);
      }
      if (local_b34 != local_b14) {
        do {
          if (((local_b78.Data <= (FScriptContainerElement *)&local_b34) &&
              ((FScriptContainerElement *)&local_b34 <
               local_b78.Data + (longlong)local_b70._4_4_ * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar16 = (uint)local_b70;
          if ((uint)local_b70 == local_b70._4_4_) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b78,(int *)((longlong)&local_b70 + 4));
          }
          iVar37 = iVar16 + 1;
          local_b70 = CONCAT44(local_b70._4_4_,iVar37);
          *(uint *)(local_b78.Data + (longlong)iVar16 * 4) = local_b34;
          if (local_4c8._8_4_ == local_494) {
LAB_14c9cb8ef:
            if (iVar37 < (int)uVar39) {
              iVar16 = Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,uVar39 - iVar37,&local_b78,(int *)&local_b70,
                                  (int *)((longlong)&local_b70 + 4));
              memset(local_b78.Data + (longlong)iVar16 * 4,0,(longlong)(int)(uVar39 - iVar37) << 2);
            }
            else {
              if ((int)uVar39 < 0) goto LAB_14c9cef63;
              if ((int)uVar39 < iVar37) {
                uVar50 = iVar37 - uVar39;
                if (((int)(uVar39 | uVar50) < 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (uVar50 != 0) {
                  iVar16 = ((uint)local_b70 - uVar39) - uVar50;
                  if (iVar16 != 0) {
                    memmove(local_b78.Data + lVar53 * 4,
                            local_b78.Data + lVar53 * 4 + (longlong)(int)uVar50 * 4,
                            (longlong)iVar16 << 2);
                  }
                  iVar16 = (uint)local_b70 - uVar50;
                  local_b70 = CONCAT44(local_b70._4_4_,iVar16);
                  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,&local_b78,iVar16,(int *)((longlong)&local_b70 + 4));
                }
              }
            }
            if ((int)local_b58 < (int)uVar39) {
              iVar37 = uVar39 - (int)local_b58;
              iVar16 = Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,iVar37,&local_b60,(int *)&local_b58,
                                  (int *)((longlong)&local_b58 + 4));
              memset(local_b60.Data + (longlong)iVar16 * 4,0,(longlong)iVar37 << 2);
            }
            else {
              if ((int)uVar39 < 0) goto LAB_14c9cef63;
              if ((int)uVar39 < (int)local_b58) {
                uVar50 = (int)local_b58 - uVar39;
                if (((int)(uVar39 | uVar50) < 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (uVar50 != 0) {
                  iVar16 = ((int)local_b58 - uVar39) - uVar50;
                  if (iVar16 != 0) {
                    memmove(local_b60.Data + lVar53 * 4,
                            local_b60.Data + lVar53 * 4 + (longlong)(int)uVar50 * 4,
                            (longlong)iVar16 << 2);
                  }
                  iVar16 = (int)local_b58 - uVar50;
                  local_b58 = CONCAT44(local_b58._4_4_,iVar16);
                  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,&local_b60,iVar16,(int *)((longlong)&local_b58 + 4));
                }
              }
            }
            break;
          }
          FVar35 = (ForElementType<FSetElementId>)local_490;
          if (local_488 != (ForElementType<FSetElementId>)0x0) {
            FVar35 = local_488;
          }
          iVar16 = *(int *)((longlong)FVar35 + (ulonglong)(local_480 - 1U & local_b34) * 4);
          while( true ) {
            if (iVar16 == -1) goto LAB_14c9cb8ef;
            lVar54 = local_4c8._0_8_ + (longlong)iVar16 * 0x14;
            if (*(uint *)(local_4c8._0_8_ + (longlong)iVar16 * 0x14) == local_b34) break;
            iVar16 = *(int *)(lVar54 + 0xc);
          }
          puVar21 = (uint *)(lVar54 + 4);
          if (lVar54 == 0) {
            puVar21 = (uint *)0x0;
          }
          if (puVar21 == (uint *)0x0) goto LAB_14c9cb8ef;
          pFVar41 = (FScriptContainerElement *)(puVar21 + 1);
          uVar50 = *puVar21;
          if (((local_b60.Data <= pFVar41) &&
              (pFVar41 < local_b60.Data + (longlong)local_b58._4_4_ * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar16 = (int)local_b58;
          if ((int)local_b58 == local_b58._4_4_) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_b60,(int *)((longlong)&local_b58 + 4));
          }
          iStack_9ac = -1;
          local_b58 = CONCAT44(local_b58._4_4_,iVar16 + 1);
          *(uint *)(local_b60.Data + (longlong)iVar16 * 4) = *(uint *)pFVar41;
          local_9b8 = local_9f0;
          pTVar11 = local_9b8;
          uStack_9b0 = local_b34;
          if (local_9f0->HashSize == 0) {
            local_9a8 = -1;
          }
          else {
            FVar35 = (local_9f0->Hash).SecondaryData;
            FVar46 = (ForElementType<FSetElementId>)&local_9f0->Hash;
            if (FVar35 != (ForElementType<FSetElementId>)0x0) {
              FVar46 = FVar35;
            }
            local_9a8 = *(int *)((longlong)FVar46 +
                                ((longlong)local_9f0->HashSize - 1U & (longlong)(int)local_b34) * 4)
            ;
            iStack_9ac = local_9a8;
            if (local_9a8 != -1) {
              do {
                local_9a8 = *(int *)(*(longlong *)&local_9f0->Elements + 0xc +
                                    (longlong)iStack_9ac * 0x14);
                if (*(uint *)(*(longlong *)&local_9f0->Elements + (longlong)iStack_9ac * 0x14) ==
                    local_b34) break;
                iStack_9ac = local_9a8;
              } while (local_9a8 != -1);
            }
          }
          local_9b8._0_4_ = SUB84(local_9f0,0);
          local_9b8._4_4_ = (undefined4)((ulonglong)local_9f0 >> 0x20);
          local_8d8 = (undefined4)local_9b8;
          uStack_8d4 = local_9b8._4_4_;
          uStack_8d0 = local_b34;
          iStack_8cc = iStack_9ac;
          local_8c8 = CONCAT44(uStack_9a4,local_9a8);
          local_9b8 = pTVar11;
          if (iStack_9ac != -1) {
            lVar54 = *(longlong *)&local_9f0->Elements;
            iVar16 = local_9a8;
            do {
              if (*(uint *)(lVar54 + 4 + (longlong)iStack_8cc * 0x14) == uVar50) {
                TSet<TTuple<int,TTuple<int,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,1>,FDefaultSetAllocator>
                ::RemoveByIndex(local_9f0,iStack_8cc);
                iStack_8cc = -1;
                goto LAB_14c9cbb3f;
              }
              iStack_8cc = iVar16;
              if (iVar16 != -1) {
                do {
                  iVar16 = *(int *)(lVar54 + 0xc + (longlong)iStack_8cc * 0x14);
                  if (*(uint *)(lVar54 + (longlong)iStack_8cc * 0x14) == local_b34) break;
                  iStack_8cc = iVar16;
                } while (iVar16 != -1);
              }
            } while (iStack_8cc != -1);
            iStack_8cc = -1;
          }
LAB_14c9cbb3f:
          local_b34 = uVar50;
        } while (uVar50 != local_b14);
      }
      uVar50 = ~uVar39;
      iVar16 = uVar50 + (uint)local_b70;
      if (iVar16 < 3) {
        if ((int)(uint)local_b70 < (int)uVar39) {
          iVar16 = uVar39 - (uint)local_b70;
          iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar16,&local_b78,(int *)&local_b70,
                              (int *)((longlong)&local_b70 + 4));
          memset(local_b78.Data + (longlong)iVar17 * 4,0,(longlong)iVar16 << 2);
        }
        else {
          if ((int)uVar39 < 0) goto LAB_14c9cef63;
          if ((int)uVar39 < (int)(uint)local_b70) {
            uVar38 = (uint)local_b70 - uVar39;
            if ((-1 < (int)(uVar50 & ~uVar38)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar38 != 0) {
              iVar17 = ((uint)local_b70 - uVar39) - uVar38;
              if (iVar17 != 0) {
                memmove(local_b78.Data + lVar53 * 4,
                        local_b78.Data + lVar53 * 4 + (longlong)(int)uVar38 * 4,
                        (longlong)iVar17 << 2);
              }
              iVar17 = (uint)local_b70 - uVar38;
              local_b70 = CONCAT44(local_b70._4_4_,iVar17);
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_b78,iVar17,(int *)((longlong)&local_b70 + 4));
            }
          }
        }
        if ((int)local_b58 < (int)uVar39) {
          iVar16 = uVar39 - (int)local_b58;
          iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar16,&local_b60,(int *)&local_b58,
                              (int *)((longlong)&local_b58 + 4));
          memset(local_b60.Data + (longlong)iVar17 * 4,0,(longlong)iVar16 << 2);
        }
        else {
          if ((int)uVar39 < 0) {
LAB_14c9cef63:
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum(uVar36);
          }
          if ((int)uVar39 < (int)local_b58) {
            uVar38 = (int)local_b58 - uVar39;
            if ((-1 < (int)(uVar50 & ~uVar38)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar38 != 0) {
              iVar17 = ((int)local_b58 - uVar39) - uVar38;
              if (iVar17 != 0) {
                memmove(local_b60.Data + lVar53 * 4,
                        local_b60.Data + lVar53 * 4 + (longlong)(int)uVar38 * 4,
                        (longlong)iVar17 << 2);
              }
              iVar17 = (int)local_b58 - uVar38;
              local_b58 = CONCAT44(local_b58._4_4_,iVar17);
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_b60,iVar17,(int *)((longlong)&local_b58 + 4));
            }
          }
        }
      }
      else {
        uVar38 = 0;
        if ((int)uVar39 < (int)(uint)local_b70) {
          uVar38 = uVar50 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)(local_b78.Data + lVar53 * 4) = iVar16;
        uVar38 = 0;
        if ((int)uVar39 < (int)local_b58) {
          uVar38 = uVar50 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar40 = (ulong64)(iVar17 + 1);
        *(int *)(local_b60.Data + lVar53 * 4) = iVar16;
      }
    }
    if (iVar17 != 0) {
      if (((uint)local_b70 != (int)local_b58) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllBoundaryVerts.Num() == AllBoundaryEdges.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                              ,0x3b6,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_b48.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b48.Parents.ArrayNum = 0;
      local_b48.Parents.ArrayMax = 0;
      FDisjointSet::Init(&local_b48,
                         (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                         (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
      UE::Geometry::FDynamicMesh3::TrianglesItr
                (param_1,(MappedEnumerable<UE::Geometry::FIndex3i> *)local_308);
      UE::Geometry::FRefCountVector::MappedEnumerable<UE::Geometry::FIndex3i>::begin
                ((MappedEnumerable<UE::Geometry::FIndex3i> *)local_308,
                 (MappedIterator<int,UE::Geometry::FIndex3i,UE::Geometry::FRefCountVector::IndexIterator>
                  *)local_388);
      iVar16 = ((local_2d8.Vector)->RefCounts).CurBlock * 0x200 +
               ((local_2d8.Vector)->RefCounts).CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_618,local_2d8.Vector,iVar16,iVar16);
      local_338._0_8_ = 0;
      local_310 = (longlong *)0x0;
      local_348._0_8_ = local_618._0_8_;
      local_348._8_8_ = local_618._8_8_;
      TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
                ((TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_338,
                 (TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_308);
      if ((int)local_388._8_8_ != local_348._8_4_) {
        do {
          local_a18[0] = (int)local_388._8_8_;
          Core::Private::Function::CheckCallable((void *)local_388._16_8_);
          uVar8 = local_388._16_8_;
          plVar30 = local_368;
          if (local_350 != (longlong *)0x0) {
            plVar30 = local_350;
          }
          uVar22 = (**(code **)(*plVar30 + 8))();
          (*(code *)uVar8)(&local_9a0,uVar22,local_a18);
          FDisjointSet::Union(&local_b48,local_9a0,local_99c);
          FDisjointSet::Union(&local_b48,local_99c,local_998);
          UE::Geometry::FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_388);
        } while ((int)local_388._8_8_ != local_348._8_4_);
      }
      if (local_338._0_8_ != 0) {
        plVar30 = (longlong *)(local_338 + 0x10);
        if (local_310 != (longlong *)0x0) {
          plVar30 = local_310;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
      if ((code *)local_388._16_8_ != (code *)0x0) {
        plVar30 = local_368;
        if (local_350 != (longlong *)0x0) {
          plVar30 = local_350;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
      if (local_308._0_8_ != 0) {
        plVar30 = (longlong *)(local_308 + 0x10);
        if ((longlong *)local_308._40_8_ != (longlong *)0x0) {
          plVar30 = (longlong *)local_308._40_8_;
        }
        (**(code **)(*plVar30 + 0x10))();
      }
      pFVar34 = (param_1->AttributeSet).Ptr;
      local_a10 = -1;
      pFVar31 = pFVar48;
      if (pFVar34 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar31 = pFVar34;
      }
      local_9e8 = (pFVar31->MaterialIDAttrib).Ptr;
      local_aa0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_aa0.ArrayNum = 0;
      local_aa0.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_aa0,&local_a10,iVar17);
      local_ae8.Data = (FScriptContainerElement *)0x0;
      local_adc = 0;
      if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar40);
      }
      local_ae0 = 0;
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar17,&local_ae8,0,&local_adc);
      if (0 < iVar17) {
        do {
          if (((local_ae8.Data <
                (FScriptContainerElement *)
                ((longlong)&UE::Math::TVector<double>::ZeroVector.field0_0x0 + 1)) &&
              (&UE::Math::TVector<double>::ZeroVector < local_ae8.Data + (longlong)local_adc * 0x18)
              ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_ae0 == local_adc) {
            local_ae0 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_ae8,&local_adc);
          }
          uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          iVar17 = local_ae0 + 1;
          *(double *)(local_ae8.Data + (longlong)local_ae0 * 0x18) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(local_ae8.Data + (longlong)local_ae0 * 0x18 + 8) = uVar8;
          *(double *)(local_ae8.Data + (longlong)local_ae0 * 0x18 + 0x10) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar40 = uVar40 - 1;
          local_ae0 = iVar17;
        } while (uVar40 != 0);
      }
      dVar43 = __real_3cb0000000000000;
      uVar71 = SUB84(__real_3ff0000000000000,0);
      uVar72 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_b68 = 0.0;
      local_b30 = (ulonglong)local_b30._4_4_ << 0x20;
      if (0 < (int)(uint)local_b70) {
        uVar69 = (undefined4)__real_bff0000000000000;
        uVar70 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
        local_aa8 = (FScriptContainerElement *)0x0;
        local_b00 = (FScriptContainerElement *)0x0;
        do {
          dVar59 = 0.0;
          dVar6 = 0.0;
          fVar51 = SUB84(pFVar48,0);
          local_b10 = (float)(~(uint)fVar51 >> 0x1f);
          fVar47 = 0.0;
          if ((int)fVar51 < (int)(uint)local_b70) {
            fVar47 = local_b10;
          }
          if ((fVar47 == 0.0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar39 = *(int *)(local_b78.Data + (longlong)(int)fVar51 * 4) + (int)fVar51;
          if (((*(int *)(local_b78.Data + (longlong)(int)fVar51 * 4) < 3) ||
              ((int)(uint)local_b70 < (int)(uVar39 + 1))) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ChainLen > 2 && EndIdx <= AllBoundaryVerts.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                  ,0x3cd,L""), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar50 = (int)fVar51 + 1;
          local_9c8 = 0.0;
          local_478._0_8_ = 0;
          local_478._8_8_ = 0;
          local_458 = 0;
          fVar47 = 0.0;
          if ((int)uVar50 < (int)(uint)local_b70) {
            fVar47 = (float)(~uVar50 >> 0x1f);
          }
          local_450 = 0;
          local_44c = 0x80;
          local_448 = 0xffffffff;
          local_444 = 0;
          local_438 = (ForElementType<FSetElementId>)0x0;
          local_430 = 0;
          local_9d8 = ZEXT816(0);
          local_ab4 = uVar50;
          if ((fVar47 == 0.0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar54 = (longlong)(int)uVar50;
          uVar36 = (ulonglong)(*(uint *)(local_b78.Data + lVar54 * 4) & 0x1ff);
          lVar53 = *(longlong *)
                    ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(*(uint *)(local_b78.Data + lVar54 * 4) >> 9) * 8);
          pauVar3 = (undefined1 (*) [16])(lVar53 + uVar36 * 0x18);
          dVar58 = *(double *)*pauVar3;
          dVar63 = *(double *)(*pauVar3 + 8);
          local_960 = *pauVar3;
          dVar66 = *(double *)(lVar53 + 0x10 + uVar36 * 0x18);
          local_a20 = (longlong)(int)(uVar39 + 1);
          local_950 = dVar66;
          if (lVar54 < local_a20) {
            lVar53 = (longlong)(int)uVar39 << 2;
            uVar38 = uVar50;
            dVar67 = (double)local_9d8._8_8_;
            dVar7 = (double)local_9d8._0_8_;
            do {
              local_ab0 = lVar54;
              if ((uVar39 != uVar50) && (uVar38 != uVar50)) {
                uVar50 = 0;
                if ((int)uVar39 < (int)(uint)local_b70) {
                  uVar50 = ~uVar39 >> 0x1f;
                }
                if ((uVar50 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar50 = *(uint *)(local_b78.Data + lVar53);
                uVar18 = 0;
                if ((int)uVar38 < (int)(uint)local_b70) {
                  uVar18 = ~uVar38 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar41 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
                uVar36 = (ulonglong)(uVar50 & 0x1ff);
                lVar42 = *(longlong *)(pFVar41 + (ulonglong)(uVar50 >> 9) * 8);
                auVar61 = *(undefined1 (*) [16])(lVar42 + uVar36 * 0x18);
                local_950 = *(double *)(lVar42 + 0x10 + uVar36 * 0x18);
                dVar56 = auVar61._8_8_;
                uVar36 = (ulonglong)(*(uint *)(local_b78.Data + lVar54 * 4) & 0x1ff);
                lVar54 = *(longlong *)
                          (pFVar41 + (ulonglong)(*(uint *)(local_b78.Data + lVar54 * 4) >> 9) * 8);
                pdVar32 = (double *)(lVar54 + uVar36 * 0x18);
                dVar59 = auVar61._0_8_;
                dVar62 = *pdVar32 - dVar59;
                dVar57 = *(double *)(lVar54 + 0x10 + uVar36 * 0x18) - local_950;
                dVar65 = pdVar32[1] - dVar56;
                dVar56 = dVar56 - dVar63;
                dVar59 = dVar59 - dVar58;
                dVar6 = dVar6 + (dVar56 * dVar62 - dVar59 * dVar65);
                dVar7 = dVar7 + ((local_950 - dVar66) * dVar65 - dVar56 * dVar57);
                dVar67 = dVar67 + (dVar59 * dVar57 - (local_950 - dVar66) * dVar62);
                local_9c8 = dVar6;
              }
              uVar50 = 0;
              if ((int)uVar39 < (int)local_b58) {
                uVar50 = ~uVar39 >> 0x1f;
              }
              if ((uVar50 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar36 = (ulonglong)(*(uint *)(local_b60.Data + lVar53) & 0x1ff);
              lVar53 = *(longlong *)
                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*(uint *)(local_b60.Data + lVar53) >> 9) * 8);
              local_a28 = (TVector2<float>_u_0)
                          *(TVector2<float>_u_0 *)
                           &((TVector2<float>_u_0 *)(lVar53 + 8 + uVar36 * 0x10))->_s_0;
              uVar50 = *(uint *)(lVar53 + uVar36 * 0x10);
              uVar39 = *(uint *)(*(longlong *)
                                  (*(longlong *)&local_9e8->field_0x20 +
                                  (((ulonglong)local_a28 & 0xffffffff) >> 9) * 8) +
                                (ulonglong)((uint)(float)local_a28 & 0x1ff) * 4);
              if (((int)uVar39 < 0) || ((uVar39 & 1) != 0)) {
                uVar36 = (ulonglong)local_b48.Parents.ArrayNum;
                uVar39 = 0;
                if ((int)uVar50 < local_b48.Parents.ArrayNum) {
                  uVar39 = ~uVar50 >> 0x1f;
                }
                if (uVar39 == 0) {
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar36 = local_b48.Parents._8_8_ & 0xffffffff;
                }
                uVar39 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                  (longlong)(int)uVar50 * 4);
                uVar18 = uVar39;
                if (uVar39 != uVar50) {
                  do {
                    uVar39 = 0;
                    if ((int)uVar18 < (int)uVar36) {
                      uVar39 = ~uVar18 >> 0x1f;
                    }
                    if (uVar39 == 0) {
                      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar15) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      uVar36 = local_b48.Parents._8_8_ & 0xffffffff;
                    }
                    uVar39 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                      (longlong)(int)uVar18 * 4);
                    bVar15 = uVar39 != uVar18;
                    uVar18 = uVar39;
                  } while (bVar15);
                }
                uVar18 = 0;
                if ((int)uVar50 < (int)uVar36) {
                  uVar18 = ~uVar50 >> 0x1f;
                }
                if (uVar18 == 0) {
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar36 = local_b48.Parents._8_8_ & 0xffffffff;
                }
                uVar18 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                  (longlong)(int)uVar50 * 4);
                while (uVar19 = uVar18, uVar19 != uVar39) {
                  uVar18 = 0;
                  if ((int)uVar50 < (int)uVar36) {
                    uVar18 = ~uVar50 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  *(uint *)(local_b48.Parents.AllocatorInstance.Data + (longlong)(int)uVar50 * 4) =
                       uVar39;
                  uVar36 = (ulonglong)local_b48.Parents.ArrayNum;
                  uVar50 = 0;
                  if ((int)uVar19 < local_b48.Parents.ArrayNum) {
                    uVar50 = ~uVar19 >> 0x1f;
                  }
                  if (uVar50 == 0) {
                    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar15) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    uVar36 = local_b48.Parents._8_8_ & 0xffffffff;
                  }
                  uVar50 = uVar19;
                  uVar18 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                    (longlong)(int)uVar19 * 4);
                }
                local_a50[0] = uVar39;
                UE::Geometry::FDynamicMesh3::GetTriNormal
                          (param_1,(TVector<double> *)&local_6d8._s_0,(undefined4)local_a28);
                pTVar23 = TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                                  *)local_478,local_a50[0]);
                pdVar32 = (double *)&pTVar23->field_0x8;
                if (pTVar23 == (TTuple<int,UE::Math::TVector<double>_> *)0x0) {
                  pdVar32 = (double *)0x0;
                }
                if (pdVar32 == (double *)0x0) {
                  local_6c0 = local_a50;
                  local_6b8 = &local_6d8;
                  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,UE::Math::TVector<double>_const_&>_>
                            ((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                              *)local_478,
                             (TPairInitializer<int_const_&,UE::Math::TVector<double>_const_&> *)
                             local_74c,(bool *)&local_6c0);
                }
                else {
                  *pdVar32 = local_6d8._s_0.X + *pdVar32;
                  pdVar32[1] = local_6d8._s_0.Y + pdVar32[1];
                  pdVar32[2] = local_6d8._s_0.Z + pdVar32[2];
                }
              }
              lVar53 = local_ab0 * 4;
              lVar54 = local_ab0 + 1;
              uVar39 = uVar38;
              uVar50 = local_ab4;
              uVar38 = uVar38 + 1;
            } while (lVar54 < local_a20);
            uVar69 = (undefined4)__real_bff0000000000000;
            uVar70 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            uVar71 = SUB84(__real_3ff0000000000000,0);
            uVar72 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            fVar51 = local_b68;
            dVar59 = dVar6;
            local_ab0 = lVar54;
          }
          else {
            dVar7 = 0.0;
            dVar67 = 0.0;
            local_ab0 = lVar54;
          }
          uVar64 = (undefined4)__real_c000000000000000;
          uVar68 = (undefined4)((ulonglong)__real_c000000000000000 >> 0x20);
          iVar17 = -1;
          dVar6 = dVar67 * dVar67 + dVar7 * dVar7 + dVar59 * dVar59;
          if (dVar43 < dVar6) {
            local_5d0 = (double)CONCAT44(uVar72,uVar71) / SQRT(dVar6);
            dVar7 = dVar7 * local_5d0;
            dVar67 = dVar67 * local_5d0;
            dVar59 = dVar59 * local_5d0;
            local_9c8 = dVar59;
          }
          local_808._padding_._4_4_ = 1;
          local_808.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_478 + 0x10);
          local_808._padding_._0_4_ = 0;
          local_808.UnvisitedBitMask = 0xffffffff;
          local_808.CurrentBitIndex = 0;
          local_808.BaseBitIndex = 0;
          if (local_450 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_808);
          }
          uVar39 = local_450;
          local_a80 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_478;
          auStack_a78._0_8_ = CONCAT44(local_808._padding_._4_4_,(undefined4)local_808._padding_);
          lStack_a60 = CONCAT44(local_808._28_4_,local_808.BaseBitIndex);
          pTVar44 = (TBitArray<FDefaultBitArrayAllocator> *)(local_478 + 0x10);
          local_918 = local_478._8_4_ - local_444;
          bVar29 = (byte)local_450 & 0x1f;
          local_940._padding_ = CONCAT44(1 << bVar29,(int)local_450 >> 5);
          local_940.UnvisitedBitMask = -1 << bVar29;
          local_940._28_4_ = local_808.CurrentBitIndex;
          uStack_a68._0_4_ = local_808.UnvisitedBitMask;
          auStack_a78._8_8_ = local_808.Array;
          uStack_a68._4_4_ = local_808.CurrentBitIndex;
          local_940.BaseBitIndex = local_450 & 0xffffffe0;
          local_940.CurrentBitIndex = local_450;
          uStack_a54 = uStack_914;
          local_a58 = local_918;
          local_940.Array = pTVar44;
          lStack_920 = lStack_a60;
          if (((int)local_450 < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar39 != local_450) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_940);
            pTVar44 = local_940.Array;
            uVar39 = local_940.CurrentBitIndex;
          }
          while( true ) {
            pTVar10 = local_a80;
            if (*(int *)&(local_a80->Elements).field_0x8 - *(int *)&(local_a80->Elements).field_0x34
                != local_a58) {
              local_b0c[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_b0c);
            }
            lVar53 = (longlong)(int)uStack_a68._4_4_;
            if (((uStack_a68._4_4_ == uVar39) &&
                ((TBitArray<FDefaultBitArrayAllocator> *)auStack_a78._8_8_ == pTVar44)) &&
               (pTVar10 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_478))
            break;
            lVar54 = *(longlong *)&pTVar10->Elements;
            dVar66 = *(double *)(lVar54 + 8 + lVar53 * 0x28);
            dVar58 = *(double *)(lVar54 + 0x10 + lVar53 * 0x28);
            dVar63 = *(double *)(lVar54 + 0x18 + lVar53 * 0x28);
            dVar56 = dVar58 * dVar58 + dVar66 * dVar66 + dVar63 * dVar63;
            if (dVar56 <= dVar43) {
              dVar66 = (double)CONCAT44(uVar70,uVar69);
            }
            else {
              local_5c0 = (double)CONCAT44(uVar72,uVar71) / SQRT(dVar56);
              *(double *)(lVar54 + 8 + lVar53 * 0x28) = dVar66 * local_5c0;
              *(double *)(lVar54 + 0x10 + lVar53 * 0x28) = dVar58 * local_5c0;
              *(double *)(lVar54 + 0x18 + lVar53 * 0x28) = dVar63 * local_5c0;
              dVar66 = dVar66 * local_5c0 * dVar7 + dVar58 * local_5c0 * dVar67 +
                       dVar63 * local_5c0 * dVar59;
            }
            if ((double)CONCAT44(uVar68,uVar64) <= dVar66 &&
                dVar66 != (double)CONCAT44(uVar68,uVar64)) {
              iVar17 = *(int *)(lVar54 + lVar53 * 0x28);
            }
            uStack_a68._0_4_ = (uint)uStack_a68 & ~auStack_a78._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a78);
            if (dVar66 <= (double)CONCAT44(uVar68,uVar64)) {
              dVar66 = (double)CONCAT44(uVar68,uVar64);
            }
            uVar64 = SUB84(dVar66,0);
            uVar68 = (undefined4)((ulonglong)dVar66 >> 0x20);
          }
          dVar59 = local_9c8;
          if ((dVar43 >= dVar6) && (-1 < iVar17)) {
            pTVar24 = TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                      ::FindChecked((TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                                     *)local_478,iVar17);
            dVar7 = (pTVar24->field0_0x0)._s_0.X;
            dVar67 = *(double *)((longlong)&pTVar24->field0_0x0 + 8);
            dVar59 = (pTVar24->field0_0x0)._s_0.Z;
          }
          uVar39 = (uint)(float)local_b30;
          uVar50 = ~(uint)(float)local_b30;
          fVar47 = 0.0;
          if ((int)(float)local_b30 < local_aa0.ArrayNum) {
            fVar47 = (float)(uVar50 >> 0x1f);
          }
          if ((fVar47 == 0.0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar41 = local_b00;
          *(int *)(local_b00 + local_aa0.AllocatorInstance.Data) = iVar17;
          fVar47 = 0.0;
          if ((int)uVar39 < local_ae0) {
            fVar47 = (float)(uVar50 >> 0x1f);
          }
          if ((fVar47 == 0.0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar33 = local_aa8;
          auVar61._8_4_ = SUB84(dVar67,0);
          auVar61._0_8_ = dVar7;
          auVar61._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          *(undefined1 (*) [16])(local_ae8.Data + (longlong)local_aa8) = auVar61;
          *(double *)(local_ae8.Data + 0x10 + (longlong)local_aa8) = dVar59;
          local_430 = 0;
          if (local_438 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_438);
          }
          TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_478);
          fVar47 = 0.0;
          if ((int)fVar51 < (int)(uint)local_b70) {
            fVar47 = local_b10;
          }
          if ((fVar47 == 0.0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_b00 = pFVar41 + 4;
          local_aa8 = pFVar33 + 0x18;
          local_b30 = CONCAT44(local_b30._4_4_,uVar39 + 1);
          local_b68 = (float)((int)fVar51 + 1U +
                             *(int *)(local_b78.Data + (longlong)(int)fVar51 * 4));
          pFVar48 = (FDynamicMeshAttributeSet *)(ulonglong)(uint)local_b68;
        } while ((int)local_b68 < (int)(uint)local_b70);
      }
      local_ab4 = NumEnabledUVChannels(param_1);
      local_a20 = (longlong)(int)local_ab4;
      local_b28.Data = (FScriptContainerElement *)0x0;
      local_b20 = 0;
      local_b38 = 0;
      local_b50 = 0;
      if (0 < (int)(uint)local_b70) {
        uVar71 = (undefined4)__real_3fe0000000000000;
        uVar72 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
        local_af0 = 0;
        do {
          lVar53 = local_af0;
          uVar50 = local_b38;
          uVar39 = local_b50;
          uVar70 = 0;
          uVar69 = 0;
          dVar43 = 0.0;
          local_af8 = ~local_b50 >> 0x1f;
          uVar38 = 0;
          if ((int)local_b50 < local_aa0.ArrayNum) {
            uVar38 = local_af8;
          }
          if ((uVar38 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(local_aa0.AllocatorInstance.Data + lVar53 * 4) != -1) {
            uVar39 = 0;
            if ((int)uVar50 < (int)(uint)local_b70) {
              uVar39 = ~uVar50 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_b08 = *(float *)(local_b78.Data + (longlong)(int)uVar50 * 4);
            fVar47 = (float)(uVar50 + (int)local_b08);
            iVar17 = (int)fVar47 + 1;
            if ((((int)local_b08 < 3) || ((int)(uint)local_b70 < iVar17)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChainLen > 2 && EndIdx <= AllBoundaryVerts.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                    ,0x429,L""), bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_b10 = (float)(uVar50 + 1);
            local_a90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a90.ArrayNum = 0;
            local_a90.ArrayMax = 0;
            local_ad0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_ad0.ArrayNum = 0;
            local_ad0.ArrayMax = 0;
            pFVar41 = (FScriptContainerElement *)(longlong)(int)local_b10;
            local_ab0 = (longlong)iVar17;
            pFVar33 = pFVar41;
            local_aa8 = pFVar41;
            for (; (longlong)pFVar41 < (longlong)iVar17; pFVar41 = pFVar41 + 1) {
              uVar50 = (uint)pFVar33;
              uVar39 = 0;
              if ((int)uVar50 < (int)(uint)local_b70) {
                uVar39 = ~uVar50 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar36 = (ulonglong)(*(uint *)(local_b78.Data + (longlong)pFVar41 * 4) & 0x1ff);
              lVar53 = *(longlong *)
                        ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*(uint *)(local_b78.Data + (longlong)pFVar41 * 4) >> 9) * 8);
              plVar30 = (longlong *)(lVar53 + uVar36 * 0x18);
              local_880 = *plVar30;
              lStack_878 = plVar30[1];
              local_870 = *(undefined8 *)(lVar53 + 0x10 + uVar36 * 0x18);
              if (((local_ad0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_880) &&
                  ((FScriptContainerElement *)&local_880 <
                   local_ad0.AllocatorInstance.Data + (longlong)local_ad0.ArrayMax * 0x18)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_ad0.ArrayNum == local_ad0.ArrayMax) {
                iVar16 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_ad0.AllocatorInstance,&local_ad0.ArrayMax);
                local_ad0.ArrayNum = iVar16;
              }
              lVar53 = (longlong)local_ad0.ArrayNum;
              pFVar33 = (FScriptContainerElement *)(ulonglong)(uVar50 + 1);
              local_ad0.ArrayNum = local_ad0.ArrayNum + 1;
              *(longlong *)(local_ad0.AllocatorInstance.Data + lVar53 * 0x18) = local_880;
              *(longlong *)(local_ad0.AllocatorInstance.Data + lVar53 * 0x18 + 8) = lStack_878;
              *(undefined8 *)(local_ad0.AllocatorInstance.Data + lVar53 * 0x18 + 0x10) = local_870;
            }
            PolygonTriangulation::TriangulateSimplePolygon<double>(&local_ad0,&local_a90,true);
            uVar36 = (ulonglong)local_a90.ArrayNum;
            local_b17 = '\0';
            local_b68 = (float)local_a90.ArrayNum;
            local_b00 = local_a90.AllocatorInstance.Data + uVar36 * 0xc;
            FVar45.Data = local_a90.AllocatorInstance.Data;
            uVar64 = uVar69;
            uVar68 = uVar70;
            uVar73 = uVar69;
            uVar74 = uVar70;
            while( true ) {
              pFVar41 = local_b00;
              if (local_a90.ArrayNum != (int)uVar36) {
                local_b18 = 0;
                `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_b18);
              }
              cVar49 = local_b17;
              if (FVar45.Data == pFVar41) goto LAB_14c9cd41a;
              iVar17 = *(int *)(FVar45.Data + 8);
              lVar53 = (longlong)iVar17;
              local_7e0 = *(longlong *)FVar45.Data;
              if ((iVar17 < 0 || local_ad0.ArrayNum <= iVar17) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar54 = (longlong)local_7e0._4_4_;
              local_ad8 = local_ad0.AllocatorInstance.Data;
              if ((local_7e0 < 0 || local_ad0.ArrayNum <= local_7e0._4_4_) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar9.Data = local_ad0.AllocatorInstance.Data;
              lVar42 = (longlong)(int)local_7e0;
              if (((int)local_7e0 < 0 || local_ad0.ArrayNum <= (int)local_7e0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              dVar67 = *(double *)(FVar9.Data + lVar54 * 0x18) -
                       *(double *)(local_ad0.AllocatorInstance.Data + lVar42 * 0x18);
              dVar63 = *(double *)(FVar9.Data + lVar54 * 0x18 + 8) -
                       *(double *)(local_ad0.AllocatorInstance.Data + lVar42 * 0x18 + 8);
              dVar66 = *(double *)(FVar9.Data + lVar54 * 0x18 + 0x10) -
                       *(double *)(local_ad0.AllocatorInstance.Data + lVar42 * 0x18 + 0x10);
              dVar59 = *(double *)(local_ad8 + lVar53 * 0x18) -
                       *(double *)(local_ad0.AllocatorInstance.Data + lVar42 * 0x18);
              dVar58 = *(double *)(local_ad8 + lVar53 * 0x18 + 8) -
                       *(double *)(local_ad0.AllocatorInstance.Data + lVar42 * 0x18 + 8);
              dVar6 = *(double *)(local_ad8 + lVar53 * 0x18 + 0x10) -
                      *(double *)(local_ad0.AllocatorInstance.Data + lVar42 * 0x18 + 0x10);
              auVar60._0_8_ = dVar58 * dVar67;
              auVar60._8_8_ = 0;
              dVar58 = dVar58 * dVar66 - dVar6 * dVar63;
              dVar66 = dVar6 * dVar67 - dVar59 * dVar66;
              dVar6 = dVar59 * dVar63 - auVar60._0_8_;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = dVar58 * dVar58 + dVar66 * dVar66 + dVar6 * dVar6;
              auVar61 = sqrtpd(auVar60,auVar5);
              dVar59 = auVar61._0_8_;
              if (dVar59 <= 0.0) {
                dVar63 = 0.0;
                dVar66 = 0.0;
                dVar58 = 0.0;
                dVar59 = 0.0;
              }
              else {
                dVar63 = __real_3ff0000000000000 / dVar59;
                dVar58 = dVar63 * dVar58;
                dVar66 = dVar63 * dVar66;
                dVar63 = dVar63 * dVar6;
              }
              dVar59 = dVar59 * (double)CONCAT44(uVar72,uVar71);
              dVar43 = dVar43 + dVar59;
              if (dVar66 * (double)CONCAT44(uVar68,uVar64) +
                  dVar58 * (double)CONCAT44(uVar70,uVar69) +
                  dVar63 * (double)CONCAT44(uVar74,uVar73) < __real_bfe0000000000000) break;
              if (dVar59 != 0.0) {
                uVar69 = SUB84(dVar58,0);
                uVar70 = (int)((ulonglong)dVar58 >> 0x20);
                uVar64 = SUB84(dVar66,0);
                uVar68 = (int)((ulonglong)dVar66 >> 0x20);
                uVar73 = SUB84(dVar63,0);
                uVar74 = (int)((ulonglong)dVar63 >> 0x20);
              }
              uVar36 = (ulonglong)(uint)local_b68;
              FVar45.Data = FVar45.Data + 0xc;
            }
            cVar49 = '\x01';
LAB_14c9cd41a:
            if ((dVar43 < (double)local_74c._12_8_) || (cVar49 != '\0')) {
LAB_14c9ced3f:
              if (local_ad0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_ad0.AllocatorInstance.Data);
              }
              lVar53 = local_af0;
              uVar39 = local_b50;
              uVar50 = local_b38;
              if (local_a90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a90.AllocatorInstance.Data);
                lVar53 = local_af0;
                uVar39 = local_b50;
                uVar50 = local_b38;
              }
            }
            else {
              local_a38 = 0xffffffffffffffff;
              uVar36 = (ulonglong)(int)fVar47;
              local_b68 = local_b10;
              if ((int)local_b10 < (int)((int)fVar47 + 1U)) {
                local_b00 = local_aa8;
                lVar53 = uVar36 << 2;
                fVar51 = local_b10;
                do {
                  uVar50 = (uint)uVar36;
                  uVar39 = 0;
                  if ((int)uVar50 < (int)(uint)local_b70) {
                    uVar39 = ~uVar50 >> 0x1f;
                  }
                  local_b68 = fVar51;
                  if ((uVar39 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar39 = 0;
                  if ((int)fVar51 < (int)(uint)local_b70) {
                    uVar39 = ~(uint)fVar51 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar38 = 0;
                  uVar39 = uVar38;
                  if ((int)uVar50 < (int)local_b58) {
                    uVar39 = ~uVar50 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar39 = *(uint *)(local_b60.Data + lVar53);
                  local_ad8 = (FScriptContainerElement *)(ulonglong)uVar39;
                  auVar61 = *(undefined1 (*) [16])
                             (*(longlong *)
                               ((param_1->Edges).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar39 >> 9) * 8) + (ulonglong)(uVar39 & 0x1ff) * 0x10);
                  uVar39 = auVar61._0_4_;
                  uVar50 = uVar38;
                  if ((int)uVar39 < local_b48.Parents.ArrayNum) {
                    uVar50 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar50 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar50 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                    (longlong)(int)uVar39 * 4);
                  uVar18 = uVar50;
                  if (uVar50 != uVar39) {
                    do {
                      uVar50 = uVar38;
                      if ((int)uVar18 < local_b48.Parents.ArrayNum) {
                        uVar50 = ~uVar18 >> 0x1f;
                      }
                      if ((uVar50 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      uVar50 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                        (longlong)(int)uVar18 * 4);
                      bVar15 = uVar50 != uVar18;
                      uVar18 = uVar50;
                    } while (bVar15);
                  }
                  uVar38 = 0;
                  if ((int)uVar39 < local_b48.Parents.ArrayNum) {
                    uVar38 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar52 = 0;
                  uVar38 = uVar39;
                  uVar19 = local_b50;
                  for (uVar18 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                         (longlong)(int)uVar39 * 4); local_b50 = uVar19,
                      uVar18 != uVar50;
                      uVar18 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                        (longlong)(int)uVar18 * 4)) {
                    uVar19 = uVar52;
                    if ((int)uVar38 < local_b48.Parents.ArrayNum) {
                      uVar19 = ~uVar38 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    *(uint *)(local_b48.Parents.AllocatorInstance.Data + (longlong)(int)uVar38 * 4)
                         = uVar50;
                    uVar38 = uVar52;
                    if ((int)uVar18 < local_b48.Parents.ArrayNum) {
                      uVar38 = ~uVar18 >> 0x1f;
                    }
                    if ((uVar38 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    uVar38 = uVar18;
                    uVar19 = local_b50;
                  }
                  if (auVar61._12_4_ == -1) {
                    if ((int)uVar19 < local_aa0.ArrayNum) {
                      uVar52 = local_af8;
                    }
                    if ((uVar52 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if (uVar50 != *(uint *)(local_aa0.AllocatorInstance.Data + local_af0 * 4))
                    goto LAB_14c9cd7cb;
                    if ((uVar39 == 0xffffffff) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Edge.Vert.A != INDEX_NONE",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                                            ,0x456,L""), bVar15)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    local_a0c = *(undefined4 *)
                                 (*(longlong *)
                                   (*(longlong *)&local_9e8->field_0x20 +
                                   ((auVar61._8_8_ & 0xffffffff) >> 9) * 8) +
                                 (ulonglong)(auVar61._8_4_ & 0x1ff) * 4);
                    FVar25 = UE::Geometry::FDynamicMesh3::GetOrientedBoundaryEdgeV
                                       (param_1,(int)local_5c8);
                    uVar36 = *(ulonglong *)FVar25.field0_0x0;
                    local_a38 = uVar36;
                    if ((uint)uVar36 != 0xffffffff) {
                      uVar39 = 0;
                      if ((int)uVar19 < local_ae0) {
                        uVar39 = local_af8;
                      }
                      if ((uVar39 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pFVar41 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
                      iVar17 = 0;
                      local_8b8 = *(FScriptContainerElement **)(local_ae8.Data + local_af0 * 0x18);
                      dStack_8b0 = *(double *)(local_ae8.Data + local_af0 * 0x18 + 8);
                      local_8a8 = *(undefined8 *)(local_ae8.Data + local_af0 * 0x18 + 0x10);
                      uVar26 = (ulonglong)((uint)uVar36 & 0x1ff);
                      lVar53 = *(longlong *)(pFVar41 + ((uVar36 & 0xffffffff) >> 9) * 8);
                      local_960 = *(undefined1 (*) [16])(lVar53 + uVar26 * 0x18);
                      local_a40 = *(double *)(lVar53 + 0x10 + uVar26 * 0x18);
                      uVar73 = SUB84(local_a40,0);
                      uVar74 = (undefined4)((ulonglong)local_a40 >> 0x20);
                      uVar26 = (ulonglong)((uint)(uVar36 >> 0x20) & 0x1ff);
                      local_9d8._8_4_ = local_960._8_4_;
                      local_9d8._0_8_ = local_960._8_8_;
                      local_9d8._12_4_ = local_960._12_4_;
                      lVar53 = *(longlong *)(pFVar41 + (uVar36 >> 0x29) * 8);
                      local_538 = *(double *)(lVar53 + 0x10 + uVar26 * 0x18);
                      pdVar32 = (double *)(lVar53 + uVar26 * 0x18);
                      local_548 = *pdVar32;
                      dStack_6a8 = pdVar32[1];
                      local_b00 = (FScriptContainerElement *)(local_538 - local_a40);
                      local_ad8 = (FScriptContainerElement *)(local_548 - local_960._0_8_);
                      local_6b0 = dStack_6a8 - local_960._8_8_;
                      uVar69 = local_960._0_4_;
                      uVar70 = local_960._4_4_;
                      uVar64 = local_960._8_4_;
                      uVar68 = local_960._12_4_;
                      local_5f8 = local_a40;
                      dStack_540 = dStack_6a8;
                      if (0 < local_a20) {
                        lVar54 = 0;
                        uVar71 = (undefined4)local_8a8;
                        uVar72 = (undefined4)((ulonglong)local_8a8 >> 0x20);
                        uVar69 = SUB84(dStack_8b0,0);
                        uVar70 = (undefined4)((ulonglong)dStack_8b0 >> 0x20);
                        uVar64 = SUB84(local_8b8,0);
                        uVar68 = (undefined4)((ulonglong)local_8b8 >> 0x20);
                        iVar16 = local_a38._4_4_;
                        local_b30 = CONCAT44(local_b30._4_4_,
                                             __real_3f800000 /
                                             (float)SQRT(local_6b0 * local_6b0 +
                                                         (double)local_ad8 * (double)local_ad8 +
                                                         (double)local_b00 * (double)local_b00));
                        lVar53 = local_a20;
                        local_a48 = local_8b8;
                        local_7c8 = local_8a8;
                        local_7b8 = dStack_8b0;
                        do {
                          GetUV(param_1,(int)local_a38,(TVector2<float> *)&local_948._s_0,iVar17);
                          GetUV(param_1,iVar16,(TVector2<float> *)&local_968._s_0,iVar17);
                          local_b68 = local_968._s_0.X - local_948._s_0.X;
                          fVar51 = local_968._s_0.Y - local_948._s_0.Y;
                          FGenericPlatformMath::Atan2(fVar51,local_b68);
                          __libm_sse2_sincos_();
                          dVar6 = extraout_XMM0_Qa * (double)CONCAT44(uVar68,uVar64);
                          dVar59 = extraout_XMM0_Qa * (double)CONCAT44(uVar70,uVar69);
                          dVar43 = extraout_XMM0_Qa * (double)CONCAT44(uVar72,uVar71);
                          __libm_sse2_sincos_();
                          local_7e8 = extraout_XMM0_Qa_00 * (double)CONCAT44(uVar70,uVar69);
                          dVar63 = dVar59 + dVar59;
                          local_608 = extraout_XMM0_Qa_00 * (double)CONCAT44(uVar72,uVar71);
                          local_7d0 = extraout_XMM0_Qa_00 * (double)CONCAT44(uVar68,uVar64);
                          dVar67 = dVar43 + dVar43;
                          dVar7 = (double)(SQRT(fVar51 * fVar51 + local_b68 * local_b68) *
                                          (float)local_b30);
                          dVar56 = (dVar6 + dVar6) * dVar6;
                          dVar58 = (dVar6 + dVar6) * extraout_XMM0_Qb;
                          *(double *)((longlong)adStack_258 + lVar54) =
                               ((__real_3ff0000000000000 - (dVar63 * dVar59 + dVar67 * dVar43)) *
                                (double)local_ad8 +
                                (dVar63 * dVar6 - dVar67 * extraout_XMM0_Qb) * local_6b0 +
                               (dVar63 * extraout_XMM0_Qb + dVar67 * dVar6) * (double)local_b00) *
                               dVar7;
                          *(double *)((longlong)adStack_258 + lVar54 + 8) =
                               ((__real_3ff0000000000000 - (dVar56 + dVar67 * dVar43)) * local_6b0 +
                                (dVar67 * extraout_XMM0_Qb + dVar63 * dVar6) * (double)local_ad8 +
                               (dVar67 * dVar59 - dVar58) * (double)local_b00) * dVar7;
                          dVar66 = local_7e8 + local_7e8;
                          *(double *)((longlong)adStack_258 + lVar54 + 0x10) =
                               ((dVar58 + dVar67 * dVar59) * local_6b0 +
                                (dVar67 * dVar6 - dVar63 * extraout_XMM0_Qb) * (double)local_ad8 +
                               (__real_3ff0000000000000 - (dVar56 + dVar63 * dVar59)) *
                               (double)local_b00) * dVar7;
                          dVar6 = local_608 + local_608;
                          dVar59 = (local_7d0 + local_7d0) * local_7d0;
                          dVar43 = (local_7d0 + local_7d0) * (double)extraout_XMM0_Qb_00;
                          iVar17 = iVar17 + 1;
                          *(double *)((longlong)adStack_198 + lVar54) =
                               ((__real_3ff0000000000000 - (dVar66 * local_7e8 + dVar6 * local_608))
                                * (double)local_ad8 +
                                (dVar66 * local_7d0 - dVar6 * (double)extraout_XMM0_Qb_00) *
                                local_6b0 +
                               (dVar66 * (double)extraout_XMM0_Qb_00 + dVar6 * local_7d0) *
                               (double)local_b00) * dVar7;
                          *(double *)((longlong)adStack_198 + lVar54 + 8) =
                               ((__real_3ff0000000000000 - (dVar59 + dVar6 * local_608)) * local_6b0
                                + (dVar6 * (double)extraout_XMM0_Qb_00 + dVar66 * local_7d0) *
                                  (double)local_ad8 +
                               (dVar6 * local_7e8 - dVar43) * (double)local_b00) * dVar7;
                          *(double *)((longlong)adStack_198 + lVar54 + 0x10) =
                               ((dVar43 + dVar6 * local_7e8) * local_6b0 +
                                (dVar6 * local_7d0 - dVar66 * (double)extraout_XMM0_Qb_00) *
                                (double)local_ad8 +
                               (__real_3ff0000000000000 - (dVar59 + dVar66 * local_7e8)) *
                               (double)local_b00) * dVar7;
                          lVar54 = lVar54 + 0x18;
                          uVar71 = (undefined4)local_7c8;
                          uVar72 = (undefined4)((ulonglong)local_7c8 >> 0x20);
                          uVar69 = SUB84(local_7b8,0);
                          uVar70 = (undefined4)((ulonglong)local_7b8 >> 0x20);
                          uVar64 = SUB84(local_a48,0);
                          uVar68 = (undefined4)((ulonglong)local_a48 >> 0x20);
                          lVar53 = lVar53 + -1;
                          local_8b8 = extraout_XMM0_Qb_00;
                          dStack_8b0 = extraout_XMM0_Qa_00;
                        } while (lVar53 != 0);
                        uVar73 = SUB84(local_a40,0);
                        uVar74 = (undefined4)((ulonglong)local_a40 >> 0x20);
                        uVar71 = (undefined4)__real_3fe0000000000000;
                        uVar72 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
                        uVar69 = local_960._0_4_;
                        uVar70 = local_960._4_4_;
                        uVar64 = local_9d8._0_4_;
                        uVar68 = local_9d8._4_4_;
                      }
                      fVar51 = local_b08;
                      uVar39 = 0;
                      uVar36 = (ulonglong)(uint)local_b08;
                      local_ab8 = 0xffffffff;
                      if ((int)local_b08 < 0) {
                    /* WARNING: Subroutine does not return */
                        Core::Private::OnInvalidArrayNum(uVar36);
                      }
                      uVar26 = local_b20 >> 0x20;
                      local_b20 = local_b20 & 0xffffffff00000000;
                      uVar50 = uVar39;
                      if ((float)uVar26 != local_b08) {
                        Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,(int)local_b08,&local_b28,0,(int *)((longlong)&local_b20 + 4)
                                  );
                        uVar50 = (uint)local_b20;
                      }
                      if (0 < (int)fVar51) {
                        do {
                          uVar38 = uVar50;
                          if ((local_b28.Data <= (FScriptContainerElement *)&local_ab8) &&
                             ((FScriptContainerElement *)&local_ab8 <
                              local_b28.Data + (longlong)(int)local_b20._4_4_ * 4)) {
                            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               );
                            if (bVar15) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            uVar38 = (uint)local_b20;
                          }
                          if (uVar38 == local_b20._4_4_) {
                            uVar38 = Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x404,&local_b28,(int *)((longlong)&local_b20 + 4));
                          }
                          uVar50 = uVar38 + 1;
                          local_b20 = CONCAT44(local_b20._4_4_,uVar50);
                          *(undefined4 *)(local_b28.Data + (longlong)(int)uVar38 * 4) = local_ab8;
                          uVar36 = uVar36 - 1;
                        } while (uVar36 != 0);
                      }
                      local_b68 = local_b10;
                      if ((longlong)local_aa8 < local_ab0) {
                        local_ad8 = local_aa8;
                        local_b00 = local_aa8 + (-1 - (longlong)(int)local_b38);
                        local_b30 = local_b30 & 0xffffffff00000000;
                        pFVar41 = (FScriptContainerElement *)(longlong)(int)fVar47;
                        fVar51 = local_b10;
                        do {
                          uVar50 = 0;
                          if ((int)fVar47 < (int)(uint)local_b70) {
                            uVar50 = ~(uint)fVar47 >> 0x1f;
                          }
                          local_b68 = fVar51;
                          if ((uVar50 == 0) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar15)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          uVar50 = 0;
                          if ((int)fVar51 < (int)(uint)local_b70) {
                            uVar50 = ~(uint)fVar51 >> 0x1f;
                          }
                          if ((uVar50 == 0) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar15)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          uVar50 = 0;
                          if ((int)fVar47 < (int)local_b58) {
                            uVar50 = ~(uint)fVar47 >> 0x1f;
                          }
                          if ((uVar50 == 0) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar15)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          if (*(int *)(*(longlong *)
                                        ((param_1->Edges).Blocks.AllocatorInstance.Data +
                                        (ulonglong)
                                        (*(uint *)(local_b60.Data + (longlong)pFVar41 * 4) >> 9) * 8
                                        ) + 0xc +
                                      (ulonglong)
                                      (*(uint *)(local_b60.Data + (longlong)pFVar41 * 4) & 0x1ff) *
                                      0x10) == -1) {
                            lVar53 = (longlong)(int)local_b38;
                            local_b08 = (float)(((int)fVar47 - local_b38) - 1);
                            UE::Geometry::FDynamicMesh3::GetOrientedBoundaryEdgeV
                                      (param_1,(int)&local_9f8);
                            uVar50 = local_9f8;
                            if (-1 < (int)local_9f8) {
                              uVar36 = (ulonglong)local_b48.Parents.ArrayNum;
                              uVar38 = ~local_9f8;
                              uVar39 = 0;
                              if ((int)local_9f8 < local_b48.Parents.ArrayNum) {
                                uVar39 = uVar38 >> 0x1f;
                              }
                              if (uVar39 == 0) {
                                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                if (bVar15) {
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                                uVar36 = local_b48.Parents._8_8_ & 0xffffffff;
                              }
                              uVar39 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                                (longlong)(int)uVar50 * 4);
                              uVar18 = uVar39;
                              if (uVar39 != uVar50) {
                                do {
                                  uVar39 = 0;
                                  if ((int)uVar18 < (int)uVar36) {
                                    uVar39 = ~uVar18 >> 0x1f;
                                  }
                                  if (uVar39 == 0) {
                                    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                    if (bVar15) {
                                      pcVar4 = (code *)swi(3);
                                      (*pcVar4)();
                                      return;
                                    }
                                    uVar36 = local_b48.Parents._8_8_ & 0xffffffff;
                                  }
                                  uVar39 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                                    (longlong)(int)uVar18 * 4);
                                  bVar15 = uVar39 != uVar18;
                                  uVar18 = uVar39;
                                } while (bVar15);
                              }
                              uVar18 = 0;
                              if ((int)uVar50 < (int)uVar36) {
                                uVar18 = uVar38 >> 0x1f;
                              }
                              if (uVar18 == 0) {
                                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                if (bVar15) {
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                                uVar36 = local_b48.Parents._8_8_ & 0xffffffff;
                              }
                              uVar38 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                                (longlong)(int)uVar50 * 4);
                              uVar19 = local_b50;
                              while (uVar18 = uVar38, local_b50 = uVar19, uVar18 != uVar39) {
                                uVar38 = 0;
                                if ((int)uVar50 < (int)uVar36) {
                                  uVar38 = ~uVar50 >> 0x1f;
                                }
                                if ((uVar38 == 0) &&
                                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                                *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                         (longlong)(int)uVar50 * 4) = uVar39;
                                uVar36 = (ulonglong)local_b48.Parents.ArrayNum;
                                uVar50 = 0;
                                if ((int)uVar18 < local_b48.Parents.ArrayNum) {
                                  uVar50 = ~uVar18 >> 0x1f;
                                }
                                if (uVar50 == 0) {
                                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                  if (bVar15) {
                                    pcVar4 = (code *)swi(3);
                                    (*pcVar4)();
                                    return;
                                  }
                                  uVar36 = local_b48.Parents._8_8_ & 0xffffffff;
                                }
                                uVar19 = local_b50;
                                uVar50 = uVar18;
                                uVar38 = *(uint *)(local_b48.Parents.AllocatorInstance.Data +
                                                  (longlong)(int)uVar18 * 4);
                              }
                              uVar50 = 0;
                              if ((int)uVar19 < local_aa0.ArrayNum) {
                                uVar50 = local_af8;
                              }
                              if ((uVar50 == 0) &&
                                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                                pcVar4 = (code *)swi(3);
                                (*pcVar4)();
                                return;
                              }
                              if (*(uint *)(local_aa0.AllocatorInstance.Data + local_af0 * 4) ==
                                  uVar39) {
                                uVar39 = 0;
                                if ((int)local_b08 < (int)(uint)local_b20) {
                                  uVar39 = ~(uint)local_b08 >> 0x1f;
                                }
                                if ((uVar39 == 0) &&
                                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                                uVar39 = (uint)(float)local_b30;
                                *(uint *)(local_b28.Data + ((longlong)pFVar41 - lVar53) * 4 + -4) =
                                     local_9f8;
                                uVar50 = 0;
                                if ((int)(float)local_b30 < (int)(uint)local_b20) {
                                  uVar50 = ~(uint)(float)local_b30 >> 0x1f;
                                }
                                if ((uVar50 == 0) &&
                                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                                *(undefined4 *)(local_b28.Data + (longlong)local_b00 * 4) =
                                     uStack_9f4;
                                fVar51 = local_b68;
                              }
                              else {
                                fVar51 = local_b68;
                                uVar39 = (uint)(float)local_b30;
                              }
                            }
                          }
                          fVar47 = fVar51;
                          uVar39 = uVar39 + 1;
                          local_b00 = local_b00 + 1;
                          pFVar33 = local_ad8 + 1;
                          local_b30 = CONCAT44(local_b30._4_4_,uVar39);
                          fVar51 = (float)((int)fVar47 + 1);
                          pFVar41 = local_ad8;
                          local_b68 = fVar51;
                          local_ad8 = pFVar33;
                        } while ((longlong)pFVar33 < local_ab0);
                      }
                      uVar39 = 0;
                      GetTangent(param_1,(int)local_a38,(TVector<float> *)&local_980._s_0,
                                 (TVector<float> *)&local_990._s_0);
                      pTVar27 = GetVertexColor(&local_518,param_1,(int)local_a38);
                      uVar8 = *(undefined8 *)&pTVar27->field0_0x0;
                      uVar22 = *(undefined8 *)((longlong)&pTVar27->field0_0x0 + 8);
                      local_b68 = (float)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                                         (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
                      if ((longlong)local_aa8 < local_ab0) {
                        pFVar41 = (FScriptContainerElement *)(-1 - (longlong)(int)local_b38);
                        dVar43 = (double)(local_af0 * 3);
                        local_b30 = ((longlong)local_aa8 - (longlong)(int)local_b38) * 4 - 4;
                        local_a48 = pFVar41;
                        local_a40 = dVar43;
                        do {
                          pFVar33 = local_aa8;
                          uVar50 = 0;
                          if ((int)uVar39 < (int)(uint)local_b20) {
                            uVar50 = ~uVar39 >> 0x1f;
                          }
                          if ((uVar50 == 0) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar15)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          if (*(int *)(local_b28.Data +
                                      (longlong)pFVar33 * 4 + (longlong)pFVar41 * 4) == -1) {
                            uVar50 = 0;
                            if ((int)local_b10 < (int)(uint)local_b70) {
                              uVar50 = ~(uint)local_b10 >> 0x1f;
                            }
                            if ((uVar50 == 0) &&
                               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            uVar36 = (ulonglong)
                                     (*(uint *)(local_b78.Data + (longlong)pFVar33 * 4) & 0x1ff);
                            lVar53 = *(longlong *)
                                      ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                                      (ulonglong)
                                      (*(uint *)(local_b78.Data + (longlong)pFVar33 * 4) >> 9) * 8);
                            dVar6 = *(double *)(lVar53 + 0x10 + uVar36 * 0x18);
                            auVar61 = *(undefined1 (*) [16])(lVar53 + uVar36 * 0x18);
                            uVar50 = 0;
                            if ((int)uVar19 < local_ae0) {
                              uVar50 = local_af8;
                            }
                            local_9c8 = dVar6;
                            if ((uVar50 == 0) &&
                               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            local_680 = (float)*(double *)(local_ae8.Data + (longlong)dVar43 * 8);
                            local_66c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                            local_668 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                            local_660 = 1;
                            local_65e = 0;
                            local_67c = (float)*(double *)
                                                (local_ae8.Data + (longlong)dVar43 * 8 + 8);
                            local_678 = (float)*(double *)
                                                (local_ae8.Data + (longlong)dVar43 * 8 + 0x10);
                            local_674 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                            local_698._0_16_ = auVar61;
                            local_698._s_0.Z = dVar6;
                            iVar17 = UE::Geometry::FDynamicMesh3::AppendVertex
                                               (param_1,(FVertexInfo *)&local_698._s_0);
                            local_5b8._0_8_ = uVar8;
                            local_5b8._8_8_ = uVar22;
                            SetVertexColor(param_1,iVar17,(TVector4<float> *)&local_5b8._s_0);
                            uVar14 = local_980._0_8_;
                            uVar13 = local_990._s_0.Z;
                            uVar12 = local_990._0_8_;
                            local_b08 = local_980._s_0.Z;
                            uVar50 = 0;
                            if ((int)uVar19 < local_ae0) {
                              uVar50 = local_af8;
                            }
                            if ((uVar50 == 0) &&
                               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            local_798._s_0.Z = local_b08;
                            local_7a8._0_8_ = uVar12;
                            local_908._s_0.X =
                                 (float)*(double *)(local_ae8.Data + (longlong)dVar43 * 8);
                            local_7a8._s_0.Z = (float)uVar13;
                            local_908._s_0.Y =
                                 (float)*(double *)(local_ae8.Data + (longlong)dVar43 * 8 + 8);
                            local_908._s_0.Z =
                                 (float)*(double *)(local_ae8.Data + (longlong)dVar43 * 8 + 0x10);
                            local_798._0_8_ = uVar14;
                            SetTangent(param_1,iVar17,(TVector<float> *)&local_908._s_0,
                                       (TVector<float> *)&local_798._s_0,
                                       (TVector<float> *)&local_7a8._s_0);
                            iVar16 = 0;
                            if (0 < local_a20) {
                              dVar6 = auVar61._0_8_ - (double)CONCAT44(uVar70,uVar69);
                              dVar66 = auVar61._8_8_ - (double)CONCAT44(uVar68,uVar64);
                              lVar54 = 0;
                              dVar59 = local_9c8 - (double)CONCAT44(uVar74,uVar73);
                              lVar53 = local_a20;
                              do {
                                local_a28._4_4_ =
                                     (float)(dVar66 * *(double *)
                                                       ((longlong)adStack_198 + lVar54 + 8) +
                                             dVar6 * *(double *)((longlong)adStack_198 + lVar54) +
                                            dVar59 * *(double *)
                                                      ((longlong)adStack_198 + lVar54 + 0x10));
                                local_a28._0_4_ =
                                     (float)(dVar66 * *(double *)
                                                       ((longlong)adStack_258 + lVar54 + 8) +
                                             dVar6 * *(double *)((longlong)adStack_258 + lVar54) +
                                            dVar59 * *(double *)
                                                      ((longlong)adStack_258 + lVar54 + 0x10));
                                SetUV(param_1,iVar17,(TVector2<float>)local_a28,iVar16);
                                iVar16 = iVar16 + 1;
                                lVar54 = lVar54 + 0x18;
                                lVar53 = lVar53 + -1;
                                dVar43 = local_a40;
                                uVar19 = local_b50;
                              } while (lVar53 != 0);
                            }
                            uVar50 = 0;
                            if ((int)uVar39 < (int)(uint)local_b20) {
                              uVar50 = ~uVar39 >> 0x1f;
                            }
                            if ((uVar50 == 0) &&
                               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            *(int *)(local_b28.Data + local_b30) = iVar17;
                            pFVar41 = local_a48;
                          }
                          local_b30 = local_b30 + 4;
                          local_b10 = (float)((int)local_b10 + 1);
                          local_aa8 = local_aa8 + 1;
                          uVar39 = uVar39 + 1;
                        } while ((longlong)local_aa8 < local_ab0);
                      }
                      uVar36 = (ulonglong)local_a90.ArrayNum;
                      local_b30 = CONCAT44(local_b30._4_4_,local_a90.ArrayNum);
                      local_a48 = local_a90.AllocatorInstance.Data + uVar36 * 0xc;
                      dVar43 = (double)(local_af0 * 3);
                      FVar45.Data = local_a90.AllocatorInstance.Data;
                      local_a40 = dVar43;
                      while( true ) {
                        pFVar41 = local_a48;
                        local_ad8 = FVar45.Data;
                        if (local_a90.ArrayNum != (int)uVar36) {
                          local_b16[0] = 0;
                          `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2
                          ::<lambda_1>::operator()(local_b16);
                        }
                        if (FVar45.Data == pFVar41) break;
                        local_788 = *(longlong *)FVar45.Data;
                        iVar17 = *(int *)(FVar45.Data + 8);
                        lVar53 = (longlong)(int)local_788;
                        if (((int)local_788 < 0 || (int)(uint)local_b20 <= (int)local_788) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar15)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        iVar16 = *(int *)(local_b28.Data + lVar53 * 4);
                        lVar53 = (longlong)local_788._4_4_;
                        if ((local_788 < 0 || (int)(uint)local_b20 <= local_788._4_4_) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar15)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        iVar37 = *(int *)(local_b28.Data + lVar53 * 4);
                        if ((iVar17 < 0 || (int)(uint)local_b20 <= iVar17) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar15)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        iVar17 = *(int *)(local_b28.Data + (longlong)iVar17 * 4);
                        if (((iVar16 != iVar37) && (iVar37 != iVar17)) && (iVar16 != iVar17)) {
                          local_8f8._s_0.A = iVar16;
                          local_8f8._s_0.B = iVar37;
                          local_8f8._s_0.C = iVar17;
                          uVar39 = UE::Geometry::FDynamicMesh3::AppendTriangle
                                             (param_1,(FIndex3i *)&local_8f8._s_0,0);
                          if (uVar39 == 0xfffffffe) {
                            lVar53 = 3;
                            local_a08[0] = iVar16;
                            piVar55 = local_a08;
                            local_a08[1] = iVar37;
                            local_a08[2] = iVar17;
                            fVar47 = local_b68;
                            do {
                              iVar17 = *piVar55;
                              if (iVar17 < (int)fVar47) {
                                iVar16 = UE::Geometry::FDynamicMesh3::AppendVertex
                                                   (param_1,param_1,iVar17);
                                uVar22 = local_980._0_8_;
                                uVar69 = local_990._s_0.Z;
                                uVar8 = local_990._0_8_;
                                local_b08 = local_980._s_0.Z;
                                uVar39 = 0;
                                if ((int)local_b50 < local_ae0) {
                                  uVar39 = local_af8;
                                }
                                if ((uVar39 == 0) &&
                                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                                local_768._s_0.Z = local_b08;
                                local_778._0_8_ = uVar8;
                                local_8e8._s_0.X =
                                     (float)*(double *)(local_ae8.Data + (longlong)dVar43 * 8);
                                local_778._s_0.Z = (float)uVar69;
                                local_8e8._s_0.Y =
                                     (float)*(double *)(local_ae8.Data + (longlong)dVar43 * 8 + 8);
                                local_8e8._s_0.Z =
                                     (float)*(double *)
                                             (local_ae8.Data + (longlong)dVar43 * 8 + 0x10);
                                local_768._0_8_ = uVar22;
                                SetTangent(param_1,iVar16,(TVector<float> *)&local_8e8._s_0,
                                           (TVector<float> *)&local_768._s_0,
                                           (TVector<float> *)&local_778._s_0);
                                uVar39 = local_ab4;
                                iVar37 = 0;
                                if (0 < (int)local_ab4) {
                                  do {
                                    GetUV(param_1,iVar17,(TVector2<float> *)&local_7c0._s_0,iVar37);
                                    SetUV(param_1,iVar16,(TVector2<float>)local_7c0._s_0,iVar37);
                                    iVar37 = iVar37 + 1;
                                    dVar43 = local_a40;
                                  } while (iVar37 < (int)uVar39);
                                }
                                *piVar55 = iVar16;
                                fVar47 = local_b68;
                              }
                              piVar55 = piVar55 + 1;
                              lVar53 = lVar53 + -1;
                            } while (lVar53 != 0);
                            local_758._0_8_ = CONCAT44(local_a08[1],local_a08[0]);
                            local_758._s_0.C = local_a08[2];
                            uVar39 = UE::Geometry::FDynamicMesh3::AppendTriangle
                                               (param_1,(FIndex3i *)&local_758._s_0,0);
                            FVar45.Data = local_ad8;
                          }
                          if (-1 < (int)uVar39) {
                            uVar36 = (ulonglong)(uVar39 >> 9);
                            *(undefined4 *)
                             (*(longlong *)(*(longlong *)&local_9e8->field_0x20 + uVar36 * 8) +
                             (ulonglong)(uVar39 & 0x1ff) * 4) = local_a0c;
                            pFVar48 = (param_1->AttributeSet).Ptr;
                            pFVar34 = (FDynamicMeshAttributeSet *)0x0;
                            if (pFVar48 != (FDynamicMeshAttributeSet *)0x0) {
                              pFVar34 = pFVar48;
                            }
                            pTVar28 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                              *)&pFVar34->GenericAttributes,VisibleAttribName);
                            if ((pTVar28 ==
                                 (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                                  *)0x0) &&
                               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("Pair != nullptr",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                                  ,0x288,L""), bVar15)) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            *(undefined1 *)
                             ((ulonglong)(uVar39 & 0x1ff) +
                             *(longlong *)
                              (*(longlong *)(*(longlong *)&pTVar28->field_0x8 + 0x20) + uVar36 * 8))
                                 = 1;
                            pFVar48 = (param_1->AttributeSet).Ptr;
                            pFVar34 = (FDynamicMeshAttributeSet *)0x0;
                            if (pFVar48 != (FDynamicMeshAttributeSet *)0x0) {
                              pFVar34 = pFVar48;
                            }
                            pTVar28 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                      ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                              *)&pFVar34->GenericAttributes,InternalAttribName);
                            if ((pTVar28 ==
                                 (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                                  *)0x0) &&
                               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("Pair != nullptr",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                                  ,0x288,L""), bVar15)) {
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            *(undefined1 *)
                             ((ulonglong)(uVar39 & 0x1ff) +
                             *(longlong *)
                              (*(longlong *)(*(longlong *)&pTVar28->field_0x8 + 0x20) + uVar36 * 8))
                                 = 1;
                          }
                        }
                        uVar36 = local_b30 & 0xffffffff;
                        FVar45.Data = FVar45.Data + 0xc;
                      }
                      goto LAB_14c9ced3f;
                    }
                    break;
                  }
LAB_14c9cd7cb:
                  uVar36 = (ulonglong)(uint)local_b68;
                  fVar51 = (float)((int)local_b68 + 1);
                  lVar53 = (longlong)local_b00 * 4;
                  local_b00 = local_b00 + 1;
                  local_b68 = fVar51;
                } while ((longlong)local_b00 < local_ab0);
              }
              if (local_ad0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_ad0.AllocatorInstance.Data);
              }
              lVar53 = local_af0;
              uVar39 = local_b50;
              uVar50 = local_b38;
              if (local_a90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a90.AllocatorInstance.Data);
                lVar53 = local_af0;
                uVar39 = local_b50;
                uVar50 = local_b38;
              }
            }
          }
          uVar38 = 0;
          if ((int)uVar50 < (int)(uint)local_b70) {
            uVar38 = ~uVar50 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_b50 = uVar39 + 1;
          local_af0 = lVar53 + 1;
          local_b38 = uVar50 + 1 + *(int *)(local_b78.Data + (longlong)(int)uVar50 * 4);
        } while ((int)local_b38 < (int)(uint)local_b70);
      }
      if (local_b28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b28.Data);
      }
      if (local_ae8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ae8.Data);
      }
      if (local_aa0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_aa0.AllocatorInstance.Data);
      }
      if (local_b48.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b48.Parents.AllocatorInstance.Data);
      }
    }
    if (local_b60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b60.Data);
    }
    if (local_b78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b78.Data);
    }
  }
  local_480 = 0;
  if (local_488 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_488);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<int,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_4c8);
  local_390 = 0;
  if (local_398 != (void *)0x0) {
    FMemory::Free(local_398);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3d8);
  local_3e0 = 0;
  if (local_3e8 != (void *)0x0) {
    FMemory::Free(local_3e8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_428);
  local_280 = 0;
  if ((void *)local_2c8._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2c8._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2c8);
  return;
}

// GetInternal @ 14c9d24f0

bool __cdecl UE::PlanarCut::AugmentedDynamicMesh::GetInternal(FDynamicMesh3 *param_1,int param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  FDynamicMeshAttributeSet *pFVar6;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar6 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar1;
  }
  pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar6->GenericAttributes,InternalAttribName);
  if (pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((ulonglong)(param_2 & 0x1ff) +
                *(longlong *)
                 (*(longlong *)(*(longlong *)&pTVar5->field_0x8 + 0x20) +
                 (ulonglong)((uint)param_2 >> 9) * 8));
}

// GetTangent @ 14c9d28c0

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::GetTangent
          (FDynamicMesh3 *param_1,int param_2,TVector<float> *param_3,TVector<float> *param_4)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar7;
  FDynamicMeshAttributeSet *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar8 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar8 = pFVar1;
  }
  pTVar7 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar8->GenericAttributes,TangentUAttribName);
  if (pTVar7 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (param_1->AttributeSet).Ptr;
  lVar2 = *(longlong *)&pTVar7->field_0x8;
  pFVar8 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar8 = pFVar1;
  }
  pTVar7 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar8->GenericAttributes,TangentVAttribName);
  if (pTVar7 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar5 = param_2 * 3;
  lVar3 = *(longlong *)&pTVar7->field_0x8;
  uVar11 = (ulonglong)(uVar5 + 1 >> 9);
  uVar12 = (ulonglong)(uVar5 + 1 & 0x1ff);
  uVar9 = (ulonglong)(uVar5 + 2 >> 9);
  uVar10 = (ulonglong)(uVar5 + 2 & 0x1ff);
  (param_3->field0_0x0)._s_0.X =
       *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
                 (ulonglong)(uVar5 & 0x1ff) * 4);
  (param_3->field0_0x0)._s_0.Y =
       *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar11 * 8) + uVar12 * 4);
  (param_3->field0_0x0)._s_0.Z =
       *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar9 * 8) + uVar10 * 4);
  (param_4->field0_0x0)._s_0.X =
       *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
                 (ulonglong)(uVar5 & 0x1ff) * 4);
  (param_4->field0_0x0)._s_0.Y =
       *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar11 * 8) + uVar12 * 4);
  (param_4->field0_0x0)._s_0.Z =
       *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar9 * 8) + uVar10 * 4);
  return;
}

// GetUV @ 14c9d31a0

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::GetUV
          (FDynamicMesh3 *param_1,int param_2,TVector2<float> *param_3,int param_4)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  FDynamicMeshAttributeSet *pFVar6;
  
  if (param_4 < 8) {
    pFVar1 = (param_1->AttributeSet).Ptr;
    pFVar6 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar6 = pFVar1;
    }
    pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                     *)&pFVar6->GenericAttributes,UVChannelNames[param_4]);
    if (pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                   *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)&pTVar5->field_0x8;
    if (lVar2 == 0) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5943927746286584075>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                         ,0x10b,"UVs");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      (param_3->field0_0x0)._s_0.X =
           *(float *)(*(longlong *)
                       (*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8)
                     + (ulonglong)(param_2 * 2 & 0x1ff) * 4);
      (param_3->field0_0x0)._s_0.Y =
           *(float *)(*(longlong *)
                       (*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8)
                     + (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4);
    }
    return;
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5943927746286584068>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                     ,0x104,"UVLayer < MAX_NUM_UV_CHANNELS");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_3->field0_0x0)._s_0 = (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector;
  return;
}

// GetVertexColor @ 14c9d3510

TVector4<float> * __cdecl
UE::PlanarCut::AugmentedDynamicMesh::GetVertexColor
          (TVector4<float> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  TVector4<float> *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  uint uVar8;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar7 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar7 = pFVar1;
  }
  pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar7->GenericAttributes,ColorAttribName);
  if (pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector4<float> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&pTVar5->field_0x8;
  uVar8 = param_2 * 4;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       *(float *)(*(longlong *)
                   (*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       *(float *)(*(longlong *)
                   (*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                 (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       *(float *)(*(longlong *)
                   (*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                 (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       *(float *)(*(longlong *)
                   (*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                 (ulonglong)(uVar8 + 3 & 0x1ff) * 4);
  return __return_storage_ptr__;
}

// GetVisibility @ 14c9d3630

bool __cdecl UE::PlanarCut::AugmentedDynamicMesh::GetVisibility(FDynamicMesh3 *param_1,int param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  FDynamicMeshAttributeSet *pFVar6;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar6 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar1;
  }
  pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar6->GenericAttributes,VisibleAttribName);
  if (pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((ulonglong)(param_2 & 0x1ff) +
                *(longlong *)
                 (*(longlong *)(*(longlong *)&pTVar5->field_0x8 + 0x20) +
                 (ulonglong)((uint)param_2 >> 9) * 8));
}

// InitializeOverlayToPerVertexColors @ 14c9d4870

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::InitializeOverlayToPerVertexColors(FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TVector4<float> *pTVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint local_58 [4];
  TVector<float>_u_0 local_48;
  undefined8 local_38;
  undefined4 local_30;
  TVector4<float> local_28;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 == (FDynamicMeshAttributeSet *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5943927746286584277>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                       ,0x1d5,"Mesh.HasAttributes()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar1);
    pFVar1 = (param_1->AttributeSet).Ptr;
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar9 = pFVar1;
    }
    UE::Geometry::TDynamicMeshOverlay<float,4>::CreatePerVertex
              ((TDynamicMeshOverlay<float,4> *)(pFVar9->ColorLayer).Ptr,0.0);
    local_48._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_48._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    UE::Geometry::FDynamicMesh3::EnableVertexColors(param_1,(TVector<float> *)&local_48._s_0);
    pFVar1 = (param_1->AttributeSet).Ptr;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pTVar2 = (pFVar1->ColorLayer).Ptr;
      uVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar11 = 0;
      if ((uVar13 != 0) &&
         (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
         0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
        uVar10 = 1;
        uVar11 = 1;
        if (1 < (int)uVar13) {
          do {
            lVar12 = *(longlong *)(pFVar3 + (ulonglong)(uVar10 >> 9) * 8);
            if ((*(short *)(lVar12 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
               (uVar11 = uVar10, *(short *)(lVar12 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
            uVar10 = uVar10 + 1;
            uVar11 = uVar10;
          } while ((int)uVar10 < (int)uVar13);
        }
      }
joined_r0x00014c9d499a:
      if (uVar11 != uVar13) {
        while( true ) {
          lVar12 = *(longlong *)
                    ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar11 >> 9) * 8);
          uVar10 = uVar11 * 3;
          lVar4 = *(longlong *)&pTVar2->field_0x78;
          local_30 = *(undefined4 *)(lVar12 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
          local_38 = *(undefined8 *)(lVar12 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
          local_58[0] = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                                 (ulonglong)(uVar10 & 0x1ff) * 4);
          local_58[1] = *(undefined4 *)
                         (*(longlong *)(lVar4 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                         (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
          lVar12 = 0;
          local_58[2] = *(undefined4 *)
                         (*(longlong *)(lVar4 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                         (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
          do {
            pTVar7 = GetVertexColor(&local_28,param_1,*(int *)((longlong)&local_38 + lVar12));
            uVar10 = *(uint *)((longlong)local_58 + lVar12);
            lVar12 = lVar12 + 4;
            uVar8 = uVar10 * 4;
            *(float *)(*(longlong *)
                        (*(longlong *)&pTVar2->field_0x48 +
                        (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4) = (pTVar7->field0_0x0)._s_0.X;
            *(float *)(*(longlong *)
                        (*(longlong *)&pTVar2->field_0x48 +
                        (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                      (ulonglong)(uVar8 + 1 & 0x1ff) * 4) = (pTVar7->field0_0x0)._s_0.Y;
            *(float *)(*(longlong *)
                        (*(longlong *)&pTVar2->field_0x48 +
                        (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                      (ulonglong)(uVar8 + 2 & 0x1ff) * 4) = (pTVar7->field0_0x0)._s_0.Z;
            *(float *)(*(longlong *)
                        (*(longlong *)&pTVar2->field_0x48 +
                        (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                      (ulonglong)(uVar8 + 3 & 0x1ff) * 4) = (pTVar7->field0_0x0)._s_0.W;
          } while (lVar12 < 0xc);
          uVar11 = uVar11 + 1;
          if ((int)uVar13 <= (int)uVar11) break;
          pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          while( true ) {
            if ((*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar11 >> 9) * 8) +
                           (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar11 >> 9) * 8) +
                          (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) break;
            uVar11 = uVar11 + 1;
            if ((int)uVar13 <= (int)uVar11) goto joined_r0x00014c9d499a;
          }
        }
        goto joined_r0x00014c9d499a;
      }
    }
  }
  return;
}

// InitializeOverlayToPerVertexTangents @ 14c9d4b70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::InitializeOverlayToPerVertexTangents(FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FDynamicMeshAttributeSet *pFVar6;
  uint uVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  FDynamicMeshAttributeSet *this;
  longlong lVar12;
  longlong lVar13;
  FDynamicMeshAttributeSet *pFVar14;
  FIndex3i_u_0 local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TVector<float> local_48;
  TVector<float> local_3c;
  
  pFVar9 = (FDynamicMeshAttributeSet *)0x0;
  pFVar14 = (param_1->AttributeSet).Ptr;
  pFVar6 = pFVar9;
  if (pFVar14 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar14;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(pFVar6);
  pFVar14 = (param_1->AttributeSet).Ptr;
  pFVar6 = pFVar9;
  if (pFVar14 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar14;
  }
  this = pFVar9;
  if (1 < (pFVar6->NormalLayers).Array.ArrayNum) {
    this = *(FDynamicMeshAttributeSet **)((pFVar6->NormalLayers).Array.AllocatorInstance.Data + 8);
  }
  pFVar6 = pFVar9;
  if (pFVar14 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar14;
  }
  pFVar14 = pFVar9;
  if (2 < (pFVar6->NormalLayers).Array.ArrayNum) {
    pFVar14 = *(FDynamicMeshAttributeSet **)
               ((pFVar6->NormalLayers).Array.AllocatorInstance.Data + 0x10);
  }
  UE::Geometry::TDynamicMeshOverlay<float,3>::ClearElements((TDynamicMeshOverlay<float,3> *)this);
  UE::Geometry::TDynamicMeshOverlay<float,3>::ClearElements((TDynamicMeshOverlay<float,3> *)pFVar14)
  ;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_58,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar11 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if (((uVar11 != 0) &&
      (pFVar1 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      0xfffd < (ushort)(**(short **)pFVar1 - 1U))) &&
     (pFVar9 = (FDynamicMeshAttributeSet *)&DAT_00000001, 1 < (int)uVar11)) {
    do {
      lVar13 = (ulonglong)((uint)pFVar9 & 0x1ff) * 2;
      lVar12 = *(longlong *)(pFVar1 + ((ulonglong)pFVar9 >> 9) * 8);
      if ((*(short *)(lVar13 + lVar12) != 0) && (*(short *)(lVar13 + lVar12) != -1)) break;
      uVar7 = (uint)pFVar9 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar11);
  }
  uVar7 = (uint)pFVar9;
joined_r0x00014c9d4c98:
  if (uVar7 != uVar11) {
    while( true ) {
      uVar8 = (uint)pFVar9;
      GetTangent(param_1,uVar8,&local_48,&local_3c);
      iVar4 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)this,(float *)&local_48);
      iVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                        ((TDynamicMeshOverlay<float,3> *)pFVar14,(float *)&local_3c);
      if ((iVar4 != iVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TID == TID2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                             ,0x216,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = 0;
      if ((int)uVar8 < local_58.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar8 + 1;
      pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
      *(int *)(local_58.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = iVar4;
      if ((int)uVar11 <= (int)uVar7) break;
      pFVar1 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar12 = ((ulonglong)pFVar9 >> 9) * 8;
        lVar13 = (ulonglong)((uint)pFVar9 & 0x1ff) * 2;
        if ((*(short *)(lVar13 + *(longlong *)(pFVar1 + lVar12)) != 0) &&
           (*(short *)(lVar13 + *(longlong *)(pFVar1 + lVar12)) != -1)) break;
        uVar7 = (uint)pFVar9 + 1;
        pFVar9 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
        if ((int)uVar11 <= (int)uVar7) goto joined_r0x00014c9d4c98;
      }
    }
    goto joined_r0x00014c9d4c98;
  }
  uVar10 = 0;
  uVar11 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar11 != 0) &&
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar10 = 1;
    uVar7 = 1;
    if ((int)uVar11 < 2) goto joined_r0x00014c9d4e13;
    do {
      lVar13 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
      lVar12 = *(longlong *)(pFVar1 + (uVar10 >> 9) * 8);
      if ((*(short *)(lVar13 + lVar12) != 0) && (*(short *)(lVar13 + lVar12) != -1)) break;
      uVar7 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar11);
  }
  uVar7 = (uint)uVar10;
joined_r0x00014c9d4e13:
  do {
    if (uVar7 == uVar11) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      uVar7 = (uint)uVar10;
      lVar12 = *(longlong *)((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8)
      ;
      local_68._0_8_ = *(undefined8 *)(lVar12 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
      local_68._s_0.C = *(uint *)(lVar12 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
      lVar12 = (longlong)local_68._s_0.A;
      uVar8 = 0;
      if (local_68._s_0.A < local_58.ArrayNum) {
        uVar8 = (uint)~local_68._s_0.A >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar13 = (longlong)local_68._s_0.B;
      local_68._s_0.A = *(undefined4 *)(local_58.AllocatorInstance.Data + lVar12 * 4);
      uVar8 = 0;
      if (local_68._s_0.B < local_58.ArrayNum) {
        uVar8 = (uint)~local_68._s_0.B >> 0x1f;
      }
      iVar4 = local_58.ArrayNum;
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = local_58.ArrayNum;
      }
      lVar12 = (longlong)local_68._s_0.C;
      local_68._s_0.B = *(undefined4 *)(local_58.AllocatorInstance.Data + lVar13 * 4);
      uVar8 = 0;
      if (local_68._s_0.C < iVar4) {
        uVar8 = (uint)~local_68._s_0.C >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_68._s_0.C = *(undefined4 *)(local_58.AllocatorInstance.Data + lVar12 * 4);
      UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)this,uVar7,(FIndex3i *)&local_68._s_0,true);
      UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                ((TDynamicMeshOverlay<float,3> *)pFVar14,uVar7,(FIndex3i *)&local_68._s_0,true);
      uVar7 = uVar7 + 1;
      uVar10 = (ulonglong)uVar7;
      if ((int)uVar11 <= (int)uVar7) break;
      pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar12 = (uVar10 >> 9) * 8;
        lVar13 = (ulonglong)((uint)uVar10 & 0x1ff) * 2;
        if ((*(short *)(lVar13 + *(longlong *)(pFVar1 + lVar12)) != 0) &&
           (*(short *)(lVar13 + *(longlong *)(pFVar1 + lVar12)) != -1)) break;
        uVar7 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
        if ((int)uVar11 <= (int)uVar7) goto joined_r0x00014c9d4e13;
      }
    }
  } while( true );
}

// InitializeOverlayToPerVertexUVs @ 14c9d5020

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::InitializeOverlayToPerVertexUVs
          (FDynamicMesh3 *param_1,int param_2,int param_3)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FDynamicMeshAttributeSet *pFVar13;
  int iVar14;
  longlong local_res8;
  TVector2<float> local_res20;
  FIndex3i_u_0 local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xb0))();
  iVar14 = 0;
  if (0 < param_2) {
    local_res8 = 0;
    do {
      pFVar10 = (FDynamicMeshAttributeSet *)0x0;
      pFVar13 = (param_1->AttributeSet).Ptr;
      pFVar9 = pFVar10;
      if (pFVar13 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar9 = pFVar13;
      }
      pFVar13 = pFVar10;
      if (iVar14 < (pFVar9->UVLayers).Array.ArrayNum) {
        if ((iVar14 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = *(FDynamicMeshAttributeSet **)
                   ((pFVar9->UVLayers).Array.AllocatorInstance.Data + local_res8);
      }
      UE::Geometry::TDynamicMeshOverlay<float,2>::ClearElements
                ((TDynamicMeshOverlay<float,2> *)pFVar13);
      uVar6 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      if ((int)uVar6 < 1) {
        pFVar9 = pFVar10;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
      }
      else {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar6,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4));
        pFVar9 = (FDynamicMeshAttributeSet *)(local_50 & 0xffffffff);
      }
      uVar6 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
      if ((uVar6 == 0) ||
         (pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
         pFVar10 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar2 - 1U) < 0xfffe)) {
LAB_14c9d518a:
        uVar7 = (uint)pFVar10;
      }
      else {
        pFVar10 = (FDynamicMeshAttributeSet *)&DAT_00000001;
        uVar7 = 1;
        if (1 < (int)uVar6) {
          do {
            sVar1 = *(short *)(*(longlong *)(pFVar2 + ((ulonglong)pFVar10 >> 9) * 8) +
                              (ulonglong)((uint)pFVar10 & 0x1ff) * 2);
            if ((sVar1 != 0) && (sVar1 != -1)) break;
            uVar7 = (uint)pFVar10 + 1;
            pFVar10 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
          } while ((int)uVar7 < (int)uVar6);
          goto LAB_14c9d518a;
        }
      }
      if (uVar7 != uVar6) {
LAB_14c9d51a0:
        do {
          uVar8 = (uint)pFVar10;
          GetUV(param_1,uVar8,&local_res20,param_3 + iVar14);
          iVar5 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                            ((TDynamicMeshOverlay<float,2> *)pFVar13,(float *)&local_res20);
          uVar7 = 0;
          if ((int)uVar8 < (int)local_50) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar7 = uVar8 + 1;
          pFVar10 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
          *(int *)(local_58.Data + (longlong)(int)uVar8 * 4) = iVar5;
          if ((int)uVar7 < (int)uVar6) {
            pFVar2 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
            do {
              lVar11 = ((ulonglong)pFVar10 >> 9) * 8;
              lVar12 = (ulonglong)((uint)pFVar10 & 0x1ff) * 2;
              if ((*(short *)(lVar12 + *(longlong *)(pFVar2 + lVar11)) != 0) &&
                 (*(short *)(lVar12 + *(longlong *)(pFVar2 + lVar11)) != -1)) goto LAB_14c9d51a0;
              uVar7 = (uint)pFVar10 + 1;
              pFVar10 = (FDynamicMeshAttributeSet *)(ulonglong)uVar7;
            } while ((int)uVar7 < (int)uVar6);
          }
        } while (uVar7 != uVar6);
        pFVar9 = (FDynamicMeshAttributeSet *)(local_50 & 0xffffffff);
      }
      uVar7 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar6 = 0;
      if ((uVar7 != 0) &&
         (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar6 = 0,
         0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
        uVar8 = 1;
        uVar6 = 1;
        if (1 < (int)uVar7) {
          do {
            sVar1 = *(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar8 >> 9) * 8) +
                              (ulonglong)(uVar8 & 0x1ff) * 2);
            if ((sVar1 != 0) && (uVar6 = uVar8, sVar1 != -1)) break;
            uVar8 = uVar8 + 1;
            uVar6 = uVar8;
          } while ((int)uVar8 < (int)uVar7);
        }
      }
      if (uVar6 != uVar7) {
        while( true ) {
          lVar11 = *(longlong *)
                    ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar6 >> 9) * 8);
          local_68._0_8_ = *(undefined8 *)(lVar11 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
          local_68._s_0.C = *(uint *)(lVar11 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
          lVar11 = (longlong)local_68._s_0.A;
          uVar8 = 0;
          if (local_68._s_0.A < (int)pFVar9) {
            uVar8 = (uint)~local_68._s_0.A >> 0x1f;
          }
          iVar5 = (int)pFVar9;
          if (uVar8 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = (int)local_50;
          }
          lVar12 = (longlong)local_68._s_0.B;
          local_68._s_0.A = *(undefined4 *)(local_58.Data + lVar11 * 4);
          uVar8 = 0;
          if (local_68._s_0.B < iVar5) {
            uVar8 = (uint)~local_68._s_0.B >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = (int)local_50;
          }
          lVar11 = (longlong)local_68._s_0.C;
          local_68._s_0.B = *(undefined4 *)(local_58.Data + lVar12 * 4);
          uVar8 = 0;
          if (local_68._s_0.C < iVar5) {
            uVar8 = (uint)~local_68._s_0.C >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_68._s_0.C = *(undefined4 *)(local_58.Data + lVar11 * 4);
          UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                    ((TDynamicMeshOverlay<float,2> *)pFVar13,uVar6,(FIndex3i *)&local_68._s_0,true);
          uVar6 = uVar6 + 1;
          if ((int)uVar6 < (int)uVar7) {
            do {
              lVar12 = (ulonglong)(uVar6 & 0x1ff) * 2;
              lVar11 = *(longlong *)
                        ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar6 >> 9) * 8);
              if ((*(short *)(lVar12 + lVar11) != 0) && (*(short *)(lVar12 + lVar11) != -1))
              goto LAB_14c9d5480;
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < (int)uVar7);
          }
          if (uVar6 == uVar7) break;
LAB_14c9d5480:
          pFVar9 = (FDynamicMeshAttributeSet *)(local_50 & 0xffffffff);
        }
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      local_res8 = local_res8 + 8;
      iVar14 = iVar14 + 1;
    } while (iVar14 < param_2);
  }
  return;
}

// IsAugmented @ 14c9d55f0

bool __cdecl UE::PlanarCut::AugmentedDynamicMesh::IsAugmented(FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  bool bVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    bVar2 = UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute(pFVar1,ColorAttribName);
    if (bVar2) {
      pFVar1 = (param_1->AttributeSet).Ptr;
      pFVar4 = (FDynamicMeshAttributeSet *)0x0;
      pFVar3 = pFVar4;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar3 = pFVar1;
      }
      bVar2 = UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute
                        (pFVar3,TangentUAttribName);
      if (bVar2) {
        pFVar1 = (param_1->AttributeSet).Ptr;
        pFVar3 = pFVar4;
        if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar3 = pFVar1;
        }
        bVar2 = UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute
                          (pFVar3,TangentVAttribName);
        if (bVar2) {
          pFVar1 = (param_1->AttributeSet).Ptr;
          pFVar3 = pFVar4;
          if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar3 = pFVar1;
          }
          bVar2 = UE::Geometry::FDynamicMeshAttributeSet::HasAttachedAttribute
                            (pFVar3,VisibleAttribName);
          if (bVar2) {
            pFVar1 = (param_1->AttributeSet).Ptr;
            if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
              pFVar4 = pFVar1;
            }
            if (((pFVar4->MaterialIDAttrib).Ptr != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)
               && ((param_1->VertexNormals).bIsSet != false)) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// MergeUVIslands @ 14c9dc0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::PlanarCut::MergeUVIslands
          (int param_1,FGeometryCollection *param_2,FMergeIslandSettings *param_3,
          TArrayView<bool,int> *param_4,FProgressCancel *param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ForElementType<unsigned_int> FVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStackY_1b8 [32];
  uint local_170;
  uint uStack_16c;
  uint uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  longlong local_150;
  TArray<int,TSizedDefaultAllocator<32>_> local_128;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  FSparseArrayAllocationInfo local_f0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  code *local_c8;
  FMergeIslandSettings **local_c0;
  FMergeIslandSettings *local_b8;
  TArrayView<bool,int> *local_b0;
  FGeometryCollection *local_a8;
  int local_a0;
  TArrayView<int_const_,int> local_98;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar20 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (0 < param_4->ArrayNum) {
    local_150 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar20 < *(int *)&(param_2->Indices).field_0x18) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar18 = *(uint *)(local_150 + *(longlong *)&(param_2->Indices).field_0x10);
      uVar13 = 0;
      if ((int)uVar18 < *(int *)&(param_2->BoneMap).field_0x18) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar1 = *(longlong *)&(param_2->BoneMap).field_0x10;
      if (local_54 == 0) {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                           (int *)(local_88 + 0xc));
        uVar13 = local_60;
        if (local_60 == 0) {
          iVar14 = 0;
LAB_14c9dc28e:
          if ((int)local_5c < (int)(local_60 + 1)) {
            uVar17 = local_5c + 0x1f >> 5;
            uVar15 = local_60 + 0x20 >> 5;
            if (uVar15 < 5) {
              iVar6 = 4;
            }
            else {
              uVar11 = (ulonglong)uVar15;
              if (uVar17 < 5) {
                uVar17 = 0;
              }
              if (uVar17 == 0) {
                uVar12 = 4;
                if (4 < uVar11) {
                  uVar12 = uVar11;
                }
              }
              else {
                uVar12 = ((ulonglong)uVar15 * 3 >> 3) + 0x10 + uVar11;
              }
              uVar7 = FMemory::QuantizeSize(uVar12 * 4,0);
              iVar6 = (int)(uVar7 >> 2);
              if (iVar6 < (int)uVar15) {
                iVar6 = 0x7fffffff;
              }
            }
            local_5c = iVar6 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),local_60);
          }
          local_60 = local_60 + 1;
          uVar15 = (int)local_60 >> 0x1f & 0x1f;
          uVar17 = local_60 + uVar15;
          iVar6 = (uVar17 & 0x1f) - uVar15;
          if (iVar6 != 0) {
            FVar9 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar9 = local_68;
            }
            puVar16 = (uint *)((longlong)FVar9 + (longlong)((int)uVar17 >> 5) * 4);
            *puVar16 = *puVar16 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
          }
        }
        else {
          iVar14 = (int)(local_60 + ((int)local_60 >> 0x1f & 0x1fU)) >> 5;
          if (iVar14 != (int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5)
          goto LAB_14c9dc28e;
          local_60 = local_60 + 1;
        }
        FVar9 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_68;
        }
        puVar16 = (uint *)((longlong)FVar9 + (longlong)iVar14 * 4);
        *puVar16 = *puVar16 & ~(1 << ((byte)uVar13 & 0x1f));
        iVar14 = local_58;
      }
      else {
        iVar14 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0xc + 4);
        local_54 = local_54 + -1;
        iVar5 = local_58;
        if (local_54 != 0) {
          *(undefined4 *)(local_88._0_8_ + (longlong)iVar14 * 0xc) = 0xffffffff;
        }
      }
      local_58 = iVar14;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,&local_f0,iVar5);
      if (local_f0.Pointer == (uint *)0x0) {
        puVar16 = (uint *)0x0;
      }
      else {
        *(uint *)local_f0.Pointer = *(uint *)(lVar1 + (longlong)(int)uVar18 * 4);
        *(uint *)((longlong)local_f0.Pointer + 4) = 0xffffffff;
        puVar16 = local_f0.Pointer;
      }
      uVar11 = 0;
      uVar18 = *puVar16;
      if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        for (iVar5 = *(int *)(FVar10.Data + (ulonglong)(local_40 - 1 & uVar18) * 4); iVar5 != -1;
            iVar5 = *(int *)(local_88._0_8_ + (longlong)iVar5 * 0xc + 4)) {
          if (*(uint *)(local_88._0_8_ + (longlong)iVar5 * 0xc) == uVar18) {
            if (iVar5 != -1) {
              *(uint *)(local_88._0_8_ + (longlong)iVar5 * 0xc) = uVar18;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_88,local_f0.Index,1);
              goto LAB_14c9dc6bd;
            }
            break;
          }
        }
      }
      uVar17 = local_88._8_4_ - local_54;
      uVar13 = 1;
      if (3 < uVar17) {
        uVar12 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        uVar13 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((int)uVar17 < 1) || ((int)uVar13 <= (int)local_40)) {
        uVar18 = local_40 - 1 & uVar18;
        puVar16[2] = uVar18;
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar18;
        puVar16[1] = *(uint *)(FVar10.Data + uVar11 * 4);
        *(int *)(FVar10.Data + uVar11 * 4) = local_f0.Index;
      }
      else {
        local_40 = uVar13;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar13 != 0) {
          uVar18 = uVar13;
          if (uVar13 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar18 = 0;
              goto LAB_14c9dc4e5;
            }
          }
          else {
LAB_14c9dc4e5:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar18,4);
          }
          if (0 < (int)uVar13) {
            uVar19 = (ulonglong)uVar13;
            uVar12 = uVar11;
            do {
              FVar10.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar10.Data = local_48.Data;
              }
              uVar8 = uVar12 & (longlong)(int)uVar13 - 1U;
              uVar12 = uVar12 + 1;
              *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        if (local_40 != 0) {
          local_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          local_170 = 0;
          uStack_16c = 1;
          uStack_15c = 0;
          uStack_158 = 0;
          if (local_60 != 0) {
            FVar9 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar9 = local_68;
            }
            uVar18 = *(uint *)FVar9;
            uVar12 = uVar11;
            while (uVar18 == 0) {
              uStack_158 = (int)uVar12 + 0x20;
              uVar12 = (ulonglong)uStack_158;
              iVar5 = (int)uVar11;
              local_170 = iVar5 + 1;
              uVar11 = (ulonglong)local_170;
              if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_170) goto LAB_14c9dc5f2;
              uVar18 = ((uint *)((longlong)FVar9 + 4))[iVar5];
            }
            uStack_16c = -uVar18 & uVar18;
            uVar11 = (ulonglong)uStack_16c * 2 + 1;
            lVar1 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            uStack_15c = (int)lVar1 + -1 + uStack_158;
            uVar11 = (ulonglong)uStack_15c;
            if ((int)local_60 < (int)uStack_15c) {
LAB_14c9dc5f2:
              uVar11 = (ulonglong)local_60;
              uStack_15c = local_60;
            }
          }
          local_118 = (longlong *)local_88;
          local_110._padding_ = CONCAT44(uStack_16c,local_170);
          local_110.CurrentBitIndex = uStack_15c;
          local_110.UnvisitedBitMask = 0xffffffff;
          local_110._28_4_ = uStack_154;
          local_110.BaseBitIndex = uStack_158;
          if ((int)uVar11 < (int)local_60) {
            do {
              iVar5 = (int)uVar11;
              uVar18 = local_40 - 1 & *(uint *)(*local_118 + (longlong)iVar5 * 0xc);
              lVar1 = *local_118 + (longlong)iVar5 * 0xc;
              *(uint *)(lVar1 + 8) = uVar18;
              FVar10.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar10.Data = local_48.Data;
              }
              uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar18;
              *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(FVar10.Data + uVar11 * 4);
              *(int *)(FVar10.Data + uVar11 * 4) = iVar5;
              local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
              uVar11 = (ulonglong)(uint)local_110.CurrentBitIndex;
            } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
          }
        }
      }
LAB_14c9dc6bd:
      uVar20 = uVar20 + 1;
      local_150 = local_150 + 0xc;
    } while ((int)uVar20 < param_4->ArrayNum);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,&local_128);
  local_c8 = Core::Private::Function::
             TFunctionRefCaller<`UE::PlanarCut::MergeUVIslands'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_&,int>
             ::Call;
  local_d8 = local_128.AllocatorInstance.Data;
  local_c0 = &local_b8;
  local_b8 = param_3;
  local_b0 = param_4;
  local_a8 = param_2;
  local_a0 = param_1;
  if ((local_128.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iStack_d0 = local_128.ArrayNum;
  local_98.DataPtr = (int *)local_d8;
  bVar3 = PrivateUVHelpers::ApplyDynamicMeshBasedUVProcessing
                    (param_1,param_2,&local_98,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FDynamicMesh3_&,int)> *)&local_c8,true
                     ,true,true);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  bVar21 = local_88._12_4_ != 0;
  local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
  if (bVar21) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = -1;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return bVar3;
}

// NumEnabledUVChannels @ 14c9dcca0

int __cdecl UE::PlanarCut::AugmentedDynamicMesh::NumEnabledUVChannels(FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FName FVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  FDynamicMeshAttributeSet *pFVar7;
  int iVar8;
  FName *pFVar9;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    return 0;
  }
  iVar8 = 0;
  pFVar9 = UVChannelNames;
  while( true ) {
    pFVar1 = (param_1->AttributeSet).Ptr;
    FVar2 = *pFVar9;
    pFVar7 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar7 = pFVar1;
    }
    uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if (*(int *)&(pFVar7->GenericAttributes).field_0x8 ==
        *(int *)&(pFVar7->GenericAttributes).field_0x34) {
      return iVar8;
    }
    puVar3 = *(undefined1 **)&(pFVar7->GenericAttributes).field_0x40;
    puVar6 = &(pFVar7->GenericAttributes).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar6 = puVar3;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(pFVar7->GenericAttributes).field_0x48 - 1U &
                              uVar4 + FVar2.Number) * 4);
    if (iVar5 == -1) break;
    while (*(FName *)(*(longlong *)&pFVar7->GenericAttributes + (longlong)iVar5 * 0x18) != FVar2) {
      iVar5 = *(int *)(*(longlong *)&pFVar7->GenericAttributes + 0x10 + (longlong)iVar5 * 0x18);
      if (iVar5 == -1) {
        return iVar8;
      }
    }
    iVar8 = iVar8 + 1;
    pFVar9 = pFVar9 + 1;
    if (0x155346e7f < (longlong)pFVar9) {
      return 8;
    }
  }
  return iVar8;
}

// SetActiveTriangles @ 14c9df0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
UE::PlanarCut::SetActiveTriangles
          (FGeometryCollection *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3,ETargetFaces param_4,TArrayView<int,int> *param_5)

{
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  bool local_d8 [4];
  int local_d4;
  longlong local_d0;
  int local_c8;
  ETargetFaces local_c4;
  undefined1 *local_c0;
  int local_b8 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> *local_b0;
  TManagedArray<UE::Math::TIntVector3<int>_> *local_a8;
  FGeometryCollection *local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  piVar16 = param_5->DataPtr;
  uVar15 = 0;
  iVar10 = 0;
  piVar2 = piVar16 + param_5->ArrayNum;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_a0 = param_1;
  local_b0 = param_2;
  local_c4 = param_4;
  for (; piVar16 != piVar2; piVar16 = piVar16 + 1) {
    local_c8 = *piVar16;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_98,local_b8,(bool *)&local_c8);
  }
  pTVar1 = &param_1->Indices;
  local_a8 = pTVar1;
  iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_d8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(param_2,local_d8,iVar8);
  local_d4 = 0;
  iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  if (0 < iVar8) {
    local_c0 = &(param_1->Visible).field_0x10;
    local_d0 = 0;
    uVar17 = 1;
    do {
      lVar3 = local_d0;
      iVar10 = *(int *)&(param_1->MaterialID).field_0x18;
      uVar9 = 0;
      if ((int)uVar15 < iVar10) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_e8 = (longlong)(int)uVar15;
        local_e0 = (longlong)iVar10;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          iVar10 = (*pcVar4)();
          return iVar10;
        }
      }
      uVar9 = *(uint *)(*(longlong *)&(param_1->MaterialID).field_0x10 + lVar3 * 4);
      if ((((int)uVar15 < 0) || (*(int *)&(param_1->Internal).field_0x28 <= (int)uVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      puVar13 = *(undefined1 **)&(param_1->Internal).field_0x20;
      puVar12 = &(param_1->Internal).field_0x10;
      if (puVar13 != (undefined1 *)0x0) {
        puVar12 = puVar13;
      }
      uVar11 = uVar15;
      if ((int)uVar15 < 0) {
        uVar11 = uVar15 + 0x1f;
      }
      lVar3 = (longlong)((int)uVar11 >> 5) * 4;
      bVar6 = (*(uint *)(puVar12 + lVar3) & uVar17) != 0;
      if ((((int)uVar15 < 0) || (*(int *)(local_c0 + 0x18) <= (int)uVar15)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      pTVar5 = local_b0;
      puVar13 = local_c0;
      if (*(undefined1 **)(local_c0 + 0x10) != (undefined1 *)0x0) {
        puVar13 = *(undefined1 **)(local_c0 + 0x10);
      }
      if ((*(uint *)(puVar13 + lVar3) & uVar17) == 0) goto LAB_14c9df3bf;
      if (local_c4 == AllFaces) {
        if (!param_3) goto LAB_14c9df300;
LAB_14c9df35d:
        uVar9 = 0;
        if ((int)uVar15 < local_b0->ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if (uVar9 == 0) {
          local_e8 = (longlong)(int)uVar15;
          local_e0 = (longlong)local_b0->ArrayNum;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
        }
        local_d4 = local_d4 + 1;
        (pTVar5->AllocatorInstance).Data[local_d0] = (FScriptContainerElement)0x1;
      }
      else {
        if (local_c4 != InternalFaces) {
          if ((local_c4 != ExternalFaces) || (bVar6 == param_3)) goto LAB_14c9df300;
          goto LAB_14c9df35d;
        }
        if (bVar6 == param_3) goto LAB_14c9df35d;
LAB_14c9df300:
        if (0 < (int)(local_98.Elements._8_4_ - local_98.Elements._52_4_)) {
          FVar14 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar14 = local_98.Hash.SecondaryData;
          }
          for (iVar10 = *(int *)((longlong)FVar14 + (ulonglong)(local_98.HashSize - 1U & uVar9) * 4)
              ; iVar10 != -1;
              iVar10 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
            if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar10 * 0xc) == uVar9)
            goto LAB_14c9df351;
          }
          iVar10 = -1;
LAB_14c9df351:
          if ((iVar10 != -1) == param_3) goto LAB_14c9df35d;
        }
      }
LAB_14c9df3bf:
      iVar10 = local_d4;
      uVar15 = uVar15 + 1;
      local_d0 = local_d0 + 1;
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      iVar8 = (**(code **)(*(longlong *)local_a8 + 0x60))();
      param_1 = local_a0;
    } while ((int)uVar15 < iVar8);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return iVar10;
}

// SetAllUV @ 14c9df450

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::SetAllUV
          (FDynamicMesh3 *param_1,int param_2,TVector2<float> param_3,int param_4)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  FDynamicMeshAttributeSet *pFVar6;
  longlong lVar7;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  if (8 < param_4) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5943927746286584051>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                       ,0xf3,"NumUVLayers <= MAX_NUM_UV_CHANNELS");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_4 = 8;
  }
  if (0 < param_4) {
    lVar7 = 0;
    uStackX_1c = param_3.field0_0x0._4_4_;
    local_res18 = param_3.field0_0x0._0_4_;
    do {
      pFVar1 = (param_1->AttributeSet).Ptr;
      pFVar6 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar6 = pFVar1;
      }
      pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                       *)&pFVar6->GenericAttributes,UVChannelNames[lVar7]);
      if ((pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                      *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)&pTVar5->field_0x8;
      if (lVar2 == 0) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5943927746286584059>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                           ,0xfb,"UVs");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8)
         + (ulonglong)(param_2 * 2 & 0x1ff) * 4) = local_res18;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8)
         + (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4) = uStackX_1c;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4);
  }
  return;
}

// SetDefaultAttributes @ 14c9dfd30

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::SetDefaultAttributes(FDynamicMesh3 *param_1,bool param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined4 uVar9;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar10;
  FDynamicMeshAttributeSet *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FDynamicMeshAttributeSet *pFVar16;
  FDynamicMeshAttributeSet *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  bool local_res8;
  undefined7 uStackX_9;
  undefined1 local_res10;
  float local_98;
  float fStack_94;
  
  pFVar17 = (FDynamicMeshAttributeSet *)0x0;
  pFVar16 = (param_1->AttributeSet).Ptr;
  pFVar11 = pFVar17;
  if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar16;
  }
  local_res10 = param_2;
  pTVar10 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                    *)&pFVar11->GenericAttributes,ColorAttribName);
  if ((pTVar10 ==
       (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
        *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = (param_1->AttributeSet).Ptr;
  lVar1 = *(longlong *)&pTVar10->field_0x8;
  pFVar11 = pFVar17;
  if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar16;
  }
  pTVar10 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                    *)&pFVar11->GenericAttributes,TangentUAttribName);
  if ((pTVar10 ==
       (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
        *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = (param_1->AttributeSet).Ptr;
  lVar2 = *(longlong *)&pTVar10->field_0x8;
  pFVar11 = pFVar17;
  if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar16;
  }
  pTVar10 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                    *)&pFVar11->GenericAttributes,TangentVAttribName);
  if ((pTVar10 ==
       (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
        *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = __xmm_80000000800000008000000080000000;
  fVar7 = __real_3f800000;
  lVar3 = *(longlong *)&pTVar10->field_0x8;
  uVar22 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  pFVar16 = pFVar17;
  if ((uVar22 == 0) ||
     (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar16 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar4 - 1U) < 0xfffe)) {
LAB_14c9dfeb6:
    uVar14 = (uint)pFVar16;
  }
  else {
    pFVar16 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar14 = 1;
    if (1 < (int)uVar22) {
      do {
        uVar12 = (ulonglong)((uint)pFVar16 & 0x1ff);
        lVar5 = *(longlong *)(pFVar4 + ((ulonglong)pFVar16 >> 9) * 8);
        if ((*(short *)(lVar5 + uVar12 * 2) != 0) && (*(short *)(lVar5 + uVar12 * 2) != -1)) break;
        uVar14 = (uint)pFVar16 + 1;
        pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
      } while ((int)uVar14 < (int)uVar22);
      goto LAB_14c9dfeb6;
    }
  }
joined_r0x00014c9dfeb9:
  if (uVar14 != uVar22) {
    while( true ) {
      uVar15 = (uint)pFVar16;
      uVar24 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
      uVar9 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
      if ((param_1->VertexNormals).bIsSet != false) {
        lVar5 = *(longlong *)
                 ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                 ((ulonglong)pFVar16 >> 9) * 8);
        uVar24 = *(undefined8 *)(lVar5 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
        uVar9 = *(float *)(lVar5 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      }
      local_98 = (float)uVar24;
      fStack_94 = (float)((ulonglong)uVar24 >> 0x20);
      if (0.0 <= (float)uVar9) {
        fVar27 = fVar7 / ((float)uVar9 + fVar7);
        fVar23 = local_98 * local_98 * fVar27;
        fVar26 = fStack_94 * local_98;
        local_98 = (float)((uint)local_98 ^ uVar13);
        fVar26 = (float)((uint)(fVar26 * fVar27) ^ uVar13);
        fVar25 = fVar7 - fStack_94 * fStack_94 * fVar27;
        fVar27 = fVar26;
      }
      else {
        fVar25 = fVar7 / (fVar7 - (float)uVar9);
        fVar27 = fStack_94 * local_98 * fVar25;
        fVar23 = local_98 * local_98 * fVar25;
        fVar26 = (float)((uint)fVar27 ^ uVar13);
        fVar25 = fStack_94 * fStack_94 * fVar25 - fVar7;
      }
      uVar14 = uVar15 * 3;
      uVar20 = (ulonglong)(uVar14 + 1 >> 9);
      uVar21 = (ulonglong)(uVar14 + 1 & 0x1ff);
      uVar19 = (ulonglong)(uVar14 + 2 & 0x1ff);
      uVar12 = (ulonglong)(uVar14 + 2 >> 9);
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4) = fVar7 - fVar23;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar20 * 8) + uVar21 * 4) = fVar26;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar12 * 8) + uVar19 * 4) = local_98;
      *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4) = fVar27;
      *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar20 * 8) + uVar21 * 4) = fVar25;
      *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar12 * 8) + uVar19 * 4) =
           (uint)fStack_94 ^ uVar13;
      uVar18 = uVar15 * 4;
      uVar14 = uVar15 + 1;
      pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar1 + 0x20) + (ulonglong)((uVar15 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar18 & 0x1ff) * 4) = UnsetVertexColor.field0_0x0._s_0.X;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar1 + 0x20) + (ulonglong)((uVar15 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar18 + 1 & 0x1ff) * 4) = UnsetVertexColor.field0_0x0._s_0.Y;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar1 + 0x20) + (ulonglong)((uVar15 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar18 + 2 & 0x1ff) * 4) = UnsetVertexColor.field0_0x0._s_0.Z;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar1 + 0x20) + (ulonglong)((uVar15 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar18 + 3 & 0x1ff) * 4) = UnsetVertexColor.field0_0x0._s_0.W;
      if ((int)uVar22 <= (int)uVar14) break;
      pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        uVar12 = (ulonglong)((uint)pFVar16 & 0x1ff);
        if ((*(short *)(*(longlong *)(pFVar4 + ((ulonglong)pFVar16 >> 9) * 8) + uVar12 * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar4 + ((ulonglong)pFVar16 >> 9) * 8) + uVar12 * 2) != -1))
        break;
        uVar14 = (uint)pFVar16 + 1;
        pFVar16 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
        if ((int)uVar22 <= (int)uVar14) goto joined_r0x00014c9dfeb9;
      }
    }
    goto joined_r0x00014c9dfeb9;
  }
  pFVar16 = (param_1->AttributeSet).Ptr;
  pFVar11 = pFVar17;
  if (pFVar16 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar16;
  }
  pTVar10 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                    *)&pFVar11->GenericAttributes,VisibleAttribName);
  if ((pTVar10 ==
       (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
        *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar1 = *(longlong *)&pTVar10->field_0x8;
  uVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar13 != 0) &&
     (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    pFVar17 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar22 = 1;
    if ((int)uVar13 < 2) goto LAB_14c9e025f;
    do {
      uVar12 = (ulonglong)((uint)pFVar17 & 0x1ff);
      lVar2 = *(longlong *)(pFVar4 + ((ulonglong)pFVar17 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar12 * 2) != 0) && (*(short *)(lVar2 + uVar12 * 2) != -1)) break;
      uVar22 = (uint)pFVar17 + 1;
      pFVar17 = (FDynamicMeshAttributeSet *)(ulonglong)uVar22;
    } while ((int)uVar22 < (int)uVar13);
  }
  uVar22 = (uint)pFVar17;
LAB_14c9e025f:
  if (uVar22 != uVar13) {
    _local_res8 = CONCAT71((int7)((ulonglong)lVar1 >> 8),local_res10);
LAB_14c9e0270:
    do {
      UE::Geometry::TDynamicVector<bool,512>::InsertAt
                ((TDynamicVector<bool,512> *)(lVar1 + 0x18),&local_res8,(uint)pFVar17);
      uVar22 = (uint)pFVar17 + 1;
      pFVar17 = (FDynamicMeshAttributeSet *)(ulonglong)uVar22;
      if ((int)uVar22 < (int)uVar13) {
        pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          uVar12 = (ulonglong)((uint)pFVar17 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar4 + ((ulonglong)pFVar17 >> 9) * 8) + uVar12 * 2) != 0)
             && (*(short *)(*(longlong *)(pFVar4 + ((ulonglong)pFVar17 >> 9) * 8) + uVar12 * 2) !=
                 -1)) goto LAB_14c9e0270;
          uVar22 = (uint)pFVar17 + 1;
          pFVar17 = (FDynamicMeshAttributeSet *)(ulonglong)uVar22;
        } while ((int)uVar22 < (int)uVar13);
      }
    } while (uVar22 != uVar13);
  }
  return;
}

// SetGeometryCollectionAttributes @ 14c9e02f0

void __cdecl UE::PlanarCut::SetGeometryCollectionAttributes(FDynamicMesh3 *param_1,int param_2)

{
  TDynamicVector<float,512> *pTVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FDynamicMeshAttributeSet *this;
  FDynamicMeshAttributeSet *pFVar4;
  TVector<float>_u_0 TStack_28;
  
  TStack_28._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  TStack_28._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::FDynamicMesh3::EnableVertexNormals(param_1,(TVector<float> *)&TStack_28._s_0);
  UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  pFVar4 = (param_1->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  pFVar3 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar3);
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar3 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar4;
  }
  pFVar2 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar2->ParentMesh;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)param_1;
    pFVar2->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar2->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->UVLayers).Array.ArrayNum = 0;
    (pFVar2->UVLayers).Array.ArrayMax = 0;
    UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
    UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *)pFVar2,0.0);
    pFVar4 = pFVar2;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (pFVar3,AugmentedDynamicMesh::ColorAttribName,
             (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar3 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar4;
  }
  pFVar2 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar2->ParentMesh;
    pFVar2->_padding_ = 0;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar2->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->UVLayers).Array.ArrayNum = 0;
    (pFVar2->UVLayers).Array.ArrayMax = 0;
    pFVar2->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    pFVar2->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
    UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)pFVar2,0.0);
    pFVar4 = pFVar2;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (pFVar3,AugmentedDynamicMesh::TangentUAttribName,
             (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar3 = this;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar4;
  }
  pFVar2 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar2->ParentMesh;
    pFVar2->_padding_ = 0;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar2->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->UVLayers).Array.ArrayNum = 0;
    (pFVar2->UVLayers).Array.ArrayMax = 0;
    pFVar2->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    pFVar2->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
    UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)pFVar2,0.0);
    pFVar4 = pFVar2;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (pFVar3,AugmentedDynamicMesh::TangentVAttribName,
             (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
  pFVar3 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar3->ParentMesh;
    pFVar3->_padding_ = 0;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar3->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar3->UVLayers).Array.ArrayNum = 0;
    (pFVar3->UVLayers).Array.ArrayMax = 0;
    pFVar3->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute__N_00_Geometry_UE__6B_;
    UE::Geometry::TDynamicVector<bool,512>::AddAllocatedBlock((TDynamicVector<bool,512> *)pTVar1);
    pFVar3->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
              ((TDynamicMeshTriangleAttribute<bool,1> *)pFVar3,false);
    pFVar3->_padding_ = (longlong)&___7__TDynamicMeshScalarTriangleAttribute__N_Geometry_UE__6B_;
    pFVar4 = pFVar3;
  }
  UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
            ((TDynamicMeshTriangleAttribute<bool,1> *)pFVar4,true);
  pFVar3 = (param_1->AttributeSet).Ptr;
  pFVar2 = this;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = pFVar3;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (pFVar2,AugmentedDynamicMesh::VisibleAttribName,
             (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
  pFVar3 = ::operator_new(0x30);
  pFVar4 = this;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = (TDynamicVector<float,512> *)&pFVar3->ParentMesh;
    pFVar3->_padding_ = 0;
    pTVar1->CurBlock = 0;
    pTVar1->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar3->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar3->UVLayers).Array.ArrayNum = 0;
    (pFVar3->UVLayers).Array.ArrayMax = 0;
    pFVar3->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute__N_00_Geometry_UE__6B_;
    UE::Geometry::TDynamicVector<bool,512>::AddAllocatedBlock((TDynamicVector<bool,512> *)pTVar1);
    pFVar3->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
              ((TDynamicMeshTriangleAttribute<bool,1> *)pFVar3,false);
    pFVar3->_padding_ = (longlong)&___7__TDynamicMeshScalarTriangleAttribute__N_Geometry_UE__6B_;
    pFVar4 = pFVar3;
  }
  UE::Geometry::TDynamicMeshTriangleAttribute<bool,1>::Initialize
            ((TDynamicMeshTriangleAttribute<bool,1> *)pFVar4,true);
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar3;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (this,AugmentedDynamicMesh::InternalAttribName,
             (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar4);
  AugmentedDynamicMesh::EnableUVChannels(param_1,param_2,false,true);
  return;
}

// SetInternal @ 14c9e04d0

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::SetInternal(FDynamicMesh3 *param_1,int param_2,bool param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar4;
  FDynamicMeshAttributeSet *pFVar5;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar5 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar5 = pFVar1;
  }
  pTVar4 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar5->GenericAttributes,InternalAttribName);
  if (pTVar4 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(bool *)((ulonglong)(param_2 & 0x1ff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)&pTVar4->field_0x8 + 0x20) +
            (ulonglong)((uint)param_2 >> 9) * 8)) = param_3;
  return;
}

// SetTangent @ 14c9e0860

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::SetTangent
          (FDynamicMesh3 *param_1,int param_2,TVector<float> *param_3,TVector<float> *param_4,
          TVector<float> *param_5)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar7;
  FDynamicMeshAttributeSet *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar8 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar8 = pFVar1;
  }
  pTVar7 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar8->GenericAttributes,TangentUAttribName);
  if (pTVar7 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (param_1->AttributeSet).Ptr;
  lVar2 = *(longlong *)&pTVar7->field_0x8;
  pFVar8 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar8 = pFVar1;
  }
  pTVar7 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar8->GenericAttributes,TangentVAttribName);
  if (pTVar7 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar5 = param_2 * 3;
  lVar3 = *(longlong *)&pTVar7->field_0x8;
  uVar11 = (ulonglong)(uVar5 + 1 >> 9);
  uVar12 = (ulonglong)(uVar5 + 1 & 0x1ff);
  uVar9 = (ulonglong)(uVar5 + 2 >> 9);
  uVar10 = (ulonglong)(uVar5 + 2 & 0x1ff);
  *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
            (ulonglong)(uVar5 & 0x1ff) * 4) = (param_4->field0_0x0)._s_0.X;
  *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar11 * 8) + uVar12 * 4) =
       (param_4->field0_0x0)._s_0.Y;
  *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar9 * 8) + uVar10 * 4) =
       (param_4->field0_0x0)._s_0.Z;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
            (ulonglong)(uVar5 & 0x1ff) * 4) = (param_5->field0_0x0)._s_0.X;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar11 * 8) + uVar12 * 4) =
       (param_5->field0_0x0)._s_0.Y;
  *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar9 * 8) + uVar10 * 4) =
       (param_5->field0_0x0)._s_0.Z;
  return;
}

// SetUV @ 14c9e09f0

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::SetUV
          (FDynamicMesh3 *param_1,int param_2,TVector2<float> param_3,int param_4)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  FDynamicMeshAttributeSet *pFVar6;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  if (7 < param_4) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5943927746286584037>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                       ,0xe5,"UVLayer < MAX_NUM_UV_CHANNELS");
    if (!bVar4) {
      return;
    }
code_r0x00014c9e0ace:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar6 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar1;
  }
  pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar6->GenericAttributes,UVChannelNames[param_4]);
  if (pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)&pTVar5->field_0x8;
  if (lVar2 == 0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5943927746286584043>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                       ,0xeb,"UVs");
    if (bVar4) goto code_r0x00014c9e0ace;
  }
  else {
    local_res18 = param_3.field0_0x0._0_4_;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
     (ulonglong)(param_2 * 2 & 0x1ff) * 4) = local_res18;
    uStackX_1c = param_3.field0_0x0._4_4_;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
     (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4) = uStackX_1c;
  }
  return;
}

// SetUnsetColors @ 14c9e1600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::PlanarCut::`anonymous_namespace'::SetUnsetColors
          (FGeometryCollection *param_1,int param_2,bool param_3)

{
  DenseStorage<float,_1,_1,1,0> *pDVar1;
  ulonglong *puVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FLinearColor_u_0_s_0 FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  long64 lVar17;
  long64 lVar18;
  long64 lVar19;
  long64 lVar20;
  long64 lVar21;
  long64 lVar22;
  scalar_sum_op<float,float> sVar23;
  FLinearColor_u_0 FVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  FLinearColor_u_0_s_0 *pFVar28;
  int *piVar29;
  uint uVar30;
  ForElementType<FSetElementId> FVar31;
  ulong64 uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  ForAnyElementType FVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  DenseStorage<float,_1,_1,1,0> *pDVar40;
  ulonglong *puVar41;
  uint uVar42;
  uint uVar43;
  ulonglong uVar44;
  int *piVar45;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_> _Var46;
  float *pfVar47;
  uint uVar48;
  FScriptContainerElement *pFVar49;
  longlong lVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  undefined1 auStackY_878 [32];
  scalar_sum_op<float,float> local_828 [4];
  uint local_824;
  ForAnyElementType local_820;
  undefined8 local_818;
  uint local_810 [2];
  ulonglong local_808;
  ForAnyElementType local_800;
  undefined8 local_7f8;
  undefined1 local_7f0;
  undefined1 local_7ef;
  undefined1 local_7ee [2];
  uint local_7ec;
  ulonglong local_7e8;
  ForAnyElementType local_7e0;
  undefined8 local_7d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_7d0;
  undefined4 local_7c0;
  uint local_7bc;
  ulonglong local_7b8;
  longlong local_7b0;
  ForAnyElementType local_7a8;
  int local_7a0 [2];
  FScriptContainerElement *local_798;
  vector<Eigen::Triplet<float,int>,std::allocator<Eigen::Triplet<float,int>_>_> local_790;
  undefined1 local_778;
  undefined1 local_777 [7];
  FSizedDisjointSet local_770;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_750;
  TArray<float,TSizedDefaultAllocator<32>_> local_740;
  uint local_730;
  longlong local_728;
  TArray<int,TSizedDefaultAllocator<32>_> local_720;
  FScriptContainerElement *local_710;
  CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>
  local_708;
  int local_6f0 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_6e8;
  TVector<float>_u_0 local_6d8;
  SparseMatrix<float,0,int> local_6c8;
  longlong local_678;
  longlong local_670;
  Triplet<float,int> local_668;
  Triplet<float,int> local_65c;
  Triplet<float,int> local_650;
  TVector<float>_u_0 local_640 [2];
  TVector4<float>_u_0 local_628;
  FSizedDisjointSet local_618;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_5f8;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_> local_5e8;
  int local_5e0 [2];
  TArrayView<std::nullptr_t,int> local_5d8;
  code *local_5c8;
  DenseStorage<float,_1,_1,1,0> **local_5c0;
  code *local_5b8;
  undefined1 *local_5b0;
  code *local_5a8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **local_5a0;
  FVector3i *local_598;
  uint *local_590;
  code *local_588;
  undefined1 *local_580;
  code *local_578;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **local_570;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_568;
  TVector<float>_u_0 *local_560;
  uint local_558;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_550;
  TVector<float>_u_0 *local_548;
  uint local_540;
  DenseStorage<float,_1,_1,1,0> *local_538;
  undefined1 *local_530;
  DenseStorage<float,_1,_1,1,0> *local_528;
  FVector3i local_520;
  FLinearColor_u_0 local_510;
  undefined1 local_500 [16];
  double local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  FLinearColor local_4d0;
  FLinearColor local_4c0;
  FLinearColor local_4b0;
  undefined1 local_498 [16];
  int local_478;
  int iStack_474;
  undefined4 local_470;
  int local_468;
  int iStack_464;
  undefined4 local_460;
  int local_458;
  int iStack_454;
  undefined4 local_450;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_448;
  undefined1 local_3f8 [64];
  ForElementType<FSetElementId> local_3b8;
  int local_3b0;
  FMutex local_3a8;
  TWrapAroundGridIndexer3<float> local_3a4;
  int local_3a0;
  undefined1 local_398 [256];
  void *local_298;
  undefined8 uStack_290;
  void *local_288;
  undefined8 uStack_280;
  void *local_278;
  undefined8 uStack_270;
  LU_GlobalLU_t<Eigen::Matrix<int,_1,1,0,_1,1>,Eigen::Matrix<float,_1,1,0,_1,1>_> local_268;
  bool local_1b0;
  long64 local_1a8;
  long64 lStack_1a0;
  long64 local_198;
  long64 lStack_190;
  long64 local_188;
  long64 lStack_180;
  float local_178;
  long64 local_160;
  DenseStorage<float,_1,_1,1,0> local_148;
  DenseStorage<float,_1,_1,1,0> local_138;
  DenseStorage<float,_1,_1,1,0> local_128;
  DenseStorage<float,_1,_1,1,0> local_118;
  DenseStorage<float,_1,_1,1,0> local_108;
  DenseStorage<float,_1,_1,1,0> local_f8;
  DenseStorage<float,_1,_1,1,0> local_e8;
  DenseStorage<float,_1,_1,1,0> local_d8;
  ulonglong local_c8 [16];
  
  local_c8[0] = __security_cookie.value ^ (ulonglong)auStackY_878;
  uVar44 = (ulonglong)param_2;
  if (param_2 != -1) {
    local_7ec = param_2;
    iVar26 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)param_1,FGeometryCollection::GeometryGroup);
    local_7b0 = (longlong)iVar26;
    if (param_3) {
      uVar30 = 0;
      if (param_2 < *(int *)&(param_1->VertexStart).field_0x18) {
        uVar30 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar30 = *(uint *)(*(longlong *)&(param_1->VertexStart).field_0x10 + uVar44 * 4);
      uVar33 = 0;
      if (param_2 < *(int *)&(param_1->VertexCount).field_0x18) {
        uVar33 = (uint)~param_2 >> 0x1f;
      }
      local_7b8 = uVar44;
      local_730 = uVar30;
      if ((uVar33 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar33 = param_2 + 1;
      lVar37 = (longlong)(int)uVar33;
      iVar26 = *(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + uVar44 * 4) + uVar30;
      local_7e8 = CONCAT44(local_7e8._4_4_,iVar26);
      uVar39 = uVar44;
      if (lVar37 < local_7b0) {
        do {
          uVar34 = 0;
          if ((int)uVar33 < *(int *)&(param_1->VertexStart).field_0x18) {
            uVar34 = ~uVar33 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar34 = *(uint *)(*(longlong *)&(param_1->VertexStart).field_0x10 + lVar37 * 4);
          if ((int)uVar30 <= (int)uVar34) {
            uVar42 = 0;
            if ((int)uVar33 < *(int *)&(param_1->VertexCount).field_0x18) {
              uVar42 = ~uVar33 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar27 = *(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + lVar37 * 4) + uVar34
            ;
            uVar34 = uVar30;
            if (iVar26 < iVar27) {
              iVar26 = iVar27;
            }
          }
          uVar30 = uVar34;
          uVar33 = uVar33 + 1;
          lVar37 = lVar37 + 1;
        } while (lVar37 < local_7b0);
        uVar44 = local_7b8 & 0xffffffff;
        local_7e8 = CONCAT44(local_7e8._4_4_,iVar26);
        uVar39 = local_7b8;
        local_730 = uVar30;
      }
      local_820.Data = (FScriptContainerElement *)0x0;
      uVar34 = iVar26 - uVar30;
      local_818 = 0;
      uVar33 = uVar34 * 3;
      local_7bc = uVar34;
      if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
      }
      if (0 < (int)uVar33) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar33,&local_820,0,(int *)((longlong)&local_818 + 4));
      }
      local_7a8.Data = (FScriptContainerElement *)0x0;
      local_7a0[0] = 0;
      local_7a0[1] = 0;
      local_740.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_740.ArrayNum = 0;
      local_740.ArrayMax = 0;
      if ((int)uVar34 < 1) {
        if ((int)uVar34 < 0) goto LAB_14c9e4694;
      }
      else {
        iVar27 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,0x10,uVar34,&local_7a8,local_7a0,local_7a0 + 1);
        memset(local_7a8.Data + (longlong)iVar27 * 0x10,0,(longlong)(int)uVar34 << 4);
      }
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_740,uVar34,Default);
      UE::Geometry::FVertexConnectedComponents::FVertexConnectedComponents
                ((FVertexConnectedComponents *)&local_770,uVar34);
      UE::Geometry::FVertexConnectedComponents::FVertexConnectedComponents
                ((FVertexConnectedComponents *)&local_618,uVar34);
      local_824 = (uint)uVar44;
      if ((longlong)uVar39 < local_7b0) {
        do {
          uVar34 = (uint)uVar44;
          uVar33 = 0;
          if ((int)uVar34 < *(int *)&(param_1->FaceStart).field_0x18) {
            uVar33 = ~uVar34 >> 0x1f;
          }
          local_808 = uVar39;
          if ((uVar33 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar26 = *(int *)(*(longlong *)&(param_1->FaceStart).field_0x10 + uVar39 * 4);
          uVar44 = (ulonglong)iVar26;
          uVar33 = 0;
          if ((int)uVar34 < *(int *)&(param_1->FaceCount).field_0x18) {
            uVar33 = ~uVar34 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar37 = (longlong)
                   (*(int *)(*(longlong *)&(param_1->FaceCount).field_0x10 + uVar39 * 4) + iVar26);
          if ((longlong)uVar44 < lVar37) {
            lVar35 = uVar44 * 0xc;
            lVar37 = lVar37 - uVar44;
            do {
              uVar34 = (uint)uVar44;
              uVar33 = 0;
              if ((int)uVar34 < *(int *)&(param_1->Indices).field_0x18) {
                uVar33 = ~uVar34 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar50 = *(longlong *)&(param_1->Indices).field_0x10;
              uVar33 = *(uint *)(lVar50 + lVar35);
              lVar38 = (longlong)(int)uVar33;
              uVar42 = 0;
              if ((int)uVar33 < *(int *)&(param_1->Color).field_0x18) {
                uVar42 = ~uVar33 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar8 = *(longlong *)&(param_1->Color).field_0x10;
              pfVar47 = (float *)(lVar8 + lVar38 * 0x10);
              if ((((*pfVar47 <= 0.0 && *pfVar47 != 0.0) ||
                   (pfVar47 = (float *)(lVar8 + 4 + lVar38 * 0x10),
                   *pfVar47 <= 0.0 && *pfVar47 != 0.0)) ||
                  (pfVar47 = (float *)(lVar8 + 8 + lVar38 * 0x10),
                  *pfVar47 <= 0.0 && *pfVar47 != 0.0)) ||
                 (pfVar47 = (float *)(lVar8 + 0xc + lVar38 * 0x10),
                 *pfVar47 <= 0.0 && *pfVar47 != 0.0)) {
                UE::Geometry::FSizedDisjointSet::Union
                          (&local_770,*(int *)(lVar50 + lVar35) - uVar30,
                           *(int *)(lVar50 + 4 + lVar35) - uVar30);
                UE::Geometry::FSizedDisjointSet::Union
                          (&local_770,*(int *)(lVar50 + 4 + lVar35) - uVar30,
                           *(int *)(lVar50 + 8 + lVar35) - uVar30);
                local_458 = *(int *)(lVar50 + lVar35) - uVar30;
                iStack_454 = *(int *)(lVar50 + 4 + lVar35) - uVar30;
                local_450 = 0x3f000000;
                if (((local_820.Data <= (FScriptContainerElement *)&local_458) &&
                    ((FScriptContainerElement *)&local_458 <
                     local_820.Data + (longlong)local_818._4_4_ * 0xc)) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar25)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar26 = (int)local_818;
                if ((int)local_818 == local_818._4_4_) {
                  iVar26 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&local_820,(int *)((longlong)&local_818 + 4));
                }
                iVar27 = iVar26 + 1;
                local_460 = 0x3f000000;
                *(ulonglong *)(local_820.Data + (longlong)iVar26 * 0xc) =
                     CONCAT44(iStack_454,local_458);
                *(undefined4 *)(local_820.Data + (longlong)iVar26 * 0xc + 8) = local_450;
                local_468 = *(int *)(lVar50 + 4 + lVar35) - uVar30;
                iStack_464 = *(int *)(lVar50 + 8 + lVar35) - uVar30;
                local_818._0_4_ = iVar27;
                if (((local_820.Data <= (FScriptContainerElement *)&local_468) &&
                    ((FScriptContainerElement *)&local_468 <
                     local_820.Data + (longlong)local_818._4_4_ * 0xc)) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar25)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if ((int)local_818 == local_818._4_4_) {
                  local_818._0_4_ =
                       Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&local_820,(int *)((longlong)&local_818 + 4));
                }
                iVar26 = (int)local_818 + 1;
                local_470 = 0x3f000000;
                *(ulonglong *)(local_820.Data + (longlong)(int)local_818 * 0xc) =
                     CONCAT44(iStack_464,local_468);
                *(undefined4 *)(local_820.Data + (longlong)(int)local_818 * 0xc + 8) = local_460;
                local_478 = *(int *)(lVar50 + 8 + lVar35) - uVar30;
                iStack_474 = *(int *)(lVar50 + lVar35) - uVar30;
                local_818._0_4_ = iVar26;
                if (((local_820.Data <= (FScriptContainerElement *)&local_478) &&
                    ((FScriptContainerElement *)&local_478 <
                     local_820.Data + (longlong)local_818._4_4_ * 0xc)) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar25)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar26 = (int)local_818;
                if ((int)local_818 == local_818._4_4_) {
                  iVar26 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&local_820,(int *)((longlong)&local_818 + 4));
                }
                local_818 = CONCAT44(local_818._4_4_,iVar26 + 1);
                *(ulonglong *)(local_820.Data + (longlong)iVar26 * 0xc) =
                     CONCAT44(iStack_474,local_478);
                *(undefined4 *)(local_820.Data + (longlong)iVar26 * 0xc + 8) = local_470;
              }
              uVar44 = (ulonglong)(uVar34 + 1);
              lVar35 = lVar35 + 0xc;
              lVar37 = lVar37 + -1;
              uVar39 = local_808;
              uVar34 = local_824;
            } while (lVar37 != 0);
          }
          local_824 = uVar34 + 1;
          uVar44 = (ulonglong)local_824;
          uVar39 = uVar39 + 1;
        } while ((longlong)uVar39 < local_7b0);
        iVar26 = (uint)local_7e8;
        uVar34 = local_7bc;
        local_808 = uVar39;
      }
      local_6e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6e8.ArrayNum = 0;
      local_6e8.ArrayMax = 0;
      GeometryCollectionAlgo::
      GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
                ((TManagedArray<UE::Math::TTransform<float>_> *)&param_1->_padding_,
                 (TManagedArray<int> *)&param_1->_padding_,&local_6e8);
      local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_750.ArrayNum = 0;
      local_750.ArrayMax = 0;
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_750,uVar34,Default);
      lVar37 = (longlong)(int)uVar30;
      if ((int)uVar30 < iVar26) {
        uVar44 = lVar37 * 4;
        lVar35 = lVar37 * 0xc;
        local_728 = lVar37 * -0xc;
        uVar33 = uVar30;
        do {
          uVar34 = 0;
          if ((int)uVar33 < *(int *)&(param_1->BoneMap).field_0x18) {
            uVar34 = ~uVar33 >> 0x1f;
          }
          local_808 = uVar44;
          if ((uVar34 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar34 = *(uint *)(uVar44 + *(longlong *)&(param_1->BoneMap).field_0x10);
          uVar42 = 0;
          if ((int)uVar34 < local_6e8.ArrayNum) {
            uVar42 = ~uVar34 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar49 = local_6e8.AllocatorInstance.Data + (longlong)(int)uVar34 * 0x60;
          uVar34 = 0;
          if ((int)uVar33 < *(int *)&(param_1->Vertex).field_0x18) {
            uVar34 = ~uVar33 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar37 = *(longlong *)&(param_1->Vertex).field_0x10;
          auVar53 = *(undefined1 (*) [16])pFVar49;
          dVar14 = *(double *)(pFVar49 + 0x18);
          local_4e8 = (double)*(float *)(lVar37 + lVar35);
          uVar34 = 0;
          if ((int)(uVar33 - uVar30) < local_750.ArrayNum) {
            uVar34 = ~(uVar33 - uVar30) >> 0x1f;
          }
          local_498 = *(undefined1 (*) [16])pFVar49;
          local_4d8 = (double)*(float *)(lVar37 + 8 + lVar35);
          dStack_4e0 = (double)*(float *)(lVar37 + 4 + lVar35);
          auVar59 = *(undefined1 (*) [16])(pFVar49 + 0x10);
          dVar12 = local_4d8 * *(double *)(pFVar49 + 0x50);
          dVar13 = *(double *)(pFVar49 + 0x58) * 0.0;
          auVar54 = blendpd(local_498,auVar59,2);
          dVar65 = local_4e8 * *(double *)(pFVar49 + 0x40);
          dVar66 = dStack_4e0 * *(double *)(pFVar49 + 0x48);
          auVar62._8_4_ = SUB84(dVar66,0);
          auVar62._0_8_ = dVar65;
          uVar60 = (undefined4)((ulonglong)dVar66 >> 0x20);
          auVar62._12_4_ = uVar60;
          dVar10 = auVar59._0_8_;
          auVar63._0_8_ = auVar62._8_8_ * local_498._0_8_ - local_498._8_8_ * dVar65;
          auVar63._8_8_ = dVar12 * local_498._8_8_ - dVar10 * dVar66;
          auVar56._8_4_ = SUB84(dVar66,0);
          auVar56._0_8_ = dVar65;
          auVar56._12_4_ = uVar60;
          auVar51._8_4_ = SUB84(dVar13,0);
          auVar51._0_8_ = dVar12;
          auVar51._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          auVar51 = blendpd(auVar56,auVar51,2);
          auVar52._0_8_ = auVar51._0_8_ * dVar10 - auVar54._0_8_ * dVar12;
          auVar52._8_8_ = auVar51._8_8_ * auVar59._8_8_ - auVar54._8_8_ * dVar13;
          auVar51 = blendpd(auVar63,auVar52,2);
          dVar13 = auVar63._8_8_ + auVar63._8_8_;
          dVar11 = auVar52._0_8_ + auVar52._0_8_;
          uVar60 = (undefined4)((ulonglong)dVar11 >> 0x20);
          auVar64._0_8_ = auVar51._0_8_ + auVar51._0_8_;
          auVar64._8_8_ = auVar51._8_8_ + auVar51._8_8_;
          auVar57._8_4_ = SUB84(dVar11,0);
          auVar57._0_8_ = dVar13;
          auVar57._12_4_ = uVar60;
          auVar54._8_4_ = SUB84(dVar11,0);
          auVar54._0_8_ = dVar13;
          auVar54._12_4_ = uVar60;
          auVar51 = blendpd(auVar54,auVar64,2);
          auVar58._0_8_ = auVar57._8_8_ * auVar53._0_8_ - auVar53._8_8_ * dVar13;
          auVar58._8_8_ = auVar64._0_8_ * auVar53._8_8_ - dVar10 * dVar11;
          auVar56 = blendpd(auVar53,auVar59,2);
          auVar53._8_4_ = SUB84(auVar58._8_8_,0);
          auVar53._0_8_ = auVar58._0_8_;
          auVar53._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
          auVar55._0_8_ = auVar51._0_8_ * dVar10 - auVar56._0_8_ * auVar64._0_8_;
          auVar55._8_8_ = auVar51._8_8_ * auVar59._8_8_ - auVar56._8_8_ * auVar64._8_8_;
          auVar59 = blendpd(auVar58,auVar55,2);
          dVar10 = dVar13 * dVar14 + dVar65 + auVar53._8_8_ + *(double *)(pFVar49 + 0x20);
          dVar13 = dVar11 * dVar14 + dVar66 + auVar55._0_8_ + *(double *)(pFVar49 + 0x28);
          local_500._8_4_ = SUB84(dVar13,0);
          local_500._0_8_ = dVar10;
          local_500._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          local_4f0 = auVar64._0_8_ * dVar14 + dVar12 + auVar59._0_8_ + *(double *)(pFVar49 + 0x30);
          fVar61 = (float)local_4f0;
          if ((uVar34 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar33 = uVar33 + 1;
          uVar44 = local_808 + 4;
          *(float *)(local_750.AllocatorInstance.Data + lVar35 + local_728) = (float)dVar10;
          *(float *)(local_750.AllocatorInstance.Data + lVar35 + local_728 + 4) = (float)dVar13;
          *(float *)(local_750.AllocatorInstance.Data + lVar35 + local_728 + 8) = fVar61;
          lVar35 = lVar35 + 0xc;
          local_808 = uVar44;
        } while ((int)uVar33 < (int)(uint)local_7e8);
      }
      fVar61 = __real_3a83126f;
      uVar39 = (ulonglong)local_7ec;
      local_3f8._0_8_ = 0;
      local_3f8._8_8_ = 0;
      local_3f8._32_8_ = 0;
      local_3f8._40_4_ = 0;
      local_3f8._44_4_ = 0x80;
      local_3f8._48_4_ = 0xffffffff;
      local_3f8._52_4_ = 0;
      local_3b8 = (ForElementType<FSetElementId>)0x0;
      local_3b0 = 0;
      local_3a8.State = (atomic<unsigned_char>)0x0;
      local_3a4.CellSize = 0.004;
      local_3a0 = -1;
      local_7d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7d0.ArrayNum = 0;
      local_7d0.ArrayMax = 0;
      local_824 = local_7ec;
      uVar44 = local_7b8;
      lVar37 = local_7b0;
      uVar33 = local_7ec;
      if ((longlong)local_7b8 < local_7b0) {
        do {
          uVar34 = 0;
          if ((int)uVar33 < *(int *)&(param_1->VertexStart).field_0x18) {
            uVar34 = ~uVar33 >> 0x1f;
          }
          local_824 = uVar33;
          local_7e8 = uVar44;
          if ((uVar34 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar34 = *(uint *)(*(longlong *)&(param_1->VertexStart).field_0x10 + uVar44 * 4);
          uVar42 = 0;
          if ((int)uVar33 < *(int *)&(param_1->VertexCount).field_0x18) {
            uVar42 = ~uVar33 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar26 = *(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + uVar44 * 4) + uVar34;
          local_808 = CONCAT44(local_808._4_4_,iVar26);
          local_810[0] = uVar34;
          if ((int)uVar34 < iVar26) {
            do {
              uVar33 = 0;
              if ((int)uVar34 < *(int *)&(param_1->Color).field_0x18) {
                uVar33 = ~uVar34 >> 0x1f;
              }
              local_810[0] = uVar34;
              if ((uVar33 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pfVar47 = (float *)(*(longlong *)&(param_1->Color).field_0x10 +
                                 (longlong)(int)uVar34 * 0x10);
              if ((((*pfVar47 < 0.0) || (pfVar47[1] < 0.0)) || (pfVar47[2] < 0.0)) ||
                 (pfVar47[3] < 0.0)) {
                uVar33 = local_810[0] - uVar30;
                while( true ) {
                  uVar42 = ~uVar33 >> 0x1f;
                  uVar34 = 0;
                  if ((int)uVar33 < local_770.Parents.ArrayNum) {
                    uVar34 = uVar42;
                  }
                  if ((uVar34 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar37 = (longlong)(int)uVar33;
                  if (*(uint *)(local_770.Parents.AllocatorInstance.Data + lVar37 * 4) == uVar33)
                  break;
                  uVar34 = 0;
                  if ((int)uVar33 < local_770.Parents.ArrayNum) {
                    uVar34 = uVar42;
                  }
                  if ((uVar34 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  uVar33 = *(uint *)(local_770.Parents.AllocatorInstance.Data + lVar37 * 4);
                }
                uVar34 = 0;
                if ((int)uVar33 < local_770.Sizes.ArrayNum) {
                  uVar34 = uVar42;
                }
                if ((uVar34 == 0) &&
                   (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar25)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (*(int *)(local_770.Sizes.AllocatorInstance.Data + lVar37 * 4) == 1) {
                  pFVar28 = (FLinearColor_u_0_s_0 *)
                            FLinearColor::FLinearColor
                                      (&local_4b0,&AugmentedDynamicMesh::DefaultVertexColor);
                  lVar37 = (longlong)(int)local_810[0];
                  FVar7 = *pFVar28;
                  uVar33 = 0;
                  if ((int)local_810[0] < *(int *)&(param_1->Color).field_0x18) {
                    uVar33 = ~local_810[0] >> 0x1f;
                  }
                  if ((uVar33 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  ((FLinearColor_u_0 *)(*(longlong *)&(param_1->Color).field_0x10 + lVar37 * 0x10))
                  ->_s_0 = FVar7;
                }
                else {
                  uVar34 = local_810[0] - uVar30;
                  uVar33 = 0;
                  if ((int)uVar34 < local_750.ArrayNum) {
                    uVar33 = ~uVar34 >> 0x1f;
                  }
                  if ((uVar33 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  local_6d8._0_8_ =
                       *(undefined8 *)
                        (local_750.AllocatorInstance.Data + (longlong)(int)uVar34 * 0xc);
                  local_6d8._s_0.Z =
                       (float)*(undefined4 *)
                               (local_750.AllocatorInstance.Data + (longlong)(int)uVar34 * 0xc + 8);
                  iVar27 = UE::Geometry::FSizedDisjointSet::Find(&local_770,local_810[0] - uVar30);
                  iVar26 = local_7d0.ArrayMax;
                  if ((longlong)local_7d0._8_8_ < 0) {
                    local_7d0._8_8_ = (ulonglong)(uint)local_7d0.ArrayMax << 0x20;
                    if (iVar26 != 0) {
                      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,0,&local_7d0.AllocatorInstance,0,&local_7d0.ArrayMax);
                    }
                  }
                  else {
                    local_7d0._8_8_ = (ulonglong)(uint)local_7d0.ArrayMax << 0x20;
                  }
                  local_5b8 = Core::Private::Function::
                              TFunctionRefCaller<UE::Geometry::<lambda_34_>,bool,int_const_&>::Call;
                  local_568 = &local_750;
                  local_560 = &local_6d8;
                  local_5a0 = &local_568;
                  local_5a8 = Core::Private::Function::
                              TFunctionRefCaller<`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l31::<lambda_2>,float,int_const_&>
                              ::Call;
                  local_5b0 = &local_778;
                  local_558 = uVar30;
                  UE::Geometry::TPointHashGrid3<int,float>::FindPointsInBall
                            ((TPointHashGrid3<int,float> *)local_3f8,
                             (TVector<float> *)&local_6d8._s_0,fVar61,
                             (TFunctionRef<float___cdecl(int_const_&)> *)&local_5a8,&local_7d0,
                             (TFunctionRef<bool___cdecl(int_const_&)> *)&local_5b8);
                  iVar26 = local_7d0.ArrayNum;
                  uVar44 = (ulonglong)local_7d0.ArrayNum;
                  pFVar49 = local_7d0.AllocatorInstance.Data + uVar44 * 4;
                  FVar36.Data = local_7d0.AllocatorInstance.Data;
                  while( true ) {
                    if ((int)uVar44 != iVar26) {
                      local_7f0 = 0;
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (&local_7f0);
                    }
                    if (FVar36.Data == pFVar49) break;
                    uVar33 = *(uint *)FVar36.Data;
                    UE::Geometry::FSizedDisjointSet::Union
                              (&local_618,local_810[0] - uVar30,uVar33 - uVar30);
                    UE::Geometry::FSizedDisjointSet::Union(&local_770,iVar27,uVar33 - uVar30);
                    uVar44 = local_7d0._8_8_ & 0xffffffff;
                    FVar36.Data = FVar36.Data + 4;
                  }
                  UE::Geometry::TWrapAroundGridIndexer3<float>::ToGrid
                            (&local_3a4,&local_520,(TVector<float> *)&local_6d8._s_0);
                  local_598 = &local_520;
                  local_590 = local_810;
                  TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                            ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                              *)local_3f8,&local_5f8,(bool *)&local_598);
                }
              }
              uVar34 = local_810[0] + 1;
              uVar44 = local_7e8;
              lVar37 = local_7b0;
              uVar33 = local_824;
              local_810[0] = uVar34;
            } while ((int)uVar34 < (int)(uint)local_808);
          }
          local_824 = uVar33 + 1;
          local_7e8 = uVar44 + 1;
          uVar44 = local_7e8;
          uVar33 = local_824;
        } while ((longlong)local_7e8 < lVar37);
        uVar39 = local_7b8 & 0xffffffff;
      }
      fVar4 = __real_3f800000;
      local_448.Elements._0_8_ = 0;
      local_448.Elements._8_8_ = 0;
      local_448.Elements._32_8_ = 0;
      local_448.Elements._40_4_ = 0;
      local_448.Elements._44_4_ = 0x80;
      local_448.Elements._48_4_ = 0xffffffff;
      local_448.Elements._52_4_ = 0;
      local_448.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_448.HashSize = 0;
      local_7e8 = CONCAT44(local_7e8._4_4_,(int)uVar39);
      if ((longlong)local_7b8 < lVar37) {
        do {
          uVar44 = local_7b8;
          uVar34 = (uint)uVar39;
          uVar33 = 0;
          if ((int)uVar34 < *(int *)&(param_1->VertexStart).field_0x18) {
            uVar33 = ~uVar34 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar33 = *(uint *)(*(longlong *)&(param_1->VertexStart).field_0x10 + uVar44 * 4);
          uVar39 = (ulonglong)(int)uVar33;
          uVar42 = 0;
          if ((int)uVar34 < *(int *)&(param_1->VertexCount).field_0x18) {
            uVar42 = ~uVar34 >> 0x1f;
          }
          local_824 = uVar33;
          if ((uVar42 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar37 = (longlong)
                   (int)(*(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + uVar44 * 4) +
                        uVar33);
          if ((longlong)uVar39 < lVar37) {
            lVar50 = uVar39 << 4;
            lVar35 = (uVar39 - (longlong)(int)uVar30) * 0xc;
            lVar37 = lVar37 - uVar39;
            do {
              uVar34 = (uint)uVar39;
              uVar33 = 0;
              if ((int)uVar34 < *(int *)&(param_1->Color).field_0x18) {
                uVar33 = ~uVar34 >> 0x1f;
              }
              local_728 = lVar37;
              local_678 = lVar35;
              local_670 = lVar50;
              if ((uVar33 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              auVar53 = *(undefined1 (*) [16])(lVar50 + *(longlong *)&(param_1->Color).field_0x10);
              if (0.0 <= auVar53._0_4_) {
                if (((0.0 <= auVar53._4_4_) && (0.0 <= auVar53._8_4_)) && (0.0 <= auVar53._12_4_)) {
                  uVar33 = 0;
                  if ((int)(uVar34 - uVar30) < local_750.ArrayNum) {
                    uVar33 = ~(uVar34 - uVar30) >> 0x1f;
                  }
                  if ((uVar33 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  bVar25 = (longlong)local_7d0._8_8_ < 0;
                  local_640[0]._0_8_ = *(undefined8 *)(local_750.AllocatorInstance.Data + lVar35);
                  local_640[0]._8_4_ =
                       *(undefined4 *)(local_750.AllocatorInstance.Data + lVar35 + 8);
                  local_7d0._8_8_ = local_7d0._8_8_ & 0xffffffff00000000;
                  if (bVar25) {
                    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,0,&local_7d0.AllocatorInstance,0,&local_7d0.ArrayMax);
                  }
                  local_580 = local_777;
                  local_588 = Core::Private::Function::
                              TFunctionRefCaller<UE::Geometry::<lambda_35_>,bool,int_const_&>::Call;
                  local_550 = &local_750;
                  local_548 = local_640;
                  local_570 = &local_550;
                  local_578 = Core::Private::Function::
                              TFunctionRefCaller<`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l45::<lambda_3>,float,int_const_&>
                              ::Call;
                  local_540 = uVar30;
                  UE::Geometry::TPointHashGrid3<int,float>::FindPointsInBall
                            ((TPointHashGrid3<int,float> *)local_3f8,
                             (TVector<float> *)&local_640[0]._s_0,fVar61,
                             (TFunctionRef<float___cdecl(int_const_&)> *)&local_578,&local_7d0,
                             (TFunctionRef<bool___cdecl(int_const_&)> *)&local_588);
                  uVar39 = (ulonglong)local_7d0.ArrayNum;
                  local_808 = CONCAT44(local_808._4_4_,local_7d0.ArrayNum);
                  local_710 = local_7d0.AllocatorInstance.Data + uVar39 * 4;
                  uVar44 = uVar39;
                  FVar36.Data = local_7d0.AllocatorInstance.Data;
                  while( true ) {
                    pFVar49 = local_710;
                    local_798 = FVar36.Data;
                    if ((int)uVar39 != (int)uVar44) {
                      local_7ef = 0;
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (&local_7ef);
                    }
                    lVar35 = local_678;
                    lVar50 = local_670;
                    lVar37 = local_728;
                    uVar34 = local_824;
                    if (FVar36.Data == pFVar49) break;
                    uVar33 = *(uint *)FVar36.Data;
                    uVar42 = uVar33 - uVar30;
                    local_6f0[0] = UE::Geometry::FSizedDisjointSet::Find(&local_770,uVar42);
                    uVar34 = uVar42;
                    while( true ) {
                      uVar43 = ~uVar34 >> 0x1f;
                      uVar48 = 0;
                      if ((int)uVar34 < local_770.Parents.ArrayNum) {
                        uVar48 = uVar43;
                      }
                      if ((uVar48 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar37 = (longlong)(int)uVar34;
                      if (*(uint *)(local_770.Parents.AllocatorInstance.Data + lVar37 * 4) == uVar34
                         ) break;
                      uVar48 = 0;
                      if ((int)uVar34 < local_770.Parents.ArrayNum) {
                        uVar48 = uVar43;
                      }
                      if ((uVar48 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      uVar34 = *(uint *)(local_770.Parents.AllocatorInstance.Data + lVar37 * 4);
                    }
                    uVar48 = 0;
                    if ((int)uVar34 < local_770.Sizes.ArrayNum) {
                      uVar48 = uVar43;
                    }
                    if ((uVar48 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if (*(int *)(local_770.Sizes.AllocatorInstance.Data + lVar37 * 4) == 1) {
                      uVar34 = 0;
                      if ((int)uVar33 < *(int *)&(param_1->Color).field_0x18) {
                        uVar34 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar34 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      *(undefined1 (*) [16])
                       (*(longlong *)&(param_1->Color).field_0x10 + (longlong)(int)uVar33 * 0x10) =
                           auVar53;
                    }
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              (&local_448,local_5e0,(bool *)local_6f0);
                    uVar34 = UE::Geometry::FSizedDisjointSet::Find(&local_618,uVar42);
                    lVar37 = (longlong)(int)uVar34;
                    uVar33 = 0;
                    if ((int)uVar34 < local_7a0[0]) {
                      uVar33 = ~uVar34 >> 0x1f;
                    }
                    if ((uVar33 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    *(float *)(local_7a8.Data + lVar37 * 0x10) =
                         auVar53._0_4_ + *(float *)(local_7a8.Data + lVar37 * 0x10);
                    *(float *)(local_7a8.Data + lVar37 * 0x10 + 4) =
                         auVar53._4_4_ + *(float *)(local_7a8.Data + lVar37 * 0x10 + 4);
                    *(float *)(local_7a8.Data + lVar37 * 0x10 + 8) =
                         auVar53._8_4_ + *(float *)(local_7a8.Data + lVar37 * 0x10 + 8);
                    *(float *)(local_7a8.Data + lVar37 * 0x10 + 0xc) =
                         auVar53._12_4_ + *(float *)(local_7a8.Data + lVar37 * 0x10 + 0xc);
                    uVar33 = 0;
                    if ((int)uVar34 < local_740.ArrayNum) {
                      uVar33 = ~uVar34 >> 0x1f;
                    }
                    if ((uVar33 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    uVar44 = local_808 & 0xffffffff;
                    FVar36.Data = local_798 + 4;
                    *(float *)(local_740.AllocatorInstance.Data + lVar37 * 4) =
                         *(float *)(local_740.AllocatorInstance.Data + lVar37 * 4) + fVar4;
                    uVar39 = local_7d0._8_8_ & 0xffffffff;
                  }
                }
              }
              local_824 = uVar34 + 1;
              uVar39 = (ulonglong)local_824;
              lVar50 = lVar50 + 0x10;
              lVar35 = lVar35 + 0xc;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            local_728 = 0;
            uVar44 = local_7b8;
            uVar34 = (uint)local_7e8;
            local_678 = lVar35;
            local_670 = lVar50;
          }
          uVar39 = (ulonglong)(uVar34 + 1);
          local_7b8 = uVar44 + 1;
          local_7e8 = CONCAT44(local_7e8._4_4_,uVar34 + 1);
        } while ((longlong)local_7b8 < local_7b0);
      }
      uVar33 = 0;
      if (0 < local_7a0[0]) {
        lVar37 = 0;
        lVar35 = 0;
        iVar26 = local_7a0[0];
        do {
          uVar34 = 0;
          if ((int)uVar33 < local_740.ArrayNum) {
            uVar34 = ~uVar33 >> 0x1f;
          }
          if (uVar34 == 0) {
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar25) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar26 = local_7a0[0];
          }
          FVar36.Data = local_740.AllocatorInstance.Data;
          fVar61 = *(float *)(local_740.AllocatorInstance.Data + lVar37 * 4);
          if (0.0 < fVar61) {
            uVar34 = 0;
            if ((int)uVar33 < iVar26) {
              uVar34 = ~uVar33 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            fVar61 = fVar4 / fVar61;
            auVar53 = *(undefined1 (*) [16])(local_7a8.Data + lVar35);
            pFVar49 = local_7a8.Data + lVar35;
            *(float *)pFVar49 = fVar61 * auVar53._0_4_;
            *(float *)(pFVar49 + 4) = fVar61 * auVar53._4_4_;
            *(float *)(pFVar49 + 8) = fVar61 * auVar53._8_4_;
            *(float *)(pFVar49 + 0xc) = fVar61 * auVar53._12_4_;
            *(undefined4 *)(FVar36.Data + lVar37 * 4) = 0x3f800000;
            iVar26 = local_7a0[0];
          }
          uVar33 = uVar33 + 1;
          lVar37 = lVar37 + 1;
          lVar35 = lVar35 + 0x10;
        } while ((int)uVar33 < iVar26);
      }
      uVar33 = local_7bc;
      local_800.Data = (FScriptContainerElement *)0x0;
      local_7f8 = 0;
      uVar34 = local_7bc;
      if ((int)local_7bc < 0) {
LAB_14c9e4694:
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
      }
      if (0 < (int)local_7bc) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_7bc,&local_800,0,(int *)((longlong)&local_7f8 + 4));
      }
      local_7e0.Data = (FScriptContainerElement *)0x0;
      local_7d8 = 0;
      UE::Geometry::FVertexConnectedComponents::MakeContiguousComponentsArray
                ((FVertexConnectedComponents *)&local_770,&local_720,uVar33);
      lVar22 = _UNK_1528da5e8;
      lVar21 = ___xmm_00000000000000140000000000000008;
      lVar20 = _UNK_1528da5d8;
      lVar19 = ___xmm_00000000000000100000000000000080;
      lVar18 = _UNK_1509d9fc8;
      lVar17 = ___xmm_00000000000000010000000000000010;
      uVar16 = _UNK_15076add8;
      uVar15 = ___xmm_000000000000000f0000000000000000;
      uVar34 = __xmm_80000000800000008000000080000000;
      uVar42 = 0;
      local_7e8 = local_7e8 & 0xffffffff00000000;
      if (0 < (int)uVar33) {
        do {
          uVar33 = 0;
          if ((int)uVar42 < local_720.ArrayNum) {
            uVar33 = ~uVar42 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar33 = UE::Geometry::FSizedDisjointSet::Find
                             (&local_770,
                              *(int *)(local_720.AllocatorInstance.Data + (longlong)(int)uVar42 * 4)
                             );
          local_808 = CONCAT44(local_808._4_4_,uVar33);
          while( true ) {
            uVar48 = ~uVar33 >> 0x1f;
            uVar42 = 0;
            if ((int)uVar33 < local_770.Parents.ArrayNum) {
              uVar42 = uVar48;
            }
            if ((uVar42 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar37 = (longlong)(int)uVar33;
            if (*(uint *)(local_770.Parents.AllocatorInstance.Data + lVar37 * 4) == uVar33) break;
            uVar42 = 0;
            if ((int)uVar33 < local_770.Parents.ArrayNum) {
              uVar42 = uVar48;
            }
            if ((uVar42 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar33 = *(uint *)(local_770.Parents.AllocatorInstance.Data + lVar37 * 4);
          }
          uVar42 = 0;
          if ((int)uVar33 < local_770.Sizes.ArrayNum) {
            uVar42 = uVar48;
          }
          if ((uVar42 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar33 = (uint)local_7e8;
          lVar35 = (longlong)(int)(uint)local_7e8;
          uVar42 = *(int *)(local_770.Sizes.AllocatorInstance.Data + lVar37 * 4) + (uint)local_7e8;
          local_824 = uVar42;
          if ((*(int *)(local_770.Sizes.AllocatorInstance.Data + lVar37 * 4) != 1) &&
             (local_448.Elements._8_4_ != local_448.Elements._52_4_)) {
            FVar31 = (ForElementType<FSetElementId>)&local_448.Hash;
            if (local_448.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar31 = local_448.Hash.SecondaryData;
            }
            iVar26 = *(int *)((longlong)FVar31 +
                             (ulonglong)(local_448.HashSize - 1U & (uint)local_808) * 4);
            if (iVar26 != -1) {
LAB_14c9e30a0:
              if (*(uint *)(local_448.Elements._0_8_ + (longlong)iVar26 * 0xc) != (uint)local_808)
              goto code_r0x00014c9e30ac;
              uVar39 = (ulonglong)local_7bc;
              local_790._Mypair._Myval2._Myend = (Triplet<float,int> *)0x0;
              local_790._Mypair._Myval2._Myfirst = (Triplet<float,int> *)0x0;
              local_790._Mypair._Myval2._Mylast = (Triplet<float,int> *)0x0;
              local_7c0 = 0xffffffff;
              uVar44 = local_7f8 >> 0x20;
              local_7f8 = local_7f8 & 0xffffffff00000000;
              iVar26 = 0;
              if ((uint)uVar44 == local_7bc) goto LAB_14c9e3110;
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_7bc,&local_800,0,(int *)((longlong)&local_7f8 + 4));
              do {
                iVar26 = (int)local_7f8;
LAB_14c9e3110:
                if ((local_800.Data <= (FScriptContainerElement *)&local_7c0) &&
                   ((FScriptContainerElement *)&local_7c0 <
                    local_800.Data + (longlong)local_7f8._4_4_ * 4)) {
                  bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar25) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar26 = (int)local_7f8;
                }
                if (iVar26 == local_7f8._4_4_) {
                  iVar26 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_800,(int *)((longlong)&local_7f8 + 4));
                }
                local_7f8 = CONCAT44(local_7f8._4_4_,iVar26 + 1);
                *(undefined4 *)(local_800.Data + (longlong)iVar26 * 4) = local_7c0;
                uVar39 = uVar39 - 1;
              } while (uVar39 != 0);
              local_798 = (FScriptContainerElement *)((ulonglong)local_798 & 0xffffffff00000000);
              local_808 = CONCAT44(local_808._4_4_,uVar33);
              if ((int)uVar33 < (int)uVar42) {
                lVar35 = lVar35 * 4;
                do {
                  uVar42 = 0;
                  if ((int)uVar33 < local_720.ArrayNum) {
                    uVar42 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar42 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  local_7b8 = CONCAT44(local_7b8._4_4_,
                                       *(int *)(local_720.AllocatorInstance.Data + lVar35) + uVar30)
                  ;
                  uVar42 = UE::Geometry::FSizedDisjointSet::Find
                                     (&local_618,*(int *)(local_720.AllocatorInstance.Data + lVar35)
                                     );
                  lVar37 = (longlong)(int)uVar42;
                  uVar48 = ~uVar42 >> 0x1f;
                  uVar33 = 0;
                  if ((int)uVar42 < local_740.ArrayNum) {
                    uVar33 = uVar48;
                  }
                  if ((uVar33 == 0) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (*(float *)(local_740.AllocatorInstance.Data + lVar37 * 4) <= 0.0) {
                    uVar33 = 0;
                    if ((int)uVar42 < (int)local_7f8) {
                      uVar33 = uVar48;
                    }
                    if (uVar33 == 0) {
                      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar25) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                    }
                    if (*(int *)(local_800.Data + lVar37 * 4) != -1) goto LAB_14c9e335e;
                    uVar33 = 0;
                    if ((int)uVar42 < (int)local_7f8) {
                      uVar33 = uVar48;
                    }
                    if ((uVar33 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    *(uint *)(local_800.Data + lVar37 * 4) = (uint)local_798;
                    uVar42 = (uint)local_798 + 1;
                    local_798 = (FScriptContainerElement *)CONCAT44(local_798._4_4_,uVar42);
                  }
                  else {
                    uVar33 = 0;
                    if ((int)uVar42 < local_7a0[0]) {
                      uVar33 = uVar48;
                    }
                    if ((uVar33 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    FLinearColor::FLinearColor
                              ((FLinearColor *)&local_510._s_0,
                               (TVector4<float> *)(local_7a8.Data + lVar37 * 0x10));
                    FVar24 = local_510;
                    lVar37 = (longlong)(int)(uint)local_7b8;
                    uVar33 = 0;
                    if ((int)(uint)local_7b8 < *(int *)&(param_1->Color).field_0x18) {
                      uVar33 = ~(uint)local_7b8 >> 0x1f;
                    }
                    if ((uVar33 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    *(FLinearColor_u_0 *)(*(longlong *)&(param_1->Color).field_0x10 + lVar37 * 0x10)
                         = FVar24;
LAB_14c9e335e:
                    uVar42 = (uint)local_798;
                  }
                  uVar33 = (uint)local_808 + 1;
                  lVar35 = lVar35 + 4;
                  local_808 = CONCAT44(local_808._4_4_,uVar33);
                } while ((int)uVar33 < (int)local_824);
                if (uVar42 != 0) {
                  lVar37 = (longlong)(int)uVar42;
                  local_6c8.m_data.m_indices = (int *)0x0;
                  local_6c8.m_innerNonZeros = (int *)0x0;
                  local_6c8.m_data.m_values = (float *)0x0;
                  local_6c8.m_data.m_allocatedSize = 0;
                  local_6c8.m_data.m_size = 0;
                  local_6c8._padding_._0_1_ = 0;
                  local_6c8.m_innerSize = lVar37;
                  FMemory_Free((void *)0x0);
                  uVar32 = lVar37 * 4 + 4;
                  piVar29 = FMemory_Malloc(uVar32,0x10);
                  local_6c8.m_outerIndex = piVar29;
                  if (piVar29 == (int *)0x0) {
                    ::operator_new(0xffffffffffffffff);
                  }
                  local_6c8.m_outerSize = lVar37;
                  memset(piVar29,0,uVar32);
                  local_108.m_data = (float *)0x0;
                  local_108.m_rows = 0;
                  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_108,lVar37,lVar37,1);
                  local_f8.m_data = (float *)0x0;
                  local_f8.m_rows = 0;
                  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_f8,lVar37,lVar37,1);
                  local_e8.m_data = (float *)0x0;
                  local_e8.m_rows = 0;
                  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_e8,lVar37,lVar37,1);
                  local_d8.m_data = (float *)0x0;
                  local_d8.m_rows = 0;
                  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_d8,lVar37,lVar37,1);
                  local_148.m_data = (float *)0x0;
                  local_148.m_rows = 0;
                  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_148,lVar37,lVar37,1);
                  local_138.m_data = (float *)0x0;
                  local_138.m_rows = 0;
                  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_138,lVar37,lVar37,1);
                  local_128.m_data = (float *)0x0;
                  local_128.m_rows = 0;
                  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_128,lVar37,lVar37,1);
                  local_118.m_data = (float *)0x0;
                  local_118.m_rows = 0;
                  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_118,lVar37,lVar37,1);
                  local_708.m_rows.m_value = local_148.m_rows;
                  local_708.m_functor.m_other = 0.0;
                  Eigen::internal::
                  call_assignment_no_alias<Eigen::Matrix<float,_1,1,0,_1,1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>,Eigen::internal::assign_op<float,float>_>
                            ((Matrix<float,_1,1,0,_1,1> *)&local_148,&local_708,
                             (assign_op<float,float> *)local_828);
                  local_708.m_rows.m_value = local_138.m_rows;
                  local_708.m_functor.m_other = 0.0;
                  Eigen::internal::
                  call_assignment_no_alias<Eigen::Matrix<float,_1,1,0,_1,1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>,Eigen::internal::assign_op<float,float>_>
                            ((Matrix<float,_1,1,0,_1,1> *)&local_138,&local_708,
                             (assign_op<float,float> *)local_828);
                  local_708.m_rows.m_value = local_128.m_rows;
                  local_708.m_functor.m_other = 0.0;
                  Eigen::internal::
                  call_assignment_no_alias<Eigen::Matrix<float,_1,1,0,_1,1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>,Eigen::internal::assign_op<float,float>_>
                            ((Matrix<float,_1,1,0,_1,1> *)&local_128,&local_708,
                             (assign_op<float,float> *)local_828);
                  local_708.m_rows.m_value = local_118.m_rows;
                  local_708.m_functor.m_other = 0.0;
                  Eigen::internal::
                  call_assignment_no_alias<Eigen::Matrix<float,_1,1,0,_1,1>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>,Eigen::internal::assign_op<float,float>_>
                            ((Matrix<float,_1,1,0,_1,1> *)&local_118,&local_708,
                             (assign_op<float,float> *)local_828);
                  if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
                    Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
                  }
                  uVar30 = local_7d8._4_4_;
                  local_7d8 = (ulonglong)local_7d8._4_4_ << 0x20;
                  iVar26 = 0;
                  if ((int)uVar30 < (int)uVar42) {
                    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,uVar42,&local_7e0,0,(int *)((longlong)&local_7d8 + 4));
                    iVar26 = (int)local_7d8;
                  }
                  if (iVar26 < (int)uVar42) {
                    iVar27 = Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (4,4,uVar42 - iVar26,&local_7e0,(int *)&local_7d8,
                                        (int *)((longlong)&local_7d8 + 4));
                    memset(local_7e0.Data + (longlong)iVar27 * 4,0,
                           (longlong)(int)(uVar42 - iVar26) << 2);
                    iVar26 = (int)local_7d8;
                  }
                  else if ((int)uVar42 < iVar26) {
                    uVar30 = iVar26 - uVar42;
                    if ((int)(uVar42 | uVar30) < 0) {
                      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         );
                      if (bVar25) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      iVar26 = (int)local_7d8;
                    }
                    if (uVar30 != 0) {
                      iVar27 = (iVar26 - uVar42) - uVar30;
                      if (iVar27 != 0) {
                        memmove(local_7e0.Data + lVar37 * 4,
                                local_7e0.Data + lVar37 * 4 + (longlong)(int)uVar30 * 4,
                                (longlong)iVar27 << 2);
                        iVar26 = (int)local_7d8;
                      }
                      iVar26 = iVar26 - uVar30;
                      local_7d8 = CONCAT44(local_7d8._4_4_,iVar26);
                    }
                  }
                  iVar27 = (int)local_818;
                  uVar44 = (ulonglong)(int)local_818;
                  pFVar3 = local_820.Data + uVar44 * 0xc;
                  pFVar49 = local_820.Data + 8;
                  while( true ) {
                    if ((int)uVar44 != iVar27) {
                      local_7ee[0] = 0;
                      `TCheckedPointerIterator<`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l8::FLink,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(local_7ee);
                      iVar26 = (int)local_7d8;
                    }
                    sVar23 = local_828[0];
                    if (pFVar49 + -8 == pFVar3) break;
                    uVar33 = UE::Geometry::FSizedDisjointSet::Find
                                       (&local_618,(int)*(float *)(pFVar49 + -8));
                    uVar42 = UE::Geometry::FSizedDisjointSet::Find
                                       (&local_618,(int)*(float *)(pFVar49 + -4));
                    local_7b8 = CONCAT44(local_7b8._4_4_,uVar42);
                    uVar30 = 0;
                    if ((int)uVar33 < (int)local_7f8) {
                      uVar30 = ~uVar33 >> 0x1f;
                    }
                    if (uVar30 == 0) {
                      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar25) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                    }
                    uVar30 = *(uint *)(local_800.Data + (longlong)(int)uVar33 * 4);
                    uVar48 = 0;
                    if ((int)uVar42 < (int)local_7f8) {
                      uVar48 = ~uVar42 >> 0x1f;
                    }
                    if ((uVar48 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    uVar42 = *(uint *)(local_800.Data + (longlong)(int)uVar42 * 4);
                    lVar37 = (longlong)(int)uVar42;
                    if (uVar30 == 0xffffffff) {
                      uVar30 = uVar42;
                      if (uVar42 != 0xffffffff) {
LAB_14c9e38c2:
                        uVar42 = uVar30;
                        uVar30 = ~uVar33 >> 0x1f;
                        local_808 = CONCAT44(local_808._4_4_,uVar30);
                        uVar48 = 0;
                        if ((int)uVar33 < local_740.ArrayNum) {
                          uVar48 = uVar30;
                        }
                        if (uVar48 == 0) {
                          bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar25) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          uVar30 = (uint)local_808;
                        }
                        if (0.0 < *(float *)(local_740.AllocatorInstance.Data +
                                            (longlong)(int)uVar33 * 4)) {
                          uVar48 = 0;
                          if ((int)uVar33 < local_7a0[0]) {
                            uVar48 = uVar30;
                          }
                          if ((uVar48 == 0) &&
                             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar25)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          fVar61 = *(float *)pFVar49;
                          local_710 = (FScriptContainerElement *)((longlong)(int)uVar33 * 0x10);
                          fVar4 = *(float *)(local_710 + 4 + local_7a8.Data);
                          fVar5 = *(float *)(local_710 + 8 + local_7a8.Data);
                          fVar6 = *(float *)(local_710 + 0xc + local_7a8.Data);
                          lVar37 = (longlong)(int)uVar42;
                          local_148.m_data[lVar37] =
                               fVar61 * *(float *)(local_710 + local_7a8.Data) +
                               local_148.m_data[lVar37];
                          local_138.m_data[lVar37] = fVar61 * fVar4 + local_138.m_data[lVar37];
                          local_128.m_data[lVar37] = fVar61 * fVar5 + local_128.m_data[lVar37];
                          local_118.m_data[lVar37] = fVar61 * fVar6 + local_118.m_data[lVar37];
                          bVar25 = SBORROW4(uVar42,(int)local_7d8);
                          iVar26 = uVar42 - (int)local_7d8;
                          goto LAB_14c9e3b09;
                        }
                      }
                    }
                    else {
                      uVar33 = (uint)local_7b8;
                      if (uVar42 == 0xffffffff) goto LAB_14c9e38c2;
                      local_668.m_value = (float)((uint)*(float *)pFVar49 ^ uVar34);
                      local_668.m_row = uVar30;
                      local_668.m_col = uVar42;
                      if (local_790._Mypair._Myval2._Mylast == local_790._Mypair._Myval2._Myend) {
                        std::
                        vector<Eigen::Triplet<float,int>,std::allocator<Eigen::Triplet<float,int>_>_>
                        ::_Emplace_reallocate<Eigen::Triplet<float,int>_>
                                  (&local_790,local_790._Mypair._Myval2._Mylast,&local_668);
                      }
                      else {
                        (local_790._Mypair._Myval2._Mylast)->m_row = uVar30;
                        (local_790._Mypair._Myval2._Mylast)->m_col = uVar42;
                        (local_790._Mypair._Myval2._Mylast)->m_value = local_668.m_value;
                        local_790._Mypair._Myval2._Mylast = local_790._Mypair._Myval2._Mylast + 1;
                      }
                      local_65c.m_value = (float)((uint)*(float *)pFVar49 ^ uVar34);
                      local_65c.m_row = uVar42;
                      local_65c.m_col = uVar30;
                      if (local_790._Mypair._Myval2._Mylast == local_790._Mypair._Myval2._Myend) {
                        std::
                        vector<Eigen::Triplet<float,int>,std::allocator<Eigen::Triplet<float,int>_>_>
                        ::_Emplace_reallocate<Eigen::Triplet<float,int>_>
                                  (&local_790,local_790._Mypair._Myval2._Mylast,&local_65c);
                      }
                      else {
                        (local_790._Mypair._Myval2._Mylast)->m_row = uVar42;
                        (local_790._Mypair._Myval2._Mylast)->m_col = uVar30;
                        (local_790._Mypair._Myval2._Mylast)->m_value = local_65c.m_value;
                        local_790._Mypair._Myval2._Mylast = local_790._Mypair._Myval2._Mylast + 1;
                      }
                      fVar61 = *(float *)pFVar49;
                      uVar33 = 0;
                      if ((int)uVar30 < (int)local_7d8) {
                        uVar33 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar33 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      *(float *)(local_7e0.Data + (longlong)(int)uVar30 * 4) =
                           fVar61 + *(float *)(local_7e0.Data + (longlong)(int)uVar30 * 4);
                      bVar25 = SBORROW4(uVar42,(int)local_7d8);
                      iVar26 = uVar42 - (int)local_7d8;
LAB_14c9e3b09:
                      fVar61 = *(float *)pFVar49;
                      uVar30 = 0;
                      if (bVar25 != iVar26 < 0) {
                        uVar30 = ~uVar42 >> 0x1f;
                      }
                      if ((uVar30 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      *(float *)(local_7e0.Data + lVar37 * 4) =
                           fVar61 + *(float *)(local_7e0.Data + lVar37 * 4);
                    }
                    uVar44 = local_818 & 0xffffffff;
                    pFVar49 = pFVar49 + 0xc;
                    iVar26 = (int)local_7d8;
                  }
                  iVar27 = (uint)local_798;
                  uVar30 = 0;
                  if (0 < (int)(uint)local_798) {
                    lVar37 = 0;
                    while( true ) {
                      uVar33 = 0;
                      if ((int)uVar30 < iVar26) {
                        uVar33 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar33 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      local_650.m_value = *(float *)(local_7e0.Data + lVar37);
                      local_650.m_row = uVar30;
                      local_650.m_col = uVar30;
                      if (local_790._Mypair._Myval2._Mylast == local_790._Mypair._Myval2._Myend) {
                        std::
                        vector<Eigen::Triplet<float,int>,std::allocator<Eigen::Triplet<float,int>_>_>
                        ::_Emplace_reallocate<Eigen::Triplet<float,int>_>
                                  (&local_790,local_790._Mypair._Myval2._Mylast,&local_650);
                      }
                      else {
                        (local_790._Mypair._Myval2._Mylast)->m_row = uVar30;
                        (local_790._Mypair._Myval2._Mylast)->m_col = uVar30;
                        (local_790._Mypair._Myval2._Mylast)->m_value = local_650.m_value;
                        local_790._Mypair._Myval2._Mylast = local_790._Mypair._Myval2._Mylast + 1;
                      }
                      uVar30 = uVar30 + 1;
                      lVar37 = lVar37 + 4;
                      if (iVar27 <= (int)uVar30) break;
                      iVar26 = (int)local_7d8;
                    }
                  }
                  local_5e8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_>
                               )local_790._Mypair._Myval2._Myfirst;
                  local_5f8.Value = &(local_790._Mypair._Myval2._Mylast)->m_row;
                  Eigen::internal::
                  set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_>,Eigen::SparseMatrix<float,0,int>,Eigen::internal::scalar_sum_op<float,float>_>
                            (&local_5e8,
                             (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_>
                              *)&local_5f8.Value,&local_6c8,sVar23);
                  if (local_6c8.m_innerNonZeros != (int *)0x0) {
                    iVar26 = local_6c8.m_outerIndex[1];
                    local_6c8.m_outerIndex[1] = *local_6c8.m_innerNonZeros;
                    if (1 < local_6c8.m_outerSize) {
                      lVar37 = local_6c8.m_outerSize + -1;
                      lVar35 = (longlong)local_6c8.m_outerIndex -
                               (longlong)local_6c8.m_innerNonZeros;
                      piVar29 = local_6c8.m_innerNonZeros;
                      do {
                        lVar50 = (longlong)iVar26;
                        piVar45 = piVar29 + 1;
                        iVar26 = *(int *)((longlong)piVar29 + lVar35 + 8);
                        if ((lVar50 != *(int *)((longlong)piVar45 + lVar35) &&
                             -1 < lVar50 - *(int *)((longlong)piVar45 + lVar35)) &&
                           (lVar38 = 0, 0 < *piVar45)) {
                          pfVar47 = local_6c8.m_data.m_values + lVar50;
                          do {
                            local_6c8.m_data.m_indices
                            [*(int *)((longlong)piVar45 + lVar35) + lVar38] =
                                 *(int *)((longlong)pfVar47 +
                                         ((longlong)local_6c8.m_data.m_indices -
                                         (longlong)local_6c8.m_data.m_values));
                            lVar50 = *(int *)((longlong)piVar45 + lVar35) + lVar38;
                            lVar38 = lVar38 + 1;
                            local_6c8.m_data.m_values[lVar50] = *pfVar47;
                            pfVar47 = pfVar47 + 1;
                          } while (lVar38 < *piVar45);
                        }
                        *(int *)(lVar35 + 4 + (longlong)piVar45) =
                             *(int *)((longlong)piVar45 + lVar35) + *piVar45;
                        lVar37 = lVar37 + -1;
                        piVar29 = piVar45;
                      } while (lVar37 != 0);
                    }
                    FMemory_Free(local_6c8.m_innerNonZeros);
                    local_6c8.m_innerNonZeros = (int *)0x0;
                    Eigen::internal::CompressedStorage<float,int>::resize
                              (&local_6c8.m_data,
                               (longlong)local_6c8.m_outerIndex[local_6c8.m_outerSize],0.0);
                    if (local_6c8.m_data.m_size < local_6c8.m_data.m_allocatedSize) {
                      Eigen::internal::CompressedStorage<float,int>::reallocate
                                (&local_6c8.m_data,local_6c8.m_data.m_size);
                    }
                  }
                  local_398[0] = 0;
                  local_398._24_8_ = 0;
                  local_398._16_8_ = (char *)0x0;
                  local_398._32_8_ = uVar15;
                  local_398._40_8_ = uVar16;
                  local_398[0x30] = 0;
                  local_398._56_8_ = -1;
                  local_398._72_8_ = (int *)0x0;
                  local_398._80_8_ = (int *)0x0;
                  local_398._88_8_ = (float *)0x0;
                  local_398._96_8_ = (int *)0x0;
                  local_398._112_8_ = 0;
                  local_398._64_8_ = 0;
                  local_398._104_8_ = 0;
                  FMemory_Free((void *)0x0);
                  local_398._72_8_ = FMemory_Malloc(4,0x10);
                  if ((int *)local_398._72_8_ == (int *)0x0) {
                    ::operator_new(0xffffffffffffffff);
                  }
                  local_398._56_8_ = 0;
                  if ((int *)local_398._80_8_ != (int *)0x0) {
                    FMemory_Free((void *)local_398._80_8_);
                    local_398._80_8_ = (int *)0x0;
                  }
                  memset((void *)local_398._72_8_,0,local_398._56_8_ * 4 + 4);
                  local_398[0xc0] = 0;
                  local_398._224_8_ = 0;
                  local_398._232_8_ = 0;
                  local_398._240_8_ = 0;
                  local_398._248_8_ = 0;
                  local_298 = (void *)0x0;
                  uStack_290 = 0;
                  local_288 = (void *)0x0;
                  uStack_280 = 0;
                  local_278 = (void *)0x0;
                  uStack_270 = 0;
                  local_268.xsup._0_8_ = 0;
                  local_268.xsup._8_8_ = 0;
                  local_268.supno._0_8_ = 0;
                  local_268.supno._8_8_ = 0;
                  local_268.lusup._0_8_ = 0;
                  local_268.lusup._8_8_ = 0;
                  local_268.lsub._0_8_ = 0;
                  local_268.lsub._8_8_ = 0;
                  local_268.xlusup._0_8_ = 0;
                  local_268.xlusup._8_8_ = 0;
                  local_268.xlsub._0_8_ = 0;
                  local_268.xlsub._8_8_ = 0;
                  local_268.ucol._0_8_ = 0;
                  local_268.ucol._8_8_ = 0;
                  local_268.usub._0_8_ = 0;
                  local_268.usub._8_8_ = 0;
                  local_268.xusub._0_8_ = 0;
                  local_268.xusub._8_8_ = 0;
                  local_398._200_8_ = 0;
                  local_398._208_8_ = 0;
                  local_398._216_8_ = 0;
                  local_178 = 1.0;
                  local_160 = 1;
                  local_1a8 = lVar17;
                  lStack_1a0 = lVar18;
                  local_198 = lVar19;
                  lStack_190 = lVar20;
                  local_188 = lVar21;
                  lStack_180 = lVar22;
                  local_1b0 = true;
                  Eigen::SparseLU<Eigen::SparseMatrix<float,0,int>,Eigen::COLAMDOrdering<int>_>::
                  analyzePattern((SparseLU<Eigen::SparseMatrix<float,0,int>,Eigen::COLAMDOrdering<int>_>
                                  *)local_398,&local_6c8);
                  Eigen::SparseLU<Eigen::SparseMatrix<float,0,int>,Eigen::COLAMDOrdering<int>_>::
                  factorize((SparseLU<Eigen::SparseMatrix<float,0,int>,Eigen::COLAMDOrdering<int>_>
                             *)local_398,&local_6c8);
                  local_538 = &local_108;
                  local_5d8.DataPtr = (void **)0x0;
                  local_530 = local_398;
                  local_5d8.ArrayNum = 0;
                  local_528 = &local_148;
                  local_5c8 = Core::Private::Function::
                              TFunctionRefCaller<`UE::PlanarCut::`anonymous_namespace'::SetUnsetColors'::__l59::<lambda_4>,void,int>
                              ::Call;
                  local_5c0 = &local_538;
                  ParallelForImpl::
                  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                            (L"ParallelFor Task",4,1,(TFunctionRef<void___cdecl(int)> *)&local_5c8,
                             (<lambda_1>)sVar23,None,&local_5d8);
                  uVar30 = local_730;
                  uVar33 = local_824;
                  uVar44 = (ulonglong)(int)(uint)local_7e8;
                  lVar37 = uVar44 << 2;
                  do {
                    uVar42 = 0;
                    if ((int)(uint)uVar44 < local_720.ArrayNum) {
                      uVar42 = ~(uint)uVar44 >> 0x1f;
                    }
                    if ((uVar42 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    uVar42 = *(int *)(local_720.AllocatorInstance.Data + lVar37) + uVar30;
                    uVar43 = UE::Geometry::FSizedDisjointSet::Find
                                       (&local_618,
                                        *(int *)(local_720.AllocatorInstance.Data + lVar37));
                    uVar48 = 0;
                    if ((int)uVar43 < (int)local_7f8) {
                      uVar48 = ~uVar43 >> 0x1f;
                    }
                    if ((uVar48 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    iVar26 = *(int *)(local_800.Data + (longlong)(int)uVar43 * 4);
                    if (iVar26 != -1) {
                      local_628._s_0.X = local_108.m_data[iVar26];
                      if (local_628._s_0.X <= 0.0) {
                        local_628._s_0.X = 0.0;
                      }
                      local_628._s_0.Y = local_f8.m_data[iVar26];
                      if (local_628._s_0.Y <= 0.0) {
                        local_628._s_0.Y = 0.0;
                      }
                      local_628._s_0.Z = local_e8.m_data[iVar26];
                      if (local_628._s_0.Z <= 0.0) {
                        local_628._s_0.Z = 0.0;
                      }
                      local_628._s_0.W = local_d8.m_data[iVar26];
                      if (local_628._s_0.W <= 0.0) {
                        local_628._s_0.W = 0.0;
                      }
                      pFVar28 = (FLinearColor_u_0_s_0 *)
                                FLinearColor::FLinearColor
                                          (&local_4d0,(TVector4<float> *)&local_628._s_0);
                      FVar7 = *pFVar28;
                      uVar48 = 0;
                      if ((int)uVar42 < *(int *)&(param_1->Color).field_0x18) {
                        uVar48 = ~uVar42 >> 0x1f;
                      }
                      if ((uVar48 == 0) &&
                         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar25)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      ((FLinearColor_u_0 *)
                      (*(longlong *)&(param_1->Color).field_0x10 + (longlong)(int)uVar42 * 0x10))->
                      _s_0 = FVar7;
                    }
                    uVar42 = (uint)local_7e8 + 1;
                    uVar44 = (ulonglong)uVar42;
                    lVar37 = lVar37 + 4;
                    local_7e8 = CONCAT44(local_7e8._4_4_,uVar42);
                  } while ((int)uVar42 < (int)uVar33);
                  Eigen::internal::
                  LU_GlobalLU_t<Eigen::Matrix<int,-1,1,0,-1,1>,Eigen::Matrix<float,-1,1,0,-1,1>_>::
                  ~LU_GlobalLU_t<Eigen::Matrix<int,_1,1,0,_1,1>,Eigen::Matrix<float,_1,1,0,_1,1>_>
                            (&local_268);
                  FMemory_Free(local_278);
                  FMemory_Free(local_288);
                  FMemory_Free(local_298);
                  FMemory_Free((void *)local_398._72_8_);
                  FMemory_Free((void *)local_398._80_8_);
                  operator_delete__((void *)local_398._88_8_);
                  operator_delete__((void *)local_398._96_8_);
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(local_398 + 0x10));
                  pDVar40 = &local_108;
                  lVar37 = 4;
                  do {
                    pDVar1 = pDVar40 + -1;
                    pDVar40 = pDVar40 + -1;
                    FMemory_Free(pDVar1->m_data);
                    lVar37 = lVar37 + -1;
                  } while (lVar37 != 0);
                  puVar41 = local_c8;
                  lVar37 = 4;
                  do {
                    puVar2 = puVar41 + -2;
                    puVar41 = puVar41 + -2;
                    FMemory_Free((void *)*puVar2);
                    lVar37 = lVar37 + -1;
                  } while (lVar37 != 0);
                  FMemory_Free(local_6c8.m_outerIndex);
                  FMemory_Free(local_6c8.m_innerNonZeros);
                  operator_delete__(local_6c8.m_data.m_values);
                  operator_delete__(local_6c8.m_data.m_indices);
                }
              }
              if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_>
                   )local_790._Mypair._Myval2._Myfirst !=
                  (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_>
                   )0x0) {
                uVar32 = (((longlong)local_790._Mypair._Myval2._Myend -
                          (longlong)local_790._Mypair._Myval2._Myfirst) / 0xc) * 0xc;
                _Var46 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_>
                          )local_790._Mypair._Myval2._Myfirst;
                if (0xfff < uVar32) {
                  _Var46 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<float,int>_>_>_>
                             *)((longlong)local_790._Mypair._Myval2._Myfirst + -8);
                  uVar32 = uVar32 + 0x27;
                  if (0x1f < ((longlong)local_790._Mypair._Myval2._Myfirst - (longlong)_Var46) - 8U)
                  {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)_Var46,uVar32);
              }
            }
          }
LAB_14c9e42e2:
          local_7e8 = CONCAT44(local_7e8._4_4_,local_824);
          uVar42 = local_824;
        } while ((int)local_824 < (int)local_7bc);
      }
      if (local_720.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_720.AllocatorInstance.Data);
      }
      if (local_7e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e0.Data);
      }
      if (local_800.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_800.Data);
      }
      local_448.HashSize = 0;
      if (local_448.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_448.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_448.Elements);
      if (local_7d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7d0.AllocatorInstance.Data);
      }
      local_3b0 = 0;
      if (local_3b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_3b8);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_3f8);
      if (local_750.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_750.AllocatorInstance.Data);
      }
      if (local_6e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e8.AllocatorInstance.Data);
      }
      if (local_618.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618.Sizes.AllocatorInstance.Data);
      }
      if (local_618.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618.Parents.AllocatorInstance.Data);
      }
      if (local_770.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_770.Sizes.AllocatorInstance.Data);
      }
      if (local_770.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_770.Parents.AllocatorInstance.Data);
      }
      if (local_740.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_740.AllocatorInstance.Data);
      }
      if (local_7a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a8.Data);
      }
      if (local_820.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_820.Data);
      }
      uVar44 = (ulonglong)local_7ec;
    }
    lVar37 = (longlong)(int)uVar44;
    if (lVar37 < local_7b0) {
      do {
        uVar33 = (uint)uVar44;
        uVar30 = 0;
        if ((int)uVar33 < *(int *)&(param_1->VertexStart).field_0x18) {
          uVar30 = ~uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar26 = *(int *)(*(longlong *)&(param_1->VertexStart).field_0x10 + lVar37 * 4);
        uVar44 = (ulonglong)iVar26;
        uVar30 = 0;
        if ((int)uVar33 < *(int *)&(param_1->VertexCount).field_0x18) {
          uVar30 = ~uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar35 = (longlong)
                 (*(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + lVar37 * 4) + iVar26);
        if ((longlong)uVar44 < lVar35) {
          lVar50 = uVar44 << 4;
          uVar39 = uVar44;
          do {
            uVar33 = (uint)uVar44;
            uVar30 = 0;
            if ((int)uVar33 < *(int *)&(param_1->Color).field_0x18) {
              uVar30 = ~uVar33 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar38 = *(longlong *)&(param_1->Color).field_0x10;
            if ((((*(float *)(lVar50 + lVar38) <= 0.0 && *(float *)(lVar50 + lVar38) != 0.0) ||
                 (pfVar47 = (float *)(lVar50 + 4 + lVar38), *pfVar47 <= 0.0 && *pfVar47 != 0.0)) ||
                (pfVar47 = (float *)(lVar50 + 8 + lVar38), *pfVar47 <= 0.0 && *pfVar47 != 0.0)) ||
               (pfVar47 = (float *)(lVar50 + 0xc + lVar38), *pfVar47 <= 0.0 && *pfVar47 != 0.0)) {
              pFVar28 = (FLinearColor_u_0_s_0 *)
                        FLinearColor::FLinearColor
                                  (&local_4c0,&AugmentedDynamicMesh::DefaultVertexColor);
              FVar7 = *pFVar28;
              uVar30 = 0;
              if ((int)uVar33 < *(int *)&(param_1->Color).field_0x18) {
                uVar30 = ~uVar33 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              ((FLinearColor_u_0 *)(lVar50 + *(longlong *)&(param_1->Color).field_0x10))->_s_0 =
                   FVar7;
            }
            uVar44 = (ulonglong)(uVar33 + 1);
            uVar39 = uVar39 + 1;
            lVar50 = lVar50 + 0x10;
            uVar33 = local_7ec;
          } while ((longlong)uVar39 < lVar35);
        }
        local_7ec = uVar33 + 1;
        uVar44 = (ulonglong)local_7ec;
        lVar37 = lVar37 + 1;
      } while (lVar37 < local_7b0);
    }
  }
  return;
code_r0x00014c9e30ac:
  iVar26 = *(int *)(local_448.Elements._0_8_ + 4 + (longlong)iVar26 * 0xc);
  if (iVar26 == -1) goto LAB_14c9e42e2;
  goto LAB_14c9e30a0;
}

// SetVertexColor @ 14c9e46b0

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::SetVertexColor
          (FDynamicMesh3 *param_1,int param_2,TVector4<float> *param_3)

{
  uint uVar1;
  FDynamicMeshAttributeSet *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  pFVar7 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar7 = pFVar2;
  }
  pTVar6 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar7->GenericAttributes,ColorAttribName);
  if (pTVar6 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)&pTVar6->field_0x8;
  uVar1 = param_2 * 4;
  *(float *)(*(longlong *)
              (*(longlong *)(lVar3 + 0x20) + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar1 & 0x1ff) * 4) = (param_3->field0_0x0)._s_0.X;
  *(float *)(*(longlong *)
              (*(longlong *)(lVar3 + 0x20) + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar1 + 1 & 0x1ff) * 4) = (param_3->field0_0x0)._s_0.Y;
  *(float *)(*(longlong *)
              (*(longlong *)(lVar3 + 0x20) + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar1 + 2 & 0x1ff) * 4) = (param_3->field0_0x0)._s_0.Z;
  *(float *)(*(longlong *)
              (*(longlong *)(lVar3 + 0x20) + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar1 + 3 & 0x1ff) * 4) = (param_3->field0_0x0)._s_0.W;
  return;
}

// SetVisibility @ 14c9e47c0

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::SetVisibility(FDynamicMesh3 *param_1,int param_2,bool param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar4;
  FDynamicMeshAttributeSet *pFVar5;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar5 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar5 = pFVar1;
  }
  pTVar4 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   *)&pFVar5->GenericAttributes,VisibleAttribName);
  if (pTVar4 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(bool *)((ulonglong)(param_2 & 0x1ff) +
           *(longlong *)
            (*(longlong *)(*(longlong *)&pTVar4->field_0x8 + 0x20) +
            (ulonglong)((uint)param_2 >> 9) * 8)) = param_3;
  return;
}

// SplitOverlayAttributesToPerVertex @ 14c9e5c90

void __cdecl
UE::PlanarCut::AugmentedDynamicMesh::SplitOverlayAttributesToPerVertex
          (FDynamicMesh3 *param_1,bool param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar3;
  undefined8 *puVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar13;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar14;
  FDynamicMeshAttributeSet *pFVar15;
  FDynamicMeshAttributeSet *pFVar16;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  *pTVar24;
  longlong lVar25;
  FDynamicMeshEditor local_res20;
  IndexIterator local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  FDynamicMeshEditResult local_d8;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  *local_68;
  longlong local_60;
  IndexIterator local_58;
  longlong local_48 [2];
  
  pTVar24 = &param_1->AttributeSet;
  local_68 = pTVar24;
  if (pTVar24->Ptr == (FDynamicMeshAttributeSet *)0x0) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5943927746286584198>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\GeometryMeshConversion.cpp"
                        ,0x186,"Mesh.HasAttributes()");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    iVar11 = (**(code **)(pTVar24->Ptr->_padding_ + 0xa8))();
    iVar12 = NumEnabledUVChannels(param_1);
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
    lVar25 = (longlong)iVar11;
    local_60 = lVar25;
    if ((param_2) && (iVar11 = 0, 0 < lVar25)) {
      lVar22 = 0;
      do {
        pFVar15 = pTVar24->Ptr;
        if ((iVar11 < (pFVar15->UVLayers).Array.ArrayNum) && (-1 < iVar11)) {
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar17 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                     ((pFVar15->UVLayers).Array.AllocatorInstance.Data + lVar22 * 8);
        }
        else {
          pTVar17 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
        }
        SplitOverlayHelper<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,UE::Math::TVector2<float>_>
                  (param_1,pTVar17);
        iVar11 = iVar11 + 1;
        lVar22 = lVar22 + 1;
      } while (lVar22 < lVar25);
    }
    if (param_3) {
      iVar11 = 0;
      lVar22 = 0;
      while( true ) {
        pFVar15 = (FDynamicMeshAttributeSet *)0x0;
        if (pTVar24->Ptr != (FDynamicMeshAttributeSet *)0x0) {
          pFVar15 = pTVar24->Ptr;
        }
        iVar12 = (**(code **)(pFVar15->_padding_ + 0xb8))();
        if (iVar12 <= iVar11) break;
        pFVar15 = pTVar24->Ptr;
        if ((iVar11 < (pFVar15->NormalLayers).Array.ArrayNum) && (-1 < iVar11)) {
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          SplitOverlayHelper<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,UE::Math::TVector<float>_>
                    (param_1,*(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                              ((pFVar15->NormalLayers).Array.AllocatorInstance.Data + lVar22));
          iVar11 = iVar11 + 1;
          lVar22 = lVar22 + 8;
        }
        else {
          SplitOverlayHelper<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,UE::Math::TVector<float>_>
                    (param_1,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0);
          iVar11 = iVar11 + 1;
          lVar22 = lVar22 + 8;
        }
      }
    }
    local_d8.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.NewVertices.ArrayNum = 0;
    local_d8.NewVertices.ArrayMax = 0;
    local_d8.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.NewTriangles.ArrayNum = 0;
    local_d8.NewTriangles.ArrayMax = 0;
    local_d8.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.NewQuads.ArrayNum = 0;
    local_d8.NewQuads.ArrayMax = 0;
    local_d8.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.NewPolygons.ArrayNum = 0;
    local_d8.NewPolygons.ArrayMax = 0;
    local_d8.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.NewGroups.ArrayNum = 0;
    local_d8.NewGroups.ArrayMax = 0;
    local_d8.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.NewNormalOverlayElements.ArrayNum = 0;
    local_d8.NewNormalOverlayElements.ArrayMax = 0;
    local_d8.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.NewColorOverlayElements.ArrayNum = 0;
    local_d8.NewColorOverlayElements.ArrayMax = 0;
    local_res20.Mesh = param_1;
    UE::Geometry::FDynamicMeshEditor::SplitBowties(&local_res20,&local_d8);
    iVar11 = 0;
    if (0 < lVar25) {
      lVar25 = 0;
      do {
        pFVar15 = pTVar24->Ptr;
        if ((iVar11 < (pFVar15->UVLayers).Array.ArrayNum) && (-1 < iVar11)) {
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar22 = *(longlong *)((pFVar15->UVLayers).Array.AllocatorInstance.Data + lVar25 * 8);
        }
        else {
          lVar22 = 0;
        }
        pTVar13 = TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                  ::FindChecked((TMapBase<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>_>
                                 *)&pTVar24->Ptr->GenericAttributes,UVChannelNames[lVar25]);
        pTVar3 = pTVar13->Ptr;
        uVar21 = *(int *)(lVar22 + 8) * 0x200 + *(int *)(lVar22 + 0xc);
        uVar20 = 0;
        if ((uVar21 != 0) &&
           (puVar4 = *(undefined8 **)(lVar22 + 0x10), uVar20 = 0,
           0xfffd < (ushort)(*(short *)*puVar4 - 1U))) {
          uVar19 = 1;
          uVar20 = 1;
          if (1 < (int)uVar21) {
            do {
              pTVar24 = local_68;
              if ((*(short *)(puVar4[uVar19 >> 9] + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
                 (uVar20 = uVar19,
                 *(short *)(puVar4[uVar19 >> 9] + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
              uVar19 = uVar19 + 1;
              uVar20 = uVar19;
            } while ((int)uVar19 < (int)uVar21);
          }
        }
joined_r0x00014c9e6006:
        if (uVar20 != uVar21) {
          while( true ) {
            uVar19 = *(uint *)(*(longlong *)
                                (*(longlong *)(lVar22 + 0x60) + (ulonglong)(uVar20 >> 9) * 8) +
                              (ulonglong)(uVar20 & 0x1ff) * 4);
            if (uVar19 != 0xffffffff) {
              uVar1 = *(undefined4 *)
                       (*(longlong *)
                         (*(longlong *)(lVar22 + 0x48) + (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8
                         ) + (ulonglong)(uVar20 * 2 + 1 & 0x1ff) * 4);
              *(undefined4 *)
               (*(longlong *)(pTVar3[2]._padding_ + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar19 * 2 & 0x1ff) * 4) =
                   *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)(lVar22 + 0x48) + (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8) +
                    (ulonglong)(uVar20 * 2 & 0x1ff) * 4);
              *(undefined4 *)
               (*(longlong *)(pTVar3[2]._padding_ + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar19 * 2 + 1 & 0x1ff) * 4) = uVar1;
            }
            uVar20 = uVar20 + 1;
            if ((int)uVar21 <= (int)uVar20) break;
            while( true ) {
              lVar5 = *(longlong *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)(uVar20 >> 9) * 8);
              if ((*(short *)(lVar5 + (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
                 (*(short *)(lVar5 + (ulonglong)(uVar20 & 0x1ff) * 2) != -1)) break;
              uVar20 = uVar20 + 1;
              if ((int)uVar21 <= (int)uVar20) goto joined_r0x00014c9e6006;
            }
          }
          goto joined_r0x00014c9e6006;
        }
        iVar11 = iVar11 + 1;
        lVar25 = lVar25 + 1;
      } while (lVar25 < local_60);
    }
    pFVar15 = (param_1->AttributeSet).Ptr;
    pFVar16 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar15 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar16 = pFVar15;
    }
    iVar11 = (**(code **)(pFVar16->_padding_ + 0xb8))();
    if (0 < iVar11) {
      pFVar15 = (param_1->AttributeSet).Ptr;
      if ((pFVar15->NormalLayers).Array.ArrayNum < 1) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(longlong *)(pFVar15->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_f8,(FRefCountVector *)(lVar25 + 8),0,
                 *(int *)(lVar25 + 8) * 0x200 + *(int *)(lVar25 + 0xc));
      iVar11 = *(int *)(lVar25 + 8) * 0x200 + *(int *)(lVar25 + 0xc);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_58,(FRefCountVector *)(lVar25 + 8),iVar11,iVar11);
joined_r0x00014c9e6183:
      if (local_f8._8_4_ != local_58._8_4_) {
        uVar20 = *(uint *)(*(longlong *)
                            (*(longlong *)(lVar25 + 0x60) +
                            (ulonglong)((uint)local_f8._8_4_ >> 9) * 8) +
                          (ulonglong)(local_f8._8_4_ & 0x1ff) * 4);
        if (uVar20 != 0xffffffff) {
          lVar22 = *(longlong *)(lVar25 + 0x48);
          uVar21 = local_f8._8_4_ * 3;
          uVar1 = *(undefined4 *)
                   (*(longlong *)(lVar22 + (ulonglong)(uVar21 >> 9) * 8) +
                   (ulonglong)(uVar21 & 0x1ff) * 4);
          uVar2 = *(undefined4 *)
                   (*(longlong *)(lVar22 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                   (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
          local_e8 = CONCAT44(uVar2,uVar1);
          local_e0 = *(undefined4 *)
                      (*(longlong *)(lVar22 + (ulonglong)(uVar21 + 2 >> 9) * 8) +
                      (ulonglong)(uVar21 + 2 & 0x1ff) * 4);
          if ((param_1->VertexNormals).bIsSet != false) {
            local_e8 = CONCAT44(uVar2,uVar1);
            lVar22 = *(longlong *)
                      ((param_1->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar20 >> 9) * 8);
            *(ulonglong *)(lVar22 + (ulonglong)(uVar20 & 0x1ff) * 0xc) = CONCAT44(uVar2,uVar1);
            *(undefined4 *)(lVar22 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc) = local_e0;
          }
        }
        local_f8._8_4_ = local_f8._8_4_ + 1;
        if ((int)local_f8._8_4_ < (int)local_f8._12_4_) {
          do {
            if ((*(short *)(*(longlong *)
                             (*(longlong *)(local_f8._0_8_ + 8) +
                             (ulonglong)((uint)local_f8._8_4_ >> 9) * 8) +
                           (ulonglong)(local_f8._8_4_ & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(local_f8._0_8_ + 8) +
                            (ulonglong)((uint)local_f8._8_4_ >> 9) * 8) +
                          (ulonglong)(local_f8._8_4_ & 0x1ff) * 2) != -1)) break;
            local_f8._8_4_ = local_f8._8_4_ + 1;
          } while ((int)local_f8._8_4_ < (int)local_f8._12_4_);
        }
        goto joined_r0x00014c9e6183;
      }
    }
    pFVar15 = (param_1->AttributeSet).Ptr;
    iVar11 = (pFVar15->NormalLayers).Array.ArrayNum;
    if (((((0 < iVar11) &&
          (pFVar6 = (pFVar15->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar6 != 0))
         && (1 < iVar11)) && ((*(longlong *)(pFVar6 + 8) != 0 && (2 < iVar11)))) &&
       (*(longlong *)(pFVar6 + 0x10) != 0)) {
      pTVar14 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                        *)&((param_1->AttributeSet).Ptr)->GenericAttributes,TangentUAttribName);
      if ((pTVar14 ==
           (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar25 = *(longlong *)&pTVar14->field_0x8;
      pTVar14 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                        *)&((param_1->AttributeSet).Ptr)->GenericAttributes,TangentVAttribName);
      if ((pTVar14 ==
           (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = 1;
      local_48[1] = *(undefined8 *)&pTVar14->field_0x8;
      lVar22 = 8;
      local_48[0] = lVar25;
      do {
        pFVar15 = (param_1->AttributeSet).Ptr;
        if (iVar11 < (pFVar15->NormalLayers).Array.ArrayNum) {
          lVar25 = *(longlong *)((pFVar15->NormalLayers).Array.AllocatorInstance.Data + lVar22);
        }
        else {
          lVar25 = 0;
        }
        uVar23 = 0;
        lVar5 = *(longlong *)((longlong)local_48 + lVar22 + -8);
        uVar20 = *(int *)(lVar25 + 8) * 0x200 + *(int *)(lVar25 + 0xc);
        if ((uVar20 == 0) ||
           (puVar4 = *(undefined8 **)(lVar25 + 0x10), (ushort)(*(short *)*puVar4 - 1U) < 0xfffe)) {
LAB_14c9e6459:
          uVar21 = (uint)uVar23;
        }
        else {
          uVar23 = 1;
          uVar21 = 1;
          if (1 < (int)uVar20) {
            do {
              uVar18 = (ulonglong)((uint)uVar23 & 0x1ff);
              if ((*(short *)(puVar4[uVar23 >> 9] + uVar18 * 2) != 0) &&
                 (*(short *)(puVar4[uVar23 >> 9] + uVar18 * 2) != -1)) break;
              uVar21 = (uint)uVar23 + 1;
              uVar23 = (ulonglong)uVar21;
            } while ((int)uVar21 < (int)uVar20);
            goto LAB_14c9e6459;
          }
        }
joined_r0x00014c9e645c:
        if (uVar21 != uVar20) {
          while( true ) {
            uVar21 = (uint)uVar23;
            iVar12 = *(int *)(*(longlong *)(*(longlong *)(lVar25 + 0x60) + (uVar23 >> 9) * 8) +
                             (ulonglong)(uVar21 & 0x1ff) * 4);
            if (iVar12 != -1) {
              lVar7 = *(longlong *)(lVar25 + 0x48);
              uVar9 = iVar12 * 3;
              uVar19 = uVar21 * 3;
              uVar1 = *(undefined4 *)
                       (*(longlong *)(lVar7 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                       (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
              uVar2 = *(undefined4 *)
                       (*(longlong *)(lVar7 + (ulonglong)(uVar19 + 2 >> 9) * 8) +
                       (ulonglong)(uVar19 + 2 & 0x1ff) * 4);
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar9 >> 9) * 8) +
               (ulonglong)(uVar9 & 0x1ff) * 4) =
                   *(undefined4 *)
                    (*(longlong *)(lVar7 + (ulonglong)(uVar19 >> 9) * 8) +
                    (ulonglong)(uVar19 & 0x1ff) * 4);
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar9 + 1 >> 9) * 8) +
               (ulonglong)(uVar9 + 1 & 0x1ff) * 4) = uVar1;
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar9 + 2 >> 9) * 8) +
               (ulonglong)(uVar9 + 2 & 0x1ff) * 4) = uVar2;
            }
            uVar21 = uVar21 + 1;
            uVar23 = (ulonglong)uVar21;
            if ((int)uVar20 <= (int)uVar21) break;
            while( true ) {
              uVar18 = (ulonglong)((uint)uVar23 & 0x1ff);
              lVar7 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + (uVar23 >> 9) * 8);
              if ((*(short *)(lVar7 + uVar18 * 2) != 0) && (*(short *)(lVar7 + uVar18 * 2) != -1))
              break;
              uVar21 = (uint)uVar23 + 1;
              uVar23 = (ulonglong)uVar21;
              if ((int)uVar20 <= (int)uVar21) goto joined_r0x00014c9e645c;
            }
          }
          goto joined_r0x00014c9e645c;
        }
        iVar11 = iVar11 + 1;
        lVar22 = lVar22 + 8;
      } while (iVar11 < 3);
    }
    if (local_d8.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.NewColorOverlayElements.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_d8.NewNormalOverlayElements.AllocatorInstance.Data,
               local_d8.NewNormalOverlayElements.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)
        local_d8.NewNormalOverlayElements.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_d8.NewNormalOverlayElements.AllocatorInstance.Data);
    }
    if (local_d8.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.NewGroups.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_d8.NewPolygons.AllocatorInstance.Data,local_d8.NewPolygons.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d8.NewPolygons.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_d8.NewPolygons.AllocatorInstance.Data);
    }
    if (local_d8.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.NewQuads.AllocatorInstance.Data);
    }
    if (local_d8.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.NewTriangles.AllocatorInstance.Data);
    }
    if (local_d8.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.NewVertices.AllocatorInstance.Data);
    }
  }
  return;
}

// TextureInternalSurfaces @ 14c9ea5a0

bool __cdecl
UE::PlanarCut::TextureInternalSurfaces
          (int param_1,FGeometryCollection *param_2,int param_3,FIndex4i *param_4,
          FTextureAttributeSettings *param_5,TImageBuilder<UE::Math::TVector4<float>_> *param_6,
          EUseMaterials param_7,TArrayView<int,int> *param_8,FProgressCancel *param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ETargetFaces EVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<int,int> local_48;
  TArrayView<bool,int> local_38;
  FIndex4i_u_0 local_28 [2];
  
  if (param_7 == AllMaterials) {
    EVar6 = AllFaces;
  }
  else {
    EVar6 = CustomFaces;
    if (param_7 == OddMaterials) {
      EVar6 = InternalFaces;
    }
  }
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_48.DataPtr = param_8->DataPtr;
  local_48.ArrayNum = param_8->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_8->field_0xc;
  SetActiveTriangles(param_2,&local_68,true,EVar6,&local_48);
  iStack_50 = local_68.ArrayNum;
  local_58 = local_68.AllocatorInstance.Data;
  if (local_68.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iStack_50;
  local_38.DataPtr = (bool *)local_58;
  local_28[0]._0_8_ = uVar2;
  local_28[0]._8_8_ = uVar3;
  bVar4 = TextureSpecifiedFaces
                    (param_1,param_2,param_3,(FIndex4i *)&local_28[0]._s_0,param_5,param_6,&local_38
                     ,param_9);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar4;
}

// TextureSpecifiedFaces @ 14c9ea6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::PlanarCut::TextureSpecifiedFaces
          (int param_1,FGeometryCollection *param_2,int param_3,FIndex4i *param_4,
          FTextureAttributeSettings *param_5,TImageBuilder<UE::Math::TVector4<float>_> *param_6,
          TArrayView<bool,int> *param_7,FProgressCancel *param_8)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  FImageDimensions FVar4;
  FDynamicMesh3 *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  longlong lVar7;
  long64 lVar8;
  code *pcVar9;
  byte bVar10;
  atomic<unsigned_char> aVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  __m128d _Var24;
  __m128d _Var25;
  __m128d _Var26;
  __m128d _Var27;
  __m128d _Var28;
  __m128d _Var29;
  ForAnyElementType FVar30;
  TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
  TVar31;
  TUniquePtr<UE::Geometry::FImageOccupancyMap,TDefaultDelete<UE::Geometry::FImageOccupancyMap>_>
  TVar32;
  bool bVar33;
  undefined1 uVar34;
  bool bVar35;
  short sVar36;
  int iVar37;
  uint uVar38;
  TArrayView<bool,int> *pTVar39;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar40;
  TDynamicMeshOverlay<float,2> *this;
  TTuple<int,int> *pTVar41;
  long64 lVar42;
  FText *pFVar43;
  FMeshShapeGenerator *pFVar44;
  longlong lVar45;
  TVector<float> *pTVar46;
  TVector4<float> *pTVar47;
  uint uVar48;
  bool *pbVar49;
  FDynamicMeshAttributeSet *pFVar50;
  undefined ***pppuVar51;
  bool *pbVar52;
  ulonglong uVar53;
  uint uVar54;
  int *piVar55;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar56;
  ulong64 uVar57;
  ForAnyElementType FVar58;
  int iVar59;
  ulong64 uVar60;
  FTextureAttributeSettings *pFVar61;
  ForAnyElementType FVar62;
  longlong lVar63;
  ulonglong uVar64;
  FProgressCancel *this_00;
  FScriptContainerElement *pFVar65;
  int iVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  undefined1 auVar73 [16];
  float fVar74;
  undefined8 uVar75;
  double dVar76;
  double dVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  double dVar80;
  undefined1 auStackY_1228 [32];
  <lambda_1> local_11d8 [4];
  uint local_11d4;
  uint local_11d0;
  uint local_11cc;
  int local_11c8;
  undefined4 local_11c4;
  uint local_11c0;
  ForAnyElementType local_11b8;
  undefined8 local_11b0;
  undefined1 local_11a7 [3];
  float local_11a4;
  TImageBuilder<UE::Math::TVector4<float>_> *local_11a0;
  TArray<float,TSizedDefaultAllocator<64>_> local_1198;
  int local_1180;
  undefined4 local_117c;
  undefined4 local_1178;
  undefined4 local_1174;
  FTextureAttributeSettings *local_1170;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1168;
  IndexIterator local_1158;
  undefined4 local_1148;
  undefined4 local_1144;
  undefined4 local_1140;
  undefined4 local_113c;
  double local_1138;
  FProgressCancel *local_1130;
  FDynamicMeshCollection local_1128;
  TArray<float,TSizedDefaultAllocator<64>_> local_10d8;
  FGeomFlatUVMesh local_10c0;
  undefined8 local_1098;
  int local_1090;
  int iStack_108c;
  longlong local_1088;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1080;
  BaseIterator local_1070;
  double local_1060;
  double local_1058;
  double dStack_1050;
  TImageBuilder<UE::Math::TVector4<float>_> *local_1048;
  FImageOccupancyMap *local_1040;
  FDynamicMesh3 *local_1038;
  FImageDimensions local_1030;
  double local_1028;
  double dStack_1020;
  ulong64 local_1018;
  FGeomMesh local_1008;
  FMeshOcclusionMapBaker local_fa8;
  FGeomMesh local_f48;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_ee8;
  TArrayView<int_const_,int> local_eb0;
  IndexIterator local_ea0;
  IndexIterator local_e90;
  code *local_e80;
  double *local_e78;
  code *local_e70;
  FTextureAttributeSettings **local_e68;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined4 uStack_e40;
  uint uStack_e3c;
  FMeshCurvatureMapBaker local_e38;
  FImageOccupancyMap local_dd8;
  TVector<double>_u_0 local_cf8;
  double local_ce0;
  double local_cd8;
  double local_cd0;
  TVector<double>_u_0 local_cc8;
  double dStack_cb0;
  double local_ca8;
  double dStack_ca0;
  FTextureAttributeSettings *local_c98;
  TImageBuilder<UE::Math::TVector4<float>_> *local_c90;
  FGeomFlatUVMesh *local_c88;
  FImageOccupancyMap *local_c80;
  FGeomMesh *local_c78;
  undefined1 *local_c70;
  undefined4 *local_c68;
  uint *local_c60;
  undefined4 *local_c58;
  undefined4 *local_c50;
  undefined4 *local_c48;
  undefined4 *local_c40;
  undefined4 *local_c38;
  undefined4 *local_c30;
  FText local_c28;
  FText local_c18;
  TArrayView<int,int> local_c08;
  FText local_bf8;
  double local_be8;
  double dStack_be0;
  FProgressScope local_bd8;
  FProgressScope local_ba8;
  FProgressScope local_b78;
  TTransform<double> local_b48;
  TArrayView<bool,int> local_ae8;
  FDynamicMesh3 local_ad8;
  undefined1 local_8a8 [48];
  undefined **local_878;
  code *local_870;
  undefined ***local_860;
  double local_858;
  TDynamicVector<int,512> local_850;
  TDynamicVector<UE::Math::TVector<double>,512> local_838;
  TDynamicVector<UE::Math::TVector<double>,512> local_820;
  TDynamicVector<int,512> local_808;
  undefined8 local_7f0;
  undefined1 local_7e8 [48];
  undefined **local_7b8;
  code *local_7b0;
  undefined ***local_7a0;
  double local_798;
  TDynamicVector<int,512> local_790;
  TDynamicVector<UE::Math::TVector<double>,512> local_778;
  TDynamicVector<UE::Math::TVector<double>,512> local_760;
  TDynamicVector<int,512> local_748;
  undefined8 local_730;
  undefined1 local_728 [48];
  undefined **local_6f8;
  code *local_6f0;
  undefined ***local_6e0;
  double local_6d8;
  TDynamicVector<int,512> local_6d0;
  TDynamicVector<UE::Math::TVector<double>,512> local_6b8;
  TDynamicVector<UE::Math::TVector<double>,512> local_6a0;
  TDynamicVector<int,512> local_688;
  undefined8 local_670;
  undefined1 local_668 [48];
  undefined **local_638;
  code *local_630;
  undefined8 local_620;
  double local_618;
  TDynamicVector<int,512> local_610;
  TDynamicVector<UE::Math::TVector<double>,512> local_5f8;
  TDynamicVector<UE::Math::TVector<double>,512> local_5e0;
  TDynamicVector<int,512> local_5c8;
  undefined8 local_5b0;
  undefined1 local_5a8 [16];
  undefined **local_598;
  code *local_590;
  undefined ***local_580;
  FDynamicMesh3 *local_578;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTStack_570;
  FDynamicMesh3 *local_568;
  int local_560;
  undefined8 local_55c;
  double local_550;
  ECorrespondenceStrategy local_548;
  int local_544;
  ForAnyElementType local_540;
  long64 local_538;
  long64 lStack_530;
  long64 local_528;
  long64 lStack_520;
  bool local_518;
  TUniquePtr<UE::Geometry::FImageOccupancyMap,TDefaultDelete<UE::Geometry::FImageOccupancyMap>_>
  local_510;
  bool local_508;
  undefined1 local_4f8 [16];
  undefined **local_4e8;
  code *local_4e0;
  undefined ***local_4d0;
  FDynamicMesh3 *local_4c8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTStack_4c0;
  FDynamicMesh3 *local_4b8;
  int local_4b0;
  undefined8 local_4ac;
  double local_4a0;
  ECorrespondenceStrategy local_498;
  int local_494;
  ForAnyElementType local_490;
  long64 local_488;
  long64 lStack_480;
  long64 local_478;
  long64 lStack_470;
  bool local_468;
  TUniquePtr<UE::Geometry::FImageOccupancyMap,TDefaultDelete<UE::Geometry::FImageOccupancyMap>_>
  local_460;
  bool local_458;
  undefined1 local_448 [128];
  undefined **local_3c8;
  code *local_3c0;
  undefined ***local_3b0;
  FMarchingCubes local_3a8;
  ulonglong local_f8;
  undefined8 local_48;
  
  local_48 = 0x14c9ea70f;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_1228;
  iVar59 = 0;
  pbVar49 = param_7->DataPtr;
  pbVar52 = pbVar49 + param_7->ArrayNum;
  local_1130 = param_8;
  local_1170 = param_5;
  local_11a0 = param_6;
  for (; pbVar49 != pbVar52; pbVar49 = pbVar49 + 1) {
    iVar59 = iVar59 + (uint)(*pbVar49 != false);
  }
  local_10c0.ActiveTriangles.DataPtr = param_7->DataPtr;
  local_10c0.ActiveTriangles.ArrayNum = param_7->ArrayNum;
  local_10c0.ActiveTriangles._12_4_ = *(undefined4 *)&param_7->field_0xc;
  local_11d4 = param_1;
  local_1180 = param_3;
  local_10c0.Collection = param_2;
  local_10c0.NumTriangles = iVar59;
  local_10c0.UVLayer = param_1;
  local_10c0.CollectionUVs =
       FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                 ((FManagedArrayCollection *)param_2,GeometryCollection::UV::UVLayerNames[param_1],
                  GeometryCollection::UV::VerticesGroupName);
  if ((local_10c0.UVLayer < 0) ||
     (iVar37 = FGeometryCollection::NumUVLayers(local_10c0.Collection), iVar37 <= local_10c0.UVLayer
     )) {
    bVar33 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3583510206845288826>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                        ,0x17a,"UVLayer >= 0 && UVLayer < Collection->NumUVLayers()");
    if (bVar33) {
      pcVar9 = (code *)swi(3);
      uVar34 = (*pcVar9)();
      return (bool)uVar34;
    }
    iVar37 = FGeometryCollection::NumUVLayers(local_10c0.Collection);
    if (local_10c0.UVLayer < iVar37) {
      iVar37 = local_10c0.UVLayer;
    }
    local_10c0.UVLayer = 0;
    if (0 < iVar37) {
      local_10c0.UVLayer = iVar37;
    }
    local_10c0.CollectionUVs =
         FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                   ((FManagedArrayCollection *)local_10c0.Collection,
                    GeometryCollection::UV::UVLayerNames[local_10c0.UVLayer],
                    GeometryCollection::UV::VerticesGroupName);
  }
  if ((local_10c0.CollectionUVs == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("CollectionUVs",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                          ,0x17f,L""), bVar33)) {
    pcVar9 = (code *)swi(3);
    uVar34 = (*pcVar9)();
    return (bool)uVar34;
  }
  FVar4 = param_6->Dimensions;
  local_dd8.TexelType.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.TexelType.ArrayNum = 0;
  local_dd8.TexelType.ArrayMax = 0;
  local_dd8.TexelInteriorSamples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.TexelInteriorSamples.ArrayNum = 0;
  local_dd8.TexelInteriorSamples.ArrayMax = 0;
  local_dd8.TexelQueryUV.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.TexelQueryUV.ArrayNum = 0;
  local_dd8.TexelQueryUV.ArrayMax = 0;
  local_dd8.TexelQueryTriangle.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.TexelQueryTriangle.ArrayNum = 0;
  local_dd8.TexelQueryTriangle.ArrayMax = 0;
  local_dd8.TexelQueryUVChart.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.TexelQueryUVChart.ArrayNum = 0;
  local_dd8.TexelQueryUVChart.ArrayMax = 0;
  local_dd8.BorderTexels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.BorderTexels.ArrayNum = 0;
  local_dd8.BorderTexels.ArrayMax = 0;
  local_dd8.GutterTexels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd8.GutterTexels.ArrayNum = 0;
  local_dd8.GutterTexels.ArrayMax = 0;
  local_dd8.bParallel = true;
  iVar66 = FVar4.Height;
  iVar37 = FVar4.Width;
  local_dd8.GutterSize = param_3;
  if ((iVar37 != iVar66) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("DimensionsIn.IsSquare()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageOccupancyMap.h"
                          ,100,L""), bVar33)) {
    pcVar9 = (code *)swi(3);
    uVar34 = (*pcVar9)();
    return (bool)uVar34;
  }
  local_dd8.Tile.Start.field0_0x0 = (FVector2i_u_0)0x0;
  local_1098 = 0;
  local_dd8.PixelSampler.Size = (int)ROUND(__real_3fc00000) >> 1;
  local_1090 = iVar37;
  iStack_108c = iVar66;
  local_dd8.Dimensions = FVar4;
  local_dd8.Tile.End.field0_0x0 = (FVector2i_u_0)FVar4;
  local_dd8.Tile.Width = iVar37;
  local_dd8.Tile.Height = iVar66;
  UE::Geometry::FImageOccupancyMap::
  ClassifySamplesFromUVSpaceMesh<UE::PlanarCut::FGeomFlatUVMesh,_UE::PlanarCut::TextureSpecifiedFaces_::__l2::<lambda_1>_>
            (&local_dd8,&local_10c0,local_11d8[0],(TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
  UE::Geometry::FImageOccupancyMap::ComputeGutterTexelsFromGutterSamples(&local_dd8);
  local_1008.ActiveTriangles.DataPtr = param_7->DataPtr;
  local_1008.ActiveTriangles.ArrayNum = param_7->ArrayNum;
  local_1008.ActiveTriangles._12_4_ = *(undefined4 *)&param_7->field_0xc;
  local_1008._padding_ = (longlong)&___7FGeomMesh_PlanarCut_UE__6B_;
  local_1008.GlobalVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1008.GlobalVertices.ArrayNum = 0;
  local_1008.GlobalVertices.ArrayMax = 0;
  local_1008.GlobalNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1008.GlobalNormals.ArrayNum = 0;
  local_1008.GlobalNormals.ArrayMax = 0;
  local_1008.Collection = param_2;
  local_1008.NumTriangles = iVar59;
  local_1008.UVLayer = param_1;
  local_1008.CollectionUVs =
       FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                 ((FManagedArrayCollection *)param_2,GeometryCollection::UV::UVLayerNames[param_1],
                  GeometryCollection::UV::VerticesGroupName);
  FGeomMesh::ValidateUVLayer(&local_1008);
  FGeomMesh::InitVertices(&local_1008);
  local_e48 = 0;
  uStack_e40 = 0;
  local_c08._8_8_ = (ulonglong)uStack_e3c << 0x20;
  local_c08.DataPtr = (int *)0x0;
  local_1080.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1080.ArrayNum = 0;
  local_1080.ArrayMax = 0;
  iVar59 = SetActiveTriangles(param_2,&local_1080,true,ExternalFaces,&local_c08);
  pTVar39 = TArrayView<bool,int>::
            TArrayView<bool,int><TArray<bool,TSizedDefaultAllocator<32>_>_&,TArray<bool,TSizedDefaultAllocator<32>_>_>
                      (&local_ae8,&local_1080);
  local_f48.ActiveTriangles.DataPtr = pTVar39->DataPtr;
  local_f48.ActiveTriangles.ArrayNum = pTVar39->ArrayNum;
  local_f48.ActiveTriangles._12_4_ = *(undefined4 *)&pTVar39->field_0xc;
  local_f48.UVLayer = local_1008.UVLayer;
  local_f48._padding_ = (longlong)&___7FGeomMesh_PlanarCut_UE__6B_;
  local_f48.Collection = local_1008.Collection;
  local_f48.GlobalVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f48.GlobalVertices.ArrayNum = 0;
  local_f48.GlobalVertices.ArrayMax = 0;
  local_f48.GlobalNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f48.GlobalNormals.ArrayNum = 0;
  local_f48.GlobalNormals.ArrayMax = 0;
  local_f48.NumTriangles = iVar59;
  local_f48.CollectionUVs =
       FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                 ((FManagedArrayCollection *)local_1008.Collection,
                  GeometryCollection::UV::UVLayerNames[local_1008.UVLayer],
                  GeometryCollection::UV::VerticesGroupName);
  FGeomMesh::ValidateUVLayer(&local_f48);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&local_f48.GlobalVertices,&local_1008.GlobalVertices);
  dVar80 = __real_3e45798ee2308c3a;
  local_668._0_8_ = &___7__TMeshAABBTree3_UFGeomMesh_PlanarCut_UE___Geometry_UE__6B_;
  local_1138 = __real_3e45798ee2308c3a;
  local_638 = &
              ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_618 = __real_3e45798ee2308c3a;
  local_630 = `UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::MakeDefaultSplitAxisFunc'::
              __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_668._32_8_ =
       Core::Private::Function::
       TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_668._16_8_ = 0;
  local_668._24_4_ = 3;
  local_620 = 0;
  local_610.CurBlock = 0;
  local_610.CurBlockUsed = 0;
  local_610.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_610.Blocks.ArrayNum = 0;
  local_610.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_610);
  local_5f8.CurBlock = 0;
  local_5f8.CurBlockUsed = 0;
  local_5f8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5f8.Blocks.ArrayNum = 0;
  local_5f8.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_5f8);
  local_5e0.CurBlock = 0;
  local_5e0.CurBlockUsed = 0;
  local_5e0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e0.Blocks.ArrayNum = 0;
  local_5e0.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_5e0);
  local_5c8.CurBlock = 0;
  local_5c8.CurBlockUsed = 0;
  local_5c8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c8.Blocks.ArrayNum = 0;
  local_5c8.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_5c8);
  local_668._8_8_ = &local_f48;
  local_5b0._0_4_ = -1;
  local_5b0._4_4_ = -1;
  local_668._16_8_ = 0;
  UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::BuildTopDown
            ((TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *)local_668,false);
  iVar59 = (param_4->field0_0x0)._s_0.A;
  local_668._16_8_ = 1;
  if (iVar59 == 1) {
    local_117c = 0;
LAB_14c9eacaf:
    iVar37 = (param_4->field0_0x0)._s_0.B;
    if (iVar37 == 2) {
      local_11d0 = 1;
    }
    else if ((param_4->field0_0x0)._s_0.C == 2) {
      local_11d0 = 2;
    }
    else {
      local_11d0 = 0xffffffff;
      if ((param_4->field0_0x0)._s_0.D == 2) {
        local_11d0 = 3;
      }
    }
    if (iVar59 != 3) goto LAB_14c9eacfa;
    local_11cc = 0;
LAB_14c9ead3e:
    if (iVar37 == 4) {
      local_1178 = 1;
    }
    else if ((param_4->field0_0x0)._s_0.C == 4) {
      local_1178 = 2;
    }
    else {
      local_1178 = 0xffffffff;
      if ((param_4->field0_0x0)._s_0.D == 4) {
        local_1178 = 3;
      }
    }
    if (iVar59 != 5) goto LAB_14c9ead7a;
    local_1174 = 0;
LAB_14c9eadb2:
    if (iVar37 == 6) {
      local_1148 = 1;
    }
    else if ((param_4->field0_0x0)._s_0.C == 6) {
      local_1148 = 2;
    }
    else {
      local_1148 = 0xffffffff;
      if ((param_4->field0_0x0)._s_0.D == 6) {
        local_1148 = 3;
      }
    }
  }
  else {
    iVar37 = (param_4->field0_0x0)._s_0.B;
    if (iVar37 == 1) {
      local_117c = 1;
    }
    else if ((param_4->field0_0x0)._s_0.C == 1) {
      local_117c = 2;
    }
    else {
      local_117c = 0xffffffff;
      if ((param_4->field0_0x0)._s_0.D == 1) {
        local_117c = 3;
      }
    }
    if (iVar59 != 2) goto LAB_14c9eacaf;
    local_11d0 = 0;
LAB_14c9eacfa:
    if (iVar37 == 3) {
      local_11cc = 1;
    }
    else if ((param_4->field0_0x0)._s_0.C == 3) {
      local_11cc = 2;
    }
    else {
      local_11cc = 0xffffffff;
      if ((param_4->field0_0x0)._s_0.D == 3) {
        local_11cc = 3;
      }
    }
    if (iVar59 != 4) goto LAB_14c9ead3e;
    local_1178 = 0;
LAB_14c9ead7a:
    if (iVar37 == 5) {
      local_1174 = 1;
    }
    else if ((param_4->field0_0x0)._s_0.C == 5) {
      local_1174 = 2;
    }
    else {
      local_1174 = 0xffffffff;
      if ((param_4->field0_0x0)._s_0.D == 5) {
        local_1174 = 3;
      }
    }
    if (iVar59 != 6) goto LAB_14c9eadb2;
    local_1148 = 0;
  }
  uVar48 = local_11cc;
  piVar55 = &(param_4->field0_0x0)._s_0.C;
  UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBoundingBox
            ((TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *)local_668,
             (TAxisAlignedBox3<double> *)&local_cf8._s_0);
  dVar77 = local_ce0 - local_cf8._s_0.X;
  if (local_ce0 - local_cf8._s_0.X <= 0.0) {
    dVar77 = 0.0;
  }
  if (dVar77 <= 0.0) {
    local_1144 = 0xffffffff;
  }
  else if (iVar59 == 7) {
    local_1144 = 0;
  }
  else if (iVar37 == 7) {
    local_1144 = 1;
  }
  else if (*piVar55 == 7) {
    local_1144 = 2;
  }
  else {
    local_1144 = 0xffffffff;
    if ((param_4->field0_0x0)._s_0.D == 7) {
      local_1144 = 3;
    }
  }
  dVar77 = local_cd8 - local_cf8._s_0.Y;
  if (local_cd8 - local_cf8._s_0.Y <= 0.0) {
    dVar77 = 0.0;
  }
  if (dVar77 <= 0.0) {
    local_1140 = 0xffffffff;
  }
  else if (iVar59 == 8) {
    local_1140 = 0;
  }
  else if (iVar37 == 8) {
    local_1140 = 1;
  }
  else if (*piVar55 == 8) {
    local_1140 = 2;
  }
  else {
    local_1140 = 0xffffffff;
    if ((param_4->field0_0x0)._s_0.D == 8) {
      local_1140 = 3;
    }
  }
  local_cd0 = local_cd0 - local_cf8._s_0.Z;
  if (local_cd0 <= 0.0) {
    local_cd0 = 0.0;
  }
  if (local_cd0 <= 0.0) {
    local_113c = 0xffffffff;
  }
  else if (iVar59 == 9) {
    local_113c = 0;
  }
  else if (iVar37 == 9) {
    local_113c = 1;
  }
  else if (*piVar55 == 9) {
    local_113c = 2;
  }
  else {
    local_113c = 0xffffffff;
    if ((param_4->field0_0x0)._s_0.D == 9) {
      local_113c = 3;
    }
  }
  if ((local_11d0 < 0x80000000) || (uVar48 < 0x80000000)) {
    uVar38 = 0;
    local_11b8.Data = (FScriptContainerElement *)0x0;
    local_11b0 = 0;
    bVar33 = true;
    iVar59 = (**(code **)(*(longlong *)&param_2->TransformIndex + 0x60))(&param_2->TransformIndex);
    if (0 < iVar59) {
      lVar45 = 0;
      do {
        uVar54 = 0;
        if ((int)uVar38 < *(int *)&(param_2->TransformIndex).field_0x18) {
          uVar54 = ~uVar38 >> 0x1f;
        }
        if ((uVar54 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar9 = (code *)swi(3);
          uVar34 = (*pcVar9)();
          return (bool)uVar34;
        }
        local_11c8 = *(int *)(lVar45 + *(longlong *)&(param_2->TransformIndex).field_0x10);
        bVar35 = FGeometryCollection::IsVisible(param_2,local_11c8);
        if (bVar35) {
          if (((local_11b8.Data <= (FScriptContainerElement *)&local_11c8) &&
              ((FScriptContainerElement *)&local_11c8 <
               local_11b8.Data + (longlong)local_11b0._4_4_ * 4)) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar35)) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
          iVar59 = (int)local_11b0;
          if ((int)local_11b0 == local_11b0._4_4_) {
            iVar59 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_11b8,(int *)((longlong)&local_11b0 + 4));
          }
          local_11b0 = CONCAT44(local_11b0._4_4_,iVar59 + 1);
          *(int *)(local_11b8.Data + (longlong)iVar59 * 4) = local_11c8;
        }
        uVar38 = uVar38 + 1;
        lVar45 = lVar45 + 4;
        iVar59 = (**(code **)(*(longlong *)&param_2->TransformIndex + 0x60))
                           (&param_2->TransformIndex);
      } while ((int)uVar38 < iVar59);
    }
  }
  else {
    bVar33 = false;
    local_11b8.Data = (FScriptContainerElement *)0x0;
    local_11b0 = 0;
  }
  _Var29.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var28.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var27.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var26.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var25.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var24.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  uVar64 = 0;
  iVar59 = (int)local_11b0;
  local_11a4 = 0.0;
  fVar74 = ((float)(~uVar48 >> 0x1f) * __real_41200000 + (float)(local_11d0 < 0x80000000)) *
           (float)(int)local_11b0;
  if (0.0 < fVar74) {
    local_11a4 = __real_3f666666 / fVar74;
  }
  local_1128.Bounds.Min.field0_0x0._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_1128.Bounds.Min.field0_0x0._s_0.Y = _UNK_150a9e648;
  local_1128.Meshes.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1128.Meshes.Array.ArrayNum = 0;
  local_1128.Meshes.Array.ArrayMax = 0;
  local_1128.bSkipInvisible = false;
  local_1128.bComponentSpaceTransforms = false;
  local_1128.bGenerateMeshToCollectionFaceMapping = true;
  local_eb0.DataPtr = (int *)local_11b8.Data;
  local_1058 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dStack_1050 = _UNK_150a9e648;
  local_be8 = ___xmm_ffefffffffffffff7fefffffffffffff;
  dStack_be0 = _UNK_150a9e6d8;
  local_1128.Bounds.Min.field0_0x0._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_1128.Bounds.Max.field0_0x0._s_0.X = _UNK_150a9e6d8;
  local_1128.Bounds.Max.field0_0x0._s_0.Y = ___xmm_ffefffffffffffffffefffffffffffff;
  local_1128.Bounds.Max.field0_0x0._s_0.Z = _UNK_1508ffb58;
  local_1028 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_1020 = _UNK_1508ffb58;
  if (((int)local_11b0 < 0) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar35)) {
    pcVar9 = (code *)swi(3);
    uVar34 = (*pcVar9)();
    return (bool)uVar34;
  }
  local_eb0.ArrayNum = iVar59;
  local_b48.Rotation.XY.m128d_f64 = _Var24.m128d_f64;
  local_b48.Rotation.ZW.m128d_f64 = _Var25.m128d_f64;
  local_b48.Translation.XY.m128d_f64 = _Var26.m128d_f64;
  local_b48.Translation.ZW.m128d_f64 = _Var27.m128d_f64;
  local_b48.Scale3D.XY.m128d_f64 = _Var28.m128d_f64;
  local_b48.Scale3D.ZW.m128d_f64 = _Var29.m128d_f64;
  FDynamicMeshCollection::Init
            (&local_1128,param_2,(TManagedArray<UE::Math::TTransform<float>_> *)&param_2->_padding_,
             &local_eb0,&local_b48,false);
  if ((bVar33) && (local_11c0 = 0, uVar53 = uVar64, 0 < local_1128.Meshes.Array.ArrayNum)) {
    do {
      uVar38 = (uint)uVar53;
      uVar48 = 0;
      if ((int)uVar38 < local_1128.Meshes.Array.ArrayNum) {
        uVar48 = ~uVar38 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar9 = (code *)swi(3);
        uVar34 = (*pcVar9)();
        return (bool)uVar34;
      }
      pFVar5 = *(FDynamicMesh3 **)(local_1128.Meshes.Array.AllocatorInstance.Data + uVar64);
      pFVar6 = (pFVar5->AttributeSet).Ptr;
      pFVar50 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar50 = pFVar6;
      }
      pTVar40 = UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar50,0);
      UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals(pTVar40,true);
      AugmentedDynamicMesh::InitializeOverlayToPerVertexUVs(pFVar5,1,local_11d4);
      pFVar6 = (pFVar5->AttributeSet).Ptr;
      pFVar50 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar50 = pFVar6;
      }
      this = (TDynamicMeshOverlay<float,2> *)
             UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer(pFVar50,0);
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&local_1070,&pFVar5->TriangleRefCounts,0,
                 (pFVar5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar5->TriangleRefCounts).RefCounts.CurBlockUsed);
      iVar59 = (pFVar5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar5->TriangleRefCounts).RefCounts.CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_ea0,&pFVar5->TriangleRefCounts,iVar59,iVar59);
      if (local_1070.Index != local_ea0._8_4_) {
        do {
          iVar59 = local_1070.Index;
          pTVar41 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)&pFVar5[1].VertexUVs.TypedValue.Blocks.ArrayNum,iVar59);
          if (pTVar41 == (TTuple<int,int> *)0x0) {
LAB_14c9eb3c5:
            bVar33 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3583510206845289373>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                                ,0x39d,
                                "CollectionFaceIndex != INDEX_NONE && ToTextureTriangles.IsValidIndex(CollectionFaceIndex)"
                               );
            if (bVar33) {
              pcVar9 = (code *)swi(3);
              uVar34 = (*pcVar9)();
              return (bool)uVar34;
            }
          }
          else {
            iVar37 = *(int *)&pTVar41->field_0x4;
            if ((iVar37 < 0) || (param_7->ArrayNum <= iVar37)) goto LAB_14c9eb3c5;
            if ((iVar37 < 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar33)) {
              pcVar9 = (code *)swi(3);
              uVar34 = (*pcVar9)();
              return (bool)uVar34;
            }
            if (param_7->DataPtr[iVar37] == false) {
              UE::Geometry::TDynamicMeshOverlay<float,2>::UnsetTriangle(this,iVar59,true);
            }
          }
          UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_1070);
          uVar38 = local_11c0;
        } while (local_1070.Index != local_ea0._8_4_);
      }
      local_11c0 = uVar38 + 1;
      uVar64 = uVar64 + 8;
      uVar53 = (ulonglong)local_11c0;
    } while ((int)local_11c0 < local_1128.Meshes.Array.ArrayNum);
  }
  this_00 = local_1130;
  iVar59 = local_1128.Meshes.Array.ArrayNum;
  if (local_1130 != (FProgressCancel *)0x0) {
    bVar33 = FProgressCancel::Cancelled(local_1130);
    if (bVar33) {
      bVar33 = false;
      goto LAB_14c9ed04d;
    }
    iVar59 = local_1128.Meshes.Array.ArrayNum;
  }
  pFVar61 = local_1170;
  pTVar56 = local_11a0;
  dVar77 = __real_7fefffffffffffff;
  uVar78 = SUB84(__real_4008000000000000,0);
  uVar79 = (undefined4)((ulonglong)__real_4008000000000000 >> 0x20);
  local_10d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10d8.ArrayNum = 0;
  local_10d8.ArrayMax = 0;
  if (-1 < (int)local_11cc) {
    local_1030 = local_11a0->Dimensions;
    uVar48 = local_1170->Curvature_VoxelRes;
    if (local_1170->Curvature_VoxelRes < 8) {
      uVar48 = 8;
    }
    uVar60 = (longlong)local_1030.Height * (longlong)local_1030.Width;
    local_11c0 = uVar48;
    local_1018 = uVar60;
    if ((longlong)uVar60 < 1) {
      if ((longlong)uVar60 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar60);
      }
    }
    else {
      lVar42 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                         (4,4,uVar60,&local_10d8.AllocatorInstance,&local_10d8.ArrayNum,
                          &local_10d8.ArrayMax);
      memset(local_10d8.AllocatorInstance.Data + lVar42 * 4,0,uVar60 * 4);
      iVar59 = local_1128.Meshes.Array.ArrayNum;
    }
    dVar23 = _UNK_1528d8ae8;
    dVar22 = ___xmm_3ff0000000000000ffefffffffffffff;
    dVar21 = __real_ffefffffffffffff;
    dVar20 = _UNK_150689518;
    dVar19 = ___xmm_00000000000000003ff0000000000000;
    dVar18 = __real_4000000000000000;
    dVar17 = __real_3fe0000000000000;
    dVar16 = __real_3f847ae147ae147b;
    local_11d4 = 0;
    if (0 < iVar59) {
      local_1088 = 0;
      do {
        lVar45 = local_1088;
        uVar38 = local_11d4;
        dVar80 = __real_3ff0000000000000;
        if (this_00 != (FProgressCancel *)0x0) {
          if (this_00->WasCancelled == false) {
            bVar33 = Core::Private::Function::
                     TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                     ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                                   *)&this_00->CancelF);
            this_00->WasCancelled = bVar33;
            if (!bVar33) goto LAB_14c9eb590;
          }
          bVar33 = false;
          goto LAB_14c9ed03f;
        }
LAB_14c9eb590:
        pFVar43 = FText::FText(&local_bf8);
        FProgressCancel::FProgressScope::FProgressScope
                  (&local_bd8,this_00,local_11a4 * __real_41200000,pFVar43);
        if (local_bf8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_bf8.TextData.Reference + 0x10))();
        }
        uVar54 = 0;
        if ((int)uVar38 < local_1128.Meshes.Array.ArrayNum) {
          uVar54 = ~uVar38 >> 0x1f;
        }
        if (uVar54 == 0) {
          bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar33) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
        }
        uVar54 = 0;
        if ((int)uVar38 < local_1128.Meshes.Array.ArrayNum) {
          uVar54 = ~uVar38 >> 0x1f;
        }
        if ((uVar54 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar9 = (code *)swi(3);
          uVar34 = (*pcVar9)();
          return (bool)uVar34;
        }
        pFVar5 = *(FDynamicMesh3 **)(local_1128.Meshes.Array.AllocatorInstance.Data + lVar45 * 8);
        local_8a8._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        local_858 = local_1138;
        local_878 = &
                    ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        local_870 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                    MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
        local_8a8._32_8_ =
             Core::Private::Function::
             TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
             ::Call;
        local_8a8._16_8_ = 0;
        local_8a8._24_4_ = 3;
        local_860 = (undefined ***)0x0;
        local_850.CurBlock = 0;
        local_850.CurBlockUsed = 0;
        local_850.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_850.Blocks.ArrayNum = 0;
        local_850.Blocks.ArrayMax = 0;
        local_1038 = pFVar5;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_850);
        local_838.CurBlock = 0;
        local_838.CurBlockUsed = 0;
        local_838.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_838.Blocks.ArrayNum = 0;
        local_838.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_838);
        local_820.CurBlock = 0;
        local_820.CurBlockUsed = 0;
        local_820.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_820.Blocks.ArrayNum = 0;
        local_820.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_820);
        local_808.CurBlock = 0;
        local_808.CurBlockUsed = 0;
        local_808.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_808.Blocks.ArrayNum = 0;
        local_808.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_808);
        local_7f0 = -1;
        local_8a8._16_8_ = 0;
        local_8a8._8_8_ = pFVar5;
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                  ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_8a8,false);
        local_8a8._16_8_ =
             UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_8a8._8_8_);
        local_ee8.Tree = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_8a8;
        local_ee8.FWNBeta = dVar18;
        local_ee8.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_ee8.FastWindingCache.ArrayNum = 0;
        local_ee8.FastWindingCache.ArrayMax = 0;
        local_ee8.FastWindingCacheOffset = 0;
        local_ee8.FastWindingCacheMeshChangeStamp = 0;
        local_ee8.FWNApproxOrder = 2;
        UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(&local_ee8,true);
        if (local_7f0 < 0) {
          bVar33 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2828200105734045879>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                              ,0xb7,"RootIndex >= 0");
          if (bVar33) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
          local_cc8._s_0.X = local_1058;
          local_cc8._s_0.Y = dStack_1050;
          local_ca8 = local_1028;
          dStack_ca0 = dStack_1020;
          local_cc8._s_0.Z = local_be8;
          dStack_cb0 = dStack_be0;
          uVar75 = dVar77;
        }
        else {
          UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox
                    ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_8a8,
                     (TAxisAlignedBox3<double> *)&local_cc8._s_0,local_7f0._4_4_);
          uVar75 = local_cc8._s_0.X;
        }
        dVar70 = dStack_ca0 - local_cc8._s_0.Z;
        local_448._24_8_ = dVar17;
        local_448._8_8_ = local_8a8;
        dVar67 = dStack_cb0 - (double)uVar75;
        local_448._16_8_ = &local_ee8;
        dVar12 = local_ca8 - local_cc8._s_0.Y;
        if (local_ca8 - local_cc8._s_0.Y <= 0.0) {
          dVar12 = 0.0;
        }
        if (dVar70 <= 0.0) {
          dVar70 = 0.0;
        }
        local_448._104_8_ = dVar80;
        if (dVar67 <= 0.0) {
          dVar67 = 0.0;
        }
        local_3c8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
        local_448[0x20] = false;
        local_3c0 = UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::<lambda_38_>::
                    <lambda_invoker_cdecl>;
        if (dVar12 <= dVar70) {
          dVar12 = dVar70;
        }
        local_448._80_8_ = dVar22;
        local_448._88_8_ = dVar23;
        local_448[0x60] = true;
        local_448._100_4_ = 4;
        local_3b0 = (undefined ***)0x0;
        local_448._112_8_ =
             Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
        if (dVar12 <= dVar67) {
          dVar12 = dVar67;
        }
        local_448._48_8_ = local_1058;
        local_448._56_8_ = dStack_1050;
        local_448._64_8_ = local_1028;
        local_448._72_8_ = dStack_1020;
        local_448._0_8_ = pFVar5;
        local_448._40_8_ = dVar77;
        UE::Geometry::FMarchingCubes::FMarchingCubes(&local_3a8);
        if (local_7f0 < 0) {
          bVar33 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2828200105734045879>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                              ,0xb7,"RootIndex >= 0");
          dVar67 = dVar21;
          dVar72 = dVar21;
          dVar69 = dVar21;
          dVar70 = dVar77;
          dVar80 = dVar77;
          if (bVar33) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
        }
        else {
          uVar64 = (ulonglong)(local_7f0._4_4_ & 0x1ff);
          lVar45 = *(longlong *)
                    (local_838.Blocks.AllocatorInstance.Data + (ulonglong)(local_7f0._4_4_ >> 9) * 8
                    );
          dVar80 = *(double *)(lVar45 + uVar64 * 0x18);
          lVar63 = *(longlong *)
                    (local_820.Blocks.AllocatorInstance.Data + (ulonglong)(local_7f0._4_4_ >> 9) * 8
                    );
          dVar70 = *(double *)(lVar45 + 8 + uVar64 * 0x18);
          dVar67 = *(double *)(lVar45 + 0x10 + uVar64 * 0x18);
          dVar77 = dVar67 - *(double *)(lVar63 + 0x10 + uVar64 * 0x18);
          dVar67 = dVar67 + *(double *)(lVar63 + 0x10 + uVar64 * 0x18);
          dVar72 = dVar70 + *(double *)(lVar63 + 8 + uVar64 * 0x18);
          dVar69 = dVar80 + *(double *)(lVar63 + uVar64 * 0x18);
          dVar70 = dVar70 - *(double *)(lVar63 + 8 + uVar64 * 0x18);
          dVar80 = dVar80 - *(double *)(lVar63 + uVar64 * 0x18);
        }
        dVar71 = 0.0;
        dVar68 = dVar12 * dVar16;
        if ((bool)local_448[0x20] != false) {
          dVar68 = 0.0;
        }
        local_448._100_4_ = 3;
        local_448[0x60] = true;
        dVar76 = dVar67 - dVar77;
        if (dVar67 - dVar77 <= 0.0) {
          dVar76 = dVar71;
        }
        dVar77 = dVar72 - dVar70;
        if (dVar72 - dVar70 <= 0.0) {
          dVar77 = dVar71;
        }
        dVar70 = dVar69 - dVar80;
        if (dVar69 - dVar80 <= 0.0) {
          dVar70 = dVar71;
        }
        if (dVar76 <= dVar77) {
          dVar76 = dVar77;
        }
        if (dVar76 <= dVar70) {
          dVar76 = dVar70;
        }
        local_448._104_8_ = (dVar76 + dVar68 + dVar68) / (double)(int)uVar48;
        local_448._24_8_ = pFVar61->Curvature_Winding;
        local_448._88_8_ = dVar12 * dVar16;
        pFVar44 = UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate
                            ((TImplicitSolidify<UE::Geometry::FDynamicMesh3> *)local_448);
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_ad8,pFVar44);
        dVar80 = pFVar61->Curvature_SmoothingPerStep;
        uVar48 = local_ad8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 local_ad8.VertexRefCounts.RefCounts.CurBlockUsed;
        local_1168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1168.ArrayNum = 0;
        local_1168.ArrayMax = 0;
        if ((int)uVar48 < 1) {
          if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
          }
        }
        else {
          Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar48,&local_1168.AllocatorInstance,&local_1168.ArrayNum,
                     &local_1168.ArrayMax);
        }
        UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                  (&local_1158,&local_ad8.VertexRefCounts,0,
                   local_ad8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                   local_ad8.VertexRefCounts.RefCounts.CurBlockUsed);
        iVar59 = local_ad8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 local_ad8.VertexRefCounts.RefCounts.CurBlockUsed;
        UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                  (&local_e90,&local_ad8.VertexRefCounts,iVar59,iVar59);
        uVar79 = local_e90._8_4_;
        uVar78 = local_1158._12_4_;
        uVar48 = local_1158._8_4_;
joined_r0x00014c9ebb8a:
        local_1158._8_4_ = uVar48;
        if (uVar48 != uVar79) {
          puVar1 = (undefined8 *)
                   (*(longlong *)
                     (local_ad8.Vertices.Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar48 >> 9) * 8) + (ulonglong)(uVar48 & 0x1ff) * 0x18);
          uVar14 = *puVar1;
          uVar15 = puVar1[1];
          uVar75 = *(undefined8 *)
                    (*(longlong *)
                      (local_ad8.Vertices.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar48 >> 9) * 8) + 0x10 + (ulonglong)(uVar48 & 0x1ff) * 0x18);
          uVar38 = 0;
          if ((int)uVar48 < local_1168.ArrayNum) {
            uVar38 = ~uVar48 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
          lVar45 = (longlong)(int)uVar48;
          uVar48 = uVar48 + 1;
          *(undefined8 *)(local_1168.AllocatorInstance.Data + lVar45 * 0x18) = uVar14;
          *(undefined8 *)(local_1168.AllocatorInstance.Data + lVar45 * 0x18 + 8) = uVar15;
          *(undefined8 *)(local_1168.AllocatorInstance.Data + lVar45 * 0x18 + 0x10) = uVar75;
          uVar38 = local_11d4;
          if ((int)uVar48 < (int)uVar78) {
            do {
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(local_1158._0_8_ + 8) + (ulonglong)(uVar48 >> 9) * 8)
                             + (ulonglong)(uVar48 & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(local_1158._0_8_ + 8) + (ulonglong)(uVar48 >> 9) * 8) +
                            (ulonglong)(uVar48 & 0x1ff) * 2) != -1)) break;
              uVar48 = uVar48 + 1;
            } while ((int)uVar48 < (int)uVar78);
          }
          goto joined_r0x00014c9ebb8a;
        }
        uVar64 = 0;
        local_e78 = &local_1060;
        local_e80 = Core::Private::Function::
                    TFunctionRefCaller<`UE::PlanarCut::TextureSpecifiedFaces'::__l37::<lambda_2>,double,int,bool>
                    ::Call;
        local_1060 = dVar80;
        MeshDeformation::ComputeSmoothing_Forward
                  (true,false,&local_ad8,(TFunctionRef<double___cdecl(int,bool)> *)&local_e80,
                   pFVar61->Curvature_SmoothingSteps,&local_1168,(FProgressCancel *)0x0);
        uVar48 = local_ad8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 local_ad8.VertexRefCounts.RefCounts.CurBlockUsed;
        FVar62.Data = local_ad8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
        if ((uVar48 == 0) ||
           ((ushort)(**(short **)local_ad8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data -
                    1U) < 0xfffe)) {
LAB_14c9ebd66:
          uVar54 = (uint)uVar64;
        }
        else {
          uVar64 = 1;
          uVar54 = 1;
          if (1 < (int)uVar48) {
            do {
              uVar53 = (ulonglong)((uint)uVar64 & 0x1ff);
              uVar38 = local_11d4;
              if ((*(short *)(*(longlong *)
                               (local_ad8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                               (uVar64 >> 9) * 8) + uVar53 * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (local_ad8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                              (uVar64 >> 9) * 8) + uVar53 * 2) != -1)) break;
              uVar54 = (uint)uVar64 + 1;
              uVar64 = (ulonglong)uVar54;
            } while ((int)uVar54 < (int)uVar48);
            goto LAB_14c9ebd66;
          }
        }
joined_r0x00014c9ebd69:
        if (uVar54 != uVar48) {
          do {
            uVar54 = (uint)uVar64;
            uVar38 = 0;
            if ((int)uVar54 < local_1168.ArrayNum) {
              uVar38 = ~uVar54 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               FVar62.Data = local_ad8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
               bVar33)) {
              pcVar9 = (code *)swi(3);
              uVar34 = (*pcVar9)();
              return (bool)uVar34;
            }
            FVar30.Data = local_1168.AllocatorInstance.Data;
            lVar45 = (longlong)(int)uVar54;
            sVar36 = _dclass(*(undefined8 *)(local_1168.AllocatorInstance.Data + lVar45 * 0x18));
            if (((sVar36 < 1) &&
                (sVar36 = _dclass(*(undefined8 *)(FVar30.Data + lVar45 * 0x18 + 8)), sVar36 < 1)) &&
               (sVar36 = _dclass(*(undefined8 *)(FVar30.Data + lVar45 * 0x18 + 0x10)), sVar36 < 1))
            {
              uVar14 = *(undefined8 *)(FVar30.Data + lVar45 * 0x18 + 8);
              uVar75 = *(undefined8 *)(FVar30.Data + lVar45 * 0x18 + 0x10);
              lVar63 = *(longlong *)
                        (local_ad8.Vertices.Blocks.AllocatorInstance.Data + (uVar64 >> 9) * 8);
              puVar1 = (undefined8 *)(lVar63 + (ulonglong)(uVar54 & 0x1ff) * 0x18);
              *puVar1 = *(undefined8 *)(FVar30.Data + lVar45 * 0x18);
              puVar1[1] = uVar14;
              *(undefined8 *)(lVar63 + 0x10 + (ulonglong)(uVar54 & 0x1ff) * 0x18) = uVar75;
              FVar62.Data = local_ad8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
              if (local_ad8.ChangeStampShape.bIsEnabled != false) {
                LOCK();
                bVar33 = local_ad8.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
                if (bVar33) {
                  local_ad8.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar33) {
                  FMutex::LockSlow(&local_ad8.ChangeStampShape.Mutex);
                }
                local_ad8.ChangeStampShape.Value = local_ad8.ChangeStampShape.Value + 1;
                LOCK();
                aVar11 = local_ad8.ChangeStampShape.Mutex.State - 1;
                UNLOCK();
                bVar10 = (byte)local_ad8.ChangeStampShape.Mutex.State & 2;
                local_ad8.ChangeStampShape.Mutex.State = aVar11;
                FVar62.Data = local_ad8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
                if (bVar10 != 0) {
                  FMutex::WakeWaitingThread(&local_ad8.ChangeStampShape.Mutex);
                  FVar62.Data = local_ad8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
                }
              }
            }
            do {
              uVar54 = uVar54 + 1;
              uVar64 = (ulonglong)uVar54;
              pFVar5 = local_1038;
              uVar38 = local_11d4;
              if ((int)uVar48 <= (int)uVar54) goto joined_r0x00014c9ebd69;
              sVar36 = *(short *)(*(longlong *)(FVar62.Data + (ulonglong)(uVar54 >> 9) * 8) +
                                 (ulonglong)(uVar54 & 0x1ff) * 2);
            } while ((sVar36 == 0) || (sVar36 == -1));
          } while( true );
        }
        lVar45 = 0;
        local_7e8._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        local_7e8._24_4_ = 3;
        local_7b8 = &
                    ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        local_7b0 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                    MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
        local_7e8._32_8_ =
             Core::Private::Function::
             TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
             ::Call;
        local_7e8._16_8_ = 0;
        local_7a0 = (undefined ***)0x0;
        local_790.CurBlock = 0;
        local_790.CurBlockUsed = 0;
        local_790.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_790.Blocks.ArrayNum = 0;
        local_790.Blocks.ArrayMax = 0;
        local_798 = local_1138;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_790);
        local_778.CurBlock = 0;
        local_778.CurBlockUsed = 0;
        local_778.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_778.Blocks.ArrayNum = 0;
        local_778.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_778);
        local_760.CurBlock = 0;
        local_760.CurBlockUsed = 0;
        local_760.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_760.Blocks.ArrayNum = 0;
        local_760.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_760);
        local_748.CurBlock = 0;
        local_748.CurBlockUsed = 0;
        local_748.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_748.Blocks.ArrayNum = 0;
        local_748.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_748);
        local_7e8._8_8_ = &local_ad8;
        local_730._0_4_ = -1;
        local_730._4_4_ = -1;
        local_7e8._16_8_ = 0;
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                  ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_7e8,false);
        local_7e8._16_8_ =
             UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_7e8._8_8_);
        local_4c8 = (FDynamicMesh3 *)0x0;
        pTStack_4c0 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
        uVar75 = 0;
        local_4e8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
        local_4e0 = UE::Geometry::FMeshImageBakingCache::<lambda_25_>::<lambda_invoker_cdecl>;
        local_4a0 = __real_4008000000000000;
        local_4f8._0_8_ =
             Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
        local_4d0 = (undefined ***)0x0;
        local_4b8 = (FDynamicMesh3 *)0x0;
        local_4b0 = 0x80;
        local_4ac._0_4_ = 0x80;
        local_4ac._4_4_ = 0;
        local_498 = RaycastStandard;
        local_494 = 4;
        local_490.Data = (FScriptContainerElement *)0x0;
        local_488 = 0;
        lStack_480 = 0;
        local_478 = 0;
        lStack_470 = 0;
        local_468 = false;
        local_460.Ptr = (FImageOccupancyMap *)0x0;
        local_458 = false;
        UE::Geometry::FMeshImageBakingCache::SetGutterSize
                  ((FMeshImageBakingCache *)local_4f8,local_1180);
        UE::Geometry::FMeshImageBakingCache::SetDetailMesh
                  ((FMeshImageBakingCache *)local_4f8,&local_ad8,
                   (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_7e8);
        UE::Geometry::FMeshImageBakingCache::SetBakeTargetMesh
                  ((FMeshImageBakingCache *)local_4f8,pFVar5);
        UE::Geometry::FMeshImageBakingCache::SetDimensions
                  ((FMeshImageBakingCache *)local_4f8,local_1030);
        UE::Geometry::FMeshImageBakingCache::SetUVLayer((FMeshImageBakingCache *)local_4f8,0);
        if (local_7f0 < 0) {
          bVar33 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2828200105734045879>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                              ,0xb7,"RootIndex >= 0");
          if (bVar33) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
          auVar13._4_8_ = uVar75;
          auVar13._0_4_ = (int)((ulonglong)local_1028 >> 0x20);
          auVar73._0_8_ = auVar13._0_8_ << 0x20;
          auVar73._8_4_ = SUB84(dStack_1020,0);
          auVar73._12_4_ = (int)((ulonglong)dStack_1020 >> 0x20);
          dVar72 = auVar73._8_8_;
          dVar67 = dVar21;
          dVar80 = local_1058;
          dVar12 = dStack_1050;
          dVar70 = __real_7fefffffffffffff;
          dVar69 = local_1028;
        }
        else {
          uVar64 = (ulonglong)(local_7f0._4_4_ & 0x1ff);
          lVar63 = *(longlong *)
                    (local_838.Blocks.AllocatorInstance.Data + (ulonglong)(local_7f0._4_4_ >> 9) * 8
                    );
          dVar80 = *(double *)(lVar63 + 8 + uVar64 * 0x18);
          lVar7 = *(longlong *)
                   (local_820.Blocks.AllocatorInstance.Data + (ulonglong)(local_7f0._4_4_ >> 9) * 8)
          ;
          dVar70 = *(double *)(lVar63 + uVar64 * 0x18);
          dVar67 = *(double *)(lVar63 + 0x10 + uVar64 * 0x18);
          dVar72 = dVar80 + *(double *)(lVar7 + 8 + uVar64 * 0x18);
          dVar80 = dVar80 - *(double *)(lVar7 + 8 + uVar64 * 0x18);
          dVar12 = dVar67 - *(double *)(lVar7 + 0x10 + uVar64 * 0x18);
          dVar69 = dVar70 + *(double *)(lVar7 + uVar64 * 0x18);
          dVar67 = dVar67 + *(double *)(lVar7 + 0x10 + uVar64 * 0x18);
          dVar70 = dVar70 - *(double *)(lVar7 + uVar64 * 0x18);
        }
        pFVar61 = local_1170;
        uVar48 = local_11c0;
        dVar77 = __real_7fefffffffffffff;
        dVar72 = dVar72 - dVar80;
        dVar69 = dVar69 - dVar70;
        dVar67 = dVar67 - dVar12;
        if (dVar72 <= 0.0) {
          dVar72 = 0.0;
        }
        if (dVar69 <= 0.0) {
          dVar69 = 0.0;
        }
        if (dVar67 <= 0.0) {
          dVar67 = 0.0;
        }
        if (dVar72 <= dVar67) {
          dVar72 = dVar67;
        }
        if (dVar72 <= dVar69) {
          dVar72 = dVar69;
        }
        UE::Geometry::FMeshImageBakingCache::SetThickness
                  ((FMeshImageBakingCache *)local_4f8,
                   (dVar72 * local_1170->Curvature_ThicknessFactor) / (double)(int)local_11c0);
        UE::Geometry::FMeshImageBakingCache::ValidateCache((FMeshImageBakingCache *)local_4f8);
        local_e38._padding_ = (longlong)local_4f8;
        local_e38.OverrideRangeMax = pFVar61->Curvature_MaxValue;
        local_e38.Curvatures.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_e38.ResultBuilder.Ptr = (TImageBuilder<UE::Math::TVector<float>_> *)0x0;
        local_e38._padding_ = (longlong)&___7FMeshCurvatureMapBaker_Geometry_UE__6B_;
        local_e38.UseCurvatureType = Mean;
        local_e38.UseColorMode = BlackGrayWhite;
        local_e38.UseClampMode = FullRange;
        local_e38.RangeScale = dVar19;
        local_e38.MinRangeScale = dVar20;
        local_e38.Curvatures.Object = (FMeshVertexCurvatureCache *)0x0;
        local_e38.bOverrideCurvatureRange = true;
        if (pFVar61->bCurvature_Blur == false) {
          local_e38.BlurRadius = 0.0;
        }
        else {
          local_e38.BlurRadius = pFVar61->Curvature_BlurRadius;
        }
        UE::Geometry::FMeshCurvatureMapBaker::Bake(&local_e38);
        uVar60 = local_1018;
        if (0 < (longlong)local_1018) {
          do {
            if ((local_10d8.ArrayNum <= lVar45) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar9 = (code *)swi(3);
              uVar34 = (*pcVar9)();
              return (bool)uVar34;
            }
            FVar58.Data = local_10d8.AllocatorInstance.Data;
            pTVar46 = UE::Geometry::TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                                (&(local_e38.ResultBuilder.Ptr)->Image,lVar45);
            fVar74 = *(float *)(FVar58.Data + lVar45 * 4);
            fVar2 = (pTVar46->field0_0x0)._s_0.X;
            if (fVar74 <= fVar2) {
              fVar74 = fVar2;
            }
            *(float *)(FVar58.Data + lVar45 * 4) = fVar74;
            lVar45 = lVar45 + 1;
          } while (lVar45 < (longlong)uVar60);
        }
        TVar31.Ptr = local_e38.ResultBuilder.Ptr;
        local_e38._padding_ = (longlong)&___7FMeshCurvatureMapBaker_Geometry_UE__6B_;
        if (local_e38.ResultBuilder.Ptr != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
          pFVar65 = ((local_e38.ResultBuilder.Ptr)->Image).Buffer.AllocatorInstance.Data;
          if (pFVar65 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar65);
          }
          ::operator_delete(TVar31.Ptr,0x30);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e38.Curvatures.SharedReferenceCount.ReferenceController);
        TVar32.Ptr = local_460.Ptr;
        local_e38._padding_ = (longlong)&___7FMeshImageBaker_Geometry_UE__6B_;
        if (local_460.Ptr != (FImageOccupancyMap *)0x0) {
          UE::Geometry::FImageOccupancyMap::~FImageOccupancyMap(local_460.Ptr);
          ::operator_delete(TVar32.Ptr,0xd8);
        }
        if (local_490.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data);
        }
        if ((code *)local_4f8._0_8_ != (code *)0x0) {
          pppuVar51 = &local_4e8;
          if (local_4d0 != (undefined ***)0x0) {
            pppuVar51 = local_4d0;
          }
          (*(code *)(*pppuVar51)[2])();
        }
        UE::Geometry::TDynamicVector<int,512>::Empty(&local_748,0);
        if (local_748.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_748.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_760,0);
        if (local_760.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_760.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_778,0);
        if (local_778.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_778.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<int,512>::Empty(&local_790,0);
        if (local_790.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_790.Blocks.AllocatorInstance.Data);
        }
        if ((code *)local_7e8._32_8_ != (code *)0x0) {
          pppuVar51 = &local_7b8;
          if (local_7a0 != (undefined ***)0x0) {
            pppuVar51 = local_7a0;
          }
          (*(code *)(*pppuVar51)[2])();
        }
        if (local_1168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1168.AllocatorInstance.Data);
        }
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_ad8);
        UE::Geometry::FMarchingCubes::~FMarchingCubes(&local_3a8);
        if ((code *)local_448._112_8_ != (code *)0x0) {
          pppuVar51 = &local_3c8;
          if (local_3b0 != (undefined ***)0x0) {
            pppuVar51 = local_3b0;
          }
          (*(code *)(*pppuVar51)[2])();
        }
        if (local_ee8.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ee8.FastWindingCache.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<int,512>::Empty(&local_808,0);
        if (local_808.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_808.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_820,0);
        if (local_820.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_820.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_838,0);
        if (local_838.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_838.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<int,512>::Empty(&local_850,0);
        if (local_850.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_850.Blocks.AllocatorInstance.Data);
        }
        if ((code *)local_8a8._32_8_ != (code *)0x0) {
          pppuVar51 = &local_878;
          if (local_860 != (undefined ***)0x0) {
            pppuVar51 = local_860;
          }
          (*(code *)(*pppuVar51)[2])();
        }
        if (local_bd8.bEnded == false) {
          FProgressCancel::FProgressScope::Done(&local_bd8);
        }
        if (local_bd8.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_bd8.SavedProgressData.Message.TextData.Reference + 0x10))();
        }
        local_11d4 = uVar38 + 1;
        local_1088 = local_1088 + 1;
        this_00 = local_1130;
      } while ((int)local_11d4 < local_1128.Meshes.Array.ArrayNum);
      uVar78 = SUB84(__real_4008000000000000,0);
      uVar79 = (undefined4)((ulonglong)__real_4008000000000000 >> 0x20);
      pTVar56 = local_11a0;
      dVar80 = local_1138;
      iVar59 = local_1128.Meshes.Array.ArrayNum;
    }
  }
  fVar74 = __real_3f800000;
  uVar48 = 0;
  local_1198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1198.ArrayNum = 0;
  local_1198.ArrayMax = 0;
  if (-1 < (int)local_11d0) {
    FVar4 = pTVar56->Dimensions;
    local_11c4 = 0x3f800000;
    uVar60 = (longlong)FVar4.Height * (longlong)FVar4.Width;
    if ((longlong)uVar60 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar60);
    }
    if (uVar60 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (4,4,uVar60,&local_1198.AllocatorInstance,0,&local_1198.ArrayMax);
      uVar57 = uVar60;
      if (0 < (longlong)uVar60) {
        do {
          if (((local_1198.AllocatorInstance.Data <= (FScriptContainerElement *)&local_11c4) &&
              ((FScriptContainerElement *)&local_11c4 <
               local_1198.AllocatorInstance.Data + local_1198.ArrayMax * 4)) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar33)) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
          if (local_1198.ArrayNum == local_1198.ArrayMax) {
            local_1198.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                           (0x404,&local_1198.AllocatorInstance,&local_1198.ArrayMax);
          }
          lVar45 = local_1198.ArrayNum + 1;
          *(undefined4 *)(local_1198.AllocatorInstance.Data + local_1198.ArrayNum * 4) = local_11c4;
          uVar57 = uVar57 - 1;
          local_1198.ArrayNum = lVar45;
        } while (uVar57 != 0);
      }
      iVar59 = local_1128.Meshes.Array.ArrayNum;
    }
    dVar17 = __real_4066800000000000;
    dVar16 = __real_3f1a36e2e0000000;
    if (0 < iVar59) {
      lVar45 = 0;
      do {
        lVar63 = 0;
        if (this_00 != (FProgressCancel *)0x0) {
          if (this_00->WasCancelled != false) goto LAB_14c9ecd88;
          bVar33 = Core::Private::Function::
                   TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                   ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                                 *)&this_00->CancelF);
          this_00->WasCancelled = bVar33;
          if (bVar33) goto LAB_14c9ecd88;
        }
        pFVar43 = FText::FText(&local_c28);
        FProgressCancel::FProgressScope::FProgressScope(&local_b78,this_00,local_11a4,pFVar43);
        if (local_c28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c28.TextData.Reference + 0x10))();
        }
        uVar38 = 0;
        if ((int)uVar48 < local_1128.Meshes.Array.ArrayNum) {
          uVar38 = ~uVar48 >> 0x1f;
        }
        if (uVar38 == 0) {
          bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar33) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
        }
        uVar38 = 0;
        if ((int)uVar48 < local_1128.Meshes.Array.ArrayNum) {
          uVar38 = ~uVar48 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar9 = (code *)swi(3);
          uVar34 = (*pcVar9)();
          return (bool)uVar34;
        }
        pFVar5 = *(FDynamicMesh3 **)(local_1128.Meshes.Array.AllocatorInstance.Data + lVar45);
        local_728._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        local_728._24_4_ = 3;
        local_6f8 = &
                    ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        local_6f0 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                    MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
        local_728._32_8_ =
             Core::Private::Function::
             TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
             ::Call;
        local_728._16_8_ = 0;
        local_6e0 = (undefined ***)0x0;
        local_6d0.CurBlock = 0;
        local_6d0.CurBlockUsed = 0;
        local_6d0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6d0.Blocks.ArrayNum = 0;
        local_6d0.Blocks.ArrayMax = 0;
        local_6d8 = dVar80;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_6d0);
        local_6b8.CurBlock = 0;
        local_6b8.CurBlockUsed = 0;
        local_6b8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6b8.Blocks.ArrayNum = 0;
        local_6b8.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_6b8);
        local_6a0.CurBlock = 0;
        local_6a0.CurBlockUsed = 0;
        local_6a0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6a0.Blocks.ArrayNum = 0;
        local_6a0.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_6a0);
        local_688.CurBlock = 0;
        local_688.CurBlockUsed = 0;
        local_688.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_688.Blocks.ArrayNum = 0;
        local_688.Blocks.ArrayMax = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_688);
        local_670._0_4_ = -1;
        local_670._4_4_ = -1;
        local_728._16_8_ = 0;
        local_728._8_8_ = pFVar5;
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                  ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_728,false);
        local_728._16_8_ =
             UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_728._8_8_);
        local_550 = (double)CONCAT44(uVar79,uVar78);
        local_598 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
        local_580 = (undefined ***)0x0;
        local_590 = UE::Geometry::FMeshImageBakingCache::<lambda_25_>::<lambda_invoker_cdecl>;
        local_5a8._0_8_ =
             Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
        local_578 = (FDynamicMesh3 *)0x0;
        pTStack_570 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
        local_568 = (FDynamicMesh3 *)0x0;
        local_560 = 0x80;
        local_55c._0_4_ = 0x80;
        local_55c._4_4_ = 0;
        local_548 = RaycastStandard;
        local_544 = 4;
        local_540.Data = (FScriptContainerElement *)0x0;
        local_538 = 0;
        lStack_530 = 0;
        local_528 = 0;
        lStack_520 = 0;
        local_518 = false;
        local_510.Ptr = (FImageOccupancyMap *)0x0;
        local_508 = false;
        UE::Geometry::FMeshImageBakingCache::SetGutterSize
                  ((FMeshImageBakingCache *)local_5a8,local_1180);
        UE::Geometry::FMeshImageBakingCache::SetDetailMesh
                  ((FMeshImageBakingCache *)local_5a8,pFVar5,
                   (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_728);
        UE::Geometry::FMeshImageBakingCache::SetBakeTargetMesh
                  ((FMeshImageBakingCache *)local_5a8,pFVar5);
        UE::Geometry::FMeshImageBakingCache::SetDimensions((FMeshImageBakingCache *)local_5a8,FVar4)
        ;
        UE::Geometry::FMeshImageBakingCache::SetUVLayer((FMeshImageBakingCache *)local_5a8,0);
        UE::Geometry::FMeshImageBakingCache::SetCorrespondenceStrategy
                  ((FMeshImageBakingCache *)local_5a8,Identity);
        UE::Geometry::FMeshImageBakingCache::SetThickness((FMeshImageBakingCache *)local_5a8,dVar16)
        ;
        UE::Geometry::FMeshImageBakingCache::ValidateCache((FMeshImageBakingCache *)local_5a8);
        local_fa8._padding_ = (longlong)&___7FMeshOcclusionMapBaker_Geometry_UE__6B_;
        local_fa8.OcclusionBuilder.Ptr = (TImageBuilder<UE::Math::TVector<float>_> *)0x0;
        local_fa8.NormalBuilder.Ptr = (TImageBuilder<UE::Math::TVector<float>_> *)0x0;
        local_fa8.Distribution = Cosine;
        local_fa8._padding_ = (longlong)local_5a8;
        local_fa8.MaxDistance = local_1170->AO_MaxDistance;
        local_fa8.NumOcclusionRays = local_1170->AO_Rays;
        local_fa8.BaseMeshTangents = (TMeshTangents<double> *)0x0;
        local_fa8.NormalSpace = Tangent;
        local_fa8.OcclusionType = AmbientOcclusion;
        local_fa8.SpreadAngle = dVar17;
        if (local_fa8.MaxDistance == 0.0) {
          local_fa8.MaxDistance = dVar77;
        }
        local_fa8.BiasAngleDeg = local_1170->AO_BiasAngleDeg;
        if (local_1170->bAO_Blur == false) {
          local_fa8.BlurRadius = 0.0;
        }
        else {
          local_fa8.BlurRadius = local_1170->AO_BlurRadius;
        }
        UE::Geometry::FMeshOcclusionMapBaker::Bake(&local_fa8);
        if (0 < (longlong)uVar60) {
          do {
            if ((local_1198.ArrayNum <= lVar63) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar9 = (code *)swi(3);
              uVar34 = (*pcVar9)();
              return (bool)uVar34;
            }
            FVar58.Data = local_1198.AllocatorInstance.Data;
            pTVar46 = UE::Geometry::TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                                (&(local_fa8.OcclusionBuilder.Ptr)->Image,lVar63);
            fVar2 = (pTVar46->field0_0x0)._s_0.X;
            fVar3 = *(float *)(FVar58.Data + lVar63 * 4);
            if (fVar3 <= fVar2) {
              fVar2 = fVar3;
            }
            *(float *)(FVar58.Data + lVar63 * 4) = fVar2;
            lVar63 = lVar63 + 1;
          } while (lVar63 < (longlong)uVar60);
        }
        TVar31.Ptr = local_fa8.NormalBuilder.Ptr;
        local_fa8._padding_ = (longlong)&___7FMeshOcclusionMapBaker_Geometry_UE__6B_;
        if (local_fa8.NormalBuilder.Ptr != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
          pFVar65 = ((local_fa8.NormalBuilder.Ptr)->Image).Buffer.AllocatorInstance.Data;
          if (pFVar65 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar65);
          }
          ::operator_delete(TVar31.Ptr,0x30);
        }
        TVar31.Ptr = local_fa8.OcclusionBuilder.Ptr;
        if (local_fa8.OcclusionBuilder.Ptr != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
          pFVar65 = ((local_fa8.OcclusionBuilder.Ptr)->Image).Buffer.AllocatorInstance.Data;
          if (pFVar65 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar65);
          }
          ::operator_delete(TVar31.Ptr,0x30);
        }
        TVar32.Ptr = local_510.Ptr;
        local_fa8._padding_ = (longlong)&___7FMeshImageBaker_Geometry_UE__6B_;
        if (local_510.Ptr != (FImageOccupancyMap *)0x0) {
          UE::Geometry::FImageOccupancyMap::~FImageOccupancyMap(local_510.Ptr);
          ::operator_delete(TVar32.Ptr,0xd8);
        }
        if (local_540.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_540.Data);
        }
        if ((code *)local_5a8._0_8_ != (code *)0x0) {
          pppuVar51 = &local_598;
          if (local_580 != (undefined ***)0x0) {
            pppuVar51 = local_580;
          }
          (*(code *)(*pppuVar51)[2])();
        }
        UE::Geometry::TDynamicVector<int,512>::Empty(&local_688,0);
        if (local_688.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_688.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_6a0,0);
        if (local_6a0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a0.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_6b8,0);
        if (local_6b8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b8.Blocks.AllocatorInstance.Data);
        }
        UE::Geometry::TDynamicVector<int,512>::Empty(&local_6d0,0);
        if (local_6d0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d0.Blocks.AllocatorInstance.Data);
        }
        if ((code *)local_728._32_8_ != (code *)0x0) {
          pppuVar51 = &local_6f8;
          if (local_6e0 != (undefined ***)0x0) {
            pppuVar51 = local_6e0;
          }
          (*(code *)(*pppuVar51)[2])();
        }
        if (local_b78.bEnded == false) {
          FProgressCancel::FProgressScope::Done(&local_b78);
        }
        if (local_b78.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b78.SavedProgressData.Message.TextData.Reference + 0x10))();
        }
        uVar48 = uVar48 + 1;
        lVar45 = lVar45 + 8;
      } while ((int)uVar48 < local_1128.Meshes.Array.ArrayNum);
    }
  }
  if ((this_00 == (FProgressCancel *)0x0) || (bVar33 = FProgressCancel::Cancelled(this_00), !bVar33)
     ) {
    pFVar43 = FText::FText(&local_c18);
    FProgressCancel::CreateScopeTo(&local_ba8,this_00,fVar74,pFVar43);
    if (local_c18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c18.TextData.Reference + 0x10))();
    }
    pFVar61 = local_1170;
    pTVar56 = local_11a0;
    local_c88 = &local_10c0;
    local_c80 = &local_dd8;
    local_c78 = &local_1008;
    local_c70 = local_668;
    local_c68 = &local_117c;
    local_c60 = &local_11d0;
    local_c58 = &local_1178;
    local_c50 = &local_1174;
    local_c48 = &local_1148;
    local_c40 = &local_1144;
    local_c38 = &local_1140;
    local_c30 = &local_113c;
    local_e68 = &local_c98;
    local_e70 = Core::Private::Function::
                TFunctionRefCaller<`UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_3>,void,int>
                ::Call;
    local_c98 = local_1170;
    local_c90 = local_11a0;
    ParallelFor(local_dd8.Dimensions.Height,(TFunctionRef<void___cdecl(int)> *)&local_e70,None);
    if ((this_00 == (FProgressCancel *)0x0) ||
       (bVar33 = FProgressCancel::Cancelled(this_00), !bVar33)) {
      local_1040 = &local_dd8;
      local_1048 = pTVar56;
      `UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_4>::operator()
                (&local_1048,local_11d0,&local_1198);
      `UE::PlanarCut::TextureSpecifiedFaces'::__l2::<lambda_4>::operator()
                (&local_1048,local_11cc,&local_10d8);
      lVar42 = local_dd8.GutterTexels.ArrayNum;
      if ((uint)pFVar61->ClearGutterChannel < 4) {
        pFVar65 = local_dd8.GutterTexels.AllocatorInstance.Data +
                  local_dd8.GutterTexels.ArrayNum * 0x10;
        FVar58.Data = local_dd8.GutterTexels.AllocatorInstance.Data;
        while( true ) {
          if (local_dd8.GutterTexels.ArrayNum != lVar42) {
            local_11d8[0] = (<lambda_1>)0x0;
            `TCheckedPointerIterator<TTuple<__int64,__int64>,__int64,0>::operator!='::__l2::
            <lambda_1>::operator()(local_11d8);
          }
          if (FVar58.Data == pFVar65) break;
          pTVar47 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                              (&pTVar56->Image,*(long64 *)(FVar58.Data + 8));
          uVar48 = pFVar61->ClearGutterChannel;
          local_e58 = *(undefined8 *)&pTVar47->field0_0x0;
          uStack_e50 = *(undefined8 *)((longlong)&pTVar47->field0_0x0 + 8);
          if ((3 < uVar48) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                  ,0x310,L""), bVar33)) {
            pcVar9 = (code *)swi(3);
            uVar34 = (*pcVar9)();
            return (bool)uVar34;
          }
          lVar8 = *(long64 *)FVar58.Data;
          *(undefined4 *)((longlong)&local_e58 + (longlong)(int)uVar48 * 4) = 0;
          pTVar47 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                              (&pTVar56->Image,lVar8);
          FVar58.Data = FVar58.Data + 0x10;
          *(undefined8 *)&pTVar47->field0_0x0 = local_e58;
          *(undefined8 *)((longlong)&pTVar47->field0_0x0 + 8) = uStack_e50;
          pFVar61 = local_1170;
          pTVar56 = local_11a0;
        }
      }
      else {
        pFVar65 = local_dd8.GutterTexels.AllocatorInstance.Data +
                  local_dd8.GutterTexels.ArrayNum * 0x10;
        FVar58.Data = local_dd8.GutterTexels.AllocatorInstance.Data;
        while( true ) {
          if (local_dd8.GutterTexels.ArrayNum != lVar42) {
            `TCheckedPointerIterator<TTuple<__int64,__int64>,__int64,0>::operator!='::__l2::
            <lambda_1>::operator()(local_11a7);
          }
          if (FVar58.Data == pFVar65) break;
          lVar8 = *(long64 *)FVar58.Data;
          pTVar47 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                              (&pTVar56->Image,*(long64 *)(FVar58.Data + 8));
          uVar75 = *(undefined8 *)&pTVar47->field0_0x0;
          uVar14 = *(undefined8 *)((longlong)&pTVar47->field0_0x0 + 8);
          pTVar47 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                              (&pTVar56->Image,lVar8);
          FVar58.Data = FVar58.Data + 0x10;
          *(undefined8 *)&pTVar47->field0_0x0 = uVar75;
          *(undefined8 *)((longlong)&pTVar47->field0_0x0 + 8) = uVar14;
          pTVar56 = local_11a0;
        }
      }
      bVar33 = true;
    }
    else {
      bVar33 = false;
    }
    if (local_ba8.bEnded == false) {
      FProgressCancel::FProgressScope::Done(&local_ba8);
    }
    if (local_ba8.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ba8.SavedProgressData.Message.TextData.Reference + 0x10))();
    }
  }
  else {
LAB_14c9ecd88:
    bVar33 = false;
  }
  if (local_1198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1198.AllocatorInstance.Data);
  }
LAB_14c9ed03f:
  if (local_10d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10d8.AllocatorInstance.Data);
  }
LAB_14c9ed04d:
  TIndirectArray<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TSizedDefaultAllocator<32>_>::
  DestructAndFreeItems(&local_1128.Meshes);
  bVar35 = local_1128.Meshes.Array.ArrayMax != 0;
  local_1128.Meshes.Array._8_8_ = (ulonglong)(uint)local_1128.Meshes.Array.ArrayMax << 0x20;
  if (bVar35) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_1128,0,&local_1128.Meshes.Array.ArrayMax);
  }
  if (local_1128.Meshes.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1128.Meshes.Array.AllocatorInstance.Data);
  }
  if (local_11b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11b8.Data);
  }
  UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::~TMeshAABBTree3<UE::PlanarCut::FGeomMesh>
            ((TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *)local_668);
  if (local_f48.GlobalNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f48.GlobalNormals.AllocatorInstance.Data);
  }
  if (local_f48.GlobalVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f48.GlobalVertices.AllocatorInstance.Data);
  }
  local_f48._padding_ = (longlong)&___7IUVMeshView_FUVPacker_Geometry_UE__6B_;
  if (local_1080.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1080.AllocatorInstance.Data);
  }
  if (local_1008.GlobalNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1008.GlobalNormals.AllocatorInstance.Data);
  }
  if (local_1008.GlobalVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1008.GlobalVertices.AllocatorInstance.Data);
  }
  local_1008._padding_ = (longlong)&___7IUVMeshView_FUVPacker_Geometry_UE__6B_;
  if (local_dd8.GutterTexels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.GutterTexels.AllocatorInstance.Data);
  }
  if (local_dd8.BorderTexels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.BorderTexels.AllocatorInstance.Data);
  }
  if (local_dd8.TexelQueryUVChart.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.TexelQueryUVChart.AllocatorInstance.Data);
  }
  if (local_dd8.TexelQueryTriangle.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.TexelQueryTriangle.AllocatorInstance.Data);
  }
  if (local_dd8.TexelQueryUV.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.TexelQueryUV.AllocatorInstance.Data);
  }
  if (local_dd8.TexelInteriorSamples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.TexelInteriorSamples.AllocatorInstance.Data);
  }
  if (local_dd8.TexelType.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd8.TexelType.AllocatorInstance.Data);
  }
  return bVar33;
}

// TextureSpecifiedFaces @ 14c9ed210

bool __cdecl
UE::PlanarCut::TextureSpecifiedFaces
          (int param_1,FGeometryCollection *param_2,int param_3,FIndex4i *param_4,
          FTextureAttributeSettings *param_5,TImageBuilder<UE::Math::TVector4<float>_> *param_6,
          ETargetFaces param_7,TArrayView<int,int> *param_8,FProgressCancel *param_9)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<int,int> local_38;
  TArrayView<bool,int> local_28;
  FIndex4i_u_0 local_18;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_38.DataPtr = param_8->DataPtr;
  local_38.ArrayNum = param_8->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_8->field_0xc;
  SetActiveTriangles(param_2,&local_58,true,param_7,&local_38);
  iStack_40 = local_58.ArrayNum;
  local_48 = local_58.AllocatorInstance.Data;
  if (local_58.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iStack_40;
  local_28.DataPtr = (bool *)local_48;
  bVar2 = TextureSpecifiedFaces
                    (param_1,param_2,param_3,(FIndex4i *)&local_18._s_0,param_5,param_6,&local_28,
                     param_9);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return bVar2;
}

// UVLayout @ 14c9ee120

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::PlanarCut::UVLayout
          (int param_1,FGeometryCollection *param_2,int param_3,float param_4,
          TArrayView<bool,int> *param_5,bool param_6,FProgressCancel *param_7)

{
  bool *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  FGeometryCollection *pFVar17;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar18;
  bool bVar19;
  undefined1 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar26;
  FText *pFVar27;
  ulonglong uVar28;
  TVector<double> *pTVar29;
  bool *pbVar30;
  ulonglong uVar31;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar32;
  uint uVar33;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar34;
  longlong lVar35;
  longlong lVar36;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  double dVar42;
  undefined8 extraout_XMM0_Qb;
  double dVar43;
  undefined1 in_register_000012c4 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 local_res8 [8];
  uint local_6b8 [2];
  ForAnyElementType local_6b0;
  undefined8 local_6a8;
  undefined1 local_6a0;
  char local_69f;
  undefined1 local_69e [2];
  uint local_69c;
  uint local_698;
  uint local_694;
  TArray<int,TSizedDefaultAllocator<32>_> local_690;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_680;
  undefined1 local_670 [8];
  longlong local_668;
  TVector<double>_u_0 local_660;
  TArray<int,TSizedDefaultAllocator<32>_> local_648;
  uint local_638;
  TArray<int,TSizedDefaultAllocator<32>_> *local_630;
  TArray<int,TSizedDefaultAllocator<32>_> *local_628;
  longlong local_620;
  undefined8 local_618;
  FIndex3i_u_0 local_610;
  FUVPacker local_600 [2];
  FGeomMesh local_5e8;
  TVector<double>_u_0 local_588;
  undefined8 local_570;
  float local_568;
  undefined8 local_564;
  float local_55c;
  TVector2<float>_u_0 local_558;
  undefined2 local_550;
  undefined1 local_54e;
  TArray<int,TSizedDefaultAllocator<32>_> *local_548;
  TVector<double>_u_0 local_540;
  TQuaternion<double>_u_0 local_528;
  undefined8 local_508;
  undefined8 local_500;
  uint local_4f8 [4];
  TVector<double>_u_0 local_4e8;
  ulonglong local_4d0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  double local_4a0;
  double dStack_498;
  double local_490;
  code *local_488;
  undefined1 *local_480;
  FExpMapOptions local_478;
  code *local_468;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> **local_460;
  double local_448;
  FText local_440;
  FText local_430;
  FText local_420;
  TVector<double>_u_0 local_410;
  TVector<double> local_3f8;
  TVector<double> local_3e0;
  double local_3b8;
  FProgressScope local_3b0;
  FDynamicMeshUVEditor local_380;
  FProgressScope local_368;
  FProgressScope local_338;
  FDynamicMesh3 local_308;
  
  auVar45._4_12_ = in_register_000012c4;
  auVar45._0_4_ = param_4;
  if ((7 < (uint)param_1) ||
     (pTVar26 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                          ((FManagedArrayCollection *)param_2,
                           GeometryCollection::UV::UVLayerNames[param_1],
                           GeometryCollection::UV::VerticesGroupName),
     pTVar26 == (TManagedArray<UE::Math::TVector2<float>_> *)0x0)) {
    if (1 < (byte)LogPlanarCut._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlanarCut);
    }
    return false;
  }
  iVar23 = param_5->ArrayNum;
  iVar21 = (**(code **)(*(longlong *)&param_2->Indices + 0x60))(&param_2->Indices);
  if (iVar21 != iVar23) {
    if ((byte)LogPlanarCut._0_1_ < 2) {
      return false;
    }
    (**(code **)(*(longlong *)&param_2->Indices + 0x60))(&param_2->Indices);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlanarCut);
    return false;
  }
  pFVar27 = FText::FText(&local_440);
  FProgressCancel::CreateScopeTo(&local_3b0,param_7,__real_3e4ccccd,pFVar27);
  if (local_440.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_440.TextData.Reference + 0x10))();
  }
  pbVar30 = param_5->DataPtr;
  local_5e8.NumTriangles = 0;
  pbVar1 = pbVar30 + iVar23;
  for (; pbVar30 != pbVar1; pbVar30 = pbVar30 + 1) {
    local_5e8.NumTriangles = local_5e8.NumTriangles + (uint)(*pbVar30 != false);
  }
  local_5e8.ActiveTriangles.DataPtr = param_5->DataPtr;
  local_5e8.ActiveTriangles.ArrayNum = param_5->ArrayNum;
  local_5e8.ActiveTriangles._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_5e8._padding_ = (longlong)&___7FGeomMesh_PlanarCut_UE__6B_;
  local_5e8.GlobalVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e8.GlobalVertices.ArrayNum = 0;
  local_5e8.GlobalVertices.ArrayMax = 0;
  local_5e8.GlobalNormals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e8.GlobalNormals.ArrayNum = 0;
  local_5e8.GlobalNormals.ArrayMax = 0;
  local_5e8.Collection = param_2;
  local_5e8.UVLayer = param_1;
  local_5e8.CollectionUVs =
       FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                 ((FManagedArrayCollection *)param_2,GeometryCollection::UV::UVLayerNames[param_1],
                  GeometryCollection::UV::VerticesGroupName);
  FGeomMesh::ValidateUVLayer(&local_5e8);
  FGeomMesh::InitVertices(&local_5e8);
  local_480 = local_670;
  local_680.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488 = Core::Private::Function::TFunctionRefCaller<UE::UVPacking::<lambda_33_>,bool,int>::
              Call;
  local_680.ArrayNum = 0;
  local_680.ArrayMax = 0;
  UVPacking::CreateUVIslandsFromMeshTopology<UE::PlanarCut::FGeomMesh>
            (&local_5e8,&local_680,(TFunctionRef<bool___cdecl(int)> *)&local_488);
  FProgressCancel::FProgressScope::Done(&local_3b0);
  if ((param_7 == (FProgressCancel *)0x0) || (bVar19 = FProgressCancel::Cancelled(param_7), !bVar19)
     ) {
    if (param_6) {
      pFVar27 = FText::FText(&local_430);
      fVar13 = __real_3f000000;
      FProgressCancel::CreateScopeTo(&local_368,param_7,__real_3f000000,pFVar27);
      if (local_430.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_430.TextData.Reference + 0x10))();
      }
      local_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_648.ArrayNum = 0;
      local_648.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_648,local_5e8.GlobalVertices.ArrayNum,Default);
      uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      uVar31 = (ulonglong)local_680.ArrayNum;
      local_694 = 0;
      if (0 < local_680.ArrayNum) {
        local_620 = 0;
        local_4d0 = uVar31;
        do {
          lVar39 = local_620;
          local_660._s_0.Z = 0.0;
          local_448 = 0.0;
          local_638 = ~local_694 >> 0x1f;
          dVar10 = 0.0;
          uVar38 = 0;
          if ((int)local_694 < (int)uVar31) {
            uVar38 = local_638;
          }
          uVar50 = 0;
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          local_660._s_0.X = 0.0;
          local_660._s_0.Y = 0.0;
          if ((uVar38 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            uVar20 = (*pcVar6)();
            return (bool)uVar20;
          }
          dVar8 = __real_3fe0000000000000;
          uVar48 = SUB84(local_448,0);
          uVar49 = (undefined4)((ulonglong)local_448 >> 0x20);
          local_668 = lVar39 * 0x10;
          local_548 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_680.AllocatorInstance.Data;
          local_69c = *(uint *)(local_680.AllocatorInstance.Data + local_668 + 8);
          uVar31 = (ulonglong)(int)local_69c;
          pTVar34 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                     &local_680.AllocatorInstance.Data[local_668].field_0x0;
          local_628 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&(pTVar34->AllocatorInstance).Data + uVar31 * 4);
          while( true ) {
            pTVar32 = local_628;
            lVar39 = local_668;
            uVar28 = 0;
            local_630 = pTVar34;
            if (*(int *)((longlong)&local_548->ArrayNum + local_668) != (int)uVar31) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            pFVar17 = local_5e8.Collection;
            dVar42 = __real_3ff0000000000000;
            uVar38 = 0;
            if (pTVar34 == pTVar32) break;
            uVar33 = *(uint *)&(pTVar34->AllocatorInstance).Data;
            lVar39 = (longlong)(int)uVar33;
            if ((int)uVar33 < *(int *)&((local_5e8.Collection)->Indices).field_0x18) {
              uVar38 = ~uVar33 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            lVar35 = *(longlong *)&(pFVar17->Indices).field_0x10;
            uVar38 = *(uint *)(lVar35 + lVar39 * 0xc);
            uVar24 = *(uint *)(lVar35 + 4 + lVar39 * 0xc);
            uVar25 = *(uint *)(lVar35 + 8 + lVar39 * 0xc);
            local_618 = local_5e8.CollectionUVs;
            uVar22 = 0;
            if ((int)uVar38 < *(int *)&(local_5e8.CollectionUVs)->field_0x18) {
              uVar22 = ~uVar38 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            pTVar26 = local_5e8.CollectionUVs;
            local_508 = *(undefined8 *)
                         (*(longlong *)&local_618->field_0x10 + (longlong)(int)uVar38 * 8);
            uVar38 = 0;
            if ((int)uVar24 < *(int *)&(local_5e8.CollectionUVs)->field_0x18) {
              uVar38 = ~uVar24 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            pTVar18 = local_5e8.CollectionUVs;
            local_618 = *(TManagedArray<UE::Math::TVector2<float>_> **)
                         (*(longlong *)&pTVar26->field_0x10 + (longlong)(int)uVar24 * 8);
            uVar38 = 0;
            if ((int)uVar25 < *(int *)&(local_5e8.CollectionUVs)->field_0x18) {
              uVar38 = ~uVar25 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            pFVar17 = local_5e8.Collection;
            uVar5 = *(undefined8 *)(*(longlong *)&pTVar18->field_0x10 + (longlong)(int)uVar25 * 8);
            local_500._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
            local_500._0_4_ = (float)uVar5;
            uVar38 = 0;
            if ((int)uVar33 < *(int *)&((local_5e8.Collection)->Indices).field_0x18) {
              uVar38 = ~uVar33 >> 0x1f;
            }
            dVar10 = dVar10 + (double)((float)((uint)(((float)local_618 - (float)local_508) *
                                                      (local_500._4_4_ - local_508._4_4_) -
                                                     ((float)local_500 - (float)local_508) *
                                                     (local_618._4_4_ - local_508._4_4_)) & uVar14)
                                      * fVar13);
            local_500 = uVar5;
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            lVar35 = *(longlong *)&(pFVar17->Indices).field_0x10;
            local_4b0 = *(longlong *)(lVar35 + lVar39 * 0xc);
            iVar23 = *(int *)(lVar35 + 8 + lVar39 * 0xc);
            lVar39 = (longlong)(int)local_4b0;
            if (((int)local_4b0 < 0 || local_5e8.GlobalVertices.ArrayNum <= (int)local_4b0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            lVar35 = (longlong)local_4b0._4_4_;
            local_3b8 = *(double *)
                         (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar39 * 0x18 + 0x10);
            uVar48 = SUB84(local_3b8,0);
            uVar49 = (undefined4)((ulonglong)local_3b8 >> 0x20);
            auVar45 = *(undefined1 (*) [16])
                       (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar39 * 0x18);
            uVar50 = auVar45._0_4_;
            uVar51 = auVar45._4_4_;
            uVar52 = auVar45._8_4_;
            uVar53 = auVar45._12_4_;
            if ((local_4b0 < 0 || local_5e8.GlobalVertices.ArrayNum <= local_4b0._4_4_) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            local_448 = *(double *)
                         (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18 + 0x10);
            dVar46 = *(double *)(local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18);
            dVar42 = *(double *)
                      (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18 + 8);
            if ((iVar23 < 0 || local_5e8.GlobalVertices.ArrayNum <= iVar23) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            dVar46 = dVar46 - auVar45._0_8_;
            dVar42 = dVar42 - auVar45._8_8_;
            dVar47 = *(double *)
                      (local_5e8.GlobalVertices.AllocatorInstance.Data +
                      (longlong)iVar23 * 0x18 + 0x10) - local_3b8;
            dVar43 = *(double *)
                      (local_5e8.GlobalVertices.AllocatorInstance.Data + (longlong)iVar23 * 0x18) -
                     auVar45._0_8_;
            dVar9 = *(double *)
                     (local_5e8.GlobalVertices.AllocatorInstance.Data + (longlong)iVar23 * 0x18 + 8)
                    - auVar45._8_8_;
            local_4e8._s_0.X = dVar9 * (local_448 - local_3b8) - dVar47 * dVar42;
            local_4e8._s_0.Y = dVar47 * dVar46 - dVar43 * (local_448 - local_3b8);
            local_4e8._s_0.Z = dVar43 * dVar42 - dVar9 * dVar46;
            local_3b8 = *(double *)
                         (local_5e8.GlobalVertices.AllocatorInstance.Data +
                         (longlong)iVar23 * 0x18 + 0x10);
            dVar42 = UE::Geometry::Normalize<double>((TVector<double> *)&local_4e8._s_0,0.0);
            auVar44._8_4_ = (int)extraout_XMM0_Qb;
            auVar44._0_8_ = dVar42;
            auVar44._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
            pTVar34 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&(local_630->AllocatorInstance).Data + 4);
            uVar31 = (ulonglong)local_69c;
            auVar45._8_8_ = auVar44._8_8_;
            auVar45._0_8_ = dVar42 * dVar8;
            local_660._s_0.X = local_660._s_0.X + local_4e8._s_0.X * auVar45._0_8_;
            local_660._s_0.Y = local_660._s_0.Y + local_4e8._s_0.Y * auVar45._0_8_;
            local_660._s_0.Z = local_660._s_0.Z + local_4e8._s_0.Z * auVar45._0_8_;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_660._s_0.Y * local_660._s_0.Y + local_660._s_0.X * local_660._s_0.X +
                         local_660._s_0.Z * local_660._s_0.Z;
          auVar45 = sqrtpd(auVar45,auVar7);
          if (auVar45._0_8_ <= 0.0) {
            local_660._s_0.X = 0.0;
            auVar45 = ZEXT816(0);
            local_660._s_0.Y = 0.0;
            local_660._s_0.Z = 0.0;
          }
          else {
            dVar8 = __real_3ff0000000000000 / auVar45._0_8_;
            local_660._s_0.X = local_660._s_0.X * dVar8;
            local_660._s_0.Y = local_660._s_0.Y * dVar8;
            local_660._s_0.Z = local_660._s_0.Z * dVar8;
          }
          local_69f = 0.0 < auVar45._0_8_;
          if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
              __real_3e45798ee2308c3a) {
            uVar31 = uVar28;
            uVar40 = uVar28;
            if (0 < local_648.ArrayNum) {
              do {
                uVar24 = (uint)uVar31;
                uVar33 = uVar38;
                if ((int)uVar24 < local_648.ArrayNum) {
                  uVar33 = ~uVar24 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                *(undefined4 *)(local_648.AllocatorInstance.Data + uVar40) = 0xffffffff;
                uVar31 = (ulonglong)(uVar24 + 1);
                uVar40 = uVar40 + 4;
              } while ((int)(uVar24 + 1) < local_648.ArrayNum);
            }
            uVar24 = local_638;
            uVar33 = local_694;
            local_6b0.Data = (FScriptContainerElement *)0x0;
            if ((int)local_694 < local_680.ArrayNum) {
              uVar38 = local_638;
            }
            local_6a8 = 0;
            if ((uVar38 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            uVar38 = *(int *)(local_680.AllocatorInstance.Data + lVar39 + 8) * 3;
            if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
            }
            if (local_6a8._4_4_ < (int)uVar38) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar38,&local_6b0,(int)local_6a8,(int *)((longlong)&local_6a8 + 4));
            }
            UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_308);
            if ((int)uVar33 < local_680.ArrayNum) {
              uVar28 = (ulonglong)uVar24;
            }
            if (((int)uVar28 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar6 = (code *)swi(3);
              uVar20 = (*pcVar6)();
              return (bool)uVar20;
            }
            FVar15.Data = local_680.AllocatorInstance.Data;
            local_69c = *(uint *)(local_680.AllocatorInstance.Data + lVar39 + 8);
            uVar31 = (ulonglong)(int)local_69c;
            pTVar34 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                       (local_680.AllocatorInstance.Data + lVar39);
            local_628 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(pTVar34->AllocatorInstance).Data + uVar31 * 4);
            while( true ) {
              pTVar32 = local_628;
              if (*(int *)(FVar15.Data + lVar39 + 8) != (int)uVar31) {
                local_6a0 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_6a0);
              }
              pFVar17 = local_5e8.Collection;
              if (pTVar34 == pTVar32) break;
              uVar38 = *(uint *)&(pTVar34->AllocatorInstance).Data;
              lVar39 = (longlong)(int)uVar38;
              uVar33 = 0;
              if ((int)uVar38 < *(int *)&((local_5e8.Collection)->Indices).field_0x18) {
                uVar33 = ~uVar38 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                uVar20 = (*pcVar6)();
                return (bool)uVar20;
              }
              lVar35 = *(longlong *)&(pFVar17->Indices).field_0x10;
              local_6b8[0] = *(uint *)(lVar35 + lVar39 * 0xc);
              lVar36 = (longlong)(int)local_6b8[0];
              uVar38 = *(uint *)(lVar35 + 4 + lVar39 * 0xc);
              lVar41 = (longlong)(int)uVar38;
              uVar33 = *(uint *)(lVar35 + 8 + lVar39 * 0xc);
              lVar39 = (longlong)(int)uVar33;
              local_610._0_8_ = 0xffffffffffffffff;
              local_610._s_0.C = -1;
              uVar24 = 0;
              if ((int)local_6b8[0] < local_648.ArrayNum) {
                uVar24 = ~local_6b8[0] >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                uVar20 = (*pcVar6)();
                return (bool)uVar20;
              }
              FVar16.Data = local_648.AllocatorInstance.Data;
              if (*(int *)(local_648.AllocatorInstance.Data + lVar36 * 4) == -1) {
                lVar35 = (longlong)(int)local_6b8[0];
                uVar24 = 0;
                if ((int)local_6b8[0] < local_5e8.GlobalVertices.ArrayNum) {
                  uVar24 = ~local_6b8[0] >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                local_550 = 0;
                local_54e = 0;
                local_588._s_0.X =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18);
                local_588._s_0.Y =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18 + 8);
                local_588._s_0.Z =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data +
                              lVar35 * 0x18 + 0x10);
                local_568 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_55c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_570 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                local_564 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                local_558 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                iVar23 = UE::Geometry::FDynamicMesh3::AppendVertex
                                   (&local_308,(FVertexInfo *)&local_588._s_0);
                *(int *)(FVar16.Data + lVar36 * 4) = iVar23;
                if ((int)local_6a8 != iVar23) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InvIslandVert.Num() == VID",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                                      ,0x2d3,L"");
                  if (bVar19) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                }
                iVar23 = (int)local_6a8;
                if ((local_6b0.Data <= (FScriptContainerElement *)local_6b8) &&
                   ((FScriptContainerElement *)local_6b8 <
                    local_6b0.Data + (longlong)local_6a8._4_4_ * 4)) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar19) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  iVar23 = (int)local_6a8;
                }
                if (iVar23 == local_6a8._4_4_) {
                  iVar23 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_6b0,(int *)((longlong)&local_6a8 + 4));
                }
                local_6a8 = CONCAT44(local_6a8._4_4_,iVar23 + 1);
                *(uint *)(local_6b0.Data + (longlong)iVar23 * 4) = local_6b8[0];
              }
              local_610._s_0.A = *(undefined4 *)(FVar16.Data + lVar36 * 4);
              uVar24 = 0;
              if ((int)uVar38 < local_648.ArrayNum) {
                uVar24 = ~uVar38 >> 0x1f;
              }
              local_6b8[0] = uVar38;
              if ((uVar24 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                uVar20 = (*pcVar6)();
                return (bool)uVar20;
              }
              FVar16.Data = local_648.AllocatorInstance.Data;
              if (*(int *)(local_648.AllocatorInstance.Data + lVar41 * 4) == -1) {
                lVar35 = (longlong)(int)local_6b8[0];
                uVar38 = 0;
                if ((int)local_6b8[0] < local_5e8.GlobalVertices.ArrayNum) {
                  uVar38 = ~local_6b8[0] >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                local_550 = 0;
                local_54e = 0;
                local_588._s_0.X =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18);
                local_588._s_0.Y =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18 + 8);
                local_588._s_0.Z =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data +
                              lVar35 * 0x18 + 0x10);
                local_568 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_55c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_570 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                local_564 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                local_558 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                iVar23 = UE::Geometry::FDynamicMesh3::AppendVertex
                                   (&local_308,(FVertexInfo *)&local_588._s_0);
                *(int *)(FVar16.Data + lVar41 * 4) = iVar23;
                if ((int)local_6a8 != iVar23) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InvIslandVert.Num() == VID",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                                      ,0x2d3,L"");
                  if (bVar19) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                }
                iVar23 = (int)local_6a8;
                if ((local_6b0.Data <= (FScriptContainerElement *)local_6b8) &&
                   ((FScriptContainerElement *)local_6b8 <
                    local_6b0.Data + (longlong)local_6a8._4_4_ * 4)) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar19) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  iVar23 = (int)local_6a8;
                }
                if (iVar23 == local_6a8._4_4_) {
                  iVar23 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_6b0,(int *)((longlong)&local_6a8 + 4));
                }
                local_6a8 = CONCAT44(local_6a8._4_4_,iVar23 + 1);
                *(uint *)(local_6b0.Data + (longlong)iVar23 * 4) = local_6b8[0];
              }
              local_610._s_0.B = *(undefined4 *)(FVar16.Data + lVar41 * 4);
              uVar38 = 0;
              if ((int)uVar33 < local_648.ArrayNum) {
                uVar38 = ~uVar33 >> 0x1f;
              }
              local_6b8[0] = uVar33;
              if ((uVar38 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                uVar20 = (*pcVar6)();
                return (bool)uVar20;
              }
              FVar16.Data = local_648.AllocatorInstance.Data;
              if (*(int *)(local_648.AllocatorInstance.Data + lVar39 * 4) == -1) {
                lVar35 = (longlong)(int)local_6b8[0];
                uVar38 = 0;
                if ((int)local_6b8[0] < local_5e8.GlobalVertices.ArrayNum) {
                  uVar38 = ~local_6b8[0] >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                local_550 = 0;
                local_54e = 0;
                local_588._s_0.X =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18);
                local_588._s_0.Y =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar35 * 0x18 + 8);
                local_588._s_0.Z =
                     (double)*(undefined8 *)
                              (local_5e8.GlobalVertices.AllocatorInstance.Data +
                              lVar35 * 0x18 + 0x10);
                local_568 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_55c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_570 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                local_564 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                local_558 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                iVar23 = UE::Geometry::FDynamicMesh3::AppendVertex
                                   (&local_308,(FVertexInfo *)&local_588._s_0);
                *(int *)(FVar16.Data + lVar39 * 4) = iVar23;
                if ((int)local_6a8 != iVar23) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InvIslandVert.Num() == VID",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                                      ,0x2d3,L"");
                  if (bVar19) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                }
                iVar23 = (int)local_6a8;
                if ((local_6b0.Data <= (FScriptContainerElement *)local_6b8) &&
                   ((FScriptContainerElement *)local_6b8 <
                    local_6b0.Data + (longlong)local_6a8._4_4_ * 4)) {
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar19) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  iVar23 = (int)local_6a8;
                }
                if (iVar23 == local_6a8._4_4_) {
                  iVar23 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_6b0,(int *)((longlong)&local_6a8 + 4));
                }
                local_6a8 = CONCAT44(local_6a8._4_4_,iVar23 + 1);
                *(uint *)(local_6b0.Data + (longlong)iVar23 * 4) = local_6b8[0];
              }
              local_610._s_0.C = *(undefined4 *)(FVar16.Data + lVar39 * 4);
              UE::Geometry::FDynamicMesh3::AppendTriangle(&local_308,(FIndex3i *)&local_610._s_0,0);
              uVar31 = (ulonglong)local_69c;
              pTVar34 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(pTVar34->AllocatorInstance).Data + 4);
              lVar39 = local_668;
            }
            UE::Geometry::FDynamicMeshUVEditor::FDynamicMeshUVEditor(&local_380,&local_308,0,true);
            pTVar34 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
            local_690.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_690.ArrayNum = 0;
            local_690.ArrayMax = 0;
            if (local_308.TriangleRefCounts.UsedCount < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum
                        ((ulonglong)(uint)local_308.TriangleRefCounts.UsedCount);
            }
            pTVar32 = pTVar34;
            if (0 < local_308.TriangleRefCounts.UsedCount) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_308.TriangleRefCounts.UsedCount,&local_690.AllocatorInstance,0,
                         &local_690.ArrayMax);
              pTVar32 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                        (ulonglong)(uint)local_690.ArrayNum;
            }
            uVar38 = local_308.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                     local_308.TriangleRefCounts.RefCounts.CurBlockUsed;
            pTVar37 = pTVar34;
            if ((uVar38 == 0) ||
               (pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,
               (ushort)(**(short **)
                          local_308.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data - 1U)
               < 0xfffe)) {
LAB_14c9ef306:
              uVar33 = (uint)pTVar37;
            }
            else {
              pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000001;
              uVar33 = 1;
              if (1 < (int)uVar38) {
                do {
                  uVar31 = (ulonglong)((uint)pTVar37 & 0x1ff);
                  lVar39 = local_668;
                  if ((*(short *)(*(longlong *)
                                   (local_308.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                                    Data + ((ulonglong)pTVar37 >> 9) * 8) + uVar31 * 2) != 0) &&
                     (*(short *)(*(longlong *)
                                  (local_308.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                                   Data + ((ulonglong)pTVar37 >> 9) * 8) + uVar31 * 2) != -1))
                  break;
                  uVar33 = (uint)pTVar37 + 1;
                  pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar33;
                } while ((int)uVar33 < (int)uVar38);
                goto LAB_14c9ef306;
              }
            }
            if (uVar33 != uVar38) {
              do {
                uVar33 = (uint)pTVar37;
                uVar24 = (uint)pTVar32;
                local_698 = uVar33;
                if (((local_690.AllocatorInstance.Data <= (FScriptContainerElement *)&local_698) &&
                    ((FScriptContainerElement *)&local_698 <
                     local_690.AllocatorInstance.Data + (longlong)local_690.ArrayMax * 4)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), uVar24 = local_690.ArrayNum, bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                if (uVar24 == local_690.ArrayMax) {
                  uVar24 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_690.AllocatorInstance,&local_690.ArrayMax);
                }
                local_690.ArrayNum = uVar24 + 1;
                *(uint *)(local_690.AllocatorInstance.Data + (longlong)(int)uVar24 * 4) = local_698;
                do {
                  uVar33 = uVar33 + 1;
                  pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar33;
                  if ((int)uVar38 <= (int)uVar33) {
                    if (uVar33 == uVar38) goto LAB_14c9ef3f8;
                    break;
                  }
                  sVar4 = *(short *)(*(longlong *)
                                      (local_308.TriangleRefCounts.RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar33 >> 9) * 8) +
                                    (ulonglong)(uVar33 & 0x1ff) * 2);
                } while ((sVar4 == 0) || (sVar4 == -1));
                pTVar32 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                          (ulonglong)(uint)local_690.ArrayNum;
              } while( true );
            }
LAB_14c9ef3f8:
            local_478.NormalSmoothingAlpha = __real_3fd0000000000000;
            local_478.NormalSmoothingRounds = 0;
            bVar19 = UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromExpMap
                               (&local_380,&local_690,&local_478,(FUVEditResult *)0x0);
            if (bVar19) {
              pTVar32 = pTVar34;
              if (0 < ((local_308.AttributeSet.Ptr)->UVLayers).Array.ArrayNum) {
                pTVar32 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                           ((local_308.AttributeSet.Ptr)->UVLayers).Array.AllocatorInstance.Data;
              }
              uVar38 = local_308.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                       local_308.TriangleRefCounts.RefCounts.CurBlockUsed;
              pTVar37 = pTVar34;
              local_630 = pTVar32;
              if ((uVar38 == 0) ||
                 (pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,
                 (ushort)(**(short **)
                            local_308.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data - 1U
                         ) < 0xfffe)) {
LAB_14c9ef4c5:
                uVar33 = (uint)pTVar37;
              }
              else {
                pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)&DAT_00000001;
                uVar33 = 1;
                if (1 < (int)uVar38) {
                  do {
                    uVar31 = (ulonglong)((uint)pTVar37 & 0x1ff);
                    if ((*(short *)(*(longlong *)
                                     (local_308.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance
                                      .Data + ((ulonglong)pTVar37 >> 9) * 8) + uVar31 * 2) != 0) &&
                       (*(short *)(*(longlong *)
                                    (local_308.TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                                     Data + ((ulonglong)pTVar37 >> 9) * 8) + uVar31 * 2) != -1))
                    break;
                    uVar33 = (uint)pTVar37 + 1;
                    pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar33;
                  } while ((int)uVar33 < (int)uVar38);
                  goto LAB_14c9ef4c5;
                }
              }
joined_r0x00014c9ef4c8:
              if (uVar33 != uVar38) {
                while( true ) {
                  lVar39 = *(longlong *)&pTVar32[7].ArrayNum;
                  uVar33 = (uint)pTVar37;
                  uVar24 = uVar33 * 3;
                  local_4b8 = *(undefined4 *)
                               (*(longlong *)
                                 (local_308.Triangles.Blocks.AllocatorInstance.Data +
                                 ((ulonglong)pTVar37 >> 9) * 8) + 8 +
                               (ulonglong)(uVar33 & 0x1ff) * 0xc);
                  local_4c0 = *(undefined8 *)
                               (*(longlong *)
                                 (local_308.Triangles.Blocks.AllocatorInstance.Data +
                                 ((ulonglong)pTVar37 >> 9) * 8) + (ulonglong)(uVar33 & 0x1ff) * 0xc)
                  ;
                  local_4f8[0] = *(uint *)(*(longlong *)(lVar39 + (ulonglong)(uVar24 >> 9) * 8) +
                                          (ulonglong)(uVar24 & 0x1ff) * 4);
                  local_4f8[1] = *(int *)(*(longlong *)(lVar39 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                                         (ulonglong)(uVar24 + 1 & 0x1ff) * 4);
                  local_4f8[2] = *(int *)(*(longlong *)(lVar39 + (ulonglong)(uVar24 + 2 >> 9) * 8) +
                                         (ulonglong)(uVar24 + 2 & 0x1ff) * 4);
                  pTVar37 = pTVar34;
                  if (((local_4f8[0] == 0xffffffff) && (local_4f8[1] == -1)) && (local_4f8[2] == -1)
                     ) break;
                  do {
                    uVar24 = *(uint *)((longlong)&local_4c0 + (longlong)pTVar37);
                    uVar25 = 0;
                    if ((int)uVar24 < (int)local_6a8) {
                      uVar25 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar6 = (code *)swi(3);
                      uVar20 = (*pcVar6)();
                      return (bool)uVar20;
                    }
                    pTVar26 = local_5e8.CollectionUVs;
                    uVar24 = *(uint *)(local_6b0.Data + (longlong)(int)uVar24 * 4);
                    uVar25 = *(uint *)((longlong)local_4f8 + (longlong)pTVar37);
                    uVar2 = *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)&pTVar32[4].ArrayNum +
                               (ulonglong)((uVar25 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar25 * 2 & 0x1ff) * 4);
                    uVar3 = *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)&pTVar32[4].ArrayNum +
                               (ulonglong)((uVar25 & 0x7fffffff) >> 8) * 8) +
                             (ulonglong)(uVar25 * 2 + 1 & 0x1ff) * 4);
                    uVar25 = 0;
                    if ((int)uVar24 < *(int *)&(local_5e8.CollectionUVs)->field_0x18) {
                      uVar25 = ~uVar24 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar6 = (code *)swi(3);
                      uVar20 = (*pcVar6)();
                      return (bool)uVar20;
                    }
                    lVar39 = *(longlong *)&pTVar26->field_0x10;
                    pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                              ((longlong)&(pTVar37->AllocatorInstance).Data + 4);
                    *(undefined4 *)(lVar39 + (longlong)(int)uVar24 * 8) = uVar2;
                    *(undefined4 *)(lVar39 + 4 + (longlong)(int)uVar24 * 8) = uVar3;
                  } while ((longlong)pTVar37 < 0xc);
                  do {
                    uVar33 = uVar33 + 1;
                    pTVar37 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar33;
                    if ((int)uVar38 <= (int)uVar33) goto joined_r0x00014c9ef4c8;
                    sVar4 = *(short *)(*(longlong *)
                                        (local_308.TriangleRefCounts.RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar33 >> 9) * 8) +
                                      (ulonglong)(uVar33 & 0x1ff) * 2);
                  } while ((sVar4 == 0) || (sVar4 == -1));
                }
                bVar19 = Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<3583510206845289193>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                                    ,0x2e9,"UVTri != FIndex3i::Invalid()");
                lVar39 = local_668;
                if (bVar19) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                goto LAB_14c9ef6fc;
              }
            }
            else {
LAB_14c9ef6fc:
              if (local_69f != '\0') {
                local_528._s_0.X = 0.0;
                local_410._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
                local_410._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
                local_410._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
                local_528._s_0.W = dVar42;
                local_528._s_0.Y = 0.0;
                local_528._s_0.Z = 0.0;
                local_540._s_0.Z = (double)CONCAT44(uVar49,uVar48);
                local_540._0_4_ = uVar50;
                local_540._4_4_ = uVar51;
                local_540._8_4_ = uVar52;
                local_540._12_4_ = uVar53;
                UE::Geometry::TQuaternion<double>::SetFromTo
                          ((TQuaternion<double> *)&local_528._s_0,(TVector<double> *)&local_410._s_0
                           ,(TVector<double> *)&local_660._s_0);
                uVar38 = 0;
                if ((int)local_694 < local_680.ArrayNum) {
                  uVar38 = local_638;
                }
                if ((uVar38 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                local_628 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                            local_680.AllocatorInstance.Data;
                local_69c = *(uint *)(local_680.AllocatorInstance.Data + lVar39 + 8);
                uVar31 = (ulonglong)(int)local_69c;
                pTVar34 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                           (local_680.AllocatorInstance.Data + lVar39);
                local_548 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                            ((longlong)&(pTVar34->AllocatorInstance).Data + uVar31 * 4);
                while( true ) {
                  pTVar32 = local_548;
                  if (*(int *)((longlong)&local_628->ArrayNum + lVar39) != (int)uVar31) {
                    local_69e[0] = 0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (local_69e);
                  }
                  pFVar17 = local_5e8.Collection;
                  if (pTVar34 == pTVar32) break;
                  uVar38 = *(uint *)&(pTVar34->AllocatorInstance).Data;
                  lVar39 = (longlong)(int)uVar38;
                  uVar33 = 0;
                  if ((int)uVar38 < *(int *)&((local_5e8.Collection)->Indices).field_0x18) {
                    uVar33 = ~uVar38 >> 0x1f;
                  }
                  if ((uVar33 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  lVar35 = *(longlong *)&(pFVar17->Indices).field_0x10;
                  uVar38 = *(uint *)(lVar35 + lVar39 * 0xc);
                  lVar41 = (longlong)(int)uVar38;
                  uVar33 = *(uint *)(lVar35 + 4 + lVar39 * 0xc);
                  lVar36 = (longlong)(int)uVar33;
                  uVar24 = *(uint *)(lVar35 + 8 + lVar39 * 0xc);
                  lVar39 = (longlong)(int)uVar24;
                  uVar25 = 0;
                  if ((int)uVar38 < local_5e8.GlobalVertices.ArrayNum) {
                    uVar25 = ~uVar38 >> 0x1f;
                  }
                  if ((uVar25 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  uVar5 = local_540._s_0.Z;
                  dVar8 = (double)CONCAT44(local_540._4_4_,local_540._0_4_);
                  dVar42 = (double)CONCAT44(local_540._12_4_,local_540._8_4_);
                  dVar11 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar41 * 0x18);
                  dVar47 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar41 * 0x18 + 8);
                  dVar10 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar41 * 0x18 + 0x10)
                  ;
                  local_4a0 = dVar11;
                  dStack_498 = dVar47;
                  pTVar29 = UE::Geometry::TFrame3<double>::GetAxis
                                      ((TFrame3<double> *)&local_540._s_0,&local_3f8,0);
                  dVar12 = dVar10 - (double)uVar5;
                  dVar47 = dVar47 - dVar42;
                  dVar11 = dVar11 - dVar8;
                  dVar8 = (pTVar29->field0_0x0)._s_0.Z;
                  dVar42 = (pTVar29->field0_0x0)._s_0.Y;
                  dVar46 = (pTVar29->field0_0x0)._s_0.X;
                  local_490 = dVar10;
                  pTVar29 = UE::Geometry::TFrame3<double>::GetAxis
                                      ((TFrame3<double> *)&local_540._s_0,&local_3e0,1);
                  pTVar26 = local_5e8.CollectionUVs;
                  dVar10 = (pTVar29->field0_0x0)._s_0.Y;
                  dVar9 = (pTVar29->field0_0x0)._s_0.X;
                  dVar43 = (pTVar29->field0_0x0)._s_0.Z;
                  uVar25 = 0;
                  if ((int)uVar38 < *(int *)&(local_5e8.CollectionUVs)->field_0x18) {
                    uVar25 = ~uVar38 >> 0x1f;
                  }
                  if ((uVar25 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  lVar35 = *(longlong *)&pTVar26->field_0x10;
                  *(float *)(lVar35 + lVar41 * 8) =
                       (float)(dVar47 * dVar42 + dVar11 * dVar46 + dVar12 * dVar8);
                  *(float *)(lVar35 + 4 + lVar41 * 8) =
                       (float)(dVar47 * dVar10 + dVar11 * dVar9 + dVar12 * dVar43);
                  uVar38 = 0;
                  if ((int)uVar33 < local_5e8.GlobalVertices.ArrayNum) {
                    uVar38 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  uVar5 = local_540._s_0.Z;
                  dVar8 = (double)CONCAT44(local_540._4_4_,local_540._0_4_);
                  dVar42 = (double)CONCAT44(local_540._12_4_,local_540._8_4_);
                  dVar11 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar36 * 0x18);
                  dVar47 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar36 * 0x18 + 8);
                  dVar10 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar36 * 0x18 + 0x10)
                  ;
                  local_4a0 = dVar11;
                  dStack_498 = dVar47;
                  pTVar29 = UE::Geometry::TFrame3<double>::GetAxis
                                      ((TFrame3<double> *)&local_540._s_0,&local_3f8,0);
                  dVar12 = dVar10 - (double)uVar5;
                  dVar47 = dVar47 - dVar42;
                  dVar11 = dVar11 - dVar8;
                  dVar8 = (pTVar29->field0_0x0)._s_0.Z;
                  dVar42 = (pTVar29->field0_0x0)._s_0.Y;
                  dVar46 = (pTVar29->field0_0x0)._s_0.X;
                  local_490 = dVar10;
                  pTVar29 = UE::Geometry::TFrame3<double>::GetAxis
                                      ((TFrame3<double> *)&local_540._s_0,&local_3e0,1);
                  pTVar26 = local_5e8.CollectionUVs;
                  dVar10 = (pTVar29->field0_0x0)._s_0.Y;
                  dVar9 = (pTVar29->field0_0x0)._s_0.X;
                  dVar43 = (pTVar29->field0_0x0)._s_0.Z;
                  uVar38 = 0;
                  if ((int)uVar33 < *(int *)&(local_5e8.CollectionUVs)->field_0x18) {
                    uVar38 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  lVar35 = *(longlong *)&pTVar26->field_0x10;
                  *(float *)(lVar35 + lVar36 * 8) =
                       (float)(dVar47 * dVar42 + dVar11 * dVar46 + dVar12 * dVar8);
                  *(float *)(lVar35 + 4 + lVar36 * 8) =
                       (float)(dVar47 * dVar10 + dVar11 * dVar9 + dVar12 * dVar43);
                  uVar38 = 0;
                  if ((int)uVar24 < local_5e8.GlobalVertices.ArrayNum) {
                    uVar38 = ~uVar24 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  uVar5 = local_540._s_0.Z;
                  dVar8 = (double)CONCAT44(local_540._4_4_,local_540._0_4_);
                  dVar42 = (double)CONCAT44(local_540._12_4_,local_540._8_4_);
                  dVar11 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar39 * 0x18);
                  dVar47 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar39 * 0x18 + 8);
                  dVar10 = *(double *)
                            (local_5e8.GlobalVertices.AllocatorInstance.Data + lVar39 * 0x18 + 0x10)
                  ;
                  local_4a0 = dVar11;
                  dStack_498 = dVar47;
                  pTVar29 = UE::Geometry::TFrame3<double>::GetAxis
                                      ((TFrame3<double> *)&local_540._s_0,&local_3f8,0);
                  dVar12 = dVar10 - (double)uVar5;
                  dVar47 = dVar47 - dVar42;
                  dVar11 = dVar11 - dVar8;
                  dVar8 = (pTVar29->field0_0x0)._s_0.Z;
                  dVar42 = (pTVar29->field0_0x0)._s_0.Y;
                  dVar46 = (pTVar29->field0_0x0)._s_0.X;
                  local_490 = dVar10;
                  pTVar29 = UE::Geometry::TFrame3<double>::GetAxis
                                      ((TFrame3<double> *)&local_540._s_0,&local_3e0,1);
                  pTVar26 = local_5e8.CollectionUVs;
                  dVar10 = (pTVar29->field0_0x0)._s_0.Y;
                  dVar9 = (pTVar29->field0_0x0)._s_0.X;
                  dVar43 = (pTVar29->field0_0x0)._s_0.Z;
                  uVar38 = 0;
                  if ((int)uVar24 < *(int *)&(local_5e8.CollectionUVs)->field_0x18) {
                    uVar38 = ~uVar24 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  lVar35 = *(longlong *)&pTVar26->field_0x10;
                  pTVar34 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                            ((longlong)&(pTVar34->AllocatorInstance).Data + 4);
                  uVar31 = (ulonglong)local_69c;
                  *(float *)(lVar35 + lVar39 * 8) =
                       (float)(dVar47 * dVar42 + dVar11 * dVar46 + dVar12 * dVar8);
                  *(float *)(lVar35 + 4 + lVar39 * 8) =
                       (float)(dVar47 * dVar10 + dVar11 * dVar9 + dVar12 * dVar43);
                  lVar39 = local_668;
                }
              }
            }
            if (local_690.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_690.AllocatorInstance.Data);
            }
            UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_308);
            if (local_6b0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6b0.Data);
            }
          }
          local_694 = local_694 + 1;
          local_620 = local_620 + 1;
          if ((longlong)local_4d0 <= local_620) break;
          uVar31 = local_680._8_8_ & 0xffffffff;
        } while( true );
      }
      if (local_648.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_648.AllocatorInstance.Data);
      }
      if (local_368.bEnded == false) {
        FProgressCancel::FProgressScope::Done(&local_368);
      }
      if (local_368.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_368.SavedProgressData.Message.TextData.Reference + 0x10))();
      }
    }
    if ((param_7 == (FProgressCancel *)0x0) ||
       (bVar19 = FProgressCancel::Cancelled(param_7), !bVar19)) {
      pFVar27 = FText::FText(&local_420);
      fVar13 = __real_3f800000;
      FProgressCancel::CreateScopeTo(&local_338,param_7,__real_3f800000,pFVar27);
      if (local_420.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_420.TextData.Reference + 0x10))();
      }
      if (param_4 <= fVar13) {
        param_4 = fVar13;
      }
      local_600[0].GutterSize = 1.0;
      local_600[0].bPreserveScale = false;
      local_600[0].bPreserveRotation = false;
      local_600[0].bAllowFlips = false;
      local_600[0].bScaleIslandsByWorldSpaceTexelRatio = true;
      local_600[0].TextureResolution = (int)((float)param_3 / param_4);
      local_4c8 = &local_680;
      local_460 = &local_4c8;
      local_468 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FUVPacker::StandardPack'::__l2::<lambda_1>,void,int,TArray<int,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      bVar19 = UE::Geometry::FUVPacker::StandardPack
                         (local_600,(IUVMeshView *)&local_5e8,local_680.ArrayNum,
                          (TFunctionRef<void___cdecl(int,TArray<int,TSizedDefaultAllocator<32>_>_&)>
                           *)&local_468);
      if (local_338.bEnded == false) {
        FProgressCancel::FProgressScope::Done(&local_338);
      }
      if (local_338.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_338.SavedProgressData.Message.TextData.Reference + 0x10))();
      }
      goto LAB_14c9efe2d;
    }
  }
  bVar19 = false;
LAB_14c9efe2d:
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_680.AllocatorInstance.Data,
             local_680.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_680.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_680.AllocatorInstance.Data);
  }
  if (local_5e8.GlobalNormals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.GlobalNormals.AllocatorInstance.Data);
  }
  if (local_5e8.GlobalVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.GlobalVertices.AllocatorInstance.Data);
  }
  local_5e8._padding_ = (longlong)&___7IUVMeshView_FUVPacker_Geometry_UE__6B_;
  if (local_3b0.bEnded == false) {
    FProgressCancel::FProgressScope::Done(&local_3b0);
  }
  if (local_3b0.SavedProgressData.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3b0.SavedProgressData.Message.TextData.Reference + 0x10))();
    return bVar19;
  }
  return bVar19;
}

// UVLayout @ 14c9eff50

bool __cdecl
UE::PlanarCut::UVLayout
          (int param_1,FGeometryCollection *param_2,int param_3,float param_4,ETargetFaces param_5,
          TArrayView<int,int> *param_6,bool param_7,FProgressCancel *param_8)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<int,int> local_38;
  TArrayView<bool,int> local_28 [2];
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_38.DataPtr = param_6->DataPtr;
  local_38.ArrayNum = param_6->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_6->field_0xc;
  SetActiveTriangles(param_2,&local_58,true,param_5,&local_38);
  iStack_40 = local_58.ArrayNum;
  local_48 = local_58.AllocatorInstance.Data;
  if (local_58.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_28[0]._12_4_ = uStack_3c;
  local_28[0].ArrayNum = iStack_40;
  local_28[0].DataPtr = (bool *)local_48;
  bVar2 = UVLayout(param_1,param_2,param_3,param_4,local_28,param_7,param_8);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return bVar2;
}

