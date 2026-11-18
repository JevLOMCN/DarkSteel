// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FVTProducerDescription @ 145ec40c0

FVTProducerDescription * __thiscall
FVTProducerDescription::FVTProducerDescription(FVTProducerDescription *this)

{
  this->bPersistentHighestMip = true;
  this->bContinuousUpdate = false;
  this->bRequiresSinglePhysicalPool = false;
  this->bNotifyCompleted = false;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->TileSize = 0;
  this->TileBorderSize = 0;
  this->BlockWidthInTiles = 0;
  this->BlockHeightInTiles = 0;
  this->DepthInTiles = 0;
  this->Dimensions = '\0';
  this->MaxLevel = '\0';
  this->NumTextureLayers = '\0';
  this->LayerFormat[0] = '\0';
  this->LayerFormat[1] = '\0';
  this->LayerFormat[2] = '\0';
  this->LayerFormat[3] = '\0';
  this->LayerFormat[4] = '\0';
  this->WidthInBlocks = 1;
  this->HeightInBlocks = 1;
  this->LayerFormat[5] = '\0';
  this->LayerFormat[6] = '\0';
  this->LayerFormat[7].Value = '\0';
  this->LayerFallbackColor[0].field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0
  ;
  *(undefined8 *)&this->LayerFallbackColor[1].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerFallbackColor[1].field0_0x0 + 8) = 0;
  *(undefined8 *)&this->LayerFallbackColor[2].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerFallbackColor[2].field0_0x0 + 8) = 0;
  *(undefined8 *)&this->LayerFallbackColor[3].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerFallbackColor[3].field0_0x0 + 8) = 0;
  *(undefined8 *)&this->LayerFallbackColor[4].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerFallbackColor[4].field0_0x0 + 8) = 0;
  *(undefined8 *)&this->LayerFallbackColor[5].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerFallbackColor[5].field0_0x0 + 8) = 0;
  *(undefined8 *)&this->LayerFallbackColor[6].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerFallbackColor[6].field0_0x0 + 8) = 0;
  *(undefined8 *)&this->LayerFallbackColor[7].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerFallbackColor[7].field0_0x0 + 8) = 0;
  this->bIsLayerSRGB[0] = false;
  this->bIsLayerSRGB[1] = false;
  this->bIsLayerSRGB[2] = false;
  this->bIsLayerSRGB[3] = false;
  this->bIsLayerSRGB[4] = false;
  this->bIsLayerSRGB[5] = false;
  this->bIsLayerSRGB[6] = false;
  this->bIsLayerSRGB[7] = false;
  this->NumPhysicalGroups = '\0';
  this->PhysicalGroupIndex[0] = '\0';
  this->PhysicalGroupIndex[1] = '\0';
  this->PhysicalGroupIndex[2] = '\0';
  this->PhysicalGroupIndex[3] = '\0';
  this->PhysicalGroupIndex[4] = '\0';
  this->PhysicalGroupIndex[5] = '\0';
  this->PhysicalGroupIndex[6] = '\0';
  this->PhysicalGroupIndex[7] = '\0';
  this->Priority = Normal;
  return this;
}

