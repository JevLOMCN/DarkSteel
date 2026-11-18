// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticStruct @ 14dc6a2e0

UScriptStruct * __cdecl FMovieGraphTraversalContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphTraversalContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphTraversalContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphTraversalContext,(UObject *)pUVar1,
                         L"MovieGraphTraversalContext");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphTraversalContext.OuterSingleton;
}

// FMovieGraphTraversalContext @ 14dc72820

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphTraversalContext * __thiscall
FMovieGraphTraversalContext::FMovieGraphTraversalContext
          (FMovieGraphTraversalContext *this,FMovieGraphTraversalContext *param_1)

{
  UMoviePipelineExecutorJob *pUVar1;
  UMoviePipelineExecutorShot *pUVar2;
  UMovieGraphConfig *pUVar3;
  
  this->ShotIndex = param_1->ShotIndex;
  this->ShotCount = param_1->ShotCount;
  pUVar1 = (param_1->Job).field0_0x0.DebugPtr;
  (this->Job).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->Shot).field0_0x0.DebugPtr;
  (this->Shot).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->RootGraph).field0_0x0.DebugPtr;
  (this->RootGraph).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieGraphConfig *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->RenderDataIdentifier).RootBranchName = (param_1->RenderDataIdentifier).RootBranchName;
  ::FString::FString(&(this->RenderDataIdentifier).LayerName,
                     &(param_1->RenderDataIdentifier).LayerName);
  ::FString::FString(&(this->RenderDataIdentifier).RendererName,
                     &(param_1->RenderDataIdentifier).RendererName);
  ::FString::FString(&(this->RenderDataIdentifier).SubResourceName,
                     &(param_1->RenderDataIdentifier).SubResourceName);
  ::FString::FString(&(this->RenderDataIdentifier).CameraName,
                     &(param_1->RenderDataIdentifier).CameraName);
  FMovieGraphTimeStepData::FMovieGraphTimeStepData(&this->Time,&param_1->Time);
  return this;
}

// FMovieGraphTraversalContext @ 14dc728f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphTraversalContext * __thiscall
FMovieGraphTraversalContext::FMovieGraphTraversalContext(FMovieGraphTraversalContext *this)

