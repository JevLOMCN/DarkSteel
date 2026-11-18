// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// StaticStruct @ 14dc6a260

UScriptStruct * __cdecl FMovieGraphTimeStepData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphTimeStepData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphTimeStepData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphTimeStepData,(UObject *)pUVar1,
                         L"MovieGraphTimeStepData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphTimeStepData.OuterSingleton;
}

// FMovieGraphTimeStepData @ 14dc72740

FMovieGraphTimeStepData * __thiscall
FMovieGraphTimeStepData::FMovieGraphTimeStepData
          (FMovieGraphTimeStepData *this,FMovieGraphTimeStepData *param_1)

{
  UMovieGraphEvaluatedConfig *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined3 uVar6;
  
  this->OutputFrameNumber = param_1->OutputFrameNumber;
  this->ShotOutputFrameNumber = param_1->ShotOutputFrameNumber;
  this->RenderedFrameNumber = param_1->RenderedFrameNumber;
  this->FrameDeltaTime = param_1->FrameDeltaTime;
  this->WorldTimeDilation = param_1->WorldTimeDilation;
  this->bHasRelativeTimeBeenUsed = param_1->bHasRelativeTimeBeenUsed;
  this->WorldSeconds = param_1->WorldSeconds;
  this->MotionBlurFraction = param_1->MotionBlurFraction;
  this->FrameRate = param_1->FrameRate;
  this->TemporalSampleIndex = param_1->TemporalSampleIndex;
  this->TemporalSampleCount = param_1->TemporalSampleCount;
  this->SpatialSampleIndex = param_1->SpatialSampleIndex;
  this->SpatialSampleCount = param_1->SpatialSampleCount;
  this->bIsFirstTemporalSampleForFrame = param_1->bIsFirstTemporalSampleForFrame;
  this->bIsLastTemporalSampleForFrame = param_1->bIsLastTemporalSampleForFrame;
  this->bDiscardOutput = param_1->bDiscardOutput;
  this->bRequiresAccumulator = param_1->bRequiresAccumulator;
  pUVar1 = (param_1->EvaluatedConfig).field0_0x0.DebugPtr;
  (this->EvaluatedConfig).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  iVar2 = (param_1->RootTimeCode).Minutes;
  iVar3 = (param_1->RootTimeCode).Seconds;
  iVar4 = (param_1->RootTimeCode).Frames;
  (this->RootTimeCode).Hours = (param_1->RootTimeCode).Hours;
  (this->RootTimeCode).Minutes = iVar2;
  (this->RootTimeCode).Seconds = iVar3;
  (this->RootTimeCode).Frames = iVar4;
  bVar5 = (param_1->RootTimeCode).bDropFrameFormat;
  uVar6 = *(undefined3 *)&(param_1->RootTimeCode).field_0x15;
  (this->RootTimeCode).Subframe = (param_1->RootTimeCode).Subframe;
  (this->RootTimeCode).bDropFrameFormat = bVar5;
  *(undefined3 *)&(this->RootTimeCode).field_0x15 = uVar6;
  (this->RootFrameNumber).Value = (param_1->RootFrameNumber).Value;
  iVar2 = (param_1->ShotTimeCode).Minutes;
  iVar3 = (param_1->ShotTimeCode).Seconds;
  iVar4 = (param_1->ShotTimeCode).Frames;
  (this->ShotTimeCode).Hours = (param_1->ShotTimeCode).Hours;
  (this->ShotTimeCode).Minutes = iVar2;
  (this->ShotTimeCode).Seconds = iVar3;
  (this->ShotTimeCode).Frames = iVar4;
  bVar5 = (param_1->ShotTimeCode).bDropFrameFormat;
  uVar6 = *(undefined3 *)&(param_1->ShotTimeCode).field_0x15;
  (this->ShotTimeCode).Subframe = (param_1->ShotTimeCode).Subframe;
  (this->ShotTimeCode).bDropFrameFormat = bVar5;
  *(undefined3 *)&(this->ShotTimeCode).field_0x15 = uVar6;
  (this->ShotFrameNumber).Value = (param_1->ShotFrameNumber).Value;
  return this;
}

