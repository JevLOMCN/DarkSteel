// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetRayTracingPayloadType @ 144f13430

ERayTracingPayloadType __cdecl
FVolumeHardwareRayTraceLightSamples::GetRayTracingPayloadType(int param_1)

{
  return LumenMinimal;
}

// ShouldCompilePermutation @ 144f2b0e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FVolumeHardwareRayTraceLightSamples::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2)

{
  bool bVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FVolumeHardwareRayTraceLightSamples::FTranslucencyLightingVolume,FVolumeHardwareRayTraceLightSamples::FLightingChannels,FVolumeHardwareRayTraceLightSamples::FEnableFarFieldTracing,FVolumeHardwareRayTraceLightSamples::FDebugMode>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FVolumeHardwareRayTraceLightSamples::FTranslucencyLightingVolume,FVolumeHardwareRayTraceLightSamples::FLightingChannels,FVolumeHardwareRayTraceLightSamples::FEnableFarFieldTracing,FVolumeHardwareRayTraceLightSamples::FDebugMode>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FVolumeHardwareRayTraceLightSamples::FTranslucencyLightingVolume,FVolumeHardwareRayTraceLightSamples::FLightingChannels,FVolumeHardwareRayTraceLightSamples::FEnableFarFieldTracing,FVolumeHardwareRayTraceLightSamples::FDebugMode>
            (&local_18,*(int *)&param_1->field_0x4);
  bVar1 = MegaLights::ShouldCompileShaders(*(EShaderPlatform *)param_1);
  if ((bVar1) &&
     (bVar1 = FLumenHardwareRayTracingShaderBase::ShouldCompilePermutation(param_1,param_2), bVar1))
  {
    return true;
  }
  return false;
}

// ShouldPrecachePermutation @ 144f2bff0

EShaderPermutationPrecacheRequest __cdecl
FVolumeHardwareRayTraceLightSamples::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FVolumeHardwareRayTraceLightSamples::FTranslucencyLightingVolume,FVolumeHardwareRayTraceLightSamples::FLightingChannels,FVolumeHardwareRayTraceLightSamples::FEnableFarFieldTracing,FVolumeHardwareRayTraceLightSamples::FDebugMode>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FVolumeHardwareRayTraceLightSamples::FTranslucencyLightingVolume,FVolumeHardwareRayTraceLightSamples::FLightingChannels,FVolumeHardwareRayTraceLightSamples::FEnableFarFieldTracing,FVolumeHardwareRayTraceLightSamples::FDebugMode>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FVolumeHardwareRayTraceLightSamples::FTranslucencyLightingVolume,FVolumeHardwareRayTraceLightSamples::FLightingChannels,FVolumeHardwareRayTraceLightSamples::FEnableFarFieldTracing,FVolumeHardwareRayTraceLightSamples::FDebugMode>
            (&local_18,*(int *)&param_1->field_0x4);
  pTVar1 = CVarMegaLightsHardwareRayTracingFarField.Ref;
  if (local_18.Tail.Tail.Tail.Tail.DimensionValue != false) {
    return NotPrecached;
  }
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar2 = CVarMegaLightsVolumeWorldSpaceTraces.Ref;
  if ((local_18.Tail.Tail.Tail.DimensionValue != false) &&
     (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 0)) {
    return NotPrecached;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  return *(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 0;
}

