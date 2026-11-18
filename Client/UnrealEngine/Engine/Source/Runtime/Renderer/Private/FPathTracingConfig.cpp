// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// operator= @ 1450b1530

FPathTracingConfig * __thiscall
FPathTracingConfig::operator=(FPathTracingConfig *this,FPathTracingConfig *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  fVar1 = (param_1->PathTracingData).BaseExposure;
  uVar2 = (param_1->PathTracingData).Iteration;
  uVar3 = (param_1->PathTracingData).TemporalSeed;
  (this->PathTracingData).BlendFactor = (param_1->PathTracingData).BlendFactor;
  (this->PathTracingData).BaseExposure = fVar1;
  (this->PathTracingData).Iteration = uVar2;
  (this->PathTracingData).TemporalSeed = uVar3;
  uVar2 = (param_1->PathTracingData).MaxBounces;
  uVar3 = (param_1->PathTracingData).MaxSSSBounces;
  fVar1 = (param_1->PathTracingData).BackgroundAlpha;
  (this->PathTracingData).MaxSamples = (param_1->PathTracingData).MaxSamples;
  (this->PathTracingData).MaxBounces = uVar2;
  (this->PathTracingData).MaxSSSBounces = uVar3;
  (this->PathTracingData).BackgroundAlpha = fVar1;
  uVar2 = (param_1->PathTracingData).MISMode;
  uVar3 = (param_1->PathTracingData).VolumeMISMode;
  uVar4 = (param_1->PathTracingData).ApproximateCaustics;
  (this->PathTracingData).SSSGuidingRatio = (param_1->PathTracingData).SSSGuidingRatio;
  (this->PathTracingData).MISMode = uVar2;
  (this->PathTracingData).VolumeMISMode = uVar3;
  (this->PathTracingData).ApproximateCaustics = uVar4;
  uVar2 = (param_1->PathTracingData).SamplerType;
  uVar3 = (param_1->PathTracingData).EnableDBuffer;
  uVar4 = (param_1->PathTracingData).VolumeFlags;
  (this->PathTracingData).EnableCameraBackfaceCulling =
       (param_1->PathTracingData).EnableCameraBackfaceCulling;
  (this->PathTracingData).SamplerType = uVar2;
  (this->PathTracingData).EnableDBuffer = uVar3;
  (this->PathTracingData).VolumeFlags = uVar4;
  uVar2 = (param_1->PathTracingData).EnabledIndirectLightingContributions;
  uVar3 = (param_1->PathTracingData).ApplyDiffuseSpecularOverrides;
  iVar5 = (param_1->PathTracingData).MaxRaymarchSteps;
  (this->PathTracingData).EnabledDirectLightingContributions =
       (param_1->PathTracingData).EnabledDirectLightingContributions;
  (this->PathTracingData).EnabledIndirectLightingContributions = uVar2;
  (this->PathTracingData).ApplyDiffuseSpecularOverrides = uVar3;
  (this->PathTracingData).MaxRaymarchSteps = iVar5;
  fVar1 = (param_1->PathTracingData).MaxNormalBias;
  fVar6 = (param_1->PathTracingData).FilterWidth;
  fVar7 = (param_1->PathTracingData).CloudRoughnessCutoff;
  (this->PathTracingData).MaxPathIntensity = (param_1->PathTracingData).MaxPathIntensity;
  (this->PathTracingData).MaxNormalBias = fVar1;
  (this->PathTracingData).FilterWidth = fVar6;
  (this->PathTracingData).CloudRoughnessCutoff = fVar7;
  fVar1 = (param_1->PathTracingData).MeshDecalRoughnessCutoff;
  fVar6 = (param_1->PathTracingData).MeshDecalBias;
  fVar7 = (param_1->PathTracingData).CameraFocusDistance;
  (this->PathTracingData).DecalRoughnessCutoff = (param_1->PathTracingData).DecalRoughnessCutoff;
  (this->PathTracingData).MeshDecalRoughnessCutoff = fVar1;
  (this->PathTracingData).MeshDecalBias = fVar6;
  (this->PathTracingData).CameraFocusDistance = fVar7;
  fVar1 = (param_1->PathTracingData).Petzval;
  fVar6 = (param_1->PathTracingData).PetzvalFalloffPower;
  (this->PathTracingData).CameraLensRadius.field0_0x0 =
       (param_1->PathTracingData).CameraLensRadius.field0_0x0;
  (this->PathTracingData).Petzval = fVar1;
  (this->PathTracingData).PetzvalFalloffPower = fVar6;
  fVar1 = (param_1->PathTracingData).PetzvalExclusionBoxRadius;
  uVar8 = *(undefined4 *)&(param_1->PathTracingData).field_0x8c;
  (this->PathTracingData).PetzvalExclusionBoxExtents.field0_0x0 =
       (param_1->PathTracingData).PetzvalExclusionBoxExtents.field0_0x0;
  (this->PathTracingData).PetzvalExclusionBoxRadius = fVar1;
  *(undefined4 *)&(this->PathTracingData).field_0x8c = uVar8;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  this->LightShowFlags = param_1->LightShowFlags;
  this->LightGridResolution = param_1->LightGridResolution;
  this->LightGridMaxCount = param_1->LightGridMaxCount;
  this->VisibleLights = param_1->VisibleLights;
  this->UseMISCompensation = param_1->UseMISCompensation;
  this->LockedSamplingPattern = param_1->LockedSamplingPattern;
  this->UseCameraMediumTracking = param_1->UseCameraMediumTracking;
  this->UseAdaptiveSampling = param_1->UseAdaptiveSampling;
  this->UseMultiGPU = param_1->UseMultiGPU;
  this->DenoiserMode = param_1->DenoiserMode;
  this->AdaptiveSamplingThreshold = param_1->AdaptiveSamplingThreshold;
  this->CloudAccelerationMapNumSamples = param_1->CloudAccelerationMapNumSamples;
  this->CloudAccelerationMapResolution = param_1->CloudAccelerationMapResolution;
  this->CloudAccelerationMapVisualize = param_1->CloudAccelerationMapVisualize;
  this->CloudMultipleScatterMode = param_1->CloudMultipleScatterMode;
  return this;
}

