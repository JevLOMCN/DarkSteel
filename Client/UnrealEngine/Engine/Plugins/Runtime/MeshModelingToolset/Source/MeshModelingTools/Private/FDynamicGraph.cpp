// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// RemoveEdge @ 14cc70140

EMeshResult __thiscall
UE::Geometry::FDynamicGraph::RemoveEdge(FDynamicGraph *this,int param_1,bool param_2)

{
  TDynamicVector<int,512> *pTVar1;
  uint *puVar2;
  int *piVar3;
  short *psVar4;
  longlong lVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  short sVar10;
  EMeshResult EVar11;
  ulonglong uVar12;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar13;
  uint uVar14;
  uint uVar15;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->edges_refcount).RefCounts.CurBlock * 0x200 +
                     (this->edges_refcount).RefCounts.CurBlockUsed))) {
    uVar12 = (ulonglong)(param_1 & 0x1ff);
    lVar5 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->edges_refcount).RefCounts.Blocks.AllocatorInstance.Data + lVar5
                             ) + uVar12 * 2) - 1U) < 0xfffe) {
      lVar5 = *(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar5);
      uVar15 = *(uint *)(lVar5 + uVar12 * 0xc);
      uVar6 = *(uint *)(lVar5 + 4 + uVar12 * 0xc);
      FSmallListSet::Remove(&this->vertex_edges,uVar15,param_1);
      FSmallListSet::Remove(&this->vertex_edges,uVar6,param_1);
      FRefCountVector::Decrement(&this->edges_refcount,param_1,1);
      lVar5 = (ulonglong)(uVar15 >> 9) * 8;
      lVar8 = (ulonglong)(uVar15 & 0x1ff) * 2;
      psVar4 = (short *)(*(longlong *)
                          ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data + lVar5
                          ) + lVar8);
      *psVar4 = *psVar4 + -1;
      if (*(short *)(lVar8 + *(longlong *)
                              ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data +
                              lVar5)) == 0) {
        uVar14 = (this->vertices_refcount).FreeIndices.CurBlockUsed;
        if (uVar14 == 0x200) {
          if ((this->vertices_refcount).FreeIndices.CurBlock ==
              (this->vertices_refcount).FreeIndices.Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&(this->vertices_refcount).FreeIndices);
          }
          pTVar1 = &(this->vertices_refcount).FreeIndices;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar14 = 0;
          (this->vertices_refcount).FreeIndices.CurBlockUsed = 0;
        }
        *(uint *)(*(longlong *)
                   ((this->vertices_refcount).FreeIndices.Blocks.AllocatorInstance.Data +
                   (longlong)(int)(this->vertices_refcount).FreeIndices.CurBlock * 8) +
                 (longlong)(int)uVar14 * 4) = uVar15;
        puVar2 = &(this->vertices_refcount).FreeIndices.CurBlockUsed;
        *puVar2 = *puVar2 + 1;
        *(undefined2 *)
         (lVar8 + *(longlong *)
                   ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data + lVar5)) =
             0xffff;
        piVar3 = &(this->vertices_refcount).UsedCount;
        *piVar3 = *piVar3 + -1;
      }
      if (param_2) {
        sVar10 = *(short *)(*(longlong *)
                             ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar5) + (ulonglong)(uVar15 & 0x1ff) * 2);
        if (sVar10 == -1) {
          sVar10 = 0;
        }
        if (sVar10 == 1) {
          FRefCountVector::Decrement(&this->vertices_refcount,uVar15,1);
          if ((((-1 < (int)uVar15) &&
               ((int)uVar15 <
                (int)((this->vertices_refcount).RefCounts.CurBlock * 0x200 +
                     (this->vertices_refcount).RefCounts.CurBlockUsed))) &&
              ((ushort)(*(short *)(*(longlong *)
                                    ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)(uVar15 >> 9) * 8) +
                                  (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("vertices_refcount.IsValid(VID) == false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph.h"
                                 ,0x150,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          FSmallListSet::Clear(&this->vertex_edges,uVar15);
        }
      }
      pTVar13 = &(this->vertices_refcount).RefCounts.Blocks;
      lVar5 = (ulonglong)(uVar6 >> 9) * 8;
      lVar8 = (ulonglong)(uVar6 & 0x1ff) * 2;
      psVar4 = (short *)(*(longlong *)((pTVar13->AllocatorInstance).Data + lVar5) + lVar8);
      *psVar4 = *psVar4 + -1;
      if (*(short *)(lVar8 + *(longlong *)((pTVar13->AllocatorInstance).Data + lVar5)) == 0) {
        uVar15 = (this->vertices_refcount).FreeIndices.CurBlockUsed;
        if (uVar15 == 0x200) {
          if ((this->vertices_refcount).FreeIndices.CurBlock ==
              (this->vertices_refcount).FreeIndices.Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&(this->vertices_refcount).FreeIndices);
          }
          pTVar1 = &(this->vertices_refcount).FreeIndices;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar15 = 0;
          (this->vertices_refcount).FreeIndices.CurBlockUsed = 0;
        }
        *(uint *)(*(longlong *)
                   ((this->vertices_refcount).FreeIndices.Blocks.AllocatorInstance.Data +
                   (longlong)(int)(this->vertices_refcount).FreeIndices.CurBlock * 8) +
                 (longlong)(int)uVar15 * 4) = uVar6;
        puVar2 = &(this->vertices_refcount).FreeIndices.CurBlockUsed;
        *puVar2 = *puVar2 + 1;
        *(undefined2 *)(lVar8 + *(longlong *)((pTVar13->AllocatorInstance).Data + lVar5)) = 0xffff;
        piVar3 = &(this->vertices_refcount).UsedCount;
        *piVar3 = *piVar3 + -1;
      }
      if (param_2) {
        sVar10 = *(short *)(*(longlong *)
                             ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar5) + lVar8);
        if (sVar10 == -1) {
          sVar10 = 0;
        }
        if (sVar10 == 1) {
          FRefCountVector::Decrement(&this->vertices_refcount,uVar6,1);
          if (((-1 < (int)uVar6) &&
              ((int)uVar6 <
               (int)((this->vertices_refcount).RefCounts.CurBlock * 0x200 +
                    (this->vertices_refcount).RefCounts.CurBlockUsed))) &&
             (((ushort)(*(short *)(*(longlong *)
                                    ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)(uVar6 >> 9) * 8) +
                                  (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe &&
              (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("vertices_refcount.IsValid(VID) == false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph.h"
                                  ,0x150,L""), bVar9)))) {
            pcVar7 = (code *)swi(3);
            EVar11 = (*pcVar7)();
            return EVar11;
          }
          FSmallListSet::Clear(&this->vertex_edges,uVar6);
        }
      }
      this->timestamp = this->timestamp + 1;
      this->shape_timestamp = this->shape_timestamp + 1;
      return Ok;
    }
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Curve\\DynamicGraph.h"
                     ,0x13d,L"");
  if (!bVar9) {
    return Failed_NotAnEdge;
  }
  pcVar7 = (code *)swi(3);
  EVar11 = (*pcVar7)();
  return EVar11;
}

