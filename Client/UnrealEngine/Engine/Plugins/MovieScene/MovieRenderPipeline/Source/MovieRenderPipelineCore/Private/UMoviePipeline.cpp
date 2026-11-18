// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 81

// StaticClass @ 14dcf5b70

UClass * __cdecl UMoviePipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipeline",
               &Z_Registration_Info_UClass_UMoviePipeline.InnerSingleton,
               StaticRegisterNativesUMoviePipeline,0x470,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipeline>,InternalVTableHelperCtorCaller<UMoviePipeline>,
               local_res8,UMoviePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipeline.InnerSingleton;
}

// UMoviePipeline @ 14dd0be30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipeline * __thiscall
UMoviePipeline::UMoviePipeline(UMoviePipeline *this,FVTableHelper *param_1)

{
  UMoviePipelineBase::UMoviePipelineBase((UMoviePipelineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipeline__6B_;
  (this->CustomTimeStep).field0_0x0.DebugPtr = (UMoviePipelineCustomTimeStep *)0x0;
  (this->CustomSequenceTimeController).Object = (FMoviePipelineTimeController *)0x0;
  (this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedPrevCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->TargetSequence).field0_0x0.DebugPtr = (ULevelSequence *)0x0;
  (this->LevelSequenceActor).field0_0x0.DebugPtr = (ALevelSequenceActor *)0x0;
  (this->DebugWidget).field0_0x0.DebugPtr = (UMovieRenderDebugWidget *)0x0;
  (this->PreviewTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->ActiveShotList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveShotList).ArrayNum = 0;
  (this->ActiveShotList).ArrayMax = 0;
  (this->InitializationTime).Ticks = 0;
  FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState(&this->CachedOutputState);
  (this->AudioState).bIsRecordingAudio = false;
  (this->AudioState).PrevUnfocusedAudioMultiplier = 1.0;
  (this->AudioState).PrevRenderEveryTickValue = 1;
  (this->AudioState).PrevNeverMuteNRTAudioValue = 0;
  (this->AudioState).FinishedSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioState).FinishedSegments.ArrayNum = 0;
  (this->AudioState).FinishedSegments.ArrayMax = 0;
  (this->AudioState).ActiveSubmixes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioState).ActiveSubmixes.ArrayNum = 0;
  (this->AudioState).ActiveSubmixes.ArrayMax = 0;
  this->bShutdownRequested = (FThreadSafeBool)0x0;
  (this->FrameInfo)._padding_ = (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
  this->bFatalError = (FThreadSafeBool)0x0;
  (this->InitializationTimeOffset).Ticks = 0;
  (this->FrameInfo).CurrSidecarViewLocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FrameInfo).CurrSidecarViewLocations.ArrayNum = 0;
  (this->FrameInfo).CurrSidecarViewLocations.ArrayMax = 0;
  (this->FrameInfo).CurrSidecarViewRotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FrameInfo).CurrSidecarViewRotations.ArrayNum = 0;
  (this->FrameInfo).CurrSidecarViewRotations.ArrayMax = 0;
  (this->FrameInfo).PrevSidecarViewLocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FrameInfo).PrevSidecarViewLocations.ArrayNum = 0;
  (this->FrameInfo).PrevSidecarViewLocations.ArrayMax = 0;
  (this->FrameInfo).PrevSidecarViewRotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FrameInfo).PrevSidecarViewRotations.ArrayNum = 0;
  (this->FrameInfo).PrevSidecarViewRotations.ArrayMax = 0;
  (this->OutputBuilder).Object = (FMoviePipelineOutputMerger *)0x0;
  (this->OutputBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentJob).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  (this->GeneratedShotOutputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedShotOutputData).ArrayNum = 0;
  (this->GeneratedShotOutputData).ArrayMax = 0;
  (this->OutputFutures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFutures).ArrayNum = 0;
  (this->OutputFutures).ArrayMax = 0;
  (this->ViewportInitArgs).DebugWidgetClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ViewportInitArgs).bRenderViewport = false;
  (this->CachedSequenceHierarchyRoot).Object = (FCameraCutSubSectionHierarchyNode *)0x0;
  (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ClothSimCache = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x8 = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x20 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x28 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothSimCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClothSimCache).field_0x34 = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x40 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x48 = 0;
  *(undefined8 *)&this->RenderTimeFrameStatistics = 0;
  *(undefined8 *)&(this->RenderTimeFrameStatistics).field_0x8 = 0;
  *(undefined8 *)&(this->RenderTimeFrameStatistics).field_0x20 = 0;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x28 = 0;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x34 = 0;
  *(undefined8 *)&(this->RenderTimeFrameStatistics).field_0x40 = 0;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x48 = 0;
  *(undefined8 *)&this->CameraOverscanCache = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x8 = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x20 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x28 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x34 = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x40 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 0;
  this->bHasWarnedAboutAnimatedOverscan = false;
  return this;
}

// UMoviePipeline @ 14dd0c070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipeline * __thiscall UMoviePipeline::UMoviePipeline(UMoviePipeline *this)

{
  int *piVar1;
  TSharedPtr<FMoviePipelineTimeController,1> *pTVar2;
  int iVar3;
  FName FVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FObjectInitializer *pFVar8;
  FName *pFVar9;
  UClass *pUVar10;
  UMoviePipelineCustomTimeStep *pUVar11;
  UMoviePipeline *pUVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *_Dst;
  FModuleManager *this_00;
  IModuleInterface *pIVar14;
  IImageWriteQueue *pIVar15;
  FMoviePipelineOutputMerger *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  FMoviePipelineTimeController *pFVar18;
  UMoviePipeline *local_res8;
  FName local_res10;
  FName local_res18;
  FMoviePipelineOutputMerger *local_58;
  FSharedReferencer<1> local_50;
  FMoviePipelineTimeController *local_48;
  FSharedReferencer<1> FStack_40;
  
  pFVar8 = FObjectInitializer::Get();
  UMoviePipelineBase::UMoviePipelineBase((UMoviePipelineBase *)this,pFVar8);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UMoviePipeline__6B_;
  pTVar2 = &this->CustomSequenceTimeController;
  (this->CustomTimeStep).field0_0x0.DebugPtr = (UMoviePipelineCustomTimeStep *)0x0;
  pTVar2->Object = (FMoviePipelineTimeController *)0x0;
  (this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedPrevCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->TargetSequence).field0_0x0.DebugPtr = (ULevelSequence *)0x0;
  (this->LevelSequenceActor).field0_0x0.DebugPtr = (ALevelSequenceActor *)0x0;
  (this->DebugWidget).field0_0x0.DebugPtr = (UMovieRenderDebugWidget *)0x0;
  (this->PreviewTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
  (this->ActiveShotList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveShotList).ArrayNum = 0;
  (this->ActiveShotList).ArrayMax = 0;
  (this->InitializationTime).Ticks = 0;
  this->PipelineState = Uninitialized;
  this->CurrentShotIndex = -1;
  FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState(&this->CachedOutputState);
  (this->AudioState).bIsRecordingAudio = false;
  (this->AudioState).PrevUnfocusedAudioMultiplier = 1.0;
  (this->AudioState).PrevRenderEveryTickValue = 1;
  (this->AudioState).PrevNeverMuteNRTAudioValue = 0;
  (this->AudioState).FinishedSegments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioState).FinishedSegments.ArrayNum = 0;
  (this->AudioState).FinishedSegments.ArrayMax = 0;
  (this->AudioState).ActiveSubmixes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioState).ActiveSubmixes.ArrayNum = 0;
  (this->AudioState).ActiveSubmixes.ArrayMax = 0;
  this->bPrevGScreenMessagesEnabled = true;
  this->bHasRunBeginFrameOnce = false;
  this->bPauseAtEndOfFrame = false;
  this->bShutdownRequested = (FThreadSafeBool)0x0;
  (this->FrameInfo)._padding_ = (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
  this->bFatalError = (FThreadSafeBool)0x0;
  this->bIsTransitioningState = false;
  this->AccumulatedTickSubFrameDeltas = 0.0;
  (this->InitializationTimeOffset).Ticks = 0;
  (this->FrameInfo).CurrSidecarViewLocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FrameInfo).CurrSidecarViewLocations.ArrayNum = 0;
  (this->FrameInfo).CurrSidecarViewLocations.ArrayMax = 0;
  (this->FrameInfo).CurrSidecarViewRotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FrameInfo).CurrSidecarViewRotations.ArrayNum = 0;
  (this->FrameInfo).CurrSidecarViewRotations.ArrayMax = 0;
  (this->FrameInfo).PrevSidecarViewLocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FrameInfo).PrevSidecarViewLocations.ArrayNum = 0;
  (this->FrameInfo).PrevSidecarViewLocations.ArrayMax = 0;
  (this->FrameInfo).PrevSidecarViewRotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FrameInfo).PrevSidecarViewRotations.ArrayNum = 0;
  (this->FrameInfo).PrevSidecarViewRotations.ArrayMax = 0;
  (this->OutputBuilder).Object = (FMoviePipelineOutputMerger *)0x0;
  (this->OutputBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bHasRenderedFirstViewThisFrame = false;
  (this->CurrentJob).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  (this->GeneratedShotOutputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedShotOutputData).ArrayNum = 0;
  (this->GeneratedShotOutputData).ArrayMax = 0;
  (this->OutputFutures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFutures).ArrayNum = 0;
  (this->OutputFutures).ArrayMax = 0;
  (this->ViewportInitArgs).DebugWidgetClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ViewportInitArgs).bRenderViewport = false;
  (this->CachedSequenceHierarchyRoot).Object = (FCameraCutSubSectionHierarchyNode *)0x0;
  (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ClothSimCache = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x8 = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x20 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x28 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClothSimCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClothSimCache).field_0x34 = 0;
  *(undefined8 *)&(this->ClothSimCache).field_0x40 = 0;
  *(undefined4 *)&(this->ClothSimCache).field_0x48 = 0;
  *(undefined8 *)&this->RenderTimeFrameStatistics = 0;
  *(undefined8 *)&(this->RenderTimeFrameStatistics).field_0x8 = 0;
  *(undefined8 *)&(this->RenderTimeFrameStatistics).field_0x20 = 0;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x28 = 0;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x34 = 0;
  *(undefined8 *)&(this->RenderTimeFrameStatistics).field_0x40 = 0;
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x48 = 0;
  *(undefined8 *)&this->CameraOverscanCache = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x8 = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x20 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x28 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x34 = 0;
  *(undefined8 *)&(this->CameraOverscanCache).field_0x40 = 0;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 0;
  this->bHasWarnedAboutAnimatedOverscan = false;
  pFVar9 = ::FName::FName(&local_res10,"MoviePipelineCustomTimeStep");
  FVar4 = *pFVar9;
  pUVar10 = UMoviePipelineCustomTimeStep::StaticClass();
  pUVar11 = (UMoviePipelineCustomTimeStep *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar10,pUVar10,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UMoviePipelineCustomTimeStep *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->CustomTimeStep).field0_0x0.DebugPtr = pUVar11;
  FStack_40.ReferenceController = ::operator_new(0x48);
  pFVar16 = (FMoviePipelineOutputMerger *)&DAT_00000010;
  if (FStack_40.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    pFVar18 = (FMoviePipelineTimeController *)&DAT_00000010;
    local_48 = ___xmm_00000000000000000000000000000010;
    FStack_40.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_40.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar18 = (FMoviePipelineTimeController *)(FStack_40.ReferenceController + 1);
    (FStack_40.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_40.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMoviePipelineTimeController___00_SharedPointerInternals__6B_
    ;
    FStack_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_40.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_40.ReferenceController[2]._padding_ = 0;
    *(undefined2 *)&FStack_40.ReferenceController[2].SharedReferenceCount.field_0x1 = 0;
    FStack_40.ReferenceController[2].SharedReferenceCount.field_0x3 = 0;
    *(undefined1 *)&FStack_40.ReferenceController[2].SharedReferenceCount = 0;
    FStack_40.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_40.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    FStack_40.ReferenceController[3]._padding_ = 1;
    FStack_40.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
    FStack_40.ReferenceController[1]._padding_ = (longlong)&___7FMoviePipelineTimeController__6B_;
    *(undefined4 *)&FStack_40.ReferenceController[4]._padding_ = 0x18;
    *(undefined4 *)((longlong)&FStack_40.ReferenceController[4]._padding_ + 4) = 1;
    if ((pFVar18 == (FMoviePipelineTimeController *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar12 = (UMoviePipeline *)(*pcVar6)();
      return pUVar12;
    }
    LOCK();
    (FStack_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar13 = FStack_40.ReferenceController;
    local_48 = pFVar18;
  }
  if (pTVar2 != (TSharedPtr<FMoviePipelineTimeController,1> *)&local_48) {
    pTVar2->Object = pFVar18;
    local_48 = (FMoviePipelineTimeController *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CustomSequenceTimeController).SharedReferenceCount,&FStack_40);
  }
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar13 = ::operator_new(0x80);
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMoviePipelineOutputMerger___00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ = (longlong)&___7FMoviePipelineOutputMerger__6B_;
    pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[2]._padding_ = 0;
    _Dst = ::operator_new(400);
    if (_Dst != (TReferenceControllerBase<1> *)0x0) {
      memset(_Dst,0,400);
      _Dst->_padding_ = 0;
      *(undefined ***)&_Dst->SharedReferenceCount = &___7FMoviePipelineMergerOutputFrame__6B_;
      FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(_Dst + 1));
      _Dst[0x13]._padding_ = 0;
      _Dst[0x13].SharedReferenceCount = (atomic<int>)0x0;
      _Dst[0x13].WeakReferenceCount = (atomic<int>)0x0;
      _Dst[0x14]._padding_ = 0;
      _Dst[0x14].SharedReferenceCount = (atomic<int>)0x0;
      _Dst[0x14].WeakReferenceCount = (atomic<int>)0x0;
      _Dst[0x16]._padding_ = 0;
      _Dst[0x16].SharedReferenceCount = (atomic<int>)0x0;
      _Dst[0x16].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&_Dst[0x17]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&_Dst[0x17]._padding_ + 4) = 0;
      _Dst[0x18]._padding_ = 0;
      _Dst[0x18].SharedReferenceCount = (atomic<int>)0x0;
      pTVar17 = _Dst;
    }
    *(TReferenceControllerBase<1> **)&pTVar13[3].SharedReferenceCount = pTVar17;
    pTVar13[3]._padding_ = (longlong)pTVar17;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pTVar13[4]._padding_ = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar13 + 4),(FObjectPtr)&local_res8);
    pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[5]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar13[5].SharedReferenceCount,4000)
    ;
    pFVar16 = (FMoviePipelineOutputMerger *)(pTVar13 + 1);
    pTVar17 = pTVar13;
    if (pFVar16 == (FMoviePipelineOutputMerger *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pUVar12 = (UMoviePipeline *)(*pcVar6)();
        return pUVar12;
      }
      goto LAB_14dd0c636;
    }
  }
  if (((pFVar16->_padding_ == 0) || (pFVar16->_padding_ == 0)) ||
     (*(int *)(pFVar16->_padding_ + 8) < 1)) {
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16->_padding_ = (longlong)pFVar16;
    if (pTVar17 != (TReferenceControllerBase<1> *)pFVar16->_padding_) {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar16->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pFVar16->_padding_ = (longlong)pTVar17;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
LAB_14dd0c636:
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = pFVar16;
  local_50.ReferenceController = pTVar17;
  if (&this->OutputBuilder != (TSharedPtr<FMoviePipelineOutputMerger,1> *)&local_58) {
    (this->OutputBuilder).Object = pFVar16;
    local_58 = (FMoviePipelineOutputMerger *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OutputBuilder).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  FModuleManager::Get();
  pFVar9 = ::FName::FName(&local_res18,"ImageWriteQueue");
  FVar4 = *pFVar9;
  this_00 = FModuleManager::Get();
  pIVar14 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  pIVar15 = (IImageWriteQueue *)(**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
  this->ImageWriteQueue = pIVar15;
  return this;
}

// ~UMoviePipeline @ 14dd0e170

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMoviePipeline::~UMoviePipeline(UMoviePipeline *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipeline__6B_;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CameraOverscanCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CameraOverscanCache);
  *(undefined4 *)&(this->RenderTimeFrameStatistics).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenderTimeFrameStatistics).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UMoviePipeline::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UMoviePipeline::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UMoviePipeline::FRenderTimeStatistics>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RenderTimeFrameStatistics);
  *(undefined4 *)&(this->ClothSimCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClothSimCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothSimCache);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<TFuture<bool>,MoviePipeline::FMoviePipelineOutputFutureData>,int>
            ((TTuple<TFuture<bool>,MoviePipeline::FMoviePipelineOutputFutureData> *)
             (this->OutputFutures).AllocatorInstance.Data,(this->OutputFutures).ArrayNum);
  pFVar2 = (this->OutputFutures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(this->GeneratedShotOutputData).AllocatorInstance.Data,
             (this->GeneratedShotOutputData).ArrayNum);
  pFVar2 = (this->GeneratedShotOutputData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputBuilder).SharedReferenceCount.ReferenceController);
  (this->FrameInfo)._padding_ = (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
  pFVar2 = (this->FrameInfo).PrevSidecarViewRotations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrameInfo).PrevSidecarViewLocations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrameInfo).CurrSidecarViewRotations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrameInfo).CurrSidecarViewLocations.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>
            ((TWeakPtr<Audio::FMixerSubmix,1> *)
             (this->AudioState).ActiveSubmixes.AllocatorInstance.Data,
             (this->AudioState).ActiveSubmixes.ArrayNum);
  pFVar2 = (this->AudioState).ActiveSubmixes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<MoviePipeline::FAudioState::FAudioSegment,int>
            ((FAudioSegment *)(this->AudioState).FinishedSegments.AllocatorInstance.Data,
             (this->AudioState).FinishedSegments.ArrayNum);
  pFVar2 = (this->AudioState).FinishedSegments.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(&this->CachedOutputState);
  pFVar2 = (this->ActiveShotList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController);
  UMoviePipelineBase::~UMoviePipelineBase((UMoviePipelineBase *)this);
  return;
}

// BeginExport @ 14dd159e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::BeginExport(UMoviePipeline *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  <lambda_1> local_res8 [8];
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_18;
  
  UMoviePipelinePrimaryConfig::GetAllSettings
            ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,&local_18
             ,false,false);
  AlgoImpl::
  IntroSortInternal<UMoviePipelineSetting_*,int,_UMoviePipeline::BeginExport_::__l2::<lambda_1>,TLess<void>_>
            ((UMoviePipelineSetting **)local_18.AllocatorInstance.Data,local_18.ArrayNum,
             local_res8[0],(TLess<void>)local_res8[0]);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar3.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar3.Data == pFVar1) break;
    (**(code **)((*(UMoviePipelineSetting **)FVar3.Data)->_padding_ + 0x340))();
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// BeginFinalize @ 14dd15bb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::BeginFinalize(UMoviePipeline *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  <lambda_1> local_res8 [8];
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_18;
  
  UMoviePipelinePrimaryConfig::GetOutputContainers
            ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,&local_18
            );
  AlgoImpl::
  IntroSortInternal<UMoviePipelineOutputBase_*,int,_UMoviePipeline::BeginFinalize_::__l2::<lambda_1>,TLess<void>_>
            ((UMoviePipelineOutputBase **)local_18.AllocatorInstance.Data,local_18.ArrayNum,
             local_res8[0],(TLess<void>)local_res8[0]);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar3.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar3.Data == pFVar1) break;
    (**(code **)(*(longlong *)*(UMoviePipelineOutputBase **)FVar3.Data + 0x350))();
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// BuildShotListFromSequence @ 14dd179b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipeline::BuildShotListFromSequence(UMoviePipeline *this)

{
  int *piVar1;
  TArray<UMoviePipelineExecutorShot_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UMoviePipelineExecutorJob *pUVar4;
  UMoviePipelineExecutorShot *pUVar5;
  UMoviePipelinePrimaryConfig *pUVar6;
  FCameraCutSubSectionHierarchyNode *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TIntPoint<int>_u_0 TVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  UMoviePipelineSetting *pUVar15;
  UMoviePipelineSetting *pUVar16;
  UMoviePipelineSetting *pUVar17;
  FFrameRate FVar18;
  longlong lVar19;
  UObject *pUVar20;
  uint uVar21;
  ulonglong uVar22;
  char cVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  bool local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  UClass *local_78;
  UClass *local_70;
  UClass *local_68;
  FScriptContainerElement *local_60;
  undefined1 local_58 [24];
  
  local_res8[0] = false;
  UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence
            ((this->TargetSequence).field0_0x0.DebugPtr,(this->CurrentJob).field0_0x0.DebugPtr,
             local_res8);
  pUVar4 = (this->CurrentJob).field0_0x0.DebugPtr;
  local_res20 = (pUVar4->ShotInfo).ArrayNum;
  uVar22 = (ulonglong)(int)local_res20;
  pFVar25 = (pUVar4->ShotInfo).AllocatorInstance.Data;
  local_60 = pFVar25 + uVar22 * 8;
  do {
    pFVar24 = local_60;
    if ((pUVar4->ShotInfo).ArrayNum != (int)uVar22) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar25 == pFVar24) {
      pTVar2 = &this->ActiveShotList;
      piVar1 = &(this->ActiveShotList).ArrayMax;
      (this->ActiveShotList).ArrayNum = 0;
      if ((this->ActiveShotList).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
      pUVar4 = (this->CurrentJob).field0_0x0.DebugPtr;
      pFVar24 = (pUVar4->ShotInfo).AllocatorInstance.Data;
      iVar3 = (pUVar4->ShotInfo).ArrayNum;
      pFVar25 = pFVar24 + (longlong)iVar3 * 8;
      while( true ) {
        if ((pUVar4->ShotInfo).ArrayNum != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (pFVar24 == pFVar25) break;
        local_88 = *(longlong *)pFVar24;
        if (*(char *)(local_88 + 0x28) != '\0') {
          pFVar8 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar8 <= (FScriptContainerElement *)&local_88) &&
             ((FScriptContainerElement *)&local_88 < pFVar8 + (longlong)*piVar1 * 8)) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          iVar14 = (this->ActiveShotList).ArrayNum;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ActiveShotList).ArrayNum = iVar14 + 1;
          *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_88;
        }
        pFVar24 = pFVar24 + 8;
      }
      return;
    }
    pUVar5 = *(UMoviePipelineExecutorShot **)pFVar25;
    pUVar6 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
    local_78 = Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_78);
    }
    pUVar15 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                        ((TSubclassOf<UMoviePipelineSetting>)&local_78,pUVar6,pUVar5);
    pUVar6 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
    local_70 = UMoviePipelineAntiAliasingSetting::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_70);
    }
    pUVar16 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                        ((TSubclassOf<UMoviePipelineSetting>)&local_70,pUVar6,pUVar5);
    pUVar6 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
    local_68 = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_68);
    }
    pUVar17 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                        ((TSubclassOf<UMoviePipelineSetting>)&local_68,pUVar6,pUVar5);
    (pUVar5->ShotInfo).NumTemporalSamples = *(int *)((longlong)&pUVar16[1]._padding_ + 4);
    (pUVar5->ShotInfo).NumSpatialSamples = (int)pUVar16[1]._padding_;
    FVar18 = UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
                       ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.
                        DebugPtr,(ULevelSequence *)local_58);
    (pUVar5->ShotInfo).CachedFrameRate = *(FFrameRate *)FVar18;
    lVar19 = (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
    FVar18 = *(FFrameRate *)(lVar19 + 0x138);
    (pUVar5->ShotInfo).CachedTickResolution = FVar18;
    (pUVar5->ShotInfo).CachedShotTickResolution = FVar18;
    pFVar7 = (pUVar5->ShotInfo).SubSectionHierarchy.Object;
    if (pFVar7 != (FCameraCutSubSectionHierarchyNode *)0x0) {
      bVar12 = FWeakObjectPtr::IsValid(&(pFVar7->MovieScene).WeakPtr);
      if (bVar12) {
        if ((pUVar5->ShotInfo).SubSectionHierarchy.Object ==
            (FCameraCutSubSectionHierarchyNode *)0x0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar12) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pUVar20 = FWeakObjectPtr::Get(&(((pUVar5->ShotInfo).SubSectionHierarchy.Object)->MovieScene)
                                       .WeakPtr);
        uVar11 = *(undefined4 *)&pUVar20[7].field_0x24;
        (pUVar5->ShotInfo).CachedShotTickResolution.Numerator =
             *(undefined4 *)&pUVar20[7].field_0x20;
        (pUVar5->ShotInfo).CachedShotTickResolution.Denominator = uVar11;
      }
    }
    local_80 = (undefined4)pUVar17[1]._padding_;
    TVar10._s_0.Y = local_80;
    TVar10._s_0.X = local_80;
    (pUVar5->ShotInfo).NumTiles.field0_0x0 = TVar10;
    uStack_7c = local_80;
    ExpandShot(this,pUVar5,
               *(int *)((longlong)&pUVar15[1].ValidationResults.AllocatorInstance.Data + 4),true);
    cVar23 = (char)pUVar16[1]._padding_;
    uVar21 = (pUVar5->ShotInfo).NumEngineWarmUpFramesRemaining;
    if (cVar23 == '\0') {
LAB_14dd17c27:
      uVar21 = *(uint *)((longlong)&pUVar16[1]._padding_ + 4);
    }
    else if (uVar21 == 0) {
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      cVar23 = '\0';
      goto LAB_14dd17c27;
    }
    uVar13 = (uint)(0 < *(int *)((longlong)&pUVar16[1]._padding_ + 4));
    if ((int)uVar13 < (int)uVar21) {
      uVar13 = uVar21;
    }
    (pUVar5->ShotInfo).NumEngineWarmUpFramesRemaining = uVar13;
    (pUVar5->ShotInfo).bEmulateFirstFrameMotionBlur = cVar23 == '\0';
    FMoviePipelineCameraCutInfo::CalculateWorkMetrics(&pUVar5->ShotInfo);
    if ((pUVar5->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar25 = pFVar25 + 8;
    uVar22 = (ulonglong)local_res20;
    (pUVar5->ShotInfo).CurrentTickInRoot.Value =
         (pUVar5->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value;
  } while( true );
}

// CacheCameraOverscan @ 14dd17e00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::CacheCameraOverscan(UMoviePipeline *this,int param_1,float param_2)

{
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  float *pfVar1;
  int iVar2;
  undefined1 *puVar3;
  TPairInitializer<int_const_&,float_const_&> local_res8;
  float local_res18 [4];
  float **local_28;
  float *local_20;
  
  this_00 = &this->CameraOverscanCache;
  local_res8.Value._0_4_ = param_1;
  local_res18[0] = param_2;
  if (*(int *)&(this->CameraOverscanCache).field_0x8 !=
      *(int *)&(this->CameraOverscanCache).field_0x34) {
    puVar3 = *(undefined1 **)&(this->CameraOverscanCache).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CameraOverscanCache).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->CameraOverscanCache).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x10) == param_1) {
          if (iVar2 != -1) {
            pfVar1 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                     ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                    *)this_00,param_1);
            *pfVar1 = param_2;
            return;
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  local_28 = &local_res8.Value;
  local_20 = local_res18;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,float_const_&>_>
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_28);
  return;
}

// CalculateShotFrameMetrics @ 14dd17f10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFrameConstantMetrics * __thiscall
UMoviePipeline::CalculateShotFrameMetrics
          (UMoviePipeline *this,FFrameConstantMetrics *__return_storage_ptr__,
          UMoviePipelineExecutorShot *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  UMoviePipelinePrimaryConfig *pUVar4;
  APlayerCameraManager *this_00;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *pTVar17;
  bool bVar18;
  uint uVar19;
  FFrameNumber FVar20;
  longlong lVar21;
  FFrameRate FVar22;
  FFrameTime FVar23;
  UMoviePipelineSetting *pUVar24;
  UMoviePipelineSetting *pUVar25;
  UWorld *this_01;
  APlayerController *pAVar26;
  AActor *pAVar27;
  UClass *pUVar28;
  FFrameConstantMetrics *pFVar29;
  uint uVar30;
  uint uVar31;
  undefined8 *puVar32;
  FFrameNumber FVar33;
  longlong lVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar49 [16];
  double dVar50;
  float fVar51;
  FFrameTime local_res8;
  ulonglong local_res10;
  TArray<float,TSizedDefaultAllocator<32>_> *local_res20;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *local_150;
  UMoviePipelineSetting *local_148;
  UMoviePipelineSetting *local_140;
  UClass *local_138;
  UClass *local_130;
  float fStack_124;
  longlong local_f8;
  float local_ec;
  float local_e8;
  char local_e4;
  char local_e3;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  
  *(undefined8 *)&(__return_storage_ptr__->TicksPerOutputFrame).SubFrame = 0;
  *(undefined8 *)&(__return_storage_ptr__->TicksPerSample).SubFrame = 0;
  *(undefined8 *)&(__return_storage_ptr__->TicksWhileShutterClosed).SubFrame = 0;
  (__return_storage_ptr__->TicksWhileShutterOpen).SubFrame = 0.0;
  (__return_storage_ptr__->ShutterOffsetTicks).FrameNumber = 0;
  (__return_storage_ptr__->ShutterOffsetTicks).SubFrame = 0.0;
  (__return_storage_ptr__->MotionBlurCenteringOffsetTicks).FrameNumber = 0;
  (__return_storage_ptr__->MotionBlurCenteringOffsetTicks).SubFrame = 0.0;
  (__return_storage_ptr__->TickResolution).Numerator = 60000;
  (__return_storage_ptr__->TickResolution).Denominator = 1;
  (__return_storage_ptr__->ShotTickResolution).Numerator = 60000;
  (__return_storage_ptr__->ShotTickResolution).Denominator = 1;
  (__return_storage_ptr__->FrameRate).Numerator = 60000;
  *(undefined8 *)&(__return_storage_ptr__->FrameRate).Denominator = 1;
  lVar21 = (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
  __return_storage_ptr__->TickResolution = *(FFrameRate *)(lVar21 + 0x138);
  __return_storage_ptr__->ShotTickResolution = (param_1->ShotInfo).CachedShotTickResolution;
  FVar22 = UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
                     ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
                      (ULevelSequence *)&stack0xffffffffffffff38);
  FVar22 = *(FFrameRate *)FVar22;
  __return_storage_ptr__->FrameRate = FVar22;
  FVar23 = FFrameRate::TransformTime((FFrameTime)local_c0,(FFrameRate)0x1,FVar22);
  __return_storage_ptr__->TicksPerOutputFrame = *(FFrameTime *)FVar23;
  pUVar4 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
  local_138 = UMoviePipelineCameraSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_138 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_138);
  }
  pUVar24 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_138,pUVar4,param_1);
  pUVar4 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
  local_148 = pUVar24;
  local_130 = UMoviePipelineAntiAliasingSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_130);
  }
  pUVar25 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_130,pUVar4,param_1);
  __return_storage_ptr__->ShutterAnglePercentage = 0.5;
  local_140 = pUVar25;
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar26 = UWorld::GetFirstPlayerController(this_01);
  fVar44 = __real_3f800000;
  this_00 = (pAVar26->PlayerCameraManager).field0_0x0.DebugPtr;
  if (this_00 != (APlayerCameraManager *)0x0) {
    (**(code **)(this_00->_padding_ + 0x848))(this_00,&local_b8);
    lVar21 = (**(code **)(this->_padding_ + 0x180))(this);
    puVar32 = *(undefined8 **)(lVar21 + 0x8c0);
    iVar3 = *(int *)(lVar21 + 0x8c8);
    puVar1 = puVar32 + iVar3;
    while( true ) {
      if (*(int *)(lVar21 + 0x8c8) != iVar3) {
        local_res8 = (FFrameTime)((ulonglong)local_res8 & 0xffffffffffffff00);
        `TCheckedPointerIterator<IInterface_PostProcessVolume_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (puVar32 == puVar1) break;
      plVar5 = (longlong *)*puVar32;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_f8);
      if ((local_e4 != '\0') && ((*(byte *)(local_f8 + 0x1d) & 0x40) != 0)) {
        fVar51 = local_e8;
        if (fVar44 <= local_e8) {
          fVar51 = fVar44;
        }
        if (fVar51 <= 0.0) {
          fVar51 = 0.0;
        }
        if (local_e3 == '\0') {
          in_XMM2 = ZEXT816(0);
          local_98 = local_b8;
          uStack_94 = uStack_b4;
          uStack_90 = uStack_b0;
          uStack_8c = uStack_ac;
          local_res10 = local_res10 & 0xffffffff00000000;
          local_88 = local_a8;
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_98);
          if (((float)local_res10 < 0.0) || (local_ec <= (float)local_res10)) goto LAB_14dd181ee;
          fVar35 = fVar44 - (float)local_res10 / local_ec;
          if (fVar44 <= fVar35) {
            fVar35 = fVar44;
          }
          if (fVar35 <= 0.0) {
            fVar35 = 0.0;
          }
          fVar51 = fVar51 * fVar35;
        }
        if (0.0 < fVar51) {
          in_XMM2._0_8_ =
               ((double)*(float *)(local_f8 + 0x6d8) -
               __return_storage_ptr__->ShutterAnglePercentage) * (double)fVar51 +
               __return_storage_ptr__->ShutterAnglePercentage;
          in_XMM2._8_8_ = 0;
          __return_storage_ptr__->ShutterAnglePercentage = in_XMM2._0_8_;
        }
      }
LAB_14dd181ee:
      puVar32 = puVar32 + 1;
    }
    pAVar27 = APlayerCameraManager::GetViewTarget(this_00);
    if (pAVar27 != (AActor *)0x0) {
      pUVar28 = Z_Construct_UClass_ACameraActor_NoRegister();
      iVar3 = (int)pUVar28->_padding_;
      if ((((iVar3 <= *(int *)(pAVar27->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar27->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar28->_padding_)) && (lVar21 = pAVar27[1]._padding_, lVar21 != 0)) &&
         ((*(byte *)(lVar21 + 0x34d) & 0x40) != 0)) {
        in_XMM2._0_8_ =
             ((double)*(float *)(lVar21 + 0xa08) - __return_storage_ptr__->ShutterAnglePercentage) *
             (double)*(float *)(lVar21 + 0x300) + __return_storage_ptr__->ShutterAnglePercentage;
        in_XMM2._8_8_ = 0;
        __return_storage_ptr__->ShutterAnglePercentage = in_XMM2._0_8_;
      }
    }
    APlayerCameraManager::GetCachedPostProcessBlends(this_00,&local_150,&local_res20);
    uVar30 = 0;
    pUVar25 = local_140;
    pUVar24 = local_148;
    if (0 < local_res20->ArrayNum) {
      lVar21 = 0;
      lVar34 = 0;
      do {
        pTVar17 = local_150;
        uVar31 = ~uVar30 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar30 < local_150->ArrayNum) {
          uVar19 = uVar31;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          pFVar29 = (FFrameConstantMetrics *)(*pcVar7)();
          return pFVar29;
        }
        pTVar16 = local_res20;
        if (((byte)(pTVar17->AllocatorInstance).Data[lVar21 + 0x1d] & 0x40) != 0) {
          uVar19 = 0;
          if ((int)uVar30 < local_res20->ArrayNum) {
            uVar19 = uVar31;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            pFVar29 = (FFrameConstantMetrics *)(*pcVar7)();
            return pFVar29;
          }
          pTVar17 = local_150;
          pFVar6 = (pTVar16->AllocatorInstance).Data;
          uVar19 = 0;
          if ((int)uVar30 < local_150->ArrayNum) {
            uVar19 = uVar31;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar7 = (code *)swi(3);
            pFVar29 = (FFrameConstantMetrics *)(*pcVar7)();
            return pFVar29;
          }
          __return_storage_ptr__->ShutterAnglePercentage =
               ((double)*(float *)((pTVar17->AllocatorInstance).Data + lVar21 + 0x6d8) -
               __return_storage_ptr__->ShutterAnglePercentage) * (double)*(float *)(pFVar6 + lVar34)
               + __return_storage_ptr__->ShutterAnglePercentage;
        }
        uVar30 = uVar30 + 1;
        lVar34 = lVar34 + 4;
        lVar21 = lVar21 + 0x770;
        pUVar25 = local_140;
        pUVar24 = local_148;
      } while ((int)uVar30 < local_res20->ArrayNum);
    }
  }
  dVar15 = __real_c1e0000000000000;
  dVar14 = __real_41dfffffffc00000;
  dVar50 = __return_storage_ptr__->ShutterAnglePercentage;
  FVar33 = (__return_storage_ptr__->TicksPerOutputFrame).FrameNumber;
  dVar45 = (double)FVar33.Value;
  fStack_124 = (__return_storage_ptr__->TicksPerOutputFrame).SubFrame;
  if (__real_3f66c16c16c16c17 <= dVar50) {
    dVar45 = ((double)fStack_124 + dVar45) * dVar50;
  }
  else {
    dVar45 = ((double)fStack_124 + dVar45) * __real_3f66c16c16c16c17;
  }
  auVar49._8_8_ = 0;
  auVar49._0_8_ = dVar45;
  auVar49 = roundpd(in_XMM2,auVar49,1);
  uVar36 = SUB84(__real_41dfffffffc00000,0);
  uVar40 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  uVar39 = auVar49._0_4_;
  uVar43 = auVar49._4_4_;
  if (__real_41dfffffffc00000 <= auVar49._0_8_) {
    uVar39 = uVar36;
    uVar43 = uVar40;
  }
  fVar51 = (float)(dVar45 - auVar49._0_8_);
  uVar37 = SUB84(__real_c1e0000000000000,0);
  uVar41 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  if ((double)CONCAT44(uVar43,uVar39) <= __real_c1e0000000000000) {
    uVar39 = uVar37;
    uVar43 = uVar41;
  }
  if (::FFrameTime::MaxSubframe <= fVar51) {
    fVar51 = ::FFrameTime::MaxSubframe;
  }
  auVar46 = ZEXT416((uint)fVar51);
  FVar20.Value = (int)(double)CONCAT44(uVar43,uVar39);
  if (fVar51 <= 0.0) {
    auVar46 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar46._0_4_) {
    auVar46._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar46._0_4_ <= 0.0) {
    auVar11._12_4_ = 0;
    auVar11._0_12_ = auVar46._4_12_;
    auVar46 = auVar11 << 0x20;
  }
  fVar51 = auVar46._0_4_;
  local_res8.SubFrame = fVar51;
  local_res8.FrameNumber.Value = FVar20.Value;
  __return_storage_ptr__->TicksWhileShutterOpen = local_res8;
  dVar45 = ((double)FVar20.Value + (double)fVar51) /
           (double)*(int *)((longlong)&pUVar25[1]._padding_ + 4);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar45;
  auVar49 = roundpd(auVar49,auVar8,1);
  uVar39 = auVar49._0_4_;
  uVar43 = auVar49._4_4_;
  if (dVar14 <= auVar49._0_8_) {
    uVar39 = uVar36;
    uVar43 = uVar40;
  }
  fVar35 = (float)(dVar45 - auVar49._0_8_);
  if ((double)CONCAT44(uVar43,uVar39) <= dVar15) {
    uVar39 = uVar37;
    uVar43 = uVar41;
  }
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  auVar47 = ZEXT416((uint)fVar35);
  if (fVar35 <= 0.0) {
    auVar47 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar47._0_4_) {
    auVar47._0_4_ = ::FFrameTime::MaxSubframe;
  }
  __return_storage_ptr__->ShutterClosedFraction = __real_3ff0000000000000 - dVar50;
  if (auVar47._0_4_ <= 0.0) {
    auVar12._12_4_ = 0;
    auVar12._0_12_ = auVar47._4_12_;
    auVar47 = auVar12 << 0x20;
  }
  local_res8.SubFrame = auVar47._0_4_;
  local_res8.FrameNumber.Value = (int)(double)CONCAT44(uVar43,uVar39);
  __return_storage_ptr__->TicksPerSample = local_res8;
  auVar49 = roundps(auVar49,ZEXT416((uint)(fStack_124 - fVar51)),1);
  local_res8.SubFrame = (fStack_124 - fVar51) - auVar49._0_4_;
  if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
    local_res8.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_res8.SubFrame <= 0.0) {
    local_res8.SubFrame = 0.0;
  }
  local_res8.FrameNumber.Value = (int)auVar49._0_4_ + (FVar33.Value - FVar20.Value);
  __return_storage_ptr__->TicksWhileShutterClosed = local_res8;
  cVar2 = (char)pUVar24[1]._padding_;
  if (cVar2 == '\x01') {
    if (fVar51 == 0.0) {
      uVar30 = -FVar20.Value;
      fVar35 = 0.0;
    }
    else {
      uVar30 = ~FVar20.Value;
      fVar35 = fVar44 - fVar51;
      if (::FFrameTime::MaxSubframe <= fVar44 - fVar51) {
        fVar35 = ::FFrameTime::MaxSubframe;
      }
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
    }
    dVar50 = ((double)(int)uVar30 + (double)fVar35) * __real_3fe0000000000000;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar50;
    auVar49 = roundpd(auVar49,auVar10,1);
    uVar38 = auVar49._0_4_;
    uVar42 = auVar49._4_4_;
    if (dVar14 <= auVar49._0_8_) {
      uVar38 = uVar36;
      uVar42 = uVar40;
    }
    if ((double)CONCAT44(uVar42,uVar38) <= dVar15) {
      uVar38 = uVar37;
      uVar42 = uVar41;
    }
    local_res8.SubFrame = (float)(dVar50 - auVar49._0_8_);
    if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    local_res8.FrameNumber.Value = (int)(double)CONCAT44(uVar42,uVar38);
  }
  else {
    if (cVar2 != '\x02') goto LAB_14dd186bf;
    if (fVar51 == 0.0) {
      local_res8.SubFrame = 0.0;
      local_res8.FrameNumber.Value = -FVar20.Value;
    }
    else {
      fVar35 = fVar44 - fVar51;
      if (::FFrameTime::MaxSubframe <= fVar44 - fVar51) {
        fVar35 = ::FFrameTime::MaxSubframe;
      }
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
      local_res8.SubFrame = fVar35;
      local_res8.FrameNumber.Value = ~FVar20.Value;
    }
  }
  __return_storage_ptr__->ShutterOffsetTicks = local_res8;
LAB_14dd186bf:
  dVar50 = ((double)auVar47._0_4_ + (double)(int)(double)CONCAT44(uVar43,uVar39)) *
           __real_3fe0000000000000;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar50;
  auVar49 = roundpd(auVar49,auVar9,1);
  uVar39 = auVar49._0_4_;
  uVar43 = auVar49._4_4_;
  if (dVar14 <= auVar49._0_8_) {
    uVar39 = uVar36;
    uVar43 = uVar40;
  }
  fVar44 = (float)(dVar50 - auVar49._0_8_);
  if ((double)CONCAT44(uVar43,uVar39) <= dVar15) {
    uVar39 = uVar37;
    uVar43 = uVar41;
  }
  if (::FFrameTime::MaxSubframe <= fVar44) {
    fVar44 = ::FFrameTime::MaxSubframe;
  }
  auVar48 = ZEXT416((uint)fVar44);
  if (fVar44 <= 0.0) {
    auVar48 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar48._0_4_) {
    auVar48._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar48._0_4_ <= 0.0) {
    auVar13._12_4_ = 0;
    auVar13._0_12_ = auVar48._4_12_;
    auVar48 = auVar13 << 0x20;
  }
  local_res8.SubFrame = auVar48._0_4_;
  local_res8.FrameNumber.Value = (int)(double)CONCAT44(uVar43,uVar39);
  __return_storage_ptr__->MotionBlurCenteringOffsetTicks = local_res8;
  return __return_storage_ptr__;
}

// DebugFrameStepPreTick @ 14dd19e40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

bool __thiscall UMoviePipeline::DebugFrameStepPreTick(UMoviePipeline *this)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  FSetContext local_28;
  
  pTVar3 = CVarMovieRenderPipelineFrameStepper.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
  }
  iVar1 = pTVar3->ShadowedValue[0];
  if (iVar1 == 0) {
    (((this->CustomTimeStep).field0_0x0.DebugPtr)->TimeCache).UndilatedDeltaTime =
         __real_3fa5555555555555;
    return true;
  }
  if (0 < iVar1) {
    local_28.Flags = ECVF_SetByConsole;
    local_28.PriorityMode = Set;
    local_28.Tag.ComparisonIndex.Value = 0;
    local_28.Tag.Number = 0;
    local_28.TagMode = Set;
    local_28.MaxPriority = ECVF_SetByConsole;
    local_28.MinPriority = 0x1000000;
    IConsoleVariable::Set
              ((IConsoleVariable *)CVarMovieRenderPipelineFrameStepper._padding_,iVar1 + -1,
               &local_28);
    this->bPauseAtEndOfFrame = true;
  }
  return false;
}

// ExpandShot @ 14dd1dbc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipeline::ExpandShot
          (UMoviePipeline *this,UMoviePipelineExecutorShot *param_1,int param_2,bool param_3)

{
  TArray<TTuple<UMovieSceneSection_*,TRange<FFrameNumber>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UMoviePipelinePrimaryConfig *pUVar4;
  UMovieSceneSection *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  FFrameRate FVar9;
  FFrameRate FVar10;
  FFrameRate FVar11;
  FFrameRate FVar12;
  FFrameRate FVar13;
  FFrameRate FVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  UMoviePipelineSetting *pUVar21;
  FFrameTime FVar22;
  longlong lVar23;
  longlong lVar24;
  UObject *pUVar25;
  UObject *pUVar26;
  UMovieSceneSignedObject *pUVar27;
  UMovieScene *pUVar28;
  FFrameNumber *pFVar29;
  undefined8 uVar30;
  TRangeBound<FFrameNumber> TVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  TRangeBound<FFrameNumber> TVar35;
  TEnumAsByte<ERangeBoundTypes::Type> TVar36;
  TRangeBound<FFrameNumber> *pTVar37;
  FFrameRate FVar38;
  ForAnyElementType FVar39;
  FScriptContainerElement *pFVar40;
  FFrameRate FVar41;
  FFrameNumber FVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 local_res8 [8];
  UMoviePipelineExecutorShot *local_res10;
  uint local_res18;
  char local_res20;
  FCameraCutSubSectionHierarchyNode *local_3c8;
  FSharedReferencer<1> FStack_3c0;
  undefined1 local_3b8 [8];
  longlong local_3b0;
  longlong local_3a8;
  TRangeBound<FFrameNumber> local_398;
  TRangeBound<FFrameNumber> TStack_390;
  uint local_388;
  FFrameRate local_380;
  FFrameNumber local_378 [4];
  TRange<FFrameNumber> local_368;
  uint local_358;
  undefined1 local_350 [56];
  uint local_318;
  undefined4 uStack_314;
  undefined8 local_310;
  uint local_308;
  undefined4 uStack_304;
  undefined4 local_300;
  int iStack_2fc;
  uint local_2f8;
  int iStack_2f4;
  uint local_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  int iStack_2e4;
  uint local_2e0;
  int iStack_2dc;
  TObjectPtr<UMovieScene>_u_0 local_2d8;
  FUpgradedLevelSequenceBindingReferences local_2d0;
  TObjectPtr<UClass>_u_0 local_2c0;
  undefined4 local_2b8;
  int iStack_2b4;
  uint local_2b0;
  int iStack_2ac;
  uint local_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  int iStack_29c;
  uint local_298;
  int iStack_294;
  uint local_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  int iStack_284;
  uint local_280;
  int iStack_27c;
  uint local_278;
  int iStack_274;
  TRangeBound<FFrameNumber> local_270;
  uint local_268;
  undefined4 uStack_264;
  uint local_260;
  undefined4 uStack_25c;
  uint local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  int iStack_24c;
  uint local_248;
  int iStack_244;
  uint local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  int iStack_234;
  TRangeBound<FFrameNumber> local_230;
  uint local_228;
  int iStack_224;
  uint local_220;
  undefined4 uStack_21c;
  uint local_218;
  float local_214;
  uint local_210;
  undefined4 uStack_20c;
  uint local_208;
  undefined4 uStack_204;
  undefined8 local_1f8;
  TRangeBound<FFrameNumber> TStack_1f0;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_1e8;
  UMovieSceneSection *local_1d8;
  TRangeBound<FFrameNumber> TStack_1d0;
  TRangeBound<FFrameNumber> TStack_1c8;
  FFrameConstantMetrics local_1b8;
  ulonglong local_158;
  UClass *local_150;
  undefined8 local_148;
  undefined8 local_140;
  FSharedReferencer<1> local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  TRange<FFrameNumber> local_110;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  ulonglong local_d8;
  TRangeBound<FFrameNumber> local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_b8;
  ulonglong local_a8;
  uint local_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  CalculateShotFrameMetrics(this,&local_1b8,param_1);
  pUVar4 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
  local_150 = UMoviePipelineAntiAliasingSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_150);
  }
  pUVar21 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_150,pUVar4,param_1);
  uVar33 = param_2 + 1;
  if (*(int *)((longlong)&pUVar21[1]._padding_ + 4) < 2) {
    uVar33 = param_2;
  }
  local_358 = uVar33;
  UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
            ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
             (ULevelSequence *)local_350);
  FVar41 = (param_1->ShotInfo).CachedTickResolution;
  if (((param_1->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_220 = (param_1->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value;
  uStack_21c = 0;
  FVar38.Denominator = 0;
  FVar38.Numerator = local_220;
  FFrameRate::TransformTime((FFrameTime)&local_218,FVar38,FVar41);
  if ((param_3) && (local_214 != 0.0)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    local_210 = local_218;
    uStack_20c = 0;
    FVar41.Denominator = 0;
    FVar41.Numerator = local_218;
    FVar22 = FFrameRate::TransformTime((FFrameTime)local_100,FVar41,(FFrameRate)local_350._0_8_);
    iVar32 = *(int *)FVar22;
    if (((param_1->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,0x73,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (param_1->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value = iVar32;
  }
  FVar38 = local_1b8.FrameRate;
  FVar41 = local_1b8.TickResolution;
  uStack_204 = 0;
  FVar14.Denominator = 0;
  FVar14.Numerator = uVar33;
  local_208 = uVar33;
  FFrameRate::TransformTime((FFrameTime)local_f8,FVar14,local_1b8.FrameRate);
  local_350._20_4_ = 0;
  FVar9.Denominator = 0;
  FVar9.Numerator = uVar33;
  local_350._16_4_ = uVar33;
  FFrameRate::TransformTime((FFrameTime)local_f0,FVar9,FVar38);
  local_350._28_4_ = 0;
  FVar10.Denominator = 0;
  FVar10.Numerator = uVar33;
  local_350._24_4_ = uVar33;
  FVar22 = FFrameRate::TransformTime((FFrameTime)local_e8,FVar10,FVar38);
  local_378[0].Value = *(int *)FVar22;
  if (*(float *)((longlong)FVar22 + 4) != 0.0) {
    local_378[0].Value = local_378[0].Value + 1;
  }
  local_388 = uVar33;
  bVar18 = TRange<FFrameNumber>::IsEmpty(&(param_1->ShotInfo).WarmupRangeRoot);
  if (!bVar18) {
    if (param_3) {
      pTVar37 = &(param_1->ShotInfo).WarmupRangeRoot.UpperBound;
      if ((((param_1->ShotInfo).WarmupRangeRoot.LowerBound.Type.Value == '\x02') ||
          ((pTVar37->Type).Value == '\x02')) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                              ,0x1ad,L""), param_2 = local_res18, bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((param_1->ShotInfo).WarmupRangeRoot.LowerBound.Type.Value == '\x02') &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar32 = (param_1->ShotInfo).WarmupRangeRoot.LowerBound.Value.Value;
      if (((pTVar37->Type).Value == '\x02') &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_350._32_4_ = (param_1->ShotInfo).WarmupRangeRoot.UpperBound.Value.Value - iVar32;
      local_350._36_4_ = 0;
      FVar11.Denominator = 0;
      FVar11.Numerator = local_350._32_4_;
      FVar22 = FFrameRate::TransformTime((FFrameTime)local_e0,FVar11,FVar41);
      iVar32 = *(int *)FVar22;
      if (*(float *)((longlong)FVar22 + 4) != 0.0) {
        iVar32 = iVar32 + 1;
      }
      iVar20 = 0;
      if (0 < iVar32 - param_2) {
        iVar20 = iVar32 - param_2;
      }
      (param_1->ShotInfo).NumEngineWarmUpFramesRemaining = iVar20;
      uVar33 = iVar20 + uVar33;
      local_388 = uVar33;
    }
    else {
      uVar33 = (param_1->ShotInfo).NumEngineWarmUpFramesRemaining + uVar33;
      local_388 = uVar33;
    }
  }
  FStack_3c0.ReferenceController =
       (param_1->ShotInfo).SubSectionHierarchy.SharedReferenceCount.ReferenceController;
  local_3c8 = (param_1->ShotInfo).SubSectionHierarchy.Object;
  if (FStack_3c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_3c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_3c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_3c8 != (FCameraCutSubSectionHierarchyNode *)0x0) {
    local_350._44_4_ = 0;
    uVar34 = uVar33;
    local_350._40_4_ = uVar33;
    local_158 = (ulonglong)uVar33;
    do {
      iVar32 = FVar38.Numerator;
      iVar20 = FVar41.Numerator;
      if ((iVar32 == iVar20) && (FVar38.Denominator == FVar41.Denominator)) {
        local_350._52_4_ = 0.0;
        uVar34 = uVar33;
        fVar43 = (float)local_350._52_4_;
        local_350._48_8_ = (ulonglong)uVar33;
      }
      else {
        local_380 = FVar38;
        local_350._8_8_ = FVar41;
        if ((iVar32 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceRate.Numerator != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                                ,0x113,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_3a8 = (longlong)local_380.Denominator * (longlong)iVar20;
        local_3b0 = (longlong)(int)local_350._12_4_ * (longlong)iVar32;
        auVar45._0_8_ = (double)local_3a8;
        auVar45._8_8_ = 0;
        lVar23 = (local_3a8 * (int)uVar34) / local_3b0;
        dVar48 = (((double)local_3a8 * (double)(int)uVar34) / (double)local_3b0 - (double)lVar23) +
                 (auVar45._0_8_ * 0.0) / (double)local_3b0;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = dVar48;
        auVar47 = roundpd(auVar45,auVar47,1);
        fVar43 = (float)(dVar48 - auVar47._0_8_);
        lVar23 = lVar23 + (longlong)auVar47._0_8_;
        if ((0.0 < fVar43) && (::FFrameTime::MaxSubframe <= fVar43)) {
          fVar43 = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fVar43) {
          fVar43 = ::FFrameTime::MaxSubframe;
        }
        lVar24 = 0x7fffffff;
        if (lVar23 < 0x7fffffff) {
          lVar24 = lVar23;
        }
        if (fVar43 <= 0.0) {
          fVar43 = 0.0;
        }
        uVar34 = 0x80000000;
        if (-0x80000000 < lVar24) {
          uVar34 = (uint)lVar24;
        }
      }
      uVar15 = local_358;
      if (fVar43 != 0.0) {
        uVar34 = uVar34 + 1;
      }
      local_3b0 = CONCAT44(local_3b0._4_4_,uVar34);
      local_318 = local_358;
      uStack_314 = 0;
      local_148 = (ulonglong)local_358;
      local_380 = FVar41;
      if ((iVar32 == iVar20) && (FVar38.Denominator == FVar41.Denominator)) {
        local_310._4_4_ = 0.0;
        fVar43 = local_310._4_4_;
        uVar34 = local_358;
        local_310 = local_148;
      }
      else {
        local_350._8_8_ = FVar38;
        if ((iVar32 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceRate.Numerator != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                                ,0x113,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_3a8 = (longlong)(int)local_350._12_4_ * (longlong)iVar20;
        local_380 = (FFrameRate)((longlong)local_380.Denominator * (longlong)iVar32);
        auVar46._0_8_ = (double)local_3a8;
        auVar46._8_8_ = 0;
        lVar23 = (local_3a8 * (int)uVar15) / (longlong)local_380;
        dVar48 = (((double)local_3a8 * (double)(int)uVar15) / (double)(longlong)local_380 -
                 (double)lVar23) +
                 ((double)local_148._4_4_ * auVar46._0_8_) / (double)(longlong)local_380;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = dVar48;
        auVar47 = roundpd(auVar46,auVar44,1);
        fVar43 = (float)(dVar48 - auVar47._0_8_);
        lVar23 = lVar23 + (longlong)auVar47._0_8_;
        if ((0.0 < fVar43) && (::FFrameTime::MaxSubframe <= fVar43)) {
          fVar43 = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fVar43) {
          fVar43 = ::FFrameTime::MaxSubframe;
        }
        lVar24 = 0x7fffffff;
        if (lVar23 < 0x7fffffff) {
          lVar24 = lVar23;
        }
        if (fVar43 <= 0.0) {
          fVar43 = 0.0;
        }
        uVar34 = 0x80000000;
        if (-0x80000000 < lVar24) {
          uVar34 = (uint)lVar24;
        }
      }
      if (fVar43 != 0.0) {
        uVar34 = uVar34 + 1;
      }
      if (local_res20 == '\0') {
        if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar18 = FWeakObjectPtr::IsValid(&(local_3c8->CameraCutSection).WeakPtr);
        if (bVar18) {
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar25 = FWeakObjectPtr::Get(&(local_3c8->CameraCutSection).WeakPtr);
          pcVar7 = *(code **)(*(longlong *)pUVar25 + 0x2c8);
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar26 = FWeakObjectPtr::Get(&(local_3c8->CameraCutSection).WeakPtr);
          uVar16 = local_2e0;
          uVar15 = local_2f8;
          local_a0 = *(uint *)&pUVar26[4].field_0x10;
          iStack_9c = *(int *)&pUVar26[4].field_0x14;
          uStack_98 = *(undefined4 *)&pUVar26[4].field_0x18;
          uStack_94 = *(undefined4 *)&pUVar26[4].field_0x1c;
          cVar19 = (char)*(undefined8 *)&pUVar26[4].field_0x18;
          if (cVar19 == '\x02') {
            uStack_304 = 0;
            local_308 = CONCAT31(local_308._1_3_,2);
            local_128 = (ulonglong)local_308;
          }
          else {
            iVar32 = (int)((ulonglong)*(undefined8 *)&pUVar26[4].field_0x18 >> 0x20) + uVar34;
            if (cVar19 == '\x01') {
              local_300 = CONCAT31(local_300._1_3_,1);
              local_128 = CONCAT44(iVar32,local_300);
              iStack_2fc = iVar32;
              local_d8 = local_128;
            }
            else {
              local_2f8 = local_2f8 & 0xffffff00;
              local_128 = CONCAT44(iVar32,uVar15) & 0xffffffffffffff00;
              iStack_2f4 = iVar32;
              local_d8 = local_128;
            }
          }
          iVar32 = (int)local_3b0;
          if ((local_a0 & 0xff) == 2) {
            uStack_2ec = 0;
            local_2f0 = CONCAT31(local_2f0._1_3_,(char)local_a0);
            local_130 = (ulonglong)local_2f0;
          }
          else {
            iVar20 = iStack_9c - (int)local_3b0;
            if ((local_a0 & 0xff) == 1) {
              local_2e8 = CONCAT31(local_2e8._1_3_,(char)local_a0);
              local_130 = CONCAT44(iVar20,local_2e8);
              iStack_2e4 = iVar20;
            }
            else {
              local_2e0 = local_2e0 & 0xffffff00;
              local_130 = CONCAT44(iVar20,uVar16) & 0xffffffffffffff00;
              iStack_2dc = iVar20;
            }
          }
          (*pcVar7)(pUVar25,&local_130);
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar27 = (UMovieSceneSignedObject *)
                    FWeakObjectPtr::Get(&(local_3c8->CameraCutSection).WeakPtr);
          UMovieSceneSignedObject::MarkAsChanged(pUVar27);
        }
        else {
          iVar32 = (int)local_3b0;
        }
        if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar18 = FWeakObjectPtr::IsValid(&(local_3c8->Section).WeakPtr);
        if (bVar18) {
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar25 = FWeakObjectPtr::Get(&(local_3c8->Section).WeakPtr);
          pcVar7 = *(code **)(*(longlong *)pUVar25 + 0x2c8);
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar26 = FWeakObjectPtr::Get(&(local_3c8->Section).WeakPtr);
          uVar15 = local_2b0;
          uVar17 = local_2d0._8_4_;
          local_90 = *(uint *)&pUVar26[4].field_0x10;
          iStack_8c = *(int *)&pUVar26[4].field_0x14;
          uStack_88 = *(undefined4 *)&pUVar26[4].field_0x18;
          uStack_84 = *(undefined4 *)&pUVar26[4].field_0x1c;
          cVar19 = (char)*(undefined8 *)&pUVar26[4].field_0x18;
          if (cVar19 == '\x02') {
            local_2d8._4_4_ = 0;
            local_2d8._0_1_ = 2;
            local_118 = (ulonglong)(uint)local_2d8._0_4_;
          }
          else {
            iVar20 = (int)((ulonglong)*(undefined8 *)&pUVar26[4].field_0x18 >> 0x20) + uVar34;
            if (cVar19 == '\x01') {
              local_2d0._0_1_ = 1;
              local_118 = CONCAT44(iVar20,local_2d0._0_4_);
              local_2d0._4_4_ = iVar20;
              local_a8 = local_118;
            }
            else {
              local_2d0._8_4_ = local_2d0._8_4_ & 0xffffff00;
              local_118 = CONCAT44(iVar20,uVar17) & 0xffffffffffffff00;
              local_2d0._12_4_ = iVar20;
              local_a8 = local_118;
            }
          }
          if ((local_90 & 0xff) == 2) {
            local_2c0._4_4_ = 0;
            local_2c0._0_1_ = (char)local_90;
            local_120 = (ulonglong)(uint)local_2c0._0_4_;
          }
          else {
            iVar20 = iStack_8c - iVar32;
            if ((local_90 & 0xff) == 1) {
              local_2b8 = CONCAT31(local_2b8._1_3_,(char)local_90);
              local_120 = CONCAT44(iVar20,local_2b8);
              iStack_2b4 = iVar20;
            }
            else {
              local_2b0 = local_2b0 & 0xffffff00;
              local_120 = CONCAT44(iVar20,uVar15) & 0xffffffffffffff00;
              iStack_2ac = iVar20;
            }
          }
          (*pcVar7)(pUVar25,&local_120);
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar27 = (UMovieSceneSignedObject *)FWeakObjectPtr::Get(&(local_3c8->Section).WeakPtr);
          UMovieSceneSignedObject::MarkAsChanged(pUVar27);
        }
        if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar18 = FWeakObjectPtr::IsValid(&(local_3c8->MovieScene).WeakPtr);
        if (bVar18) {
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar28 = (UMovieScene *)FWeakObjectPtr::Get(&(local_3c8->MovieScene).WeakPtr);
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar25 = FWeakObjectPtr::Get(&(local_3c8->MovieScene).WeakPtr);
          uVar16 = local_280;
          uVar15 = local_298;
          local_80 = *(uint *)&pUVar25[7].field_0x10;
          iStack_7c = *(int *)&pUVar25[7].field_0x14;
          uStack_78 = *(undefined4 *)&pUVar25[7].field_0x18;
          uStack_74 = *(undefined4 *)&pUVar25[7].field_0x1c;
          cVar19 = (char)*(undefined8 *)&pUVar25[7].field_0x18;
          if (cVar19 == '\x02') {
            uStack_2a4 = 0;
            local_2a8 = CONCAT31(local_2a8._1_3_,2);
            local_110.UpperBound.Value.Value = 0;
            local_110.UpperBound._0_4_ = local_2a8;
          }
          else {
            FVar42.Value = uVar34 + (int)((ulonglong)*(undefined8 *)&pUVar25[7].field_0x18 >> 0x20);
            if (cVar19 == '\x01') {
              local_2a0 = CONCAT31(local_2a0._1_3_,1);
              local_110.UpperBound.Value.Value = FVar42.Value;
              local_110.UpperBound._0_4_ = local_2a0;
              iStack_29c = FVar42.Value;
              local_d0 = local_110.UpperBound;
            }
            else {
              local_298 = local_298 & 0xffffff00;
              local_110.UpperBound =
                   (TRangeBound<FFrameNumber>)(CONCAT44(FVar42.Value,uVar15) & 0xffffffffffffff00);
              iStack_294 = FVar42.Value;
              local_d0 = local_110.UpperBound;
            }
          }
          if ((local_80 & 0xff) == 2) {
            uStack_28c = 0;
            local_290 = CONCAT31(local_290._1_3_,(char)local_80);
            local_110.LowerBound.Value.Value = 0;
            local_110.LowerBound._0_4_ = local_290;
          }
          else {
            FVar42.Value = iStack_7c - iVar32;
            if ((local_80 & 0xff) == 1) {
              local_288 = CONCAT31(local_288._1_3_,(char)local_80);
              local_110.LowerBound.Value.Value = FVar42.Value;
              local_110.LowerBound._0_4_ = local_288;
              iStack_284 = FVar42.Value;
            }
            else {
              local_280 = local_280 & 0xffffff00;
              local_110.LowerBound =
                   (TRangeBound<FFrameNumber>)(CONCAT44(FVar42.Value,uVar16) & 0xffffffffffffff00);
              iStack_27c = FVar42.Value;
            }
          }
          UMovieScene::SetPlaybackRange(pUVar28,&local_110,true);
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar27 = (UMovieSceneSignedObject *)FWeakObjectPtr::Get(&(local_3c8->MovieScene).WeakPtr)
          ;
          UMovieSceneSignedObject::MarkAsChanged(pUVar27);
        }
        FVar42.Value = local_378[0].Value;
        param_1 = local_res10;
        if (((local_res10->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar32 = (param_1->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value - FVar42.Value;
        if (((param_1->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TStack_390.Value.Value = (param_1->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value;
        local_278 = local_278 & 0xffffff00;
        local_270.Type.Value = '\x01';
        local_398._0_4_ = local_278;
        TStack_390.Type.Value = '\x01';
        TStack_390._1_3_ = local_270._1_3_;
        local_398.Value.Value = iVar32;
        iStack_274 = iVar32;
        local_270.Value.Value = TStack_390.Value.Value;
        if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar32 = (local_3c8->AdditionalSectionsToExpand).ArrayNum;
        pFVar40 = (local_3c8->AdditionalSectionsToExpand).AllocatorInstance.Data;
        pFVar3 = pFVar40 + (longlong)iVar32 * 0x18;
        while( true ) {
          if ((local_3c8->AdditionalSectionsToExpand).ArrayNum != iVar32) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TTuple<UMovieSceneSection_*,TRange<FFrameNumber>_>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          FVar38 = local_1b8.FrameRate;
          FVar41 = local_1b8.TickResolution;
          if (pFVar40 == pFVar3) break;
          uVar30 = *(undefined8 *)(*(longlong *)pFVar40 + 0xb0);
          uVar8 = *(undefined8 *)(*(longlong *)pFVar40 + 0xb8);
          local_368.LowerBound._0_4_ = SUB84(uVar30,0);
          local_368.LowerBound.Value.Value = (int)((ulonglong)uVar30 >> 0x20);
          local_368.UpperBound._0_4_ = SUB84(uVar8,0);
          local_368.UpperBound.Value.Value = (int)((ulonglong)uVar8 >> 0x20);
          bVar18 = TRange<FFrameNumber>::IsEmpty(&local_368);
          FVar42.Value = TStack_390.Value.Value;
          if (bVar18) {
            local_1f8 = CONCAT44(local_398.Value.Value,local_398._0_4_);
            TStack_1f0.Value.Value = TStack_390.Value.Value;
            TStack_1f0.Type.Value = TStack_390.Type.Value;
            TStack_1f0._1_3_ = TStack_390._1_3_;
          }
          else {
            uVar30 = CONCAT44(local_398.Value.Value,local_398._0_4_);
            if ((local_398.Type.Value == '\x02') || (TStack_390.Type.Value == '\x02')) {
LAB_14dd1ea02:
              if (local_368.UpperBound.Type.Value == '\x02') {
                pTVar37 = &local_368.UpperBound;
              }
              else if (TStack_390.Type.Value == '\x02') {
                pTVar37 = &TStack_390;
              }
              else if (TStack_390.Value.Value < local_368.UpperBound.Value.Value) {
                pTVar37 = &local_368.UpperBound;
              }
              else if (local_368.UpperBound.Value.Value < TStack_390.Value.Value) {
                pTVar37 = &TStack_390;
              }
              else {
                pTVar37 = &local_368.UpperBound;
                if (local_368.UpperBound.Type.Value != '\x01') {
                  pTVar37 = &TStack_390;
                }
              }
              uVar8 = CONCAT44(local_368.LowerBound.Value.Value,local_368.LowerBound._0_4_);
              local_1f8 = uVar8;
              if ((((local_368.LowerBound.Type.Value != '\x02') &&
                   (local_1f8 = uVar30, (char)uVar30 != '\x02')) &&
                  (local_1f8 = uVar8, local_398.Value.Value <= local_368.LowerBound.Value.Value)) &&
                 ((local_1f8 = uVar30, local_368.LowerBound.Value.Value <= local_398.Value.Value &&
                  (local_368.LowerBound.Type.Value == '\x01')))) {
                local_1f8 = uVar8;
              }
              TStack_1f0 = *pTVar37;
            }
            else {
              if ((local_398.Type.Value == '\x02') &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar18)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (local_398.Value.Value <= FVar42.Value) {
                pFVar29 = TRangeBound<FFrameNumber>::GetValue(&TStack_390);
                iVar20 = pFVar29->Value;
                pFVar29 = TRangeBound<FFrameNumber>::GetValue(&local_398);
                uVar30 = CONCAT44(local_398.Value.Value,local_398._0_4_);
                if ((pFVar29->Value != iVar20) ||
                   ((local_398.Type.Value != '\0' && (TStack_390.Type.Value != '\0'))))
                goto LAB_14dd1ea02;
              }
              local_1f8 = CONCAT44(local_368.LowerBound.Value.Value,local_368.LowerBound._0_4_);
              TStack_1f0.Value.Value = local_368.UpperBound.Value.Value;
              TStack_1f0.Type.Value = local_368.UpperBound.Type.Value;
              TStack_1f0._1_3_ = local_368.UpperBound._1_3_;
            }
          }
          (**(code **)(**(longlong **)pFVar40 + 0x2c8))(*(longlong **)pFVar40,&local_1f8);
          UMovieSceneSignedObject::MarkAsChanged(*(UMovieSceneSignedObject **)pFVar40);
          pFVar40 = pFVar40 + 0x18;
        }
      }
      else {
        if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar18 = FWeakObjectPtr::IsValid(&(local_3c8->MovieScene).WeakPtr);
        if (bVar18) {
          if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar28 = (UMovieScene *)FWeakObjectPtr::Get(&(local_3c8->MovieScene).WeakPtr);
          UMovieScene::GetAllSections(pUVar28,&local_1e8);
          iVar32 = local_1e8.ArrayNum;
          pFVar3 = local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayNum * 8;
          FVar39.Data = local_1e8.AllocatorInstance.Data;
          while( true ) {
            if (local_1e8.ArrayNum != iVar32) {
              local_3b8[0] = 0;
              `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_3b8);
            }
            if (FVar39.Data == pFVar3) break;
            pUVar5 = *(UMovieSceneSection **)FVar39.Data;
            if (pUVar5 != (UMovieSceneSection *)0x0) {
              if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              bVar18 = TWeakObjectPtr<UMovieSceneSubSection,FWeakObjectPtr>::
                       UEOpEquals<UMovieSceneSection,bool>(&local_3c8->Section,pUVar5);
              if (!bVar18) {
                if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                bVar18 = TWeakObjectPtr<UMovieSceneCameraCutSection,FWeakObjectPtr>::
                         UEOpEquals<UMovieSceneSection,bool>(&local_3c8->CameraCutSection,pUVar5);
                if ((!bVar18) && (pUVar5->bSupportsInfiniteRange != false)) {
                  if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  TStack_1d0 = (pUVar5->SectionRange).Value.LowerBound;
                  TStack_1c8 = (pUVar5->SectionRange).Value.UpperBound;
                  pTVar1 = &local_3c8->AdditionalSectionsToExpand;
                  pFVar40 = (pTVar1->AllocatorInstance).Data;
                  local_1d8 = pUVar5;
                  if (((pFVar40 <= (FScriptContainerElement *)&local_1d8) &&
                      ((FScriptContainerElement *)&local_1d8 <
                       pFVar40 + (longlong)(local_3c8->AdditionalSectionsToExpand).ArrayMax * 0x18))
                     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar18)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar20 = (local_3c8->AdditionalSectionsToExpand).ArrayNum;
                  piVar2 = &(local_3c8->AdditionalSectionsToExpand).ArrayMax;
                  if (iVar20 == *piVar2) {
                    iVar20 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&pTVar1->AllocatorInstance,piVar2);
                  }
                  (local_3c8->AdditionalSectionsToExpand).ArrayNum = iVar20 + 1;
                  pFVar6 = (pTVar1->AllocatorInstance).Data;
                  pFVar40 = pFVar6 + (longlong)iVar20 * 0x18;
                  *(UMovieSceneSection **)pFVar40 = local_1d8;
                  *(TRangeBound<FFrameNumber> *)(pFVar40 + 8) = TStack_1d0;
                  pFVar6 = pFVar6 + (longlong)iVar20 * 0x18 + 0x10;
                  *(undefined4 *)pFVar6 = TStack_1c8._0_4_;
                  *(int *)(pFVar6 + 4) = TStack_1c8.Value.Value;
                }
              }
            }
            FVar39.Data = FVar39.Data + 8;
          }
          FVar38 = local_1b8.FrameRate;
          FVar41 = local_1b8.TickResolution;
          if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.AllocatorInstance.Data);
            FVar38 = local_1b8.FrameRate;
            FVar41 = local_1b8.TickResolution;
          }
        }
        param_1 = local_res10;
        local_b8.Object = local_3c8;
        local_b8.SharedReferenceCount.ReferenceController = FStack_3c0.ReferenceController;
        if (FStack_3c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_3c0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_3c0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        MoviePipeline::CheckPartialSectionEvaluationAndWarn
                  (local_378,&local_b8,local_res10,(FFrameRate *)local_350);
      }
      if ((local_3c8 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_138.ReferenceController = (local_3c8->Parent).SharedReferenceCount.ReferenceController;
      local_3c8 = (local_3c8->Parent).Object;
      if (local_138.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_138.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_138.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_140 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_3c0,&local_138);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.ReferenceController);
      param_2 = local_res18;
      uVar34 = local_388;
    } while (local_3c8 != (FCameraCutSubSectionHierarchyNode *)0x0);
  }
  if (local_res20 != '\0') {
    uStack_264 = 0;
    FVar12.Denominator = 0;
    FVar12.Numerator = param_2;
    local_268 = param_2;
    FVar22 = FFrameRate::TransformTime((FFrameTime)local_c8,FVar12,FVar38);
    iVar32 = *(int *)FVar22;
    if (*(float *)((longlong)FVar22 + 4) != 0.0) {
      iVar32 = iVar32 + 1;
    }
    uStack_25c = 0;
    FVar13.Denominator = 0;
    FVar13.Numerator = param_2;
    local_260 = param_2;
    FVar22 = FFrameRate::TransformTime((FFrameTime)local_c0,FVar13,FVar38);
    uVar34 = local_228;
    uVar33 = local_248;
    iVar20 = *(int *)FVar22;
    if (*(float *)((longlong)FVar22 + 4) != 0.0) {
      iVar20 = iVar20 + 1;
    }
    TVar31 = (param_1->ShotInfo).TotalOutputRangeRoot.UpperBound;
    local_230 = (param_1->ShotInfo).TotalOutputRangeRoot.LowerBound;
    TVar36 = TVar31.Type.Value;
    if (TVar36.Value == '\x02') {
      uStack_254 = 0;
      local_258 = CONCAT31(local_258._1_3_,2);
      TVar31.Value.Value = 0;
      TVar31._0_4_ = local_258;
    }
    else {
      FVar42.Value = TVar31.Value.Value.Value + iVar20;
      if (TVar36.Value == '\x01') {
        local_250 = CONCAT31(local_250._1_3_,1);
        TVar31.Value.Value = FVar42.Value;
        TVar31._0_4_ = local_250;
        iStack_24c = FVar42.Value;
      }
      else {
        local_248 = local_248 & 0xffffff00;
        TVar31 = (TRangeBound<FFrameNumber>)(CONCAT44(FVar42.Value,uVar33) & 0xffffffffffffff00);
        iStack_244 = FVar42.Value;
      }
    }
    if (local_230.Type.Value.Value == '\x02') {
      uStack_23c = 0;
      local_240 = CONCAT31(local_240._1_3_,2);
      TVar35.Value.Value = 0;
      TVar35._0_4_ = local_240;
    }
    else if (local_230.Type.Value.Value == '\x01') {
      iStack_234 = local_230.Value.Value - iVar32;
      local_238 = CONCAT31(local_238._1_3_,1);
      TVar35.Value.Value = iStack_234;
      TVar35._0_4_ = local_238;
    }
    else {
      iStack_224 = local_230.Value.Value - iVar32;
      local_228 = local_228 & 0xffffff00;
      TVar35 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_224,uVar34) & 0xffffffffffffff00);
    }
    (param_1->ShotInfo).TotalOutputRangeRoot.LowerBound = TVar35;
    (param_1->ShotInfo).TotalOutputRangeRoot.UpperBound = TVar31;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3c0.ReferenceController);
  return;
}

// FindSettingsForShot @ 14dd1ff10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipeline::FindSettingsForShot
          (UMoviePipeline *this,
          TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UMoviePipelineSetting> param_1,UMoviePipelineExecutorShot *param_2)

{
  FScriptContainerElement *pFVar1;
  UMoviePipelineConfigBase *this_00;
  FScriptContainerElement *pFVar2;
  UMoviePipelinePrimaryConfig *this_01;
  UObject *pUVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UMoviePipelineSetting **ppUVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UObject *local_res18;
  UObject *local_res20;
  longlong *local_88;
  longlong *local_80;
  UObject *local_78;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_70;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (UMoviePipelineConfigBase *)(param_2->ShotOverrideConfig).field0_0x0.DebugPtr;
  if (this_00 != (UMoviePipelineConfigBase *)0x0) {
    local_res18 = *(UObject **)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    UMoviePipelineConfigBase::FindSettingsByClass
              (this_00,&local_70,(TSubclassOf<UMoviePipelineSetting>)&local_res18,false,false);
    iVar5 = local_70.ArrayNum;
    pFVar1 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 8;
    FVar11.Data = local_70.AllocatorInstance.Data;
    while( true ) {
      if (local_70.ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar11.Data == pFVar1) break;
      local_80 = *(longlong **)FVar11.Data;
      if (local_80 != (longlong *)0x0) {
        cVar6 = (**(code **)(*local_80 + 0x328))();
        if (cVar6 != '\0') {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_80) &&
             ((FScriptContainerElement *)&local_80 <
              pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar9;
            }
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(longlong **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_80;
        }
      }
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  local_res20 = *(UObject **)param_1.Class.field0_0x0;
  this_01 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  UMoviePipelineConfigBase::FindSettingsByClass
            ((UMoviePipelineConfigBase *)this_01,local_60,
             (TSubclassOf<UMoviePipelineSetting>)&local_res20,false,false);
  iVar5 = local_60[0].ArrayNum;
  pFVar1 = local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 8;
  FVar11.Data = local_60[0].AllocatorInstance.Data;
  while( true ) {
    if (local_60[0].ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar11.Data == pFVar1) break;
    local_88 = *(longlong **)FVar11.Data;
    if (local_88 != (longlong *)0x0) {
      cVar6 = (**(code **)(*local_88 + 0x328))();
      if (cVar6 != '\0') {
        pUVar3 = (UObject *)local_88[2];
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar3 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar3 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar3);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
          }
        }
        local_78 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        ppUVar10 = TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_>::
                   FindByPredicate<_UMoviePipeline::FindSettingsForShot_::__l20::<lambda_1>_>
                             (__return_storage_ptr__,(<lambda_1>)&local_78);
        if (ppUVar10 == (UMoviePipelineSetting **)0x0) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
             ((FScriptContainerElement *)&local_88 <
              pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar9;
            }
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(longlong **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_88;
        }
      }
    }
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCachedCameraOverscan @ 14dd23ef0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

float __thiscall UMoviePipeline::GetCachedCameraOverscan(UMoviePipeline *this,int param_1)

{
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  float *pfVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  this_00 = &this->CameraOverscanCache;
  if (*(int *)&(this->CameraOverscanCache).field_0x8 !=
      *(int *)&(this->CameraOverscanCache).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CameraOverscanCache).field_0x40;
    uVar2 = *(int *)&(this->CameraOverscanCache).field_0x48 - 1;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CameraOverscanCache).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(uVar2 & param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar3 * 0x10) == param_1) {
          if (iVar3 != -1) {
            pfVar1 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                     ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                    *)this_00,param_1);
            return *pfVar1;
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)uVar2 * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar3 * 0x10) == -1) {
          pfVar1 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                   ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                  *)this_00,-1);
          return *pfVar1;
        }
        iVar3 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return 0.0;
}

// GetOutputDataParams @ 14dd2a260

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineOutputData * __thiscall
UMoviePipeline::GetOutputDataParams
          (UMoviePipeline *this,FMoviePipelineOutputData *__return_storage_ptr__)

{
  UMoviePipelineExecutorJob *pUVar1;
  
  (__return_storage_ptr__->Pipeline).field0_0x0.DebugPtr = (UMoviePipelineBase *)0x0;
  (__return_storage_ptr__->Job).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  __return_storage_ptr__->bSuccess = false;
  (__return_storage_ptr__->ShotData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShotData).ArrayNum = 0;
  (__return_storage_ptr__->ShotData).ArrayMax = 0;
  (__return_storage_ptr__->GraphData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GraphData).ArrayNum = 0;
  (__return_storage_ptr__->GraphData).ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMoviePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (__return_storage_ptr__->Pipeline).field0_0x0.DebugPtr = (UMoviePipelineBase *)this;
  pUVar1 = (this->CurrentJob).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (__return_storage_ptr__->Job).field0_0x0.DebugPtr = pUVar1;
  __return_storage_ptr__->bSuccess = this->bFatalError == (FThreadSafeBool)0x0;
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->ShotData,&this->GeneratedShotOutputData);
  return __return_storage_ptr__;
}

// GetPipelinePrimaryConfig @ 14dd2c130

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipelinePrimaryConfig * __thiscall
UMoviePipeline::GetPipelinePrimaryConfig(UMoviePipeline *this)

{
  return (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
}

// GetPipelineStateImpl @ 14dd2c170

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

EMovieRenderPipelineState __thiscall UMoviePipeline::GetPipelineStateImpl(UMoviePipeline *this)

{
  return this->PipelineState;
}

// GetPrivateStaticClass @ 14dd2db30

UClass * __cdecl UMoviePipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipeline",
               &Z_Registration_Info_UClass_UMoviePipeline.InnerSingleton,
               StaticRegisterNativesUMoviePipeline,0x470,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipeline>,InternalVTableHelperCtorCaller<UMoviePipeline>,
               local_res8,UMoviePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipeline.InnerSingleton;
}

// GetSidecarCameraData @ 14dd2f7c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMoviePipeline::GetSidecarCameraData
          (UMoviePipeline *this,UMoviePipelineExecutorShot *param_1,int param_2,
          FMinimalViewInfo *param_3,UCameraComponent **param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  APlayerCameraManager *this_00;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  UWorld *this_01;
  APlayerController *pAVar17;
  ULevelSequencePlayer *pUVar18;
  UCameraComponent *pUVar19;
  TQuat<double> *pTVar20;
  uint uVar21;
  longlong lVar22;
  AActor *pAVar23;
  FMovieSceneSequenceID local_res8 [2];
  FGuid local_e8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_d8 [3];
  TQuat<double> local_a8;
  undefined8 local_88 [12];
  
  lVar22 = (longlong)param_2;
  lVar16 = (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
  if ((param_1 != (UMoviePipelineExecutorShot *)0x0) && (lVar16 != 0)) {
    pAVar23 = (AActor *)0x0;
    if (param_2 < (param_1->SidecarCameras).ArrayNum) {
      if ((param_2 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->SidecarCameras).AllocatorInstance.Data + lVar22 * 0x28;
      local_e8._0_8_ = *(undefined8 *)pFVar1;
      local_e8._8_8_ = *(undefined8 *)(pFVar1 + 8);
      uVar15 = 0;
      if (param_2 < (param_1->SidecarCameras).ArrayNum) {
        uVar15 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8[0].Value =
           *(uint *)((param_1->SidecarCameras).AllocatorInstance.Data + lVar22 * 0x28 + 0x10);
      pUVar18 = ALevelSequenceActor::GetSequencePlayer
                          ((this->LevelSequenceActor).field0_0x0.DebugPtr);
      IMovieScenePlayer::FindBoundObjects
                ((IMovieScenePlayer *)&pUVar18->_padding_,local_d8,&local_e8,local_res8);
      if (0 < local_d8[0].ArrayNum) {
        pAVar23 = (AActor *)FWeakObjectPtr::Get(&(local_d8[0].DataPtr)->WeakPtr);
      }
    }
    else {
      this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pAVar17 = UWorld::GetFirstPlayerController(this_01);
      pAVar23 = (AActor *)0x0;
      if ((pAVar17 != (APlayerController *)0x0) &&
         (this_00 = (pAVar17->PlayerCameraManager).field0_0x0.DebugPtr,
         this_00 != (APlayerCameraManager *)0x0)) {
        pAVar23 = APlayerCameraManager::GetViewTarget(this_00);
      }
    }
    pUVar19 = MovieSceneHelpers::CameraComponentFromRuntimeObject((UObject *)pAVar23);
    if (pUVar19 != (UCameraComponent *)0x0) {
      *param_4 = pUVar19;
      pcVar3 = *(code **)(pUVar19->_padding_ + 0x660);
      lVar16 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar3)(pUVar19,*(undefined4 *)(lVar16 + 0x91c),param_3);
      if ((((-1 < param_2) && (param_2 < (this->FrameInfo).CurrSidecarViewLocations.ArrayNum)) &&
          (param_2 < (this->FrameInfo).CurrSidecarViewRotations.ArrayNum)) &&
         ((param_2 < (this->FrameInfo).PrevSidecarViewLocations.ArrayNum &&
          (param_2 < (this->FrameInfo).PrevSidecarViewRotations.ArrayNum)))) {
        uVar21 = (uint)~param_2 >> 0x1f;
        uVar15 = 0;
        if (param_2 < (this->FrameInfo).CurrSidecarViewLocations.ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar4 = (this->FrameInfo).CurrSidecarViewLocations.AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar22 * 0x18;
        dVar2 = *(double *)(pFVar1 + 8);
        (param_3->Location).field0_0x0._s_0.X = *(double *)pFVar1;
        (param_3->Location).field0_0x0._s_0.Y = dVar2;
        (param_3->Location).field0_0x0._s_0.Z = *(double *)(pFVar4 + lVar22 * 0x18 + 0x10);
        uVar15 = 0;
        if (param_2 < (this->FrameInfo).CurrSidecarViewRotations.ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar4 = (this->FrameInfo).CurrSidecarViewRotations.AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar22 * 0x18;
        dVar2 = *(double *)(pFVar1 + 8);
        (param_3->Rotation).Pitch = *(double *)pFVar1;
        (param_3->Rotation).Yaw = dVar2;
        (param_3->Rotation).Roll = *(double *)(pFVar4 + lVar22 * 0x18 + 0x10);
        uVar15 = 0;
        if (param_2 < (this->FrameInfo).PrevSidecarViewLocations.ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->FrameInfo).PrevSidecarViewLocations.AllocatorInstance.Data;
        uVar15 = 0;
        if (param_2 < (this->FrameInfo).PrevSidecarViewRotations.ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar20 = UE::Math::TRotator<double>::Quaternion
                            ((TRotator<double> *)
                             ((this->FrameInfo).PrevSidecarViewRotations.AllocatorInstance.Data +
                             lVar22 * 0x18),&local_a8);
        dVar13 = _UNK_150689688;
        dVar12 = ___xmm_3ff00000000000003ff0000000000000;
        dVar11 = _UNK_150689518;
        dVar10 = ___xmm_00000000000000003ff0000000000000;
        pFVar4 = pFVar1 + lVar22 * 0x18;
        dVar5 = *(double *)pFVar4;
        dVar6 = *(double *)(pFVar4 + 8);
        dVar2 = *(double *)(pFVar1 + lVar22 * 0x18 + 0x10);
        dVar7 = pTVar20->Z;
        dVar8 = pTVar20->W;
        dVar9 = pTVar20->Y;
        if ((TOptional<UE::Math::TTransform<double>_> *)local_88 != &param_3->PreviousViewTransform)
        {
          (param_3->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] = pTVar20->X;
          (param_3->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar9;
          (param_3->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] = dVar7;
          (param_3->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar8;
          (param_3->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] = dVar5;
          (param_3->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar6;
          (param_3->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] = dVar2;
          (param_3->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = 0.0;
          (param_3->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] = dVar12;
          (param_3->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar13;
          (param_3->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] = dVar10;
          (param_3->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar11;
          (param_3->PreviousViewTransform).bIsSet = true;
        }
      }
    }
  }
  return;
}

// GetSidecarCameraViewPoints @ 14dd2fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UMoviePipeline::GetSidecarCameraViewPoints
          (UMoviePipeline *this,UMoviePipelineExecutorShot *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TVector<double>_u_0 *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ULevelSequencePlayer *pUVar12;
  UObject *pUVar13;
  UCameraComponent *pUVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackY_9b8 [32];
  longlong local_968;
  FMovieSceneSequenceID local_960 [2];
  UMoviePipelineExecutorShot *local_958;
  UMoviePipeline *local_950;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_948;
  FGuid local_938;
  TVector<double>_u_0 local_928;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 local_900;
  void *local_150;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_9b8;
  piVar1 = &param_2->ArrayMax;
  uVar16 = 0;
  uVar11 = 0;
  param_2->ArrayNum = 0;
  local_958 = param_1;
  local_950 = this;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  piVar2 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_3->AllocatorInstance,0,piVar2);
  }
  if ((param_1 != (UMoviePipelineExecutorShot *)0x0) &&
     (iVar10 = (param_1->SidecarCameras).ArrayNum, 0 < iVar10)) {
    local_968 = 0;
    do {
      uVar9 = uVar11;
      if ((int)uVar16 < iVar10) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar3 = (param_1->SidecarCameras).AllocatorInstance.Data + local_968;
      local_938._0_8_ = *(undefined8 *)pFVar3;
      local_938._8_8_ = *(undefined8 *)(pFVar3 + 8);
      uVar9 = 0;
      if ((int)uVar16 < (param_1->SidecarCameras).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      local_960[0].Value =
           *(uint *)((param_1->SidecarCameras).AllocatorInstance.Data + local_968 + 0x10);
      pUVar12 = ALevelSequenceActor::GetSequencePlayer
                          ((local_950->LevelSequenceActor).field0_0x0.DebugPtr);
      IMovieScenePlayer::FindBoundObjects
                ((IMovieScenePlayer *)&pUVar12->_padding_,&local_948,&local_938,local_960);
      if (0 < local_948.ArrayNum) {
        pUVar13 = FWeakObjectPtr::Get(&(local_948.DataPtr)->WeakPtr);
        pUVar14 = MovieSceneHelpers::CameraComponentFromRuntimeObject(pUVar13);
        param_1 = local_958;
        if (pUVar14 != (UCameraComponent *)0x0) {
          FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_928._s_0);
          pcVar6 = *(code **)(pUVar14->_padding_ + 0x660);
          lVar15 = (**(code **)(local_950->_padding_ + 0x180))(local_950);
          (*pcVar6)(pUVar14,*(undefined4 *)(lVar15 + 0x91c),&local_928);
          pTVar4 = (TVector<double>_u_0 *)(param_2->AllocatorInstance).Data;
          if (((pTVar4 <= &local_928) &&
              (&local_928 < (TVector<double>_u_0 *)(pTVar4->XYZ + (longlong)*piVar1 * 3))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar10 = param_2->ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar10 + 1;
          pFVar5 = (param_2->AllocatorInstance).Data;
          pFVar3 = pFVar5 + (longlong)iVar10 * 0x18;
          *(double *)pFVar3 = local_928._s_0.X;
          *(double *)(pFVar3 + 8) = local_928._s_0.Y;
          *(double *)(pFVar5 + (longlong)iVar10 * 0x18 + 0x10) = local_928._s_0.Z;
          pFVar3 = (param_3->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_910) &&
              ((FScriptContainerElement *)&local_910 < pFVar3 + (longlong)*piVar2 * 0x18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar10 = param_3->ArrayNum;
          if (iVar10 == *piVar2) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&param_3->AllocatorInstance,piVar2);
          }
          param_3->ArrayNum = iVar10 + 1;
          pFVar5 = (param_3->AllocatorInstance).Data;
          pFVar3 = pFVar5 + (longlong)iVar10 * 0x18;
          *(undefined8 *)pFVar3 = local_910;
          *(undefined8 *)(pFVar3 + 8) = uStack_908;
          *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18 + 0x10) = local_900;
          param_1 = local_958;
          if (local_150 != (void *)0x0) {
            FMemory::Free(local_150);
            param_1 = local_958;
          }
        }
      }
      local_968 = local_968 + 0x28;
      uVar16 = uVar16 + 1;
      iVar10 = (param_1->SidecarCameras).ArrayNum;
    } while ((int)uVar16 < iVar10);
  }
  if (param_2->ArrayNum == 0) {
    if (*piVar1 == 0) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = uVar11 + 1;
    iVar10 = param_3->ArrayNum;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&param_3->AllocatorInstance,piVar2);
    }
    param_3->ArrayNum = iVar10 + 1;
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}

// HasCachedCameraOverscan @ 14dd31db0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall UMoviePipeline::HasCachedCameraOverscan(UMoviePipeline *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->CameraOverscanCache).field_0x8 !=
      *(int *)&(this->CameraOverscanCache).field_0x34) {
    puVar2 = *(undefined1 **)&(this->CameraOverscanCache).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->CameraOverscanCache).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->CameraOverscanCache).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->CameraOverscanCache + (longlong)iVar1 * 0x10) == param_1)
        goto LAB_14dd31e0d;
        iVar1 = *(int *)(*(longlong *)&this->CameraOverscanCache + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14dd31e0d:
  return iVar1 != -1;
}

// Initialize @ 14dd322a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::Initialize(UMoviePipeline *this,UMoviePipelineExecutorJob *param_1)

{
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  FCameraCutSubSectionHierarchyNode **ppFVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  UMoviePipelineConfigBase *this_01;
  ULevelStreaming *this_02;
  FFrameRate FVar6;
  TObjectPtr<UEngineCustomTimeStep>_u_0 TVar7;
  TObjectPtr<ULevelSequence>_u_0 TVar8;
  UMoviePipelineExecutorJob *pUVar9;
  FFrameRate this_03;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  UMoviePipelinePrimaryConfig *pUVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  longlong lVar18;
  UMoviePipelineSetting *pUVar19;
  UClass *pUVar20;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar21;
  UWorld *pUVar22;
  AWorldSettings *pAVar23;
  UMoviePipelineOutputSetting *pUVar24;
  FFrameTime FVar25;
  UMovieScene *this_04;
  UGameViewportClient *pUVar26;
  longlong lVar27;
  FString *pFVar28;
  IConsoleVariable *this_05;
  FDateTime FVar29;
  FFrameNumber *pFVar30;
  ulonglong uVar31;
  EMovieRenderPipelineState EVar32;
  uint uVar33;
  ForAnyElementType FVar34;
  FScriptContainerElement *pFVar35;
  undefined8 *puVar36;
  float fVar37;
  undefined1 auStackY_3b8 [32];
  <lambda_6> local_388;
  undefined1 local_387;
  undefined1 local_386;
  undefined1 local_385;
  undefined1 local_384;
  undefined1 local_383;
  undefined1 local_382;
  undefined1 local_381;
  UMoviePipelineExecutorJob *local_380;
  FFrameRate local_378;
  FScriptContainerElement *local_370;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_368;
  uint local_358;
  undefined4 uStack_354;
  FCameraCutSubSectionHierarchyNode *local_350;
  FSharedReferencer<1> local_348;
  TRange<FFrameNumber> local_340;
  TRangeBound<FFrameNumber> local_330;
  TRangeBound<FFrameNumber> TStack_328;
  int local_320;
  int local_31c;
  UMoviePipelineExecutorJob **local_318;
  UClass *local_310;
  FString local_308;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_2f8;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [32];
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_2b8;
  FString local_2a8;
  undefined1 local_298 [112];
  TObjectPtr<UEngineCustomTimeStep>_u_0 local_228;
  TObjectPtr<ULevelSequence>_u_0 TStack_220;
  TObjectPtr<UMovieRenderDebugWidget>_u_0 local_210;
  TObjectPtr<UTexture>_u_0 local_208;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  undefined1 local_1e0 [16];
  TObjectPtr<ULevelSequence>_u_0 TStack_1d0;
  ForElementType<FSetElementId> local_1c0;
  int local_1b8;
  FDateTime local_1b0;
  FTimespan local_1a8;
  float local_1a0;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_198;
  int local_190;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 local_188;
  int local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  FString local_168;
  FString local_158;
  int local_148;
  undefined1 local_144;
  FString local_140;
  undefined1 local_130 [48];
  TObjectPtr<ULevelSequence>_u_0 TStack_100;
  ForElementType<FSetElementId> local_f0;
  int local_e8;
  undefined1 local_e0 [40];
  TObjectPtr<UEngineCustomTimeStep>_u_0 local_b8;
  TObjectPtr<ULevelSequence>_u_0 TStack_b0;
  ForAnyElementType local_a0;
  int local_98;
  double local_90;
  long64 local_88;
  float local_80;
  FTimespan local_78;
  int local_70;
  TVector<double>_u_0 local_68 [2];
  
  local_68[0]._16_8_ = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_380 = param_1;
  local_378 = (FFrameRate)this;
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  this->bPrevGScreenMessagesEnabled = GAreScreenMessagesEnabled;
  GAreScreenMessagesEnabled = false;
  if (local_380 == (UMoviePipelineExecutorJob *)0x0) {
    local_387 = 0;
    bVar11 = `UMoviePipeline::Initialize'::__l21::<lambda_1>::operator()(&local_387);
    if (!bVar11) goto LAB_14dd32323;
  }
  if ((local_380->Configuration).field0_0x0.DebugPtr == (UMoviePipelinePrimaryConfig *)0x0) {
    local_386 = 0;
    bVar11 = `UMoviePipeline::Initialize'::__l24::<lambda_2>::operator()(&local_386);
    if (!bVar11) {
LAB_14dd32323:
      (**(code **)(this->_padding_ + 0x2b8))(this,1);
      return;
    }
  }
  pUVar15 = UMoviePipelineExecutorJob::GetPresetOrigin(local_380);
  if (pUVar15 != (UMoviePipelinePrimaryConfig *)0x0) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar15 = (local_380->Configuration).field0_0x0.DebugPtr;
    pcVar4 = *(code **)(pUVar15->_padding_ + 0x2b8);
    UMoviePipelineExecutorJob::GetPresetOrigin(local_380);
    (*pcVar4)(pUVar15);
  }
  pUVar9 = local_380;
  pFVar35 = (local_380->ShotInfo).AllocatorInstance.Data;
  iVar3 = (local_380->ShotInfo).ArrayNum;
  local_370 = pFVar35 + (longlong)iVar3 * 8;
  while( true ) {
    pFVar10 = local_370;
    if ((pUVar9->ShotInfo).ArrayNum != iVar3) {
      local_385 = 0;
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_385);
    }
    this_03 = local_378;
    if (pFVar35 == pFVar10) break;
    lVar18 = *(longlong *)pFVar35;
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(lVar18 + 0x188);
    pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar16 != (UObject *)0x0) {
      pUVar17 = Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister();
      iVar14 = (int)pUVar17->_padding_;
      if ((iVar14 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar17->_padding_)) {
        if (4 < (byte)LogMovieRenderPipeline._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        plVar5 = *(longlong **)(lVar18 + 0x180);
        pcVar4 = *(code **)(*plVar5 + 0x2b8);
        pUVar16 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        if (pUVar16 != (UObject *)0x0) {
          Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister();
        }
        (*pcVar4)(plVar5);
      }
    }
    pFVar35 = pFVar35 + 8;
  }
  if (*(char *)((longlong)local_378 + 0xe8) != '\0') {
    local_384 = 0;
    bVar11 = `UMoviePipeline::Initialize'::__l74::<lambda_3>::operator()(&local_384);
    if (!bVar11) goto LAB_14dd3258b;
  }
  lVar18 = (**(code **)(*(longlong *)this_03 + 0x180))(this_03);
  if (lVar18 == 0) {
    local_383 = 0;
    bVar11 = `UMoviePipeline::Initialize'::__l77::<lambda_4>::operator()(&local_383);
    if (!bVar11) goto LAB_14dd3258b;
  }
  pUVar9 = local_380;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_380 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_380);
  }
  *(UMoviePipelineExecutorJob **)((longlong)this_03 + 0x330) = pUVar9;
  pUVar16 = FSoftObjectPath::TryLoad(&local_380->Sequence,(FUObjectSerializeContext *)0x0);
  if (pUVar16 == (UObject *)0x0) {
LAB_14dd32575:
    local_318 = &local_380;
    bVar11 = `UMoviePipeline::Initialize'::__l80::<lambda_5>::operator()(&local_318);
    if (!bVar11) {
LAB_14dd3258b:
      (**(code **)(*(longlong *)this_03 + 0x2b8))(this_03,1);
      return;
    }
  }
  else {
    pUVar17 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar3 = (int)pUVar17->_padding_;
    if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar17->_padding_)) goto LAB_14dd32575;
  }
  this_01 = *(UMoviePipelineConfigBase **)(*(longlong *)((longlong)this_03 + 0x330) + 0x100);
  pUVar17 = UMoviePipelineDebugSettings::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  if (this_01 == (UMoviePipelineConfigBase *)0x0) {
LAB_14dd32622:
    if ((pUVar17 == (UClass *)0x0) ||
       (pUVar20 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar20 == (UClass *)0x0))
    {
LAB_14dd32655:
      pUVar17 = (UClass *)0x0;
    }
    else {
      iVar3 = (int)pUVar20->_padding_;
      if (((int)pUVar17->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar20->_padding_)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (!bVar11) goto LAB_14dd32655;
    }
    pUVar19 = UClass::GetDefaultObject<UMoviePipelineSetting>(pUVar17);
    if (pUVar19 != (UMoviePipelineSetting *)0x0) goto LAB_14dd32667;
  }
  else {
    local_310 = pUVar17;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    pUVar19 = UMoviePipelineConfigBase::FindSettingByClass
                        (this_01,(TSubclassOf<UMoviePipelineSetting>)&local_310,false,false);
    if ((pUVar19 == (UMoviePipelineSetting *)0x0) ||
       (cVar12 = (**(code **)(pUVar19->_padding_ + 0x328))(pUVar19), cVar12 == '\0'))
    goto LAB_14dd32622;
LAB_14dd32667:
    if ((char)pUVar19[1]._padding_ != '\0') {
      StartUnrealInsightsCapture((UMoviePipeline *)this_03);
    }
  }
  pUVar16 = FSoftObjectPath::TryLoad
                      ((FSoftObjectPath *)(*(longlong *)((longlong)this_03 + 0x330) + 0x38),
                       (FUObjectSerializeContext *)0x0);
  if (pUVar16 == (UObject *)0x0) {
LAB_14dd326b2:
    pUVar16 = (UObject *)0x0;
  }
  else {
    pUVar17 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar3 = (int)pUVar17->_padding_;
    if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar17->_padding_)) goto LAB_14dd326b2;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar16);
  }
  *(UObject **)((longlong)this_03 + 0xb8) = pUVar16;
  pTVar21 = MakeShared<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>(&local_2b8);
  local_348.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
  local_350 = pTVar21->Object;
  if (local_348.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_348.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_348.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ppFVar1 = (FCameraCutSubSectionHierarchyNode **)((longlong)this_03 + 0x368);
  if (ppFVar1 != &local_350) {
    *ppFVar1 = local_350;
    local_350 = (FCameraCutSubSectionHierarchyNode *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this_03 + 0x370),&local_348);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_348.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.SharedReferenceCount.ReferenceController);
  local_2f8.Object = *ppFVar1;
  local_2f8.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this_03 + 0x370);
  if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MoviePipeline::CacheCompleteSequenceHierarchy
            (*(UMovieSceneSequence **)((longlong)this_03 + 0xb8),&local_2f8);
  plVar5 = *(longlong **)((longlong)this_03 + 0x98);
  pUVar22 = (UWorld *)(**(code **)(*plVar5 + 0x180))(plVar5);
  pAVar23 = UWorld::GetWorldSettings(pUVar22,false,true);
  if (pAVar23 != (AWorldSettings *)0x0) {
    *(float *)(plVar5 + 6) = pAVar23->MinUndilatedFrameTime;
    *(float *)((longlong)plVar5 + 0x34) = pAVar23->MaxUndilatedFrameTime;
  }
  pUVar24 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      (*(UMoviePipelineConfigBase **)
                        (*(longlong *)((longlong)this_03 + 0x330) + 0x100),false);
  if (pUVar24->bUseCustomPlaybackRange != false) {
    (**(code **)(**(longlong **)((longlong)this_03 + 0xb8) + 0x2f8))();
    lVar18 = (**(code **)(**(longlong **)((longlong)this_03 + 0xb8) + 0x2f8))();
    local_358 = pUVar24->CustomStartFrame;
    uStack_354 = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = local_358;
    FVar25 = FFrameRate::TransformTime((FFrameTime)local_2e8,FVar6,*(FFrameRate *)(lVar18 + 0x140));
    iVar3 = *(int *)FVar25;
    (**(code **)(**(longlong **)((longlong)this_03 + 0xb8) + 0x2f8))();
    lVar18 = (**(code **)(**(longlong **)((longlong)this_03 + 0xb8) + 0x2f8))();
    local_378.Denominator = 0;
    local_378.Numerator = pUVar24->CustomEndFrame;
    FVar25 = FFrameRate::TransformTime
                       ((FFrameTime)local_2e0,local_378,*(FFrameRate *)(lVar18 + 0x140));
    local_340.UpperBound.Value.Value = *(int *)FVar25;
    iVar14 = local_340.UpperBound.Value.Value;
    if (*(float *)((longlong)FVar25 + 4) != 0.0) {
      local_340.UpperBound.Value.Value = local_340.UpperBound.Value.Value + 1;
      iVar14 = local_320;
      local_31c = local_340.UpperBound.Value.Value;
    }
    local_320 = iVar14;
    local_340.LowerBound.Type.Value = '\x01';
    local_340.UpperBound.Type.Value = '\0';
    local_340.LowerBound.Value.Value = iVar3;
    this_04 = (UMovieScene *)(**(code **)(**(longlong **)((longlong)this_03 + 0xb8) + 0x2f8))();
    UMovieScene::SetPlaybackRange(this_04,&local_340,true);
  }
  UMoviePipelinePrimaryConfig::GetAllSettings
            (*(UMoviePipelinePrimaryConfig **)(*(longlong *)((longlong)this_03 + 0x330) + 0x100),
             &local_368,false,false);
  AlgoImpl::
  IntroSortInternal<UMoviePipelineSetting_*,int,_UMoviePipeline::Initialize_::__l2::<lambda_6>,TLess<void>_>
            ((UMoviePipelineSetting **)local_368.AllocatorInstance.Data,local_368.ArrayNum,local_388
             ,(TLess<void>)local_388);
  iVar3 = local_368.ArrayNum;
  uVar31 = (ulonglong)local_368.ArrayNum;
  pFVar35 = local_368.AllocatorInstance.Data + uVar31 * 8;
  FVar34.Data = local_368.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar31 != iVar3) {
      local_382 = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_382);
    }
    if (FVar34.Data == pFVar35) break;
    UMoviePipelineSetting::OnMoviePipelineInitialized
              (*(UMoviePipelineSetting **)FVar34.Data,(UMoviePipeline *)this_03);
    uVar31 = (ulonglong)(uint)local_368.ArrayNum;
    FVar34.Data = FVar34.Data + 8;
  }
  BuildShotListFromSequence((UMoviePipeline *)this_03);
  InitializeLevelSequenceActor((UMoviePipeline *)this_03);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMoviePipeline>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,(UMoviePipeline *)local_2d8,(pmf_1348c9c5)this_03);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMoviePipeline>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(UMoviePipeline *)(local_2d8 + 8),(pmf_1348c9c5)this_03);
  LoadDebugWidget((UMoviePipeline *)this_03);
  pUVar22 = (UWorld *)(**(code **)(*(longlong *)this_03 + 0x180))(this_03);
  pUVar26 = UWorld::GetGameViewport(pUVar22);
  if (pUVar26 != (UGameViewportClient *)0x0) {
    uVar33 = 0;
    if (*(char *)((longlong)this_03 + 0x360) == '\0') {
      uVar33 = 2;
    }
    pUVar26->bDisableWorldRendering = uVar33 >> 1;
  }
  lVar18 = (**(code **)(*(longlong *)this_03 + 0x180))(this_03);
  puVar36 = *(undefined8 **)(lVar18 + 0x90);
  iVar3 = *(int *)(lVar18 + 0x98);
  puVar2 = puVar36 + iVar3;
  while( true ) {
    if (*(int *)(lVar18 + 0x98) != iVar3) {
      local_388 = (<lambda_6>)0x0;
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_388);
    }
    if (puVar36 == puVar2) break;
    this_02 = (ULevelStreaming *)*puVar36;
    pUVar17 = (UClass *)this_02->_padding_;
    pUVar20 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
    if (pUVar17 == pUVar20) {
      lVar27 = (**(code **)(*(longlong *)this_03 + 0x180))(this_03);
      pFVar28 = ULevelStreaming::GetWorldAssetPackageName(this_02,&local_2a8);
      UWorld::StripPIEPrefixFromPackageName(&local_308,pFVar28,(FString *)(lVar27 + 0xd0));
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
    }
    puVar36 = puVar36 + 1;
  }
  fVar37 = FApp::GetUnfocusedVolumeMultiplier();
  *(float *)((longlong)this_03 + 0x21c) = fVar37;
  FApp::SetUnfocusedVolumeMultiplier(__real_3f800000);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_05 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"au.nrt.RenderEveryTick",1);
  if (this_05 != (IConsoleVariable *)0x0) {
    uVar13 = (**(code **)(*(longlong *)this_05 + 200))(this_05);
    *(undefined4 *)((longlong)this_03 + 0x220) = uVar13;
    local_370 = (FScriptContainerElement *)0x0;
    IConsoleVariable::SetWithCurrentPriority<int>
              (this_05,0,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  *(undefined4 *)((longlong)this_03 + 0x100) = *(undefined4 *)((longlong)this_03 + 0xe0);
  *(undefined4 *)((longlong)this_03 + 0xec) = 0;
  FVar29 = FDateTime::UtcNow();
  *(undefined8 *)((longlong)this_03 + 0xf0) = *(undefined8 *)FVar29.Ticks;
  FVar29 = FDateTime::Now();
  *(longlong *)((longlong)this_03 + 0x260) =
       *(longlong *)FVar29.Ticks - *(longlong *)((longlong)this_03 + 0xf0);
  lVar18 = (**(code **)(*(longlong *)this_03 + 0x180))(this_03);
  TVar8 = _UNK_150631d98;
  TVar7 = ___xmm_00000000ffffffff0000008000000000;
  local_78.Ticks = *(undefined8 *)((longlong)this_03 + 0x330);
  local_90 = *(double *)((longlong)this_03 + 0xf0);
  local_88 = *(long64 *)((longlong)this_03 + 0x260);
  *(undefined8 *)((longlong)this_03 + 0x128) = *(undefined8 *)(lVar18 + 0x8f8);
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  uStack_170._0_1_ = false;
  uStack_170._1_1_ = false;
  uStack_170._2_1_ = false;
  uStack_170._3_1_ = 0;
  uStack_170._4_4_ = 0;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_148 = 0;
  local_144 = 0;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  local_130._0_8_ = 0;
  local_130._8_8_ = 0;
  local_130._32_8_ = 0;
  local_130._40_8_ = TVar7;
  TStack_100 = TVar8;
  local_f0 = (ForElementType<FSetElementId>)0x0;
  local_e8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_4_ = 0;
  local_e0._12_4_ = 0;
  local_e0[0x20] = false;
  local_e0._33_3_ = 0;
  local_e0._36_4_ = 0.0;
  local_b8 = TVar7;
  TStack_b0 = TVar8;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_80 = 0.0;
  local_70 = -1;
  local_68[0]._s_0.X = (UObject *)0x0;
  local_68[0]._8_4_ = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_78.Ticks != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.Ticks);
  }
  puVar36 = *(undefined8 **)((longlong)this_03 + 0xd8);
  iVar3 = *(int *)((longlong)this_03 + 0xe0);
  puVar2 = puVar36 + iVar3;
  while( true ) {
    if (*(int *)((longlong)this_03 + 0xe0) != iVar3) {
      `TCheckedPointerIterator<UMoviePipelineExecutorShot_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_381);
    }
    if (puVar36 == puVar2) break;
    pUVar16 = (UObject *)*puVar36;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar16);
    }
    local_298._0_4_ = (int)local_178;
    local_298._4_4_ = local_178._4_4_;
    local_298._8_4_ = (int)uStack_170;
    local_298._12_4_ = uStack_170._4_4_;
    local_68[0]._0_8_ = pUVar16;
    ::FString::FString((FString *)(local_298 + 0x10),&local_168);
    ::FString::FString((FString *)(local_298 + 0x20),&local_158);
    local_298._48_4_ = local_148;
    local_298[0x34] = (bool)local_144;
    ::FString::FString((FString *)(local_298 + 0x38),&local_140);
    local_298._72_8_ = 0;
    local_298._80_8_ = 0;
    local_298._104_8_ = (TReferenceControllerBase<1> *)0x0;
    local_228 = TVar7;
    TStack_220 = TVar8;
    local_210.DebugPtr = (UMovieRenderDebugWidget *)0x0;
    local_208._0_4_ = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)(local_298 + 0x48),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_130);
    local_200.Data = (FScriptContainerElement *)0x0;
    local_1f8 = 0;
    local_1e0._0_4_ = 0;
    local_1e0._4_4_ = 0;
    local_1e0._8_8_ = TVar7;
    TStack_1d0 = TVar8;
    local_1c0 = (ForElementType<FSetElementId>)0x0;
    local_1b8 = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&local_200,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_e0);
    local_1b0.Ticks = (long64)local_90;
    local_1a8.Ticks = local_88;
    local_1a0 = local_80;
    local_198.DebugPtr = (UMoviePipelineExecutorJob *)local_78.Ticks;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_78.Ticks != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_78.Ticks);
    }
    local_188.DebugPtr = (UMoviePipelineExecutorShot *)local_68[0]._0_8_;
    local_190 = local_70;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_68[0]._0_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_68[0]._0_8_);
    }
    local_180 = local_68[0]._8_4_;
    iVar14 = UMoviePipelineBlueprintLibrary::ResolveVersionNumber
                       ((FMoviePipelineFilenameResolveParams *)local_298,true);
    *(int *)&pUVar16[8].field_0x24 = iVar14;
    puVar36 = puVar36 + 1;
  }
  lVar18 = (**(code **)(**(longlong **)((longlong)this_03 + 0xb8) + 0x2f8))();
  local_330._0_4_ = *(undefined4 *)(lVar18 + 0x128);
  local_330.Value.Value = *(int *)(lVar18 + 300);
  TStack_328._0_4_ = *(undefined4 *)(lVar18 + 0x130);
  TStack_328.Value.Value = *(int *)(lVar18 + 0x134);
  if ((local_330.Type.Value == '\x02') || (TStack_328.Type.Value == '\x02')) {
    bVar11 = false;
  }
  else {
    if (TStack_328.Value.Value < local_330.Value.Value) {
      bVar11 = true;
    }
    else {
      pFVar30 = TRangeBound<FFrameNumber>::GetValue(&TStack_328);
      iVar3 = pFVar30->Value;
      pFVar30 = TRangeBound<FFrameNumber>::GetValue(&local_330);
      if ((pFVar30->Value == iVar3) &&
         ((local_330.Type.Value == '\0' || (TStack_328.Type.Value == '\0')))) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) goto LAB_14dd32f16;
    }
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Playback_Range__152cfa780,
                 (FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
LAB_14dd32f16:
  iVar3 = *(int *)((longlong)this_03 + 0xe0);
  if ((iVar3 == 0) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if ((bVar11) || (iVar3 == 0)) {
    TransitionToState((UMoviePipeline *)this_03,Export);
    EVar32 = Finished;
  }
  else {
    EVar32 = ProducingFrames;
  }
  TransitionToState((UMoviePipeline *)this_03,EVar32);
  local_98 = 0;
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e0);
  local_e8 = 0;
  if (local_f0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_130);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.AllocatorInstance.Data);
  }
  return;
}

// InitializeLevelSequenceActor @ 14dd33050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::InitializeLevelSequenceActor(UMoviePipeline *this)

{
  byte *pbVar1;
  FMovieSceneSequencePlaybackSettings *pFVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UWorld *pUVar8;
  AActor *pAVar9;
  ALevelSequenceActor *this_00;
  ULevelSequence *pUVar10;
  ALevelSequenceActor *pAVar11;
  ULevelSequencePlayer *pUVar12;
  FActorSpawnParameters *pFVar13;
  FString *pFVar14;
  ULevelSequence *pUVar15;
  UMovieSceneCompiledDataManager *this_01;
  longlong *plVar16;
  TObjectPtr<UMoviePipelineCustomTimeStep>_u_0 TVar17;
  ALevelSequenceActor *pAVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  undefined1 auStackY_208 [32];
  UClass *local_1c8;
  TSharedPtr<FMovieSceneTimeController,1> local_1c0;
  TActorIteratorBase<TActorIterator<ALevelSequenceActor>_> local_1a8;
  undefined1 local_148 [24];
  FString local_130;
  undefined1 local_118 [128];
  undefined1 local_98 [80];
  longlong local_48 [3];
  longlong *local_30;
  double local_28;
  
  local_28 = (double)(__security_cookie.value ^ (ulonglong)auStackY_208);
  pAVar18 = (ALevelSequenceActor *)0x0;
  pUVar7 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_1a8.Flags = OnlyActiveLevels|SkipPendingKill;
  local_1a8.State.bIsSet = false;
  local_1c8 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FActorIteratorState::FActorIteratorState
            (&local_1a8.State.TypedValue,pUVar8,(TSubclassOf<AActor>)&local_1c8);
  local_1a8.State.bIsSet = true;
  pAVar11 = pAVar18;
  while( true ) {
    TActorIteratorBase<TActorIterator<ALevelSequenceActor>_>::operator++(&local_1a8);
    if ((local_1a8.State.bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_1a8.State.TypedValue.ReachedEnd != false) break;
    if ((local_1a8.State.bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar9 = FActorIteratorState::GetActorChecked(&local_1a8.State.TypedValue);
    this_00 = CastChecked<ALevelSequenceActor,AActor>(pAVar9);
    pUVar10 = ALevelSequenceActor::GetSequence(this_00);
    pUVar15 = (this->TargetSequence).field0_0x0.DebugPtr;
    if (pUVar15 == (ULevelSequence *)0x0) {
      bVar6 = pUVar10 == (ULevelSequence *)0x0;
    }
    else {
      bVar6 = pUVar15 == pUVar10;
    }
    if (bVar6) {
      if ((local_1a8.State.bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar9 = FActorIteratorState::GetActorChecked(&local_1a8.State.TypedValue);
      pAVar11 = CastChecked<ALevelSequenceActor,AActor>(pAVar9);
      pUVar12 = ALevelSequenceActor::GetSequencePlayer(pAVar11);
      if (pUVar12 != (ULevelSequencePlayer *)0x0) {
        pUVar12 = ALevelSequenceActor::GetSequencePlayer(pAVar11);
        UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)pUVar12);
      }
    }
  }
  if (local_1a8.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_1a8.State.TypedValue.CurrentWorld,
               local_1a8.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_1a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_1a8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar11 != (ALevelSequenceActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar11);
  }
  (this->LevelSequenceActor).field0_0x0.DebugPtr = pAVar11;
  if (pAVar11 == (ALevelSequenceActor *)0x0) {
    pUVar8 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pFVar13 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
    pUVar7 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
    pAVar11 = (ALevelSequenceActor *)
              UWorld::SpawnActor(pUVar8,pUVar7,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                 pFVar13);
    if (pAVar11 != (ALevelSequenceActor *)0x0) {
      pUVar7 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
      iVar4 = (int)pUVar7->_padding_;
      if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar4) ||
         (pAVar18 = pAVar11,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
         &pUVar7->_padding_)) {
        pFVar14 = GetTypeName<ALevelSequenceActor>((FString *)(local_148 + 8));
        pwVar20 = L"";
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        pFVar14 = GetFullNameForCastLogError<AActor>(&local_130,(AActor *)pAVar11);
        if ((pFVar14->Data).ArrayNum != 0) {
          pwVar20 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar20,pwVar19);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar18 != (ALevelSequenceActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar18);
    }
    (this->LevelSequenceActor).field0_0x0.DebugPtr = pAVar18;
    if (local_98._64_8_ != 0) {
      plVar16 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar16 = local_30;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (((this->LevelSequenceActor).field0_0x0.DebugPtr == (ALevelSequenceActor *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LevelSequenceActor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipeline.cpp"
                           ,0x375,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (((this->LevelSequenceActor).field0_0x0.DebugPtr)->PlaybackSettings).LoopCount.Value = 0;
  pFVar2->bAutoPlay = 0;
  (((this->LevelSequenceActor).field0_0x0.DebugPtr)->PlaybackSettings).bPauseAtEnd = 1;
  (((this->LevelSequenceActor).field0_0x0.DebugPtr)->PlaybackSettings).FinishCompletionStateOverride
       = ForceRestoreState;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_ULevelSequence_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar7);
  local_118._48_8_ = (FObjectInstancingGraph *)0x0;
  local_118._56_8_ = (UPackage *)0x0;
  local_118._16_4_ = 0;
  local_118._20_4_ = 0;
  local_118._24_4_ = RF_Transient;
  local_118._40_8_ = (UObject *)0x0;
  local_118[0x20] = false;
  local_118._8_8_ = this;
  pUVar15 = (ULevelSequence *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    TVar17.DebugPtr = (UMoviePipelineCustomTimeStep *)(local_118 + 0x50);
    if ((UMoviePipelineCustomTimeStep *)local_118._104_8_ != (UMoviePipelineCustomTimeStep *)0x0) {
      TVar17 = (TObjectPtr<UMoviePipelineCustomTimeStep>_u_0)local_118._104_8_;
    }
    (**(code **)((TVar17.DebugPtr)->_padding_ + 0x10))();
  }
  (**(code **)(pUVar15->_padding_ + 0x378))(pUVar15);
  ALevelSequenceActor::SetSequence((this->LevelSequenceActor).field0_0x0.DebugPtr,pUVar15);
  pbVar1 = (byte *)((longlong)&((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this_01 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  UMovieSceneCompiledDataManager::Reset
            (this_01,(UMovieSceneSequence *)(this->TargetSequence).field0_0x0.DebugPtr);
  ALevelSequenceActor::SetSequence
            ((this->LevelSequenceActor).field0_0x0.DebugPtr,
             (this->TargetSequence).field0_0x0.DebugPtr);
  pUVar12 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr);
  local_1c0.Object = (FMovieSceneTimeController *)(this->CustomSequenceTimeController).Object;
  local_1c0.SharedReferenceCount.ReferenceController =
       (this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController;
  if (local_1c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UMovieSceneSequencePlayer::SetTimeController((UMovieSceneSequencePlayer *)pUVar12,&local_1c0);
  pUVar12 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr);
  UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)pUVar12);
  pUVar12 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr);
  TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
  ::AddUObject<UMoviePipeline>
            ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
              *)&pUVar12->_padding_,(UMoviePipeline *)local_148,(pmf_45135875)this);
  return;
}

// InitializeShot @ 14dd33530

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipeline::InitializeShot(UMoviePipeline *this,UMoviePipelineExecutorShot *param_1)

{
  FScriptContainerElement *pFVar1;
  UMoviePipelineSetting **ppUVar2;
  UMoviePipelineShotConfig *pUVar3;
  int iVar4;
  ForAnyElementType FVar5;
  UMoviePipelineSetting **ppUVar6;
  <lambda_1> local_res8 [8];
  UMoviePipelineSetting **local_38;
  int local_30;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_28;
  
  SetSoloShot(this,param_1);
  UMoviePipelinePrimaryConfig::GetAllSettings
            ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,&local_28
             ,false,false);
  AlgoImpl::
  IntroSortInternal<UMoviePipelineSetting_*,int,_UMoviePipeline::InitializeShot_::__l2::<lambda_1>,TLess<void>_>
            ((UMoviePipelineSetting **)local_28.AllocatorInstance.Data,local_28.ArrayNum,
             local_res8[0],(TLess<void>)local_res8[0]);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar5.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar5.Data == pFVar1) break;
    (**(code **)((*(UMoviePipelineSetting **)FVar5.Data)->_padding_ + 0x2c8))();
    FVar5.Data = FVar5.Data + 8;
  }
  pUVar3 = (param_1->ShotOverrideConfig).field0_0x0.DebugPtr;
  if (pUVar3 != (UMoviePipelineShotConfig *)0x0) {
    (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3,&local_38);
    AlgoImpl::
    IntroSortInternal<UMoviePipelineSetting_*,int,_UMoviePipeline::InitializeShot_::__l9::<lambda_2>,TLess<void>_>
              (local_38,local_30,(<lambda_2>)local_res8[0],(TLess<void>)local_res8[0]);
    iVar4 = local_30;
    ppUVar2 = local_38 + local_30;
    ppUVar6 = local_38;
    while( true ) {
      if (local_30 != iVar4) {
        `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (ppUVar6 == ppUVar2) break;
      UMoviePipelineSetting::OnMoviePipelineInitialized(*ppUVar6,this);
      ppUVar6 = ppUVar6 + 1;
    }
    if (local_38 != (UMoviePipelineSetting **)0x0) {
      FMemory::Free(local_38);
    }
  }
  FMoviePipelineTelemetry::SendBeginShotRenderTelemetry(param_1,(UMovieGraphEvaluatedConfig *)0x0);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// IsDebugFrameStepIdling @ 14dd33890

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall UMoviePipeline::IsDebugFrameStepIdling(UMoviePipeline *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarMovieRenderPipelineFrameStepper.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  if ((pTVar2->ShadowedValue[0] == 0) && (this->bPauseAtEndOfFrame == false)) {
    return true;
  }
  return false;
}

// IsPostShotCallbackNeeded @ 14dd339f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall UMoviePipeline::IsPostShotCallbackNeeded(UMoviePipeline *this)

{
  return this->bFlushDiskWritesPerShot;
}

// IsShutdownRequestedImpl @ 14dd33d60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall UMoviePipeline::IsShutdownRequestedImpl(UMoviePipeline *this)

{
  return this->bShutdownRequested != (FThreadSafeBool)0x0;
}

// LoadDebugWidget @ 14dd35b20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMoviePipeline::LoadDebugWidget(UMoviePipeline *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  size_t sVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UMovieRenderDebugWidget *this_00;
  FStaticBasicLogRecord *pFVar7;
  UClass *local_res10;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pUVar5 = (this->ViewportInitArgs).DebugWidgetClass.Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar5 == (UClass *)0x0) goto LAB_14dd35b8a;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14dd35b58:
    pUVar3 = Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
    if (pUVar3 == (UClass *)0x0) goto LAB_14dd35b8a;
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14dd35b8a;
LAB_14dd35c23:
    pUVar3 = Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar3 = Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
        if (pUVar3 == (UClass *)0x0) {
LAB_14dd35c8c:
          local_res10 = (UClass *)0x0;
        }
        else {
          iVar1 = (int)pUVar3->_padding_;
          if (((int)pUVar5->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          local_res10 = pUVar5;
          if (!bVar2) goto LAB_14dd35c8c;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)local_res10);
        }
        pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        this_00 = CreateWidget<UMovieRenderDebugWidget,UWorld_*>
                            (pUVar6,(TSubclassOf<UUserWidget>)&local_res10,(FName)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UMovieRenderDebugWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
          (this->DebugWidget).field0_0x0.DebugPtr = this_00;
LAB_14dd35cf6:
          UMovieRenderDebugWidget::OnInitializedForPipeline(this_00,this);
          UUserWidget::AddToViewport((UUserWidget *)(this->DebugWidget).field0_0x0.DebugPtr,0);
          return;
        }
        (this->DebugWidget).field0_0x0.DebugPtr = this_00;
        if (this_00 != (UMovieRenderDebugWidget *)0x0) goto LAB_14dd35cf6;
        if ((byte)LogMovieRenderPipeline._0_1_ < 3) {
          return;
        }
        pFVar7 = &::LOG_Static;
        goto LAB_14dd35d40;
      }
    }
  }
  else {
    if (pUVar5 != (UClass *)0x0) goto LAB_14dd35b58;
LAB_14dd35b8a:
    local_28.Size = 0;
    local_18.DataPtr = (wchar_t *)0x0;
    local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
    if (DefaultDebugWidgetAsset.Data.ArrayNum == 0) {
      local_28.DataPtr = L"";
LAB_14dd35bbc:
      sVar4 = wcslen(local_28.DataPtr);
      local_28.Size = (int)sVar4;
    }
    else {
      local_28.DataPtr = (wchar_t *)DefaultDebugWidgetAsset.Data.AllocatorInstance.Data;
      if (DefaultDebugWidgetAsset.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14dd35bbc;
    }
    pUVar5 = Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
    pUVar5 = StaticLoadClass(pUVar5,(UObject *)0x0,&local_28,&local_18,0,(UPackageMap *)0x0);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14dd35c1a:
      if (pUVar5 != (UClass *)0x0) goto LAB_14dd35c23;
    }
    else if (pUVar5 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
      goto LAB_14dd35c1a;
    }
  }
  if ((byte)LogMovieRenderPipeline._0_1_ < 3) {
    return;
  }
  pFVar7 = &::LOG_Static;
LAB_14dd35d40:
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogMovieRenderPipeline);
  return;
}

// ModifySequenceViaExtensions @ 14dd370f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipeline::ModifySequenceViaExtensions(UMoviePipeline *this,ULevelSequence *param_1)

{
  return;
}

// OnEngineTickBeginFrame @ 14dd378b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipeline::OnEngineTickBeginFrame(UMoviePipeline *this)

{
  EMovieRenderPipelineState EVar1;
  code *pcVar2;
  bool bVar3;
  
  if (6 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if ((this->CustomTimeStep).field0_0x0.DebugPtr == (UMoviePipelineCustomTimeStep *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CustomTimeStep",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipeline.cpp"
                       ,599,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = this->PipelineState;
  if (EVar1 == Uninitialized) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipeline.cpp"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (EVar1 == ProducingFrames) {
    TickProducingFrames(this);
  }
  else if (EVar1 == Finalize) {
    TickFinalizeOutputContainers(this,false);
  }
  else if (EVar1 == Export) {
    TickPostFinalizeExport(this,false);
  }
  this->bHasRunBeginFrameOnce = true;
  if (6 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    return;
  }
  return;
}

// OnEngineTickEndFrame @ 14dd379b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMoviePipeline::OnEngineTickEndFrame(UMoviePipeline *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  UWorld *this_00;
  APlayerController *pAVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name634,L"MoviePipeline");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name634,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name634,true);
  pTVar2 = CVarMovieRenderPipelineFrameStepper.Ref;
  if (this->bHasRunBeginFrameOnce != false) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if ((pTVar2->ShadowedValue[0] != 0) || (this->bPauseAtEndOfFrame != false)) {
      if (this->bPauseAtEndOfFrame != false) {
        this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        pAVar4 = UWorld::GetFirstPlayerController(this_00);
        local_18 = 0;
        local_28 = 0;
        local_20 = 0;
        (**(code **)(pAVar4->_padding_ + 0xbd8))(pAVar4,1,&local_28);
        this->bPauseAtEndOfFrame = false;
      }
      if (6 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      ProcessAudioTick(this);
      RenderFrame(this);
      if (6 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// OnMoviePipelineFinishedImpl @ 14dd37fd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipeline::OnMoviePipelineFinishedImpl(UMoviePipeline *this)

{
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UMoviePipelineExecutorJob *pUVar3;
  FMoviePipelineShotOutputData *pFVar4;
  ForAnyElementType FVar5;
  UMoviePipeline *pUVar6;
  undefined1 uVar7;
  FMovieGraphRenderOutputData *pFVar8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  UMoviePipeline *local_90;
  UMoviePipelineExecutorJob *local_88;
  undefined1 local_80;
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> local_78;
  FMovieGraphRenderOutputData *local_68;
  undefined8 local_60;
  TObjectPtr<UMoviePipelineBase>_u_0 local_58;
  UMoviePipelineExecutorJob *local_50;
  undefined1 local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34;
  ForAnyElementType local_30;
  int local_28;
  int local_24 [3];
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_68 = (FMovieGraphRenderOutputData *)0x0;
  local_60 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UMoviePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar3 = (this->CurrentJob).field0_0x0.DebugPtr;
  local_90 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_80 = this->bFatalError == (FThreadSafeBool)0x0;
  pTVar1 = &this->GeneratedShotOutputData;
  local_88 = pUVar3;
  if (&local_78 != pTVar1) {
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    iVar2 = (this->GeneratedShotOutputData).ArrayNum;
    pFVar4 = (FMoviePipelineShotOutputData *)(pTVar1->AllocatorInstance).Data;
    local_78.ArrayNum = iVar2;
    if ((iVar2 == 0) && (local_78.ArrayMax == 0)) {
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar2,local_78.ArrayMax,&local_78.AllocatorInstance,iVar2,&local_78.ArrayMax
                );
      ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
                (local_78.AllocatorInstance.Data,pFVar4,iVar2);
    }
  }
  if (5 < (byte)LogMovieRenderPipelineIO._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
  }
  PrintVerboseLogForFiles(this,pTVar1);
  if (5 < (byte)LogMovieRenderPipelineIO._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
  }
  pUVar6 = local_90;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UMoviePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_90);
  }
  pUVar3 = local_88;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_88 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  FVar5.Data = local_78.AllocatorInstance.Data;
  uVar7 = local_80;
  iVar2 = local_78.ArrayNum;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = local_78.ArrayNum;
  if (local_78.ArrayNum == 0) {
    local_a4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_78.ArrayNum,0,&local_b0,local_78.ArrayNum,&local_a4);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              (local_b0.Data,(FMoviePipelineShotOutputData *)FVar5.Data,iVar2);
  }
  pFVar8 = local_68;
  iVar2 = (int)local_60;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = (int)local_60;
  if ((int)local_60 == 0) {
    local_94 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,(int)local_60,0,&local_a0,(int)local_60,&local_94);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              (local_a0.Data,pFVar8,iVar2);
  }
  local_58.DebugPtr = (UMoviePipelineBase *)pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UMoviePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_50 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  iVar2 = local_a8;
  FVar5.Data = local_b0.Data;
  local_48 = uVar7;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = local_a8;
  if (local_a8 == 0) {
    local_34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_a8,0,&local_40,local_a8,&local_34);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              (local_40.Data,(FMoviePipelineShotOutputData *)FVar5.Data,iVar2);
  }
  iVar2 = local_98;
  FVar5.Data = local_a0.Data;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = local_98;
  if (local_98 == 0) {
    local_24[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_98,0,&local_30,local_98,local_24);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              (local_30.Data,(FMovieGraphRenderOutputData *)FVar5.Data,iVar2);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>,FMoviePipelineOutputData>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
             (FMoviePipelineOutputData *)&local_58.ObjectPtr);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)local_a0.Data,local_98);
  if ((FMovieGraphRenderOutputData *)local_a0.Data != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)local_b0.Data,local_a8);
  if ((FMoviePipelineShotOutputData *)local_b0.Data != (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  pUVar6 = local_90;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UMoviePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_90);
  }
  pUVar3 = local_88;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_88 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  FVar5.Data = local_78.AllocatorInstance.Data;
  uVar7 = local_80;
  iVar2 = local_78.ArrayNum;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = local_78.ArrayNum;
  if (local_78.ArrayNum == 0) {
    local_a4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_78.ArrayNum,0,&local_b0,local_78.ArrayNum,&local_a4);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              (local_b0.Data,(FMoviePipelineShotOutputData *)FVar5.Data,iVar2);
  }
  pFVar8 = local_68;
  iVar2 = (int)local_60;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = (int)local_60;
  if ((int)local_60 == 0) {
    local_94 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,(int)local_60,0,&local_a0,(int)local_60,&local_94);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              (local_a0.Data,pFVar8,iVar2);
  }
  local_58.DebugPtr = (UMoviePipelineBase *)pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UMoviePipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_50 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  iVar2 = local_a8;
  FVar5.Data = local_b0.Data;
  local_48 = uVar7;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = local_a8;
  if (local_a8 == 0) {
    local_34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_a8,0,&local_40,local_a8,&local_34);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              (local_40.Data,(FMoviePipelineShotOutputData *)FVar5.Data,iVar2);
  }
  iVar2 = local_98;
  FVar5.Data = local_a0.Data;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = local_98;
  if (local_98 == 0) {
    local_24[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,local_98,0,&local_30,local_98,local_24);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              (local_30.Data,(FMovieGraphRenderOutputData *)FVar5.Data,iVar2);
  }
  FMoviePipelineWorkFinished_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FMoviePipelineOutputData *)&local_58.ObjectPtr);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)local_a0.Data,local_98);
  if ((FMovieGraphRenderOutputData *)local_a0.Data != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)local_b0.Data,local_a8);
  if ((FMoviePipelineShotOutputData *)local_b0.Data != (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  DestructItems<FMovieGraphRenderOutputData,int>(local_68,(int)local_60);
  if (local_68 != (FMovieGraphRenderOutputData *)0x0) {
    FMemory::Free(local_68);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FMoviePipelineShotOutputData *)local_78.AllocatorInstance.Data !=
      (FMoviePipelineShotOutputData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// OnSequenceEvaluated @ 14dd39af0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipeline::OnSequenceEvaluated
          (UMoviePipeline *this,UMovieSceneSequencePlayer *param_1,FFrameTime param_2,
          FFrameTime param_3)

{
  FString local_30;
  FString local_20;
  
  if (6 < (byte)LogMovieRenderPipeline._0_1_) {
    ::FString::PrintfImpl(&local_20,L"Frame: %d Subframe: %f");
    ::FString::PrintfImpl(&local_30,L"Frame: %d Subframe: %f");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PrintVerboseLogForFiles @ 14dd3a670

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipeline::PrintVerboseLogForFiles
          (UMoviePipeline *this,
          TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  FWeakObjectPtr *pFVar3;
  bool bVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  FWeakObjectPtr *pFVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FWeakObjectPtr FVar14;
  FWeakObjectPtr FVar15;
  FWeakObjectPtr *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_e8 [4];
  uint local_e4;
  FWeakObjectPtr *local_e0;
  FWeakObjectPtr *local_d8;
  int local_d0;
  int local_cc;
  FWeakObjectPtr *local_c8;
  FWeakObjectPtr *local_c0;
  int iStack_b8;
  uint uStack_b4;
  FWeakObjectPtr local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  FWeakObjectPtr *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  local_e4 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)local_e4;
  pFVar9 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
  pFVar16 = pFVar9 + 5;
  local_c8 = pFVar9 + uVar6 * 0xb;
  do {
    pFVar3 = local_c8;
    local_e0 = pFVar9;
    local_d8 = pFVar16;
    if (param_1->ArrayNum != (int)uVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMoviePipelineShotOutputData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar3) {
      return;
    }
    pUVar5 = FWeakObjectPtr::Get(pFVar9);
    if ((pUVar5 != (UObject *)0x0) && (5 < (byte)LogMovieRenderPipelineIO._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    uVar13 = pFVar16[1].ObjectIndex;
    iStack_b8 = 0;
    local_a0 = 0;
    uStack_b4 = 1;
    uStack_a4 = 0;
    if (uVar13 != 0) {
      FVar15 = *pFVar16;
      if (*pFVar16 == (FWeakObjectPtr)0x0) {
        FVar15 = (FWeakObjectPtr)(pFVar16 + -2);
      }
      uVar11 = *(uint *)FVar15;
      while (uVar11 == 0) {
        lVar7 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        uStack_a4 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b8)
        goto LAB_14dd3a79f;
        uVar11 = *(uint *)((longlong)FVar15 + lVar7 * 4 + 4);
      }
      uStack_b4 = -uVar11 & uVar11;
      uVar6 = (ulonglong)uStack_b4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_d0 = (int)lVar7;
      uStack_a4 = local_a0 + -1 + local_d0;
      if ((int)uVar13 < (int)uStack_a4) {
        uStack_a4 = uVar13;
      }
    }
LAB_14dd3a79f:
    pFVar9 = pFVar16 + -4;
    FVar15 = (FWeakObjectPtr)(pFVar16 + -2);
    uStack_9c = local_44;
    iStack_98 = pFVar16[-3].ObjectIndex - pFVar16[2].ObjectSerialNumber;
    uVar11 = uVar13 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
    uStack_a8 = 0xffffffff;
    TStack_88.CurrentBitIndex = uStack_a4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = local_a0;
    uStack_68 = CONCAT44(uStack_94,iStack_98);
    iVar8 = (int)uVar13 >> 5;
    local_c0 = pFVar9;
    local_b0 = FVar15;
    local_90 = pFVar9;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar15;
    if (((int)uVar13 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = pFVar16[1].ObjectIndex;
    if (uVar13 != uVar1) {
      FVar14 = *pFVar16;
      if (*pFVar16 == (FWeakObjectPtr)0x0) {
        FVar14 = FVar15;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar8 * 4);
      while (uVar13 == 0) {
        lVar7 = (longlong)iVar8;
        uVar11 = uVar11 + 0x20;
        iVar8 = iVar8 + 1;
        uVar13 = uVar1;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_14dd3a8a0;
        uVar13 = *(uint *)((FScriptContainerElement *)((longlong)FVar14 + 4) + lVar7 * 4);
      }
      uVar6 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_cc = (int)lVar7;
      uVar13 = local_cc + -1 + uVar11;
      if ((int)uVar1 < (int)uVar13) {
        uVar13 = uVar1;
      }
    }
LAB_14dd3a8a0:
    while( true ) {
      pFVar16 = local_90;
      if (local_90[1].ObjectIndex - local_90[6].ObjectSerialNumber != (int)uStack_68) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_88.CurrentBitIndex == uVar13) && ((FWeakObjectPtr)TStack_88.Array == FVar15)) &&
         (pFVar16 == pFVar9)) break;
      lVar7 = (longlong)TStack_88.CurrentBitIndex * 0x38 + (longlong)*pFVar16;
      if (5 < (byte)LogMovieRenderPipelineIO._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
      }
      iVar8 = *(int *)(lVar7 + 0x28);
      lVar10 = *(longlong *)(lVar7 + 0x20);
      lVar12 = (longlong)iVar8 * 0x10 + lVar10;
      while( true ) {
        if (*(int *)(lVar7 + 0x28) != iVar8) {
          local_e8[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_e8);
        }
        if (lVar10 == lVar12) break;
        if (5 < (byte)LogMovieRenderPipelineIO._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
        }
        lVar10 = lVar10 + 0x10;
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    pFVar9 = local_e0 + 0xb;
    pFVar16 = local_d8 + 0xb;
    uVar6 = (ulonglong)local_e4;
  } while( true );
}

// ProcessAudioTick @ 14dd3a9d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMoviePipeline::ProcessAudioTick(UMoviePipeline *this)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMixerPlatformNonRealtime *this_00;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  ENetMode EVar7;
  uint uVar8;
  UWorld *this_01;
  FAudioDevice *this_02;
  FFrameRate FVar9;
  atomic<double> aVar10;
  
  this_01 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)this,LogAndReturnNull);
  if (((((this_01 != (UWorld *)0x0) && (this_01->bAllowAudioPlayback != '\0')) &&
       (EVar7 = UWorld::InternalGetNetMode(this_01), EVar7 != NM_DedicatedServer)) &&
      ((this_02 = UWorld::GetAudioDeviceRaw(this_01), this_02 != (FAudioDevice *)0x0 &&
       (pTVar2 = this_02[1].ReverbPluginInterface.SharedReferenceCount.ReferenceController,
       pTVar2 != (TReferenceControllerBase<1> *)0x0)))) &&
     ((cVar5 = (**(code **)(pTVar2->_padding_ + 0xf8))(), cVar5 != '\0' &&
      (this_00 = (FMixerPlatformNonRealtime *)
                 this_02[1].ReverbPluginInterface.SharedReferenceCount.ReferenceController,
      this_00 != (FMixerPlatformNonRealtime *)0x0)))) {
    uVar1 = this->CurrentShotIndex;
    uVar8 = 0;
    if ((int)uVar1 < (this->ActiveShotList).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    if ((*(char *)(lVar3 + 0xcc) == '\x03') && ((this->AudioState).bIsRecordingAudio == false)) {
      FAudioDevice::Update(this_02,true);
      Audio::FMixerPlatformNonRealtime::RenderAudio(this_00,__real_403e000000000000);
      StartAudioRecording(this);
    }
    bVar6 = true;
    aVar10 = FApp::DeltaTime;
    if (*(char *)(lVar3 + 0xcc) == '\x03') {
      bVar6 = (this->CachedOutputState).TemporalSampleIndex ==
              (this->CachedOutputState).TemporalSampleCount + -1;
      FVar9 = UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
                        ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.
                         DebugPtr,(ULevelSequence *)&stack0x00000018);
      aVar10 = (atomic<double>)((double)*(int *)((longlong)FVar9 + 4) / (double)*(int *)FVar9);
    }
    FAudioDevice::Update(this_02,true);
    if (bVar6) {
      Audio::FMixerPlatformNonRealtime::RenderAudio(this_00,(double)aVar10);
    }
  }
  return;
}

// ProcessEndOfCameraCut @ 14dd3abb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipeline::ProcessEndOfCameraCut(UMoviePipeline *this,UMoviePipelineExecutorShot *param_1)

{
  ULevelSequencePlayer *this_00;
  
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  (param_1->ShotInfo).State = Finished;
  this_00 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr);
  UMovieSceneSequencePlayer::Pause((UMovieSceneSequencePlayer *)this_00);
  TeardownShot(this,param_1);
  return;
}

// RequestShutdownImpl @ 14dd3d330

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipeline::RequestShutdownImpl(UMoviePipeline *this,bool param_1)

{
  if (param_1) {
    LOCK();
    this->bFatalError = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  LOCK();
  this->bShutdownRequested = (FThreadSafeBool)0x1;
  UNLOCK();
  if (((this->PipelineState == Finalize) || (this->PipelineState == Export)) &&
     (4 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    return;
  }
  return;
}

// ResolveFilenameFormatArguments @ 14dd3d720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipeline::ResolveFilenameFormatArguments
          (UMoviePipeline *this,FString *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,FString *param_3,FMoviePipelineFormatArgs *param_4,
          FMoviePipelineFrameOutputState *param_5,int param_6)

{
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 TVar1;
  FScriptContainerElement *_Src;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UMoviePipelineOutputSetting *pUVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  FDateTime *this_00;
  undefined1 auStackY_228 [32];
  FTimespan local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  undefined1 local_178 [72];
  undefined1 local_130 [32];
  void *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ForElementType<FSetElementId> local_f0;
  int local_e8;
  undefined1 local_e0 [32];
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ForElementType<FSetElementId> local_a0;
  int local_98;
  FDateTime local_90;
  FTimespan local_88;
  int local_80;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_78;
  int local_70;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_178._0_4_ = 0;
  local_178._4_4_ = 0;
  local_178._8_4_ = 0;
  local_178._12_4_ = 0;
  local_108 = ___xmm_00000000ffffffff0000008000000000;
  uStack_100 = _UNK_150631d98;
  local_b8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_b0 = _UNK_150631d98;
  local_178._16_8_ = (FScriptContainerElement *)0x0;
  local_178._24_4_ = 0;
  local_178._28_4_ = 0;
  local_178._32_8_ = (FScriptContainerElement *)0x0;
  local_178._40_4_ = 0;
  local_178._44_4_ = 0;
  local_178._48_4_ = 0;
  local_178[0x34] = false;
  local_178._56_8_ = (FScriptContainerElement *)0x0;
  local_178._64_4_ = 0;
  local_178._68_4_ = 0;
  local_130._0_8_ = (FScriptContainerElement *)0x0;
  local_130._8_8_ = 0;
  local_110 = (void *)0x0;
  local_f0 = (ForElementType<FSetElementId>)0x0;
  local_e8 = 0;
  local_e0._0_8_ = (FScriptContainerElement *)0x0;
  local_e0._8_8_ = 0;
  local_c0 = (void *)0x0;
  local_a0 = (ForElementType<FSetElementId>)0x0;
  local_98 = 0;
  local_90.Ticks = 0;
  local_88.Ticks = 0;
  local_80 = 0;
  local_78.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  local_70 = -1;
  local_68.DebugPtr = (UMoviePipelineExecutorShot *)0x0;
  local_60 = 0;
  if (param_5 != (FMoviePipelineFrameOutputState *)0x0) {
    local_178._4_4_ = param_5->CurrentShotSourceFrameNumber;
    local_178._0_4_ = param_5->SourceFrameNumber;
    local_178._12_4_ = param_5->ShotOutputFrameNumber;
    local_178._8_4_ = param_5->OutputFrameNumber;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_e0,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&param_5->FileMetadata);
    uVar6 = param_5->ShotIndex;
    uVar8 = 0;
    if ((int)uVar6 < (this->ActiveShotList).ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TVar1 = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)
            ((TObjectPtr<UMoviePipelineExecutorShot>_u_0 *)
            ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar6 * 8))->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    uVar6 = param_5->ShotIndex;
    uVar8 = 0;
    if ((int)uVar6 < (this->ActiveShotList).ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    local_68 = TVar1;
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_80 = *(int *)(*(longlong *)
                         ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar6 * 8)
                       + 0x164);
    local_70 = param_5->CameraIndex;
    if ((FString *)(local_178 + 0x10) != &param_5->CameraNameOverride) {
      iVar5 = (param_5->CameraNameOverride).Data.ArrayNum;
      _Src = (param_5->CameraNameOverride).Data.AllocatorInstance.Data;
      local_178._24_4_ = iVar5;
      if ((iVar5 == 0) && (local_178._28_4_ == 0)) {
        local_178._24_4_ = 0;
        local_178._28_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,local_178._28_4_,(ForAnyElementType *)(local_178 + 0x10),iVar5,
                   (int *)(local_178 + 0x1c));
        if (iVar5 != 0) {
          memcpy((void *)local_178._16_8_,_Src,(longlong)iVar5 * 2);
        }
      }
    }
  }
  pUVar7 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)
                      (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
                      false);
  if ((pUVar7 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipeline.cpp"
                         ,0x628,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_178._48_4_ = pUVar7->ZeroPadFrameNumbers;
  bVar4 = false;
  iVar5 = ::FString::Find(param_1,L"{frame",6,IgnoreCase,FromStart,-1);
  if ((((iVar5 != -1) && (param_5 != (FMoviePipelineFrameOutputState *)0x0)) &&
      (__real_322bcc77 <
       (float)((uint)((param_5->TimeData).TimeDilation - __real_3f800000) &
              __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
     (iVar5 = ::FString::Find(param_1,L"_rel}",5,IgnoreCase,FromStart,-1), iVar5 == -1)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    bVar4 = true;
  }
  local_178[0x34] = bVar4;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)local_130,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_2);
  local_90.Ticks = (this->InitializationTime).Ticks;
  TVar2 = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)(this->CurrentJob).field0_0x0.DebugPtr;
  local_88.Ticks = (this->InitializationTimeOffset).Ticks;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  local_60 = param_6;
  local_78 = TVar2;
  UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments
            (param_1,(FMoviePipelineFilenameResolveParams *)local_178,param_3,param_4);
  if ((param_5 != (FMoviePipelineFrameOutputState *)0x0) &&
     (*(int *)&(this->RenderTimeFrameStatistics).field_0x8 !=
      *(int *)&(this->RenderTimeFrameStatistics).field_0x34)) {
    puVar10 = *(undefined1 **)&(this->RenderTimeFrameStatistics).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->RenderTimeFrameStatistics).field_0x38;
    }
    uVar6 = *(uint *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->RenderTimeFrameStatistics).field_0x48 - 1U &
                     param_5->OutputFrameNumber) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar6 * 0x20 +
                         *(longlong *)&this->RenderTimeFrameStatistics);
        if (*puVar9 == param_5->OutputFrameNumber) {
          this_00 = (FDateTime *)(puVar9 + 2);
          if (puVar9 == (uint *)0x0) {
            this_00 = (FDateTime *)0x0;
          }
          if (this_00 != (FDateTime *)0x0) {
            FDateTime::ToString(this_00,&local_188);
            FDateTime::ToString(this_00 + 1,&local_198);
            local_1e0.Ticks = this_00[1].Ticks - this_00->Ticks;
            FTimespan::ToString(&local_1e0,&local_1a8);
            ::FString::FString(&local_1d8,L"unreal/frameRenderStartTimeUTC");
            TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::Emplace<FString,FString_const_&>
                      ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&param_4->FileMetadata,&local_1d8,&local_188);
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            ::FString::FString(&local_1c8,L"unreal/frameRenderEndTimeUTC");
            TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::Emplace<FString,FString_const_&>
                      ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&param_4->FileMetadata,&local_1c8,&local_198);
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            ::FString::FString(&local_1b8,L"unreal/frameRenderDuration");
            TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::Emplace<FString,FString_const_&>
                      ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&param_4->FileMetadata,&local_1b8,&local_1a8);
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
            }
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        uVar6 = puVar9[6];
      } while (uVar6 != 0xffffffff);
    }
  }
  local_98 = 0;
  if (local_a0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e0,0,local_e0._8_4_);
  iVar5 = SUB84(local_e0._8_8_,4);
  local_e0._8_8_ = local_e0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_e0,0,(int *)(local_e0 + 0xc));
  }
  uVar6 = local_b8._4_4_;
  uStack_b0 = 0xffffffff;
  local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
  if (0x80 < uVar6) {
    local_b8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e0 + 0x10),0);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e0._0_8_);
  }
  local_e8 = 0;
  if (local_f0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_130,0,local_130._8_4_);
  iVar5 = SUB84(local_130._8_8_,4);
  local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_130,0,(int *)(local_130 + 0xc));
  }
  uVar6 = local_108._4_4_;
  uStack_100 = 0xffffffff;
  local_108 = (ulonglong)local_108._4_4_ << 0x20;
  if (0x80 < uVar6) {
    local_108 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_130 + 0x10),0);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  if ((FScriptContainerElement *)local_130._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_130._0_8_);
  }
  if ((FScriptContainerElement *)local_178._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._56_8_);
  }
  if ((FScriptContainerElement *)local_178._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._32_8_);
  }
  if ((FScriptContainerElement *)local_178._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._16_8_);
  }
  return;
}

// RestoreTargetSequenceToOriginalState @ 14dd3f820

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::RestoreTargetSequenceToOriginalState(UMoviePipeline *this)

{
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_18;
  
  if ((this->PipelineState != Uninitialized) &&
     ((this->TargetSequence).field0_0x0.DebugPtr != (ULevelSequence *)0x0)) {
    local_18.Object = (this->CachedSequenceHierarchyRoot).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    MoviePipeline::RestoreCompleteSequenceHierarchy
              ((UMovieSceneSequence *)(this->TargetSequence).field0_0x0.DebugPtr,&local_18);
  }
  return;
}

// SetProgressWidgetVisible @ 14dd403e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::SetProgressWidgetVisible(UMoviePipeline *this,bool param_1)

{
  UMovieRenderDebugWidget *pUVar1;
  
  pUVar1 = (this->DebugWidget).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieRenderDebugWidget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dd403f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,!param_1);
    return;
  }
  return;
}

// SetSoloShot @ 14dd405c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipeline::SetSoloShot(UMoviePipeline *this,UMoviePipelineExecutorShot *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMoviePipelineExecutorJob *pUVar3;
  FCameraCutSubSectionHierarchyNode *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  UMoviePipelinePrimaryConfig *pUVar6;
  UMoviePipelineSetting *pUVar7;
  FScriptContainerElement *pFVar8;
  UClass *local_res8;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_48;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_38;
  
  pUVar3 = (this->CurrentJob).field0_0x0.DebugPtr;
  pFVar8 = (pUVar3->ShotInfo).AllocatorInstance.Data;
  iVar2 = (pUVar3->ShotInfo).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar3->ShotInfo).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pFVar4 = *(FCameraCutSubSectionHierarchyNode **)(*(longlong *)pFVar8 + 0x90);
    pTVar5 = *(TReferenceControllerBase<1> **)(*(longlong *)pFVar8 + 0x98);
    local_48.Object = pFVar4;
    local_48.SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      MoviePipeline::SaveOrRestoreSubSectionHierarchy(&local_48,true);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      MoviePipeline::SaveOrRestoreSubSectionHierarchy(&local_48,true);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pFVar4;
    local_38.SharedReferenceCount.ReferenceController = pTVar5;
    MoviePipeline::SetSubSectionHierarchyActive(&local_38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pFVar8 = pFVar8 + 8;
  }
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  local_38.Object = (param_1->ShotInfo).SubSectionHierarchy.Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->ShotInfo).SubSectionHierarchy.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MoviePipeline::SetSubSectionHierarchyActive(&local_38,true);
  pUVar6 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
  local_res8 = Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar7 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                     ((TSubclassOf<UMoviePipelineSetting>)&local_res8,pUVar6,param_1);
  ExpandShot(this,param_1,
             *(int *)((longlong)&pUVar7[1].ValidationResults.AllocatorInstance.Data + 4),false);
  return;
}

// SetupAudioRendering @ 14dd418a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::SetupAudioRendering(UMoviePipeline *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  IConsoleVariable *this_00;
  float fVar4;
  
  fVar4 = FApp::GetUnfocusedVolumeMultiplier();
  (this->AudioState).PrevUnfocusedAudioMultiplier = fVar4;
  FApp::SetUnfocusedVolumeMultiplier(__real_3f800000);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"au.nrt.RenderEveryTick",1);
  if (this_00 != (IConsoleVariable *)0x0) {
    iVar3 = (**(code **)(*(longlong *)this_00 + 200))(this_00);
    (this->AudioState).PrevRenderEveryTickValue = iVar3;
    IConsoleVariable::SetWithCurrentPriority<int>
              (this_00,0,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  return;
}

// ShutdownImpl @ 14dd41d00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::ShutdownImpl(UMoviePipeline *this,bool param_1)

{
  EMovieRenderPipelineState EVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipeline.cpp"
                       ,0x180,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  this->bShutdownRequested = (FThreadSafeBool)0x1;
  UNLOCK();
  if (param_1) {
    LOCK();
    this->bFatalError = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  EVar1 = this->PipelineState;
  if ((EVar1 != Uninitialized) && (EVar1 != Finished)) {
    if (EVar1 == ProducingFrames) {
      TransitionToState(this,Finalize);
      if (1 < (this->CachedOutputState).TemporalSampleCount) {
        if ((this->OutputBuilder).Object == (FMoviePipelineOutputMerger *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (**(code **)(((this->OutputBuilder).Object)->_padding_ + 0x18))();
      }
    }
    if (this->PipelineState == Finalize) {
      TickFinalizeOutputContainers(this,true);
    }
    if (this->PipelineState == Export) {
      TickPostFinalizeExport(this,true);
    }
  }
  return;
}

// StartAudioRecording @ 14dd41e00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMoviePipeline::StartAudioRecording(UMoviePipeline *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<TWeakPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  float fVar8;
  ENetMode EVar9;
  atomic<int> aVar10;
  int iVar11;
  UWorld *this_00;
  FMixerDevice *this_01;
  FMixerSubmix *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  TWeakPtr<Audio::FMixerSubmix,1> local_48 [2];
  
  (this->AudioState).bIsRecordingAudio = true;
  this_00 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)this,LogAndReturnNull);
  if ((((this_00 != (UWorld *)0x0) && (this_00->bAllowAudioPlayback != '\0')) &&
      (EVar9 = UWorld::InternalGetNetMode(this_00), EVar9 != NM_DedicatedServer)) &&
     (this_01 = (FMixerDevice *)UWorld::GetAudioDeviceRaw(this_00), this_01 != (FMixerDevice *)0x0))
  {
    Audio::FMixerDevice::GetMasterSubmix(this_01,local_48);
    pFVar12 = (FMixerSubmix *)0x0;
    if (local_48[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = (local_48[0].WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14dd41f9c;
        }
        LOCK();
        aVar10 = (local_48[0].WeakReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar16 = aVar4 == aVar10;
        if (bVar16) {
          (local_48[0].WeakReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar4 + 1);
          aVar10 = aVar4;
        }
        UNLOCK();
        pFVar12 = local_48[0].Object;
        aVar4 = aVar10;
      } while (!bVar16);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].WeakReferenceCount.ReferenceController);
    if (pFVar12 != (FMixerSubmix *)0x0) {
      pTVar3 = &(this->AudioState).ActiveSubmixes;
      pTVar5 = (TWeakPtr<Audio::FMixerSubmix,1> *)(pTVar3->AllocatorInstance).Data;
      if (((pTVar5 <= local_48) && (local_48 < pTVar5 + (this->AudioState).ActiveSubmixes.ArrayMax))
         && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->AudioState).ActiveSubmixes.ArrayNum;
      piVar1 = &(this->AudioState).ActiveSubmixes.ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->AudioState).ActiveSubmixes.ArrayNum = iVar11 + 1;
      pFVar15 = (pTVar3->AllocatorInstance).Data;
      *(FMixerSubmix **)(pFVar15 + (longlong)iVar11 * 0x10) = local_48[0].Object;
      *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar11 * 0x10 + 8) =
           local_48[0].WeakReferenceCount.ReferenceController;
      if (local_48[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_48[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_48[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
    }
LAB_14dd41f9c:
    fVar8 = __real_41f00000;
    iVar11 = (this->AudioState).ActiveSubmixes.ArrayNum;
    pFVar15 = (this->AudioState).ActiveSubmixes.AllocatorInstance.Data;
    pFVar14 = pFVar15 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((this->AudioState).ActiveSubmixes.ArrayNum != iVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar14) break;
      pTVar6 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
      pFVar12 = *(FMixerSubmix **)pFVar15;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pFVar12 = (FMixerSubmix *)0x0;
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14dd42038;
          }
          LOCK();
          aVar10 = pTVar6->SharedReferenceCount;
          bVar16 = aVar4 == aVar10;
          if (bVar16) {
            pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar10 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar10;
        } while (!bVar16);
      }
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        pFVar12 = (FMixerSubmix *)0x0;
      }
      pTVar13 = pTVar6;
      if (pFVar12 == (FMixerSubmix *)0x0) {
LAB_14dd42038:
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      Audio::FMixerSubmix::OnStartRecordingOutput(pFVar12,fVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      pFVar15 = pFVar15 + 0x10;
    }
    if (local_48[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_48[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_48[0].WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_48[0].WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// StartUnrealInsightsCapture @ 14dd44c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipeline::StartUnrealInsightsCapture(UMoviePipeline *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  UMoviePipelineOutputSetting *pUVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStackY_1d8 [32];
  FString local_198;
  FString local_188;
  FString local_178;
  undefined1 local_168 [16];
  int local_158;
  FString *local_150;
  FString *local_148;
  FString local_140;
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  void *local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pUVar5 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)
                      (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
                      false);
  ::FString::ConcatFC((FString *)(local_168 + 8),&pUVar5->FileNameFormat,L"_UnrealInsights");
  iVar8 = local_158 + -1;
  if (local_158 == 0) {
    iVar8 = 0;
  }
  if (((pUVar5->OutputDirectory).Path.Data.ArrayNum != 0) || (iVar4 = 2, iVar8 == -1)) {
    iVar4 = 1;
  }
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pUVar5->OutputDirectory).Path.Data.ArrayNum;
  _Src = (pUVar5->OutputDirectory).Path.Data.AllocatorInstance.Data;
  local_188.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar8 + iVar4 == 0)) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    uVar9 = iVar1 + iVar8 + iVar4;
    if ((int)uVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar9,0,(ForAnyElementType *)&local_188,iVar1,&local_188.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_188.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&local_188,(wchar_t *)local_168._8_8_,iVar8);
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  ::FString::FString(&local_178,L"utrace");
  ::FString::FString(&local_140,L"ext");
  local_150 = &local_140;
  local_148 = &local_178;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_128,(TPairInitializer<FString_&&,FString_&&> *)local_168,(bool *)&local_150);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  ResolveFilenameFormatArguments
            (this,&local_188,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_128,&local_198,(FMoviePipelineFormatArgs *)&local_d8,
             (FMoviePipelineFrameOutputState *)0x0,0);
  bVar3 = FPaths::IsRelative(&local_198);
  if (bVar3) {
    pFVar6 = FPaths::ConvertRelativePathToFull(&local_178,&local_198);
    if (&local_198 != pFVar6) {
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      local_198.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_198.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar7.Data = local_198.Data.AllocatorInstance.Data;
  }
  bVar3 = FTraceAuxiliary::Start
                    (File,(wchar_t *)FVar7.Data,L"default",(FOptions *)0x0,
                     (FLogCategoryBase *)&LogCore);
  if (bVar3) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else if (2 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&local_d8,0,(int)local_d0);
  uVar2 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_128,0,local_128._8_4_);
  iVar8 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if ((FString *)local_168._8_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_168._8_8_);
  }
  return;
}

// StaticRegisterNativesUMoviePipeline @ 14dd45510

void __cdecl UMoviePipeline::StaticRegisterNativesUMoviePipeline(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipeline_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAudioRecording @ 14dd45680

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMoviePipeline::StopAudioRecording(UMoviePipeline *this)

{
  FScriptContainerElement *pFVar1;
  atomic<int> *paVar2;
  int *piVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *_Src;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar7;
  double dVar8;
  undefined8 uVar9;
  atomic<int> aVar10;
  int iVar11;
  ulonglong uVar12;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar13;
  TArray<TWeakPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FMixerSubmix *this_00;
  bool bVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  
  (this->AudioState).bIsRecordingAudio = false;
  local_res10 = (this->AudioState).ActiveSubmixes.ArrayNum;
  uVar12 = (ulonglong)(int)local_res10;
  pFVar17 = (this->AudioState).ActiveSubmixes.AllocatorInstance.Data;
  pFVar16 = pFVar17 + uVar12 * 0x10;
  do {
    if ((this->AudioState).ActiveSubmixes.ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<TWeakPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar17 == pFVar16) {
      pTVar14 = &(this->AudioState).ActiveSubmixes;
      pTVar7 = (TWeakPtr<Audio::FMixerSubmix,1> *)(pTVar14->AllocatorInstance).Data;
      piVar3 = &(this->AudioState).ActiveSubmixes.ArrayMax;
      iVar11 = (this->AudioState).ActiveSubmixes.ArrayNum;
      if (-1 < (this->AudioState).ActiveSubmixes.ArrayMax) {
        DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>(pTVar7,iVar11);
        (this->AudioState).ActiveSubmixes.ArrayNum = 0;
        return;
      }
      DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>(pTVar7,iVar11);
      iVar11 = *piVar3;
      (this->AudioState).ActiveSubmixes.ArrayNum = 0;
      if (iVar11 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar14->AllocatorInstance,0,piVar3);
      }
      return;
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
    this_00 = *(FMixerSubmix **)pFVar17;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14dd45957;
        }
        LOCK();
        aVar10 = pTVar6->SharedReferenceCount;
        bVar18 = aVar5 == aVar10;
        if (bVar18) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar10 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar10;
      } while (!bVar18);
    }
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      this_00 = (FMixerSubmix *)0x0;
    }
    if (this_00 != (FMixerSubmix *)0x0) {
      iVar11 = (this->AudioState).FinishedSegments.ArrayNum;
      piVar3 = &(this->AudioState).FinishedSegments.ArrayMax;
      if (iVar11 == *piVar3) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x148,8,&(this->AudioState).FinishedSegments.AllocatorInstance,piVar3);
        (this->AudioState).FinishedSegments.ArrayNum = iVar11;
      }
      (this->AudioState).FinishedSegments.ArrayNum = iVar11 + 1;
      pFVar15 = (this->AudioState).FinishedSegments.AllocatorInstance.Data +
                (longlong)iVar11 * 0x148;
      DefaultConstructItems<MoviePipeline::FAudioState::FAudioSegment,int>(pFVar15,1);
      *(int *)(pFVar15 + 0x10) = (this->CachedOutputState).OutputFrameNumber;
      *(int *)(pFVar15 + 0x14) = (this->CachedOutputState).ShotIndex;
      *(int *)(pFVar15 + 0x18) = (this->CachedOutputState).ShotCount;
      *(int *)(pFVar15 + 0x1c) = (this->CachedOutputState).TemporalSampleIndex;
      *(int *)(pFVar15 + 0x20) = (this->CachedOutputState).TemporalSampleCount;
      *(int *)(pFVar15 + 0x24) = (this->CachedOutputState).ShotOutputFrameNumber;
      *(int *)(pFVar15 + 0x28) = (this->CachedOutputState).ShotSamplesRendered;
      dVar8 = (this->CachedOutputState).TimeData.FrameDeltaTime;
      *(undefined8 *)(pFVar15 + 0x30) = *(undefined8 *)&(this->CachedOutputState).TimeData;
      *(double *)(pFVar15 + 0x38) = dVar8;
      uVar9 = *(undefined8 *)&(this->CachedOutputState).TimeData.TimeDilation;
      *(double *)(pFVar15 + 0x40) = (this->CachedOutputState).TimeData.WorldSeconds;
      *(undefined8 *)(pFVar15 + 0x48) = uVar9;
      ::FString::operator=((FString *)(pFVar15 + 0x50),&(this->CachedOutputState).CameraName);
      ::FString::operator=
                ((FString *)(pFVar15 + 0x60),&(this->CachedOutputState).CameraNameOverride);
      ::FString::operator=((FString *)(pFVar15 + 0x70),&(this->CachedOutputState).ShotName);
      pFVar15[0x80] = (FScriptContainerElement)(this->CachedOutputState).bSkipRendering;
      pFVar15[0x81] = (FScriptContainerElement)(this->CachedOutputState).bCaptureRendering;
      pFVar15[0x82] = (FScriptContainerElement)(this->CachedOutputState).bDiscardRenderResult;
      *(int *)(pFVar15 + 0x84) = (this->CachedOutputState).SourceFrameNumber;
      uVar9 = *(undefined8 *)&(this->CachedOutputState).SourceTimeCode.Seconds;
      *(undefined8 *)(pFVar15 + 0x88) = *(undefined8 *)&(this->CachedOutputState).SourceTimeCode;
      *(undefined8 *)(pFVar15 + 0x90) = uVar9;
      *(undefined8 *)(pFVar15 + 0x98) =
           *(undefined8 *)&(this->CachedOutputState).SourceTimeCode.Subframe;
      *(int *)(pFVar15 + 0xa0) = (this->CachedOutputState).EffectiveFrameNumber;
      uVar9 = *(undefined8 *)&(this->CachedOutputState).EffectiveTimeCode.Seconds;
      *(undefined8 *)(pFVar15 + 0xa4) = *(undefined8 *)&(this->CachedOutputState).EffectiveTimeCode;
      *(undefined8 *)(pFVar15 + 0xac) = uVar9;
      *(undefined8 *)(pFVar15 + 0xb4) =
           *(undefined8 *)&(this->CachedOutputState).EffectiveTimeCode.Subframe;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(pFVar15 + 0xc0),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&(this->CachedOutputState).FileMetadata);
      *(int *)(pFVar15 + 0x110) = (this->CachedOutputState).CurrentShotSourceFrameNumber;
      uVar9 = *(undefined8 *)&(this->CachedOutputState).CurrentShotSourceTimeCode.Seconds;
      *(undefined8 *)(pFVar15 + 0x114) =
           *(undefined8 *)&(this->CachedOutputState).CurrentShotSourceTimeCode;
      *(undefined8 *)(pFVar15 + 0x11c) = uVar9;
      *(undefined8 *)(pFVar15 + 0x124) =
           *(undefined8 *)&(this->CachedOutputState).CurrentShotSourceTimeCode.Subframe;
      *(int *)(pFVar15 + 300) = (this->CachedOutputState).CameraIndex;
      pTVar13 = Audio::FMixerSubmix::OnStopRecordingOutput
                          (this_00,(float *)(pFVar15 + 0x130),(float *)(pFVar15 + 0x134));
      pTVar4 = (TArray<float,TAlignedHeapAllocator<16>_> *)(pFVar15 + 0x138);
      if (pTVar4 != pTVar13) {
        iVar11 = pTVar13->ArrayNum;
        pFVar1 = pFVar15 + 0x144;
        _Src = (pTVar13->AllocatorInstance).Data;
        *(int *)(pFVar15 + 0x140) = iVar11;
        if ((iVar11 == 0) && (*(int *)pFVar1 == 0)) {
          *(int *)pFVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar11,*(int *)pFVar1,(ForAnyElementType *)pTVar4,iVar11,(int *)pFVar1);
          if (iVar11 != 0) {
            memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar11 << 2);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
LAB_14dd45957:
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    uVar12 = (ulonglong)local_res10;
    pFVar17 = pFVar17 + 0x10;
  } while( true );
}

// StopUnrealInsightsCapture @ 14dd45a00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::StopUnrealInsightsCapture(UMoviePipeline *this)

{
  FTraceAuxiliaryImpl::Stop(&GTraceAuxiliary);
  return;
}

// TeardownAudioRendering @ 14dd45a50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::TeardownAudioRendering(UMoviePipeline *this)

{
  code *pcVar1;
  bool bVar2;
  IConsoleVariable *this_00;
  
  FApp::SetUnfocusedVolumeMultiplier((this->AudioState).PrevUnfocusedAudioMultiplier);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"au.nrt.RenderEveryTick",1);
  if (this_00 != (IConsoleVariable *)0x0) {
    IConsoleVariable::SetWithCurrentPriority<int>
              (this_00,(this->AudioState).PrevRenderEveryTickValue,(FName)0x0,ECVF_SetByConsole,
               ECVF_SetByScalability);
  }
  return;
}

// TeardownShot @ 14dd46010

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipeline::TeardownShot(UMoviePipeline *this,UMoviePipelineExecutorShot *param_1)

{
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *pTVar1;
  UMoviePipelineExecutorJob *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  UMoviePipelinePrimaryConfig *this_00;
  UMoviePipelineCommandLineEncoder *this_01;
  code *pcVar4;
  FMovieGraphRenderOutputData *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  UClass *pUVar11;
  FMoviePipelineOutputData *pFVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  FMoviePipelineShotOutputData *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  <lambda_1> local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> local_1b8;
  UMoviePipeline *local_1a8;
  UMoviePipelineExecutorJob *local_1a0;
  undefined1 local_198;
  ForAnyElementType local_190;
  undefined8 local_188;
  FMovieGraphRenderOutputData *local_180;
  undefined8 local_178;
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_170;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_160;
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_150;
  TObjectPtr<UMoviePipelineBase>_u_0 local_140;
  UMoviePipelineExecutorJob *local_138;
  undefined1 local_130;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  TObjectPtr<UMoviePipelineBase>_u_0 local_108;
  UMoviePipelineExecutorJob *local_100;
  undefined1 local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  ForAnyElementType local_e0;
  int local_d8;
  int local_d4;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_d0;
  UClass *local_c0;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_b8;
  FMoviePipelineOutputData local_a8;
  FMoviePipelineOutputData local_70;
  
  StopAudioRecording(this);
  TeardownRenderingPipelineForShot(this,param_1);
  if (this->bFlushDiskWritesPerShot != false) {
    ProcessOutstandingFinishedFrames(this);
  }
  UMoviePipelinePrimaryConfig::GetOutputContainers
            ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
             &local_150);
  AlgoImpl::
  IntroSortInternal<UMoviePipelineOutputBase_*,int,_UMoviePipeline::TeardownShot_::__l2::<lambda_1>,TLess<int>_>
            ((UMoviePipelineOutputBase **)local_150.AllocatorInstance.Data,local_150.ArrayNum,
             local_res8[0],(TLess<int>)local_res8[0]);
  iVar8 = local_150.ArrayNum;
  uVar13 = (ulonglong)local_150.ArrayNum;
  pFVar17 = local_150.AllocatorInstance.Data + uVar13 * 8;
  FVar14.Data = local_150.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar13 != iVar8) {
      local_res8[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar14.Data == pFVar17) break;
    (**(code **)(*(longlong *)*(UMoviePipelineOutputBase **)FVar14.Data + 0x368))
              (*(UMoviePipelineOutputBase **)FVar14.Data,param_1);
    uVar13 = (ulonglong)(uint)local_150.ArrayNum;
    FVar14.Data = FVar14.Data + 8;
  }
  if ((param_1->ShotOverrideConfig).field0_0x0.DebugPtr != (UMoviePipelineShotConfig *)0x0) {
    UMoviePipelinePrimaryConfig::GetOutputContainers
              ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
               &local_170);
    AlgoImpl::
    IntroSortInternal<UMoviePipelineOutputBase_*,int,_UMoviePipeline::TeardownShot_::__l12::<lambda_2>,TLess<int>_>
              ((UMoviePipelineOutputBase **)local_170.AllocatorInstance.Data,local_170.ArrayNum,
               (<lambda_2>)local_res8[0],(TLess<int>)local_res8[0]);
    iVar8 = local_170.ArrayNum;
    uVar13 = (ulonglong)local_170.ArrayNum;
    pFVar17 = local_170.AllocatorInstance.Data + uVar13 * 8;
    FVar14.Data = local_170.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar13 != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar14.Data == pFVar17) break;
      (**(code **)(*(longlong *)*(UMoviePipelineOutputBase **)FVar14.Data + 0x2c0))
                (*(UMoviePipelineOutputBase **)FVar14.Data,this);
      uVar13 = (ulonglong)(uint)local_170.ArrayNum;
      FVar14.Data = FVar14.Data + 8;
    }
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
  }
  UMoviePipelinePrimaryConfig::GetAllSettings
            ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
             &local_160,false,false);
  AlgoImpl::
  IntroSortInternal<UMoviePipelineSetting_*,int,_UMoviePipeline::TeardownShot_::__l2::<lambda_3>,TLess<int>_>
            ((UMoviePipelineSetting **)local_160.AllocatorInstance.Data,local_160.ArrayNum,
             (<lambda_3>)local_res8[0],(TLess<int>)local_res8[0]);
  iVar8 = local_160.ArrayNum;
  uVar13 = (ulonglong)local_160.ArrayNum;
  pFVar17 = local_160.AllocatorInstance.Data + uVar13 * 8;
  FVar14.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar13 != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar14.Data == pFVar17) break;
    (**(code **)((*(UMoviePipelineSetting **)FVar14.Data)->_padding_ + 0x2d0))();
    uVar13 = (ulonglong)(uint)local_160.ArrayNum;
    FVar14.Data = FVar14.Data + 8;
  }
  pUVar2 = (this->CurrentJob).field0_0x0.DebugPtr;
  pFVar15 = (pUVar2->ShotInfo).AllocatorInstance.Data;
  iVar8 = (pUVar2->ShotInfo).ArrayNum;
  pFVar17 = pFVar15 + (longlong)iVar8 * 8;
  while( true ) {
    if ((pUVar2->ShotInfo).ArrayNum != iVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar15 == pFVar17) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(*(longlong *)pFVar15 + 0x98);
    local_d0.Object = *(FCameraCutSubSectionHierarchyNode **)(*(longlong *)pFVar15 + 0x90);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d0.SharedReferenceCount.ReferenceController = pTVar3;
    MoviePipeline::SaveOrRestoreSubSectionHierarchy(&local_d0,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar15 = pFVar15 + 8;
  }
  UE::MoviePipeline::RestoreSkeletalMeshClothSubSteps(&this->ClothSimCache);
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->ClothSimCache);
  FMoviePipelineTelemetry::SendEndShotRenderTelemetry
            (false,this->bFatalError == (FThreadSafeBool)0x0,
             this->bShutdownRequested != (FThreadSafeBool)0x0);
  if (this->bFlushDiskWritesPerShot != false) {
    ProcessOutstandingFutures(this);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    if (0 < (this->GeneratedShotOutputData).ArrayNum) {
      iVar8 = (this->GeneratedShotOutputData).ArrayNum;
      uVar18 = iVar8 - 1;
      uVar7 = 0;
      if ((int)uVar18 < iVar8) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (FMoviePipelineShotOutputData *)
                ((this->GeneratedShotOutputData).AllocatorInstance.Data +
                (longlong)((this->GeneratedShotOutputData).ArrayNum + -1) * 0x58);
      if (((local_1b8.AllocatorInstance.Data <= pFVar16) &&
          (pFVar16 < (FMoviePipelineShotOutputData *)
                     (local_1b8.AllocatorInstance.Data + (longlong)local_1b8.ArrayMax * 0x58))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_1b8.ArrayNum == local_1b8.ArrayMax) {
        local_1b8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x858,&local_1b8.AllocatorInstance,&local_1b8.ArrayMax);
      }
      lVar10 = (longlong)local_1b8.ArrayNum;
      local_1b8.ArrayNum = local_1b8.ArrayNum + 1;
      FMoviePipelineShotOutputData::FMoviePipelineShotOutputData
                ((FMoviePipelineShotOutputData *)(local_1b8.AllocatorInstance.Data + lVar10 * 0x58),
                 pFVar16);
      uVar18 = (this->GeneratedShotOutputData).ArrayNum - 1;
      uVar7 = 0;
      if ((int)uVar18 < (this->GeneratedShotOutputData).ArrayNum) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = (this->GeneratedShotOutputData).AllocatorInstance.Data +
                (longlong)(int)uVar18 * 0x58;
      *(undefined4 *)(pFVar17 + 0x50) = 0;
      if (*(void **)(pFVar17 + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar17 + 0x48));
      }
      TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar17 + 8));
      iVar8 = ((this->GeneratedShotOutputData).ArrayNum - uVar18) + -1;
      if (iVar8 != 0) {
        memmove(pFVar17,pFVar17 + 0x58,(longlong)iVar8 * 0x58);
      }
      iVar8 = (this->GeneratedShotOutputData).ArrayNum + -1;
      (this->GeneratedShotOutputData).ArrayNum = iVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,&(this->GeneratedShotOutputData).AllocatorInstance,iVar8,
                 &(this->GeneratedShotOutputData).ArrayMax);
    }
    this_00 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
    local_c0 = UMoviePipelineCommandLineEncoder::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c0);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c0);
    }
    UMoviePipelineConfigBase::FindSettingsByClass
              ((UMoviePipelineConfigBase *)this_00,&local_b8,
               (TSubclassOf<UMoviePipelineSetting>)&local_c0,false,false);
    if (local_b8.ArrayNum < 1) {
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
    }
    else {
      this_01 = *(UMoviePipelineCommandLineEncoder **)local_b8.AllocatorInstance.Data;
      FMemory::Free(local_b8.AllocatorInstance.Data);
      if (this_01 != (UMoviePipelineCommandLineEncoder *)0x0) {
        pUVar11 = UMoviePipelineCommandLineEncoder::StaticClass();
        iVar8 = (int)pUVar11->_padding_;
        if ((iVar8 <= *(int *)(this_01->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar11->_padding_)) {
          UMoviePipelineCommandLineEncoder::StartEncodingProcess(this_01,&local_1b8,true);
        }
      }
    }
    local_190.Data = (FScriptContainerElement *)0x0;
    local_188 = 0;
    local_180 = (FMovieGraphRenderOutputData *)0x0;
    local_178 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pUVar2 = (this->CurrentJob).field0_0x0.DebugPtr;
    local_1a8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_198 = this->bFatalError == (FThreadSafeBool)0x0;
    local_1a0 = pUVar2;
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)local_190.Data,(int)local_188);
    iVar8 = local_1b8.ArrayNum;
    FVar14.Data = local_1b8.AllocatorInstance.Data;
    local_188 = CONCAT44(local_188._4_4_,local_1b8.ArrayNum);
    if ((local_1b8.ArrayNum != 0) || (local_188._4_4_ != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,local_1b8.ArrayNum,local_188._4_4_,&local_190,local_1b8.ArrayNum,
                 (int *)((longlong)&local_188 + 4));
      ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
                (local_190.Data,(FMoviePipelineShotOutputData *)FVar14.Data,iVar8);
    }
    pTVar1 = &this->GeneratedShotOutputData;
    if ((pTVar1 == &local_1b8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = local_1b8.ArrayNum;
    if (local_1b8.ArrayNum != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,8,local_1b8.ArrayNum,&pTVar1->AllocatorInstance,
                         &(this->GeneratedShotOutputData).ArrayNum,
                         &(this->GeneratedShotOutputData).ArrayMax);
      ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x58,
                 (FMoviePipelineShotOutputData *)local_1b8.AllocatorInstance.Data,iVar8);
    }
    if (5 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    PrintVerboseLogForFiles(this,&local_1b8);
    if (5 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    local_140.DebugPtr = (UMoviePipelineBase *)local_1a8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UMoviePipeline *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_1a8);
    }
    local_138 = local_1a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1a0 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1a0);
    }
    FVar14.Data = local_190.Data;
    iVar8 = (int)local_188;
    local_130 = local_198;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = (int)local_188;
    if ((int)local_188 == 0) {
      local_11c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,(int)local_188,0,&local_128,(int)local_188,&local_11c);
      ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
                (local_128.Data,(FMoviePipelineShotOutputData *)FVar14.Data,iVar8);
    }
    pFVar5 = local_180;
    iVar8 = (int)local_178;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = (int)local_178;
    if ((int)local_178 == 0) {
      local_10c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,(int)local_178,0,&local_118,(int)local_178,&local_10c);
      ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
                (local_118.Data,pFVar5,iVar8);
    }
    pFVar12 = FMoviePipelineOutputData::FMoviePipelineOutputData
                        (&local_a8,(FMoviePipelineOutputData *)&local_140.ObjectPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>,FMoviePipelineOutputData>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,pFVar12);
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)local_118.Data,local_110);
    if ((FMovieGraphRenderOutputData *)local_118.Data != (FMovieGraphRenderOutputData *)0x0) {
      FMemory::Free(local_118.Data);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)local_128.Data,local_120);
    if ((FMoviePipelineShotOutputData *)local_128.Data != (FMoviePipelineShotOutputData *)0x0) {
      FMemory::Free(local_128.Data);
    }
    local_108.DebugPtr = (UMoviePipelineBase *)local_1a8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UMoviePipeline *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_1a8);
    }
    local_100 = local_1a0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1a0 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1a0);
    }
    FVar14.Data = local_190.Data;
    iVar8 = (int)local_188;
    local_f8 = local_198;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = (int)local_188;
    if ((int)local_188 == 0) {
      local_e4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,(int)local_188,0,&local_f0,(int)local_188,&local_e4);
      ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
                (local_f0.Data,(FMoviePipelineShotOutputData *)FVar14.Data,iVar8);
    }
    pFVar5 = local_180;
    iVar8 = (int)local_178;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = (int)local_178;
    if ((int)local_178 == 0) {
      local_d4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,(int)local_178,0,&local_e0,(int)local_178,&local_d4);
      ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
                (local_e0.Data,pFVar5,iVar8);
    }
    pFVar12 = FMoviePipelineOutputData::FMoviePipelineOutputData
                        (&local_70,(FMoviePipelineOutputData *)&local_108.ObjectPtr);
    FMoviePipelineWorkFinished_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,pFVar12);
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)local_e0.Data,local_d8);
    if ((FMovieGraphRenderOutputData *)local_e0.Data != (FMovieGraphRenderOutputData *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)local_f0.Data,local_e8);
    if ((FMoviePipelineShotOutputData *)local_f0.Data != (FMoviePipelineShotOutputData *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    DestructItems<FMovieGraphRenderOutputData,int>(local_180,(int)local_178);
    if (local_180 != (FMovieGraphRenderOutputData *)0x0) {
      FMemory::Free(local_180);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)local_190.Data,(int)local_188);
    if ((FMoviePipelineShotOutputData *)local_190.Data != (FMoviePipelineShotOutputData *)0x0) {
      FMemory::Free(local_190.Data);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if ((FMoviePipelineShotOutputData *)local_1b8.AllocatorInstance.Data !=
        (FMoviePipelineShotOutputData *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
  }
  this->CurrentShotIndex = this->CurrentShotIndex + 1;
  if ((this->ActiveShotList).ArrayNum <= this->CurrentShotIndex) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    TransitionToState(this,Finalize);
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  return;
}

// TickFinalizeOutputContainers @ 14dd46a30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::TickFinalizeOutputContainers(UMoviePipeline *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  byte bVar6;
  <lambda_1> local_res10 [8];
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_38 [2];
  
  fVar2 = __real_3f800000;
  while( true ) {
    bVar6 = 1;
    UMoviePipelinePrimaryConfig::GetOutputContainers
              ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
               local_38);
    iVar4 = (int)local_38[0]._8_8_;
    pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar4 * 8;
    FVar5.Data = local_38[0].AllocatorInstance.Data;
    while( true ) {
      if ((int)local_38[0]._8_8_ != iVar4) {
        `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar5.Data == pFVar1) break;
      bVar3 = (**(code **)(**(longlong **)FVar5.Data + 0x358))();
      bVar6 = bVar6 & bVar3;
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].AllocatorInstance.Data);
    }
    if (!param_1) break;
    if (bVar6 != 0) goto LAB_14dd46ae9;
    FWindowsPlatformProcess::Sleep(fVar2);
  }
  if (bVar6 == 0) {
    return;
  }
LAB_14dd46ae9:
  UMoviePipelinePrimaryConfig::GetOutputContainers
            ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,&local_48
            );
  AlgoImpl::
  IntroSortInternal<UMoviePipelineOutputBase_*,int,_UMoviePipeline::TickFinalizeOutputContainers_::__l2::<lambda_1>,TLess<void>_>
            ((UMoviePipelineOutputBase **)local_48.AllocatorInstance.Data,local_48.ArrayNum,
             local_res10[0],(TLess<void>)local_res10[0]);
  iVar4 = local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar5.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    (**(code **)(*(longlong *)*(UMoviePipelineOutputBase **)FVar5.Data + 0x360))();
    FVar5.Data = FVar5.Data + 8;
  }
  TransitionToState(this,Export);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// TickPostFinalizeExport @ 14dd46ba0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipeline::TickPostFinalizeExport(UMoviePipeline *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ForAnyElementType FVar7;
  byte bVar8;
  undefined1 local_res10 [8];
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_38 [2];
  
  if ((this->PipelineState != Export) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PipelineState == EMovieRenderPipelineState::Export",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipeline.cpp"
                         ,0x2f3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = __real_3f800000;
  if (5 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    fVar3 = __real_3f800000;
  }
  while( true ) {
    bVar8 = 1;
    UMoviePipelinePrimaryConfig::GetAllSettings
              ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
               local_38,false,false);
    iVar6 = (int)local_38[0]._8_8_;
    pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar6 * 8;
    FVar7.Data = local_38[0].AllocatorInstance.Data;
    while( true ) {
      if ((int)local_38[0]._8_8_ != iVar6) {
        `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar7.Data == pFVar1) break;
      bVar5 = (**(code **)(**(longlong **)FVar7.Data + 0x338))();
      bVar8 = bVar8 & bVar5;
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].AllocatorInstance.Data);
    }
    if ((!param_1) || (bVar8 != 0)) break;
    FWindowsPlatformProcess::Sleep(fVar3);
  }
  if (5 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if (bVar8 != 0) {
    TransitionToState(this,Finished);
  }
  return;
}

// TransitionToState @ 14dd46d00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMoviePipeline::TransitionToState(UMoviePipeline *this,EMovieRenderPipelineState param_1)

{
  FScriptContainerElement *pFVar1;
  EMovieRenderPipelineState EVar2;
  int iVar3;
  UMoviePipelineExecutorJob *pUVar4;
  UMovieRenderDebugWidget *pUVar5;
  UMoviePipelineCustomTimeStep *pUVar6;
  UMoviePipelinePrimaryConfig *this_00;
  ALevelSequenceActor *this_01;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  IConsoleVariable *this_02;
  ULevelSequencePlayer *pUVar10;
  UWorld *pUVar11;
  UGameViewportClient *pUVar12;
  UObject *pUVar13;
  AWorldSettings *pAVar14;
  FDateTime FVar15;
  UClass *this_03;
  UMoviePipelineSetting *pUVar16;
  UClass *pUVar17;
  ForAnyElementType FVar18;
  <lambda_1> local_res8 [8];
  EMovieRenderPipelineState local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108 [8];
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_100;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_e0;
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_d0;
  undefined8 local_c0;
  FTimespan local_b8;
  UClass *local_b0;
  FMoviePipelineLightweightTickInfo local_a8;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_90;
  FString local_80;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_70;
  UMoviePipeline *local_60;
  EMovieRenderPipelineState *local_58;
  FString local_48;
  
  if (this->bIsTransitioningState != false) {
    return;
  }
  this->bIsTransitioningState = true;
  EVar2 = this->PipelineState;
  if (EVar2 == Uninitialized) {
    this->PipelineState = param_1;
    goto LAB_14dd473df;
  }
  local_res10[0] = param_1;
  if (EVar2 == ProducingFrames) {
    if (param_1 == Finalize) {
      iVar3 = this->CurrentShotIndex;
      if (iVar3 < (this->ActiveShotList).ArrayNum) {
        if ((iVar3 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TeardownShot(this,*(UMoviePipelineExecutorShot **)
                           ((this->ActiveShotList).AllocatorInstance.Data + (longlong)iVar3 * 8));
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
                 this);
      UEngine::SetCustomTimeStep(GEngine,(this->CachedPrevCustomTimeStep).field0_0x0.DebugPtr);
      FlushRenderingCommands();
      ProcessOutstandingFinishedFrames(this);
      (this->PreviewTexture).field0_0x0.DebugPtr = (UTexture *)0x0;
      pUVar4 = (this->CurrentJob).field0_0x0.DebugPtr;
      this->PipelineState = Finalize;
      UMoviePipelinePrimaryConfig::GetOutputContainers
                ((pUVar4->Configuration).field0_0x0.DebugPtr,&local_d0);
      AlgoImpl::
      IntroSortInternal<UMoviePipelineOutputBase_*,int,_UMoviePipeline::BeginFinalize_::__l2::<lambda_1>,TLess<void>_>
                ((UMoviePipelineOutputBase **)local_d0.AllocatorInstance.Data,local_d0.ArrayNum,
                 (<lambda_1>)local_res8[0],(TLess<void>)local_res8[0]);
      iVar3 = local_d0.ArrayNum;
      pFVar1 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 8;
      FVar18.Data = local_d0.AllocatorInstance.Data;
      while( true ) {
        if (local_d0.ArrayNum != iVar3) {
          `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_108);
        }
        if (FVar18.Data == pFVar1) break;
        (**(code **)(*(longlong *)*(UMoviePipelineOutputBase **)FVar18.Data + 0x350))();
        FVar18.Data = FVar18.Data + 8;
      }
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      goto LAB_14dd473df;
    }
  }
  else if (EVar2 == Finalize) {
    if (param_1 == Export) {
      this_01 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
      this->PipelineState = Export;
      pUVar10 = ALevelSequenceActor::GetSequencePlayer(this_01);
      UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)pUVar10);
      if ((this->PipelineState != Uninitialized) &&
         ((this->TargetSequence).field0_0x0.DebugPtr != (ULevelSequence *)0x0)) {
        local_70.Object = (this->CachedSequenceHierarchyRoot).Object;
        local_70.SharedReferenceCount.ReferenceController =
             (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController;
        if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        MoviePipeline::RestoreCompleteSequenceHierarchy
                  ((UMovieSceneSequence *)(this->TargetSequence).field0_0x0.DebugPtr,&local_70);
      }
      ProcessOutstandingFutures(this);
      UMoviePipelinePrimaryConfig::GetAllSettings
                ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
                 &local_e0,false,false);
      AlgoImpl::
      IntroSortInternal<UMoviePipelineSetting_*,int,_UMoviePipeline::BeginExport_::__l2::<lambda_1>,TLess<void>_>
                ((UMoviePipelineSetting **)local_e0.AllocatorInstance.Data,local_e0.ArrayNum,
                 (<lambda_1>)local_res8[0],(TLess<void>)local_res8[0]);
      iVar3 = local_e0.ArrayNum;
      pFVar1 = local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 8;
      FVar18.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if (local_e0.ArrayNum != iVar3) {
          `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (FVar18.Data == pFVar1) break;
        (**(code **)((*(UMoviePipelineSetting **)FVar18.Data)->_padding_ + 0x340))();
        FVar18.Data = FVar18.Data + 8;
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      local_a8.bIsActive = false;
      local_a8.SequenceFPS = 0.0;
      local_a8.TemporalSampleCount = 1;
      local_a8.TemporalSampleIndex = 0;
      FMovieRenderPipelineCoreModule::SetTickInfo(&local_a8);
      goto LAB_14dd473df;
    }
  }
  else if ((EVar2 == Export) && (param_1 == Finished)) {
    pUVar4 = (this->CurrentJob).field0_0x0.DebugPtr;
    this->PipelineState = Finished;
    UMoviePipelinePrimaryConfig::GetAllSettings
              ((pUVar4->Configuration).field0_0x0.DebugPtr,&local_f0,false,false);
    AlgoImpl::
    IntroSortInternal<UMoviePipelineSetting_*,int,_UMoviePipeline::TransitionToState_::__l19::<lambda_1>,TLess<int>_>
              ((UMoviePipelineSetting **)local_f0.AllocatorInstance.Data,local_f0.ArrayNum,
               local_res8[0],(TLess<int>)local_res8[0]);
    iVar3 = local_f0.ArrayNum;
    pFVar1 = local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 8;
    FVar18.Data = local_f0.AllocatorInstance.Data;
    while( true ) {
      if (local_f0.ArrayNum != iVar3) {
        local_res8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar18.Data == pFVar1) break;
      (**(code **)((*(UMoviePipelineSetting **)FVar18.Data)->_padding_ + 0x2c0))
                (*(UMoviePipelineSetting **)FVar18.Data,this);
      FVar18.Data = FVar18.Data + 8;
    }
    UEngine::SetCustomTimeStep(GEngine,(this->CachedPrevCustomTimeStep).field0_0x0.DebugPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnBeginFrame,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               this);
    pUVar5 = (this->DebugWidget).field0_0x0.DebugPtr;
    if (pUVar5 != (UMovieRenderDebugWidget *)0x0) {
      (**(code **)(*(longlong *)pUVar5 + 0x2d0))();
      (this->DebugWidget).field0_0x0.DebugPtr = (UMovieRenderDebugWidget *)0x0;
    }
    UMoviePipelinePrimaryConfig::GetOutputContainers
              ((((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,
               &local_100);
    AlgoImpl::
    IntroSortInternal<UMoviePipelineOutputBase_*,int,_UMoviePipeline::TransitionToState_::__l19::<lambda_2>,TLess<void>_>
              ((UMoviePipelineOutputBase **)local_100.AllocatorInstance.Data,local_100.ArrayNum,
               (<lambda_2>)local_res8[0],(TLess<void>)local_res8[0]);
    iVar3 = local_100.ArrayNum;
    pFVar1 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
    FVar18.Data = local_100.AllocatorInstance.Data;
    while( true ) {
      if (local_100.ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar18.Data == pFVar1) break;
      (**(code **)(*(longlong *)*(UMoviePipelineOutputBase **)FVar18.Data + 0x370))();
      FVar18.Data = FVar18.Data + 8;
    }
    FApp::SetUnfocusedVolumeMultiplier((this->AudioState).PrevUnfocusedAudioMultiplier);
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"au.nrt.RenderEveryTick");
    if (this_02 != (IConsoleVariable *)0x0) {
      local_c0 = 0;
      IConsoleVariable::SetWithCurrentPriority<int>
                (this_02,(this->AudioState).PrevRenderEveryTickValue,(FName)0x0,ECVF_SetByConsole,
                 ECVF_SetByScalability);
    }
    pUVar10 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr)
    ;
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)pUVar10);
    if ((this->PipelineState != Uninitialized) &&
       ((this->TargetSequence).field0_0x0.DebugPtr != (ULevelSequence *)0x0)) {
      local_90.Object = (this->CachedSequenceHierarchyRoot).Object;
      local_90.SharedReferenceCount.ReferenceController =
           (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController;
      if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      MoviePipeline::RestoreCompleteSequenceHierarchy
                ((UMovieSceneSequence *)(this->TargetSequence).field0_0x0.DebugPtr,&local_90);
    }
    pUVar11 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar12 = UWorld::GetGameViewport(pUVar11);
    if (pUVar12 != (UGameViewportClient *)0x0) {
      pUVar12->bDisableWorldRendering = 0;
    }
    ::FString::FString(&local_80,L"r.ResetRenderTargetsExtent");
    pUVar13 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    UKismetSystemLibrary::ExecuteConsoleCommand(pUVar13,&local_80,(APlayerController *)0x0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    pUVar6 = (this->CustomTimeStep).field0_0x0.DebugPtr;
    pUVar11 = (UWorld *)(**(code **)(pUVar6->_padding_ + 0x180))(pUVar6);
    pAVar14 = UWorld::GetWorldSettings(pUVar11,false,true);
    if (pAVar14 != (AWorldSettings *)0x0) {
      pAVar14->MinUndilatedFrameTime = pUVar6->PrevMinUndilatedFrameTime;
      pAVar14->MaxUndilatedFrameTime = pUVar6->PrevMaxUndilatedFrameTime;
    }
    GAreScreenMessagesEnabled = this->bPrevGScreenMessagesEnabled;
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      FVar15 = FDateTime::UtcNow();
      local_b8.Ticks = *(longlong *)FVar15.Ticks - (this->InitializationTime).Ticks;
      FTimespan::ToString(&local_b8,&local_48);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    this_00 = (((this->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
    this_03 = UMoviePipelineDebugSettings::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_03 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_03);
    }
    if (this_00 == (UMoviePipelinePrimaryConfig *)0x0) {
LAB_14dd4710e:
      if ((this_03 == (UClass *)0x0) ||
         (pUVar17 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar17 == (UClass *)0x0)
         ) {
LAB_14dd47141:
        this_03 = (UClass *)0x0;
      }
      else {
        iVar3 = (int)pUVar17->_padding_;
        if (((int)this_03->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(this_03->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar17->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_14dd47141;
      }
      pUVar16 = UClass::GetDefaultObject<UMoviePipelineSetting>(this_03);
      if (pUVar16 != (UMoviePipelineSetting *)0x0) goto LAB_14dd47154;
    }
    else {
      local_b0 = this_03;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_03 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_03);
      }
      pUVar16 = UMoviePipelineConfigBase::FindSettingByClass
                          ((UMoviePipelineConfigBase *)this_00,
                           (TSubclassOf<UMoviePipelineSetting>)&local_b0,false,false);
      if ((pUVar16 == (UMoviePipelineSetting *)0x0) ||
         (cVar9 = (**(code **)(pUVar16->_padding_ + 0x328))(pUVar16), cVar9 == '\0'))
      goto LAB_14dd4710e;
LAB_14dd47154:
      if ((char)pUVar16[1]._padding_ != '\0') {
        FTraceAuxiliary::Stop();
      }
    }
    (**(code **)(this->_padding_ + 0x2e8))(this);
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    goto LAB_14dd473df;
  }
  local_58 = local_res10;
  local_60 = this;
  `UMoviePipeline::TransitionToState'::__l58::<lambda_3>::operator()(&local_60);
LAB_14dd473df:
  this->bIsTransitioningState = false;
  return;
}

// ValidateSequenceAndSettings @ 14dd4b880

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::ValidateSequenceAndSettings(UMoviePipeline *this)

{
  return;
}

// WarnAboutAnimatedOverscan @ 14dd4c160

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipeline::WarnAboutAnimatedOverscan(UMoviePipeline *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->bHasWarnedAboutAnimatedOverscan == false) {
    uVar3 = 0;
    if (this->CurrentShotIndex < (this->ActiveShotList).ArrayNum) {
      uVar3 = (uint)~this->CurrentShotIndex >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    this->bHasWarnedAboutAnimatedOverscan = true;
  }
  return;
}

// execGetCurrentJob @ 14dd4fb60

void __cdecl UMoviePipeline::execGetCurrentJob(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x14].field_0x10;
  return;
}

// execGetInitializationTime @ 14dd50a70

void __cdecl
UMoviePipeline::execGetInitializationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 6);
  return;
}

// execGetInitializationTimeOffset @ 14dd50aa0

void __cdecl
UMoviePipeline::execGetInitializationTimeOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xf].field_0x8;
  return;
}

// execGetPipelinePrimaryConfig @ 14dd51c20

void __cdecl
UMoviePipeline::execGetPipelinePrimaryConfig(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[0x14].field_0x10 + 0x100);
  return;
}

// execGetPreviewTexture @ 14dd51d00

void __cdecl UMoviePipeline::execGetPreviewTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[5].field_0x8;
  return;
}

// execInitialize @ 14dd558a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl UMoviePipeline::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMoviePipelineExecutorJob *local_res10;
  
  local_res10 = (UMoviePipelineExecutorJob *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Initialize((UMoviePipeline *)param_1,local_res10);
  return;
}

// execOnMoviePipelineFinishedImpl @ 14dd55f30

void __cdecl
UMoviePipeline::execOnMoviePipelineFinishedImpl(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014dd55f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e8))();
  return;
}

// execSetInitializationTime @ 14dd574b0

void __cdecl
UMoviePipeline::execSetInitializationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar *puVar10;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar10 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar10[0];
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  uVar6 = puVar10[4];
  uVar7 = puVar10[5];
  uVar8 = puVar10[6];
  uVar9 = puVar10[7];
  *(undefined8 *)&param_1[0xf].field_0x8 = 0;
  param_1[6].field_0x0 = uVar2;
  param_1[6].field_0x1 = uVar3;
  param_1[6].field_0x2 = uVar4;
  param_1[6].field_0x3 = uVar5;
  param_1[6].field_0x4 = uVar6;
  param_1[6].field_0x5 = uVar7;
  param_1[6].field_0x6 = uVar8;
  param_1[6].field_0x7 = uVar9;
  return;
}

// FindOrAddSettingForShot<UMoviePipelineAntiAliasingSetting> @ 14dd65120

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipelineAntiAliasingSetting * __thiscall
UMoviePipeline::FindOrAddSettingForShot<UMoviePipelineAntiAliasingSetting>
          (UMoviePipeline *this,UMoviePipelineExecutorShot *param_1)

{
  UMoviePipelinePrimaryConfig *pUVar1;
  UMoviePipelineAntiAliasingSetting *pUVar2;
  UClass *local_res18 [2];
  
  pUVar1 = GetPipelinePrimaryConfig(this);
  local_res18[0] = Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar2 = (UMoviePipelineAntiAliasingSetting *)
           UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                     ((TSubclassOf<UMoviePipelineSetting>)local_res18,pUVar1,param_1);
  return pUVar2;
}

// FindSettingsForShot<UMoviePipelineRenderPass> @ 14dd65400

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<UMoviePipelineRenderPass_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipeline::FindSettingsForShot<UMoviePipelineRenderPass>
          (UMoviePipeline *this,
          TArray<UMoviePipelineRenderPass_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMoviePipelineExecutorShot *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UMoviePipelineSetting *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UMoviePipelineRenderPass_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  int iVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  undefined1 local_res10 [16];
  UClass *local_res20;
  UMoviePipelineSetting *local_78;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_res20 = Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FindSettingsForShot(this,&local_70,(TSubclassOf<UMoviePipelineSetting>)&local_res20,param_1);
  uVar12 = (ulonglong)(uint)local_70.ArrayNum;
  if (local_70.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar12);
  }
  if (*piVar1 < local_70.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_70.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar12 = (ulonglong)(uint)local_70.ArrayNum;
  }
  iVar11 = (int)uVar12;
  pFVar2 = local_70.AllocatorInstance.Data + (longlong)iVar11 * 8;
  FVar14.Data = local_70.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar12 != iVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar14.Data == pFVar2) {
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar3 = *(UMoviePipelineSetting **)FVar14.Data;
    if (pUVar3 == (UMoviePipelineSetting *)0x0) {
      pFVar10 = GetTypeName<UMoviePipelineRenderPass>(&local_40);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar13);
    }
    pUVar8 = Z_Construct_UClass_UMoviePipelineRenderPass_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) break;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_78 = pUVar3;
    if ((pFVar4 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<UMoviePipelineRenderPass_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    FVar14.Data = FVar14.Data + 8;
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(UMoviePipelineSetting **)
     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_78;
    uVar12 = (ulonglong)(uint)local_70.ArrayNum;
  }
  pFVar10 = GetTypeName<UMoviePipelineRenderPass>(&local_60);
  pwVar13 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UMoviePipelineSetting>(&local_50,pUVar3);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar13,pwVar15);
}

// AddOutputFuture @ 14dd75230

/* WARNING: Removing unreachable block (ram,0x00014dd753bc) */
/* WARNING: Removing unreachable block (ram,0x00014dd753ca) */
/* WARNING: Removing unreachable block (ram,0x00014dd753d8) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipeline::AddOutputFuture
          (UMoviePipeline *this,TFuture<bool> *param_1,FMoviePipelineOutputFutureData *param_2)

{
  int *piVar1;
  TArray<TTuple<TFuture<bool>,MoviePipeline::FMoviePipelineOutputFutureData>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 local_50;
  UMoviePipelineExecutorShot *local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_58 = *(undefined8 *)param_1;
  pTVar2 = &this->OutputFutures;
  local_50 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined8 *)param_1 = 0;
  local_48 = param_2->Shot;
  ::FString::FString(&local_40,&param_2->FilePath);
  ::FString::FString(&local_30,&(param_2->PassIdentifier).Name);
  ::FString::FString(&local_20,&(param_2->PassIdentifier).CameraName);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar3 + (longlong)(this->OutputFutures).ArrayMax * 0x48)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->OutputFutures).ArrayNum;
  piVar1 = &(this->OutputFutures).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->OutputFutures).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x48;
  *(undefined8 *)pFVar3 = local_58;
  *(undefined8 *)(pFVar3 + 8) = local_50;
  *(UMoviePipelineExecutorShot **)(pFVar3 + 0x10) = local_48;
  *(undefined8 *)(pFVar3 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar3 + 0x18) = local_40.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 0x20) = local_40.Data.ArrayNum;
  *(int *)(pFVar3 + 0x24) = local_40.Data.ArrayMax;
  *(undefined8 *)(pFVar3 + 0x28) = 0;
  *(FScriptContainerElement **)(pFVar3 + 0x28) = local_30.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 0x30) = local_30.Data.ArrayNum;
  *(int *)(pFVar3 + 0x34) = local_30.Data.ArrayMax;
  *(undefined8 *)(pFVar3 + 0x38) = 0;
  *(FScriptContainerElement **)(pFVar3 + 0x38) = local_20.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 0x40) = local_20.Data.ArrayNum;
  *(int *)(pFVar3 + 0x44) = local_20.Data.ArrayMax;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_58 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// CalculateFrameNumbersForOutputState @ 14dd79fa0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipeline::CalculateFrameNumbersForOutputState
          (UMoviePipeline *this,FFrameConstantMetrics *param_1,UMoviePipelineExecutorShot *param_2,
          FMoviePipelineFrameOutputState *param_3)

{
  float *pfVar1;
  ULevelSequence *pUVar2;
  code *pcVar3;
  FFrameRate FVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  int iVar7;
  int iVar8;
  undefined3 uVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  UMoviePipelinePrimaryConfig *this_00;
  UMoviePipelineOutputSetting *pUVar13;
  FFrameTime FVar14;
  FTimecode *pFVar15;
  int iVar16;
  uint uVar17;
  FFrameNumber local_res8;
  undefined4 uStackX_c;
  FFrameNumber local_res10 [2];
  FFrameNumber local_res18 [2];
  uint local_res20;
  undefined4 uStackX_24;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  FTimecode local_90;
  FTimecode local_78;
  FTimecode local_60;
  
  this_00 = GetPipelinePrimaryConfig(this);
  pUVar2 = (this->TargetSequence).field0_0x0.DebugPtr;
  pUVar13 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)this_00,false);
  if ((pUVar13 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                          ,0xa4,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pUVar13->bUseCustomFrameRate == false) {
    if (pUVar2 == (ULevelSequence *)0x0) {
      local_res8.Value = 60000;
      uStackX_c = 1;
    }
    else {
      (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
    }
  }
  fVar10 = __real_3f000000;
  pfVar1 = &(param_1->TicksPerSample).SubFrame;
  iVar16 = (param_1->TicksPerSample).FrameNumber.Value;
  if (__real_3f000000 < *pfVar1 || __real_3f000000 == *pfVar1) {
    iVar16 = iVar16 + 1;
  }
  iVar16 = iVar16 * param_3->TemporalSampleIndex;
  uStackX_24 = 0;
  uVar17 = (param_2->ShotInfo).CurrentTickInRoot.Value - iVar16;
  FVar4.Denominator = 0;
  FVar4.Numerator = uVar17;
  local_res20 = uVar17;
  FVar14 = FFrameRate::TransformTime((FFrameTime)local_b0,FVar4,param_1->TickResolution);
  local_res8.Value = *(int *)FVar14;
  if (fVar10 < *(float *)((longlong)FVar14 + 4) || fVar10 == *(float *)((longlong)FVar14 + 4)) {
    local_res8.Value = local_res8.Value + 1;
  }
  param_3->SourceFrameNumber = local_res8.Value;
  pFVar15 = FTimecode::FromFrameNumber(&local_90,&local_res8,&param_1->FrameRate,false);
  FVar5.Denominator = 0;
  FVar5.Numerator = uVar17;
  iVar12 = pFVar15->Minutes;
  iVar7 = pFVar15->Seconds;
  iVar8 = pFVar15->Frames;
  (param_3->SourceTimeCode).Hours = pFVar15->Hours;
  (param_3->SourceTimeCode).Minutes = iVar12;
  (param_3->SourceTimeCode).Seconds = iVar7;
  (param_3->SourceTimeCode).Frames = iVar8;
  bVar11 = pFVar15->bDropFrameFormat;
  uVar9 = *(undefined3 *)&pFVar15->field_0x15;
  (param_3->SourceTimeCode).Subframe = pFVar15->Subframe;
  (param_3->SourceTimeCode).bDropFrameFormat = bVar11;
  *(undefined3 *)&(param_3->SourceTimeCode).field_0x15 = uVar9;
  FVar14 = FFrameRate::TransformTime((FFrameTime)local_a8,FVar5,param_1->TickResolution);
  iVar12 = *(int *)FVar14;
  if (fVar10 < *(float *)((longlong)FVar14 + 4) || fVar10 == *(float *)((longlong)FVar14 + 4)) {
    iVar12 = iVar12 + 1;
  }
  param_3->EffectiveFrameNumber = iVar12;
  local_res10[0].Value = param_3->SourceFrameNumber;
  pFVar15 = FTimecode::FromFrameNumber(&local_78,local_res10,&param_1->FrameRate,false);
  iVar12 = pFVar15->Minutes;
  iVar7 = pFVar15->Seconds;
  iVar8 = pFVar15->Frames;
  (param_3->EffectiveTimeCode).Hours = pFVar15->Hours;
  (param_3->EffectiveTimeCode).Minutes = iVar12;
  (param_3->EffectiveTimeCode).Seconds = iVar7;
  (param_3->EffectiveTimeCode).Frames = iVar8;
  bVar11 = pFVar15->bDropFrameFormat;
  uVar9 = *(undefined3 *)&pFVar15->field_0x15;
  (param_3->EffectiveTimeCode).Subframe = pFVar15->Subframe;
  (param_3->EffectiveTimeCode).bDropFrameFormat = bVar11;
  *(undefined3 *)&(param_3->EffectiveTimeCode).field_0x15 = uVar9;
  FVar14 = ::operator*((FFrameTime)local_a0,
                       (FMovieSceneSequenceTransform *)
                       (ulonglong)(uint)((param_2->ShotInfo).CurrentTickInRoot.Value - iVar16));
  FVar6.Denominator = 0;
  FVar6.Numerator = *(uint *)FVar14;
  FVar14 = FFrameRate::TransformTime((FFrameTime)local_98,FVar6,param_1->ShotTickResolution);
  local_res18[0].Value = *(int *)FVar14;
  if (fVar10 < *(float *)((longlong)FVar14 + 4) || fVar10 == *(float *)((longlong)FVar14 + 4)) {
    local_res18[0].Value = local_res18[0].Value + 1;
  }
  param_3->CurrentShotSourceFrameNumber = local_res18[0].Value;
  pFVar15 = FTimecode::FromFrameNumber(&local_60,local_res18,&param_1->FrameRate,false);
  iVar16 = pFVar15->Minutes;
  iVar12 = pFVar15->Seconds;
  iVar7 = pFVar15->Frames;
  (param_3->CurrentShotSourceTimeCode).Hours = pFVar15->Hours;
  (param_3->CurrentShotSourceTimeCode).Minutes = iVar16;
  (param_3->CurrentShotSourceTimeCode).Seconds = iVar12;
  (param_3->CurrentShotSourceTimeCode).Frames = iVar7;
  bVar11 = pFVar15->bDropFrameFormat;
  uVar9 = *(undefined3 *)&pFVar15->field_0x15;
  (param_3->CurrentShotSourceTimeCode).Subframe = pFVar15->Subframe;
  (param_3->CurrentShotSourceTimeCode).bDropFrameFormat = bVar11;
  *(undefined3 *)&(param_3->CurrentShotSourceTimeCode).field_0x15 = uVar9;
  ::FString::operator=(&param_3->ShotName,&param_2->OuterName);
  ::FString::operator=(&param_3->CameraName,&param_2->InnerName);
  return;
}

// FlushAsyncEngineSystems @ 14dd83450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __thiscall UMoviePipeline::FlushAsyncEngineSystems(UMoviePipeline *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  UMoviePipelineExecutorShot *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::FStat_STAT_MoviePipelineFlushAsyncEngineSystems>
  FVar12;
  longlong lVar13;
  UWorld *pUVar14;
  FAssetCompilingManager *this_00;
  UMoviePipelinePrimaryConfig *pUVar15;
  UMoviePipelineSetting *pUVar16;
  FStreamingManagerCollection *pFVar17;
  UClass *pUVar18;
  UClass *pUVar19;
  ULandscapeSubsystem *this_01;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar20;
  FThreadStats *this_04;
  FThreadStatsPool *this_05;
  uint uVar21;
  undefined ***pppuVar22;
  FName FVar23;
  ulonglong uVar24;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  FName local_120;
  FName local_118;
  FName local_110;
  UClass *local_100;
  LARGE_INTEGER local_f8;
  FStatMessage local_f0;
  TOptional<TArrayView<UE::Math::TVector<double>,int>_>_u_0 local_e0;
  FName local_d0;
  FName local_c8 [2];
  code *local_b8 [2];
  undefined **local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined ***local_90;
  code *local_88 [2];
  undefined **local_78 [3];
  undefined ***local_60;
  byte local_58;
  FSyncScope local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_MoviePipelineFlushAsyncEngineSystems ==
          (FThreadSafeStaticStat<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::FStat_STAT_MoviePipelineFlushAsyncEngineSystems>
           )0x0) {
        pFVar11 = ::FName::FName(&local_d0,"STAT_MoviePipelineFlushAsyncEngineSystems");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoviePipelineFlushAsyncEngineSystems,
                   *pFVar11,L"STAT_MoviePipelineFlushAsyncEngineSystems","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar12 = StatPtr_STAT_MoviePipelineFlushAsyncEngineSystems;
  if (StatPtr_STAT_MoviePipelineFlushAsyncEngineSystems ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::FStat_STAT_MoviePipelineFlushAsyncEngineSystems>
       )0x0) {
    pFVar11 = ::FName::FName(local_c8,"STAT_MoviePipelineFlushAsyncEngineSystems");
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_UMoviePipeline::FlushAsyncEngineSystems(void)_::_2_::FStat_STAT_MoviePipelineFlushAsyncEngineSystems>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_MoviePipelineFlushAsyncEngineSystems,*pFVar11,
                          L"STAT_MoviePipelineFlushAsyncEngineSystems","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_14dd835c6:
    bVar7 = false;
    FVar23 = local_110;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_118.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                   ,0x272);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd835c6;
    local_120 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar7 = true;
  }
  lVar13 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar13 != 0) {
    pUVar14 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    UWorld::BlockTillLevelStreamingCompleted(pUVar14);
  }
  pTVar9 = CVarMoviePipelineDisableShaderFlushing.Ref;
  bVar10 = IsInParallelGameThread();
  if (!bVar10) {
    bVar10 = IsInGameThread();
    if (!bVar10) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (pTVar9->ShadowedValue[0] == false) {
    pUVar14 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    UMaterialInterface::SubmitRemainingJobsForWorld(pUVar14,Background);
    this_00 = FAssetCompilingManager::Get();
    FAssetCompilingManager::FinishAllCompilation(this_00);
  }
  uVar2 = this->CurrentShotIndex;
  uVar21 = 0;
  if ((int)uVar2 < (this->ActiveShotList).ArrayNum) {
    uVar21 = ~uVar2 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar4 = *(UMoviePipelineExecutorShot **)
            ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
  pUVar15 = GetPipelinePrimaryConfig(this);
  local_120 = (FName)UMoviePipelineGameOverrideSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_120);
  }
  pUVar16 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_120,pUVar15,pUVar4);
  if ((pUVar16 != (UMoviePipelineSetting *)0x0) && ((char)pUVar16[2]._padding_ != '\0')) {
    pFVar17 = IStreamingManager::Get();
    pcVar5 = *(code **)(pFVar17->_padding_ + 0x10);
    lVar13 = (**(code **)(this->_padding_ + 0x180))(this);
    (*pcVar5)(pFVar17,*(undefined4 *)(lVar13 + 0x91c));
    (**(code **)(pFVar17->_padding_ + 0x20))(pFVar17,0);
  }
  iVar3 = this->CurrentShotIndex;
  if ((this->ActiveShotList).ArrayNum <= iVar3) goto LAB_14dd83883;
  if (iVar3 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar4 = *(UMoviePipelineExecutorShot **)
            ((this->ActiveShotList).AllocatorInstance.Data + (longlong)iVar3 * 8);
  pUVar15 = GetPipelinePrimaryConfig(this);
  local_100 = UMoviePipelineGameOverrideSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_100);
  }
  pUVar16 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_100,pUVar15,pUVar4);
  if ((pUVar16 == (UMoviePipelineSetting *)0x0) || ((char)pUVar16[2]._padding_ == '\0'))
  goto LAB_14dd83883;
  lVar13 = (**(code **)(this->_padding_ + 0x180))(this);
  pUVar18 = Z_Construct_UClass_ULandscapeSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar18 != (UClass *)0x0) goto LAB_14dd83826;
LAB_14dd83854:
    pUVar18 = (UClass *)0x0;
  }
  else {
    if (pUVar18 == (UClass *)0x0) goto LAB_14dd83854;
    UE::GC::MarkAsReachable((UObject *)pUVar18);
LAB_14dd83826:
    pUVar19 = Z_Construct_UClass_ULandscapeSubsystem_NoRegister();
    if (pUVar19 == (UClass *)0x0) goto LAB_14dd83854;
    iVar3 = (int)pUVar19->_padding_;
    if (((int)pUVar18->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar19->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_14dd83854;
  }
  this_01 = (ULandscapeSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)(lVar13 + 0xac0),pUVar18);
  if (this_01 != (ULandscapeSubsystem *)0x0) {
    local_e0.TypedValue.DataPtr = (TVector<double> *)0x0;
    local_e0.TypedValue.ArrayNum = -1;
    ULandscapeSubsystem::RegenerateGrass
              (this_01,false,true,
               (TOptional<TArrayView<UE::Math::TVector<double>,int>_> *)&local_e0.TypedValue);
  }
LAB_14dd83883:
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_48);
  lVar13 = (**(code **)(this->_padding_ + 0x180))(this);
  local_90 = (undefined ***)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_a0 = (uint)*(byte *)(lVar13 + 0x188);
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UMoviePipeline::FlushAsyncEngineSystems_::__l2::TSTR_VirtualTextureSystemFlushCommand678>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    local_78[1]._4_4_ = uStack_9c;
    local_78[1]._0_4_ = uStack_a0;
    local_88[0] = local_b8[0];
    local_60 = local_90;
    local_78[0] = local_a8;
    local_78[2] = (undefined **)local_98;
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar20 = (FRenderCommandTag *)
              TRenderCommandTag<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::TSTR_VirtualTextureSystemFlushCommand678>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar20);
    uVar24 = (ulonglong)local_58;
    if (2 < uVar24) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar24] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_88[0] != (code *)0x0) {
        pppuVar22 = (undefined ***)(local_88 + 2);
        if (local_60 != (undefined ***)0x0) {
          pppuVar22 = local_60;
        }
        (*(code *)(*pppuVar22)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar24])
                ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar22 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar22 = local_90;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_48);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_04 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_04 == (FThreadStats *)0x0) {
      this_05 = FThreadStatsPool::Get();
      this_04 = FThreadStatsPool::GetFromPool(this_05);
    }
    if (this_04->bWaitForExplicitFlush < this_04->ScopeCount) {
      local_f0.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f8);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_04,&local_f0);
      piVar1 = &this_04->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_04,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_04,false,false);
      }
    }
  }
  return;
}

// OnSampleRendered @ 14dd941b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipeline::OnSampleRendered
          (UMoviePipeline *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar1;
  uint *puVar2;
  IImagePixelDataPayload *pIVar3;
  IImagePixelDataPayload _Src;
  UMoviePipelineExecutorShot *pUVar4;
  void *pvVar5;
  FImagePixelData *pFVar6;
  code *pcVar7;
  TPairInitializer<FString_&&,FString_&&> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  UMoviePipelinePrimaryConfig *this_00;
  UMoviePipelineOutputSetting *pUVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  FString *pFVar15;
  FString **ppFVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  undefined8 *puVar22;
  longlong lVar23;
  uint uVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  int iVar27;
  undefined1 auStackY_2e8 [32];
  TPairInitializer<FString_&&,FString_&&> local_2a8;
  int local_298;
  int local_294;
  FString local_290;
  FString local_280;
  int local_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  undefined4 local_260;
  int iStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  FString local_250;
  UMoviePipeline *local_240;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *local_238;
  undefined8 *local_230;
  FString local_228;
  undefined1 local_218 [24];
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  FString *local_1d8;
  FString *local_1d0;
  FString local_1c8;
  FString local_1b8;
  FSparseArrayAllocationInfo local_1a8;
  FString *local_198;
  FString *local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  undefined1 local_158 [8];
  TReferenceControllerBase<1> *local_150;
  undefined1 local_148 [32];
  ForElementType<unsigned_int> local_128;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined1 local_110 [8];
  ForAnyElementType local_108;
  uint local_100;
  undefined1 local_f8 [64];
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  puVar22 = (undefined8 *)0x0;
  local_2a8.Key._0_4_ = 0;
  local_240 = this;
  local_238 = param_1;
  this_00 = GetPipelinePrimaryConfig(this);
  pUVar12 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)this_00,false);
  if ((pUVar12 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                         ,0x243,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar13 = ::operator_new(0x80);
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[1] = 0;
    *puVar13 = &___7FImageWriteTask__6B_;
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 3;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
    *(undefined1 *)(puVar13 + 4) = 1;
    puVar13[6] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar22 = puVar13;
  }
  pIVar3 = (param_1->Ptr->Payload).Object;
  *(undefined1 *)(puVar22 + 3) = 5;
  *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
  iVar27 = *(int *)(pIVar3 + 0x5d);
  bVar9 = 1 < iVar27;
  if (bVar9) {
    local_2a8.Value = (FString *)0x0;
    _Src = pIVar3[0x5c];
    local_298 = iVar27;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar27,0,(ForAnyElementType *)&local_2a8.Value,iVar27,&local_294);
    memcpy(local_2a8.Value,(void *)_Src,(longlong)iVar27 * 2);
    pTVar8 = &local_2a8;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_2a8.Value;
  }
  else {
    ::FString::PrintfImpl((FString *)(local_218 + 8),L"/%s_SS_%d_TS_%d_TileX_%d_TileY_%d.%d");
    pTVar8 = (TPairInitializer<FString_&&,FString_&&> *)local_218;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_218._8_8_;
  }
  ppFVar16 = &pTVar8->Value;
  *ppFVar16 = (FString *)0x0;
  local_228.Data.ArrayNum = *(int *)(ppFVar16 + 1);
  local_228.Data.ArrayMax = *(int *)((longlong)&pTVar8[1].Key + 4);
  ppFVar16[1] = (FString *)0x0;
  if ((bVar9) &&
     ((UMoviePipelineExecutorShot *)local_2a8.Value != (UMoviePipelineExecutorShot *)0x0)) {
    FMemory::Free(local_2a8.Value);
  }
  if ((!bVar9) &&
     ((UMoviePipelineExecutorShot *)local_218._8_8_ != (UMoviePipelineExecutorShot *)0x0)) {
    FMemory::Free((void *)local_218._8_8_);
  }
  local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.Data.ArrayNum = (pUVar12->OutputDirectory).Path.Data.ArrayNum;
  lVar23 = (longlong)local_280.Data.ArrayNum;
  pFVar19 = (pUVar12->OutputDirectory).Path.Data.AllocatorInstance.Data;
  if (local_280.Data.ArrayNum == 0) {
    local_280.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_280.Data.ArrayNum,0,(ForAnyElementType *)&local_280,local_280.Data.ArrayNum
               ,&local_280.Data.ArrayMax);
    memcpy(local_280.Data.AllocatorInstance.Data,pFVar19,lVar23 * 2);
  }
  puVar13 = (undefined8 *)0x0;
  ::FString::ConcatFF(&local_178,&local_280,&local_228);
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  local_148._8_8_ = 0;
  local_128 = (ForElementType<unsigned_int>)0x0;
  iVar27 = 0;
  local_120 = 0;
  local_11c = 0x80;
  local_118 = -1;
  local_114 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  ::FString::FString(&local_1b8,L"exr");
  ::FString::FString(&local_1c8,L"ext");
  local_1d8 = &local_1c8;
  local_1d0 = &local_1b8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_148,&local_2a8,(bool *)&local_1d8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  iVar11 = *(int *)&pIVar3[0x1a].field_0x4;
  if ((iVar11 < 0) || ((this->ActiveShotList).ArrayNum <= iVar11)) goto LAB_14dd94aba;
  if ((iVar11 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar4 = *(UMoviePipelineExecutorShot **)
            ((this->ActiveShotList).AllocatorInstance.Data + (longlong)iVar11 * 8);
  local_2a8.Value = (FString *)pUVar4;
  if (pUVar4 == (UMoviePipelineExecutorShot *)0x0) goto LAB_14dd94aba;
  ::FString::FString(&local_290,L"shot_name");
  if (local_114 == 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,1,(ForAnyElementType *)local_148,(int *)(local_148 + 8),
                        (int *)(local_148 + 0xc));
    iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),1);
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
    if (local_128 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_128;
    }
    uVar18 = iVar10 >> 0x1f & 0x1f;
    iVar10 = iVar10 + uVar18;
    puVar2 = (uint *)((longlong)FVar25 + (longlong)(iVar10 >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << (((byte)iVar10 & 0x1f) - (char)uVar18 & 0x1f));
    iVar10 = local_118;
  }
  else {
    local_114 = local_114 + -1;
    iVar10 = *(int *)(local_148._0_8_ + (longlong)local_118 * 0x28 + 4);
    iVar11 = local_118;
    if (local_114 != 0) {
      *(undefined4 *)(local_148._0_8_ + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  local_118 = iVar10;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_148,&local_1a8,iVar11);
  if (local_1a8.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_1a8.Pointer = 0;
    *(FScriptContainerElement **)local_1a8.Pointer = local_290.Data.AllocatorInstance.Data;
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_1a8.Pointer + 8) = local_290.Data.ArrayNum;
    *(int *)((longlong)local_1a8.Pointer + 0xc) = local_290.Data.ArrayMax;
    local_290.Data.ArrayNum = 0;
    local_290.Data.ArrayMax = 0;
    ::FString::FString((FString *)((longlong)local_1a8.Pointer + 0x10),&pUVar4->OuterName);
    *(undefined4 *)((longlong)local_1a8.Pointer + 0x20) = 0xffffffff;
    puVar13 = local_1a8.Pointer;
  }
  if (*(int *)(puVar13 + 1) == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)*puVar13;
    iVar27 = *(int *)(puVar13 + 1) + -1;
  }
  local_2a8.Key._0_4_ = FCrc::Strihash_DEPRECATED<wchar_t>(iVar27,pwVar21);
  if ((local_148._8_4_ - local_114 != 1) && (local_148._8_4_ != local_114)) {
    FVar17.Data = (FScriptContainerElement *)local_110;
    if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
      FVar17.Data = local_108.Data;
    }
    iVar27 = *(int *)((longlong)FVar17.Data + (ulonglong)(local_100 - 1 & (uint)local_2a8.Key) * 4);
    pFVar19 = (FScriptContainerElement *)local_148._0_8_;
    while (iVar27 != -1) {
      lVar23 = (longlong)iVar27 * 0x28;
      iVar11 = *(int *)(pFVar19 + lVar23 + 8);
      if (iVar11 == *(int *)(puVar13 + 1)) {
        if (1 < iVar11) {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(pFVar19 + lVar23),(wchar_t *)*puVar13);
          bVar9 = iVar11 == 0;
          pFVar19 = (FScriptContainerElement *)local_148._0_8_;
          goto LAB_14dd9471f;
        }
LAB_14dd94732:
        if (iVar27 != -1) {
          if (*(void **)(pFVar19 + (longlong)iVar27 * 0x28 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar19 + (longlong)iVar27 * 0x28 + 0x10));
          }
          pvVar5 = *(void **)(pFVar19 + (longlong)iVar27 * 0x28);
          if (pvVar5 != (void *)0x0) {
            FMemory::Free(pvVar5);
          }
          memmove(pFVar19 + (longlong)iVar27 * 0x28,puVar13,0x20);
          TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_148,local_1a8.Index,1);
          local_1a8.Index = iVar27;
        }
        if (iVar27 != -1) goto LAB_14dd94a33;
        break;
      }
      bVar9 = iVar11 + *(int *)(puVar13 + 1) == 1;
LAB_14dd9471f:
      if (bVar9) goto LAB_14dd94732;
      iVar27 = *(int *)(pFVar19 + lVar23 + 0x20);
    }
  }
  uVar20 = 0;
  uVar24 = 1;
  uVar18 = local_148._8_4_ - local_114;
  if (3 < uVar18) {
    uVar26 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar23 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar24 <= (int)local_100)) {
    uVar18 = local_100 - 1 & (uint)local_2a8.Key;
    *(uint *)((longlong)puVar13 + 0x24) = uVar18;
    FVar17.Data = (FScriptContainerElement *)local_110;
    if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
      FVar17.Data = local_108.Data;
    }
    uVar20 = (longlong)(int)local_100 - 1U & (longlong)(int)uVar18;
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)((longlong)FVar17.Data + uVar20 * 4);
    *(int *)((longlong)FVar17.Data + uVar20 * 4) = local_1a8.Index;
  }
  else {
    local_100 = uVar24;
    if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,0,4);
    }
    if (uVar24 != 0) {
      uVar18 = uVar24;
      if (uVar24 < 2) {
        if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
          uVar18 = 0;
          goto LAB_14dd9481d;
        }
      }
      else {
LAB_14dd9481d:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_108,0,uVar18,4);
      }
      if (0 < (int)uVar24) {
        uVar26 = (ulonglong)uVar24;
        do {
          FVar17.Data = (FScriptContainerElement *)local_110;
          if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
            FVar17.Data = local_108.Data;
          }
          uVar14 = uVar20 & (longlong)(int)uVar24 - 1U;
          uVar20 = uVar20 + 1;
          *(undefined4 *)((longlong)FVar17.Data + uVar14 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (local_100 != 0) {
      local_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
      pTStack_268 = local_1f8.Array;
      local_270 = 0;
      uStack_26c = 1;
      local_260 = 0xffffffff;
      iStack_25c = 0;
      iStack_258 = 0;
      if (local_120 != 0) {
        FVar25 = (ForElementType<unsigned_int>)((longlong)local_148 + 0x10);
        if (local_128 != (ForElementType<unsigned_int>)0x0) {
          FVar25 = local_128;
        }
        uVar18 = *(uint *)FVar25;
        iStack_258 = 0;
        local_270 = 0;
        while (uVar18 == 0) {
          iStack_258 = iStack_258 + 0x20;
          lVar23 = (longlong)local_270;
          local_270 = local_270 + 1;
          if ((int)(local_120 + -1 + (local_120 + -1 >> 0x1f & 0x1fU)) >> 5 < local_270)
          goto LAB_14dd9492a;
          uVar18 = ((uint *)((longlong)FVar25 + 4))[lVar23];
          local_260 = 0xffffffff;
        }
        uStack_26c = -uVar18 & uVar18;
        uVar20 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iStack_25c = (int)lVar23 + -1 + iStack_258;
        if (local_120 < iStack_25c) {
LAB_14dd9492a:
          iStack_25c = local_120;
        }
      }
      local_260 = 0xffffffff;
      local_200 = (longlong *)local_148;
      local_1f8._padding_ = CONCAT44(uStack_26c,local_270);
      local_1f8.CurrentBitIndex = iStack_25c;
      local_1f8.UnvisitedBitMask = 0xffffffff;
      local_1f8._28_4_ = uStack_254;
      local_1f8.BaseBitIndex = iStack_258;
      iVar27 = iStack_25c;
      if (iStack_25c < local_120) {
        do {
          puVar13 = (undefined8 *)(*local_200 + (longlong)iVar27 * 0x28);
          iVar10 = *(int *)(*local_200 + 8 + (longlong)iVar27 * 0x28);
          iVar11 = iVar10 + -1;
          if (iVar10 == 0) {
            pwVar21 = L"";
            iVar11 = 0;
          }
          else {
            pwVar21 = (wchar_t *)*puVar13;
          }
          uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar21);
          uVar18 = local_100 - 1 & uVar18;
          *(uint *)((longlong)puVar13 + 0x24) = uVar18;
          FVar17.Data = (FScriptContainerElement *)local_110;
          if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
            FVar17.Data = local_108.Data;
          }
          uVar20 = (longlong)(int)local_100 - 1U & (longlong)(int)uVar18;
          *(undefined4 *)(puVar13 + 4) = *(undefined4 *)((longlong)FVar17.Data + uVar20 * 4);
          *(int *)((longlong)FVar17.Data + uVar20 * 4) = iVar27;
          local_1f8.UnvisitedBitMask = local_1f8.UnvisitedBitMask & ~local_1f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
          iVar27 = local_1f8.CurrentBitIndex;
        } while (local_1f8.CurrentBitIndex < (local_1f8.Array)->NumBits);
      }
    }
  }
LAB_14dd94a33:
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  pFVar15 = UMoviePipelineExecutorShot::GetCameraName
                      ((UMoviePipelineExecutorShot *)local_2a8.Value,&local_168,
                       *(int *)&pIVar3[0x3d].field_0x4);
  ::FString::FString(&local_188,L"camera_name");
  local_198 = &local_188;
  local_190 = pFVar15;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)local_148,(TPairInitializer<FString_&&,FString_&&> *)local_218,(bool *)&local_198);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  param_1 = local_238;
  this = local_240;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
    param_1 = local_238;
    this = local_240;
  }
LAB_14dd94aba:
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_f8._32_8_ = 0;
  local_f8._40_4_ = 0;
  local_f8._44_4_ = 0x80;
  local_f8._48_4_ = 0xffffffff;
  local_f8._52_4_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_a8._32_8_ = 0;
  local_a8._40_4_ = 0;
  local_a8._44_4_ = 0x80;
  local_a8._48_4_ = 0xffffffff;
  local_a8._52_4_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.Data.ArrayNum = 0;
  local_250.Data.ArrayMax = 0;
  ResolveFilenameFormatArguments
            (this,&local_178,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_148,&local_250,(FMoviePipelineFormatArgs *)local_f8,
             (FMoviePipelineFrameOutputState *)0x0,0);
  iVar27 = local_250.Data.ArrayNum + -1;
  if (local_250.Data.ArrayNum == 0) {
    iVar27 = 0;
  }
  ::FString::AssignRange
            ((FString *)(puVar22 + 1),(wchar_t *)local_250.Data.AllocatorInstance.Data,iVar27);
  pTVar1 = (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)(puVar22 + 0xc);
  if (pTVar1 != param_1) {
    pFVar6 = pTVar1->Ptr;
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (FImagePixelData *)0x0;
    if (pFVar6 != (FImagePixelData *)0x0) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  local_230 = puVar22;
  (**(code **)((longlong)*this->ImageWriteQueue + 8))(this->ImageWriteQueue,local_158,&local_230,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  if (local_230 != (undefined8 *)0x0) {
    (**(code **)*local_230)(local_230,1);
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  local_100 = 0;
  if ((ForElementType<FSetElementId>)local_108.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_108.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if ((UMoviePipelineExecutorShot *)local_228.Data.AllocatorInstance.Data !=
      (UMoviePipelineExecutorShot *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessOutstandingFinishedFrames @ 14dd95d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipeline::ProcessOutstandingFinishedFrames(UMoviePipeline *this)

{
  TMap<int,UMoviePipeline::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMoviePipelineOutputMerger *pFVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  FDateTime FVar13;
  UMoviePipelinePrimaryConfig *this_01;
  UClass *pUVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_408 [32];
  undefined1 local_3b8;
  undefined1 local_3b7 [7];
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  longlong local_3a0;
  int local_398 [2];
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> local_390;
  undefined4 *local_380 [3];
  undefined1 local_368 [312];
  undefined1 local_230 [32];
  void *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  void *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1d8 [312];
  undefined1 local_a0 [64];
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  uVar9 = _UNK_150631d98;
  uVar8 = ___xmm_00000000ffffffff0000008000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  do {
    if (((this->OutputBuilder).Object == (FMoviePipelineOutputMerger *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((((this->OutputBuilder).Object)->FinishedFrames).Tail)->NextNode == (TNode *)0x0) {
      return;
    }
    local_1d8._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
    FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
              ((FMoviePipelineFrameOutputState *)(local_1d8 + 8));
    local_1d8._296_8_ = (FMoviePipelinePassIdentifier *)0x0;
    local_1d8._304_4_ = 0;
    local_1d8._308_4_ = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_a0._32_8_ = 0;
    local_a0._40_8_ = uVar8;
    local_a0._48_8_ = uVar9;
    local_60 = (void *)0x0;
    local_58 = 0;
    if (((this->OutputBuilder).Object == (FMoviePipelineOutputMerger *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (this->OutputBuilder).Object;
    pTVar4 = ((pFVar3->FinishedFrames).Tail)->NextNode;
    if (pTVar4 != (TNode *)0x0) {
      FMoviePipelineMergerOutputFrame::operator=
                ((FMoviePipelineMergerOutputFrame *)local_1d8,&pTVar4->Item);
      pTVar5 = (pFVar3->FinishedFrames).Tail;
      (pFVar3->FinishedFrames).Tail = pTVar4;
      local_368._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
      FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(local_368 + 8));
      local_368._296_8_ = (FMoviePipelinePassIdentifier *)0x0;
      local_368._304_4_ = 0;
      local_368._308_4_ = 0;
      local_230._0_8_ = (FScriptContainerElement *)0x0;
      local_230._8_8_ = 0;
      local_210 = (void *)0x0;
      local_208 = uVar8;
      uStack_200 = uVar9;
      local_1f0 = (void *)0x0;
      local_1e8 = 0;
      FMoviePipelineMergerOutputFrame::operator=
                (&((pFVar3->FinishedFrames).Tail)->Item,(FMoviePipelineMergerOutputFrame *)local_368
                );
      local_368._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
      local_1e8 = 0;
      if (local_1f0 != (void *)0x0) {
        FMemory::Free(local_1f0);
      }
      TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_230,0,local_230._8_4_);
      iVar2 = SUB84(local_230._8_8_,4);
      local_230._8_8_ = local_230._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_230,0,(int *)(local_230 + 0xc));
      }
      uVar10 = local_208._4_4_;
      uStack_200 = 0xffffffff;
      local_208 = (ulonglong)local_208._4_4_ << 0x20;
      if (0x80 < uVar10) {
        local_208 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_230 + 0x10),0);
      }
      if (local_210 != (void *)0x0) {
        FMemory::Free(local_210);
      }
      if ((FScriptContainerElement *)local_230._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_230._0_8_);
      }
      DestructItems<FMoviePipelinePassIdentifier,int>
                ((FMoviePipelinePassIdentifier *)local_368._296_8_,local_368._304_4_);
      if ((FMoviePipelinePassIdentifier *)local_368._296_8_ != (FMoviePipelinePassIdentifier *)0x0)
      {
        FMemory::Free((void *)local_368._296_8_);
      }
      FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState
                ((FMoviePipelineFrameOutputState *)(local_368 + 8));
      if (pTVar5 != (TNode *)0x0) {
        FMoviePipelineMergerOutputFrame::~FMoviePipelineMergerOutputFrame(&pTVar5->Item);
        ::operator_delete(pTVar5,400);
      }
    }
    this_00 = &this->RenderTimeFrameStatistics;
    if (*(int *)&(this->RenderTimeFrameStatistics).field_0x8 !=
        *(int *)&(this->RenderTimeFrameStatistics).field_0x34) {
      puVar6 = *(undefined1 **)&(this->RenderTimeFrameStatistics).field_0x40;
      puVar16 = &(this->RenderTimeFrameStatistics).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar16 = puVar6;
      }
      iVar2 = *(int *)(puVar16 +
                      (ulonglong)
                      (*(int *)&(this->RenderTimeFrameStatistics).field_0x48 - 1U & local_1d8._8_4_)
                      * 4);
      if (iVar2 != -1) {
        lVar17 = *(longlong *)&this_00->field_0x0;
        do {
          if (*(uint *)((longlong)iVar2 * 0x20 + lVar17) == local_1d8._8_4_) {
            if ((iVar2 != -1) && (lVar17 = (longlong)iVar2 * 0x20 + lVar17, lVar17 != 0))
            goto LAB_14dd9607d;
            break;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar17);
        } while (iVar2 != -1);
      }
    }
    local_380[0] = (undefined4 *)(local_1d8 + 8);
    TSet<TTuple<int,UMoviePipeline::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,UMoviePipeline::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_398,
               (TKeyInitializer<int_const_&> *)(ulonglong)(uint)local_1d8._8_4_,(bool *)local_380);
    lVar17 = (longlong)local_398[0] * 0x20 + *(longlong *)&this_00->field_0x0;
LAB_14dd9607d:
    FVar13 = FDateTime::UtcNow();
    *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)FVar13.Ticks;
    this_01 = GetPipelinePrimaryConfig(this);
    local_3b0.Data = (FScriptContainerElement *)0x0;
    local_3a8 = 0;
    UMoviePipelineConfigBase::FindSettings<UMoviePipelineOutputBase>
              ((UMoviePipelineConfigBase *)this_01,&local_390,false);
    iVar2 = local_390.ArrayNum;
    pFVar1 = local_390.AllocatorInstance.Data + (longlong)local_390.ArrayNum * 8;
    FVar18.Data = local_390.AllocatorInstance.Data;
    while( true ) {
      if (local_390.ArrayNum != iVar2) {
        local_3b8 = 0;
        `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_3b8);
      }
      if (FVar18.Data == pFVar1) break;
      lVar17 = *(longlong *)FVar18.Data;
      if (lVar17 == 0) {
LAB_14dd961cc:
        local_3a0 = 0;
        FVar18.Data = FVar18.Data + 8;
      }
      else {
        pUVar14 = Z_Construct_UClass_UMoviePipelineOutputBase_NoRegister();
        iVar12 = (int)pUVar14->_padding_;
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar14->_padding_)) goto LAB_14dd961cc;
        local_3a0 = lVar17;
        if ((local_3b0.Data <= (FScriptContainerElement *)&local_3a0) &&
           (((FScriptContainerElement *)&local_3a0 < local_3b0.Data + (longlong)local_3a8._4_4_ * 8
            && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = (int)local_3a8;
        if ((int)local_3a8 == local_3a8._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_3b0,(int *)((longlong)&local_3a8 + 4));
        }
        FVar18.Data = FVar18.Data + 8;
        local_3a8 = CONCAT44(local_3a8._4_4_,iVar12 + 1);
        *(longlong *)(local_3b0.Data + (longlong)iVar12 * 8) = local_3a0;
      }
    }
    if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.AllocatorInstance.Data);
    }
    iVar2 = (int)local_3a8;
    uVar15 = (ulonglong)(int)local_3a8;
    pFVar1 = local_3b0.Data + uVar15 * 8;
    FVar18.Data = local_3b0.Data;
    while( true ) {
      if ((int)uVar15 != iVar2) {
        local_3b7[0] = 0;
        `TCheckedPointerIterator<UMoviePipelineOutputBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_3b7);
      }
      if (FVar18.Data == pFVar1) break;
      (**(code **)(**(longlong **)FVar18.Data + 0x348))(*(longlong **)FVar18.Data,local_1d8);
      uVar15 = local_3a8 & 0xffffffff;
      FVar18.Data = FVar18.Data + 8;
    }
    if (local_3b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data);
    }
    local_1d8._0_8_ = &___7FMoviePipelineMergerOutputFrame__6B_;
    local_58 = 0;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a0);
    DestructItems<FMoviePipelinePassIdentifier,int>
              ((FMoviePipelinePassIdentifier *)local_1d8._296_8_,local_1d8._304_4_);
    if ((FMoviePipelinePassIdentifier *)local_1d8._296_8_ != (FMoviePipelinePassIdentifier *)0x0) {
      FMemory::Free((void *)local_1d8._296_8_);
    }
    FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState
              ((FMoviePipelineFrameOutputState *)(local_1d8 + 8));
  } while( true );
}

// ProcessOutstandingFutures @ 14dd962e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipeline::ProcessOutstandingFutures(UMoviePipeline *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FMoviePipelineRenderPassOutputData *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FWeakObjectPtr *pFVar16;
  longlong lVar17;
  FWeakObjectPtr *this_00;
  undefined1 auStackY_138 [32];
  uint local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  UObject *local_d0;
  FMoviePipelinePassIdentifier local_c8;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined8 uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_68;
  ulonglong local_58;
  ulonglong local_48;
  
  uVar8 = _UNK_150631d98;
  uVar7 = ___xmm_00000000ffffffff0000008000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_e8[0] = 0;
  if (0 < (this->OutputFutures).ArrayNum) {
    do {
      uVar11 = local_e8[0];
      pFVar16 = (FWeakObjectPtr *)0x0;
      uVar15 = 0;
      if ((int)local_e8[0] < (this->OutputFutures).ArrayNum) {
        uVar15 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (this->OutputFutures).AllocatorInstance.Data;
      pFVar2 = pFVar14 + (longlong)(int)uVar11 * 0x48;
      lVar17 = *(longlong *)(pFVar14 + (longlong)(int)uVar11 * 0x48);
      if ((lVar17 == 0) || (*(char *)(lVar17 + 0x68) == '\0')) break;
      if ((local_e0.Data <= (FScriptContainerElement *)local_e8) &&
         (((FScriptContainerElement *)local_e8 < local_e0.Data + (longlong)local_d8._4_4_ * 4 &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (int)local_d8;
      if ((int)local_d8 == local_d8._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_e0,(int *)((longlong)&local_d8 + 4));
      }
      local_d8 = CONCAT44(local_d8._4_4_,iVar10 + 1);
      *(uint *)(local_e0.Data + (longlong)iVar10 * 4) = local_e8[0];
      this_00 = pFVar16;
      if ((this->GeneratedShotOutputData).ArrayNum < 1) {
LAB_14dd9656b:
        local_a0._0_8_ = (FScriptContainerElement *)0x0;
        pTVar3 = &this->GeneratedShotOutputData;
        local_68.InlineData[0] = '\0';
        local_68.InlineData[1] = '\0';
        local_68.InlineData[2] = '\0';
        local_68.InlineData[3] = '\0';
        local_68._padding_ = 0;
        pFVar14 = (pTVar3->AllocatorInstance).Data;
        local_58 = 0;
        local_a8 = 0;
        local_a0._8_8_ = 0;
        local_80 = (void *)0x0;
        local_78 = uVar7;
        uStack_70 = uVar8;
        local_68.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_a0._16_8_ = 0;
        uStack_88 = 0;
        if (((pFVar14 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             pFVar14 + (longlong)(this->GeneratedShotOutputData).ArrayMax * 0x58)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->GeneratedShotOutputData).ArrayNum;
        piVar1 = &(this->GeneratedShotOutputData).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->GeneratedShotOutputData).ArrayNum = iVar10 + 1;
        pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x58;
        *(undefined8 *)pFVar14 = local_a8;
        TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
        ::
        TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
                  ((TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
                    *)(pFVar14 + 8),
                   (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
                    *)local_a0);
        local_58 = local_58 & 0xffffffff00000000;
        if (local_68.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_68.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_a0,0,local_a0._8_4_);
        bVar9 = local_a0._12_4_ != 0;
        local_a0._8_8_ = (ulonglong)(uint)local_a0._12_4_ << 0x20;
        if (bVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
        }
        uVar11 = local_78._4_4_;
        uStack_70 = 0xffffffff;
        local_78 = (ulonglong)local_78._4_4_ << 0x20;
        if (0x80 < uVar11) {
          local_78 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_a0._0_8_);
        }
        iVar10 = (this->GeneratedShotOutputData).ArrayNum;
        uVar15 = iVar10 - 1;
        uVar11 = 0;
        if ((int)uVar15 < iVar10) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_d0 = *(UObject **)(pFVar2 + 0x10);
        this_00 = (FWeakObjectPtr *)
                  ((this->GeneratedShotOutputData).AllocatorInstance.Data +
                  (longlong)((this->GeneratedShotOutputData).ArrayNum + -1) * 0x58);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_d0);
        }
        FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_d0);
      }
      else {
        do {
          uVar15 = (uint)pFVar16;
          uVar11 = 0;
          if ((int)uVar15 < (this->GeneratedShotOutputData).ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar9 = TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr>::
                  UEOpEquals<UMoviePipelineExecutorShot,bool>
                            ((TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *)
                             ((this->GeneratedShotOutputData).AllocatorInstance.Data +
                             (longlong)(int)uVar15 * 0x58),
                             *(UMoviePipelineExecutorShot **)(pFVar2 + 0x10));
          if (bVar9) {
            uVar11 = 0;
            if ((int)uVar15 < (this->GeneratedShotOutputData).ArrayNum) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (FWeakObjectPtr *)
                      ((this->GeneratedShotOutputData).AllocatorInstance.Data +
                      (longlong)(int)uVar15 * 0x58);
          }
          pFVar16 = (FWeakObjectPtr *)(ulonglong)(uVar15 + 1);
        } while ((int)(uVar15 + 1) < (this->GeneratedShotOutputData).ArrayNum);
        if (this_00 == (FWeakObjectPtr *)0x0) goto LAB_14dd9656b;
      }
      ::FString::FString(&local_c8.Name,(FString *)(pFVar2 + 0x28));
      ::FString::FString(&local_c8.CameraName,(FString *)(pFVar2 + 0x38));
      uVar11 = ::GetTypeHash(&local_c8);
      pFVar13 = TMapBase<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
                ::FindOrAddImpl<FMoviePipelinePassIdentifier_const_&>
                          ((TMapBase<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
                            *)(this_00 + 1),uVar11,(FMoviePipelinePassIdentifier *)(pFVar2 + 0x28));
      pFVar14 = pFVar2 + 0x18;
      pFVar4 = (pFVar13->FilePaths).AllocatorInstance.Data;
      if (((pFVar4 <= pFVar14) &&
          (pFVar14 < pFVar4 + (longlong)(pFVar13->FilePaths).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (pFVar13->FilePaths).ArrayNum;
      piVar1 = &(pFVar13->FilePaths).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)pFVar13,piVar1);
      }
      (pFVar13->FilePaths).ArrayNum = iVar10 + 1;
      ::FString::FString((FString *)
                         ((pFVar13->FilePaths).AllocatorInstance.Data + (longlong)iVar10 * 0x10),
                         (FString *)pFVar14);
      if (*(longlong *)pFVar2 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x155,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(longlong *)pFVar2 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar17 = *(longlong *)pFVar2;
      while (*(char *)(lVar17 + 0x68) == '\0') {
        (**(code **)(**(longlong **)(lVar17 + 0x60) + 0x20))
                  (*(longlong **)(lVar17 + 0x60),0xffffffff,0);
      }
      if (*(char *)(lVar17 + 0x70) == '\0') {
        if (1 < (byte)LogMovieRenderPipeline._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        (**(code **)(this->_padding_ + 0x2b0))(this,1);
        break;
      }
      local_e8[0] = local_e8[0] + 1;
    } while ((int)local_e8[0] < (this->OutputFutures).ArrayNum);
  }
  uVar11 = (int)local_d8 - 1;
  if (-1 < (int)uVar11) {
    lVar17 = (longlong)(int)uVar11 * 4;
    do {
      uVar15 = 0;
      if ((int)uVar11 < (int)local_d8) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar15 = *(uint *)(local_e0.Data + lVar17);
      uVar12 = 0;
      if ((int)uVar15 < (this->OutputFutures).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (this->OutputFutures).AllocatorInstance.Data;
      pFVar2 = pFVar14 + (longlong)(int)uVar15 * 0x48;
      pvVar5 = *(void **)(pFVar14 + (longlong)(int)uVar15 * 0x48 + 0x38);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      if (*(void **)(pFVar2 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x28));
      }
      if (*(void **)(pFVar2 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar2 + 0x18));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar2 + 8));
      iVar10 = (this->OutputFutures).ArrayNum + ~uVar15;
      if (iVar10 != 0) {
        memmove(pFVar2,pFVar2 + 0x48,(longlong)iVar10 * 0x48);
      }
      piVar1 = &(this->OutputFutures).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,&(this->OutputFutures).AllocatorInstance,(this->OutputFutures).ArrayNum,
                 &(this->OutputFutures).ArrayMax);
      lVar17 = lVar17 + -4;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  return;
}

// RenderFrame @ 14dd99690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMoviePipeline::RenderFrame(UMoviePipeline *this)

{
  FRHIResource **ppFVar1;
  FScriptContainerElement *pFVar2;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_01;
  double dVar3;
  int iVar4;
  longlong lVar5;
  FMoviePipelineOutputMerger *pFVar6;
  FRHIResource *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TConsoleVariableData<int> *pTVar15;
  UMoviePipelineColorSetting *pUVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  int iVar20;
  EAntiAliasingMethod EVar21;
  uint uVar22;
  UWorld *this_02;
  APlayerController *pAVar23;
  UMoviePipelinePrimaryConfig *pUVar24;
  UMoviePipelineOutputSetting *pUVar25;
  UMoviePipelineSetting *pUVar26;
  AActor *pAVar27;
  UCameraComponent *pUVar28;
  longlong lVar29;
  UMoviePipelineExecutorShot *pUVar30;
  FEngineVersion *this_03;
  FString *pFVar31;
  FRenderTimeStatistics *pFVar32;
  FDateTime FVar33;
  longlong *plVar34;
  FRenderCommandList *this_04;
  FCommandList *this_05;
  FRenderCommandTag *pFVar35;
  int iVar36;
  uint uVar37;
  undefined1 *puVar38;
  undefined ***pppuVar39;
  uint uVar40;
  int iVar41;
  int *piVar42;
  ForAnyElementType FVar43;
  ulonglong uVar44;
  FRHIResource **ppFVar45;
  UMoviePipelineSetting *pUVar46;
  int iVar47;
  ulonglong uVar48;
  float fVar49;
  float fVar50;
  float in_XMM2_Da;
  float fVar51;
  float fVar52;
  undefined1 auStackY_1258 [32];
  undefined1 local_1218;
  undefined1 local_1217;
  undefined1 local_1216;
  undefined1 local_1215;
  undefined1 local_1214;
  undefined1 local_1213;
  undefined1 local_1212 [2];
  int local_1210;
  int local_120c;
  uint local_1208;
  int local_1204;
  float local_1200 [2];
  TArray<UMoviePipelineRenderPass_*,TSizedDefaultAllocator<32>_> local_11f8;
  int local_11e8;
  UMoviePipelineSetting *local_11e0;
  uint local_11d8;
  ulonglong local_11d0;
  FString local_11c8;
  FRHIResource *local_11b8;
  longlong local_11b0;
  float local_11a8;
  int local_11a4;
  int local_11a0;
  uint local_119c;
  UMoviePipelineSetting *local_1198;
  FString local_1190;
  UMoviePipelineSetting *local_1180;
  FString local_1178;
  FString local_1168;
  undefined1 local_1158 [8];
  TPairInitializer<FString_&&,FString_&&> local_1150;
  UClass *local_1140;
  UClass *local_1138;
  UMoviePipelineColorSetting *local_1130;
  TIntPoint<int>_u_0 local_1128;
  undefined1 local_1120 [32];
  float *local_1100;
  float *local_10f8;
  FString *local_10f0;
  FString *local_10e8;
  FString local_10e0;
  FString *local_10d0;
  FString *local_10c8;
  FString local_10c0;
  FString local_10b0;
  FString local_10a0;
  FString *local_1090;
  FString *local_1088;
  FString local_1080;
  FString local_1068;
  TObjectPtr<UMoviePipelineOutputSetting>_u_0 local_1058 [2];
  FMoviePipelineRenderPassMetrics local_1048;
  code *local_da8 [2];
  undefined **local_d98;
  FRHIResource *pFStack_d90;
  undefined8 local_d88;
  undefined ***local_d80;
  undefined1 local_d78 [64];
  void *local_d38;
  undefined4 local_d30;
  undefined1 local_d28 [16];
  undefined **local_d18;
  FRHIResource *pFStack_d10;
  undefined8 local_d08;
  undefined ***local_d00;
  byte local_cf8;
  undefined1 local_ce8 [64];
  void *local_ca8;
  undefined4 local_ca0;
  undefined1 local_c98 [64];
  void *local_c58;
  undefined4 local_c50;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_c48;
  FMoviePipelineRenderPassMetrics local_c38;
  FMinimalViewInfo local_998;
  FRHIResource *local_c8 [19];
  undefined8 uStack_30;
  
  uStack_30 = 0x14dd996b4;
  local_c8[4] = (FRHIResource *)(__security_cookie.value ^ (ulonglong)auStackY_1258);
  FlushAsyncEngineSystems(this);
  ProcessOutstandingFinishedFrames(this);
  if ((this->CachedOutputState).TemporalSampleIndex == 0) {
    this_00 = &this->CameraOverscanCache;
    bVar17 = 1 < *(int *)&(this->CameraOverscanCache).field_0x48;
    if (!bVar17) {
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                      *)this_00);
    }
    puVar38 = &(this->CameraOverscanCache).field_0xc;
    *(undefined4 *)&(this->CameraOverscanCache).field_0x8 = 0;
    if (*(int *)puVar38 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar38);
    }
    *(undefined4 *)&(this->CameraOverscanCache).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CameraOverscanCache).field_0x34 = 0;
    iVar47 = *(int *)&(this->CameraOverscanCache).field_0x2c;
    *(undefined4 *)&(this->CameraOverscanCache).field_0x28 = 0;
    if ((iVar47 < 0) || (0x80 < iVar47)) {
      *(undefined4 *)&(this->CameraOverscanCache).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CameraOverscanCache).field_0x10,0);
    }
    if (bVar17) {
      *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 1;
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                  *)this_00);
    }
  }
  uVar37 = this->CurrentShotIndex;
  uVar40 = 0;
  if ((int)uVar37 < (this->ActiveShotList).ArrayNum) {
    uVar40 = ~uVar37 >> 0x1f;
  }
  if ((uVar40 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar29 = *(longlong *)((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar37 * 8);
  local_11b0 = lVar29;
  this_02 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar23 = UWorld::GetFirstPlayerController(this_02);
  if ((this->CachedOutputState).bSkipRendering != false) {
    return;
  }
  SetProgressWidgetVisible(this,false);
  uVar37 = this->CurrentShotIndex;
  uVar40 = 0;
  if ((int)uVar37 < (this->ActiveShotList).ArrayNum) {
    uVar40 = ~uVar37 >> 0x1f;
  }
  if ((uVar40 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar30 = *(UMoviePipelineExecutorShot **)
             ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar37 * 8);
  pUVar24 = GetPipelinePrimaryConfig(this);
  local_1150.Value = (FString *)Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1150.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1150.Value);
  }
  local_11e0 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                         ((TSubclassOf<UMoviePipelineSetting>)&local_1150.Value,pUVar24,pUVar30);
  uVar37 = this->CurrentShotIndex;
  uVar40 = 0;
  if ((int)uVar37 < (this->ActiveShotList).ArrayNum) {
    uVar40 = ~uVar37 >> 0x1f;
  }
  if ((uVar40 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar30 = *(UMoviePipelineExecutorShot **)
             ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar37 * 8);
  pUVar24 = GetPipelinePrimaryConfig(this);
  local_1140 = Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1140 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1140);
  }
  local_1180 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                         ((TSubclassOf<UMoviePipelineSetting>)&local_1140,pUVar24,pUVar30);
  uVar37 = this->CurrentShotIndex;
  uVar40 = 0;
  if ((int)uVar37 < (this->ActiveShotList).ArrayNum) {
    uVar40 = ~uVar37 >> 0x1f;
  }
  if ((uVar40 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar30 = *(UMoviePipelineExecutorShot **)
             ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar37 * 8);
  pUVar24 = GetPipelinePrimaryConfig(this);
  local_1120._8_8_ = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1120._8_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1120._8_8_);
  }
  local_1198 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                         ((TSubclassOf<UMoviePipelineSetting>)((longlong)local_1120 + 8),pUVar24,
                          pUVar30);
  pUVar24 = GetPipelinePrimaryConfig(this);
  pUVar25 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)pUVar24,false);
  uVar37 = this->CurrentShotIndex;
  uVar40 = 0;
  if ((int)uVar37 < (this->ActiveShotList).ArrayNum) {
    uVar40 = ~uVar37 >> 0x1f;
  }
  if ((uVar40 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar30 = *(UMoviePipelineExecutorShot **)
             ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar37 * 8);
  pUVar24 = GetPipelinePrimaryConfig(this);
  local_1138 = Z_Construct_UClass_UMoviePipelineDebugSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1138 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1138);
  }
  pUVar26 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)&local_1138,pUVar24,pUVar30);
  pUVar24 = GetPipelinePrimaryConfig(this);
  local_1130 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineColorSetting>
                         ((UMoviePipelineConfigBase *)pUVar24,false);
  if ((local_11e0 == (UMoviePipelineSetting *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("AntiAliasingSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                          ,0xdb,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((local_1180 == (UMoviePipelineSetting *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CameraSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                          ,0xdc,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((local_1198 == (UMoviePipelineSetting *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("HighResSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                          ,0xdd,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((pUVar25 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                          ,0xde,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1200[0] = 0.0;
  if (*(int *)&(this->CameraOverscanCache).field_0x8 !=
      *(int *)&(this->CameraOverscanCache).field_0x34) {
    puVar38 = *(undefined1 **)&(this->CameraOverscanCache).field_0x40;
    if (puVar38 == (undefined1 *)0x0) {
      puVar38 = &(this->CameraOverscanCache).field_0x38;
    }
    iVar47 = *(int *)(puVar38 + (ulonglong)(*(int *)&(this->CameraOverscanCache).field_0x48 - 1) * 4
                     );
    if (iVar47 != -1) {
      lVar5 = *(longlong *)&(this->CameraOverscanCache).field_0x0;
      iVar20 = iVar47;
      do {
        if (*(int *)(lVar5 + (longlong)iVar20 * 0x10) == -1) goto LAB_14dd99e90;
        iVar20 = *(int *)(lVar5 + 8 + (longlong)iVar20 * 0x10);
      } while (iVar20 != -1);
    }
  }
  pAVar27 = APlayerCameraManager::GetViewTarget((pAVar23->PlayerCameraManager).field0_0x0.DebugPtr);
  pUVar28 = MovieSceneHelpers::CameraComponentFromRuntimeObject((UObject *)pAVar27);
  if (pUVar28 != (UCameraComponent *)0x0) {
    FMinimalViewInfo::FMinimalViewInfo(&local_998);
    pcVar8 = *(code **)(pUVar28->_padding_ + 0x660);
    lVar29 = (**(code **)(this->_padding_ + 0x180))(this);
    (*pcVar8)(pUVar28,*(undefined4 *)(lVar29 + 0x91c),&local_998);
    local_1200[0] = local_998.Overscan;
    if (local_998.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  local_1100 = &local_11a8;
  local_11a8 = -NAN;
  local_10f8 = local_1200;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,float_const_&>_>
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)&this->CameraOverscanCache,
             (TPairInitializer<int_&&,float_const_&> *)(local_1120 + 0x18),(bool *)&local_1100);
  lVar29 = local_11b0;
  goto LAB_14dd99c84;
  while (iVar47 = piVar42[2], iVar47 != -1) {
LAB_14dd99e90:
    piVar42 = (int *)((longlong)iVar47 * 0x10 + lVar5);
    if (*piVar42 == -1) {
      if (piVar42 == (int *)0x0) goto LAB_14dd99eb4;
      goto LAB_14dd99eda;
    }
  }
  piVar42 = (int *)0x0;
LAB_14dd99eb4:
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar17) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14dd99eda:
  local_1200[0] = (float)piVar42[1];
LAB_14dd99c84:
  uVar37 = (uint)local_1198[1]._padding_;
  local_11d0 = (ulonglong)uVar37;
  local_1128._s_0.Y = uVar37;
  local_1128._s_0.X = uVar37;
  uVar37 = 0;
  if (this->CurrentShotIndex < (this->ActiveShotList).ArrayNum) {
    uVar37 = (uint)~this->CurrentShotIndex >> 0x1f;
  }
  if ((uVar37 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar30 = (UMoviePipelineExecutorShot *)GetPipelinePrimaryConfig(this);
  UMoviePipelineBlueprintLibrary::GetOverscannedResolution
            ((UMoviePipelinePrimaryConfig *)local_1120,pUVar30,in_XMM2_Da);
  pUVar46 = local_11e0;
  local_120c = (int)local_11e0[1]._padding_;
  local_11a4 = *(int *)((longlong)&local_11e0[1]._padding_ + 4);
  if ((((int)local_11d0 < 1) || (local_120c < 1)) || (local_11a4 < 1)) {
    bVar17 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6270658771920355077>,true,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                        ,0xfb,
                        "TileCount.X > 0 && TileCount.Y > 0 && NumSpatialSamples > 0 && NumTemporalSamples > 0"
                       );
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    dVar9 = (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.Y;
    dVar3 = (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.Z;
    (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.X =
         (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.X;
    (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.Y = dVar9;
    dVar9 = (this->FrameInfo).CurrViewRotation.Pitch;
    dVar10 = (this->FrameInfo).CurrViewRotation.Yaw;
    (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.Z = dVar3;
    dVar3 = (this->FrameInfo).CurrViewRotation.Roll;
    (this->FrameInfo).PrevViewRotation.Pitch = dVar9;
    (this->FrameInfo).PrevViewRotation.Yaw = dVar10;
    (this->FrameInfo).PrevViewRotation.Roll = dVar3;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->FrameInfo).PrevSidecarViewLocations,
               &(this->FrameInfo).CurrSidecarViewLocations);
    TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->FrameInfo).PrevSidecarViewRotations,
               &(this->FrameInfo).CurrSidecarViewRotations);
    (**(code **)(pAVar23->_padding_ + 0x840))
              (pAVar23,&(this->FrameInfo).CurrViewLocation,&(this->FrameInfo).CurrViewRotation);
    uVar37 = this->CurrentShotIndex;
    uVar40 = 0;
    if ((int)uVar37 < (this->ActiveShotList).ArrayNum) {
      uVar40 = ~uVar37 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    GetSidecarCameraViewPoints
              (this,*(UMoviePipelineExecutorShot **)
                     ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar37 * 8),
               &(this->FrameInfo).CurrSidecarViewLocations,
               &(this->FrameInfo).CurrSidecarViewRotations);
    if (pUVar26 == (UMoviePipelineSetting *)0x0) {
      local_1218 = 0;
    }
    else {
      local_1218 = (undefined1)pUVar26[1]._padding_;
    }
    local_1190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1190.Data.ArrayNum = 0;
    local_1190.Data.ArrayMax = 0;
    local_d78._0_8_ = 0;
    local_d78._8_8_ = 0;
    local_d78._32_8_ = 0;
    local_d78._40_4_ = 0;
    local_d78._44_4_ = 0x80;
    local_d78._48_4_ = 0xffffffff;
    local_d78._52_4_ = 0;
    local_d38 = (void *)0x0;
    local_d30 = 0;
    local_ce8._0_8_ = 0;
    local_ce8._8_8_ = 0;
    local_ce8._32_8_ = 0;
    local_ce8._40_4_ = 0;
    local_ce8._44_4_ = 0x80;
    local_ce8._48_4_ = 0xffffffff;
    local_ce8._52_4_ = 0;
    local_ca8 = (void *)0x0;
    local_ca0 = 0;
    local_c98._0_8_ = 0;
    local_c98._8_8_ = 0;
    local_c98._32_8_ = 0;
    local_c98._40_4_ = 0;
    local_c98._44_4_ = 0x80;
    local_c98._48_4_ = 0xffffffff;
    local_c98._52_4_ = 0;
    local_c58 = (void *)0x0;
    local_c50 = 0;
    local_c48.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
    ResolveFilenameFormatArguments
              (this,&(pUVar25->OutputDirectory).Path,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_d78,&local_1190,(FMoviePipelineFormatArgs *)local_ce8,
               (FMoviePipelineFrameOutputState *)0x0,0);
    iVar47 = local_1190.Data.ArrayNum + -1;
    if (local_1190.Data.ArrayNum == 0) {
      iVar47 = 0;
    }
    if (iVar47 + -6 < iVar47) {
      iVar47 = iVar47 + -6;
    }
    iVar20 = 0;
    if (0 < iVar47) {
      iVar20 = iVar47;
    }
    ::FString::RemoveAt(&local_1190,iVar20,6,Default);
    this_01 = &(this->CachedOutputState).FileMetadata;
    UE::MoviePipeline::GetHardwareUsageMetadata(this_01,&local_1190);
    this_03 = FEngineVersion::Current();
    pFVar31 = FEngineVersion::ToString(this_03,&local_1068,Branch);
    ::FString::FString(&local_10e0,L"unreal/build");
    local_10f0 = &local_10e0;
    local_10e8 = pFVar31;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)this_01,&local_1150,(bool *)&local_10f0);
    if (local_10e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10e0.Data.AllocatorInstance.Data);
    }
    if (local_1068.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1068.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_10b0,L"false");
    ::FString::FString(&local_10c0,L"unreal/usesGraph");
    local_10d0 = &local_10c0;
    local_10c8 = &local_10b0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)this_01,(TPairInitializer<FString_&&,FString_&&> *)local_1158,(bool *)&local_10d0)
    ;
    if (local_10c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10c0.Data.AllocatorInstance.Data);
    }
    if (local_10b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10b0.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_1168,L"");
    ::FString::FString(&local_1178,L"camera");
    ::FString::PrintfImpl(&local_11c8,L"%s/%s");
    FVar43.Data = local_1178.Data.AllocatorInstance.Data;
    if (local_1168.Data.ArrayNum < 2) {
      if ((local_1178.Data.ArrayNum == 0) && (local_11c8.Data.ArrayMax == 0)) {
        local_11c8.Data.ArrayMax = 0;
        pUVar46 = local_11e0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1178.Data.ArrayNum,local_11c8.Data.ArrayMax,
                   (ForAnyElementType *)&local_11c8,local_1178.Data.ArrayNum,
                   &local_11c8.Data.ArrayMax);
        pUVar46 = local_11e0;
        if (local_1178.Data.ArrayNum != 0) {
          memcpy(local_11c8.Data.AllocatorInstance.Data,FVar43.Data,
                 (longlong)local_1178.Data.ArrayNum * 2);
          pUVar46 = local_11e0;
        }
      }
    }
    ::FString::PrintfImpl(&local_10a0,L"unreal/%s");
    UE::MoviePipeline::GetMetadataFromCameraLocRot
              (&(this->FrameInfo).CurrViewLocation,&(this->FrameInfo).CurrViewRotation,
               &(this->FrameInfo).PrevViewLocation,&(this->FrameInfo).PrevViewRotation,&local_10a0,
               this_01);
    if (local_10a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10a0.Data.AllocatorInstance.Data);
    }
    if (local_11c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11c8.Data.AllocatorInstance.Data);
    }
    if (local_1178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1178.Data.AllocatorInstance.Data);
    }
    if (local_1168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1168.Data.AllocatorInstance.Data);
    }
    pFVar31 = ::FString::SanitizeFloat
                        ((FString *)&local_1058[0].ObjectPtr,
                         (double)((this->CachedOutputState).TimeData.MotionBlurFraction *
                                 __real_43b40000),1);
    ::FString::FString(&local_1080,L"unreal/camera/shutterAngle");
    local_1090 = &local_1080;
    local_1088 = pFVar31;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)this_01,(TPairInitializer<FString_&&,FString_&&> *)(local_1158 + 4),
               (bool *)&local_1090);
    if (local_1080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1080.Data.AllocatorInstance.Data);
    }
    if (local_1058[0].DebugPtr != (UMoviePipelineOutputSetting *)0x0) {
      FMemory::Free(local_1058[0].DebugPtr);
    }
    local_c50 = 0;
    if (local_c58 != (void *)0x0) {
      FMemory::Free(local_c58);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c98);
    local_ca0 = 0;
    if (local_ca8 != (void *)0x0) {
      FMemory::Free(local_ca8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_ce8);
    local_d30 = 0;
    if (local_d38 != (void *)0x0) {
      FMemory::Free(local_d38);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d78);
    if (local_1190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1190.Data.AllocatorInstance.Data);
    }
    local_11e8 = 0;
    iVar47 = local_120c;
    if (*(char *)(lVar29 + 0xcc) != '\x03') {
      iVar47 = 1;
    }
    if (*(char *)(lVar29 + 0xcc) == '\x01') {
      if (*(int *)(lVar29 + 0x15c) < 1) {
        local_11e8 = *(int *)((longlong)&pUVar46[1]._padding_ + 4);
      }
      else {
        local_11e8 = 1;
      }
    }
    uVar37 = this->CurrentShotIndex;
    uVar40 = 0;
    if ((int)uVar37 < (this->ActiveShotList).ArrayNum) {
      uVar40 = ~uVar37 >> 0x1f;
    }
    local_120c = iVar47;
    if ((uVar40 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FindSettingsForShot<UMoviePipelineRenderPass>
              (this,&local_11f8,
               *(UMoviePipelineExecutorShot **)
                ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar37 * 8));
    iVar20 = local_11f8.ArrayNum;
    this->bHasRenderedFirstViewThisFrame = false;
    pFVar2 = local_11f8.AllocatorInstance.Data + (longlong)local_11f8.ArrayNum * 8;
    FVar43.Data = local_11f8.AllocatorInstance.Data;
    while( true ) {
      if (local_11f8.ArrayNum != iVar20) {
        local_1217 = 0;
        `TCheckedPointerIterator<UMoviePipelineRenderPass_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1217);
      }
      if (FVar43.Data == pFVar2) break;
      (**(code **)(**(longlong **)FVar43.Data + 0x378))();
      FVar43.Data = FVar43.Data + 8;
    }
    if ((this->CachedOutputState).TemporalSampleIndex == 0) {
      if (((this->OutputBuilder).Object == (FMoviePipelineOutputMerger *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->OutputBuilder).Object;
      lVar29 = (**(code **)pFVar6->_padding_)(pFVar6,&this->CachedOutputState);
      iVar20 = local_11f8.ArrayNum;
      pFVar2 = local_11f8.AllocatorInstance.Data + (longlong)local_11f8.ArrayNum * 8;
      FVar43.Data = local_11f8.AllocatorInstance.Data;
      while( true ) {
        if (local_11f8.ArrayNum != iVar20) {
          local_1216 = 0;
          `TCheckedPointerIterator<UMoviePipelineRenderPass_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_1216);
        }
        if (FVar43.Data == pFVar2) break;
        (**(code **)(**(longlong **)FVar43.Data + 0x390))(*(longlong **)FVar43.Data,lVar29 + 0x128);
        FVar43.Data = FVar43.Data + 8;
      }
      pFVar32 = TMapBase<int,UMoviePipeline::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>_>
                ::FindOrAddImpl<int_const_&>
                          ((TMapBase<int,UMoviePipeline::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>_>
                            *)&this->RenderTimeFrameStatistics,
                           (this->CachedOutputState).OutputFrameNumber,
                           &(this->CachedOutputState).OutputFrameNumber);
      FVar33 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
      (pFVar32->StartTime).Ticks = *FVar33.Ticks;
    }
    iVar20 = local_11f8.ArrayNum;
    uVar44 = 0;
    pFVar2 = local_11f8.AllocatorInstance.Data + (longlong)local_11f8.ArrayNum * 8;
    FVar43.Data = local_11f8.AllocatorInstance.Data;
    while( true ) {
      if (local_11f8.ArrayNum != iVar20) {
        local_1215 = 0;
        `TCheckedPointerIterator<UMoviePipelineRenderPass_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1215);
      }
      if (FVar43.Data == pFVar2) {
        local_1210 = 0;
        goto LAB_14dd9a5d3;
      }
      cVar18 = (**(code **)(**(longlong **)FVar43.Data + 0x358))();
      pTVar15 = CVarMoviePipelineThrottleFrameCount.Ref;
      if (cVar18 != '\0') break;
      FVar43.Data = FVar43.Data + 8;
    }
    bVar17 = IsInParallelGameThread();
    if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
       (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar20 = 4;
    if (pTVar15->ShadowedValue[0] < 4) {
      iVar20 = pTVar15->ShadowedValue[0];
    }
    local_1210 = 0;
    if (0 < iVar20) {
      local_1210 = iVar20;
    }
LAB_14dd9a5d3:
    fVar14 = __real_3eaaaaab;
    fVar13 = __real_3f000000;
    fVar12 = __real_3a83126f;
    fVar11 = __real_3f800000;
    local_c8[2] = (FRHIResource *)0x0;
    local_c8[3] = (FRHIResource *)0x0;
    local_1208 = 0;
    local_c8[0] = (FRHIResource *)0x0;
    local_c8[1] = (FRHIResource *)0x0;
    local_1204 = 0;
    do {
      uVar48 = 0;
      local_11d8 = 0;
      do {
        iVar20 = local_11f8.ArrayNum;
        pFVar2 = local_11f8.AllocatorInstance.Data + (longlong)local_11f8.ArrayNum * 8;
        FVar43.Data = local_11f8.AllocatorInstance.Data;
        while( true ) {
          if (local_11f8.ArrayNum != iVar20) {
            local_1214 = 0;
            `TCheckedPointerIterator<UMoviePipelineRenderPass_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_1214);
          }
          if (FVar43.Data == pFVar2) break;
          (**(code **)(**(longlong **)FVar43.Data + 0x348))
                    (*(longlong **)FVar43.Data,uVar44 << 0x20 | uVar48);
          FVar43.Data = FVar43.Data + 8;
        }
        local_11a0 = iVar47;
        if (*(char *)(local_11b0 + 0xcc) == '\x01') {
          local_11a0 = local_11e8;
        }
        iVar47 = 0;
        if (0 < local_11a0) {
          local_119c = (int)local_11d0 - 1;
          do {
            uVar44 = local_11d0;
            cVar18 = *(char *)(local_11b0 + 0xcc);
            iVar20 = iVar47;
            if (cVar18 == '\x01') {
              iVar20 = 0;
            }
            if (cVar18 == '\x03') {
              *(int *)(local_11b0 + 0x148) = *(int *)(local_11b0 + 0x148) + 1;
            }
            if (((uint)uVar48 == local_119c) && (local_1208 == local_119c)) {
              bVar17 = true;
            }
            else {
              bVar17 = false;
            }
            if ((cVar18 != '\x03') || ((bVar17 && (iVar47 == local_11a0 + -1)))) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            iVar4 = (this->CachedOutputState).ShotSamplesRendered;
            (this->CachedOutputState).ShotSamplesRendered = iVar4 + 1;
            if ((char)local_11e0[1]._padding_ == '\0') {
              if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                  (IConsoleManager::SetupSingleton(),
                  IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Singleton != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x4fb,L""), bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              plVar34 = (longlong *)
                        (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                                  (IConsoleManager::Singleton,L"r.AntiAliasingMethod",1);
              if ((plVar34 == (longlong *)0x0) ||
                 (EVar21 = (**(code **)(*plVar34 + 200))(plVar34), AAM_SMAA < EVar21)) {
                EVar21 = AAM_None;
              }
            }
            else {
              EVar21 = (EAntiAliasingMethod)*(byte *)((longlong)&local_11e0[1]._padding_ + 1);
            }
            if ((1 < (int)uVar44) && ((EVar21 - AAM_TemporalAA & 0xfffffffd) == 0)) {
              if (2 < (byte)LogMovieRenderPipeline._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
              }
              EVar21 = AAM_None;
            }
            iVar41 = (this->CachedOutputState).TemporalSampleIndex;
            iVar36 = (this->CachedOutputState).OutputFrameNumber;
            if (iVar36 < 0) {
              iVar36 = 0;
            }
            if (iVar41 < 0) {
              iVar41 = 0;
            }
            iVar36 = (iVar36 * local_11a4 + iVar41) * local_120c + iVar20;
            iVar41 = -iVar36;
            if (iVar41 < 0) {
              iVar41 = iVar36;
            }
            if (*(char *)(local_11b0 + 0xcc) == '\x01') {
              iVar41 = iVar47;
            }
            if ((local_120c == 1) && (local_11a4 == 1)) {
              fVar52 = 0.0;
              fVar51 = 0.0;
            }
            else {
              fVar52 = 0.0;
              uVar37 = iVar41 % (local_11a4 * local_120c) + 1;
              fVar51 = fVar13;
              uVar40 = uVar37;
              if ((int)uVar37 < 1) {
                fVar51 = 0.0;
              }
              else {
                do {
                  uVar22 = uVar40 & 1;
                  uVar40 = uVar40 >> 1;
                  fVar49 = (float)uVar22 * fVar51;
                  fVar51 = fVar51 * fVar13;
                  fVar52 = fVar52 + fVar49;
                } while (uVar40 != 0);
                fVar51 = 0.0;
                fVar49 = fVar14;
                do {
                  uVar40 = uVar37 / 3;
                  fVar50 = (float)(uVar37 % 3) * fVar49;
                  fVar49 = fVar49 * fVar14;
                  fVar51 = fVar51 + fVar50;
                  uVar37 = uVar40;
                } while (uVar40 != 0);
              }
              fVar52 = fVar52 - fVar13;
              fVar51 = fVar51 - fVar13;
            }
            local_1048.CropRectangle.field0_0x0._s_0.Min.field0_0x0 =
                 (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
            local_1048.CropRectangle.field0_0x0._s_0.Max.field0_0x0 =
                 (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
            FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState(&local_1048.OutputState);
            pUVar16 = local_1130;
            local_1048.FrameInfo._padding_ =
                 (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
            local_1048.FrameInfo.CurrSidecarViewLocations.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1048.FrameInfo.CurrSidecarViewLocations.ArrayNum = 0;
            local_1048.FrameInfo.CurrSidecarViewLocations.ArrayMax = 0;
            local_1048.FrameInfo.CurrSidecarViewRotations.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1048.FrameInfo.CurrSidecarViewRotations.ArrayNum = 0;
            local_1048.FrameInfo.CurrSidecarViewRotations.ArrayMax = 0;
            local_1048.FrameInfo.PrevSidecarViewLocations.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1048.FrameInfo.PrevSidecarViewLocations.ArrayNum = 0;
            local_1048.FrameInfo.PrevSidecarViewLocations.ArrayMax = 0;
            local_1048.FrameInfo.PrevSidecarViewRotations.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1048.FrameInfo.PrevSidecarViewRotations.ArrayNum = 0;
            local_1048.FrameInfo.PrevSidecarViewRotations.ArrayMax = 0;
            if ((local_1130 == (UMoviePipelineColorSetting *)0x0) ||
               (local_1048.SceneCaptureSource = SCS_FinalColorHDR,
               local_1130->bDisableToneCurve == false)) {
              local_1048.SceneCaptureSource = SCS_FinalToneCurveHDR;
            }
            local_1048.OutputState.OutputFrameNumber = (this->CachedOutputState).OutputFrameNumber;
            local_1048.OutputState.TimeData.MotionBlurFraction =
                 (this->CachedOutputState).TimeData.MotionBlurFraction;
            local_1048.OutputState.TimeData._4_4_ =
                 *(undefined4 *)&(this->CachedOutputState).TimeData.field_0x4;
            local_1048.OutputState.TimeData.FrameDeltaTime =
                 (this->CachedOutputState).TimeData.FrameDeltaTime;
            local_1048.OutputState.ShotIndex = (this->CachedOutputState).ShotIndex;
            local_1048.OutputState.TimeData.WorldSeconds =
                 (this->CachedOutputState).TimeData.WorldSeconds;
            local_1048.OutputState.TimeData.TimeDilation =
                 (this->CachedOutputState).TimeData.TimeDilation;
            local_1048.OutputState.TimeData._28_4_ =
                 *(undefined4 *)&(this->CachedOutputState).TimeData.field_0x1c;
            local_1048.OutputState.ShotCount = (this->CachedOutputState).ShotCount;
            local_1048.OutputState.TemporalSampleIndex =
                 (this->CachedOutputState).TemporalSampleIndex;
            local_1048.OutputState.TemporalSampleCount =
                 (this->CachedOutputState).TemporalSampleCount;
            local_1048.OutputState.ShotOutputFrameNumber =
                 (this->CachedOutputState).ShotOutputFrameNumber;
            local_1048.OutputState.ShotSamplesRendered =
                 (this->CachedOutputState).ShotSamplesRendered;
            local_1048.FrameIndex = iVar41;
            local_1048.bWorldIsPaused = bVar17;
            local_1048.bCameraCut = iVar4 == 0;
            local_1048.AntiAliasingMethod = EVar21;
            ::FString::operator=
                      (&local_1048.OutputState.CameraName,&(this->CachedOutputState).CameraName);
            ::FString::operator=
                      (&local_1048.OutputState.CameraNameOverride,
                       &(this->CachedOutputState).CameraNameOverride);
            ::FString::operator=
                      (&local_1048.OutputState.ShotName,&(this->CachedOutputState).ShotName);
            local_1048.OutputState.bSkipRendering = (this->CachedOutputState).bSkipRendering;
            local_1048.OutputState.SourceTimeCode.Hours =
                 (this->CachedOutputState).SourceTimeCode.Hours;
            local_1048.OutputState.SourceTimeCode.Minutes =
                 (this->CachedOutputState).SourceTimeCode.Minutes;
            local_1048.OutputState.SourceTimeCode.Seconds =
                 (this->CachedOutputState).SourceTimeCode.Seconds;
            local_1048.OutputState.SourceTimeCode.Frames =
                 (this->CachedOutputState).SourceTimeCode.Frames;
            local_1048.OutputState.SourceTimeCode.Subframe =
                 (this->CachedOutputState).SourceTimeCode.Subframe;
            local_1048.OutputState.SourceTimeCode.bDropFrameFormat =
                 (this->CachedOutputState).SourceTimeCode.bDropFrameFormat;
            local_1048.OutputState.SourceTimeCode._21_3_ =
                 *(undefined3 *)&(this->CachedOutputState).SourceTimeCode.field_0x15;
            local_1048.OutputState.bCaptureRendering = (this->CachedOutputState).bCaptureRendering;
            local_1048.OutputState.bDiscardRenderResult =
                 (this->CachedOutputState).bDiscardRenderResult;
            local_1048.OutputState.SourceFrameNumber = (this->CachedOutputState).SourceFrameNumber;
            local_1048.OutputState.EffectiveTimeCode.Hours =
                 (this->CachedOutputState).EffectiveTimeCode.Hours;
            local_1048.OutputState.EffectiveTimeCode.Minutes =
                 (this->CachedOutputState).EffectiveTimeCode.Minutes;
            local_1048.OutputState.EffectiveTimeCode.Seconds =
                 (this->CachedOutputState).EffectiveTimeCode.Seconds;
            local_1048.OutputState.EffectiveTimeCode.Frames =
                 (this->CachedOutputState).EffectiveTimeCode.Frames;
            local_1048.OutputState.EffectiveFrameNumber =
                 (this->CachedOutputState).EffectiveFrameNumber;
            local_1048.OutputState.EffectiveTimeCode.Subframe =
                 (this->CachedOutputState).EffectiveTimeCode.Subframe;
            local_1048.OutputState.EffectiveTimeCode.bDropFrameFormat =
                 (this->CachedOutputState).EffectiveTimeCode.bDropFrameFormat;
            local_1048.OutputState.EffectiveTimeCode._21_3_ =
                 *(undefined3 *)&(this->CachedOutputState).EffectiveTimeCode.field_0x15;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)&local_1048.OutputState.FileMetadata,
                        (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)&(this->CachedOutputState).FileMetadata);
            local_1048.OutputState.CurrentShotSourceFrameNumber =
                 (this->CachedOutputState).CurrentShotSourceFrameNumber;
            local_1048.OutputState.CurrentShotSourceTimeCode.Hours =
                 (this->CachedOutputState).CurrentShotSourceTimeCode.Hours;
            local_1048.OutputState.CurrentShotSourceTimeCode.Minutes =
                 (this->CachedOutputState).CurrentShotSourceTimeCode.Minutes;
            local_1048.OutputState.CurrentShotSourceTimeCode.Seconds =
                 (this->CachedOutputState).CurrentShotSourceTimeCode.Seconds;
            local_1048.OutputState.CurrentShotSourceTimeCode.Frames =
                 (this->CachedOutputState).CurrentShotSourceTimeCode.Frames;
            local_1048.OutputState.CurrentShotSourceTimeCode.Subframe =
                 (this->CachedOutputState).CurrentShotSourceTimeCode.Subframe;
            local_1048.OutputState.CurrentShotSourceTimeCode.bDropFrameFormat =
                 (this->CachedOutputState).CurrentShotSourceTimeCode.bDropFrameFormat;
            local_1048.OutputState.CurrentShotSourceTimeCode._21_3_ =
                 *(undefined3 *)&(this->CachedOutputState).CurrentShotSourceTimeCode.field_0x15;
            uVar48 = (ulonglong)local_11d8;
            local_1048.TileIndexes.field0_0x0._s_0.Y = local_1208;
            local_1048.TileCounts.field0_0x0._s_0.X = (int)local_11d0;
            local_1048.OriginalTileCounts.field0_0x0 = local_1128;
            local_1048.bDiscardResult = (this->CachedOutputState).bDiscardRenderResult;
            local_1048.SpatialSampleCount = local_120c;
            local_1048.TemporalSampleIndex = (this->CachedOutputState).TemporalSampleIndex;
            local_1048.FrameInfo.CurrViewLocation.field0_0x0._s_0.X =
                 (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.X;
            local_1048.FrameInfo.CurrViewLocation.field0_0x0._s_0.Y =
                 (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.Y;
            local_1048.TemporalSampleCount = *(int *)((longlong)&local_11e0[1]._padding_ + 4);
            local_1048.AccumulationGamma = *(float *)((longlong)&local_11e0[1]._padding_ + 4);
            local_1048.OutputState.CameraIndex = 0;
            local_1048.TileIndexes.field0_0x0._s_0.X = local_11d8;
            local_1048.FrameInfo.CurrViewRotation.Pitch = (this->FrameInfo).CurrViewRotation.Pitch;
            local_1048.FrameInfo.CurrViewRotation.Yaw = (this->FrameInfo).CurrViewRotation.Yaw;
            local_1048.FrameInfo.CurrViewLocation.field0_0x0._s_0.Z =
                 (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.Z;
            local_1048.FrameInfo.CurrViewRotation.Roll = (this->FrameInfo).CurrViewRotation.Roll;
            local_1048.FrameInfo.PrevViewLocation.field0_0x0._s_0.X =
                 (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.X;
            local_1048.FrameInfo.PrevViewLocation.field0_0x0._s_0.Y =
                 (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.Y;
            local_1048.FrameInfo.PrevViewLocation.field0_0x0._s_0.Z =
                 (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.Z;
            local_1048.FrameInfo.PrevViewRotation.Pitch = (this->FrameInfo).PrevViewRotation.Pitch;
            local_1048.FrameInfo.PrevViewRotation.Yaw = (this->FrameInfo).PrevViewRotation.Yaw;
            local_1048.FrameInfo.PrevViewRotation.Roll = (this->FrameInfo).PrevViewRotation.Roll;
            local_1048.TileCounts.field0_0x0._s_0.Y = local_1048.TileCounts.field0_0x0._s_0.X;
            local_1048.SpatialShiftX = fVar52;
            local_1048.SpatialShiftY = fVar51;
            local_1048.SpatialSampleIndex = iVar20;
            TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                      (&local_1048.FrameInfo.CurrSidecarViewLocations,
                       &(this->FrameInfo).CurrSidecarViewLocations);
            TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
                      (&local_1048.FrameInfo.CurrSidecarViewRotations,
                       &(this->FrameInfo).CurrSidecarViewRotations);
            TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
                      (&local_1048.FrameInfo.PrevSidecarViewLocations,
                       &(this->FrameInfo).PrevSidecarViewLocations);
            TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
                      (&local_1048.FrameInfo.PrevSidecarViewRotations,
                       &(this->FrameInfo).PrevSidecarViewRotations);
            local_1048.bWriteSampleToDisk = (bool)local_1218;
            local_1048.TextureSharpnessBias = *(float *)((longlong)&local_1198[1]._padding_ + 4);
            if (pUVar16 == (UMoviePipelineColorSetting *)0x0) {
              local_1048.OCIOConfiguration = (FOpenColorIODisplayConfiguration *)0x0;
            }
            else {
              local_1048.OCIOConfiguration = &pUVar16->OCIOConfiguration;
            }
            local_1048.GlobalScreenPercentageFraction =
                 FLegacyScreenPercentageDriver::GetCVarResolutionFraction();
            iVar4 = local_1204;
            iVar20 = local_1210;
            local_1048.bAutoExposureCubePass = false;
            local_1048.AutoExposureCubeFace = '\0';
            local_1048.OverscanPercentage = *(float *)((longlong)&local_1180[1]._padding_ + 4);
            local_1048.bOverrideCameraOverscan = *(bool *)((longlong)&local_1180[1]._padding_ + 1);
            if (fVar11 <= local_1048.OverscanPercentage) {
              local_1048.OverscanPercentage = fVar11;
            }
            if (local_1048.OverscanPercentage <= 0.0) {
              local_1048.OverscanPercentage = 0.0;
            }
            if (0 < local_1210) {
              ppFVar45 = local_c8 + local_1204;
              if ((local_c8[local_1204] != (FRHIResource *)0x0) &&
                 (cVar18 = (**(code **)(local_c8[local_1204]->_padding_ + 0x20))(), cVar18 == '\0'))
              {
                bVar17 = -1 < CpuChannel->Enabled;
                if (bVar17) {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&__CpuProfilerEventSpecId476,"MRQFrameThrottle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                             ,0x1dc);
                  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId476);
                }
                FWindowsPlatformProcess::SleepNoStats(fVar12);
                cVar18 = (**(code **)((*ppFVar45)->_padding_ + 0x20))();
                while (cVar18 == '\0') {
                  FWindowsPlatformProcess::SleepNoStats(fVar12);
                  cVar18 = (**(code **)((*ppFVar45)->_padding_ + 0x20))();
                }
                if (bVar17) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
              }
              ::FName::FName((FName *)(local_1120 + 0x10),L"MRQThrottleFence");
              (**(code **)(GDynamicRHI->_padding_ + 0xb8))
                        (GDynamicRHI,&local_11b8,local_1120 + 0x10);
              if (ppFVar45 == &local_11b8) {
LAB_14dd9adb1:
                if (local_11b8 != (FRHIResource *)0x0) {
                  FRHIResource::Release(local_11b8);
                }
              }
              else {
                pFVar7 = *ppFVar45;
                *ppFVar45 = local_11b8;
                local_11b8 = (FRHIResource *)0x0;
                if (pFVar7 != (FRHIResource *)0x0) {
                  FRHIResource::Release(pFVar7);
                  goto LAB_14dd9adb1;
                }
              }
              pFVar7 = *ppFVar45;
              if (pFVar7 != (FRHIResource *)0x0) {
                FRHIResource::AddRef(pFVar7);
              }
              local_d98 = &UE::Core::Private::Function::
                           TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::`122'::<lambda_1>,1,0>
                           ::_vftable_;
              local_d80 = (undefined ***)0x0;
              local_da8[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`UMoviePipeline::RenderFrame'::__l122::<lambda_1>,void,FRHICommandListImmediate_&>
                             ::Call;
              pFStack_d90 = pFVar7;
              this_04 = FRenderCommandList::GetInstanceTLS();
              if (this_04 == (FRenderCommandList *)0x0) {
                FRenderThreadCommandPipe::
                Enqueue<TRenderCommandTag<_UMoviePipeline::RenderFrame_::__l122::TSTR_MRQFrameThrottle489>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_da8);
              }
              else {
                this_05 = FRenderCommandList::GetRenderThread(this_04);
                local_d28._0_8_ = local_da8[0];
                local_d00 = local_d80;
                local_d80 = (undefined ***)0x0;
                local_d18 = local_d98;
                pFStack_d10 = pFStack_d90;
                local_d08 = local_d88;
                local_da8[0] = (code *)0x0;
                local_cf8 = 2;
                pFVar35 = (FRenderCommandTag *)
                          TRenderCommandTag<`UMoviePipeline::RenderFrame'::__l122::TSTR_MRQFrameThrottle489>
                          ::Get();
                UE::RenderCommandPipe::FCommandList::Enqueue
                          (this_05,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                    *)local_d28,pFVar35);
                uVar44 = (ulonglong)local_cf8;
                if ((2 < uVar44) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xd4,L""), bVar17)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar44] ==
                    UE::Core::Private::
                    TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                    Destruct) {
                  if ((code *)local_d28._0_8_ != (code *)0x0) {
                    pppuVar39 = (undefined ***)(local_d28 + 0x10);
                    if (local_d00 != (undefined ***)0x0) {
                      pppuVar39 = local_d00;
                    }
                    (*(code *)(*pppuVar39)[2])();
                  }
                }
                else {
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar44])(local_d28);
                }
              }
              if (local_da8[0] != (code *)0x0) {
                pppuVar39 = &local_d98;
                if (local_d80 != (undefined ***)0x0) {
                  pppuVar39 = local_d80;
                }
                (*(code *)(*pppuVar39)[2])();
              }
              local_1204 = (iVar4 + 1) % iVar20;
            }
            uVar37 = this->CurrentShotIndex;
            uVar40 = 0;
            if ((int)uVar37 < (this->ActiveShotList).ArrayNum) {
              uVar40 = ~uVar37 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pUVar30 = *(UMoviePipelineExecutorShot **)
                       ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar37 * 8);
            pUVar24 = GetPipelinePrimaryConfig(this);
            UE::MoviePipeline::GetRenderPassMetrics
                      (&local_c38,pUVar24,pUVar30,&local_1048,(TIntPoint<int> *)local_1120);
            iVar20 = local_11f8.ArrayNum;
            pFVar2 = local_11f8.AllocatorInstance.Data + (longlong)local_11f8.ArrayNum * 8;
            FVar43.Data = local_11f8.AllocatorInstance.Data;
            while( true ) {
              if (local_11f8.ArrayNum != iVar20) {
                local_1213 = 0;
                `TCheckedPointerIterator<UMoviePipelineRenderPass_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_1213);
              }
              if (FVar43.Data == pFVar2) break;
              (**(code **)(**(longlong **)FVar43.Data + 0x398))
                        (*(longlong **)FVar43.Data,&local_c38);
              FVar43.Data = FVar43.Data + 8;
            }
            local_c38.FrameInfo._padding_ =
                 (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
            if (local_c38.FrameInfo.PrevSidecarViewRotations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c38.FrameInfo.PrevSidecarViewRotations.AllocatorInstance.Data);
            }
            if (local_c38.FrameInfo.PrevSidecarViewLocations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c38.FrameInfo.PrevSidecarViewLocations.AllocatorInstance.Data);
            }
            if (local_c38.FrameInfo.CurrSidecarViewRotations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c38.FrameInfo.CurrSidecarViewRotations.AllocatorInstance.Data);
            }
            if (local_c38.FrameInfo.CurrSidecarViewLocations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c38.FrameInfo.CurrSidecarViewLocations.AllocatorInstance.Data);
            }
            FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(&local_c38.OutputState);
            local_1048.FrameInfo._padding_ =
                 (longlong)&___7FMoviePipelineFrameInfo_MoviePipeline__6B_;
            if (local_1048.FrameInfo.PrevSidecarViewRotations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1048.FrameInfo.PrevSidecarViewRotations.AllocatorInstance.Data);
            }
            if (local_1048.FrameInfo.PrevSidecarViewLocations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1048.FrameInfo.PrevSidecarViewLocations.AllocatorInstance.Data);
            }
            if (local_1048.FrameInfo.CurrSidecarViewRotations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1048.FrameInfo.CurrSidecarViewRotations.AllocatorInstance.Data);
            }
            if (local_1048.FrameInfo.CurrSidecarViewLocations.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1048.FrameInfo.CurrSidecarViewLocations.AllocatorInstance.Data);
            }
            FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState(&local_1048.OutputState)
            ;
            iVar47 = iVar47 + 1;
          } while (iVar47 < local_11a0);
        }
        iVar47 = local_11f8.ArrayNum;
        uVar37 = local_1208;
        uVar44 = (ulonglong)local_1208;
        pFVar2 = local_11f8.AllocatorInstance.Data + (longlong)local_11f8.ArrayNum * 8;
        FVar43.Data = local_11f8.AllocatorInstance.Data;
        while( true ) {
          if (local_11f8.ArrayNum != iVar47) {
            local_1212[0] = 0;
            `TCheckedPointerIterator<UMoviePipelineRenderPass_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_1212);
          }
          if (FVar43.Data == pFVar2) break;
          (**(code **)(**(longlong **)FVar43.Data + 0x350))
                    (*(longlong **)FVar43.Data,uVar44 << 0x20 | uVar48);
          FVar43.Data = FVar43.Data + 8;
        }
        local_11d8 = (int)uVar48 + 1;
        uVar48 = (ulonglong)local_11d8;
        iVar47 = local_120c;
      } while ((int)local_11d8 < (int)local_11d0);
      local_1208 = uVar37 + 1;
      uVar44 = (ulonglong)local_1208;
    } while ((int)local_1208 < (int)local_11d0);
    SetProgressWidgetVisible(this,true);
    ppFVar45 = local_c8 + 4;
    lVar29 = 4;
    do {
      ppFVar1 = ppFVar45 + -1;
      ppFVar45 = ppFVar45 + -1;
      lVar29 = lVar29 + -1;
      if (*ppFVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release(*ppFVar1);
      }
    } while (lVar29 != 0);
    if (local_11f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11f8.AllocatorInstance.Data);
    }
  }
  return;
}

// SetupRenderingPipelineForShot @ 14dda5550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMoviePipeline::SetupRenderingPipelineForShot
          (UMoviePipeline *this,UMoviePipelineExecutorShot *param_1)

{
  undefined1 *puVar1;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  UMoviePipelinePrimaryConfig *pUVar6;
  UMoviePipelineSetting *pUVar7;
  UMoviePipelineOutputSetting *pUVar8;
  UWorld *this_01;
  APlayerController *pAVar9;
  AActor *pAVar10;
  UCameraComponent *pUVar11;
  longlong lVar12;
  UMoviePipelineExecutorShot *pUVar13;
  int iVar14;
  ForAnyElementType FVar15;
  float in_XMM2_Da;
  undefined1 auStackY_9f8 [32];
  float local_9a8 [2];
  undefined1 local_9a0 [32];
  TArray<UMoviePipelineRenderPass_*,TSizedDefaultAllocator<32>_> local_980;
  TPairInitializer<int_&&,float_const_&> local_970;
  UClass *local_960;
  undefined1 local_958 [8];
  longlong local_950;
  uint local_948;
  undefined4 *local_940;
  float *local_938;
  FMinimalViewInfo local_928;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_9f8;
  pUVar6 = GetPipelinePrimaryConfig(this);
  local_970.Value = (float *)Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_970.Value != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_970.Value);
  }
  UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
            ((TSubclassOf<UMoviePipelineSetting>)&local_970.Value,pUVar6,param_1);
  pUVar6 = GetPipelinePrimaryConfig(this);
  local_960 = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_960 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_960);
  }
  pUVar7 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                     ((TSubclassOf<UMoviePipelineSetting>)&local_960,pUVar6,param_1);
  pUVar6 = GetPipelinePrimaryConfig(this);
  pUVar8 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)pUVar6,false);
  if ((pUVar8 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                         ,0x57,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = &this->CameraOverscanCache;
  bVar5 = 1 < *(int *)&(this->CameraOverscanCache).field_0x48;
  if (!bVar5) {
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->CameraOverscanCache).field_0xc;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CameraOverscanCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x34 = 0;
  iVar14 = *(int *)&(this->CameraOverscanCache).field_0x2c;
  *(undefined4 *)&(this->CameraOverscanCache).field_0x28 = 0;
  if ((iVar14 < 0) || (0x80 < iVar14)) {
    *(undefined4 *)&(this->CameraOverscanCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CameraOverscanCache).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->CameraOverscanCache).field_0x48 = 1;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                *)this_00);
  }
  this->bHasWarnedAboutAnimatedOverscan = false;
  local_9a8[0] = 0.0;
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar9 = UWorld::GetFirstPlayerController(this_01);
  pAVar10 = APlayerCameraManager::GetViewTarget((pAVar9->PlayerCameraManager).field0_0x0.DebugPtr);
  pUVar11 = MovieSceneHelpers::CameraComponentFromRuntimeObject((UObject *)pAVar10);
  if (pUVar11 != (UCameraComponent *)0x0) {
    FMinimalViewInfo::FMinimalViewInfo(&local_928);
    pcVar3 = *(code **)(pUVar11->_padding_ + 0x660);
    lVar12 = (**(code **)(this->_padding_ + 0x180))(this);
    (*pcVar3)(pUVar11,*(undefined4 *)(lVar12 + 0x91c),&local_928);
    local_9a8[0] = local_928.Overscan;
    if (local_928.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  local_940 = (undefined4 *)(local_9a0 + 0xc);
  local_9a0._12_4_ = 0xffffffff;
  local_938 = local_9a8;
  TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,float_const_&>_>
            ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
              *)this_00,&local_970,(bool *)&local_940);
  iVar14 = (int)pUVar7[1]._padding_;
  local_9a0._16_4_ = iVar14;
  local_9a0._20_4_ = iVar14;
  pUVar13 = (UMoviePipelineExecutorShot *)GetPipelinePrimaryConfig(this);
  UMoviePipelineBlueprintLibrary::GetOverscannedResolution
            ((UMoviePipelinePrimaryConfig *)(local_9a0 + 0x18),pUVar13,in_XMM2_Da);
  pUVar13 = (UMoviePipelineExecutorShot *)GetPipelinePrimaryConfig(this);
  UMoviePipelineBlueprintLibrary::GetBackbufferResolution
            ((UMoviePipelinePrimaryConfig *)local_9a0,pUVar13,in_XMM2_Da);
  pTVar4 = CVarMoviePipelineDisableMaxResolutionCheck.Ref;
  if ((GRHIGlobals.MaxTextureDimensions.Value < (int)local_9a0._0_4_) ||
     (GRHIGlobals.MaxTextureDimensions.Value < (int)local_9a0._4_4_)) {
    bVar5 = IsInParallelGameThread();
    if ((!bVar5) &&
       ((bVar5 = IsInGameThread(), !bVar5 &&
        (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar5)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pTVar4->ShadowedValue[0] == false) {
      if (1 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      goto LAB_14dda59b2;
    }
  }
  if ((0 < (int)local_9a0._0_4_) && (0 < (int)local_9a0._4_4_)) {
    lVar12 = (**(code **)(this->_padding_ + 0x180))(this);
    local_950 = CONCAT44(local_9a0._20_4_,local_9a0._16_4_);
    local_948 = (uint)*(byte *)(lVar12 + 0x188);
    if (((iVar14 < 1) || ((int)local_9a0._20_4_ < 1)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6270658771920355189>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineRendering.cpp"
                           ,0x8b,
                           "RenderPassInitSettings.TileCount.X > 0 && RenderPassInitSettings.TileCount.Y > 0"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FindSettingsForShot<UMoviePipelineRenderPass>(this,&local_980,param_1);
    iVar14 = local_980.ArrayNum;
    pFVar2 = local_980.AllocatorInstance.Data + (longlong)iVar14 * 8;
    FVar15.Data = local_980.AllocatorInstance.Data;
    while( true ) {
      if (local_980.ArrayNum != iVar14) {
        `TCheckedPointerIterator<UMoviePipelineRenderPass_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_9a0 + 8);
      }
      if (FVar15.Data == pFVar2) break;
      (**(code **)(**(longlong **)FVar15.Data + 0x360))(*(longlong **)FVar15.Data,local_958);
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_980.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_980.AllocatorInstance.Data);
    }
    if ((byte)LogMovieRenderPipeline._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    return;
  }
  if (1 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
LAB_14dda59b2:
  (**(code **)(this->_padding_ + 0x2b8))(this,1);
  return;
}

// TeardownRenderingPipelineForShot @ 14dda6950

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipeline::TeardownRenderingPipelineForShot
          (UMoviePipeline *this,UMoviePipelineExecutorShot *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<UMoviePipelineRenderPass_*,TSizedDefaultAllocator<32>_> local_28;
  
  FindSettingsForShot<UMoviePipelineRenderPass>(this,&local_28,param_1);
  iVar5 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar5 * 8;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineRenderPass_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    plVar2 = *(longlong **)FVar6.Data;
    (**(code **)(*plVar2 + 0x368))(plVar2);
    (**(code **)(*plVar2 + 0x370))(plVar2);
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((this->OutputBuilder).Object == (FMoviePipelineOutputMerger *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (**(code **)(((this->OutputBuilder).Object)->_padding_ + 0x20))();
  if ((1 < iVar5) && (1 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    return;
  }
  return;
}

// TickProducingFrames @ 14dda6a70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMoviePipeline::TickProducingFrames(UMoviePipeline *this)

{
  int *piVar1;
  EMovieRenderShotState EVar2;
  UMoviePipelineCustomTimeStep *pUVar3;
  UMoviePipelineCustomTimeStep *pUVar4;
  UMoviePipelineExecutorShot *pUVar5;
  FFrameRate FVar6;
  ALevelSequenceActor *this_00;
  ULevelSequence *pUVar7;
  code *pcVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  FFrameRate FVar14;
  FFrameRate FVar15;
  FFrameRate FVar16;
  FFrameRate FVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  FFrameNumber FVar23;
  int extraout_EAX;
  UWorld *pUVar24;
  APlayerController *pAVar25;
  AWorldSettings *pAVar26;
  UMoviePipelineAntiAliasingSetting *pUVar27;
  longlong lVar28;
  ULevelSequencePlayer *pUVar29;
  FMoviePipelineTimeController *pFVar30;
  FCameraCutSubSectionHierarchyNode *pFVar31;
  UMoviePipelinePrimaryConfig *pUVar32;
  UMoviePipelineOutputSetting *pUVar33;
  FFrameRate FVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  FFrameTime FVar37;
  undefined7 extraout_var_00;
  FFrameNumber *pFVar38;
  uint uVar39;
  FFrameTime FVar40;
  int iVar41;
  FFrameTimeStepCache *pFVar42;
  FFrameNumber FVar43;
  FFrameNumber FVar44;
  FFrameTime FVar45;
  FFrameTime FVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  undefined1 auVar51 [16];
  double dVar50;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  undefined1 in_XMM2 [16];
  undefined1 auVar70 [16];
  float fVar71;
  double dVar72;
  FFrameTime local_res8;
  FFrameTime local_res10;
  FFrameTime local_res18;
  undefined8 local_res20;
  FFrameTime local_308;
  FFrameConstantMetrics local_2f8;
  uint local_298;
  undefined4 uStack_294;
  int local_290;
  undefined4 uStack_28c;
  int local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  int local_278;
  undefined4 uStack_274;
  int local_270;
  undefined4 uStack_26c;
  FFrameTime local_268;
  FFrameTime local_260;
  FFrameTime *local_258;
  FFrameTimeStepCache local_250;
  undefined8 local_248;
  FFrameTimeStepCache local_238;
  FFrameTime local_230;
  FFrameTime local_228;
  ulonglong local_220;
  ulonglong local_208;
  ulonglong local_200;
  FFrameTimeStepCache local_1f8;
  UMoviePipeline *local_1f0;
  int local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FFrameTime local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  FMovieSceneSequencePlaybackParams local_188;
  FMovieSceneSequencePlaybackParams local_148;
  FMovieSceneSequencePlaybackParams local_108;
  undefined1 local_c8 [136];
  undefined7 extraout_var;
  
  local_1f0 = this;
  if ((this->PipelineState != ProducingFrames) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("PipelineState == EMovieRenderPipelineState::ProducingFrames",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                          ,0x5e,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->CurrentShotIndex < 0) || ((this->ActiveShotList).ArrayNum <= this->CurrentShotIndex))
     && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentShotIndex >= 0 && CurrentShotIndex < ActiveShotList.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                             ,0x61,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ProcessOutstandingFutures(this);
  if (this->bShutdownRequested != (FThreadSafeBool)0x0) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    TransitionToState(this,Finalize);
    goto LAB_14dda848f;
  }
  pUVar3 = (UMoviePipelineCustomTimeStep *)(GEngine->CustomTimeStep).field0_0x0.DebugPtr;
  pUVar4 = (this->CustomTimeStep).field0_0x0.DebugPtr;
  if (pUVar4 == (UMoviePipelineCustomTimeStep *)0x0) {
    bVar19 = pUVar3 == (UMoviePipelineCustomTimeStep *)0x0;
  }
  else {
    bVar19 = pUVar4 == pUVar3;
  }
  if (!bVar19) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMoviePipelineCustomTimeStep *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->CachedPrevCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)pUVar3;
    UEngine::SetCustomTimeStep
              (GEngine,(UEngineCustomTimeStep *)(this->CustomTimeStep).field0_0x0.DebugPtr);
  }
  bVar19 = DebugFrameStepPreTick(this);
  if (bVar19) goto LAB_14dda848f;
  pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar25 = UWorld::GetFirstPlayerController(pUVar24);
  local_190 = 0;
  local_1a0 = 0;
  local_198 = 0;
  (**(code **)(pAVar25->_padding_ + 0xbd8))(pAVar25,0,&local_1a0);
  uVar39 = this->CurrentShotIndex;
  uVar21 = 0;
  if ((int)uVar39 < (this->ActiveShotList).ArrayNum) {
    uVar21 = ~uVar39 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar5 = *(UMoviePipelineExecutorShot **)
            ((this->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar39 * 8);
  CalculateShotFrameMetrics(this,&local_2f8,pUVar5);
  FMoviePipelineFrameOutputState::ResetPerFrameData(&this->CachedOutputState);
  dVar18 = __real_c1e0000000000000;
  dVar72 = __real_41dfffffffc00000;
  fVar71 = __real_3f000000;
  fVar57 = __real_3f800000;
  fVar48 = __real_322bcc77;
  if ((pUVar5->ShotInfo).State == Uninitialized) {
    InitializeShot(this,pUVar5);
    (this->CachedOutputState).ShotOutputFrameNumber = -1;
    (this->CachedOutputState).ShotSamplesRendered = 0;
    (this->CachedOutputState).ShotIndex = 0;
    (this->CachedOutputState).TemporalSampleCount = 0;
    ::FString::Reset(&(this->CachedOutputState).CameraName,0);
    ::FString::Reset(&(this->CachedOutputState).ShotName,0);
    (this->CachedOutputState).ShotIndex = this->CurrentShotIndex;
    (this->CachedOutputState).ShotSamplesRendered = 0;
    (this->CachedOutputState).ShotOutputFrameNumber = -1;
    (this->CachedOutputState).TemporalSampleCount = (pUVar5->ShotInfo).NumTemporalSamples;
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    FMoviePipelineCameraCutInfo::SetNextStateAfter(&pUVar5->ShotInfo,Uninitialized);
    FindOrAddSettingForShot<UMoviePipelineAntiAliasingSetting>(this,pUVar5);
    iVar22 = 0;
    if ((pUVar5->ShotInfo).bEmulateFirstFrameMotionBlur == false) {
      pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pAVar26 = UWorld::GetWorldSettings(pUVar24,false,true);
      fVar47 = (float)(**(code **)(pAVar26->_padding_ + 0x790))(pAVar26);
      pUVar27 = FindOrAddSettingForShot<UMoviePipelineAntiAliasingSetting>(this,pUVar5);
      if (pUVar27->TemporalSampleCount == 1) {
        FVar45.SubFrame = local_2f8.TicksPerOutputFrame.SubFrame;
        FVar45.FrameNumber.Value = local_2f8.TicksPerOutputFrame.FrameNumber.Value;
      }
      else {
        local_res18.SubFrame = local_2f8.TicksWhileShutterClosed.SubFrame;
        fVar68 = local_res18.SubFrame + local_2f8.TicksPerSample.SubFrame;
        iVar22 = (int)fVar68;
        fVar69 = fVar68;
        if ((iVar22 != -0x80000000) && ((float)iVar22 != fVar68)) {
          auVar70._4_4_ = fVar68;
          auVar70._0_4_ = fVar68;
          auVar70._8_8_ = 0;
          uVar39 = movmskps(local_2f8.TicksWhileShutterClosed.FrameNumber.Value.Value,auVar70);
          fVar69 = (float)(int)(iVar22 - (uVar39 & 1));
        }
        fVar10 = fVar68 - fVar69;
        if (::FFrameTime::MaxSubframe <= fVar68 - fVar69) {
          fVar10 = ::FFrameTime::MaxSubframe;
        }
        in_XMM2 = ZEXT416((uint)fVar10);
        if (fVar10 <= 0.0) {
          in_XMM2 = ZEXT816(0) << 0x20;
        }
        local_res18.SubFrame = in_XMM2._0_4_;
        local_res18.FrameNumber.Value =
             ((int)ROUND((fVar68 + fVar68) - fVar71) >> 1) +
             local_2f8.TicksWhileShutterClosed.FrameNumber.Value.Value +
             local_2f8.TicksPerSample.FrameNumber.Value;
        FVar45 = local_res18;
      }
      FVar46 = FVar45;
      local_res18 = FVar45;
      if (fVar48 < (float)((uint)(fVar47 - fVar57) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        local_268.SubFrame = FVar45.SubFrame;
        dVar9 = ((double)local_268.SubFrame + (double)FVar45.FrameNumber.Value.Value) *
                (double)fVar47;
        auVar51._8_8_ = 0;
        auVar51._0_8_ = dVar9;
        auVar70 = roundpd(in_XMM2,auVar51,1);
        dVar49 = auVar70._0_8_;
        dVar50 = dVar49;
        if (dVar72 <= dVar49) {
          dVar50 = dVar72;
        }
        if (dVar50 <= dVar18) {
          dVar50 = dVar18;
        }
        fVar47 = (float)(dVar9 - dVar49);
        FVar46.SubFrame = 0.0;
        FVar46.FrameNumber.Value = (int)dVar50;
        if (::FFrameTime::MaxSubframe <= fVar47) {
          fVar47 = ::FFrameTime::MaxSubframe;
        }
        auVar52 = ZEXT416((uint)fVar47);
        if (fVar47 <= 0.0) {
          auVar52 = ZEXT816(0) << 0x20;
        }
        if (::FFrameTime::MaxSubframe <= auVar52._0_4_) {
          auVar52._0_4_ = ::FFrameTime::MaxSubframe;
        }
        if (auVar52._0_4_ <= 0.0) {
          auVar11._12_4_ = 0;
          auVar11._0_12_ = auVar52._4_12_;
          auVar52 = auVar11 << 0x20;
        }
        local_res18.SubFrame = auVar52._0_4_;
        local_res18.FrameNumber.Value = (int)dVar50;
        local_268 = FVar45;
      }
      (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
      lVar28 = (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
      local_298 = (pUVar5->ShotInfo).NumEngineWarmUpFramesRemaining;
      uStack_294 = 0;
      FVar6.Denominator = 0;
      FVar6.Numerator = local_298;
      local_res8 = FFrameRate::TransformTime
                             ((FFrameTime)local_c8,FVar6,*(FFrameRate *)(lVar28 + 0x140));
      local_res8 = *(FFrameTime *)local_res8;
      fVar69 = local_res18.SubFrame + local_res8.SubFrame;
      iVar41 = (int)fVar69;
      iVar22 = ((int)ROUND((fVar69 + fVar69) - fVar71) >> 1) + local_res8.FrameNumber.Value.Value +
               FVar46.FrameNumber.Value.Value;
      fVar47 = fVar69;
      if ((iVar41 != -0x80000000) && ((float)iVar41 != fVar69)) {
        auVar58._4_4_ = fVar69;
        auVar58._0_4_ = fVar69;
        auVar58._8_8_ = 0;
        uVar39 = movmskps(local_res8.FrameNumber.Value.Value,auVar58);
        fVar47 = (float)(int)(iVar41 - (uVar39 & 1));
      }
      in_XMM2 = ZEXT416((uint)(fVar69 - fVar47));
      this->AccumulatedTickSubFrameDeltas = this->AccumulatedTickSubFrameDeltas - (fVar69 - fVar47);
      (pUVar5->ShotInfo).CurrentTickInRoot.Value =
           (pUVar5->ShotInfo).CurrentTickInRoot.Value - iVar22;
    }
    local_res8.FrameNumber.Value = (pUVar5->ShotInfo).CurrentTickInRoot.Value + iVar22;
    (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
    lVar28 = (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
    local_290 = local_res8.FrameNumber.Value;
    uStack_28c = 0;
    FFrameRate::TransformTime
              ((FFrameTime)&local_260,(FFrameRate)((ulonglong)local_res8 & 0xffffffff),
               *(FFrameRate *)(lVar28 + 0x138));
    pUVar29 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr)
    ;
    local_188.Frame = local_260;
    local_188.Time = 0.0;
    local_188.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.MarkedFrame.Data.ArrayNum = 0;
    local_188.MarkedFrame.Data.ArrayMax = 0;
    local_188.Timecode.Hours = 0;
    local_188.Timecode.Minutes = 0;
    local_188.Timecode.Seconds = 0;
    local_188.Timecode.Frames = 0;
    local_188.Timecode.Subframe = 0.0;
    local_188.Timecode.bDropFrameFormat = false;
    local_188.PositionType = Frame;
    local_188.UpdateMethod = Jump;
    local_188.bHasJumped = false;
    UMovieSceneSequencePlayer::SetPlaybackPosition((UMovieSceneSequencePlayer *)pUVar29,&local_188);
    pFVar30 = TSharedPtr<FMoviePipelineTimeController,1>::operator->
                        (&this->CustomSequenceTimeController);
    lVar28 = (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
    local_308 = (FFrameTime)((ulonglong)local_res8 & 0xffffffff);
    FVar6 = *(FFrameRate *)(lVar28 + 0x138);
    (pFVar30->TimeCache).Time = local_308;
    (pFVar30->TimeCache).Rate = FVar6;
    this_00 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
    if ((pUVar5->ShotInfo).bEmulateFirstFrameMotionBlur == false) {
      pUVar29 = ALevelSequenceActor::GetSequencePlayer(this_00);
      UMovieSceneSequencePlayer::Play((UMovieSceneSequencePlayer *)pUVar29);
    }
    else {
      pUVar29 = ALevelSequenceActor::GetSequencePlayer(this_00);
      UMovieSceneSequencePlayer::Pause((UMovieSceneSequencePlayer *)pUVar29);
    }
    pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar25 = UWorld::GetFirstPlayerController(pUVar24);
    (**(code **)(pAVar25->_padding_ + 0x840))
              (pAVar25,&(this->FrameInfo).CurrViewLocation,&(this->FrameInfo).CurrViewRotation);
    dVar50 = (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.Y;
    dVar9 = (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.Z;
    (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.X =
         (this->FrameInfo).CurrViewLocation.field0_0x0._s_0.X;
    (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.Y = dVar50;
    dVar50 = (this->FrameInfo).CurrViewRotation.Pitch;
    dVar49 = (this->FrameInfo).CurrViewRotation.Yaw;
    (this->FrameInfo).PrevViewLocation.field0_0x0._s_0.Z = dVar9;
    dVar9 = (this->FrameInfo).CurrViewRotation.Roll;
    (this->FrameInfo).PrevViewRotation.Pitch = dVar50;
    (this->FrameInfo).PrevViewRotation.Yaw = dVar49;
    (this->FrameInfo).PrevViewRotation.Roll = dVar9;
    bVar19 = GetSidecarCameraViewPoints
                       (this,pUVar5,&(this->FrameInfo).CurrSidecarViewLocations,
                        &(this->FrameInfo).CurrSidecarViewRotations);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->FrameInfo).PrevSidecarViewLocations,
               &(this->FrameInfo).CurrSidecarViewLocations);
    TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
              (&(this->FrameInfo).PrevSidecarViewRotations,
               &(this->FrameInfo).CurrSidecarViewRotations);
    pFVar31 = TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::operator->
                        (&(pUVar5->ShotInfo).SubSectionHierarchy);
    bVar20 = FWeakObjectPtr::IsValid(&(pFVar31->CameraCutSection).WeakPtr);
    if ((bVar20) && (!bVar19)) {
      local_258 = &local_res8;
      `UMoviePipeline::TickProducingFrames'::__l84::<lambda_2>::operator()(&local_258);
    }
    SetupRenderingPipelineForShot(this,pUVar5);
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  if (((pUVar5->ShotInfo).State == WarmingUp) &&
     ((pUVar5->ShotInfo).NumEngineWarmUpFramesRemaining == 0)) {
    FMoviePipelineCameraCutInfo::SetNextStateAfter(&pUVar5->ShotInfo,WarmingUp);
  }
  EVar2 = (pUVar5->ShotInfo).State;
  if (EVar2 == WarmingUp) {
    if (5 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    piVar1 = &(pUVar5->ShotInfo).NumEngineWarmUpFramesRemaining;
    *piVar1 = *piVar1 + -1;
    piVar1 = &(pUVar5->ShotInfo).WorkMetrics.EngineWarmUpFrameIndex;
    *piVar1 = *piVar1 + 1;
    (this->CachedOutputState).bDiscardRenderResult = true;
    pUVar27 = FindOrAddSettingForShot<UMoviePipelineAntiAliasingSetting>(this,pUVar5);
    if ((pUVar27 == (UMoviePipelineAntiAliasingSetting *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("AntiAliasingSettings",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                            ,0x112,L""), bVar19)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((((pUVar5->ShotInfo).NumEngineWarmUpFramesRemaining == 0) &&
        (0 < pUVar27->RenderWarmUpCount)) || (pUVar27->bRenderWarmUpFrames != false)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    (this->CachedOutputState).bSkipRendering = bVar19;
    pUVar32 = GetPipelinePrimaryConfig(this);
    pUVar7 = (this->TargetSequence).field0_0x0.DebugPtr;
    pUVar33 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                        ((UMoviePipelineConfigBase *)pUVar32,false);
    if ((pUVar33 == (UMoviePipelineOutputSetting *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutputSettings",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelinePrimaryConfig.cpp"
                            ,0xa4,L""), bVar19)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pUVar33->bUseCustomFrameRate == false) {
      if (pUVar7 == (ULevelSequence *)0x0) {
        FVar34.Numerator = 60000;
        FVar34.Denominator = 0;
        iVar22 = 1;
      }
      else {
        lVar28 = (**(code **)(pUVar7->_padding_ + 0x2f8))(pUVar7);
        FVar34 = (FFrameRate)(*(ulonglong *)(lVar28 + 0x140) & 0xffffffff);
        iVar22 = (int)(*(ulonglong *)(lVar28 + 0x140) >> 0x20);
      }
    }
    else {
      FVar34 = pUVar33->OutputFrameRate;
      iVar22 = FVar34.Denominator;
    }
    dVar72 = (double)iVar22 / (double)FVar34.Numerator;
    if (6 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)&PTR_u___d__Shot_WarmU_152d11760,
                 (FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pFVar42 = &local_250;
    local_250.UndilatedDeltaTime = dVar72;
    UMoviePipelineCustomTimeStep::SetCachedFrameTiming
              ((this->CustomTimeStep).field0_0x0.DebugPtr,pFVar42);
    if ((pUVar5->ShotInfo).bEmulateFirstFrameMotionBlur == false) {
      iVar41 = local_2f8.TicksPerOutputFrame.FrameNumber.Value +
               (pUVar5->ShotInfo).CurrentTickInRoot.Value;
      (pUVar5->ShotInfo).CurrentTickInRoot.Value = iVar41;
      local_res8.SubFrame = local_2f8.MotionBlurCenteringOffsetTicks.SubFrame;
      fVar48 = local_res8.SubFrame;
      local_res8 = local_2f8.ShutterOffsetTicks;
      FVar45 = local_res8;
      iVar22 = (int)fVar48;
      fVar57 = fVar48;
      if ((iVar22 != -0x80000000) && ((float)iVar22 != fVar48)) {
        auVar59._4_4_ = fVar48;
        auVar59._0_4_ = fVar48;
        auVar59._8_8_ = 0;
        uVar39 = movmskps((int)pFVar42,auVar59);
        fVar57 = (float)(int)(iVar22 - (uVar39 & 1));
      }
      fVar47 = fVar48 - fVar57;
      if (::FFrameTime::MaxSubframe <= fVar48 - fVar57) {
        fVar47 = ::FFrameTime::MaxSubframe;
      }
      if (fVar47 <= 0.0) {
        fVar47 = 0.0;
      }
      local_res8.SubFrame = local_2f8.ShutterOffsetTicks.SubFrame;
      fVar47 = fVar47 + local_res8.SubFrame;
      iVar22 = (int)fVar47;
      fVar57 = fVar47;
      if ((iVar22 != -0x80000000) && ((float)iVar22 != fVar47)) {
        auVar60._4_4_ = fVar47;
        auVar60._0_4_ = fVar47;
        auVar60._8_8_ = 0;
        uVar39 = movmskps(local_2f8.MotionBlurCenteringOffsetTicks.FrameNumber.Value.Value,auVar60);
        fVar57 = (float)(int)(iVar22 - (uVar39 & 1));
      }
      local_308.SubFrame = fVar47 - fVar57;
      if (::FFrameTime::MaxSubframe <= fVar47 - fVar57) {
        local_308.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_308.SubFrame <= 0.0) {
        local_308.SubFrame = 0.0;
      }
      local_308.FrameNumber.Value =
           ((int)ROUND((fVar48 + fVar48) - fVar71) >> 1) +
           ((int)ROUND((fVar47 + fVar47) - fVar71) >> 1) +
           local_2f8.ShutterOffsetTicks.FrameNumber.Value.Value +
           local_2f8.MotionBlurCenteringOffsetTicks.FrameNumber.Value.Value + iVar41;
      local_res8 = FVar45;
      pFVar30 = TSharedPtr<FMoviePipelineTimeController,1>::operator->
                          (&this->CustomSequenceTimeController);
      FVar14.Denominator = local_2f8.TickResolution.Denominator;
      FVar14.Numerator = local_2f8.TickResolution.Numerator;
      (pFVar30->TimeCache).Time = local_308;
      (pFVar30->TimeCache).Rate = FVar14;
    }
    if (1 < pUVar27->TemporalSampleCount) {
      lVar28 = (longlong)
               ROUND(((double)local_2f8.TicksWhileShutterOpen.FrameNumber.Value +
                     (double)local_2f8.TicksWhileShutterOpen.FrameNumber.Value) /
                     (double)local_2f8.TicksPerSample.FrameNumber.Value - __real_3fe0000000000000)
               >> 1;
      pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      iVar22 = 1;
      if (1 < lVar28) {
        iVar22 = (int)lVar28;
      }
      UE::MoviePipeline::SetSkeletalMeshClothSubSteps(iVar22,pUVar24,&this->ClothSimCache);
    }
    (this->CachedOutputState).TimeData.FrameDeltaTime = dVar72;
    (this->CachedOutputState).TimeData.WorldSeconds =
         dVar72 + (this->CachedOutputState).TimeData.WorldSeconds;
    if (-1 < BookmarkChannel->Enabled) {
      if (__BookmarkPoint309 == false) {
        FMiscTrace::OutputBookmarkSpec
                  (&__BookmarkPoint309,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                   ,0x135,L"MoviePipeline - WarmingUp %d");
        __BookmarkPoint309 = true;
      }
      iVar22 = (pUVar5->ShotInfo).NumEngineWarmUpFramesRemaining;
      uVar39 = CallstackTrace_GetCurrentId();
      FMiscTrace::OutputBookmark<int>(uVar39,&__BookmarkPoint309,iVar22);
    }
    goto LAB_14dda848f;
  }
  if (EVar2 == MotionBlur) {
    if ((pUVar5->ShotInfo).bHasEvaluatedMotionBlurFrame == false) {
      (this->CachedOutputState).bSkipRendering = false;
      (this->CachedOutputState).bDiscardRenderResult = true;
      (this->CachedOutputState).TimeData.MotionBlurFraction =
           (float)local_2f8.ShutterAnglePercentage;
      pUVar3 = (this->CustomTimeStep).field0_0x0.DebugPtr;
      pFVar42 = &local_238;
      local_238.UndilatedDeltaTime =
           ((double)((longlong)local_2f8.TickResolution.Denominator *
                    (longlong)local_2f8.TicksPerSample.FrameNumber.Value) +
           (double)local_2f8.TicksPerSample.SubFrame * (double)local_2f8.TickResolution.Denominator)
           / (double)local_2f8.TickResolution.Numerator;
      (this->CachedOutputState).TimeData.FrameDeltaTime = local_238.UndilatedDeltaTime;
      (this->CachedOutputState).TimeData.WorldSeconds =
           local_238.UndilatedDeltaTime + (this->CachedOutputState).TimeData.WorldSeconds;
      UMoviePipelineCustomTimeStep::SetCachedFrameTiming(pUVar3,pFVar42);
      local_res8.SubFrame = local_2f8.MotionBlurCenteringOffsetTicks.SubFrame;
      iVar22 = (int)local_res8.SubFrame;
      fVar48 = local_res8.SubFrame;
      if ((iVar22 != -0x80000000) && ((float)iVar22 != local_res8.SubFrame)) {
        auVar62._4_4_ = local_res8.SubFrame;
        auVar62._0_4_ = local_res8.SubFrame;
        auVar62._8_8_ = 0;
        uVar39 = movmskps((int)pFVar42,auVar62);
        fVar48 = (float)(int)(iVar22 - (uVar39 & 1));
      }
      fVar47 = local_res8.SubFrame + local_res8.SubFrame;
      fVar57 = local_res8.SubFrame - fVar48;
      if (::FFrameTime::MaxSubframe <= local_res8.SubFrame - fVar48) {
        fVar57 = ::FFrameTime::MaxSubframe;
      }
      if (fVar57 <= 0.0) {
        fVar57 = 0.0;
      }
      local_res8.SubFrame = local_2f8.ShutterOffsetTicks.SubFrame;
      fVar57 = fVar57 + local_res8.SubFrame;
      FVar43.Value = local_2f8.TicksPerOutputFrame.FrameNumber.Value + -1 +
                     ((int)ROUND((fVar57 + fVar57) - fVar71) >> 1) +
                     ((int)ROUND(fVar47 - fVar71) >> 1) + (pUVar5->ShotInfo).CurrentTickInRoot.Value
                     + local_2f8.ShutterOffsetTicks.FrameNumber.Value.Value +
                     local_2f8.MotionBlurCenteringOffsetTicks.FrameNumber.Value.Value;
      iVar22 = (int)fVar57;
      fVar48 = fVar57;
      if ((iVar22 != -0x80000000) && ((float)iVar22 != fVar57)) {
        auVar63._4_4_ = fVar57;
        auVar63._0_4_ = fVar57;
        auVar63._8_8_ = 0;
        uVar39 = movmskps(local_2f8.MotionBlurCenteringOffsetTicks.FrameNumber.Value.Value,auVar63);
        fVar48 = (float)(int)(iVar22 - (uVar39 & 1));
      }
      fVar71 = fVar57 - fVar48;
      if (::FFrameTime::MaxSubframe <= fVar57 - fVar48) {
        fVar71 = ::FFrameTime::MaxSubframe;
      }
      if (fVar71 <= 0.0) {
        fVar71 = 0.0;
      }
      local_res8.SubFrame = fVar71;
      local_res8.FrameNumber.Value = FVar43.Value;
      (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
      FVar15.Denominator = local_2f8.TickResolution.Denominator;
      FVar15.Numerator = local_2f8.TickResolution.Numerator;
      FFrameRate::TransformTime((FFrameTime)&local_230,(FFrameRate)local_res8,FVar15);
      pUVar29 = ALevelSequenceActor::GetSequencePlayer
                          ((this->LevelSequenceActor).field0_0x0.DebugPtr);
      local_148.Frame = local_230;
      local_148.Time = 0.0;
      local_148.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.MarkedFrame.Data.ArrayNum = 0;
      local_148.MarkedFrame.Data.ArrayMax = 0;
      local_148.Timecode.Hours = 0;
      local_148.Timecode.Minutes = 0;
      local_148.Timecode.Seconds = 0;
      local_148.Timecode.Frames = 0;
      local_148.Timecode.Subframe = 0.0;
      local_148.Timecode.bDropFrameFormat = false;
      local_148.PositionType = Frame;
      local_148.UpdateMethod = Jump;
      local_148.bHasJumped = false;
      UMovieSceneSequencePlayer::SetPlaybackPosition
                ((UMovieSceneSequencePlayer *)pUVar29,&local_148);
      pFVar30 = TSharedPtr<FMoviePipelineTimeController,1>::operator->
                          (&this->CustomSequenceTimeController);
      (pFVar30->TimeCache).Time.FrameNumber.Value = FVar43.Value;
      (pFVar30->TimeCache).Time.SubFrame = fVar71;
      (pFVar30->TimeCache).Rate.Numerator = local_2f8.TickResolution.Numerator;
      (pFVar30->TimeCache).Rate.Denominator = local_2f8.TickResolution.Denominator;
      (pUVar5->ShotInfo).bHasEvaluatedMotionBlurFrame = true;
      local_1e8 = FVar43.Value;
      if (5 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint388 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint388,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                     ,0x184,L"MoviePipeline - MotionBlurEmulation");
          __BookmarkPoint388 = true;
        }
        uVar39 = CallstackTrace_GetCurrentId();
        FMiscTrace::OutputBookmark<>(uVar39,&__BookmarkPoint388);
      }
      goto LAB_14dda848f;
    }
    pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar26 = UWorld::GetWorldSettings(pUVar24,false,true);
    fVar47 = (float)(**(code **)(pAVar26->_padding_ + 0x790))(pAVar26);
    pUVar27 = FindOrAddSettingForShot<UMoviePipelineAntiAliasingSetting>(this,pUVar5);
    if (pUVar27->TemporalSampleCount == 1) {
      uVar35 = CONCAT44(local_2f8.TicksPerOutputFrame.SubFrame,
                        local_2f8.TicksPerOutputFrame.FrameNumber.Value);
    }
    else {
      local_res20._4_4_ = local_2f8.TicksWhileShutterClosed.SubFrame;
      local_res20._4_4_ = local_res20._4_4_ + local_2f8.TicksPerSample.SubFrame;
      iVar22 = (int)local_res20._4_4_;
      fVar69 = local_res20._4_4_;
      if ((iVar22 != -0x80000000) && ((float)iVar22 != local_res20._4_4_)) {
        auVar61._4_4_ = local_res20._4_4_;
        auVar61._0_4_ = local_res20._4_4_;
        auVar61._8_8_ = 0;
        uVar39 = movmskps(local_2f8.TicksWhileShutterClosed.FrameNumber.Value.Value,auVar61);
        fVar69 = (float)(int)(iVar22 - (uVar39 & 1));
      }
      fVar68 = local_res20._4_4_ - fVar69;
      if (::FFrameTime::MaxSubframe <= local_res20._4_4_ - fVar69) {
        fVar68 = ::FFrameTime::MaxSubframe;
      }
      in_XMM2 = ZEXT416((uint)fVar68);
      if (fVar68 <= 0.0) {
        in_XMM2 = ZEXT816(0) << 0x20;
      }
      local_res20 = CONCAT44(in_XMM2._0_4_,
                             ((int)ROUND((local_res20._4_4_ + local_res20._4_4_) - fVar71) >> 1) +
                             local_2f8.TicksWhileShutterClosed.FrameNumber.Value.Value +
                             local_2f8.TicksPerSample.FrameNumber.Value);
      uVar35 = local_res20;
    }
    uVar36 = uVar35;
    local_res20 = uVar35;
    if (fVar48 < (float)((uint)(fVar47 - fVar57) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_248._4_4_ = (float)(uVar35 >> 0x20);
      dVar9 = ((double)local_248._4_4_ + (double)(int)uVar35) * (double)fVar47;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = dVar9;
      in_XMM2 = roundpd(in_XMM2,auVar53,1);
      dVar49 = in_XMM2._0_8_;
      dVar50 = dVar49;
      if (dVar72 <= dVar49) {
        dVar50 = dVar72;
      }
      if (dVar50 <= dVar18) {
        dVar50 = dVar18;
      }
      uVar36 = (ulonglong)(uint)(int)dVar50;
      fVar47 = (float)(dVar9 - dVar49);
      if (::FFrameTime::MaxSubframe <= fVar47) {
        fVar47 = ::FFrameTime::MaxSubframe;
      }
      auVar54 = ZEXT416((uint)fVar47);
      if (fVar47 <= 0.0) {
        auVar54 = ZEXT816(0) << 0x20;
      }
      if (::FFrameTime::MaxSubframe <= auVar54._0_4_) {
        auVar54._0_4_ = ::FFrameTime::MaxSubframe;
      }
      if (auVar54._0_4_ <= 0.0) {
        auVar12._12_4_ = 0;
        auVar12._0_12_ = auVar54._4_12_;
        auVar54 = auVar12 << 0x20;
      }
      local_res20 = CONCAT44(auVar54._0_4_,(int)dVar50);
      local_248 = uVar35;
    }
    this->AccumulatedTickSubFrameDeltas = this->AccumulatedTickSubFrameDeltas - local_res20._4_4_;
    iVar22 = (pUVar5->ShotInfo).CurrentTickInRoot.Value;
    (pUVar5->ShotInfo).State = Rendering;
    (pUVar5->ShotInfo).CurrentTickInRoot.Value = iVar22 - (int)uVar36;
  }
  else if (EVar2 != Rendering) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                        ,0x2f7,L"");
    if (bVar19) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    goto LAB_14dda848f;
  }
  pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar26 = UWorld::GetWorldSettings(pUVar24,false,true);
  fVar47 = (float)(**(code **)(pAVar26->_padding_ + 0x790))(pAVar26);
  pUVar27 = FindOrAddSettingForShot<UMoviePipelineAntiAliasingSetting>(this,pUVar5);
  if ((pUVar27 == (UMoviePipelineAntiAliasingSetting *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("AntiAliasingSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                          ,0x195,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar22 = (this->CachedOutputState).TemporalSampleIndex;
  FVar37.FrameNumber.Value = pUVar27->TemporalSampleCount - 1;
  FVar37.SubFrame = 0.0;
  if ((int)FVar37.FrameNumber.Value <= iVar22) {
    iVar22 = -1;
  }
  iVar22 = iVar22 + 1;
  (this->CachedOutputState).TemporalSampleIndex = iVar22;
  if (pUVar27->TemporalSampleCount == 1) {
    if (iVar22 != 0) {
      FVar37.FrameNumber.Value._0_1_ =
           ::FDebug::CheckVerifyFailedImpl2
                     ("CachedOutputState.TemporalSampleIndex == 0",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                      ,0x1a6,L"");
      FVar37._1_7_ = extraout_var;
      if (FVar37.FrameNumber.Value._0_1_) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_res10.SubFrame = local_2f8.TicksPerOutputFrame.SubFrame;
    local_res10.FrameNumber.Value = local_2f8.TicksPerOutputFrame.FrameNumber.Value;
    FVar40.SubFrame = 0.0;
    FVar40.FrameNumber.Value = local_2f8.TicksPerSample.FrameNumber.Value;
LAB_14dda7c8a:
    local_2f8.TicksWhileShutterClosed = FVar37;
    FVar43 = FVar40.FrameNumber.Value;
    if (iVar22 == 0) goto LAB_14dda7c9a;
  }
  else {
    if (pUVar27->TemporalSampleCount < 2) {
      FVar37.FrameNumber.Value._0_1_ =
           ::FDebug::CheckVerifyFailedImpl2
                     ("AntiAliasingSettings->TemporalSampleCount > 1",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                      ,0x219,L"");
      FVar37._1_7_ = extraout_var_00;
      if (FVar37.FrameNumber.Value._0_1_) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FVar40.SubFrame = local_2f8.TicksPerSample.SubFrame;
    FVar40.FrameNumber.Value = local_2f8.TicksPerSample.FrameNumber.Value;
    local_res10 = FVar40;
    if (iVar22 != 0) goto LAB_14dda7c8a;
    local_res10.SubFrame = local_2f8.TicksWhileShutterClosed.SubFrame;
    local_2f8.TicksPerSample.SubFrame = local_2f8.TicksPerSample.SubFrame + local_res10.SubFrame;
    FVar43 = local_2f8.TicksWhileShutterClosed.FrameNumber.Value;
    iVar22 = (int)local_2f8.TicksPerSample.SubFrame;
    fVar69 = local_2f8.TicksPerSample.SubFrame;
    if ((iVar22 != -0x80000000) && ((float)iVar22 != local_2f8.TicksPerSample.SubFrame)) {
      auVar64._4_4_ = local_2f8.TicksPerSample.SubFrame;
      auVar64._0_4_ = local_2f8.TicksPerSample.SubFrame;
      auVar64._8_8_ = 0;
      uVar39 = movmskps(FVar43.Value,auVar64);
      local_2f8.TicksWhileShutterClosed.FrameNumber.Value = uVar39 & 1;
      local_2f8.TicksWhileShutterClosed.SubFrame = 0.0;
      fVar69 = (float)(int)(iVar22 - local_2f8.TicksWhileShutterClosed.FrameNumber.Value);
    }
    local_res8.SubFrame = local_2f8.TicksPerSample.SubFrame - fVar69;
    if (::FFrameTime::MaxSubframe <= local_2f8.TicksPerSample.SubFrame - fVar69) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    local_res8.FrameNumber.Value =
         ((int)ROUND((local_2f8.TicksPerSample.SubFrame + local_2f8.TicksPerSample.SubFrame) -
                     fVar71) >> 1) + FVar43.Value + local_2f8.TicksPerSample.FrameNumber.Value;
    local_res10 = local_res8;
LAB_14dda7c9a:
    FVar43 = FVar40.FrameNumber.Value;
    in_XMM2 = ZEXT416((uint)this->AccumulatedTickSubFrameDeltas);
    if (fVar57 <= this->AccumulatedTickSubFrameDeltas) {
      do {
        local_2f8.TicksWhileShutterClosed.FrameNumber.Value = local_res10.FrameNumber.Value + 1;
        local_2f8.TicksWhileShutterClosed.SubFrame = 0.0;
        local_res10.FrameNumber.Value =
             ((int)ROUND(local_res10.SubFrame * __real_40000000 - fVar71) >> 1) +
             local_2f8.TicksWhileShutterClosed.FrameNumber.Value;
        iVar22 = (int)local_res10.SubFrame;
        fVar69 = local_res10.SubFrame;
        if ((iVar22 != -0x80000000) && ((float)iVar22 != local_res10.SubFrame)) {
          auVar65._4_4_ = local_res10.SubFrame;
          auVar65._0_4_ = local_res10.SubFrame;
          auVar65._8_8_ = 0;
          uVar39 = movmskps(local_2f8.TicksWhileShutterClosed.FrameNumber.Value,auVar65);
          local_2f8.TicksWhileShutterClosed.FrameNumber.Value = uVar39 & 1;
          local_2f8.TicksWhileShutterClosed.SubFrame = 0.0;
          fVar69 = (float)(int)(iVar22 - local_2f8.TicksWhileShutterClosed.FrameNumber.Value);
        }
        in_XMM2._0_4_ = in_XMM2._0_4_ - fVar57;
        local_res10.SubFrame = local_res10.SubFrame - fVar69;
      } while (fVar57 <= in_XMM2._0_4_);
      this->AccumulatedTickSubFrameDeltas = in_XMM2._0_4_;
    }
  }
  FVar45 = local_res10;
  FVar44 = local_res10.FrameNumber.Value;
  local_res8.FrameNumber.Value = FVar44.Value;
  if (fVar48 < (float)((uint)(fVar47 - fVar57) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (6 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      FVar43.Value = local_2f8.TicksPerSample.FrameNumber.Value;
    }
    local_228.SubFrame = FVar45.SubFrame;
    dVar9 = ((double)FVar44.Value + (double)local_228.SubFrame) * (double)fVar47;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = dVar9;
    auVar70 = roundpd(in_XMM2,auVar55,1);
    dVar49 = auVar70._0_8_;
    dVar50 = dVar49;
    if (dVar72 <= dVar49) {
      dVar50 = dVar72;
    }
    if (dVar50 <= dVar18) {
      dVar50 = dVar18;
    }
    local_res8.FrameNumber.Value = (int)dVar50;
    fVar48 = (float)(dVar9 - dVar49);
    if (::FFrameTime::MaxSubframe <= fVar48) {
      fVar48 = ::FFrameTime::MaxSubframe;
    }
    auVar56 = ZEXT416((uint)fVar48);
    if (fVar48 <= 0.0) {
      auVar56 = ZEXT816(0) << 0x20;
    }
    if (::FFrameTime::MaxSubframe <= auVar56._0_4_) {
      auVar56._0_4_ = ::FFrameTime::MaxSubframe;
    }
    if (auVar56._0_4_ <= 0.0) {
      auVar13._12_4_ = 0;
      auVar13._0_12_ = auVar56._4_12_;
      auVar56 = auVar13 << 0x20;
    }
    local_res10.SubFrame = auVar56._0_4_;
    local_res10.FrameNumber.Value = local_res8.FrameNumber.Value;
    local_2f8.TicksWhileShutterClosed = local_res10;
    local_228 = FVar45;
  }
  FVar23 = local_2f8.TicksWhileShutterClosed.FrameNumber.Value;
  if (1 < pUVar27->TemporalSampleCount) {
    lVar28 = (longlong)
             ROUND(((double)local_res8.FrameNumber.Value + (double)local_res8.FrameNumber.Value) /
                   (double)FVar43.Value - __real_3fe0000000000000) >> 1;
    pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    iVar22 = 1;
    if (1 < lVar28) {
      iVar22 = (int)lVar28;
    }
    UE::MoviePipeline::SetSkeletalMeshClothSubSteps(iVar22,pUVar24,&this->ClothSimCache);
    FVar23.Value = extraout_EAX;
  }
  this->AccumulatedTickSubFrameDeltas = local_res10.SubFrame + this->AccumulatedTickSubFrameDeltas;
  local_res8.FrameNumber.Value =
       (pUVar5->ShotInfo).CurrentTickInRoot.Value + local_res8.FrameNumber.Value;
  (pUVar5->ShotInfo).CurrentTickInRoot.Value = local_res8.FrameNumber.Value;
  local_res18.SubFrame = local_2f8.MotionBlurCenteringOffsetTicks.SubFrame;
  iVar22 = (int)local_res18.SubFrame;
  fVar48 = local_res18.SubFrame;
  if ((iVar22 != -0x80000000) && ((float)iVar22 != local_res18.SubFrame)) {
    auVar66._4_4_ = local_res18.SubFrame;
    auVar66._0_4_ = local_res18.SubFrame;
    auVar66._8_8_ = 0;
    uVar39 = movmskps(FVar23.Value,auVar66);
    fVar48 = (float)(int)(iVar22 - (uVar39 & 1));
  }
  fVar69 = local_res18.SubFrame + local_res18.SubFrame;
  fVar57 = local_res18.SubFrame - fVar48;
  if (::FFrameTime::MaxSubframe <= local_res18.SubFrame - fVar48) {
    fVar57 = ::FFrameTime::MaxSubframe;
  }
  if (fVar57 <= 0.0) {
    fVar57 = 0.0;
  }
  local_res18.SubFrame = local_2f8.ShutterOffsetTicks.SubFrame;
  fVar57 = fVar57 + local_res18.SubFrame;
  iVar22 = ((int)ROUND((fVar57 + fVar57) - fVar71) >> 1) +
           local_2f8.MotionBlurCenteringOffsetTicks.FrameNumber.Value.Value;
  local_res18.FrameNumber.Value =
       ((int)ROUND(fVar69 - fVar71) >> 1) + iVar22 + local_res8.FrameNumber.Value +
       local_2f8.ShutterOffsetTicks.FrameNumber.Value.Value;
  iVar41 = (int)fVar57;
  fVar48 = fVar57;
  if ((iVar41 != -0x80000000) && ((float)iVar41 != fVar57)) {
    auVar67._4_4_ = fVar57;
    auVar67._0_4_ = fVar57;
    auVar67._8_8_ = 0;
    uVar39 = movmskps(iVar22,auVar67);
    fVar48 = (float)(int)(iVar41 - (uVar39 & 1));
  }
  local_res18.SubFrame = fVar57 - fVar48;
  if (::FFrameTime::MaxSubframe <= fVar57 - fVar48) {
    local_res18.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_res18.SubFrame <= 0.0) {
    local_res18.SubFrame = 0.0;
  }
  if (6 < (byte)LogMovieRenderPipeline._0_1_) {
    uStack_284 = 0;
    local_220 = (ulonglong)(uint)local_res18.FrameNumber.Value;
    local_288 = local_res18.FrameNumber.Value;
    ::FString::PrintfImpl(&local_1d8,L"Frame: %d Subframe: %f");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  pUVar29 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr);
  bVar19 = UMovieSceneSequencePlayer::IsPlaying((UMovieSceneSequencePlayer *)pUVar29);
  FVar46 = local_res18;
  if (!bVar19) {
    (**(code **)(((this->TargetSequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
    FVar16.Denominator = local_2f8.TickResolution.Denominator;
    FVar16.Numerator = local_2f8.TickResolution.Numerator;
    FFrameRate::TransformTime((FFrameTime)&local_1a8,(FFrameRate)FVar46,FVar16);
    pUVar29 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr)
    ;
    local_108.Frame = local_1a8;
    local_108.Time = 0.0;
    local_108.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Timecode.Seconds = 0;
    local_108.Timecode.Frames = 0;
    local_108.Timecode.Subframe = 0.0;
    local_108.Timecode.bDropFrameFormat = false;
    local_108.bHasJumped = false;
    local_108.MarkedFrame.Data.ArrayNum = 0;
    local_108.MarkedFrame.Data.ArrayMax = 0;
    local_108.Timecode.Hours = 0;
    local_108.Timecode.Minutes = 0;
    local_108.PositionType = Frame;
    local_108.UpdateMethod = Jump;
    UMovieSceneSequencePlayer::SetPlaybackPosition((UMovieSceneSequencePlayer *)pUVar29,&local_108);
    pUVar29 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr)
    ;
    UMovieSceneSequencePlayer::Play((UMovieSceneSequencePlayer *)pUVar29);
  }
  FVar43.Value = local_res10.FrameNumber.Value;
  if (local_res10.FrameNumber.Value == 0) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      ::FString::PrintfImpl(&local_1b8,L"Frame: %d Subframe: %f");
      ::FString::PrintfImpl(&local_1c8,L"Frame: %d Subframe: %f");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    local_280 = 1;
    uStack_27c = 0;
    local_res10.FrameNumber.Value = 1;
    local_res10.SubFrame = 0.0;
    FVar43.Value = 1;
  }
  local_278 = local_res10.FrameNumber.Value;
  uStack_274 = 0;
  local_208 = (ulonglong)local_res10 & 0xffffffff;
  (this->CachedOutputState).TimeData.TimeDilation = fVar47;
  dVar72 = ((double)((longlong)local_2f8.TickResolution.Denominator * (longlong)FVar43.Value) +
           (double)local_2f8.TickResolution.Denominator * 0.0) /
           (double)local_2f8.TickResolution.Numerator;
  (this->CachedOutputState).TimeData.FrameDeltaTime = dVar72;
  (this->CachedOutputState).TimeData.WorldSeconds =
       dVar72 + (this->CachedOutputState).TimeData.WorldSeconds;
  (this->CachedOutputState).TimeData.MotionBlurFraction =
       (float)(local_2f8.ShutterAnglePercentage / (double)pUVar27->TemporalSampleCount);
  CalculateFrameNumbersForOutputState(this,&local_2f8,pUVar5,&this->CachedOutputState);
  pFVar38 = TRange<FFrameNumber>::GetUpperBoundValue(&(pUVar5->ShotInfo).TotalOutputRangeRoot);
  if (pFVar38->Value <= (pUVar5->ShotInfo).CurrentTickInRoot.Value) {
    ProcessEndOfCameraCut(this,pUVar5);
    if (this->PipelineState != ProducingFrames) goto LAB_14dda848f;
    (this->CachedOutputState).TemporalSampleIndex = -1;
    TickProducingFrames(this);
  }
  if ((this->CachedOutputState).TemporalSampleIndex == 0) {
    piVar1 = &(pUVar5->ShotInfo).WorkMetrics.OutputFrameIndex;
    *piVar1 = *piVar1 + 1;
    (pUVar5->ShotInfo).WorkMetrics.OutputSubSampleIndex = -1;
    (this->CachedOutputState).OutputFrameNumber = (this->CachedOutputState).OutputFrameNumber + 1;
    piVar1 = &(this->CachedOutputState).ShotOutputFrameNumber;
    *piVar1 = *piVar1 + 1;
  }
  pUVar32 = GetPipelinePrimaryConfig(this);
  pUVar33 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)pUVar32,false);
  uStack_26c = 0;
  iVar22 = pUVar33->OutputFrameStep;
  if (iVar22 < 1) {
    iVar22 = 1;
  }
  (this->CachedOutputState).bSkipRendering =
       (pUVar33->DEBUG_OutputFrameStepOffset + (this->CachedOutputState).OutputFrameNumber) % iVar22
       != 0;
  local_200 = (ulonglong)FVar45 & 0xffffffff;
  local_1f8.UndilatedDeltaTime =
       ((double)((longlong)FVar44.Value * (longlong)local_2f8.TickResolution.Denominator) +
       (double)local_2f8.TickResolution.Denominator * 0.0) /
       (double)local_2f8.TickResolution.Numerator;
  local_270 = FVar44.Value;
  UMoviePipelineCustomTimeStep::SetCachedFrameTiming
            ((this->CustomTimeStep).field0_0x0.DebugPtr,&local_1f8);
  pFVar30 = TSharedPtr<FMoviePipelineTimeController,1>::operator->
                      (&this->CustomSequenceTimeController);
  FVar17.Denominator = local_2f8.TickResolution.Denominator;
  FVar17.Numerator = local_2f8.TickResolution.Numerator;
  (pFVar30->TimeCache).Time = FVar46;
  (pFVar30->TimeCache).Rate = FVar17;
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint753 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint753,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineTiming.cpp"
                 ,0x2f1,L"MoviePipeline - Rendering Frame %d");
      __BookmarkPoint753 = true;
    }
    iVar22 = (this->CachedOutputState).EffectiveFrameNumber;
    uVar39 = CallstackTrace_GetCurrentId();
    FMiscTrace::OutputBookmark<int>(uVar39,&__BookmarkPoint753,iVar22);
  }
LAB_14dda848f:
  ScopeExitSupport::TScopeGuard<`UMoviePipeline::TickProducingFrames'::__l2::<lambda_1>_>::
  ~TScopeGuard<_UMoviePipeline::TickProducingFrames_::__l2::<lambda_1>_>(&local_1f0);
  return;
}

// operator() @ 15058dd70

bool __thiscall `UMoviePipeline::Initialize'::__l21::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7424115317783134092>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424115317783134092>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058df30

bool __thiscall `UMoviePipeline::Initialize'::__l24::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7424115317783134086>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424115317783134086>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058dfb0

bool __thiscall `UMoviePipeline::TransitionToState'::__l58::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7424115317783133623>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424115317783133623>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15058e010

bool __thiscall `UMoviePipeline::Initialize'::__l74::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7424115317783134057>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424115317783134057>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e090

bool __thiscall `UMoviePipeline::Initialize'::__l77::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7424115317783134050>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424115317783134050>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e110

bool __thiscall `UMoviePipeline::Initialize'::__l80::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7424115317783134041>);
  if (bVar2) {
    FSoftObjectPath::ToString((FSoftObjectPath *)(**(longlong **)this + 0x38),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424115317783134041>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058e17e;
    }
  }
  bVar2 = false;
LAB_15058e17e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15058ee60

bool __thiscall `UMoviePipeline::TickProducingFrames'::__l84::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7776464195544940781>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7776464195544940781>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

