// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 162

// StaticClass @ 1461e8c50

UClass * __cdecl UMovieSceneSequencePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequencePlayer",
               &Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequencePlayer,0x4b0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSequencePlayer>,
               InternalVTableHelperCtorCaller<UMovieSceneSequencePlayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton;
}

// UMovieSceneSequencePlayer @ 1461fe110

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSequencePlayer * __thiscall
UMovieSceneSequencePlayer::UMovieSceneSequencePlayer
          (UMovieSceneSequencePlayer *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  (this->PlaybackSettings).bAutoPlay = 0;
  (this->PlaybackSettings).bRandomStartTime = 0;
  (this->PlaybackSettings).bDisableCameraCuts = 0;
  (this->PlaybackSettings).bHideHud = 0;
  (this->PlaybackSettings).bHidePlayer = 0;
  (this->PlaybackSettings).bDisableLookAtInput = 0;
  (this->PlaybackSettings).bDisableMovementInput = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->Observer = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  *(undefined8 *)&(this->Observer).field_0x8 = 0;
  *(undefined8 *)&this->OnPlay = 0;
  puVar2 = &(this->PlaybackSettings).field_0x24;
  (this->PlaybackSettings).bPauseAtEnd = 0;
  (this->PlaybackSettings).bDynamicWeighting = 0;
  (this->PlaybackSettings).bInheritTickIntervalFromOwner = 1;
  *(undefined8 *)&(this->OnPlay).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlay).field_0x10 = 0;
  *(undefined8 *)&this->OnPlayReverse = 0;
  *(undefined8 *)&(this->OnPlayReverse).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayReverse).field_0x10 = 0;
  *(undefined8 *)&this->OnStop = 0;
  *(undefined8 *)&(this->OnStop).field_0x8 = 0;
  *(undefined8 *)&(this->OnStop).field_0x10 = 0;
  *(undefined8 *)&this->OnPause = 0;
  *(undefined8 *)&(this->OnPause).field_0x8 = 0;
  *(undefined8 *)&(this->OnPause).field_0x10 = 0;
  *(undefined8 *)&this->OnFinished = 0;
  *(undefined8 *)&(this->OnFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnNativeFinished = 0;
  *(undefined8 *)&(this->OnNativeFinished).field_0x8 = 0;
  *(undefined4 *)&(this->OnNativeFinished).field_0x10 = 0;
  (this->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  (this->StartTime).Value = 0;
  (this->PlaybackSettings).LoopCount = 0;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = 0.0;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = 0.0;
  (this->PlaybackSettings).TickInterval.bTickWhenPaused = false;
  (this->PlaybackSettings).TickInterval.bAllowRounding = true;
  (this->PlaybackSettings).PlayRate = 1.0;
  (this->PlaybackSettings).StartTime = 0.0;
  (this->PlaybackSettings).FinishCompletionStateOverride = None;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  (this->PlayPosition).InputRate.Numerator = 0;
  (this->PlayPosition).InputRate.Denominator = 0;
  (this->PlayPosition).OutputRate.Numerator = 0;
  (this->PlayPosition).OutputRate.Denominator = 0;
  (this->PlayPosition).EvaluationType = WithSubFrames;
  (this->PlayPosition).CurrentPosition.FrameNumber = 0;
  (this->PlayPosition).CurrentPosition.SubFrame = 0.0;
  (this->PlayPosition).PreviousPlayEvalPosition.bIsSet = false;
  (this->PlayPosition).LastRange.bIsSet = false;
  (this->SpawnRegister).Object = (FMovieSceneSpawnRegister *)0x0;
  (this->SpawnRegister).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SequenceWeights).Ptr = (FSequenceWeights *)0x0;
  (this->ServerTimeSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerTimeSamples).ArrayNum = 0;
  (this->ServerTimeSamples).ArrayMax = 0;
  this->LastEffectiveTimeDilation = 1.0;
  (this->NetSyncProps).LastKnownPosition.FrameNumber = 0;
  (this->NetSyncProps).LastKnownPosition.SubFrame = 0.0;
  (this->NetSyncProps).LastKnownStatus.Value = '\0';
  (this->NetSyncProps).LastKnownNumLoops = 0;
  (this->NetSyncProps).LastKnownSerialNumber = 0;
  *(undefined8 *)&this->PlaybackClient = 0;
  *(undefined8 *)&(this->PlaybackClient).field_0x8 = 0;
  (this->TickManager).field0_0x0.DebugPtr = (UMovieSceneSequenceTickManager *)0x0;
  (this->LatentActionManager).LatentActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatentActionManager).LatentActions.ArrayNum = 0;
  (this->LatentActionManager).LatentActions.ArrayMax = 0;
  (this->LatentActionManager).bIsRunningLatentActions = false;
  (this->TimeController).Object = (FMovieSceneTimeController *)0x0;
  (this->TimeController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SynchronousRunner).Object = (FMovieSceneEntitySystemRunner *)0x0;
  (this->SynchronousRunner).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIgnorePlaybackReplication = false;
  *(undefined8 *)&this->OnMovieSceneSequencePlayerUpdate = 0;
  *(undefined8 *)&(this->OnMovieSceneSequencePlayerUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMovieSceneSequencePlayerUpdate).field_0x10 = 0;
  *(undefined8 *)&(this->OnMovieSceneSequencePlayerUpdate).field_0x18 = 2;
  (this->RegisteredTickInterval).bIsSet = false;
  (this->OldMaxTickRate).bIsSet = false;
  this->bOverridingDynResFrameTimeBudget = false;
  (this->LastTickGameTimeSeconds).bIsSet = false;
  (this->PauseOnFrame).bIsSet = false;
  (this->PreEvaluationCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreEvaluationCallbacks).ArrayNum = 0;
  (this->PreEvaluationCallbacks).ArrayMax = 0;
  (this->PostEvaluationCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostEvaluationCallbacks).ArrayNum = 0;
  (this->PostEvaluationCallbacks).ArrayMax = 0;
  return this;
}

// UMovieSceneSequencePlayer @ 1461fe360

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneSequencePlayer * __thiscall
UMovieSceneSequencePlayer::UMovieSceneSequencePlayer
          (UMovieSceneSequencePlayer *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FMovieScenePlaybackPosition *this_00;
  uint uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  this->bIsAsyncUpdate = 0;
  this->bUpdateNetSync = 0;
  this->bSkipNextUpdate = 0;
  this->bReversePlayback = 0;
  this->bPendingOnStartedPlaying = 0;
  this->bWarnZeroDuration = 1;
  (this->PlaybackSettings).bAutoPlay = 0;
  (this->PlaybackSettings).bRandomStartTime = 0;
  (this->PlaybackSettings).bDisableCameraCuts = 0;
  (this->PlaybackSettings).bHideHud = 0;
  (this->PlaybackSettings).bHidePlayer = 0;
  (this->PlaybackSettings).bDisableLookAtInput = 0;
  (this->PlaybackSettings).bDisableMovementInput = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  *(undefined8 *)&this->Observer = 0;
  *(undefined8 *)&(this->Observer).field_0x8 = 0;
  puVar2 = &(this->PlaybackSettings).field_0x24;
  (this->PlaybackSettings).bPauseAtEnd = 0;
  (this->PlaybackSettings).bDynamicWeighting = 0;
  (this->PlaybackSettings).bInheritTickIntervalFromOwner = 1;
  *(undefined8 *)&this->OnPlay = 0;
  *(undefined8 *)&(this->OnPlay).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlay).field_0x10 = 0;
  *(undefined8 *)&this->OnPlayReverse = 0;
  *(undefined8 *)&(this->OnPlayReverse).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayReverse).field_0x10 = 0;
  *(undefined8 *)&this->OnStop = 0;
  *(undefined8 *)&(this->OnStop).field_0x8 = 0;
  *(undefined8 *)&(this->OnStop).field_0x10 = 0;
  *(undefined8 *)&this->OnPause = 0;
  *(undefined8 *)&(this->OnPause).field_0x8 = 0;
  *(undefined8 *)&(this->OnPause).field_0x10 = 0;
  *(undefined8 *)&this->OnFinished = 0;
  *(undefined8 *)&(this->OnFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnNativeFinished = 0;
  *(undefined8 *)&(this->OnNativeFinished).field_0x8 = 0;
  *(undefined4 *)&(this->OnNativeFinished).field_0x10 = 0;
  (this->Status).Value = '\0';
  this->TimeControllerState = ReadyToPlay;
  (this->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  this->StartTime = 0;
  this->DurationFrames = 0;
  this->DurationSubFrames = 0.0;
  this->CurrentNumLoops = 0;
  this->SerialNumber = 0;
  (this->PlaybackSettings).LoopCount = 0;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = 0.0;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = 0.0;
  (this->PlaybackSettings).TickInterval.bTickWhenPaused = false;
  (this->PlaybackSettings).TickInterval.bAllowRounding = true;
  (this->PlaybackSettings).PlayRate = 1.0;
  (this->PlaybackSettings).StartTime = 0.0;
  (this->PlaybackSettings).FinishCompletionStateOverride = None;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  this_00 = &this->PlayPosition;
  this->CurrentRunner = (FMovieSceneEntitySystemRunner *)0x0;
  (this_00->InputRate).Numerator = 0;
  (this_00->InputRate).Denominator = 0;
  (this->PlayPosition).OutputRate.Numerator = 0;
  (this->PlayPosition).OutputRate.Denominator = 0;
  (this->PlayPosition).EvaluationType = WithSubFrames;
  (this->PlayPosition).CurrentPosition.FrameNumber = 0;
  (this->PlayPosition).CurrentPosition.SubFrame = 0.0;
  (this->PlayPosition).PreviousPlayEvalPosition.bIsSet = false;
  (this->PlayPosition).LastRange.bIsSet = false;
  (this->SpawnRegister).Object = (FMovieSceneSpawnRegister *)0x0;
  (this->SpawnRegister).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SequenceWeights).Ptr = (FSequenceWeights *)0x0;
  (this->ServerTimeSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerTimeSamples).ArrayNum = 0;
  (this->ServerTimeSamples).ArrayMax = 0;
  this->LastEffectiveTimeDilation = 1.0;
  (this->NetSyncProps).LastKnownPosition.FrameNumber = 0;
  (this->NetSyncProps).LastKnownPosition.SubFrame = 0.0;
  (this->NetSyncProps).LastKnownStatus.Value = '\0';
  (this->NetSyncProps).LastKnownNumLoops = 0;
  (this->NetSyncProps).LastKnownSerialNumber = 0;
  *(undefined8 *)&this->PlaybackClient = 0;
  *(undefined8 *)&(this->PlaybackClient).field_0x8 = 0;
  (this->TickManager).field0_0x0.DebugPtr = (UMovieSceneSequenceTickManager *)0x0;
  (this->LatentActionManager).LatentActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatentActionManager).LatentActions.ArrayNum = 0;
  (this->LatentActionManager).LatentActions.ArrayMax = 0;
  (this->LatentActionManager).bIsRunningLatentActions = false;
  (this->TimeController).Object = (FMovieSceneTimeController *)0x0;
  (this->TimeController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SynchronousRunner).Object = (FMovieSceneEntitySystemRunner *)0x0;
  (this->SynchronousRunner).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bIgnorePlaybackReplication = false;
  *(undefined8 *)&this->OnMovieSceneSequencePlayerUpdate = 0;
  *(undefined8 *)&(this->OnMovieSceneSequencePlayerUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnMovieSceneSequencePlayerUpdate).field_0x10 = 0;
  *(undefined8 *)&(this->OnMovieSceneSequencePlayerUpdate).field_0x18 = 2;
  (this->RegisteredTickInterval).bIsSet = false;
  (this->OldMaxTickRate).bIsSet = false;
  this->bOverridingDynResFrameTimeBudget = false;
  (this->LastTickGameTimeSeconds).bIsSet = false;
  (this->PauseOnFrame).bIsSet = false;
  (this->PreEvaluationCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreEvaluationCallbacks).ArrayNum = 0;
  (this->PreEvaluationCallbacks).ArrayMax = 0;
  (this->PostEvaluationCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostEvaluationCallbacks).ArrayNum = 0;
  (this->PostEvaluationCallbacks).ArrayMax = 0;
  FMovieScenePlaybackPosition::Reset(this_00,(FFrameTime)0x0);
  (this->NetSyncProps).LastKnownStatus.Value = (this->Status).Value;
  (this->NetSyncProps).LastKnownPosition.FrameNumber = 0;
  (this->NetSyncProps).LastKnownPosition.SubFrame = 0.0;
  return this;
}

// ~UMovieSceneSequencePlayer @ 1461ffd90

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

void __thiscall
UMovieSceneSequencePlayer::~UMovieSceneSequencePlayer(UMovieSceneSequencePlayer *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FSequenceWeights *this_00;
  IConsoleManager *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSequenceTickManagerClient__;
  if ((GEngine != (UEngine *)0x0) && ((this->OldMaxTickRate).bIsSet != false)) {
    (**(code **)(GEngine->_padding_ + 800))(GEngine,(float)(this->OldMaxTickRate).TypedValue);
  }
  if (this->bOverridingDynResFrameTimeBudget != false) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar3 = IConsoleManager::Get();
        CVarDynResFrameTimeBudget =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.DynamicRes.FrameTimeBudget",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    (**(code **)(*(longlong *)CVarDynResFrameTimeBudget + 0xb8))
              (CVarDynResFrameTimeBudget,0xe000000,0);
    this->bOverridingDynResFrameTimeBudget = false;
  }
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->PostEvaluationCallbacks).AllocatorInstance.Data,
             (this->PostEvaluationCallbacks).ArrayNum);
  pFVar1 = (this->PostEvaluationCallbacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->PreEvaluationCallbacks).AllocatorInstance.Data,
             (this->PreEvaluationCallbacks).ArrayNum);
  pFVar1 = (this->PreEvaluationCallbacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMovieSceneSequencePlayerUpdate).field_0x8,
             *(int *)&(this->OnMovieSceneSequencePlayerUpdate).field_0x10);
  pvVar2 = *(void **)&(this->OnMovieSceneSequencePlayerUpdate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMovieSceneSequencePlayerUpdate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SynchronousRunner).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TimeController).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             (this->LatentActionManager).LatentActions.AllocatorInstance.Data,
             (this->LatentActionManager).LatentActions.ArrayNum);
  pFVar1 = (this->LatentActionManager).LatentActions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ServerTimeSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->SequenceWeights).Ptr;
  if (this_00 != (FSequenceWeights *)0x0) {
    UE::MovieScene::FSequenceWeights::~FSequenceWeights(this_00);
    ::operator_delete(this_00,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpawnRegister).SharedReferenceCount.ReferenceController);
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNativeFinished);
  pvVar2 = *(void **)&(this->OnFinished).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinished);
  pvVar2 = *(void **)&(this->OnPause).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPause);
  pvVar2 = *(void **)&(this->OnStop).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStop);
  pvVar2 = *(void **)&(this->OnPlayReverse).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlayReverse);
  pvVar2 = *(void **)&(this->OnPlay).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlay);
  this->_padding_ = (longlong)&___7IMovieSceneSequenceTickManagerClient__6B_;
  IMovieScenePlayer::~IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146200bc0

void __thiscall
`UMovieSceneSequencePlayer::UpdateServerTimeSamples'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)this;
  if (**(float **)((longlong)this + 8) != *(float *)(lVar2 + 0x3c0)) {
    lVar3 = *(longlong *)(lVar2 + 0x3b0);
    iVar1 = *(int *)(lVar2 + 0x3b8);
    lVar4 = (longlong)iVar1 * 0x10 + lVar3;
    while( true ) {
      if (*(int *)(lVar2 + 0x3b8) != iVar1) {
        `TCheckedPointerIterator<UMovieSceneSequencePlayer::FServerTimeSample,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar3 == lVar4) break;
      *(double *)(lVar3 + 8) =
           **(double **)((longlong)this + 0x10) -
           ((**(double **)((longlong)this + 0x10) - *(double *)(lVar3 + 8)) *
            (double)**(float **)((longlong)this + 0x18) *
           (double)*(float *)(*(longlong *)this + 0x3c0)) /
           (double)(**(float **)((longlong)this + 0x18) * **(float **)((longlong)this + 8));
      lVar3 = lVar3 + 0x10;
    }
    *(undefined4 *)(*(longlong *)this + 0x3c0) = **(undefined4 **)((longlong)this + 8);
  }
  return;
}

