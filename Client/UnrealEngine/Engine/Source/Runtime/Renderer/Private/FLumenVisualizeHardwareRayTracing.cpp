// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetRayTracingPayloadType @ 144e92660

ERayTracingPayloadType __cdecl
FLumenVisualizeHardwareRayTracing::GetRayTracingPayloadType(int param_1)

{
  ERayTracingPayloadType EVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenVisualizeHardwareRayTracing::FHitLightingDim,FLumenVisualizeHardwareRayTracing::FHairStrandsOcclusionDim,FLumenVisualizeHardwareRayTracing::FFarFieldDim,FLumenVisualizeHardwareRayTracing::FRecursiveRefractionTraces,FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking>
  local_18 [2];
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenVisualizeHardwareRayTracing::FHitLightingDim,FLumenVisualizeHardwareRayTracing::FHairStrandsOcclusionDim,FLumenVisualizeHardwareRayTracing::FFarFieldDim,FLumenVisualizeHardwareRayTracing::FRecursiveRefractionTraces,FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenVisualizeHardwareRayTracing::FHitLightingDim,FLumenVisualizeHardwareRayTracing::FHairStrandsOcclusionDim,FLumenVisualizeHardwareRayTracing::FFarFieldDim,FLumenVisualizeHardwareRayTracing::FRecursiveRefractionTraces,FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking>
            (local_18,param_1);
  EVar1 = LumenMinimal;
  if (local_18[0].Tail.DimensionValue != false) {
    EVar1 = RayTracingMaterial;
  }
  return EVar1;
}

// ShouldCompilePermutation @ 144eaff90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLumenVisualizeHardwareRayTracing::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2)

{
  uint7 uVar1;
  TShaderPermutationDomain<FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking> TVar2;
  bool bVar3;
  char cVar4;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenVisualizeHardwareRayTracing::FHitLightingDim,FLumenVisualizeHardwareRayTracing::FHairStrandsOcclusionDim,FLumenVisualizeHardwareRayTracing::FFarFieldDim,FLumenVisualizeHardwareRayTracing::FRecursiveRefractionTraces,FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking>
  local_28;
  ulonglong local_18;
  TShaderPermutationDomain<FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking> local_10;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenVisualizeHardwareRayTracing::FHitLightingDim,FLumenVisualizeHardwareRayTracing::FHairStrandsOcclusionDim,FLumenVisualizeHardwareRayTracing::FFarFieldDim,FLumenVisualizeHardwareRayTracing::FRecursiveRefractionTraces,FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenVisualizeHardwareRayTracing::FHitLightingDim,FLumenVisualizeHardwareRayTracing::FHairStrandsOcclusionDim,FLumenVisualizeHardwareRayTracing::FFarFieldDim,FLumenVisualizeHardwareRayTracing::FRecursiveRefractionTraces,FLumenVisualizeHardwareRayTracing::FSurfaceCacheAlphaMasking>
            (&local_28,*(int *)&param_1->field_0x4);
  uVar1 = CONCAT16(local_28.Tail.Tail.Tail.DimensionValue,
                   CONCAT15(local_28.Tail.Tail.DimensionValue,
                            CONCAT14(local_28.Tail.DimensionValue,
                                     CONCAT13(local_28.DimensionValue.Tail.Tail.Tail,
                                              CONCAT12(local_28.DimensionValue.Tail.Tail.
                                                       DimensionValue,
                                                       CONCAT11(local_28.DimensionValue.Tail.
                                                                DimensionValue,
                                                                local_28.DimensionValue.
                                                                DimensionValue))))));
  local_18 = CONCAT17(local_28.Tail.Tail.Tail.Tail.DimensionValue,uVar1);
  local_10 = local_28.Tail.Tail.Tail.Tail.Tail;
  TVar2 = local_10;
  local_10.DimensionValue = local_28.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  if (local_28.Tail.DimensionValue == false) {
    local_18 = (ulonglong)uVar1;
    cVar4 = local_10.DimensionValue;
  }
  else {
    cVar4 = '\0';
  }
  if (((((((bool)(char)local_18 == local_28.DimensionValue.DimensionValue) &&
         ((bool)(char)(local_18 >> 8) == local_28.DimensionValue.Tail.DimensionValue)) &&
        ((bool)(char)(local_18 >> 0x10) == local_28.DimensionValue.Tail.Tail.DimensionValue)) &&
       (((bool)(char)(local_18 >> 0x20) == local_28.Tail.DimensionValue &&
        ((bool)(char)(local_18 >> 0x28) == local_28.Tail.Tail.DimensionValue)))) &&
      (((bool)(char)(local_18 >> 0x30) == local_28.Tail.Tail.Tail.DimensionValue &&
       (((bool)(char)(local_18 >> 0x38) == local_28.Tail.Tail.Tail.Tail.DimensionValue &&
        ((bool)cVar4 == local_10.DimensionValue)))))) &&
     ((local_28.Tail.DimensionValue == false || (param_2 != Inline)))) {
    local_10 = TVar2;
    bVar3 = DoesPlatformSupportLumenGI(*(EShaderPlatform *)param_1,false);
    if (bVar3) {
      bVar3 = FLumenHardwareRayTracingShaderBase::ShouldCompilePermutation(param_1,param_2);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

