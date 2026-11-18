// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FUpdateInputs @ 144c1e560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FUpdateInputs * __thiscall
LumenRadianceCache::FUpdateInputs::FUpdateInputs(FUpdateInputs *this,FUpdateInputs *param_1)

{
  TIntPoint<int>_u_0 TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  fVar2 = (param_1->RadianceCacheInputs).ClipmapWorldExtent;
  fVar3 = (param_1->RadianceCacheInputs).ClipmapDistributionBase;
  fVar4 = (param_1->RadianceCacheInputs).InvClipmapFadeSize;
  (this->RadianceCacheInputs).ReprojectionRadiusScale =
       (param_1->RadianceCacheInputs).ReprojectionRadiusScale;
  (this->RadianceCacheInputs).ClipmapWorldExtent = fVar2;
  (this->RadianceCacheInputs).ClipmapDistributionBase = fVar3;
  (this->RadianceCacheInputs).InvClipmapFadeSize = fVar4;
  uVar5 = *(undefined4 *)&(param_1->RadianceCacheInputs).field_0x14;
  TVar1 = (param_1->RadianceCacheInputs).ProbeAtlasResolutionInProbes.field0_0x0;
  (this->RadianceCacheInputs).ProbeTMinScale = (param_1->RadianceCacheInputs).ProbeTMinScale;
  *(undefined4 *)&(this->RadianceCacheInputs).field_0x14 = uVar5;
  (this->RadianceCacheInputs).ProbeAtlasResolutionInProbes.field0_0x0 = TVar1;
  uVar6 = (param_1->RadianceCacheInputs).NumRadianceProbeClipmaps;
  uVar7 = (param_1->RadianceCacheInputs).RadianceProbeResolution;
  uVar8 = (param_1->RadianceCacheInputs).FinalProbeResolution;
  (this->RadianceCacheInputs).RadianceProbeClipmapResolution =
       (param_1->RadianceCacheInputs).RadianceProbeClipmapResolution;
  (this->RadianceCacheInputs).NumRadianceProbeClipmaps = uVar6;
  (this->RadianceCacheInputs).RadianceProbeResolution = uVar7;
  (this->RadianceCacheInputs).FinalProbeResolution = uVar8;
  uVar6 = (param_1->RadianceCacheInputs).CalculateIrradiance;
  uVar7 = (param_1->RadianceCacheInputs).UseSkyVisibility;
  uVar8 = (param_1->RadianceCacheInputs).IrradianceProbeResolution;
  (this->RadianceCacheInputs).FinalRadianceAtlasMaxMip =
       (param_1->RadianceCacheInputs).FinalRadianceAtlasMaxMip;
  (this->RadianceCacheInputs).CalculateIrradiance = uVar6;
  (this->RadianceCacheInputs).UseSkyVisibility = uVar7;
  (this->RadianceCacheInputs).IrradianceProbeResolution = uVar8;
  uVar6 = (param_1->RadianceCacheInputs).NumProbesToTraceBudget;
  uVar7 = (param_1->RadianceCacheInputs).RadianceCacheStats;
  uVar5 = *(undefined4 *)&(param_1->RadianceCacheInputs).field_0x4c;
  (this->RadianceCacheInputs).OcclusionProbeResolution =
       (param_1->RadianceCacheInputs).OcclusionProbeResolution;
  (this->RadianceCacheInputs).NumProbesToTraceBudget = uVar6;
  (this->RadianceCacheInputs).RadianceCacheStats = uVar7;
  *(undefined4 *)&(this->RadianceCacheInputs).field_0x4c = uVar5;
  this->Configuration = param_1->Configuration;
  this->View = param_1->View;
  this->ScreenProbeParameters = param_1->ScreenProbeParameters;
  this->BRDFProbabilityDensityFunctionSH = param_1->BRDFProbabilityDensityFunctionSH;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->GraphicsMarkUsedRadianceCacheProbes,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &param_1->GraphicsMarkUsedRadianceCacheProbes);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->ComputeMarkUsedRadianceCacheProbes,
             (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &param_1->ComputeMarkUsedRadianceCacheProbes);
  return this;
}

// FUpdateInputs @ 144c1e5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FUpdateInputs * __thiscall
LumenRadianceCache::FUpdateInputs::FUpdateInputs(FUpdateInputs *this,FUpdateInputs *param_1)

