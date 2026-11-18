// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 234

// AllowNegativeEmissiveColor @ 147ef4eb0

bool __thiscall FMaterial::AllowNegativeEmissiveColor(FMaterial *this)

{
  return false;
}

// AllowTranslucentLocalLightShadow @ 147ef4ec0

bool __thiscall FMaterial::AllowTranslucentLocalLightShadow(FMaterial *this)

{
  return false;
}

// CastsRayTracedShadows @ 147ef61c0

bool __thiscall FMaterial::CastsRayTracedShadows(FMaterial *this)

{
  return true;
}

// CompileCustomAttribute @ 147ef67e0

int __thiscall
FMaterial::CompileCustomAttribute(FMaterial *this,FGuid *param_1,FMaterialCompiler *param_2)

{
  return -1;
}

// ComputeFogPerPixel @ 147ef6bd0

bool __thiscall FMaterial::ComputeFogPerPixel(FMaterial *this)

{
  return false;
}

// FeedbackMaterialLayersInstancedGraphFromCompilation @ 147ef7250

void __thiscall
FMaterial::FeedbackMaterialLayersInstancedGraphFromCompilation
          (FMaterial *this,FMaterialLayersFunctions *param_1)

{
  return;
}

// GetAllowDevelopmentShaderCompile @ 147ef8a40

bool __thiscall FMaterial::GetAllowDevelopmentShaderCompile(FMaterial *this)

{
  return true;
}

// GetAssetName @ 147ef8a50

FString * __thiscall FMaterial::GetAssetName(FMaterial *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x390))();
  return __return_storage_ptr__;
}

// GetBaseMaterialPathName @ 147efa1b0

FString * __thiscall
FMaterial::GetBaseMaterialPathName(FMaterial *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetBlendableLocation @ 147efa600

int __thiscall FMaterial::GetBlendableLocation(FMaterial *this)

{
  return 0;
}

// GetBlendableOutputAlpha @ 147efa670

bool __thiscall FMaterial::GetBlendableOutputAlpha(FMaterial *this)

{
  return false;
}

// GetBlendablePriority @ 147efa680

int __thiscall FMaterial::GetBlendablePriority(FMaterial *this)

{
  return 0;
}

// GetDebugName @ 147efab20

FString * __thiscall FMaterial::GetDebugName(FMaterial *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x558))();
  return __return_storage_ptr__;
}

// GetDisablePreExposureScale @ 147efacc0

bool __thiscall FMaterial::GetDisablePreExposureScale(FMaterial *this)

{
  return false;
}

// GetDisplacementFadeRange @ 147efacd0

FDisplacementFadeRange __thiscall FMaterial::GetDisplacementFadeRange(FMaterial *this)

{
  FDisplacementFadeRange in_RDX;
  
  *(undefined4 *)in_RDX = 0x40800000;
  *(undefined4 *)((longlong)in_RDX + 4) = 0x3f800000;
  return in_RDX;
}

// GetDisplacementScaling @ 147efad10

FDisplacementScaling __thiscall FMaterial::GetDisplacementScaling(FMaterial *this)

{
  FDisplacementScaling in_RDX;
  
  *(undefined4 *)in_RDX = 0x40800000;
  *(undefined4 *)((longlong)in_RDX + 4) = 0x3f000000;
  return in_RDX;
}

// GetForceCompatibleWithLightFunctionAtlas @ 147efb100

bool __thiscall FMaterial::GetForceCompatibleWithLightFunctionAtlas(FMaterial *this)

{
  return false;
}

// GetForwardBlendsSkyLightCubemaps @ 147efb110

bool __thiscall FMaterial::GetForwardBlendsSkyLightCubemaps(FMaterial *this)

{
  return false;
}

// GetFullPath @ 147efb160

FString * __thiscall FMaterial::GetFullPath(FMaterial *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetMaterialDecalResponse @ 147efb3e0

uint __thiscall FMaterial::GetMaterialDecalResponse(FMaterial *this)

{
  return 0;
}

// GetMaterialFloatPrecisionMode @ 147efb3f0

EMaterialFloatPrecisionMode __thiscall FMaterial::GetMaterialFloatPrecisionMode(FMaterial *this)

{
  return MFPM_Default;
}

// GetMaterialInterface @ 147efb480

UMaterialInterface * __thiscall FMaterial::GetMaterialInterface(FMaterial *this)

{
  return (UMaterialInterface *)0x0;
}

// GetMaterialLayers @ 147efb490

FMaterialLayersFunctions * __thiscall FMaterial::GetMaterialLayers(FMaterial *this)

{
  return (FMaterialLayersFunctions *)0x0;
}

// GetNeuralProfileId @ 147efba40

int __thiscall FMaterial::GetNeuralProfileId(FMaterial *this)

{
  return -1;
}

// GetNumCustomizedUVs @ 147efc100

int __thiscall FMaterial::GetNumCustomizedUVs(FMaterial *this)

{
  return 0;
}

// GetNumMaterialCacheTags @ 147efc110

int __thiscall FMaterial::GetNumMaterialCacheTags(FMaterial *this)

{
  return 0;
}

// GetPixelDepthOffsetMode @ 147efd600

EPixelDepthOffsetMode __thiscall FMaterial::GetPixelDepthOffsetMode(FMaterial *this)

{
  return PDOM_Legacy;
}

// GetPreshaderGap @ 147efd610

ushort __thiscall FMaterial::GetPreshaderGap(FMaterial *this)

{
  return 0;
}

// GetRefractionCoverageMode @ 147efdb90

ERefractionCoverageMode __thiscall FMaterial::GetRefractionCoverageMode(FMaterial *this)

{
  return RCM_CoverageIgnored;
}

// GetRefractionDepthBiasValue @ 147efdba0

float __thiscall FMaterial::GetRefractionDepthBiasValue(FMaterial *this)

{
  return 0.0;
}

// GetShadingRate @ 147efddf0

EMaterialShadingRate __thiscall FMaterial::GetShadingRate(FMaterial *this)

{
  return MSR_1x1;
}

// GetStencilCompare @ 147efdf50

uint __thiscall FMaterial::GetStencilCompare(FMaterial *this)

{
  return 0;
}

// GetStencilRefValue @ 147efdf60

uint __thiscall FMaterial::GetStencilRefValue(FMaterial *this)

{
  return 0;
}

// GetTranslucencyDirectionalLightingIntensity @ 147efe0e0

float __thiscall FMaterial::GetTranslucencyDirectionalLightingIntensity(FMaterial *this)

{
  return __real_3f800000;
}

// GetTranslucencyLightingMode @ 147efe0f0

ETranslucencyLightingMode __thiscall FMaterial::GetTranslucencyLightingMode(FMaterial *this)

{
  return TLM_VolumetricNonDirectional;
}

// GetTranslucentBackscatteringExponent @ 147efe100

float __thiscall FMaterial::GetTranslucentBackscatteringExponent(FMaterial *this)

{
  return __real_3f800000;
}

// GetTranslucentDirectionalLightShadowQuality @ 147efe110

float __thiscall FMaterial::GetTranslucentDirectionalLightShadowQuality(FMaterial *this)

{
  return 0.0;
}

// GetTranslucentLocalLightShadowQuality @ 147efe120

float __thiscall FMaterial::GetTranslucentLocalLightShadowQuality(FMaterial *this)

{
  return 0.0;
}

// GetTranslucentMultipleScatteringExtinction @ 147efe130

FLinearColor * __thiscall
FMaterial::GetTranslucentMultipleScatteringExtinction
          (FMaterial *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetTranslucentSelfShadowDensityScale @ 147efe150

float __thiscall FMaterial::GetTranslucentSelfShadowDensityScale(FMaterial *this)

{
  return __real_3f800000;
}

// GetTranslucentSelfShadowSecondDensityScale @ 147efe160

float __thiscall FMaterial::GetTranslucentSelfShadowSecondDensityScale(FMaterial *this)

{
  return __real_3f800000;
}

// GetTranslucentSelfShadowSecondOpacity @ 147efe170

float __thiscall FMaterial::GetTranslucentSelfShadowSecondOpacity(FMaterial *this)

{
  return __real_3f800000;
}

// GetTranslucentShadowDensityScale @ 147efe180

float __thiscall FMaterial::GetTranslucentShadowDensityScale(FMaterial *this)

{
  return __real_3f800000;
}

// GetTranslucentShadowStartOffset @ 147efe190

float __thiscall FMaterial::GetTranslucentShadowStartOffset(FMaterial *this)

{
  return 0.0;
}

// HasAmbientOcclusionConnected @ 147eff5a0

bool __thiscall FMaterial::HasAmbientOcclusionConnected(FMaterial *this)

{
  return false;
}

// HasAnisotropyConnected @ 147eff5f0

bool __thiscall FMaterial::HasAnisotropyConnected(FMaterial *this)

{
  return false;
}

// HasBaseColorConnected @ 147eff640

bool __thiscall FMaterial::HasBaseColorConnected(FMaterial *this)

{
  return false;
}

// HasDisplacementConnected @ 147eff790

bool __thiscall FMaterial::HasDisplacementConnected(FMaterial *this)

{
  return false;
}

// HasEmissiveColorConnected @ 147eff7e0

bool __thiscall FMaterial::HasEmissiveColorConnected(FMaterial *this)

{
  return false;
}

// HasFirstPersonOutput @ 147eff820

bool __thiscall FMaterial::HasFirstPersonOutput(FMaterial *this)

{
  return false;
}

// HasMaterialCacheOutput @ 147eff830

bool __thiscall FMaterial::HasMaterialCacheOutput(FMaterial *this)

{
  return false;
}

// HasMaterialPropertyConnected @ 147eff840

bool __thiscall FMaterial::HasMaterialPropertyConnected(FMaterial *this,EMaterialProperty param_1)

{
  return false;
}

// HasMetallicConnected @ 147eff890

bool __thiscall FMaterial::HasMetallicConnected(FMaterial *this)

{
  return false;
}

// HasNormalConnected @ 147eff8e0

bool __thiscall FMaterial::HasNormalConnected(FMaterial *this)

{
  return false;
}

// HasPerInstanceCustomData @ 147eff930

bool __thiscall FMaterial::HasPerInstanceCustomData(FMaterial *this)

{
  return false;
}

// HasPerInstanceRandom @ 147eff940

bool __thiscall FMaterial::HasPerInstanceRandom(FMaterial *this)

{
  return false;
}

// HasPixelAnimation @ 147eff950

bool __thiscall FMaterial::HasPixelAnimation(FMaterial *this)

{
  return false;
}

// HasPixelDepthOffsetConnected @ 147eff980

bool __thiscall FMaterial::HasPixelDepthOffsetConnected(FMaterial *this)

{
  return false;
}

// HasRenderTracePhysicalMaterialOutputs @ 147eff9d0

bool __thiscall FMaterial::HasRenderTracePhysicalMaterialOutputs(FMaterial *this)

{
  return false;
}

// HasRoughnessConnected @ 147eff9e0

bool __thiscall FMaterial::HasRoughnessConnected(FMaterial *this)

{
  return false;
}

// HasRuntimeVirtualTextureOutput @ 147effa30

bool __thiscall FMaterial::HasRuntimeVirtualTextureOutput(FMaterial *this)

{
  return false;
}

// HasSpecularConnected @ 147effaa0

bool __thiscall FMaterial::HasSpecularConnected(FMaterial *this)

{
  return false;
}

// HasSubstrateRoughnessTracking @ 147effb30

bool __thiscall FMaterial::HasSubstrateRoughnessTracking(FMaterial *this)

{
  return true;
}

// HasVertexInterpolator @ 147effba0

bool __thiscall FMaterial::HasVertexInterpolator(FMaterial *this)

{
  return false;
}

// HasVertexPositionOffsetConnected @ 147effbf0

bool __thiscall FMaterial::HasVertexPositionOffsetConnected(FMaterial *this)

{
  return false;
}

// IsDefaultMaterial @ 147f02960

bool __thiscall FMaterial::IsDefaultMaterial(FMaterial *this)

{
  return false;
}

// IsDisplacementFadeEnabled @ 147f029f0

bool __thiscall FMaterial::IsDisplacementFadeEnabled(FMaterial *this)

{
  return false;
}

// IsDistorted @ 147f02a20

bool __thiscall FMaterial::IsDistorted(FMaterial *this)

{
  return false;
}

// IsDitherMasked @ 147f02a30

bool __thiscall FMaterial::IsDitherMasked(FMaterial *this)

{
  return false;
}

// IsDualBlendingEnabled @ 147f02a60

bool __thiscall FMaterial::IsDualBlendingEnabled(FMaterial *this)

{
  return false;
}

// IsFullyRough @ 147f02a80

bool __thiscall FMaterial::IsFullyRough(FMaterial *this)

{
  return false;
}

// IsMobileSeparateTranslucencyEnabled @ 147f02af0

bool __thiscall FMaterial::IsMobileSeparateTranslucencyEnabled(FMaterial *this)

{
  return false;
}

// IsNonmetal @ 147f02b50

bool __thiscall FMaterial::IsNonmetal(FMaterial *this)

{
  return false;
}

// IsPostProcessMaterial @ 147f02b60

bool __thiscall FMaterial::IsPostProcessMaterial(FMaterial *this)

{
  return false;
}

// IsSky @ 147f03a60

bool __thiscall FMaterial::IsSky(FMaterial *this)

{
  return false;
}

// IsStencilTestEnabled @ 147f03a70

bool __thiscall FMaterial::IsStencilTestEnabled(FMaterial *this)

{
  return false;
}

// IsSubstrateMaterial @ 147f03aa0

bool __thiscall FMaterial::IsSubstrateMaterial(FMaterial *this)

{
  return false;
}

// IsTangentSpaceNormal @ 147f03ab0

bool __thiscall FMaterial::IsTangentSpaceNormal(FMaterial *this)

{
  return false;
}

// IsTessellationEnabled @ 147f03ac0

bool __thiscall FMaterial::IsTessellationEnabled(FMaterial *this)

{
  return false;
}

// IsTranslucencyAfterDOFEnabled @ 147f03b10

bool __thiscall FMaterial::IsTranslucencyAfterDOFEnabled(FMaterial *this)

{
  return false;
}

// IsTranslucencyAfterMotionBlurEnabled @ 147f03b20

bool __thiscall FMaterial::IsTranslucencyAfterMotionBlurEnabled(FMaterial *this)

{
  return false;
}

// IsTranslucencyVelocityFromDepth @ 147f03b30

bool __thiscall FMaterial::IsTranslucencyVelocityFromDepth(FMaterial *this)

{
  return false;
}

// IsTranslucencyWritingCustomDepth @ 147f03b60

bool __thiscall FMaterial::IsTranslucencyWritingCustomDepth(FMaterial *this)

{
  return false;
}

// IsTranslucencyWritingFrontLayerTransparency @ 147f03bb0

bool __thiscall FMaterial::IsTranslucencyWritingFrontLayerTransparency(FMaterial *this)

{
  return false;
}

// IsTranslucencyWritingVelocity @ 147f03c10

bool __thiscall FMaterial::IsTranslucencyWritingVelocity(FMaterial *this)

{
  return false;
}

// IsUsedWithAPEXCloth @ 147f03cb0

bool __thiscall FMaterial::IsUsedWithAPEXCloth(FMaterial *this)

{
  return false;
}

// IsUsedWithBeamTrails @ 147f03cc0

bool __thiscall FMaterial::IsUsedWithBeamTrails(FMaterial *this)

{
  return false;
}

// IsUsedWithEditorCompositing @ 147f03cd0

bool __thiscall FMaterial::IsUsedWithEditorCompositing(FMaterial *this)

{
  return false;
}

// IsUsedWithGeometryCache @ 147f03ce0

bool __thiscall FMaterial::IsUsedWithGeometryCache(FMaterial *this)

{
  return false;
}

// IsUsedWithGeometryCollections @ 147f03cf0

bool __thiscall FMaterial::IsUsedWithGeometryCollections(FMaterial *this)

{
  return false;
}

// IsUsedWithHairStrands @ 147f03d00

bool __thiscall FMaterial::IsUsedWithHairStrands(FMaterial *this)

{
  return false;
}

// IsUsedWithHeterogeneousVolumes @ 147f03d10

bool __thiscall FMaterial::IsUsedWithHeterogeneousVolumes(FMaterial *this)

{
  return false;
}

// IsUsedWithInstancedStaticMeshes @ 147f03d20

bool __thiscall FMaterial::IsUsedWithInstancedStaticMeshes(FMaterial *this)

{
  return false;
}

// IsUsedWithLandscape @ 147f03d30

bool __thiscall FMaterial::IsUsedWithLandscape(FMaterial *this)

{
  return false;
}

// IsUsedWithLidarPointCloud @ 147f03d40

bool __thiscall FMaterial::IsUsedWithLidarPointCloud(FMaterial *this)

{
  return false;
}

// IsUsedWithMeshParticles @ 147f03d50

bool __thiscall FMaterial::IsUsedWithMeshParticles(FMaterial *this)

{
  return false;
}

// IsUsedWithMorphTargets @ 147f03d60

bool __thiscall FMaterial::IsUsedWithMorphTargets(FMaterial *this)

{
  return false;
}

// IsUsedWithNanite @ 147f03d70

bool __thiscall FMaterial::IsUsedWithNanite(FMaterial *this)

{
  return false;
}

// IsUsedWithNeuralNetworks @ 147f03d80

bool __thiscall FMaterial::IsUsedWithNeuralNetworks(FMaterial *this)

{
  return false;
}

// IsUsedWithNiagaraMeshParticles @ 147f03d90

bool __thiscall FMaterial::IsUsedWithNiagaraMeshParticles(FMaterial *this)

{
  return false;
}

// IsUsedWithNiagaraRibbons @ 147f03da0

bool __thiscall FMaterial::IsUsedWithNiagaraRibbons(FMaterial *this)

{
  return false;
}

// IsUsedWithNiagaraSprites @ 147f03db0

bool __thiscall FMaterial::IsUsedWithNiagaraSprites(FMaterial *this)

{
  return false;
}

// IsUsedWithParticleSprites @ 147f03dc0

bool __thiscall FMaterial::IsUsedWithParticleSprites(FMaterial *this)

{
  return false;
}

// IsUsedWithParticleSystem @ 147f03dd0

bool __thiscall FMaterial::IsUsedWithParticleSystem(FMaterial *this)

{
  return false;
}

// IsUsedWithSkeletalMesh @ 147f03de0

bool __thiscall FMaterial::IsUsedWithSkeletalMesh(FMaterial *this)

{
  return false;
}

// IsUsedWithSplineMeshes @ 147f03df0

bool __thiscall FMaterial::IsUsedWithSplineMeshes(FMaterial *this)

{
  return false;
}

// IsUsedWithStaticLighting @ 147f03e00

bool __thiscall FMaterial::IsUsedWithStaticLighting(FMaterial *this)

{
  return false;
}

// IsUsedWithStaticMesh @ 147f03e10

bool __thiscall FMaterial::IsUsedWithStaticMesh(FMaterial *this)

{
  return true;
}

// IsUsedWithVirtualHeightfieldMesh @ 147f03e20

bool __thiscall FMaterial::IsUsedWithVirtualHeightfieldMesh(FMaterial *this)

{
  return false;
}

// IsUsedWithVolumetricCloud @ 147f03e30

bool __thiscall FMaterial::IsUsedWithVolumetricCloud(FMaterial *this)

{
  return false;
}

// IsUsedWithVoxels @ 147f03e40

bool __thiscall FMaterial::IsUsedWithVoxels(FMaterial *this)

{
  return false;
}

// IsUsedWithWater @ 147f03e50

bool __thiscall FMaterial::IsUsedWithWater(FMaterial *this)

{
  return false;
}

// IsUsingAlphaToCoverage @ 147f03e60

bool __thiscall FMaterial::IsUsingAlphaToCoverage(FMaterial *this)

{
  return false;
}

// IsUsingHQForwardReflections @ 147f03e70

bool __thiscall FMaterial::IsUsingHQForwardReflections(FMaterial *this)

{
  return false;
}

// IsUsingPlanarForwardReflections @ 147f03e80

bool __thiscall FMaterial::IsUsingPlanarForwardReflections(FMaterial *this)

{
  return false;
}

// IsUsingPreintegratedGFForSimpleIBL @ 147f03e90

bool __thiscall FMaterial::IsUsingPreintegratedGFForSimpleIBL(FMaterial *this)

{
  return false;
}

// IsVariableRateShadingAllowed @ 147f03ea0

bool __thiscall FMaterial::IsVariableRateShadingAllowed(FMaterial *this)

{
  return true;
}

// RequiresSynchronousCompilation @ 147f070a0

bool __thiscall FMaterial::RequiresSynchronousCompilation(FMaterial *this)

{
  return false;
}

// SamplesMaterialCache @ 147f071e0

bool __thiscall FMaterial::SamplesMaterialCache(FMaterial *this)

{
  return false;
}

// ShouldAlwaysEvaluateWorldPositionOffset @ 147f08330

bool __thiscall FMaterial::ShouldAlwaysEvaluateWorldPositionOffset(FMaterial *this)

{
  return false;
}

// ShouldApplyCloudFogging @ 147f08350

bool __thiscall FMaterial::ShouldApplyCloudFogging(FMaterial *this)

{
  return false;
}

// ShouldApplyFogging @ 147f08360

bool __thiscall FMaterial::ShouldApplyFogging(FMaterial *this)

{
  return false;
}

// ShouldDisableDepthTest @ 147f08370

bool __thiscall FMaterial::ShouldDisableDepthTest(FMaterial *this)

{
  return false;
}

// ShouldDoContactShadows @ 147f08380

bool __thiscall FMaterial::ShouldDoContactShadows(FMaterial *this)

{
  return false;
}

// ShouldDoSSR @ 147f08390

bool __thiscall FMaterial::ShouldDoSSR(FMaterial *this)

{
  return false;
}

// ShouldEnableResponsiveAA @ 147f083a0

bool __thiscall FMaterial::ShouldEnableResponsiveAA(FMaterial *this)

{
  return false;
}

// ShouldGenerateSphericalParticleNormals @ 147f083b0

bool __thiscall FMaterial::ShouldGenerateSphericalParticleNormals(FMaterial *this)

{
  return false;
}

// ShouldWriteOnlyAlpha @ 147f084c0

bool __thiscall FMaterial::ShouldWriteOnlyAlpha(FMaterial *this)

{
  return false;
}

// UseLmDirectionality @ 147f09230

bool __thiscall FMaterial::UseLmDirectionality(FMaterial *this)

{
  return true;
}

// UseNormalCurvatureToRoughness @ 147f09240

bool __thiscall FMaterial::UseNormalCurvatureToRoughness(FMaterial *this)

{
  return false;
}

// UsesMotionVectorWorldOffset @ 147f09250

bool __thiscall FMaterial::UsesMotionVectorWorldOffset(FMaterial *this)

{
  return false;
}

// UsesTemporalResponsiveness @ 147f09260

bool __thiscall FMaterial::UsesTemporalResponsiveness(FMaterial *this)

{
  return false;
}

// ~FMaterial @ 147f68730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMaterial::~FMaterial(FMaterial *this)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  FMaterialShaderMap *pFVar3;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FMaterial__6B_;
  FODSCManager::UnregisterMaterialName(this);
  if ((this->NumDebugRefs).Counter != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x558);
    if (pcVar1 == GetBaseMaterialPathName) {
      ::FString::FString(&local_18,L"");
    }
    else {
      (*pcVar1)(this,&local_18);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = (this->PrecachedPSORequestIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar3 != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::Release(pFVar3);
  }
  pFVar3 = (this->GameThreadShaderMap).Reference;
  if (pFVar3 != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::Release(pFVar3);
    return;
  }
  return;
}

// operator() @ 147f6ab40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall
`FMaterial::TryGetShaders'::__l2::<lambda_1>::operator()
          (void *this,FShaderType *param_1,FVertexFactoryType *param_2,int param_3)

{
  EShaderPermutationFlags EVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  FShaderType *pFVar5;
  FMaterialShaderParameters local_c8;
  FShaderPermutationParameters local_80;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  void *local_38;
  undefined8 local_30;
  
  cVar2 = (**(code **)(**(longlong **)this + 0x18))();
  if (cVar2 != '\0') {
    pFVar5 = (FShaderType *)0x0;
    if (param_1->ShaderTypeForDynamicCast == Material) {
      pFVar5 = param_1;
    }
    if (pFVar5 != (FShaderType *)0x0) {
      EVar1 = **(EShaderPermutationFlags **)((longlong)this + 8);
      FMaterialShaderParametersBase::FMaterialShaderParametersBase
                ((FMaterialShaderParametersBase *)&local_c8,*(FMaterial **)this);
      local_80.Platform = GMaxRHIShaderPlatform;
      local_70 = local_c8._padding_;
      lStack_68 = local_c8._padding_;
      local_60 = local_c8._padding_;
      lStack_58 = local_c8._padding_;
      local_38 = (void *)0x0;
      local_50 = local_c8._padding_;
      lStack_48 = local_c8._padding_;
      local_30 = 0;
      local_40 = local_c8._padding_;
      local_80.PermutationId = param_3;
      local_80.Flags = EVar1;
      bVar3 = FShaderType::ShouldCompilePermutation(pFVar5,&local_80);
      if (local_38 == (void *)0x0) {
        return bVar3;
      }
      FMemory::Free(local_38);
      return bVar3;
    }
    pFVar5 = (FShaderType *)0x0;
    if (param_1->ShaderTypeForDynamicCast == MeshMaterial) {
      pFVar5 = param_1;
    }
    if (pFVar5 != (FShaderType *)0x0) {
      EVar1 = **(EShaderPermutationFlags **)((longlong)this + 8);
      FMaterialShaderParametersBase::FMaterialShaderParametersBase
                ((FMaterialShaderParametersBase *)&local_c8,*(FMaterial **)this);
      local_c8.MaterialShaderTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.MaterialShaderTags.ArrayNum = 0;
      local_c8.MaterialShaderTags.ArrayMax = 0;
      bVar3 = FMeshMaterialShaderType::ShouldCompileVertexFactoryPermutation
                        (GMaxRHIShaderPlatform,&local_c8,param_2,param_1,EVar1);
      if (local_c8.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.MaterialShaderTags.AllocatorInstance.Data);
      }
      EVar1 = **(EShaderPermutationFlags **)((longlong)this + 8);
      FMaterialShaderParametersBase::FMaterialShaderParametersBase
                ((FMaterialShaderParametersBase *)&local_c8,*(FMaterial **)this);
      local_c8.MaterialShaderTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.MaterialShaderTags.ArrayNum = 0;
      local_c8.MaterialShaderTags.ArrayMax = 0;
      bVar4 = FMeshMaterialShaderType::ShouldCompilePermutation
                        ((FMeshMaterialShaderType *)pFVar5,GMaxRHIShaderPlatform,&local_c8,param_2,
                         param_3,EVar1);
      if (local_c8.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.MaterialShaderTags.AllocatorInstance.Data);
      }
      if ((bVar3) && (bVar4)) {
        return true;
      }
    }
  }
  return false;
}

// operator() @ 147f6b760

void __thiscall
`FMaterial::DeleteMaterialsOnRenderThread'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  FMaterial *this_00;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  puVar4 = *(undefined8 **)this;
  iVar2 = *(int *)((longlong)this + 8);
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<FMaterial>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    plVar3 = (longlong *)*puVar4;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    this_00 = (FMaterial *)*puVar4;
    if (this_00 != (FMaterial *)0x0) {
      *puVar4 = 0;
      FMaterial::Release(this_00);
    }
    (**(code **)*plVar3)(plVar3,1);
    puVar4 = puVar4 + 1;
  }
  return;
}

