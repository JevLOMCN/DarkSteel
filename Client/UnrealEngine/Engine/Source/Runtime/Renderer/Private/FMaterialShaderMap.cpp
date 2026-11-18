// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetShader<FHWRasterizePS> @ 144f62170

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable> * __thiscall
FMaterialShaderMap::GetShader<FHWRasterizePS>
          (FMaterialShaderMap *this,
          TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FHWRasterizePS::FDepthOnlyDim,FHWRasterizePS::FMeshShaderDim,FHWRasterizePS::FPrimShaderDim,FHWRasterizePS::FVisualizeDim,FHWRasterizePS::FVirtualTextureTargetDim,FHWRasterizePS::FMaterialCacheDim,FHWRasterizePS::FVertexProgrammableDim,FHWRasterizePS::FPixelProgrammableDim,FHWRasterizePS::FAllowSvBarycentricsDim>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FMaterialShaderType *pFVar10;
  FHWRasterizePS *pFVar11;
  
  bVar1 = param_1->DimensionValue;
  bVar2 = (param_1->Tail).DimensionValue;
  bVar3 = (param_1->Tail).Tail.DimensionValue;
  bVar4 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar5 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar6 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar7 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar8 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar9 = ((TShaderPermutationDomain<FHWRasterizePS::FAllowSvBarycentricsDim> *)
          ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 1))->DimensionValue;
  pFVar10 = FHWRasterizePS::GetStaticType();
  pFVar11 = (FHWRasterizePS *)
            FShaderMapContent::GetShader
                      ((FShaderMapContent *)this->_padding_,(FHashedName *)&pFVar10->field_0x28,
                       (-(uint)(bVar9 != false) & 0x100) + (-(uint)(bVar8 != false) & 0x80) +
                       (-(uint)(bVar7 != false) & 0x40) + (-(uint)(bVar6 != false) & 0x20) +
                       (-(uint)(bVar5 != false) & 0x10) + (-(uint)(bVar4 != false) & 8) +
                       (-(uint)(bVar3 != false) & 4) + (-(uint)(bVar2 != false) & 2) +
                       (uint)(bVar1 != false));
  if (pFVar11 == (FHWRasterizePS *)0x0) {
    this = (FMaterialShaderMap *)0x0;
  }
  __return_storage_ptr__->ShaderContent = pFVar11;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)this;
  return __return_storage_ptr__;
}

// GetShader<FHWRasterizeVS> @ 144f62280

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> * __thiscall
FMaterialShaderMap::GetShader<FHWRasterizeVS>
          (FMaterialShaderMap *this,
          TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> *__return_storage_ptr__,
          TShaderPermutationDomain<FHWRasterizeVS::FDepthOnlyDim,FHWRasterizeVS::FPrimShaderDim,FHWRasterizeVS::FVirtualTextureTargetDim,FHWRasterizeVS::FMaterialCacheDim,FHWRasterizeVS::FVertexProgrammableDim,FHWRasterizeVS::FPixelProgrammableDim,FHWRasterizeVS::FSplineDeformDim,FHWRasterizeVS::FSkinningDim,FHWRasterizeVS::FFixedDisplacementFallbackDim>
          *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FMaterialShaderType *pFVar10;
  FHWRasterizeVS *pFVar11;
  
  bVar1 = param_1->DimensionValue;
  bVar2 = (param_1->Tail).DimensionValue;
  bVar3 = (param_1->Tail).Tail.DimensionValue;
  bVar4 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar5 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar6 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar7 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar8 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar9 = ((TShaderPermutationDomain<FHWRasterizeVS::FFixedDisplacementFallbackDim> *)
          ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 1))->DimensionValue;
  pFVar10 = FHWRasterizeVS::GetStaticType();
  pFVar11 = (FHWRasterizeVS *)
            FShaderMapContent::GetShader
                      ((FShaderMapContent *)this->_padding_,(FHashedName *)&pFVar10->field_0x28,
                       (-(uint)(bVar9 != false) & 0x100) + (-(uint)(bVar8 != false) & 0x80) +
                       (-(uint)(bVar7 != false) & 0x40) + (-(uint)(bVar6 != false) & 0x20) +
                       (-(uint)(bVar5 != false) & 0x10) + (-(uint)(bVar4 != false) & 8) +
                       (-(uint)(bVar3 != false) & 4) + (-(uint)(bVar2 != false) & 2) +
                       (uint)(bVar1 != false));
  if (pFVar11 == (FHWRasterizeVS *)0x0) {
    this = (FMaterialShaderMap *)0x0;
  }
  __return_storage_ptr__->ShaderContent = pFVar11;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)this;
  return __return_storage_ptr__;
}

