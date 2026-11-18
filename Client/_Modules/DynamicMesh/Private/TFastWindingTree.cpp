// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// branch_fast_winding_num @ 14c853010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::branch_fast_winding_num
          (TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *this_00;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FComponentMesh *pFVar9;
  FComponent *pFVar10;
  FDynamicMesh3 *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double local_res8;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108 [9];
  
  this_00 = this->Tree;
  dVar32 = 0.0;
  local_res8 = 0.0;
  uVar5 = *(uint *)(*(longlong *)
                     ((this_00->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  pFVar7 = (this_00->IndexList).Blocks.AllocatorInstance.Data;
  lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8);
  if ((int)uVar5 < this_00->TrianglesEnd) {
    uVar24 = *(uint *)(lVar8 + (ulonglong)(uVar5 & 0x1ff) * 4);
    if (0 < (int)uVar24) {
      uVar27 = (ulonglong)uVar24;
      do {
        uVar5 = uVar5 + 1;
        uVar24 = *(uint *)(*(longlong *)
                            ((this->Tree->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
        pFVar9 = this->Tree->Mesh;
        pFVar10 = pFVar9->Component;
        pFVar11 = pFVar9->Mesh;
        uVar21 = 0;
        if ((int)uVar24 < (pFVar10->Indices).ArrayNum) {
          uVar21 = ~uVar24 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          dVar32 = (double)(*pcVar12)();
          return dVar32;
        }
        pFVar7 = (pFVar11->Vertices).Blocks.AllocatorInstance.Data;
        dVar32 = (param_2->field0_0x0)._s_0.X;
        dVar2 = (param_2->field0_0x0)._s_0.Y;
        dVar3 = (param_2->field0_0x0)._s_0.Z;
        uVar24 = *(uint *)((pFVar10->Indices).AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
        uVar22 = (ulonglong)(uVar24 & 0x1ff);
        lVar8 = *(longlong *)
                 ((pFVar11->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8)
        ;
        uVar24 = *(uint *)(lVar8 + 8 + uVar22 * 0xc);
        uVar21 = *(uint *)(lVar8 + uVar22 * 0xc);
        uVar6 = *(uint *)(lVar8 + 4 + uVar22 * 0xc);
        uVar22 = (ulonglong)(uVar24 & 0x1ff);
        auVar4 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar7 + (ulonglong)(uVar24 >> 9) * 8) + uVar22 * 0x18);
        uVar26 = (ulonglong)(uVar6 & 0x1ff);
        dVar19 = *(double *)
                  (*(longlong *)(pFVar7 + (ulonglong)(uVar24 >> 9) * 8) + 0x10 + uVar22 * 0x18) -
                 dVar3;
        dVar16 = auVar4._0_8_ - dVar32;
        dVar13 = auVar4._8_8_ - dVar2;
        pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) + uVar26 * 0x18);
        dVar18 = *(double *)
                  (*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar26 * 0x18) -
                 dVar3;
        dVar15 = *pdVar1 - dVar32;
        dVar17 = pdVar1[1] - dVar2;
        uVar22 = (ulonglong)(uVar21 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar21 >> 9) * 8) + uVar22 * 0x18);
        dVar3 = *(double *)
                 (*(longlong *)(pFVar7 + (ulonglong)(uVar21 >> 9) * 8) + 0x10 + uVar22 * 0x18) -
                dVar3;
        dVar32 = *pdVar1 - dVar32;
        dVar2 = pdVar1[1] - dVar2;
        dVar33 = SQRT(dVar2 * dVar2 + dVar32 * dVar32 + dVar3 * dVar3);
        dVar14 = SQRT(dVar17 * dVar17 + dVar15 * dVar15 + dVar18 * dVar18);
        dVar32 = atan2(((dVar19 * dVar17 - dVar13 * dVar18) * dVar32 -
                       (dVar19 * dVar15 - dVar16 * dVar18) * dVar2) +
                       (dVar13 * dVar15 - dVar16 * dVar17) * dVar3,
                       SQRT(dVar13 * dVar13 + dVar16 * dVar16 + dVar19 * dVar19) *
                       (dVar14 * dVar33 + dVar18 * dVar3 + dVar17 * dVar2 + dVar15 * dVar32) +
                       (dVar13 * dVar17 + dVar16 * dVar15 + dVar19 * dVar18) * dVar33 +
                       (dVar13 * dVar2 + dVar16 * dVar32 + dVar19 * dVar3) * dVar14);
        dVar32 = local_res8 + dVar32 * __real_c000000000000000;
        uVar27 = uVar27 - 1;
        local_res8 = dVar32;
      } while (uVar27 != 0);
    }
    dVar32 = dVar32 * ___real_3fb45f306dc9c883;
  }
  else {
    uVar24 = *(uint *)(lVar8 + (ulonglong)(uVar5 & 0x1ff) * 4);
    if ((int)uVar24 < 0) {
      uVar24 = ~uVar24;
      bVar20 = TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::box_contains
                         (this_00,uVar24,param_2);
      if ((bVar20) || (bVar20 = can_use_fast_winding_cache(this,uVar24,param_2), !bVar20)) {
        local_148._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_148._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_148._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar32 = branch_fast_winding_num(this,uVar24,(TVector<double> *)&local_148._s_0);
      }
      else {
        dVar32 = evaluate_box_fast_winding_cache(this,uVar24,param_2);
      }
    }
    else {
      iVar25 = uVar24 - 1;
      iVar23 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                       (ulonglong)(uVar5 + 1 & 0x1ff) * 4) + -1;
      bVar20 = TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::box_contains
                         (this_00,iVar25,param_2);
      if ((bVar20) || (bVar20 = can_use_fast_winding_cache(this,iVar25,param_2), !bVar20)) {
        local_128._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_128._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_128._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar32 = branch_fast_winding_num(this,iVar25,(TVector<double> *)&local_128._s_0);
        uVar28 = SUB84(dVar32,0);
        uVar30 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      else {
        dVar32 = evaluate_box_fast_winding_cache(this,iVar25,param_2);
        uVar28 = SUB84(dVar32,0);
        uVar30 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      bVar20 = TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh>::box_contains
                         (this->Tree,iVar23,param_2);
      if ((bVar20) || (bVar20 = can_use_fast_winding_cache(this,iVar23,param_2), !bVar20)) {
        local_108[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
        local_108[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
        local_108[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar32 = branch_fast_winding_num(this,iVar23,(TVector<double> *)&local_108[0]._s_0);
        uVar29 = SUB84(dVar32,0);
        uVar31 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      else {
        dVar32 = evaluate_box_fast_winding_cache(this,iVar23,param_2);
        uVar29 = SUB84(dVar32,0);
        uVar31 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      dVar32 = (double)CONCAT44(uVar31,uVar29) + (double)CONCAT44(uVar30,uVar28);
    }
  }
  return dVar32;
}

// build_fast_winding_cache @ 14c853580

int __thiscall
UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::build_fast_winding_cache
          (TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,int param_2,
          int param_3,TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_4,
          FMeshTriInfoCache *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  TVector<double>_u_0 local_c8;
  double dStack_b0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 TStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  
  if ((param_4->field0_0x0).TypedValue.ArrayMax != -1) {
    pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_4->field0_0x0).TypedValue.ArrayNum = 0;
    (param_4->field0_0x0).TypedValue.ArrayMax = -1;
  }
  pTVar3 = this->Tree;
  pFVar2 = (pTVar3->IndexList).Blocks.AllocatorInstance.Data;
  uVar11 = *(uint *)(*(longlong *)
                      ((pTVar3->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  uVar13 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                    (ulonglong)(uVar11 & 0x1ff) * 4);
  if ((int)uVar11 < pTVar3->TrianglesEnd) {
    return uVar13;
  }
  iVar8 = param_2 + 1;
  if ((int)uVar13 < 0) {
    iVar8 = build_fast_winding_cache(this,~uVar13,iVar8,param_3,param_4,param_5);
    return iVar8;
  }
  local_158 = CONCAT44(local_158._4_4_,uVar13 - 1);
  iVar9 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                  (ulonglong)(uVar11 + 1 & 0x1ff) * 4) + -1;
  local_168.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_168.TypedValue.ArrayNum = 0;
  local_168.TypedValue.ArrayMax = -1;
  iVar10 = build_fast_winding_cache(this,uVar13 - 1,iVar8,param_3,param_4,param_5);
  iVar8 = build_fast_winding_cache
                    (this,iVar9,iVar8,param_3,
                     (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_168.TypedValue,
                     param_5);
  if (param_2 == 0) goto LAB_14c853afe;
  if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
    if (local_168.TypedValue.ArrayMax == -1) {
      if (iVar10 + iVar8 <= param_3) goto LAB_14c853afe;
      pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->field0_0x0).TypedValue.ArrayNum = 0;
      (param_4->field0_0x0).TypedValue.ArrayMax = 0;
      collect_triangles(this,(int)local_158,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
      goto LAB_14c85374e;
    }
    collect_triangles(this,(int)local_158,&local_168.TypedValue);
    if (&local_168 != &param_4->field0_0x0) {
      if (local_168.TypedValue.ArrayMax == -1) {
        if ((param_4->field0_0x0).TypedValue.ArrayMax != -1) {
          pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_4->field0_0x0).TypedValue.ArrayNum = 0;
          (param_4->field0_0x0).TypedValue.ArrayMax = -1;
        }
      }
      else {
        pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        uVar6 = local_168.TypedValue.ArrayMax;
        (param_4->field0_0x0).TypedValue.AllocatorInstance.Data =
             (FScriptContainerElement *)local_168.TypedValue.AllocatorInstance.Data;
        (param_4->field0_0x0).TypedValue.ArrayNum = local_168.TypedValue.ArrayNum;
        local_168.TypedValue.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        (param_4->field0_0x0).TypedValue.ArrayMax = local_168.TypedValue.ArrayMax;
        local_168.TypedValue.ArrayNum = 0;
        local_168.TypedValue.ArrayMax = 0;
        if ((uVar6 == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
      }
    }
  }
  else {
LAB_14c85374e:
    iVar1 = (param_4->field0_0x0).TypedValue.ArrayMax;
    if (local_168.TypedValue.ArrayMax == -1) {
      if ((iVar1 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      collect_triangles(this,iVar9,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
    }
    else {
      if ((iVar1 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if ((local_168.TypedValue.ArrayMax == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)param_4,&local_168.TypedValue);
    }
  }
  if (param_3 < iVar8 + iVar10) {
    if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TriArray.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                         ,0x239,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if (((param_4->field0_0x0).TypedValue.ArrayMax == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
    }
    uVar13 = param_1 - this->FastWindingCacheOffset;
    uVar11 = 0;
    if ((int)uVar13 < (this->FastWindingCache).ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    if (((this->FastWindingCache).AllocatorInstance.Data[(longlong)(int)uVar13 * 0x88 + 0x80] !=
         (FScriptContainerElement)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FastWindingCache[IBox - FastWindingCacheOffset].bValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x259,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    local_48 = 0;
    FastTriWinding::ComputeCoeffs<UE::MeshAutoRepair::FComponentMesh>
              (this->Tree->Mesh,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4,param_5,
               (TVector<double> *)&local_c8._s_0,&dStack_b0,(TVector<double> *)&local_a8._s_0,
               (TMatrix3<double> *)&TStack_90._s_0,0x10);
    uVar13 = param_1 - this->FastWindingCacheOffset;
    local_140 = local_c8._s_0.Z;
    dStack_138 = dStack_b0;
    local_130 = local_a8._s_0.X;
    dStack_128 = local_a8._s_0.Y;
    uVar11 = 0;
    if ((int)uVar13 < (this->FastWindingCache).ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    local_48 = 1;
    local_120 = local_a8._s_0.Z;
    dStack_118 = TStack_90._s_0.X;
    local_110 = TStack_90._s_0.Y;
    dStack_108 = TStack_90._s_0.Z;
    local_100 = local_78;
    uStack_f8 = uStack_70;
    local_f0 = local_68;
    uStack_e8 = uStack_60;
    local_158 = CONCAT71(uStack_47,1);
    local_150 = local_c8._0_4_;
    uStack_14c = local_c8._4_4_;
    uStack_148 = local_c8._8_4_;
    uStack_144 = local_c8._12_4_;
    local_e0 = local_58;
    uStack_d8 = uStack_50;
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    lVar12 = (longlong)(int)uVar13 * 0x88;
    pFVar4 = (this->FastWindingCache).AllocatorInstance.Data;
    pFVar2 = pFVar4 + lVar12;
    *(undefined4 *)pFVar2 = local_150;
    *(undefined4 *)(pFVar2 + 4) = uStack_14c;
    *(undefined4 *)(pFVar2 + 8) = uStack_148;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_144;
    *(double *)(pFVar4 + lVar12 + 0x10) = local_140;
    *(double *)(pFVar4 + lVar12 + 0x10 + 8) = dStack_138;
    *(double *)(pFVar4 + lVar12 + 0x20) = local_130;
    *(double *)(pFVar4 + lVar12 + 0x20 + 8) = dStack_128;
    *(double *)(pFVar4 + lVar12 + 0x30) = local_120;
    *(double *)(pFVar4 + lVar12 + 0x30 + 8) = dStack_118;
    *(double *)(pFVar4 + lVar12 + 0x40) = local_110;
    *(double *)(pFVar4 + lVar12 + 0x40 + 8) = dStack_108;
    *(undefined8 *)(pFVar4 + lVar12 + 0x50) = local_100;
    *(undefined8 *)(pFVar4 + lVar12 + 0x50 + 8) = uStack_f8;
    *(undefined8 *)(pFVar4 + lVar12 + 0x60) = local_f0;
    *(undefined8 *)(pFVar4 + lVar12 + 0x60 + 8) = uStack_e8;
    *(undefined8 *)(pFVar4 + lVar12 + 0x70) = local_e0;
    *(undefined8 *)(pFVar4 + lVar12 + 0x70 + 8) = uStack_d8;
    *(undefined8 *)(pFVar4 + lVar12 + 0x80) = local_158;
  }
LAB_14c853afe:
  if ((local_168.TypedValue.ArrayMax != -1) &&
     (local_168.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_168.TypedValue.AllocatorInstance.Data);
  }
  return iVar8 + iVar10;
}

// build_fast_winding_cache @ 14c853b50

void __thiscall
UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::build_fast_winding_cache
          (TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *this)

{
  int *piVar1;
  FComponentMesh *pFVar2;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  <lambda_1> local_res8;
  FMeshTriInfoCache local_138;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_e8;
  FComponentMesh *local_d8;
  FMeshTriInfoCache *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FComponentMesh **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  
  uVar9 = 0;
  pFVar2 = this->Tree->Mesh;
  local_138.Centroids.CurBlock = 0;
  local_138.Centroids.CurBlockUsed = 0;
  local_138.Centroids.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Centroids.Blocks.ArrayNum = 0;
  local_138.Centroids.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_138.Centroids);
  local_138.Normals.CurBlock = 0;
  local_138.Normals.CurBlockUsed = 0;
  local_138.Normals.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Normals.Blocks.ArrayNum = 0;
  local_138.Normals.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_138.Normals);
  local_138.Areas.CurBlock = 0;
  local_138.Areas.CurBlockUsed = 0;
  local_138.Areas.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Areas.Blocks.ArrayNum = 0;
  local_138.Areas.Blocks.ArrayMax = 0;
  TDynamicVector<double,512>::AddAllocatedBlock(&local_138.Areas);
  uVar10 = (pFVar2->Component->Indices).ArrayNum;
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Centroids,uVar10);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Normals,uVar10);
  TDynamicVector<double,512>::Resize(&local_138.Areas,uVar10);
  local_d0 = &local_138;
  local_c8.DataPtr = (void **)0x0;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::MeshAutoRepair::FComponentMesh>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_d8;
  uVar11 = 0;
  local_c8.ArrayNum = 0;
  local_d8 = pFVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar10,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_res8,
             None,&local_c8);
  pTVar3 = this->Tree;
  this->FastWindingCacheOffset = 0;
  uVar10 = (pTVar3->BoxToIndex).CurBlock;
  uVar8 = (pTVar3->BoxToIndex).CurBlockUsed;
  if (uVar10 * 0x200 + uVar8 != 0) {
    do {
      uVar11 = (uint)uVar9;
      if (pTVar3->TrianglesEnd <=
          *(int *)(*(longlong *)
                    ((pTVar3->BoxToIndex).Blocks.AllocatorInstance.Data + (uVar9 >> 9) * 8) +
                  (ulonglong)(uVar11 & 0x1ff) * 4)) break;
      uVar11 = uVar11 + 1;
      this->FastWindingCacheOffset = uVar11;
      uVar9 = (ulonglong)uVar11;
      uVar10 = (pTVar3->BoxToIndex).CurBlock;
      uVar8 = (pTVar3->BoxToIndex).CurBlockUsed;
    } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(uVar10 * 0x200 + uVar8));
  }
  uVar8 = (uVar10 * 0x200 - uVar11) + uVar8;
  uVar9 = (ulonglong)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->FastWindingCache).ArrayMax;
  (this->FastWindingCache).ArrayNum = 0;
  if (*piVar1 != uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar8,&(this->FastWindingCache).AllocatorInstance,0,piVar1);
  }
  (this->FastWindingCache).ArrayNum = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_28 = 0;
  if (*piVar1 != uVar8) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar8,&(this->FastWindingCache).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar8) {
    do {
      pFVar7 = (this->FastWindingCache).AllocatorInstance.Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar7 + (longlong)*piVar1 * 0x88)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->FastWindingCache).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x888,&(this->FastWindingCache).AllocatorInstance,piVar1);
      }
      (this->FastWindingCache).ArrayNum = iVar6 + 1;
      pFVar7 = (this->FastWindingCache).AllocatorInstance.Data + (longlong)iVar6 * 0x88;
      *(undefined8 *)pFVar7 = local_a8;
      *(undefined8 *)(pFVar7 + 8) = uStack_a0;
      *(undefined8 *)(pFVar7 + 0x10) = local_98;
      *(undefined8 *)(pFVar7 + 0x18) = uStack_90;
      *(undefined8 *)(pFVar7 + 0x20) = local_88;
      *(undefined8 *)(pFVar7 + 0x28) = uStack_80;
      *(undefined8 *)(pFVar7 + 0x30) = local_78;
      *(undefined8 *)(pFVar7 + 0x38) = uStack_70;
      *(undefined8 *)(pFVar7 + 0x40) = local_68;
      *(undefined8 *)(pFVar7 + 0x48) = uStack_60;
      *(undefined8 *)(pFVar7 + 0x50) = local_58;
      *(undefined8 *)(pFVar7 + 0x58) = uStack_50;
      *(undefined8 *)(pFVar7 + 0x60) = local_48;
      *(undefined8 *)(pFVar7 + 0x68) = uStack_40;
      *(undefined8 *)(pFVar7 + 0x70) = local_38;
      *(undefined8 *)(pFVar7 + 0x78) = uStack_30;
      *(ulonglong *)(pFVar7 + 0x80) = CONCAT71(uStack_27,local_28);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_e8.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_e8.TypedValue.ArrayNum = 0;
  local_e8.TypedValue.ArrayMax = -1;
  build_fast_winding_cache
            (this,this->Tree->RootIndex,0,1,
             (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_e8.TypedValue,&local_138)
  ;
  if ((local_e8.TypedValue.ArrayMax != -1) &&
     (local_e8.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_e8.TypedValue.AllocatorInstance.Data);
  }
  TDynamicVector<double,512>::Empty(&local_138.Areas,0);
  if (local_138.Areas.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Areas.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_138.Normals,0);
  if (local_138.Normals.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Normals.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_138.Centroids,0);
  if (local_138.Centroids.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Centroids.Blocks.AllocatorInstance.Data);
  }
  return;
}

// can_use_fast_winding_cache @ 14c853f10

bool __thiscall
UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::can_use_fast_winding_cache
          (TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = param_1 - this->FastWindingCacheOffset;
  if (-1 < (int)uVar7) {
    uVar5 = 0;
    if ((int)uVar7 < (this->FastWindingCache).ArrayNum) {
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
    lVar6 = (longlong)(int)uVar7 * 0x88;
    pFVar1 = (this->FastWindingCache).AllocatorInstance.Data;
    if (pFVar1[lVar6 + 0x80] != (FScriptContainerElement)0x0) {
      dVar10 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar1 + lVar6);
      dVar11 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar1 + lVar6 + 8);
      dVar8 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar1 + lVar6 + 0x10);
      dVar9 = *(double *)(pFVar1 + lVar6 + 0x18) * this->FWNBeta;
      return dVar9 * dVar9 < dVar11 * dVar11 + dVar10 * dVar10 + dVar8 * dVar8;
    }
  }
  return false;
}

// collect_triangles @ 14c854010

void __thiscall
UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::collect_triangles
          (TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TMeshAABBTree3<UE::MeshAutoRepair::FComponentMesh> *pTVar8;
  ulonglong uVar9;
  
  pTVar8 = this->Tree;
  uVar7 = *(uint *)(*(longlong *)
                     ((pTVar8->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (pTVar8->TrianglesEnd <= (int)uVar7) {
    do {
      uVar5 = *(uint *)(*(longlong *)
                         ((pTVar8->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
      if ((int)uVar5 < 0) {
        uVar5 = ~uVar5;
      }
      else {
        collect_triangles(this,uVar5 - 1,param_2);
        pTVar8 = this->Tree;
        uVar5 = *(int *)(*(longlong *)
                          ((pTVar8->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar7 + 1 >> 9) * 8) + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1
        ;
      }
      uVar7 = *(uint *)(*(longlong *)
                         ((pTVar8->BoxToIndex).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
    } while (pTVar8->TrianglesEnd <= (int)uVar7);
  }
  uVar5 = *(uint *)(*(longlong *)
                     ((pTVar8->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  if (0 < (int)uVar5) {
    uVar9 = (ulonglong)uVar5;
    do {
      uVar7 = uVar7 + 1;
      pFVar1 = (FScriptContainerElement *)
               (*(longlong *)
                 ((this->Tree->IndexList).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
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
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// evaluate_box_fast_winding_cache @ 14c854390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::MeshAutoRepair::FComponentMesh>::evaluate_box_fast_winding_cache
          (TFastWindingTree<UE::MeshAutoRepair::FComponentMesh> *this,int param_1,
          TVector<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  
  uVar5 = param_1 - this->FastWindingCacheOffset;
  uVar4 = 0;
  if ((int)uVar5 < (this->FastWindingCache).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar7 = (double)(*pcVar1)();
      return dVar7;
    }
  }
  pFVar6 = (this->FastWindingCache).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x88;
  if (this->FWNApproxOrder == 2) {
    dVar7 = FastTriWinding::EvaluateOrder2Approx
                      ((TVector<double> *)pFVar6,(TVector<double> *)(pFVar6 + 0x20),
                       (TMatrix3<double> *)(pFVar6 + 0x38),param_2);
    return dVar7;
  }
  dVar11 = *(double *)&pFVar6->field_0x0 - (param_2->field0_0x0)._s_0.X;
  dVar10 = *(double *)(pFVar6 + 8) - (param_2->field0_0x0)._s_0.Y;
  dVar2 = *(double *)(pFVar6 + 0x10) - (param_2->field0_0x0)._s_0.Z;
  auVar8._0_8_ = dVar11 * dVar11;
  auVar8._8_8_ = 0;
  dVar7 = dVar10 * dVar10 + auVar8._0_8_ + dVar2 * dVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar7;
  auVar9 = sqrtpd(auVar8,auVar9);
  dVar7 = __real_3ff0000000000000 / (auVar9._0_8_ * dVar7);
  return (dVar7 * dVar10 * *(double *)(pFVar6 + 0x28) + dVar7 * dVar11 * *(double *)(pFVar6 + 0x20)
         + dVar7 * dVar2 * *(double *)&pFVar6[0x30].field_0x0) * ___real_3fb45f306dc9c883;
}