// operator() @ 147f6b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall `FMaterial::GetShader'::__l8::<lambda_1>::operator()(void *this)

{
  ulonglong uVar1;
  EShaderPermutationFlags EVar2;
  FMaterialShaderMap *this_00;
  longlong *plVar3;
  FVertexFactoryType *pFVar4;
  FMeshMaterialShaderType *this_01;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FMeshMaterialShaderMap *this_02;
  FShader *pFVar8;
  FName this_03;
  FShaderType *pFVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_2a8 [32];
  undefined1 local_225;
  EShaderPermutationFlags local_224;
  undefined4 local_220;
  uint local_21c;
  ulonglong local_218;
  int local_210;
  int local_20c;
  undefined8 local_208;
  FString local_200;
  void *local_1f0 [2];
  longlong *local_1e0;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  uint local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  undefined1 local_180 [8];
  void *local_178 [2];
  FString local_168;
  FMaterialShaderParameters local_158;
  FMaterialShaderParameters local_110;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  this_00 = *(FMaterialShaderMap **)(*(longlong *)this + 0x10);
  local_218 = 1;
  if (this_00 != (FMaterialShaderMap *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS);
    if ((this_00->bDeletedThroughDeferredCleanup != false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bDeletedThroughDeferredCleanup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                           ,0xe9f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00->NumRefs = this_00->NumRefs + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS);
    this_02 = FMaterialShaderMapContent::GetMeshShaderMap
                        ((FMaterialShaderMapContent *)this_00->_padding_,
                         (FHashedName *)(**(longlong **)((longlong)this + 8) + 0x30));
    if ((this_02 != (FMeshMaterialShaderMap *)0x0) &&
       (pFVar8 = FShaderMapContent::GetShader
                           ((FShaderMapContent *)this_02,
                            (FHashedName *)(**(longlong **)((longlong)this + 0x10) + 0x28),
                            **(int **)((longlong)this + 0x18)), pFVar8 != (FShader *)0x0)) {
      local_220 = 1;
      goto LAB_147f6b905;
    }
  }
  local_220 = 0;
LAB_147f6b905:
  puVar15 = (undefined8 *)((longlong)this + 8);
  plVar3 = *(longlong **)this;
  EVar2 = *(EShaderPermutationFlags *)(plVar3[3] + 0x3c);
  local_224 = EVar2;
  (**(code **)(*plVar3 + 0x18))
            (plVar3,**(undefined8 **)((longlong)this + 0x10),*(undefined8 *)*puVar15);
  pFVar9 = (FShaderType *)**(undefined8 **)((longlong)this + 0x10);
  pFVar4 = *(FVertexFactoryType **)*puVar15;
  FMaterialShaderParametersBase::FMaterialShaderParametersBase
            ((FMaterialShaderParametersBase *)&local_158,*(FMaterial **)this);
  local_158.MaterialShaderTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.MaterialShaderTags.ArrayNum = 0;
  local_158.MaterialShaderTags.ArrayMax = 0;
  FMeshMaterialShaderType::ShouldCompileVertexFactoryPermutation
            (GMaxRHIShaderPlatform,&local_158,pFVar4,pFVar9,EVar2);
  if (local_158.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.MaterialShaderTags.AllocatorInstance.Data);
  }
  this_01 = (FMeshMaterialShaderType *)**(undefined8 **)((longlong)this + 0x10);
  pFVar4 = *(FVertexFactoryType **)*puVar15;
  iVar12 = **(int **)((longlong)this + 0x18);
  FMaterialShaderParametersBase::FMaterialShaderParametersBase
            ((FMaterialShaderParametersBase *)&local_110,*(FMaterial **)this);
  local_110.MaterialShaderTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.MaterialShaderTags.ArrayNum = 0;
  local_110.MaterialShaderTags.ArrayMax = 0;
  FMeshMaterialShaderType::ShouldCompilePermutation
            (this_01,GMaxRHIShaderPlatform,&local_110,pFVar4,iVar12,local_224);
  if (local_110.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.MaterialShaderTags.AllocatorInstance.Data);
  }
  (**(code **)(**(longlong **)this + 0x508))(*(longlong **)this,local_1f0);
  if (1 < (byte)LogMaterial._0_1_) {
    this_03 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_180);
    ::FName::ToString((FName *)this_03,&local_168);
    local_208 = *(undefined8 *)(*(longlong *)*puVar15 + 8);
    plVar3 = *(longlong **)this;
    local_224 = (EShaderPermutationFlags)(plVar3[3] != 0);
    local_21c = (uint)(**(longlong **)((longlong)this + 0x20) != 0);
    (**(code **)(*plVar3 + 0x390))(plVar3,local_178);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    if (local_178[0] != (void *)0x0) {
      FMemory::Free(local_178[0]);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if ((FShaderMapContent *)**(undefined8 **)((longlong)this + 0x20) != (FShaderMapContent *)0x0) {
    local_7c = 0x80;
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_88 = (uint *)0x0;
    uVar13 = 0;
    local_80 = 0;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    FShaderMapContent::GetShaderList
              ((FShaderMapContent *)**(undefined8 **)((longlong)this + 0x20),
               *(FShaderMapBase **)(*(longlong *)this + 0x18),
               (TMap<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
                *)local_a8);
    uVar17 = local_80;
    local_1c0 = 0;
    uStack_1c4 = uVar13;
    if (local_80 != 0) {
      puVar14 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar14 = local_88;
      }
      uVar16 = *puVar14;
      local_1c0 = 0;
      uVar13 = 0;
      while (uVar16 == 0) {
        lVar11 = (longlong)(int)uVar13;
        local_1c0 = local_1c0 + 0x20;
        uVar13 = uVar13 + 1;
        uStack_1c4 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
        goto LAB_147f6bc32;
        uVar16 = (puVar14 + 1)[lVar11];
      }
      local_218 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = local_218 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_210 = (int)lVar11;
      uStack_1c4 = (local_1c0 - 1) + local_210;
      if ((int)local_80 < (int)uStack_1c4) {
        uStack_1c4 = local_80;
      }
    }
LAB_147f6bc32:
    local_1e0 = (longlong *)local_a8;
    uStack_1d4 = (undefined4)local_218;
    uVar16 = local_80 & 0xffffffe0;
    uStack_1bc = local_ac;
    local_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    iStack_1b8 = local_a8._8_4_ - local_74;
    uStack_1c8 = 0xffffffff;
    TStack_1a8.CurrentBitIndex = uStack_1c4;
    TStack_1a8.UnvisitedBitMask = 0xffffffff;
    TStack_1a8._padding_ = CONCAT44(uStack_1d4,uVar13);
    iVar12 = (int)local_80 >> 5;
    TStack_1a8._28_4_ = local_ac;
    TStack_1a8.BaseBitIndex = local_1c0;
    uStack_188 = CONCAT44(uStack_1b4,iStack_1b8);
    bVar10 = (byte)local_80;
    uStack_1d8 = uVar13;
    local_1b0 = local_1e0;
    TStack_1a8.Array = local_1d0;
    if (((int)local_80 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar17 != local_80) {
      puVar14 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar14 = local_88;
      }
      uVar13 = -1 << (bVar10 & 0x1f) & puVar14[iVar12];
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar17 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_147f6bd51;
        uVar13 = (puVar14 + 1)[lVar11];
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_20c = (int)lVar11;
      uVar17 = local_20c + -1 + uVar16;
      if ((int)local_80 < (int)uVar17) {
        uVar17 = local_80;
      }
    }
LAB_147f6bd51:
    while( true ) {
      plVar3 = local_1b0;
      if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
        local_225 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_225);
      }
      if (((TStack_1a8.CurrentBitIndex == uVar17) &&
          (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
         (plVar3 == (longlong *)local_a8)) break;
      lVar11 = *plVar3;
      lVar5 = *(longlong *)((longlong)TStack_1a8.CurrentBitIndex * 0x20 + 0x10 + lVar11);
      pFVar8 = *(FShader **)((longlong)TStack_1a8.CurrentBitIndex * 0x20 + 8 + lVar11);
      if ((*(longlong *)(lVar5 + 0x18) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PointerTable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x9b4,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar9 = FShader::GetType(pFVar8,*(FShaderMapPointerTable **)(lVar5 + 0x18));
      ::FString::FString(&local_200,pFVar9->Name);
      if (1 < (byte)LogMaterial._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  if (local_1f0[0] != (void *)0x0) {
    FMemory::Free(local_1f0[0]);
  }
  if (this_00 != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::Release(this_00);
  }
  return;
}

// operator() @ 147f6bf00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall `FMaterial::GetShaderPipeline'::__l8::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  FShaderType *pFVar2;
  FVertexFactoryType *pFVar3;
  undefined8 *puVar4;
  FShader *pFVar5;
  FName this_00;
  FShaderMapContent *this_01;
  ulonglong uVar6;
  FShaderType *pFVar7;
  FShaderType *pFVar8;
  undefined8 *puVar9;
  EShaderPermutationFlags EVar10;
  undefined1 local_128 [4];
  EShaderPermutationFlags local_124;
  uint local_120;
  undefined8 *local_118 [2];
  FString local_108;
  void *local_f8 [2];
  FMaterialShaderParameters local_e8;
  FShaderPermutationParameters local_a0;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  
  plVar1 = *(longlong **)this;
  EVar10 = *(EShaderPermutationFlags *)(plVar1[3] + 0x3c);
  local_124 = EVar10;
  (**(code **)(*plVar1 + 0x508))(plVar1,local_f8);
  if (1 < (byte)LogMaterial._0_1_) {
    (**(code **)(**(longlong **)this + 0x390))(*(longlong **)this,local_118);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    if (local_118[0] != (undefined8 *)0x0) {
      FMemory::Free(local_118[0]);
    }
  }
  local_108.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)**(longlong **)((longlong)this + 8);
  local_120 = *(uint *)(local_108.Data.AllocatorInstance.Data + 0x28);
  uVar6 = (ulonglong)(int)local_120;
  puVar9 = *(undefined8 **)(local_108.Data.AllocatorInstance.Data + 0x20);
  local_118[0] = puVar9 + uVar6;
  do {
    while( true ) {
      puVar4 = local_118[0];
      pFVar8 = (FShaderType *)0x0;
      if (*(int *)(local_108.Data.AllocatorInstance.Data + 0x28) != (int)uVar6) {
        `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_128);
      }
      if (puVar9 == puVar4) {
        this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_118);
        ::FName::ToString((FName *)this_00,&local_108);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8[0] != (void *)0x0) {
          FMemory::Free(local_f8[0]);
        }
        return;
      }
      pFVar2 = (FShaderType *)*puVar9;
      this_01 = (FShaderMapContent *)**(longlong **)((longlong)this + 0x10);
      if (this_01 == (FShaderMapContent *)0x0) {
        this_01 = *(FShaderMapContent **)(*(longlong *)(*(longlong *)this + 0x18) + 0x28);
      }
      pFVar5 = FShaderMapContent::GetShader(this_01,&pFVar2->HashedName,0);
      if (pFVar5 == (FShader *)0x0) break;
      pFVar7 = pFVar8;
      if (pFVar2->ShaderTypeForDynamicCast == MeshMaterial) {
        pFVar7 = pFVar2;
      }
      if (pFVar7 == (FShaderType *)0x0) {
        pFVar7 = pFVar8;
        if (pFVar2->ShaderTypeForDynamicCast == Material) {
          pFVar7 = pFVar2;
        }
        if (pFVar7 != (FShaderType *)0x0) {
          (**(code **)(**(longlong **)this + 0x18))();
          if (pFVar2->ShaderTypeForDynamicCast == Material) {
            pFVar8 = pFVar2;
          }
          FMaterialShaderParametersBase::FMaterialShaderParametersBase
                    ((FMaterialShaderParametersBase *)&local_e8,*(FMaterial **)this);
          local_a0.Platform = GMaxRHIShaderPlatform;
          local_90 = local_e8._padding_;
          lStack_88 = local_e8._padding_;
          local_a0.PermutationId = 0;
          local_80 = local_e8._padding_;
          lStack_78 = local_e8._padding_;
          local_58 = (void *)0x0;
          local_70 = local_e8._padding_;
          lStack_68 = local_e8._padding_;
          local_50 = 0;
          local_60 = local_e8._padding_;
          local_a0.Flags = EVar10;
          FShaderType::ShouldCompilePermutation(pFVar8,&local_a0);
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          if (1 < (byte)LogMaterial._0_1_) {
            GetShaderFrequencyString((EShaderFrequency)pFVar2->Frequency,false);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
          }
        }
      }
      else {
        (**(code **)(**(longlong **)this + 0x18))
                  (*(longlong **)this,pFVar7,**(undefined8 **)((longlong)this + 0x18));
        pFVar3 = (FVertexFactoryType *)**(undefined8 **)((longlong)this + 0x18);
        FMaterialShaderParametersBase::FMaterialShaderParametersBase
                  ((FMaterialShaderParametersBase *)&local_e8,*(FMaterial **)this);
        local_e8.MaterialShaderTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.MaterialShaderTags.ArrayNum = 0;
        local_e8.MaterialShaderTags.ArrayMax = 0;
        FMeshMaterialShaderType::ShouldCompileVertexFactoryPermutation
                  (GMaxRHIShaderPlatform,&local_e8,pFVar3,pFVar2,EVar10);
        if (local_e8.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.MaterialShaderTags.AllocatorInstance.Data);
        }
        pFVar8 = (FShaderType *)0x0;
        if (pFVar2->ShaderTypeForDynamicCast == MeshMaterial) {
          pFVar8 = pFVar2;
        }
        pFVar3 = (FVertexFactoryType *)**(undefined8 **)((longlong)this + 0x18);
        FMaterialShaderParametersBase::FMaterialShaderParametersBase
                  ((FMaterialShaderParametersBase *)&local_e8,*(FMaterial **)this);
        local_e8.MaterialShaderTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.MaterialShaderTags.ArrayNum = 0;
        local_e8.MaterialShaderTags.ArrayMax = 0;
        FMeshMaterialShaderType::ShouldCompilePermutation
                  ((FMeshMaterialShaderType *)pFVar8,GMaxRHIShaderPlatform,&local_e8,pFVar3,0,
                   local_124);
        if (local_e8.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.MaterialShaderTags.AllocatorInstance.Data);
        }
        EVar10 = local_124;
        if (1 < (byte)LogMaterial._0_1_) {
          GetShaderFrequencyString((EShaderFrequency)pFVar2->Frequency,false);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
          EVar10 = local_124;
        }
      }
LAB_147f6c206:
      puVar9 = puVar9 + 1;
      uVar6 = (ulonglong)local_120;
    }
    if ((byte)LogMaterial._0_1_ < 2) goto LAB_147f6c206;
    switch((char)pFVar2->Frequency) {
    case '\0':
      break;
    case '\x01':
      break;
    case '\x02':
      break;
    case '\x03':
      break;
    case '\x04':
      break;
    case '\x05':
      break;
    case '\x06':
      break;
    case '\a':
      break;
    case '\b':
      break;
    case '\t':
      break;
    case '\n':
      break;
    case '\v':
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    puVar9 = puVar9 + 1;
    uVar6 = (ulonglong)local_120;
  } while( true );
}

// AddRef @ 147f6d830

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FMaterial::AddRef(FMaterial *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  uint uVar3;
  
  LOCK();
  pFVar1 = &this->NumDebugRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  uVar3 = iVar2 + 1;
  if (uVar3 == 0 || iVar2 < -1) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  if ((2 < (byte)LogMaterial._0_1_) && (5000 < (int)uVar3)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  return uVar3;
}

// AddReferencedObjects @ 147f6d8f0

void __thiscall FMaterial::AddReferencedObjects(FMaterial *this,FReferenceCollector *param_1)

{
  return;
}

// BuildShaderMapIdOverride @ 147f6f540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMaterial::BuildShaderMapIdOverride(FMaterial *this,FBuildShaderMapIdArgs *param_1)

{
  FMaterialShaderMapId *pFVar1;
  undefined8 uVar2;
  Type TVar3;
  uint uVar4;
  bool bVar5;
  FMaterialShaderMap *pFVar6;
  
  pFVar1 = param_1->OutId;
  if (this->bLoadedCookedShaderMapId == 0) {
    pFVar1->QualityLevel = this->QualityLevel;
    pFVar1->FeatureLevel = this->FeatureLevel;
    if ((param_1->TargetPlatform != (ITargetPlatform *)0x0) && (1 < (byte)LogMaterial._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    }
    FPlatformTypeLayoutParameters::InitializeForCurrent(&pFVar1->LayoutParams);
    if (1 < (byte)LogMaterial._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    }
    return;
  }
  if ((this->GameThreadShaderMap).Reference != (FMaterialShaderMap *)0x0) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = (*IsInAsyncLoadingThread)();
      if (!bVar5) goto LAB_147f6f576;
    }
    pFVar6 = (this->GameThreadShaderMap).Reference;
LAB_147f6f58a:
    uVar2 = *(undefined8 *)((pFVar6->ShaderMapId).CookedShaderMapIdHash.Hash + 8);
    *(undefined8 *)(pFVar1->CookedShaderMapIdHash).Hash =
         *(undefined8 *)(pFVar6->ShaderMapId).CookedShaderMapIdHash.Hash;
    *(undefined8 *)((pFVar1->CookedShaderMapIdHash).Hash + 8) = uVar2;
    TVar3 = (pFVar6->ShaderMapId).FeatureLevel;
    uVar4 = (pFVar6->ShaderMapId).LayoutParams.MaxFieldAlignment;
    *(undefined8 *)((pFVar1->CookedShaderMapIdHash).Hash + 0x10) =
         *(undefined8 *)((pFVar6->ShaderMapId).CookedShaderMapIdHash.Hash + 0x10);
    pFVar1->FeatureLevel = TVar3;
    (pFVar1->LayoutParams).MaxFieldAlignment = uVar4;
    (pFVar1->LayoutParams).Flags = (pFVar6->ShaderMapId).LayoutParams.Flags;
    return;
  }
LAB_147f6f576:
  if ((this->RenderingThreadShaderMap).Reference != (FMaterialShaderMap *)0x0) {
    bVar5 = IsInParallelRenderingThread();
    if (bVar5) {
      pFVar6 = (this->RenderingThreadShaderMap).Reference;
      goto LAB_147f6f58a;
    }
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  return;
}

// CacheShaders @ 147f6f630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::CacheShaders
          (FMaterial *this,FMaterialShaderMapId *param_1,EMaterialShaderPrecompileMode param_2,
          ITargetPlatform *param_3)

{
  FMaterialShaderMapId *pFVar1;
  FMaterialShaderMap *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<bool> aVar6;
  char cVar7;
  int iVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  UClass *pUVar10;
  UObjectBaseUtility *this_02;
  FString *pFVar11;
  undefined ***pppuVar12;
  FMaterialShaderMap *pFVar13;
  longlong lVar14;
  FMaterialShaderMap *this_03;
  ulonglong uVar15;
  int iVar16;
  wchar_t *pwVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  wchar_t *local_130;
  FMaterialShaderMap *local_128;
  wchar_t *local_120 [2];
  FString local_110;
  void *local_100 [2];
  FMaterialShaderMap *local_f0 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined4 local_bc;
  FString local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FMaterial *pFStack_90;
  atomic<bool> local_88;
  undefined7 uStack_87;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FMaterial *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2839,"FMaterial::CacheShaders",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
               ,0xb17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2839);
  }
  if (2 < (byte)LogMaterial._0_1_) {
    local_d0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    if (((*(longlong *)(param_1->CookedShaderMapIdHash).Hash == 0) &&
        (*(longlong *)((param_1->CookedShaderMapIdHash).Hash + 8) == 0)) &&
       (*(int *)((param_1->CookedShaderMapIdHash).Hash + 0x10) == 0)) {
      (**(code **)(this->_padding_ + 0x390))(this,local_120);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      if (local_120[0] != (wchar_t *)0x0) {
        FMemory::Free(local_120[0]);
      }
    }
  }
  pFVar13 = (FMaterialShaderMap *)0x0;
  iVar16 = 0;
  if (this->bContainsInlineShaders != 0) {
    pFVar2 = (this->GameThreadShaderMap).Reference;
    this_03 = pFVar13;
    if (pFVar2 == (FMaterialShaderMap *)0x0) {
LAB_147f6f881:
      if ((this->GameThreadShaderMap).Reference != (FMaterialShaderMap *)0x0) {
        if ((this->bContainsInlineShaders == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("bContainsInlineShaders",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                               ,0x501,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        aVar6 = (atomic<bool>)
                FMaterialShaderMap::IsComplete((this->GameThreadShaderMap).Reference,this,false);
        this->bGameThreadShaderMapIsComplete = aVar6;
        AddRef(this);
        local_80 = (undefined ***)0x0;
        local_98 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FMaterial::UpdateInlineShaderMapIsComplete'::`2'::<lambda_1>,1,0>
                    ::_vftable_;
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        pFStack_90 = this;
        local_88 = aVar6;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FMaterial::UpdateInlineShaderMapIsComplete_::__l2::TSTR_UpdateGameThreadShaderMapIsComplete1293>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_58._1_7_ = uStack_87;
          local_58._0_1_ = local_88;
          local_78._0_8_ = local_a8[0];
          local_a8[0] = (code *)0x0;
          local_50 = local_80;
          local_68 = local_98;
          pFStack_60 = pFStack_90;
          local_48 = 2;
          pFVar9 = (FRenderCommandTag *)
                   TRenderCommandTag<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::TSTR_UpdateGameThreadShaderMapIsComplete1293>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_78,pFVar9);
          uVar15 = (ulonglong)local_48;
          if ((2 < uVar15) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar15] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_78._0_8_ != (code *)0x0) {
              pppuVar12 = (undefined ***)(local_78 + 0x10);
              if (local_50 != (undefined ***)0x0) {
                pppuVar12 = local_50;
              }
              (*(code *)(*pppuVar12)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar15])(local_78);
          }
        }
        if (local_a8[0] != (code *)0x0) {
          pppuVar12 = &local_98;
          if (local_80 != (undefined ***)0x0) {
            pppuVar12 = local_80;
          }
          (*(code *)(*pppuVar12)[2])();
        }
        FMaterialShaderMap::Register((this->GameThreadShaderMap).Reference,GMaxRHIShaderPlatform);
        if (this_03 != (FMaterialShaderMap *)0x0) goto LAB_147f6f9f0;
      }
    }
    else {
      uVar15 = (ulonglong)GMaxRHIShaderPlatform;
      pFVar1 = &pFVar2->ShaderMapId;
      EnterCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS);
      local_bc = 0;
      local_cc = 0;
      uStack_c4 = 0;
      if (((*(longlong *)(pFVar1->CookedShaderMapIdHash).Hash == 0) &&
          (*(longlong *)((pFVar2->ShaderMapId).CookedShaderMapIdHash.Hash + 8) == 0)) &&
         ((*(int *)((pFVar2->ShaderMapId).CookedShaderMapIdHash.Hash + 0x10) == 0 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("ShaderMapId.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                              ,0x7d1,L""), bVar4)))) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar8 = TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMaterialShaderMapId>
                        ((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                          *)(&FMaterialShaderMap::GIdToMaterialShaderMap + uVar15 * 0x50),
                         *(uint *)(pFVar1->CookedShaderMapIdHash).Hash,pFVar1);
      if ((iVar8 == -1) ||
         (lVar14 = (longlong)iVar8 * 0x38 +
                   *(longlong *)
                    &((TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
                       *)(&FMaterialShaderMap::GIdToMaterialShaderMap + uVar15 * 0x50))->Elements,
         lVar14 == 0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS);
        this_03 = (FMaterialShaderMap *)0x0;
        goto LAB_147f6f881;
      }
      this_03 = *(FMaterialShaderMap **)(lVar14 + 0x28);
      if ((this_03 != (FMaterialShaderMap *)0x0) &&
         (((FMaterialShaderMap::AddRef(this_03), this_03->bDeletedThroughDeferredCleanup != false ||
           (this_03->bRegistered == 0)) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result == nullptr || (!Result->bDeletedThroughDeferredCleanup && Result->bRegistered)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                              ,0x7d3,L""), bVar4)))) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&FMaterialShaderMap::GIdToMaterialShaderMapCS);
      if (this_03 == (FMaterialShaderMap *)0x0) goto LAB_147f6f881;
      SetGameThreadShaderMap(this,this_03);
LAB_147f6f9f0:
      FMaterialShaderMap::Release(this_03);
    }
  }
  lVar14 = (**(code **)(this->_padding_ + 0x4e0))(this);
  if (lVar14 == 0) {
LAB_147f6fa2f:
    cVar7 = (**(code **)(this->_padding_ + 0x418))(this);
    if ((cVar7 == '\0') && (cVar7 = (**(code **)(this->_padding_ + 0x108))(this), cVar7 == '\0'))
    goto LAB_147f6fa4f;
    bVar4 = true;
  }
  else {
    pUVar10 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar8 * 8)
        != &pUVar10->_padding_)) goto LAB_147f6fa2f;
