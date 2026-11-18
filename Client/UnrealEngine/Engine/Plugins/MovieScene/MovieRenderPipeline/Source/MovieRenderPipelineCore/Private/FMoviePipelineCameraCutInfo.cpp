// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// StaticStruct @ 14dd5e310

UScriptStruct * __cdecl FMoviePipelineCameraCutInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineCameraCutInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMoviePipelineCameraCutInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo,(UObject *)pUVar1,
                         L"MoviePipelineCameraCutInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelineCameraCutInfo.OuterSingleton;
}

// FMoviePipelineCameraCutInfo @ 14dd6a020

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineCameraCutInfo * __thiscall
FMoviePipelineCameraCutInfo::FMoviePipelineCameraCutInfo(FMoviePipelineCameraCutInfo *this)

{
  (this->CachedFrameRate).Numerator = 60000;
  (this->SubSectionHierarchy).Object = (FCameraCutSubSectionHierarchyNode *)0x0;
  (this->SubSectionHierarchy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->NumTiles).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->CurrentTickInRoot = 0;
  (this->CurrentTimeInRoot).FrameNumber = 0;
  (this->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OuterToInnerTransform).NestedTransforms.ArrayNum = 0;
  (this->OuterToInnerTransform).NestedTransforms.ArrayMax = 0;
  (this->TotalOutputRangeRoot).LowerBound.Value.Value = 0;
  (this->TotalOutputRangeRoot).UpperBound.Value.Value = 0;
  (this->WarmupRangeRoot).LowerBound.Value.Value = 0;
  (this->WarmupRangeRoot).UpperBound.Value.Value = 0;
  *(undefined8 *)&(this->CurrentTimeInRoot).SubFrame = 0;
  *(undefined8 *)&(this->InitialTimeInRoot).SubFrame = 0;
  (this->InitialTimeInShot).SubFrame = 0.0;
  (this->OuterToInnerTransform).LinearTransform.Offset.SubFrame = 0.0;
  (this->CachedFrameRate).Denominator = 1;
  (this->CachedTickResolution).Numerator = 60000;
  (this->CachedTickResolution).Denominator = 1;
  (this->CachedShotTickResolution).Numerator = 60000;
  (this->CachedShotTickResolution).Denominator = 1;
  (this->TotalOutputRangeRoot).LowerBound.Type.Value = '\x02';
  (this->TotalOutputRangeRoot).UpperBound.Type.Value = '\x02';
  (this->WarmupRangeRoot).LowerBound.Type.Value = '\x02';
  (this->WarmupRangeRoot).UpperBound.Type.Value = '\x02';
  (this->OuterToInnerTransform).LinearTransform.TimeScale = 1.0;
  (this->OuterToInnerTransform).LinearTransform.Offset.FrameNumber = 0;
  this->NumTemporalSamples = 0;
  this->NumSpatialSamples = 0;
  this->State = Uninitialized;
  this->bEmulateFirstFrameMotionBlur = true;
  (this->WorkMetrics).SegmentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkMetrics).SegmentName.Data.ArrayNum = 0;
  (this->WorkMetrics).SegmentName.Data.ArrayMax = 0;
  (this->WorkMetrics).OutputFrameIndex = -1;
  (this->WorkMetrics).TotalOutputFrameCount = -1;
  (this->WorkMetrics).OutputSubSampleIndex = -1;
  (this->WorkMetrics).TotalSubSampleCount = -1;
  (this->WorkMetrics).EngineWarmUpFrameIndex = -1;
  (this->WorkMetrics).TotalEngineWarmUpFrameCount = -1;
  this->bHasEvaluatedMotionBlurFrame = false;
  this->NumEngineWarmUpFramesRemaining = 0;
  this->NumEngineCoolDownFramesRemaining = 0;
  this->VersionNumber = 0;
  return this;
}

// CalculateWorkMetrics @ 14dd7a290

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall FMoviePipelineCameraCutInfo::CalculateWorkMetrics(FMoviePipelineCameraCutInfo *this)