// operator() @ 1462012f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UMovieSceneSequencePlayer::Pause'::__l29::<lambda_1>::operator()(void *this)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FUObjectItem *pFVar7;
  FString local_38;
  FReadAccessScope local_28;
  
  UMovieSceneSequencePlayer::RunLatentActions(*(UMovieSceneSequencePlayer **)this);
  this_00 = *(UObjectBaseUtility **)this;
  pUVar5 = Z_Construct_UClass_AActor_NoRegister();
  pUVar6 = UObjectBaseUtility::GetTypedOuter(this_00,pUVar5);
  if ((pUVar6 != (UObject *)0x0) && (*(char *)(pUVar6 + 9) == '\x03')) {
    if ((this_00 == (UObjectBaseUtility *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((*(uint *)&this_00->field_0x8 >> 0x1e & 1) == 0) &&
       (pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc),
       ((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      *(undefined8 *)&this_00[0x18].field_0x4 = *(undefined8 *)&this_00[0x15].field_0xc;
      this_00[0x18].field_0xc = this_00[0x11].field_0x18;
      *(undefined4 *)&this_00[0x18].field_0x10 = *(undefined4 *)&this_00[0x12].field_0x14;
      *(undefined4 *)&this_00[0x18].field_0x14 = *(undefined4 *)&this_00[0x12].field_0x18;
    }
  }
  UMovieSceneSequencePlayer::GetSequenceName(*(UMovieSceneSequencePlayer **)this,&local_38,true);
  if (5 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x278),&local_28);
  iVar1 = *(int *)(lVar2 + 0x288);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x278),
               (void *)0x0);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 146201450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall `UMovieSceneSequencePlayer::StopInternal'::__l29::<lambda_1>::operator()(void *this)

{
  int iVar1;
  UObjectBaseUtility *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FUObjectItem *pFVar8;
  UFunction *pUVar9;
  IConsoleManager *pIVar10;
  undefined8 local_48;
  int local_40;
  FString local_38;
  FReadAccessScope local_28;
  
  if (*(char *)(*(longlong *)this + 0x468) != '\0') {
    (**(code **)(GEngine->_padding_ + 800))(GEngine,(float)*(double *)(*(longlong *)this + 0x460));
    if (*(char *)(*(longlong *)this + 0x468) != '\0') {
      *(undefined1 *)(*(longlong *)this + 0x468) = 0;
    }
  }
  if (*(char *)(*(longlong *)this + 0x470) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar10 = IConsoleManager::Get();
      CVarDynResFrameTimeBudget =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"r.DynamicRes.FrameTimeBudget",1);
      _Init_thread_footer(&::_TSS0);
    }
    (**(code **)(*(longlong *)CVarDynResFrameTimeBudget + 0xb8))
              (CVarDynResFrameTimeBudget,0xe000000,0);
    *(undefined1 *)(*(longlong *)this + 0x470) = 0;
  }
  pUVar2 = *(UObjectBaseUtility **)this;
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter(pUVar2,pUVar6);
  if ((pUVar7 != (UObject *)0x0) && (*(char *)(pUVar7 + 9) == '\x03')) {
    if ((pUVar2 == (UObjectBaseUtility *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) &&
       (pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
       ((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      *(undefined8 *)&pUVar2[0x18].field_0x4 = *(undefined8 *)&pUVar2[0x15].field_0xc;
      pUVar2[0x18].field_0xc = pUVar2[0x11].field_0x18;
      *(undefined4 *)&pUVar2[0x18].field_0x10 = *(undefined4 *)&pUVar2[0x12].field_0x14;
      *(undefined4 *)&pUVar2[0x18].field_0x14 = *(undefined4 *)&pUVar2[0x12].field_0x18;
    }
  }
  UMovieSceneSequencePlayer::GetSequenceName(*(UMovieSceneSequencePlayer **)this,&local_38,true);
  if (5 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  pUVar2 = *(UObjectBaseUtility **)this;
  pUVar6 = Z_Construct_UClass_AActor_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter(pUVar2,pUVar6);
  if ((pUVar7 != (UObject *)0x0) && (*(char *)(pUVar7 + 9) == '\x03')) {
    if ((pUVar2 == (UObjectBaseUtility *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) &&
       (pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
       ((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      pUVar7 = *(UObject **)this;
      local_48 = *(undefined8 *)((longlong)this + 8);
      local_40 = *(int *)&pUVar7[0x12].field_0x18 + 1;
      pUVar9 = UObject::FindFunctionChecked(pUVar7,NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent);
      (**(code **)(*(longlong *)pUVar7 + 0x260))(pUVar7,pUVar9,&local_48);
    }
  }
  (**(code **)(**(longlong **)this + 0x2f0))();
  lVar3 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x260),&local_28);
  iVar1 = *(int *)(lVar3 + 0x270);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x260),
               (void *)0x0);
  }
  UMovieSceneSequencePlayer::RunLatentActions(*(UMovieSceneSequencePlayer **)this);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// AdvanceClientSerialNumberTo @ 146206f30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::AdvanceClientSerialNumberTo(UMovieSceneSequencePlayer *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 != (UObject *)0x0) && (*(char *)(pUVar4 + 9) == '\x03')) {
    if ((this == (UMovieSceneSequencePlayer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
        (pFVar5 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
        ((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
       (bVar2 = `UMovieSceneSequencePlayer::AdvanceClientSerialNumberTo'::__l3::<lambda_1>::
                operator()(local_res18), !bVar2)) {
      return;
    }
  }
  if ((param_1 < this->SerialNumber) &&
     (bVar2 = `UMovieSceneSequencePlayer::AdvanceClientSerialNumberTo'::__l6::<lambda_2>::operator()
                        (local_res20), !bVar2)) {
    return;
  }
  this->SerialNumber = param_1;
  return;
}

// AsUObject @ 1462083f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UMovieSceneSequencePlayer::AsUObject(UMovieSceneSequencePlayer *this)

{
  return (UObject *)&this[-1].PauseOnFrame.bIsSet;
}

// BeginDestroy @ 1462084f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::BeginDestroy(UMovieSceneSequencePlayer *this)

{
  FMovieSceneRootEvaluationTemplateInstance::TearDown(&this->RootTemplateInstance);
  TearDown(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CallRemoteFunction @ 14620a3d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovieSceneSequencePlayer::CallRemoteFunction
          (UMovieSceneSequencePlayer *this,UFunction *param_1,void *param_2,FOutParmRec *param_3,
          FFrame *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  AActor *this_00;
  UNetDriver *pUVar5;
  
  if (((this->_padding_ & 0x10) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAnyFlags(RF_ClassDefaultObject)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                         ,0x8aa,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  this_00 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if ((this_00 != (AActor *)0x0) &&
     (pUVar5 = AActor::GetNetDriver(this_00), pUVar5 != (UNetDriver *)0x0)) {
    (**(code **)(pUVar5->_padding_ + 0x350))(pUVar5,this_00,param_1,param_2,param_3,param_4,this);
    return true;
  }
  return false;
}

// CanPlay @ 14620ab50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::CanPlay(UMovieSceneSequencePlayer *this)

{
  return true;
}

// ChangePlaybackDirection @ 14620abb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::ChangePlaybackDirection(UMovieSceneSequencePlayer *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UMovieSceneSequencePlayer *local_res8;
  FDelegateAllocation local_18;
  
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if (bVar1) {
    local_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = ChangePlaybackDirection;
      puVar2[5] = (ulonglong)(uint)local_18._12_4_ << 0x20;
    }
    QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                            *)&local_18);
    return;
  }
  *(uint *)&this->field_0x2c4 = *(uint *)&this->field_0x2c4 ^ 1;
  PlayInternal(this);
  return;
}

// ConstructEntitySystemLinker @ 14620be60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
UMovieSceneSequencePlayer::ConstructEntitySystemLinker(UMovieSceneSequencePlayer *this)

{
  UMovieSceneSequenceTickManager *this_00;
  code *pcVar1;
  bool bVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  UObject *pUVar4;
  
  this_00 = *(UMovieSceneSequenceTickManager **)&this->LastEffectiveTimeDilation;
  if ((this_00 == (UMovieSceneSequenceTickManager *)0x0) ||
     ((this->OnMovieSceneSequencePlayerUpdate).field_0x4 == '\0')) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2283531826637044871>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                       ,0x379,"TickManager && RegisteredTickInterval.IsSet()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMovieSceneEntitySystemLinker *)(*pcVar1)();
      return pUVar3;
    }
  }
  else if ((*(byte *)(*(longlong *)&this->OnNativeFinished + 0x6b) & 2) == 0) {
    if ((this->OnMovieSceneSequencePlayerUpdate).field_0x4 == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UMovieSceneEntitySystemLinker *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = UMovieSceneSequenceTickManager::GetLinker
                       (this_00,(FMovieSceneSequenceTickInterval *)&this->bIgnorePlaybackReplication
                       );
    return pUVar3;
  }
  pUVar4 = (UObject *)(**(code **)(this->_padding_ + 0x80))(this);
  pUVar3 = UMovieSceneEntitySystemLinker::CreateLinker(pUVar4,Standalone);
  return pUVar3;
}

// FinishPlaybackInternal @ 146213010

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::FinishPlaybackInternal
          (UMovieSceneSequencePlayer *this,FFrameTime param_1)

{
  int iVar1;
  FMovieSceneTimeController *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FFrameTime local_48;
  FFrameRate local_40;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((this->PlaybackSettings).bPauseAtEnd == 0) {
    StopInternal(this,param_1);
  }
  else {
    Pause(this);
  }
  if ((this->TimeController).Object == (FMovieSceneTimeController *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48 = (this->PlayPosition).CurrentPosition;
  pFVar2 = (this->TimeController).Object;
  local_40 = (this->PlayPosition).InputRate;
  if (6 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,&local_48);
  if ((pFVar2->PlaybackStartTime).bIsSet != false) {
    (pFVar2->PlaybackStartTime).bIsSet = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnFinished,&local_38);
  iVar1 = *(int *)&(this->OnFinished).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (0 < iVar1) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFinished,(void *)0x0
              );
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNativeFinished,
             &local_20);
  if ((*(int *)&(this->OnNativeFinished).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnNativeFinished).field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  return;
}

// GetBoundObjects @ 146216fb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneSequencePlayer::GetBoundObjects
          (UMovieSceneSequencePlayer *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMovieSceneObjectBindingID *param_1)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar7;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FWeakObjectPtr *pFVar9;
  FWeakObjectPtr local_res8;
  UObject *local_68;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_60;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_50;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  pTVar7 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_40);
  if ((pTVar7->Object == (FSharedPlaybackState *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  pFVar1 = pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  (pTVar7->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7->Object = (FSharedPlaybackState *)0x0;
  if ((pFVar1 == (FSharedPlaybackState *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60.Object = pFVar1;
  local_60.SharedReferenceCount.ReferenceController = pTVar2;
  FMovieSceneObjectBindingID::ResolveBoundObjects
            (param_1,&local_50,(FMovieSceneSequenceID)0x0,&local_60);
  pFVar9 = &(local_50.DataPtr)->WeakPtr;
  do {
    if (pFVar9 == &local_50.DataPtr[local_50.ArrayNum].WeakPtr) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return __return_storage_ptr__;
    }
    local_res8 = *pFVar9;
    local_68 = FWeakObjectPtr::Get(&local_res8);
    if (local_68 != (UObject *)0x0) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_68;
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// GetCompletionModeOverride @ 146217370

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EMovieSceneCompletionModeOverride __thiscall
UMovieSceneSequencePlayer::GetCompletionModeOverride(UMovieSceneSequencePlayer *this)

{
  return (this->PlaybackSettings).FinishCompletionStateOverride;
}

// GetCurrentTime @ 146217680

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FQualifiedFrameTime * __thiscall
UMovieSceneSequencePlayer::GetCurrentTime
          (UMovieSceneSequencePlayer *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  __return_storage_ptr__->Time = (this->PlayPosition).CurrentPosition;
  __return_storage_ptr__->Rate = (this->PlayPosition).InputRate;
  return __return_storage_ptr__;
}

// GetDisplayRate @ 146218200

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFrameRate __thiscall UMovieSceneSequencePlayer::GetDisplayRate(UMovieSceneSequencePlayer *this)

{
  UMovieSceneSequence *pUVar1;
  longlong lVar2;
  FFrameRate in_RDX;
  
  pUVar1 = (this->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x2f8))();
    if (lVar2 != 0) {
      lVar2 = (**(code **)(((this->Sequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
      *(undefined8 *)in_RDX = *(undefined8 *)(lVar2 + 0x140);
      return in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0x10000ea60;
  return in_RDX;
}

// GetDuration @ 146218280

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FQualifiedFrameTime * __thiscall
UMovieSceneSequencePlayer::GetDuration
          (UMovieSceneSequencePlayer *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  FFrameTime FVar1;
  float fVar2;
  
  fVar2 = this->DurationSubFrames;
  if (::FFrameTime::MaxSubframe <= this->DurationSubFrames) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  FVar1.SubFrame = fVar2;
  FVar1.FrameNumber.Value = this->DurationFrames;
  __return_storage_ptr__->Time = FVar1;
  __return_storage_ptr__->Rate = (this->PlayPosition).InputRate;
  return __return_storage_ptr__;
}

// GetEvaluationTemplate @ 146218790

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneRootEvaluationTemplateInstance * __thiscall
UMovieSceneSequencePlayer::GetEvaluationTemplate(UMovieSceneSequencePlayer *this)

{
  return (FMovieSceneRootEvaluationTemplateInstance *)&(this->PlaybackSettings).LoopCount;
}

// GetFrameDuration @ 1462189d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UMovieSceneSequencePlayer::GetFrameDuration(UMovieSceneSequencePlayer *this)

{
  return this->DurationFrames;
}

// GetFunctionCallspace @ 1462189e0

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

int __thiscall
UMovieSceneSequencePlayer::GetFunctionCallspace
          (UMovieSceneSequencePlayer *this,UFunction *param_1,FFrame *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->_padding_ & 0x10) != 0) {
    iVar3 = UEngine::GetGlobalFunctionCallspace(GEngine,param_1,(UObject *)this,param_2);
    return iVar3;
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuter()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                       ,0x8a4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146218a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x268))
                    ((longlong *)this->_padding_,param_1,param_2);
  return iVar3;
}

// GetHideHud @ 146218ae0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::GetHideHud(UMovieSceneSequencePlayer *this)

{
  return (this->PlaybackSettings).bHideHud;
}

// GetLastValidTime @ 146218cd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFrameTime __thiscall UMovieSceneSequencePlayer::GetLastValidTime(UMovieSceneSequencePlayer *this)

{
  int iVar1;
  int iVar2;
  FFrameTime in_RDX;
  float fVar3;
  
  iVar1 = this->DurationFrames;
  if (iVar1 < 1) {
    *(int *)in_RDX = (this->StartTime).Value;
    *(int *)((longlong)in_RDX + 4) = 0;
    return in_RDX;
  }
  fVar3 = this->DurationSubFrames;
  iVar2 = (this->StartTime).Value;
  if (0.0 < fVar3) {
    if (::FFrameTime::MaxSubframe <= fVar3) {
      fVar3 = ::FFrameTime::MaxSubframe;
    }
    *(int *)in_RDX = iVar1 + iVar2;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)((longlong)in_RDX + 4) = fVar3;
    return in_RDX;
  }
  fVar3 = ::FFrameTime::MaxSubframe;
  if (__real_3f800000 <= ::FFrameTime::MaxSubframe) {
    fVar3 = __real_3f800000;
  }
  *(int *)in_RDX = iVar1 + -1 + iVar2;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)((longlong)in_RDX + 4) = fVar3;
  return in_RDX;
}

// GetLifetimeReplicatedProps @ 146218f60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::GetLifetimeReplicatedProps
          (UMovieSceneSequencePlayer *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18 [2];
  FDoRepLifetimeParams local_38;
  
  UObject::GetLifetimeReplicatedProps((UObject *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0xc,L"NetSyncProps",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x10,L"bReversePlayback",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,9,L"StartTime",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0xe,L"DurationFrames",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x11,L"DurationSubFrames",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,0x10,L"PlaybackSettings",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38._0_8_ = (void *)0x0;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(local_res18,8,L"Observer",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_38);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  return;
}

// GetObjectBindings @ 146219c50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneSequencePlayer::GetObjectBindings
          (UMovieSceneSequencePlayer *this,
          TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *pTVar6;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  FMovieSceneEvaluationState::FilterObjectBindings
            ((FMovieSceneEvaluationState *)&this->_padding_,param_1,&local_38,__return_storage_ptr__
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetObserver @ 146219f10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TScriptInterface<IMovieSceneSequencePlayerObserver> * __thiscall
UMovieSceneSequencePlayer::GetObserver
          (UMovieSceneSequencePlayer *this,
          TScriptInterface<IMovieSceneSequencePlayerObserver> *__return_storage_ptr__)

{
  UObject *pUVar1;
  
  pUVar1 = (UObject *)this->_padding_;
  *(UObject **)__return_storage_ptr__ = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(longlong *)&__return_storage_ptr__->field_0x8 = this->_padding_;
  return __return_storage_ptr__;
}

// GetPauseRange @ 14621a370

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TRange<FFrameTime>_> * __thiscall
UMovieSceneSequencePlayer::GetPauseRange
          (UMovieSceneSequencePlayer *this,TOptional<TRange<FFrameTime>_> *__return_storage_ptr__,
          FFrameTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber FVar3;
  uint uVar4;
  TOptional<TRange<FFrameTime>_> *pTVar5;
  FFrameNumber FVar6;
  int iVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 local_res8;
  FFrameTime local_res20;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a0;
  FFrameNumber FStack_9c;
  float fStack_98;
  undefined4 local_94;
  FFrameNumber FStack_90;
  float fStack_8c;
  TRange<FFrameTime> local_88;
  FFrameTime local_70;
  undefined1 local_68 [4];
  undefined8 uStack_64;
  undefined1 local_5c [4];
  undefined8 local_58;
  float fStack_48;
  undefined4 uStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_30;
  undefined4 uStack_2c;
  FFrameNumber FStack_28;
  float fStack_24;
  
  if (((this->Status).Value == '\x01') && ((this->PauseOnFrame).bIsSet != false)) {
    ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)(this->PauseOnFrame).TypedValue.Time,
                     (this->PlayPosition).InputRate);
    ConvertFrameTime((FFrameTime)&local_res20,(FFrameRate)(this->PlayPosition).CurrentPosition,
                     (this->PlayPosition).InputRate);
    ConvertFrameTime((FFrameTime)&local_70,(FFrameRate)*param_1,(this->PlayPosition).InputRate);
    bVar2 = (this->PauseOnFrame).bIsSet;
    if (this->bReversePlayback == 0) {
      if ((bVar2 == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TOptional<TRange<FFrameTime>_> *)(*pcVar1)();
        return pTVar5;
      }
      if ((this->PauseOnFrame).TypedValue.bExclusive == false) {
        iVar7 = (int)local_res8._4_4_;
        fVar9 = local_res8._4_4_;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != local_res8._4_4_)) {
          auVar11._4_4_ = local_res8._4_4_;
          auVar11._0_4_ = local_res8._4_4_;
          auVar11._8_8_ = 0;
          uVar4 = movmskps((int)local_res8,auVar11);
          fVar9 = (float)(int)(iVar7 - (uVar4 & 1));
        }
        local_5c[0] = 0;
        puVar8 = (undefined8 *)local_5c;
        fVar12 = local_res8._4_4_ - fVar9;
        if (::FFrameTime::MaxSubframe <= local_res8._4_4_ - fVar9) {
          fVar12 = ::FFrameTime::MaxSubframe;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_res8 = CONCAT44(fVar12,((int)ROUND((local_res8._4_4_ + local_res8._4_4_) -
                                                 __real_3f000000) >> 1) + 1 + (int)local_res8);
        local_58 = local_res8;
      }
      else {
        local_68[0] = 0;
        puVar8 = (undefined8 *)local_68;
        uStack_64 = local_res8;
      }
      FStack_90 = local_res20.FrameNumber.Value;
      fStack_8c = local_res20.SubFrame;
      uStack_2c = (undefined4)*puVar8;
      FStack_28.Value = (int)((ulonglong)*puVar8 >> 0x20);
      fStack_30 = fStack_8c;
      local_88.UpperBound._0_4_ = uStack_2c;
      local_88.LowerBound.Value.SubFrame = fStack_8c;
      fStack_24 = *(float *)(puVar8 + 1);
      local_94 = CONCAT31(local_94._1_3_,1);
      local_88.LowerBound.Value.FrameNumber.Value = FStack_90.Value;
      local_88.LowerBound._0_4_ = local_94;
      local_res20.SubFrame = fStack_24;
      local_res20.FrameNumber.Value = FStack_28.Value;
    }
    else {
      FStack_9c = local_res20.FrameNumber.Value;
      fStack_98 = local_res20.SubFrame;
      local_a0 = CONCAT31(local_a0._1_3_,1);
      if ((bVar2 == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TOptional<TRange<FFrameTime>_> *)(*pcVar1)();
        return pTVar5;
      }
      FVar3.Value = (int)local_res8;
      if ((this->PauseOnFrame).TypedValue.bExclusive == false) {
        local_ac = CONCAT31(local_ac._1_3_,1);
        local_88.LowerBound.Value.FrameNumber.Value = FVar3.Value;
        local_88.LowerBound._0_4_ = local_ac;
        fStack_48 = local_res8._4_4_;
      }
      else {
        FVar6.Value = ((int)ROUND((local_res8._4_4_ + local_res8._4_4_) - __real_3f000000) >> 1) + 1
                      + FVar3.Value;
        iVar7 = (int)local_res8._4_4_;
        fVar9 = local_res8._4_4_;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != local_res8._4_4_)) {
          auVar10._4_4_ = local_res8._4_4_;
          auVar10._0_4_ = local_res8._4_4_;
          auVar10._8_8_ = 0;
          uVar4 = movmskps(FVar3.Value,auVar10);
          fVar9 = (float)(int)(iVar7 - (uVar4 & 1));
        }
        local_b8 = CONCAT31(local_b8._1_3_,1);
        fStack_48 = local_res8._4_4_ - fVar9;
        if (::FFrameTime::MaxSubframe <= local_res8._4_4_ - fVar9) {
          fStack_48 = ::FFrameTime::MaxSubframe;
        }
        if (fStack_48 <= 0.0) {
          fStack_48 = 0.0;
        }
        local_res8 = CONCAT44(fStack_48,FVar6.Value);
        local_88.LowerBound.Value.FrameNumber.Value = FVar6.Value;
        local_88.LowerBound._0_4_ = local_b8;
      }
      uStack_44 = local_a0;
      iStack_40 = FStack_9c.Value;
      local_88.UpperBound._0_4_ = local_a0;
      local_88.LowerBound.Value.SubFrame = fStack_48;
      fStack_3c = fStack_98;
    }
    local_88.UpperBound.Value = local_res20;
    bVar2 = TRange<FFrameTime>::Contains(&local_88,&local_70);
    if (!bVar2) {
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->TypedValue).LowerBound.Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)local_88.LowerBound.Type.Value;
      *(undefined3 *)&(__return_storage_ptr__->TypedValue).LowerBound.field_0x1 =
           local_88.LowerBound._1_3_;
      (__return_storage_ptr__->TypedValue).LowerBound.Value.FrameNumber =
           (FFrameNumber)local_88.LowerBound.Value.FrameNumber.Value;
      *(undefined8 *)&(__return_storage_ptr__->TypedValue).LowerBound.Value.SubFrame =
           local_88._8_8_;
      (__return_storage_ptr__->TypedValue).UpperBound.Value = local_88.UpperBound.Value;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetPauseTimeForNewPosition @ 14621a660

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FFrameTime> * __thiscall
UMovieSceneSequencePlayer::GetPauseTimeForNewPosition
          (UMovieSceneSequencePlayer *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FFrameTime> *pTVar3;
  TOptional<TRange<FFrameTime>_> local_28;
  
  GetPauseRange(this,&local_28,param_1);
  if (local_28.bIsSet == false) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  if (this->bReversePlayback != 0) {
    if (local_28.TypedValue.LowerBound.Type.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TOptional<FFrameTime> *)(*pcVar1)();
        return pTVar3;
      }
    }
    __return_storage_ptr__->TypedValue = local_28.TypedValue.LowerBound.Value;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  if (local_28.TypedValue.UpperBound.Type.Value == '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOptional<FFrameTime> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->TypedValue = local_28.TypedValue.UpperBound.Value;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPing @ 14621a740

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UMovieSceneSequencePlayer::GetPing(UMovieSceneSequencePlayer *this)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x38) != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x100), lVar2 != 0)) &&
       ((lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0 &&
        (lVar2 = *(longlong *)(lVar2 + 0x2c8), lVar2 != 0)))) {
      if (this->bReversePlayback != 0) {
        return __real_bf800000 * *(float *)(lVar2 + 0x308);
      }
      return __real_3f800000 * *(float *)(lVar2 + 0x308);
    }
  }
  return 0.0;
}

// GetPlayRate @ 14621a7e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UMovieSceneSequencePlayer::GetPlayRate(UMovieSceneSequencePlayer *this)

{
  return (this->PlaybackSettings).PlayRate;
}

// GetPlaybackClient @ 14621ab20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IMovieScenePlaybackClient * __thiscall
UMovieSceneSequencePlayer::GetPlaybackClient(UMovieSceneSequencePlayer *this)

{
  longlong lVar1;
  
  if (((this->ServerTimeSamples).AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
     (lVar1._0_4_ = (this->ServerTimeSamples).ArrayNum,
     lVar1._4_4_ = (this->ServerTimeSamples).ArrayMax, lVar1 != 0)) {
    return *(IMovieScenePlaybackClient **)&(this->ServerTimeSamples).ArrayNum;
  }
  return (IMovieScenePlaybackClient *)0x0;
}

// GetPlaybackStatus @ 14621afd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall UMovieSceneSequencePlayer::GetPlaybackStatus(UMovieSceneSequencePlayer *this)

{
  return (Type)(byte)(this->OnFinished).field_0x8;
}

// GetPlaybackWorld @ 14621afe0

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

UWorld * __thiscall UMovieSceneSequencePlayer::GetPlaybackWorld(UMovieSceneSequencePlayer *this)

{
  longlong *plVar1;
  UWorld *pUVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014621b008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UWorld *)(**(code **)(*plVar1 + 0x180))(plVar1,*(code **)(*plVar1 + 0x180));
    return pUVar2;
  }
  return (UWorld *)0x0;
}

// GetPrivateStaticClass @ 14621be60

UClass * __cdecl UMovieSceneSequencePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequencePlayer",
               &Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequencePlayer,0x4b0,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSequencePlayer>,
               InternalVTableHelperCtorCaller<UMovieSceneSequencePlayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequencePlayer.InnerSingleton;
}

// GetSequenceName @ 14621ce90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UMovieSceneSequencePlayer::GetSequenceName
          (UMovieSceneSequencePlayer *this,FString *__return_storage_ptr__,bool param_1)

{
  UMovieSceneSequence *pUVar1;
  ENetMode EVar2;
  UClass *pUVar3;
  AActor *this_00;
  UWorld *pUVar4;
  wchar_t *pwVar5;
  int iVar6;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pUVar1 = (this->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    if (param_1) {
      pUVar3 = Z_Construct_UClass_AActor_NoRegister();
      this_00 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
      if (this_00 != (AActor *)0x0) {
        pUVar4 = AActor::GetWorld(this_00);
        if (pUVar4 != (UWorld *)0x0) {
          pUVar4 = AActor::GetWorld(this_00);
          EVar2 = UWorld::InternalGetNetMode(pUVar4);
          if (EVar2 == NM_Client) {
            UE::GetPlayInEditorID();
            ::FString::PrintfImpl(&local_18,L" (client %d)");
            iVar6 = local_18.Data.ArrayNum + -1;
            if (local_18.Data.ArrayNum == 0) {
              iVar6 = 0;
            }
            ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar6);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  pwVar5 = ::LexToString(None);
  ::FString::FString(__return_storage_ptr__,pwVar5);
  return __return_storage_ptr__;
}

// GetSpawnRegister @ 14621d530

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneSpawnRegister * __thiscall
UMovieSceneSequencePlayer::GetSpawnRegister(UMovieSceneSequencePlayer *this)

{
  FMovieSceneSpawnRegister *pFVar1;
  
  pFVar1 = *(FMovieSceneSpawnRegister **)
            &(this->PlayPosition).LastRange.TypedValue.EvaluationRange.LowerBound.Value.SubFrame;
  if (pFVar1 == (FMovieSceneSpawnRegister *)0x0) {
    pFVar1 = (FMovieSceneSpawnRegister *)&this->_padding_;
  }
  return pFVar1;
}

// GetTimeController @ 14621d6e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMovieSceneTimeController,1> * __thiscall
UMovieSceneSequencePlayer::GetTimeController
          (UMovieSceneSequencePlayer *this,
          TSharedPtr<FMovieSceneTimeController,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->TimeController).Object;
  pTVar1 = (this->TimeController).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetViewportSettings @ 14621dd10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::GetViewportSettings
          (UMovieSceneSequencePlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

// GoToEndAndStop @ 14621dd20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::GoToEndAndStop(UMovieSceneSequencePlayer *this)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  float fVar3;
  FFrameTime local_res8;
  FMovieSceneSequencePlaybackParams local_48;
  
  local_res8.FrameNumber.Value = (this->StartTime).Value;
  if (this->DurationFrames < 1) {
    local_res8.SubFrame = 0.0;
  }
  else {
    local_res8.SubFrame = this->DurationSubFrames;
    local_res8.FrameNumber.Value = local_res8.FrameNumber.Value + this->DurationFrames;
    if (local_res8.SubFrame <= 0.0) {
      local_res8.FrameNumber.Value = local_res8.FrameNumber.Value + -1;
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
      if (__real_3f800000 <= ::FFrameTime::MaxSubframe) {
        local_res8.SubFrame = __real_3f800000;
      }
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
    }
    else {
      if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
        local_res8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
    }
  }
  fVar3 = local_res8.SubFrame;
  FVar1 = (this->PlayPosition).CurrentPosition;
  FVar2 = local_res8;
  if (((FVar1.FrameNumber.Value.Value != local_res8.FrameNumber.Value) ||
      (local_res8.SubFrame = FVar1.SubFrame, local_res8.SubFrame != fVar3)) ||
     ((this->Status).Value != '\0')) {
    (this->Status).Value = '\x01';
    local_48.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Timecode.Seconds = 0;
    local_48.Timecode.Frames = 0;
    local_48.Timecode.Subframe = 0.0;
    local_48.MarkedFrame.Data.ArrayNum = 0;
    local_48.MarkedFrame.Data.ArrayMax = 0;
    local_48.Timecode.Hours = 0;
    local_48.Timecode.Minutes = 0;
    local_48.Timecode.bDropFrameFormat = false;
    local_48.bHasJumped = false;
    local_48.Frame = FVar2;
    local_48.Time = 0.0;
    local_48.PositionType = Frame;
    local_48.UpdateMethod = Jump;
    SetPlaybackPosition(this,&local_48);
    StopInternal(this,FVar2);
  }
  return;
}

// HasAuthority @ 14621de40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::HasAuthority(UMovieSceneSequencePlayer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if ((pUVar5 != (UObject *)0x0) && (*(char *)(pUVar5 + 9) == '\x03')) {
    if (this == (UMovieSceneSequencePlayer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
      pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4))
      ;
      if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
        return true;
      }
    }
  }
  return false;
}

// HasDynamicWeighting @ 14621dfb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::HasDynamicWeighting(UMovieSceneSequencePlayer *this)

{
  return (bool)((byte)((uint)this->SerialNumber >> 2) & 1);
}

// Initialize @ 14621f8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::Initialize(UMovieSceneSequencePlayer *this,UMovieSceneSequence *param_1)

{
  longlong *plVar1;
  int *piVar2;
  EMovieSceneEvaluationType EVar3;
  int iVar4;
  undefined1 *puVar5;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *pTVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  FFrameRate FVar10;
  FFrameRate FVar11;
  TRangeBound<FFrameNumber> TVar12;
  bool bVar13;
  UMovieScene *this_00;
  FText *pFVar14;
  FFrameTime FVar15;
  UObject *pUVar16;
  TSharedPtr<FMovieSceneTimeController,1> *pTVar17;
  TSharedRef<FMovieSceneTimeController_Tick,1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  FSharedReferencer<1> FVar20;
  UMovieSceneSequenceTickManager *pUVar21;
  UClass *pUVar22;
  ulonglong *puVar23;
  UMovieSceneCompiledDataManager *pUVar24;
  FUObjectItem *pFVar25;
  int iVar26;
  ulonglong uVar27;
  char cVar28;
  UMovieSceneSequencePlayer *pUVar29;
  TOptional<FMovieSceneSequenceTickInterval> *pTVar30;
  uint uVar31;
  longlong lVar32;
  EUpdateClockSource EVar33;
  FMovieSceneTimeController *pFVar34;
  undefined1 *puVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FFrameRate local_res20;
  FFrameTime local_2a8;
  ulonglong local_2a0;
  undefined4 local_298;
  FFrameRate local_290;
  FMovieSceneSequenceTickInterval local_288;
  TRangeBound<FFrameNumber> local_278;
  undefined4 uStack_270;
  int iStack_26c;
  FFrameRate local_268;
  FFrameRate local_260;
  FMovieSceneTimeController *local_258;
  FSharedReferencer<1> FStack_250;
  FMovieSceneTimeController *local_248;
  FSharedReferencer<1> FStack_240;
  FMovieSceneTimeController *local_238;
  FSharedReferencer<1> FStack_230;
  FMovieSceneTimeController *local_228;
  FSharedReferencer<1> FStack_220;
  FMovieSceneTimeController *local_218;
  FSharedReferencer<1> FStack_210;
  uint local_208;
  undefined4 uStack_204;
  uint local_200;
  undefined4 uStack_1fc;
  int local_1f8;
  float local_1f4;
  uint local_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  FMovieSceneTimeController_Tick *local_1d0;
  FSharedReferencer<1> local_1c8;
  FMovieSceneTimeController_Tick *local_1c0;
  FSharedReferencer<1> local_1b8;
  FName local_1b0;
  ulonglong local_1a8;
  undefined4 local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FQualifiedFrameTime local_168;
  UMovieSceneSequencePlayer *local_158;
  longlong *local_150;
  UMovieSceneSequencePlayer *local_148;
  longlong *local_140;
  UMovieSceneSequencePlayer *local_138;
  longlong *local_130;
  undefined1 local_128 [8];
  ulonglong local_120;
  undefined8 local_118;
  ulonglong local_110;
  ulonglong local_108;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  TSharedPtr<FMovieSceneTimeController,1> local_a0;
  TSharedRef<FMovieSceneTimeController_Tick,1> local_90;
  TSharedRef<FMovieSceneTimeController_Tick,1> local_80 [4];
  
  if ((param_1 == (UMovieSceneSequence *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSequence",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                          ,0x398,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar13 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if ((bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsEvaluating()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                          ,0x399,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->Sequence).field0_0x0.DebugPtr != (UMovieSceneSequence *)0x0) {
    StopInternal(this,(this->PlayPosition).CurrentPosition);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Sequence).field0_0x0.DebugPtr = param_1;
  EVar33 = Tick;
  local_2a8.SubFrame = 0.0;
  local_2a8.FrameNumber.Value = (this->StartTime).Value;
  this_00 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  if (this_00 != (UMovieScene *)0x0) {
    local_290 = this_00->TickResolution;
    EVar3 = this_00->EvaluationType;
    local_res20 = this_00->DisplayRate;
    if (5 < (byte)LogMovieScene._0_1_) {
      pFVar14 = FFrameRate::ToPrettyText(&local_res20,&local_f0);
      FText::ToString(pFVar14);
      pFVar14 = FFrameRate::ToPrettyText(&local_290,&local_100);
      FText::ToString(pFVar14);
      local_1b0 = (FName)param_1->_padding_;
      ::FName::ToString(&local_1b0,&local_198);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
    }
    lVar32 = 0;
    if ((local_290.Denominator < 1) || (local_290.Numerator < 1)) {
      GetSequenceName(this,&local_188,true);
      local_268.Numerator = 60000;
      local_268.Denominator = 1;
      if (1 < (byte)LogMovieScene._0_1_) {
        pFVar14 = FFrameRate::ToPrettyText(&local_268,&local_d0);
        FText::ToString(pFVar14);
        pFVar14 = FFrameRate::ToPrettyText(&local_290,&local_e0);
        FText::ToString(pFVar14);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
        }
      }
      local_290.Denominator = local_268.Denominator;
      local_290.Numerator = local_268.Numerator;
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    if ((local_res20.Denominator < 1) || (local_res20.Numerator < 1)) {
      GetSequenceName(this,&local_178,true);
      local_260.Numerator = 0x1e;
      local_260.Denominator = 1;
      if (1 < (byte)LogMovieScene._0_1_) {
        pFVar14 = FFrameRate::ToPrettyText(&local_260,&local_b0);
        FText::ToString(pFVar14);
        pFVar14 = FFrameRate::ToPrettyText(&local_res20,&local_c0);
        FText::ToString(pFVar14);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_c0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
        }
        if (local_b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
        }
      }
      local_res20.Denominator = local_260.Denominator;
      local_res20.Numerator = local_260.Numerator;
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    FMovieScenePlaybackPosition::SetTimeBase(&this->PlayPosition,local_res20,local_290,EVar3);
    iVar26 = (this_00->PlaybackRange).Value.LowerBound.Value.Value;
    local_278 = (this_00->PlaybackRange).Value.LowerBound;
    uStack_270 = *(undefined4 *)&(this_00->PlaybackRange).Value.UpperBound;
    iVar9 = (this_00->PlaybackRange).Value.UpperBound.Value.Value;
    cVar28 = (char)*(undefined4 *)&(this_00->PlaybackRange).Value.LowerBound;
    iStack_26c = iVar9;
    if ((cVar28 == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InLowerBound.IsOpen()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                            ,0x2c,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (cVar28 == '\0') {
      lVar32 = 4;
    }
    iVar4 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar32);
    if ((cVar28 == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar31 = iVar26 + iVar4;
    cVar28 = (char)uStack_270;
    if ((cVar28 == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InUpperBound.IsOpen()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                            ,0x44,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar8 = 0;
    if (cVar28 == '\x01') {
      uVar8 = 4;
    }
    iVar26 = *(int *)((longlong)
                      &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                       ::__l2::Offsets + (ulonglong)uVar8);
    if ((cVar28 == '\x02') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_204 = 0;
    local_208 = iVar9 + iVar26;
    FVar10.Denominator = 0;
    FVar10.Numerator = local_208;
    ConvertFrameTime((FFrameTime)&local_1f8,FVar10,local_290);
    uStack_1fc = 0;
    FVar11.Denominator = 0;
    FVar11.Numerator = uVar31;
    local_200 = uVar31;
    FVar15 = ConvertFrameTime((FFrameTime)local_128,FVar11,local_290);
    auVar37 = ZEXT416((uint)local_1f4);
    SetFrameRange(this,*(int *)FVar15,local_1f8 - *(int *)FVar15,local_1f4);
    dVar39 = ((double)(this->PlaybackSettings).StartTime * (double)local_res20.Numerator) /
             (double)local_res20.Denominator;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = dVar39;
    auVar41 = roundpd(auVar37,auVar41,1);
    dVar40 = auVar41._0_8_;
    dVar39 = dVar39 - dVar40;
    if (__real_41dfffffffc00000 <= dVar40) {
      dVar40 = __real_41dfffffffc00000;
    }
    if (dVar40 <= __real_c1e0000000000000) {
      dVar40 = __real_c1e0000000000000;
    }
    iVar26 = (int)dVar39;
    local_2a8.FrameNumber.Value = (int)dVar40 + iVar26;
    local_2a8.SubFrame = (float)dVar39 - (float)iVar26;
    if ((0.0 < local_2a8.SubFrame) && (::FFrameTime::MaxSubframe <= local_2a8.SubFrame)) {
      local_2a8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= local_2a8.SubFrame) {
      local_2a8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_2a8.SubFrame <= 0.0) {
      local_2a8.SubFrame = 0.0;
    }
    if ((this->PlaybackSettings).bRandomStartTime == 0) {
      local_1e8 = this->DurationFrames - 1;
      uStack_1e4 = 0;
      local_120 = (ulonglong)local_1e8;
      local_1e0 = 0;
      local_110._0_4_ = local_2a8.FrameNumber.Value;
      local_110._4_4_ = local_2a8.SubFrame;
      if ((local_2a8.FrameNumber.Value < (int)local_1e8) ||
         ((local_2a8.FrameNumber.Value == local_1e8 && (local_2a8.SubFrame < 0.0)))) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      local_118 = 0;
      local_108 = local_120;
      if (bVar13) {
        local_108 = (ulonglong)local_2a8;
      }
      if ((0 < (int)local_108) ||
         (((int)local_108 == 0 &&
          (local_2a8.SubFrame = (float)(local_108 >> 0x20), 0.0 < local_2a8.SubFrame)))) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      uVar27 = 0;
      if (bVar13) {
        uVar27 = local_108;
      }
    }
    else {
      iVar26 = rand();
      local_1f0 = iVar26 % this->DurationFrames;
      uStack_1ec = 0;
      uVar27 = (ulonglong)local_1f0;
    }
    local_1d8 = (this->StartTime).Value;
    uStack_1d4 = 0;
    local_278.Type.Value = (char)uVar27;
    local_278._1_3_ = (int3)(uVar27 >> 8);
    local_278.Value.Value = (int)(uVar27 >> 0x20);
    TVar12 = local_278;
    local_278.Value.Value = (int)(uVar27 >> 0x20);
    fVar38 = (float)local_278.Value.Value + 0.0;
    local_2a8.FrameNumber.Value =
         ((int)ROUND((fVar38 + fVar38) - __real_3f000000) >> 1) + local_1d8 + (int)uVar27;
    iVar26 = (int)fVar38;
    fVar36 = fVar38;
    if ((iVar26 != -0x80000000) && ((float)iVar26 != fVar38)) {
      auVar37._4_4_ = fVar38;
      auVar37._0_4_ = fVar38;
      auVar37._8_8_ = 0;
      uVar31 = movmskps(local_2a8.FrameNumber.Value,auVar37);
      fVar36 = (float)(int)(iVar26 - (uVar31 & 1));
    }
    EVar33 = this_00->ClockSource;
    local_2a8.SubFrame = fVar38 - fVar36;
    if (::FFrameTime::MaxSubframe <= fVar38 - fVar36) {
      local_2a8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_2a8.SubFrame <= 0.0) {
      local_2a8.SubFrame = 0.0;
    }
    local_278 = TVar12;
    if (EVar33 == Custom) {
      pUVar16 = (UObject *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_);
      pTVar17 = UMovieScene::MakeCustomTimeController(this_00,&local_a0,pUVar16);
      if (&this->TimeController != pTVar17) {
        (this->TimeController).Object = pTVar17->Object;
        pTVar17->Object = (FMovieSceneTimeController *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TimeController).SharedReferenceCount,&pTVar17->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
    }
  }
  pTVar17 = &this->TimeController;
  if (pTVar17->Object == (FMovieSceneTimeController *)0x0) {
    if (EVar33 == Platform) {
      FVar20.ReferenceController = ::operator_new(0x60);
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      if (FVar20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_238 = ___xmm_00000000000000000000000000000010;
        pFVar34 = (FMovieSceneTimeController *)&DAT_00000010;
        FVar20.ReferenceController = _UNK_150651568;
      }
      else {
        (FVar20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        pFVar34 = (FMovieSceneTimeController *)(FVar20.ReferenceController + 1);
        (FVar20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (FVar20.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_PlatformClock___00_SharedPointerInternals__6B_
        ;
        FVar20.ReferenceController[1]._padding_ = 0;
        FVar20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[2]._padding_ = 0;
        FVar20.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[3]._padding_ = 0;
        FVar20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[4]._padding_ = 0;
        FVar20.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[5]._padding_ = 0;
        FVar20.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
        *(undefined4 *)&FVar20.ReferenceController[3]._padding_ = 1;
        FVar20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
        FVar20.ReferenceController[1]._padding_ =
             (longlong)&___7FMovieSceneTimeController_PlatformClock__6B_;
        if ((pFVar34 == (FMovieSceneTimeController *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        LOCK();
        (FVar20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar19 = FVar20.ReferenceController;
        local_238 = pFVar34;
      }
      FStack_230.ReferenceController = FVar20.ReferenceController;
      if (pTVar17 != (TSharedPtr<FMovieSceneTimeController,1> *)&local_238) {
        local_238 = (FMovieSceneTimeController *)0x0;
        pTVar17->Object = pFVar34;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TimeController).SharedReferenceCount,&FStack_230);
        FVar20.ReferenceController = FStack_230.ReferenceController;
      }
LAB_1462205e2:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    }
    else {
      if (EVar33 == Audio) {
        FVar20.ReferenceController = ::operator_new(0x60);
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        if (FVar20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          local_228 = ___xmm_00000000000000000000000000000010;
          pFVar34 = (FMovieSceneTimeController *)&DAT_00000010;
          FVar20.ReferenceController = _UNK_150651568;
        }
        else {
          (FVar20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          pFVar34 = (FMovieSceneTimeController *)(FVar20.ReferenceController + 1);
          (FVar20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          (FVar20.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_AudioClock___00_SharedPointerInternals__6B_
          ;
          FVar20.ReferenceController[1]._padding_ = 0;
          FVar20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[2]._padding_ = 0;
          FVar20.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[3]._padding_ = 0;
          FVar20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[4]._padding_ = 0;
          FVar20.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[5]._padding_ = 0;
          FVar20.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
          *(undefined4 *)&FVar20.ReferenceController[3]._padding_ = 1;
          FVar20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[1]._padding_ =
               (longlong)&___7FMovieSceneTimeController_AudioClock__6B_;
          if ((pFVar34 == (FMovieSceneTimeController *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          LOCK();
          (FVar20.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          pTVar19 = FVar20.ReferenceController;
          local_228 = pFVar34;
        }
        FStack_220.ReferenceController = FVar20.ReferenceController;
        if (pTVar17 != (TSharedPtr<FMovieSceneTimeController,1> *)&local_228) {
          local_228 = (FMovieSceneTimeController *)0x0;
          pTVar17->Object = pFVar34;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TimeController).SharedReferenceCount,&FStack_220);
          FVar20.ReferenceController = FStack_220.ReferenceController;
        }
        goto LAB_1462205e2;
      }
      if (EVar33 == RelativeTimecode) {
        FVar20.ReferenceController = ::operator_new(0x88);
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        if (FVar20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          local_258 = ___xmm_00000000000000000000000000000010;
          pFVar34 = (FMovieSceneTimeController *)&DAT_00000010;
          FVar20.ReferenceController = _UNK_150651568;
        }
        else {
          (FVar20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          pFVar34 = (FMovieSceneTimeController *)(FVar20.ReferenceController + 1);
          (FVar20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          (FVar20.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_RelativeTimecodeClock___00_SharedPointerInternals__6B_
          ;
          FVar20.ReferenceController[1]._padding_ = 0;
          FVar20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[2]._padding_ = 0;
          FVar20.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[3]._padding_ = 0;
          FVar20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[4]._padding_ = 0;
          FVar20.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[5]._padding_ = 0;
          FVar20.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[6]._padding_ = 0;
          FVar20.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[7]._padding_ = 0;
          FVar20.ReferenceController[7].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[7].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
          *(undefined4 *)&FVar20.ReferenceController[3]._padding_ = 1;
          FVar20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
          FVar20.ReferenceController[1]._padding_ =
               (longlong)&___7FMovieSceneTimeController_RelativeTimecodeClock__6B_;
          *(undefined1 *)&FVar20.ReferenceController[6].SharedReferenceCount = 0;
          *(undefined1 *)&FVar20.ReferenceController[7].SharedReferenceCount = 0;
          FVar20.ReferenceController[8]._padding_ = 0;
          if ((pFVar34 == (FMovieSceneTimeController *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          LOCK();
          (FVar20.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          pTVar19 = FVar20.ReferenceController;
          local_258 = pFVar34;
        }
        FStack_250.ReferenceController = FVar20.ReferenceController;
        if (pTVar17 != (TSharedPtr<FMovieSceneTimeController,1> *)&local_258) {
          local_258 = (FMovieSceneTimeController *)0x0;
          pTVar17->Object = pFVar34;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TimeController).SharedReferenceCount,&FStack_250);
          FVar20.ReferenceController = FStack_250.ReferenceController;
        }
        goto LAB_1462205e2;
      }
      if (EVar33 == Timecode) {
        pTVar19 = ::operator_new(0x38);
        if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
          pTVar19 = (TReferenceControllerBase<1> *)0x0;
          local_218 = ___xmm_00000000000000000000000000000010;
          pFVar34 = (FMovieSceneTimeController *)&DAT_00000010;
          FVar20.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar19->SharedReferenceCount = (atomic<int>)0x1;
          pFVar34 = (FMovieSceneTimeController *)(pTVar19 + 1);
          pTVar19->WeakReferenceCount = (atomic<int>)0x1;
          pTVar19->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_TimecodeClock___00_SharedPointerInternals__6B_
          ;
          pTVar19[1]._padding_ = 0;
          pTVar19[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar19[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar19[2]._padding_ = 0;
          pTVar19[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar19[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar19[3]._padding_ = 0;
          pTVar19[1]._padding_ = (longlong)&___7FMovieSceneTimeController_TimecodeClock__6B_;
          pTVar19[2].WeakReferenceCount = (atomic<int>)0xea60;
          *(undefined4 *)&pTVar19[3]._padding_ = 1;
          if ((pFVar34 == (FMovieSceneTimeController *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          LOCK();
          pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
          UNLOCK();
          FVar20.ReferenceController = pTVar19;
          local_218 = pFVar34;
        }
        FStack_210.ReferenceController = FVar20.ReferenceController;
        if (pTVar17 != (TSharedPtr<FMovieSceneTimeController,1> *)&local_218) {
          local_218 = (FMovieSceneTimeController *)0x0;
          pTVar17->Object = pFVar34;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TimeController).SharedReferenceCount,&FStack_210);
          FVar20.ReferenceController = FStack_210.ReferenceController;
        }
        goto LAB_1462205e2;
      }
      if (EVar33 == PlayEveryFrame) {
        FStack_240.ReferenceController = ::operator_new(0x48);
        pTVar19 = (TReferenceControllerBase<1> *)0x0;
        if (FStack_240.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          local_248 = ___xmm_00000000000000000000000000000010;
          pFVar34 = (FMovieSceneTimeController *)&DAT_00000010;
          FStack_240.ReferenceController = _UNK_150651568;
        }
        else {
          (FStack_240.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          pFVar34 = (FMovieSceneTimeController *)(FStack_240.ReferenceController + 1);
          (FStack_240.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          (FStack_240.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFMovieSceneTimeController_PlayEveryFrame___00_SharedPointerInternals__6B_
          ;
          FStack_240.ReferenceController[1]._padding_ =
               (longlong)&___7FMovieSceneTimeController_PlayEveryFrame__6B_;
          *(undefined1 *)&FStack_240.ReferenceController[2].SharedReferenceCount = 0;
          FStack_240.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
          *(undefined4 *)&FStack_240.ReferenceController[3]._padding_ = 1;
          FStack_240.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
          FStack_240.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
          FStack_240.ReferenceController[4]._padding_ = 0;
          if ((pFVar34 == (FMovieSceneTimeController *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          LOCK();
          (FStack_240.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_240.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          pTVar19 = FStack_240.ReferenceController;
          local_248 = pFVar34;
        }
        FVar20.ReferenceController = FStack_240.ReferenceController;
        if (pTVar17 != (TSharedPtr<FMovieSceneTimeController,1> *)&local_248) {
          local_248 = (FMovieSceneTimeController *)0x0;
          pTVar17->Object = pFVar34;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TimeController).SharedReferenceCount,&FStack_240);
          FVar20.ReferenceController = FStack_240.ReferenceController;
        }
        goto LAB_1462205e2;
      }
      pTVar18 = MakeShared<FMovieSceneTimeController_Tick,1>(&local_90);
      local_1c8.ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
      local_1d0 = pTVar18->Object;
      if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1c8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1c8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar17 != (TSharedPtr<FMovieSceneTimeController,1> *)&local_1d0) {
        pTVar17->Object = (FMovieSceneTimeController *)local_1d0;
        local_1d0 = (FMovieSceneTimeController_Tick *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TimeController).SharedReferenceCount,&local_1c8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
    }
    if (pTVar17->Object == (FMovieSceneTimeController *)0x0) {
      local_res8[0] = 0;
      bVar13 = `UMovieSceneSequencePlayer::Initialize'::__l92::<lambda_1>::operator()(local_res8);
      if (!bVar13) {
        pTVar18 = MakeShared<FMovieSceneTimeController_Tick,1>(local_80);
        local_1b8.ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
        local_1c0 = pTVar18->Object;
        if (local_1b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1b8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_1b8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar17 != (TSharedPtr<FMovieSceneTimeController,1> *)&local_1c0) {
          pTVar17->Object = (FMovieSceneTimeController *)local_1c0;
          local_1c0 = (FMovieSceneTimeController_Tick *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TimeController).SharedReferenceCount,&local_1b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80[0].SharedReferenceCount.ReferenceController);
      }
    }
  }
  if ((this->TickManager).field0_0x0.DebugPtr == (UMovieSceneSequenceTickManager *)0x0) {
    pUVar16 = (UObject *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_);
    if (pUVar16 == (UObject *)0x0) {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2283531826637044860>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                          ,900,"Context");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      pUVar21 = UMovieSceneSequenceTickManager::Get(pUVar16);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar21 != (UMovieSceneSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar21);
      }
      (this->TickManager).field0_0x0.DebugPtr = pUVar21;
    }
  }
  pUVar29 = this;
  if ((this->PlaybackSettings).bInheritTickIntervalFromOwner == 0) {
    local_1a0._0_1_ = (this->PlaybackSettings).TickInterval.bTickWhenPaused;
    local_1a0._1_1_ = (this->PlaybackSettings).TickInterval.bAllowRounding;
    local_1a0._2_2_ = *(undefined2 *)&(this->PlaybackSettings).TickInterval.field_0xa;
    puVar23 = &local_1a8;
    local_1a8._0_4_ = (this->PlaybackSettings).TickInterval.TickIntervalSeconds;
    local_1a8._4_4_ = (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds;
  }
  else {
    do {
      pUVar22 = Z_Construct_UClass_ULevel_NoRegister();
      iVar26 = (int)pUVar22->_padding_;
      if ((iVar26 <= *(int *)(pUVar29->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar29->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
          &pUVar22->_padding_)) break;
      pUVar22 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar26 = (int)pUVar22->_padding_;
      if ((iVar26 <= *(int *)(pUVar29->_padding_ + 0x38)) &&
         (((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar29->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
           &pUVar22->_padding_ && (pUVar29 != (UMovieSceneSequencePlayer *)0x0)))) {
        local_298 = CONCAT31(local_298._1_3_,*(undefined1 *)((longlong)&pUVar29->_padding_ + 2)) &
                    0xffffff01;
        puVar23 = &local_2a0;
        local_2a0 = (ulonglong)*(uint *)((longlong)&pUVar29->_padding_ + 4);
        local_298._0_2_ = CONCAT11(1,(undefined1)local_298);
        goto LAB_1462207f2;
      }
      pUVar22 = Z_Construct_UClass_AActor_NoRegister();
      iVar26 = (int)pUVar22->_padding_;
      if (((iVar26 <= *(int *)(pUVar29->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar29->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
           &pUVar22->_padding_)) && (pUVar29 != (UMovieSceneSequencePlayer *)0x0)) {
        local_298 = CONCAT31(local_298._1_3_,*(undefined1 *)((longlong)&pUVar29->_padding_ + 2)) &
                    0xffffff01;
        puVar23 = &local_2a0;
        local_2a0 = (ulonglong)*(uint *)((longlong)&pUVar29->_padding_ + 4);
        local_298._0_2_ = CONCAT11(1,(undefined1)local_298);
        goto LAB_1462207f2;
      }
      plVar1 = &pUVar29->_padding_;
      pUVar29 = (UMovieSceneSequencePlayer *)*plVar1;
    } while ((UMovieSceneSequencePlayer *)*plVar1 != (UMovieSceneSequencePlayer *)0x0);
    local_298 = 0x100;
    puVar23 = &local_2a0;
    local_2a0 = 0;
  }
LAB_1462207f2:
  local_288._0_8_ = *puVar23;
  local_288._8_4_ = *(undefined4 *)(puVar23 + 1);
  if ((this->RegisteredTickInterval).bIsSet == false) {
    pUVar21 = (this->TickManager).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_150 = &this->_padding_;
    local_158 = this;
    UMovieSceneSequenceTickManager::RegisterTickClient
              (pUVar21,&local_288,
               (TScriptInterface<IMovieSceneSequenceTickManagerClient> *)&local_158);
  }
  else {
    if (((this->RegisteredTickInterval).bIsSet == false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((local_288.TickIntervalSeconds !=
          (this->RegisteredTickInterval).TypedValue.TickIntervalSeconds) ||
        (local_288.EvaluationBudgetMicroseconds !=
         (this->RegisteredTickInterval).TypedValue.EvaluationBudgetMicroseconds)) ||
       (((this->RegisteredTickInterval).TypedValue.bTickWhenPaused != local_288.bTickWhenPaused ||
        ((this->RegisteredTickInterval).TypedValue.bAllowRounding != local_288.bAllowRounding)))) {
      FMovieSceneRootEvaluationTemplateInstance::TearDown(&this->RootTemplateInstance);
      pUVar21 = (this->TickManager).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      plVar1 = &this->_padding_;
      local_148 = this;
      local_140 = plVar1;
      UMovieSceneSequenceTickManager::UnregisterTickClient
                (pUVar21,(TScriptInterface<IMovieSceneSequenceTickManagerClient> *)&local_148);
      pUVar21 = (this->TickManager).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_138 = this;
      local_130 = plVar1;
      if (((this->RegisteredTickInterval).bIsSet == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UMovieSceneSequenceTickManager::RegisterTickClient
                (pUVar21,&(this->RegisteredTickInterval).TypedValue,
                 (TScriptInterface<IMovieSceneSequenceTickManagerClient> *)&local_138);
    }
  }
  pTVar30 = &this->RegisteredTickInterval;
  if ((TOptional<FMovieSceneSequenceTickInterval> *)&local_288 != pTVar30) {
    (pTVar30->TypedValue).TickIntervalSeconds = local_288.TickIntervalSeconds;
    (pTVar30->TypedValue).EvaluationBudgetMicroseconds = local_288.EvaluationBudgetMicroseconds;
    (this->RegisteredTickInterval).TypedValue.bTickWhenPaused = local_288.bTickWhenPaused;
    (this->RegisteredTickInterval).TypedValue.bAllowRounding = local_288.bAllowRounding;
    *(undefined2 *)&(this->RegisteredTickInterval).TypedValue.field_0xa = local_288._10_2_;
    (this->RegisteredTickInterval).bIsSet = true;
  }
  FMovieSceneRootEvaluationTemplateInstance::Initialize
            (&this->RootTemplateInstance,(this->Sequence).field0_0x0.DebugPtr,
             (IMovieScenePlayer *)&this->_padding_,(UMovieSceneCompiledDataManager *)0x0);
  if ((this->PlaybackSettings).bDynamicWeighting == 0) {
    pUVar24 = FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataManager
                        (&this->RootTemplateInstance);
    FMovieSceneRootEvaluationTemplateInstance::GetCompiledDataID(&this->RootTemplateInstance);
    if ((pUVar24 != (UMovieSceneCompiledDataManager *)0x0) && (local_res18 != 0xffffffff)) {
      if (((int)local_res18 < 0) ||
         (*(int *)&(pUVar24->CompiledDataEntries).field_0x28 <= (int)local_res18)) {
LAB_146220a5b:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompiledDataEntries.IsValidIndex(DataID.Value)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Compilation\\MovieSceneCompiledDataManager.h"
                            ,0xe1,L"");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        if ((*(int *)&(pUVar24->CompiledDataEntries).field_0x28 <= (int)local_res18) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar5 = *(undefined1 **)&(pUVar24->CompiledDataEntries).field_0x20;
        puVar35 = &(pUVar24->CompiledDataEntries).field_0x10;
        if (puVar5 != (undefined1 *)0x0) {
          puVar35 = puVar5;
        }
        if ((*(uint *)(puVar35 +
                      (longlong)((int)(local_res18 + ((int)local_res18 >> 0x1f & 0x1fU)) >> 5) * 4)
             >> (local_res18 & 0x1f) & 1) == 0) goto LAB_146220a5b;
      }
      uVar31 = *(uint *)&(this->PlaybackSettings).field_0x24;
      *(uint *)&(this->PlaybackSettings).field_0x24 =
           (*(byte *)(*(longlong *)&pUVar24->CompiledDataEntries + 0x2c +
                     (longlong)(int)local_res18 * 0x30) ^ uVar31) & 4 ^ uVar31;
    }
  }
  if ((this->LatentActionManager).bIsRunningLatentActions != false) {
    local_res10[0] = 0;
    bVar13 = `FMovieSceneLatentActionManager::ClearLatentActions'::__l3::<lambda_1>::operator()
                       (local_res10);
    if (!bVar13) goto LAB_146220b20;
  }
  piVar2 = &(this->LatentActionManager).LatentActions.ArrayMax;
  pTVar6 = (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
           (this->LatentActionManager).LatentActions.AllocatorInstance.Data;
  iVar26 = (this->LatentActionManager).LatentActions.ArrayNum;
  if ((this->LatentActionManager).LatentActions.ArrayMax < 0) {
    DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
              (pTVar6,iVar26);
    (this->LatentActionManager).LatentActions.ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->LatentActionManager,0,piVar2);
    }
  }
  else {
    DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
              (pTVar6,iVar26);
    (this->LatentActionManager).LatentActions.ArrayNum = 0;
  }
LAB_146220b20:
  FMovieScenePlaybackPosition::Reset(&this->PlayPosition,local_2a8);
  if ((pTVar17->Object == (FMovieSceneTimeController *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_168.Time = (this->PlayPosition).CurrentPosition;
  pFVar34 = pTVar17->Object;
  local_168.Rate = (this->PlayPosition).InputRate;
  if ((pFVar34->PlaybackStartTime).bIsSet != false) {
    if (6 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
    (**(code **)(pFVar34->_padding_ + 0x28))(pFVar34,&local_168);
    if ((pFVar34->PlaybackStartTime).bIsSet != false) {
      (pFVar34->PlaybackStartTime).bIsSet = false;
    }
    FMovieSceneTimeController::StartPlaying(pFVar34,&local_168);
  }
  pUVar22 = Z_Construct_UClass_AActor_NoRegister();
  pUVar16 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar22);
  if ((((pUVar16 != (UObject *)0x0) && (*(char *)(pUVar16 + 9) == '\x03')) &&
      (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
     (pFVar25 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
     ((ulonglong)((pFVar25->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) == 0)) {
    (this->NetSyncProps).LastKnownPosition = (this->PlayPosition).CurrentPosition;
    (this->NetSyncProps).LastKnownStatus.Value = (this->Status).Value;
    (this->NetSyncProps).LastKnownNumLoops = this->CurrentNumLoops;
    (this->NetSyncProps).LastKnownSerialNumber = this->SerialNumber;
  }
  (this->NetSyncProps).LastKnownPosition = (this->PlayPosition).CurrentPosition;
  return;
}

// Initialize @ 146220c80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::Initialize
          (UMovieSceneSequencePlayer *this,UMovieSceneSequence *param_1,
          FMovieSceneSequencePlaybackSettings *param_2)

{
  FMovieSceneSequenceLoopCount FVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  
  FVar1.Value = (param_2->LoopCount).Value;
  fVar2 = (param_2->TickInterval).TickIntervalSeconds;
  fVar3 = (param_2->TickInterval).EvaluationBudgetMicroseconds;
  *(undefined4 *)&(this->PlaybackSettings).field_0x0 = *(undefined4 *)&param_2->field_0x0;
  (this->PlaybackSettings).LoopCount = (FMovieSceneSequenceLoopCount)FVar1.Value;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = fVar2;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = fVar3;
  fVar2 = param_2->StartTime;
  uVar4 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined8 *)&(this->PlaybackSettings).TickInterval.bTickWhenPaused =
       *(undefined8 *)&(param_2->TickInterval).bTickWhenPaused;
  (this->PlaybackSettings).StartTime = fVar2;
  *(undefined4 *)&(this->PlaybackSettings).field_0x1c = uVar4;
  uVar5 = *(undefined7 *)&param_2->field_0x21;
  (this->PlaybackSettings).FinishCompletionStateOverride = param_2->FinishCompletionStateOverride;
  *(undefined7 *)&(this->PlaybackSettings).field_0x21 = uVar5;
  Initialize(this,param_1);
  return;
}

// InitializeForTick @ 146220cb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::InitializeForTick(UMovieSceneSequencePlayer *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneSequenceTickManager *pUVar3;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2283531826637044860>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                       ,900,"Context");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = UMovieSceneSequenceTickManager::Get(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMovieSceneSequenceTickManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->TickManager).field0_0x0.DebugPtr = pUVar3;
  }
  return;
}

// IsPaused @ 1462226c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::IsPaused(UMovieSceneSequencePlayer *this)

{
  return (this->Status).Value == '\x05';
}

// IsPlaying @ 1462226e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::IsPlaying(UMovieSceneSequencePlayer *this)

{
  return (this->Status).Value == '\x01';
}

// IsReversed @ 146222760

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::IsReversed(UMovieSceneSequencePlayer *this)

{
  return this->bReversePlayback;
}

// IsSupportedForNetworking @ 146222a80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::IsSupportedForNetworking(UMovieSceneSequencePlayer *this)

{
  return true;
}

// IsValid @ 146222a90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::IsValid(UMovieSceneSequencePlayer *this)

{
  bool bVar1;
  
  bVar1 = FMovieSceneRootEvaluationTemplateInstance::IsValid(&this->RootTemplateInstance);
  return bVar1;
}

// NeedsQueueLatentAction @ 1462256e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneSequencePlayer::NeedsQueueLatentAction(UMovieSceneSequencePlayer *this)

{
  bool bVar1;
  
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  return bVar1;
}

// OnLooped @ 146225c40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::OnLooped(UMovieSceneSequencePlayer *this)

{
  return;
}

// OnPaused @ 146225c70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::OnPaused(UMovieSceneSequencePlayer *this)

{
  return;
}

// OnStartedPlaying @ 146226e00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::OnStartedPlaying(UMovieSceneSequencePlayer *this)

{
  return;
}

// OnStopped @ 146226e80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::OnStopped(UMovieSceneSequencePlayer *this)

{
  return;
}

// Pause @ 146227230

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::Pause(UMovieSceneSequencePlayer *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FRootInstanceHandle FVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UEnum *this_00;
  FMovieSceneTimeController *this_01;
  undefined4 extraout_var;
  UMovieSceneSequencePlayer *local_res10;
  UMovieSceneSequencePlayer *local_res18;
  FName local_res20;
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_188;
  UMovieSceneSequencePlayer *local_178;
  FDelegateAllocation local_170;
  FString local_160;
  FString local_150;
  FQualifiedFrameTime local_140;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FMovieSceneContext local_f8;
  FMovieSceneEvaluationRange local_78;
  
  if (((*(longlong *)&this->Observer == 0) || (*(longlong *)&(this->Observer).field_0x8 == 0)) ||
     (cVar3 = (**(code **)(**(longlong **)&(this->Observer).field_0x8 + 0x10))(), cVar3 != '\0')) {
    bVar4 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
    if (bVar4) {
      local_188.Object = (FMovieSceneEntitySystemRunner *)Pause;
      local_188.SharedReferenceCount.ReferenceController._4_4_ = local_140.Rate.Denominator;
      local_188.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_170.DelegateSize = 0;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_170);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UMovieSceneSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_res18 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UMovieSceneSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
        puVar6[4] = local_188.Object;
        puVar6[5] = CONCAT44(local_188.SharedReferenceCount.ReferenceController._4_4_,
                             local_188.SharedReferenceCount.ReferenceController._0_4_);
      }
      QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                              *)&local_170);
    }
    else {
      GetSequenceName(this,&local_150,true);
      if (5 < (byte)LogMovieScene._0_1_) {
        this_00 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
        if ((this_00 == (UEnum *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UEnum::GetNameByValue(this_00,(long64)&local_res20);
        ::FName::ToString(&local_res20,&local_160);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      if ((this->Status).Value == '\x01') {
        (this->Status).Value = '\x05';
        this_01 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
        local_140.Time = (this->PlayPosition).CurrentPosition;
        local_140.Rate = (this->PlayPosition).InputRate;
        FMovieSceneTimeController::StopPlaying(this_01,&local_140);
        if ((this->PauseOnFrame).bIsSet != false) {
          (this->PauseOnFrame).bIsSet = false;
        }
        if ((this->LastTickGameTimeSeconds).bIsSet != false) {
          (this->LastTickGameTimeSeconds).bIsSet = false;
        }
        local_res10 = this;
        FMovieSceneRootEvaluationTemplateInstance::GetRunner(&this->RootTemplateInstance,&local_188)
        ;
        if (local_188.Object == (FMovieSceneEntitySystemRunner *)0x0) {
          `UMovieSceneSequencePlayer::Pause'::__l29::<lambda_1>::operator()(&local_res10);
        }
        else {
          FMovieScenePlaybackPosition::GetCurrentPositionAsRange(&this->PlayPosition,&local_78);
          if ((*(longlong *)&this->PlaybackClient != 0) &&
             (*(longlong *)&(this->PlaybackClient).field_0x8 != 0)) {
            plVar1 = *(longlong **)&(this->PlaybackClient).field_0x8;
            (**(code **)(*plVar1 + 0x30))(plVar1,&local_78);
          }
          local_f8.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
          local_f8.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
          local_f8._padding_._0_1_ = local_78.EvaluationRange.LowerBound.Type.Value;
          local_f8._padding_._1_3_ = local_78.EvaluationRange.LowerBound._1_3_;
          local_f8._padding_._4_4_ = local_78.EvaluationRange.LowerBound.Value.FrameNumber.Value;
          local_f8._padding_._0_4_ = local_78.EvaluationRange.LowerBound.Value.SubFrame;
          local_f8._padding_._4_1_ = local_78.EvaluationRange.UpperBound.Type.Value;
          local_f8._padding_._5_3_ = local_78.EvaluationRange.UpperBound._1_3_;
          local_f8._padding_._0_4_ = local_78.Direction;
          local_f8._padding_._4_4_ = local_78.TimeOverride.Value;
          local_f8._padding_._0_4_ = local_78.EvaluationRange.UpperBound.Value.FrameNumber.Value;
          local_f8._padding_._4_4_ = local_78.EvaluationRange.UpperBound.Value.SubFrame;
          local_f8._padding_._0_4_ = local_78.CurrentFrameRate.Numerator;
          local_f8._padding_._4_4_ = local_78.CurrentFrameRate.Denominator;
          local_f8.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
          local_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_f8.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
          local_f8.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
          FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_f8.RootToSequenceWarpCounter);
          local_f8.bHasPostRollStartTime = false;
          local_f8.bHasPreRollEndTime = false;
          local_f8.bSectionPostRoll = false;
          local_f8.bSectionPreRoll = false;
          local_f8.bSilent = false;
          local_f8.bHasLooped = false;
          local_f8.bHasJumped = false;
          local_f8.Status = Stopped;
          local_f8.PrePostRollStartEndTime.Value = -0x80000000;
          local_f8.HierarchicalBias = 0;
          if ((local_188.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_1a8 = (undefined1  [8])0x0;
          local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_1a0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                     (FWriteAccessScope *)&local_118);
          local_100 = &local_1a0;
          puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_1a0);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar6[2] = uVar7;
            *puVar6 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMovieSceneSequencePlayer::Pause'::`29'::<lambda_1>_>
                       ::_vftable_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar6[3] = 0;
            local_178 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_178);
            puVar6[4] = this;
          }
          if (local_118.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
          }
          FVar5 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                            (&this->RootTemplateInstance);
          FMovieSceneEntitySystemRunner::QueueUpdate
                    (local_188.Object,&local_f8,*(FInstanceHandle *)CONCAT44(extraout_var,FVar5),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a8,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                     (FWriteAccessScope *)&local_130);
          if ((local_1a0.DelegateSize != 0) &&
             (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_1a0,0,0,0x10);
            local_1a0.DelegateSize = 0;
          }
          if (local_130.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
          }
          if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_1a0.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1a8);
          FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_f8.RootToSequenceWarpCounter);
          DestructItems<FMovieSceneNestedSequenceTransform,int>
                    ((FMovieSceneNestedSequenceTransform *)
                     local_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                     local_f8.RootToSequenceTransform.NestedTransforms.ArrayNum);
          if ((FMovieSceneNestedSequenceTransform *)
              local_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
              (FMovieSceneNestedSequenceTransform *)0x0) {
            FMemory::Free(local_f8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_188.SharedReferenceCount.ReferenceController._4_4_,
                            local_188.SharedReferenceCount.ReferenceController._0_4_));
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Play @ 146227740

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::Play(UMovieSceneSequencePlayer *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UMovieSceneSequencePlayer *local_res8;
  FDelegateAllocation local_18;
  
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if (bVar1) {
    local_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = Play;
      puVar2[5] = (ulonglong)(uint)local_18._12_4_ << 0x20;
    }
    QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                            *)&local_18);
    return;
  }
  this->bReversePlayback = 0;
  PlayInternal(this);
  return;
}