LAB_147f6fa4f:
    bVar4 = false;
  }
  pFVar2 = (this->GameThreadShaderMap).Reference;
  bVar18 = pFVar2 != (FMaterialShaderMap *)0x0;
  if (pFVar2 == (FMaterialShaderMap *)0x0) {
    if (bVar4) goto LAB_147f6fa8e;
    if (4 < (byte)LogMaterial._0_1_) {
      (**(code **)(this->_padding_ + 0x390))(this,local_f0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      pFVar13 = local_f0[0];
      if (local_f0[0] == (FMaterialShaderMap *)0x0) goto LAB_147f6fbc2;
      goto LAB_147f6fbbd;
    }
  }
  else {
    if (!bVar4) goto LAB_147f6fbcc;
    bVar4 = FMaterialShaderMap::IsComplete(pFVar2,this,false);
    if (bVar4) {
      bVar18 = true;
      goto LAB_147f6fbcc;
    }
    bVar18 = false;
LAB_147f6fa8e:
    this_02 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x4e0))(this);
    if (this_02 != (UObjectBaseUtility *)0x0) {
      pFVar11 = UObjectBaseUtility::GetPathName(this_02,&local_110,(UObject *)0x0);
      iVar16 = 0;
      if (&local_b8 != pFVar11) {
        pFVar13 = (FMaterialShaderMap *)(pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar16 = (pFVar11->Data).ArrayNum;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    pwVar17 = L"null";
    if ((this->GameThreadShaderMap).Reference != (FMaterialShaderMap *)0x0) {
      pwVar17 = L"has";
    }
    local_120[0] = L"No";
    if (this->bContainsInlineShaders != 0) {
      local_120[0] = L"Contains";
    }
    local_128 = (FMaterialShaderMap *)L"";
    if (iVar16 != 0) {
      local_128 = pFVar13;
    }
    (**(code **)(this->_padding_ + 0x390))(this,local_100);
    local_138 = local_120[0];
    local_130 = pwVar17;
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    if (local_100[0] != (void *)0x0) {
      FMemory::Free(local_100[0]);
    }
    if (pFVar13 != (FMaterialShaderMap *)0x0) {
LAB_147f6fbbd:
      FMemory::Free(pFVar13);
    }
  }
LAB_147f6fbc2:
  SetGameThreadShaderMap(this,(FMaterialShaderMap *)0x0);
LAB_147f6fbcc:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar18;
}

// CacheShaders @ 147f6fc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

bool __thiscall
FMaterial::CacheShaders
          (FMaterial *this,FMaterialShaderMapId *param_1,EShaderPlatform param_2,
          EMaterialShaderPrecompileMode param_3,ITargetPlatform *param_4)

{
  bool bVar1;
  
  bVar1 = CacheShaders(this,param_1,param_3,param_4);
  return bVar1;
}

// CacheShaders @ 147f6fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::CacheShaders
          (FMaterial *this,EMaterialShaderPrecompileMode param_1,ITargetPlatform *param_2)

{
  bool bVar1;
  undefined1 auStack_78 [32];
  FMaterialShaderMapId *local_58;
  EShaderPlatform local_50;
  ITargetPlatform *local_48;
  undefined4 local_40;
  FMaterialShaderMapId local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38.QualityLevel = High;
  local_38.CookedShaderMapIdHash.Hash[0x10] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0x11] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0x12] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0x13] = '\0';
  local_38.LayoutParams.Flags = 0;
  local_58 = &local_38;
  local_38.FeatureLevel = SM5;
  local_50 = GMaxRHIShaderPlatform;
  local_38.CookedShaderMapIdHash.Hash[0] = '\0';
  local_38.CookedShaderMapIdHash.Hash[1] = '\0';
  local_38.CookedShaderMapIdHash.Hash[2] = '\0';
  local_38.CookedShaderMapIdHash.Hash[3] = '\0';
  local_38.CookedShaderMapIdHash.Hash[4] = '\0';
  local_38.CookedShaderMapIdHash.Hash[5] = '\0';
  local_38.CookedShaderMapIdHash.Hash[6] = '\0';
  local_38.CookedShaderMapIdHash.Hash[7] = '\0';
  local_38.CookedShaderMapIdHash.Hash[8] = '\0';
  local_38.CookedShaderMapIdHash.Hash[9] = '\0';
  local_38.CookedShaderMapIdHash.Hash[10] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xb] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xc] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xd] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xe] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xf] = '\0';
  local_38.LayoutParams.MaxFieldAlignment = 0xffffffff;
  local_40 = 0xf;
  local_48 = param_2;
  (**(code **)(this->_padding_ + 0x38))(0,&local_58);
  bVar1 = CacheShaders(this,&local_38,param_1,param_2);
  return bVar1;
}

// CacheShaders @ 147f6fd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::CacheShaders
          (FMaterial *this,EShaderPlatform param_1,EMaterialShaderPrecompileMode param_2,
          ITargetPlatform *param_3)

{
  bool bVar1;
  undefined1 auStack_78 [32];
  FMaterialShaderMapId *local_58;
  EShaderPlatform local_50;
  ITargetPlatform *local_48;
  undefined4 local_40;
  FMaterialShaderMapId local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38.QualityLevel = High;
  local_38.CookedShaderMapIdHash.Hash[0x10] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0x11] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0x12] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0x13] = '\0';
  local_38.LayoutParams.Flags = 0;
  local_58 = &local_38;
  local_38.FeatureLevel = SM5;
  local_50 = GMaxRHIShaderPlatform;
  local_38.CookedShaderMapIdHash.Hash[0] = '\0';
  local_38.CookedShaderMapIdHash.Hash[1] = '\0';
  local_38.CookedShaderMapIdHash.Hash[2] = '\0';
  local_38.CookedShaderMapIdHash.Hash[3] = '\0';
  local_38.CookedShaderMapIdHash.Hash[4] = '\0';
  local_38.CookedShaderMapIdHash.Hash[5] = '\0';
  local_38.CookedShaderMapIdHash.Hash[6] = '\0';
  local_38.CookedShaderMapIdHash.Hash[7] = '\0';
  local_38.CookedShaderMapIdHash.Hash[8] = '\0';
  local_38.CookedShaderMapIdHash.Hash[9] = '\0';
  local_38.CookedShaderMapIdHash.Hash[10] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xb] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xc] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xd] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xe] = '\0';
  local_38.CookedShaderMapIdHash.Hash[0xf] = '\0';
  local_38.LayoutParams.MaxFieldAlignment = 0xffffffff;
  local_40 = 0xf;
  local_48 = param_3;
  (**(code **)(this->_padding_ + 0x38))(0,&local_58);
  bVar1 = CacheShaders(this,&local_38,param_2,param_3);
  return bVar1;
}

// ClearPrecachedPSORequestIDs @ 147f72130

void __thiscall FMaterial::ClearPrecachedPSORequestIDs(FMaterial *this)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
  piVar1 = &(this->PrecachedPSORequestIDs).ArrayMax;
  (this->PrecachedPSORequestIDs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PrecachedPSORequestIDs).AllocatorInstance,0,piVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147f7217c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
  return;
}

