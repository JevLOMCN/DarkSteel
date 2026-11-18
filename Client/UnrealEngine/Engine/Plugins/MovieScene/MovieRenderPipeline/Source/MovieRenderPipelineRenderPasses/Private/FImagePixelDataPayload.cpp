// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// FImagePixelDataPayload @ 14ddc5610

FImagePixelDataPayload * __thiscall
FImagePixelDataPayload::FImagePixelDataPayload
          (FImagePixelDataPayload *this,FImagePixelDataPayload *param_1)

{
  double dVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined3 uVar8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FImagePixelDataPayload__6B_;
  (this->SampleState).FrameIndex = (param_1->SampleState).FrameIndex;
  (this->SampleState).bWorldIsPaused = (param_1->SampleState).bWorldIsPaused;
  (this->SampleState).bCameraCut = (param_1->SampleState).bCameraCut;
  (this->SampleState).AntiAliasingMethod = (param_1->SampleState).AntiAliasingMethod;
  (this->SampleState).SceneCaptureSource = (param_1->SampleState).SceneCaptureSource;
  (this->SampleState).OriginalTileCounts.field0_0x0 =
       (param_1->SampleState).OriginalTileCounts.field0_0x0;
  (this->SampleState).TileCounts.field0_0x0 = (param_1->SampleState).TileCounts.field0_0x0;
  (this->SampleState).TileIndexes.field0_0x0 = (param_1->SampleState).TileIndexes.field0_0x0;
  (this->SampleState).SpatialShiftX = (param_1->SampleState).SpatialShiftX;
  (this->SampleState).SpatialShiftY = (param_1->SampleState).SpatialShiftY;
  (this->SampleState).BackbufferSize.field0_0x0 = (param_1->SampleState).BackbufferSize.field0_0x0;
  (this->SampleState).EffectiveOutputResolution.field0_0x0 =
       (param_1->SampleState).EffectiveOutputResolution.field0_0x0;
  (this->SampleState).OverscannedResolution.field0_0x0 =
       (param_1->SampleState).OverscannedResolution.field0_0x0;
  (this->SampleState).TileSize.field0_0x0 = (param_1->SampleState).TileSize.field0_0x0;
  (this->SampleState).bDiscardResult = (param_1->SampleState).bDiscardResult;
  (this->SampleState).bWriteSampleToDisk = (param_1->SampleState).bWriteSampleToDisk;
  (this->SampleState).SpatialSampleCount = (param_1->SampleState).SpatialSampleCount;
  (this->SampleState).SpatialSampleIndex = (param_1->SampleState).SpatialSampleIndex;
  (this->SampleState).SeedOffset = (param_1->SampleState).SeedOffset;
  (this->SampleState).TemporalSampleCount = (param_1->SampleState).TemporalSampleCount;
  (this->SampleState).TemporalSampleIndex = (param_1->SampleState).TemporalSampleIndex;
  (this->SampleState).OverlappedPad.field0_0x0 = (param_1->SampleState).OverlappedPad.field0_0x0;
  (this->SampleState).OverlappedOffset.field0_0x0 =
       (param_1->SampleState).OverlappedOffset.field0_0x0;
  (this->SampleState).OverscanPercentage = (param_1->SampleState).OverscanPercentage;
  (this->SampleState).bOverrideCameraOverscan = (param_1->SampleState).bOverrideCameraOverscan;
  (this->SampleState).CropRectangle.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->SampleState).CropRectangle.field0_0x0._s_0.Min.field0_0x0;
  (this->SampleState).CropRectangle.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->SampleState).CropRectangle.field0_0x0._s_0.Max.field0_0x0;
  (this->SampleState).AccumulationGamma = (param_1->SampleState).AccumulationGamma;
  dVar1 = (param_1->SampleState).ProjectionMatrixJitterAmount.field0_0x0._s_0.Y;
  (this->SampleState).ProjectionMatrixJitterAmount.field0_0x0._s_0.X =
       (param_1->SampleState).ProjectionMatrixJitterAmount.field0_0x0._s_0.X;
  (this->SampleState).ProjectionMatrixJitterAmount.field0_0x0._s_0.Y = dVar1;
  (this->SampleState).TextureSharpnessBias = (param_1->SampleState).TextureSharpnessBias;
  (this->SampleState).GlobalScreenPercentageFraction =
       (param_1->SampleState).GlobalScreenPercentageFraction;
  (this->SampleState).bAutoExposureCubePass = (param_1->SampleState).bAutoExposureCubePass;
  (this->SampleState).AutoExposureCubeFace = (param_1->SampleState).AutoExposureCubeFace;
  (this->SampleState).OutputState.OutputFrameNumber =
       (param_1->SampleState).OutputState.OutputFrameNumber;
  (this->SampleState).OutputState.ShotIndex = (param_1->SampleState).OutputState.ShotIndex;
  (this->SampleState).OutputState.ShotCount = (param_1->SampleState).OutputState.ShotCount;
  (this->SampleState).OutputState.TemporalSampleIndex =
       (param_1->SampleState).OutputState.TemporalSampleIndex;
  (this->SampleState).OutputState.TemporalSampleCount =
       (param_1->SampleState).OutputState.TemporalSampleCount;
  (this->SampleState).OutputState.ShotOutputFrameNumber =
       (param_1->SampleState).OutputState.ShotOutputFrameNumber;
  (this->SampleState).OutputState.ShotSamplesRendered =
       (param_1->SampleState).OutputState.ShotSamplesRendered;
  uVar2 = *(undefined4 *)&(param_1->SampleState).OutputState.TimeData.field_0x4;
  dVar1 = (param_1->SampleState).OutputState.TimeData.FrameDeltaTime;
  (this->SampleState).OutputState.TimeData.MotionBlurFraction =
       (param_1->SampleState).OutputState.TimeData.MotionBlurFraction;
  *(undefined4 *)&(this->SampleState).OutputState.TimeData.field_0x4 = uVar2;
  (this->SampleState).OutputState.TimeData.FrameDeltaTime = dVar1;
  fVar3 = (param_1->SampleState).OutputState.TimeData.TimeDilation;
  uVar2 = *(undefined4 *)&(param_1->SampleState).OutputState.TimeData.field_0x1c;
  (this->SampleState).OutputState.TimeData.WorldSeconds =
       (param_1->SampleState).OutputState.TimeData.WorldSeconds;
  (this->SampleState).OutputState.TimeData.TimeDilation = fVar3;
  *(undefined4 *)&(this->SampleState).OutputState.TimeData.field_0x1c = uVar2;
  ::FString::FString(&(this->SampleState).OutputState.CameraName,
                     &(param_1->SampleState).OutputState.CameraName);
  ::FString::FString(&(this->SampleState).OutputState.CameraNameOverride,
                     &(param_1->SampleState).OutputState.CameraNameOverride);
  ::FString::FString(&(this->SampleState).OutputState.ShotName,
                     &(param_1->SampleState).OutputState.ShotName);
  (this->SampleState).OutputState.bSkipRendering = (param_1->SampleState).OutputState.bSkipRendering
  ;
  (this->SampleState).OutputState.bCaptureRendering =
       (param_1->SampleState).OutputState.bCaptureRendering;
  (this->SampleState).OutputState.bDiscardRenderResult =
       (param_1->SampleState).OutputState.bDiscardRenderResult;
  (this->SampleState).OutputState.SourceFrameNumber =
       (param_1->SampleState).OutputState.SourceFrameNumber;
  iVar4 = (param_1->SampleState).OutputState.SourceTimeCode.Minutes;
  iVar5 = (param_1->SampleState).OutputState.SourceTimeCode.Seconds;
  iVar6 = (param_1->SampleState).OutputState.SourceTimeCode.Frames;
  (this->SampleState).OutputState.SourceTimeCode.Hours =
       (param_1->SampleState).OutputState.SourceTimeCode.Hours;
  (this->SampleState).OutputState.SourceTimeCode.Minutes = iVar4;
  (this->SampleState).OutputState.SourceTimeCode.Seconds = iVar5;
  (this->SampleState).OutputState.SourceTimeCode.Frames = iVar6;
  bVar7 = (param_1->SampleState).OutputState.SourceTimeCode.bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->SampleState).OutputState.SourceTimeCode.field_0x15;
  (this->SampleState).OutputState.SourceTimeCode.Subframe =
       (param_1->SampleState).OutputState.SourceTimeCode.Subframe;
  (this->SampleState).OutputState.SourceTimeCode.bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->SampleState).OutputState.SourceTimeCode.field_0x15 = uVar8;
  (this->SampleState).OutputState.EffectiveFrameNumber =
       (param_1->SampleState).OutputState.EffectiveFrameNumber;
  iVar4 = (param_1->SampleState).OutputState.EffectiveTimeCode.Minutes;
  iVar5 = (param_1->SampleState).OutputState.EffectiveTimeCode.Seconds;
  iVar6 = (param_1->SampleState).OutputState.EffectiveTimeCode.Frames;
  (this->SampleState).OutputState.EffectiveTimeCode.Hours =
       (param_1->SampleState).OutputState.EffectiveTimeCode.Hours;
  (this->SampleState).OutputState.EffectiveTimeCode.Minutes = iVar4;
  (this->SampleState).OutputState.EffectiveTimeCode.Seconds = iVar5;
  (this->SampleState).OutputState.EffectiveTimeCode.Frames = iVar6;
  bVar7 = (param_1->SampleState).OutputState.EffectiveTimeCode.bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->SampleState).OutputState.EffectiveTimeCode.field_0x15;
  (this->SampleState).OutputState.EffectiveTimeCode.Subframe =
       (param_1->SampleState).OutputState.EffectiveTimeCode.Subframe;
  (this->SampleState).OutputState.EffectiveTimeCode.bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->SampleState).OutputState.EffectiveTimeCode.field_0x15 = uVar8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            (&(this->SampleState).OutputState.FileMetadata,
             &(param_1->SampleState).OutputState.FileMetadata);
  (this->SampleState).OutputState.CurrentShotSourceFrameNumber =
       (param_1->SampleState).OutputState.CurrentShotSourceFrameNumber;
  iVar4 = (param_1->SampleState).OutputState.CurrentShotSourceTimeCode.Minutes;
  iVar5 = (param_1->SampleState).OutputState.CurrentShotSourceTimeCode.Seconds;
  iVar6 = (param_1->SampleState).OutputState.CurrentShotSourceTimeCode.Frames;
  (this->SampleState).OutputState.CurrentShotSourceTimeCode.Hours =
       (param_1->SampleState).OutputState.CurrentShotSourceTimeCode.Hours;
  (this->SampleState).OutputState.CurrentShotSourceTimeCode.Minutes = iVar4;
  (this->SampleState).OutputState.CurrentShotSourceTimeCode.Seconds = iVar5;
  (this->SampleState).OutputState.CurrentShotSourceTimeCode.Frames = iVar6;
  bVar7 = (param_1->SampleState).OutputState.CurrentShotSourceTimeCode.bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->SampleState).OutputState.CurrentShotSourceTimeCode.field_0x15;
  (this->SampleState).OutputState.CurrentShotSourceTimeCode.Subframe =
       (param_1->SampleState).OutputState.CurrentShotSourceTimeCode.Subframe;
  (this->SampleState).OutputState.CurrentShotSourceTimeCode.bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->SampleState).OutputState.CurrentShotSourceTimeCode.field_0x15 = uVar8;
  (this->SampleState).OutputState.CameraIndex = (param_1->SampleState).OutputState.CameraIndex;
  dVar1 = (param_1->SampleState).OverlappedSubpixelShift.field0_0x0._s_0.Y;
  (this->SampleState).OverlappedSubpixelShift.field0_0x0._s_0.X =
       (param_1->SampleState).OverlappedSubpixelShift.field0_0x0._s_0.X;
  (this->SampleState).OverlappedSubpixelShift.field0_0x0._s_0.Y = dVar1;
  MoviePipeline::FMoviePipelineFrameInfo::FMoviePipelineFrameInfo
            (&(this->SampleState).FrameInfo,&(param_1->SampleState).FrameInfo);
  (this->SampleState).OCIOConfiguration = (param_1->SampleState).OCIOConfiguration;
  ::FString::FString(&(this->PassIdentifier).Name,&(param_1->PassIdentifier).Name);
  ::FString::FString(&(this->PassIdentifier).CameraName,&(param_1->PassIdentifier).CameraName);
  this->bRequireTransparentOutput = param_1->bRequireTransparentOutput;
  this->SortingOrder = param_1->SortingOrder;
  this->bCompositeToFinalImage = param_1->bCompositeToFinalImage;
  ::FString::FString(&this->Debug_OverrideFilename,&param_1->Debug_OverrideFilename);
  return this;
}