// SplitEdge @ 14cc80e80

EMeshResult __thiscall
UE::Geometry::FDynamicGraph::SplitEdge(FDynamicGraph *this,int param_1,FEdgeSplitInfo *param_2)

{
  undefined4 *puVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->edges_refcount).RefCounts.CurBlock * 0x200 +
                     (this->edges_refcount).RefCounts.CurBlockUsed))) {
    uVar7 = (ulonglong)(param_1 & 0x1ff);
    lVar3 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->edges_refcount).RefCounts.Blocks.AllocatorInstance.Data + lVar3
                             ) + uVar7 * 2) - 1U) < 0xfffe) {
      lVar3 = *(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar3);
      iVar6 = *(int *)(lVar3 + 4 + uVar7 * 0xc);
      puVar1 = (undefined4 *)(lVar3 + uVar7 * 0xc);
      iVar4 = puVar1[2];
      uVar5 = (**(code **)(this->_padding_ + 8))(this,*puVar1,iVar6);
      replace_edge_vertex(this,param_1,iVar6,uVar5);
      FSmallListSet::Remove(&this->vertex_edges,iVar6,param_1);
      FSmallListSet::Insert(&this->vertex_edges,uVar5,param_1);
      iVar6 = add_edge(this,uVar5,iVar6,iVar4);
      psVar2 = (short *)(*(longlong *)
                          ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 2);
      *psVar2 = *psVar2 + 2;
      param_2->VNew = uVar5;
      param_2->ENewBN = iVar6;
      this->timestamp = this->timestamp + 1;
      this->shape_timestamp = this->shape_timestamp + 1;
      return Ok;
    }
  }
  return Failed_NotAnEdge;
}

// SplitEdgeWithExistingVertex @ 14cc80fd0