// PlayInternal @ 146227850

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::PlayInternal(UMovieSceneSequencePlayer *this)

{
  undefined1 uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UEnum *this_00;
  FFrameTime FVar7;
  FMovieSceneTimeController *pFVar8;
  FMovieSceneSequencePlaybackParams *pFVar9;
  float fVar10;
  FFrameTime local_res8;
  FFrameTime local_res10;
  FName local_res18 [2];
  FString local_f8;
  FDelegateAllocation local_e8;
  FString local_d8;
  FFrameTime local_c8;
  FFrameRate local_c0;
  FMovieSceneSequencePlaybackParams local_b8;
  FMovieSceneSequencePlaybackParams local_78;
  
  if (((*(longlong *)&this->Observer != 0) && (*(longlong *)&(this->Observer).field_0x8 != 0)) &&
     (cVar3 = (**(code **)(**(longlong **)&(this->Observer).field_0x8 + 0x10))(), cVar3 == '\0')) {
    return;
  }
  bVar4 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if (bVar4) {
    local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e8.DelegateSize = 0;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_e8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res10 = (FFrameTime)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res10);
      puVar5[4] = PlayInternal;
      puVar5[5] = (ulonglong)(uint)local_f8.Data.ArrayMax << 0x20;
    }
    QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                            *)&local_e8);
    return;
  }
  if ((this->Status).Value == '\x01') {
    return;
  }
  if ((this->Sequence).field0_0x0.DebugPtr == (UMovieSceneSequence *)0x0) {
    return;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x2d0))(this);
  if (cVar3 == '\0') {
    return;
  }
  if (this->TimeControllerState != ReadyToPlay) {
    return;
  }
  GetSequenceName(this,&local_f8,true);
  if (5 < (byte)LogMovieScene._0_1_) {
    this_00 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UEnum::GetNameByValue(this_00,(long64)local_res18);
    ::FName::ToString(local_res18,&local_d8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  fVar10 = (this->PlaybackSettings).PlayRate;
  (this->Status).Value = '\x01';
  if (this->bReversePlayback != 0) {
    fVar10 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
  }
  FVar7 = GetLastValidTime(this);
  local_res18[0] = *(FName *)FVar7;
  local_res10 = (this->PlayPosition).CurrentPosition;
  if ((local_res10.FrameNumber.Value.Value == local_res18[0].ComparisonIndex.Value.Value) &&
     (local_res10.SubFrame == (float)local_res18[0].Number)) {
    if (fVar10 <= 0.0) goto LAB_146227b58;
    pFVar9 = &local_b8;
    local_res8.SubFrame = 0.0;
    local_res8.FrameNumber.Value = (this->StartTime).Value;
    local_b8.Frame = local_res8;
    local_b8.Time = 0.0;
    local_b8.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.MarkedFrame.Data.ArrayNum = 0;
    local_b8.MarkedFrame.Data.ArrayMax = 0;
    local_b8.Timecode.Hours = 0;
    local_b8.Timecode.Minutes = 0;
    local_b8.Timecode.Seconds = 0;
    local_b8.Timecode.Frames = 0;
    local_b8.Timecode.Subframe = 0.0;
    local_b8.Timecode.bDropFrameFormat = false;
    local_b8.PositionType = Frame;
    local_b8.UpdateMethod = Jump;
    local_b8.bHasJumped = false;
  }
  else {
    if ((local_res10.FrameNumber.Value.Value != (this->StartTime).Value) ||
       ((local_res10.SubFrame != 0.0 || (0.0 <= fVar10)))) goto LAB_146227b58;
    local_78.Frame = GetLastValidTime(this);
    pFVar9 = &local_78;
    local_78.Frame = *(FFrameTime *)local_78.Frame;
    local_78.Time = 0.0;
    local_78.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.MarkedFrame.Data.ArrayNum = 0;
    local_78.MarkedFrame.Data.ArrayMax = 0;
    local_78.Timecode.Hours = 0;
    local_78.Timecode.Minutes = 0;
    local_78.Timecode.Seconds = 0;
    local_78.Timecode.Frames = 0;
    local_78.Timecode.Subframe = 0.0;
    local_78.Timecode.bDropFrameFormat = false;
    local_78.PositionType = Frame;
    local_78.UpdateMethod = Jump;
    local_78.bHasJumped = false;
  }
  SetPlaybackPosition(this,pFVar9);
LAB_146227b58:
  if ((this->PlaybackSettings).FinishCompletionStateOverride == ForceRestoreState) {
    FMovieSceneRootEvaluationTemplateInstance::EnableGlobalPreAnimatedStateCapture
              (&this->RootTemplateInstance);
  }
  pFVar8 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
  local_c8 = (this->PlayPosition).CurrentPosition;
  local_c0 = (this->PlayPosition).InputRate;
  if (6 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,&local_c8);
  pFVar8 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
  cVar3 = (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8);
  if (cVar3 != '\0') {
    StartTimeControllerAndBroadcastPlayState(this);
  }
  this->TimeControllerState = (uint)(cVar3 == '\0');
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return;
}

// PlayLooping @ 146227c60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::PlayLooping(UMovieSceneSequencePlayer *this,int param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UMovieSceneSequencePlayer *local_res8;
  FDelegateAllocation local_18;
  
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if (bVar1) {
    local_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar2 + 1) = param_1;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = PlayLooping;
      puVar2[5] = (ulonglong)(uint)local_18._12_4_ << 0x20;
    }
    QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                            *)&local_18);
    return;
  }
  (this->PlaybackSettings).LoopCount.Value = param_1;
  PlayInternal(this);
  return;
}

// PlayReverse @ 146227d70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::PlayReverse(UMovieSceneSequencePlayer *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UMovieSceneSequencePlayer *local_res8;
  FDelegateAllocation local_18;
  
  bVar1 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if (bVar1) {
    local_18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_18.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = PlayReverse;
      puVar2[5] = (ulonglong)(uint)local_18._12_4_ << 0x20;
    }
    QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                            *)&local_18);
    return;
  }
  this->bReversePlayback = 1;
  PlayInternal(this);
  return;
}

// PlayTo @ 146227e80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::PlayTo
          (UMovieSceneSequencePlayer *this,FMovieSceneSequencePlaybackParams *param_1,
          FMovieSceneSequencePlayToParams param_2)

