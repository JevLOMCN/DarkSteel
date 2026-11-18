// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FGBufferParams @ 1454d1210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGBufferParams * __thiscall FGBufferParams::FGBufferParams(FGBufferParams *this)

{
  this->ShaderPlatform = SP_NumPlatforms;
  this->LegacyFormatIndex = 0;
  this->bHasVelocity = false;
  this->bHasTangent = false;
  this->bHasPrecShadowFactor = false;
  this->bUsesVelocityDepth = false;
  this->bHasSingleLayerWaterSeparatedMainLight = false;
  return this;
}

