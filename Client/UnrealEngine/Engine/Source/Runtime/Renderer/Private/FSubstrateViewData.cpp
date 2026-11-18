// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Reset @ 14571ffd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSubstrateViewData::Reset(FSubstrateViewData *this)

{
  uchar uVar1;
  bool bVar2;
  
  uVar1 = this->UsesTileTypeMask;
  bVar2 = this->bUsesAnisotropy;
  this->MaxClosurePerPixel = 0;
  this->MaxBytesPerPixel = 0;
  *(undefined8 *)&this->UsesTileTypeMask = 0;
  *(undefined8 *)((longlong)&(this->TileCount).field0_0x0 + 4) = 0;
  *(undefined8 *)&this->LayerCount = 0;
  this->ClassificationTileListBuffer = (FRDGBuffer *)0x0;
  this->ClassificationTileListBufferSRV = (FRDGBufferSRV *)0x0;
  this->ClassificationTileListBufferUAV = (FRDGBufferUAV *)0x0;
  this->ClassificationTileListBufferOffset[0] = 0;
  this->ClassificationTileListBufferOffset[1] = 0;
  this->ClassificationTileListBufferOffset[2] = 0;
  this->ClassificationTileListBufferOffset[3] = 0;
  this->ClassificationTileListBufferOffset[4] = 0;
  this->ClassificationTileListBufferOffset[5] = 0;
  this->ClassificationTileListBufferOffset[6] = 0;
  this->ClassificationTileListBufferOffset[7] = 0;
  *(undefined8 *)(this->ClassificationTileListBufferOffset + 8) = 0;
  this->ClassificationTileDrawIndirectBuffer = (FRDGBuffer *)0x0;
  this->ClassificationTileDrawIndirectBufferUAV = (FRDGBufferUAV *)0x0;
  this->ClassificationTileDispatchIndirectBuffer = (FRDGBuffer *)0x0;
  this->ClassificationTileDispatchIndirectBufferUAV = (FRDGBufferUAV *)0x0;
  this->ClosureTileBuffer = (FRDGBuffer *)0x0;
  this->ClosureTileCountBuffer = (FRDGBuffer *)0x0;
  this->ClosureTileDispatchIndirectBuffer = (FRDGBuffer *)0x0;
  this->ClosureTileRaytracingIndirectBuffer = (FRDGBuffer *)0x0;
  this->ClosureTilePerThreadDispatchIndirectBuffer = (FRDGBuffer *)0x0;
  this->SceneData = (FSubstrateSceneData *)0x0;
  this->SubstrateGlobalUniformParameters =
       (TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *)0x0;
  this->UsesTileTypeMask = uVar1;
  this->bUsesAnisotropy = bVar2;
  return;
}

