// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 16

// Build @ 143389820

void __thiscall
UE::Geometry::
TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::Build
          (void *this,bool param_1)

{
  void *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)this == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                       ,0x16c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(void **)this;
  if ((*(int *)((longlong)this_00 + 0xbc) < 0) || (*(longlong *)((longlong)this_00 + 0x10) != 0)) {
    TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
    BuildTopDown(this_00,false);
    *(longlong *)((longlong)this_00 + 0x10) = 0;
  }
  if ((param_1) || (*(longlong *)((longlong)this + 0x20) != *(longlong *)(*(longlong *)this + 0x10))
     ) {
    build_fast_winding_cache(this);
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)(*(longlong *)this + 0x10);
  }
  return;
}

// branch_fast_winding_num @ 1433e3fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::
TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
branch_fast_winding_num(void *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  void *this_00;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  TVector<double> *pTVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double local_res8;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108 [9];
  
  this_00 = *(void **)this;
  dVar31 = 0.0;
  local_res8 = 0.0;
  uVar6 = *(uint *)(*(longlong *)
                     (*(longlong *)((longlong)this_00 + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8)
                   + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar7 = *(longlong *)(*(longlong *)((longlong)this_00 + 0xa8) + (ulonglong)(uVar6 >> 9) * 8);
  if ((int)uVar6 < *(int *)((longlong)this_00 + 0xb8)) {
    uVar22 = *(uint *)(lVar7 + (ulonglong)(uVar6 & 0x1ff) * 4);
    if (0 < (int)uVar22) {
      uVar26 = (ulonglong)uVar22;
      do {
        uVar6 = uVar6 + 1;
        plVar8 = *(longlong **)(*(longlong *)this + 8);
        lVar7 = plVar8[1];
        uVar22 = *(uint *)(*(longlong *)
                            (*(longlong *)(*(longlong *)this + 0xa8) + (ulonglong)(uVar6 >> 9) * 8)
                          + (ulonglong)(uVar6 & 0x1ff) * 4);
        uVar19 = 0;
        if ((int)uVar22 < *(int *)(lVar7 + 0x98)) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          dVar31 = (double)(*pcVar10)();
          return dVar31;
        }
        lVar7 = *(longlong *)(lVar7 + 0x90);
        dVar31 = (param_2->field0_0x0)._s_0.X;
        dVar2 = (param_2->field0_0x0)._s_0.Y;
        uVar3 = *(ulonglong *)(lVar7 + (longlong)(int)uVar22 * 0xc);
        uVar22 = *(uint *)(lVar7 + 8 + (longlong)(int)uVar22 * 0xc);
        dVar4 = (param_2->field0_0x0)._s_0.Z;
        lVar7 = *(longlong *)(*plVar8 + 0x10);
        uVar20 = (ulonglong)(uVar22 & 0x1ff);
        lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar22 >> 9) * 8);
        auVar5 = *(undefined1 (*) [16])(lVar9 + uVar20 * 0x18);
        uVar24 = (ulonglong)((uint)(uVar3 >> 0x20) & 0x1ff);
        dVar17 = *(double *)(lVar9 + 0x10 + uVar20 * 0x18) - dVar4;
        dVar14 = auVar5._0_8_ - dVar31;
        dVar11 = auVar5._8_8_ - dVar2;
        lVar9 = *(longlong *)(lVar7 + (uVar3 >> 0x29) * 8);
        pdVar1 = (double *)(lVar9 + uVar24 * 0x18);
        dVar16 = *(double *)(lVar9 + 0x10 + uVar24 * 0x18) - dVar4;
        dVar13 = *pdVar1 - dVar31;
        dVar15 = pdVar1[1] - dVar2;
        uVar20 = (ulonglong)((uint)uVar3 & 0x1ff);
        lVar7 = *(longlong *)(lVar7 + ((uVar3 & 0xffffffff) >> 9) * 8);
        pdVar1 = (double *)(lVar7 + uVar20 * 0x18);
        dVar4 = *(double *)(lVar7 + 0x10 + uVar20 * 0x18) - dVar4;
        dVar31 = *pdVar1 - dVar31;
        dVar2 = pdVar1[1] - dVar2;
        dVar32 = SQRT(dVar2 * dVar2 + dVar31 * dVar31 + dVar4 * dVar4);
        dVar12 = SQRT(dVar15 * dVar15 + dVar13 * dVar13 + dVar16 * dVar16);
        dVar31 = atan2(((dVar17 * dVar15 - dVar11 * dVar16) * dVar31 -
                       (dVar17 * dVar13 - dVar14 * dVar16) * dVar2) +
                       (dVar11 * dVar13 - dVar14 * dVar15) * dVar4,
                       SQRT(dVar11 * dVar11 + dVar14 * dVar14 + dVar17 * dVar17) *
                       (dVar12 * dVar32 + dVar16 * dVar4 + dVar15 * dVar2 + dVar13 * dVar31) +
                       (dVar11 * dVar15 + dVar14 * dVar13 + dVar17 * dVar16) * dVar32 +
                       (dVar11 * dVar2 + dVar14 * dVar31 + dVar17 * dVar4) * dVar12);
        dVar31 = local_res8 + dVar31 * __real_c000000000000000;
        uVar26 = uVar26 - 1;
        local_res8 = dVar31;
      } while (uVar26 != 0);
    }
    dVar31 = dVar31 * ___real_3fb45f306dc9c883;
  }
  else {
    uVar22 = *(uint *)(lVar7 + (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)uVar22 < 0) {
      uVar22 = ~uVar22;
      pTVar25 = param_2;
      bVar18 = TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>
               ::box_contains(this_00,uVar22,param_2);
      if ((bVar18) || (bVar18 = can_use_fast_winding_cache(this,uVar22,pTVar25), !bVar18)) {
        local_148._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_148._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_148._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar31 = branch_fast_winding_num(this,uVar22,(TVector<double> *)&local_148._s_0);
      }
      else {
        dVar31 = evaluate_box_fast_winding_cache(this,uVar22,param_2);
      }
    }
    else {
      iVar23 = uVar22 - 1;
      iVar21 = *(int *)(*(longlong *)
                         (*(longlong *)((longlong)this_00 + 0xa8) + (ulonglong)(uVar6 + 1 >> 9) * 8)
                       + (ulonglong)(uVar6 + 1 & 0x1ff) * 4) + -1;
      pTVar25 = param_2;
      bVar18 = TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>
               ::box_contains(this_00,iVar23,param_2);
      if ((bVar18) || (bVar18 = can_use_fast_winding_cache(this,iVar23,pTVar25), !bVar18)) {
        local_128._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_128._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_128._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar31 = branch_fast_winding_num(this,iVar23,(TVector<double> *)&local_128._s_0);
        uVar27 = SUB84(dVar31,0);
        uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
      }
      else {
        dVar31 = evaluate_box_fast_winding_cache(this,iVar23,param_2);
        uVar27 = SUB84(dVar31,0);
        uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
      }
      pTVar25 = param_2;
      bVar18 = TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>
               ::box_contains(*(void **)this,iVar21,param_2);
      if ((bVar18) || (bVar18 = can_use_fast_winding_cache(this,iVar21,pTVar25), !bVar18)) {
        local_108[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
        local_108[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
        local_108[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar31 = branch_fast_winding_num(this,iVar21,(TVector<double> *)&local_108[0]._s_0);
        uVar28 = SUB84(dVar31,0);
        uVar30 = (undefined4)((ulonglong)dVar31 >> 0x20);
      }
      else {
        dVar31 = evaluate_box_fast_winding_cache(this,iVar21,param_2);
        uVar28 = SUB84(dVar31,0);
        uVar30 = (undefined4)((ulonglong)dVar31 >> 0x20);
      }
      dVar31 = (double)CONCAT44(uVar30,uVar28) + (double)CONCAT44(uVar29,uVar27);
    }
  }
  return dVar31;
}

// branch_fast_winding_num @ 1433e4550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this_00;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double local_res8;
  TVector<double>_u_0 local_108 [9];
  
  this_00 = this->Tree;
  dVar33 = 0.0;
  local_res8 = 0.0;
  pFVar9 = (this_00->IndexList).Blocks.AllocatorInstance.Data;
  uVar6 = *(uint *)(*(longlong *)
                     ((this_00->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if ((int)uVar6 < this_00->TrianglesEnd) {
    uVar26 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 4);
    if (0 < (int)uVar26) {
      dVar2 = (param_2->field0_0x0)._s_0.X;
      uVar25 = (ulonglong)uVar26;
      dVar3 = (param_2->field0_0x0)._s_0.Y;
      dVar4 = (param_2->field0_0x0)._s_0.Z;
      pFVar10 = (this_00->Mesh->Vertices).Blocks.AllocatorInstance.Data;
      pFVar11 = (this_00->Mesh->Triangles).Blocks.AllocatorInstance.Data;
      do {
        uVar6 = uVar6 + 1;
        uVar26 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8) +
                          (ulonglong)(uVar6 & 0x1ff) * 4);
        uVar23 = (ulonglong)(uVar26 & 0x1ff);
        lVar12 = *(longlong *)(pFVar11 + (ulonglong)(uVar26 >> 9) * 8);
        uVar26 = *(uint *)(lVar12 + 8 + uVar23 * 0xc);
        uVar7 = *(uint *)(lVar12 + uVar23 * 0xc);
        uVar8 = *(uint *)(lVar12 + 4 + uVar23 * 0xc);
        uVar23 = (ulonglong)(uVar26 & 0x1ff);
        auVar5 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar10 + (ulonglong)(uVar26 >> 9) * 8) + uVar23 * 0x18);
        uVar28 = (ulonglong)(uVar8 & 0x1ff);
        dVar21 = *(double *)
                  (*(longlong *)(pFVar10 + (ulonglong)(uVar26 >> 9) * 8) + 0x10 + uVar23 * 0x18) -
                 dVar4;
        dVar15 = auVar5._0_8_ - dVar2;
        dVar33 = auVar5._8_8_ - dVar3;
        pdVar1 = (double *)(*(longlong *)(pFVar10 + (ulonglong)(uVar8 >> 9) * 8) + uVar28 * 0x18);
        dVar19 = *(double *)
                  (*(longlong *)(pFVar10 + (ulonglong)(uVar8 >> 9) * 8) + 0x10 + uVar28 * 0x18) -
                 dVar4;
        local_108[0]._8_4_ = auVar5._8_4_;
        local_108[0]._0_8_ = dVar33;
        local_108[0]._12_4_ = auVar5._12_4_;
        dVar14 = *pdVar1 - dVar2;
        dVar17 = pdVar1[1] - dVar3;
        uVar23 = (ulonglong)(uVar7 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar10 + (ulonglong)(uVar7 >> 9) * 8) + uVar23 * 0x18);
        dVar20 = *(double *)
                  (*(longlong *)(pFVar10 + (ulonglong)(uVar7 >> 9) * 8) + 0x10 + uVar23 * 0x18) -
                 dVar4;
        dVar16 = *pdVar1 - dVar2;
        dVar18 = pdVar1[1] - dVar3;
        dVar34 = SQRT(dVar16 * dVar16 + dVar18 * dVar18 + dVar20 * dVar20);
        dVar13 = SQRT(dVar17 * dVar17 + dVar14 * dVar14 + dVar19 * dVar19);
        dVar33 = atan2(((dVar21 * dVar17 - dVar33 * dVar19) * dVar16 -
                       (dVar21 * dVar14 - dVar15 * dVar19) * dVar18) +
                       (dVar33 * dVar14 - dVar15 * dVar17) * dVar20,
                       SQRT(dVar33 * dVar33 + dVar15 * dVar15 + dVar21 * dVar21) *
                       (dVar13 * dVar34 + dVar19 * dVar20 + dVar17 * dVar18 + dVar14 * dVar16) +
                       (dVar33 * dVar17 + dVar15 * dVar14 + dVar21 * dVar19) * dVar34 +
                       (dVar33 * dVar18 + dVar15 * dVar16 + dVar21 * dVar20) * dVar13);
        dVar33 = local_res8 + dVar33 * __real_c000000000000000;
        uVar25 = uVar25 - 1;
        local_res8 = dVar33;
      } while (uVar25 != 0);
    }
    dVar33 = dVar33 * ___real_3fb45f306dc9c883;
  }
  else {
    uVar26 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)uVar26 < 0) {
      uVar26 = ~uVar26;
      bVar22 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::box_contains(this_00,uVar26,param_2);
      if ((bVar22) || (bVar22 = can_use_fast_winding_cache(this,uVar26,param_2), !bVar22)) {
        local_108[0]._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
        local_108[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar33 = branch_fast_winding_num(this,uVar26,(TVector<double> *)&local_108[0]._s_0);
      }
      else {
        dVar33 = evaluate_box_fast_winding_cache(this,uVar26,param_2);
      }
    }
    else {
      iVar27 = uVar26 - 1;
      iVar24 = *(int *)(*(longlong *)(pFVar9 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                       (ulonglong)(uVar6 + 1 & 0x1ff) * 4) + -1;
      bVar22 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::box_contains(this_00,iVar27,param_2);
      if ((bVar22) || (bVar22 = can_use_fast_winding_cache(this,iVar27,param_2), !bVar22)) {
        local_108[0]._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
        local_108[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar33 = branch_fast_winding_num(this,iVar27,(TVector<double> *)&local_108[0]._s_0);
        uVar29 = SUB84(dVar33,0);
        uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
      }
      else {
        dVar33 = evaluate_box_fast_winding_cache(this,iVar27,param_2);
        uVar29 = SUB84(dVar33,0);
        uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
      }
      bVar22 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::box_contains(this->Tree,iVar24,param_2);
      if ((bVar22) || (bVar22 = can_use_fast_winding_cache(this,iVar24,param_2), !bVar22)) {
        local_108[0]._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
        local_108[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar33 = branch_fast_winding_num(this,iVar24,(TVector<double> *)&local_108[0]._s_0);
        uVar30 = SUB84(dVar33,0);
        uVar32 = (undefined4)((ulonglong)dVar33 >> 0x20);
      }
      else {
        dVar33 = evaluate_box_fast_winding_cache(this,iVar24,param_2);
        uVar30 = SUB84(dVar33,0);
        uVar32 = (undefined4)((ulonglong)dVar33 >> 0x20);
      }
      dVar33 = (double)CONCAT44(uVar32,uVar30) + (double)CONCAT44(uVar31,uVar29);
    }
  }
  return dVar33;
}

// build_fast_winding_cache @ 1433e4a80

int __thiscall
UE::Geometry::
TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
build_fast_winding_cache
          (void *this,int param_1,int param_2,int param_3,
          TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_4,FMeshTriInfoCache *param_5)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
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
    pFVar5 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_4->field0_0x0).TypedValue.ArrayNum = 0;
    (param_4->field0_0x0).TypedValue.ArrayMax = -1;
  }
  lVar6 = *(longlong *)this;
  uVar13 = *(uint *)(*(longlong *)
                      (*(longlong *)(lVar6 + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4);
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(lVar6 + 0xa8) + (ulonglong)(uVar13 >> 9) * 8) +
                    (ulonglong)(uVar13 & 0x1ff) * 4);
  if ((int)uVar13 < *(int *)(lVar6 + 0xb8)) {
    return uVar15;
  }
  iVar10 = param_2 + 1;
  if ((int)uVar15 < 0) {
    iVar10 = build_fast_winding_cache(this,~uVar15,iVar10,param_3,param_4,param_5);
    return iVar10;
  }
  local_158 = CONCAT44(local_158._4_4_,uVar15 - 1);
  iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar6 + 0xa8) + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                   (ulonglong)(uVar13 + 1 & 0x1ff) * 4) + -1;
  local_168.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_168.TypedValue.ArrayNum = 0;
  local_168.TypedValue.ArrayMax = -1;
  iVar12 = build_fast_winding_cache(this,uVar15 - 1,iVar10,param_3,param_4,param_5);
  iVar10 = build_fast_winding_cache
                     (this,iVar11,iVar10,param_3,
                      (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_168.TypedValue,
                      param_5);
  if (param_2 == 0) goto LAB_1433e4ffe;
  if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
    if (local_168.TypedValue.ArrayMax == -1) {
      if (iVar12 + iVar10 <= param_3) goto LAB_1433e4ffe;
      pFVar5 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->field0_0x0).TypedValue.ArrayNum = 0;
      (param_4->field0_0x0).TypedValue.ArrayMax = 0;
      collect_triangles(this,(int)local_158,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
      goto LAB_1433e4c4e;
    }
    collect_triangles(this,(int)local_158,&local_168.TypedValue);
    if (&local_168 != &param_4->field0_0x0) {
      if (local_168.TypedValue.ArrayMax == -1) {
        if ((param_4->field0_0x0).TypedValue.ArrayMax != -1) {
          pFVar5 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_4->field0_0x0).TypedValue.ArrayNum = 0;
          (param_4->field0_0x0).TypedValue.ArrayMax = -1;
        }
      }
      else {
        pFVar5 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        uVar8 = local_168.TypedValue.ArrayMax;
        (param_4->field0_0x0).TypedValue.AllocatorInstance.Data =
             (FScriptContainerElement *)local_168.TypedValue.AllocatorInstance.Data;
        (param_4->field0_0x0).TypedValue.ArrayNum = local_168.TypedValue.ArrayNum;
        local_168.TypedValue.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        (param_4->field0_0x0).TypedValue.ArrayMax = local_168.TypedValue.ArrayMax;
        local_168.TypedValue.ArrayNum = 0;
        local_168.TypedValue.ArrayMax = 0;
        if ((uVar8 == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
      }
    }
  }
  else {
LAB_1433e4c4e:
    iVar4 = (param_4->field0_0x0).TypedValue.ArrayMax;
    if (local_168.TypedValue.ArrayMax == -1) {
      if ((iVar4 == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
      collect_triangles(this,iVar11,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
    }
    else {
      if ((iVar4 == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
      if ((local_168.TypedValue.ArrayMax == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)param_4,&local_168.TypedValue);
    }
  }
  if (param_3 < iVar10 + iVar12) {
    if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TriArray.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                         ,0x239,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
      if (((param_4->field0_0x0).TypedValue.ArrayMax == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar10 = (*pcVar7)();
        return iVar10;
      }
    }
    uVar15 = param_1 - *(int *)((longlong)this + 0x18);
    uVar13 = 0;
    if ((int)uVar15 < *(int *)((longlong)this + 0x10)) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return iVar10;
    }
    if ((*(char *)((longlong)(int)uVar15 * 0x88 + 0x80 + *(longlong *)((longlong)this + 8)) != '\0')
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("!FastWindingCache[IBox - FastWindingCacheOffset].bValid",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                              ,0x259,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return iVar10;
    }
    local_48 = 0;
    FastTriWinding::
    ComputeCoeffs<_UE::Geometry::FSphereCovering::AddNegativeSpace_::__l34::FHullMeshWrapper>
              (*(FHullMeshWrapper **)(*(longlong *)this + 8),
               (TArray<int,TSizedDefaultAllocator<32>_> *)param_4,param_5,
               (TVector<double> *)&local_c8._s_0,&dStack_b0,(TVector<double> *)&local_a8._s_0,
               (TMatrix3<double> *)&TStack_90._s_0,0x10);
    uVar15 = param_1 - *(int *)((longlong)this + 0x18);
    local_140 = local_c8._s_0.Z;
    dStack_138 = dStack_b0;
    local_130 = local_a8._s_0.X;
    dStack_128 = local_a8._s_0.Y;
    uVar13 = 0;
    if ((int)uVar15 < *(int *)((longlong)this + 0x10)) {
      uVar13 = ~uVar15 >> 0x1f;
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
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return iVar10;
    }
    lVar14 = (longlong)(int)uVar15 * 0x88;
    lVar6 = *(longlong *)((longlong)this + 8);
    puVar1 = (undefined4 *)(lVar14 + lVar6);
    *puVar1 = local_150;
    puVar1[1] = uStack_14c;
    puVar1[2] = uStack_148;
    puVar1[3] = uStack_144;
    pdVar2 = (double *)(lVar14 + 0x10 + lVar6);
    *pdVar2 = local_140;
    pdVar2[1] = dStack_138;
    pdVar2 = (double *)(lVar14 + 0x20 + lVar6);
    *pdVar2 = local_130;
    pdVar2[1] = dStack_128;
    pdVar2 = (double *)(lVar14 + 0x30 + lVar6);
    *pdVar2 = local_120;
    pdVar2[1] = dStack_118;
    pdVar2 = (double *)(lVar14 + 0x40 + lVar6);
    *pdVar2 = local_110;
    pdVar2[1] = dStack_108;
    puVar3 = (undefined8 *)(lVar14 + 0x50 + lVar6);
    *puVar3 = local_100;
    puVar3[1] = uStack_f8;
    puVar3 = (undefined8 *)(lVar14 + 0x60 + lVar6);
    *puVar3 = local_f0;
    puVar3[1] = uStack_e8;
    puVar3 = (undefined8 *)(lVar14 + 0x70 + lVar6);
    *puVar3 = local_e0;
    puVar3[1] = uStack_d8;
    *(undefined8 *)(lVar14 + 0x80 + lVar6) = local_158;
  }
LAB_1433e4ffe:
  if ((local_168.TypedValue.ArrayMax != -1) &&
     (local_168.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_168.TypedValue.AllocatorInstance.Data);
  }
  return iVar10 + iVar12;
}

// build_fast_winding_cache @ 1433e5050

void __thiscall
UE::Geometry::
TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
build_fast_winding_cache(void *this)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  <lambda_1> local_res8;
  FMeshTriInfoCache local_138;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_e8;
  longlong local_d8;
  FMeshTriInfoCache *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  longlong *local_b0;
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
  
  uVar7 = 0;
  lVar2 = *(longlong *)(*(longlong *)this + 8);
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
  uVar6 = *(uint *)(*(longlong *)(lVar2 + 8) + 0x98);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Centroids,uVar6);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Normals,uVar6);
  TDynamicVector<double,512>::Resize(&local_138.Areas,uVar6);
  local_d0 = &local_138;
  local_c8.DataPtr = (void **)0x0;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_d8;
  uVar9 = 0;
  local_c8.ArrayNum = 0;
  local_d8 = lVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar6,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_res8,
             None,&local_c8);
  lVar2 = *(longlong *)this;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  iVar8 = *(int *)(lVar2 + 0x58);
  iVar10 = *(int *)(lVar2 + 0x5c);
  if (iVar8 * 0x200 + iVar10 != 0) {
    do {
      uVar9 = (uint)uVar7;
      if (*(int *)(lVar2 + 0xb8) <=
          *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + (uVar7 >> 9) * 8) +
                  (ulonglong)(uVar9 & 0x1ff) * 4)) break;
      uVar9 = uVar9 + 1;
      *(uint *)((longlong)this + 0x18) = uVar9;
      uVar7 = (ulonglong)uVar9;
      iVar8 = *(int *)(lVar2 + 0x58);
      iVar10 = *(int *)(lVar2 + 0x5c);
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(uint)(iVar8 * 0x200 + iVar10));
  }
  uVar6 = (iVar8 * 0x200 - uVar9) + iVar10;
  uVar7 = (ulonglong)uVar6;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  puVar1 = (uint *)((longlong)this + 0x14);
  *(undefined4 *)((longlong)this + 0x10) = 0;
  if (*puVar1 != uVar6) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar6,(ForAnyElementType *)((longlong)this + 8),0,(int *)puVar1);
  }
  *(undefined4 *)((longlong)this + 0x10) = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_28 = 0;
  if (*puVar1 != uVar6) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar6,(ForAnyElementType *)((longlong)this + 8),0,(int *)puVar1);
  }
  if (0 < (int)uVar6) {
    do {
      if (((*(undefined8 **)((longlong)this + 8) <= &local_a8) &&
          (&local_a8 < *(undefined8 **)((longlong)this + 8) + (longlong)(int)*puVar1 * 0x11)) &&
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
      uVar6 = *(uint *)((longlong)this + 0x10);
      if (uVar6 == *puVar1) {
        uVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x888,(ForAnyElementType *)((longlong)this + 8),(int *)puVar1);
      }
      *(uint *)((longlong)this + 0x10) = uVar6 + 1;
      puVar5 = (undefined8 *)((longlong)(int)uVar6 * 0x88 + *(longlong *)((longlong)this + 8));
      *puVar5 = local_a8;
      puVar5[1] = uStack_a0;
      puVar5[2] = local_98;
      puVar5[3] = uStack_90;
      puVar5[4] = local_88;
      puVar5[5] = uStack_80;
      puVar5[6] = local_78;
      puVar5[7] = uStack_70;
      puVar5[8] = local_68;
      puVar5[9] = uStack_60;
      puVar5[10] = local_58;
      puVar5[0xb] = uStack_50;
      puVar5[0xc] = local_48;
      puVar5[0xd] = uStack_40;
      puVar5[0xe] = local_38;
      puVar5[0xf] = uStack_30;
      puVar5[0x10] = CONCAT71(uStack_27,local_28);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_e8.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_e8.TypedValue.ArrayNum = 0;
  local_e8.TypedValue.ArrayMax = -1;
  build_fast_winding_cache
            (this,*(int *)(*(longlong *)this + 0xbc),0,1,
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

// build_fast_winding_cache @ 1433e5410

int __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this,int param_1,int param_2,int param_3,
          TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_4,FMeshTriInfoCache *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
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
  if (param_2 == 0) goto LAB_1433e598e;
  if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
    if (local_168.TypedValue.ArrayMax == -1) {
      if (iVar10 + iVar8 <= param_3) goto LAB_1433e598e;
      pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->field0_0x0).TypedValue.ArrayNum = 0;
      (param_4->field0_0x0).TypedValue.ArrayMax = 0;
      collect_triangles(this,(int)local_158,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
      goto LAB_1433e55de;
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
LAB_1433e55de:
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
    FastTriWinding::ComputeCoeffs<UE::Geometry::FDynamicMesh3>
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
LAB_1433e598e:
  if ((local_168.TypedValue.ArrayMax != -1) &&
     (local_168.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_168.TypedValue.AllocatorInstance.Data);
  }
  return iVar8 + iVar10;
}

// build_fast_winding_cache @ 1433e59e0

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this)

{
  int *piVar1;
  FDynamicMesh3 *pFVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  <lambda_1> local_res8;
  FMeshTriInfoCache local_138;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_e8;
  FDynamicMesh3 *local_d8;
  FMeshTriInfoCache *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FDynamicMesh3 **local_b0;
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
  
  uVar10 = 0;
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
  uVar8 = (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed +
          (pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Centroids,uVar8);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Normals,uVar8);
  TDynamicVector<double,512>::Resize(&local_138.Areas,uVar8);
  local_d0 = &local_138;
  local_c8.DataPtr = (void **)0x0;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_d8;
  uVar11 = 0;
  local_c8.ArrayNum = 0;
  local_d8 = pFVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_res8,
             None,&local_c8);
  pTVar3 = this->Tree;
  this->FastWindingCacheOffset = 0;
  uVar8 = (pTVar3->BoxToIndex).CurBlock;
  uVar9 = (pTVar3->BoxToIndex).CurBlockUsed;
  if (uVar8 * 0x200 + uVar9 != 0) {
    do {
      uVar11 = (uint)uVar10;
      if (pTVar3->TrianglesEnd <=
          *(int *)(*(longlong *)
                    ((pTVar3->BoxToIndex).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
                  (ulonglong)(uVar11 & 0x1ff) * 4)) break;
      uVar11 = uVar11 + 1;
      this->FastWindingCacheOffset = uVar11;
      uVar10 = (ulonglong)uVar11;
      uVar8 = (pTVar3->BoxToIndex).CurBlock;
      uVar9 = (pTVar3->BoxToIndex).CurBlockUsed;
    } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(uVar8 * 0x200 + uVar9));
  }
  uVar9 = (uVar8 * 0x200 - uVar11) + uVar9;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(this->FastWindingCache).ArrayMax;
  (this->FastWindingCache).ArrayNum = 0;
  if (*piVar1 != uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar9,&(this->FastWindingCache).AllocatorInstance,0,piVar1);
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
  if (*piVar1 != uVar9) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar9,&(this->FastWindingCache).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar9) {
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
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
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

// can_use_fast_winding_cache @ 1433e5db0

bool __thiscall
UE::Geometry::
TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
can_use_fast_winding_cache(void *this,int param_1,TVector<double> *param_2)

{
  longlong lVar1;
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
  
  uVar7 = param_1 - *(int *)((longlong)this + 0x18);
  if (-1 < (int)uVar7) {
    uVar5 = 0;
    if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
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
    lVar1 = *(longlong *)((longlong)this + 8);
    if (*(char *)(lVar6 + 0x80 + lVar1) != '\0') {
      dVar10 = (param_2->field0_0x0)._s_0.X - *(double *)(lVar6 + lVar1);
      dVar11 = (param_2->field0_0x0)._s_0.Y - *(double *)(lVar6 + 8 + lVar1);
      dVar8 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar6 + 0x10 + lVar1);
      dVar9 = *(double *)(lVar6 + 0x18 + lVar1) * *(double *)((longlong)this + 0x28);
      return dVar9 * dVar9 < dVar11 * dVar11 + dVar10 * dVar10 + dVar8 * dVar8;
    }
  }
  return false;
}

// can_use_fast_winding_cache @ 1433e5eb0

bool __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::can_use_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this,int param_1,TVector<double> *param_2)

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

