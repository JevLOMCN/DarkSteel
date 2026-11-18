// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FPrimitiveReferences @ 145037240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveReferences * __thiscall
FNaniteVisibility::FPrimitiveReferences::FPrimitiveReferences
          (FPrimitiveReferences *this,FPrimitiveReferences *param_1)

{
  this->SceneInfo = param_1->SceneInfo;
  (this->RasterBins).AllocatorInstance.SecondaryData =
       (ForElementType<FNaniteVisibility::FRasterBin>)0x0;
  if ((param_1->RasterBins).AllocatorInstance.SecondaryData ==
      (ForElementType<FNaniteVisibility::FRasterBin>)0x0) {
    *(undefined4 *)(this->RasterBins).AllocatorInstance.InlineData =
         *(undefined4 *)(param_1->RasterBins).AllocatorInstance.InlineData;
  }
  (this->RasterBins).AllocatorInstance.SecondaryData =
       (param_1->RasterBins).AllocatorInstance.SecondaryData;
  (param_1->RasterBins).AllocatorInstance.SecondaryData =
       (ForElementType<FNaniteVisibility::FRasterBin>)0x0;
  (this->RasterBins).ArrayNum = (param_1->RasterBins).ArrayNum;
  (this->RasterBins).ArrayMax = (param_1->RasterBins).ArrayMax;
  (param_1->RasterBins).ArrayNum = 0;
  (param_1->RasterBins).ArrayMax = 1;
  (this->ShadingBins).AllocatorInstance.SecondaryData =
       (ForElementType<FNaniteVisibility::FShadingBin>)0x0;
  if ((param_1->ShadingBins).AllocatorInstance.SecondaryData ==
      (ForElementType<FNaniteVisibility::FShadingBin>)0x0) {
    *(undefined4 *)(this->ShadingBins).AllocatorInstance.InlineData =
         *(undefined4 *)(param_1->ShadingBins).AllocatorInstance.InlineData;
  }
  (this->ShadingBins).AllocatorInstance.SecondaryData =
       (param_1->ShadingBins).AllocatorInstance.SecondaryData;
  (param_1->ShadingBins).AllocatorInstance.SecondaryData =
       (ForElementType<FNaniteVisibility::FShadingBin>)0x0;
  (this->ShadingBins).ArrayNum = (param_1->ShadingBins).ArrayNum;
  (this->ShadingBins).ArrayMax = (param_1->ShadingBins).ArrayMax;
  (param_1->ShadingBins).ArrayNum = 0;
  (param_1->ShadingBins).ArrayMax = 1;
  this->bWritesCustomDepthStencil = param_1->bWritesCustomDepthStencil;
  return this;
}