{
  this->ShotIndex = 0;
  this->ShotCount = 0;
  (this->Job).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  (this->Shot).field0_0x0.DebugPtr = (UMoviePipelineExecutorShot *)0x0;
  (this->RootGraph).field0_0x0.DebugPtr = (UMovieGraphConfig *)0x0;
  (this->RenderDataIdentifier).RootBranchName.ComparisonIndex = 0;
  (this->RenderDataIdentifier).RootBranchName.Number = 0;
  (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayMax = 0;
  (this->Time).OutputFrameNumber = 0;
  (this->Time).ShotOutputFrameNumber = 0;
  (this->Time).RenderedFrameNumber = 0;
  (this->Time).FrameDeltaTime = 0.0;
  (this->Time).WorldTimeDilation = 0.0;
  (this->Time).bHasRelativeTimeBeenUsed = false;
  (this->Time).WorldSeconds = 0.0;
  (this->Time).MotionBlurFraction = 0.0;
  (this->Time).FrameRate.Numerator = 0;
  (this->Time).FrameRate.Denominator = 0;
  (this->Time).TemporalSampleIndex = 0;
  (this->Time).TemporalSampleCount = 0;
  (this->Time).SpatialSampleIndex = 0;
  (this->Time).SpatialSampleCount = 0;
  (this->Time).bIsFirstTemporalSampleForFrame = false;
  (this->Time).bIsLastTemporalSampleForFrame = false;
  (this->Time).bDiscardOutput = false;
  (this->Time).bRequiresAccumulator = false;
  (this->Time).EvaluatedConfig.field0_0x0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  (this->Time).RootTimeCode.Hours = 0;
  (this->Time).RootTimeCode.Minutes = 0;
  (this->Time).RootTimeCode.Seconds = 0;
  (this->Time).RootTimeCode.Frames = 0;
  (this->Time).RootTimeCode.Subframe = 0.0;
  (this->Time).RootTimeCode.bDropFrameFormat = false;
  (this->Time).RootFrameNumber = 0;
  (this->Time).ShotTimeCode.Hours = 0;
  (this->Time).ShotTimeCode.Minutes = 0;
  (this->Time).ShotTimeCode.Seconds = 0;
  (this->Time).ShotTimeCode.Frames = 0;
  (this->Time).ShotTimeCode.Subframe = 0.0;
  (this->Time).ShotTimeCode.bDropFrameFormat = false;
  (this->Time).ShotFrameNumber.Value = 0;
  return this;
}

// ~FMovieGraphTraversalContext @ 14dc74350

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieGraphTraversalContext::~FMovieGraphTraversalContext(FMovieGraphTraversalContext *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14dc757f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphTraversalContext * __thiscall
FMovieGraphTraversalContext::operator=
          (FMovieGraphTraversalContext *this,FMovieGraphTraversalContext *param_1)

{
  UMoviePipelineExecutorJob *pUVar1;
  UMoviePipelineExecutorShot *pUVar2;
  UMovieGraphConfig *pUVar3;
  
  this->ShotIndex = param_1->ShotIndex;
  this->ShotCount = param_1->ShotCount;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Job).field0_0x0.DebugPtr, pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Job).field0_0x0 = (param_1->Job).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->Shot).field0_0x0.DebugPtr, pUVar2 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Shot).field0_0x0 = (param_1->Shot).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->RootGraph).field0_0x0.DebugPtr, pUVar3 != (UMovieGraphConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->RootGraph).field0_0x0 = (param_1->RootGraph).field0_0x0;
  (this->RenderDataIdentifier).RootBranchName = (param_1->RenderDataIdentifier).RootBranchName;
  ::FString::operator=
            (&(this->RenderDataIdentifier).LayerName,&(param_1->RenderDataIdentifier).LayerName);
  ::FString::operator=
            (&(this->RenderDataIdentifier).RendererName,
             &(param_1->RenderDataIdentifier).RendererName);
  ::FString::operator=
            (&(this->RenderDataIdentifier).SubResourceName,
             &(param_1->RenderDataIdentifier).SubResourceName);
  ::FString::operator=
            (&(this->RenderDataIdentifier).CameraName,&(param_1->RenderDataIdentifier).CameraName);
  FMovieGraphTimeStepData::operator=(&this->Time,&param_1->Time);
  return this;
}

// FMovieGraphTraversalContext @ 14dcae490

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphTraversalContext * __thiscall
FMovieGraphTraversalContext::FMovieGraphTraversalContext
          (FMovieGraphTraversalContext *this,FMovieGraphTraversalContext *param_1)

