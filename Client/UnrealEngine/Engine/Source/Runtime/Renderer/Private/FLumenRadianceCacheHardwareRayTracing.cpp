// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetRayTracingPayloadType @ 144cccd50

ERayTracingPayloadType __cdecl
FLumenRadianceCacheHardwareRayTracing::GetRayTracingPayloadType(int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ERayTracingPayloadType EVar4;
  uint uVar5;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  local_28;
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
  local_24;
  
  uVar5 = param_1 >> 0x1f & 7;
  uVar3 = param_1 + uVar5;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  ::
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
            (&local_28,(uVar3 & 7) - uVar5);
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
  ::
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
            (&local_24,(int)uVar3 >> 3);
  if (0x2ff < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EVar4 = LumenMinimal;
  if (local_24.DimensionValue == HitLighting) {
    EVar4 = RayTracingMaterial;
  }
  return EVar4;
}

// ShouldCompilePermutation @ 144ce8e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLumenRadianceCacheHardwareRayTracing::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  char cStack_3c;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  local_28;
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
  TStack_24;
  
  iVar1 = *(int *)&param_1->field_0x4;
  uVar7 = iVar1 >> 0x1f & 7;
  uVar5 = iVar1 + uVar7;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  ::
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
            (&local_28,(uVar5 & 7) - uVar7);
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
  ::
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
            (&TStack_24,(int)uVar5 >> 3);
  if (((iVar1 < 0) || (0x2ff < iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  cStack_3c = TStack_24.Tail.Tail.DimensionValue;
  if (TStack_24.DimensionValue == Default) {
    cVar6 = '\0';
    cVar8 = '\0';
  }
  else if (TStack_24.DimensionValue == FarField) {
    cStack_3c = '\0';
    cVar6 = TStack_24.Tail.Tail.Tail.DimensionValue;
    cVar8 = '\0';
  }
  else {
    cVar6 = '\0';
    cStack_3c = '\0';
    cVar8 = TStack_24.Tail.DimensionValue;
    if (TStack_24.DimensionValue != HitLighting) {
      cVar8 = '\0';
    }
  }
  if ((((((bool)cVar8 == TStack_24.Tail.DimensionValue) &&
        ((bool)cStack_3c == TStack_24.Tail.Tail.DimensionValue)) &&
       (((bool)cVar6 == TStack_24.Tail.Tail.Tail.DimensionValue &&
        ((param_2 != Inline || (TStack_24.DimensionValue != HitLighting)))))) &&
      ((TStack_24.Tail.DimensionValue == false ||
       (bVar3 = FGenericDataDrivenShaderPlatformInfo::GetSupportsShaderExecutionReordering
                          ((FStaticShaderPlatform)*(EShaderPlatform *)param_1), bVar3)))) &&
     ((bVar3 = DoesPlatformSupportLumenGI(*(EShaderPlatform *)param_1,false), bVar3 &&
      (bVar3 = FLumenHardwareRayTracingShaderBase::ShouldCompilePermutation(param_1,param_2), bVar3)
      ))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// ShouldPrecachePermutation @ 144cea420

EShaderPermutationPrecacheRequest __cdecl
FLumenRadianceCacheHardwareRayTracing::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  uint uVar5;
  uint uVar6;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  local_28;
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
  local_24;
  
  iVar1 = *(int *)&param_1->field_0x4;
  uVar6 = iVar1 >> 0x1f & 7;
  uVar5 = iVar1 + uVar6;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  ::
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
            (&local_28,(uVar5 & 7) - uVar6);
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
  ::
  TShaderPermutationDomain<FLumenRadianceCacheHardwareRayTracing::FRayTracingPass,FLumenRadianceCacheHardwareRayTracing::FUseShaderExecutionReordering,FLumenRadianceCacheHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadianceCacheHardwareRayTracing::FFarFieldOcclusionOnly,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenRadianceCacheHardwareRayTracing::FRadianceCacheBatchSize>
            (&local_24,(int)uVar5 >> 3);
  if ((iVar1 < 0) || (0x2ff < iVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  bVar3 = LumenHardwareRayTracing::UseSurfaceCacheAlphaMasking();
  return local_24.Tail.Tail.DimensionValue != bVar3;
}

