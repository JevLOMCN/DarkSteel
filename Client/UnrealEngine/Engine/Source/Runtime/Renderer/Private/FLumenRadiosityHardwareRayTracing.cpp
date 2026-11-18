// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetRayTracingPayloadType @ 144cccdf0

ERayTracingPayloadType __cdecl
FLumenRadiosityHardwareRayTracing::GetRayTracingPayloadType(int param_1)

{
  return LumenMinimal;
}

// ShouldPrecachePermutation @ 144cea4b0

EShaderPermutationPrecacheRequest __cdecl
FLumenRadiosityHardwareRayTracing::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPermutationPrecacheRequest EVar4;
  EAvoidSelfIntersectionsMode EVar5;
  uint uVar6;
  uint uVar7;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  local_res8;
  TShaderPermutationDomain<FLumenRadiosityHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenRadiosityHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadiosityHardwareRayTracing::FProbeOcclusion>
  local_resc;
  
  iVar1 = *(int *)&param_1->field_0x4;
  uVar7 = iVar1 >> 0x1f & 7;
  uVar6 = iVar1 + uVar7;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  ::
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
            (&local_res8,(uVar6 & 7) - uVar7);
  TShaderPermutationDomain<FLumenRadiosityHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenRadiosityHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadiosityHardwareRayTracing::FProbeOcclusion>
  ::
  TShaderPermutationDomain<FLumenRadiosityHardwareRayTracing::FAvoidSelfIntersectionsMode,FLumenRadiosityHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenRadiosityHardwareRayTracing::FProbeOcclusion>
            (&local_resc,(int)uVar6 >> 3);
  if ((iVar1 < 0) || (0x5f < iVar1)) {
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
  EVar5 = LumenHardwareRayTracing::GetAvoidSelfIntersectionsMode();
  if (local_resc.DimensionValue == EVar5) {
    bVar3 = LumenHardwareRayTracing::UseSurfaceCacheAlphaMasking();
    return local_resc.Tail.DimensionValue != bVar3;
  }
  return NotPrecached;
}