{
  TRangeBound<FFrameNumber> *pTVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FFrameTime FVar6;
  double dVar7;
  undefined1 local_res10 [8];
  
  FVar6 = FFrameRate::TransformTime((FFrameTime)local_res10,(FFrameRate)0x1,this->CachedFrameRate);
  pTVar1 = &(this->TotalOutputRangeRoot).UpperBound;
  iVar2 = *(int *)FVar6;
  if (((this->TotalOutputRangeRoot).LowerBound.Type.Value == '\x02') ||
     ((pTVar1->Type).Value == '\x02')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                       ,0x1ad,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->TotalOutputRangeRoot).LowerBound.Type.Value == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->TotalOutputRangeRoot).LowerBound.Value.Value;
  if ((pTVar1->Type).Value == '\x02') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar7 = (double)((this->TotalOutputRangeRoot).UpperBound.Value.Value - iVar3);
  (this->WorkMetrics).TotalOutputFrameCount =
       -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar7 + dVar7) / (double)iVar2) >> 1);
  (this->WorkMetrics).TotalSubSampleCount =
       (this->NumTiles).field0_0x0._s_0.Y * (this->NumTiles).field0_0x0._s_0.X *
       this->NumSpatialSamples * this->NumTemporalSamples;
  (this->WorkMetrics).TotalEngineWarmUpFrameCount = this->NumEngineWarmUpFramesRemaining;
  return;
}

// GetOutputFrameCountEstimate @ 14dd8b170

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameNumber __thiscall
FMoviePipelineCameraCutInfo::GetOutputFrameCountEstimate(FMoviePipelineCameraCutInfo *this)

{
  TRangeBound<FFrameNumber> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FFrameTime FVar6;
  int *in_RDX;
  double dVar7;
  undefined1 local_res10 [8];
  
  FVar6 = FFrameRate::TransformTime((FFrameTime)local_res10,(FFrameRate)0x1,this->CachedFrameRate);
  pTVar1 = &(this->TotalOutputRangeRoot).UpperBound;
  iVar5 = *(int *)FVar6;
  if ((((this->TotalOutputRangeRoot).LowerBound.Type.Value == '\x02') ||
      ((pTVar1->Type).Value == '\x02')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                         ,0x1ad,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return (FFrameNumber)iVar5;
  }
  if (((this->TotalOutputRangeRoot).LowerBound.Type.Value == '\x02') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return (FFrameNumber)iVar5;
  }
  iVar2 = (this->TotalOutputRangeRoot).LowerBound.Value.Value;
  if (((pTVar1->Type).Value == '\x02') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return (FFrameNumber)iVar5;
  }
  dVar7 = (double)((this->TotalOutputRangeRoot).UpperBound.Value.Value - iVar2);
  *in_RDX = -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar7 + dVar7) / (double)iVar5) >> 1);
  return (FFrameNumber)(int)in_RDX;
}

// SetNextStateAfter @ 14dda2b40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMoviePipelineCameraCutInfo::SetNextStateAfter
          (FMoviePipelineCameraCutInfo *this,EMovieRenderShotState param_1)

{
  FStaticBasicLogRecord *pFVar1;
  
  if (param_1 == Uninitialized) {
    if (0 < this->NumEngineWarmUpFramesRemaining) {
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      this->State = WarmingUp;
      return;
    }
    if (this->bEmulateFirstFrameMotionBlur != false) {
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      goto LAB_14dda2c15;
    }
    if ((byte)LogMovieRenderPipeline._0_1_ < 6) goto LAB_14dda2c42;
    pFVar1 = &::LOG_Static;
  }
  else {
    if (param_1 != WarmingUp) {
      return;
    }
    if (this->NumEngineWarmUpFramesRemaining != 0) {
      return;
    }
    if (this->bEmulateFirstFrameMotionBlur != false) {
      if (5 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        this->State = MotionBlur;
        return;
      }
LAB_14dda2c15:
      this->State = MotionBlur;
      return;
    }
    if ((byte)LogMovieRenderPipeline._0_1_ < 6) goto LAB_14dda2c42;
    pFVar1 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<6>(pFVar1,(FLogCategoryBase *)&LogMovieRenderPipeline);
LAB_14dda2c42:
  this->State = Rendering;
  return;
}

