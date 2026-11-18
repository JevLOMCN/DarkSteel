// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetRayTracingPayloadType @ 144d802e0

ERayTracingPayloadType __cdecl
FLumenDirectLightingHardwareRayTracing::GetRayTracingPayloadType(int param_1)

{
  return LumenMinimal;
}

// ShouldCompilePermutation @ 144d9b2b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLumenDirectLightingHardwareRayTracing::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2)

{
  bool bVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
            (&local_18,*(int *)&param_1->field_0x4);
  bVar1 = DoesPlatformSupportLumenGI(*(EShaderPlatform *)param_1,false);
  if ((bVar1) &&
     (bVar1 = FLumenHardwareRayTracingShaderBase::ShouldCompilePermutation(param_1,param_2), bVar1))
  {
    return true;
  }
  return false;
}

// ShouldPrecachePermutation @ 144d9bff0

EShaderPermutationPrecacheRequest __cdecl
FLumenDirectLightingHardwareRayTracing::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
  local_18;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenDirectLightingHardwareRayTracing::FForceTwoSided,FLumenDirectLightingHardwareRayTracing::FEnableFarFieldTracing,FLumenDirectLightingHardwareRayTracing::FEnableHeightfieldProjectionBias,FLumenDirectLightingHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenDirectLightingHardwareRayTracing::FStochastic>
            (&local_18,*(int *)&param_1->field_0x4);
  pTVar1 = CVarLumenSceneDirectLightingHardwareRayTracingForceTwoSided.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar2 = CVarLumenSceneDirectLightingHardwareRayTracingFarField.Ref;
  if (local_18.Tail.DimensionValue != (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0)) {
    return NotPrecached;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar1 = CVarLumenSceneDirectLightingHardwareRayTracingHeightfieldProjectionBias.Ref;
  if ((local_18.Tail.Tail.DimensionValue != false) &&
     (*(int *)((longlong)pTVar2->ShadowedValue + lVar4) == 0)) {
    return NotPrecached;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  if (local_18.Tail.Tail.Tail.DimensionValue !=
      (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) != 0)) {
    return NotPrecached;
  }
  bVar3 = LumenHardwareRayTracing::UseSurfaceCacheAlphaMasking();
  return local_18.Tail.Tail.Tail.Tail.DimensionValue != bVar3;
}

