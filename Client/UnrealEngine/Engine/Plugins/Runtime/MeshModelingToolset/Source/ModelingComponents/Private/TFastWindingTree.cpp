// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 19

// FastWindingNumber @ 14cb07420

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>::FastWindingNumber
          (TFastWindingTree<UE::Geometry::FColliderMesh> *this,TVector<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar4;
  TVector<double>_u_0 local_28;
  
  if (this->Tree == (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                       ,0x16c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  pTVar4 = this->Tree;
  if ((pTVar4->RootIndex < 0) || (pTVar4->MeshChangeStamp != 0)) {
    TMeshAABBTree3<UE::Geometry::FColliderMesh>::BuildTopDown(pTVar4,false);
    pTVar4->MeshChangeStamp = 0;
  }
  pTVar4 = this->Tree;
  if (this->FastWindingCacheMeshChangeStamp != pTVar4->MeshChangeStamp) {
    build_fast_winding_cache(this);
    pTVar4 = this->Tree;
    this->FastWindingCacheMeshChangeStamp = pTVar4->MeshChangeStamp;
  }
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar2 = branch_fast_winding_num(this,pTVar4->RootIndex,(TVector<double> *)&local_28._s_0);
  return dVar2;
}

// branch_fast_winding_num @ 14cb4c480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
branch_fast_winding_num
          (TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  FVertexID FVar15;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this_00;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar18;
  FVertexID *pFVar19;
  code *pcVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  bool bVar24;
  TArrayView<FVertexID,int> *pTVar25;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar26;
  TVector<float> *pTVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  ulonglong uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  undefined1 in_XMM4 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double local_res20;
  TArrayView<FVertexID,int> local_148;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8 [8];
  
  this_00 = this->Tree;
  dVar36 = 0.0;
  local_res20 = 0.0;
  uVar14 = *(uint *)(*(longlong *)
                      ((this_00->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  pFVar16 = (this_00->IndexList).Blocks.AllocatorInstance.Data;
  lVar17 = *(longlong *)(pFVar16 + (ulonglong)(uVar14 >> 9) * 8);
  if ((int)uVar14 < this_00->TrianglesEnd) {
    uVar28 = *(uint *)(lVar17 + (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < (int)uVar28) {
      uVar31 = (ulonglong)uVar28;
      do {
        uVar14 = uVar14 + 1;
        pFVar18 = this->Tree->Mesh;
        pTVar25 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                             (pFVar18->_padding_ + 200),&local_148,
                             *(int *)(*(longlong *)
                                       ((this->Tree->IndexList).Blocks.AllocatorInstance.Data +
                                       (ulonglong)(uVar14 >> 9) * 8) +
                                     (ulonglong)(uVar14 & 0x1ff) * 4));
        iVar29 = pTVar25->ArrayNum;
        pFVar19 = pTVar25->DataPtr;
        if ((iVar29 < 1) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar24)) {
          pcVar20 = (code *)swi(3);
          dVar36 = (double)(*pcVar20)();
          return dVar36;
        }
        FVar15 = *pFVar19;
        pTVar26 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar18->_padding_
                             ,0);
        pTVar27 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar26,(int)FVar15);
        fVar1 = (pTVar27->field0_0x0)._s_0.X;
        fVar2 = (pTVar27->field0_0x0)._s_0.Y;
        fVar3 = (pTVar27->field0_0x0)._s_0.Z;
        dVar36 = (double)pFVar18->_padding_;
        dVar7 = (double)pFVar18->_padding_;
        dVar8 = (double)pFVar18->_padding_;
        if ((iVar29 < 2) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar24)) {
          pcVar20 = (code *)swi(3);
          dVar36 = (double)(*pcVar20)();
          return dVar36;
        }
        FVar15 = pFVar19[1];
        pTVar26 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar18->_padding_
                             ,0);
        pTVar27 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar26,(int)FVar15);
        fVar4 = (pTVar27->field0_0x0)._s_0.X;
        fVar5 = (pTVar27->field0_0x0)._s_0.Y;
        fVar6 = (pTVar27->field0_0x0)._s_0.Z;
        dVar9 = (double)pFVar18->_padding_;
        dVar10 = (double)pFVar18->_padding_;
        dVar11 = (double)pFVar18->_padding_;
        if ((iVar29 < 3) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar24)) {
          pcVar20 = (code *)swi(3);
          dVar36 = (double)(*pcVar20)();
          return dVar36;
        }
        FVar15 = pFVar19[2];
        pTVar26 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar18->_padding_
                             ,0);
        pTVar27 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar26,(int)FVar15);
        dVar12 = (param_2->field0_0x0)._s_0.X;
        dVar13 = (param_2->field0_0x0)._s_0.Y;
        dVar22 = (double)fVar4 * dVar9 - dVar12;
        dVar9 = (param_2->field0_0x0)._s_0.Z;
        dVar23 = (double)fVar1 * dVar36 - dVar12;
        auVar38._0_8_ = (double)fVar3 * dVar8 - dVar9;
        auVar38._8_8_ = 0;
        dVar8 = (double)fVar6 * dVar11 - dVar9;
        dVar36 = (double)fVar5 * dVar10 - dVar13;
        dVar7 = (double)fVar2 * dVar7 - dVar13;
        dVar12 = (double)(pTVar27->field0_0x0)._s_0.X * (double)pFVar18->_padding_ - dVar12;
        dVar9 = (double)(pTVar27->field0_0x0)._s_0.Z * (double)pFVar18->_padding_ - dVar9;
        dVar13 = (double)(pTVar27->field0_0x0)._s_0.Y * (double)pFVar18->_padding_ - dVar13;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = dVar7 * dVar7 + dVar23 * dVar23 + auVar38._0_8_ * auVar38._0_8_;
        in_XMM5 = sqrtpd(in_XMM5,auVar37);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = dVar36 * dVar36 + dVar22 * dVar22 + dVar8 * dVar8;
        auVar39 = sqrtpd(auVar38,auVar39);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar13 * dVar13 + dVar12 * dVar12 + dVar9 * dVar9;
        auVar37 = sqrtpd(in_XMM4,auVar21);
        in_XMM4._8_8_ = auVar37._8_8_;
        in_XMM4._0_8_ =
             auVar37._0_8_ *
             (dVar36 * dVar7 + dVar22 * dVar23 +
             dVar8 * auVar38._0_8_ + auVar39._0_8_ * in_XMM5._0_8_) +
             (dVar13 * dVar36 + dVar12 * dVar22 + dVar9 * dVar8) * in_XMM5._0_8_ +
             (dVar13 * dVar7 + dVar12 * dVar23 + dVar9 * auVar38._0_8_) * auVar39._0_8_;
        dVar36 = atan2(((dVar9 * dVar36 - dVar13 * dVar8) * dVar23 -
                       (dVar9 * dVar22 - dVar12 * dVar8) * dVar7) +
                       (dVar13 * dVar22 - dVar12 * dVar36) * auVar38._0_8_,in_XMM4._0_8_);
        dVar36 = local_res20 + dVar36 * __real_c000000000000000;
        uVar31 = uVar31 - 1;
        local_res20 = dVar36;
      } while (uVar31 != 0);
    }
    dVar36 = dVar36 * ___real_3fb45f306dc9c883;
  }
  else {
    uVar28 = *(uint *)(lVar17 + (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar28 < 0) {
      uVar28 = ~uVar28;
      bVar24 = TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
               box_contains(this_00,uVar28,param_2);
      if ((bVar24) || (bVar24 = can_use_fast_winding_cache(this,uVar28,param_2), !bVar24)) {
        local_138._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_138._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_138._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar36 = branch_fast_winding_num(this,uVar28,(TVector<double> *)&local_138._s_0);
      }
      else {
        dVar36 = evaluate_box_fast_winding_cache(this,uVar28,param_2);
      }
    }
    else {
      iVar29 = uVar28 - 1;
      iVar30 = *(int *)(*(longlong *)(pFVar16 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) + -1;
      bVar24 = TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
               box_contains(this_00,iVar29,param_2);
      if ((bVar24) || (bVar24 = can_use_fast_winding_cache(this,iVar29,param_2), !bVar24)) {
        local_118._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_118._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_118._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar36 = branch_fast_winding_num(this,iVar29,(TVector<double> *)&local_118._s_0);
        uVar32 = SUB84(dVar36,0);
        uVar34 = (undefined4)((ulonglong)dVar36 >> 0x20);
      }
      else {
        dVar36 = evaluate_box_fast_winding_cache(this,iVar29,param_2);
        uVar32 = SUB84(dVar36,0);
        uVar34 = (undefined4)((ulonglong)dVar36 >> 0x20);
      }
      bVar24 = TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
               box_contains(this->Tree,iVar30,param_2);
      if ((bVar24) || (bVar24 = can_use_fast_winding_cache(this,iVar30,param_2), !bVar24)) {
        local_f8[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
        local_f8[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
        local_f8[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar36 = branch_fast_winding_num(this,iVar30,(TVector<double> *)&local_f8[0]._s_0);
        uVar33 = SUB84(dVar36,0);
        uVar35 = (undefined4)((ulonglong)dVar36 >> 0x20);
      }
      else {
        dVar36 = evaluate_box_fast_winding_cache(this,iVar30,param_2);
        uVar33 = SUB84(dVar36,0);
        uVar35 = (undefined4)((ulonglong)dVar36 >> 0x20);
      }
      dVar36 = (double)CONCAT44(uVar35,uVar33) + (double)CONCAT44(uVar34,uVar32);
    }
  }
  return dVar36;
}

// branch_fast_winding_num @ 14cb4cab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
branch_fast_winding_num
          (TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          int param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this_00;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FStaticMeshLODResourcesMeshAdapter *this_01;
  uchar *puVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM13 [16];
  double local_res20;
  TVector<double>_u_0 local_d8 [2];
  
  this_00 = this->Tree;
  dVar30 = 0.0;
  local_res20 = 0.0;
  uVar6 = *(uint *)(*(longlong *)
                     ((this_00->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  pFVar7 = (this_00->IndexList).Blocks.AllocatorInstance.Data;
  lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8);
  if ((int)uVar6 < this_00->TrianglesEnd) {
    uVar22 = *(uint *)(lVar8 + (ulonglong)(uVar6 & 0x1ff) * 4);
    if (0 < (int)uVar22) {
      dVar1 = (param_2->field0_0x0)._s_0.X;
      uVar25 = (ulonglong)uVar22;
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      dVar3 = (param_2->field0_0x0)._s_0.Z;
      do {
        uVar6 = uVar6 + 1;
        this_01 = (FStaticMeshLODResourcesMeshAdapter *)this->Tree->Mesh;
        FStaticMeshLODResourcesMeshAdapter::GetTriangle
                  (this_01,(FIndex3i *)&local_d8[0]._s_0,
                   *(int *)(*(longlong *)
                             ((this->Tree->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4));
        dVar30 = (this_01->BuildScale).field0_0x0._s_0.X;
        dVar4 = (this_01->BuildScale).field0_0x0._s_0.Y;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = dVar4;
        dVar5 = (this_01->BuildScale).field0_0x0._s_0.Z;
        puVar9 = (this_01->Mesh->VertexBuffers).PositionVertexBuffer.Data;
        uVar22 = (this_01->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
        uVar21 = (ulonglong)(uVar22 * local_d8[0]._0_4_);
        uVar19 = (ulonglong)(uVar22 * local_d8[0]._4_4_);
        uVar20 = (ulonglong)(uVar22 * local_d8[0]._8_4_);
        dVar10 = (double)*(float *)(puVar9 + uVar21) * dVar30 - dVar1;
        dVar17 = (double)*(float *)(puVar9 + uVar21 + 4) * dVar4 - dVar2;
        dVar15 = (double)*(float *)(puVar9 + uVar19) * dVar30 - dVar1;
        dVar16 = (double)*(float *)(puVar9 + uVar21 + 8) * dVar5 - dVar3;
        dVar14 = (double)*(float *)(puVar9 + uVar19 + 4) * dVar4 - dVar2;
        dVar13 = (double)*(float *)(puVar9 + uVar19 + 8) * dVar5 - dVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = dVar10 * dVar10 + dVar17 * dVar17 + dVar16 * dVar16;
        unaff_XMM13 = sqrtpd(unaff_XMM13,auVar32);
        dVar4 = (double)*(float *)(puVar9 + uVar20 + 4) * dVar4 - dVar2;
        dVar5 = (double)*(float *)(puVar9 + uVar20 + 8) * dVar5 - (param_2->field0_0x0)._s_0.Z;
        dVar30 = (double)*(float *)(puVar9 + uVar20) * dVar30 - (param_2->field0_0x0)._s_0.X;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar14 * dVar14 + dVar15 * dVar15 + dVar13 * dVar13;
        unaff_XMM11 = sqrtpd(unaff_XMM11,auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar30 * dVar30 + dVar4 * dVar4 + dVar5 * dVar5;
        auVar32 = sqrtpd(auVar31,auVar12);
        dVar30 = atan2(((dVar5 * dVar14 - dVar4 * dVar13) * dVar10 -
                       (dVar5 * dVar15 - dVar30 * dVar13) * dVar17) +
                       (dVar4 * dVar15 - dVar30 * dVar14) * dVar16,
                       auVar32._0_8_ *
                       (unaff_XMM11._0_8_ * unaff_XMM13._0_8_ + dVar13 * dVar16 +
                       dVar14 * dVar17 + dVar15 * dVar10) +
                       (dVar30 * dVar15 + dVar4 * dVar14 + dVar5 * dVar13) * unaff_XMM13._0_8_ +
                       (dVar30 * dVar10 + dVar4 * dVar17 + dVar5 * dVar16) * unaff_XMM11._0_8_);
        dVar30 = local_res20 + dVar30 * __real_c000000000000000;
        uVar25 = uVar25 - 1;
        local_res20 = dVar30;
      } while (uVar25 != 0);
    }
    dVar30 = dVar30 * ___real_3fb45f306dc9c883;
  }
  else {
    uVar22 = *(uint *)(lVar8 + (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)uVar22 < 0) {
      uVar22 = ~uVar22;
      bVar18 = TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::box_contains
                         (this_00,uVar22,param_2);
      if ((bVar18) || (bVar18 = can_use_fast_winding_cache(this,uVar22,param_2), !bVar18)) {
        local_d8[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
        local_d8[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
        local_d8[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar30 = branch_fast_winding_num(this,uVar22,(TVector<double> *)&local_d8[0]._s_0);
      }
      else {
        dVar30 = evaluate_box_fast_winding_cache(this,uVar22,param_2);
      }
    }
    else {
      iVar23 = uVar22 - 1;
      iVar24 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                       (ulonglong)(uVar6 + 1 & 0x1ff) * 4) + -1;
      bVar18 = TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::box_contains
                         (this_00,iVar23,param_2);
      if ((bVar18) || (bVar18 = can_use_fast_winding_cache(this,iVar23,param_2), !bVar18)) {
        local_d8[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
        local_d8[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
        local_d8[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar30 = branch_fast_winding_num(this,iVar23,(TVector<double> *)&local_d8[0]._s_0);
        uVar26 = SUB84(dVar30,0);
        uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
      }
      else {
        dVar30 = evaluate_box_fast_winding_cache(this,iVar23,param_2);
        uVar26 = SUB84(dVar30,0);
        uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
      }
      bVar18 = TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::box_contains
                         (this->Tree,iVar24,param_2);
      if ((bVar18) || (bVar18 = can_use_fast_winding_cache(this,iVar24,param_2), !bVar18)) {
        local_d8[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
        local_d8[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
        local_d8[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar30 = branch_fast_winding_num(this,iVar24,(TVector<double> *)&local_d8[0]._s_0);
        uVar27 = SUB84(dVar30,0);
        uVar29 = (undefined4)((ulonglong)dVar30 >> 0x20);
      }
      else {
        dVar30 = evaluate_box_fast_winding_cache(this,iVar24,param_2);
        uVar27 = SUB84(dVar30,0);
        uVar29 = (undefined4)((ulonglong)dVar30 >> 0x20);
      }
      dVar30 = (double)CONCAT44(uVar29,uVar27) + (double)CONCAT44(uVar28,uVar26);
    }
  }
  return dVar30;
}

// branch_fast_winding_num @ 14cb4cff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>::branch_fast_winding_num
          (TFastWindingTree<UE::Geometry::FColliderMesh> *this,int param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *this_00;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FColliderMesh *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM6 [16];
  double local_res8;
  int local_158;
  int iStack_154;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8 [7];
  
  this_00 = this->Tree;
  dVar27 = 0.0;
  local_res8 = 0.0;
  uVar6 = *(uint *)(*(longlong *)
                     ((this_00->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  pFVar7 = (this_00->IndexList).Blocks.AllocatorInstance.Data;
  lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8);
  if ((int)uVar6 < this_00->TrianglesEnd) {
    uVar19 = *(uint *)(lVar8 + (ulonglong)(uVar6 & 0x1ff) * 4);
    if (0 < (int)uVar19) {
      uVar22 = (ulonglong)uVar19;
      do {
        uVar6 = uVar6 + 1;
        pFVar9 = this->Tree->Mesh;
        uVar19 = *(uint *)(*(longlong *)
                            ((this->Tree->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4);
        uVar18 = 0;
        if ((int)uVar19 < (pFVar9->Triangles).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          dVar27 = (double)(*pcVar11)();
          return dVar27;
        }
        pFVar7 = (pFVar9->Triangles).AllocatorInstance.Data;
        lVar8 = *(longlong *)(pFVar7 + (longlong)(int)uVar19 * 0xc);
        iVar20 = *(int *)(pFVar7 + (longlong)(int)uVar19 * 0xc + 8);
        local_158 = (int)lVar8;
        if ((local_158 < 0 || (pFVar9->Vertices).ArrayNum <= local_158) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          dVar27 = (double)(*pcVar11)();
          return dVar27;
        }
        pFVar10 = (pFVar9->Vertices).AllocatorInstance.Data;
        iStack_154 = (int)((ulonglong)lVar8 >> 0x20);
        pFVar7 = pFVar10 + (longlong)local_158 * 0x18;
        dVar16 = *(double *)pFVar7;
        dVar15 = *(double *)(pFVar7 + 8);
        dVar27 = *(double *)(pFVar10 + (longlong)local_158 * 0x18 + 0x10);
        if ((lVar8 < 0 || (pFVar9->Vertices).ArrayNum <= iStack_154) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          dVar27 = (double)(*pcVar11)();
          return dVar27;
        }
        pFVar10 = (pFVar9->Vertices).AllocatorInstance.Data;
        pFVar7 = pFVar10 + (longlong)iStack_154 * 0x18;
        dVar14 = *(double *)pFVar7;
        dVar13 = *(double *)(pFVar7 + 8);
        dVar1 = *(double *)(pFVar10 + (longlong)iStack_154 * 0x18 + 0x10);
        if ((iVar20 < 0 || (pFVar9->Vertices).ArrayNum <= iVar20) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          dVar27 = (double)(*pcVar11)();
          return dVar27;
        }
        dVar2 = (param_2->field0_0x0)._s_0.X;
        dVar3 = (param_2->field0_0x0)._s_0.Y;
        dVar4 = (param_2->field0_0x0)._s_0.Z;
        dVar16 = dVar16 - dVar2;
        dVar15 = dVar15 - dVar3;
        dVar1 = dVar1 - dVar4;
        pFVar7 = (pFVar9->Vertices).AllocatorInstance.Data;
        dVar13 = dVar13 - dVar3;
        dVar27 = dVar27 - dVar4;
        dVar14 = dVar14 - dVar2;
        auVar5 = *(undefined1 (*) [16])(pFVar7 + (longlong)iVar20 * 0x18);
        dVar4 = *(double *)(pFVar7 + (longlong)iVar20 * 0x18 + 0x10) - dVar4;
        dVar2 = auVar5._0_8_ - dVar2;
        dVar3 = auVar5._8_8_ - dVar3;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar15 * dVar15 + dVar16 * dVar16 + dVar27 * dVar27;
        in_XMM5 = sqrtpd(in_XMM5,auVar5);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar13 * dVar13 + dVar14 * dVar14 + dVar1 * dVar1;
        unaff_XMM6 = sqrtpd(unaff_XMM6,auVar12);
        dVar27 = atan2(((dVar4 * dVar13 - dVar3 * dVar1) * dVar16 -
                       (dVar4 * dVar14 - dVar2 * dVar1) * dVar15) +
                       (dVar3 * dVar14 - dVar2 * dVar13) * dVar27,
                       SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4) *
                       (unaff_XMM6._0_8_ * in_XMM5._0_8_ + dVar1 * dVar27 +
                       dVar13 * dVar15 + dVar14 * dVar16) +
                       (dVar3 * dVar13 + dVar2 * dVar14 + dVar4 * dVar1) * in_XMM5._0_8_ +
                       (dVar3 * dVar15 + dVar2 * dVar16 + dVar4 * dVar27) * unaff_XMM6._0_8_);
        dVar27 = local_res8 + dVar27 * __real_c000000000000000;
        uVar22 = uVar22 - 1;
        local_res8 = dVar27;
      } while (uVar22 != 0);
    }
    dVar27 = dVar27 * ___real_3fb45f306dc9c883;
  }
  else {
    uVar19 = *(uint *)(lVar8 + (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)uVar19 < 0) {
      uVar19 = ~uVar19;
      bVar17 = TMeshAABBTree3<UE::Geometry::FColliderMesh>::box_contains(this_00,uVar19,param_2);
      if ((bVar17) || (bVar17 = can_use_fast_winding_cache(this,uVar19,param_2), !bVar17)) {
        local_128._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_128._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_128._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar27 = branch_fast_winding_num(this,uVar19,(TVector<double> *)&local_128._s_0);
      }
      else {
        dVar27 = evaluate_box_fast_winding_cache(this,uVar19,param_2);
      }
    }
    else {
      iVar20 = uVar19 - 1;
      iVar21 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                       (ulonglong)(uVar6 + 1 & 0x1ff) * 4) + -1;
      bVar17 = TMeshAABBTree3<UE::Geometry::FColliderMesh>::box_contains(this_00,iVar20,param_2);
      if ((bVar17) || (bVar17 = can_use_fast_winding_cache(this,iVar20,param_2), !bVar17)) {
        local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar27 = branch_fast_winding_num(this,iVar20,(TVector<double> *)&local_108._s_0);
        uVar23 = SUB84(dVar27,0);
        uVar25 = (undefined4)((ulonglong)dVar27 >> 0x20);
      }
      else {
        dVar27 = evaluate_box_fast_winding_cache(this,iVar20,param_2);
        uVar23 = SUB84(dVar27,0);
        uVar25 = (undefined4)((ulonglong)dVar27 >> 0x20);
      }
      bVar17 = TMeshAABBTree3<UE::Geometry::FColliderMesh>::box_contains(this->Tree,iVar21,param_2);
      if ((bVar17) || (bVar17 = can_use_fast_winding_cache(this,iVar21,param_2), !bVar17)) {
        local_e8[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
        local_e8[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
        local_e8[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar27 = branch_fast_winding_num(this,iVar21,(TVector<double> *)&local_e8[0]._s_0);
        uVar24 = SUB84(dVar27,0);
        uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
      }
      else {
        dVar27 = evaluate_box_fast_winding_cache(this,iVar21,param_2);
        uVar24 = SUB84(dVar27,0);
        uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
      }
      dVar27 = (double)CONCAT44(uVar26,uVar24) + (double)CONCAT44(uVar25,uVar23);
    }
  }
  return dVar27;
}

// build_fast_winding_cache @ 14cb4d640

int __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,int param_2,int param_3,
          TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_4,FMeshTriInfoCache *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar3;
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
  if (param_2 == 0) goto LAB_14cb4dbbe;
  if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
    if (local_168.TypedValue.ArrayMax == -1) {
      if (iVar10 + iVar8 <= param_3) goto LAB_14cb4dbbe;
      pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->field0_0x0).TypedValue.ArrayNum = 0;
      (param_4->field0_0x0).TypedValue.ArrayMax = 0;
      collect_triangles(this,(int)local_158,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
      goto LAB_14cb4d80e;
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
LAB_14cb4d80e:
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
    FastTriWinding::ComputeCoeffs<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
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
LAB_14cb4dbbe:
  if ((local_168.TypedValue.ArrayMax != -1) &&
     (local_168.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_168.TypedValue.AllocatorInstance.Data);
  }
  return iVar8 + iVar10;
}

// build_fast_winding_cache @ 14cb4dc10

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this)

{
  int *piVar1;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar2;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMeshElementContainer *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  <lambda_1> local_res8;
  FMeshTriInfoCache local_138;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_e8;
  FMeshDescriptionTriangleMeshSurfaceAdapter *local_d8;
  FMeshTriInfoCache *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FMeshDescriptionTriangleMeshSurfaceAdapter **local_b0;
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
  
  uVar11 = 0;
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
  pFVar7 = FMeshElementChannels::Get(*(FMeshElementChannels **)(pFVar2->_padding_ + 0x70),0);
  uVar9 = (pFVar7->BitArray).NumBits - pFVar7->NumHoles;
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Centroids,uVar9);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Normals,uVar9);
  TDynamicVector<double,512>::Resize(&local_138.Areas,uVar9);
  local_d0 = &local_138;
  local_c8.DataPtr = (void **)0x0;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_d8;
  uVar12 = 0;
  local_c8.ArrayNum = 0;
  local_d8 = pFVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar9,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_res8,
             None,&local_c8);
  pTVar3 = this->Tree;
  this->FastWindingCacheOffset = 0;
  uVar9 = (pTVar3->BoxToIndex).CurBlock;
  uVar10 = (pTVar3->BoxToIndex).CurBlockUsed;
  if (uVar9 * 0x200 + uVar10 != 0) {
    do {
      uVar12 = (uint)uVar11;
      if (pTVar3->TrianglesEnd <=
          *(int *)(*(longlong *)
                    ((pTVar3->BoxToIndex).Blocks.AllocatorInstance.Data + (uVar11 >> 9) * 8) +
                  (ulonglong)(uVar12 & 0x1ff) * 4)) break;
      uVar12 = uVar12 + 1;
      this->FastWindingCacheOffset = uVar12;
      uVar11 = (ulonglong)uVar12;
      uVar9 = (pTVar3->BoxToIndex).CurBlock;
      uVar10 = (pTVar3->BoxToIndex).CurBlockUsed;
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(uVar9 * 0x200 + uVar10));
  }
  uVar10 = (uVar9 * 0x200 - uVar12) + uVar10;
  uVar11 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &(this->FastWindingCache).ArrayMax;
  (this->FastWindingCache).ArrayNum = 0;
  if (*piVar1 != uVar10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar10,&(this->FastWindingCache).AllocatorInstance,0,piVar1);
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
  if (*piVar1 != uVar10) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar10,&(this->FastWindingCache).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar10) {
    do {
      pFVar8 = (this->FastWindingCache).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar8 + (longlong)*piVar1 * 0x88)) &&
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
      pFVar8 = (this->FastWindingCache).AllocatorInstance.Data + (longlong)iVar6 * 0x88;
      *(undefined8 *)pFVar8 = local_a8;
      *(undefined8 *)(pFVar8 + 8) = uStack_a0;
      *(undefined8 *)(pFVar8 + 0x10) = local_98;
      *(undefined8 *)(pFVar8 + 0x18) = uStack_90;
      *(undefined8 *)(pFVar8 + 0x20) = local_88;
      *(undefined8 *)(pFVar8 + 0x28) = uStack_80;
      *(undefined8 *)(pFVar8 + 0x30) = local_78;
      *(undefined8 *)(pFVar8 + 0x38) = uStack_70;
      *(undefined8 *)(pFVar8 + 0x40) = local_68;
      *(undefined8 *)(pFVar8 + 0x48) = uStack_60;
      *(undefined8 *)(pFVar8 + 0x50) = local_58;
      *(undefined8 *)(pFVar8 + 0x58) = uStack_50;
      *(undefined8 *)(pFVar8 + 0x60) = local_48;
      *(undefined8 *)(pFVar8 + 0x68) = uStack_40;
      *(undefined8 *)(pFVar8 + 0x70) = local_38;
      *(undefined8 *)(pFVar8 + 0x78) = uStack_30;
      *(ulonglong *)(pFVar8 + 0x80) = CONCAT71(uStack_27,local_28);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
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

// build_fast_winding_cache @ 14cb4dfe0

int __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          int param_1,int param_2,int param_3,
          TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_4,FMeshTriInfoCache *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar3;
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
  if (param_2 == 0) goto LAB_14cb4e55e;
  if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
    if (local_168.TypedValue.ArrayMax == -1) {
      if (iVar10 + iVar8 <= param_3) goto LAB_14cb4e55e;
      pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->field0_0x0).TypedValue.ArrayNum = 0;
      (param_4->field0_0x0).TypedValue.ArrayMax = 0;
      collect_triangles(this,(int)local_158,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
      goto LAB_14cb4e1ae;
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
LAB_14cb4e1ae:
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
    FastTriWinding::ComputeCoeffs<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
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
LAB_14cb4e55e:
  if ((local_168.TypedValue.ArrayMax != -1) &&
     (local_168.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_168.TypedValue.AllocatorInstance.Data);
  }
  return iVar8 + iVar10;
}

// build_fast_winding_cache @ 14cb4e5b0

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this)

{
  int *piVar1;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar2;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  <lambda_1> local_res8;
  FMeshTriInfoCache local_138;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_e8;
  FStaticMeshLODResourcesMeshSurfaceAdapter *local_d8;
  FMeshTriInfoCache *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FStaticMeshLODResourcesMeshSurfaceAdapter **local_b0;
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
  uVar12 = 0;
  uVar11 = uVar12;
  if ((*(longlong *)pFVar2 != 0) &&
     (cVar5 = (**(code **)(*(longlong *)(*(longlong *)pFVar2 + 0x250) + 0x30))(), cVar5 != '\0')) {
    uVar11 = *(uint *)&pFVar2->field_0x60;
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Centroids,uVar11);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Normals,uVar11);
  TDynamicVector<double,512>::Resize(&local_138.Areas,uVar11);
  local_d0 = &local_138;
  local_c8.DataPtr = (void **)0x0;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_d8;
  local_c8.ArrayNum = 0;
  local_d8 = pFVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar11,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_res8,
             None,&local_c8);
  pTVar3 = this->Tree;
  this->FastWindingCacheOffset = 0;
  uVar11 = (pTVar3->BoxToIndex).CurBlock;
  uVar9 = (pTVar3->BoxToIndex).CurBlockUsed;
  if (uVar11 * 0x200 + uVar9 != 0) {
    do {
      uVar12 = (uint)uVar10;
      if (pTVar3->TrianglesEnd <=
          *(int *)(*(longlong *)
                    ((pTVar3->BoxToIndex).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
                  (ulonglong)(uVar12 & 0x1ff) * 4)) break;
      uVar12 = uVar12 + 1;
      this->FastWindingCacheOffset = uVar12;
      uVar10 = (ulonglong)uVar12;
      uVar11 = (pTVar3->BoxToIndex).CurBlock;
      uVar9 = (pTVar3->BoxToIndex).CurBlockUsed;
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(uVar11 * 0x200 + uVar9));
  }
  uVar9 = (uVar11 * 0x200 - uVar12) + uVar9;
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
      pFVar8 = (this->FastWindingCache).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar8 + (longlong)*piVar1 * 0x88)) &&
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
      iVar7 = (this->FastWindingCache).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x888,&(this->FastWindingCache).AllocatorInstance,piVar1);
      }
      (this->FastWindingCache).ArrayNum = iVar7 + 1;
      pFVar8 = (this->FastWindingCache).AllocatorInstance.Data + (longlong)iVar7 * 0x88;
      *(undefined8 *)pFVar8 = local_a8;
      *(undefined8 *)(pFVar8 + 8) = uStack_a0;
      *(undefined8 *)(pFVar8 + 0x10) = local_98;
      *(undefined8 *)(pFVar8 + 0x18) = uStack_90;
      *(undefined8 *)(pFVar8 + 0x20) = local_88;
      *(undefined8 *)(pFVar8 + 0x28) = uStack_80;
      *(undefined8 *)(pFVar8 + 0x30) = local_78;
      *(undefined8 *)(pFVar8 + 0x38) = uStack_70;
      *(undefined8 *)(pFVar8 + 0x40) = local_68;
      *(undefined8 *)(pFVar8 + 0x48) = uStack_60;
      *(undefined8 *)(pFVar8 + 0x50) = local_58;
      *(undefined8 *)(pFVar8 + 0x58) = uStack_50;
      *(undefined8 *)(pFVar8 + 0x60) = local_48;
      *(undefined8 *)(pFVar8 + 0x68) = uStack_40;
      *(undefined8 *)(pFVar8 + 0x70) = local_38;
      *(undefined8 *)(pFVar8 + 0x78) = uStack_30;
      *(ulonglong *)(pFVar8 + 0x80) = CONCAT71(uStack_27,local_28);
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

// build_fast_winding_cache @ 14cb4e990

int __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>::build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FColliderMesh> *this,int param_1,int param_2,int param_3,
          TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_4,FMeshTriInfoCache *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar3;
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
  if (param_2 == 0) goto LAB_14cb4ef0e;
  if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
    if (local_168.TypedValue.ArrayMax == -1) {
      if (iVar10 + iVar8 <= param_3) goto LAB_14cb4ef0e;
      pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->field0_0x0).TypedValue.ArrayNum = 0;
      (param_4->field0_0x0).TypedValue.ArrayMax = 0;
      collect_triangles(this,(int)local_158,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
      goto LAB_14cb4eb5e;
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
LAB_14cb4eb5e:
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
    FastTriWinding::ComputeCoeffs<UE::Geometry::FColliderMesh>
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
LAB_14cb4ef0e:
  if ((local_168.TypedValue.ArrayMax != -1) &&
     (local_168.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_168.TypedValue.AllocatorInstance.Data);
  }
  return iVar8 + iVar10;
}

// build_fast_winding_cache @ 14cb4ef60

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>::build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FColliderMesh> *this)

{
  int *piVar1;
  FColliderMesh *pFVar2;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar3;
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
  FColliderMesh *local_d8;
  FMeshTriInfoCache *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FColliderMesh **local_b0;
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
  uVar10 = (pFVar2->Triangles).ArrayNum;
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Centroids,uVar10);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Normals,uVar10);
  TDynamicVector<double,512>::Resize(&local_138.Areas,uVar10);
  local_d0 = &local_138;
  local_c8.DataPtr = (void **)0x0;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::FColliderMesh>'::__l2::<lambda_1>,void,int>
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

// can_use_fast_winding_cache @ 14cb4f320

bool __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
can_use_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,TVector<double> *param_2)

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

// can_use_fast_winding_cache @ 14cb4f420

bool __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
can_use_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          int param_1,TVector<double> *param_2)

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

// can_use_fast_winding_cache @ 14cb4f520

bool __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>::can_use_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FColliderMesh> *this,int param_1,TVector<double> *param_2)

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

// collect_triangles @ 14cb4f620

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
collect_triangles(TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
                 int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar8;
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

// collect_triangles @ 14cb4f800

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
collect_triangles(TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
                 int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar8;
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

// collect_triangles @ 14cb4f9e0

void __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>::collect_triangles
          (TFastWindingTree<UE::Geometry::FColliderMesh> *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar8;
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

// evaluate_box_fast_winding_cache @ 14cb4fbc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
evaluate_box_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this,
          int param_1,TVector<double> *param_2)

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

// evaluate_box_fast_winding_cache @ 14cb4fd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
evaluate_box_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this,
          int param_1,TVector<double> *param_2)

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

// evaluate_box_fast_winding_cache @ 14cb4fe40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>::evaluate_box_fast_winding_cache
          (TFastWindingTree<UE::Geometry::FColliderMesh> *this,int param_1,TVector<double> *param_2)

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