EMeshResult __thiscall
UE::Geometry::FDynamicGraph::SplitEdgeWithExistingVertex
          (FDynamicGraph *this,int param_1,int param_2,FEdgeSplitInfo *param_3)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ushort uVar10;
  bool bVar11;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->edges_refcount).RefCounts.CurBlock * 0x200 +
                     (this->edges_refcount).RefCounts.CurBlockUsed))) {
    uVar8 = (ulonglong)(param_1 & 0x1ff);
    lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((this->edges_refcount).RefCounts.Blocks.AllocatorInstance.
                                       Data + lVar2) + uVar8 * 2) - 1U)) {
      return Failed_NotAnEdge;
    }
    if ((-1 < param_2) &&
       (param_2 < (int)((this->vertices_refcount).RefCounts.CurBlock * 0x200 +
                       (this->vertices_refcount).RefCounts.CurBlockUsed))) {
      lVar3 = (ulonglong)((uint)param_2 >> 9) * 8;
      lVar6 = (ulonglong)(param_2 & 0x1ff) * 2;
      if ((ushort)(*(short *)(*(longlong *)
                               ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data +
                               lVar3) + lVar6) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar2);
        iVar4 = *(int *)(lVar2 + 8 + uVar8 * 0xc);
        uVar5 = *(uint *)(lVar2 + 4 + uVar8 * 0xc);
        uVar7 = FindEdge(this,*(int *)(lVar2 + uVar8 * 0xc),param_2);
        iVar9 = 0;
        bVar11 = uVar7 == 0xffffffff;
        if (bVar11) {
          replace_edge_vertex(this,param_1,uVar5,param_2);
          FSmallListSet::Remove(&this->vertex_edges,uVar5,param_1);
          FSmallListSet::Insert(&this->vertex_edges,param_2,param_1);
          iVar9 = -1;
        }
        else {
          RemoveEdge(this,param_1,false);
          *(int *)(*(longlong *)
                    ((this->edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) + 8
                  + (ulonglong)(uVar7 & 0x1ff) * 0xc) = iVar4;
        }
        uVar10 = (ushort)bVar11;
        uVar7 = FindEdge(this,param_2,uVar5);
        if (uVar7 == 0xffffffff) {
          uVar7 = add_edge(this,param_2,uVar5,iVar4);
          uVar10 = bVar11 + 1;
          iVar9 = iVar9 + 1;
        }
        else {
          *(int *)(*(longlong *)
                    ((this->edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) + 8
                  + (ulonglong)(uVar7 & 0x1ff) * 0xc) = iVar4;
        }
        psVar1 = (short *)(*(longlong *)
                            ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data +
                            lVar3) + lVar6);
        *psVar1 = *psVar1 + uVar10;
        if (iVar9 < 1) {
          if (iVar9 < 0) {
            FRefCountVector::Decrement(&this->vertices_refcount,uVar5,-(short)iVar9);
          }
        }
        else {
          psVar1 = (short *)(*(longlong *)
                              ((this->vertices_refcount).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 2);
          *psVar1 = *psVar1 + (short)iVar9;
        }
        param_3->VNew = param_2;
        param_3->ENewBN = uVar7;
        this->timestamp = this->timestamp + 1;
        this->shape_timestamp = this->shape_timestamp + 1;
        return Ok;
      }
    }
    return Failed_NotAVertex;
  }
  return Failed_NotAnEdge;
}

// replace_edge_vertex @ 14cc8de40

int __thiscall
UE::Geometry::FDynamicGraph::replace_edge_vertex
          (FDynamicGraph *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar2 = (ulonglong)(param_1 & 0x1ff) * 0xc;
  piVar5 = (int *)(*(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar1) + lVar2);
  iVar3 = *piVar5;
  iVar4 = piVar5[1];
  if (iVar3 == param_2) {
    iVar3 = param_3;
    if (iVar4 < param_3) {
      iVar3 = iVar4;
    }
    if (param_3 < iVar4) {
      param_3 = iVar4;
    }
    *piVar5 = iVar3;
    *(int *)(*(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar1) + 4 + lVar2) =
         param_3;
    return 0;
  }
  if (iVar4 == param_2) {
    iVar4 = param_3;
    if (iVar3 < param_3) {
      iVar4 = iVar3;
    }
    if (param_3 < iVar3) {
      param_3 = iVar3;
    }
    *piVar5 = iVar4;
    *(int *)(*(longlong *)((this->edges).Blocks.AllocatorInstance.Data + lVar1) + 4 + lVar2) =
         param_3;
    return 1;
  }
  return -1;
}

