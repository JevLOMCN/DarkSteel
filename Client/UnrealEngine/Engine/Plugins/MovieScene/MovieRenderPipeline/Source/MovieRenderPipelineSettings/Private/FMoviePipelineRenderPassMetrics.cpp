// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 2

// ~FMoviePipelineRenderPassMetrics @ 14ddb1b50

void __thiscall
FMoviePipelineRenderPassMetrics::~FMoviePipelineRenderPassMetrics
          (FMoviePipelineRenderPassMetrics *this)

{
  FScriptContainerElement *pFVar1;
  
  (this->FrameInfo)._padding_ = (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
  pFVar1 = (this->FrameInfo).PrevSidecarViewRotations.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameInfo).PrevSidecarViewLocations.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameInfo).CurrSidecarViewRotations.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameInfo).CurrSidecarViewLocations.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(&this->OutputState);
  return;
}

// operator= @ 14ddb1d50

FMoviePipelineRenderPassMetrics * __thiscall
FMoviePipelineRenderPassMetrics::operator=
          (FMoviePipelineRenderPassMetrics *this,FMoviePipelineRenderPassMetrics *param_1)

{
  double dVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined3 uVar8;
  
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
  (this->OutputState).OutputFrameNumber = (param_1->OutputState).OutputFrameNumber;
  (this->OutputState).ShotIndex = (param_1->OutputState).ShotIndex;
  (this->OutputState).ShotCount = (param_1->OutputState).ShotCount;
  (this->OutputState).TemporalSampleIndex = (param_1->OutputState).TemporalSampleIndex;
  (this->OutputState).TemporalSampleCount = (param_1->OutputState).TemporalSampleCount;
  (this->OutputState).ShotOutputFrameNumber = (param_1->OutputState).ShotOutputFrameNumber;
  (this->OutputState).ShotSamplesRendered = (param_1->OutputState).ShotSamplesRendered;
  uVar2 = *(undefined4 *)&(param_1->OutputState).TimeData.field_0x4;
  dVar1 = (param_1->OutputState).TimeData.FrameDeltaTime;
  (this->OutputState).TimeData.MotionBlurFraction =
       (param_1->OutputState).TimeData.MotionBlurFraction;
  *(undefined4 *)&(this->OutputState).TimeData.field_0x4 = uVar2;
  (this->OutputState).TimeData.FrameDeltaTime = dVar1;
  fVar3 = (param_1->OutputState).TimeData.TimeDilation;
  uVar2 = *(undefined4 *)&(param_1->OutputState).TimeData.field_0x1c;
  (this->OutputState).TimeData.WorldSeconds = (param_1->OutputState).TimeData.WorldSeconds;
  (this->OutputState).TimeData.TimeDilation = fVar3;
  *(undefined4 *)&(this->OutputState).TimeData.field_0x1c = uVar2;
  ::FString::operator=(&(this->OutputState).CameraName,&(param_1->OutputState).CameraName);
  ::FString::operator=
            (&(this->OutputState).CameraNameOverride,&(param_1->OutputState).CameraNameOverride);
  ::FString::operator=(&(this->OutputState).ShotName,&(param_1->OutputState).ShotName);
  (this->OutputState).bSkipRendering = (param_1->OutputState).bSkipRendering;
  (this->OutputState).bCaptureRendering = (param_1->OutputState).bCaptureRendering;
  (this->OutputState).bDiscardRenderResult = (param_1->OutputState).bDiscardRenderResult;
  (this->OutputState).SourceFrameNumber = (param_1->OutputState).SourceFrameNumber;
  iVar4 = (param_1->OutputState).SourceTimeCode.Minutes;
  iVar5 = (param_1->OutputState).SourceTimeCode.Seconds;
  iVar6 = (param_1->OutputState).SourceTimeCode.Frames;
  (this->OutputState).SourceTimeCode.Hours = (param_1->OutputState).SourceTimeCode.Hours;
  (this->OutputState).SourceTimeCode.Minutes = iVar4;
  (this->OutputState).SourceTimeCode.Seconds = iVar5;
  (this->OutputState).SourceTimeCode.Frames = iVar6;
  bVar7 = (param_1->OutputState).SourceTimeCode.bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->OutputState).SourceTimeCode.field_0x15;
  (this->OutputState).SourceTimeCode.Subframe = (param_1->OutputState).SourceTimeCode.Subframe;
  (this->OutputState).SourceTimeCode.bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->OutputState).SourceTimeCode.field_0x15 = uVar8;
  (this->OutputState).EffectiveFrameNumber = (param_1->OutputState).EffectiveFrameNumber;
  iVar4 = (param_1->OutputState).EffectiveTimeCode.Minutes;
  iVar5 = (param_1->OutputState).EffectiveTimeCode.Seconds;
  iVar6 = (param_1->OutputState).EffectiveTimeCode.Frames;
  (this->OutputState).EffectiveTimeCode.Hours = (param_1->OutputState).EffectiveTimeCode.Hours;
  (this->OutputState).EffectiveTimeCode.Minutes = iVar4;
  (this->OutputState).EffectiveTimeCode.Seconds = iVar5;
  (this->OutputState).EffectiveTimeCode.Frames = iVar6;
  bVar7 = (param_1->OutputState).EffectiveTimeCode.bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->OutputState).EffectiveTimeCode.field_0x15;
  (this->OutputState).EffectiveTimeCode.Subframe = (param_1->OutputState).EffectiveTimeCode.Subframe
  ;
  (this->OutputState).EffectiveTimeCode.bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->OutputState).EffectiveTimeCode.field_0x15 = uVar8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&(this->OutputState).FileMetadata,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&(param_1->OutputState).FileMetadata);
  (this->OutputState).CurrentShotSourceFrameNumber =
       (param_1->OutputState).CurrentShotSourceFrameNumber;
  iVar4 = (param_1->OutputState).CurrentShotSourceTimeCode.Minutes;
  iVar5 = (param_1->OutputState).CurrentShotSourceTimeCode.Seconds;
  iVar6 = (param_1->OutputState).CurrentShotSourceTimeCode.Frames;
  (this->OutputState).CurrentShotSourceTimeCode.Hours =
       (param_1->OutputState).CurrentShotSourceTimeCode.Hours;
  (this->OutputState).CurrentShotSourceTimeCode.Minutes = iVar4;
  (this->OutputState).CurrentShotSourceTimeCode.Seconds = iVar5;
  (this->OutputState).CurrentShotSourceTimeCode.Frames = iVar6;
  bVar7 = (param_1->OutputState).CurrentShotSourceTimeCode.bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->OutputState).CurrentShotSourceTimeCode.field_0x15;
  (this->OutputState).CurrentShotSourceTimeCode.Subframe =
       (param_1->OutputState).CurrentShotSourceTimeCode.Subframe;
  (this->OutputState).CurrentShotSourceTimeCode.bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->OutputState).CurrentShotSourceTimeCode.field_0x15 = uVar8;
  (this->OutputState).CameraIndex = (param_1->OutputState).CameraIndex;
  dVar1 = (param_1->OverlappedSubpixelShift).field0_0x0._s_0.Y;
  (this->OverlappedSubpixelShift).field0_0x0._s_0.X =
       (param_1->OverlappedSubpixelShift).field0_0x0._s_0.X;
  (this->OverlappedSubpixelShift).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->FrameInfo).CurrViewLocation.field0_0x0._s_0.Y;
  (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.X =
       (param_1->FrameInfo).CurrViewLocation.field0_0x0._s_0.X;
  (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.Y = dVar1;
  (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.Z =
       (param_1->FrameInfo).CurrViewLocation.field0_0x0._s_0.Z;
  dVar1 = (param_1->FrameInfo).CurrViewRotation.Yaw;
  (this->FrameInfo).CurrViewRotation.Pitch = (param_1->FrameInfo).CurrViewRotation.Pitch;
  (this->FrameInfo).CurrViewRotation.Yaw = dVar1;
  (this->FrameInfo).CurrViewRotation.Roll = (param_1->FrameInfo).CurrViewRotation.Roll;
  dVar1 = (param_1->FrameInfo).PrevViewLocation.field0_0x0._s_0.Y;
  (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.X =
       (param_1->FrameInfo).PrevViewLocation.field0_0x0._s_0.X;
  (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.Y = dVar1;
  (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.Z =
       (param_1->FrameInfo).PrevViewLocation.field0_0x0._s_0.Z;
  dVar1 = (param_1->FrameInfo).PrevViewRotation.Yaw;
  (this->FrameInfo).PrevViewRotation.Pitch = (param_1->FrameInfo).PrevViewRotation.Pitch;
  (this->FrameInfo).PrevViewRotation.Yaw = dVar1;
  (this->FrameInfo).PrevViewRotation.Roll = (param_1->FrameInfo).PrevViewRotation.Roll;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->FrameInfo).CurrSidecarViewLocations,
             &(param_1->FrameInfo).CurrSidecarViewLocations);
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->FrameInfo).CurrSidecarViewRotations,
             &(param_1->FrameInfo).CurrSidecarViewRotations);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->FrameInfo).PrevSidecarViewLocations,
             &(param_1->FrameInfo).PrevSidecarViewLocations);
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->FrameInfo).PrevSidecarViewRotations,
             &(param_1->FrameInfo).PrevSidecarViewRotations);
  this->OCIOConfiguration = param_1->OCIOConfiguration;
  return this;
}

