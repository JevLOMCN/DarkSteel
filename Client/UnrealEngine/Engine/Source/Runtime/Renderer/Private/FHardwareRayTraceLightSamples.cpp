// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetRayTracingPayloadType @ 144f133f0

ERayTracingPayloadType __cdecl FHardwareRayTraceLightSamples::GetRayTracingPayloadType(int param_1)

{
  ERayTracingPayloadType EVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
            (&local_18,param_1);
  EVar1 = LumenMinimal;
  if (local_18.Tail.DimensionValue != false) {
    EVar1 = RayTracingMaterial;
  }
  return EVar1;
}

// ShouldCompilePermutation @ 144f2afc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FHardwareRayTraceLightSamples::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2)

{
  bool bVar1;
  char cVar2;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  local_28;
  undefined5 local_18;
  char cStack_13;
  undefined2 uStack_12;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
            (&local_28,*(int *)&param_1->field_0x4);
  cVar2 = local_28.Tail.Tail.DimensionValue;
  if (local_28.Tail.DimensionValue != false) {
    cVar2 = '\0';
  }
  _local_18 = CONCAT26(CONCAT11(local_28.Tail.Tail.Tail.Tail.DimensionValue,
                                local_28.Tail.Tail.Tail.DimensionValue),
                       CONCAT15(cVar2,CONCAT14(local_28.Tail.DimensionValue,
                                               CONCAT13(local_28.DimensionValue.Tail.Tail.Tail,
                                                        CONCAT12(local_28.DimensionValue.Tail.Tail.
                                                                 DimensionValue,
                                                                 CONCAT11(local_28.DimensionValue.
                                                                          Tail.DimensionValue,
                                                                          local_28.DimensionValue.
                                                                          DimensionValue))))));
  if ((((bool)cVar2 == local_28.Tail.Tail.DimensionValue) &&
      (((param_2 != Inline || (local_28.Tail.DimensionValue == false)) &&
       (bVar1 = MegaLights::ShouldCompileShaders(*(EShaderPlatform *)param_1), bVar1)))) &&
     (bVar1 = FLumenHardwareRayTracingShaderBase::ShouldCompilePermutation(param_1,param_2), bVar1))
  {
    return true;
  }
  return false;
}

// ShouldPrecachePermutation @ 144f2bab0

EShaderPermutationPrecacheRequest __cdecl
FHardwareRayTraceLightSamples::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FHardwareRayTraceLightSamples::FEvaluateMaterials,FHardwareRayTraceLightSamples::FLightingChannels,FHardwareRayTraceLightSamples::FSupportContinuation,FHardwareRayTraceLightSamples::FEnableFarFieldTracing,FHardwareRayTraceLightSamples::FForceTwoSided,FHardwareRayTraceLightSamples::FHairVoxelTraces,FHardwareRayTraceLightSamples::FDistantScreenTraces,FHardwareRayTraceLightSamples::FDebugMode>
            (&local_18,*(int *)&param_1->field_0x4);
  pTVar1 = CVarMegaLightsHardwareRayTracingForceTwoSided.Ref;
  if (local_18.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) {
    return NotPrecached;
  }
  bVar3 = IsInParallelGameThread();
  lVar5 = 0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 1;
    if (!bVar3) goto LAB_144f2baf5;
  }
  lVar4 = lVar5;
LAB_144f2baf5:
  pTVar2 = CVarMegaLightsHardwareRayTracingFarField.Ref;
  if (local_18.Tail.Tail.Tail.Tail.Tail.DimensionValue == (pTVar1->ShadowedValue[lVar4] != false)) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      lVar5 = 4;
    }
    if (local_18.Tail.Tail.Tail.Tail.DimensionValue ==
        (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != 0)) {
      if (local_18.Tail.DimensionValue != false) {
        return Precached;
      }
      return local_18.Tail.Tail.Tail.DimensionValue != false;
    }
  }
  return NotPrecached;
}