// operator= @ 14dc75710

FMovieGraphTimeStepData * __thiscall
FMovieGraphTimeStepData::operator=(FMovieGraphTimeStepData *this,FMovieGraphTimeStepData *param_1)

{
  UMovieGraphEvaluatedConfig *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined3 uVar6;
  
  this->OutputFrameNumber = param_1->OutputFrameNumber;
  this->ShotOutputFrameNumber = param_1->ShotOutputFrameNumber;
  this->RenderedFrameNumber = param_1->RenderedFrameNumber;
  this->FrameDeltaTime = param_1->FrameDeltaTime;
  this->WorldTimeDilation = param_1->WorldTimeDilation;
  this->bHasRelativeTimeBeenUsed = param_1->bHasRelativeTimeBeenUsed;
  this->WorldSeconds = param_1->WorldSeconds;
  this->MotionBlurFraction = param_1->MotionBlurFraction;
  this->FrameRate = param_1->FrameRate;
  this->TemporalSampleIndex = param_1->TemporalSampleIndex;
  this->TemporalSampleCount = param_1->TemporalSampleCount;
  this->SpatialSampleIndex = param_1->SpatialSampleIndex;
  this->SpatialSampleCount = param_1->SpatialSampleCount;
  this->bIsFirstTemporalSampleForFrame = param_1->bIsFirstTemporalSampleForFrame;
  this->bIsLastTemporalSampleForFrame = param_1->bIsLastTemporalSampleForFrame;
  this->bDiscardOutput = param_1->bDiscardOutput;
  this->bRequiresAccumulator = param_1->bRequiresAccumulator;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->EvaluatedConfig).field0_0x0.DebugPtr,
     pUVar1 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->EvaluatedConfig).field0_0x0 = (param_1->EvaluatedConfig).field0_0x0;
  iVar2 = (param_1->RootTimeCode).Minutes;
  iVar3 = (param_1->RootTimeCode).Seconds;
  iVar4 = (param_1->RootTimeCode).Frames;
  (this->RootTimeCode).Hours = (param_1->RootTimeCode).Hours;
  (this->RootTimeCode).Minutes = iVar2;
  (this->RootTimeCode).Seconds = iVar3;
  (this->RootTimeCode).Frames = iVar4;
  bVar5 = (param_1->RootTimeCode).bDropFrameFormat;
  uVar6 = *(undefined3 *)&(param_1->RootTimeCode).field_0x15;
  (this->RootTimeCode).Subframe = (param_1->RootTimeCode).Subframe;
  (this->RootTimeCode).bDropFrameFormat = bVar5;
  *(undefined3 *)&(this->RootTimeCode).field_0x15 = uVar6;
  (this->RootFrameNumber).Value = (param_1->RootFrameNumber).Value;
  iVar2 = (param_1->ShotTimeCode).Minutes;
  iVar3 = (param_1->ShotTimeCode).Seconds;
  iVar4 = (param_1->ShotTimeCode).Frames;
  (this->ShotTimeCode).Hours = (param_1->ShotTimeCode).Hours;
  (this->ShotTimeCode).Minutes = iVar2;
  (this->ShotTimeCode).Seconds = iVar3;
  (this->ShotTimeCode).Frames = iVar4;
  bVar5 = (param_1->ShotTimeCode).bDropFrameFormat;
  uVar6 = *(undefined3 *)&(param_1->ShotTimeCode).field_0x15;
  (this->ShotTimeCode).Subframe = (param_1->ShotTimeCode).Subframe;
  (this->ShotTimeCode).bDropFrameFormat = bVar5;
  *(undefined3 *)&(this->ShotTimeCode).field_0x15 = uVar6;
  (this->ShotFrameNumber).Value = (param_1->ShotFrameNumber).Value;
  return this;
}

