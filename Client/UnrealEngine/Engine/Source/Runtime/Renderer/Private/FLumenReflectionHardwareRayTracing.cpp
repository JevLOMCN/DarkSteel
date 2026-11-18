// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// GetRayTracingPayloadType @ 144ccce10

ERayTracingPayloadType __cdecl
FLumenReflectionHardwareRayTracing::GetRayTracingPayloadType(int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ERayTracingPayloadType EVar4;
  uint uVar5;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  local_28;
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  local_24;
  
  uVar5 = param_1 >> 0x1f & 7;
  uVar3 = param_1 + uVar5;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  ::
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
            (&local_28,(uVar3 & 7) - uVar5);
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  ::
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
            (&local_24,(int)uVar3 >> 3);
  if (0xbfff < (uint)param_1) {
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

// RemapPermutation @ 144cdba00

/* WARNING: Type propagation algorithm not settling */

TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
* __cdecl FLumenReflectionHardwareRayTracing::RemapPermutation
                    (TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
                     *__return_storage_ptr__,
                    TShaderPermutationDomain<TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>,FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
                    *param_1)

{
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  *pTVar1;
  ERayTracingPass EVar2;
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  TVar3;
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  *pTVar4;
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  *pTVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  EVar2 = (param_1->Tail).DimensionValue;
  if (EVar2 == Default) {
    ((TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 1))->DimensionValue = false;
    ((TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly> *)
    ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 5))->DimensionValue = false;
  }
  else if (EVar2 == FarField) {
    pTVar5 = &(param_1->Tail).Tail.Tail.Tail;
    (pTVar5->Tail).Tail.Tail.DimensionValue = false;
    (pTVar5->Tail).Tail.Tail.Tail.DimensionValue = false;
    (pTVar5->Tail).Tail.Tail.Tail.Tail.DimensionValue = false;
    (pTVar5->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
    (param_1->Tail).Tail.Tail.Tail.DimensionValue = false;
    ((TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 4))->DimensionValue = false;
  }
  else if (EVar2 == HitLighting) {
    (param_1->Tail).Tail.Tail.DimensionValue = false;
    pTVar1 = (TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
              *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 3);
    pTVar1->DimensionValue = false;
    (pTVar1->Tail).DimensionValue = false;
    ((TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly> *)
    ((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 5))->DimensionValue = false;
    goto LAB_144cdba11;
  }
  (param_1->Tail).Tail.DimensionValue = false;
LAB_144cdba11:
  if ((param_1->Tail).Tail.Tail.DimensionValue != false) {
    ((TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 3))->DimensionValue = false;
  }
  if ((param_1->Tail).Tail.Tail.Tail.DimensionValue != false) {
    ((TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
      *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 4))->DimensionValue = false;
    TVar3 = *(TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
              *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 3);
    EVar2 = (param_1->Tail).DimensionValue;
    bVar6 = (param_1->Tail).Tail.DimensionValue;
    bVar7 = (param_1->Tail).Tail.Tail.DimensionValue;
    bVar8 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
    bVar9 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
    bVar10 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
    bVar11 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
    bVar12 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
    bVar13 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
    __return_storage_ptr__->DimensionValue = param_1->DimensionValue;
    (__return_storage_ptr__->Tail).DimensionValue = EVar2;
    (__return_storage_ptr__->Tail).Tail.DimensionValue = bVar6;
    (__return_storage_ptr__->Tail).Tail.Tail.DimensionValue = bVar7;
    (__return_storage_ptr__->Tail).Tail.Tail.Tail.DimensionValue = bVar8;
    (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.DimensionValue = bVar9;
    (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar10;
    (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar11;
    (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar12;
    (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar13;
    *(TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
      *)((longlong)&(__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 3) = TVar3;
    return __return_storage_ptr__;
  }
  pTVar4 = &(param_1->Tail).Tail;
  (pTVar4->Tail).Tail.Tail.DimensionValue = false;
  (pTVar4->Tail).Tail.Tail.Tail.DimensionValue = false;
  TVar3 = *(TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
            *)((longlong)&(param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 3);
  EVar2 = (param_1->Tail).DimensionValue;
  bVar6 = (param_1->Tail).Tail.DimensionValue;
  bVar7 = (param_1->Tail).Tail.Tail.DimensionValue;
  bVar8 = (param_1->Tail).Tail.Tail.Tail.DimensionValue;
  bVar9 = (param_1->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  bVar10 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar11 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar12 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar13 = (param_1->Tail).Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  __return_storage_ptr__->DimensionValue = param_1->DimensionValue;
  (__return_storage_ptr__->Tail).DimensionValue = EVar2;
  (__return_storage_ptr__->Tail).Tail.DimensionValue = bVar6;
  (__return_storage_ptr__->Tail).Tail.Tail.DimensionValue = bVar7;
  (__return_storage_ptr__->Tail).Tail.Tail.Tail.DimensionValue = bVar8;
  (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.DimensionValue = bVar9;
  (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar10;
  (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar11;
  (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar12;
  (__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar13;
  *(TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
    *)((longlong)&(__return_storage_ptr__->Tail).Tail.Tail.Tail.Tail.Tail.Tail + 3) = TVar3;
  return __return_storage_ptr__;
}

// ShouldCompilePermutation @ 144ce9000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FLumenReflectionHardwareRayTracing::ShouldCompilePermutation
          (FGlobalShaderPermutationParameters *param_1,ERayTracingShaderDispatchType param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  unkuint9 Var4;
  unkuint10 Var5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  ERayTracingPass EVar11;
  char cVar12;
  uint uVar13;
  char cVar14;
  undefined1 local_48 [16];
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  local_38;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  local_28;
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  TStack_24;
  
  iVar1 = *(int *)&param_1->field_0x4;
  uVar13 = iVar1 >> 0x1f & 7;
  uVar10 = iVar1 + uVar13;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  ::
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
            (&local_28,(uVar10 & 7) - uVar13);
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  ::
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
            (&TStack_24,(int)uVar10 >> 3);
  if (((iVar1 < 0) || (0xbfff < iVar1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return (bool)uVar9;
  }
  Var4 = CONCAT54(TStack_24._0_5_,
                  (uint)CONCAT12(local_28.Tail.Tail.DimensionValue,
                                 CONCAT11(local_28.Tail.DimensionValue,local_28.DimensionValue)));
  Var5 = CONCAT19(TStack_24.Tail.Tail.DimensionValue,Var4);
  auVar3[10] = TStack_24.Tail.Tail.Tail.DimensionValue;
  auVar3._0_10_ = Var5;
  auVar3[0xb] = TStack_24.Tail.Tail.Tail.Tail.DimensionValue;
  auVar3[0xc] = TStack_24.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  auVar3[0xd] = TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  auVar3[0xe] = TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  auVar3[0xf] = TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  local_38 = TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail;
  EVar11 = TStack_24.DimensionValue;
  local_48[0xf] = TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
  bVar7 = (bool)local_48[0xf];
  local_48[8] = TStack_24.Tail.DimensionValue;
  bVar8 = (bool)local_48[8];
  if (EVar11 == Default) {
    local_48._0_14_ = auVar3._0_14_;
    local_48[0xe] = (char)TStack_24.DimensionValue;
    local_38._0_2_ = TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail._0_2_;
    local_38.Tail.Tail.DimensionValue = (bool)(char)TStack_24.DimensionValue;
    local_38.Tail.Tail.Tail = (TShaderPermutationDomain<>)0x0;
LAB_144ce90a9:
    cVar14 = local_38.DimensionValue;
  }
  else {
    if (EVar11 != FarField) {
      local_48 = auVar3;
      if (EVar11 == HitLighting) {
        cVar14 = '\0';
        local_48._10_6_ = auVar3._10_6_;
        local_48[9] = 0;
        local_48._0_9_ = Var4;
        local_38.Tail.DimensionValue = false;
        local_38.Tail.Tail.DimensionValue = false;
        cVar12 = bVar8;
        goto LAB_144ce90c3;
      }
      goto LAB_144ce90a9;
    }
    cVar14 = '\0';
    local_48._0_13_ = auVar3._0_13_;
    local_48._13_2_ = 0;
    local_38 = (TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
                )((uint)TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail & 0xffff0000);
    local_48[10] = 0;
    local_48._0_10_ = Var5;
    local_48[0xf] = 0;
  }
  auVar3 = local_48;
  local_48[8] = 0;
  auVar6 = local_48;
  local_48[9] = auVar3[9];
  if (local_48[9] != '\0') {
    cVar14 = '\0';
  }
  cVar12 = '\0';
  local_48 = auVar6;
LAB_144ce90c3:
  if (local_48[10] == '\0') {
    local_48._11_2_ = 0;
  }
  else {
    local_38.Tail._0_2_ = local_38.Tail._0_2_ & 0xff00;
  }
  if ((((((bool)local_48[0] == local_28.DimensionValue) &&
        ((bool)local_48[1] == local_28.Tail.DimensionValue)) &&
       (((bool)local_48[2] == local_28.Tail.Tail.DimensionValue &&
        ((local_48._4_4_ == EVar11 && ((bool)cVar12 == bVar8)))))) &&
      ((bool)local_48[9] == TStack_24.Tail.Tail.DimensionValue)) &&
     (((((((bool)local_48[10] == TStack_24.Tail.Tail.Tail.DimensionValue &&
          ((bool)local_48[0xb] == TStack_24.Tail.Tail.Tail.Tail.DimensionValue)) &&
         ((bool)local_48[0xc] == TStack_24.Tail.Tail.Tail.Tail.Tail.DimensionValue)) &&
        (((bool)local_48[0xd] == TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
         ((bool)local_48[0xe] == TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)))) &&
       (((bool)local_48[0xf] == bVar7 &&
        (((bool)cVar14 == TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
         ((bool)local_38.Tail.DimensionValue ==
          TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue)))))) &&
      ((((bool)local_38.Tail.Tail.DimensionValue ==
         TStack_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue &&
        ((param_2 != Inline || (EVar11 != HitLighting)))) &&
       (((bVar8 == false ||
         (bVar8 = FGenericDataDrivenShaderPlatformInfo::GetSupportsShaderExecutionReordering
                            ((FStaticShaderPlatform)*(EShaderPlatform *)param_1), bVar8)) &&
        ((bVar8 = DoesPlatformSupportLumenGI(*(EShaderPlatform *)param_1,false), bVar8 &&
         (bVar8 = FLumenHardwareRayTracingShaderBase::ShouldCompilePermutation(param_1,param_2),
         bVar8)))))))))) {
    return true;
  }
  return false;
}

// ShouldPrecachePermutation @ 144cea550

EShaderPermutationPrecacheRequest __cdecl
FLumenReflectionHardwareRayTracing::ShouldPrecachePermutation
          (FGlobalShaderPermutationParameters *param_1)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EShaderPermutationPrecacheRequest EVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  local_28;
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  local_24;
  
  iVar1 = *(int *)&param_1->field_0x4;
  uVar8 = iVar1 >> 0x1f & 7;
  uVar6 = iVar1 + uVar8;
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
  ::
  TShaderPermutationDomain<FLumenHardwareRayTracingShaderBase::FUseThreadGroupSize64,FLumenHardwareRayTracingShaderBase::FUseTracingFeedback,FLumenHardwareRayTracingShaderBase::FNaniteRayTracing>
            (&local_28,(uVar6 & 7) - uVar8);
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
  ::
  TShaderPermutationDomain<FLumenReflectionHardwareRayTracing::FRayTracingPass,FLumenReflectionHardwareRayTracing::FUseShaderExecutionReordering,FLumenReflectionHardwareRayTracing::FWriteDataForHitLightingPass,FLumenReflectionHardwareRayTracing::FRadianceCache,FLumenReflectionHardwareRayTracing::FRadianceCacheSkyVisibility,FLumenReflectionHardwareRayTracing::FRadianceCacheStochasticInterpolation,FLumenReflectionHardwareRayTracing::FHairStrandsOcclusionDim,FLumenReflectionHardwareRayTracing::FRecursiveReflectionTraces,FLumenReflectionHardwareRayTracing::FRecursiveRefractionTraces,FLumenReflectionHardwareRayTracing::FSurfaceCacheAlphaMasking,FLumenReflectionHardwareRayTracing::FDistantScreenTraces,FLumenReflectionHardwareRayTracing::FFarFieldOcclusionOnly>
            (&local_24,(int)uVar6 >> 3);
  if (((iVar1 < 0) || (0xbfff < iVar1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar4)) {
    pcVar2 = (code *)swi(3);
    EVar5 = (*pcVar2)();
    return EVar5;
  }
  bVar4 = LumenHardwareRayTracing::UseSurfaceCacheAlphaMasking();
  if (local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != bVar4) {
    return NotPrecached;
  }
  if (local_24.Tail.Tail.DimensionValue != false) {
    return NotPrecached;
  }
  if (local_24.DimensionValue == Default) {
    if ((local_24.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = LumenReflections::UseRadianceCache(), !bVar4)) {
      return NotPrecached;
    }
    bVar4 = LumenReflections::UseRadianceCacheSkyVisibility();
    if (local_24.Tail.Tail.Tail.Tail.DimensionValue != bVar4) {
      return NotPrecached;
    }
    bVar4 = LumenReflections::UseRadianceCacheStochasticInterpolation();
    pTVar3 = CVarLumenReflectionsHardwareRayTracingHitLighting.Ref;
    if (local_24.Tail.Tail.Tail.Tail.Tail.DimensionValue != bVar4) {
      return NotPrecached;
    }
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if ((local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (*(int *)((longlong)pTVar3->ShadowedValue + lVar7) == 0)) {
      return NotPrecached;
    }
    if ((local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PermutationVector.Get<FRecursiveReflectionTraces>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                           ,0x120,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if (local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
      return Precached;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PermutationVector.Get<FFarFieldOcclusionOnly>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                       ,0x121,L"");
    if (!bVar4) {
      return Precached;
    }
  }
  else {
    if (local_24.DimensionValue != FarField) {
      return Precached;
    }
    bVar4 = Lumen::UseFarFieldOcclusionOnly();
    if (local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != bVar4) {
      return NotPrecached;
    }
    if ((local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PermutationVector.Get<FRecursiveReflectionTraces>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                           ,299,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if ((local_24.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PermutationVector.Get<FRadianceCache>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                           ,300,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if ((local_24.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PermutationVector.Get<FHairStrandsOcclusionDim>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                           ,0x12d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if ((local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PermutationVector.Get<FRecursiveRefractionTraces>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                           ,0x12e,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if ((local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PermutationVector.Get<FSurfaceCacheAlphaMasking>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if ((local_24.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PermutationVector.Get<FDistantScreenTraces>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                           ,0x130,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if ((local_24.Tail.Tail.Tail.Tail.DimensionValue != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PermutationVector.Get<FRadianceCacheSkyVisibility>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                           ,0x131,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    if (local_24.Tail.Tail.Tail.Tail.Tail.DimensionValue == false) {
      return Precached;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PermutationVector.Get<FRadianceCacheStochasticInterpolation>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenReflectionHardwareRayTracing.cpp"
                       ,0x132,L"");
    if (!bVar4) {
      return Precached;
    }
  }
  pcVar2 = (code *)swi(3);
  EVar5 = (*pcVar2)();
  return EVar5;
}