// IsDOFDifferent @ 1450df610

bool __thiscall
FPathTracingConfig::IsDOFDifferent(FPathTracingConfig *this,FPathTracingConfig *param_1)

{
  if ((((((param_1->PathTracingData).CameraFocusDistance ==
          (this->PathTracingData).CameraFocusDistance) &&
        ((param_1->PathTracingData).CameraLensRadius.field0_0x0._s_0.X ==
         (this->PathTracingData).CameraLensRadius.field0_0x0._s_0.X)) &&
       ((param_1->PathTracingData).CameraLensRadius.field0_0x0._s_0.Y ==
        (this->PathTracingData).CameraLensRadius.field0_0x0._s_0.Y)) &&
      (((param_1->PathTracingData).Petzval == (this->PathTracingData).Petzval &&
       ((param_1->PathTracingData).PetzvalFalloffPower ==
        (this->PathTracingData).PetzvalFalloffPower)))) &&
     (((param_1->PathTracingData).PetzvalExclusionBoxExtents.field0_0x0._s_0.X ==
       (this->PathTracingData).PetzvalExclusionBoxExtents.field0_0x0._s_0.X &&
      (((param_1->PathTracingData).PetzvalExclusionBoxExtents.field0_0x0._s_0.Y ==
        (this->PathTracingData).PetzvalExclusionBoxExtents.field0_0x0._s_0.Y &&
       ((param_1->PathTracingData).PetzvalExclusionBoxRadius ==
        (this->PathTracingData).PetzvalExclusionBoxRadius)))))) {
    return false;
  }
  return true;
}

// IsDifferent @ 1450df870

bool __thiscall
FPathTracingConfig::IsDifferent(FPathTracingConfig *this,FPathTracingConfig *param_1)