{
  TIntPoint<int>_u_0 TVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TMulticastDelegate<void___cdecl(FRDGBuilder_&,FViewInfo_const_&,LumenRadianceCache::FRadianceCacheMarkParameters_const_&),FDefaultDelegateUserPolicy>
  *pTVar9;
  
  fVar2 = (param_1->RadianceCacheInputs).ClipmapWorldExtent;
  fVar3 = (param_1->RadianceCacheInputs).ClipmapDistributionBase;
  fVar4 = (param_1->RadianceCacheInputs).InvClipmapFadeSize;
  (this->RadianceCacheInputs).ReprojectionRadiusScale =
       (param_1->RadianceCacheInputs).ReprojectionRadiusScale;
  (this->RadianceCacheInputs).ClipmapWorldExtent = fVar2;
  (this->RadianceCacheInputs).ClipmapDistributionBase = fVar3;
  (this->RadianceCacheInputs).InvClipmapFadeSize = fVar4;
  uVar5 = *(undefined4 *)&(param_1->RadianceCacheInputs).field_0x14;
  TVar1 = (param_1->RadianceCacheInputs).ProbeAtlasResolutionInProbes.field0_0x0;
  (this->RadianceCacheInputs).ProbeTMinScale = (param_1->RadianceCacheInputs).ProbeTMinScale;
  *(undefined4 *)&(this->RadianceCacheInputs).field_0x14 = uVar5;
  (this->RadianceCacheInputs).ProbeAtlasResolutionInProbes.field0_0x0 = TVar1;
  uVar6 = (param_1->RadianceCacheInputs).NumRadianceProbeClipmaps;
  uVar7 = (param_1->RadianceCacheInputs).RadianceProbeResolution;
  uVar8 = (param_1->RadianceCacheInputs).FinalProbeResolution;
  (this->RadianceCacheInputs).RadianceProbeClipmapResolution =
       (param_1->RadianceCacheInputs).RadianceProbeClipmapResolution;
  (this->RadianceCacheInputs).NumRadianceProbeClipmaps = uVar6;
  (this->RadianceCacheInputs).RadianceProbeResolution = uVar7;
  (this->RadianceCacheInputs).FinalProbeResolution = uVar8;
  uVar6 = (param_1->RadianceCacheInputs).CalculateIrradiance;
  uVar7 = (param_1->RadianceCacheInputs).UseSkyVisibility;
  uVar8 = (param_1->RadianceCacheInputs).IrradianceProbeResolution;
  (this->RadianceCacheInputs).FinalRadianceAtlasMaxMip =
       (param_1->RadianceCacheInputs).FinalRadianceAtlasMaxMip;
  (this->RadianceCacheInputs).CalculateIrradiance = uVar6;
  (this->RadianceCacheInputs).UseSkyVisibility = uVar7;
  (this->RadianceCacheInputs).IrradianceProbeResolution = uVar8;
  uVar6 = (param_1->RadianceCacheInputs).NumProbesToTraceBudget;
  uVar7 = (param_1->RadianceCacheInputs).RadianceCacheStats;
  uVar5 = *(undefined4 *)&(param_1->RadianceCacheInputs).field_0x4c;
  (this->RadianceCacheInputs).OcclusionProbeResolution =
       (param_1->RadianceCacheInputs).OcclusionProbeResolution;
  (this->RadianceCacheInputs).NumProbesToTraceBudget = uVar6;
  (this->RadianceCacheInputs).RadianceCacheStats = uVar7;
  *(undefined4 *)&(this->RadianceCacheInputs).field_0x4c = uVar5;
  this->Configuration = param_1->Configuration;
  this->View = param_1->View;
  this->ScreenProbeParameters = param_1->ScreenProbeParameters;
  this->BRDFProbabilityDensityFunctionSH = param_1->BRDFProbabilityDensityFunctionSH;
  pTVar9 = &this->GraphicsMarkUsedRadianceCacheProbes;
  *(undefined8 *)&pTVar9->field_0x0 = 0;
  *(undefined8 *)&(this->GraphicsMarkUsedRadianceCacheProbes).field_0x8 = 0;
  *(undefined8 *)&(this->GraphicsMarkUsedRadianceCacheProbes).field_0x10 = 0;
  *(undefined8 *)&(this->GraphicsMarkUsedRadianceCacheProbes).field_0x18 = 2;
  if (&param_1->GraphicsMarkUsedRadianceCacheProbes != pTVar9) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FRDGBuilder_&,FViewInfo_const_&,LumenRadianceCache::FRadianceCacheMarkParameters_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar9,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->GraphicsMarkUsedRadianceCacheProbes);
  }
  pTVar9 = &this->ComputeMarkUsedRadianceCacheProbes;
  *(undefined8 *)&pTVar9->field_0x0 = 0;
  *(undefined8 *)&(this->ComputeMarkUsedRadianceCacheProbes).field_0x8 = 0;
  *(undefined8 *)&(this->ComputeMarkUsedRadianceCacheProbes).field_0x10 = 0;
  *(undefined8 *)&(this->ComputeMarkUsedRadianceCacheProbes).field_0x18 = 2;
  if (&param_1->ComputeMarkUsedRadianceCacheProbes != pTVar9) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FRDGBuilder_&,FViewInfo_const_&,LumenRadianceCache::FRadianceCacheMarkParameters_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar9,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->ComputeMarkUsedRadianceCacheProbes);
  }
  return this;
}

// ~FUpdateInputs @ 144df5160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall LumenRadianceCache::FUpdateInputs::~FUpdateInputs(FUpdateInputs *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ComputeMarkUsedRadianceCacheProbes).field_0x8,
             *(int *)&(this->ComputeMarkUsedRadianceCacheProbes).field_0x10);
  pvVar1 = *(void **)&(this->ComputeMarkUsedRadianceCacheProbes).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ComputeMarkUsedRadianceCacheProbes);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->GraphicsMarkUsedRadianceCacheProbes).field_0x8,
             *(int *)&(this->GraphicsMarkUsedRadianceCacheProbes).field_0x10);
  pvVar1 = *(void **)&(this->GraphicsMarkUsedRadianceCacheProbes).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GraphicsMarkUsedRadianceCacheProbes);
  return;
}