// collect_triangles @ 1433e5fb0

void __thiscall
UE::Geometry::
TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
collect_triangles(void *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar8 = *(longlong *)this;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8)
                   + (ulonglong)(param_1 & 0x1ff) * 4);
  if (*(int *)(lVar8 + 0xb8) <= (int)uVar7) {
    do {
      uVar5 = *(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0xa8) + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
      if ((int)uVar5 < 0) {
        uVar5 = ~uVar5;
      }
      else {
        collect_triangles(this,uVar5 - 1,param_2);
        lVar8 = *(longlong *)this;
        uVar5 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar8 + 0xa8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      }
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0x60) + (ulonglong)(uVar5 >> 9) * 8) +
                       (ulonglong)(uVar5 & 0x1ff) * 4);
    } while (*(int *)(lVar8 + 0xb8) <= (int)uVar7);
  }
  uVar5 = *(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0xa8) + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  if (0 < (int)uVar5) {
    uVar9 = (ulonglong)uVar5;
    do {
      uVar7 = uVar7 + 1;
      pFVar1 = (FScriptContainerElement *)
               (*(longlong *)(*(longlong *)(*(longlong *)this + 0xa8) + (ulonglong)(uVar7 >> 9) * 8)
               + (ulonglong)(uVar7 & 0x1ff) * 4);
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

// collect_triangles @ 1433e6190

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::collect_triangles
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar8;
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

// evaluate_box_fast_winding_cache @ 1433e6ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::
TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
evaluate_box_fast_winding_cache(void *this,int param_1,TVector<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TVector<double> *pTVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  
  uVar5 = param_1 - *(int *)((longlong)this + 0x18);
  uVar4 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x10)) {
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
  pTVar6 = (TVector<double> *)((longlong)(int)uVar5 * 0x88 + *(longlong *)((longlong)this + 8));
  if (*(int *)((longlong)this + 0x30) == 2) {
    dVar7 = FastTriWinding::EvaluateOrder2Approx
                      (pTVar6,(TVector<double> *)((longlong)&pTVar6[1].field0_0x0 + 8),
                       (TMatrix3<double> *)((longlong)&pTVar6[2].field0_0x0 + 8),param_2);
    return dVar7;
  }
  dVar11 = (pTVar6->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar10 = (pTVar6->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar2 = (pTVar6->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  auVar8._0_8_ = dVar11 * dVar11;
  auVar8._8_8_ = 0;
  dVar7 = dVar10 * dVar10 + auVar8._0_8_ + dVar2 * dVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar7;
  auVar9 = sqrtpd(auVar8,auVar9);
  dVar7 = __real_3ff0000000000000 / (auVar9._0_8_ * dVar7);
  return (dVar7 * dVar10 * pTVar6[1].field0_0x0._s_0.Z +
          dVar7 * dVar11 * pTVar6[1].field0_0x0._s_0.Y + dVar7 * dVar2 * pTVar6[2].field0_0x0._s_0.X
         ) * ___real_3fb45f306dc9c883;
}

// evaluate_box_fast_winding_cache @ 1433e6fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::evaluate_box_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this,int param_1,TVector<double> *param_2)

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

// TFastWindingTree<UE::Geometry::FDynamicMesh3> @ 1435669a0

TFastWindingTree<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::
TFastWindingTree<UE::Geometry::FDynamicMesh3>
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *pTVar4;
  ulong64 uVar5;
  
  this->FWNApproxOrder = 2;
  (this->FastWindingCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FastWindingCache).ArrayNum = 0;
  (this->FastWindingCache).ArrayMax = 0;
  this->FastWindingCacheMeshChangeStamp = 0;
  this->FastWindingCacheOffset = 0;
  this->FWNBeta = 2.0;
  this->Tree = param_1;
  if (param_2) {
    if ((param_1 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)(*pcVar2)();
      return pTVar4;
    }
    pTVar1 = this->Tree;
    if ((pTVar1->RootIndex < 0) ||
       (uVar5 = FDynamicMesh3::GetChangeStamp(pTVar1->Mesh), pTVar1->MeshChangeStamp != uVar5)) {
      pTVar1 = this->Tree;
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar1,false);
      uVar5 = FDynamicMesh3::GetChangeStamp(pTVar1->Mesh);
      pTVar1->MeshChangeStamp = uVar5;
    }
    build_fast_winding_cache(this);
    this->FastWindingCacheMeshChangeStamp = this->Tree->MeshChangeStamp;
  }
  return this;
}

// Build @ 143578620

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this,bool param_1)

{
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  if (this->Tree == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                       ,0x16c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = this->Tree;
  if (-1 < pTVar1->RootIndex) {
    uVar4 = FDynamicMesh3::GetChangeStamp(pTVar1->Mesh);
    if (pTVar1->MeshChangeStamp == uVar4) goto LAB_143578696;
  }
  pTVar1 = this->Tree;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar1,false);
  uVar4 = FDynamicMesh3::GetChangeStamp(pTVar1->Mesh);
  pTVar1->MeshChangeStamp = uVar4;
LAB_143578696:
  if ((param_1) || (this->FastWindingCacheMeshChangeStamp != this->Tree->MeshChangeStamp)) {
    build_fast_winding_cache(this);
    this->FastWindingCacheMeshChangeStamp = this->Tree->MeshChangeStamp;
  }
  return;
}

// FastWindingNumber @ 143590f80

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::FastWindingNumber
          (TFastWindingTree<UE::Geometry::FDynamicMesh3> *this,TVector<double> *param_1)

{
  double dVar1;
  TVector<double>_u_0 local_28;
  
  Build(this,false);
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = branch_fast_winding_num(this,this->Tree->RootIndex,(TVector<double> *)&local_28._s_0);
  return dVar1;
}

