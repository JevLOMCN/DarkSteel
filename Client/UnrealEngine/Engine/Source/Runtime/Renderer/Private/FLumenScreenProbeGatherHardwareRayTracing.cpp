// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetRayTracingPayloadType @ 144e1db10

ERayTracingPayloadType __cdecl
FLumenScreenProbeGatherHardwareRayTracing::GetRayTracingPayloadType(int param_1)

{
  ERayTracingPayloadType EVar1;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
  local_28 [2];
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
            (local_28,param_1);
  EVar1 = LumenMinimal;
  if (local_28[0].Tail.Tail.DimensionValue == HitLighting) {
    EVar1 = RayTracingMaterial;
  }
  return EVar1;
}

// ShouldCompilePermutation @ 144e2fe10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLumenScreenProbeGatherHardwareRayTracing::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  EAvoidSelfIntersectionsMode EStack_44;
  bool bStack_3c;
  bool bStack_3b;
  bool bStack_39;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
  local_28;
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
            (&local_28,*(int *)&param_1->field_0x4);
  EStack_44 = local_28.Tail.DimensionValue;
  bStack_3c = local_28.Tail.Tail.Tail.DimensionValue;
  bStack_3b = local_28.Tail.Tail.Tail.Tail.DimensionValue;
  bVar5 = bStack_3b;
  bStack_39 = local_28.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar3 = bStack_39;
  if (local_28.Tail.Tail.DimensionValue == FarField) {
    EStack_44 = Disabled;
    bStack_3b = false;
    bStack_39 = false;
    cVar7 = local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  }
  else {
    cVar7 = '\0';
    if ((local_28.Tail.Tail.DimensionValue == HitLighting) &&
       (bStack_39 = false, local_28.Tail.DimensionValue == AHS)) {
      EStack_44 = Retrace;
    }
  }
  cVar4 = bStack_3c;
  if (local_28.Tail.Tail.DimensionValue != HitLighting) {
    cVar4 = '\0';
  }
  if (((((EStack_44 == local_28.Tail.DimensionValue) && ((bool)cVar4 == bStack_3c)) &&
       (bStack_3b == bVar5)) &&
      ((bStack_39 == bVar3 &&
       ((bool)cVar7 == local_28.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)))) &&
     ((param_2 != Inline || (local_28.Tail.Tail.DimensionValue != HitLighting)))) {
    if (bStack_3c != false) {
      uVar1 = *(ushort *)param_1;
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0x1a8,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bSupportsShaderExecutionReordering == 0
         ) {
        return false;
      }
    }
    bVar5 = DoesPlatformSupportLumenGI(*(EShaderPlatform *)param_1,false);
    if ((bVar5) &&
       (bVar5 = FLumenHardwareRayTracingShaderBase::ShouldCompilePermutation(param_1,param_2), bVar5
       )) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutation @ 144e30e20

EShaderPermutationPrecacheRequest __cdecl
FLumenScreenProbeGatherHardwareRayTracing::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  EAvoidSelfIntersectionsMode EVar1;
  bool bVar2;
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
  local_28 [2];
  
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
  ::
  TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenScreenProbeGatherHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenScreenProbeGatherHardwareRayTracing::FRayTracingPass,FLumenScreenProbeGatherHardwareRayTracing::FUseShaderExecutionReordering,FLumenScreenProbeGatherHardwareRayTracing::FRadianceCache,FLumenScreenProbeGatherHardwareRayTracing::FStructuredImportanceSamplingDim,FLumenScreenProbeGatherHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenScreenProbeGatherHardwareRayTracing::FFarFieldOcclusionOnly>
            (local_28,*(int *)&param_1->field_0x4);
  EVar1 = LumenHardwareRayTracing::GetAvoidSelfIntersectionsMode();
  if ((local_28[0].Tail.DimensionValue == EVar1) &&
     ((local_28[0].Tail.Tail.Tail.Tail.DimensionValue == false ||
      ((GLumenScreenProbeGatherReferenceMode == 0 && (GLumenRadianceCache != 0)))))) {
    if ((local_28[0].Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar2 = LumenHardwareRayTracing::UseSurfaceCacheAlphaMasking(), !bVar2)) {
      return NotPrecached;
    }
    if (local_28[0].Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
      return Precached;
    }
    if (local_28[0].Tail.Tail.DimensionValue == FarField) {
      bVar2 = Lumen::UseFarFieldOcclusionOnly();
      return !bVar2;
    }
  }
  return NotPrecached;
}

