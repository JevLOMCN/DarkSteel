// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FRecastVoxelCache @ 146e36b20

FRecastVoxelCache * __thiscall
FRecastVoxelCache::FRecastVoxelCache(FRecastVoxelCache *this,uchar *param_1)

{
  int iVar1;
  FTileInfo *pFVar2;
  FTileInfo *pFVar3;
  FTileInfo *pFVar4;
  uint uVar5;
  FTileInfo *pFVar7;
  FTileInfo *pFVar6;
  
  if (param_1 == (uchar *)0x0) {
    this->NumTiles = 0;
  }
  else {
    iVar1 = *(int *)param_1;
    this->NumTiles = iVar1;
    if (0 < iVar1) {
      this->Tiles = (FTileInfo *)(param_1 + 4);
      pFVar4 = (FTileInfo *)(param_1 + 4);
      pFVar6 = (FTileInfo *)0x0;
      do {
        pFVar2 = pFVar4;
        pFVar3 = pFVar2 + 1;
        pFVar4 = pFVar3;
        pFVar7 = (FTileInfo *)0x0;
        if (pFVar2->NumSpans != 0) {
          pFVar4 = (FTileInfo *)(&pFVar3->TileX + (longlong)pFVar2->NumSpans * 4);
          pFVar7 = pFVar3;
        }
        pFVar2->SpanData = (rcSpanCache *)pFVar7;
        uVar5 = (int)pFVar6 + 1;
        pFVar6 = (FTileInfo *)(ulonglong)uVar5;
        pFVar2->NextTile = pFVar4;
      } while ((int)uVar5 < this->NumTiles);
      pFVar2->NextTile = (FTileInfo *)0x0;
      return this;
    }
  }
  this->Tiles = (FTileInfo *)0x0;
  return this;
}