// CollectPSOs @ 147f728d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FMaterial::CollectPSOs
          (FMaterial *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,
          TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1,FPSOPrecacheParams *param_2,EPSOPrecachePriority param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  FPSOPrecacheParams_u_0_s_0 *pFVar3;
  char cVar4;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  char local_68;
  undefined1 local_67 [3];
  uint local_64;
  FPSOPrecacheParams_u_0_s_0 *local_60;
  FMaterialPSOPrecacheParams local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar6 = CpuChannel->Enabled < 0;
  local_60 = (FPSOPrecacheParams_u_0_s_0 *)param_2;
  if (bVar6) {
    local_68 = '\0';
  }
  else {
    local_68 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3155,"FMaterial::CollectPSOs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
               ,0xc53);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3155);
  }
  pFVar3 = local_60;
  cVar4 = !bVar6;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 4;
  if ((this->GameThreadShaderMap).Reference != (FMaterialShaderMap *)0x0) {
    FVar5 = (param_1->AllocatorInstance).SecondaryData;
    piVar1 = &param_1->ArrayNum;
    iVar2 = *piVar1;
    if (FVar5 != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      param_1 = (TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar5;
    }
    FVar5 = (ForElementType<FPSOPrecacheVertexFactoryData>)
            ((longlong)iVar2 * 0x10 + (longlong)param_1);
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<FPSOPrecacheVertexFactoryData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_67);
      }
      cVar4 = local_68;
      if ((ForElementType<FPSOPrecacheVertexFactoryData>)param_1 == FVar5) break;
      if ((*(uint *)(*(longlong *)param_1 + 0x38) & 0x2000) != 0) {
        local_58.FeatureLevel = this->FeatureLevel;
        local_58.VertexFactoryData.VertexFactoryType = *(FVertexFactoryType **)param_1;
        local_58.VertexFactoryData.CustomDefaultVertexDeclaration =
             *(FRHIVertexDeclaration **)((longlong)param_1 + 8);
        local_58.PrecachePSOParams.field0_0x0._s_0 = *(FPSOPrecacheParams_u_0 *)pFVar3;
        local_58.Material = this;
        local_64 = PrecacheMaterialPSOs(&local_58,param_3,__return_storage_ptr__);
        if (local_64 != 0xffffffff) {
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                    (param_4,&local_64);
          EnterCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                    (&this->PrecachedPSORequestIDs,&local_64);
          LeaveCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
        }
      }
      param_1 = (TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)param_1 + 0x10);
    }
  }
  if (cVar4 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// CollectPSOs @ 147f72aa0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FMaterial::CollectPSOs
          (FMaterial *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,Type param_1,
          TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2,FPSOPrecacheParams *param_3,EPSOPrecachePriority param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  int iVar2;
  FPSOPrecacheParams_u_0_s_0 *pFVar3;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar4;
  bool bVar5;
  undefined1 local_76 [2];
  uint local_74;
  FPSOPrecacheParams_u_0_s_0 *local_70;
  FMaterialPSOPrecacheParams local_68;
  
  local_70 = (FPSOPrecacheParams_u_0_s_0 *)param_3;
  bVar5 = CpuChannel->Enabled < 0;
  if (!bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3155,"FMaterial::CollectPSOs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
               ,0xc53);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3155);
  }
  pFVar3 = local_70;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 4;
  if ((this->GameThreadShaderMap).Reference == (FMaterialShaderMap *)0x0) {
    if (bVar5) {
      return __return_storage_ptr__;
    }
  }
  else {
    FVar4 = (param_2->AllocatorInstance).SecondaryData;
    piVar1 = &param_2->ArrayNum;
    iVar2 = *piVar1;
    if (FVar4 != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      param_2 = (TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar4;
    }
    FVar4 = (ForElementType<FPSOPrecacheVertexFactoryData>)
            ((longlong)iVar2 * 0x10 + (longlong)param_2);
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<FPSOPrecacheVertexFactoryData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_76);
      }
      if ((ForElementType<FPSOPrecacheVertexFactoryData>)param_2 == FVar4) break;
      if ((*(uint *)(*(longlong *)param_2 + 0x38) & 0x2000) != 0) {
        local_68.FeatureLevel = this->FeatureLevel;
        local_68.VertexFactoryData.VertexFactoryType = *(FVertexFactoryType **)param_2;
        local_68.VertexFactoryData.CustomDefaultVertexDeclaration =
             *(FRHIVertexDeclaration **)((longlong)param_2 + 8);
        local_68.PrecachePSOParams.field0_0x0._s_0 = *(FPSOPrecacheParams_u_0 *)pFVar3;
        local_68.Material = this;
        local_74 = PrecacheMaterialPSOs(&local_68,param_4,__return_storage_ptr__);
        if (local_74 != 0xffffffff) {
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                    (param_5,&local_74);
          EnterCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
          TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                    (&this->PrecachedPSORequestIDs,&local_74);
          LeaveCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
        }
      }
      param_2 = (TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)param_2 + 0x10);
    }
    if (bVar5) {
      return __return_storage_ptr__;
    }
  }
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// DeferredDelete @ 147f73a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMaterial::DeferredDelete(FMaterial *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FMaterial *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterial *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  if (param_1 != (FMaterial *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
    cVar2 = (**(code **)(param_1->_padding_ + 8))();
    if (cVar2 == '\0') {
      (**(code **)param_1->_padding_)(param_1,1);
    }
    else {
      AddRef(param_1);
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FMaterial::DeferredDelete'::`8'::<lambda_1>,1,0>::_vftable_
      ;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FMaterial::DeferredDelete'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_70 = param_1;
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FMaterial::DeferredDelete_::__l8::TSTR_DeferredDestroyMaterial2486>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_00 = FRenderCommandList::GetRenderThread(this);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`FMaterial::DeferredDelete'::__l8::TSTR_DeferredDestroyMaterial2486>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar4);
        uVar6 = (ulonglong)local_28;
        if ((2 < uVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar5 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar5 = local_30;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  return;
}

// DeleteMaterialsOnRenderThread @ 147f73c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMaterial::DeleteMaterialsOnRenderThread
          (TArray<TRefCountPtr<FMaterial>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FScriptContainerElement *pFStack_70;
  int local_68;
  int iStack_64;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  FScriptContainerElement *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_68 = param_1->ArrayNum;
  if (0 < local_68) {
    pFStack_70 = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iStack_64 = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMaterial::DeleteMaterialsOnRenderThread'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterial::DeleteMaterialsOnRenderThread'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterial::DeleteMaterialsOnRenderThread_::__l5::TSTR_DeferredDestroyMaterialArray2505>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(this);
      local_38._4_4_ = iStack_64;
      local_38._0_4_ = local_68;
      local_58[0] = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FMaterial::DeleteMaterialsOnRenderThread'::__l5::TSTR_DeferredDestroyMaterialArray2505>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_58[0] != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 2);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])();
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    DestructItems<TRefCountPtr<FMaterial>,int>((TRefCountPtr<FMaterial> *)0x0,0);
  }
  return;
}

// DiscardShaderMap @ 147f74340

void __thiscall FMaterial::DiscardShaderMap(FMaterial *this)

{
  FMaterialShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->RenderingThreadShaderMap).Reference != (FMaterialShaderMap *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderingThreadShaderMap == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x677,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FMaterialShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FMaterialShaderMap *)0x0;
    FMaterialShaderMap::Release(this_00);
    return;
  }
  return;
}

// DumpDebugInfo @ 147f74490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FMaterial::DumpDebugInfo(FMaterial *this,FOutputDevice *param_1)

{
  FShader *this_00;
  TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*> TVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_u_0 *pTVar6;
  FSHAHash *pFVar7;
  TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 *pTVar8;
  FName FVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  FMaterialShaderMap *this_01;
  ForAnyElementType FVar21;
  ForAnyElementType FVar22;
  ForAnyElementType FVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  longlong *plVar26;
  undefined1 auStack_258 [32];
  wchar_t *pwStack_238;
  FScriptContainerElement *pFStack_230;
  FScriptContainerElement *pFStack_228;
  FScriptContainerElement *pFStack_220;
  FScriptContainerElement *pFStack_218;
  wchar_t *pwStack_210;
  ForAnyElementType FStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_1f7;
  undefined1 auStack_1f6 [6];
  ulonglong uStack_1f0;
  FMaterialShaderMap *pFStack_1e8;
  FMaterialShaderMap *pFStack_1e0;
  Type TStack_1d8;
  FScriptContainerElement *pFStack_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  longlong *plStack_1c0;
  ulonglong uStack_1b8;
  FString FStack_1b0;
  FString FStack_1a0;
  FString FStack_190;
  FString FStack_180;
  FString FStack_170;
  FString FStack_160;
  FOutputDevice *pFStack_150;
  longlong *plStack_148;
  uint uStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  FScriptContainerElement *pFStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  FString FStack_c0;
  FString FStack_b0;
  undefined1 auStack_98 [32];
  uint *puStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  void *pvStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  this_01 = (this->GameThreadShaderMap).Reference;
  if (this_01 == (FMaterialShaderMap *)0x0) {
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  TStack_1d8 = GPrintLogTimes;
  uVar19 = 0;
  GPrintLogTimes = None;
  pFStack_1e0 = this_01;
  pFStack_150 = param_1;
  FOutputDevice::Log(param_1,
                     L"Frequency, Target, VFType, ShaderType, SourceHash, VFSourceHash, OutputHash, IsShaderPipeline"
                    );
  auStack_98._0_8_ = 0;
  auStack_98._8_8_ = 0;
  puStack_78 = (uint *)0x0;
  uStack_70 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  iStack_64 = 0;
  pvStack_58 = (void *)0x0;
  uStack_50 = 0;
  FMaterialShaderMap::GetShaderList
            (this_01,(TMap<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
                      *)auStack_98);
  uVar25 = uStack_70;
  uStack_13c = 1;
  uStack_128 = 0;
  uStack_12c = uStack_128;
  if (uStack_70 != 0) {
    puVar20 = (uint *)(auStack_98 + 0x10);
    if (puStack_78 != (uint *)0x0) {
      puVar20 = puStack_78;
    }
    uVar18 = *puVar20;
    uStack_128 = 0;
    uVar19 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)(int)uVar19;
      uStack_128 = uStack_128 + 0x20;
      uVar19 = uVar19 + 1;
      uStack_12c = uStack_70;
      if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_147f745f0;
      uVar18 = (puVar20 + 1)[lVar13];
    }
    uStack_13c = -uVar18 & uVar18;
    uVar17 = (ulonglong)uStack_13c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_118 = (int)lVar13;
    uStack_12c = (uStack_128 - 1) + iStack_118;
    if ((int)uStack_70 < (int)uStack_12c) {
      uStack_12c = uStack_70;
    }
  }
LAB_147f745f0:
  plStack_148 = (longlong *)auStack_98;
  pTStack_138 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10);
  iStack_120 = auStack_98._8_4_ - iStack_64;
  uVar18 = uStack_70 & 0xffffffe0;
  uStack_130 = 0xffffffff;
  TStack_f8.CurrentBitIndex = uStack_12c;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_13c,uVar19);
  iVar15 = (int)uStack_70 >> 5;
  TStack_f8._28_4_ = uStack_12c;
  TStack_f8.BaseBitIndex = uStack_128;
  uStack_d8 = CONCAT44(uStack_11c,iStack_120);
  bVar12 = (byte)uStack_70;
  uStack_140 = uVar19;
  uStack_124 = uStack_12c;
  plStack_100 = plStack_148;
  TStack_f8.Array = pTStack_138;
  if (((int)uStack_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar25 != uStack_70) {
    puVar20 = (uint *)(auStack_98 + 0x10);
    if (puStack_78 != (uint *)0x0) {
      puVar20 = puStack_78;
    }
    uVar19 = -1 << (bVar12 & 0x1f) & puVar20[iVar15];
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar25 = uStack_70;
      if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_147f74710;
      uVar19 = (puVar20 + 1)[lVar13];
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_114 = (int)lVar13;
    uVar25 = iStack_114 + -1 + uVar18;
    if ((int)uStack_70 < (int)uVar25) {
      uVar25 = uStack_70;
    }
  }
LAB_147f74710:
  while( true ) {
    plVar26 = plStack_100;
    if ((int)plStack_100[1] - *(int *)((longlong)plStack_100 + 0x34) != (int)uStack_d8) {
      uStack_1f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_1f8);
    }
    if (((TStack_f8.CurrentBitIndex == uVar25) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10))) &&
       (plVar26 == (longlong *)auStack_98)) {
      uStack_50 = 0;
      if (pvStack_58 != (void *)0x0) {
        FMemory::Free(pvStack_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_98);
      plStack_1c0 = (longlong *)0x0;
      uStack_1b8 = 0;
      (**(code **)(this_01->_padding_ + 0x10))(this_01,&plStack_1c0);
      uVar10 = (ulonglong)(int)(uint)uStack_1b8;
      plStack_108 = plStack_1c0 + uVar10 * 2;
      uStack_1c4 = (uint)uStack_1b8;
      uVar17 = uVar10;
      plVar26 = plStack_1c0;
      do {
        plVar4 = plStack_108;
        pFStack_1d0 = (FScriptContainerElement *)plVar26;
        if ((int)uVar10 != (int)uVar17) {
          uStack_1f7 = 0;
          `TCheckedPointerIterator<FShaderPipelineRef,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&uStack_1f7);
        }
        if (plVar26 == plVar4) {
          if (plStack_1c0 != (longlong *)0x0) {
            FMemory::Free(plStack_1c0);
          }
          GPrintLogTimes = TStack_1d8;
          return;
        }
        lVar13 = *plVar26;
        uVar17 = *(ulonglong *)(lVar13 + 8);
        FStack_208.Data = (FScriptContainerElement *)0x0;
        uStack_200 = 0;
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + lVar13 + 8, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_1f0 = uVar17;
          pFStack_1e8 = this_01;
          if (FStack_208.Data <= (FScriptContainerElement *)&uStack_1f0) {
            if ((FScriptContainerElement *)&uStack_1f0 <
                FStack_208.Data + (longlong)uStack_200._4_4_ * 0x10) {
              pFStack_220 = (FScriptContainerElement *)(longlong)(int)(uint)uStack_200;
              pFStack_218 = (FScriptContainerElement *)&DAT_00000010;
              pwStack_238 = (wchar_t *)&uStack_1f0;
              pFStack_230 = FStack_208.Data;
              pFStack_228 = (FScriptContainerElement *)(longlong)uStack_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)uStack_200 == uStack_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_208,(int *)((longlong)&uStack_200 + 4));
            uStack_200 = CONCAT44(uStack_200._4_4_,iVar15);
          }
          lVar14 = (longlong)(int)(uint)uStack_200;
          uStack_200 = CONCAT44(uStack_200._4_4_,(uint)uStack_200 + 1);
          *(ulonglong *)(FStack_208.Data + lVar14 * 0x10) = uStack_1f0;
          *(FMaterialShaderMap **)(FStack_208.Data + lVar14 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = *(ulonglong *)(lVar13 + 0x10);
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + 0x10 + lVar13, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_1f0 = uVar17;
          pFStack_1e8 = this_01;
          if (FStack_208.Data <= (FScriptContainerElement *)&uStack_1f0) {
            if ((FScriptContainerElement *)&uStack_1f0 <
                FStack_208.Data + (longlong)uStack_200._4_4_ * 0x10) {
              pFStack_220 = (FScriptContainerElement *)(longlong)(int)(uint)uStack_200;
              pFStack_218 = (FScriptContainerElement *)&DAT_00000010;
              pwStack_238 = (wchar_t *)&uStack_1f0;
              pFStack_230 = FStack_208.Data;
              pFStack_228 = (FScriptContainerElement *)(longlong)uStack_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)uStack_200 == uStack_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_208,(int *)((longlong)&uStack_200 + 4));
            uStack_200 = CONCAT44(uStack_200._4_4_,iVar15);
          }
          lVar14 = (longlong)(int)(uint)uStack_200;
          uStack_200 = CONCAT44(uStack_200._4_4_,(uint)uStack_200 + 1);
          *(ulonglong *)(FStack_208.Data + lVar14 * 0x10) = uStack_1f0;
          *(FMaterialShaderMap **)(FStack_208.Data + lVar14 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = *(ulonglong *)(lVar13 + 0x18);
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + 0x18 + lVar13, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_1f0 = uVar17;
          pFStack_1e8 = this_01;
          if (FStack_208.Data <= (FScriptContainerElement *)&uStack_1f0) {
            if ((FScriptContainerElement *)&uStack_1f0 <
                FStack_208.Data + (longlong)uStack_200._4_4_ * 0x10) {
              pFStack_220 = (FScriptContainerElement *)(longlong)(int)(uint)uStack_200;
              pFStack_218 = (FScriptContainerElement *)&DAT_00000010;
              pwStack_238 = (wchar_t *)&uStack_1f0;
              pFStack_230 = FStack_208.Data;
              pFStack_228 = (FScriptContainerElement *)(longlong)uStack_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)uStack_200 == uStack_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_208,(int *)((longlong)&uStack_200 + 4));
            uStack_200 = CONCAT44(uStack_200._4_4_,iVar15);
          }
          lVar14 = (longlong)(int)(uint)uStack_200;
          uStack_200 = CONCAT44(uStack_200._4_4_,(uint)uStack_200 + 1);
          *(ulonglong *)(FStack_208.Data + lVar14 * 0x10) = uStack_1f0;
          *(FMaterialShaderMap **)(FStack_208.Data + lVar14 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = *(ulonglong *)(lVar13 + 0x20);
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + 0x20 + lVar13, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_1f0 = uVar17;
          pFStack_1e8 = this_01;
          if (FStack_208.Data <= (FScriptContainerElement *)&uStack_1f0) {
            if ((FScriptContainerElement *)&uStack_1f0 <
                FStack_208.Data + (longlong)uStack_200._4_4_ * 0x10) {
              pFStack_220 = (FScriptContainerElement *)(longlong)(int)(uint)uStack_200;
              pFStack_218 = (FScriptContainerElement *)&DAT_00000010;
              pwStack_238 = (wchar_t *)&uStack_1f0;
              pFStack_230 = FStack_208.Data;
              pFStack_228 = (FScriptContainerElement *)(longlong)uStack_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)uStack_200 == uStack_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_208,(int *)((longlong)&uStack_200 + 4));
            uStack_200 = CONCAT44(uStack_200._4_4_,iVar15);
          }
          lVar14 = (longlong)(int)(uint)uStack_200;
          uStack_200 = CONCAT44(uStack_200._4_4_,(uint)uStack_200 + 1);
          *(ulonglong *)(FStack_208.Data + lVar14 * 0x10) = uStack_1f0;
          *(FMaterialShaderMap **)(FStack_208.Data + lVar14 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = *(ulonglong *)(lVar13 + 0x28);
        if (uVar17 != 0) {
          if ((((uVar17 & 1) != 0) &&
              (uVar17 = ((longlong)uVar17 >> 0x18) + 0x28 + lVar13, uVar17 == 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                 ,0x197,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_1f0 = uVar17;
          pFStack_1e8 = this_01;
          if (FStack_208.Data <= (FScriptContainerElement *)&uStack_1f0) {
            if ((FScriptContainerElement *)&uStack_1f0 <
                FStack_208.Data + (longlong)uStack_200._4_4_ * 0x10) {
              pFStack_220 = (FScriptContainerElement *)(longlong)(int)(uint)uStack_200;
              pFStack_218 = (FScriptContainerElement *)&DAT_00000010;
              pwStack_238 = (wchar_t *)&uStack_1f0;
              pFStack_230 = FStack_208.Data;
              pFStack_228 = (FScriptContainerElement *)(longlong)uStack_200._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          if ((uint)uStack_200 == uStack_200._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&FStack_208,(int *)((longlong)&uStack_200 + 4));
            uStack_200 = CONCAT44(uStack_200._4_4_,iVar15);
          }
          lVar13 = (longlong)(int)(uint)uStack_200;
          uStack_200 = CONCAT44(uStack_200._4_4_,(uint)uStack_200 + 1);
          *(ulonglong *)(FStack_208.Data + lVar13 * 0x10) = uStack_1f0;
          *(FMaterialShaderMap **)(FStack_208.Data + lVar13 * 0x10 + 8) = pFStack_1e8;
        }
        uVar17 = (ulonglong)(int)(uint)uStack_200;
        pFStack_110 = FStack_208.Data + uVar17 * 0x10;
        uStack_1c8 = (uint)uStack_200;
        FVar24.Data = FStack_208.Data;
        while( true ) {
          pFVar2 = pFStack_110;
          if ((uint)uStack_200 != (int)uVar17) {
            auStack_1f6[0] = 0;
            `TCheckedPointerIterator<TShaderRefBase<FShader,FShaderMapPointerTable>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(auStack_1f6);
          }
          if (FVar24.Data == pFVar2) break;
          uVar17 = *(ulonglong *)FVar24.Data;
          if ((this_01->_padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar11 = (ulonglong *)(uVar17 + 200);
          if ((*(byte *)puVar11 & 1) != 0) {
            lVar13 = this_01->_padding_;
            uVar25 = (uint)(*puVar11 >> 1);
            iVar15 = *(int *)(lVar13 + 0x60);
            uVar19 = 0;
            if ((int)uVar25 < iVar15) {
              uVar19 = ~uVar25 >> 0x1f;
            }
            if (uVar19 == 0) {
              pwStack_238 = (wchar_t *)(longlong)(int)uVar25;
              pFStack_230 = (FScriptContainerElement *)(longlong)iVar15;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            puVar11 = (ulonglong *)(*(longlong *)(lVar13 + 0x58) + (longlong)(int)uVar25 * 8);
          }
          uVar17 = *puVar11;
          pFVar7 = FShader::GetOutputHash(*(FShader **)FVar24.Data);
          FStack_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_160.Data.ArrayNum = 0;
          FStack_160.Data.ArrayMax = 0;
          BytesToHex(pFVar7->Hash,0x14,&FStack_160);
          FVar22.Data = (FScriptContainerElement *)L"";
          if (FStack_160.Data.ArrayNum != 0) {
            FVar22.Data = FStack_160.Data.AllocatorInstance.Data;
          }
          pFVar7 = FShader::GetVertexFactoryHash(*(FShader **)FVar24.Data);
          FStack_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_170.Data.ArrayNum = 0;
          FStack_170.Data.ArrayMax = 0;
          BytesToHex(pFVar7->Hash,0x14,&FStack_170);
          FVar21.Data = (FScriptContainerElement *)L"";
          if (FStack_170.Data.ArrayNum != 0) {
            FVar21.Data = FStack_170.Data.AllocatorInstance.Data;
          }
          pFVar7 = FShader::GetHash(*(FShader **)FVar24.Data);
          FStack_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_180.Data.ArrayNum = 0;
          FStack_180.Data.ArrayMax = 0;
          BytesToHex(pFVar7->Hash,0x14,&FStack_180);
          FVar23.Data = (FScriptContainerElement *)L"";
          if (FStack_180.Data.ArrayNum != 0) {
            FVar23.Data = FStack_180.Data.AllocatorInstance.Data;
          }
          uVar10 = *(ulonglong *)FVar24.Data;
          if ((pFStack_1e0->_padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar11 = (ulonglong *)(uVar10 + 0xc0);
          if ((*(byte *)puVar11 & 1) != 0) {
            lVar13 = pFStack_1e0->_padding_;
            uVar25 = (uint)(*puVar11 >> 1);
            iVar15 = *(int *)(lVar13 + 0x30);
            uVar19 = 0;
            if ((int)uVar25 < iVar15) {
              uVar19 = ~uVar25 >> 0x1f;
            }
            if (uVar19 == 0) {
              pwStack_238 = (wchar_t *)(longlong)(int)uVar25;
              pFStack_230 = (FScriptContainerElement *)(longlong)iVar15;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            puVar11 = (ulonglong *)(*(longlong *)(lVar13 + 0x28) + (longlong)(int)uVar25 * 8);
          }
          pFVar2 = *(FScriptContainerElement **)(*puVar11 + 0x18);
          if (uVar17 == 0) {
            pwVar16 = L"null";
          }
          else {
            pwVar16 = *(wchar_t **)(uVar17 + 8);
          }
          if ((FShaderMapContent *)pFStack_1e0->_padding_ != (FShaderMapContent *)0x0) {
            FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFStack_1e0->_padding_);
          }
          FVar9 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_c8);
          ::FName::ToString((FName *)FVar9,&FStack_b0);
          switch(*(byte *)(*(ulonglong *)FVar24.Data + 0xd0) & 0xf) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
            break;
          case 9:
            break;
          case 10:
            break;
          case 0xb:
          }
          pwStack_210 = L"true";
          pwStack_238 = pwVar16;
          pFStack_230 = pFVar2;
          pFStack_228 = FVar23.Data;
          pFStack_220 = FVar21.Data;
          pFStack_218 = FVar22.Data;
          FOutputDevice::LogfImpl(pFStack_150,L"%s, %s, %s, %s, %s, %s, %s, %s");
          if (FStack_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_b0.Data.AllocatorInstance.Data);
          }
          if (FStack_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_180.Data.AllocatorInstance.Data);
          }
          if (FStack_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_170.Data.AllocatorInstance.Data);
          }
          if (FStack_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_160.Data.AllocatorInstance.Data);
          }
          FVar24.Data = FVar24.Data + 0x10;
          uVar17 = (ulonglong)uStack_1c8;
          this_01 = pFStack_1e0;
        }
        if (FStack_208.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_208.Data);
        }
        uVar10 = uStack_1b8 & 0xffffffff;
        plVar26 = (longlong *)((longlong)pFStack_1d0 + 0x10);
        uVar17 = (ulonglong)uStack_1c4;
      } while( true );
    }
    this_00 = *(FShader **)(*plVar26 + 0x38 + (longlong)TStack_f8.CurrentBitIndex * 0x50);
    if ((this_01->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = &(this_00->VFType).field0_0x0;
    if ((*(byte *)&((TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*> *)pTVar6)->field0_0x0
        & 1) != 0) {
      lVar13 = this_01->_padding_;
      uVar18 = (uint)((((TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*> *)pTVar6)->
                      field0_0x0).PackedIndex >> 1);
      iVar15 = *(int *)(lVar13 + 0x60);
      uVar19 = 0;
      if ((int)uVar18 < iVar15) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if (uVar19 == 0) {
        pwStack_238 = (wchar_t *)(longlong)(int)uVar18;
        pFStack_230 = (FScriptContainerElement *)(longlong)iVar15;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar6 = (TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_u_0 *)
               (*(longlong *)(lVar13 + 0x58) + (longlong)(int)uVar18 * 8);
    }
    TVar1.field0_0x0 = (TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_u_0)pTVar6->Ptr;
    pFVar7 = FShader::GetOutputHash(this_00);
    FStack_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_190.Data.ArrayNum = 0;
    FStack_190.Data.ArrayMax = 0;
    BytesToHex(pFVar7->Hash,0x14,&FStack_190);
    FVar24.Data = (FScriptContainerElement *)L"";
    if (FStack_190.Data.ArrayNum != 0) {
      FVar24.Data = FStack_190.Data.AllocatorInstance.Data;
    }
    pFVar7 = FShader::GetVertexFactoryHash(this_00);
    FStack_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_1a0.Data.ArrayNum = 0;
    FStack_1a0.Data.ArrayMax = 0;
    BytesToHex(pFVar7->Hash,0x14,&FStack_1a0);
    FVar22.Data = (FScriptContainerElement *)L"";
    if (FStack_1a0.Data.ArrayNum != 0) {
      FVar22.Data = FStack_1a0.Data.AllocatorInstance.Data;
    }
    pFVar7 = FShader::GetHash(this_00);
    FStack_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_1b0.Data.ArrayNum = 0;
    FStack_1b0.Data.ArrayMax = 0;
    BytesToHex(pFVar7->Hash,0x14,&FStack_1b0);
    pFStack_1d0 = (FScriptContainerElement *)L"";
    if (FStack_1b0.Data.ArrayNum != 0) {
      pFStack_1d0 = FStack_1b0.Data.AllocatorInstance.Data;
    }
    if ((pFStack_1e0->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L""), bVar5)) break;
    pTVar8 = &(this_00->Type).field0_0x0;
    if ((*(byte *)&((TIndexedPtrBase<FShaderType,FShaderType_*> *)pTVar8)->field0_0x0 & 1) != 0) {
      lVar13 = pFStack_1e0->_padding_;
      uVar18 = (uint)((((TIndexedPtrBase<FShaderType,FShaderType_*> *)pTVar8)->field0_0x0).
                      PackedIndex >> 1);
      iVar15 = *(int *)(lVar13 + 0x30);
      uVar19 = 0;
      if ((int)uVar18 < iVar15) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if (uVar19 == 0) {
        pwStack_238 = (wchar_t *)(longlong)(int)uVar18;
        pFStack_230 = (FScriptContainerElement *)(longlong)iVar15;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar8 = (TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 *)
               (*(longlong *)(lVar13 + 0x28) + (longlong)(int)uVar18 * 8);
    }
    pFVar2 = *(FScriptContainerElement **)((longlong)pTVar8->Ptr + 0x18);
    if (TVar1.field0_0x0 == (FVertexFactoryType *)0x0) {
      pwVar16 = L"null";
    }
    else {
      pwVar16 = *(wchar_t **)((longlong)TVar1.field0_0x0 + 8);
    }
    if ((FShaderMapContent *)pFStack_1e0->_padding_ != (FShaderMapContent *)0x0) {
      FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFStack_1e0->_padding_);
    }
    FVar9 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)auStack_d0);
    ::FName::ToString((FName *)FVar9,&FStack_c0);
    switch(*(byte *)&(this_00->Target).field0_0x0 & 0xf) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
    }
    pwStack_210 = L"false";
    pFStack_228 = pFStack_1d0;
    pwStack_238 = pwVar16;
    pFStack_230 = pFVar2;
    pFStack_220 = FVar22.Data;
    pFStack_218 = FVar24.Data;
    FOutputDevice::LogfImpl(pFStack_150,L"%s, %s, %s, %s, %s, %s, %s, %s");
    if (FStack_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c0.Data.AllocatorInstance.Data);
    }
    if (FStack_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b0.Data.AllocatorInstance.Data);
    }
    if (FStack_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1a0.Data.AllocatorInstance.Data);
    }
    if (FStack_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_190.Data.AllocatorInstance.Data);
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    this_01 = pFStack_1e0;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// GetCachedExpressionData @ 147f79590

FMaterialCachedExpressionData * __thiscall FMaterial::GetCachedExpressionData(FMaterial *this)

{
  longlong *plVar1;
  FMaterialCachedExpressionData *pFVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4e0))();
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
    pFVar2 = (FMaterialCachedExpressionData *)(**(code **)(*plVar1 + 0x2f0))(plVar1,&local_18);
    return pFVar2;
  }
  return &FMaterialCachedExpressionData::EmptyData;
}

// GetCustomDepthStencilUsageMask_GameThread @ 147f79610

uchar __thiscall FMaterial::GetCustomDepthStencilUsageMask_GameThread(FMaterial *this)

{
  uint uVar1;
  FMaterialShaderMap *pFVar2;
  
  pFVar2 = (this->GameThreadShaderMap).Reference;
  if (pFVar2 != (FMaterialShaderMap *)0x0) {
    uVar1 = *(uint *)(pFVar2->_padding_ + 600);
    return (byte)(uVar1 >> 0x18) & 2 | (byte)(uVar1 >> 0xd) & 1;
  }
  return '\0';
}

// GetDependentShaderAndVFTypes @ 147f797b0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FMaterial::GetDependentShaderAndVFTypes
          (FMaterial *this,FPlatformTypeLayoutParameters *param_1,
          TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> *param_4)

{
  FShaderPipelineType *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  EShaderPermutationFlags EVar6;
  int iVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf [3];
  uint local_bc;
  FMaterialShaderMapLayout *local_b8;
  uint local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  undefined8 *local_98;
  FScriptContainerElement *local_90;
  FMaterialShaderParameters local_88;
  
  FMaterialShaderParametersBase::FMaterialShaderParametersBase
            ((FMaterialShaderParametersBase *)&local_88,this);
  local_88.MaterialShaderTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.MaterialShaderTags.ArrayNum = 0;
  local_88.MaterialShaderTags.ArrayMax = 0;
  EVar6 = GetShaderPermutationFlags(param_1);
  local_b8 = AcquireMaterialShaderMapLayout(GMaxRHIShaderPlatform,EVar6,&local_88);
  iVar7 = (int)local_b8->_padding_;
  puVar8 = (undefined8 *)local_b8->_padding_;
  puVar13 = puVar8 + (longlong)iVar7 * 2;
  while( true ) {
    if ((int)local_b8->_padding_ != iVar7) {
      local_c7 = 0;
      `TCheckedPointerIterator<FShaderLayoutEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c7);
    }
    if (puVar8 == puVar13) break;
    cVar4 = (**(code **)(this->_padding_ + 0x18))(this,*puVar8);
    if (cVar4 != '\0') {
      AddSortedShader(param_2,(FShaderType *)*puVar8);
    }
    puVar8 = puVar8 + 2;
  }
  local_bc = (uint)local_b8->_padding_;
  uVar11 = (ulonglong)(int)local_bc;
  puVar13 = (undefined8 *)local_b8->_padding_;
  puVar8 = puVar13 + uVar11;
  do {
    if ((int)local_b8->_padding_ != (int)uVar11) {
      local_c6 = 0;
      `TCheckedPointerIterator<FShaderPipelineType_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c6);
    }
    if (puVar13 == puVar8) {
      local_b0 = (local_b8->MeshShaderMaps).ArrayNum;
      uVar11 = (ulonglong)(int)local_b0;
      pFVar10 = (local_b8->MeshShaderMaps).AllocatorInstance.Data;
      pFVar12 = pFVar10 + 0x28;
      local_90 = pFVar10 + uVar11 * 0x30;
      do {
        pFVar9 = local_90;
        local_a8 = pFVar10;
        local_a0 = pFVar12;
        if ((local_b8->MeshShaderMaps).ArrayNum != (int)uVar11) {
          local_c3 = 0;
          `TCheckedPointerIterator<FMeshMaterialShaderMapLayout_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_c3);
        }
        if (pFVar10 == pFVar9) {
          if (local_88.MaterialShaderTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_88.MaterialShaderTags.AllocatorInstance.Data);
          }
          return;
        }
        iVar7 = *(int *)(pFVar12 + -0x18);
        bVar5 = false;
        puVar8 = *(undefined8 **)(pFVar12 + -0x20);
        puVar13 = puVar8 + (longlong)iVar7 * 2;
        while( true ) {
          if (*(int *)(pFVar12 + -0x18) != iVar7) {
            local_c2 = 0;
            `TCheckedPointerIterator<FShaderLayoutEntry_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_c2);
          }
          if (puVar8 == puVar13) break;
          cVar4 = (**(code **)(this->_padding_ + 0x18))(this,*puVar8,*(undefined8 *)pFVar12);
          if (cVar4 != '\0') {
            bVar5 = true;
            AddSortedShader(param_2,(FShaderType *)*puVar8);
          }
          puVar8 = puVar8 + 2;
        }
        local_bc = *(uint *)(pFVar12 + -8);
        uVar11 = (ulonglong)(int)local_bc;
        puVar8 = *(undefined8 **)(pFVar12 + -0x10);
        local_98 = puVar8 + uVar11;
LAB_147f799f7:
        while( true ) {
          puVar13 = local_98;
          if (*(int *)(pFVar12 + -8) != (int)uVar11) {
            local_c1 = 0;
            `TCheckedPointerIterator<FShaderPipelineType_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_c1);
          }
          if (puVar8 == puVar13) break;
          pFVar1 = (FShaderPipelineType *)*puVar8;
          uVar2 = *(undefined8 *)pFVar12;
          pFVar9 = (pFVar1->Stages).AllocatorInstance.Data;
          iVar7 = (pFVar1->Stages).ArrayNum;
          pFVar10 = pFVar9 + (longlong)iVar7 * 8;
          while( true ) {
            if ((pFVar1->Stages).ArrayNum != iVar7) {
              local_c0 = 0;
              `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_c0);
            }
            if (pFVar9 == pFVar10) break;
            cVar4 = (**(code **)(this->_padding_ + 0x18))(this,*(undefined8 *)pFVar9,uVar2);
            if (cVar4 == '\0') goto LAB_147f79abc;
            pFVar9 = pFVar9 + 8;
          }
          bVar5 = true;
          AddSortedShaderPipeline(param_3,pFVar1);
          pFVar10 = (pFVar1->Stages).AllocatorInstance.Data;
          iVar7 = (pFVar1->Stages).ArrayNum;
          pFVar12 = pFVar10 + (longlong)iVar7 * 8;
          while( true ) {
            if ((pFVar1->Stages).ArrayNum != iVar7) {
              local_bf[0] = 0;
              `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_bf);
            }
            if (pFVar10 == pFVar12) break;
            AddSortedShader(param_2,*(FShaderType **)pFVar10);
            pFVar10 = pFVar10 + 8;
          }
          puVar8 = puVar8 + 1;
          uVar11 = (ulonglong)local_bc;
          pFVar12 = local_a0;
        }
        if (bVar5) {
          pFVar10 = (param_4->AllocatorInstance).Data;
          if ((pFVar10 <= pFVar12) && (pFVar12 < pFVar10 + (longlong)param_4->ArrayMax * 8)) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar7 = param_4->ArrayNum;
          if (iVar7 == param_4->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar7 + 1;
          *(undefined8 *)((param_4->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               *(undefined8 *)pFVar12;
        }
        pFVar10 = local_a8 + 0x30;
        uVar11 = (ulonglong)local_b0;
        pFVar12 = pFVar12 + 0x30;
      } while( true );
    }
    pFVar1 = (FShaderPipelineType *)*puVar13;
    pFVar10 = (pFVar1->Stages).AllocatorInstance.Data;
    iVar7 = (pFVar1->Stages).ArrayNum;
    pFVar12 = pFVar10 + (longlong)iVar7 * 8;
    while( true ) {
      if ((pFVar1->Stages).ArrayNum != iVar7) {
        local_c5 = 0;
        `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c5);
      }
      if (pFVar10 == pFVar12) break;
      cVar4 = (**(code **)(this->_padding_ + 0x18))(this,*(undefined8 *)pFVar10,0);
      if (cVar4 == '\0') goto LAB_147f7992c;
      pFVar10 = pFVar10 + 8;
    }
    AddSortedShaderPipeline(param_3,pFVar1);
    pFVar10 = (pFVar1->Stages).AllocatorInstance.Data;
    iVar7 = (pFVar1->Stages).ArrayNum;
    pFVar12 = pFVar10 + (longlong)iVar7 * 8;
    while( true ) {
      if ((pFVar1->Stages).ArrayNum != iVar7) {
        local_c4 = 0;
        `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c4);
      }
      if (pFVar10 == pFVar12) break;
      AddSortedShader(param_2,*(FShaderType **)pFVar10);
      pFVar10 = pFVar10 + 8;
    }
    uVar11 = (ulonglong)local_bc;
LAB_147f7992c:
    puVar13 = puVar13 + 1;
  } while( true );