{
  UMoviePipelineExecutorJob *pUVar1;
  UMoviePipelineExecutorShot *pUVar2;
  UMovieGraphConfig *pUVar3;
  UMovieGraphEvaluatedConfig *pUVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined3 uVar9;
  
  this->ShotIndex = param_1->ShotIndex;
  this->ShotCount = param_1->ShotCount;
  pUVar1 = (param_1->Job).field0_0x0.DebugPtr;
  (this->Job).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->Shot).field0_0x0.DebugPtr;
  (this->Shot).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->RootGraph).field0_0x0.DebugPtr;
  (this->RootGraph).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieGraphConfig *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->RenderDataIdentifier).RootBranchName = (param_1->RenderDataIdentifier).RootBranchName;
  (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (param_1->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayNum =
       (param_1->RenderDataIdentifier).LayerName.Data.ArrayNum;
  (this->RenderDataIdentifier).LayerName.Data.ArrayMax =
       (param_1->RenderDataIdentifier).LayerName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).LayerName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).LayerName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (param_1->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayNum =
       (param_1->RenderDataIdentifier).RendererName.Data.ArrayNum;
  (this->RenderDataIdentifier).RendererName.Data.ArrayMax =
       (param_1->RenderDataIdentifier).RendererName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).RendererName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).RendererName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (param_1->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum =
       (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayNum;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax =
       (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (param_1->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayNum =
       (param_1->RenderDataIdentifier).CameraName.Data.ArrayNum;
  (this->RenderDataIdentifier).CameraName.Data.ArrayMax =
       (param_1->RenderDataIdentifier).CameraName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).CameraName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).CameraName.Data.ArrayMax = 0;
  (this->Time).OutputFrameNumber = (param_1->Time).OutputFrameNumber;
  (this->Time).ShotOutputFrameNumber = (param_1->Time).ShotOutputFrameNumber;
  (this->Time).RenderedFrameNumber = (param_1->Time).RenderedFrameNumber;
  (this->Time).FrameDeltaTime = (param_1->Time).FrameDeltaTime;
  (this->Time).WorldTimeDilation = (param_1->Time).WorldTimeDilation;
  (this->Time).bHasRelativeTimeBeenUsed = (param_1->Time).bHasRelativeTimeBeenUsed;
  (this->Time).WorldSeconds = (param_1->Time).WorldSeconds;
  (this->Time).MotionBlurFraction = (param_1->Time).MotionBlurFraction;
  (this->Time).FrameRate = (param_1->Time).FrameRate;
  (this->Time).TemporalSampleIndex = (param_1->Time).TemporalSampleIndex;
  (this->Time).TemporalSampleCount = (param_1->Time).TemporalSampleCount;
  (this->Time).SpatialSampleIndex = (param_1->Time).SpatialSampleIndex;
  (this->Time).SpatialSampleCount = (param_1->Time).SpatialSampleCount;
  (this->Time).bIsFirstTemporalSampleForFrame = (param_1->Time).bIsFirstTemporalSampleForFrame;
  (this->Time).bIsLastTemporalSampleForFrame = (param_1->Time).bIsLastTemporalSampleForFrame;
  (this->Time).bDiscardOutput = (param_1->Time).bDiscardOutput;
  (this->Time).bRequiresAccumulator = (param_1->Time).bRequiresAccumulator;
  pUVar4 = (param_1->Time).EvaluatedConfig.field0_0x0.DebugPtr;
  (this->Time).EvaluatedConfig.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  iVar5 = (param_1->Time).RootTimeCode.Minutes;
  iVar6 = (param_1->Time).RootTimeCode.Seconds;
  iVar7 = (param_1->Time).RootTimeCode.Frames;
  (this->Time).RootTimeCode.Hours = (param_1->Time).RootTimeCode.Hours;
  (this->Time).RootTimeCode.Minutes = iVar5;
  (this->Time).RootTimeCode.Seconds = iVar6;
  (this->Time).RootTimeCode.Frames = iVar7;
  bVar8 = (param_1->Time).RootTimeCode.bDropFrameFormat;
  uVar9 = *(undefined3 *)&(param_1->Time).RootTimeCode.field_0x15;
  (this->Time).RootTimeCode.Subframe = (param_1->Time).RootTimeCode.Subframe;
  (this->Time).RootTimeCode.bDropFrameFormat = bVar8;
  *(undefined3 *)&(this->Time).RootTimeCode.field_0x15 = uVar9;
  (this->Time).RootFrameNumber.Value = (param_1->Time).RootFrameNumber.Value;
  iVar5 = (param_1->Time).ShotTimeCode.Minutes;
  iVar6 = (param_1->Time).ShotTimeCode.Seconds;
  iVar7 = (param_1->Time).ShotTimeCode.Frames;
  (this->Time).ShotTimeCode.Hours = (param_1->Time).ShotTimeCode.Hours;
  (this->Time).ShotTimeCode.Minutes = iVar5;
  (this->Time).ShotTimeCode.Seconds = iVar6;
  (this->Time).ShotTimeCode.Frames = iVar7;
  bVar8 = (param_1->Time).ShotTimeCode.bDropFrameFormat;
  uVar9 = *(undefined3 *)&(param_1->Time).ShotTimeCode.field_0x15;
  (this->Time).ShotTimeCode.Subframe = (param_1->Time).ShotTimeCode.Subframe;
  (this->Time).ShotTimeCode.bDropFrameFormat = bVar8;
  *(undefined3 *)&(this->Time).ShotTimeCode.field_0x15 = uVar9;
  (this->Time).ShotFrameNumber.Value = (param_1->Time).ShotFrameNumber.Value;
  return this;
}

// operator= @ 14dcb3e40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphTraversalContext * __thiscall
FMovieGraphTraversalContext::operator=
          (FMovieGraphTraversalContext *this,FMovieGraphTraversalContext *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  UMoviePipelineExecutorJob *pUVar3;
  UMoviePipelineExecutorShot *pUVar4;
  UMovieGraphConfig *pUVar5;
  FScriptContainerElement *pFVar6;
  
  this->ShotIndex = param_1->ShotIndex;
  this->ShotCount = param_1->ShotCount;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->Job).field0_0x0.DebugPtr, pUVar3 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->Job).field0_0x0 = (param_1->Job).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->Shot).field0_0x0.DebugPtr, pUVar4 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Shot).field0_0x0 = (param_1->Shot).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->RootGraph).field0_0x0.DebugPtr, pUVar5 != (UMovieGraphConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pFVar1 = &(param_1->RenderDataIdentifier).LayerName;
  (this->RootGraph).field0_0x0 = (param_1->RootGraph).field0_0x0;
  pFVar2 = &(this->RenderDataIdentifier).LayerName;
  (this->RenderDataIdentifier).RootBranchName = (param_1->RenderDataIdentifier).RootBranchName;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RenderDataIdentifier).LayerName.Data.ArrayNum =
         (param_1->RenderDataIdentifier).LayerName.Data.ArrayNum;
    (this->RenderDataIdentifier).LayerName.Data.ArrayMax =
         (param_1->RenderDataIdentifier).LayerName.Data.ArrayMax;
    (param_1->RenderDataIdentifier).LayerName.Data.ArrayNum = 0;
    (param_1->RenderDataIdentifier).LayerName.Data.ArrayMax = 0;
  }
  pFVar1 = &(param_1->RenderDataIdentifier).RendererName;
  pFVar2 = &(this->RenderDataIdentifier).RendererName;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RenderDataIdentifier).RendererName.Data.ArrayNum =
         (param_1->RenderDataIdentifier).RendererName.Data.ArrayNum;
    (this->RenderDataIdentifier).RendererName.Data.ArrayMax =
         (param_1->RenderDataIdentifier).RendererName.Data.ArrayMax;
    (param_1->RenderDataIdentifier).RendererName.Data.ArrayNum = 0;
    (param_1->RenderDataIdentifier).RendererName.Data.ArrayMax = 0;
  }
  pFVar1 = &(param_1->RenderDataIdentifier).SubResourceName;
  pFVar2 = &(this->RenderDataIdentifier).SubResourceName;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum =
         (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayNum;
    (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax =
         (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayMax;
    (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayNum = 0;
    (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayMax = 0;
  }
  pFVar1 = &(param_1->RenderDataIdentifier).CameraName;
  pFVar2 = &(this->RenderDataIdentifier).CameraName;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RenderDataIdentifier).CameraName.Data.ArrayNum =
         (param_1->RenderDataIdentifier).CameraName.Data.ArrayNum;
    (this->RenderDataIdentifier).CameraName.Data.ArrayMax =
         (param_1->RenderDataIdentifier).CameraName.Data.ArrayMax;
    (param_1->RenderDataIdentifier).CameraName.Data.ArrayNum = 0;
    (param_1->RenderDataIdentifier).CameraName.Data.ArrayMax = 0;
  }
  FMovieGraphTimeStepData::operator=(&this->Time,&param_1->Time);
  return this;
}

