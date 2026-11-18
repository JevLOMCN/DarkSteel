// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// FDetourTileLayout @ 146dd3a90

FDetourTileLayout * __thiscall
FDetourTileLayout::FDetourTileLayout(FDetourTileLayout *this,FDetourTileSizeInfo *param_1)

{
  this->HeaderSize = 0;
  this->VertsSize = 0;
  this->PolysSize = 0;
  this->LinksSize = 0;
  this->DetailMeshesSize = 0;
  this->DetailVertsSize = 0;
  this->DetailTrisSize = 0;
  this->BvTreeSize = 0;
  this->OffMeshConsSize = 0;
  this->OffMeshSegsSize = 0;
  this->ClustersSize = 0;
  this->PolyClustersSize = 0;
  this->TileSize = 0;
  InitFromSizeInfo(this,param_1);
  return this;
}

// FDetourTileLayout @ 146dd3ad0

FDetourTileLayout * __thiscall
FDetourTileLayout::FDetourTileLayout(FDetourTileLayout *this,dtMeshTile *param_1)

{
  dtMeshHeader *pdVar1;
  FDetourTileSizeInfo local_28;
  
  this->HeaderSize = 0;
  this->VertsSize = 0;
  this->PolysSize = 0;
  this->LinksSize = 0;
  this->DetailMeshesSize = 0;
  this->DetailVertsSize = 0;
  this->DetailTrisSize = 0;
  this->BvTreeSize = 0;
  this->OffMeshConsSize = 0;
  this->OffMeshSegsSize = 0;
  this->ClustersSize = 0;
  this->PolyClustersSize = 0;
  this->TileSize = 0;
  pdVar1 = param_1->header;
  if ((pdVar1 != (dtMeshHeader *)0x0) && (pdVar1->version == 7)) {
    local_28.VertCount = pdVar1->vertCount;
    local_28.PolyCount = pdVar1->polyCount;
    local_28.MaxLinkCount = pdVar1->maxLinkCount;
    local_28.DetailMeshCount = pdVar1->detailMeshCount;
    local_28.DetailVertCount = pdVar1->detailVertCount;
    local_28.DetailTriCount = pdVar1->detailTriCount;
    local_28.BvNodeCount = pdVar1->bvNodeCount;
    local_28.OffMeshConCount = pdVar1->offMeshConCount;
    local_28.OffMeshSegConCount = pdVar1->offMeshSegConCount;
    local_28.ClusterCount = pdVar1->clusterCount;
    local_28.OffMeshBase = pdVar1->offMeshBase;
    InitFromSizeInfo(this,&local_28);
  }
  return this;
}

// InitFromSizeInfo @ 146e149a0

void __thiscall
FDetourTileLayout::InitFromSizeInfo(FDetourTileLayout *this,FDetourTileSizeInfo *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  this->HeaderSize = 0x58;
  iVar1 = ((uint)param_1->VertCount + (uint)param_1->VertCount * 2) * 8;
  this->VertsSize = iVar1;
  iVar11 = (uint)param_1->PolyCount * 0x20;
  this->PolysSize = iVar11;
  iVar6 = (uint)param_1->MaxLinkCount * 0x10;
  this->LinksSize = iVar6;
  uVar7 = ((uint)param_1->DetailMeshCount + (uint)param_1->DetailMeshCount * 2) * 2 + 7 & 0xfffffff8
  ;
  this->DetailMeshesSize = uVar7;
  iVar5 = ((uint)param_1->DetailVertCount + (uint)param_1->DetailVertCount * 2) * 8;
  this->DetailVertsSize = iVar5;
  uVar10 = (uint)param_1->DetailTriCount * 4 + 7 & 0xfffffff8;
  this->DetailTrisSize = uVar10;
  iVar9 = (uint)param_1->BvNodeCount * 0x10;
  this->BvTreeSize = iVar9;
  iVar8 = ((uint)param_1->OffMeshConCount + (uint)param_1->OffMeshConCount * 4) * 0x10;
  this->OffMeshConsSize = iVar8;
  iVar4 = (uint)param_1->OffMeshSegConCount * 0x70;
  this->OffMeshSegsSize = iVar4;
  iVar3 = (uint)param_1->ClusterCount * 0x20;
  this->ClustersSize = iVar3;
  uVar2 = (uint)param_1->OffMeshBase * 2 + 7 & 0xfffffff8;
  this->PolyClustersSize = uVar2;
  this->TileSize =
       iVar1 + 0x58 +
       uVar2 + iVar3 + iVar4 + iVar8 + iVar9 + uVar10 + iVar5 + uVar7 + iVar6 + iVar11;
  return;
}