{
  FScriptContainerElement *pFVar1;
  FFrameTime local_res8;
  FFrameTime local_res10;
  FFrameTime local_18;
  undefined4 local_10;
  
  local_res10 = FMovieSceneSequencePlaybackParams::GetPlaybackPosition
                          (param_1,(UMovieSceneSequencePlayer *)&local_res8);
  local_10 = CONCAT31(local_10._1_3_,param_2.bExclusive);
  local_res10 = *(FFrameTime *)local_res10;
  if ((TOptional<UMovieSceneSequencePlayer::FPauseOnArgs> *)&local_18 != &this->PauseOnFrame) {
    (this->PauseOnFrame).TypedValue.Time = local_res10;
    *(undefined4 *)&(this->PauseOnFrame).TypedValue.bExclusive = local_10;
    (this->PauseOnFrame).bIsSet = true;
  }
  local_res8 = (this->PlayPosition).CurrentPosition;
  local_18 = local_res10;
  if ((local_res8.FrameNumber.Value.Value < local_res10.FrameNumber.Value.Value) ||
     ((local_res8.FrameNumber.Value.Value == local_res10.FrameNumber.Value.Value &&
      (local_res8.SubFrame < local_res10.SubFrame)))) {
    Play(this);
  }
  else {
    PlayReverse(this);
  }
  pFVar1 = (param_1->MarkedFrame).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// PostEvaluation @ 1462283a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::PostEvaluation
          (UMovieSceneSequencePlayer *this,FMovieSceneContext *param_1)

{
  int *piVar1;
  bool *pbVar2;
  bool *pbVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar4;
  float fVar5;
  FFrameRate FVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  atomic<unsigned___int64> aVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  FMovieSceneContext *pFVar15;
  FFrameRate FVar16;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  uint uVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined4 uStackX_14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  
  FVar6 = (FFrameRate)param_1->_padding_;
  uVar17 = *(uint *)((longlong)&param_1->_padding_ + 4);
  if (uVar17 == 0x80000000) {
    if ((int)param_1->_padding_ == 0) {
      pFVar15 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
      if ((*(char *)((longlong)&param_1->_padding_ + 4) == '\x02') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      pFVar15 = param_1;
      if (((char)param_1->_padding_ == '\x02') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    FVar16 = *(FFrameRate *)((longlong)&pFVar15->_padding_ + 4);
  }
  else {
    uStackX_14 = 0;
    FVar16.Denominator = 0;
    FVar16.Numerator = uVar17;
    local_res10 = uVar17;
  }
  pFVar15 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
  ConvertFrameTime((FFrameTime)local_res20,FVar16,FVar6);
  FVar6 = (FFrameRate)param_1->_padding_;
  if ((int)param_1->_padding_ == 0) {
    cVar13 = (char)param_1->_padding_;
    pFVar15 = param_1;
  }
  else {
    cVar13 = (char)pFVar15->_padding_;
  }
  if ((cVar13 == '\x02') &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  ConvertFrameTime((FFrameTime)local_res18,*(FFrameRate *)((longlong)&pFVar15->_padding_ + 4),FVar6)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TimeController,
             (FWriteAccessScope *)&local_78);
  piVar1 = (int *)((longlong)&(this->SynchronousRunner).SharedReferenceCount.ReferenceController + 4
                  );
  *piVar1 = *piVar1 + 1;
  bVar11 = false;
  uVar17 = *(int *)&(this->SynchronousRunner).Object - 1;
  if (-1 < (int)uVar17) {
    lVar18 = (longlong)(int)uVar17 << 4;
    bVar11 = false;
    do {
      uVar14 = 0;
      if ((int)uVar17 < *(int *)&(this->SynchronousRunner).Object) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar7 = (this->TimeController).SharedReferenceCount.ReferenceController;
      if (((*(int *)(&(pTVar7->SharedReferenceCount).field_0x0 + lVar18) == 0) ||
          (plVar8 = *(longlong **)((longlong)&pTVar7->_padding_ + lVar18), plVar8 == (longlong *)0x0
          )) || (cVar13 = (**(code **)(*plVar8 + 0x68))(), cVar13 == '\0')) {
        bVar11 = true;
      }
      lVar18 = lVar18 + -0x10;
      uVar17 = uVar17 - 1;
    } while (-1 < (int)uVar17);
  }
  piVar1 = (int *)((longlong)&(this->SynchronousRunner).SharedReferenceCount.ReferenceController + 4
                  );
  *piVar1 = *piVar1 + -1;
  if (bVar11) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TimeController,false);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  pbVar3 = &(this->LastTickGameTimeSeconds).bIsSet;
  fVar5 = (this->PauseOnFrame).TypedValue.Time.SubFrame;
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)pbVar3;
  pTVar4 = this_00 + (longlong)(int)fVar5 * 3;
  while( true ) {
    if ((this->PauseOnFrame).TypedValue.Time.SubFrame != fVar5) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pTVar4) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_60);
    if ((*(int *)&this_00[2].AccessDetector.State != 0) &&
       (aVar9 = this_00[1].AccessDetector.State, aVar9 != (atomic<unsigned___int64>)0x0)) {
      (**(code **)(*(longlong *)aVar9 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    this_00 = this_00 + 3;
  }
  pbVar2 = &(this->PauseOnFrame).TypedValue.bExclusive;
  fVar5 = (this->PauseOnFrame).TypedValue.Time.SubFrame;
  if (*(int *)&(this->PauseOnFrame).TypedValue.bExclusive < 0) {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
              (*(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)pbVar3,(int)fVar5);
    (this->PauseOnFrame).TypedValue.Time.SubFrame = 0.0;
    if (*(int *)pbVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pbVar3,0,(int *)pbVar2);
    }
    return;
  }
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            (*(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)pbVar3,(int)fVar5);
  (this->PauseOnFrame).TypedValue.Time.SubFrame = 0.0;
  return;
}

// PostNetReceive @ 146228bc0

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

void __thiscall UMovieSceneSequencePlayer::PostNetReceive(UMovieSceneSequencePlayer *this)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  FFrameTime FVar4;
  code *pcVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  undefined4 extraout_EAX;
  uint uVar11;
  char *pcVar12;
  UObject *pUVar13;
  FUObjectItem *pFVar14;
  UWorld *this_00;
  AWorldSettings *pAVar15;
  FFrameTime FVar16;
  FMovieSceneTimeController *this_01;
  int iVar17;
  int iVar18;
  FFrameNumber FVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar36 [16];
  float fVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  FFrameTime local_res10;
  FFrameTime local_res18;
  float fStackX_24;
  float fStack_2e4;
  float fStack_2dc;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FQualifiedFrameTime local_220;
  FMovieSceneSequencePlaybackParams local_210;
  FMovieSceneSequencePlaybackParams local_1d0;
  FMovieSceneSequencePlaybackParams local_190;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FMovieSceneEvaluationRange local_e0 [4];
  
  UObject::PostNetReceive((UObject *)this);
  pcVar12 = (char *)Z_Construct_UClass_AActor_NoRegister();
  pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,(UClass *)pcVar12);
  if ((pUVar13 != (UObject *)0x0) && (*(char *)(pUVar13 + 9) == '\x03')) {
    if (this == (UMovieSceneSequencePlayer *)0x0) {
      pcVar12 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
      ;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
      uVar11 = *(uint *)((longlong)&this->_padding_ + 4);
      pcVar12._4_4_ = 0;
      pcVar12._0_4_ = uVar11;
      pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,uVar11);
      if (((uint)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2283531826637043840>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                           ,0x780,"!HasAuthority()");
        if (!bVar9) {
          return;
        }
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  fVar27 = __real_3f800000;
  if ((this->Sequence).field0_0x0.DebugPtr == (UMovieSceneSequence *)0x0) {
    return;
  }
  if (this->bIgnorePlaybackReplication != false) {
    return;
  }
  if ((this->NetSyncProps).LastKnownSerialNumber < this->SerialNumber) {
    GetSequenceName(this,&local_290,true);
    if (5 < (byte)LogMovieSceneRepl._0_1_) {
      ::FString::PrintfImpl(&local_2a0,L"Frame: %d Subframe: %f");
      UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                (&local_130,(uint)(this->NetSyncProps).LastKnownStatus.Value);
      ::FString::PrintfImpl(&local_2b0,L"Frame: %d Subframe: %f");
      UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                (&local_140,(uint)(this->Status).Value);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneRepl);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
    }
    if (local_290.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
    return;
  }
  uVar1 = (this->NetSyncProps).LastKnownStatus.Value;
  if ((uVar1 != '\x01') || (bVar9 = true, (this->Status).Value == '\x01')) {
    bVar9 = false;
  }
  uVar2 = (this->Status).Value;
  FVar16 = (this->PlayPosition).CurrentPosition;
  FVar4 = (this->NetSyncProps).LastKnownPosition;
  if (FVar4.FrameNumber.Value.Value == FVar16.FrameNumber.Value.Value) {
    fStack_2e4 = FVar4.SubFrame;
    fStack_2dc = FVar16.SubFrame;
    if (fStack_2e4 == fStack_2dc) {
      bVar6 = false;
      goto LAB_146228f06;
    }
  }
  bVar6 = true;
LAB_146228f06:
  fVar40 = (this->PlaybackSettings).PlayRate;
  this_00 = GetPlaybackWorld(this);
  fVar20 = fVar27;
  if (this_00 != (UWorld *)0x0) {
    pcVar12._0_4_ = 0;
    pcVar12._4_4_ = 0;
    pAVar15 = UWorld::GetWorldSettings(this_00,false,true);
    if (pAVar15 != (AWorldSettings *)0x0) {
      pcVar12 = *(char **)(pAVar15->_padding_ + 0x790);
      fVar20 = (float)(*(code *)pcVar12)(pAVar15);
    }
  }
  fVar21 = GetPing(this);
  FVar16 = ::operator*(fVar21 * __real_3a83126f,(FFrameRate)pcVar12);
  dVar8 = __real_c1e0000000000000;
  dVar7 = __real_41dfffffffc00000;
  fVar21 = ::FFrameTime::MaxSubframe;
  fStack_2dc = (float)((ulonglong)*(undefined8 *)FVar16 >> 0x20);
  dVar32 = (double)fVar40;
  dVar31 = ((double)(int)*(undefined8 *)FVar16 + (double)fStack_2dc) * dVar32;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = dVar31;
  auVar36 = roundpd(in_XMM3,auVar34,1);
  auVar33._0_8_ = dVar31 - auVar36._0_8_;
  auVar33._8_8_ = 0;
  if (__real_41dfffffffc00000 <= auVar36._0_8_) {
    auVar36._0_8_ = __real_41dfffffffc00000;
  }
  if (auVar36._0_8_ <= __real_c1e0000000000000) {
    auVar36._0_8_ = __real_c1e0000000000000;
  }
  fVar40 = (float)auVar33._0_8_;
  if (::FFrameTime::MaxSubframe <= (float)auVar33._0_8_) {
    fVar40 = ::FFrameTime::MaxSubframe;
  }
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar40) {
    fVar40 = ::FFrameTime::MaxSubframe;
  }
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  dVar38 = ((double)fVar40 + (double)(int)auVar36._0_8_) * (double)fVar20;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar38;
  auVar34 = roundpd(auVar33,auVar23,1);
  dVar39 = auVar34._0_8_;
  dVar31 = dVar39;
  if (__real_41dfffffffc00000 <= dVar39) {
    dVar31 = __real_41dfffffffc00000;
  }
  fVar40 = (float)(dVar38 - dVar39);
  if (dVar31 <= __real_c1e0000000000000) {
    dVar31 = __real_c1e0000000000000;
  }
  if (::FFrameTime::MaxSubframe <= fVar40) {
    fVar40 = ::FFrameTime::MaxSubframe;
  }
  iVar18 = (int)dVar31;
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar40) {
    fVar40 = ::FFrameTime::MaxSubframe;
  }
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  FVar16 = ::operator*(SUB84(dVar31,0),(FFrameRate)pcVar12);
  fStack_2e4 = (float)((ulonglong)*(undefined8 *)FVar16 >> 0x20);
  dVar32 = ((double)(int)*(undefined8 *)FVar16 + (double)fStack_2e4) * dVar32;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar32;
  auVar34 = roundpd(auVar36,auVar24,1);
  dVar31 = auVar34._0_8_;
  auVar35._0_8_ = dVar32 - dVar31;
  auVar35._8_8_ = 0;
  if (dVar7 <= dVar31) {
    dVar31 = dVar7;
  }
  if (dVar31 <= dVar8) {
    dVar31 = dVar8;
  }
  fVar26 = (float)auVar35._0_8_;
  if (fVar21 <= (float)auVar35._0_8_) {
    fVar26 = fVar21;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (fVar21 <= fVar26) {
    fVar26 = fVar21;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  dVar39 = ((double)fVar26 + (double)(int)dVar31) * (double)fVar20;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar39;
  auVar34 = roundpd(auVar35,auVar25,1);
  dVar31 = auVar34._0_8_;
  dVar32 = dVar31;
  if (dVar7 <= dVar31) {
    dVar32 = dVar7;
  }
  fVar20 = (float)(dVar39 - dVar31);
  if (dVar32 <= dVar8) {
    dVar32 = dVar8;
  }
  if (fVar21 <= fVar20) {
    fVar20 = fVar21;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  if (fVar21 <= fVar20) {
    fVar20 = fVar21;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  if ((uVar1 != uVar2) || (bVar6)) {
    if ((*(longlong *)&this->Observer == 0) ||
       ((*(longlong *)&(this->Observer).field_0x8 == 0 ||
        (cVar10 = (**(code **)(**(longlong **)&(this->Observer).field_0x8 + 0x10))(), cVar10 != '\0'
        )))) {
      if (6 < (byte)LogMovieSceneRepl._0_1_) {
        GetSequenceName(this,&local_230,true);
        if (6 < (byte)LogMovieSceneRepl._0_1_) {
          ::FString::PrintfImpl(&local_240,L"Frame: %d Subframe: %f");
          UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                    (&local_f0,(uint)(this->NetSyncProps).LastKnownStatus.Value);
          ::FString::PrintfImpl(&local_250,L"Frame: %d Subframe: %f");
          UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                    (&local_100,(uint)(this->Status).Value);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneRepl);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
        }
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
      }
      if (bVar9) {
        (this->ServerTimeSamples).ArrayNum = 0;
        if ((this->ServerTimeSamples).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this->ServerTimeSamples).AllocatorInstance,0,
                     &(this->ServerTimeSamples).ArrayMax);
        }
        PlayInternal(this);
        FVar16 = (this->NetSyncProps).LastKnownPosition;
        FVar4 = (this->PlayPosition).CurrentPosition;
        local_res10.SubFrame = FVar16.SubFrame;
        fVar21 = local_res10.SubFrame;
        fVar37 = local_res10.SubFrame + fVar40;
        iVar17 = (int)fVar37;
        fVar26 = fVar37;
        if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar37)) {
          auVar28._4_4_ = fVar37;
          auVar28._0_4_ = fVar37;
          auVar28._8_8_ = 0;
          uVar11 = movmskps(extraout_EAX,auVar28);
          fVar26 = (float)(int)(iVar17 - (uVar11 & 1));
        }
        local_res10.SubFrame = FVar4.SubFrame;
        fVar22 = fVar37 - fVar26;
        if (::FFrameTime::MaxSubframe <= fVar37 - fVar26) {
          fVar22 = ::FFrameTime::MaxSubframe;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        FVar19 = FVar16.FrameNumber.Value;
        auVar34 = roundps(auVar34,ZEXT416((uint)(local_res10.SubFrame - fVar22)),1);
        fStackX_24 = (local_res10.SubFrame - fVar22) - auVar34._0_4_;
        if (::FFrameTime::MaxSubframe <= fStackX_24) {
          fStackX_24 = ::FFrameTime::MaxSubframe;
        }
        uVar11 = (((FVar4.FrameNumber.Value.Value -
                   ((int)ROUND((fVar37 + fVar37) - __real_3f000000) >> 1)) - iVar18) - FVar19.Value)
                 + (int)auVar34._0_4_;
        if (fStackX_24 <= 0.0) {
          fStackX_24 = 0.0;
        }
        if (((int)uVar11 < 0) || ((uVar11 == 0 && (fStackX_24 < 0.0)))) {
          if (fStackX_24 == 0.0) {
            uVar11 = -uVar11;
            fStackX_24 = 0.0;
          }
          else {
            fStackX_24 = fVar27 - fStackX_24;
            uVar11 = ~uVar11;
            if (::FFrameTime::MaxSubframe <= fStackX_24) {
              fStackX_24 = ::FFrameTime::MaxSubframe;
            }
            if (fStackX_24 <= 0.0) {
              fStackX_24 = 0.0;
            }
          }
        }
        if (((int)dVar32 < (int)uVar11) || ((uVar11 == (int)dVar32 && (fVar20 < fStackX_24)))) {
          fVar40 = fVar40 + fVar21;
          local_res10.FrameNumber.Value =
               ((int)ROUND((fVar40 + fVar40) - __real_3f000000) >> 1) + FVar19.Value + iVar18;
          iVar18 = (int)fVar40;
          fVar27 = fVar40;
          if ((iVar18 != -0x80000000) && ((float)iVar18 != fVar40)) {
            auVar29._4_4_ = fVar40;
            auVar29._0_4_ = fVar40;
            auVar29._8_8_ = 0;
            uVar11 = movmskps(local_res10.FrameNumber.Value,auVar29);
            fVar27 = (float)(int)(iVar18 - (uVar11 & 1));
          }
          local_210.Time = 0.0;
          local_210.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_210.Timecode.Seconds = 0;
          local_210.Timecode.Frames = 0;
          local_210.Timecode.Subframe = 0.0;
          local_210.MarkedFrame.Data.ArrayNum = 0;
          local_210.MarkedFrame.Data.ArrayMax = 0;
          local_210.Timecode.Hours = 0;
          local_210.Timecode.Minutes = 0;
          local_210.Timecode.bDropFrameFormat = false;
          local_res10.SubFrame = fVar40 - fVar27;
          if (::FFrameTime::MaxSubframe <= fVar40 - fVar27) {
            local_res10.SubFrame = ::FFrameTime::MaxSubframe;
          }
          local_210.PositionType = Frame;
          local_210.UpdateMethod = Play;
          local_210.bHasJumped = false;
          if (local_res10.SubFrame <= 0.0) {
            local_res10.SubFrame = 0.0;
          }
          local_210.Frame = local_res10;
          SetPlaybackPosition(this,&local_210);
        }
      }
      else {
        if (bVar6) {
          uVar11 = *(uint *)&this->field_0x2cc;
          this->bIsAsyncUpdate = 1;
          uVar3 = (this->Status).Value;
          if (uVar3 == '\x01') {
            if (uVar1 == uVar2) {
              *(uint *)&this->field_0x2cc = uVar11 | 5;
            }
            else {
              FVar16 = (this->NetSyncProps).LastKnownPosition;
              local_res18.SubFrame = FVar16.SubFrame;
              fVar40 = fVar40 + local_res18.SubFrame;
              local_res18.FrameNumber.Value =
                   ((int)ROUND((fVar40 + fVar40) - __real_3f000000) >> 1) + iVar18 +
                   FVar16.FrameNumber.Value.Value;
              iVar18 = (int)fVar40;
              fVar27 = fVar40;
              if ((iVar18 != -0x80000000) && ((float)iVar18 != fVar40)) {
                auVar30._4_4_ = fVar40;
                auVar30._0_4_ = fVar40;
                auVar30._8_8_ = 0;
                uVar11 = movmskps(local_res18.FrameNumber.Value,auVar30);
                fVar27 = (float)(int)(iVar18 - (uVar11 & 1));
              }
              local_1d0.Time = 0.0;
              local_1d0.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1d0.Timecode.Seconds = 0;
              local_1d0.Timecode.Frames = 0;
              local_1d0.Timecode.Subframe = 0.0;
              local_1d0.MarkedFrame.Data.ArrayNum = 0;
              local_1d0.MarkedFrame.Data.ArrayMax = 0;
              local_1d0.Timecode.Hours = 0;
              local_1d0.Timecode.Minutes = 0;
              local_1d0.Timecode.bDropFrameFormat = false;
              local_res18.SubFrame = fVar40 - fVar27;
              if (::FFrameTime::MaxSubframe <= fVar40 - fVar27) {
                local_res18.SubFrame = ::FFrameTime::MaxSubframe;
              }
              local_1d0.PositionType = Frame;
              local_1d0.UpdateMethod = Play;
              local_1d0.bHasJumped = false;
              if (local_res18.SubFrame <= 0.0) {
                local_res18.SubFrame = 0.0;
              }
              local_1d0.Frame = local_res18;
              SetPlaybackPosition(this,&local_1d0);
            }
          }
          else if (uVar3 == '\x02') {
            local_190.Frame = (this->NetSyncProps).LastKnownPosition;
            local_190.Time = 0.0;
            local_190.MarkedFrame.Data.ArrayNum = 0;
            local_190.MarkedFrame.Data.ArrayMax = 0;
            local_190.Timecode.Hours = 0;
            local_190.Timecode.Minutes = 0;
            local_190.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_190.Timecode.Seconds = 0;
            local_190.Timecode.Frames = 0;
            local_190.Timecode.Subframe = 0.0;
            local_190.Timecode.bDropFrameFormat = false;
            local_190.PositionType = Frame;
            local_190.UpdateMethod = Scrub;
            local_190.bHasJumped = false;
            SetPlaybackPosition(this,&local_190);
          }
          else if (uVar3 == '\0') {
            FMovieScenePlaybackPosition::JumpTo
                      (&this->PlayPosition,local_e0,(this->NetSyncProps).LastKnownPosition,
                       this->bReversePlayback);
            this_01 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
            local_220.Time = (this->PlayPosition).CurrentPosition;
            local_220.Rate = (this->PlayPosition).InputRate;
            FMovieSceneTimeController::Reset(this_01,&local_220);
          }
          this->bIsAsyncUpdate = 0;
        }
        if (uVar1 != uVar2) {
          (this->ServerTimeSamples).ArrayNum = 0;
          if ((this->ServerTimeSamples).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->ServerTimeSamples).AllocatorInstance,0,
                       &(this->ServerTimeSamples).ArrayMax);
          }
          uVar1 = (this->NetSyncProps).LastKnownStatus.Value;
          if (uVar1 == '\x01') {
            Play(this);
          }
          else if (uVar1 == '\x02') {
            Scrub(this);
          }
          else if (uVar1 == '\x05') {
            Pause(this);
          }
        }
      }
    }
    else if (5 < (byte)LogMovieSceneRepl._0_1_) {
      GetSequenceName(this,&local_260,true);
      if (5 < (byte)LogMovieSceneRepl._0_1_) {
        ::FString::PrintfImpl(&local_270,L"Frame: %d Subframe: %f");
        UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                  (&local_110,(uint)(this->NetSyncProps).LastKnownStatus.Value);
        ::FString::PrintfImpl(&local_280,L"Frame: %d Subframe: %f");
        UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                  (&local_120,(uint)(this->Status).Value);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneRepl);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
      }
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PreEvaluation @ 146229aa0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::PreEvaluation
          (UMovieSceneSequencePlayer *this,FMovieSceneContext *param_1)

{
  bool *pbVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar2;
  int iVar3;
  atomic<unsigned___int64> aVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  pbVar1 = &(this->OldMaxTickRate).bIsSet;
  iVar3 = *(int *)&this->bOverridingDynResFrameTimeBudget;
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)pbVar1;
  pTVar2 = this_00 + (longlong)iVar3 * 3;
  while( true ) {
    if (*(int *)&this->bOverridingDynResFrameTimeBudget != iVar3) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pTVar2) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
    if ((*(int *)&this_00[2].AccessDetector.State != 0) &&
       (aVar4 = this_00[1].AccessDetector.State, aVar4 != (atomic<unsigned___int64>)0x0)) {
      (**(code **)(*(longlong *)aVar4 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this_00 = this_00 + 3;
  }
  if ((int)(this->LastTickGameTimeSeconds).TypedValue < 0) {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
              (*(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)pbVar1,
               *(int *)&this->bOverridingDynResFrameTimeBudget);
    *(undefined4 *)&this->bOverridingDynResFrameTimeBudget = 0;
    if ((this->LastTickGameTimeSeconds).TypedValue != 0.0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pbVar1,0,(int *)&this->LastTickGameTimeSeconds);
    }
  }
  else {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
              (*(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)pbVar1,
               *(int *)&this->bOverridingDynResFrameTimeBudget);
    *(undefined4 *)&this->bOverridingDynResFrameTimeBudget = 0;
  }
  return;
}

// QueueLatentAction @ 146229e90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::QueueLatentAction
          (UMovieSceneSequencePlayer *this,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1)

{
  UMovieSceneSequenceTickManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *pTVar4;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *pTVar5;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> local_38;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> local_28;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> local_18;
  
  pUVar1 = (this->TickManager).field0_0x0.DebugPtr;
  if (pUVar1 == (UMovieSceneSequenceTickManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2283531826637043517>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                       ,0x8c3,"TickManager");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((((this->Sequence).field0_0x0.DebugPtr)->SequenceFlags & BlockingEvaluation) == None) {
    pTVar4 = TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                       (&local_38,param_1);
    pTVar5 = TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                       (&local_28,pTVar4);
    FMovieSceneLatentActionManager::AddLatentAction(&pUVar1->LatentActionManager,pTVar5);
    if ((*(int *)&pTVar4->field_0x8 != 0) && (*(undefined8 **)pTVar4 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)pTVar4)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)pTVar4,0,0,0x10);
      *(undefined4 *)&pTVar4->field_0x8 = 0;
    }
    if (*(void **)pTVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar4);
    }
    goto LAB_146229efe;
  }
  pTVar4 = TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
           TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                     (&local_18,param_1);
  FMovieSceneLatentActionManager::AddLatentAction(&this->LatentActionManager,pTVar4);
LAB_146229efe:
  if ((*(int *)&param_1->field_0x8 != 0) && (*(undefined8 **)param_1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,0,0x10);
    *(undefined4 *)&param_1->field_0x8 = 0;
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// RPC_ExplicitServerUpdateEvent @ 146229fd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent
          (UMovieSceneSequencePlayer *this,EUpdatePositionMethod param_1,FFrameTime param_2,
          int param_3)

{
  UFunction *pUVar1;
  EUpdatePositionMethod local_18 [4];
  FFrameTime local_14;
  int local_c;
  
  local_18[0] = param_1;
  local_14 = param_2;
  local_c = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_18);
  return;
}