{
  if ((((((this->PathTracingData).MaxSamples == (param_1->PathTracingData).MaxSamples) &&
        ((this->PathTracingData).MaxBounces == (param_1->PathTracingData).MaxBounces)) &&
       ((param_1->PathTracingData).BackgroundAlpha == (this->PathTracingData).BackgroundAlpha)) &&
      (((((this->PathTracingData).MaxSSSBounces == (param_1->PathTracingData).MaxSSSBounces &&
         ((param_1->PathTracingData).SSSGuidingRatio == (this->PathTracingData).SSSGuidingRatio)) &&
        (((this->PathTracingData).MISMode == (param_1->PathTracingData).MISMode &&
         (((this->PathTracingData).VolumeMISMode == (param_1->PathTracingData).VolumeMISMode &&
          ((this->PathTracingData).SamplerType == (param_1->PathTracingData).SamplerType)))))) &&
       ((this->PathTracingData).ApproximateCaustics ==
        (param_1->PathTracingData).ApproximateCaustics)))) &&
     (((((((this->PathTracingData).EnableCameraBackfaceCulling ==
           (param_1->PathTracingData).EnableCameraBackfaceCulling &&
          ((this->PathTracingData).EnableDBuffer == (param_1->PathTracingData).EnableDBuffer)) &&
         ((param_1->PathTracingData).MaxPathIntensity == (this->PathTracingData).MaxPathIntensity))
        && (((param_1->PathTracingData).FilterWidth == (this->PathTracingData).FilterWidth &&
            ((this->PathTracingData).VolumeFlags == (param_1->PathTracingData).VolumeFlags)))) &&
       (((this->PathTracingData).ApplyDiffuseSpecularOverrides ==
         (param_1->PathTracingData).ApplyDiffuseSpecularOverrides &&
        (((this->PathTracingData).EnabledDirectLightingContributions ==
          (param_1->PathTracingData).EnabledDirectLightingContributions &&
         ((this->PathTracingData).EnabledIndirectLightingContributions ==
          (param_1->PathTracingData).EnabledIndirectLightingContributions)))))) &&
      ((((((param_1->PathTracingData).CloudRoughnessCutoff ==
           (this->PathTracingData).CloudRoughnessCutoff &&
          ((((((param_1->PathTracingData).DecalRoughnessCutoff ==
               (this->PathTracingData).DecalRoughnessCutoff &&
              ((param_1->PathTracingData).MeshDecalRoughnessCutoff ==
               (this->PathTracingData).MeshDecalRoughnessCutoff)) &&
             ((param_1->PathTracingData).MeshDecalBias == (this->PathTracingData).MeshDecalBias)) &&
            (((this->PathTracingData).MaxRaymarchSteps ==
              (param_1->PathTracingData).MaxRaymarchSteps &&
             (*(int *)&(this->ViewRect).field0_0x0 == *(int *)&(param_1->ViewRect).field0_0x0)))) &&
           (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 4) ==
            *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4))))) &&
         (((*(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) ==
            *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) &&
           (*(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) ==
            *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc))) &&
          ((this->LightShowFlags == param_1->LightShowFlags &&
           (((this->LightGridResolution == param_1->LightGridResolution &&
             (this->LightGridMaxCount == param_1->LightGridMaxCount)) &&
            (this->VisibleLights == param_1->VisibleLights)))))))) &&
        (((this->UseMISCompensation == param_1->UseMISCompensation &&
          (this->LockedSamplingPattern == param_1->LockedSamplingPattern)) &&
         (this->UseCameraMediumTracking == param_1->UseCameraMediumTracking)))) &&
       ((((this->UseAdaptiveSampling == param_1->UseAdaptiveSampling &&
          (param_1->AdaptiveSamplingThreshold == this->AdaptiveSamplingThreshold)) &&
         ((this->CloudAccelerationMapNumSamples == param_1->CloudAccelerationMapNumSamples &&
          (((this->CloudAccelerationMapResolution == param_1->CloudAccelerationMapResolution &&
            (this->CloudAccelerationMapVisualize == param_1->CloudAccelerationMapVisualize)) &&
           (this->CloudMultipleScatterMode == param_1->CloudMultipleScatterMode)))))) &&
        (this->UseMultiGPU == param_1->UseMultiGPU)))))))) {
    return false;
  }
  return true;
}

// IsExposureDifferentEnough @ 1450dfad0

bool __thiscall
FPathTracingConfig::IsExposureDifferentEnough(FPathTracingConfig *this,FPathTracingConfig *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (param_1->PathTracingData).BaseExposure;
  fVar1 = (this->PathTracingData).BaseExposure;
  fVar3 = fVar2;
  if (fVar1 <= fVar2) {
    fVar3 = fVar1;
  }
  fVar1 = (this->PathTracingData).BaseExposure;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar3 * __real_41800000 < fVar2;
}

