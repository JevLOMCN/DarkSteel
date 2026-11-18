// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FHairStrandsVisibilityData @ 14499e1e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsVisibilityData * __thiscall
FHairStrandsVisibilityData::FHairStrandsVisibilityData(FHairStrandsVisibilityData *this)

{
  this->MaxSampleCount = 8;
  this->MaxNodeCount = 0;
  *(undefined8 *)&(this->HairOnlyDepthHZBParameters).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->HairOnlyDepthHZBParameters).field0_0x0 + 8) = 0;
  (this->TileData).BufferResolution.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TileData).TileCountXY.field0_0x0._s_0.Y = 0;
  this->VelocityTexture = (FRDGTexture *)0x0;
  this->ResolveMaskTexture = (FRDGTexture *)0x0;
  this->CoverageTexture = (FRDGTexture *)0x0;
  this->ViewHairCountTexture = (FRDGTexture *)0x0;
  this->ViewHairCountUintTexture = (FRDGTexture *)0x0;
  this->HairOnlyDepthTexture = (FRDGTexture *)0x0;
  this->HairOnlyDepthClosestHZBTexture = (FRDGTexture *)0x0;
  this->HairOnlyDepthFurthestHZBTexture = (FRDGTexture *)0x0;
  this->LightChannelMaskTexture = (FRDGTexture *)0x0;
  this->NodeCount = (FRDGBuffer *)0x0;
  this->NodeIndex = (FRDGTexture *)0x0;
  this->NodeData = (FRDGBuffer *)0x0;
  this->NodeVisData = (FRDGBuffer *)0x0;
  this->NodeCoord = (FRDGBuffer *)0x0;
  this->NodeIndirectArg = (FRDGBuffer *)0x0;
  this->NodeGroupSize = 0;
  this->RasterizedInstanceCount = 0;
  this->MaxControlPointCount = 0;
  this->ControlPointsSRV = (FRDGBufferSRV *)0x0;
  this->ControlPointCount = (FRDGBufferSRV *)0x0;
  this->ControlPointVelocitySRV = (FRDGBufferSRV *)0x0;
  *(undefined8 *)&(this->TileData).TileCount = 0;
  (this->TileData).bRectPrimitive = false;
  (this->TileData).TileDataSRV[0] = (FRDGBufferSRV *)0x0;
  (this->TileData).TileDataSRV[1] = (FRDGBufferSRV *)0x0;
  (this->TileData).TileDataSRV[2] = (FRDGBufferSRV *)0x0;
  (this->TileData).TileDataSRV[3] = (FRDGBufferSRV *)0x0;
  (this->TileData).TileDataBuffer[0] = (FRDGBuffer *)0x0;
  (this->TileData).TileDataBuffer[1] = (FRDGBuffer *)0x0;
  (this->TileData).TileDataBuffer[2] = (FRDGBuffer *)0x0;
  (this->TileData).TileDataBuffer[3] = (FRDGBuffer *)0x0;
  (this->TileData).TileCountSRV = (FRDGBufferSRV *)0x0;
  (this->TileData).TileCountBuffer = (FRDGBuffer *)0x0;
  (this->TileData).TileIndirectDrawBuffer = (FRDGBuffer *)0x0;
  (this->TileData).TileIndirectDispatchBuffer = (FRDGBuffer *)0x0;
  (this->TileData).TileIndirectRayDispatchBuffer = (FRDGBuffer *)0x0;
  (this->TileData).TilePerThreadIndirectDispatchBuffer = (FRDGBuffer *)0x0;
  this->SampleLightingTexture = (FRDGTexture *)0x0;
  return this;
}

