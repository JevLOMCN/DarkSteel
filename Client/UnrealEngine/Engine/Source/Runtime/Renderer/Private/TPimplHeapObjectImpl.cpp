// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// TPimplHeapObjectImpl<FPathTracingState><> @ 14509a670

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TPimplHeapObjectImpl<FPathTracingState> * __thiscall
UE::Core::Private::PimplPtr::TPimplHeapObjectImpl<FPathTracingState>::
TPimplHeapObjectImpl<FPathTracingState><>
          (TPimplHeapObjectImpl<FPathTracingState> *this,ENoCopyType param_1)

{
  this->Deleter = DeleterFunc<FPathTracingState>;
  this->Copier = (_func___cdecl_void_ptr_void_ptr *)0x0;
  (this->Val).LastConfig.PathTracingData.BlendFactor = 0.0;
  (this->Val).LastConfig.PathTracingData.BaseExposure = 0.0;
  (this->Val).LastConfig.PathTracingData.Iteration = 0;
  (this->Val).LastConfig.PathTracingData.TemporalSeed = 0;
  (this->Val).LastConfig.PathTracingData.MaxSamples = 0;
  (this->Val).LastConfig.PathTracingData.MaxBounces = 0;
  (this->Val).LastConfig.PathTracingData.MaxSSSBounces = 0;
  (this->Val).LastConfig.PathTracingData.BackgroundAlpha = 0.0;
  (this->Val).LastConfig.PathTracingData.SSSGuidingRatio = 0.0;
  (this->Val).LastConfig.PathTracingData.MISMode = 0;
  (this->Val).LastConfig.PathTracingData.VolumeMISMode = 0;
  (this->Val).LastConfig.PathTracingData.ApproximateCaustics = 0;
  (this->Val).LastConfig.PathTracingData.EnableCameraBackfaceCulling = 0;
  (this->Val).LastConfig.PathTracingData.SamplerType = 0;
  (this->Val).LastConfig.PathTracingData.EnableDBuffer = 0;
  (this->Val).LastConfig.PathTracingData.VolumeFlags = 0;
  (this->Val).LastConfig.PathTracingData.EnabledDirectLightingContributions = 0;
  (this->Val).LastConfig.PathTracingData.EnabledIndirectLightingContributions = 0;
  (this->Val).LastConfig.PathTracingData.ApplyDiffuseSpecularOverrides = 0;
  (this->Val).LastConfig.PathTracingData.MaxRaymarchSteps = 0;
  (this->Val).LastConfig.PathTracingData.MaxPathIntensity = 0.0;
  (this->Val).LastConfig.PathTracingData.MaxNormalBias = 0.0;
  (this->Val).LastConfig.PathTracingData.FilterWidth = 0.0;
  (this->Val).LastConfig.PathTracingData.CloudRoughnessCutoff = 0.0;
  (this->Val).LastConfig.PathTracingData.DecalRoughnessCutoff = 0.0;
  (this->Val).LastConfig.PathTracingData.MeshDecalRoughnessCutoff = 0.0;
  (this->Val).LastConfig.PathTracingData.MeshDecalBias = 0.0;
  (this->Val).LastConfig.PathTracingData.CameraFocusDistance = 0.0;
  (this->Val).LastConfig.PathTracingData.CameraLensRadius.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Val).LastConfig.PathTracingData.Petzval = 0.0;
  (this->Val).LastConfig.PathTracingData.PetzvalFalloffPower = 0.0;
  (this->Val).LastConfig.PathTracingData.PetzvalExclusionBoxExtents.field0_0x0 =
       (TVector2<float>_u_0)0x0;
  *(undefined8 *)&(this->Val).LastConfig.PathTracingData.PetzvalExclusionBoxRadius = 0;
  (this->Val).LastConfig.LightShowFlags = 0;
  (this->Val).LastConfig.LightGridResolution = 0;
  (this->Val).LastConfig.LightGridMaxCount = 0;
  (this->Val).LastConfig.VisibleLights = false;
  (this->Val).LastConfig.UseMISCompensation = false;
  (this->Val).LastConfig.LockedSamplingPattern = false;
  (this->Val).LastConfig.UseCameraMediumTracking = false;
  (this->Val).LastConfig.UseAdaptiveSampling = false;
  (this->Val).LastConfig.UseMultiGPU = false;
  *(undefined2 *)&(this->Val).LastConfig.field_0xb2 = 0;
  (this->Val).LastConfig.DenoiserMode = 0;
  (this->Val).LastConfig.AdaptiveSamplingThreshold = 0.0;
  (this->Val).LastConfig.CloudAccelerationMapNumSamples = 0;
  (this->Val).LastConfig.CloudAccelerationMapResolution = 0;
  (this->Val).LastConfig.CloudAccelerationMapVisualize = false;
  *(undefined3 *)&(this->Val).LastConfig.field_0xc5 = 0;
  *(undefined8 *)&(this->Val).LastConfig.CloudMultipleScatterMode = 0;
  *(undefined8 *)&(this->Val).AdaptiveOrthoGridParameterCache.TopLevelGridWorldBoundsMin.field0_0x0
       = 0;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveOrthoGridParameterCache.TopLevelGridWorldBoundsMin.field0_0x0 + 8
   ) = 0;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveOrthoGridParameterCache.TopLevelGridWorldBoundsMax.field0_0x0 + 4
   ) = 0;
  *(undefined8 *)&(this->Val).AdaptiveOrthoGridParameterCache.TopLevelGridResolution.field0_0x0 = 0;
  (this->Val).AdaptiveOrthoGridParameterCache.TopLevelGridResolution.field0_0x0._s_0.Z = 0;
  (this->Val).AdaptiveOrthoGridParameterCache.bUseMajorantGrid = 0;
  (this->Val).AdaptiveOrthoGridParameterCache.bEnableIndirectionGrid = 0;
  memset(&(this->Val).field_0x1a8,0,0x1b8);
  (this->Val).AdaptiveFrustumGridParameterCache.NearPlaneDepth = 0.0;
  (this->Val).AdaptiveFrustumGridParameterCache.FarPlaneDepth = 0.0;
  (this->Val).AdaptiveFrustumGridParameterCache.TanHalfFOV = 0.0;
  memset(&(this->Val).field_0x3f8,0,200);
  *(undefined8 *)&(this->Val).field_0x4d8 = 0;
  (this->Val).LastConfig.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Val).LastConfig.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Val).AdaptiveOrthoGridParameterCache.bUseOrthoGrid = 0;
  (this->Val).AdaptiveFrustumGridParameterCache.bUseFrustumGrid = 0;
  *(undefined8 *)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[0].field0_0x0 = 0;
  (this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[0].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[1].field0_0x0 + 4) =
       0;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[1].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[2].field0_0x0 + 4) =
       0;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[2].field0_0x0 + 0xc)
       = 0x3f800000;
  (this->Val).RadianceRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).VarianceRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).AlbedoRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).NormalRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).DepthRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).VarianceBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Val).CloudAccelerationMap.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).MarkovChainStateGrid.Reference = (FRDGPooledBuffer *)0x0;
  (this->Val).LastDenoisedRadianceRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).LastRadianceRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).LastAlbedoRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).LastNormalRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).LastDepthRT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).LastVarianceBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Val).AdaptiveOrthoGridParameterCache.TopLevelGridBitmaskBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->Val).AdaptiveOrthoGridParameterCache.TopLevelGridBuffer.Reference = (FRDGPooledBuffer *)0x0
  ;
  (this->Val).AdaptiveOrthoGridParameterCache.IndirectionGridBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->Val).AdaptiveOrthoGridParameterCache.ExtinctionGridBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->Val).AdaptiveOrthoGridParameterCache.EmissionGridBuffer.Reference = (FRDGPooledBuffer *)0x0
  ;
  (this->Val).AdaptiveOrthoGridParameterCache.ScatteringGridBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->Val).AdaptiveOrthoGridParameterCache.MajorantGridBuffer.Reference = (FRDGPooledBuffer *)0x0
  ;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[3].field0_0x0 + 4) =
       0;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[3].field0_0x0 + 0xc)
       = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[4].field0_0x0 + 4) =
       0;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[4].field0_0x0 + 0xc)
       = 0x3f800000;
  (this->Val).AdaptiveFrustumGridParameterCache.TopLevelGridBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->Val).AdaptiveFrustumGridParameterCache.ExtinctionGridBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->Val).AdaptiveFrustumGridParameterCache.EmissionGridBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->Val).AdaptiveFrustumGridParameterCache.ScatteringGridBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  *(undefined8 *)
   ((longlong)&(this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[5].field0_0x0 + 4) =
       0;
  (this->Val).AdaptiveFrustumGridParameterCache.ViewFrustumPlanes[5].field0_0x0._s_0.W = 1.0;
  (this->Val).AtmosphereOpticalDepthLUT.Reference = (IPooledRenderTarget *)0x0;
  (this->Val).StartingMediumData.Reference = (FRDGPooledBuffer *)0x0;
  (this->Val).SpatialTemporalDenoiserHistory.Reference = (IHistory *)0x0;
  (this->Val).SampleIndex = 0;
  (this->Val).FrameIndex = 0;
  return this;
}