// operator= @ 14dcb3d60

FMovieGraphTimeStepData * __thiscall
FMovieGraphTimeStepData::operator=(FMovieGraphTimeStepData *this,FMovieGraphTimeStepData *param_1)

{
  UMovieGraphEvaluatedConfig *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined3 uVar6;
  
  this->OutputFrameNumber = param_1->OutputFrameNumber;
  this->ShotOutputFrameNumber = param_1->ShotOutputFrameNumber;
  this->RenderedFrameNumber = param_1->RenderedFrameNumber;
  this->FrameDeltaTime = param_1->FrameDeltaTime;
  this->WorldTimeDilation = param_1->WorldTimeDilation;
  this->bHasRelativeTimeBeenUsed = param_1->bHasRelativeTimeBeenUsed;
  this->WorldSeconds = param_1->WorldSeconds;
  this->MotionBlurFraction = param_1->MotionBlurFraction;
  this->FrameRate = param_1->FrameRate;
  this->TemporalSampleIndex = param_1->TemporalSampleIndex;
  this->TemporalSampleCount = param_1->TemporalSampleCount;
  this->SpatialSampleIndex = param_1->SpatialSampleIndex;
  this->SpatialSampleCount = param_1->SpatialSampleCount;
  this->bIsFirstTemporalSampleForFrame = param_1->bIsFirstTemporalSampleForFrame;
  this->bIsLastTemporalSampleForFrame = param_1->bIsLastTemporalSampleForFrame;
  this->bDiscardOutput = param_1->bDiscardOutput;
  this->bRequiresAccumulator = param_1->bRequiresAccumulator;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->EvaluatedConfig).field0_0x0.DebugPtr,
     pUVar1 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->EvaluatedConfig).field0_0x0 = (param_1->EvaluatedConfig).field0_0x0;
  iVar2 = (param_1->RootTimeCode).Minutes;
  iVar3 = (param_1->RootTimeCode).Seconds;
  iVar4 = (param_1->RootTimeCode).Frames;
  (this->RootTimeCode).Hours = (param_1->RootTimeCode).Hours;
  (this->RootTimeCode).Minutes = iVar2;
  (this->RootTimeCode).Seconds = iVar3;
  (this->RootTimeCode).Frames = iVar4;
  bVar5 = (param_1->RootTimeCode).bDropFrameFormat;
  uVar6 = *(undefined3 *)&(param_1->RootTimeCode).field_0x15;
  (this->RootTimeCode).Subframe = (param_1->RootTimeCode).Subframe;
  (this->RootTimeCode).bDropFrameFormat = bVar5;
  *(undefined3 *)&(this->RootTimeCode).field_0x15 = uVar6;
  (this->RootFrameNumber).Value = (param_1->RootFrameNumber).Value;
  iVar2 = (param_1->ShotTimeCode).Minutes;
  iVar3 = (param_1->ShotTimeCode).Seconds;
  iVar4 = (param_1->ShotTimeCode).Frames;
  (this->ShotTimeCode).Hours = (param_1->ShotTimeCode).Hours;
  (this->ShotTimeCode).Minutes = iVar2;
  (this->ShotTimeCode).Seconds = iVar3;
  (this->ShotTimeCode).Frames = iVar4;
  bVar5 = (param_1->ShotTimeCode).bDropFrameFormat;
  uVar6 = *(undefined3 *)&(param_1->ShotTimeCode).field_0x15;
  (this->ShotTimeCode).Subframe = (param_1->ShotTimeCode).Subframe;
  (this->ShotTimeCode).bDropFrameFormat = bVar5;
  *(undefined3 *)&(this->ShotTimeCode).field_0x15 = uVar6;
  (this->ShotFrameNumber).Value = (param_1->ShotFrameNumber).Value;
  return this;
}