LAB_147f79abc:
  puVar8 = puVar8 + 1;
  uVar11 = (ulonglong)local_bc;
  goto LAB_147f799f7;
}

// GetDependentShaderAndVFTypes @ 147f79bc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterial::GetDependentShaderAndVFTypes
          (FMaterial *this,EShaderPlatform param_1,FPlatformTypeLayoutParameters *param_2,
          TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> *param_5)

{
  GetDependentShaderAndVFTypes(this,param_2,param_3,param_4,param_5);
  return;
}

// GetMaterialExpressionSource @ 147f79ed0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMaterial::GetMaterialExpressionSource(FMaterial *this,FString *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  return false;
}

// GetMaterialPSOPrecacheRequestIDs @ 147f79ff0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
FMaterial::GetMaterialPSOPrecacheRequestIDs
          (FMaterial *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
  if (__return_storage_ptr__ != &this->PrecachedPSORequestIDs) {
    iVar2 = (this->PrecachedPSORequestIDs).ArrayNum;
    _Src = (this->PrecachedPSORequestIDs).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,*piVar1,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
  return __return_storage_ptr__;
}

// GetOutputPrecision @ 147f7a910

void __cdecl
FMaterial::GetOutputPrecision(EMaterialFloatPrecisionMode param_1,bool *param_2,bool *param_3)

{
  EMaterialFloatPrecisionMode EVar1;
  IConsoleManager *pIVar2;
  EMaterialFloatPrecisionMode EVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    CVarFloatPrecisionMode =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Mobile.FloatPrecisionMode",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (param_1 == MFPM_Default) {
    if (CVarFloatPrecisionMode == (IConsoleVariable *)0x0) {
      return;
    }
    EVar1 = (**(code **)(*(longlong *)CVarFloatPrecisionMode + 200))();
    EVar3 = MFPM_Full;
    if ((int)EVar1 < 2) {
      EVar3 = EVar1;
    }
    param_1 = MFPM_Default;
    if (0 < (int)EVar3) {
      param_1 = EVar3;
    }
  }
  *param_3 = param_1 == MFPM_Full_MaterialExpressionOnly;
  *param_2 = param_1 == MFPM_Full;
  return;
}

// GetOwnerFName @ 147f7aa00

FName __thiscall FMaterial::GetOwnerFName(FMaterial *this)

{
  UObjectBaseUtility *this_00;
  UPackage *pUVar1;
  FName in_RDX;
  
  this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x4e0))();
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = UObjectBaseUtility::GetOutermost(this_00);
    *(longlong *)in_RDX = pUVar1->_padding_;
    return in_RDX;
  }
  *(longlong *)in_RDX = 0;
  return in_RDX;
}

// GetPreshaderStats @ 147f7afe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMaterial::GetPreshaderStats(FMaterial *this,uint *param_1,uint *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  return;
}

// GetRefractionMode @ 147f7b1d0

ERefractionMode __thiscall FMaterial::GetRefractionMode(FMaterial *this)

{
  return RM_None;
}

// GetRenderingThreadShaderMap @ 147f7b200

FMaterialShaderMap * __thiscall FMaterial::GetRenderingThreadShaderMap(FMaterial *this)

{
  code *pcVar1;
  bool bVar2;
  FMaterialShaderMap *pFVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x565,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMaterialShaderMap *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (this->RenderingThreadShaderMap).Reference;
}

// GetRuntimeVirtualTextureOutputAttibuteMask_GameThread @ 147f7b970

uchar __thiscall FMaterial::GetRuntimeVirtualTextureOutputAttibuteMask_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(uchar *)(pFVar1->_padding_ + 0x265);
  }
  return '\0';
}

// GetRuntimeVirtualTextureOutputAttibuteMask_RenderThread @ 147f7b990

uchar __thiscall FMaterial::GetRuntimeVirtualTextureOutputAttibuteMask_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x494,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(uchar *)(pFVar1->_padding_ + 0x265);
  }
  return '\0';
}

// GetShader @ 147f7ba70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

TShaderRefBase<FShader,FShaderMapPointerTable> * __thiscall
FMaterial::GetShader
          (FMaterial *this,TShaderRefBase<FShader,FShaderMapPointerTable> *__return_storage_ptr__,
          FMeshMaterialShaderType *param_1,FVertexFactoryType *param_2,int param_3,bool param_4)

{
  FShader *pFVar1;
  bool bVar2;
  FMeshMaterialShaderMap *local_res8 [2];
  FMeshMaterialShaderType *local_res18;
  FVertexFactoryType *local_res20;
  FMaterial *local_48;
  FVertexFactoryType **local_40;
  FMeshMaterialShaderType **local_38;
  int *local_30;
  FMeshMaterialShaderMap **local_28;
  
  local_res18 = param_1;
  local_res20 = param_2;
  local_res8[0] =
       FMaterialShaderMapContent::GetMeshShaderMap
                 ((FMaterialShaderMapContent *)
                  ((this->RenderingThreadShaderMap).Reference)->_padding_,&param_2->HashedName);
  if ((local_res8[0] != (FMeshMaterialShaderMap *)0x0) &&
     (pFVar1 = FShaderMapContent::GetShader
                         ((FShaderMapContent *)local_res8[0],(FHashedName *)&local_res18->field_0x28
                          ,param_3), pFVar1 != (FShader *)0x0)) {
    __return_storage_ptr__->ShaderContent = pFVar1;
    __return_storage_ptr__->ShaderMap = (FShaderMapBase *)(this->RenderingThreadShaderMap).Reference
    ;
    return __return_storage_ptr__;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3699,"FMaterial::GetShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
               ,0xe73);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3699);
  }
  if (param_4 != false) {
    local_40 = &local_res20;
    local_38 = &local_res18;
    local_30 = &param_3;
    local_28 = local_res8;
    local_48 = this;
    `FMaterial::GetShader'::__l8::<lambda_1>::operator()(&local_48);
  }
  __return_storage_ptr__->ShaderContent = (FShader *)0x0;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)0x0;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetShaderMapToUse @ 147f7bd30

FMaterialShaderMap * __thiscall FMaterial::GetShaderMapToUse(FMaterial *this)

{
  code *pcVar1;
  bool bVar2;
  FMaterialShaderMap *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInParallelGameThread();
    if (!bVar2) {
      bVar2 = IsInParallelRenderingThread();
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                           ,0x565,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FMaterialShaderMap *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (this->RenderingThreadShaderMap).Reference;
    }
  }
  pFVar3 = (this->GameThreadShaderMap).Reference;
  if ((pFVar3 != (FMaterialShaderMap *)0x0) && (pFVar3->NumRefs < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ShaderMapToUse || ShaderMapToUse->GetNumRefs() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x3c4,L"NumRefs %i, GameThreadShaderMap 0x%08llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMaterialShaderMap *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetShaderPipeline @ 147f7bdf0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

FShaderPipelineRef * __thiscall
FMaterial::GetShaderPipeline
          (FMaterial *this,FShaderPipelineRef *__return_storage_ptr__,FShaderPipelineType *param_1,
          FVertexFactoryType *param_2,bool param_3)

{
  FShaderPipeline *pFVar1;
  FMeshMaterialShaderMap *local_res8;
  FShaderPipelineType *local_res18;
  FVertexFactoryType *local_res20;
  FMaterial *local_28;
  FShaderPipelineType **local_20;
  FMeshMaterialShaderMap **local_18;
  FVertexFactoryType **local_10;
  
  local_res18 = param_1;
  local_res20 = param_2;
  local_res8 = FMaterialShaderMapContent::GetMeshShaderMap
                         ((FMaterialShaderMapContent *)
                          ((this->RenderingThreadShaderMap).Reference)->_padding_,
                          &param_2->HashedName);
  if (local_res8 != (FMeshMaterialShaderMap *)0x0) {
    pFVar1 = FShaderMapContent::GetShaderPipeline((FShaderMapContent *)local_res8,local_res18);
    if (pFVar1 != (FShaderPipeline *)0x0) {
      __return_storage_ptr__->ShaderPipeline = pFVar1;
      __return_storage_ptr__->ShaderMap =
           (FShaderMapBase *)(this->RenderingThreadShaderMap).Reference;
      return __return_storage_ptr__;
    }
  }
  if (param_3) {
    local_20 = &local_res18;
    local_18 = &local_res8;
    local_10 = &local_res20;
    local_28 = this;
    `FMaterial::GetShaderPipeline'::__l8::<lambda_1>::operator()(&local_28);
  }
  __return_storage_ptr__->ShaderPipeline = (FShaderPipeline *)0x0;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)0x0;
  return __return_storage_ptr__;
}

