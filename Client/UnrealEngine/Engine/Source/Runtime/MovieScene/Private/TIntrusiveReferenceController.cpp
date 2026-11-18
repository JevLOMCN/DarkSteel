// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 32

// DestroyObject @ 14612c390

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FGatherTimes>,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TAnonTaskWrapper<UE::MovieScene::FGatherTimes>,1>
              *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14612c3b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14612c3d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14612c3f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14612c410

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MovieScene::FInitialValueCache,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieScene::FInitialValueCache,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14612c450

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MovieScene::FSharedPlaybackState,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieScene::FSharedPlaybackState,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res8 [32];
  
  if ((this->ObjectStorage).Pad[0x70] != '\0') {
    `UE::MovieScene::FSharedPlaybackState::~FSharedPlaybackState'::__l5::<lambda_1>::operator()
              (local_res8);
  }
  FMovieSceneInstancePreAnimatedState::~FMovieSceneInstancePreAnimatedState
            ((FMovieSceneInstancePreAnimatedState *)((this->ObjectStorage).Pad + 0x60));
  UE::MovieScene::FPlaybackCapabilities::~FPlaybackCapabilities
            ((FPlaybackCapabilities *)((this->ObjectStorage).Pad + 0x38));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014612c4a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14612c4c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::MovieScene::FSystemTaskPrerequisites,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieScene::FSystemTaskPrerequisites,1> *this)

{
  UE::MovieScene::FSystemTaskPrerequisites::~FSystemTaskPrerequisites
            ((FSystemTaskPrerequisites *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14612c4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneEntitySystemRunner,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneEntitySystemRunner,1> *this)

{
  FMovieSceneEntitySystemRunner::~FMovieSceneEntitySystemRunner
            ((FMovieSceneEntitySystemRunner *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14612c4e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTrackInstancePropertyBindings,1>::
DestroyObject(TIntrusiveReferenceController<FTrackInstancePropertyBindings,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14619e520

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TMemberFunctionTaskWrapper<UMovieSceneTrackInstanceSystem>,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieScene::TMemberFunctionTaskWrapper<UMovieSceneTrackInstanceSystem>,1>
                *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 14619e540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieScene::FAnimTypePreAnimatedStateObjectStorage,1>
              *this)

{
  UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14619e550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1>::DestroyObject
          (TIntrusiveReferenceController<UE::MovieScene::FAnimTypePreAnimatedStateRootStorage,1>
           *this)

{
  UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
  ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14619e560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedObjectGroupManager,1>::DestroyObject
          (TIntrusiveReferenceController<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *this)

{
  UE::MovieScene::TPreAnimatedStateGroupManager<FObjectKey>::
  ~TPreAnimatedStateGroupManager<FObjectKey>
            ((TPreAnimatedStateGroupManager<FObjectKey> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14620e7e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneBlendingAccumulator,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneBlendingAccumulator,1> *this)

{
  FMovieSceneBlendingAccumulator::~FMovieSceneBlendingAccumulator
            ((FMovieSceneBlendingAccumulator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14620e7f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneChannelProxy,1>::DestroyObject
          (TIntrusiveReferenceController<FMovieSceneChannelProxy,1> *this)

{
  FMovieSceneChannelProxy::~FMovieSceneChannelProxy((FMovieSceneChannelProxy *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14620e800

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneEvaluationState,1>::DestroyObject
          (TIntrusiveReferenceController<FMovieSceneEvaluationState,1> *this)

{
  FMovieSceneEvaluationState::~FMovieSceneEvaluationState
            ((FMovieSceneEvaluationState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14620e810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_AudioClock,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneTimeController_AudioClock,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMovieSceneTimeController__6B_;
  return;
}

// DestroyObject @ 14620e830

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_Custom,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneTimeController_Custom,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMovieSceneTimeController__6B_;
  return;
}

// DestroyObject @ 14620e860

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_PlatformClock,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneTimeController_PlatformClock,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMovieSceneTimeController__6B_;
  return;
}

// DestroyObject @ 14620e880

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_PlayEveryFrame,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneTimeController_PlayEveryFrame,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMovieSceneTimeController__6B_;
  return;
}

// DestroyObject @ 14620e8a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMovieSceneTimeController_RelativeTimecodeClock,1>::DestroyObject
          (TIntrusiveReferenceController<FMovieSceneTimeController_RelativeTimecodeClock,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMovieSceneTimeController__6B_;
  return;
}

// DestroyObject @ 14620e8c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_Tick,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneTimeController_Tick,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMovieSceneTimeController__6B_;
  return;
}

// DestroyObject @ 14620e8e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneTimeController_TimecodeClock,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneTimeController_TimecodeClock,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMovieSceneTimeController__6B_;
  return;
}

// DestroyObject @ 1462abc60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleStringTask,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>,1>
::DestroyObject(void *this)

{
  *(undefined ***)((longlong)this + 0x10) = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 1462abc80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleTask,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<double>_>,1>
::DestroyObject(void *this)

{
  *(undefined ***)((longlong)this + 0x10) = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 1462abca0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatStringTask,UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>,1>
::DestroyObject(void *this)

{
  *(undefined ***)((longlong)this + 0x10) = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 1462abcc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatTask,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<float>_>,1>
::DestroyObject(void *this)

{
  *(undefined ***)((longlong)this + 0x10) = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 1462abce0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FIntTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>,1>
::DestroyObject(void *this)

{
  *(undefined ***)((longlong)this + 0x10) = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 1462abd00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInt32Actuator,1>::DestroyObject
          (TIntrusiveReferenceController<FInt32Actuator,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMovieSceneBlendingActuator__6B_;
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001462abd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 1462abd60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMyTask,1>::DestroyObject
          (TIntrusiveReferenceController<FMyTask,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ITaskContext_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 1462abd80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::Tests::FTestInvalidatableCapability,1>::DestroyObject
          (TIntrusiveReferenceController<UE::MovieScene::Tests::FTestInvalidatableCapability,1>
           *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IPlaybackCapability_MovieScene_UE__6B_;
  return;
}

// DestroyObject @ 1462abda0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieScene::Tests::FTestSimpleCapability,1>::DestroyObject
          (TIntrusiveReferenceController<UE::MovieScene::Tests::FTestSimpleCapability,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed =
       UE::MovieScene::Tests::FTestSimpleCapability::TimesDestroyed + 1;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

