// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// ResetIntermediateData @ 146e70cc0

void __thiscall FTileGenerationContext::ResetIntermediateData(FTileGenerationContext *this)

{
  if (this->Allocator != (dtTileCacheAlloc *)0x0) {
    dtFreeTileCacheLayer(this->Allocator,this->Layer);
    this->Layer = (dtTileCacheLayer *)0x0;
    dtFreeTileCacheDistanceField(this->Allocator,this->DistanceField);
    this->DistanceField = (dtTileCacheDistanceField *)0x0;
    dtFreeTileCacheContourSet(this->Allocator,this->ContourSet);
    this->ContourSet = (dtTileCacheContourSet *)0x0;
    dtFreeTileCacheClusterSet(this->Allocator,this->ClusterSet);
    this->ClusterSet = (dtTileCacheClusterSet *)0x0;
    dtFreeTileCachePolyMesh(this->Allocator,this->PolyMesh);
    this->PolyMesh = (dtTileCachePolyMesh *)0x0;
    dtFreeTileCachePolyMeshDetail(this->Allocator,this->DetailMesh);
    this->DetailMesh = (dtTileCachePolyMeshDetail *)0x0;
  }
  return;
}