// GetUniformExpressions @ 147f7cdc0

FUniformExpressionSet * __thiscall FMaterial::GetUniformExpressions(FMaterial *this)

{
  code *pcVar1;
  bool bVar2;
  FUniformExpressionSet *pFVar3;
  FMaterialShaderMap *pFVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInParallelGameThread();
    if (!bVar2) {
      bVar2 = IsInParallelRenderingThread();
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                           ,0x565,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FUniformExpressionSet *)(*pcVar1)();
          return pFVar3;
        }
      }
      pFVar4 = (this->RenderingThreadShaderMap).Reference;
      if (pFVar4 == (FMaterialShaderMap *)0x0) goto LAB_147f7ce6e;
      goto LAB_147f7ce13;
    }
  }
  pFVar4 = (this->GameThreadShaderMap).Reference;
  if (pFVar4 == (FMaterialShaderMap *)0x0) {
LAB_147f7ce6e:
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FUniformExpressionSet::FUniformExpressionSet(&EmptyExpressions);
        atexit(`FMaterial::GetUniformExpressions'::__l2::
               _dynamic_atexit_destructor_for__EmptyExpressions__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &EmptyExpressions;
  }
  if (pFVar4->NumRefs < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ShaderMapToUse || ShaderMapToUse->GetNumRefs() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x3c4,L"NumRefs %i, GameThreadShaderMap 0x%08llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUniformExpressionSet *)(*pcVar1)();
      return pFVar3;
    }
  }
LAB_147f7ce13:
  return (FUniformExpressionSet *)(pFVar4->_padding_ + 0x70);
}

// GetUniformNumericParameterExpressions @ 147f7cee0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

TArrayView<FMaterialNumericParameterInfo_const_,int> * __thiscall
FMaterial::GetUniformNumericParameterExpressions
          (FMaterial *this,
          TArrayView<FMaterialNumericParameterInfo_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUniformExpressionSet *pFVar4;
  ForAnyElementType FVar5;
  TArrayView<FMaterialNumericParameterInfo_const_,int> *pTVar6;
  
  pFVar4 = GetUniformExpressions(this);
  FVar5 = (pFVar4->UniformNumericParameters).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)
             &(((TArray<FMaterialNumericParameterInfo,TMemoryImageAllocator<0>_> *)
               (pFVar4->UniformTextureParameters + -1))->AllocatorInstance).field_0x0 +
            ((longlong)FVar5 >> 0x18));
  }
  iVar1 = (pFVar4->UniformNumericParameters).ArrayNum;
  __return_storage_ptr__->DataPtr = (FMaterialNumericParameterInfo *)FVar5;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FMaterialNumericParameterInfo_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetUniformTextureCollectionExpressions @ 147f7cf50

TArrayView<FMaterialTextureCollectionParameterInfo_const_,int> * __thiscall
FMaterial::GetUniformTextureCollectionExpressions
          (FMaterial *this,
          TArrayView<FMaterialTextureCollectionParameterInfo_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUniformExpressionSet *pFVar4;
  ForAnyElementType FVar5;
  TArrayView<FMaterialTextureCollectionParameterInfo_const_,int> *pTVar6;
  
  pFVar4 = GetUniformExpressions(this);
  FVar5 = (pFVar4->UniformTextureCollectionParameters).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(pFVar4->UniformTextureCollectionParameters).AllocatorInstance.field_0x0 +
            ((longlong)FVar5 >> 0x18));
  }
  iVar1 = (pFVar4->UniformTextureCollectionParameters).ArrayNum;
  __return_storage_ptr__->DataPtr = (FMaterialTextureCollectionParameterInfo *)FVar5;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FMaterialTextureCollectionParameterInfo_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetUniformTextureExpressions @ 147f7cfc0

TArrayView<FMaterialTextureParameterInfo_const_,int> * __thiscall
FMaterial::GetUniformTextureExpressions
          (FMaterial *this,
          TArrayView<FMaterialTextureParameterInfo_const_,int> *__return_storage_ptr__,
          EMaterialTextureParameterType param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUniformExpressionSet *pFVar4;
  ForAnyElementType FVar5;
  TArrayView<FMaterialTextureParameterInfo_const_,int> *pTVar6;
  TArray<FMaterialTextureParameterInfo,TMemoryImageAllocator<0>_> *pTVar7;
  
  pFVar4 = GetUniformExpressions(this);
  pTVar7 = pFVar4->UniformTextureParameters + param_1;
  FVar5 = pTVar7->AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(pTVar7->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  iVar1 = pTVar7->ArrayNum;
  __return_storage_ptr__->DataPtr = (FMaterialTextureParameterInfo *)FVar5;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<FMaterialTextureParameterInfo_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// HasShaders @ 147f7d690

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::HasShaders(FMaterial *this,FMaterialShaderTypes *param_1,FVertexFactoryType *param_2)

{
  bool bVar1;
  FMaterialShaders local_78;
  
  local_78.ShaderMap = (FShaderMapBase *)0x0;
  local_78.Pipeline = (FShaderPipeline *)0x0;
  local_78.Shaders[0] = (FShader *)0x0;
  local_78.Shaders[1] = (FShader *)0x0;
  local_78.Shaders[2] = (FShader *)0x0;
  local_78.Shaders[3] = (FShader *)0x0;
  local_78.Shaders[4] = (FShader *)0x0;
  local_78.Shaders[5] = (FShader *)0x0;
  local_78.Shaders[6] = (FShader *)0x0;
  local_78.Shaders[7] = (FShader *)0x0;
  local_78.Shaders[8] = (FShader *)0x0;
  local_78.Shaders[9] = (FShader *)0x0;
  local_78.Shaders[10] = (FShader *)0x0;
  local_78.Shaders[0xb] = (FShader *)0x0;
  bVar1 = TryGetShaders(this,param_1,param_2,&local_78);
  return bVar1;
}

// HasValidGameThreadShaderMap @ 147f7d710

bool __thiscall FMaterial::HasValidGameThreadShaderMap(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return pFVar1->bCompilationFinalized;
  }
  return false;
}

// IsRequiredComplete @ 147f80910

bool __thiscall FMaterial::IsRequiredComplete(FMaterial *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x418))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x108))(this);
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// LegacySerialize @ 147f81300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMaterial::LegacySerialize(FMaterial *this,FArchive *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStackY_108 [32];
  char local_d8;
  uint local_d4;
  uint local_d0;
  FName local_cc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  FGuid local_b0;
  TArray<FLegacyTextureLookup,TSizedDefaultAllocator<32>_> local_a0;
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> local_90;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (*(int *)&param_1->field_0x40 < 0x104) {
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_c0);
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    TSetPrivateFriend::
    Serialize<TTuple<UMaterialExpression_*,int>,TDefaultMapHashableKeyFuncs<UMaterialExpression_*,int,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<UMaterialExpression_*,int>,TDefaultMapHashableKeyFuncs<UMaterialExpression_*,int,0>,FDefaultSetAllocator>
                        *)local_78);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_cc);
      }
    }
    else {
      local_cc.ComparisonIndex.Value = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    this->FeatureLevel = SM4_REMOVED;
    this->QualityLevel = High;
    local_b0.A = 0;
    local_b0.B = 0;
    local_b0.C = 0;
    local_b0.D = 0;
    if (1 < (byte)LogMaterial._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    }
    ::operator<<(param_1,&local_b0);
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<UTexture_*,TSizedDefaultAllocator<32>_>(param_1,&local_90);
    puVar2 = *(ulonglong **)&param_1->field_0x8;
    if (puVar2[1] < *puVar2 + 4) {
      local_d4 = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_d4 = (uint)(local_d8 != '\0');
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d4);
      if (1 < local_d4) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
    puVar2 = *(ulonglong **)&param_1->field_0x8;
    if (puVar2[1] < *puVar2 + 4) {
      local_d4 = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_d4 = (uint)(local_d8 != '\0');
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d4);
      if (1 < local_d4) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FLegacyTextureLookup,TSizedDefaultAllocator<32>_>
              (param_1,&local_a0);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_d0 = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_d0);
      }
    }
    else {
      local_d0 = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar3 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    local_50 = 0;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  local_cc.ComparisonIndex.Value = 0;
  local_cc.Number = 0;
  SerializeInlineShaderMap(this,param_1,&local_cc);
  return;
}

// MaterialGetSubstrateClosureCount_GameThread @ 147f82280

uchar __thiscall FMaterial::MaterialGetSubstrateClosureCount_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(uchar *)(pFVar1->_padding_ + 0x25f);
  }
  return '\0';
}

// MaterialGetSubstrateClosureCount_RenderThread @ 147f822a0

uchar __thiscall FMaterial::MaterialGetSubstrateClosureCount_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x4c0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(uchar *)(pFVar1->_padding_ + 0x25f);
  }
  return '\0';
}

// MaterialGetSubstrateMaterialBsdfFeatures_GameThread @ 147f82300

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

ESubstrateBsdfFeature __thiscall
FMaterial::MaterialGetSubstrateMaterialBsdfFeatures_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(ESubstrateBsdfFeature *)(pFVar1->_padding_ + 0x262);
  }
  return None;
}

// MaterialGetSubstrateMaterialBsdfFeatures_RenderThread @ 147f82320

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

ESubstrateBsdfFeature __thiscall
FMaterial::MaterialGetSubstrateMaterialBsdfFeatures_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  ESubstrateBsdfFeature EVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x4e1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(ESubstrateBsdfFeature *)(pFVar1->_padding_ + 0x262);
  }
  return None;
}

// MaterialGetSubstrateMaterialType_GameThread @ 147f82380

uchar __thiscall FMaterial::MaterialGetSubstrateMaterialType_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(uchar *)(pFVar1->_padding_ + 0x25e);
  }
  return '\0';
}

// MaterialGetSubstrateMaterialType_RenderThread @ 147f823a0

uchar __thiscall FMaterial::MaterialGetSubstrateMaterialType_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x4b5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(uchar *)(pFVar1->_padding_ + 0x25e);
  }
  return '\0';
}

// MaterialGetSubstrateTileType_GameThread @ 147f82400

ESubstrateTileType __thiscall FMaterial::MaterialGetSubstrateTileType_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (ESubstrateTileType)*(byte *)(pFVar1->_padding_ + 0x25e);
  }
  return ECount;
}

// MaterialGetSubstrateTileType_RenderThread @ 147f82430

ESubstrateTileType __thiscall FMaterial::MaterialGetSubstrateTileType_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  ESubstrateTileType EVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x4d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (ESubstrateTileType)*(byte *)(pFVar1->_padding_ + 0x25e);
  }
  return ECount;
}

// MaterialGetSubstrateUintPerPixel_GameThread @ 147f824a0

uchar __thiscall FMaterial::MaterialGetSubstrateUintPerPixel_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(uchar *)(pFVar1->_padding_ + 0x260);
  }
  return '\0';
}

// MaterialGetSubstrateUintPerPixel_RenderThread @ 147f824c0

uchar __thiscall FMaterial::MaterialGetSubstrateUintPerPixel_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x4cb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return *(uchar *)(pFVar1->_padding_ + 0x260);
  }
  return '\0';
}

// MaterialIsLightFunctionAtlasCompatible_GameThread @ 147f82520

bool __thiscall FMaterial::MaterialIsLightFunctionAtlasCompatible_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x267) >> 6 & 1);
  }
  return false;
}

// MaterialIsLightFunctionAtlasCompatible_RenderThread @ 147f82550

bool __thiscall FMaterial::MaterialIsLightFunctionAtlasCompatible_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x4aa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x267) >> 6 & 1);
  }
  return false;
}

// MaterialMayModifyMeshPosition @ 147f825c0

bool __thiscall FMaterial::MaterialMayModifyMeshPosition(FMaterial *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3a0))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x3a8))(this);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(this->_padding_ + 0x400))(this);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(this->_padding_ + 0x488))(this);
        if (cVar1 == '\0') {
          return false;
        }
      }
    }
  }
  return true;
}

// MaterialModifiesMeshPosition_GameThread @ 147f82620

bool __thiscall FMaterial::MaterialModifiesMeshPosition_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 3 & 1);
  }
  return false;
}

// MaterialModifiesMeshPosition_RenderThread @ 147f82650

bool __thiscall FMaterial::MaterialModifiesMeshPosition_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x440,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 3 & 1);
  }
  return false;
}

// MaterialUsesAnisotropy_GameThread @ 147f826c0

bool __thiscall FMaterial::MaterialUsesAnisotropy_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  longlong lVar2;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if ((pFVar1 != (FMaterialShaderMap *)0x0) &&
     ((lVar2 = pFVar1->_padding_, (*(byte *)(lVar2 + 0x267) & 0x20) != 0 ||
      ((*(byte *)(lVar2 + 0x262) & 0x20) != 0)))) {
    return true;
  }
  return false;
}

// MaterialUsesAnisotropy_RenderThread @ 147f826f0

bool __thiscall FMaterial::MaterialUsesAnisotropy_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x49f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if ((pFVar1 != (FMaterialShaderMap *)0x0) &&
     ((lVar2 = pFVar1->_padding_, (*(byte *)(lVar2 + 0x267) & 0x20) != 0 ||
      ((*(byte *)(lVar2 + 0x262) & 0x20) != 0)))) {
    return true;
  }
  return false;
}

// MaterialUsesDisplacement_GameThread @ 147f82760

bool __thiscall FMaterial::MaterialUsesDisplacement_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x267) >> 7);
  }
  return false;
}

// MaterialUsesDisplacement_RenderThread @ 147f82780

bool __thiscall FMaterial::MaterialUsesDisplacement_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x435,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x267) >> 7);
  }
  return false;
}

// MaterialUsesDistanceCullFade_GameThread @ 147f827f0

bool __thiscall FMaterial::MaterialUsesDistanceCullFade_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x267) >> 1 & 1);
  }
  return false;
}

// MaterialUsesMotionVectorWorldOffset_GameThread @ 147f82810

bool __thiscall FMaterial::MaterialUsesMotionVectorWorldOffset_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 6 & 1);
  }
  return false;
}

// MaterialUsesMotionVectorWorldOffset_RenderThread @ 147f82840

bool __thiscall FMaterial::MaterialUsesMotionVectorWorldOffset_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x46e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 6 & 1);
  }
  return false;
}

// MaterialUsesPixelDepthOffset_GameThread @ 147f828b0

bool __thiscall FMaterial::MaterialUsesPixelDepthOffset_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x267) & 1);
  }
  return false;
}

// MaterialUsesPixelDepthOffset_RenderThread @ 147f828d0

bool __thiscall FMaterial::MaterialUsesPixelDepthOffset_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x267) & 1);
  }
  return false;
}

// MaterialUsesSceneDepthLookup_GameThread @ 147f82930

bool __thiscall FMaterial::MaterialUsesSceneDepthLookup_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)((byte)(*(uint *)(pFVar1->_padding_ + 600) >> 1) & 1);
  }
  return false;
}

// MaterialUsesSceneDepthLookup_RenderThread @ 147f82950

bool __thiscall FMaterial::MaterialUsesSceneDepthLookup_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x479,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)((byte)(*(uint *)(pFVar1->_padding_ + 600) >> 1) & 1);
  }
  return false;
}

// MaterialUsesTemporalResponsiveness_GameThread @ 147f829c0

bool __thiscall FMaterial::MaterialUsesTemporalResponsiveness_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 5 & 1);
  }
  return false;
}

// MaterialUsesTemporalResponsiveness_RenderThread @ 147f829f0

bool __thiscall FMaterial::MaterialUsesTemporalResponsiveness_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x463,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 5 & 1);
  }
  return false;
}

// MaterialUsesWorldPositionOffset_GameThread @ 147f82a60

bool __thiscall FMaterial::MaterialUsesWorldPositionOffset_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 4 & 1);
  }
  return false;
}

// MaterialUsesWorldPositionOffset_RenderThread @ 147f82a90

bool __thiscall FMaterial::MaterialUsesWorldPositionOffset_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x42a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 4 & 1);
  }
  return false;
}

// NeedsGBuffer @ 147f82b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FMaterial::NeedsGBuffer(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x406,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar5 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xc1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].Language != LANGUAGE_OpenGL) {
    uVar5 = (ulonglong)GMaxRHIShaderPlatform;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2da,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bOverrideFMaterial_NeedsGBufferEnabled ==
        0) goto LAB_147f82c22;
  }
  uVar5 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].MaxFeatureLevel != ES3_1) {
    return true;
  }
LAB_147f82c22:
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (*(uint *)(pFVar1->_padding_ + 600) & 0xfce01dfc) != 0;
  }
  return false;
}

// NeedsSceneTextures @ 147f82c70

bool __thiscall FMaterial::NeedsSceneTextures(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x3fa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) & 1);
  }
  return false;
}

// PrepareDestroy_GameThread @ 147f82e50

bool __thiscall FMaterial::PrepareDestroy_GameThread(FMaterial *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                         ,0x987,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
  pTVar5 = &this->PrecachedPSORequestIDs;
  if (&local_18 != pTVar5) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    local_18.AllocatorInstance.Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = (this->PrecachedPSORequestIDs).ArrayNum;
    local_18.ArrayMax = (this->PrecachedPSORequestIDs).ArrayMax;
    (this->PrecachedPSORequestIDs).ArrayMax = 0;
    (this->PrecachedPSORequestIDs).ArrayNum = 0;
  }
  piVar4 = &(this->PrecachedPSORequestIDs).ArrayMax;
  (this->PrecachedPSORequestIDs).ArrayNum = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar5->AllocatorInstance,0,piVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&PrecachedPSORequestIDsCS);
  ReleasePSOPrecacheData(&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return false;
}

// PrepareDestroy_RenderThread @ 147f82f50

void __thiscall FMaterial::PrepareDestroy_RenderThread(FMaterial *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x9a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RegisterInlineShaderMap @ 147f83510

void __thiscall FMaterial::RegisterInlineShaderMap(FMaterial *this,bool param_1)

{
  FMaterialShaderMap *this_00;
  FMaterialShaderMap *this_01;
  wchar_t *pwVar1;
  
  if ((this->GameThreadShaderMap).Reference != (FMaterialShaderMap *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar1 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar1,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      this_00 = (this->GameThreadShaderMap).Reference;
      this_01 = (this->RenderingThreadShaderMap).Reference;
      if (this_01 != this_00) {
        (this->RenderingThreadShaderMap).Reference = this_00;
        if (this_00 != (FMaterialShaderMap *)0x0) {
          FMaterialShaderMap::AddRef(this_00);
        }
        if (this_01 != (FMaterialShaderMap *)0x0) {
          FMaterialShaderMap::Release(this_01);
        }
      }
      LOCK();
      this->bRenderingThreadShaderMapIsComplete =
           (atomic<bool>)((int)((this->GameThreadShaderMap).Reference)->_padding_ != 0);
      UNLOCK();
    }
  }
  return;
}

// Release @ 147f843f0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FMaterial::Release(FMaterial *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  uint uVar3;
  
  LOCK();
  pFVar1 = &this->NumDebugRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  uVar3 = iVar2 - 1;
  if ((int)uVar3 < 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  if ((2 < (byte)LogMaterial._0_1_) && (5000 < (int)uVar3)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  return uVar3;
}

// ReleaseRenderThreadCompilingShaderMap @ 147f848c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMaterial::ReleaseRenderThreadCompilingShaderMap(FMaterial *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FMaterial *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterial *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this != (FMaterial *)0x0) {
    AddRef(this);
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterial::ReleaseRenderThreadCompilingShaderMap_::__l2::TSTR_DeferredDestroyMaterial1373>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FMaterial::ReleaseRenderThreadCompilingShaderMap'::__l2::TSTR_DeferredDestroyMaterial1373>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// ReleaseShaderMap @ 147f84ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMaterial::ReleaseShaderMap(FMaterial *this)

{
  FMaterialShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  void *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  FMaterial *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterial *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((1 < (byte)LogMaterial._0_1_) && (this->bOwnerBeginDestroyed != 0)) {
    (**(code **)(this->_padding_ + 0x560))(this,local_98);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    if (local_98[0] != (void *)0x0) {
      FMemory::Free(local_98[0]);
    }
  }
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FMaterialShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FMaterialShaderMap *)0x0;
    FMaterialShaderMap::Release(this_00);
    AddRef(this);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMaterial::ReleaseShaderMap'::`27'::<lambda_1>,1,0>::
                _vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterial::ReleaseShaderMap'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterial::ReleaseShaderMap_::__l27::TSTR_ReleaseShaderMap1644>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FMaterial::ReleaseShaderMap'::__l27::TSTR_ReleaseShaderMap1644>::
               Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// RequiresSceneColorCopy_GameThread @ 147f85770

bool __thiscall FMaterial::RequiresSceneColorCopy_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 600) & 1);
  }
  return false;
}

