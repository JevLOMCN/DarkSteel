// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FVolumetricCloudSceneProxy @ 1489b6100

FVolumetricCloudSceneProxy * __thiscall
FVolumetricCloudSceneProxy::FVolumetricCloudSceneProxy
          (FVolumetricCloudSceneProxy *this,UVolumetricCloudComponent *param_1)

{
  this->LayerBottomAltitudeKm = param_1->LayerBottomAltitude;
  this->LayerHeightKm = param_1->LayerHeight;
  this->TracingStartMaxDistance = param_1->TracingStartMaxDistance;
  this->TracingStartDistanceFromCamera = param_1->TracingStartDistanceFromCamera;
  this->TracingMaxDistanceMode = param_1->TracingMaxDistanceMode;
  this->TracingMaxDistance = param_1->TracingMaxDistance;
  this->PlanetRadiusKm = param_1->PlanetRadius;
  (this->GroundAlbedo).field0_0x0 = (param_1->GroundAlbedo).field0_0x0;
  this->bUsePerSampleAtmosphericLightTransmittance =
       param_1->bUsePerSampleAtmosphericLightTransmittance;
  this->bHoldout = param_1->bHoldout;
  this->bRenderInMainPass = param_1->bRenderInMainPass;
  this->bVisibleInRealTimeSkyCaptures = param_1->bVisibleInRealTimeSkyCaptures;
  this->SkyLightCloudBottomOcclusion = param_1->SkyLightCloudBottomOcclusion;
  this->ViewSampleCountScale = param_1->ViewSampleCountScale;
  this->ReflectionViewSampleCountScale = param_1->ReflectionViewSampleCountScaleValue;
  this->ShadowViewSampleCountScale = param_1->ShadowViewSampleCountScale;
  this->ShadowReflectionViewSampleCountScale = param_1->ShadowReflectionViewSampleCountScaleValue;
  this->ShadowTracingDistance = param_1->ShadowTracingDistance;
  this->StopTracingTransmittanceThreshold = param_1->StopTracingTransmittanceThreshold;
  this->AerialPespectiveMieScatteringStartDistance =
       param_1->AerialPespectiveMieScatteringStartDistance;
  this->AerialPespectiveMieScatteringFadeDistance =
       param_1->AerialPespectiveMieScatteringFadeDistance;
  this->AerialPespectiveRayleighScatteringStartDistance =
       param_1->AerialPespectiveRayleighScatteringStartDistance;
  this->AerialPespectiveRayleighScatteringFadeDistance =
       param_1->AerialPespectiveRayleighScatteringFadeDistance;
  this->CloudVolumeMaterial = (UMaterialInterface *)(param_1->MaterialLifetimePtr).field0_0x0;
  return this;
}

// ~FVolumetricCloudSceneProxy @ 1489ba560

void __thiscall
FVolumetricCloudSceneProxy::~FVolumetricCloudSceneProxy(FVolumetricCloudSceneProxy *this)

{
  return;
}

