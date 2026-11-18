// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FMoviePipelineRenderPassMetrics @ 14dd6a840

FMoviePipelineRenderPassMetrics * __thiscall
FMoviePipelineRenderPassMetrics::FMoviePipelineRenderPassMetrics
          (FMoviePipelineRenderPassMetrics *this,FMoviePipelineRenderPassMetrics *param_1)

{
  double dVar1;
  
  this->FrameIndex = param_1->FrameIndex;
  this->bWorldIsPaused = param_1->bWorldIsPaused;
  this->bCameraCut = param_1->bCameraCut;
  this->AntiAliasingMethod = param_1->AntiAliasingMethod;
  this->SceneCaptureSource = param_1->SceneCaptureSource;
  (this->OriginalTileCounts).field0_0x0 = (param_1->OriginalTileCounts).field0_0x0;
  (this->TileCounts).field0_0x0 = (param_1->TileCounts).field0_0x0;
  (this->TileIndexes).field0_0x0 = (param_1->TileIndexes).field0_0x0;
  this->SpatialShiftX = param_1->SpatialShiftX;
  this->SpatialShiftY = param_1->SpatialShiftY;
  (this->BackbufferSize).field0_0x0 = (param_1->BackbufferSize).field0_0x0;
  (this->EffectiveOutputResolution).field0_0x0 = (param_1->EffectiveOutputResolution).field0_0x0;
  (this->OverscannedResolution).field0_0x0 = (param_1->OverscannedResolution).field0_0x0;
  (this->TileSize).field0_0x0 = (param_1->TileSize).field0_0x0;
  this->bDiscardResult = param_1->bDiscardResult;
  this->bWriteSampleToDisk = param_1->bWriteSampleToDisk;
  this->SpatialSampleCount = param_1->SpatialSampleCount;
  this->SpatialSampleIndex = param_1->SpatialSampleIndex;
  this->SeedOffset = param_1->SeedOffset;
  this->TemporalSampleCount = param_1->TemporalSampleCount;
  this->TemporalSampleIndex = param_1->TemporalSampleIndex;
  (this->OverlappedPad).field0_0x0 = (param_1->OverlappedPad).field0_0x0;
  (this->OverlappedOffset).field0_0x0 = (param_1->OverlappedOffset).field0_0x0;
  this->OverscanPercentage = param_1->OverscanPercentage;
  this->bOverrideCameraOverscan = param_1->bOverrideCameraOverscan;
  (this->CropRectangle).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->CropRectangle).field0_0x0._s_0.Min.field0_0x0;
  (this->CropRectangle).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->CropRectangle).field0_0x0._s_0.Max.field0_0x0;
  this->AccumulationGamma = param_1->AccumulationGamma;
  dVar1 = (param_1->ProjectionMatrixJitterAmount).field0_0x0._s_0.Y;
  (this->ProjectionMatrixJitterAmount).field0_0x0._s_0.X =
       (param_1->ProjectionMatrixJitterAmount).field0_0x0._s_0.X;
  (this->ProjectionMatrixJitterAmount).field0_0x0._s_0.Y = dVar1;
  this->TextureSharpnessBias = param_1->TextureSharpnessBias;
  this->GlobalScreenPercentageFraction = param_1->GlobalScreenPercentageFraction;
  this->bAutoExposureCubePass = param_1->bAutoExposureCubePass;
  this->AutoExposureCubeFace = param_1->AutoExposureCubeFace;
  FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
            (&this->OutputState,&param_1->OutputState);
  dVar1 = (param_1->OverlappedSubpixelShift).field0_0x0._s_0.Y;
  (this->OverlappedSubpixelShift).field0_0x0._s_0.X =
       (param_1->OverlappedSubpixelShift).field0_0x0._s_0.X;
  (this->OverlappedSubpixelShift).field0_0x0._s_0.Y = dVar1;
  MoviePipeline::FMoviePipelineFrameInfo::FMoviePipelineFrameInfo
            (&this->FrameInfo,&param_1->FrameInfo);
  this->OCIOConfiguration = param_1->OCIOConfiguration;
  return this;
}