// RequiresSceneColorCopy_RenderThread @ 147f85790

bool __thiscall FMaterial::RequiresSceneColorCopy_RenderThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x3f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 600) & 1);
  }
  return false;
}

// SaveShaderStableKeys @ 147f85d80

void __thiscall FMaterial::SaveShaderStableKeys(FMaterial *this,FStableShaderKeyAndValue *param_1)

{
  return;
}

// SaveShaderStableKeys @ 147f85d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMaterial::SaveShaderStableKeys
          (FMaterial *this,EShaderPlatform param_1,FStableShaderKeyAndValue *param_2)

{
  return;
}

// SerializeInlineShaderMap @ 147f870c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMaterial::SerializeInlineShaderMap(FMaterial *this,FArchive *param_1,FName *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  TRefCountPtr<FMaterialShaderMap> *pTVar3;
  ulonglong *puVar4;
  FMaterialShaderMap *pFVar5;
  FMaterialShaderMap *this_00;
  uint uVar6;
  bool bVar7;
  uint local_res10 [2];
  undefined8 local_48;
  FShaderSerializeContext local_40;
  
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  bVar7 = SUB41(uVar6,0);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  this_00 = (FMaterialShaderMap *)0x0;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = uVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar6 = local_res10[0];
    if ((*puVar1 & 1) != 0) goto LAB_147f8715e;
  }
  else {
    uVar6 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_147f8715e:
    bVar7 = uVar6 != 0;
  }
  if (bVar7 == false) {
    if ((*puVar1 & 1) == 0) {
      return;
    }
    (**(code **)(this->_padding_ + 0x390))(this,&local_40);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    goto LAB_147f87301;
  }
  if ((*(longlong *)&param_1->field_0x68 != 0) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    return;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    local_res10[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar6 = local_res10[0];
    if ((*puVar1 & 1) != 0) goto LAB_147f87229;
  }
  else {
    uVar6 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
LAB_147f87229:
    if (uVar6 != 0) {
      pFVar5 = ::operator_new(0x88);
      if ((pFVar5 != (FMaterialShaderMap *)0x0) &&
         (this_00 = FMaterialShaderMap::FMaterialShaderMap(pFVar5),
         this_00 != (FMaterialShaderMap *)0x0)) {
        FMaterialShaderMap::AddRef(this_00);
      }
      local_40.bLoadingCooked = (*puVar1 & 1) != 0;
      local_40._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
      local_40.SerializingAsset = *param_2;
      local_40.Ar = param_1;
      bVar7 = FMaterialShaderMap::Serialize(this_00,&local_40);
      if ((bVar7) &&
         (pTVar3 = &this->GameThreadShaderMap,
         pTVar3 != (TRefCountPtr<FMaterialShaderMap> *)&local_48)) {
        pFVar5 = pTVar3->Reference;
        pTVar3->Reference = this_00;
        if (pFVar5 == (FMaterialShaderMap *)0x0) {
          return;
        }
        FMaterialShaderMap::Release(pFVar5);
        return;
      }
      if (this_00 == (FMaterialShaderMap *)0x0) {
        return;
      }
      FMaterialShaderMap::Release(this_00);
      return;
    }
  }
  if ((byte)LogMaterial._0_1_ < 2) {
    return;
  }
  (**(code **)(this->_padding_ + 0x390))(this,&local_40);
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
LAB_147f87301:
  if ((void *)local_40._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_40._padding_);
  }
  return;
}

// SetGameThreadShaderMap @ 147f87810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMaterial::SetGameThreadShaderMap(FMaterial *this,FMaterialShaderMap *param_1)

{
  FMaterialShaderMap *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObjectBaseUtility *this_00;
  UPackage *pUVar5;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar6;
  longlong lVar7;
  code **ppcVar8;
  ulonglong uVar9;
  atomic<bool> aVar10;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1 != (FMaterialShaderMap *)0x0) {
    bVar4 = FMaterialShaderMap::IsComplete(param_1,this,true);
    if (bVar4) {
      aVar10 = (atomic<bool>)0x1;
      goto LAB_147f8785d;
    }
  }
  aVar10 = (atomic<bool>)0x0;
LAB_147f8785d:
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != param_1) {
    (this->GameThreadShaderMap).Reference = param_1;
    if (param_1 != (FMaterialShaderMap *)0x0) {
      FMaterialShaderMap::AddRef(param_1);
    }
    if (pFVar1 != (FMaterialShaderMap *)0x0) {
      FMaterialShaderMap::Release(pFVar1);
    }
  }
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    lVar2 = pFVar1->_padding_;
    this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x4e0))();
    if (this_00 == (UObjectBaseUtility *)0x0) {
      lVar7 = 0;
    }
    else {
      pUVar5 = UObjectBaseUtility::GetOutermost(this_00);
      lVar7 = pUVar5->_padding_;
    }
    *(longlong *)(lVar2 + 8) = lVar7;
  }
  this->bGameThreadShaderMapIsComplete = aVar10;
  AddRef(this);
  if (param_1 != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::AddRef(param_1);
  }
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x20,8);
  local_70[1] = (code *)this;
  local_70[2] = (code *)param_1;
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FMaterial::SetGameThreadShaderMap'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *(atomic<bool> *)(local_70 + 3) = aVar10;
  if (local_70 != (code **)&DAT_fffffffffffffff8) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterial::SetGameThreadShaderMap'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterial::SetGameThreadShaderMap_::__l2::TSTR_SetGameThreadShaderMap1271>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`FMaterial::SetGameThreadShaderMap'::__l2::TSTR_SetGameThreadShaderMap1271>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar6);
    uVar9 = (ulonglong)local_38;
    if (2 < uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar8 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar8 = local_40;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar8 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar8 = local_70;
    }
    (**(code **)(*ppcVar8 + 0x10))();
  }
  return;
}

// SetInlineShaderMap @ 147f87a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMaterial::SetInlineShaderMap(FMaterial *this,FMaterialShaderMap *param_1)

