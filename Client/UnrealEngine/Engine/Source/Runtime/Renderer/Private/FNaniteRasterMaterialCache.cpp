// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FNaniteRasterMaterialCache @ 144f6b7e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNaniteRasterMaterialCache * __thiscall
FNaniteRasterMaterialCache::FNaniteRasterMaterialCache
          (FNaniteRasterMaterialCache *this,FNaniteRasterMaterialCache *param_1)

{
  bool bVar1;
  FShaderMapBase *pFVar2;
  
  this->VertexMaterial = param_1->VertexMaterial;
  this->PixelMaterial = param_1->PixelMaterial;
  this->ComputeMaterial = param_1->ComputeMaterial;
  this->VertexMaterialProxy = param_1->VertexMaterialProxy;
  this->PixelMaterialProxy = param_1->PixelMaterialProxy;
  this->ComputeMaterialProxy = param_1->ComputeMaterialProxy;
  pFVar2 = (param_1->RasterPixelShader).ShaderMap;
  (this->RasterPixelShader).ShaderContent = (param_1->RasterPixelShader).ShaderContent;
  (this->RasterPixelShader).ShaderMap = pFVar2;
  pFVar2 = (param_1->RasterVertexShader).ShaderMap;
  (this->RasterVertexShader).ShaderContent = (param_1->RasterVertexShader).ShaderContent;
  (this->RasterVertexShader).ShaderMap = pFVar2;
  pFVar2 = (param_1->RasterMeshShader).ShaderMap;
  (this->RasterMeshShader).ShaderContent = (param_1->RasterMeshShader).ShaderContent;
  (this->RasterMeshShader).ShaderMap = pFVar2;
  pFVar2 = (param_1->ClusterComputeShader).ShaderMap;
  (this->ClusterComputeShader).ShaderContent = (param_1->ClusterComputeShader).ShaderContent;
  (this->ClusterComputeShader).ShaderMap = pFVar2;
  pFVar2 = (param_1->PatchComputeShader).ShaderMap;
  (this->PatchComputeShader).ShaderContent = (param_1->PatchComputeShader).ShaderContent;
  (this->PatchComputeShader).ShaderMap = pFVar2;
  (this->MaterialBitFlags).bIsSet = false;
  bVar1 = (param_1->MaterialBitFlags).bIsSet;
  (this->MaterialBitFlags).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->MaterialBitFlags).TypedValue = (param_1->MaterialBitFlags).TypedValue;
  }
  (this->DisplacementScaling).bIsSet = false;
  bVar1 = (param_1->DisplacementScaling).bIsSet;
  (this->DisplacementScaling).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->DisplacementScaling).TypedValue = (param_1->DisplacementScaling).TypedValue;
  }
  (this->DisplacementFadeRange).bIsSet = false;
  bVar1 = (param_1->DisplacementFadeRange).bIsSet;
  (this->DisplacementFadeRange).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->DisplacementFadeRange).TypedValue = (param_1->DisplacementFadeRange).TypedValue;
  }
  this->bFinalized = param_1->bFinalized;
  return this;
}