// RPC_ExplicitServerUpdateEvent_Implementation @ 14622a020

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent_Implementation
          (UMovieSceneSequencePlayer *this,EUpdatePositionMethod param_1,FFrameTime param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FMovieSceneSequencePlaybackParams local_88;
  FString local_48;
  FString local_38;
  
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 != (UObject *)0x0) && (*(char *)(pUVar4 + 9) == '\x03')) {
    if ((this == (UMovieSceneSequencePlayer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
       (pFVar5 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
       ((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      if ((param_3 <= this->SerialNumber) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2283531826637043981>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                             ,0x6f3,"NewSerialNumber > SerialNumber"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->SerialNumber = param_3;
      return;
    }
  }
  if (((this->Sequence).field0_0x0.DebugPtr != (UMovieSceneSequence *)0x0) &&
     (this->bIgnorePlaybackReplication == false)) {
    (this->ServerTimeSamples).ArrayNum = 0;
    if ((this->ServerTimeSamples).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ServerTimeSamples).AllocatorInstance,0,
                 &(this->ServerTimeSamples).ArrayMax);
    }
    if (5 < (byte)LogMovieScene._0_1_) {
      GetSequenceName(this,&local_98,true);
      if (5 < (byte)LogMovieScene._0_1_) {
        ::FString::PrintfImpl(&local_a8,L"Frame: %d Subframe: %f");
        UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                  (&local_38,(uint)(this->NetSyncProps).LastKnownStatus.Value);
        ::FString::PrintfImpl(&local_b8,L"Frame: %d Subframe: %f");
        UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                  (&local_48,(uint)(this->Status).Value);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    AdvanceClientSerialNumberTo(this,param_3);
    local_88.Time = 0.0;
    local_88.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.MarkedFrame.Data.ArrayNum = 0;
    local_88.MarkedFrame.Data.ArrayMax = 0;
    local_88.Timecode.Hours = 0;
    local_88.Timecode.Minutes = 0;
    local_88.Timecode.Seconds = 0;
    local_88.Timecode.Frames = 0;
    local_88.Timecode.Subframe = 0.0;
    local_88.Timecode.bDropFrameFormat = false;
    local_88.PositionType = Frame;
    local_88.bHasJumped = false;
    local_88.Frame = param_2;
    local_88.UpdateMethod = param_1;
    SetPlaybackPosition(this,&local_88);
  }
  return;
}

// RPC_OnFinishPlaybackEvent @ 14622a330

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RPC_OnFinishPlaybackEvent
          (UMovieSceneSequencePlayer *this,FFrameTime param_1,int param_2)

{
  UFunction *pUVar1;
  FFrameTime local_18;
  int local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// RPC_OnFinishPlaybackEvent_Implementation @ 14622a380

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RPC_OnFinishPlaybackEvent_Implementation
          (UMovieSceneSequencePlayer *this,FFrameTime param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  FString local_28;
  FString local_18;
  
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 != (UObject *)0x0) && (*(char *)(pUVar4 + 9) == '\x03')) {
    if ((this == (UMovieSceneSequencePlayer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
       (pFVar5 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
       ((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      if ((param_2 <= this->SerialNumber) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2283531826637043867>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                             ,0x765,"NewSerialNumber > SerialNumber"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->SerialNumber = param_2;
      return;
    }
  }
  if (((this->Sequence).field0_0x0.DebugPtr != (UMovieSceneSequence *)0x0) &&
     (this->bIgnorePlaybackReplication == false)) {
    GetSequenceName(this,&local_18,true);
    if (5 < (byte)LogMovieScene._0_1_) {
      ::FString::PrintfImpl(&local_28,L"Frame: %d Subframe: %f");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    AdvanceClientSerialNumberTo(this,param_2);
    FinishPlaybackInternal(this,param_1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RPC_OnStopEvent @ 14622a530

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RPC_OnStopEvent
          (UMovieSceneSequencePlayer *this,FFrameTime param_1,int param_2)

{
  UFunction *pUVar1;
  FFrameTime local_18;
  int local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// RPC_OnStopEvent_Implementation @ 14622a580

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RPC_OnStopEvent_Implementation
          (UMovieSceneSequencePlayer *this,FFrameTime param_1,int param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  FFrameTime FVar7;
  uint uVar8;
  ulonglong uVar9;
  EUpdatePositionMethod EVar10;
  float fStackX_14;
  FFrameTime local_res20;
  FString local_f8;
  FString local_e8;
  FMovieSceneSequencePlaybackParams local_d8;
  FMovieSceneSequencePlaybackParams local_98;
  FString local_50;
  
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if ((pUVar5 != (UObject *)0x0) && (*(char *)(pUVar5 + 9) == '\x03')) {
    if ((this == (UMovieSceneSequencePlayer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
       (pFVar6 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
       ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
      if ((param_2 <= this->SerialNumber) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2283531826637043935>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                             ,0x721,"NewSerialNumber > SerialNumber"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this->SerialNumber = param_2;
      return;
    }
  }
  if (((this->Sequence).field0_0x0.DebugPtr != (UMovieSceneSequence *)0x0) &&
     (this->bIgnorePlaybackReplication == false)) {
    (this->ServerTimeSamples).ArrayNum = 0;
    if ((this->ServerTimeSamples).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ServerTimeSamples).AllocatorInstance,0,
                 &(this->ServerTimeSamples).ArrayMax);
    }
    fStackX_14 = param_1.SubFrame;
    if (5 < (byte)LogMovieSceneRepl._0_1_) {
      GetSequenceName(this,&local_f8,true);
      if (5 < (byte)LogMovieSceneRepl._0_1_) {
        UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                  (&local_50,(uint)(this->Status).Value);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneRepl);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    AdvanceClientSerialNumberTo(this,param_2);
    uVar1 = (this->Status).Value;
    if (uVar1 == '\x01') {
      EVar10 = Play;
    }
    else if (uVar1 == '\x02') {
      EVar10 = Scrub;
    }
    else {
      EVar10 = Jump;
    }
    uVar8 = (this->NetSyncProps).LastKnownNumLoops - this->CurrentNumLoops;
    uVar9 = (ulonglong)uVar8;
    if (this->bReversePlayback == 0) {
      FVar7 = GetLastValidTime(this);
    }
    else {
      FVar7 = (FFrameTime)&local_res20;
      local_res20.SubFrame = 0.0;
      local_res20.FrameNumber.Value = (this->StartTime).Value;
    }
    FVar7 = *(FFrameTime *)FVar7;
    if (0 < (int)uVar8) {
      do {
        local_d8.Time = 0.0;
        local_d8.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.MarkedFrame.Data.ArrayNum = 0;
        local_d8.MarkedFrame.Data.ArrayMax = 0;
        local_d8.Timecode.Hours = 0;
        local_d8.Timecode.Minutes = 0;
        local_d8.Timecode.Seconds = 0;
        local_d8.Timecode.Frames = 0;
        local_d8.Timecode.Subframe = 0.0;
        local_d8.Timecode.bDropFrameFormat = false;
        local_d8.PositionType = Frame;
        local_d8.bHasJumped = false;
        local_d8.Frame = FVar7;
        local_d8.UpdateMethod = EVar10;
        SetPlaybackPosition(this,&local_d8);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    local_res20 = (this->PlayPosition).CurrentPosition;
    if ((local_res20.FrameNumber.Value.Value < param_1.FrameNumber.Value.Value) ||
       ((local_res20.FrameNumber.Value.Value == param_1.FrameNumber.Value.Value &&
        (local_res20.SubFrame < fStackX_14)))) {
      if (5 < (byte)LogMovieSceneRepl._0_1_) {
        ::FString::PrintfImpl(&local_e8,L"Frame: %d Subframe: %f");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneRepl);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      local_98.Time = 0.0;
      local_98.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.MarkedFrame.Data.ArrayNum = 0;
      local_98.MarkedFrame.Data.ArrayMax = 0;
      local_98.Timecode.Hours = 0;
      local_98.Timecode.Minutes = 0;
      local_98.Timecode.Seconds = 0;
      local_98.Timecode.Frames = 0;
      local_98.Timecode.Subframe = 0.0;
      local_98.Timecode.bDropFrameFormat = false;
      local_98.PositionType = Frame;
      local_98.bHasJumped = false;
      local_98.Frame = param_1;
      local_98.UpdateMethod = EVar10;
      SetPlaybackPosition(this,&local_98);
    }
    StopInternal(this,param_1);
  }
  return;
}

// RegisterReplicationFragments @ 14622c630

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RegisterReplicationFragments
          (UMovieSceneSequencePlayer *this,FFragmentRegistrationContext *param_1,
          EFragmentRegistrationFlags param_2)

{
  UE::Net::FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject
            ((UObject *)this,param_1,param_2,
             (TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *)0x0);
  return;
}

// RemoveWeight @ 146230470

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RemoveWeight
          (UMovieSceneSequencePlayer *this,FMovieSceneSequenceID param_1)

{
  FSequenceWeights *this_00;
  UMovieSceneEntitySystemLinker *pUVar1;
  
  pUVar1 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker
                     (&this->RootTemplateInstance);
  if ((pUVar1 != (UMovieSceneEntitySystemLinker *)0x0) &&
     (this_00 = (this->SequenceWeights).Ptr, this_00 != (FSequenceWeights *)0x0)) {
    UE::MovieScene::FSequenceWeights::RemoveWeight(this_00,param_1);
  }
  return;
}

// RemoveWeight @ 1462304c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::RemoveWeight(UMovieSceneSequencePlayer *this)

{
  FSequenceWeights *this_00;
  UMovieSceneEntitySystemLinker *pUVar1;
  
  pUVar1 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker
                     (&this->RootTemplateInstance);
  if ((pUVar1 != (UMovieSceneEntitySystemLinker *)0x0) &&
     (this_00 = (this->SequenceWeights).Ptr, this_00 != (FSequenceWeights *)0x0)) {
    UE::MovieScene::FSequenceWeights::RemoveWeight(this_00,(FMovieSceneSequenceID)0x0);
    return;
  }
  return;
}

// RequestInvalidateBinding @ 146230530

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RequestInvalidateBinding
          (UMovieSceneSequencePlayer *this,FMovieSceneObjectBindingID *param_1)

{
  FMovieSceneSequenceID local_res8 [8];
  
  local_res8[0].Value = param_1->SequenceID;
  FMovieSceneEvaluationState::Invalidate
            ((FMovieSceneEvaluationState *)&this->_padding_,&param_1->Guid,local_res8);
  return;
}

// ResolveBoundObjects @ 146231d50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::ResolveBoundObjects
          (UMovieSceneSequencePlayer *this,FResolveParams *param_1,FGuid *param_2,
          FMovieSceneSequenceID param_3,UMovieSceneSequence *param_4,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  FSharedPlaybackState *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  if ((((this->ServerTimeSamples).AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
      (lVar1._0_4_ = (this->ServerTimeSamples).ArrayNum,
      lVar1._4_4_ = (this->ServerTimeSamples).ArrayMax, lVar1 != 0)) &&
     (plVar2 = *(longlong **)&(this->ServerTimeSamples).ArrayNum,
     cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3.Value,param_5), cVar4 == '\0')) {
    return;
  }
  pcVar3 = *(code **)(param_4->_padding_ + 0x2d0);
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))(this)
  ;
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  local_38 = pTVar5->Object;
  local_30 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  (*pcVar3)(param_4,param_2,param_1,&local_38,param_5);
  return;
}

// RestoreState @ 146233060

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::RestoreState(UMovieSceneSequencePlayer *this)

{
  if (((this->PlaybackSettings).FinishCompletionStateOverride != ForceRestoreState) &&
     (2 < (byte)LogMovieScene._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  IMovieScenePlayer::RestorePreAnimatedState((IMovieScenePlayer *)&this->_padding_);
  return;
}

// RunLatentActions @ 146233730

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::RunLatentActions(UMovieSceneSequencePlayer *this)

{
  UMovieSceneSequence *pUVar1;
  UMovieSceneSequenceTickManager *this_00;
  code *pcVar2;
  bool bVar3;
  UMovieSceneSequencePlayer *local_res8 [4];
  code *local_18;
  UMovieSceneSequencePlayer **local_10;
  
  pUVar1 = (this->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
    if ((this->SynchronousRunner).Object != (FMovieSceneEntitySystemRunner *)0x0) {
      local_10 = local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMovieSceneSequencePlayer::RunLatentActions'::__l8::<lambda_1>,void>
                 ::Call;
      local_res8[0] = this;
      FMovieSceneLatentActionManager::RunLatentActions
                (&this->LatentActionManager,(TFunctionRef<void___cdecl(void)> *)&local_18);
      return;
    }
    this_00 = (this->TickManager).field0_0x0.DebugPtr;
    if (this_00 == (UMovieSceneSequenceTickManager *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2283531826637043491>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                         ,0x8dd,"TickManager");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if ((pUVar1->SequenceFlags & BlockingEvaluation) == None) {
      UMovieSceneSequenceTickManager::RunLatentActions(this_00);
      return;
    }
  }
  return;
}

// RunPostEvaluationCallbacks @ 146233820

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RunPostEvaluationCallbacks(UMovieSceneSequencePlayer *this)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  pTVar2 = &this->PostEvaluationCallbacks;
  iVar4 = (this->PostEvaluationCallbacks).ArrayNum;
  this_00 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = this_00 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->PostEvaluationCallbacks).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if ((*(int *)(this_00 + 0x10) != 0) && (*(longlong **)(this_00 + 8) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(this_00 + 8) + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this_00 = this_00 + 0x18;
  }
  piVar1 = &(this->PostEvaluationCallbacks).ArrayMax;
  pTVar5 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
           (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->PostEvaluationCallbacks).ArrayNum;
  if ((this->PostEvaluationCallbacks).ArrayMax < 0) {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>(pTVar5,iVar4);
    (this->PostEvaluationCallbacks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>(pTVar5,iVar4);
    (this->PostEvaluationCallbacks).ArrayNum = 0;
  }
  return;
}

// RunPreEvaluationCallbacks @ 146233900

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::RunPreEvaluationCallbacks(UMovieSceneSequencePlayer *this)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  pTVar2 = &this->PreEvaluationCallbacks;
  iVar4 = (this->PreEvaluationCallbacks).ArrayNum;
  this_00 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = this_00 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->PreEvaluationCallbacks).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if ((*(int *)(this_00 + 0x10) != 0) && (*(longlong **)(this_00 + 8) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(this_00 + 8) + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this_00 = this_00 + 0x18;
  }
  piVar1 = &(this->PreEvaluationCallbacks).ArrayMax;
  pTVar5 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
           (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->PreEvaluationCallbacks).ArrayNum;
  if ((this->PreEvaluationCallbacks).ArrayMax < 0) {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>(pTVar5,iVar4);
    (this->PreEvaluationCallbacks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>(pTVar5,iVar4);
    (this->PreEvaluationCallbacks).ArrayNum = 0;
  }
  return;
}

// Scrub @ 146233a70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::Scrub(UMovieSceneSequencePlayer *this)

{
  FMovieSceneTimeController *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  FFrameTime local_18;
  FFrameRate local_10;
  
  (this->Status).Value = '\x02';
  if ((this->TimeController).Object == (FMovieSceneTimeController *)0x0) {
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
  local_18 = (this->PlayPosition).CurrentPosition;
  pFVar1 = (this->TimeController).Object;
  local_10 = (this->PlayPosition).InputRate;
  if (6 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,&local_18);
  if ((pFVar1->PlaybackStartTime).bIsSet != false) {
    (pFVar1->PlaybackStartTime).bIsSet = false;
  }
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (((pUVar5 != (UObject *)0x0) && (*(char *)(pUVar5 + 9) == '\x03')) &&
     (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      (this->NetSyncProps).LastKnownPosition = (this->PlayPosition).CurrentPosition;
      (this->NetSyncProps).LastKnownStatus.Value = (this->Status).Value;
      (this->NetSyncProps).LastKnownNumLoops = this->CurrentNumLoops;
      (this->NetSyncProps).LastKnownSerialNumber = this->SerialNumber;
    }
  }
  return;
}

// SetCompletionModeOverride @ 1462348b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetCompletionModeOverride
          (UMovieSceneSequencePlayer *this,EMovieSceneCompletionModeOverride param_1)

{
  if (((((this->Status).Value == '\x01') &&
       ((this->PlaybackSettings).FinishCompletionStateOverride != ForceRestoreState)) &&
      (param_1 == ForceRestoreState)) && (2 < (byte)LogMovieScene._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    (this->PlaybackSettings).FinishCompletionStateOverride = ForceRestoreState;
    return;
  }
  (this->PlaybackSettings).FinishCompletionStateOverride = param_1;
  return;
}

// SetFrameRange @ 146234a40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetFrameRange
          (UMovieSceneSequencePlayer *this,int param_1,int param_2,float param_3)

{
  FFrameTime FVar1;
  FMovieSceneTimeController *this_00;
  int iVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  FFrameNumber FVar6;
  FFrameTime local_res8;
  FFrameTime local_28;
  FQualifiedFrameTime local_20;
  
  this->DurationSubFrames = param_3;
  (this->StartTime).Value = param_1;
  iVar2 = 0;
  if (0 < param_2) {
    iVar2 = param_2;
  }
  this->DurationFrames = iVar2;
  FVar1 = (this->PlayPosition).CurrentPosition;
  if (iVar2 < 1) {
    local_res8.SubFrame = 0.0;
    local_res8.FrameNumber.Value = param_1;
  }
  else {
    local_res8.FrameNumber.Value = iVar2 + param_1;
    local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    if (param_3 <= 0.0) {
      if (__real_3f800000 <= ::FFrameTime::MaxSubframe) {
        local_res8.SubFrame = __real_3f800000;
      }
      local_res8.FrameNumber.Value = local_res8.FrameNumber.Value + -1;
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
    }
    else {
      if (param_3 <= ::FFrameTime::MaxSubframe) {
        local_res8.SubFrame = param_3;
      }
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
    }
  }
  local_28.SubFrame = 0.0;
  local_28.FrameNumber.Value = param_1;
  local_20.Time = local_28;
  FVar6 = FVar1.FrameNumber.Value;
  if ((param_1 <= FVar6.Value) &&
     ((local_28.SubFrame = FVar1.SubFrame, FVar6.Value != param_1 || (0.0 <= local_28.SubFrame)))) {
    local_20.Time = local_res8;
    if ((FVar6.Value <= local_res8.FrameNumber.Value) &&
       ((FVar6.Value != local_res8.FrameNumber.Value || (local_28.SubFrame <= local_res8.SubFrame)))
       ) goto LAB_146234b36;
  }
  FMovieScenePlaybackPosition::Reset(&this->PlayPosition,local_20.Time);
LAB_146234b36:
  this_00 = (this->TimeController).Object;
  if (this_00 != (FMovieSceneTimeController *)0x0) {
    local_20.Time = (this->PlayPosition).CurrentPosition;
    local_20.Rate = (this->PlayPosition).InputRate;
    if ((this_00->PlaybackStartTime).bIsSet != false) {
      if (6 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      (**(code **)(this_00->_padding_ + 0x28))(this_00,&local_20);
      if ((this_00->PlaybackStartTime).bIsSet != false) {
        (this_00->PlaybackStartTime).bIsSet = false;
      }
      FMovieSceneTimeController::StartPlaying(this_00,&local_20);
    }
  }
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((((pUVar4 != (UObject *)0x0) && (*(char *)(pUVar4 + 9) == '\x03')) &&
      (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
     (pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4))
     , ((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
    (this->NetSyncProps).LastKnownPosition = (this->PlayPosition).CurrentPosition;
    (this->NetSyncProps).LastKnownStatus.Value = (this->Status).Value;
    (this->NetSyncProps).LastKnownNumLoops = this->CurrentNumLoops;
    (this->NetSyncProps).LastKnownSerialNumber = this->SerialNumber;
  }
  return;
}

// SetFrameRate @ 146234c30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetFrameRate(UMovieSceneSequencePlayer *this,FFrameRate param_1)

{
  EMovieSceneEvaluationType EVar1;
  UMovieSceneSequence *pUVar2;
  FFrameRate FVar3;
  FFrameRate FVar4;
  FFrameRate FVar5;
  int iVar6;
  longlong lVar7;
  FFrameTime FVar8;
  FText *this_00;
  undefined8 in_R8;
  longlong lVar9;
  FFrameRate local_res10;
  uint local_res18 [2];
  FString local_28;
  FText local_18;
  
  local_res10 = param_1;
  if ((0 < param_1.Denominator) && (0 < param_1.Numerator)) {
    pUVar2 = (this->Sequence).field0_0x0.DebugPtr;
    if ((pUVar2 != (UMovieSceneSequence *)0x0) &&
       ((lVar7 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2,param_1,in_R8,param_1), lVar7 != 0
        && (*(char *)(lVar7 + 0x148) == '\0')))) {
      lVar9 = (longlong)(int)((ulonglong)*(undefined8 *)(lVar7 + 0x138) >> 0x20) *
              (longlong)local_res10.Numerator;
      lVar7 = (longlong)(int)*(undefined8 *)(lVar7 + 0x138) * (longlong)local_res10.Denominator;
      if (((lVar9 - lVar7 != 0 && lVar7 <= lVar9) || (lVar7 % lVar9 != 0)) &&
         (2 < (byte)LogMovieScene._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
    }
    FVar3 = (this->PlayPosition).InputRate;
    local_res18[0] = (this->StartTime).Value;
    local_res18[1] = 0;
    FVar4.Denominator = 0;
    FVar4.Numerator = local_res18[0];
    FVar8 = ConvertFrameTime((FFrameTime)local_res18,FVar4,FVar3);
    local_res18[0] = this->DurationFrames;
    (this->StartTime).Value = *(int *)FVar8;
    local_res18[1] = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = local_res18[0];
    FVar8 = ConvertFrameTime((FFrameTime)local_res18,FVar5,FVar3);
    iVar6 = *(int *)FVar8;
    if (__real_3f000000 < *(float *)((longlong)FVar8 + 4) ||
        __real_3f000000 == *(float *)((longlong)FVar8 + 4)) {
      iVar6 = iVar6 + 1;
    }
    EVar1 = (this->PlayPosition).EvaluationType;
    this->DurationFrames = iVar6;
    FMovieScenePlaybackPosition::SetTimeBase
              (&this->PlayPosition,local_res10,(this->PlayPosition).OutputRate,EVar1);
    return;
  }
  GetSequenceName(this,&local_28,true);
  if (1 < (byte)LogMovieScene._0_1_) {
    this_00 = FFrameRate::ToPrettyText(&local_res10,&local_18);
    FText::ToString(this_00);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetHideHud @ 146234e50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::SetHideHud(UMovieSceneSequencePlayer *this,bool param_1)

{
  undefined1 *puVar1;
  
  (this->PlaybackSettings).bHideHud = 0;
  puVar1 = &(this->PlaybackSettings).field_0x1c;
  *(uint *)puVar1 = *(uint *)puVar1 | (uint)param_1 << 4;
  return;
}

// SetIgnorePlaybackReplication @ 146234e70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetIgnorePlaybackReplication
          (UMovieSceneSequencePlayer *this,bool param_1)

{
  this->bIgnorePlaybackReplication = param_1;
  return;
}

// SetPlayRate @ 146235140

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetPlayRate(UMovieSceneSequencePlayer *this,float param_1)

{
  (this->PlaybackSettings).PlayRate = param_1;
  return;
}

// SetPlaybackClient @ 146235150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetPlaybackClient
          (UMovieSceneSequencePlayer *this,TScriptInterface<IMovieScenePlaybackClient> *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (*(UObject **)param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1);
  }
  *(undefined8 *)&this->PlaybackClient = *(undefined8 *)param_1;
  *(undefined8 *)&(this->PlaybackClient).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  return;
}

// SetPlaybackPosition @ 1462351a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetPlaybackPosition
          (UMovieSceneSequencePlayer *this,FMovieSceneSequencePlaybackParams *param_1)

{
  FFrameTime FVar1;
  FFrameRate FVar2;
  undefined8 uVar3;
  FFrameTime FVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FMovieSceneTimeController *this_00;
  UClass *pUVar10;
  UObject *pUVar11;
  FUObjectItem *pFVar12;
  UFunction *pUVar13;
  FScriptContainerElement *pFVar14;
  FFrameTime local_res8;
  FFrameNumber local_28;
  FFrameNumber FStack_24;
  float local_20;
  uint uStack_1c;
  
  if ((((*(longlong *)&this->Observer == 0) || (*(longlong *)&(this->Observer).field_0x8 == 0)) ||
      (cVar6 = (**(code **)(**(longlong **)&(this->Observer).field_0x8 + 0x10))(), cVar6 != '\0'))
     && ((this->Sequence).field0_0x0.DebugPtr != (UMovieSceneSequence *)0x0)) {
    bVar7 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
    uVar5 = uStack_1c;
    if (bVar7) {
      local_28.Value = 0;
      FStack_24.Value = 0;
      local_20 = 0.0;
      puVar8 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)&local_28);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMovieSceneSequencePlaybackParams____6B_
        ;
        *(FFrameTime *)(puVar8 + 1) = param_1->Frame;
        *(float *)(puVar8 + 2) = param_1->Time;
        ::FString::FString((FString *)(puVar8 + 3),&param_1->MarkedFrame);
        uVar3 = *(undefined8 *)&(param_1->Timecode).Seconds;
        puVar8[5] = *(undefined8 *)&param_1->Timecode;
        puVar8[6] = uVar3;
        puVar8[7] = *(undefined8 *)&(param_1->Timecode).Subframe;
        *(EMovieScenePositionType *)(puVar8 + 8) = param_1->PositionType;
        *(EUpdatePositionMethod *)((longlong)puVar8 + 0x41) = param_1->UpdateMethod;
        *(bool *)((longlong)puVar8 + 0x42) = param_1->bHasJumped;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[9] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMovieSceneSequencePlaybackParams____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[10] = 0;
        local_res8 = (FFrameTime)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 10),(FObjectPtr)&local_res8);
        puVar8[0xb] = SetPlaybackPosition;
        puVar8[0xc] = (ulonglong)uVar5 << 0x20;
      }
      QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                              *)&local_28);
      pFVar14 = (param_1->MarkedFrame).Data.AllocatorInstance.Data;
    }
    else {
      FMovieSceneSequencePlaybackParams::GetPlaybackPosition
                (param_1,(UMovieSceneSequencePlayer *)&local_res8);
      FVar4 = local_res8;
      UpdateTimeCursorPosition(this,local_res8,param_1->UpdateMethod,param_1->bHasJumped);
      this_00 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
      FVar1 = (this->PlayPosition).CurrentPosition;
      local_28 = FVar1.FrameNumber.Value;
      FStack_24.Value = (int)FVar1.SubFrame;
      FVar2 = (this->PlayPosition).InputRate;
      local_20 = (float)FVar2.Numerator;
      uStack_1c = FVar2.Denominator;
      FMovieSceneTimeController::Reset(this_00,(FQualifiedFrameTime *)&local_28);
      pUVar10 = Z_Construct_UClass_AActor_NoRegister();
      pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
      if (((pUVar11 != (UObject *)0x0) && (*(char *)(pUVar11 + 9) == '\x03')) &&
         ((((uint)this->_padding_ >> 0x1e & 1) == 0 &&
          (pFVar12 = FUObjectArray::IndexToObject
                               (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
          ((uint)((ulonglong)(pFVar12->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)))) {
        local_28.Value._0_1_ = param_1->UpdateMethod;
        uStack_1c = this->SerialNumber + 1;
        FStack_24 = FVar4.FrameNumber.Value;
        local_20 = FVar4.SubFrame;
        pUVar13 = UObject::FindFunctionChecked
                            ((UObject *)this,
                             NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar13,&local_28);
      }
      pFVar14 = (param_1->MarkedFrame).Data.AllocatorInstance.Data;
    }
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
  }
  else {
    pFVar14 = (param_1->MarkedFrame).Data.AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
      return;
    }
  }
  return;
}

// SetPlaybackSettings @ 146235420

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetPlaybackSettings
          (UMovieSceneSequencePlayer *this,FMovieSceneSequencePlaybackSettings *param_1)

{
  FMovieSceneSequenceLoopCount FVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined7 uVar5;
  
  FVar1.Value = (param_1->LoopCount).Value;
  fVar2 = (param_1->TickInterval).TickIntervalSeconds;
  fVar3 = (param_1->TickInterval).EvaluationBudgetMicroseconds;
  *(undefined4 *)&(this->PlaybackSettings).field_0x0 = *(undefined4 *)&param_1->field_0x0;
  (this->PlaybackSettings).LoopCount = (FMovieSceneSequenceLoopCount)FVar1.Value;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = fVar2;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = fVar3;
  fVar2 = param_1->StartTime;
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined8 *)&(this->PlaybackSettings).TickInterval.bTickWhenPaused =
       *(undefined8 *)&(param_1->TickInterval).bTickWhenPaused;
  (this->PlaybackSettings).StartTime = fVar2;
  *(undefined4 *)&(this->PlaybackSettings).field_0x1c = uVar4;
  uVar5 = *(undefined7 *)&param_1->field_0x21;
  (this->PlaybackSettings).FinishCompletionStateOverride = param_1->FinishCompletionStateOverride;
  *(undefined7 *)&(this->PlaybackSettings).field_0x21 = uVar5;
  return;
}

// SetPlaybackStatus @ 146235460

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetPlaybackStatus(UMovieSceneSequencePlayer *this,Type param_1)

{
  return;
}

// SetTimeController @ 1462358f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetTimeController
          (UMovieSceneSequencePlayer *this,TSharedPtr<FMovieSceneTimeController,1> *param_1)

{
  FMovieSceneTimeController *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FQualifiedFrameTime local_28;
  FMovieSceneTimeController *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (this->TimeController).Object;
  pTStack_10 = (this->TimeController).SharedReferenceCount.ReferenceController;
  (this->TimeController).Object = pFVar1;
  (this->TimeController).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar1 = (this->TimeController).Object;
  if (pFVar1 != (FMovieSceneTimeController *)0x0) {
    local_28.Time = (this->PlayPosition).CurrentPosition;
    local_28.Rate = (this->PlayPosition).InputRate;
    if ((pFVar1->PlaybackStartTime).bIsSet != false) {
      if (6 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,&local_28);
      if ((pFVar1->PlaybackStartTime).bIsSet != false) {
        (pFVar1->PlaybackStartTime).bIsSet = false;
      }
      FMovieSceneTimeController::StartPlaying(pFVar1,&local_28);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTimeControllerDirectly @ 1462359e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetTimeControllerDirectly
          (UMovieSceneSequencePlayer *this,TSharedPtr<FMovieSceneTimeController,1> *param_1)

{
  FMovieSceneTimeController *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->TimeController).SharedReferenceCount.ReferenceController;
  (this->TimeController).Object = pFVar1;
  (this->TimeController).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTimeRange @ 146235a40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetTimeRange(UMovieSceneSequencePlayer *this,float param_1,float param_2)

{
  FFrameRate FVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 uVar9;
  undefined1 in_register_00001284 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  double dVar11;
  double dVar12;
  
  auVar6._4_12_ = in_register_00001284;
  auVar6._0_4_ = param_2;
  FVar1 = (this->PlayPosition).InputRate;
  dVar5 = (double)FVar1.Numerator;
  dVar12 = __real_3ff0000000000000 / (double)FVar1.Denominator;
  dVar11 = (double)param_1 * dVar5 * dVar12;
  dVar12 = (double)param_2 * dVar5 * dVar12;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar11;
  auVar7 = roundpd(auVar6,auVar8,1);
  dVar5 = auVar7._0_8_;
  if (__real_41dfffffffc00000 <= dVar5) {
    auVar7._0_8_ = __real_41dfffffffc00000;
  }
  if (auVar7._0_8_ <= __real_c1e0000000000000) {
    auVar7._0_8_ = __real_c1e0000000000000;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar12;
  auVar8 = roundpd(auVar7,auVar2,1);
  dVar12 = dVar12 - auVar8._0_8_;
  uVar4 = auVar8._0_4_;
  uVar9 = auVar8._4_4_;
  if (__real_41dfffffffc00000 <= auVar8._0_8_) {
    uVar4 = SUB84(__real_41dfffffffc00000,0);
    uVar9 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  if ((double)CONCAT44(uVar9,uVar4) <= __real_c1e0000000000000) {
    uVar4 = SUB84(__real_c1e0000000000000,0);
    uVar9 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  iVar3 = (int)dVar12;
  fVar10 = (float)dVar12 - (float)iVar3;
  if ((0.0 < fVar10) && (::FFrameTime::MaxSubframe <= fVar10)) {
    fVar10 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar10) {
    fVar10 = ::FFrameTime::MaxSubframe;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  iVar3 = (int)(double)CONCAT44(uVar9,uVar4) + iVar3;
  if (__real_3f000000 <= fVar10) {
    iVar3 = iVar3 + 1;
  }
  SetFrameRange(this,(int)(dVar11 - dVar5) + (int)auVar7._0_8_,iVar3,0.0);
  return;
}

// SetViewportSettings @ 146236370

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetViewportSettings
          (UMovieSceneSequencePlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

// SetWeight @ 146236380

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::SetWeight(UMovieSceneSequencePlayer *this,double param_1)

{
  SetWeight(this,param_1,MovieSceneSequenceID::Root);
  return;
}

// SetWeight @ 1462363a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::SetWeight
          (UMovieSceneSequencePlayer *this,double param_1,FMovieSceneSequenceID param_2)

{
  TUniquePtr<UE::MovieScene::FSequenceWeights,TDefaultDelete<UE::MovieScene::FSequenceWeights>_>
  *pTVar1;
  FSequenceWeights *this_00;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FRootInstanceHandle FVar5;
  UMovieSceneEntitySystemLinker *pUVar6;
  undefined4 extraout_var;
  FSequenceWeights *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  FName local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FTextFormat local_c8;
  FText local_b8;
  FString local_a8;
  FText local_98;
  FFormatArgumentValue local_88;
  longlong local_68;
  FText local_60;
  FTextFormat local_50 [2];
  
  pUVar6 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker
                     (&this->RootTemplateInstance);
  if (pUVar6 == (UMovieSceneEntitySystemLinker *)0x0) {
    return;
  }
  pTVar1 = &this->SequenceWeights;
  if (pTVar1->Ptr != (FSequenceWeights *)0x0) goto LAB_14623662d;
  FVar5 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                    (&this->RootTemplateInstance);
  pFVar7 = ::operator_new(0x20);
  if (pFVar7 == (FSequenceWeights *)0x0) {
    pFVar7 = (FSequenceWeights *)0x0;
  }
  else {
    pFVar7 = UE::MovieScene::FSequenceWeights::FSequenceWeights
                       (pFVar7,pUVar6,*(FRootInstanceHandle *)CONCAT44(extraout_var,FVar5));
  }
  if (pTVar1 == (TUniquePtr<UE::MovieScene::FSequenceWeights,TDefaultDelete<UE::MovieScene::FSequenceWeights>_>
                 *)&local_68) {
    if (pFVar7 != (FSequenceWeights *)0x0) {
      UE::MovieScene::FSequenceWeights::~FSequenceWeights(pFVar7);
      goto LAB_14623645d;
    }
  }
  else {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar7;
    if (this_00 != (FSequenceWeights *)0x0) {
      UE::MovieScene::FSequenceWeights::~FSequenceWeights(this_00);
      pFVar7 = this_00;
LAB_14623645d:
      ::operator_delete(pFVar7,0x20);
    }
  }
  if (((this->PlaybackSettings).bDynamicWeighting == 0) &&
     ((this->Sequence).field0_0x0.DebugPtr != (UMovieSceneSequence *)0x0)) {
    FText::AsLocalizable_Advanced_LocText
              (&local_98,L"UMovieSceneSequencePlayer",L"SetWeightWarning",
               L"Attempting to set a weight on sequence {0} with PlaybackSettings.bDynamicWeighting disabled. This may lead to undesireable blending artifacts or broken in/out blends."
              );
    local_res20 = (FName)((this->Sequence).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res20,&local_a8);
    pFVar8 = FText::FromString(&local_60,&local_a8);
    pFVar9 = FTextFormat::FTextFormat(local_50,&local_98,Default);
    local_88.Type = Text;
    FText::FText((FText *)&local_88.TextValue,pFVar8);
    if ((local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_d8.AllocatorInstance.Data,&local_88,1);
    local_c8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_c8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_b8,&local_c8,&local_d8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar8->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pFVar10 = FText::ToString(&local_b8);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage(pwVar11,Warning,(FName)0x0);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
LAB_14623662d:
  UE::MovieScene::FSequenceWeights::SetWeight(pTVar1->Ptr,param_2,param_1);
  return;
}

// ShouldStopOrLoop @ 146236660

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneSequencePlayer::ShouldStopOrLoop(UMovieSceneSequencePlayer *this,FFrameTime param_1)

{
  FFrameNumber FVar1;
  int iVar2;
  float fVar3;
  float fStackX_c;
  
  FVar1 = param_1.FrameNumber.Value;
  if ((this->Status).Value == '\x01') {
    if (this->bReversePlayback != 0) {
      return FVar1.Value < (this->StartTime).Value;
    }
    fVar3 = this->DurationSubFrames;
    if (::FFrameTime::MaxSubframe <= this->DurationSubFrames) {
      fVar3 = ::FFrameTime::MaxSubframe;
    }
    iVar2 = this->DurationFrames + (this->StartTime).Value;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if ((iVar2 < FVar1.Value) ||
       ((FVar1.Value == iVar2 && (fStackX_c = param_1.SubFrame, fVar3 <= fStackX_c)))) {
      return true;
    }
  }
  return false;
}

// StartTimeControllerAndBroadcastPlayState @ 146237720

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

void __thiscall
UMovieSceneSequencePlayer::StartTimeControllerAndBroadcastPlayState(UMovieSceneSequencePlayer *this)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  FFrameTime FVar4;
  FFrameTime FVar5;
  code *pcVar6;
  IConsoleVariable *pIVar7;
  bool bVar8;
  undefined8 uVar9;
  FMovieSceneEvaluationRange *pFVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  FUObjectItem *pFVar13;
  IConsoleManager *pIVar14;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  ForAnyElementType FVar15;
  float fVar16;
  undefined1 local_res8;
  undefined2 local_res9;
  FFrameTime local_res10;
  FFrameTime local_res18;
  FString local_128;
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  FQualifiedFrameTime local_fc;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  FFrameTime local_c8;
  FFrameRate FStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FMovieSceneEvaluationRange local_68;
  
  this->bPendingOnStartedPlaying = 1;
  (this->Status).Value = '\x01';
  if (((this->TimeController).Object == (FMovieSceneTimeController *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_fc.Time = (this->PlayPosition).CurrentPosition;
  local_fc.Rate = (this->PlayPosition).InputRate;
  FMovieSceneTimeController::StartPlaying((this->TimeController).Object,&local_fc);
  bVar8 = false;
  if ((this->PlayPosition).EvaluationType == FrameLocked) {
    if ((this->OldMaxTickRate).bIsSet == false) {
      fVar16 = (float)(**(code **)(GEngine->_padding_ + 0x318))();
      if ((TOptional<double> *)local_e8 != &this->OldMaxTickRate) {
        (this->OldMaxTickRate).TypedValue = (double)fVar16;
        (this->OldMaxTickRate).bIsSet = true;
      }
    }
    (**(code **)(GEngine->_padding_ + 800))();
    if (GSequencerApplyDisplayRateToDynResFrameTimeBudget != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar14 = IConsoleManager::Get();
        CVarDynResFrameTimeBudget =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar14 + 0xc0))(pIVar14,L"r.DynamicRes.FrameTimeBudget",1);
        _Init_thread_footer(&::_TSS0);
      }
      pIVar7 = CVarDynResFrameTimeBudget;
      local_res10.FrameNumber.Value = 0;
      local_res10.SubFrame = 0.0;
      local_118 = 0xe000000;
      local_114 = 0;
      local_110 = 0;
      local_108 = 0;
      local_104 = 0xf000000;
      local_100 = 0x1000000;
      ::FString::PrintfImpl(&local_128,L"%g");
      lVar3 = *(longlong *)pIVar7;
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar15.Data = local_128.Data.AllocatorInstance.Data;
      }
      uVar9 = (**(code **)(lVar3 + 0xa8))(pIVar7,local_a8,&local_118);
      (**(code **)(lVar3 + 0xb0))(pIVar7,FVar15.Data,uVar9);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      this->bOverridingDynResFrameTimeBudget = true;
    }
  }
  bVar1 = (this->PlayPosition).PreviousPlayEvalPosition.bIsSet;
  if (bVar1 != false) {
    FVar4 = (this->PlayPosition).CurrentPosition;
    FVar5 = (this->PlayPosition).PreviousPlayEvalPosition.TypedValue;
    if ((bVar1 == true) &&
       (local_res10 = FVar5, local_res18 = FVar4,
       FVar5.FrameNumber.Value.Value == FVar4.FrameNumber.Value.Value)) {
      local_res10.SubFrame = FVar5.SubFrame;
      local_res18.SubFrame = FVar4.SubFrame;
      bVar1 = local_res10.SubFrame != local_res18.SubFrame;
      if (bVar1) goto LAB_14623798a;
    }
    else {
LAB_14623798a:
      bVar8 = true;
    }
    if (!bVar8) goto LAB_1462379f6;
  }
  pFVar10 = FMovieScenePlaybackPosition::PlayTo
                      (&this->PlayPosition,&local_68,(this->PlayPosition).CurrentPosition,
                       this->bReversePlayback);
  local_res9 = 0;
  local_res8 = 0;
  local_d8._0_1_ = (pFVar10->EvaluationRange).LowerBound.Type;
  local_d8._1_3_ = *(undefined3 *)&(pFVar10->EvaluationRange).LowerBound.field_0x1;
  local_d8._4_4_ = (pFVar10->EvaluationRange).LowerBound.Value.FrameNumber;
  uStack_d0 = *(undefined8 *)&(pFVar10->EvaluationRange).LowerBound.Value.SubFrame;
  local_c8 = (pFVar10->EvaluationRange).UpperBound.Value;
  FStack_c0 = pFVar10->CurrentFrameRate;
  local_b8._0_4_ = pFVar10->Direction;
  local_b8._4_4_ = pFVar10->TimeOverride;
  (**(code **)(this->_padding_ + 0x2c8))(this,&local_d8,1,&local_res8);
LAB_1462379f6:
  RunLatentActions(this);
  pUVar11 = Z_Construct_UClass_AActor_NoRegister();
  pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
  if ((((pUVar12 != (UObject *)0x0) && (*(char *)(pUVar12 + 9) == '\x03')) &&
      (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
     (pFVar13 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
     ((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
    (this->NetSyncProps).LastKnownPosition = (this->PlayPosition).CurrentPosition;
    (this->NetSyncProps).LastKnownStatus.Value = (this->Status).Value;
    (this->NetSyncProps).LastKnownNumLoops = this->CurrentNumLoops;
    (this->NetSyncProps).LastKnownSerialNumber = this->SerialNumber;
  }
  if (this->bReversePlayback == 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPlay,&local_80);
    iVar2 = *(int *)&(this->OnPlay).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    if (iVar2 < 1) {
      return;
    }
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPlay;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPlayReverse,
               &local_98);
    iVar2 = *(int *)&(this->OnPlayReverse).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    if (iVar2 < 1) {
      return;
    }
    this_00 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPlayReverse;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (this_00,(void *)0x0);
  return;
}

// StaticRegisterNativesUMovieSceneSequencePlayer @ 146237cd0

void __cdecl UMovieSceneSequencePlayer::StaticRegisterNativesUMovieSceneSequencePlayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2a;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 146237e20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::Stop(UMovieSceneSequencePlayer *this)

{
  uint uVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  FFrameTime FVar4;
  FFrameNumber FVar5;
  float fVar6;
  
  uVar1 = (this->StartTime).Value;
  if ((this->bReversePlayback != 0) && (0 < this->DurationFrames)) {
    fVar6 = this->DurationSubFrames;
    FVar5.Value = uVar1 + this->DurationFrames;
    if (0.0 < fVar6) {
      if (::FFrameTime::MaxSubframe <= fVar6) {
        fVar6 = ::FFrameTime::MaxSubframe;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      FVar2.SubFrame = fVar6;
      FVar2.FrameNumber.Value = FVar5.Value;
      StopInternal(this,FVar2);
      return;
    }
    fVar6 = ::FFrameTime::MaxSubframe;
    if (__real_3f800000 <= ::FFrameTime::MaxSubframe) {
      fVar6 = __real_3f800000;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    FVar3.SubFrame = fVar6;
    FVar3.FrameNumber.Value = FVar5.Value + -1;
    StopInternal(this,FVar3);
    return;
  }
  FVar4.SubFrame = 0.0;
  FVar4.FrameNumber.Value = uVar1;
  StopInternal(this,FVar4);
  return;
}

// StopAtCurrentTime @ 146237ec0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::StopAtCurrentTime(UMovieSceneSequencePlayer *this)

{
  StopInternal(this,(this->PlayPosition).CurrentPosition);
  return;
}

// StopInternal @ 146237ee0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::StopInternal(UMovieSceneSequencePlayer *this,FFrameTime param_1)

{
  uchar uVar1;
  EMovieSceneCompletionModeOverride EVar2;
  code *pcVar3;
  undefined8 this_00;
  FMovieSceneEntitySystemRunner *this_01;
  char cVar4;
  bool bVar5;
  FRootInstanceHandle FVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UEnum *this_02;
  undefined4 extraout_var;
  FMovieSceneTimeController *this_03;
  undefined4 extraout_var_00;
  UMovieSceneSequencePlayer *local_res20;
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_100;
  FName local_f0;
  FFrameTime local_e8;
  UMovieSceneSequencePlayer *local_e0;
  FDelegateAllocation local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  UMovieSceneSequencePlayer *local_98;
  FFrameTime FStack_90;
  FQualifiedFrameTime local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  if (((*(longlong *)&this->Observer == 0) || (*(longlong *)&(this->Observer).field_0x8 == 0)) ||
     (cVar4 = (**(code **)(**(longlong **)&(this->Observer).field_0x8 + 0x10))(), cVar4 != '\0')) {
    bVar5 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
    if (bVar5) {
      local_128._0_8_ = StopInternal;
      local_128._12_4_ = FStack_90.SubFrame;
      local_128._8_4_ = 0;
      local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d8.DelegateSize = 0;
      puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_d8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFFrameTime____6B_
        ;
        *(FFrameTime *)(puVar7 + 1) = param_1;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFFrameTime____6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UMovieSceneSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UMovieSceneSequencePlayer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
        puVar7[4] = local_128._0_8_;
        puVar7[5] = CONCAT44(local_128._12_4_,local_128._8_4_);
      }
      QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                              *)&local_d8);
    }
    else {
      GetSequenceName(this,&local_a8,true);
      if (5 < (byte)LogMovieScene._0_1_) {
        this_02 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
        if ((this_02 == (UEnum *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UEnum::GetNameByValue(this_02,(long64)&local_f0);
        ::FName::ToString(&local_f0,&local_b8);
        local_e8 = param_1;
        ::FString::PrintfImpl(&local_c8,L"Frame: %d Subframe: %f");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      this->TimeControllerState = ReadyToPlay;
      uVar1 = (this->Status).Value;
      if ((uVar1 == '\x01') || (uVar1 == '\x05')) {
        (this->Status).Value = '\0';
        FMovieScenePlaybackPosition::Reset(&this->PlayPosition,param_1);
        if ((this->TimeController).Object != (FMovieSceneTimeController *)0x0) {
          this_03 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
          local_88.Time = (this->PlayPosition).CurrentPosition;
          local_88.Rate = (this->PlayPosition).InputRate;
          FMovieSceneTimeController::StopPlaying(this_03,&local_88);
        }
        this->CurrentNumLoops = 0;
        if ((this->PauseOnFrame).bIsSet != false) {
          (this->PauseOnFrame).bIsSet = false;
        }
        if ((this->LastTickGameTimeSeconds).bIsSet != false) {
          (this->LastTickGameTimeSeconds).bIsSet = false;
        }
        EVar2 = (this->PlaybackSettings).FinishCompletionStateOverride;
        (this->PlaybackSettings).LoopCount.Value = 0;
        if (EVar2 == ForceRestoreState) {
          IMovieScenePlayer::RestorePreAnimatedState((IMovieScenePlayer *)&this->_padding_);
        }
        else if (EVar2 == ForceKeepState) {
          IMovieScenePlayer::DiscardPreAnimatedState((IMovieScenePlayer *)&this->_padding_);
        }
        local_98 = this;
        FStack_90 = param_1;
        FMovieSceneRootEvaluationTemplateInstance::GetRunner
                  (&this->RootTemplateInstance,
                   (TSharedPtr<FMovieSceneEntitySystemRunner,1> *)local_128);
        if ((FMovieSceneEntitySystemRunner *)local_128._0_8_ != (FMovieSceneEntitySystemRunner *)0x0
           ) {
          if (((FMovieSceneEntitySystemRunner *)local_128._0_8_ ==
               (FMovieSceneEntitySystemRunner *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = local_128._0_8_;
          local_118 = (undefined1  [8])0x0;
          local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_110.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                     (FWriteAccessScope *)&local_60);
          local_48 = &local_110;
          puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_110);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar7[2] = uVar8;
            *puVar7 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMovieSceneSequencePlayer::StopInternal'::`29'::<lambda_1>_>
                       ::_vftable_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar7[3] = 0;
            local_e0 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_e0);
            puVar7[4] = local_98;
            *(FFrameTime *)(puVar7 + 5) = FStack_90;
          }
          if (local_60.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
          }
          FVar6 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                            (&this->RootTemplateInstance);
          bVar5 = FMovieSceneEntitySystemRunner::QueueFinalUpdate
                            ((FMovieSceneEntitySystemRunner *)this_00,
                             *(FInstanceHandle *)CONCAT44(extraout_var_00,FVar6),
                             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_118);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                     (FWriteAccessScope *)&local_78);
          if ((local_110.DelegateSize != 0) &&
             (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_110,0,0,0x10);
            local_110.DelegateSize = 0;
          }
          if (local_78.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
          }
          if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_110.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_118);
          if (bVar5) {
            if (((FMovieSceneEntitySystemRunner *)local_128._0_8_ ==
                 (FMovieSceneEntitySystemRunner *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FMovieSceneEntitySystemRunner::Flush
                      ((FMovieSceneEntitySystemRunner *)local_128._0_8_,0.0,None);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)CONCAT44(local_128._12_4_,local_128._8_4_));
      }
      else {
        bVar5 = FMovieSceneRootEvaluationTemplateInstance::IsValid(&this->RootTemplateInstance);
        if ((bVar5) &&
           (bVar5 = FMovieSceneRootEvaluationTemplateInstance::HasEverUpdated
                              (&this->RootTemplateInstance), bVar5)) {
          EVar2 = (this->PlaybackSettings).FinishCompletionStateOverride;
          if (EVar2 == ForceRestoreState) {
            IMovieScenePlayer::RestorePreAnimatedState((IMovieScenePlayer *)&this->_padding_);
          }
          else if (EVar2 == ForceKeepState) {
            IMovieScenePlayer::DiscardPreAnimatedState((IMovieScenePlayer *)&this->_padding_);
          }
          FMovieSceneRootEvaluationTemplateInstance::GetRunner
                    (&this->RootTemplateInstance,&local_100);
          if (local_100.Object != (FMovieSceneEntitySystemRunner *)0x0) {
            if ((local_100.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this_01 = local_100.Object;
            FVar6 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                              (&this->RootTemplateInstance);
            bVar5 = FMovieSceneEntitySystemRunner::QueueFinalUpdate
                              (this_01,*(FInstanceHandle *)CONCAT44(extraout_var,FVar6));
            if (bVar5) {
              if ((local_100.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FMovieSceneEntitySystemRunner::Flush(local_100.Object,0.0,None);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_100.SharedReferenceCount.ReferenceController);
        }
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// TearDown @ 1462386c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequencePlayer::TearDown(UMovieSceneSequencePlayer *this)

{
  UMovieSceneSequenceTickManager *this_00;
  TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  UMovieSceneSequencePlayer *pUVar7;
  FScriptContainerElement *pFVar8;
  UMovieSceneSequencePlayer *pUVar9;
  FScriptContainerElement *pFVar10;
  UMovieSceneSequencePlayer *pUVar11;
  undefined1 local_res8 [8];
  UMovieSceneSequencePlayer *local_res10;
  UMovieSceneSequencePlayer *local_68;
  UMovieSceneSequencePlayer *local_60;
  FWeakObjectPtr local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined4 local_44;
  
  FMovieSceneRootEvaluationTemplateInstance::TearDown(&this->RootTemplateInstance);
  this_00 = (this->TickManager).field0_0x0.DebugPtr;
  if (this_00 == (UMovieSceneSequenceTickManager *)0x0) {
    (this->Status).Value = '\0';
    return;
  }
  if ((this->RegisteredTickInterval).bIsSet != false) {
    (this->RegisteredTickInterval).bIsSet = false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar9 = (UMovieSceneSequencePlayer *)0x0;
  pUVar11 = (UMovieSceneSequencePlayer *)&this->_padding_;
  if (this == (UMovieSceneSequencePlayer *)0x0) {
    pUVar11 = pUVar9;
  }
  if (pUVar11 == (UMovieSceneSequencePlayer *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6187304322972254448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                       ,0xf0,"ClientInterface");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pTVar1 = this_00->PendingActorOperations;
    if (pTVar1 == (TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      pFVar8 = (this_00->LatentActionManager).LatentActions.AllocatorInstance.Data;
      iVar5 = (this_00->LatentActionManager).LatentActions.ArrayNum;
      pFVar10 = pFVar8 + (longlong)iVar5 * 0x10;
      while( true ) {
        if ((this_00->LatentActionManager).LatentActions.ArrayNum != iVar5) {
          `TCheckedPointerIterator<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar8 == pFVar10) break;
        if (((*(int *)&pFVar8[8].field_0x0 != 0) &&
            (*(longlong **)&pFVar8->field_0x0 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(**(longlong **)&pFVar8->field_0x0 + 0x38))(), cVar4 != '\0')) {
          pUVar7 = pUVar9;
          if ((*(int *)&pFVar8[8].field_0x0 != 0) &&
             (*(longlong **)&pFVar8->field_0x0 != (longlong *)0x0)) {
            pUVar7 = (UMovieSceneSequencePlayer *)
                     (**(code **)(**(longlong **)&pFVar8->field_0x0 + 0x10))();
          }
          if (((pUVar7 == this) && (*(int *)&pFVar8[8].field_0x0 != 0)) &&
             (*(undefined8 **)&pFVar8->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&pFVar8->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)pFVar8,0,0,0x10);
            *(undefined4 *)&pFVar8[8].field_0x0 = 0;
          }
        }
        pFVar8 = pFVar8 + 0x10;
      }
      UMovieSceneSequenceTickManager::UnregisterTickClientImpl
                (this_00,(IMovieSceneSequenceTickManagerClient *)pUVar11);
    }
    else {
      local_68 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_60 = pUVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res10);
      local_44 = 1;
      uStack_4c = 0;
      uStack_46 = 0;
      local_50 = 0;
      local_48 = 0x100;
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar8 + (longlong)pTVar1->ArrayMax * 0x28)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = pTVar1->ArrayNum;
      if (iVar5 == pTVar1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
      }
      lVar6 = (longlong)iVar5;
      pTVar1->ArrayNum = iVar5 + 1;
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      *(UMovieSceneSequencePlayer **)(pFVar8 + lVar6 * 0x28) = local_68;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_68 != (UMovieSceneSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_68);
      }
      *(UMovieSceneSequencePlayer **)(pFVar8 + lVar6 * 0x28 + 8) = local_60;
      *(FWeakObjectPtr *)(pFVar8 + lVar6 * 0x28 + 0x10) = local_58;
      *(ulonglong *)(pFVar8 + lVar6 * 0x28 + 0x18) = CONCAT44(uStack_4c,local_50);
      *(uint *)(pFVar8 + lVar6 * 0x28 + 0x20) = CONCAT22(uStack_46,local_48);
      *(undefined4 *)(pFVar8 + lVar6 * 0x28 + 0x24) = local_44;
    }
  }
  (this->TickManager).field0_0x0.DebugPtr = (UMovieSceneSequenceTickManager *)0x0;
  (this->Status).Value = '\0';
  return;
}

// TickFromSequenceTickManager @ 146238a00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::TickFromSequenceTickManager
          (UMovieSceneSequencePlayer *this,float param_1,FMovieSceneEntitySystemRunner *param_2)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar2 = this->_padding_;
  this->_padding_ = (longlong)param_2;
  if ((this->_padding_ & 0x100000000) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsAsyncUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                       ,0x46d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  Update((UMovieSceneSequencePlayer *)&this[-1].OnFinished.field_0x8,param_1);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  this->_padding_ = lVar2;
  return;
}

// Update @ 14623b680

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

void __thiscall UMovieSceneSequencePlayer::Update(UMovieSceneSequencePlayer *this,float param_1)

{
  UMovieSceneSequence *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  UWorld *this_00;
  AWorldSettings *pAVar6;
  FMovieSceneTimeController *pFVar7;
  longlong lVar8;
  FFrameRate FVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FFrameTime local_res8;
  undefined1 local_58 [4];
  FFrameTime local_54;
  FFrameRate local_4c;
  
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_);
  if (plVar5 == (longlong *)0x0) {
    this_00 = (UWorld *)0x0;
    fVar12 = 0.0;
  }
  else {
    this_00 = (UWorld *)(**(code **)(*plVar5 + 0x180))(plVar5);
    fVar12 = 0.0;
    if (this_00 != (UWorld *)0x0) {
      fVar12 = (float)this_00->TimeSeconds;
    }
  }
  UpdateNetworkSync(this);
  if (this->TimeControllerState == PreparingToPlay) {
    if ((this->TimeController).Object == (FMovieSceneTimeController *)0x0) {
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
    cVar4 = (**(code **)(((this->TimeController).Object)->_padding_ + 0x18))();
    if (cVar4 != '\0') {
      StartTimeControllerAndBroadcastPlayState(this);
      this->TimeControllerState = ReadyToPlay;
    }
  }
  if ((this->TimeControllerState != ReadyToPlay) || ((this->Status).Value != '\x01'))
  goto LAB_14623b8d1;
  fVar11 = (this->PlaybackSettings).PlayRate;
  if (this->bReversePlayback != 0) {
    fVar11 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  if ((this->TimeController).Object == (FMovieSceneTimeController *)0x0) {
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
  pFVar7 = (this->TimeController).Object;
  (**(code **)(pFVar7->_padding_ + 8))(pFVar7,param_1,fVar11);
  if (this_00 != (UWorld *)0x0) {
    pAVar6 = UWorld::GetWorldSettings(this_00,false,true);
    fVar10 = (float)(**(code **)(pAVar6->_padding_ + 0x790))(pAVar6);
    fVar11 = fVar11 * fVar10;
  }
  if (this->bSkipNextUpdate == 0) {
    bVar3 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
    if (bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsEvaluating()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                         ,0x453,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar7 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
    pUVar1 = (this->Sequence).field0_0x0.DebugPtr;
    if (pUVar1 == (UMovieSceneSequence *)0x0) {
LAB_14623b868:
      FVar9.Numerator = 60000;
      FVar9.Denominator = 1;
    }
    else {
      lVar8 = (**(code **)(pUVar1->_padding_ + 0x2f8))();
      if (lVar8 == 0) goto LAB_14623b868;
      lVar8 = (**(code **)(((this->Sequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
      FVar9 = *(FFrameRate *)(lVar8 + 0x140);
    }
    local_54 = (this->PlayPosition).CurrentPosition;
    local_4c = (this->PlayPosition).InputRate;
    pFVar7->DisplayRate = FVar9;
    (**(code **)(pFVar7->_padding_ + 0x30))(pFVar7,&local_res8,&local_54,fVar11);
    UpdateTimeCursorPosition(this,local_res8,Play,false);
  }
  this->bSkipNextUpdate = 0;
LAB_14623b8d1:
  if ((this_00 != (UWorld *)0x0) && ((TOptional<float> *)local_58 != &this->LastTickGameTimeSeconds)
     ) {
    (this->LastTickGameTimeSeconds).TypedValue = fVar12;
    (this->LastTickGameTimeSeconds).bIsSet = true;
  }
  return;
}

// UpdateAsync @ 14623b920

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::UpdateAsync(UMovieSceneSequencePlayer *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsAsyncUpdate != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsAsyncUpdate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                       ,0x46d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIsAsyncUpdate = 1;
  Update(this,param_1);
  this->bIsAsyncUpdate = 0;
  return;
}

// UpdateMovieSceneInstance @ 14623d380

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::UpdateMovieSceneInstance
          (UMovieSceneSequencePlayer *this,FMovieSceneEvaluationRange *param_1,Type param_2,
          bool param_3,bool param_4)

{
  undefined1 local_res20;
  bool local_res21;
  undefined1 local_res22;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  undefined8 local_18;
  
  local_38._0_1_ = (param_1->EvaluationRange).LowerBound.Type;
  local_38._1_3_ = *(undefined3 *)&(param_1->EvaluationRange).LowerBound.field_0x1;
  local_38._4_4_ = (param_1->EvaluationRange).LowerBound.Value.FrameNumber;
  uStack_30 = *(undefined8 *)&(param_1->EvaluationRange).LowerBound.Value.SubFrame;
  local_28 = (param_1->EvaluationRange).UpperBound.Value.FrameNumber.Value;
  fStack_24 = (param_1->EvaluationRange).UpperBound.Value.SubFrame;
  iStack_20 = (param_1->CurrentFrameRate).Numerator;
  iStack_1c = (param_1->CurrentFrameRate).Denominator;
  local_res21 = param_4;
  local_18._0_4_ = param_1->Direction;
  local_18._4_4_ = param_1->TimeOverride;
  local_res22 = 0;
  local_res20 = param_3;
  (**(code **)(this->_padding_ + 0x2c8))((undefined4)local_18,&local_38,param_2,&local_res20);
  return;
}

// UpdateMovieSceneInstance @ 14623d3e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::UpdateMovieSceneInstance
          (UMovieSceneSequencePlayer *this,FMovieSceneEvaluationRange *param_1,Type param_2,
          FMovieSceneUpdateArgs *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  FMovieSceneEntitySystemRunner *this_00;
  char cVar3;
  bool bVar4;
  FRootInstanceHandle FVar5;
  UMovieSceneSequence *pUVar6;
  undefined4 extraout_var;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_e8;
  FString local_d8;
  FMovieSceneContext local_c8;
  FFrameTime local_48;
  
  if (((*(longlong *)&this->Observer == 0) || (*(longlong *)&(this->Observer).field_0x8 == 0)) ||
     (cVar3 = (**(code **)(**(longlong **)&(this->Observer).field_0x8 + 0x10))(), cVar3 != '\0')) {
    pUVar6 = FMovieSceneRootEvaluationTemplateInstance::GetSequence
                       (&this->RootTemplateInstance,&MovieSceneSequenceID::Root);
    if (pUVar6 != (UMovieSceneSequence *)0x0) {
      if (6 < (byte)LogMovieScene._0_1_) {
        local_48 = (this->PlayPosition).CurrentPosition;
        GetSequenceName(this,&local_d8,true);
        if (6 < (byte)LogMovieScene._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if ((*(longlong *)&this->PlaybackClient != 0) &&
         (*(longlong *)&(this->PlaybackClient).field_0x8 != 0)) {
        plVar1 = *(longlong **)&(this->PlaybackClient).field_0x8;
        (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
      }
      this->bSkipNextUpdate = 0;
      if (param_3->bIsAsync != false) {
        if (((pUVar6->SequenceFlags & BlockingEvaluation) != None) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Args.bIsAsync || !EnumHasAnyFlags(MovieSceneSequence->GetFlags(), EMovieSceneSequenceFlags::BlockingEvaluation)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                               ,0x5ba,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((param_3->bIsAsync != false) &&
            ((this->TickManager).field0_0x0.DebugPtr == (UMovieSceneSequenceTickManager *)0x0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Args.bIsAsync || TickManager != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                               ,0x5bc,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_c8._padding_._0_1_ = (param_1->EvaluationRange).LowerBound.Type;
      local_c8._padding_._1_3_ = *(undefined3 *)&(param_1->EvaluationRange).LowerBound.field_0x1;
      local_c8._padding_._4_4_ = (param_1->EvaluationRange).LowerBound.Value.FrameNumber;
      local_c8._padding_ = *(longlong *)&(param_1->EvaluationRange).LowerBound.Value.SubFrame;
      local_c8._padding_ = *(longlong *)&(param_1->EvaluationRange).UpperBound.Value;
      local_c8._padding_ = *(longlong *)&param_1->CurrentFrameRate;
      local_c8.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
      local_c8.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
      local_c8._padding_._0_4_ = param_1->Direction;
      local_c8._padding_._4_4_ = param_1->TimeOverride;
      local_c8.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
      local_c8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_c8.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
      local_c8.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
      FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_c8.RootToSequenceWarpCounter);
      local_c8.PrePostRollStartEndTime.Value = -0x80000000;
      local_c8.HierarchicalBias = 0;
      local_c8.bHasPostRollStartTime = false;
      local_c8.bHasPreRollEndTime = false;
      local_c8.bSectionPostRoll = false;
      local_c8.bSectionPreRoll = false;
      local_c8.bSilent = false;
      local_c8.bHasLooped = param_3->bHasLooped;
      local_c8.bHasJumped = param_3->bHasJumped;
      local_c8.Status = param_2;
      FMovieSceneRootEvaluationTemplateInstance::GetRunner(&this->RootTemplateInstance,&local_e8);
      if (local_e8.Object != (FMovieSceneEntitySystemRunner *)0x0) {
        if ((local_e8.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = local_e8.Object;
        FVar5 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                          (&this->RootTemplateInstance);
        FMovieSceneEntitySystemRunner::QueueUpdate
                  (this_00,&local_c8,*(FInstanceHandle *)CONCAT44(extraout_var,FVar5),None);
        if ((local_e8.Object == (this->SynchronousRunner).Object) || (param_3->bIsAsync == false)) {
          if ((local_e8.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FMovieSceneEntitySystemRunner::Flush(local_e8.Object,0.0,None);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_c8.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_c8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_c8.RootToSequenceTransform.NestedTransforms.ArrayNum);
      if ((FMovieSceneNestedSequenceTransform *)
          local_c8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_c8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
    }
  }
  else if (1 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    return;
  }
  return;
}

// UpdateNetworkSync @ 14623d750

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

void __thiscall UMovieSceneSequencePlayer::UpdateNetworkSync(UMovieSceneSequencePlayer *this)

{
  int *piVar1;
  TArray<UMovieSceneSequencePlayer::FServerTimeSample,TSizedDefaultAllocator<32>_> *pTVar2;
  FFrameRate FVar3;
  FScriptContainerElement *pFVar4;
  FFrameTime FVar5;
  FName FVar6;
  FSharedPlaybackState *this_00;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  bool bVar13;
  uint uVar14;
  FFrameNumber FVar15;
  longlong *plVar16;
  UWorld *this_01;
  AWorldSettings *pAVar17;
  FFrameTime FVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_MovieSceneRepl_NumServerSamples> FVar20;
  uchar auVar21 [8];
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  FThreadSafeStaticStat<FStat_MovieSceneRepl_SmoothedServerTime> FVar24;
  FMovieSceneRootEvaluationTemplateInstance *this_02;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar25;
  FFrameTime *pFVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  FMovieSceneSequencePlaybackParams *pFVar30;
  FFrameNumber FVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  double dVar49;
  undefined1 in_XMM2 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar50;
  undefined1 auVar54 [16];
  double dVar51;
  undefined1 auVar55 [16];
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined1 auStackY_328 [32];
  FFrameTime local_2c8;
  float fStack_2bc;
  float fStack_2b4;
  FFrameTime local_2a0;
  FFrameTime local_298;
  LARGE_INTEGER local_290;
  undefined8 local_288;
  FName local_280;
  FFrameTime local_278;
  FName local_270;
  FFrameTime local_268;
  FFrameTime local_260;
  FFrameTime local_258;
  FStatMessage local_250;
  FStatMessage local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FMovieSceneSequencePlaybackParams local_1f0;
  FMovieSceneSequencePlaybackParams local_1b0;
  FName local_168;
  FName local_160;
  FString local_158;
  FString local_148;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_138 [3];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint uStack_f4;
  double local_e8;
  double dStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  if (ZPULL(*(undefined4 *)&this->field_0x2cc,2,1) == 0) {
    return;
  }
  *(uint *)&this->field_0x2cc = *(undefined4 *)&this->field_0x2cc & 0xfffffffb;
  if ((this->Status).Value != '\x01') {
    return;
  }
  fVar33 = GetPing(this);
  fVar44 = __real_3f800000;
  fVar35 = (this->PlaybackSettings).PlayRate;
  plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_);
  fVar34 = fVar44;
  if (((plVar16 != (longlong *)0x0) &&
      (this_01 = (UWorld *)(**(code **)(*plVar16 + 0x180))(plVar16), this_01 != (UWorld *)0x0)) &&
     (pAVar17 = UWorld::GetWorldSettings(this_01,false,true), pAVar17 != (AWorldSettings *)0x0)) {
    fVar34 = (float)(**(code **)(pAVar17->_padding_ + 0x790))(pAVar17);
  }
  fVar12 = __real_3f000000;
  FVar3 = (this->PlayPosition).InputRate;
  uVar58 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  uVar59 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  dVar51 = (double)FVar3.Numerator;
  dVar36 = __real_3ff0000000000000 / (double)FVar3.Denominator;
  dVar37 = (double)(fVar33 * __real_3a83126f) * dVar51 * dVar36;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = dVar37;
  auVar52 = roundpd(in_XMM2,auVar52,1);
  dVar37 = dVar37 - auVar52._0_8_;
  uVar56 = auVar52._0_4_;
  uVar57 = auVar52._4_4_;
  if (__real_41dfffffffc00000 <= auVar52._0_8_) {
    uVar56 = SUB84(__real_41dfffffffc00000,0);
    uVar57 = uVar58;
  }
  if ((double)CONCAT44(uVar57,uVar56) <= __real_c1e0000000000000) {
    uVar56 = SUB84(__real_c1e0000000000000,0);
    uVar57 = uVar59;
  }
  iVar27 = (int)dVar37;
  fVar33 = (float)dVar37 - (float)iVar27;
  if ((0.0 < fVar33) && (::FFrameTime::MaxSubframe <= fVar33)) {
    fVar33 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar33) {
    fVar33 = ::FFrameTime::MaxSubframe;
  }
  if (fVar33 <= 0.0) {
    fVar33 = 0.0;
  }
  dVar9 = (double)fVar35;
  dVar37 = ((double)((int)(double)CONCAT44(uVar57,uVar56) + iVar27) + (double)fVar33) * dVar9;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = dVar37;
  auVar53 = roundpd(auVar52,auVar38,1);
  dVar49 = auVar53._0_8_;
  if (__real_41dfffffffc00000 <= dVar49) {
    auVar53._0_8_ = __real_41dfffffffc00000;
  }
  fVar35 = (float)(dVar37 - dVar49);
  if (auVar53._0_8_ <= __real_c1e0000000000000) {
    auVar53._0_8_ = __real_c1e0000000000000;
  }
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  dVar37 = ((double)fVar35 + (double)(int)auVar53._0_8_) * (double)fVar34;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = dVar37;
  auVar52 = roundpd(auVar53,auVar39,1);
  dVar50 = auVar52._0_8_;
  dVar49 = dVar50;
  if (__real_41dfffffffc00000 <= dVar50) {
    dVar49 = __real_41dfffffffc00000;
  }
  if (dVar49 <= __real_c1e0000000000000) {
    dVar49 = __real_c1e0000000000000;
  }
  fVar35 = (float)(dVar37 - dVar50);
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  auVar40 = ZEXT416((uint)fVar35);
  if (fVar35 <= 0.0) {
    auVar40 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar40._0_4_) {
    auVar40._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar40._0_4_ <= 0.0) {
    auVar10._12_4_ = 0;
    auVar10._0_12_ = auVar40._4_12_;
    auVar40 = auVar10 << 0x20;
  }
  dVar36 = (double)(GSequencerNetSyncThresholdMS * __real_3a83126f) * dVar51 * dVar36;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = dVar36;
  auVar52 = roundpd(auVar52,auVar41,1);
  dVar36 = dVar36 - auVar52._0_8_;
  uVar56 = auVar52._0_4_;
  uVar57 = auVar52._4_4_;
  if (__real_41dfffffffc00000 <= auVar52._0_8_) {
    uVar56 = SUB84(__real_41dfffffffc00000,0);
    uVar57 = uVar58;
  }
  if ((double)CONCAT44(uVar57,uVar56) <= __real_c1e0000000000000) {
    uVar56 = SUB84(__real_c1e0000000000000,0);
    uVar57 = uVar59;
  }
  iVar27 = (int)dVar36;
  fVar35 = (float)dVar36 - (float)iVar27;
  if ((0.0 < fVar35) && (::FFrameTime::MaxSubframe <= fVar35)) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  FVar18 = (this->NetSyncProps).LastKnownPosition;
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  dVar9 = ((double)((int)(double)CONCAT44(uVar57,uVar56) + iVar27) + (double)fVar35) * dVar9;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = dVar9;
  auVar54 = roundpd(auVar52,auVar42,1);
  dVar37 = auVar54._0_8_;
  if (__real_41dfffffffc00000 <= dVar37) {
    auVar54._0_8_ = __real_41dfffffffc00000;
  }
  fVar35 = (float)(dVar9 - dVar37);
  if (auVar54._0_8_ <= __real_c1e0000000000000) {
    auVar54._0_8_ = __real_c1e0000000000000;
  }
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  iVar29 = ((this->NetSyncProps).LastKnownNumLoops - this->CurrentNumLoops) *
           ((~this->bReversePlayback & 1) * 2 + -1);
  dVar37 = ((double)fVar35 + (double)(int)auVar54._0_8_) * (double)fVar34;
  iVar27 = iVar29 * this->DurationFrames;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = dVar37;
  auVar52 = roundpd(auVar54,auVar43,1);
  dVar51 = auVar52._0_8_;
  dVar36 = dVar51;
  if (__real_41dfffffffc00000 <= dVar51) {
    dVar36 = __real_41dfffffffc00000;
  }
  fVar35 = (float)(dVar37 - dVar51);
  if (dVar36 <= __real_c1e0000000000000) {
    dVar36 = __real_c1e0000000000000;
  }
  local_2c8.SubFrame = FVar18.SubFrame;
  local_2c8.SubFrame = auVar40._0_4_ + local_2c8.SubFrame;
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  iVar28 = (int)local_2c8.SubFrame;
  if (::FFrameTime::MaxSubframe <= fVar35) {
    fVar35 = ::FFrameTime::MaxSubframe;
  }
  if (fVar35 <= 0.0) {
    fVar35 = 0.0;
  }
  fVar34 = local_2c8.SubFrame;
  if ((iVar28 != -0x80000000) && ((float)iVar28 != local_2c8.SubFrame)) {
    auVar45._4_4_ = local_2c8.SubFrame;
    auVar45._0_4_ = local_2c8.SubFrame;
    auVar45._8_8_ = 0;
    uVar14 = movmskps(iVar27,auVar45);
    fVar34 = (float)(int)(iVar28 - (uVar14 & 1));
  }
  fVar33 = local_2c8.SubFrame - fVar34;
  if (::FFrameTime::MaxSubframe <= local_2c8.SubFrame - fVar34) {
    fVar33 = ::FFrameTime::MaxSubframe;
  }
  auVar52 = ZEXT416((uint)fVar33);
  if (fVar33 <= 0.0) {
    auVar52 = ZEXT816(0) << 0x20;
  }
  auVar55._4_12_ = auVar52._4_12_;
  fVar33 = auVar52._0_4_ + 0.0;
  iVar27 = ((int)ROUND((fVar33 + fVar33) - __real_3f000000) >> 1) + iVar27;
  local_2c8.FrameNumber.Value =
       ((int)ROUND((local_2c8.SubFrame + local_2c8.SubFrame) - __real_3f000000) >> 1) + iVar27 +
       (int)dVar49 + FVar18.FrameNumber.Value.Value;
  iVar28 = (int)fVar33;
  fVar34 = fVar33;
  if ((iVar28 != -0x80000000) && ((float)iVar28 != fVar33)) {
    auVar46._4_4_ = fVar33;
    auVar46._0_4_ = fVar33;
    auVar46._8_8_ = 0;
    uVar14 = movmskps(iVar27,auVar46);
    fVar34 = (float)(int)(iVar28 - (uVar14 & 1));
  }
  fVar48 = fVar33 - fVar34;
  if (::FFrameTime::MaxSubframe <= fVar33 - fVar34) {
    fVar48 = ::FFrameTime::MaxSubframe;
  }
  auVar55._0_4_ = fVar48;
  if (fVar48 <= 0.0) {
    auVar11._12_4_ = 0;
    auVar11._0_12_ = auVar55._4_12_;
    auVar55 = auVar11 << 0x20;
  }
  local_2c8.SubFrame = auVar55._0_4_;
  if (iVar29 != 0) {
    (this->ServerTimeSamples).ArrayNum = 0;
    if ((this->ServerTimeSamples).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ServerTimeSamples).AllocatorInstance,0,
                 &(this->ServerTimeSamples).ArrayMax);
    }
  }
  bVar32 = GSequencerMaxSmoothedNetSyncSampleAge != 0;
  if (GSequencerMaxSmoothedNetSyncSampleAge != 0) {
    FVar3 = (this->PlayPosition).InputRate;
    pTVar2 = &this->ServerTimeSamples;
    local_298 = local_2c8;
    iVar27 = FVar3.Denominator;
    auVar55._0_8_ =
         ((double)local_2c8.SubFrame * (double)iVar27 +
         (double)((longlong)local_2c8.FrameNumber.Value * (longlong)iVar27)) /
         (double)FVar3.Numerator;
    auVar55._8_8_ = 0;
    local_e8 = auVar55._0_8_;
    QueryPerformanceCounter(&local_290);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    dStack_e0 = (double)local_290.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000;
    if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 <
         pFVar4 + (longlong)(this->ServerTimeSamples).ArrayMax * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar27 = (this->ServerTimeSamples).ArrayNum;
    piVar1 = &(this->ServerTimeSamples).ArrayMax;
    if (iVar27 == *piVar1) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ServerTimeSamples).ArrayNum = iVar27 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar27 * 0x10;
    *(double *)pFVar4 = local_e8;
    *(double *)(pFVar4 + 8) = dStack_e0;
  }
  FVar18 = local_2c8;
  if (bVar32) {
    FVar18 = UpdateServerTimeSamples(this);
    FVar18 = *(FFrameTime *)FVar18;
  }
  FVar5 = (this->PlayPosition).CurrentPosition;
  FVar31 = FVar18.FrameNumber.Value;
  local_2c8.SubFrame = FVar5.SubFrame;
  fStack_2bc = FVar18.SubFrame;
  fVar34 = fStack_2bc;
  auVar52 = roundps(auVar55,ZEXT416((uint)(local_2c8.SubFrame - fStack_2bc)),1);
  local_2c8.SubFrame = (local_2c8.SubFrame - fStack_2bc) - auVar52._0_4_;
  if (::FFrameTime::MaxSubframe <= local_2c8.SubFrame) {
    local_2c8.SubFrame = ::FFrameTime::MaxSubframe;
  }
  local_2c8.FrameNumber.Value = (int)auVar52._0_4_ + (FVar5.FrameNumber.Value.Value - FVar31.Value);
  if (local_2c8.SubFrame <= 0.0) {
    local_2c8.SubFrame = 0.0;
  }
  if ((local_2c8.FrameNumber.Value < 0) ||
     ((local_2c8.FrameNumber.Value == 0 && (local_2c8.SubFrame < 0.0)))) {
    local_288._0_4_ = local_2c8.FrameNumber.Value;
    local_288._4_4_ = local_2c8.SubFrame;
    if (local_2c8.SubFrame == 0.0) {
      uVar14 = -local_2c8.FrameNumber.Value;
      fStack_2b4 = 0.0;
    }
    else {
      uVar14 = ~local_2c8.FrameNumber.Value;
      fStack_2b4 = fVar44 - local_2c8.SubFrame;
      if (::FFrameTime::MaxSubframe <= fVar44 - local_2c8.SubFrame) {
        fStack_2b4 = ::FFrameTime::MaxSubframe;
      }
      if (fStack_2b4 <= 0.0) {
        fStack_2b4 = 0.0;
      }
    }
    local_2c8 = (FFrameTime)CONCAT44(fStack_2b4,uVar14);
  }
  local_278 = FVar18;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar20 = StatPtr_MovieSceneRepl_NumServerSamples;
    if (StatPtr_MovieSceneRepl_NumServerSamples ==
        (FThreadSafeStaticStat<FStat_MovieSceneRepl_NumServerSamples>)0x0) {
      pFVar19 = ::FName::FName(&local_168,"MovieSceneRepl_NumServerSamples");
      FVar20 = (FThreadSafeStaticStat<FStat_MovieSceneRepl_NumServerSamples>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneRepl_NumServerSamples,
                          *pFVar19,L"NumServerSamples","STATGROUP_MovieSceneRepl","STATCAT_Advanced"
                          ,L"MovieSceneRepl",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar20;
    auVar21 = (uchar  [8])(longlong)(this->ServerTimeSamples).ArrayNum;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      local_250.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
      local_280 = FVar6;
      local_250.StatData.Pad = auVar21;
      local_250.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar22,&local_250);
      FStatsTrace::Set(&local_280,(long64)auVar21);
      if (pFVar22->ScopeCount == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar24 = StatPtr_MovieSceneRepl_SmoothedServerTime;
      if (StatPtr_MovieSceneRepl_SmoothedServerTime ==
          (FThreadSafeStaticStat<FStat_MovieSceneRepl_SmoothedServerTime>)0x0) {
        pFVar19 = ::FName::FName(&local_160,"MovieSceneRepl_SmoothedServerTime");
        FVar24 = (FThreadSafeStaticStat<FStat_MovieSceneRepl_SmoothedServerTime>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneRepl_SmoothedServerTime,
                            *pFVar19,L"SmoothedServerTime","STATGROUP_MovieSceneRepl",
                            "STATCAT_Advanced",L"MovieSceneRepl",true,true,NumBits,false,false,
                            MCR_Invalid);
      }
      FVar6 = *(FName *)FVar24;
      dVar37 = (double)local_278.SubFrame;
      if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar22 == (FThreadStats *)0x0) {
          pFVar23 = FThreadStatsPool::Get();
          pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
        }
        local_240.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
        local_270 = FVar6;
        local_240.StatData.Pad = (uchar  [8])((double)FVar31.Value + dVar37);
        local_240.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar22,&local_240);
        FStatsTrace::Set(&local_270,(double)FVar31.Value + dVar37);
        if (pFVar22->ScopeCount == 0) {
          FThreadStats::Flush(pFVar22,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar22,false,false);
        }
      }
    }
  }
  fVar35 = fVar35 + auVar40._0_4_;
  iVar27 = ((int)ROUND((fVar35 + fVar35) - fVar12) >> 1) + (int)dVar36 + (int)dVar49;
  if ((int)SUB84(local_2c8,0) <= iVar27) {
    if ((int)SUB84(local_2c8,0) != iVar27) {
      return;
    }
    iVar29 = (int)fVar35;
    fVar44 = fVar35;
    if ((iVar29 != -0x80000000) && ((float)iVar29 != fVar35)) {
      auVar47._4_4_ = fVar35;
      auVar47._0_4_ = fVar35;
      auVar47._8_8_ = 0;
      uVar14 = movmskps(iVar27,auVar47);
      fVar44 = (float)(int)(iVar29 - (uVar14 & 1));
    }
    fStack_2bc = (float)((ulonglong)local_2c8 >> 0x20);
    fVar33 = fVar35 - fVar44;
    if (::FFrameTime::MaxSubframe <= fVar35 - fVar44) {
      fVar33 = ::FFrameTime::MaxSubframe;
    }
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    if (fStack_2bc <= fVar33) {
      return;
    }
  }
  if (4 < (byte)LogMovieSceneRepl._0_1_) {
    FVar5 = (this->PlayPosition).CurrentPosition;
    GetSequenceName(this,&local_200,true);
    if (4 < (byte)LogMovieSceneRepl._0_1_) {
      local_268 = FVar18;
      ::FString::PrintfImpl(&local_210,L"Frame: %d Subframe: %f");
      local_260 = (this->NetSyncProps).LastKnownPosition;
      ::FString::PrintfImpl(&local_220,L"Frame: %d Subframe: %f");
      UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                (&local_148,(uint)(this->NetSyncProps).LastKnownStatus.Value);
      local_258 = FVar5;
      ::FString::PrintfImpl(&local_230,L"Frame: %d Subframe: %f");
      UEnum::GetValueAsString<enum_EMovieScenePlayerStatus::Type>
                (&local_158,(uint)(this->Status).Value);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneRepl);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
  }
  ConvertFrameTime((FFrameTime)&local_2a0,(FFrameRate)(this->PlayPosition).CurrentPosition,
                   (this->PlayPosition).InputRate);
  FVar5 = (this->PlayPosition).CurrentPosition;
  FVar15 = FVar5.FrameNumber.Value;
  local_2c8.SubFrame = FVar5.SubFrame;
  if (this->bReversePlayback == 0) {
    if ((FVar15.Value < FVar31.Value) ||
       ((FVar31.Value == FVar15.Value && (local_2c8.SubFrame < fVar34)))) goto LAB_14623e397;
  }
  else if ((FVar31.Value < FVar15.Value) ||
          ((FVar31.Value == FVar15.Value && (fVar34 < local_2c8.SubFrame)))) {
LAB_14623e397:
    bVar32 = true;
    goto LAB_14623e399;
  }
  bVar32 = false;
LAB_14623e399:
  if (bVar32) {
    local_108 = 0;
    uStack_100 = 0;
    pFVar30 = &local_1b0;
    local_f8 = 0;
    uStack_f4 = uStack_f4 & 0xffffff00;
    local_1b0.Timecode.Hours = 0;
    local_1b0.Timecode.Minutes = 0;
    local_1b0.Timecode.Seconds = 0;
    local_1b0.Timecode.Frames = 0;
    local_1b0.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Timecode._16_8_ = (ulonglong)uStack_f4 << 0x20;
    local_1b0.MarkedFrame.Data.ArrayNum = 0;
    local_1b0.MarkedFrame.Data.ArrayMax = 0;
    local_1b0.PositionType = Frame;
    local_1b0.UpdateMethod = Play;
    local_1b0.Time = 0.0;
    local_1b0.bHasJumped = true;
    local_1b0.Frame = FVar18;
  }
  else {
    pFVar30 = &local_1f0;
    local_1f0.Time = 0.0;
    local_1f0.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.Timecode.Seconds = 0;
    local_1f0.Timecode.Frames = 0;
    local_1f0.Timecode.Subframe = 0.0;
    local_1f0.Timecode.bDropFrameFormat = false;
    local_1f0.bHasJumped = false;
    local_1f0.MarkedFrame.Data.ArrayNum = 0;
    local_1f0.MarkedFrame.Data.ArrayMax = 0;
    local_1f0.Timecode.Hours = 0;
    local_1f0.Timecode.Minutes = 0;
    local_1f0.PositionType = Frame;
    local_1f0.UpdateMethod = Jump;
    local_1f0.Frame = FVar18;
  }
  SetPlaybackPosition(this,pFVar30);
  this->bSkipNextUpdate = 1;
  this_02 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  pTVar25 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_02,local_138);
  if ((pTVar25->Object == (FSharedPlaybackState *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar32)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = pTVar25->Object;
  pTVar7 = (pTVar25->SharedReferenceCount).ReferenceController;
  (pTVar25->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar25->Object = (FSharedPlaybackState *)0x0;
  if ((this_00 == (FSharedPlaybackState *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar32)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138[0].SharedReferenceCount.ReferenceController);
  pFVar26 = (FFrameTime *)
            UE::MovieScene::FSharedPlaybackState::
            SetOrAddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>(this_00);
  if (&local_2a0 != pFVar26) {
    *pFVar26 = local_2a0;
    *(bool *)&pFVar26[1].FrameNumber.Value = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// UpdateNetworkSyncProperties @ 14623e580

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::UpdateNetworkSyncProperties(UMovieSceneSequencePlayer *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 != (UObject *)0x0) && (*(char *)(pUVar4 + 9) == '\x03')) {
    if (this == (UMovieSceneSequencePlayer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
      pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4))
      ;
      if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
        (this->NetSyncProps).LastKnownPosition = (this->PlayPosition).CurrentPosition;
        (this->NetSyncProps).LastKnownStatus.Value = (this->Status).Value;
        (this->NetSyncProps).LastKnownNumLoops = this->CurrentNumLoops;
        (this->NetSyncProps).LastKnownSerialNumber = this->SerialNumber;
      }
    }
  }
  return;
}

// UpdateServerTimeSamples @ 14623e690

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

FFrameTime __thiscall
UMovieSceneSequencePlayer::UpdateServerTimeSamples(UMovieSceneSequencePlayer *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<UMovieSceneSequencePlayer::FServerTimeSample,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  longlong *plVar12;
  UWorld *this_00;
  AWorldSettings *pAVar13;
  FFrameTime FVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FFrameTime in_RDX;
  FFrameRate FVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  double dVar25;
  double extraout_XMM0_Qa;
  double dVar26;
  double dVar27;
  undefined1 in_XMM3 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 local_res8 [8];
  FFrameTime local_res10;
  undefined1 local_res18 [8];
  float local_res20 [2];
  undefined4 local_d8;
  uint local_d4;
  double local_d0;
  LARGE_INTEGER local_c8;
  FScriptContainerElement *local_c0;
  UMovieSceneSequencePlayer *local_b8;
  undefined4 *local_b0;
  double *local_a8;
  float *local_a0;
  
  local_res10 = in_RDX;
  QueryPerformanceCounter(&local_c8);
  fVar9 = __real_3a83126f;
  fVar29 = __real_3f800000;
  local_res20[0] = (this->PlaybackSettings).PlayRate;
  local_d0 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  dVar7 = local_d0 - (double)((float)GSequencerMaxSmoothedNetSyncSampleAge * __real_3a83126f);
  if (this->bReversePlayback != 0) {
    local_res20[0] = (float)((uint)local_res20[0] ^ __xmm_80000000800000008000000080000000);
  }
  local_d8 = 0x3f800000;
  plVar12 = (longlong *)(**(code **)(this->_padding_ + 0x80))(&this->_padding_);
  if (((plVar12 != (longlong *)0x0) &&
      (this_00 = (UWorld *)(**(code **)(*plVar12 + 0x180))(plVar12), this_00 != (UWorld *)0x0)) &&
     (pAVar13 = UWorld::GetWorldSettings(this_00,false,true), pAVar13 != (AWorldSettings *)0x0)) {
    local_d8 = (**(code **)(pAVar13->_padding_ + 0x790))(pAVar13);
  }
  pTVar3 = &this->ServerTimeSamples;
  uVar19 = (this->ServerTimeSamples).ArrayNum;
  iVar15 = 0;
  uVar18 = uVar19;
  iVar11 = 0;
  if (0 < (int)uVar19) {
    do {
      uVar20 = uVar18 >> 1;
      pFVar16 = (pTVar3->AllocatorInstance).Data + (longlong)(int)(uVar20 + iVar11) * 0x10 + 8;
      iVar15 = iVar11;
      if (*(double *)pFVar16 <= dVar7 && dVar7 != *(double *)pFVar16) {
        iVar15 = uVar20 + iVar11 + (uVar18 & 1);
      }
      uVar18 = uVar20;
      iVar11 = iVar15;
    } while (uVar20 != 0);
  }
  if (iVar15 < (int)uVar19) {
    if (0 < iVar15) {
      if ((iVar15 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        FVar14 = (FFrameTime)(*pcVar6)();
        return FVar14;
      }
      pFVar16 = (pTVar3->AllocatorInstance).Data;
      iVar11 = (this->ServerTimeSamples).ArrayNum - iVar15;
      if (iVar11 != 0) {
        memmove(pFVar16,pFVar16 + (longlong)iVar15 * 0x10,(longlong)iVar11 << 4);
      }
      piVar1 = &(this->ServerTimeSamples).ArrayNum;
      *piVar1 = *piVar1 - iVar15;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar3->AllocatorInstance,(this->ServerTimeSamples).ArrayNum,
                 &(this->ServerTimeSamples).ArrayMax);
    }
  }
  else {
    (this->ServerTimeSamples).ArrayNum = 0;
    if ((this->ServerTimeSamples).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,&(this->ServerTimeSamples).ArrayMax);
    }
  }
  iVar11 = (this->ServerTimeSamples).ArrayNum;
  local_d4 = GSequencerMaxSmoothedNetSyncSampleCount;
  if (GSequencerMaxSmoothedNetSyncSampleCount < iVar11) {
    uVar19 = GSequencerMaxSmoothedNetSyncSampleCount - 1;
    uVar18 = 1;
    fVar30 = (float)iVar11 / (float)GSequencerMaxSmoothedNetSyncSampleCount;
    if (fVar30 <= fVar29) {
      fVar30 = fVar29;
    }
    if (1 < (int)uVar19) {
      lVar24 = 0x10;
      do {
        iVar11 = (this->ServerTimeSamples).ArrayNum;
        uVar21 = ~(int)((float)(int)uVar18 * fVar30) + iVar11;
        uVar20 = 0;
        if ((int)uVar21 < iVar11) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          FVar14 = (FFrameTime)(*pcVar6)();
          return FVar14;
        }
        pFVar16 = (pTVar3->AllocatorInstance).Data;
        uVar4 = *(undefined8 *)(pFVar16 + (longlong)(int)uVar21 * 0x10);
        uVar5 = *(undefined8 *)(pFVar16 + (longlong)(int)uVar21 * 0x10 + 8);
        uVar20 = 0;
        if ((int)uVar18 < (this->ServerTimeSamples).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          FVar14 = (FFrameTime)(*pcVar6)();
          return FVar14;
        }
        pFVar16 = (pTVar3->AllocatorInstance).Data;
        uVar18 = uVar18 + 1;
        *(undefined8 *)(pFVar16 + lVar24) = uVar4;
        *(undefined8 *)(pFVar16 + lVar24 + 8) = uVar5;
        lVar24 = lVar24 + 0x10;
        in_RDX = local_res10;
      } while ((int)uVar18 < (int)uVar19);
    }
    uVar18 = local_d4;
    iVar11 = (this->ServerTimeSamples).ArrayNum;
    uVar21 = iVar11 - 1;
    uVar20 = 0;
    if ((int)uVar21 < iVar11) {
      uVar20 = ~uVar21 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      FVar14 = (FFrameTime)(*pcVar6)();
      return FVar14;
    }
    pFVar16 = (pTVar3->AllocatorInstance).Data;
    iVar11 = (this->ServerTimeSamples).ArrayNum;
    uVar4 = *(undefined8 *)(pFVar16 + (longlong)iVar11 * 0x10 + -0x10);
    uVar5 = *(undefined8 *)(pFVar16 + (longlong)iVar11 * 0x10 + -8);
    uVar20 = 0;
    if ((int)uVar19 < iVar11) {
      uVar20 = ~uVar19 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      FVar14 = (FFrameTime)(*pcVar6)();
      return FVar14;
    }
    pFVar16 = (pTVar3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar16 + (longlong)(int)uVar19 * 0x10) = uVar4;
    *(undefined8 *)(pFVar16 + (longlong)(int)uVar19 * 0x10 + 8) = uVar5;
    uVar19 = (this->ServerTimeSamples).ArrayNum - uVar18;
    if (((int)(uVar19 | uVar18) < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      FVar14 = (FFrameTime)(*pcVar6)();
      return FVar14;
    }
    if (uVar19 != 0) {
      pFVar16 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x10;
      iVar11 = ((this->ServerTimeSamples).ArrayNum - uVar19) - uVar18;
      if (iVar11 != 0) {
        memmove(pFVar16,pFVar16 + (longlong)(int)uVar19 * 0x10,(longlong)iVar11 << 4);
      }
      piVar1 = &(this->ServerTimeSamples).ArrayNum;
      *piVar1 = *piVar1 - uVar19;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar3->AllocatorInstance,(this->ServerTimeSamples).ArrayNum,
                 &(this->ServerTimeSamples).ArrayMax);
    }
  }
  iVar11 = (this->ServerTimeSamples).ArrayNum;
  local_b0 = &local_d8;
  local_a8 = &local_d0;
  local_a0 = local_res20;
  local_b8 = this;
  if (iVar11 < 10) {
    `UMovieSceneSequencePlayer::UpdateServerTimeSamples'::__l2::<lambda_1>::operator()(&local_b8);
    *(FFrameTime *)in_RDX = (this->PlayPosition).CurrentPosition;
    local_res10 = in_RDX;
  }
  else {
    pFVar16 = (pTVar3->AllocatorInstance).Data;
    dVar8 = 0.0;
    pFVar23 = pFVar16 + (longlong)iVar11 * 0x10;
    dVar7 = 0.0;
    while( true ) {
      if ((this->ServerTimeSamples).ArrayNum != iVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UMovieSceneSequencePlayer::FServerTimeSample,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar16 == pFVar23) break;
      pFVar2 = pFVar16 + 8;
      dVar26 = *(double *)pFVar16;
      pFVar16 = pFVar16 + 0x10;
      dVar7 = dVar7 + (local_d0 - *(double *)pFVar2) * (double)local_res20[0] *
                      (double)this->LastEffectiveTimeDilation + dVar26;
    }
    iVar11 = (this->ServerTimeSamples).ArrayNum;
    pFVar16 = (pTVar3->AllocatorInstance).Data;
    pFVar23 = pFVar16 + (longlong)iVar11 * 0x10;
    while( true ) {
      if ((this->ServerTimeSamples).ArrayNum != iVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UMovieSceneSequencePlayer::FServerTimeSample,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if (pFVar16 == pFVar23) break;
      pFVar2 = pFVar16 + 8;
      dVar26 = *(double *)pFVar16;
      pFVar16 = pFVar16 + 0x10;
      dVar26 = ((local_d0 - *(double *)pFVar2) * (double)local_res20[0] *
                (double)this->LastEffectiveTimeDilation + dVar26) - dVar7 / (double)iVar11;
      dVar8 = dVar8 + dVar26 * dVar26;
    }
    local_d4 = (this->ServerTimeSamples).ArrayNum;
    FVar17 = (this->PlayPosition).InputRate;
    dVar25 = (double)(int)local_d4;
    dVar27 = ((double)(GSequencerSmoothedNetSyncDeviationThreshold * fVar9) *
             (double)FVar17.Numerator) / (double)FVar17.Denominator;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = dVar27;
    auVar28 = roundpd(in_XMM3,auVar28,1);
    dVar26 = auVar28._0_8_;
    dVar27 = dVar27 - dVar26;
    if (__real_41dfffffffc00000 <= dVar26) {
      dVar26 = __real_41dfffffffc00000;
    }
    if (dVar26 <= __real_c1e0000000000000) {
      dVar26 = __real_c1e0000000000000;
    }
    iVar15 = (int)dVar27;
    fVar29 = (float)dVar27 - (float)iVar15;
    if ((0.0 < fVar29) && (::FFrameTime::MaxSubframe <= fVar29)) {
      fVar29 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar29) {
      fVar29 = ::FFrameTime::MaxSubframe;
    }
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
    if (((double)fVar29 + (double)((int)dVar26 + iVar15) < SQRT(dVar8 / dVar25)) &&
       (uVar20 = local_d4 - 1, -1 < (int)uVar20)) {
      lVar24 = (longlong)(int)uVar20 << 4;
      do {
        uVar22 = ~uVar20 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar20 < (this->ServerTimeSamples).ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          FVar14 = (FFrameTime)(*pcVar6)();
          return FVar14;
        }
        local_c0 = (pTVar3->AllocatorInstance).Data;
        uVar21 = 0;
        if ((int)uVar20 < (this->ServerTimeSamples).ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          FVar14 = (FFrameTime)(*pcVar6)();
          return FVar14;
        }
        dVar26 = ((local_d0 - *(double *)((pTVar3->AllocatorInstance).Data + lVar24 + 8)) *
                  (double)local_res20[0] * (double)this->LastEffectiveTimeDilation +
                 *(double *)(local_c0 + lVar24)) - dVar7 / (double)iVar11;
        if (SQRT(dVar8 / dVar25) <
            (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar18,SUB84(dVar26,0) & uVar19)) {
          uVar21 = 0;
          if ((int)uVar20 < (this->ServerTimeSamples).ArrayNum) {
            uVar21 = uVar22;
          }
          if ((uVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            FVar14 = (FFrameTime)(*pcVar6)();
            return FVar14;
          }
          pFVar16 = (pTVar3->AllocatorInstance).Data + lVar24;
          iVar15 = (this->ServerTimeSamples).ArrayNum + ~uVar20;
          if (iVar15 != 0) {
            memmove(pFVar16,pFVar16 + 0x10,(longlong)iVar15 << 4);
          }
          piVar1 = &(this->ServerTimeSamples).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        lVar24 = lVar24 + -0x10;
        uVar20 = uVar20 - 1;
      } while (-1 < (int)uVar20);
    }
    uVar19 = local_d4;
    `UMovieSceneSequencePlayer::UpdateServerTimeSamples'::__l2::<lambda_1>::operator()(&local_b8);
    FVar17.Numerator = (int)uVar19 >> 0x1f;
    FVar17.Denominator = 0;
    if ((this->ServerTimeSamples).ArrayNum < (int)uVar19 / 2) {
      *(FFrameTime *)local_res10 = (this->PlayPosition).CurrentPosition;
    }
    else {
      ::operator*(extraout_XMM0_Qa,FVar17);
    }
  }
  return local_res10;
}

// UpdateTimeCursorPosition @ 14623ef40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::UpdateTimeCursorPosition
          (UMovieSceneSequencePlayer *this,FFrameTime param_1,EUpdatePositionMethod param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IMovieScenePlayer::IsEvaluating((IMovieScenePlayer *)&this->_padding_);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2283531826637044617>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequencePlayer.cpp"
                       ,0x477,"!IsEvaluating()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UpdateTimeCursorPosition_Internal(this,param_1,param_2,param_3);
  }
  return;
}

// UpdateTimeCursorPosition_Internal @ 14623efd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::UpdateTimeCursorPosition_Internal
          (UMovieSceneSequencePlayer *this,FFrameTime param_1,EUpdatePositionMethod param_2,
          bool param_3)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FFrameTime FVar3;
  FSharedPlaybackState *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  bool bVar10;
  TOptional<UE::MovieScene::ETimeWarpChannelDomain> TVar11;
  int iVar12;
  FFrameNumber FVar13;
  uint uVar14;
  int iVar15;
  FMovieSceneSequenceHierarchy *pFVar16;
  undefined6 extraout_var;
  FFrameTime FVar17;
  FFrameTime FVar18;
  UFunction *pUVar19;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar20;
  FMovieSceneTimeController *pFVar21;
  UMovieSceneSequence *pUVar22;
  undefined8 *puVar23;
  ulong64 uVar24;
  int iVar25;
  FFrameNumber FVar26;
  int iVar27;
  FFrameNumber FVar28;
  EPlayDirection EVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 in_XMM2 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  FFrameTime local_res8;
  FFrameTime local_res10 [2];
  undefined1 local_res20;
  FFrameTime local_3f8;
  undefined1 local_3d8;
  undefined2 local_3d7;
  undefined1 local_3d4;
  undefined2 local_3d3;
  undefined1 local_3d0;
  undefined2 local_3cf;
  int local_3cc;
  FFrameTime local_3c8;
  FFrameTime local_3c0;
  undefined1 local_3b8 [8];
  FDelegateAllocation local_3b0;
  FMovieSceneSpawnRegister *local_3a0;
  FFrameTime local_398;
  FFrameRate FStack_390;
  FString local_388;
  FString local_378;
  int local_368 [3];
  float fStack_35c;
  uint local_358;
  undefined4 uStack_354;
  undefined8 local_350;
  int local_348;
  float fStack_344;
  undefined8 local_340;
  int local_338;
  float fStack_334;
  undefined8 local_330;
  undefined8 local_328;
  int local_320;
  float fStack_31c;
  int local_318 [2];
  FFrameTime local_310;
  FFrameTime local_308;
  UMovieSceneSequencePlayer *local_300;
  UMovieSceneSequencePlayer *local_2f8;
  FFrameTime local_2f0;
  int local_2e8;
  FString local_2e0;
  FString local_2d0;
  FDelegateAllocation local_2c0;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_2b0;
  TOptional<TRange<FFrameTime>_> local_2a0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_280;
  FDestructionSentinel local_270;
  FDestructionSentinel local_258;
  FDelegateAllocation *local_240;
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined1 local_1f0 [8];
  FMovieSceneEvaluationRange local_1e8;
  FMovieSceneEvaluationRange local_1c0;
  TRangeBound<FFrameTime> local_198;
  TEnumAsByte<ERangeBoundTypes::Type> TStack_18c;
  undefined3 uStack_18b;
  FFrameTime local_188;
  FFrameRate FStack_180;
  EPlayDirection local_178;
  FFrameNumber FStack_174;
  FMovieSceneEvaluationRange local_168;
  TRangeBound<FFrameTime> local_138;
  TEnumAsByte<ERangeBoundTypes::Type> TStack_12c;
  undefined3 uStack_12b;
  FFrameTime local_128;
  FFrameRate FStack_120;
  ulonglong local_118;
  FMovieSceneEvaluationRange local_108;
  TRangeBound<FFrameTime> local_d8;
  TEnumAsByte<ERangeBoundTypes::Type> TStack_cc;
  undefined3 uStack_cb;
  FFrameTime local_c8;
  FFrameRate FStack_c0;
  EPlayDirection local_b8;
  FFrameNumber FStack_b4;
  TRangeBound<FFrameTime> local_a8;
  TEnumAsByte<ERangeBoundTypes::Type> TStack_9c;
  undefined3 uStack_9b;
  FFrameTime local_98;
  FFrameRate FStack_90;
  EPlayDirection local_88;
  FFrameNumber FStack_84;
  
  iVar15 = 0;
  if (param_2 == Play) {
    iVar30 = 1;
  }
  else {
    iVar30 = iVar15;
    if ((param_2 != Jump) && (param_2 == Scrub)) {
      iVar30 = 2;
    }
  }
  local_3a0 = (FMovieSceneSpawnRegister *)CONCAT44(local_3a0._4_4_,this->DurationFrames);
  local_res10[0] = param_1;
  local_res20 = param_3;
  local_3cc = iVar30;
  if ((this->DurationFrames == 0) && (this->DurationSubFrames == 0.0)) {
    if (ZPULL(*(undefined4 *)&this->field_0x2cc,3,1) == 0) {
      return;
    }
    *(uint *)&this->field_0x2cc = *(undefined4 *)&this->field_0x2cc & 0xfffffff7;
    GetSequenceName(this,&local_2e0,true);
    if (2 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
    if (local_2e0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    return;
  }
  this->bWarnZeroDuration = 1;
  if (this->bPendingOnStartedPlaying != 0) {
    (**(code **)(this->_padding_ + 0x2d8))(this);
    this->bPendingOnStartedPlaying = 0;
  }
  if ((param_2 == Play) &&
     (pFVar16 = FMovieSceneRootEvaluationTemplateInstance::GetHierarchy(&this->RootTemplateInstance)
     , pFVar16 != (FMovieSceneSequenceHierarchy *)0x0)) {
    TVar11 = FMovieSceneSequenceTransform::FindFirstWarpDomain(&pFVar16->RootTransform);
    if ((((char *)CONCAT62(extraout_var,TVar11))[1] == '\x01') &&
       (*(char *)CONCAT62(extraout_var,TVar11) == '\x01')) {
      ConvertFrameTime((FFrameTime)local_1f0,(FFrameRate)param_1,(this->PlayPosition).InputRate);
      FVar17 = FMovieSceneSequenceTransform::TransformTime
                         (&pFVar16->RootTransform,(FFrameTime)local_208);
      FVar17 = ConvertFrameTime((FFrameTime)local_210,*(FFrameRate *)FVar17,
                                (this->PlayPosition).OutputRate);
      param_1 = *(FFrameTime *)FVar17;
      local_res10[0] = param_1;
    }
  }
  GetPauseRange(this,&local_2a0,local_res10);
  FVar17 = local_res8;
  if (local_2a0.bIsSet == false) {
    bVar7 = false;
    local_3c0 = param_1;
    if ((param_2 == Play) && ((this->Status).Value == '\x01')) {
      iVar27 = (this->StartTime).Value;
      FVar28 = param_1.FrameNumber.Value;
      local_res8.SubFrame = param_1.SubFrame;
      fVar33 = local_res8.SubFrame;
      if (this->bReversePlayback == 0) {
        fVar31 = this->DurationSubFrames;
        if (::FFrameTime::MaxSubframe <= this->DurationSubFrames) {
          fVar31 = ::FFrameTime::MaxSubframe;
        }
        iVar25 = this->DurationFrames + iVar27;
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        if ((iVar25 < FVar28.Value) || ((FVar28.Value == iVar25 && (fVar31 <= local_res8.SubFrame)))
           ) {
          bVar10 = true;
          local_res8 = param_1;
        }
        else {
          bVar10 = false;
          local_res8 = param_1;
        }
      }
      else {
        bVar10 = FVar28.Value < iVar27;
        local_res8 = FVar17;
      }
      if (bVar10) {
        if (this->bReversePlayback == 0) {
          local_318[0] = iVar27;
          FVar17 = (FFrameTime)local_318;
          local_318[1] = 0;
        }
        else {
          FVar17 = GetLastValidTime(this);
        }
        FVar17 = *(FFrameTime *)FVar17;
        if (this->bReversePlayback == 0) {
          FVar18 = GetLastValidTime(this);
        }
        else {
          local_368[0] = (this->StartTime).Value;
          FVar18 = (FFrameTime)local_368;
          local_368[1] = 0;
        }
        FVar18 = *(FFrameTime *)FVar18;
        local_368[2] = this->DurationFrames;
        iVar27 = (this->PlaybackSettings).LoopCount.Value;
        fStack_35c = this->DurationSubFrames;
        if (::FFrameTime::MaxSubframe <= this->DurationSubFrames) {
          fStack_35c = ::FFrameTime::MaxSubframe;
        }
        if (fStack_35c <= 0.0) {
          fStack_35c = 0.0;
        }
        local_3c0.SubFrame = FVar17.SubFrame;
        fVar31 = local_3c0.SubFrame;
        local_3c0.SubFrame = fVar33 - local_3c0.SubFrame;
        local_200 = CONCAT44(fStack_35c,local_368[2]);
        FVar26 = FVar17.FrameNumber.Value;
        auVar40 = roundps(in_XMM2,ZEXT416((uint)local_3c0.SubFrame),1);
        local_3c0.SubFrame = local_3c0.SubFrame - auVar40._0_4_;
        dVar43 = (double)local_368[2] + (double)fStack_35c;
        if ((double)local_368[2] + (double)fStack_35c <= __real_3e45798ee0000000) {
          dVar43 = __real_3e45798ee0000000;
        }
        if (::FFrameTime::MaxSubframe <= local_3c0.SubFrame) {
          local_3c0.SubFrame = ::FFrameTime::MaxSubframe;
        }
        auVar42 = ZEXT416((uint)local_3c0.SubFrame);
        if (local_3c0.SubFrame <= 0.0) {
          auVar42 = ZEXT816(0) << 0x20;
        }
        dVar44 = (double)((int)auVar40._0_4_ + (FVar28.Value - FVar26.Value)) +
                 (double)auVar42._0_4_;
        iVar12 = (int)(dVar44 / dVar43);
        iVar25 = -iVar12;
        if (iVar25 < 0) {
          iVar25 = iVar12;
        }
        local_3c0 = FVar17;
        local_res8 = param_1;
        if ((-1 < iVar27) && (iVar27 < this->CurrentNumLoops + iVar25)) {
          local_3c0 = GetLastValidTime(this);
          local_358 = (this->StartTime).Value;
          uStack_354 = 0;
          local_3c0 = *(FFrameTime *)local_3c0;
          if ((FVar28.Value < local_3c0.FrameNumber.Value.Value) ||
             ((iVar27 = iVar15, FVar28.Value == local_3c0.FrameNumber.Value.Value &&
              (fVar33 < local_3c0.SubFrame)))) {
            iVar27 = 1;
          }
          local_res8.SubFrame = 0.0;
          local_res8.FrameNumber.Value = local_358;
          if (iVar27 != 0) {
            local_3c0 = param_1;
          }
          if (((int)local_358 < local_3c0.FrameNumber.Value.Value) ||
             ((local_358 == local_3c0.FrameNumber.Value.Value && (0.0 < local_3c0.SubFrame)))) {
            iVar15 = 1;
          }
          FVar17 = local_res8;
          if (iVar15 != 0) {
            FVar17 = local_3c0;
          }
          FMovieScenePlaybackPosition::PlayTo
                    (&this->PlayPosition,&local_1c0,FVar17,this->bReversePlayback);
          local_198.Type.Value = local_1c0.EvaluationRange.LowerBound.Type.Value;
          local_198._1_3_ = local_1c0.EvaluationRange.LowerBound._1_3_;
          local_198.Value.FrameNumber.Value =
               local_1c0.EvaluationRange.LowerBound.Value.FrameNumber.Value;
          local_198.Value.SubFrame = local_1c0.EvaluationRange.LowerBound.Value.SubFrame;
          TStack_18c.Value = local_1c0.EvaluationRange.UpperBound.Type.Value;
          uStack_18b = local_1c0.EvaluationRange.UpperBound._1_3_;
          local_178 = local_1c0.Direction;
          FStack_174.Value = local_1c0.TimeOverride.Value;
          local_3d7 = 0;
          local_3d8 = 0;
          local_188 = local_1c0.EvaluationRange.UpperBound.Value;
          FStack_180 = local_1c0.CurrentFrameRate;
          (**(code **)(this->_padding_ + 0x2c8))(this,&local_198,iVar30,&local_3d8);
          if ((((*(longlong *)&this->PlaybackClient == 0) ||
               (*(longlong *)&(this->PlaybackClient).field_0x8 == 0)) ||
              (cVar8 = (**(code **)(**(longlong **)&(this->PlaybackClient).field_0x8 + 0x28))(),
              cVar8 == '\0')) ||
             ((bVar7 = HasAuthority(this), bVar7 ||
              ((this->NetSyncProps).LastKnownStatus.Value == '\0')))) {
            GetSequenceName(this,&local_378,true);
            if (5 < (byte)LogMovieScene._0_1_) {
              local_308 = FVar17;
              ::FString::PrintfImpl(&local_388,L"Frame: %d Subframe: %f");
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
              if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_388.Data.AllocatorInstance.Data);
              }
            }
            FinishPlaybackInternal(this,FVar17);
            local_2e8 = this->SerialNumber + 1;
            local_2f0 = FVar17;
            pUVar19 = UObject::FindFunctionChecked
                                ((UObject *)this,
                                 NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent);
            (**(code **)(this->_padding_ + 0x260))(this,pUVar19,&local_2f0);
          }
          else {
            GetSequenceName(this,&local_378,true);
            if (5 < (byte)LogMovieScene._0_1_) {
              local_310 = FVar17;
              ::FString::PrintfImpl(&local_2d0,L"Frame: %d Subframe: %f");
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
              if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
              }
            }
          }
          UpdateNetworkSyncProperties(this);
          if (local_378.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
          return;
        }
        this->CurrentNumLoops = this->CurrentNumLoops + iVar25;
        FVar28 = FVar18.FrameNumber.Value;
        if (0 < iVar25) {
          (this->ServerTimeSamples).ArrayNum = 0;
          if ((this->ServerTimeSamples).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->ServerTimeSamples).AllocatorInstance,0,
                       &(this->ServerTimeSamples).ArrayMax);
          }
        }
        FVar3 = (this->PlayPosition).CurrentPosition;
        FVar13 = FVar3.FrameNumber.Value;
        local_3c8.SubFrame = FVar18.SubFrame;
        local_3f8.SubFrame = FVar3.SubFrame;
        if (this->bReversePlayback == 0) {
          if ((FVar13.Value < FVar28.Value) ||
             ((FVar13.Value == FVar28.Value && (local_3f8.SubFrame < local_3c8.SubFrame))))
          goto LAB_14623f772;
        }
        else {
          FVar3 = FVar18;
          if ((FVar28.Value < FVar13.Value) ||
             ((FVar13.Value == FVar28.Value && (local_3c8.SubFrame < local_3f8.SubFrame)))) {
LAB_14623f772:
            local_3c8 = FVar3;
            FMovieScenePlaybackPosition::PlayTo(&this->PlayPosition,&local_168,FVar18,Forwards);
            auVar42._8_8_ = 0;
            auVar42._0_4_ = local_168.Direction;
            auVar42._4_4_ = local_168.TimeOverride.Value;
            local_138.Type.Value = local_168.EvaluationRange.LowerBound.Type.Value;
            local_138._1_3_ = local_168.EvaluationRange.LowerBound._1_3_;
            local_138.Value.FrameNumber.Value =
                 local_168.EvaluationRange.LowerBound.Value.FrameNumber.Value;
            local_138.Value.SubFrame = local_168.EvaluationRange.LowerBound.Value.SubFrame;
            TStack_12c.Value = local_168.EvaluationRange.UpperBound.Type.Value;
            uStack_12b = local_168.EvaluationRange.UpperBound._1_3_;
            local_128 = local_168.EvaluationRange.UpperBound.Value;
            FStack_120 = local_168.CurrentFrameRate;
            local_3d3 = 0;
            local_3d4 = 0;
            local_118._0_4_ = local_168.Direction;
            local_118._4_4_ = local_168.TimeOverride.Value;
            (**(code **)(this->_padding_ + 0x2c8))(this,&local_138,iVar30);
            FVar3 = local_3c8;
          }
        }
        local_3c8 = FVar3;
        dVar44 = FGenericPlatformMath::Fmod(dVar44,dVar43);
        fVar33 = __real_3f000000;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = dVar44;
        auVar40 = roundpd(auVar42,auVar40,1);
        dVar41 = auVar40._0_8_;
        dVar43 = dVar41;
        if (__real_41dfffffffc00000 <= dVar41) {
          dVar43 = __real_41dfffffffc00000;
        }
        if (dVar43 <= __real_c1e0000000000000) {
          dVar43 = __real_c1e0000000000000;
        }
        local_3f8.SubFrame = (float)(dVar44 - dVar41);
        if (::FFrameTime::MaxSubframe <= (float)(dVar44 - dVar41)) {
          local_3f8.SubFrame = ::FFrameTime::MaxSubframe;
        }
        local_3f8.FrameNumber.Value = (int)dVar43;
        if (local_3f8.SubFrame <= 0.0) {
          local_3f8.SubFrame = 0.0;
        }
        if (::FFrameTime::MaxSubframe <= local_3f8.SubFrame) {
          local_3f8.SubFrame = ::FFrameTime::MaxSubframe;
        }
        if (local_3f8.SubFrame <= 0.0) {
          local_3f8.SubFrame = 0.0;
        }
        FVar18 = local_3f8;
        if (this->bReversePlayback == 0) {
          local_340 = 0;
          local_3c8.FrameNumber.Value = 0;
          local_3c8.SubFrame = 0.0;
          if ((local_3f8.FrameNumber.Value < 0) ||
             ((local_3f8.FrameNumber.Value == 0 && (local_3f8.SubFrame < 0.0)))) {
            local_338 = ((int)ROUND((local_3f8.SubFrame + local_3f8.SubFrame) - __real_3f000000) >>
                        1) + (int)local_3a0 + local_3f8.FrameNumber.Value;
            iVar15 = (int)local_3f8.SubFrame;
            fVar39 = local_3f8.SubFrame;
            if ((iVar15 != -0x80000000) && ((float)iVar15 != local_3f8.SubFrame)) {
              auVar35._4_4_ = local_3f8.SubFrame;
              auVar35._0_4_ = local_3f8.SubFrame;
              auVar35._8_8_ = 0;
              uVar14 = movmskps(local_338,auVar35);
              fVar39 = (float)(int)(iVar15 - (uVar14 & 1));
            }
            fStack_334 = local_3f8.SubFrame - fVar39;
            if (::FFrameTime::MaxSubframe <= local_3f8.SubFrame - fVar39) {
              fStack_334 = ::FFrameTime::MaxSubframe;
            }
            if (fStack_334 <= 0.0) {
              fStack_334 = 0.0;
            }
            FVar18.SubFrame = fStack_334;
            FVar18.FrameNumber.Value = local_338;
          }
        }
        else {
          local_350 = 0;
          local_3c8 = local_3f8;
          if ((0 < local_3f8.FrameNumber.Value) ||
             ((local_3f8.FrameNumber.Value == 0 && (0.0 < local_3f8.SubFrame)))) {
            local_348 = ((int)ROUND((local_3f8.SubFrame + local_3f8.SubFrame) - __real_3f000000) >>
                        1) + (int)local_3a0 + local_3f8.FrameNumber.Value;
            iVar15 = (int)local_3f8.SubFrame;
            fVar39 = local_3f8.SubFrame;
            if ((iVar15 != -0x80000000) && ((float)iVar15 != local_3f8.SubFrame)) {
              auVar34._4_4_ = local_3f8.SubFrame;
              auVar34._0_4_ = local_3f8.SubFrame;
              auVar34._8_8_ = 0;
              uVar14 = movmskps(local_348,auVar34);
              fVar39 = (float)(int)(iVar15 - (uVar14 & 1));
            }
            fStack_344 = local_3f8.SubFrame - fVar39;
            if (::FFrameTime::MaxSubframe <= local_3f8.SubFrame - fVar39) {
              fStack_344 = ::FFrameTime::MaxSubframe;
            }
            if (fStack_344 <= 0.0) {
              fStack_344 = 0.0;
            }
            FVar18.SubFrame = fStack_344;
            FVar18.FrameNumber.Value = local_348;
          }
        }
        local_3a0 = (this->SpawnRegister).Object;
        if (local_3a0 != (FMovieSceneSpawnRegister *)0x0) {
          this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
                    (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
          pTVar20 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState
                              (this_00,&local_2b0);
          if ((pTVar20->Object == (FSharedPlaybackState *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x416,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = pTVar20->Object;
          local_3c8 = (FFrameTime)(pTVar20->SharedReferenceCount).ReferenceController;
          (pTVar20->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pTVar20->Object = (FSharedPlaybackState *)0x0;
          if ((pFVar4 == (FSharedPlaybackState *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x26c,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)
                     CONCAT44(local_2b0.SharedReferenceCount.ReferenceController._4_4_,
                              local_2b0.SharedReferenceCount.ReferenceController._0_4_));
          FVar3 = local_3c8;
          local_280.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_3c8;
          if (local_3c8 != (FFrameTime)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)local_3c8 + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)local_3c8 + 8) + 1);
            UNLOCK();
          }
          local_280.Object = pFVar4;
          FMovieSceneSpawnRegister::ForgetExternallyOwnedSpawnedObjects(local_3a0,&local_280);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)FVar3);
        }
        local_res8 = local_3f8;
        if (this->bReversePlayback == 0) {
          local_328 = 0;
          if ((-1 < local_3f8.FrameNumber.Value) &&
             ((local_3f8.FrameNumber.Value != 0 || (0.0 <= local_3f8.SubFrame))))
          goto LAB_14623fae5;
        }
        else {
          local_330 = 0;
          if ((local_3f8.FrameNumber.Value < 1) &&
             ((local_3f8.FrameNumber.Value != 0 || (local_3f8.SubFrame <= 0.0))))
          goto LAB_14623fae5;
        }
        FVar17 = GetLastValidTime(this);
        FVar17 = *(FFrameTime *)FVar17;
LAB_14623fae5:
        FMovieScenePlaybackPosition::Reset(&this->PlayPosition,FVar17);
        local_res8.SubFrame = FVar18.SubFrame;
        fVar39 = local_res8.SubFrame;
        fVar38 = local_res8.SubFrame + fVar31;
        local_res8.FrameNumber.Value =
             ((int)ROUND((fVar38 + fVar38) - fVar33) >> 1) + FVar26.Value +
             FVar18.FrameNumber.Value.Value;
        iVar15 = (int)fVar38;
        fVar32 = fVar38;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar38)) {
          auVar36._4_4_ = fVar38;
          auVar36._0_4_ = fVar38;
          auVar36._8_8_ = 0;
          uVar14 = movmskps(local_res8.FrameNumber.Value,auVar36);
          fVar32 = (float)(int)(iVar15 - (uVar14 & 1));
        }
        local_res8.SubFrame = fVar38 - fVar32;
        if (::FFrameTime::MaxSubframe <= fVar38 - fVar32) {
          local_res8.SubFrame = ::FFrameTime::MaxSubframe;
        }
        if (local_res8.SubFrame <= 0.0) {
          local_res8.SubFrame = 0.0;
        }
        FMovieScenePlaybackPosition::PlayTo(&this->PlayPosition,&local_108,local_res8,Forwards);
        local_d8.Type.Value = local_108.EvaluationRange.LowerBound.Type.Value;
        local_d8._1_3_ = local_108.EvaluationRange.LowerBound._1_3_;
        local_d8.Value.FrameNumber.Value =
             local_108.EvaluationRange.LowerBound.Value.FrameNumber.Value;
        local_d8.Value.SubFrame = local_108.EvaluationRange.LowerBound.Value.SubFrame;
        TStack_cc.Value = local_108.EvaluationRange.UpperBound.Type.Value;
        uStack_cb = local_108.EvaluationRange.UpperBound._1_3_;
        local_b8 = local_108.Direction;
        FStack_b4.Value = local_108.TimeOverride.Value;
        local_3cf = 1;
        local_3d0 = 1;
        local_c8 = local_108.EvaluationRange.UpperBound.Value;
        FStack_c0 = local_108.CurrentFrameRate;
        (**(code **)(this->_padding_ + 0x2c8))(this,&local_d8,local_3cc,&local_3d0);
        fVar39 = fVar39 + fVar31;
        local_320 = ((int)ROUND((fVar39 + fVar39) - fVar33) >> 1) + FVar26.Value +
                    FVar18.FrameNumber.Value.Value;
        iVar15 = (int)fVar39;
        fVar33 = fVar39;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar39)) {
          auVar37._4_4_ = fVar39;
          auVar37._0_4_ = fVar39;
          auVar37._8_8_ = 0;
          uVar14 = movmskps(local_320,auVar37);
          fVar33 = (float)(int)(iVar15 - (uVar14 & 1));
        }
        fStack_31c = fVar39 - fVar33;
        if (::FFrameTime::MaxSubframe <= fVar39 - fVar33) {
          fStack_31c = ::FFrameTime::MaxSubframe;
        }
        if (fStack_31c <= 0.0) {
          fStack_31c = 0.0;
        }
        local_398.SubFrame = fStack_31c;
        local_398.FrameNumber.Value = local_320;
        FStack_390 = (this->PlayPosition).InputRate;
        local_res8 = FVar18;
        pFVar21 = TSharedPtr<FMovieSceneTimeController,1>::operator->(&this->TimeController);
        if ((pFVar21->PlaybackStartTime).bIsSet != false) {
          if (6 < (byte)LogMovieScene._0_1_) {
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          }
          (**(code **)(pFVar21->_padding_ + 0x28))(pFVar21,&local_398);
          if ((pFVar21->PlaybackStartTime).bIsSet != false) {
            (pFVar21->PlaybackStartTime).bIsSet = false;
          }
          if (6 < (byte)LogMovieScene._0_1_) {
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
          }
          if ((TOptional<FQualifiedFrameTime> *)&local_398 != &pFVar21->PlaybackStartTime) {
            (pFVar21->PlaybackStartTime).TypedValue.Time = local_398;
            (pFVar21->PlaybackStartTime).TypedValue.Rate = FStack_390;
            (pFVar21->PlaybackStartTime).bIsSet = true;
          }
          (**(code **)(pFVar21->_padding_ + 0x20))(pFVar21,&local_398);
        }
        UpdateNetworkSyncProperties(this);
        (**(code **)(this->_padding_ + 0x2e0))(this);
        return;
      }
    }
  }
  else {
    if (this->bReversePlayback == 0) {
      if ((local_2a0.TypedValue.UpperBound.Type.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      local_2a0.TypedValue.UpperBound.Value = local_2a0.TypedValue.LowerBound.Value;
      if ((local_2a0.TypedValue.LowerBound.Type.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""),
         local_2a0.TypedValue.UpperBound.Value = local_2a0.TypedValue.LowerBound.Value, bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    bVar7 = true;
    ConvertFrameTime((FFrameTime)&local_3c0,(FFrameRate)local_2a0.TypedValue.UpperBound.Value,
                     (this->PlayPosition).OutputRate);
  }
  EVar29 = this->bReversePlayback;
  if (param_2 == Play) {
    FMovieScenePlaybackPosition::PlayTo(&this->PlayPosition,&local_1e8,local_3c0,EVar29);
  }
  else {
    FMovieScenePlaybackPosition::JumpTo(&this->PlayPosition,&local_1e8,local_3c0,EVar29);
  }
  pUVar22 = FMovieSceneRootEvaluationTemplateInstance::GetSequence
                      (&this->RootTemplateInstance,&MovieSceneSequenceID::Root);
  uVar14 = local_2b0.SharedReferenceCount.ReferenceController._4_4_;
  FVar17 = local_res8;
  bVar9 = 0;
  if (pUVar22 != (UMovieSceneSequence *)0x0) {
    bVar9 = pUVar22->SequenceFlags >> 1 & 1;
  }
  local_res8 = (FFrameTime)((ulonglong)local_res8 & 0xffffffffffff0000);
  if (this->bIsAsyncUpdate != 0) {
    local_res8._3_5_ = FVar17._3_5_;
    local_res8.FrameNumber.Value._0_3_ = 0x10000;
    if (bVar9 == 0) goto LAB_14623fdab;
  }
  local_res8 = (FFrameTime)((ulonglong)local_res8 & 0xffffffffff000000);
LAB_14623fdab:
  local_res8.FrameNumber.Value._0_1_ = local_res20;
  pTVar2 = &this->PostEvaluationCallbacks;
  local_3b8 = (undefined1  [8])0x0;
  local_3b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b8,
             (FWriteAccessScope *)&local_258);
  local_240 = &local_3b0;
  puVar23 = UE::Core::Private::DelegateAllocate(0x30,&local_3b0);
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar24;
    *puVar23 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar23[3] = 0;
    local_300 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar23 + 3),(FObjectPtr)&local_300);
    puVar23[4] = UpdateNetworkSyncProperties;
    puVar23[5] = (ulonglong)uVar14 << 0x20;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)local_3b8) &&
      ((FScriptContainerElement *)local_3b8 <
       pFVar5 + (longlong)(this->PostEvaluationCallbacks).ArrayMax * 0x18)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = (this->PostEvaluationCallbacks).ArrayNum;
  piVar1 = &(this->PostEvaluationCallbacks).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PostEvaluationCallbacks).ArrayNum = iVar15 + 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             ((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x18),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b8,
             (FWriteAccessScope *)&local_270);
  if ((local_3b0.DelegateSize != 0) &&
     (local_3b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3b0,0,0,0x10);
    local_3b0.DelegateSize = 0;
  }
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  if (local_3b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b8);
  local_a8.Type.Value = local_1e8.EvaluationRange.LowerBound.Type.Value;
  local_a8._1_3_ = local_1e8.EvaluationRange.LowerBound._1_3_;
  local_a8.Value.FrameNumber.Value = local_1e8.EvaluationRange.LowerBound.Value.FrameNumber.Value;
  local_a8.Value.SubFrame = local_1e8.EvaluationRange.LowerBound.Value.SubFrame;
  TStack_9c.Value = local_1e8.EvaluationRange.UpperBound.Type.Value;
  uStack_9b = local_1e8.EvaluationRange.UpperBound._1_3_;
  local_88 = local_1e8.Direction;
  FStack_84.Value = local_1e8.TimeOverride.Value;
  local_98 = local_1e8.EvaluationRange.UpperBound.Value;
  FStack_90 = local_1e8.CurrentFrameRate;
  (**(code **)(this->_padding_ + 0x2c8))(this,&local_a8,iVar30,&local_res8);
  if (bVar7) {
    if (local_res8.FrameNumber.Value._2_1_ == '\0') {
      Pause(this);
    }
    else {
      local_388.Data.ArrayNum = 0;
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)Pause;
      local_388.Data.ArrayMax = local_2b0.SharedReferenceCount.ReferenceController._4_4_;
      local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2c0.DelegateSize = 0;
      puVar23 = UE::Core::Private::DelegateAllocate(0x30,&local_2c0);
      if (puVar23 != (undefined8 *)0x0) {
        *puVar23 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar24 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar24;
        *puVar23 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar23[3] = 0;
        local_2f8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar23 + 3),(FObjectPtr)&local_2f8);
        puVar23[4] = local_388.Data.AllocatorInstance.Data;
        puVar23[5] = CONCAT44(local_388.Data.ArrayMax,local_388.Data.ArrayNum);
      }
      QueueLatentAction(this,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                              *)&local_2c0);
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 146240190

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequencePlayer::ValidateGeneratedRepEnums
          (UMovieSceneSequencePlayer *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_Observer,L"Observer");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_bReversePlayback,L"bReversePlayback");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_StartTime,L"StartTime");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_DurationFrames,L"DurationFrames");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_DurationSubFrames,L"DurationSubFrames");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar5 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&Name_PlaybackSettings,L"PlaybackSettings");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar5 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&Name_NetSyncProps,L"NetSyncProps");
    _Init_thread_footer(&::_TSS6);
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)(param_1->AllocatorInstance).Data;
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_Observer == FVar4) {
    if ((param_1->ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x10);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_bReversePlayback == FVar4) {
      if ((param_1->ArrayNum < 3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_StartTime == FVar4) {
        if ((param_1->ArrayNum < 4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x30);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar6;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_DurationFrames == FVar4) {
          if ((param_1->ArrayNum < 5) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x40);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          FVar4 = FVar6;
          if (bVar3) {
            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_DurationSubFrames == FVar4) {
            if ((param_1->ArrayNum < 6) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x50);
            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
            FVar4 = FVar6;
            if (bVar3) {
              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
            }
            if (Name_PlaybackSettings == FVar4) {
              if ((param_1->ArrayNum < 7) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x60);
              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
              if (bVar3) {
                FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
              }
              if (Name_NetSyncProps == FVar6) {
                return;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\MovieScene\\UHT\\MovieSceneSequencePlayer.gen.cpp"
                     ,0xc59,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMovieSceneSequencePlayer"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// _getUObject @ 146241ed0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UMovieSceneSequencePlayer::_getUObject(UMovieSceneSequencePlayer *this)

{
  return (UObject *)&this[-1].OnFinished.field_0x8;
}

// execChangePlaybackDirection @ 146241ee0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execChangePlaybackDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ChangePlaybackDirection((UMovieSceneSequencePlayer *)param_1);
  return;
}

// execGetBoundObjects @ 1462422d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execGetBoundObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48;
  int local_38;
  int iStack_34;
  FMovieSceneObjectBindingID local_28;
  
  iStack_34 = -1;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28.ResolveParentIndex = iStack_34;
  local_28.SequenceID = local_38;
  local_28.Guid.A = local_48.A;
  local_28.Guid.B = local_48.B;
  local_28.Guid.C = local_48.C;
  local_28.Guid.D = local_48.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetBoundObjects((UMovieSceneSequencePlayer *)param_1,&local_58,&local_28);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execGetCompletionModeOverride @ 146242430

void __cdecl
UMovieSceneSequencePlayer::execGetCompletionModeOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x13].field_0x14;
  return;
}

// execGetCurrentTime @ 146242490

void __cdecl
UMovieSceneSequencePlayer::execGetCurrentTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x14].field_0x20;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x15].field_0xc;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetDisableCameraCuts @ 1462424d0

void __cdecl
UMovieSceneSequencePlayer::execGetDisableCameraCuts(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)(*(uint *)&param_1[0x13].field_0x10 >> 5) & 1;
  return;
}

// execGetDuration @ 146242500

void __cdecl
UMovieSceneSequencePlayer::execGetDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = *(float *)&param_1[0x12].field_0x10;
  if (::FFrameTime::MaxSubframe <= *(float *)&param_1[0x12].field_0x10) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  uVar1 = *(undefined8 *)&param_1[0x14].field_0x20;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(ulonglong *)param_3 = CONCAT44(fVar2,*(undefined4 *)&param_1[0x12].field_0xc);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetEndTime @ 1462425d0

void __cdecl
UMovieSceneSequencePlayer::execGetEndTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x14].field_0x20;
  *(ulonglong *)param_3 =
       (ulonglong)(uint)(*(int *)&param_1[0x12].field_0xc + *(int *)&param_1[0x12].field_0x8);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetFrameDuration @ 146242620

void __cdecl
UMovieSceneSequencePlayer::execGetFrameDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x12].field_0xc;
  return;
}

// execGetFrameRate @ 146242650

void __cdecl
UMovieSceneSequencePlayer::execGetFrameRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x14].field_0x20;
  return;
}

// execGetHideHud @ 146242680

void __cdecl
UMovieSceneSequencePlayer::execGetHideHud(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)(*(uint *)&param_1[0x13].field_0x10 >> 4) & 1;
  return;
}

// execGetObjectBindings @ 146242790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execGetObjectBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSharedPlaybackState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  FMovieSceneRootEvaluationTemplateInstance *this;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar7;
  UObject *local_res8;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> local_58;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_38;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (FMovieSceneRootEvaluationTemplateInstance *)
         (**(code **)(*(longlong *)(param_1 + 1) + 0x18))();
  pTVar7 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this,&local_38);
  if ((pTVar7->Object == (FSharedPlaybackState *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (pTVar7->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7->Object = (FSharedPlaybackState *)0x0;
  if ((pFVar2 == (FSharedPlaybackState *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar2;
  local_48.SharedReferenceCount.ReferenceController = pTVar3;
  FMovieSceneEvaluationState::FilterObjectBindings
            ((FMovieSceneEvaluationState *)&param_1[1].field_0x8,pUVar5,&local_48,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execGetPlayRate @ 146242980

void __cdecl
UMovieSceneSequencePlayer::execGetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x13].field_0x8;
  return;
}

// execGetSequence @ 146242a40

void __cdecl
UMovieSceneSequencePlayer::execGetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x12);
  return;
}

// execGetSequenceName @ 146242a70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execGetSequenceName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int local_res10 [2];
  FString local_18;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetSequenceName((UMovieSceneSequencePlayer *)param_1,&local_18,local_res10[0] != 0);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStartTime @ 146242b50

void __cdecl
UMovieSceneSequencePlayer::execGetStartTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x14].field_0x20;
  *(ulonglong *)param_3 = (ulonglong)*(uint *)&param_1[0x12].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGoToEndAndStop @ 146242ba0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execGoToEndAndStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFrameTime FVar1;
  float fVar2;
  FFrameTime local_res8;
  FMovieSceneSequencePlaybackParams local_48;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res8.FrameNumber.Value = *(int *)&param_1[0x12].field_0x8;
  if (*(int *)&param_1[0x12].field_0xc < 1) {
    local_res8.SubFrame = 0.0;
  }
  else {
    local_res8.SubFrame = *(float *)&param_1[0x12].field_0x10;
    local_res8.FrameNumber.Value = local_res8.FrameNumber.Value + *(int *)&param_1[0x12].field_0xc;
    if (local_res8.SubFrame <= 0.0) {
      local_res8.FrameNumber.Value = local_res8.FrameNumber.Value + -1;
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
      if (__real_3f800000 <= ::FFrameTime::MaxSubframe) {
        local_res8.SubFrame = __real_3f800000;
      }
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
    }
    else {
      if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
        local_res8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
    }
  }
  fVar2 = local_res8.SubFrame;
  FVar1 = local_res8;
  if ((((int)*(undefined8 *)&param_1[0x15].field_0xc != local_res8.FrameNumber.Value) ||
      (local_res8.SubFrame = (float)((ulonglong)*(undefined8 *)&param_1[0x15].field_0xc >> 0x20),
      local_res8.SubFrame != fVar2)) || (param_1[0x11].field_0x18 != '\0')) {
    param_1[0x11].field_0x18 = 1;
    local_48.Frame = FVar1;
    local_48.Time = 0.0;
    local_48.MarkedFrame.Data.ArrayNum = 0;
    local_48.MarkedFrame.Data.ArrayMax = 0;
    local_48.Timecode.Hours = 0;
    local_48.Timecode.Minutes = 0;
    local_48.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Timecode.Seconds = 0;
    local_48.Timecode.Frames = 0;
    local_48.Timecode.Subframe = 0.0;
    local_48.Timecode.bDropFrameFormat = false;
    local_48.PositionType = Frame;
    local_48.UpdateMethod = Jump;
    local_48.bHasJumped = false;
    SetPlaybackPosition((UMovieSceneSequencePlayer *)param_1,&local_48);
    StopInternal((UMovieSceneSequencePlayer *)param_1,FVar1);
  }
  return;
}

// execIsPaused @ 146242d20

void __cdecl UMovieSceneSequencePlayer::execIsPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x11].field_0x18 == '\x05';
  return;
}

// execIsPlaying @ 146242d50

void __cdecl
UMovieSceneSequencePlayer::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[0x11].field_0x18 == '\x01';
  return;
}

// execIsReversed @ 146242d80

void __cdecl
UMovieSceneSequencePlayer::execIsReversed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = param_1[0x11].field_0x1c & 1;
  return;
}

// execPause @ 146242db0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequencePlayer::execPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Pause((UMovieSceneSequencePlayer *)param_1);
  return;
}

// execPlay @ 146242dd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequencePlayer::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Play((UMovieSceneSequencePlayer *)param_1);
  return;
}

// execPlayLooping @ 146242df0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execPlayLooping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PlayLooping((UMovieSceneSequencePlayer *)param_1,local_res10[0]);
  return;
}

// execPlayReverse @ 146242e80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execPlayReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PlayReverse((UMovieSceneSequencePlayer *)param_1);
  return;
}

// execPlayTo @ 146242ea0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequencePlayer::execPlayTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  code *pcVar3;
  undefined1 uVar4;
  void *_Src;
  bool bVar5;
  uint uVar6;
  FFrameNumber FVar7;
  UMovieScene *this;
  FFrameTime FVar8;
  undefined4 extraout_var;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 local_res8 [8];
  FFrameRate local_res10;
  FFrameRate local_res20;
  float fStack_f4;
  FFrameRate local_f0;
  undefined4 local_e8;
  FFrameRate local_d8;
  float local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  uint uStack_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  FFrameRate local_98;
  float local_90;
  FString local_88;
  FTimecode local_78;
  char local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_58 [32];
  
  local_d8.Numerator = 0;
  local_d8.Denominator = 0;
  local_d0 = 0.0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_a8 = 0.0;
  uStack_a4 = uStack_a4 & 0xffffff00;
  local_a0 = 0;
  local_9e = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res8[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  _Src = local_c8;
  uVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_c0;
  local_90 = local_d0;
  local_98 = local_d8;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (int)local_c0;
  if ((int)local_c0 == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_c0,0,(ForAnyElementType *)&local_88,(int)local_c0,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  local_78._20_4_ = uStack_a4;
  local_78.Subframe = local_a8;
  FVar2.Numerator = *(int *)&param_1[0x15].field_0xc;
  FVar2.Denominator = *(int *)&param_1[0x15].field_0x10;
  local_5f = local_a0._1_1_;
  local_5e = local_9e;
  local_60 = (char)local_a0;
  local_78.Hours = (int)local_b8;
  local_78.Minutes = local_b8._4_4_;
  local_78.Seconds = (int)uStack_b0;
  local_78.Frames = uStack_b0._4_4_;
  local_res20 = local_98;
  if ((char)local_a0 != '\0') {
    if ((char)local_a0 == '\x01') {
      dVar14 = ((double)(int)*(undefined8 *)&param_1[0x14].field_0x20 * (double)local_90) /
               (double)(int)((ulonglong)*(undefined8 *)&param_1[0x14].field_0x20 >> 0x20);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar14;
      auVar13 = roundpd(ZEXT416((uint)local_90),auVar13,1);
      dVar12 = auVar13._0_8_;
      dVar14 = dVar14 - dVar12;
      if (__real_41dfffffffc00000 <= dVar12) {
        dVar12 = __real_41dfffffffc00000;
      }
      if (dVar12 <= __real_c1e0000000000000) {
        dVar12 = __real_c1e0000000000000;
      }
      iVar9 = (int)dVar14;
      local_res10.Denominator = (int)((float)dVar14 - (float)iVar9);
      if ((0.0 < (float)local_res10.Denominator) &&
         (::FFrameTime::MaxSubframe <= (float)local_res10.Denominator)) {
        local_res10.Denominator = (int)::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= (float)local_res10.Denominator) {
        local_res10.Denominator = (int)::FFrameTime::MaxSubframe;
      }
      if ((float)local_res10.Denominator <= 0.0) {
        local_res10.Denominator = 0;
      }
      local_res10.Numerator = iVar9 + (int)dVar12;
      local_res20 = local_res10;
    }
    else {
      local_res20 = FVar2;
      if ((char)local_a0 == '\x02') {
        if ((*(longlong **)(param_1 + 0x12) != (longlong *)0x0) &&
           (this = (UMovieScene *)(**(code **)(**(longlong **)(param_1 + 0x12) + 0x2f8))(),
           this != (UMovieScene *)0x0)) {
          uVar6 = UMovieScene::FindMarkedFrameByLabel(this,&local_88);
          if (uVar6 != 0xffffffff) {
            FVar2 = this->TickResolution;
            uVar11 = 0;
            if ((int)uVar6 < (this->MarkedFrames).ArrayNum) {
              uVar11 = ~uVar6 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_res20.Denominator = 0;
            local_res20.Numerator =
                 *(uint *)((this->MarkedFrames).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20
                          );
            FVar8 = ConvertFrameTime((FFrameTime)local_58,local_res20,FVar2);
            local_res20 = *(FFrameRate *)FVar8;
          }
        }
      }
      else if ((char)local_a0 == '\x03') {
        FVar7 = FTimecode::ToFrameNumber(&local_78,&local_res10);
        local_res20.Denominator = 0;
        local_res20.Numerator = *(uint *)CONCAT44(extraout_var,FVar7.Value);
      }
    }
  }
  local_e8 = CONCAT31(local_e8._1_3_,uVar4);
  if (&local_f0 != (FFrameRate *)&param_1[0x1c].field_0x1c) {
    *(int *)&param_1[0x1c].field_0x1c = local_res20.Numerator;
    *(int *)&param_1[0x1c].field_0x20 = local_res20.Denominator;
    *(undefined4 *)&param_1[0x1c].field_0x24 = local_e8;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  local_res10.Numerator = *(int *)&param_1[0x15].field_0xc;
  local_res10.Denominator = *(int *)&param_1[0x15].field_0x10;
  local_f0 = local_res20;
  if (local_res10.Numerator < local_res20.Numerator) {
LAB_146243288:
    Play((UMovieSceneSequencePlayer *)param_1);
  }
  else {
    if (local_res10.Numerator == local_res20.Numerator) {
      fStack_f4 = (float)local_res20.Denominator;
      if ((float)local_res10.Denominator < fStack_f4) goto LAB_146243288;
    }
    PlayReverse((UMovieSceneSequencePlayer *)param_1);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execRPC_ExplicitServerUpdateEvent @ 1462432d0

void __cdecl
UMovieSceneSequencePlayer::execRPC_ExplicitServerUpdateEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res8[0],local_res20,local_res10[0]);
  return;
}

// execRPC_OnFinishPlaybackEvent @ 1462433e0

void __cdecl
UMovieSceneSequencePlayer::execRPC_OnFinishPlaybackEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res10,local_res8[0]);
  return;
}

// execRPC_OnStopEvent @ 1462434c0

void __cdecl
UMovieSceneSequencePlayer::execRPC_OnStopEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res10,local_res8[0]);
  return;
}

// execRemoveWeight @ 1462435a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execRemoveWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieSceneEntitySystemLinker *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker
                     ((FMovieSceneRootEvaluationTemplateInstance *)&param_1[0x13].field_0x20);
  if ((pUVar1 != (UMovieSceneEntitySystemLinker *)0x0) &&
     (*(FSequenceWeights **)&param_1[0x17].field_0x10 != (FSequenceWeights *)0x0)) {
    UE::MovieScene::FSequenceWeights::RemoveWeight
              (*(FSequenceWeights **)&param_1[0x17].field_0x10,(FMovieSceneSequenceID)0x0);
    return;
  }
  return;
}

// execRequestInvalidateBinding @ 146243600

void __cdecl
UMovieSceneSequencePlayer::execRequestInvalidateBinding
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMovieSceneSequenceID local_res8 [2];
  FGuid local_48;
  uint local_38;
  undefined4 uStack_34;
  FGuid local_28;
  undefined8 local_18;
  
  uStack_34 = 0xffffffff;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28.A = local_48.A;
  local_28.B = local_48.B;
  local_28.C = local_48.C;
  local_28.D = local_48.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res8[0].Value = local_38;
  FMovieSceneEvaluationState::Invalidate
            ((FMovieSceneEvaluationState *)&param_1[1].field_0x8,&local_28,local_res8);
  return;
}

// execRestoreState @ 146243810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execRestoreState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x13].field_0x14 != '\x02') && (2 < (byte)LogMovieScene._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  IMovieScenePlayer::RestorePreAnimatedState((IMovieScenePlayer *)(param_1 + 1));
  return;
}

// execScrub @ 146243870

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequencePlayer::execScrub(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Scrub((UMovieSceneSequencePlayer *)param_1);
  return;
}

// execSetCompletionModeOverride @ 146243b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execSetCompletionModeOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  cVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((param_1[0x11].field_0x18 == '\x01') && (param_1[0x13].field_0x14 != '\x02')) &&
      (local_res8[0] == '\x02')) && (2 < (byte)LogMovieScene._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  param_1[0x13].field_0x14 = cVar2;
  return;
}

// execSetDisableCameraCuts @ 146243c90

void __cdecl
UMovieSceneSequencePlayer::execSetDisableCameraCuts(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0x13].field_0x10 = *(uint *)&param_1[0x13].field_0x10 & 0xffffffdf;
  *(uint *)&param_1[0x13].field_0x10 =
       *(uint *)&param_1[0x13].field_0x10 | -(uint)(local_res8[0] != 0) & 0x20;
  return;
}

// execSetFrameRange @ 146243d30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execSetFrameRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  int local_res20 [2];
  int local_18 [4];
  
  local_18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetFrameRange((UMovieSceneSequencePlayer *)param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}

// execSetFrameRate @ 146243e40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execSetFrameRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  int local_res10;
  int iStackX_14;
  
  local_res10 = 60000;
  iStackX_14 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2.Denominator = iStackX_14;
  FVar2.Numerator = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetFrameRate((UMovieSceneSequencePlayer *)param_1,FVar2);
  return;
}

// execSetHideHud @ 146243ed0

void __cdecl
UMovieSceneSequencePlayer::execSetHideHud(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)&param_1[0x13].field_0x10 = *(uint *)&param_1[0x13].field_0x10 & 0xffffffef;
  *(uint *)&param_1[0x13].field_0x10 =
       *(uint *)&param_1[0x13].field_0x10 | -(uint)(local_res8[0] != 0) & 0x10;
  return;
}

// execSetPlayRate @ 146244270

void __cdecl
UMovieSceneSequencePlayer::execSetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x13].field_0x8 = local_res8[0];
  return;
}

// execSetPlaybackPosition @ 146244300

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execSetPlaybackPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  FFrameTime local_88;
  float local_80;
  void *local_78;
  undefined8 local_70;
  FTimecode local_68;
  undefined2 local_50;
  undefined1 local_4e;
  FMovieSceneSequencePlaybackParams local_48;
  
  local_88.FrameNumber.Value = 0;
  local_88.SubFrame = 0.0;
  local_80 = 0.0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68.Hours = 0;
  local_68.Minutes = 0;
  local_68.Seconds = 0;
  local_68.Frames = 0;
  local_68.Subframe = 0.0;
  local_68._20_4_ = local_68._20_4_ & 0xffffff00;
  local_50 = 0;
  local_4e = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  _Src = local_78;
  local_48.Time = local_80;
  local_48.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_70;
  local_48.Frame = local_88;
  local_48.MarkedFrame.Data.ArrayNum = (int)local_70;
  if ((int)local_70 == 0) {
    local_48.MarkedFrame.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,(ForAnyElementType *)&local_48.MarkedFrame,(int)local_70,
               &local_48.MarkedFrame.Data.ArrayMax);
    memcpy(local_48.MarkedFrame.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  local_48.Timecode.bDropFrameFormat = local_68.bDropFrameFormat;
  local_48.Timecode._21_3_ = local_68._21_3_;
  local_48.Timecode.Subframe = local_68.Subframe;
  local_48.PositionType = (EMovieScenePositionType)local_50;
  local_48.UpdateMethod = local_50._1_1_;
  local_48.bHasJumped = (bool)local_4e;
  local_48.Timecode.Hours = local_68.Hours;
  local_48.Timecode.Minutes = local_68.Minutes;
  local_48.Timecode.Seconds = local_68.Seconds;
  local_48.Timecode.Frames = local_68.Frames;
  SetPlaybackPosition((UMovieSceneSequencePlayer *)param_1,&local_48);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execSetTimeRange @ 146244620

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execSetTimeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 uVar7;
  undefined1 auVar6 [16];
  float fVar8;
  double dVar9;
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  double dVar11;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  dVar11 = __real_3ff0000000000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)*(undefined8 *)&param_1[0x14].field_0x20;
  dVar11 = dVar11 / (double)(int)((ulonglong)*(undefined8 *)&param_1[0x14].field_0x20 >> 0x20);
  dVar5 = (double)iVar3 * (double)local_res8[0] * dVar11;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar5;
  auVar10 = roundpd(in_XMM3,auVar10,1);
  dVar9 = auVar10._0_8_;
  auVar6._0_8_ = dVar5 - dVar9;
  auVar6._8_8_ = 0;
  if (__real_41dfffffffc00000 <= dVar9) {
    dVar9 = __real_41dfffffffc00000;
  }
  if (dVar9 <= __real_c1e0000000000000) {
    dVar9 = __real_c1e0000000000000;
  }
  dVar11 = (double)iVar3 * (double)local_res10[0] * dVar11;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar11;
  auVar10 = roundpd(auVar6,auVar2,1);
  dVar11 = dVar11 - auVar10._0_8_;
  uVar4 = auVar10._0_4_;
  uVar7 = auVar10._4_4_;
  if (__real_41dfffffffc00000 <= auVar10._0_8_) {
    uVar4 = SUB84(__real_41dfffffffc00000,0);
    uVar7 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  if ((double)CONCAT44(uVar7,uVar4) <= __real_c1e0000000000000) {
    uVar4 = SUB84(__real_c1e0000000000000,0);
    uVar7 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  iVar3 = (int)dVar11;
  fVar8 = (float)dVar11 - (float)iVar3;
  if ((0.0 < fVar8) && (::FFrameTime::MaxSubframe <= fVar8)) {
    fVar8 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar8) {
    fVar8 = ::FFrameTime::MaxSubframe;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  iVar3 = (int)(double)CONCAT44(uVar7,uVar4) + iVar3;
  if (__real_3f000000 <= fVar8) {
    iVar3 = iVar3 + 1;
  }
  SetFrameRange((UMovieSceneSequencePlayer *)param_1,(int)auVar6._0_8_ + (int)dVar9,iVar3,0.0);
  return;
}

// execSetWeight @ 1462447f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execSetWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_res10 [3];
  
  local_res10[0] = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetWeight((UMovieSceneSequencePlayer *)param_1,local_res10[0],MovieSceneSequenceID::Root);
  return;
}

// execStop @ 146244880

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequencePlayer::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  FFrameNumber FVar4;
  float fVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[0x11].field_0x1c & 1) != 0) && (0 < *(int *)&param_1[0x12].field_0xc)) {
    fVar5 = *(float *)&param_1[0x12].field_0x10;
    FVar4.Value = *(uint *)&param_1[0x12].field_0x8 + *(int *)&param_1[0x12].field_0xc;
    if (0.0 < fVar5) {
      if (::FFrameTime::MaxSubframe <= fVar5) {
        fVar5 = ::FFrameTime::MaxSubframe;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      FVar1.SubFrame = fVar5;
      FVar1.FrameNumber.Value = FVar4.Value;
      StopInternal((UMovieSceneSequencePlayer *)param_1,FVar1);
      return;
    }
    fVar5 = ::FFrameTime::MaxSubframe;
    if (__real_3f800000 <= ::FFrameTime::MaxSubframe) {
      fVar5 = __real_3f800000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    FVar2.SubFrame = fVar5;
    FVar2.FrameNumber.Value = FVar4.Value + -1;
    StopInternal((UMovieSceneSequencePlayer *)param_1,FVar2);
    return;
  }
  FVar3.SubFrame = 0.0;
  FVar3.FrameNumber.Value = *(uint *)&param_1[0x12].field_0x8;
  StopInternal((UMovieSceneSequencePlayer *)param_1,FVar3);
  return;
}

// execStopAtCurrentTime @ 146244930

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequencePlayer::execStopAtCurrentTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFrameTime FVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.FrameNumber.Value = *(int *)&param_1[0x15].field_0xc;
  FVar1.SubFrame = *(float *)&param_1[0x15].field_0x10;
  StopInternal((UMovieSceneSequencePlayer *)param_1,FVar1);
  return;
}

// operator() @ 1504e70b0

bool __thiscall
`UMovieSceneSequencePlayer::AdvanceClientSerialNumberTo'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2283531826637043998>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2283531826637043998>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e74a0

bool __thiscall `UMovieSceneSequencePlayer::Initialize'::__l92::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2283531826637044747>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2283531826637044747>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7560

bool __thiscall
`UMovieSceneSequencePlayer::AdvanceClientSerialNumberTo'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2283531826637043996>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2283531826637043996>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