{
  undefined1 *puVar1;
  FMaterialShaderMap *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObjectBaseUtility *this_01;
  UPackage *pUVar5;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FMaterial *pFStack_70;
  FMaterialShaderMap *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterial *pFStack_40;
  FMaterialShaderMap *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1 == (FMaterialShaderMap *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMaterialShaderMap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x516,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != param_1) {
    (this->GameThreadShaderMap).Reference = param_1;
    if (param_1 != (FMaterialShaderMap *)0x0) {
      FMaterialShaderMap::AddRef(param_1);
    }
    if (this_00 != (FMaterialShaderMap *)0x0) {
      FMaterialShaderMap::Release(this_00);
    }
  }
  lVar2 = ((this->GameThreadShaderMap).Reference)->_padding_;
  this_01 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x4e0))();
  if (this_01 == (UObjectBaseUtility *)0x0) {
    lVar7 = 0;
  }
  else {
    pUVar5 = UObjectBaseUtility::GetOutermost(this_01);
    lVar7 = pUVar5->_padding_;
  }
  *(longlong *)(lVar2 + 8) = lVar7;
  this->bContainsInlineShaders = 1;
  this->bLoadedCookedShaderMapId = 1;
  this->bGameThreadShaderMapIsComplete = (atomic<bool>)0x0;
  this->GameThreadShaderMapSubmittedPriority = None;
  AddRef(this);
  if (param_1 != (FMaterialShaderMap *)0x0) {
    FMaterialShaderMap::AddRef(param_1);
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMaterial::SetInlineShaderMap'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMaterial::SetInlineShaderMap'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterial::SetInlineShaderMap_::__l2::TSTR_SetInlineShaderMap1316>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`FMaterial::SetInlineShaderMap'::__l2::TSTR_SetInlineShaderMap1316>::
             Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar6);
    uVar9 = (ulonglong)local_28;
    if (2 < uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar8 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar8 = local_30;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar8 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar8 = local_60;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  return;
}

// SetRenderingThreadShaderMap @ 147f88e80

void __thiscall
FMaterial::SetRenderingThreadShaderMap(FMaterial *this,TRefCountPtr<FMaterialShaderMap> *param_1)

{
  TRefCountPtr<FMaterialShaderMap> *pTVar1;
  FMaterialShaderMap *this_00;
  code *pcVar2;
  bool bVar3;
  atomic<bool> aVar4;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x56b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = &this->RenderingThreadShaderMap;
  if (pTVar1 != param_1) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = param_1->Reference;
    param_1->Reference = (FMaterialShaderMap *)0x0;
    if (this_00 != (FMaterialShaderMap *)0x0) {
      FMaterialShaderMap::Release(this_00);
    }
  }
  if (pTVar1->Reference == (FMaterialShaderMap *)0x0) {
    aVar4 = (atomic<bool>)0x0;
  }
  else {
    aVar4 = (atomic<bool>)FMaterialShaderMap::IsComplete(pTVar1->Reference,this,true);
  }
  LOCK();
  this->bRenderingThreadShaderMapIsComplete = aVar4;
  UNLOCK();
  if (this->bRenderingThreadShaderMapIsComplete != (atomic<bool>)0x0) {
    LOCK();
    this->RenderingThreadShaderMapSubmittedPriority = (atomic<signed_char>)0xff;
    UNLOCK();
  }
  return;
}

// SetShaderMapsOnMaterialResources @ 147f88f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMaterial::SetShaderMapsOnMaterialResources
          (TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
           *param_1)

{
  undefined1 *puVar1;
  TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
  *this;
  uint uVar2;
  FMaterial *pFVar3;
  FMaterialShaderMap *pFVar4;
  FMaterialShaderMap *this_00;
  longlong lVar5;
  code *pcVar6;
  TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
  *pTVar7;
  bool bVar8;
  atomic<bool> aVar9;
  UObjectBaseUtility *this_01;
  UPackage *pUVar10;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  int local_154;
  int local_150;
  TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  int iStack_120;
  undefined4 local_fc;
  TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
  *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_d0;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_90;
  int local_80 [2];
  undefined1 local_78 [16];
  TBitArray<FDefaultBitArrayAllocator> *local_68 [3];
  TBitArray<FDefaultBitArrayAllocator> **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar2 = *(uint *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  uVar16 = 0;
  uStack_f0 = 0;
  uStack_ec = 1;
  local_d8 = 0;
  uStack_dc = uStack_f0;
  if (uVar2 != 0) {
    puVar21 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    uVar13 = uVar16;
    uVar20 = uVar16;
    local_d8 = 0;
    uStack_f0 = 0;
    while (uVar18 == 0) {
      iVar15 = (int)uVar13;
      local_d8 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)local_d8;
      uStack_f0 = iVar15 + 1;
      uVar13 = (ulonglong)uStack_f0;
      uStack_dc = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_f0)
      goto LAB_147f88fee;
      uVar18 = puVar21[(longlong)iVar15 + 1];
    }
    uStack_ec = -uVar18 & uVar18;
    uVar13 = (ulonglong)uStack_ec * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_154 = (int)lVar12;
    uStack_dc = (local_d8 - 1) + local_154;
    if ((int)uVar2 < (int)uStack_dc) {
      uStack_dc = uVar2;
    }
  }
LAB_147f88fee:
  uVar18 = *(uint *)&param_1->field_0x28;
  uStack_d4 = local_fc;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_e0 = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_ec,uStack_f0);
  ppTStack_d0 = (TBitArray<FDefaultBitArrayAllocator> **)
                CONCAT44(ppTStack_d0._4_4_,
                         *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_140.CurrentBitIndex = uStack_dc;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_140._28_4_ = local_fc;
  TStack_140.BaseBitIndex = local_d8;
  _iStack_120 = ppTStack_d0;
  local_148 = param_1;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_f8 = param_1;
  local_e8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || ((int)uVar2 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(uint *)&param_1->field_0x28;
  if (uVar18 != uVar2) {
    puVar19 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147f890f0;
      uVar18 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_150 = (int)lVar12;
    uVar18 = local_150 + -1 + uVar17;
    if ((int)uVar2 < (int)uVar18) {
      uVar18 = uVar2;
    }
  }
LAB_147f890f0:
  while( true ) {
    pTVar7 = local_148;
    if (*(int *)&local_148->field_0x8 - *(int *)&local_148->field_0x34 != iStack_120) {
      local_158[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (((TStack_140.CurrentBitIndex == uVar18) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1)
       ) break;
    lVar12 = *(longlong *)pTVar7;
    pFVar3 = *(FMaterial **)(lVar12 + (longlong)TStack_140.CurrentBitIndex * 0x18);
    lVar12 = lVar12 + (longlong)TStack_140.CurrentBitIndex * 0x18;
    pFVar4 = (pFVar3->GameThreadShaderMap).Reference;
    this_00 = *(FMaterialShaderMap **)(lVar12 + 8);
    if (pFVar4 != this_00) {
      (pFVar3->GameThreadShaderMap).Reference = this_00;
      if (this_00 != (FMaterialShaderMap *)0x0) {
        FMaterialShaderMap::AddRef(this_00);
      }
      if (pFVar4 != (FMaterialShaderMap *)0x0) {
        FMaterialShaderMap::Release(pFVar4);
      }
    }
    pFVar4 = (pFVar3->GameThreadShaderMap).Reference;
    if (pFVar4 == (FMaterialShaderMap *)0x0) {
      pFVar3->bGameThreadShaderMapIsComplete = (atomic<bool>)0x0;
    }
    else {
      lVar5 = pFVar4->_padding_;
      this_01 = (UObjectBaseUtility *)(**(code **)(pFVar3->_padding_ + 0x4e0))(pFVar3);
      uVar13 = uVar16;
      if (this_01 != (UObjectBaseUtility *)0x0) {
        pUVar10 = UObjectBaseUtility::GetOutermost(this_01);
        uVar13 = pUVar10->_padding_;
      }
      *(ulonglong *)(lVar5 + 8) = uVar13;
      aVar9 = (atomic<bool>)
              FMaterialShaderMap::IsComplete(*(FMaterialShaderMap **)(lVar12 + 8),pFVar3,true);
      pFVar3->bGameThreadShaderMapIsComplete = aVar9;
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_90.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_80[0] = 0;
  if ((TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
       *)local_c8 != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_90,local_80,(ForElementType<FSetElementId> *)&param_1->field_0x38,
               *(int *)&param_1->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_c8,
                (TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1);
  }
  local_f8 = (TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
              *)0x0;
  ppTStack_d0 = FMemory::Malloc(0x58,8);
  this = (TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
          *)(ppTStack_d0 + 1);
  *ppTStack_d0 = (TBitArray<FDefaultBitArrayAllocator> *)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FMaterial::SetShaderMapsOnMaterialResources'::`2'::<lambda_1>,1,1>
                  ::_vftable_;
  TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
            (this,(TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
                   *)local_c8);
  if (this != (TSet<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>,FDefaultSetAllocator>
               *)0x0) {
    local_f8 = (TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
                *)UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterial::SetShaderMapsOnMaterialResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterial::SetShaderMapsOnMaterialResources_::__l2::TSTR_FSetShaderMapOnMaterialResources5586>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_f8);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    local_68[1]._4_4_ = uStack_dc;
    local_68[1]._0_4_ = uStack_e0;
    local_68[2]._4_4_ = uStack_d4;
    local_68[2]._0_4_ = local_d8;
    local_78._0_8_ = local_f8;
    local_50 = ppTStack_d0;
    ppTStack_d0 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
    local_68[0] = local_e8;
    local_f8 = (TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
                *)0x0;
    local_48 = 2;
    pFVar11 = (FRenderCommandTag *)
              TRenderCommandTag<`FMaterial::SetShaderMapsOnMaterialResources'::__l2::TSTR_FSetShaderMapOnMaterialResources5586>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar11);
    uVar16 = (ulonglong)local_48;
    if ((2 < uVar16) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppTVar14 = local_68;
        if (local_50 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
          ppTVar14 = local_50;
        }
        (*(code *)((*ppTVar14)->AllocatorInstance).SecondaryData)();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(local_78);
    }
  }
  if (local_f8 !=
      (TMap<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>,0>_>
       *)0x0) {
    ppTVar14 = &local_e8;
    if (ppTStack_d0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
      ppTVar14 = ppTStack_d0;
    }
    (*(code *)((*ppTVar14)->AllocatorInstance).SecondaryData)();
  }
  local_80[0] = 0;
  if (local_90.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_90.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FMaterial>,TRefCountPtr<FMaterialShaderMap>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar15 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// ShouldCache @ 147f89850

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::ShouldCache(FMaterial *this,FShaderType *param_1,FVertexFactoryType *param_2)

{
  return true;
}

// ShouldCache @ 147f89860

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::ShouldCache
          (FMaterial *this,EShaderPlatform param_1,FShaderType *param_2,FVertexFactoryType *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147f89869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x18))(this,param_2,param_3);
  return (bool)uVar1;
}

// ShouldCachePipeline @ 147f89880

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::ShouldCachePipeline
          (FMaterial *this,FShaderPipelineType *param_1,FVertexFactoryType *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_1->Stages).AllocatorInstance.Data;
  iVar2 = (param_1->Stages).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Stages).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    cVar3 = (**(code **)(this->_padding_ + 0x18))(this,*(undefined8 *)pFVar4,param_2);
    if (cVar3 == '\0') {
      return false;
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// ShouldCachePipeline @ 147f89910

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::ShouldCachePipeline
          (FMaterial *this,EShaderPlatform param_1,FShaderPipelineType *param_2,
          FVertexFactoryType *param_3)

{
  bool bVar1;
  
  bVar1 = ShouldCachePipeline(this,param_2,param_3);
  return bVar1;
}

// ShouldCacheShaders @ 147f89930

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::ShouldCacheShaders
          (FMaterial *this,FMaterialShaderTypes *param_1,FVertexFactoryType *param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  while( true ) {
    param_1 = (FMaterialShaderTypes *)param_1->ShaderType;
    if ((*(FShaderType **)param_1 != (FShaderType *)0x0) &&
       (cVar1 = (**(code **)(this->_padding_ + 0x18))(this,*(FShaderType **)param_1,param_2),
       cVar1 == '\0')) break;
    lVar2 = lVar2 + 1;
    if (4 < lVar2) {
      return true;
    }
  }
  return false;
}

// ShouldCacheShaders @ 147f899a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterial::ShouldCacheShaders
          (FMaterial *this,EShaderPlatform param_1,FMaterialShaderTypes *param_2,
          FVertexFactoryType *param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  while( true ) {
    param_2 = (FMaterialShaderTypes *)param_2->ShaderType;
    if ((*(FShaderType **)param_2 != (FShaderType *)0x0) &&
       (cVar1 = (**(code **)(this->_padding_ + 0x18))(this,*(FShaderType **)param_2,param_3),
       cVar1 == '\0')) break;
    lVar2 = lVar2 + 1;
    if (4 < lVar2) {
      return true;
    }
  }
  return false;
}

// TryGetShaders @ 147f8bc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147f8c022) */
/* WARNING: Removing unreachable block (ram,0x000147f8c818) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FMaterial::TryGetShaders
          (FMaterial *this,FMaterialShaderTypes *param_1,FVertexFactoryType *param_2,
          FMaterialShaders *param_3)

{
  int iVar1;
  FShaderType *pFVar2;
  FShaderPipelineType *pFVar3;
  code *pcVar4;
  byte bVar5;
  FVertexFactoryType *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  FMaterialShaderMapContent *this_00;
  FShaderPipeline *pFVar15;
  FShaderType *pFVar16;
  FString *pFVar17;
  FString *pFVar18;
  FShader *pFVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  wchar_t *pwVar22;
  bool bVar23;
  TMemoryImagePtr<FShader>_u_0 this_01;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  TMemoryImagePtr<FShader>_u_0 *pTVar26;
  uint uVar27;
  FMaterialShaderMap *pFVar28;
  ulonglong uVar29;
  FMaterial *pFVar30;
  FShader **ppFVar31;
  FMaterialShaderTypes *pFVar32;
  undefined1 auStackY_248 [32];
  undefined1 local_1f4 [4];
  FMaterialShaderTypes *local_1f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e8;
  FShaderPipeline *local_1d8;
  TArray<FShaderId,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<FShaderId,TSizedDefaultAllocator<32>_> local_1b0;
  undefined1 local_1a0 [8];
  FMaterialShaderMap *local_198;
  FMaterial *local_190;
  FString local_188;
  FString local_178;
  FVertexFactoryType *local_168;
  undefined4 local_160 [2];
  int *local_158;
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> local_150;
  FString local_140;
  FHashedName local_130;
  FMaterial *local_128;
  undefined4 *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [16];
  FShaderType *local_c8;
  FVertexFactoryType *local_c0;
  FHashedName local_b8;
  longlong local_b0;
  longlong lStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  FShaderType *local_90;
  FVertexFactoryType *local_88;
  FHashedName local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int local_64;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1f0 = param_1;
  local_190 = this;
  local_168 = param_2;
  bVar7 = IsInGameThread();
  if ((bVar7) || (bVar7 = IsInParallelGameThread(), bVar7)) {
    pFVar28 = (this->GameThreadShaderMap).Reference;
  }
  else {
    pFVar28 = (this->RenderingThreadShaderMap).Reference;
  }
  if (pFVar28 == (FMaterialShaderMap *)0x0) {
    return false;
  }
  if ((GODSCManager == (FODSCManager *)0x0) || (GODSCManager->Thread == (FODSCThread *)0x0)) {
    bVar7 = false;
LAB_147f8bcf5:
    bVar11 = false;
  }
  else {
    bVar11 = true;
    bVar7 = true;
    if ((GODSCManager == (FODSCManager *)0x0) ||
       (local_198 = pFVar28,
       bVar8 = FODSCManager::ShouldForceRecompileInternal(GODSCManager,pFVar28,this), !bVar8)) {
      bVar7 = true;
      goto LAB_147f8bcf5;
    }
  }
  local_198 = pFVar28;
  bVar8 = FODSCManager::UseDefaultMaterialOnRecompile();
  param_3->ShaderMap = (FShaderMapBase *)pFVar28;
  local_160[0] = *(undefined4 *)((longlong)&pFVar28->_padding_ + 4);
  this_00 = (FMaterialShaderMapContent *)pFVar28->_padding_;
  if (param_2 != (FVertexFactoryType *)0x0) {
    this_00 = (FMaterialShaderMapContent *)
              FMaterialShaderMapContent::GetMeshShaderMap(this_00,&param_2->HashedName);
  }
  pFVar32 = local_1f0;
  local_120 = local_160;
  uVar29 = 0;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  bVar23 = false;
  local_128 = this;
  if (((local_1f0->PipelineType == (FShaderPipelineType *)0x0) ||
      (FGenericDataDrivenShaderPlatformInfo::Infos[GMaxRHIShaderPlatform].bSupportsShaderPipelines
       == 0)) || (bVar9 = UseShaderPipelines(GMaxRHIShaderPlatform), !bVar9)) {
    local_158 = pFVar32->PermutationId;
    local_1d8 = (FShaderPipeline *)0x0;
    pFVar32 = (FMaterialShaderTypes *)((longlong)pFVar32 - (longlong)param_3);
    ppFVar31 = param_3->Shaders;
    local_1f0 = pFVar32;
    do {
      pFVar19 = (FShader *)0x0;
      pFVar2 = *(FShaderType **)((longlong)(ppFVar31 + -1) + (longlong)pFVar32);
      if (pFVar2 != (FShaderType *)0x0) {
        iVar1 = *local_158;
        if (((this_00 == (FMaterialShaderMapContent *)0x0) ||
            (pFVar19 = FShaderMapContent::GetShader
                                 ((FShaderMapContent *)this_00,&pFVar2->HashedName,iVar1),
            pFVar19 == (FShader *)0x0)) || (*ppFVar31 = pFVar19, bVar11)) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        bVar12 = false;
        local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.ArrayNum = 0;
        local_1b0.ArrayMax = 0;
        if ((bVar7) && ((pFVar19 == (FShader *)0x0 || (bVar11)))) {
          uVar27 = (uint)GMaxRHIShaderPlatform;
          local_130.Hash = 0;
          local_88 = local_168;
          local_90 = pFVar2;
          FHashedName::FHashedName(&local_80,&local_130);
          local_60 = local_60 & 0xffff0000 | uVar27;
          local_78 = *(undefined8 *)(local_198->ShaderMapId).CookedShaderMapIdHash.Hash;
          uStack_70 = *(undefined8 *)((local_198->ShaderMapId).CookedShaderMapIdHash.Hash + 8);
          local_68 = *(undefined4 *)((local_198->ShaderMapId).CookedShaderMapIdHash.Hash + 0x10);
          local_64 = iVar1;
          if ((local_1b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_90) &&
             (((FScriptContainerElement *)&local_90 <
               local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 0x38 &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)))) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          iVar14 = local_1b0.ArrayNum;
          if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
          }
          pFVar25 = local_1b0.AllocatorInstance.Data + (longlong)iVar14 * 0x38;
          local_1b0.ArrayNum = iVar14 + 1;
          *(FShaderType **)pFVar25 = local_90;
          *(FVertexFactoryType **)(pFVar25 + 8) = local_88;
          FHashedName::FHashedName((FHashedName *)(pFVar25 + 0x10),&local_80);
          *(undefined8 *)(pFVar25 + 0x18) = local_78;
          *(undefined8 *)(pFVar25 + 0x20) = uStack_70;
          *(undefined4 *)(pFVar25 + 0x28) = local_68;
          *(int *)(pFVar25 + 0x2c) = local_64;
          *(undefined2 *)(pFVar25 + 0x30) = (undefined2)local_60;
          bVar12 = FODSCManager::CheckIfRequestAlreadySent(GODSCManager,&local_1b0,local_190);
          if (!bVar12) goto LAB_147f8c6cf;
          if ((pFVar19 == (FShader *)0x0) || (bVar8)) {
            bVar5 = 1;
          }
          else {
            bVar5 = 0;
          }
          bVar23 = (bool)(bVar23 | bVar5);
        }
        else {
LAB_147f8c6cf:
          pFVar6 = local_168;
          if (bVar9) {
            if ((pFVar19 == (FShader *)0x0) || (bVar8)) {
              bVar5 = 1;
            }
            else {
              bVar5 = 0;
            }
            bVar23 = (bool)(bVar23 | bVar5);
            bVar9 = `FMaterial::TryGetShaders'::__l2::<lambda_1>::operator()
                              (&local_128,pFVar2,local_168,iVar1);
            FVar21.Data = local_1b0.AllocatorInstance.Data;
            if (!bVar9) goto LAB_147f8c8ae;
            if ((bVar12 == false) && (bVar7)) {
              if (pFVar6 == (FVertexFactoryType *)0x0) {
                pwVar22 = L"";
              }
              else {
                pwVar22 = pFVar6->Name;
              }
              ::FString::FString(&local_f8,pwVar22);
              local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_140.Data.ArrayNum = 0;
              local_140.Data.ArrayMax = 0;
              local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1c0.ArrayNum = 0;
              local_1c0.ArrayMax = 0;
              ::FString::FString(&local_178,pFVar2->Name);
              if (((local_1c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
                  ((FScriptContainerElement *)&local_178 <
                   local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayMax * 0x10)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar10 = (*pcVar4)();
                return (bool)uVar10;
              }
              iVar14 = local_1c0.ArrayNum;
              if (local_1c0.ArrayNum == local_1c0.ArrayMax) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_1c0.AllocatorInstance,&local_1c0.ArrayMax);
              }
              local_1c0.ArrayNum = iVar14 + 1;
              pFVar25 = local_1c0.AllocatorInstance.Data + (longlong)iVar14 * 0x10;
              *(undefined8 *)pFVar25 = 0;
              *(FScriptContainerElement **)pFVar25 = local_178.Data.AllocatorInstance.Data;
              *(int *)(pFVar25 + 8) = local_178.Data.ArrayNum;
              *(int *)(pFVar25 + 0xc) = local_178.Data.ArrayMax;
              local_178.Data.ArrayNum = 0;
              local_178.Data.ArrayMax = 0;
              local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FODSCManager::AddThreadedShaderPipelineRequest
                        (GODSCManager,GMaxRHIShaderPlatform,local_190->FeatureLevel,
                         local_190->QualityLevel,local_190,&local_f8,&local_140,&local_1c0,iVar1,
                         &local_1b0);
              DestructItems<FString,int>
                        ((FString *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
              if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c0.AllocatorInstance.Data);
              }
              if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_140.Data.AllocatorInstance.Data);
              }
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        pFVar32 = local_1f0;
        if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.AllocatorInstance.Data);
          pFVar32 = local_1f0;
        }
      }
      local_1d8 = (FShaderPipeline *)((longlong)&(local_1d8->TypeName).Hash + 1);
      local_158 = local_158 + 1;
      ppFVar31 = ppFVar31 + 1;
    } while ((longlong)local_1d8 < 0xc);
  }
  else {
    if (this_00 == (FMaterialShaderMapContent *)0x0) {
      pFVar15 = (FShaderPipeline *)0x0;
      local_1d8 = (FShaderPipeline *)0x0;
LAB_147f8becd:
      bVar9 = true;
    }
    else {
      pFVar15 = FShaderMapContent::GetShaderPipeline
                          ((FShaderMapContent *)this_00,pFVar32->PipelineType);
      pFVar28 = local_198;
      local_1d8 = pFVar15;
      if (pFVar15 == (FShaderPipeline *)0x0) goto LAB_147f8becd;
      pTVar26 = (TMemoryImagePtr<FShader>_u_0 *)param_3->Shaders;
      param_3->Pipeline = pFVar15;
      do {
        pFVar2 = *(FShaderType **)((longlong)pTVar26 + (longlong)pFVar32 + (-8 - (longlong)param_3))
        ;
        if ((4 < (byte)uVar29) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Frequency < SF_NumGraphicsFrequencies",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x8af,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        this_01 = (TMemoryImagePtr<FShader>_u_0)
                  pFVar15->Shaders[uVar29 & 0xff].field0_0x0.UnfrozenPtr;
        if (((ulonglong)this_01 & 1) != 0) {
          this_01.UnfrozenPtr =
               (FShader *)
               ((longlong)&pFVar15->Shaders[uVar29 & 0xff].field0_0x0 + ((longlong)this_01 >> 0x18))
          ;
        }
        if (this_01.Packed == 0) {
          if ((pFVar2 != (FShaderType *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ShaderType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                                 ,0xf0c,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
        }
        else {
          if ((pFVar28->_padding_ == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          pFVar16 = FShader::GetType(this_01.UnfrozenPtr,
                                     (FShaderMapPointerTable *)pFVar28->_padding_);
          if ((pFVar16 != pFVar2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Shader->GetType(ShaderMap->GetPointerTable()) == ShaderType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                                 ,0xf07,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          pTVar26->UnfrozenPtr = (FShader *)this_01;
        }
        uVar27 = (int)uVar29 + 1;
        uVar29 = (ulonglong)uVar27;
        pTVar26 = pTVar26 + 1;
      } while ((int)uVar27 < 5);
      if (bVar11) goto LAB_147f8becd;
      bVar9 = false;
    }
    pFVar28 = local_198;
    bVar12 = false;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 0;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    pFVar30 = local_190;
    if ((bVar7) && ((pFVar15 == (FShaderPipeline *)0x0 || (bVar11)))) {
      pFVar3 = local_1f0->PipelineType;
      pFVar24 = (pFVar3->Stages).AllocatorInstance.Data;
      iVar1 = (pFVar3->Stages).ArrayNum;
      pFVar25 = pFVar24 + (longlong)iVar1 * 8;
      while( true ) {
        if ((pFVar3->Stages).ArrayNum != iVar1) {
          local_1f4[0] = 0;
          `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1f4);
        }
        pFVar30 = local_190;
        if (pFVar24 == pFVar25) break;
        pFVar2 = *(FShaderType **)pFVar24;
        ::FString::FString(&local_188,pFVar2->Name);
        if (((local_1e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 <
             local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        iVar14 = local_1e8.ArrayNum;
        if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
        }
        local_1e8.ArrayNum = iVar14 + 1;
        pFVar20 = local_1e8.AllocatorInstance.Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar20 = 0;
        *(FScriptContainerElement **)pFVar20 = local_188.Data.AllocatorInstance.Data;
        *(int *)(pFVar20 + 8) = local_188.Data.ArrayNum;
        *(int *)(pFVar20 + 0xc) = local_188.Data.ArrayMax;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar27 = (uint)GMaxRHIShaderPlatform;
        local_c0 = local_168;
        local_c8 = pFVar2;
        FHashedName::FHashedName(&local_b8,&local_1f0->PipelineType->HashedName);
        local_a0 = *(undefined4 *)((pFVar28->ShaderMapId).CookedShaderMapIdHash.Hash + 0x10);
        local_b0 = *(longlong *)(pFVar28->ShaderMapId).CookedShaderMapIdHash.Hash;
        lStack_a8 = *(longlong *)((pFVar28->ShaderMapId).CookedShaderMapIdHash.Hash + 8);
        local_98 = local_98 & 0xffff0000 | uVar27;
        local_9c = 0;
        if (((local_1d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 <
             local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayMax * 0x38)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        iVar14 = local_1d0.ArrayNum;
        if (local_1d0.ArrayNum == local_1d0.ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&local_1d0.AllocatorInstance,&local_1d0.ArrayMax);
        }
        pFVar20 = local_1d0.AllocatorInstance.Data + (longlong)iVar14 * 0x38;
        local_1d0.ArrayNum = iVar14 + 1;
        *(FShaderType **)pFVar20 = local_c8;
        *(FVertexFactoryType **)(pFVar20 + 8) = local_c0;
        FHashedName::FHashedName((FHashedName *)(pFVar20 + 0x10),&local_b8);
        pFVar24 = pFVar24 + 8;
        *(longlong *)(pFVar20 + 0x18) = local_b0;
        *(longlong *)(pFVar20 + 0x20) = lStack_a8;
        *(undefined4 *)(pFVar20 + 0x28) = local_a0;
        *(undefined4 *)(pFVar20 + 0x2c) = local_9c;
        *(undefined2 *)(pFVar20 + 0x30) = (undefined2)local_98;
      }
      bVar12 = FODSCManager::CheckIfRequestAlreadySent(GODSCManager,&local_1d0,local_190);
      if (!bVar12) goto LAB_147f8c1d9;
      if ((local_1d8 == (FShaderPipeline *)0x0) || (bVar8)) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
    }
    else {
LAB_147f8c1d9:
      if ((bVar9) &&
         (bVar11 = FShaderPipelineType::ShouldOptimizeUnusedOutputs
                             (local_1f0->PipelineType,GMaxRHIShaderPlatform), pFVar6 = local_168,
         bVar11)) {
        if ((local_1d8 == (FShaderPipeline *)0x0) || (bVar23 = false, bVar8)) {
          bVar23 = true;
        }
        pFVar3 = local_1f0->PipelineType;
        pFVar24 = (pFVar3->Stages).AllocatorInstance.Data;
        iVar1 = (pFVar3->Stages).ArrayNum;
        pFVar25 = pFVar24 + (longlong)iVar1 * 8;
        while( true ) {
          if ((pFVar3->Stages).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_1a0);
          }
          if (pFVar24 == pFVar25) {
            if ((bVar12 == false) && (bVar7)) {
              if (pFVar6 == (FVertexFactoryType *)0x0) {
                pwVar22 = L"";
              }
              else {
                pwVar22 = pFVar6->Name;
              }
              ::FString::FString(&local_108,pwVar22);
              ::FString::FString(&local_118,local_1f0->PipelineType->Name);
              FODSCManager::AddThreadedShaderPipelineRequest
                        (GODSCManager,GMaxRHIShaderPlatform,pFVar30->FeatureLevel,
                         pFVar30->QualityLevel,pFVar30,&local_108,&local_118,&local_1e8,0,&local_1d0
                        );
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_147f8c347;
          }
          bVar11 = `FMaterial::TryGetShaders'::__l2::<lambda_1>::operator()
                             (&local_128,*(FShaderType **)pFVar24,pFVar6,
                              local_1f0->PermutationId[(byte)(*(FShaderType **)pFVar24)->Frequency])
          ;
          if (!bVar11) break;
          pFVar24 = pFVar24 + 8;
        }
        DestructItems<FString,int>((FString *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
        FVar21.Data = local_1d0.AllocatorInstance.Data;
        if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.AllocatorInstance.Data);
          FVar21.Data = local_1d0.AllocatorInstance.Data;
        }
LAB_147f8c8ae:
        if (FVar21.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar21.Data);
        }
        bVar23 = false;
        goto LAB_147f8c427;
      }
    }
LAB_147f8c347:
    DestructItems<FString,int>((FString *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.AllocatorInstance.Data);
    }
  }
  if (0 < local_150.ArrayNum) {
    LOCK();
    __GTraceCounterShaders_OnDemandShaderRequests.Value =
         (atomic<__int64>)
         ((longlong)__GTraceCounterShaders_OnDemandShaderRequests.Value +
         (longlong)local_150.ArrayNum);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterShaders_OnDemandShaderRequests.CounterId == (atomic<unsigned_int>)0x0) {
        uVar13 = FCountersTrace::OutputInitCounter
                           (__GTraceCounterShaders_OnDemandShaderRequests.CounterName,
                            TraceCounterType_Int,
                            __GTraceCounterShaders_OnDemandShaderRequests.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterShaders_OnDemandShaderRequests.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterShaders_OnDemandShaderRequests.CounterId._2_2_ = 0;
          __GTraceCounterShaders_OnDemandShaderRequests.CounterId._0_2_ = uVar13;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterShaders_OnDemandShaderRequests.CounterId._0_2_,
                 (long64)__GTraceCounterShaders_OnDemandShaderRequests.Value);
    }
    pFVar17 = ::FString::FString(&local_e8,L"");
    pFVar18 = (FString *)(**(code **)(local_190->_padding_ + 0x558))(local_190,local_d8);
    FShaderCompilingManager::SubmitJobs(GShaderCompilingManager,&local_150,pFVar18,pFVar17);
  }
  bVar23 = !bVar23;
LAB_147f8c427:
  DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
            ((TRefCountPtr<FShaderCommonCompileJob> *)local_150.AllocatorInstance.Data,
             local_150.ArrayNum);
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  return bVar23;
}

// UpdateInlineShaderMapIsComplete @ 147f8d270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMaterial::UpdateInlineShaderMapIsComplete(FMaterial *this)

{
  code *pcVar1;
  bool bVar2;
  atomic<bool> aVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FMaterial *pFStack_70;
  atomic<bool> local_68;
  undefined7 uStack_67;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterial *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->bContainsInlineShaders == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bContainsInlineShaders",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x501,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  aVar3 = (atomic<bool>)
          FMaterialShaderMap::IsComplete((this->GameThreadShaderMap).Reference,this,false);
  this->bGameThreadShaderMapIsComplete = aVar3;
  AddRef(this);
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMaterial::UpdateInlineShaderMapIsComplete'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = aVar3;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMaterial::UpdateInlineShaderMapIsComplete_::__l2::TSTR_UpdateGameThreadShaderMapIsComplete1293>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_7_ = uStack_67;
    local_38._0_1_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FMaterial::UpdateInlineShaderMapIsComplete'::__l2::TSTR_UpdateGameThreadShaderMapIsComplete1293>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// UsesEyeAdaptation @ 147f8e000

bool __thiscall FMaterial::UsesEyeAdaptation(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x419,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->RenderingThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 2 & 1);
  }
  return false;
}

// UsesGlobalDistanceField_GameThread @ 147f8e070

bool __thiscall FMaterial::UsesGlobalDistanceField_GameThread(FMaterial *this)

{
  FMaterialShaderMap *pFVar1;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (pFVar1 != (FMaterialShaderMap *)0x0) {
    return (bool)(*(byte *)(pFVar1->_padding_ + 0x266) >> 7);
  }
  return false;
}

// WritesEveryPixel @ 147f8e210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FMaterial::WritesEveryPixel(FMaterial *this,bool param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = IsStencilForLODDitherEnabled((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  cVar2 = (**(code **)(this->_padding_ + 0x250))(this);
  if ((((cVar2 == '\0') &&
       (((!param_1 && (bVar1)) ||
        (cVar2 = (**(code **)(this->_padding_ + 0x58))(this), cVar2 == '\0')))) &&
      ((cVar2 = (**(code **)(this->_padding_ + 0xf8))(this), cVar2 == '\0' &&
       (((!bVar1 || (cVar2 = (**(code **)(this->_padding_ + 0x58))(this), cVar2 == '\0')) ||
        (param_2)))))) && (cVar2 = (**(code **)(this->_padding_ + 0x450))(this), cVar2 == '\0')) {
    return true;
  }
  return false;
}

// WritesEveryPixel @ 147f8e2c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FMaterial::WritesEveryPixel(FMaterial *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x170))();
  bVar2 = IsStencilForLODDitherEnabled((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  cVar3 = (**(code **)(this->_padding_ + 0x250))(this);
  if ((((cVar3 == '\0') &&
       (((!param_1 && (bVar2)) ||
        (cVar3 = (**(code **)(this->_padding_ + 0x58))(this), cVar3 == '\0')))) &&
      ((cVar3 = (**(code **)(this->_padding_ + 0xf8))(this), cVar3 == '\0' &&
       (((!bVar2 || (cVar3 = (**(code **)(this->_padding_ + 0x58))(this), cVar3 == '\0')) ||
        (cVar1 == '\0')))))) &&
     (cVar1 = (**(code **)(this->_padding_ + 0x450))(this), cVar1 == '\0')) {
    return true;
  }
  return false;
}

