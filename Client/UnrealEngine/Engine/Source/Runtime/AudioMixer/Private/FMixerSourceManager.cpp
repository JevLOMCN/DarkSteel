// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 142

// <lambda_1> @ 1464d6fe0

/* WARNING: Enum "Type": Some values do not have unique names */

<lambda_1> * __thiscall
`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  TSharedPtr<FSoundEffectSource,1> *pTVar3;
  
  *(FMixerSourceManager **)this = param_1->__this;
  *(int *)((longlong)this + 8) = param_1->SourceId;
  Audio::FMixerSourceVoiceInitParams::FMixerSourceVoiceInitParams
            ((FMixerSourceVoiceInitParams *)((longlong)this + 0x10),&param_1->InitParams);
  Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)((longlong)this + 0x2d8),&param_1->VolumeModulation);
  Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)((longlong)this + 0x2e8),&param_1->HighpassModulation);
  Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)((longlong)this + 0x2f8),&param_1->LowpassModulation);
  Audio::FModulationDestination::FModulationDestination
            ((FModulationDestination *)((longlong)this + 0x308),&param_1->PitchModulation);
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x318);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->SourceEffectChain).ArrayNum;
  pTVar3 = (TSharedPtr<FSoundEffectSource,1> *)(param_1->SourceEffectChain).AllocatorInstance.Data;
  *(int *)((longlong)this + 800) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x324) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x324));
    ConstructItems<TSharedPtr<FSoundEffectSource,1>,TSharedPtr<FSoundEffectSource,1>,int>
              (pFVar1->Data,pTVar3,iVar2);
  }
  return this;
}

// <lambda_1> @ 1464d70e0

/* WARNING: Enum "Type": Some values do not have unique names */

<lambda_1> * __thiscall
`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  *(FMixerSourceManager **)this = param_1->__this;
  *(int *)((longlong)this + 8) = param_1->SourceId;
  *(uint *)((longlong)this + 0xc) = param_1->NumInputChannels;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->ChannelMap).ArrayNum;
  _Src = (param_1->ChannelMap).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
  }
  *(bool *)((longlong)this + 0x20) = param_1->bInIs3D;
  *(bool *)((longlong)this + 0x21) = param_1->bInIsCenterChannelOnly;
  return this;
}

// <lambda_1> @ 1464d71a0

/* WARNING: Enum "Type": Some values do not have unique names */

<lambda_1> * __thiscall
`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  *(FMixerSourceManager **)this = param_1->__this;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->InListenerTransforms).ArrayNum;
  _Src = (param_1->InListenerTransforms).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x10) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x14));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x60);
  }
  return this;
}

// <lambda_1> @ 1464d7240

/* WARNING: Enum "Type": Some values do not have unique names */

<lambda_1> * __thiscall
`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FSourceEffectChainEntry *pFVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  *(FMixerSourceManager **)this = param_1->__this;
  *(uint *)((longlong)this + 8) = param_1->InSourceEffectChainId;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->InSourceEffectChain).ArrayNum;
  pFVar3 = (FSourceEffectChainEntry *)(param_1->InSourceEffectChain).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>(pFVar1->Data,pFVar3,iVar2);
  }
  *(bool *)((longlong)this + 0x20) = param_1->bPlayEffectChainTails;
  return this;
}

// FMixerSourceManager @ 1464d8e50

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceManager * __thiscall
Audio::FMixerSourceManager::FMixerSourceManager(FMixerSourceManager *this,FMixerDevice *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FCommands *pFVar4;
  atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*> aVar5;
  atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> aVar6;
  FEvent *pFVar7;
  FMixerSourceManager *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  this->AudioRenderThreadId = 0xffffffff;
  this->StartAudioBusEnvelopeFollowerCVar = (IConsoleVariable *)0x0;
  this->StopAudioBusEnvelopeFollowerCVar = (IConsoleVariable *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection,4000);
  lVar10 = 2;
  this->MixerDevice = param_1;
  pFVar4 = this->CommandBuffers;
  (this->SpatialInterfaceInfo).PluginName.ComparisonIndex = 0;
  (this->SpatialInterfaceInfo).PluginName.Number = 0;
  (this->SpatialInterfaceInfo).SpatializationPlugin.Object = (IAudioSpatialization *)0x0;
  (this->SpatialInterfaceInfo).SpatializationPlugin.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SpatialInterfaceInfo).MaxChannelsSupportedBySpatializationPlugin = 1;
  (this->SourceDataOverridePlugin).Object = (IAudioSourceDataOverride *)0x0;
  (this->SourceDataOverridePlugin).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AudioLinkFactory = (IAudioLinkFactory *)0x0;
  (this->MixerSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MixerSources).ArrayNum = 0;
  (this->MixerSources).ArrayMax = 0;
  do {
    (pFVar4->NumTimesOvergrown).Counter = 0;
    (pFVar4->SourceCommandQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->SourceCommandQueue).ArrayNum = 0;
    (pFVar4->SourceCommandQueue).ArrayMax = 0;
    pFVar4 = pFVar4 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  (this->RenderThreadCommandBufferIndex).Counter = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CommandBufferIndexCriticalSection,4000);
  (this->DebugSoloSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSoloSources).ArrayNum = 0;
  (this->DebugSoloSources).ArrayMax = 0;
  (this->MpscCommandQueue).Head =
       (atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>)
       0x0;
  aVar5 = (atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
          )FMemory::Malloc(0x60,0x10);
  *(undefined8 *)aVar5 = 0;
  (this->MpscCommandQueue).Head = aVar5;
  (this->MpscCommandQueue).Tail = (FNode *)aVar5;
  (this->ListenerTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenerTransforms).ArrayNum = 0;
  (this->ListenerTransforms).ArrayMax = 0;
  (this->SourceInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceInfos).ArrayNum = 0;
  (this->SourceInfos).ArrayMax = 0;
  (this->SourceSubmixOutputBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceSubmixOutputBuffers).ArrayNum = 0;
  (this->SourceSubmixOutputBuffers).ArrayMax = 0;
  *(undefined8 *)&this->AudioBuses = 0;
  *(undefined8 *)&(this->AudioBuses).field_0x8 = 0;
  *(undefined8 *)&(this->AudioBuses).field_0x20 = 0;
  *(undefined4 *)&(this->AudioBuses).field_0x28 = 0;
  *(undefined4 *)&(this->AudioBuses).field_0x2c = 0x80;
  *(undefined4 *)&(this->AudioBuses).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AudioBuses).field_0x34 = 0;
  *(undefined8 *)&(this->AudioBuses).field_0x40 = 0;
  *(undefined4 *)&(this->AudioBuses).field_0x48 = 0;
  this->bInitialized = '\0';
  this->bUsingSourceDataOverridePlugin = '\0';
  this->bUsingSpatializationPlugin = '\0';
  (this->AudioBusKeys_AudioThread).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioBusKeys_AudioThread).ArrayNum = 0;
  (this->AudioBusKeys_AudioThread).ArrayMax = 0;
  (this->PendingSourceBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingSourceBuffers).ArrayNum = 0;
  (this->PendingSourceBuffers).ArrayMax = 0;
  (this->GameThreadInfo).FreeSourceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadInfo).FreeSourceIndices.ArrayNum = 0;
  (this->GameThreadInfo).FreeSourceIndices.ArrayMax = 0;
  (this->GameThreadInfo).bIsBusy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadInfo).bIsBusy.ArrayNum = 0;
  (this->GameThreadInfo).bIsBusy.ArrayMax = 0;
  (this->GameThreadInfo).bNeedsSpeakerMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadInfo).bNeedsSpeakerMap.ArrayNum = 0;
  (this->GameThreadInfo).bNeedsSpeakerMap.ArrayMax = 0;
  (this->GameThreadInfo).bIsDebugMode.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadInfo).bIsDebugMode.ArrayNum = 0;
  (this->GameThreadInfo).bIsDebugMode.ArrayMax = 0;
  (this->GameThreadInfo).bIsUsingHRTFSpatializer.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GameThreadInfo).bIsUsingHRTFSpatializer.ArrayNum = 0;
  (this->GameThreadInfo).bIsUsingHRTFSpatializer.ArrayMax = 0;
  (this->GameThreadInfo).CPUCoreUtilization.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadInfo).CPUCoreUtilization.ArrayNum = 0;
  (this->GameThreadInfo).CPUCoreUtilization.ArrayMax = 0;
  (this->GameThreadInfo).RelativeRenderCost.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadInfo).RelativeRenderCost.ArrayNum = 0;
  (this->GameThreadInfo).RelativeRenderCost.ArrayMax = 0;
  (this->GameThreadInfo).ModulationVolume.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadInfo).ModulationVolume.ArrayNum = 0;
  (this->GameThreadInfo).ModulationVolume.ArrayMax = 0;
  this->NumActiveSources = 0;
  this->NumTotalSources = 0;
  this->NumOutputFrames = 0;
  this->NumOutputSamples = 0;
  (this->NumCommands).Counter = 0;
  this->bPumpQueue = (FThreadSafeBool)0x0;
  this->LastPumpCompleteTimeInCycles = (atomic<unsigned___int64>)0x0;
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x0;
  (this->CurrentlyExecutingCmdLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function = 0;
  *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function.field_0x28 = 0;
  (this->CurrentlyExecuteingCmd).bDeferExecution = false;
  (this->CurrentlyExecuteingCmd).DebugString = (char *)0x0;
  (this->CurrentlyExecuteingCmd).StartExecuteTimeInCycles = 0;
  (this->PendingAudioBusConnections).Head =
       (atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>)
       0x0;
  aVar6 = (atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
           )FMemory::Malloc(0x40,8);
  *(undefined8 *)aVar6 = 0;
  (this->PendingAudioBusConnections).Head = aVar6;
  (this->PendingAudioBusConnections).Tail = (FNode *)aVar6;
  *(undefined8 *)&this->BusPatchDependencies = 0;
  *(undefined8 *)&(this->BusPatchDependencies).field_0x8 = 0;
  *(undefined8 *)&(this->BusPatchDependencies).field_0x20 = 0;
  *(undefined4 *)&(this->BusPatchDependencies).field_0x28 = 0;
  *(undefined4 *)&(this->BusPatchDependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->BusPatchDependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BusPatchDependencies).field_0x34 = 0;
  *(undefined8 *)&(this->BusPatchDependencies).field_0x40 = 0;
  *(undefined4 *)&(this->BusPatchDependencies).field_0x48 = 0;
  pFVar7 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->CommandsProcessedEvent = pFVar7;
  if (pFVar7 == (FEvent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CommandsProcessedEvent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x1a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FMixerSourceManager *)(*pcVar2)();
      return pFVar8;
    }
  }
  (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x10))();
  uVar9 = 10000;
  if (CommandBufferInitialCapacityCvar < 10000) {
    uVar9 = CommandBufferInitialCapacityCvar;
  }
  uVar11 = 0;
  if (0 < (int)uVar9) {
    uVar11 = uVar9;
  }
  if (-1 < (int)uVar11) {
    if (this->CommandBuffers[0].SourceCommandQueue.ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,uVar11,&this->CommandBuffers[0].SourceCommandQueue.AllocatorInstance,
                 this->CommandBuffers[0].SourceCommandQueue.ArrayNum,
                 &this->CommandBuffers[0].SourceCommandQueue.ArrayMax);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
}

// ~<lambda_1> @ 1464da160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
            (*(TSharedPtr<FSoundEffectSource,1> **)((longlong)this + 0x318),
             *(int *)((longlong)this + 800));
  if (*(void **)((longlong)this + 0x318) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x318));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x310));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x300));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2f0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x2e0));
  Audio::FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams
            ((FMixerSourceVoiceInitParams *)((longlong)this + 0x10));
  return;
}

// ~FMixerSourceManager @ 1464dc7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::~FMixerSourceManager(FMixerSourceManager *this)

{
  void *pvVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  BOOLEAN BVar6;
  longlong *plVar7;
  
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &FTraceAuxiliary::OnTraceStarted,this);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->StartAudioBusEnvelopeFollowerCVar,1);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->StopAudioBusEnvelopeFollowerCVar,1);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->CommandsProcessedEvent);
  *(undefined4 *)&(this->BusPatchDependencies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BusPatchDependencies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BusPatchDependencies);
  TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::
  ~TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>
            (&this->PendingAudioBusConnections);
  if (*(longlong *)&(this->CurrentlyExecuteingCmd).Function != 0) {
    plVar2 = *(longlong **)&(this->CurrentlyExecuteingCmd).Function.field_0x28;
    plVar7 = (longlong *)&(this->CurrentlyExecuteingCmd).Function.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
  if (BVar6 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
  }
  FGameThreadInfo::~FGameThreadInfo(&this->GameThreadInfo);
  DestructItems<TSharedPtr<Audio::FMixerSourceBuffer,1>,int>
            ((TSharedPtr<Audio::FMixerSourceBuffer,1> *)
             (this->PendingSourceBuffers).AllocatorInstance.Data,
             (this->PendingSourceBuffers).ArrayNum);
  pFVar3 = (this->PendingSourceBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AudioBusKeys_AudioThread).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->AudioBuses).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AudioBuses).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AudioBuses);
  DestructItems<Audio::FMixerSourceSubmixOutputBuffer,int>
            ((FMixerSourceSubmixOutputBuffer *)
             (this->SourceSubmixOutputBuffers).AllocatorInstance.Data,
             (this->SourceSubmixOutputBuffers).ArrayNum);
  pFVar3 = (this->SourceSubmixOutputBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<Audio::FMixerSourceManager::FSourceInfo,int>
            ((FSourceInfo *)(this->SourceInfos).AllocatorInstance.Data,(this->SourceInfos).ArrayNum)
  ;
  pFVar3 = (this->SourceInfos).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ListenerTransforms).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::
  ~TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>(&this->MpscCommandQueue)
  ;
  pFVar3 = (this->DebugSoloSources).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CommandBufferIndexCriticalSection);
  DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int>
            ((FAudioMixerThreadCommand *)
             this->CommandBuffers[1].SourceCommandQueue.AllocatorInstance.Data,
             this->CommandBuffers[1].SourceCommandQueue.ArrayNum);
  pFVar3 = this->CommandBuffers[1].SourceCommandQueue.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int>
            ((FAudioMixerThreadCommand *)
             this->CommandBuffers[0].SourceCommandQueue.AllocatorInstance.Data,
             this->CommandBuffers[0].SourceCommandQueue.ArrayNum);
  pFVar3 = this->CommandBuffers[0].SourceCommandQueue.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->MixerSources).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceDataOverridePlugin).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpatialInterfaceInfo).SpatializationPlugin.SharedReferenceCount.
             ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x0001464dca8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection);
  return;
}

// operator() @ 1464ddeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  int iVar2;
  FMixerSubmix *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  TReferenceControllerBase<1> *local_res18;
  
  uVar10 = *(uint *)((longlong)this + 8);
  lVar13 = *(longlong *)this;
  uVar12 = 0;
  uVar8 = uVar12;
  if ((int)uVar10 < *(int *)(lVar13 + 0x130)) {
    uVar8 = ~uVar10 >> 0x1f;
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
  local_res18 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  lVar13 = (longlong)(int)uVar10 * 0x5d0 + *(longlong *)(lVar13 + 0x128);
  pTVar14 = local_res18;
  if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = local_res18->SharedReferenceCount;
    do {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1464ddf62;
      LOCK();
      aVar7 = local_res18->SharedReferenceCount;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        local_res18->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    this_00 = ((TWeakPtr<Audio::FMixerSubmix,1> *)((longlong)this + 0x10))->Object;
    pTVar14 = local_res18;
    if (this_00 != (FMixerSubmix *)0x0) {
      uVar10 = *(int *)(lVar13 + 0xd8) - 1;
      if (-1 < (int)uVar10) {
        lVar15 = (longlong)(int)uVar10 * 0x28;
        do {
          uVar8 = uVar12;
          if ((int)uVar10 < *(int *)(lVar13 + 0xd8)) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar6 = TWeakPtr<Audio::FMixerSubmix,1>::UEOpEquals<Audio::FMixerSubmix>
                            ((TWeakPtr<Audio::FMixerSubmix,1> *)
                             (*(longlong *)(lVar13 + 0xd0) + lVar15),
                             (TWeakPtr<Audio::FMixerSubmix,1> *)((longlong)this + 0x10));
          if (bVar6) {
            uVar8 = uVar12;
            if ((int)uVar10 < *(int *)(lVar13 + 0xd8)) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TArray<Audio::FMixerSourceSubmixSend,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      ((TArray<Audio::FMixerSourceSubmixSend,TSizedDefaultAllocator<32>_> *)
                       (lVar13 + 0xd0),uVar10);
          }
          lVar15 = lVar15 + -0x28;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      pTVar14 = local_res18;
      *(byte *)(lVar13 + 0x522) = *(byte *)(lVar13 + 0x522) & 0xdf;
      iVar2 = *(int *)(lVar13 + 0xd8);
      plVar11 = *(longlong **)(lVar13 + 0xd0);
      plVar1 = plVar11 + (longlong)iVar2 * 5;
      do {
        if (*(int *)(lVar13 + 0xd8) != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<Audio::FMixerSourceSubmixSend,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (plVar11 == plVar1) goto LAB_1464de0fd;
        pTVar3 = (TReferenceControllerBase<1> *)plVar11[1];
        pTVar9 = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          aVar5 = pTVar3->SharedReferenceCount;
          do {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            if (aVar5 == (atomic<int>)0x0) goto LAB_1464de0d4;
            LOCK();
            aVar7 = pTVar3->SharedReferenceCount;
            bVar6 = aVar5 == aVar7;
            if (bVar6) {
              pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
              aVar7 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar7;
          } while (!bVar6);
          pTVar9 = pTVar3;
          if ((*plVar11 != 0) && ((int)plVar11[3] == 1)) goto code_r0x0001464de0ed;
        }
LAB_1464de0d4:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        plVar11 = plVar11 + 5;
      } while( true );
    }
  }
LAB_1464ddf62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
code_r0x0001464de0ed:
  *(byte *)(lVar13 + 0x522) = *(byte *)(lVar13 + 0x522) | 0x20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_1464de0fd:
  if ((*(byte *)(lVar13 + 0x522) & 0x20) == 0) {
    uVar10 = *(uint *)((longlong)this + 8);
    lVar13 = *(longlong *)this;
    uVar8 = 0;
    if ((int)uVar10 < *(int *)(lVar13 + 0x140)) {
      uVar8 = ~uVar10 >> 0x1f;
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
    Audio::FMixerSourceSubmixOutputBuffer::SetPreAttenuationSourceBuffer
              ((FMixerSourceSubmixOutputBuffer *)
               ((longlong)(int)uVar10 * 0x330 + *(longlong *)(lVar13 + 0x138)),
               (TArray<float,TAlignedHeapAllocator<16>_> *)0x0);
  }
  uVar10 = *(uint *)((longlong)this + 8);
  lVar13 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar10 < *(int *)(lVar13 + 0x88)) {
    uVar8 = ~uVar10 >> 0x1f;
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
  Audio::FMixerSubmix::RemoveSourceVoice
            (this_00,*(FMixerSourceVoice **)
                      (*(longlong *)(lVar13 + 0x80) + (longlong)(int)uVar10 * 8));
  goto LAB_1464ddf62;
}

// operator() @ 1464de1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()(void *this)

{
  FMixerSourceManager *this_00;
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  longlong *plVar5;
  code **ppcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_478 [32];
  longlong local_458 [128];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_478;
  lVar7 = 0x10000;
  do {
    this_00 = *(FMixerSourceManager **)this;
    local_58[0] = (code *)0x0;
    local_30 = (code **)0x0;
    local_30 = FMemory::Malloc(0x408,8);
    lVar8 = 8;
    *local_30 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<``Audio::FMixerSourceManager::Init'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                         ::_vftable_;
    plVar5 = local_458;
    ppcVar6 = local_30 + 1;
    do {
      pcVar1 = (code *)plVar5[1];
      pcVar2 = (code *)plVar5[2];
      pcVar3 = (code *)plVar5[3];
      *ppcVar6 = (code *)*plVar5;
      ppcVar6[1] = pcVar1;
      pcVar1 = (code *)plVar5[4];
      pcVar4 = (code *)plVar5[5];
      ppcVar6[2] = pcVar2;
      ppcVar6[3] = pcVar3;
      pcVar2 = (code *)plVar5[6];
      pcVar3 = (code *)plVar5[7];
      ppcVar6[4] = pcVar1;
      ppcVar6[5] = pcVar4;
      pcVar1 = (code *)plVar5[8];
      pcVar4 = (code *)plVar5[9];
      ppcVar6[6] = pcVar2;
      ppcVar6[7] = pcVar3;
      pcVar2 = (code *)plVar5[10];
      pcVar3 = (code *)plVar5[0xb];
      ppcVar6[8] = pcVar1;
      ppcVar6[9] = pcVar4;
      pcVar1 = (code *)plVar5[0xc];
      pcVar4 = (code *)plVar5[0xd];
      ppcVar6[10] = pcVar2;
      ppcVar6[0xb] = pcVar3;
      pcVar2 = (code *)plVar5[0xe];
      pcVar3 = (code *)plVar5[0xf];
      ppcVar6[0xc] = pcVar1;
      ppcVar6[0xd] = pcVar4;
      ppcVar6[0xe] = pcVar2;
      ppcVar6[0xf] = pcVar3;
      lVar8 = lVar8 + -1;
      plVar5 = plVar5 + 0x10;
      ppcVar6 = ppcVar6 + 0x10;
    } while (lVar8 != 0);
    if (local_30 + 1 != (code **)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``Audio::FMixerSourceManager::Init'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    Audio::FMixerSourceManager::AudioMixerThreadCommand
              (this_00,(TFunction<void___cdecl(void)> *)local_58,"SpamNopsCmd() -- Console command",
               false);
    if (local_58[0] != (code *)0x0) {
      ppcVar6 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar6 = local_30;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

// operator() @ 1464de370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>::operator()(void *this)

{
  undefined1 *puVar1;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar2;
  int *piVar3;
  FString *pFVar4;
  FQuartzQuantizedRequestData *this_00;
  byte *pbVar5;
  IAudioMixerRenderStep *pIVar6;
  byte bVar7;
  char cVar8;
  Type TVar9;
  IAudioMixerRenderStep IVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  FAudioRenderScheduler *this_01;
  void *_Src;
  code *pcVar14;
  FAudioBusKey FVar15;
  FAudioBusKey FVar16;
  atomic<int> aVar17;
  FMixerAudioBus *pFVar18;
  bool bVar19;
  byte bVar20;
  BOOL BVar21;
  int iVar22;
  atomic<int> aVar23;
  uint uVar24;
  FInlineEnvelopeFollower *pFVar25;
  FQuartzQuantizedCommandHandle *pFVar26;
  FAudioSpatializationInterfaceInfo *pFVar27;
  longlong lVar28;
  longlong lVar29;
  FAudioRenderStepId FVar30;
  byte bVar31;
  uint uVar32;
  ulonglong uVar33;
  LPCRITICAL_SECTION lpCriticalSection;
  IAudioMixerRenderStep IVar34;
  FScriptContainerElement *pFVar35;
  IAudioMixerRenderStep *pIVar36;
  IAudioMixerRenderStep *pIVar37;
  uint uVar38;
  int iVar40;
  FString *pFVar41;
  bool local_res8 [8];
  bool local_res10 [8];
  undefined1 local_res18 [8];
  FLLMScope local_res20 [2];
  uint local_2b8;
  undefined4 local_2b0 [2];
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  TSharedPtr<Audio::FMixerSubmix,1> local_298;
  undefined8 local_288;
  ForAnyElementType local_280;
  int local_278;
  int local_274;
  uint local_270;
  float local_26c;
  float local_268 [2];
  FMixerSourceSubmixOutputBufferSettings local_260;
  uint local_240;
  undefined4 uStack_23c;
  uint local_238;
  undefined4 uStack_234;
  longlong local_230;
  FInlineEnvelopeFollowerInitParams local_228;
  FMemScope local_210;
  FAudioRenderStepId local_208;
  FAudioRenderStepId local_200;
  FScriptContainerElement *local_1f8;
  IAudioMixerRenderStep local_1f0;
  TSharedRef<Audio::FMixerAudioBus,1> local_1e8;
  FString local_1d8;
  FString local_1c8;
  FAudioBusSend local_1b8;
  TSharedRef<Audio::FMixerAudioBus,1> local_1a0;
  undefined1 local_190 [8];
  IAudioMixerRenderStep local_188;
  IAudioMixerRenderStep IStack_180;
  FString local_178;
  IAudioMixerRenderStep local_168;
  IAudioMixerRenderStep IStack_160;
  IAudioMixerRenderStep local_158;
  IAudioMixerRenderStep IStack_150;
  FQuartzQuantizedCommandInitInfo local_148;
  FQuartzQuantizedCommandHandle local_c8;
  FAudioSpatializationInterfaceInfo local_a8;
  FInlineEnvelopeFollower local_88;
  ulonglong uVar39;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  if ((*(longlong *)((longlong)this + 0x90) == 0) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959147>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x4ab,"InitParams.SourceVoice != nullptr"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar24 = *(uint *)((longlong)this + 8);
  lVar28 = *(longlong *)this;
  uVar32 = 0;
  if ((int)uVar24 < *(int *)(lVar28 + 0x130)) {
    uVar32 = ~uVar24 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  IVar34 = *(IAudioMixerRenderStep *)((longlong)this + 0x18);
  IVar10 = *(IAudioMixerRenderStep *)((longlong)this + 0x10);
  pIVar37 = (IAudioMixerRenderStep *)((longlong)(int)uVar24 * 0x5d0 + *(longlong *)(lVar28 + 0x128))
  ;
  if (IVar34 != (IAudioMixerRenderStep)0x0) {
    LOCK();
    *(int *)((longlong)IVar34 + 8) = *(int *)((longlong)IVar34 + 8) + 1;
    UNLOCK();
  }
  local_188 = pIVar37[2];
  IStack_180 = pIVar37[3];
  pIVar37[2] = IVar10;
  pIVar37[3] = IVar34;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IStack_180);
  if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959153>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x4b1,"SourceInfo.MixerSourceBuffer.IsValid()"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  IVar34 = pIVar37[2];
  uVar24 = *(uint *)((longlong)IVar34 + 0x128);
  TVar9 = *(Type *)((longlong)IVar34 + 0x88);
  *(uint *)((longlong)IVar34 + 0x128) = uVar24 | 1;
  if ((TVar9 == PCM) || (TVar9 == PCMPreview)) {
    Audio::FMixerSourceBuffer::SubmitInitialPCMBuffers((FMixerSourceBuffer *)IVar34);
  }
  else if (((TVar9 == PCMRealTime) || (TVar9 == Streaming)) && ((uVar24 & 0x200) == 0)) {
    Audio::FMixerSourceBuffer::SubmitInitialRealtimeBuffers((FMixerSourceBuffer *)IVar34);
  }
  if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  IVar34 = pIVar37[2];
  lpCriticalSection = (LPCRITICAL_SECTION)((longlong)IVar34 + 0xd8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  BVar21 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar21 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    if (*(longlong **)((longlong)IVar34 + 0x60) == (longlong *)0x0) {
      if ((*(longlong *)((longlong)IVar34 + 0x58) != 0) &&
         ((*(byte *)((longlong)IVar34 + 0x128) & 0x20) != 0)) {
        if (((*(byte *)(*(longlong *)((longlong)IVar34 + 0x58) + 0x364) & 1) == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("SoundWave && SoundWave->bProcedural",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                                ,0x322,L""), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        (**(code **)(**(longlong **)((longlong)IVar34 + 0x58) + 0x3b8))();
      }
    }
    else {
      (**(code **)(**(longlong **)((longlong)IVar34 + 0x60) + 0x18))();
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  bVar31 = *(byte *)(pIVar37 + 0xa4);
  bVar7 = *(byte *)((longlong)this + 0x2c0);
  bVar20 = pIVar37[0xa4].field_0x1 & 0x3d | 2;
  pIVar37[0xa4].field_0x1 = bVar20;
  *(byte *)(pIVar37 + 0xa4) = ((bVar31 ^ bVar7) & 1 ^ bVar31) & 3 | 4;
  bVar20 = (*(char *)((longlong)this + 0x2c2) << 2 ^ bVar20) & 4 ^ bVar20;
  pIVar37[0xa4].field_0x1 = bVar20;
  pIVar37[0xa4].field_0x1 = (*(char *)((longlong)this + 0x2c3) << 3 ^ bVar20) & 8 ^ bVar20;
  bVar31 = (*(char *)((longlong)this + 0x2c8) << 3 ^ pIVar37[0xa4].field_0x2) & 8U ^
           pIVar37[0xa4].field_0x2;
  pIVar37[0xa4].field_0x2 = bVar31;
  *(undefined4 *)(pIVar37 + 0xa6) = *(undefined4 *)((longlong)this + 0x2cc);
  *(undefined4 *)&pIVar37[0xa6].field_0x4 = *(undefined4 *)((longlong)this + 0x2d0);
  pIVar37[0xa7] = *(IAudioMixerRenderStep *)((longlong)this + 0x2b8);
  cVar8 = *(char *)((longlong)this + 0x2c9);
  pIVar37[0xa4].field_0x3 = pIVar37[0xa4].field_0x3 & 0xfe;
  pIVar37[0xa4].field_0x2 = (cVar8 << 4 ^ bVar31) & 0x10 ^ bVar31;
  IVar34 = *(IAudioMixerRenderStep *)((longlong)this + 0x20);
  pIVar37[4] = IVar34;
  (**(code **)(*(longlong *)IVar34 + 8))();
  iVar22 = *(int *)((longlong)this + 0x98);
  *(int *)&pIVar37[0xa4].field_0x4 = iVar22;
  *(undefined4 *)&pIVar37[0xa5].field_0x4 = *(undefined4 *)((longlong)this + 0x9c);
  Audio::FRuntimeResampler::Reset((FRuntimeResampler *)(pIVar37 + 0xa8),iVar22);
  puVar1 = &pIVar37[10].field_0x4;
  iVar40 = *(int *)(*(longlong *)this + 0x240) * *(int *)((longlong)this + 0x98);
  iVar22 = *(int *)puVar1;
  *(int *)(pIVar37 + 10) = 0;
  if (iVar22 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(pIVar37 + 9),0,(int *)puVar1);
  }
  iVar22 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,iVar40,(ForAnyElementType *)(pIVar37 + 9),(int *)(pIVar37 + 10),
                      (int *)puVar1);
  memset((void *)((longlong)pIVar37[9] + (longlong)iVar22 * 4),0,(longlong)iVar40 << 2);
  iVar22 = *(int *)&pIVar37[0xc].field_0x4;
  *(int *)(pIVar37 + 0xc) = 0;
  if (iVar22 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(pIVar37 + 0xb),0,(int *)&pIVar37[0xc].field_0x4);
  }
  iVar22 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,iVar40,(ForAnyElementType *)(pIVar37 + 0xb),(int *)(pIVar37 + 0xc),
                      (int *)&pIVar37[0xc].field_0x4);
  memset((void *)((longlong)pIVar37[0xb] + (longlong)iVar22 * 4),0,(longlong)iVar40 << 2);
  Audio::FInterpolatedLPF::Init
            ((FInterpolatedLPF *)(pIVar37 + 0x2a),
             (float)*(int *)(*(longlong *)(*(longlong *)this + 0x40) + 0x84),
             *(int *)((longlong)this + 0x98));
  Audio::FInterpolatedHPF::Init
            ((FInterpolatedHPF *)(pIVar37 + 0x32),
             (float)*(int *)(*(longlong *)(*(longlong *)this + 0x40) + 0x84),
             *(int *)((longlong)this + 0x98));
  local_228.AttackTimeMsec = *(float *)((longlong)this + 0xa0);
  local_228.bIsAnalog = true;
  local_228.AnalysisWindowMsec = 5.0;
  local_228.Mode = Peak;
  local_228.SampleRate =
       (float)(*(int *)(*(longlong *)(*(longlong *)this + 0x40) + 0x84) /
              *(int *)(*(longlong *)this + 0x240));
  local_228.ReleaseTimeMsec = *(float *)((longlong)this + 0xa4);
  pFVar25 = Audio::FInlineEnvelopeFollower::FInlineEnvelopeFollower(&local_88,&local_228);
  IVar34 = (IAudioMixerRenderStep)pFVar25->_padding_;
  pIVar37[0x68] = (IAudioMixerRenderStep)pFVar25->_padding_;
  pIVar37[0x69] = IVar34;
  IVar34 = *(IAudioMixerRenderStep *)&pFVar25->Value;
  pIVar37[0x6a] = (IAudioMixerRenderStep)pFVar25->_padding_;
  pIVar37[0x6b] = IVar34;
  IVar34 = *(IAudioMixerRenderStep *)&pFVar25->AnalysisFilterAlpha;
  pIVar37[0x6c] = *(IAudioMixerRenderStep *)&pFVar25->AnalysisValue;
  pIVar37[0x6d] = IVar34;
  Audio::FModulationDestination::operator=
            ((FModulationDestination *)(pIVar37 + 0x6f),
             (FModulationDestination *)((longlong)this + 0x2d8));
  Audio::FModulationDestination::operator=
            ((FModulationDestination *)(pIVar37 + 0x71),
             (FModulationDestination *)((longlong)this + 0x308));
  Audio::FModulationDestination::operator=
            ((FModulationDestination *)(pIVar37 + 0x73),
             (FModulationDestination *)((longlong)this + 0x2f8));
  Audio::FModulationDestination::operator=
            ((FModulationDestination *)(pIVar37 + 0x75),
             (FModulationDestination *)((longlong)this + 0x2e8));
  this_00 = (FQuartzQuantizedRequestData *)((longlong)this + 0x238);
  if (*(longlong *)((longlong)this + 0x248) != 0) {
    bVar19 = Audio::FQuartzClockManager::DoesClockExist
                       ((FQuartzClockManager *)(*(longlong *)(*(longlong *)this + 0x40) + 0xab0),
                        (FName *)this_00);
    if (bVar19) {
      Audio::FQuartzQuantizedCommandInitInfo::FQuartzQuantizedCommandInitInfo
                (&local_148,this_00,(float)*(int *)(*(longlong *)(*(longlong *)this + 0x40) + 0x84),
                 *(int *)((longlong)this + 8));
      pFVar26 = Audio::FQuartzClockManager::AddCommandToClock
                          ((FQuartzClockManager *)(*(longlong *)(*(longlong *)this + 0x40) + 0xab0),
                           &local_c8,&local_148);
      pTVar2 = &pFVar26->CommandPtr;
      *(FName *)(pIVar37 + 0x9c) = pFVar26->OwningClockName;
      if ((TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(pIVar37 + 0x9d) != pTVar2) {
        pIVar37[0x9d] = (IAudioMixerRenderStep)pTVar2->Object;
        pTVar2->Object = (IQuartzQuantizedCommand *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pIVar37 + 0x9e),
                   &(pFVar26->CommandPtr).SharedReferenceCount);
      }
      pIVar37[0x9f] = (IAudioMixerRenderStep)pFVar26->MixerDevice;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.CommandPtr.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.OwningClockPointer.SharedReferenceCount.ReferenceController);
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 local_148.GameThreadSubscribers.AllocatorInstance.Data,
                 local_148.GameThreadSubscribers.ArrayNum);
      if ((FQuartzGameThreadSubscriber *)local_148.GameThreadSubscribers.AllocatorInstance.Data !=
          (FQuartzGameThreadSubscriber *)0x0) {
        FMemory::Free(local_148.GameThreadSubscribers.AllocatorInstance.Data);
      }
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 local_148.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
                 local_148.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
      if ((FQuartzGameThreadSubscriber *)
          local_148.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
          (FQuartzGameThreadSubscriber *)0x0) {
        FMemory::Free(local_148.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
    }
    else {
      if (2 < (byte)LogAudioMixer._0_1_) {
        ::FName::ToString((FName *)this_00,&local_178);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
      }
      if ((*(longlong *)((longlong)this + 0x248) == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      Audio::IQuartzQuantizedCommand::Cancel(*(IQuartzQuantizedCommand **)((longlong)this + 0x248));
    }
  }
  if (*(char *)((longlong)this + 0x2c2) != '\0') {
    if (((*(byte *)(*(longlong *)this + 0x24c) & 2) == 0) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3835252409160959229>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                            ,0x4fd,"bUsingSpatializationPlugin"), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FLLMScope::FLLMScope(local_res20,AudioMixerPlugins,false,None,Default,true);
    FMemScope::FMemScope(&local_210,AudioMixerPlugins,true);
    *(byte *)(*(longlong *)this + 0x24c) = *(byte *)(*(longlong *)this + 0x24c) & 0xfd;
    pFVar27 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
                        (*(FAudioDevice **)(*(longlong *)this + 0x40),&local_a8);
    FAudioDevice::FAudioSpatializationInterfaceInfo::operator=
              ((FAudioSpatializationInterfaceInfo *)(*(longlong *)this + 0x48),pFVar27);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SpatializationPlugin.SharedReferenceCount.ReferenceController);
    if (*(longlong *)(*(longlong *)this + 0x50) != 0) {
      pbVar5 = (byte *)(*(longlong *)this + 0x24c);
      *pbVar5 = *pbVar5 | 2;
    }
    lVar28 = *(longlong *)this;
    if ((*(longlong *)(lVar28 + 0x50) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    plVar11 = *(longlong **)(lVar28 + 0x50);
    (**(code **)(*plVar11 + 0x40))
              (plVar11,*(undefined4 *)((longlong)this + 8),(longlong)this + 0x2b0,
               *(undefined4 *)((longlong)this + 0x98),*(undefined8 *)((longlong)this + 0xb8));
    FMemScope::~FMemScope(&local_210);
    FLLMScope::~FLLMScope(local_res20);
  }
  if (*(longlong *)((longlong)this + 0xc0) != 0) {
    lVar28 = *(longlong *)(*(longlong *)this + 0x40);
    if ((*(longlong *)(lVar28 + 0x110) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    plVar11 = *(longlong **)(lVar28 + 0x110);
    (**(code **)(*plVar11 + 0x18))
              (plVar11,*(undefined4 *)((longlong)this + 8),(longlong)this + 0x2b0,
               *(undefined4 *)((longlong)this + 0x98),*(undefined8 *)((longlong)this + 0xc0));
    pIVar37[0xa4].field_0x1 = pIVar37[0xa4].field_0x1 | 0x10;
  }
  if (*(longlong *)((longlong)this + 200) != 0) {
    lVar28 = *(longlong *)(*(longlong *)this + 0x40);
    if ((*(longlong *)(lVar28 + 0x100) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    plVar11 = *(longlong **)(lVar28 + 0x100);
    (**(code **)(*plVar11 + 0x20))
              (plVar11,*(undefined4 *)((longlong)this + 8),(longlong)this + 0x2b0,
               *(undefined4 *)((longlong)this + 0x98),*(undefined8 *)((longlong)this + 200));
    pIVar37[0xa4].field_0x1 = pIVar37[0xa4].field_0x1 | 0x20;
  }
  IVar34 = *(IAudioMixerRenderStep *)((longlong)this + 0x2a0);
  if (IVar34 != (IAudioMixerRenderStep)0x0) {
    IVar10 = *(IAudioMixerRenderStep *)((longlong)this + 0x2a8);
    if (IVar10 != (IAudioMixerRenderStep)0x0) {
      LOCK();
      *(int *)((longlong)IVar10 + 8) = *(int *)((longlong)IVar10 + 8) + 1;
      UNLOCK();
    }
    local_168 = pIVar37[0xa2];
    IStack_160 = pIVar37[0xa3];
    pIVar37[0xa2] = IVar34;
    pIVar37[0xa3] = IVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)IStack_160);
  }
  IVar34 = *(IAudioMixerRenderStep *)((longlong)this + 0x298);
  IVar10 = *(IAudioMixerRenderStep *)((longlong)this + 0x290);
  if (IVar34 != (IAudioMixerRenderStep)0x0) {
    LOCK();
    *(int *)((longlong)IVar34 + 8) = *(int *)((longlong)IVar34 + 8) + 1;
    UNLOCK();
  }
  local_158 = pIVar37[0xa0];
  IStack_150 = pIVar37[0xa1];
  pIVar37[0xa0] = IVar10;
  pIVar37[0xa1] = IVar34;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IStack_150);
  bVar31 = pIVar37[0xa4].field_0x2 & 0x7f | *(char *)((longlong)this + 0x2cb) << 7;
  *(undefined1 *)(pIVar37 + 0x3f) = 1;
  pIVar37[0xa4].field_0x2 = bVar31;
  bVar31 = (bVar31 ^ *(byte *)((longlong)this + 0x2c5)) & 1 ^ bVar31;
  pIVar37[0xa4].field_0x2 = bVar31;
  bVar31 = (*(char *)((longlong)this + 0x2c6) * '\x02' ^ bVar31) & 2 ^ bVar31;
  pIVar37[0xa4].field_0x2 = bVar31;
  pIVar37[0xa4].field_0x2 = (*(char *)((longlong)this + 0x2c7) << 2 ^ bVar31) & 4 ^ bVar31;
  if (*(int *)((longlong)this + 0x98) <= *(int *)((longlong)this + 0x88)) {
    pIVar36 = (IAudioMixerRenderStep *)((longlong)this + 0x318);
    pIVar6 = pIVar37 + 0x3b;
    *(bool *)(pIVar37 + 0x3f) = *(char *)((longlong)this + 0x2c1) == '\0';
    *(undefined4 *)(pIVar37 + 0x3a) = *(undefined4 *)((longlong)this + 0x74);
    if (pIVar6 != pIVar36) {
      DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                ((TSharedPtr<FSoundEffectSource,1> *)*pIVar6,*(int *)(pIVar37 + 0x3c));
      if (*pIVar6 != (IAudioMixerRenderStep)0x0) {
        FMemory::Free((void *)*pIVar6);
      }
      *pIVar6 = *pIVar36;
      *pIVar36 = (IAudioMixerRenderStep)0x0;
      *(undefined4 *)(pIVar37 + 0x3c) = *(undefined4 *)((longlong)this + 800);
      *(undefined4 *)&pIVar37[0x3c].field_0x4 = *(undefined4 *)((longlong)this + 0x324);
      *(undefined8 *)((longlong)this + 800) = 0;
    }
    pIVar36 = pIVar37 + 0x3d;
    local_288 = 0;
    if (((*(FScriptContainerElement **)pIVar36 <= (FScriptContainerElement *)&local_288) &&
        ((FScriptContainerElement *)&local_288 <
         *(FScriptContainerElement **)pIVar36 + (longlong)*(int *)&pIVar37[0x3e].field_0x4 * 8)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    iVar22 = *(int *)(pIVar37 + 0x3e);
    if (iVar22 == *(int *)&pIVar37[0x3e].field_0x4) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pIVar36,(int *)&pIVar37[0x3e].field_0x4);
    }
    *(int *)(pIVar37 + 0x3e) = iVar22 + 1;
    *(undefined8 *)(*(FScriptContainerElement **)pIVar36 + (longlong)iVar22 * 8) = local_288;
    uVar24 = *(uint *)((longlong)this + 0x58);
    if (uVar24 != 0xffffffff) {
      *(uint *)(pIVar37 + 0x1c) = uVar24;
      if (*(float *)((longlong)this + 0x70) != 0.0) {
        pIVar37[0x1d] =
             (IAudioMixerRenderStep)
             (longlong)
             ((float)*(int *)(*(longlong *)(*(longlong *)this + 0x40) + 0x84) *
             *(float *)((longlong)this + 0x70));
      }
      uStack_23c = 0xffffffff;
      FVar15.InstanceId = 0xffffffff;
      FVar15.ObjectId = uVar24;
      local_res8[0] = false;
      local_240 = uVar24;
      Audio::FMixerSourceManager::FindOrAddAudioBus
                (*(FMixerSourceManager **)this,&local_1e8,FVar15,*(int *)((longlong)this + 0x5c),
                 true,local_res8);
      pFVar18 = local_1e8.Object;
      if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar35 = (pFVar18->InstanceIds).AllocatorInstance.Data;
      local_2b0[0] = *(undefined4 *)((longlong)this + 8);
      if (((pFVar35 <= (FScriptContainerElement *)local_2b0) &&
          ((FScriptContainerElement *)local_2b0 <
           pFVar35 + (longlong)(pFVar18->InstanceIds).ArrayMax * 4)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar22 = (pFVar18->InstanceIds).ArrayNum;
      piVar3 = &(pFVar18->InstanceIds).ArrayMax;
      if (iVar22 == *piVar3) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pFVar18->InstanceIds).AllocatorInstance,piVar3);
      }
      (pFVar18->InstanceIds).ArrayNum = iVar22 + 1;
      *(undefined4 *)((pFVar18->InstanceIds).AllocatorInstance.Data + (longlong)iVar22 * 4) =
           local_2b0[0];
      if (AudioMixerCVars::UseRenderScheduler != 0) {
        Audio::FAudioRenderStepId::FromTransmitterID((ulong64)&local_208);
        Audio::FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&local_200);
        Audio::FAudioRenderScheduler::AddDependency
                  ((pFVar18->SourceManager->MixerDevice->RenderScheduler).Ptr,local_200,local_208);
      }
      if (local_res8[0] == false) {
        ::FString::operator=(&(local_1e8.Object)->BusName,(FString *)((longlong)this + 0x60));
        Audio::TraceAudioBusStartMessage
                  (*(uint *)(*(longlong *)(*(longlong *)this + 0x40) + 0xa0),
                   *(uint *)((longlong)this + 0x58),(FString *)((longlong)this + 0x60),
                   *(int *)((longlong)this + 0x5c));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
    }
  }
  pIVar36 = pIVar37 + 0x1f;
  local_2b8 = 0;
  lVar28 = (longlong)this - (longlong)pIVar37;
  local_230 = lVar28;
  do {
    local_270 = *(uint *)((longlong)&pIVar36[-0x17].field_0x0 + lVar28);
    uVar33 = (ulonglong)(int)local_270;
    IVar34 = *(IAudioMixerRenderStep *)((longlong)&pIVar36[-0x18].field_0x0 + lVar28);
    local_1f0 = (IAudioMixerRenderStep)(uVar33 * 0x20 + (longlong)IVar34);
    while( true ) {
      IVar10 = local_1f0;
      if (*(int *)((longlong)&pIVar36[-0x17].field_0x0 + lVar28) != (int)uVar33) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Audio::FInitAudioBusSend_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
        lVar28 = local_230;
      }
      if (IVar34 == IVar10) break;
      local_1b8.SourceId = *(int *)((longlong)this + 8);
      local_1b8.TransmitterID = 0xffffffffffffffff;
      local_1b8.SendLevel = 0.0;
      if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      local_1b8.SendLevel = *(float *)((longlong)IVar34 + 4);
      uStack_234 = 0xffffffff;
      local_1b8.TransmitterID = *(ulong64 *)((longlong)pIVar37[2] + 0x98);
      local_238 = *(uint *)IVar34;
      FVar16.InstanceId = 0xffffffff;
      FVar16.ObjectId = local_238;
      local_res10[0] = false;
      Audio::FMixerSourceManager::FindOrAddAudioBus
                (*(FMixerSourceManager **)this,&local_1a0,FVar16,*(uint *)((longlong)IVar34 + 8),
                 true,local_res10);
      pFVar18 = local_1a0.Object;
      Audio::FMixerAudioBus::AddSend(local_1a0.Object,(EBusSendType)local_2b8,&local_1b8);
      if (local_res10[0] == false) {
        pFVar41 = &pFVar18->BusName;
        pFVar4 = (FString *)((longlong)IVar34 + 0x10);
        if (pFVar41 != pFVar4) {
          uVar24 = *(uint *)((longlong)IVar34 + 0x18);
          piVar3 = &(pFVar18->BusName).Data.ArrayMax;
          local_1f8 = (pFVar4->Data).AllocatorInstance.Data;
          iVar22 = *piVar3;
          (pFVar18->BusName).Data.ArrayNum = uVar24;
          if ((uVar24 == 0) && (iVar22 == 0)) {
            *piVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar24,iVar22,(ForAnyElementType *)pFVar41,uVar24,piVar3);
            if (uVar24 != 0) {
              memcpy((pFVar41->Data).AllocatorInstance.Data,local_1f8,(longlong)(int)uVar24 * 2);
            }
          }
        }
        Audio::TraceAudioBusStartMessage
                  (*(uint *)(*(longlong *)(*(longlong *)this + 0x40) + 0xa0),*(uint *)IVar34,pFVar4,
                   *(uint *)((longlong)IVar34 + 8));
      }
      if ((((ulonglong)pIVar36[-1] <= (ulonglong)IVar34) &&
          ((ulonglong)IVar34 <
           (ulonglong)((longlong)pIVar36[-1] + (longlong)*(int *)&pIVar36->field_0x4 * 4))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar22 = *(int *)pIVar36;
      if (iVar22 == *(int *)&pIVar36->field_0x4) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pIVar36 + -1),(int *)&pIVar36->field_0x4);
      }
      *(int *)pIVar36 = iVar22 + 1;
      *(uint *)((longlong)pIVar36[-1] + (longlong)iVar22 * 4) = *(uint *)IVar34;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.SharedReferenceCount.ReferenceController);
      IVar34 = (IAudioMixerRenderStep)((longlong)IVar34 + 0x20);
      uVar33 = (ulonglong)local_270;
      lVar28 = local_230;
    }
    local_2b8 = local_2b8 + 1;
    pIVar36 = pIVar36 + 2;
  } while ((int)local_2b8 < 2);
  local_26c = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(pIVar37 + 0x14),&local_26c,
             *(int *)((longlong)this + 0x98));
  local_268[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(pIVar37 + 0x16),local_268,
             *(int *)((longlong)this + 0x98));
  uVar24 = *(uint *)((longlong)this + 8);
  uVar33 = 0;
  lVar28 = *(longlong *)this;
  uVar32 = 0;
  if ((int)uVar24 < *(int *)(lVar28 + 0x88)) {
    uVar32 = ~uVar24 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((*(longlong *)(*(longlong *)(lVar28 + 0x80) + (longlong)(int)uVar24 * 8) != 0) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959351>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x577,"MixerSources[SourceId] == nullptr"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar24 = *(uint *)((longlong)this + 8);
  lVar28 = *(longlong *)this;
  uVar12 = *(undefined8 *)((longlong)this + 0x90);
  uVar32 = 0;
  if ((int)uVar24 < *(int *)(lVar28 + 0x88)) {
    uVar32 = ~uVar24 >> 0x1f;
  }
  if ((uVar32 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  *(undefined8 *)(*(longlong *)(lVar28 + 0x80) + (longlong)(int)uVar24 * 8) = uVar12;
  if ((*(int *)(pIVar37 + 0x1b) != 0) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959356>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x57c,"SourceInfo.SubmixSends.Num() == 0"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((*(int *)(*(longlong *)this + 0x130) <= *(int *)((longlong)this + 8)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceId < SourceInfos.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x57f,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((pIVar37[0xa4].field_0x1 & 0xc) == 4) {
    local_2b8 = 2;
  }
  else {
    local_2b8 = *(uint *)&pIVar37[0xa4].field_0x4;
  }
  iVar22 = *(int *)((longlong)this + 0x30);
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  uVar24 = 0;
  uVar39 = uVar33;
  if (0 < iVar22) {
    do {
      uVar38 = (uint)uVar39;
      uVar32 = uVar24;
      if ((int)uVar38 < iVar22) {
        uVar32 = ~uVar38 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar35 = (FScriptContainerElement *)(*(longlong *)((longlong)this + 0x28) + uVar33);
      local_298.Object = (FMixerSubmix *)0x0;
      local_298.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar35 + 8);
      if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        aVar17 = (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar17 == (atomic<int>)0x0) {
            local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1464df54a;
          }
          LOCK();
          aVar23 = (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar19 = aVar17 == aVar23;
          if (bVar19) {
            (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar17 + 1);
            aVar23 = aVar17;
          }
          UNLOCK();
          aVar17 = aVar23;
        } while (!bVar19);
        if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          local_298.Object = *(FMixerSubmix **)pFVar35;
        }
      }
LAB_1464df54a:
      if (local_298.Object != (FMixerSubmix *)0x0) {
        pIVar36 = pIVar37 + 0x1a;
        if (((*(FScriptContainerElement **)pIVar36 <= pFVar35) &&
            (pFVar35 < *(FScriptContainerElement **)pIVar36 +
                       (longlong)*(int *)&pIVar37[0x1b].field_0x4 * 0x28)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar22 = *(int *)(pIVar37 + 0x1b);
        if (iVar22 == *(int *)&pIVar37[0x1b].field_0x4) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)pIVar36,(int *)&pIVar37[0x1b].field_0x4);
        }
        FVar13.Data = *(FScriptContainerElement **)pIVar36;
        *(int *)(pIVar37 + 0x1b) = iVar22 + 1;
        lVar29 = (longlong)iVar22;
        *(undefined8 *)(FVar13.Data + lVar29 * 0x28) = *(undefined8 *)pFVar35;
        lVar28 = *(longlong *)(pFVar35 + 8);
        *(longlong *)(FVar13.Data + lVar29 * 0x28 + 8) = lVar28;
        if (lVar28 != 0) {
          LOCK();
          *(int *)(lVar28 + 0xc) = *(int *)(lVar28 + 0xc) + 1;
          UNLOCK();
        }
        *(undefined4 *)(FVar13.Data + lVar29 * 0x28 + 0x10) = *(undefined4 *)(pFVar35 + 0x10);
        FVar13.Data[lVar29 * 0x28 + 0x14] = pFVar35[0x14];
        *(undefined4 *)(FVar13.Data + lVar29 * 0x28 + 0x18) = *(undefined4 *)(pFVar35 + 0x18);
        *(undefined8 *)(FVar13.Data + lVar29 * 0x28 + 0x20) = *(undefined8 *)(pFVar35 + 0x20);
        if (*(int *)(pFVar35 + 0x18) == 1) {
          pIVar37[0xa4].field_0x2 = pIVar37[0xa4].field_0x2 | 0x20;
        }
        if ((local_298.Object == (FMixerSubmix *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        Audio::FMixerSubmix::AddOrSetSourceVoice
                  (local_298.Object,*(FMixerSourceVoice **)((longlong)this + 0x90),
                   *(float *)(pFVar35 + 0x10),*(EMixerSourceSubmixSendStage *)(pFVar35 + 0x18));
        if ((local_298.Object == (FMixerSubmix *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        bVar19 = Audio::FMixerSubmix::IsSoundfieldSubmix(local_298.Object);
        if (bVar19) {
          if (((local_2a8.Data <= &local_298) &&
              (&local_298 <
               (TSharedPtr<Audio::FMixerSubmix,1> *)
               (local_2a8.Data + (longlong)local_2a0._4_4_ * 0x10))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar22 = (int)local_2a0;
          if ((int)local_2a0 == local_2a0._4_4_) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_2a8,(int *)((longlong)&local_2a0 + 4));
          }
          local_2a0 = CONCAT44(local_2a0._4_4_,iVar22 + 1);
          *(FMixerSubmix **)&local_2a8.Data[(longlong)iVar22 * 0x10].field_0x0 = local_298.Object;
          *(TReferenceControllerBase<1> **)(local_2a8.Data + (longlong)iVar22 * 0x10 + 8) =
               local_298.SharedReferenceCount.ReferenceController;
          if (local_298.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_298.SharedReferenceCount.ReferenceController);
      iVar22 = *(int *)((longlong)this + 0x30);
      uVar33 = uVar33 + 0x28;
      uVar39 = (ulonglong)(uVar38 + 1);
    } while ((int)(uVar38 + 1) < iVar22);
  }
  uVar32 = *(uint *)((longlong)this + 8);
  lVar28 = *(longlong *)this;
  uVar38 = uVar24;
  if ((int)uVar32 < *(int *)(lVar28 + 0x140)) {
    uVar38 = ~uVar32 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar28 = *(longlong *)(lVar28 + 0x138);
  local_260.SoundfieldSubmixSends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.SoundfieldSubmixSends.ArrayMax = 0;
  local_260.NumOutputChannels = *(uint *)(*(longlong *)(*(longlong *)this + 0x40) + 0xcf8);
  local_260.NumSourceChannels = local_2b8;
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>((TSharedPtr<Audio::FMixerSubmix,1> *)0x0,0);
  FVar13.Data = local_2a8.Data;
  iVar22 = (int)local_2a0;
  local_260.SoundfieldSubmixSends.ArrayNum = (int)local_2a0;
  if (((int)local_2a0 != 0) || (local_260.SoundfieldSubmixSends.ArrayMax != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_2a0,local_260.SoundfieldSubmixSends.ArrayMax,
               &local_260.SoundfieldSubmixSends.AllocatorInstance,(int)local_2a0,
               &local_260.SoundfieldSubmixSends.ArrayMax);
    ConstructItems<TSharedPtr<Audio::FMixerSubmix,1>,TSharedPtr<Audio::FMixerSubmix,1>,int>
              (local_260.SoundfieldSubmixSends.AllocatorInstance.Data,
               (TSharedPtr<Audio::FMixerSubmix,1> *)FVar13.Data,iVar22);
  }
  local_260.bIs3D = (bool)(*(byte *)(pIVar37 + 0xa4) & 1);
  local_260.bIsSoundfield = (bool)((byte)pIVar37[0xa4].field_0x2 >> 4 & 1);
  Audio::FMixerSourceSubmixOutputBuffer::Reset
            ((FMixerSourceSubmixOutputBuffer *)((longlong)(int)uVar32 * 0x330 + lVar28),&local_260);
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    this_01 = *(FAudioRenderScheduler **)(*(longlong *)(*(longlong *)this + 0x40) + 0xe50);
    if ((pIVar37[2] == (IAudioMixerRenderStep)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FVar30 = Audio::FAudioRenderStepId::FromTransmitterID((ulong64)local_190);
                    /* WARNING: Load size is inaccurate */
    Audio::FAudioRenderScheduler::AddStep(this_01,(FAudioRenderStepId)*FVar30.Value,pIVar37);
  }
  if (((*(byte *)(pIVar37 + 0xb6) & 1) != 0) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160959406>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x5ae,"!SourceInfo.bIsDebugMode"), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  *(byte *)(pIVar37 + 0xb6) =
       (*(byte *)(pIVar37 + 0xb6) ^ *(byte *)((longlong)this + 0x2c4)) & 1 ^
       *(byte *)(pIVar37 + 0xb6);
  ::FString::operator=((FString *)(pIVar37 + 0xb7),(FString *)((longlong)this + 0xa8));
  uVar32 = *(uint *)((longlong)this + 8);
  lVar28 = *(longlong *)this;
  uVar38 = uVar24;
  if ((int)uVar32 < *(int *)(lVar28 + 0x130)) {
    uVar38 = ~uVar32 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((*(byte *)((longlong)(int)uVar32 * 0x5d0 + 0x5b0 + *(longlong *)(lVar28 + 0x128)) & 1) != 0) {
    ::FString::PrintfImpl(&local_1c8,L"Is initializing");
    uVar32 = *(uint *)((longlong)this + 8);
    lVar28 = *(longlong *)this;
    if ((int)uVar32 < *(int *)(lVar28 + 0x130)) {
      uVar24 = ~uVar32 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    lVar28 = *(longlong *)(lVar28 + 0x128);
    local_280.Data = (FScriptContainerElement *)0x0;
    local_278 = *(int *)((longlong)(int)uVar32 * 0x5d0 + 0x5c0 + lVar28);
    lVar29 = (longlong)local_278;
    _Src = *(void **)((longlong)(int)uVar32 * 0x5d0 + 0x5b8 + lVar28);
    if (local_278 == 0) {
      local_274 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_278,0,&local_280,local_278,&local_274);
      memcpy(local_280.Data,_Src,lVar29 * 2);
    }
    ::FString::PrintfImpl(&local_1d8,L"<Debug Sound Log> [Id=%d][Name=%s]: %s");
    if (local_280.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data);
    }
    if (4 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
            ((TSharedPtr<Audio::FMixerSubmix,1> *)
             local_260.SoundfieldSubmixSends.AllocatorInstance.Data,
             local_260.SoundfieldSubmixSends.ArrayNum);
  if ((TSharedPtr<Audio::FMixerSubmix,1> *)local_260.SoundfieldSubmixSends.AllocatorInstance.Data !=
      (TSharedPtr<Audio::FMixerSubmix,1> *)0x0) {
    FMemory::Free(local_260.SoundfieldSubmixSends.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
            ((TSharedPtr<Audio::FMixerSubmix,1> *)local_2a8.Data,(int)local_2a0);
  if ((TSharedPtr<Audio::FMixerSubmix,1> *)local_2a8.Data !=
      (TSharedPtr<Audio::FMixerSubmix,1> *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  return;
}

// operator() @ 1464e0120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  lVar5 = *(longlong *)this;
  uVar1 = *(uint *)((longlong)this + 8);
  uVar4 = 0;
  if ((int)uVar1 < *(int *)(lVar5 + 0x130)) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar5 + 0x128);
  *(byte *)(lVar5 + 0x520) = *(byte *)(lVar5 + 0x520) & 0xfb | 0x10;
  return;
}

// operator() @ 1464e01c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::Play'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  longlong lVar8;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  FString local_28;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar1 = *(uint *)((longlong)this + 8);
  lVar7 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar7 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar7 + 0x128);
  *(byte *)(lVar7 + 0x520) = *(byte *)(lVar7 + 0x520) & 0xef | 0xc;
  if (5 < (byte)LogAudioTiming._0_1_) {
    local_60 = *(int *)(lVar7 + 0x5c0);
    lVar8 = (longlong)local_60;
    pvVar2 = *(void **)(lVar7 + 0x5b8);
    local_68.Data = (FScriptContainerElement *)0x0;
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,pvVar2,lVar8 * 2);
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_60 != 0) {
      FVar6.Data = local_68.Data;
    }
    bVar4 = Audio::MatchesLogFilter((wchar_t *)FVar6.Data);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (bVar4) {
      local_50 = *(int *)(lVar7 + 0x5c0);
      lVar8 = (longlong)local_50;
      pvVar2 = *(void **)(lVar7 + 0x5b8);
      local_58.Data = (FScriptContainerElement *)0x0;
      if (local_50 == 0) {
        local_4c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_50,0,&local_58,local_50,&local_4c);
        memcpy(local_58.Data,pvVar2,lVar8 * 2);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  uVar1 = *(uint *)((longlong)this + 8);
  lVar7 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(byte *)((longlong)(int)uVar1 * 0x5d0 + 0x5b0 + *(longlong *)(lVar7 + 0x128)) & 1) != 0) {
    ::FString::PrintfImpl(&local_28,L"Is playing");
    uVar1 = *(uint *)((longlong)this + 8);
    lVar7 = *(longlong *)this;
    uVar5 = 0;
    if ((int)uVar1 < *(int *)(lVar7 + 0x130)) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x128);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = *(int *)((longlong)(int)uVar1 * 0x5d0 + 0x5c0 + lVar7);
    lVar8 = (longlong)local_40;
    pvVar2 = *(void **)((longlong)(int)uVar1 * 0x5d0 + 0x5b8 + lVar7);
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,pvVar2,lVar8 * 2);
    }
    ::FString::PrintfImpl(&local_38,L"<Debug Sound Log> [Id=%d][Name=%s]: %s");
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (4 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1464e0cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  FAudioRenderScheduler *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAudioRenderStepId FVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  if (AudioMixerCVars::UseRenderScheduler != 0) {
    lVar6 = *(longlong *)this;
    uVar1 = *(uint *)((longlong)this + 8);
    uVar4 = 0;
    if ((int)uVar1 < *(int *)(lVar6 + 0x130)) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar6 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar6 + 0x128);
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceInfo.MixerSourceBuffer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x5d5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = *(FAudioRenderScheduler **)(*(longlong *)(*(longlong *)this + 0x40) + 0xe50);
    if (*(longlong *)(lVar6 + 0x10) == 0) {
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
    FVar5 = Audio::FAudioRenderStepId::FromTransmitterID((ulong64)local_res8);
                    /* WARNING: Load size is inaccurate */
    Audio::FAudioRenderScheduler::RemoveStep(this_00,(FAudioRenderStepId)*FVar5.Value);
  }
  Audio::FMixerSourceManager::ReleaseSource
            (*(FMixerSourceManager **)this,*(int *)((longlong)this + 8));
  return;
}

// operator() @ 1464e0e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar5;
  FAudioBusKey FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ForAnyElementType *pFVar11;
  longlong lVar12;
  longlong lVar13;
  bool local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  TSharedRef<Audio::FMixerAudioBus,1> local_68;
  FAudioBusSend local_58;
  
  uVar4 = *(uint *)((longlong)this + 8);
  lVar12 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar4 < *(int *)(lVar12 + 0x130)) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_58.SourceId = *(int *)((longlong)this + 8);
  lVar12 = (longlong)(int)uVar4 * 0x5d0 + *(longlong *)(lVar12 + 0x128);
  if (*(longlong *)(lVar12 + 0x10) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar1 = (FScriptContainerElement *)((longlong)this + 0x10);
  local_58.SendLevel = *(float *)((longlong)this + 0x14);
  uStackX_1c = 0xffffffff;
  local_res8[0] = false;
  local_58.TransmitterID = *(ulong64 *)(*(longlong *)(lVar12 + 0x10) + 0x98);
  local_res18 = *(uint *)pFVar1;
  FVar6.InstanceId = 0xffffffff;
  FVar6.ObjectId = local_res18;
  Audio::FMixerSourceManager::FindOrAddAudioBus
            (*(FMixerSourceManager **)this,&local_68,FVar6,*(int *)(lVar12 + 0x524),true,local_res8)
  ;
  Audio::FMixerAudioBus::AddSend(local_68.Object,*(EBusSendType *)((longlong)this + 0xc),&local_58);
  if (local_res8[0] == false) {
    ::FString::operator=(&(local_68.Object)->BusName,(FString *)((longlong)this + 0x18));
    Audio::TraceAudioBusStartMessage
              (*(uint *)(*(longlong *)(*(longlong *)this + 0x40) + 0xa0),*(uint *)pFVar1,
               (FString *)((longlong)this + 0x18),*(int *)(lVar12 + 0x524));
  }
  lVar13 = (ulonglong)*(byte *)((longlong)this + 0xc) + 0xf;
  puVar10 = *(uint **)(lVar12 + lVar13 * 0x10);
  iVar9 = *(int *)(lVar12 + 8 + lVar13 * 0x10);
  puVar3 = puVar10 + iVar9;
  while( true ) {
    if (*(int *)(lVar12 + 8 + lVar13 * 0x10) != iVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar10 == puVar3) break;
    if (*puVar10 == *(uint *)pFVar1) goto LAB_1464e10d8;
    puVar10 = puVar10 + 1;
  }
  pFVar11 = (ForAnyElementType *)
            (((ulonglong)*(byte *)((longlong)this + 0xc) + 0xf) * 0x10 + lVar12);
  if ((pFVar11->Data <= pFVar1) &&
     (pFVar1 < pFVar11->Data + (longlong)*(int *)((longlong)&pFVar11[1].Data + 4) * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = *(int *)&pFVar11[1].Data;
  piVar2 = (int *)((longlong)&pFVar11[1].Data + 4);
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar11,piVar2);
  }
  *(int *)&pFVar11[1].Data = iVar9 + 1;
  *(uint *)(pFVar11->Data + (longlong)iVar9 * 4) = *(uint *)pFVar1;
LAB_1464e10d8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1464e1100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FMixerSourceSubmixOutputBuffer *this_00;
  byte bVar7;
  longlong lVar8;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  if (*(int *)(*(longlong *)this + 0x240) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x76a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = *(uint *)((longlong)this + 8);
  lVar1 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x130)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = *(uint *)((longlong)this + 8);
  lVar8 = (longlong)(int)uVar5 * 0x5d0 + *(longlong *)(lVar1 + 0x128);
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x140)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FMixerSourceSubmixOutputBuffer *)
            ((longlong)(int)uVar6 * 0x330 + *(longlong *)(lVar1 + 0x138));
  if ((this_00->NumSourceChannels == *(uint *)((longlong)this + 0xc)) ||
     ((*(byte *)(lVar8 + 0x521) & 4) != 0)) {
    bVar7 = (*(byte *)(lVar8 + 0x520) ^ *(byte *)((longlong)this + 0x20)) & 1 ^
            *(byte *)(lVar8 + 0x520);
    *(byte *)(lVar8 + 0x520) = bVar7;
    *(byte *)(lVar8 + 0x520) = (*(char *)((longlong)this + 0x21) * '\x02' ^ bVar7) & 2 ^ bVar7;
    bVar3 = Audio::FMixerSourceSubmixOutputBuffer::SetChannelMap
                      (this_00,(TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)this + 0x10),
                       *(bool *)((longlong)this + 0x21));
    lVar1 = *(longlong *)this;
    uVar5 = *(uint *)((longlong)this + 8);
    uVar6 = 0;
    if ((int)uVar5 < *(int *)(lVar1 + 0x1e0)) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(bool *)((longlong)(int)uVar5 + *(longlong *)(lVar1 + 0x1d8)) = bVar3;
  }
  return;
}

// operator() @ 1464e12f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>::operator()(void *this)

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  if (*(int *)(*(longlong *)this + 0x240) < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x746,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar3 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pfVar1 = (float *)((longlong)(int)uVar3 * 0x5d0 + 0x140 + *(longlong *)(lVar4 + 0x128));
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    uVar3 = *(uint *)((longlong)this + 8);
    lVar4 = *(longlong *)this;
    uVar2 = *(undefined4 *)((longlong)this + 0xc);
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)((longlong)(int)uVar3 * 0x5d0 + 0x13c + *(longlong *)(lVar4 + 0x128)) = uVar2;
  }
  lVar4 = *(longlong *)this;
  uVar2 = *(undefined4 *)((longlong)this + 0xc);
  uVar3 = *(uint *)((longlong)this + 8);
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)((longlong)(int)uVar3 * 0x5d0 + 0x140 + *(longlong *)(lVar4 + 0x128)) = uVar2;
  return;
}

// operator() @ 1464e14b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar1 = *(uint *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x128);
  *(undefined4 *)((longlong)(int)uVar1 * 0x5d0 + 0x148 + lVar2) =
       *(undefined4 *)((longlong)this + 0xc);
  Audio::FInterpolatedHPF::StartFrequencyInterpolation
            ((FInterpolatedHPF *)(lVar2 + (longlong)(int)uVar1 * 0x5d0 + 400),
             *(float *)((longlong)this + 0xc),*(int *)(*(longlong *)this + 0x240));
  return;
}

// operator() @ 1464e1570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar1 = *(uint *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x128);
  *(undefined4 *)((longlong)(int)uVar1 * 0x5d0 + 0x144 + lVar2) =
       *(undefined4 *)((longlong)this + 0xc);
  Audio::FInterpolatedLPF::StartFrequencyInterpolation
            ((FInterpolatedLPF *)(lVar2 + (longlong)(int)uVar1 * 0x5d0 + 0x150),
             *(float *)((longlong)this + 0xc),*(int *)(*(longlong *)this + 0x240));
  return;
}

// operator() @ 1464e1630

void __thiscall
`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  
  lVar2 = *(longlong *)this;
  pFVar3 = (ForAnyElementType *)(lVar2 + 0x118);
  if (pFVar3 != (ForAnyElementType *)((longlong)this + 8)) {
    _Src = ((ForAnyElementType *)((longlong)this + 8))->Data;
    iVar1 = *(int *)((longlong)this + 0x10);
    *(int *)(lVar2 + 0x120) = iVar1;
    if ((iVar1 == 0) && (*(int *)(lVar2 + 0x124) == 0)) {
      *(int *)(lVar2 + 0x124) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar1,*(int *)(lVar2 + 0x124),pFVar3,iVar1,(int *)(lVar2 + 0x124));
    if (iVar1 != 0) {
      memcpy(pFVar3->Data,_Src,(longlong)iVar1 * 0x60);
    }
  }
  return;
}

// operator() @ 1464e16d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>::operator()(void *this)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x128);
  uVar3 = *(undefined4 *)((longlong)this + 0xc);
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x5d0 + 0x522 + lVar4);
  *pbVar1 = *pbVar1 | 0x40;
  *(undefined4 *)((longlong)(int)uVar2 * 0x5d0 + 0x3c4 + lVar4) = uVar3;
  return;
}

// operator() @ 1464e1780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>::operator()(void *this)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x128);
  uVar3 = *(undefined4 *)((longlong)this + 0xc);
  pbVar1 = (byte *)((longlong)(int)uVar2 * 0x5d0 + 0x522 + lVar4);
  *pbVar1 = *pbVar1 | 0x40;
  *(undefined4 *)((longlong)(int)uVar2 * 0x5d0 + 0x3c0 + lVar4) = uVar3;
  return;
}

// operator() @ 1464e1830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar1 = *(uint *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((longlong)(int)uVar1 * 0x5d0 + 0x3bc + *(longlong *)(lVar2 + 0x128)) =
       *(undefined4 *)((longlong)this + 0xc);
  return;
}

// operator() @ 1464e18d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar1 = *(uint *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x130)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((longlong)(int)uVar1 * 0x5d0 + 0x3b8 + *(longlong *)(lVar2 + 0x128)) =
       *(undefined4 *)((longlong)this + 0xc);
  return;
}

// operator() @ 1464e1970

void __thiscall
`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)((longlong)this + 8);
  lVar5 = *(longlong *)this;
  uVar4 = 0;
  if ((int)uVar1 < *(int *)(lVar5 + 0x130)) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar5 + 0x128);
  Audio::FModulationDestination::operator=
            ((FModulationDestination *)(lVar5 + 0x378),
             (FModulationDestination *)((longlong)this + 0x10));
  Audio::FModulationDestination::operator=
            ((FModulationDestination *)(lVar5 + 0x388),
             (FModulationDestination *)((longlong)this + 0x40));
  Audio::FModulationDestination::operator=
            ((FModulationDestination *)(lVar5 + 0x398),
             (FModulationDestination *)((longlong)this + 0x30));
  Audio::FModulationDestination::operator=
            ((FModulationDestination *)(lVar5 + 0x3a8),
             (FModulationDestination *)((longlong)this + 0x20));
  return;
}

// operator() @ 1464e1a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>::operator()(void *this)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  if (*(int *)(*(longlong *)this + 0x240) < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x71c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar3 = *(uint *)((longlong)this + 8);
  lVar5 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar3 < *(int *)(lVar5 + 0x130)) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x128);
  fVar1 = *(float *)((longlong)this + 0xc);
  lVar9 = (longlong)(int)uVar3 * 0x5d0;
  iVar4 = *(int *)(*(longlong *)this + 0x240);
  *(float *)(lVar9 + 0x118 + lVar5) = fVar1;
  if ((*(char *)(lVar9 + 0x120 + lVar5) == '\0') && (iVar4 != 0)) {
    fVar2 = *(float *)(lVar9 + 0x110 + lVar5);
    *(float *)(lVar9 + 0x11c + lVar5) = (fVar1 - fVar2) / (float)iVar4;
    *(float *)(lVar9 + 0x114 + lVar5) = fVar2;
    return;
  }
  *(float *)(lVar9 + 0x110 + lVar5) = fVar1;
  *(undefined1 *)(lVar9 + 0x120 + lVar5) = 0;
  *(undefined4 *)(lVar9 + 0x11c + lVar5) = 0;
  *(float *)(lVar9 + 0x114 + lVar5) = fVar1;
  return;
}

// operator() @ 1464e1b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar1 = *(uint *)((longlong)this + 8);
  lVar8 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar1 < *(int *)(lVar8 + 0x130)) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)this + 0x18);
  uVar3 = *(undefined8 *)((longlong)this + 0x10);
  lVar8 = (longlong)(int)uVar1 * 0x5d0 + *(longlong *)(lVar8 + 0x128);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)(lVar8 + 0x508);
  *(undefined8 *)(lVar8 + 0x500) = uVar3;
  *(longlong *)(lVar8 + 0x508) = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(byte *)(lVar8 + 0x522) = *(char *)((longlong)this + 0x20) << 7 | *(byte *)(lVar8 + 0x522) & 0x7f
  ;
  return;
}

// operator() @ 1464e1c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_108 [32];
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  lVar11 = 2;
  lVar12 = 2;
  puVar9 = (undefined8 *)((longlong)this + 0x10);
  puVar10 = local_108;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    uVar5 = puVar9[3];
    *puVar10 = *puVar9;
    puVar10[1] = uVar3;
    uVar3 = puVar9[4];
    uVar6 = puVar9[5];
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    uVar4 = puVar9[6];
    uVar5 = puVar9[7];
    puVar10[4] = uVar3;
    puVar10[5] = uVar6;
    uVar3 = puVar9[8];
    uVar6 = puVar9[9];
    puVar10[6] = uVar4;
    puVar10[7] = uVar5;
    uVar4 = puVar9[10];
    uVar5 = puVar9[0xb];
    puVar10[8] = uVar3;
    puVar10[9] = uVar6;
    uVar3 = puVar9[0xc];
    uVar6 = puVar9[0xd];
    puVar10[10] = uVar4;
    puVar10[0xb] = uVar5;
    uVar4 = puVar9[0xe];
    uVar5 = puVar9[0xf];
    puVar10[0xc] = uVar3;
    puVar10[0xd] = uVar6;
    puVar10[0xe] = uVar4;
    puVar10[0xf] = uVar5;
    lVar12 = lVar12 + -1;
    puVar9 = puVar9 + 0x10;
    puVar10 = puVar10 + 0x10;
  } while (lVar12 != 0);
  lVar12 = *(longlong *)this;
  uVar1 = *(uint *)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar1 < *(int *)(lVar12 + 0x130)) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar9 = local_108;
  puVar10 = (undefined8 *)(*(longlong *)(lVar12 + 0x128) + 0x3d0 + (longlong)(int)uVar1 * 0x5d0);
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    uVar5 = puVar9[3];
    *puVar10 = *puVar9;
    puVar10[1] = uVar3;
    uVar3 = puVar9[4];
    uVar6 = puVar9[5];
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    uVar4 = puVar9[6];
    uVar5 = puVar9[7];
    puVar10[4] = uVar3;
    puVar10[5] = uVar6;
    uVar3 = puVar9[8];
    uVar6 = puVar9[9];
    puVar10[6] = uVar4;
    puVar10[7] = uVar5;
    uVar4 = puVar9[10];
    uVar5 = puVar9[0xb];
    puVar10[8] = uVar3;
    puVar10[9] = uVar6;
    uVar3 = puVar9[0xc];
    uVar6 = puVar9[0xd];
    puVar10[10] = uVar4;
    puVar10[0xb] = uVar5;
    uVar4 = puVar9[0xe];
    uVar5 = puVar9[0xf];
    puVar10[0xc] = uVar3;
    puVar10[0xd] = uVar6;
    puVar10[0xe] = uVar4;
    puVar10[0xf] = uVar5;
    lVar11 = lVar11 + -1;
    puVar9 = puVar9 + 0x10;
    puVar10 = puVar10 + 0x10;
  } while (lVar11 != 0);
  return;
}

// operator() @ 1464e1dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType *pFVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMixerSubmix *this_00;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FMixerSourceVoice *pFVar7;
  code *pcVar8;
  atomic<int> aVar9;
  bool bVar10;
  atomic<int> aVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong *plVar17;
  TReferenceControllerBase<1> *pTVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 local_res8 [8];
  longlong *local_res10;
  
  uVar3 = *(uint *)((longlong)this + 8);
  lVar19 = *(longlong *)this;
  uVar15 = 0;
  if ((int)uVar3 < *(int *)(lVar19 + 0x130)) {
    uVar15 = ~uVar3 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  lVar19 = (longlong)(int)uVar3 * 0x5d0 + *(longlong *)(lVar19 + 0x128);
  pTVar18 = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar9 = pTVar4->SharedReferenceCount;
    do {
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      if (aVar9 == (atomic<int>)0x0) goto LAB_1464e1e71;
      LOCK();
      aVar11 = pTVar4->SharedReferenceCount;
      bVar10 = aVar9 == aVar11;
      if (bVar10) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar11 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar11;
    } while (!bVar10);
    this_00 = *(FMixerSubmix **)((longlong)this + 0x10);
    pTVar18 = pTVar4;
    if (this_00 != (FMixerSubmix *)0x0) {
      bVar14 = 0;
      if (*(int *)((longlong)this + 0x28) == 1) {
        bVar14 = 0x20;
      }
      bVar10 = true;
      *(byte *)(lVar19 + 0x522) = bVar14 | *(byte *)(lVar19 + 0x522) & 0xdf;
      iVar12 = *(int *)(lVar19 + 0xd8);
      plVar17 = *(longlong **)(lVar19 + 0xd0);
      local_res10 = plVar17 + (longlong)iVar12 * 5;
      while( true ) {
        if (*(int *)(lVar19 + 0xd8) != iVar12) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Audio::FMixerSourceSubmixSend,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (plVar17 == local_res10) break;
        pTVar18 = (TReferenceControllerBase<1> *)plVar17[1];
        pTVar16 = pTVar18;
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          aVar9 = pTVar18->SharedReferenceCount;
          do {
            pTVar16 = (TReferenceControllerBase<1> *)0x0;
            if (aVar9 == (atomic<int>)0x0) goto LAB_1464e1f31;
            LOCK();
            aVar11 = pTVar18->SharedReferenceCount;
            bVar20 = aVar9 == aVar11;
            if (bVar20) {
              pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
              aVar11 = aVar9;
            }
            UNLOCK();
            aVar9 = aVar11;
          } while (!bVar20);
          pTVar16 = pTVar18;
          if (*plVar17 != 0) {
            if (*(uint *)(*plVar17 + 0x30) == this_00->Id) {
              bVar10 = false;
              *(undefined4 *)(plVar17 + 2) = *(undefined4 *)((longlong)this + 0x20);
              *(undefined4 *)(plVar17 + 3) = *(undefined4 *)((longlong)this + 0x28);
              if ((*(byte *)(lVar19 + 0x522) & 0x20) != 0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar18);
                goto LAB_1464e2062;
              }
            }
            if ((int)plVar17[3] == 1) {
              *(byte *)(lVar19 + 0x522) = *(byte *)(lVar19 + 0x522) | 0x20;
            }
          }
        }
LAB_1464e1f31:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        plVar17 = plVar17 + 5;
      }
      if (bVar10) {
        pFVar2 = (ForAnyElementType *)(lVar19 + 0xd0);
        pFVar1 = (FScriptContainerElement *)((longlong)this + 0x10);
        if (((pFVar2->Data <= pFVar1) &&
            (pFVar1 < pFVar2->Data + (longlong)*(int *)(lVar19 + 0xdc) * 0x28)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = *(int *)(lVar19 + 0xd8);
        if (iVar12 == *(int *)(lVar19 + 0xdc)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,pFVar2,(int *)(lVar19 + 0xdc));
        }
        pFVar5 = pFVar2->Data;
        *(int *)(lVar19 + 0xd8) = iVar12 + 1;
        lVar13 = (longlong)iVar12;
        *(undefined8 *)(pFVar5 + lVar13 * 0x28) = *(undefined8 *)pFVar1;
        lVar6 = *(longlong *)((longlong)this + 0x18);
        *(longlong *)(pFVar5 + lVar13 * 0x28 + 8) = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
          UNLOCK();
        }
        *(undefined4 *)(pFVar5 + lVar13 * 0x28 + 0x10) = *(undefined4 *)((longlong)this + 0x20);
        pFVar5[lVar13 * 0x28 + 0x14] = *(FScriptContainerElement *)((longlong)this + 0x24);
        *(undefined4 *)(pFVar5 + lVar13 * 0x28 + 0x18) = *(undefined4 *)((longlong)this + 0x28);
        *(undefined8 *)(pFVar5 + lVar13 * 0x28 + 0x20) = *(undefined8 *)((longlong)this + 0x30);
      }
LAB_1464e2062:
      if ((*(byte *)(lVar19 + 0x522) & 0x20) == 0) {
        uVar3 = *(uint *)((longlong)this + 8);
        lVar19 = *(longlong *)this;
        uVar15 = 0;
        if ((int)uVar3 < *(int *)(lVar19 + 0x140)) {
          uVar15 = ~uVar3 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        Audio::FMixerSourceSubmixOutputBuffer::SetPreAttenuationSourceBuffer
                  ((FMixerSourceSubmixOutputBuffer *)
                   ((longlong)(int)uVar3 * 0x330 + *(longlong *)(lVar19 + 0x138)),
                   (TArray<float,TAlignedHeapAllocator<16>_> *)0x0);
      }
      uVar3 = *(uint *)((longlong)this + 8);
      lVar19 = *(longlong *)this;
      uVar15 = 0;
      if ((int)uVar3 < *(int *)(lVar19 + 0x88)) {
        uVar15 = ~uVar3 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = *(FMixerSourceVoice **)(*(longlong *)(lVar19 + 0x80) + (longlong)(int)uVar3 * 8);
      if (pFVar7 == (FMixerSourceVoice *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3835252409160960083>,true,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                            ,0x853,"nullptr != SourceVoice");
        pTVar18 = pTVar4;
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        Audio::FMixerSubmix::AddOrSetSourceVoice
                  (this_00,pFVar7,*(float *)((longlong)this + 0x20),
                   *(EMixerSourceSubmixSendStage *)((longlong)this + 0x28));
        pTVar18 = pTVar4;
      }
    }
  }
LAB_1464e1e71:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return;
}

// operator() @ 1464e2190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>::operator()(void *this)

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  if (*(int *)(*(longlong *)this + 0x240) < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x72b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar3 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (-1 < *(char *)((longlong)(int)uVar3 * 0x5d0 + 0x520 + *(longlong *)(lVar4 + 0x128))) {
    uVar3 = *(uint *)((longlong)this + 8);
    lVar4 = *(longlong *)this;
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pfVar1 = (float *)((longlong)(int)uVar3 * 0x5d0 + 0x128 + *(longlong *)(lVar4 + 0x128));
    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
      uVar3 = *(uint *)((longlong)this + 8);
      lVar4 = *(longlong *)this;
      uVar2 = *(undefined4 *)((longlong)this + 0xc);
      uVar7 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined4 *)((longlong)(int)uVar3 * 0x5d0 + 0x124 + *(longlong *)(lVar4 + 0x128)) = uVar2;
    }
    lVar4 = *(longlong *)this;
    uVar2 = *(undefined4 *)((longlong)this + 0xc);
    uVar3 = *(uint *)((longlong)this + 8);
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(lVar4 + 0x130)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined4 *)((longlong)(int)uVar3 * 0x5d0 + 0x128 + *(longlong *)(lVar4 + 0x128)) = uVar2;
  }
  return;
}

// operator() @ 1464e23c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool local_res8 [8];
  TSharedRef<Audio::FMixerAudioBus,1> local_18;
  
  local_res8[0] = false;
  Audio::FMixerSourceManager::FindOrAddAudioBus
            (*(FMixerSourceManager **)this,&local_18,*(FAudioBusKey *)((longlong)this + 8),
             *(int *)((longlong)this + 0x10),*(bool *)((longlong)this + 0x14),local_res8);
  if (local_res8[0] == false) {
    ::FString::operator=(&(local_18.Object)->BusName,(FString *)((longlong)this + 0x18));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_18.Object)->NumChannels != *(int *)((longlong)this + 0x10)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959479>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x5f7,"AudioBusPtr->GetNumChannels() == InNumChannels");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (local_18.Object)->bIsAutomatic = *(bool *)((longlong)this + 0x14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1464e2530

void __thiscall `Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  pTVar6 = TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                   *)(*(longlong *)this + 0x148),(FAudioBusKey *)((longlong)this + 8));
  plVar7 = (longlong *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 == 0) {
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
    if (*(char *)(*plVar7 + 400) == '\0') {
      lVar3 = *(longlong *)this;
      iVar1 = *(int *)(lVar3 + 0x130);
      lVar8 = *(longlong *)(lVar3 + 0x128);
      lVar9 = (longlong)iVar1 * 0x5d0 + lVar8;
      while( true ) {
        if (*(int *)(lVar3 + 0x130) != iVar1) {
          `TCheckedPointerIterator<Audio::FMixerSourceManager::FSourceInfo,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        if (lVar8 == lVar9) break;
        if (*(int *)(lVar8 + 0xe0) == *(int *)((longlong)this + 8)) {
          *(byte *)(lVar8 + 0x520) = *(byte *)(lVar8 + 0x520) & 99;
        }
        lVar8 = lVar8 + 0x5d0;
      }
      lVar3 = *(longlong *)this;
      if (*(int *)(lVar3 + 0x150) != *(int *)(lVar3 + 0x17c)) {
        uVar2 = *(uint *)((longlong)this + 8);
        TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<Audio::FAudioBusKey>
                  ((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                    *)(lVar3 + 0x148),
                   uVar2 * 0x40 + (uVar2 >> 2) + *(int *)((longlong)this + 0xc) + -0x61c88647 ^
                   uVar2,(FAudioBusKey *)((longlong)this + 8));
        return;
      }
    }
  }
  return;
}

// operator() @ 1464e2670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>::operator()(void *this)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  FString local_28;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0x40));
  uVar6 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar6 < *(int *)(lVar3 + 0x130)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x128);
  lVar8 = (longlong)(int)uVar6 * 0x5d0;
  bVar2 = *(byte *)(lVar8 + 0x520 + lVar3);
  *(byte *)(lVar8 + 0x520 + lVar3) = bVar2 & 0xef | 0x80;
  if ((bVar2 & 0x20) != 0) {
    Audio::FMixerSourceManager::StopInternal
              (*(FMixerSourceManager **)this,*(int *)((longlong)this + 8));
    return;
  }
  uVar6 = *(int *)((longlong)this + 0xc) + 3U & 0xfffffffc;
  if ((int)uVar6 < 1) {
    *(byte *)(lVar8 + 0x520 + lVar3) = bVar2 & 99;
  }
  else {
    fVar1 = *(float *)(lVar8 + 0x124 + lVar3);
    *(float *)(lVar8 + 0x130 + lVar3) = fVar1;
    *(uint *)(lVar8 + 0x138 + lVar3) = uVar6;
    *(undefined4 *)(lVar8 + 0x134 + lVar3) = 0;
    *(uint *)(lVar8 + 300 + lVar3) =
         (uint)(fVar1 / (float)(int)uVar6) ^ __xmm_80000000800000008000000080000000;
  }
  uVar6 = *(uint *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar6 < *(int *)(lVar3 + 0x130)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(byte *)((longlong)(int)uVar6 * 0x5d0 + 0x5b0 + *(longlong *)(lVar3 + 0x128)) & 1) != 0) {
    ::FString::PrintfImpl(&local_28,L"Is stopping with fade");
    uVar6 = *(uint *)((longlong)this + 8);
    lVar3 = *(longlong *)this;
    uVar7 = 0;
    if ((int)uVar6 < *(int *)(lVar3 + 0x130)) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 0x128);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = *(int *)((longlong)(int)uVar6 * 0x5d0 + 0x5c0 + lVar3);
    lVar8 = (longlong)local_40;
    _Src = *(void **)((longlong)(int)uVar6 * 0x5d0 + 0x5b8 + lVar3);
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar8 * 2);
    }
    ::FString::PrintfImpl(&local_38,L"<Debug Sound Log> [Id=%d][Name=%s]: %s");
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (4 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1464e2e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMixerSourceSubmixOutputBuffer *this_00;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong local_res8;
  longlong local_res10;
  
  lVar9 = *(longlong *)this;
  uVar8 = 0;
  *(int *)(lVar9 + 0x244) = *(int *)(*(longlong *)(lVar9 + 0x40) + 0xcf8) * *(int *)(lVar9 + 0x240);
  lVar9 = *(longlong *)this;
  if (0 < *(int *)(lVar9 + 0x23c)) {
    lVar12 = 0;
    local_res8 = 0;
    local_res10 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)(lVar9 + 0x130)) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = *(longlong *)(lVar9 + 0x128) + local_res8;
      if ((*(byte *)(lVar9 + 0x520) & 0x14) != 0) {
        lVar3 = *(longlong *)this;
        uVar6 = 0;
        if ((int)uVar8 < *(int *)(lVar3 + 0x140)) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FMixerSourceSubmixOutputBuffer *)(*(longlong *)(lVar3 + 0x138) + local_res10);
        Audio::FMixerSourceSubmixOutputBuffer::SetNumOutputChannels
                  (this_00,*(uint *)((longlong)this + 8));
        pTVar2 = (TArray<float,TAlignedHeapAllocator<16>_> *)(lVar9 + 0x4d0);
        piVar1 = (int *)(lVar9 + 0x4dc);
        *(undefined4 *)(lVar9 + 0x4d8) = 0;
        if (*(int *)(lVar9 + 0x4dc) < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pTVar2,0,piVar1);
        }
        iVar11 = 2;
        if ((*(byte *)(lVar9 + 0x521) & 4) == 0) {
          iVar11 = *(int *)(lVar9 + 0x524);
        }
        if ((*(byte *)(lVar9 + 0x520) & 1) == 0) {
          *(undefined4 *)(lVar9 + 0x4d8) = 0;
          if (*piVar1 < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,(ForAnyElementType *)pTVar2,0,piVar1);
          }
          Audio::FMixerDevice::Get2DChannelMap
                    ((bool)(*(byte *)(lVar9 + 0x522) >> 3 & 1),iVar11,*(int *)((longlong)this + 8),
                     (bool)(*(byte *)(lVar9 + 0x520) >> 1 & 1),pTVar2);
        }
        else {
          lVar3 = *(longlong *)this;
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(lVar3 + 0x1e0)) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined1 *)(*(longlong *)(lVar3 + 0x1d8) + lVar12) = 1;
          iVar11 = iVar11 * *(int *)((longlong)this + 8);
          iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                            (4,4,iVar11,(ForAnyElementType *)pTVar2,(int *)(lVar9 + 0x4d8),piVar1);
          memset((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4,0,(longlong)iVar11 << 2);
        }
        Audio::FMixerSourceSubmixOutputBuffer::SetChannelMap
                  (this_00,pTVar2,(bool)(*(byte *)(lVar9 + 0x520) >> 1 & 1));
      }
      lVar9 = *(longlong *)this;
      local_res8 = local_res8 + 0x5d0;
      local_res10 = local_res10 + 0x330;
      uVar8 = uVar8 + 1;
      lVar12 = lVar12 + 1;
    } while ((int)uVar8 < *(int *)(lVar9 + 0x23c));
  }
  return;
}

// operator() @ 1464e3390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSoundEffectBase *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar11;
  ForAnyElementType *pFVar12;
  TArray<TSharedPtr<FSoundEffectSource,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint local_res10;
  longlong local_res18;
  undefined8 local_88;
  longlong local_80;
  TArray<TSharedPtr<FSoundEffectSource,1>,TSizedDefaultAllocator<32>_> local_78;
  FSoundEffectSourceInitData local_68;
  
  lVar14 = *(longlong *)this;
  local_68.NumSourceChannels = 0;
  local_68.ParentPresetUniqueId = 0xffffffff;
  local_res10 = 0;
  lVar2 = *(longlong *)(lVar14 + 0x40);
  local_68.AudioClock = *(double *)(lVar2 + 0x5c8);
  local_68.AudioDeviceId = *(uint *)(lVar2 + 0xa0);
  local_68.SampleRate = (float)*(int *)(lVar2 + 0x84);
  if (0 < *(int *)(lVar14 + 0x23c)) {
    local_res18 = 0;
    do {
      uVar11 = 0;
      uVar9 = 0;
      if ((int)local_res10 < *(int *)(lVar14 + 0x130)) {
        uVar9 = ~local_res10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = *(longlong *)(lVar14 + 0x128);
      local_80 = lVar14;
      if (*(int *)(local_res18 + 0x1d0 + lVar14) == *(int *)((longlong)this + 8)) {
        *(bool *)(local_res18 + 0x1f8 + lVar14) = *(char *)((longlong)this + 0x20) == '\0';
        lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x18);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        pTVar13 = (TArray<TSharedPtr<FSoundEffectSource,1>,TSizedDefaultAllocator<32>_> *)
                  (lVar14 + 0x1d8 + local_res18);
        if (*(int *)((longlong)this + 0x18) == pTVar13->ArrayNum) {
          if (0 < pTVar13->ArrayNum) {
            lVar14 = 0;
            do {
              uVar9 = 0;
              if ((int)uVar11 < *(int *)((longlong)this + 0x18)) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar3 = (((TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)
                        ((longlong)this + 0x10))->AllocatorInstance).Data;
              uVar9 = 0;
              if ((int)uVar11 < pTVar13->ArrayNum) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar4 = (pTVar13->AllocatorInstance).Data;
              pTVar5 = *(TReferenceControllerBase<1> **)(pFVar4 + lVar14 + 8);
              this_00 = *(FSoundEffectBase **)(pFVar4 + lVar14);
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((this_00 == (FSoundEffectBase *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar8 = FSoundEffectBase::IsPreset(this_00,*(USoundEffectPreset **)(pFVar3 + lVar14));
              if (!bVar8) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar5);
                lVar14 = local_80;
                goto LAB_1464e36db;
              }
              if ((this_00 == (FSoundEffectBase *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FSoundEffectBase::SetEnabled(this_00,(bool)(~(byte)pFVar3[lVar14 + 8] & 1));
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              uVar11 = uVar11 + 1;
              lVar14 = lVar14 + 0x10;
            } while ((int)uVar11 < pTVar13->ArrayNum);
          }
        }
        else {
LAB_1464e36db:
          local_68.NumSourceChannels = *(int *)(local_res18 + 0x524 + lVar14);
          Audio::FMixerSourceManager::ResetSourceEffectChain
                    (*(FMixerSourceManager **)this,local_res10);
          local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.ArrayNum = 0;
          local_78.ArrayMax = 0;
          Audio::FMixerSourceManager::BuildSourceEffectChain
                    (*(FMixerSourceManager **)this,local_res10,&local_68,
                     (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)
                     ((longlong)this + 0x10),&local_78);
          if (pTVar13 != &local_78) {
            DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                      ((TSharedPtr<FSoundEffectSource,1> *)(pTVar13->AllocatorInstance).Data,
                       pTVar13->ArrayNum);
            FVar7.Data = local_78.AllocatorInstance.Data;
            iVar10 = local_78.ArrayNum;
            piVar1 = &pTVar13->ArrayMax;
            pTVar13->ArrayNum = local_78.ArrayNum;
            if ((local_78.ArrayNum == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_78.ArrayNum,*piVar1,(ForAnyElementType *)pTVar13,
                         local_78.ArrayNum,piVar1);
              ConstructItems<TSharedPtr<FSoundEffectSource,1>,TSharedPtr<FSoundEffectSource,1>,int>
                        ((pTVar13->AllocatorInstance).Data,
                         (TSharedPtr<FSoundEffectSource,1> *)FVar7.Data,iVar10);
            }
          }
          local_88 = 0;
          pFVar12 = (ForAnyElementType *)(lVar14 + 0x1e8 + local_res18);
          if (((pFVar12->Data <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               pFVar12->Data + (longlong)*(int *)((longlong)&pFVar12[1].Data + 4) * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)&pFVar12[1].Data;
          piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar12,piVar1);
          }
          *(int *)&pFVar12[1].Data = iVar10 + 1;
          *(undefined8 *)(pFVar12->Data + (longlong)iVar10 * 8) = local_88;
          DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                    ((TSharedPtr<FSoundEffectSource,1> *)local_78.AllocatorInstance.Data,
                     local_78.ArrayNum);
          if ((TSharedPtr<FSoundEffectSource,1> *)local_78.AllocatorInstance.Data !=
              (TSharedPtr<FSoundEffectSource,1> *)0x0) {
            FMemory::Free(local_78.AllocatorInstance.Data);
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      lVar14 = *(longlong *)this;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 0x5d0;
    } while ((int)local_res10 < *(int *)(lVar14 + 0x23c));
  }
  return;
}

// operator() @ 1464e4430

void __thiscall
`Audio::FMixerSourceManager::GenerateSourceAudio'::__l8::<lambda_1>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTaskBase *this_00;
  FTask *pFVar6;
  undefined8 uVar7;
  FTaskBase *this_01;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uStack_2c;
  
  lVar8 = *(longlong *)this;
  uVar9 = 0;
  if (0 < *(int *)(lVar8 + 0x23c)) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < *(int *)(lVar8 + 0x130)) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = *(longlong *)(lVar8 + 0x128);
      if ((((*(byte *)(lVar8 + 0x520 + lVar10) & 8) != 0) &&
          ((*(byte *)(lVar8 + 0x521 + lVar10) & 2) != 0)) &&
         ((bool)*(char *)((longlong)this + 8) == (*(int *)(lVar8 + 0xe0 + lVar10) != -1))) {
        lVar8 = *(longlong *)this;
        this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        if (this_00 == (FTaskBase *)0x0) {
          this_00 = (FTaskBase *)0x0;
        }
        else {
          UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
          this_00->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<``Audio::FMixerSourceManager::GenerateSourceAudio'::`8'::<lambda_1>::operator()'::`5'::<lambda_1>,void,void>
                ::_vftable_;
          if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsCompleted()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                 ,0x1dd,L"State: %d"), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                    (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
          *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
          ;
          *(FTaskBase **)&this_00->LowLevelTask = this_00;
          *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
          pFVar6 = LowLevelTasks::FTask::GetActiveTask();
          uVar7 = 0;
          if (pFVar6 != (FTask *)0x0) {
            uVar7 = *(undefined8 *)&pFVar6->field_0x30;
          }
          *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar7;
          *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc00000544b554200;
          this_00->ExtendedPriority = None;
          UE::FInheritedContextBase::CaptureInheritedContext
                    ((FInheritedContextBase *)&this_00->_padding_);
          this_00[1]._padding_ = lVar8;
          this_00[1]._padding_ = CONCAT44(uStack_2c,uVar9);
          this_00->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<``Audio::FMixerSourceManager::GenerateSourceAudio'::`8'::<lambda_1>::operator()'::`5'::<lambda_1>_>
                ::_vftable_;
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
        this_01 = UE::Tasks::Private::GetCurrentTask();
        if ((this_01 == (FTaskBase *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Parent != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                               ,0x1ff,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Tasks::Private::FTaskBase::AddNested(this_01,this_00);
        if (this_00 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &this_00->RefCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_00->_padding_)(this_00,1);
          }
        }
      }
      lVar8 = *(longlong *)this;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x5d0;
    } while ((int)uVar9 < *(int *)(lVar8 + 0x23c));
  }
  return;
}

// operator() @ 1464e5980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::Init'::__l2::<lambda_2>::operator()(void *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = (undefined ***)0x0;
  local_30 = ``Audio::FMixerSourceManager::Init'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  Audio::FMixerSourceManager::AudioMixerThreadCommand
            (*(FMixerSourceManager **)this,(TFunction<void___cdecl(void)> *)local_48,
             "ChokeCommandQueue() -- Console command",false);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// operator() @ 1464e6950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Audio::FMixerSourceManager::Init'::__l2::<lambda_3>::operator()(void *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = (undefined ***)0x0;
  local_30 = ``Audio::FMixerSourceManager::Init'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  Audio::FMixerSourceManager::AudioMixerThreadMPSCCommand
            (*(FMixerSourceManager **)this,(TFunction<void___cdecl(void)> *)local_48,
             "ChokeMPSCCommandQueue() -- Console command");
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// AddBusPatchDependency @ 1464eb5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AddBusPatchDependency
          (FMixerSourceManager *this,ulong64 param_1,FAudioRenderStepId param_2,
          FAudioRenderStepId param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 local_res10 [2];
  ulong64 local_28;
  ulong64 local_20;
  ulong64 *local_18;
  ulong64 *local_10;
  
  local_res10[0] = param_1;
  if (AudioMixerCVars::UseRenderScheduler == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioMixerCVars::UseRenderScheduler",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0xb20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2.Value != 0xffffffffffffffff) && (param_3.Value != 0xffffffffffffffff)) {
    FAudioRenderScheduler::AddDependency((this->MixerDevice->RenderScheduler).Ptr,param_2,param_3);
    local_18 = local_res10;
    local_10 = &local_28;
    local_28 = param_2.Value;
    local_20 = param_3.Value;
    TSet<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_&&>_>
              ((TSet<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>,FDefaultSetAllocator>
                *)&this->BusPatchDependencies,
               (TPairInitializer<unsigned___int64_const_&,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_&&>
                *)(local_res10 + 1),(bool *)&local_18);
  }
  return;
}

// AddPatchInputForAudioBus @ 1464ec250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AddPatchInputForAudioBus
          (FMixerSourceManager *this,FAudioBusKey param_1,FPatchInput *param_2)

{
  FMixerDevice *pFVar1;
  longlong lVar2;
  atomic<int> aVar3;
  TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *pTVar4;
  code **ppcVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAudioBusKey local_res10 [2];
  undefined1 auStack_a8 [32];
  FMixerSourceManager *local_88;
  FAudioBusKey local_80;
  FPatchInput local_78;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_res10[0] = param_1;
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  pFVar1 = this->MixerDevice;
  aVar3 = (atomic<int>)GetCurrentThreadId();
  if (aVar3 == pFVar1->AudioPlatformThreadId) {
    pTVar4 = TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                     *)&this->AudioBuses,local_res10);
    if (pTVar4 == (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar6 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
      lVar2 = *(longlong *)&pTVar4->field_0x8;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar2 != 0) {
        FPatchMixer::AddNewInput((FPatchMixer *)(lVar2 + 0x70),param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    local_88 = this;
    local_80 = param_1;
    FPatchInput::FPatchInput(&local_78,param_2);
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x30,8);
    ppcVar5 = local_30 + 1;
    *local_30 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::`10'::<lambda_1>,0,1>
                         ::_vftable_;
    *ppcVar5 = (code *)local_88;
    *(FAudioBusKey *)(local_30 + 2) = local_80;
    FPatchInput::FPatchInput((FPatchInput *)(local_30 + 3),&local_78);
    if (ppcVar5 != (code **)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerSourceManager::AddPatchInputForAudioBus'::__l10::<lambda_1>,void>
                    ::Call;
    }
    AudioMixerThreadMPSCCommand
              (this,(TFunction<void___cdecl(void)> *)local_58,"AddPatchInputForAudioBus()");
    if (local_58[0] != (code *)0x0) {
      ppcVar5 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar5 = local_30;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    FPatchInput::~FPatchInput(&local_78);
  }
  return;
}

// AddPatchInputForAudioBus_AudioThread @ 1464ec510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread
          (FMixerSourceManager *this,FAudioBusKey param_1,FPatchInput *param_2)

{
  code **ppcVar1;
  undefined1 auStack_98 [32];
  FMixerSourceManager *local_78;
  FAudioBusKey local_70;
  FPatchInput local_68;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = this;
  local_70 = param_1;
  FPatchInput::FPatchInput(&local_68,param_2);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x30,8);
  ppcVar1 = local_20 + 1;
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar1 = (code *)local_78;
  *(FAudioBusKey *)(local_20 + 2) = local_70;
  FPatchInput::FPatchInput((FPatchInput *)(local_20 + 3),&local_68);
  if (ppcVar1 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::AddPatchInputForAudioBus_AudioThread'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_48,"AddPatchInputForAudioBus_AudioThread()"
             ,false);
  if (local_48[0] != (code *)0x0) {
    ppcVar1 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar1 = local_20;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  FPatchInput::~FPatchInput(&local_68);
  return;
}

// AddPatchOutputForAudioBus @ 1464ec7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AddPatchOutputForAudioBus
          (FMixerSourceManager *this,FAudioBusKey param_1,TSharedPtr<Audio::FPatchOutput,1> *param_2
          )

{
  FMixerDevice *pFVar1;
  longlong lVar2;
  FPatchOutput *pFVar3;
  atomic<int> aVar4;
  TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *pTVar5;
  code **ppcVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> *paVar8;
  FAudioBusKey local_res10 [2];
  undefined1 auStack_88 [32];
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_res10[0] = param_1;
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  pFVar1 = this->MixerDevice;
  aVar4 = (atomic<int>)GetCurrentThreadId();
  if (aVar4 == pFVar1->AudioPlatformThreadId) {
    pTVar5 = TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                     *)&this->AudioBuses,local_res10);
    if (pTVar5 == (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar7 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x10;
      lVar2 = *(longlong *)&pTVar5->field_0x8;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar2 != 0) {
        FPatchSplitter::AddNewPatch((FPatchSplitter *)(lVar2 + 0x118),param_2);
      }
    }
  }
  else {
    pFVar3 = param_2->Object;
    pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar7->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    local_68[0] = (code *)0x0;
    local_40 = FMemory::Malloc(0x28,8);
    local_40[1] = (code *)this;
    *local_40 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::`10'::<lambda_1>,0,1>
                         ::_vftable_;
    *(FAudioBusKey *)(local_40 + 2) = param_1;
    local_40[3] = (code *)pFVar3;
    local_40[4] = (code *)pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (local_40 != (code **)&DAT_fffffffffffffff8) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus'::__l10::<lambda_1>,void>
                    ::Call;
    }
    AudioMixerThreadMPSCCommand
              (this,(TFunction<void___cdecl(void)> *)local_68,"AddPatchOutputForAudioBus()");
    if (local_68[0] != (code *)0x0) {
      ppcVar6 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar6 = local_40;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// AddPatchOutputForAudioBus_AudioThread @ 1464eca60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread
          (FMixerSourceManager *this,FAudioBusKey param_1,TSharedPtr<Audio::FPatchOutput,1> *param_2
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FPatchOutput *pFVar2;
  code **ppcVar3;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  local_20[1] = (code *)this;
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(FAudioBusKey *)(local_20 + 2) = param_1;
  local_20[3] = (code *)pFVar2;
  local_20[4] = (code *)pTVar1;
  if (local_20 != (code **)&DAT_fffffffffffffff8) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::AddPatchOutputForAudioBus_AudioThread'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_48,
             "AddPatchOutputForAudioBus_AudioThread()",false);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// AddPendingAudioBusConnection @ 1464ecd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AddPendingAudioBusConnection
          (FMixerSourceManager *this,FAudioBusKey param_1,int param_2,bool param_3,
          TSharedPtr<Audio::FPatchOutput,1> *param_4,ulong64 param_5)

{
  atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> aVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  FPatchOutput *local_68;
  TReferenceControllerBase<1> *local_60;
  byte local_50;
  FAudioBusKey local_48;
  int local_40;
  undefined1 local_3c;
  ulong64 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_4->Object;
  local_60 = (param_4->SharedReferenceCount).ReferenceController;
  local_50 = 1;
  (param_4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_4->Object = (FPatchOutput *)0x0;
  local_38 = param_5;
  local_48 = param_1;
  local_40 = param_2;
  local_3c = param_3;
  aVar4 = (atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
           )FMemory::Malloc(0x40,8);
  *(undefined8 *)aVar4 = 0;
  uVar5 = (ulonglong)local_50;
  *(byte *)((longlong)aVar4 + 0x20) = local_50;
  if (1 < local_50) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar5] ==
      UE::Core::Private::TMoveConstructorCaller<TSharedPtr<Audio::FPatchOutput,1>_>::Construct) {
    *(FPatchOutput **)((longlong)aVar4 + 8) = local_68;
    *(TReferenceControllerBase<1> **)((longlong)aVar4 + 0x10) = local_60;
    local_60 = (TReferenceControllerBase<1> *)0x0;
    local_68 = (FPatchOutput *)0x0;
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar5])((undefined8 *)((longlong)aVar4 + 8),&local_68);
  }
  *(FAudioBusKey *)((longlong)aVar4 + 0x28) = local_48;
  *(int *)((longlong)aVar4 + 0x30) = local_40;
  *(undefined1 *)((longlong)aVar4 + 0x34) = local_3c;
  *(ulong64 *)((longlong)aVar4 + 0x38) = local_38;
  LOCK();
  aVar1 = (this->PendingAudioBusConnections).Head;
  (this->PendingAudioBusConnections).Head = aVar4;
  UNLOCK();
  *(atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> *)
   aVar1 = aVar4;
  uVar5 = (ulonglong)local_50;
  if (1 < local_50) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<Audio::FPatchOutput,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// AddPendingAudioBusConnection @ 1464eceb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AddPendingAudioBusConnection
          (FMixerSourceManager *this,FAudioBusKey param_1,int param_2,bool param_3,
          FPatchInput *param_4,ulong64 param_5)

{
  atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> aVar1;
  code *pcVar2;
  bool bVar3;
  atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> aVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  FPatchInput local_68;
  byte local_50;
  FAudioBusKey local_48;
  int local_40;
  undefined1 local_3c;
  ulong64 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  FPatchInput::FPatchInput(&local_68,param_4);
  local_38 = param_5;
  local_50 = 0;
  local_48 = param_1;
  local_40 = param_2;
  local_3c = param_3;
  aVar4 = (atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
           )FMemory::Malloc(0x40,8);
  *(undefined8 *)aVar4 = 0;
  uVar5 = (ulonglong)local_50;
  *(byte *)((longlong)aVar4 + 0x20) = local_50;
  if (1 < local_50) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar5] ==
      UE::Core::Private::TMoveConstructorCaller<Audio::FPatchInput>::Construct) {
    FPatchInput::FPatchInput((FPatchInput *)((longlong)aVar4 + 8),&local_68);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar5])();
  }
  *(FAudioBusKey *)((longlong)aVar4 + 0x28) = local_48;
  *(int *)((longlong)aVar4 + 0x30) = local_40;
  *(undefined1 *)((longlong)aVar4 + 0x34) = local_3c;
  *(ulong64 *)((longlong)aVar4 + 0x38) = local_38;
  LOCK();
  aVar1 = (this->PendingAudioBusConnections).Head;
  (this->PendingAudioBusConnections).Head = aVar4;
  UNLOCK();
  *(atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> *)
   aVar1 = aVar4;
  uVar5 = (ulonglong)local_50;
  if (1 < local_50) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<Audio::FPatchInput>::Destruct) {
    FPatchInput::~FPatchInput(&local_68);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])();
  }
  FPatchInput::~FPatchInput(param_4);
  return;
}

// ApplyDistanceAttenuation @ 1464edf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Audio::FMixerSourceManager::ApplyDistanceAttenuation(FSourceInfo *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<float,int> local_18;
  
  if (DisableDistanceAttenuationCvar == 0) {
    pFVar2 = (param_1->SourceBuffer).AllocatorInstance.Data;
    iVar1 = (param_1->SourceBuffer).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar1;
    local_18.DataPtr = (float *)pFVar2;
    ArrayFade(&local_18,param_1->DistanceAttenuationSourceStart,
              param_1->DistanceAttenuationSourceDestination);
    param_1->DistanceAttenuationSourceStart = param_1->DistanceAttenuationSourceDestination;
  }
  return;
}

// AudioMixerThreadCommand @ 1464edfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AudioMixerThreadCommand
          (FMixerSourceManager *this,TFunction<void___cdecl(void)> *param_1,char *param_2,
          bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void **ppvVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  char *_Str;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  size_t sVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ForElementType<FSetElementId> FVar13;
  ulonglong uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_328 [32];
  undefined1 local_2d8;
  undefined1 local_2d7 [3];
  int local_2d4;
  ulonglong local_2d0;
  longlong local_2c8;
  int local_2c0;
  FScriptContainerElement *local_2b8;
  longlong local_2b0;
  LARGE_INTEGER local_2a8;
  longlong *local_2a0;
  int iStack_298;
  uint uStack_294;
  TBitArray<FDefaultBitArrayAllocator> *local_290;
  undefined4 uStack_288;
  uint uStack_284;
  int local_280;
  undefined4 uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  longlong *local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_268;
  undefined8 uStack_248;
  undefined4 local_224;
  undefined1 local_218 [32];
  uint *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  int local_1e4;
  undefined1 local_1e0 [8];
  ForElementType<FSetElementId> local_1d8;
  int local_1d0;
  longlong local_1c8 [2];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  longlong *local_1a0;
  FScriptContainerElement local_198;
  char *local_190;
  undefined8 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_1a0 = *(longlong **)&param_1->field_0x28;
  local_1c8[0] = *(longlong *)param_1;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_1a8 = *(undefined8 *)&param_1->field_0x20;
  local_1b8 = *(undefined4 *)&param_1->field_0x10;
  uStack_1b4 = *(undefined4 *)&param_1->field_0x14;
  uStack_1b0 = *(undefined4 *)&param_1->field_0x18;
  uStack_1ac = *(undefined4 *)&param_1->field_0x1c;
  if (local_1c8[0] != 0) {
    *(undefined8 *)param_1 = 0;
  }
  lpCriticalSection = &this->CommandBufferIndexCriticalSection;
  local_188 = 0;
  local_198 = (FScriptContainerElement)param_3;
  local_190 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757107665>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x22f,"IsInAudioThread()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = (ulonglong)((this->RenderThreadCommandBufferIndex).Counter == 0);
  lVar11 = (uVar14 + 6) * 3;
  local_2b0 = (longlong)this->CommandBuffers[uVar14].SourceCommandQueue.ArrayMax;
  piVar17 = &this->CommandBuffers[uVar14].SourceCommandQueue.ArrayMax;
  pFVar16 = this->CommandBuffers[uVar14].SourceCommandQueue.AllocatorInstance.Data;
  local_2d0 = uVar14;
  local_2c8 = lVar11;
  if ((pFVar16 <= (FScriptContainerElement *)local_1c8) &&
     ((FScriptContainerElement *)local_1c8 < pFVar16 + local_2b0 * 0x50)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    piVar17 = &this->CommandBuffers[uVar14].SourceCommandQueue.ArrayMax;
  }
  iVar7 = this->CommandBuffers[uVar14].SourceCommandQueue.ArrayNum;
  if (iVar7 == this->CommandBuffers[uVar14].SourceCommandQueue.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1050,&this->CommandBuffers[uVar14].SourceCommandQueue.AllocatorInstance,
                       piVar17);
  }
  pFVar16 = this->CommandBuffers[uVar14].SourceCommandQueue.AllocatorInstance.Data;
  this->CommandBuffers[uVar14].SourceCommandQueue.ArrayNum = iVar7 + 1;
  lVar15 = (longlong)iVar7 * 0x50;
  *(longlong *)(pFVar16 + lVar15) = local_1c8[0];
  *(undefined8 *)(pFVar16 + lVar15 + 0x28) = 0;
  if (*(longlong *)(pFVar16 + lVar15) != 0) {
    plVar12 = (longlong *)&local_1b8;
    if (local_1a0 != (longlong *)0x0) {
      plVar12 = local_1a0;
    }
    (**(code **)*plVar12)();
  }
  pFVar16[lVar15 + 0x30] = local_198;
  *(char **)(pFVar16 + lVar15 + 0x38) = local_190;
  *(undefined8 *)(pFVar16 + lVar15 + 0x40) = local_188;
  LOCK();
  (this->NumCommands).Counter = (this->NumCommands).Counter + 1;
  UNLOCK();
  LOCK();
  __GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value =
       (atomic<__int64>)((longlong)__GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value + 1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId == (atomic<unsigned_int>)0x0) {
      uVar6 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId == (atomic<unsigned_int>)0x0)
      {
        __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._2_2_ = 0;
        __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._0_2_ = uVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._0_2_,
               (long64)__GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value);
  }
  if (0 < LogCmdQueueWhenNumberReachedCVar) {
    iVar7 = this->CommandBuffers[uVar14].SourceCommandQueue.ArrayNum;
    lVar11 = local_2c8;
    if (LogCmdQueueWhenNumberReachedCVar == iVar7) {
      pFVar16 = this->CommandBuffers[uVar14].SourceCommandQueue.AllocatorInstance.Data;
      pFVar21 = pFVar16 + (longlong)iVar7 * 0x50;
      local_218._0_8_ = 0;
      local_218._8_8_ = 0;
      local_1f8 = (uint *)0x0;
      local_1f0 = 0;
      local_1ec = 0x80;
      local_1e8 = 0xffffffff;
      local_1e4 = 0;
      local_1d8 = (ForElementType<FSetElementId>)0x0;
      local_1d0 = 0;
      while( true ) {
        if (this->CommandBuffers[uVar14].SourceCommandQueue.ArrayNum != iVar7) {
          local_2d8 = 0;
          `TCheckedPointerIterator<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_2d8);
        }
        uVar10 = local_1f0;
        if (pFVar16 == pFVar21) break;
        uVar3 = *(ulonglong *)(pFVar16 + 0x38);
        uVar10 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        uVar10 = uVar10 >> 0x10 ^ uVar10;
        if (local_218._8_4_ != local_1e4) {
          FVar13 = (ForElementType<FSetElementId>)local_1e0;
          if (local_1d8 != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_1d8;
          }
          iVar2 = *(int *)((longlong)FVar13 + (ulonglong)(local_1d0 - 1U & uVar10) * 4);
          while (iVar2 != -1) {
            lVar11 = local_218._0_8_ + (longlong)iVar2 * 0x18;
            if (*(ulonglong *)(local_218._0_8_ + (longlong)iVar2 * 0x18) == uVar3) {
              if (lVar11 != 0) goto LAB_1464ee364;
              break;
            }
            iVar2 = *(int *)(lVar11 + 0x10);
          }
        }
        local_2b8 = pFVar16 + 0x38;
        TSet<TTuple<char_const_*,int>,TDefaultMapHashableKeyFuncs<char_const_*,int,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<char_const_*_const_&>_>
                  ((TSet<TTuple<char_const_*,int>,TDefaultMapHashableKeyFuncs<char_const_*,int,0>,FDefaultSetAllocator>
                    *)local_218,(uint)&local_2d4,
                   (TKeyInitializer<char_const_*_const_&> *)(ulonglong)uVar10,(bool *)&local_2b8);
        lVar11 = local_218._0_8_ + (longlong)local_2d4 * 0x18;
LAB_1464ee364:
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        pFVar16 = pFVar16 + 0x50;
      }
      iStack_298 = 0;
      local_280 = 0;
      uStack_294 = 1;
      uStack_284 = 0;
      if (local_1f0 != 0) {
        puVar18 = (uint *)(local_218 + 0x10);
        if (local_1f8 != (uint *)0x0) {
          puVar18 = local_1f8;
        }
        uVar19 = *puVar18;
        while (uVar19 == 0) {
          lVar11 = (longlong)iStack_298;
          local_280 = local_280 + 0x20;
          iStack_298 = iStack_298 + 1;
          uStack_284 = local_1f0;
          if ((int)((local_1f0 - 1) + ((int)(local_1f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_298)
          goto LAB_1464ee3f3;
          uVar19 = puVar18[lVar11 + 1];
        }
        uStack_294 = ~(uVar19 - 1) & uVar19;
        uVar14 = (ulonglong)uStack_294 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_2c0 = (int)lVar11;
        uStack_284 = local_280 + -1 + local_2c0;
        if ((int)local_1f0 < (int)uStack_284) {
          uStack_284 = local_1f0;
        }
      }
LAB_1464ee3f3:
      local_2a0 = (longlong *)local_218;
      uStack_27c = local_224;
      local_290 = (TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10);
      uVar19 = local_1f0 & 0xffffffe0;
      iStack_278 = local_218._8_4_ - local_1e4;
      uStack_288 = 0xffffffff;
      TStack_268.CurrentBitIndex = uStack_284;
      TStack_268.UnvisitedBitMask = 0xffffffff;
      TStack_268._padding_ = CONCAT44(uStack_294,iStack_298);
      iVar7 = (int)local_1f0 >> 5;
      TStack_268._28_4_ = local_224;
      TStack_268.BaseBitIndex = local_280;
      uStack_248 = CONCAT44(uStack_274,iStack_278);
      bVar9 = (byte)local_1f0;
      local_270 = local_2a0;
      TStack_268.Array = local_290;
      if (((int)local_1f0 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar10 != local_1f0) {
        puVar18 = (uint *)(local_218 + 0x10);
        if (local_1f8 != (uint *)0x0) {
          puVar18 = local_1f8;
        }
        uVar10 = -1 << (bVar9 & 0x1f) & puVar18[iVar7];
        while (uVar10 == 0) {
          lVar11 = (longlong)iVar7;
          uVar19 = uVar19 + 0x20;
          iVar7 = iVar7 + 1;
          uVar10 = local_1f0;
          if ((int)((local_1f0 - 1) + ((int)(local_1f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
          goto LAB_1464ee4ef;
          uVar10 = puVar18[lVar11 + 1];
        }
        uVar14 = (ulonglong)(~(uVar10 - 1) & uVar10) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar10 = (uVar19 - 1) + (int)lVar11;
        if ((int)local_1f0 < (int)uVar10) {
          uVar10 = local_1f0;
        }
      }
LAB_1464ee4ef:
      while( true ) {
        plVar12 = local_270;
        if ((int)local_270[1] - *(int *)((longlong)local_270 + 0x34) != (int)uStack_248) {
          `TSparseArray<TSparseSetElement<TTuple<char_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d7);
        }
        if (((TStack_268.CurrentBitIndex == uVar10) &&
            (TStack_268.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_218 + 0x10))) &&
           (plVar12 == (longlong *)local_218)) break;
        _Str = *(char **)(*plVar12 + (longlong)TStack_268.CurrentBitIndex * 0x18);
        if (3 < (byte)LogAudioMixer._0_1_) {
          local_178._padding_ = 0;
          if (_Str == (char *)0x0) {
            local_178.Ptr = (wchar_t *)0x0;
            local_178.StringLength = 0;
          }
          else {
            sVar8 = strlen(_Str);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,_Str,(int)sVar8,Yes);
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
        }
        TStack_268.UnvisitedBitMask = TStack_268.UnvisitedBitMask & ~TStack_268._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_268);
      }
      local_1d0 = 0;
      if (local_1d8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8);
      }
      TSparseArray<TSparseSetElement<TTuple<char_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<char_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<char_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_218);
      lVar11 = local_2c8;
    }
  }
  lVar15 = (longlong)
           *(int *)((longlong)(this->EffectChainMutationCriticalSection).CriticalSection.Opaque1 +
                   lVar11 * 8 + -4);
  iVar7 = *(int *)((this->EffectChainMutationCriticalSection).CriticalSection.Opaque1 + lVar11 + -1)
  ;
  lVar20 = (longlong)iVar7;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_2b0 != lVar15) {
    if (WarnSize < (ulonglong)(lVar15 * 0x50)) {
      QueryPerformanceCounter(&local_2a8);
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      WarnSize = WarnSize * 2;
      DoStallDiagnostics(this);
    }
    if ((ulonglong)((longlong)CommandBufferMaxSizeInMbCvar << 0x14) <= (ulonglong)(lVar15 * 0x50)) {
      LOCK();
      ppvVar1 = (this->EffectChainMutationCriticalSection).CriticalSection.Opaque1 + lVar11 + -3;
      *(int *)ppvVar1 = *(int *)ppvVar1 + 1;
      UNLOCK();
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
  }
  if (__CsvProfilerStat3986 == false) {
    FCsvProfilerTrace::OutputInlineStat("AudioMixerThreadCommands",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3986 = true;
  }
  FCsvProfiler::RecordCustomStat("AudioMixerThreadCommands",_GCsvCategory_Audio.Index,iVar7,Set);
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar11 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    __TraceCounter3987.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"AudioMixerThreadCommands::NumCommands",TraceCounterType_Int,
                    TraceCounterDisplayHint_None);
    LOCK();
    __TraceCounter3987.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`Audio::FMixerSourceManager::AudioMixerThreadCommand'::__l2::
           _dynamic_atexit_destructor_for____TraceCounter3987__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((__TraceCounter3987.Value != lVar20) &&
     (__TraceCounter3987.Value = lVar20, -1 < CountersChannel->Enabled)) {
    if (__TraceCounter3987.CounterId == (atomic<unsigned_int>)0x0) {
      uVar6 = FCountersTrace::OutputInitCounter
                        (__TraceCounter3987.CounterName,TraceCounterType_Int,
                         __TraceCounter3987.CounterFlags & 0xf);
      LOCK();
      if (__TraceCounter3987.CounterId == (atomic<unsigned_int>)0x0) {
        __TraceCounter3987.CounterId._2_2_ = 0;
        __TraceCounter3987.CounterId._0_2_ = uVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(__TraceCounter3987.CounterId._0_2_,__TraceCounter3987.Value);
  }
  if ((*(int *)(lVar11 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    __TraceCounter3988.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"AudioMixerThreadCommands::CurrentBufferSizeInKb",TraceCounterType_Int,
                    TraceCounterDisplayHint_None);
    LOCK();
    __TraceCounter3988.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`Audio::FMixerSourceManager::AudioMixerThreadCommand'::__l2::
           _dynamic_atexit_destructor_for____TraceCounter3988__);
    _Init_thread_footer(&::_TSS3);
  }
  uVar14 = (lVar15 * 5 & 0xfffffffffffffffU) >> 6;
  if ((__TraceCounter3988.Value != uVar14) &&
     (__TraceCounter3988.Value = uVar14, -1 < CountersChannel->Enabled)) {
    if (__TraceCounter3988.CounterId == (atomic<unsigned_int>)0x0) {
      uVar6 = FCountersTrace::OutputInitCounter
                        (__TraceCounter3988.CounterName,TraceCounterType_Int,
                         __TraceCounter3988.CounterFlags & 0xf);
      LOCK();
      if (__TraceCounter3988.CounterId == (atomic<unsigned_int>)0x0) {
        __TraceCounter3988.CounterId._2_2_ = 0;
        __TraceCounter3988.CounterId._0_2_ = uVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(__TraceCounter3988.CounterId._0_2_,__TraceCounter3988.Value);
  }
  if (local_1c8[0] != 0) {
    plVar12 = (longlong *)&local_1b8;
    if (local_1a0 != (longlong *)0x0) {
      plVar12 = local_1a0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return;
}

// AudioMixerThreadMPSCCommand @ 1464ee980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001464eea68) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001464eea6c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::AudioMixerThreadMPSCCommand
          (FMixerSourceManager *this,TFunction<void___cdecl(void)> *param_1,char *param_2)

{
  atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*> aVar1;
  atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*> aVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  char *local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = *(longlong *)param_1;
  local_40 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_48 = *(undefined8 *)&param_1->field_0x20;
  local_58 = *(longlong *)&param_1->field_0x10;
  uStack_50 = *(undefined8 *)&param_1->field_0x18;
  if (local_68 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_38 = 0;
  local_28 = 0;
  local_30 = param_2;
  aVar2 = (atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
          )FMemory::Malloc(0x60,0x10);
  *(undefined8 *)aVar2 = 0;
  *(longlong *)((longlong)aVar2 + 0x10) = local_68;
  *(undefined8 *)((longlong)aVar2 + 0x38) = local_40;
  local_40 = 0;
  *(undefined4 *)((longlong)aVar2 + 0x20) = (undefined4)local_58;
  *(undefined4 *)((longlong)aVar2 + 0x24) = local_58._4_4_;
  *(undefined4 *)((longlong)aVar2 + 0x28) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)aVar2 + 0x2c) = uStack_50._4_4_;
  *(undefined8 *)((longlong)aVar2 + 0x30) = local_48;
  if (*(longlong *)((longlong)aVar2 + 0x10) != 0) {
    local_68 = 0;
  }
  *(undefined1 *)((longlong)aVar2 + 0x40) = local_38;
  *(char **)((longlong)aVar2 + 0x48) = local_30;
  *(undefined8 *)((longlong)aVar2 + 0x50) = local_28;
  LOCK();
  aVar1 = (this->MpscCommandQueue).Head;
  (this->MpscCommandQueue).Head = aVar2;
  UNLOCK();
  *(atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*> *)
   aVar1 = aVar2;
  if (local_68 != 0) {
    (**(code **)(local_58 + 0x10))();
  }
  return;
}

// BuildSourceEffectChain @ 1464eece0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::BuildSourceEffectChain
          (FMixerSourceManager *this,int param_1,FSoundEffectSourceInitData *param_2,
          TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TSharedPtr<FSoundEffectSource,1>,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  uint uVar2;
  USoundEffectPreset *this_00;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  FSoundEffectBase *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  USoundEffectPreset *local_68;
  FScriptContainerElement *local_60;
  LPCRITICAL_SECTION local_58;
  FSoundEffectBase *local_50;
  TReferenceControllerBase<1> *local_48;
  TSharedPtr<FSoundEffectBase,1> local_40;
  
  local_58 = (LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection;
  if (local_58 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_58);
  iVar1 = param_3->ArrayNum;
  pFVar10 = (param_3->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  local_60 = pFVar9;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSourceEffectChainEntry_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    if (*(longlong *)pFVar10 != 0) {
      param_2->ParentPresetUniqueId = *(uint *)(*(longlong *)pFVar10 + 0xc);
      this_00 = *(USoundEffectPreset **)pFVar10;
      pFVar8 = (FSoundEffectBase *)(**(code **)(this_00->_padding_ + 0x2d0))(this_00);
      local_68 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&(pFVar8->Preset).WeakPtr,(FObjectPtr)&local_68);
      uVar2 = param_2->ParentPresetUniqueId;
      pFVar8->ParentPresetUniqueId = uVar2;
      iVar7 = param_2->NumSourceChannels;
      uVar4 = *(undefined4 *)&param_2->AudioClock;
      uVar5 = *(undefined4 *)((longlong)&param_2->AudioClock + 4);
      *(float *)&pFVar8[1]._padding_ = param_2->SampleRate;
      *(int *)((longlong)&pFVar8[1]._padding_ + 4) = iVar7;
      *(undefined4 *)&pFVar8[1]._padding_ = uVar4;
      *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 4) = uVar5;
      pFVar8[1].SettingsCritSect.CriticalSection.Opaque1[0] =
           *(void **)&param_2->ParentPresetUniqueId;
      if (uVar2 != 0xffffffff) {
        *(uint *)pFVar8[1].SettingsCritSect.CriticalSection.Opaque1 = uVar2;
      }
      (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8);
      local_50 = pFVar8;
      local_40.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
      if (local_40.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1
        ;
        (local_40.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFSoundEffectSource__U__DefaultDeleter_VFSoundEffectSource___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        (local_40.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_40.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar8;
        LOCK();
        (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_40.Object = local_50;
      local_48 = local_40.SharedReferenceCount.ReferenceController;
      USoundEffectPreset::AddEffectInstance(this_00,&local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      if (local_50 == (FSoundEffectBase *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FSoundEffectBase::SetEnabled(local_50,(bool)(~(byte)pFVar10[8] & 1));
      pFVar9 = (param_4->AllocatorInstance).Data;
      if ((pFVar9 <= (FScriptContainerElement *)&local_50) &&
         ((FScriptContainerElement *)&local_50 < pFVar9 + (longlong)param_4->ArrayMax * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = param_4->ArrayNum;
      if (iVar7 == param_4->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar7 + 1;
      pFVar9 = (param_4->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(FSoundEffectBase **)pFVar9 = local_50;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_48;
      if (local_48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      pFVar9 = local_60;
    }
    pFVar10 = pFVar10 + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001464eef81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(local_58);
  return;
}

// CancelQuantizedSound @ 1464eff50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::CancelQuantizedSound(FMixerSourceManager *this,int param_1)

{
  FMixerDevice *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  uint uVar6;
  IAudioLinkSourcePushed *pIVar7;
  
  pFVar1 = this->MixerDevice;
  if (pFVar1 != (FMixerDevice *)0x0) {
    aVar5 = (atomic<int>)GetCurrentThreadId();
    if (aVar5 == pFVar1->AudioPlatformThreadId) {
      StopInternal(this,param_1);
      if (this->NumTotalSources <= param_1) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3835252409160959642>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                           ,0x69a,"SourceId < NumTotalSources");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar6 = 0;
      if (param_1 < (this->SourceInfos).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->SourceInfos).AllocatorInstance.Data;
      pFVar2[(longlong)param_1 * 0x5d0 + 0x521] =
           (FScriptContainerElement)((byte)pFVar2[(longlong)param_1 * 0x5d0 + 0x521] | 0x40);
      if (*(longlong **)(pFVar2 + (longlong)param_1 * 0x5d0 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pFVar2 + (longlong)param_1 * 0x5d0 + 0x20) + 0x18))();
      }
      if (((TSharedPtr<IAudioLinkSourcePushed,1> *)(pFVar2 + (longlong)param_1 * 0x5d0 + 0x510))->
          Object != (IAudioLinkSourcePushed *)0x0) {
        pIVar7 = TSharedPtr<IAudioLinkSourcePushed,1>::operator->
                           ((TSharedPtr<IAudioLinkSourcePushed,1> *)
                            (pFVar2 + (longlong)param_1 * 0x5d0 + 0x510));
        (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,param_1);
      }
    }
  }
  return;
}

// ClearStoppingSounds @ 1464f0380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::ClearStoppingSounds(FMixerSourceManager *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < this->NumTotalSources) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->SourceInfos).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->SourceInfos).AllocatorInstance.Data;
      if (((((byte)pFVar1[lVar7 + 0x521] & 0x40) == 0) && ((char)pFVar1[lVar7 + 0x520] < '\0')) &&
         (*(float *)(pFVar1 + lVar7 + 0x128) == 0.0)) {
        pFVar1[lVar7 + 0x521] = (FScriptContainerElement)((byte)pFVar1[lVar7 + 0x521] | 0x40);
        pFVar1[lVar7 + 0x520] = (FScriptContainerElement)((byte)pFVar1[lVar7 + 0x520] & 0x7f);
        (**(code **)(**(longlong **)(pFVar1 + lVar7 + 0x20) + 0x18))();
        plVar2 = *(longlong **)(pFVar1 + lVar7 + 0x510);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2,uVar6);
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x5d0;
    } while ((int)uVar6 < this->NumTotalSources);
  }
  return;
}

// ClearSubmixSendInfo @ 1464f0890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::ClearSubmixSendInfo
          (FMixerSourceManager *this,int param_1,FMixerSourceSubmixSend *param_2)

{
  float fVar1;
  atomic<int> aVar2;
  EMixerSourceSubmixSendStage EVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMixerSubmix *pFVar5;
  ISoundfieldFactory *pIVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  code **ppcVar10;
  atomic<int> *paVar11;
  atomic<int> *paVar12;
  undefined1 auStackY_c8 [32];
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (this->NumTotalSources <= param_1) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960093>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x85d,"SourceId < NumTotalSources");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960094>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x85e,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar8 = IsInAudioThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar4 = (param_2->Submix).WeakReferenceCount.ReferenceController;
  pFVar5 = (param_2->Submix).Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar12 = &pTVar4->WeakReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  paVar11 = &pTVar4->WeakReferenceCount;
  EVar3 = param_2->SubmixSendStage;
  fVar1 = param_2->SendLevel;
  bVar8 = param_2->bIsMainSend;
  pIVar6 = param_2->SoundfieldFactory;
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x40,8);
  *(int *)(local_60 + 2) = param_1;
  local_60[3] = (code *)pFVar5;
  local_60[1] = (code *)this;
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_60[4] = (code *)pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  *(EMixerSourceSubmixSendStage *)(local_60 + 6) = EVar3;
  *(float *)(local_60 + 5) = fVar1;
  *(bool *)((longlong)local_60 + 0x2c) = bVar8;
  local_60[7] = (code *)pIVar6;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::ClearSubmixSendInfo'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_88,"ClearSubmixSendInfo()",false);
  if (local_88[0] != (code *)0x0) {
    ppcVar10 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar10 = local_60;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar2 = *paVar11;
    *paVar11 = (atomic<int>)((int)*paVar11 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// ComputeBuses @ 1464f2a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::ComputeBuses(FMixerSourceManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FMixerAudioBus *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  LOCK();
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x7;
  UNLOCK();
  ConnectBusPatches(this);
  iVar11 = 0;
  puVar1 = &(this->AudioBuses).field_0x10;
  iVar3 = *(int *)&(this->AudioBuses).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->AudioBuses).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1464f2b1d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar13 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1464f2b1d:
  uVar10 = *(uint *)&(this->AudioBuses).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->AudioBuses).field_0x8 -
                       *(int *)&(this->AudioBuses).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->AudioBuses).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->AudioBuses).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1464f2c20;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1464f2c20:
  while( true ) {
    if (*(int *)&(this->AudioBuses).field_0x8 - *(int *)&(this->AudioBuses).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(FMixerAudioBus **)
               ((longlong)TStack_50.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->AudioBuses);
    if (this_00 != (FMixerAudioBus *)0x0) {
      FMixerAudioBus::MixBuffer(this_00);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// ComputeNextBlockOfSamples @ 1464f30a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::ComputeNextBlockOfSamples(FMixerSourceManager *this)

{
  int *piVar1;
  FMixerDevice *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceManagerUpdate> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  uint local_res8;
  uint uStackX_c;
  FLLMScope local_res10 [2];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FMemScope local_78;
  FMemScope local_70;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  if (__CsvProfilerStat3786 == false) {
    FCsvProfilerTrace::OutputInlineStat("SourceManagerUpdate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3786 = true;
  }
  uVar8 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("SourceManagerUpdate",_GCsvCategory_Audio.Index,"CSV_SourceManagerUpdate")
  ;
  FVar11 = StatPtr_STAT_AudioMixerSourceManagerUpdate;
  if (StatPtr_STAT_AudioMixerSourceManagerUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceManagerUpdate>)0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_AudioMixerSourceManagerUpdate");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceManagerUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSourceManagerUpdate,
                        *pFVar10,L"Source Manager Update","STATGROUP_AudioMixer","STATCAT_Advanced",
                        L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_1464f3239:
    bVar6 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar13.Value;
        local_res20.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                   ,0xecb);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1464f3239;
    local_res8 = FVar13.Value;
    uStackX_c = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
  }
  if (__CsvProfilerStat3788 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumActiveSources",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3788 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumActiveSources",_GCsvCategory_Audio.Index,this->NumActiveSources,Set);
  LOCK();
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x0;
  UNLOCK();
  bVar9 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar9) {
    if (this->bPumpQueue == (FThreadSafeBool)0x0) goto LAB_1464f32a9;
    LOCK();
    this->bPumpQueue = (FThreadSafeBool)0x0;
    UNLOCK();
  }
  PumpCommandQueue(this);
LAB_1464f32a9:
  LOCK();
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x3;
  UNLOCK();
  pFVar2 = this->MixerDevice;
  if (((pFVar2->field_0x5c0 & 0x20) != 0) &&
     (plVar3 = *(longlong **)&pFVar2->field_0x120, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,pFVar2->AudioClockDelta);
  }
  UpdatePendingReleaseData(this,false);
  if (AudioMixerCVars::UseRenderScheduler == 0) {
    GenerateSourceAudio(this,false);
    ComputeBuses(this);
    GenerateSourceAudio(this,true);
    UpdateBuses(this);
  }
  else {
    ConnectBusPatches(this);
    LOCK();
    this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x5;
    UNLOCK();
    FAudioRenderScheduler::RenderBlock
              ((this->MixerDevice->RenderScheduler).Ptr,DisableParallelSourceProcessingCvar != 0);
  }
  if (this->bUsingSpatializationPlugin != '\0') {
    LOCK();
    this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0xa;
    UNLOCK();
    if ((this->SpatialInterfaceInfo).SpatializationPlugin.Object == (IAudioSpatialization *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160961791>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0xeff,"SpatialInterfaceInfo.SpatializationPlugin.IsValid()");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FLLMScope::FLLMScope((FLLMScope *)&local_res8,AudioMixerPlugins,false,None,Default,true);
    FMemScope::FMemScope(&local_78,AudioMixerPlugins,true);
    if ((this->SpatialInterfaceInfo).SpatializationPlugin.Object == (IAudioSpatialization *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)((longlong)*(this->SpatialInterfaceInfo).SpatializationPlugin.Object + 0x60))();
    FMemScope::~FMemScope(&local_78);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  }
  if (this->bUsingSourceDataOverridePlugin != '\0') {
    LOCK();
    this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0xb;
    UNLOCK();
    if ((this->SourceDataOverridePlugin).Object == (IAudioSourceDataOverride *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160961800>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0xf08,"SourceDataOverridePlugin.IsValid()");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FLLMScope::FLLMScope(local_res10,AudioMixerPlugins,false,None,Default,true);
    FMemScope::FMemScope(&local_70,AudioMixerPlugins,true);
    if ((this->SourceDataOverridePlugin).Object == (IAudioSourceDataOverride *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)((longlong)*(this->SourceDataOverridePlugin).Object + 0x28))();
    FMemScope::~FMemScope(&local_70);
    FLLMScope::~FLLMScope(local_res10);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FCsvProfiler::EndStat("SourceManagerUpdate",uVar8);
  return;
}

// ComputeOutputBuffers @ 1464f35d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::ComputeOutputBuffers(FMixerSourceManager *this,bool param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceOutputBuffers> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58;
  
  lVar14 = (longlong)param_2;
  if (!__CsvProfilerStat3444) {
    FCsvProfilerTrace::OutputInlineStat("SourceOutputBuffers",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3444 = true;
  }
  uVar7 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("SourceOutputBuffers",_GCsvCategory_Audio.Index,"CSV_SourceOutputBuffers")
  ;
  FVar11 = StatPtr_STAT_AudioMixerSourceOutputBuffers;
  if (StatPtr_STAT_AudioMixerSourceOutputBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceOutputBuffers>)0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_AudioMixerSourceOutputBuffers");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceOutputBuffers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSourceOutputBuffers,
                        *pFVar10,L"Source Output Buffers","STATGROUP_AudioMixer","STATCAT_Advanced",
                        L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar9 == 0)) {
LAB_1464f375d:
    bVar5 = false;
    FVar13 = local_68;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar12.Value;
        local_res20.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                   ,0xd75);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1464f375d;
    local_78.s.LowPart = FVar12.Value;
    local_78.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  uVar9 = 0;
  if (param_2 < (this->SourceInfos).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->SourceInfos).AllocatorInstance.Data;
  if (((((byte)pFVar2[lVar14 * 0x5d0 + 0x521] & 2) != 0) &&
      (((byte)pFVar2[lVar14 * 0x5d0 + 0x520] & 8) != 0)) &&
     ((((byte)pFVar2[lVar14 * 0x5d0 + 0x521] & 0x40) == 0 ||
      (pFVar2[lVar14 * 0x5d0 + 0x1f8] == (FScriptContainerElement)0x0)))) {
    if (param_1) {
      if (*(int *)(pFVar2 + lVar14 * 0x5d0 + 0xe0) == -1) goto LAB_1464f386f;
    }
    else if (*(int *)(pFVar2 + lVar14 * 0x5d0 + 0xe0) != -1) goto LAB_1464f386f;
    if (((byte)pFVar2[lVar14 * 0x5d0 + 0x522] & 6) != 0) {
      uVar9 = 0;
      if (param_2 < (this->SourceSubmixOutputBuffers).ArrayNum) {
        uVar9 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMixerSourceSubmixOutputBuffer::ComputeOutput
                ((FMixerSourceSubmixOutputBuffer *)
                 ((this->SourceSubmixOutputBuffers).AllocatorInstance.Data + lVar14 * 0x330),
                 (FSpatializationParams *)(pFVar2 + lVar14 * 0x5d0 + 0x3d0));
    }
  }
LAB_1464f386f:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FCsvProfiler::EndStat("SourceOutputBuffers",uVar7);
  return;
}

// ComputePluginAudio @ 1464f3980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::ComputePluginAudio
          (FMixerSourceManager *this,FSourceInfo *param_1,FMixerSourceSubmixOutputBuffer *param_2,
          int param_3,int param_4)

{
  TSharedPtr<IAudioSpatialization,1> *pTVar1;
  FAudioPluginSourceOutputData *pFVar2;
  byte bVar3;
  int iVar4;
  ISourceBufferListener *pIVar5;
  FMixerDevice *pFVar6;
  longlong *plVar7;
  IAudioSpatialization *pIVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerHRTF> FVar17;
  FName FVar18;
  int *piVar19;
  undefined1 *puVar20;
  FLLMScope local_230 [2];
  FName local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FColor_u_0 local_218 [2];
  TArray<float,TAlignedHeapAllocator<16>_> *local_210;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FName local_1f8;
  FName local_1f0;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FMemScope local_1c8;
  FScriptContainerElement *local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  FName local_1a8 [2];
  TArrayView<float,int> local_198;
  TArrayView<float_const_,int> local_188;
  TArrayView<float_const_,int> local_178;
  TArrayView<float,int> local_168;
  TArrayView<float_const_,int> local_158;
  FScriptContainerElement *local_148;
  undefined8 uStack_140;
  int local_138;
  int local_128;
  ulong64 local_120;
  TArray<float,TAlignedHeapAllocator<16>_> *local_118;
  int local_110;
  FSpatializationParams *local_e8;
  int local_d8 [2];
  ulong64 local_d0;
  TArray<float,TAlignedHeapAllocator<16>_> *local_c8;
  int local_c0;
  FSpatializationParams *local_98;
  int local_88 [2];
  ulong64 local_80;
  TArray<float,TAlignedHeapAllocator<16>_> *local_78;
  int local_70;
  FSpatializationParams *local_48;
  
  if (BypassAudioPluginsCvar != 0) {
    param_1->NumPostEffectChannels = param_1->NumInputChannels;
    FMixerSourceSubmixOutputBuffer::SetPostAttenuationSourceBuffer(param_2,&param_1->SourceBuffer);
    bVar3 = param_1->field_0x522;
joined_r0x0001464f42c1:
    if ((bVar3 & 0x20) != 0) {
      FMixerSourceSubmixOutputBuffer::SetPreAttenuationSourceBuffer
                (param_2,&param_1->PreDistanceAttenuationBuffer);
    }
    return;
  }
  if ((param_1->AudioLink).Object != (IAudioLinkSourcePushed *)0x0) {
    iVar4 = (param_1->PreDistanceAttenuationBuffer).ArrayNum;
    local_208 = (param_1->PreDistanceAttenuationBuffer).AllocatorInstance.Data;
    local_138 = param_3;
    if ((iVar4 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_140 = CONCAT44(uStack_1fc,iVar4);
    local_148 = local_208;
    iStack_200 = iVar4;
    if (((param_1->AudioLink).Object == (IAudioLinkSourcePushed *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)((longlong)*(param_1->AudioLink).Object + 0x10))();
    memset((param_1->PreDistanceAttenuationBuffer).AllocatorInstance.Data,0,
           (longlong)(param_1->PreDistanceAttenuationBuffer).ArrayNum << 2);
    memset((param_1->SourceBuffer).AllocatorInstance.Data,0,
           (longlong)(param_1->SourceBuffer).ArrayNum << 2);
  }
  piVar19 = &(param_1->PreDistanceAttenuationBuffer).ArrayNum;
  pIVar5 = (param_1->SourceBufferListener).Object;
  if (pIVar5 != (ISourceBufferListener *)0x0) {
    local_1c0 = (param_1->PreDistanceAttenuationBuffer).AllocatorInstance.Data;
    local_1b4 = *piVar19;
    local_1b0 = param_1->NumInputChannels;
    local_1ac = (int)(float)*(int *)&this->MixerDevice->field_0x84;
    local_1b8 = param_3;
    (**(code **)((longlong)*pIVar5 + 8))();
    if ((bool)param_1->bShouldSourceBufferListenerZeroBuffer) {
      memset((param_1->PreDistanceAttenuationBuffer).AllocatorInstance.Data,0,
             (longlong)*piVar19 << 2);
      memset((param_1->SourceBuffer).AllocatorInstance.Data,0,
             (longlong)(param_1->SourceBuffer).ArrayNum << 2);
    }
  }
  FVar18 = (FName)(param_1->SourceBuffer).AllocatorInstance.Data;
  bVar13 = false;
  if (param_1->bUseReverbPlugin != '\0') {
    pFVar2 = &param_1->AudioPluginOutputData;
    local_e8 = &param_1->SpatParams;
    local_110 = param_1->NumInputChannels;
    local_120 = param_1->AudioComponentID;
    piVar19 = &(param_1->AudioPluginOutputData).AudioBuffer.ArrayMax;
    iVar4 = *piVar19;
    (param_1->AudioPluginOutputData).AudioBuffer.ArrayNum = 0;
    local_128 = param_3;
    local_118 = &param_1->SourceBuffer;
    if (iVar4 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar2,0,piVar19);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&pFVar2->AudioBuffer,local_118->ArrayNum);
    pFVar6 = this->MixerDevice;
    if ((*(longlong *)&pFVar6->field_0x100 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(**(longlong **)&pFVar6->field_0x100 + 0x48))();
    if (((param_1->AudioPluginOutputData).AudioBuffer.ArrayNum != param_4) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3835252409160960960>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                            ,0xbc0,
                            "SourceInfo.AudioPluginOutputData.AudioBuffer.Num() == NumSamples"),
       bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (-1 < (char)this->MixerDevice->field_0x5ba) {
      FMixerSourceSubmixOutputBuffer::CopyReverbPluginOutputData(param_2,&pFVar2->AudioBuffer);
      bVar13 = true;
    }
  }
  local_208 = (FScriptContainerElement *)
              FMixerSourceSubmixOutputBuffer::GetReverbPluginOutputData(param_2);
  iStack_200 = param_4;
  if ((param_4 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iStack_1d0 = param_4;
  pFVar2 = &param_1->AudioPluginOutputData;
  local_1d8 = (pFVar2->AudioBuffer).AllocatorInstance.Data;
  local_210 = &pFVar2->AudioBuffer;
  if ((param_4 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iStack_220 = param_4;
  local_228 = FVar18;
  if ((param_4 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (param_1->bUseOcclusionPlugin == '\0') {
    if (bVar13) {
      local_168._12_4_ = uStack_21c;
      local_168.ArrayNum = iStack_220;
      local_158._12_4_ = uStack_1fc;
      local_158.ArrayNum = iStack_200;
      local_168.DataPtr = (float *)local_228;
      local_158.DataPtr = (float *)local_208;
      ArrayMixIn(&local_158,&local_168);
    }
  }
  else {
    piVar19 = &(param_1->AudioPluginOutputData).AudioBuffer.ArrayMax;
    local_c8 = &param_1->SourceBuffer;
    local_98 = &param_1->SpatParams;
    local_c0 = param_1->NumInputChannels;
    local_d0 = param_1->AudioComponentID;
    iVar4 = *piVar19;
    (param_1->AudioPluginOutputData).AudioBuffer.ArrayNum = 0;
    local_d8[0] = param_3;
    if (iVar4 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar2,0,piVar19);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&pFVar2->AudioBuffer,local_c8->ArrayNum);
    pFVar6 = this->MixerDevice;
    if ((*(longlong *)&pFVar6->field_0x110 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    plVar7 = *(longlong **)&pFVar6->field_0x110;
    (**(code **)(*plVar7 + 0x28))(plVar7,local_d8,pFVar2);
    if (((param_1->AudioPluginOutputData).AudioBuffer.ArrayNum != param_4) &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3835252409160960993>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                            ,0xbe1,
                            "SourceInfo.AudioPluginOutputData.AudioBuffer.Num() == NumSamples"),
       bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (bVar13) {
      local_198._12_4_ = uStack_21c;
      local_198.ArrayNum = iStack_220;
      local_188._12_4_ = uStack_1cc;
      local_188.ArrayNum = iStack_1d0;
      local_198.DataPtr = (float *)local_228;
      local_178._12_4_ = uStack_1fc;
      local_178.ArrayNum = iStack_200;
      local_178.DataPtr = (float *)local_208;
      local_188.DataPtr = (float *)local_1d8;
      ArraySum(&local_178,&local_188,&local_198);
    }
    else {
      memcpy((void *)FVar18,(param_1->AudioPluginOutputData).AudioBuffer.AllocatorInstance.Data,
             (longlong)param_4 << 2);
    }
  }
  if (param_1->bUseHRTFSpatializer == '\0') {
    param_1->NumPostEffectChannels = param_1->NumInputChannels;
    FMixerSourceSubmixOutputBuffer::SetPostAttenuationSourceBuffer(param_2,&param_1->SourceBuffer);
    bVar3 = param_1->field_0x522;
    goto joined_r0x0001464f42c1;
  }
  if (__CsvProfilerStat3061 == false) {
    FCsvProfilerTrace::OutputInlineStat("HRTF",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3061 = true;
  }
  uVar11 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("HRTF",_GCsvCategory_Audio.Index,"CSV_HRTF");
  FVar17 = StatPtr_STAT_AudioMixerHRTF;
  if (StatPtr_STAT_AudioMixerHRTF == (FThreadSafeStaticStat<FStat_STAT_AudioMixerHRTF>)0x0) {
    pFVar16 = ::FName::FName(local_1a8,"STAT_AudioMixerHRTF");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerHRTF>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerHRTF,*pFVar16,L"HRTF",
                        "STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true,true,ST_int64,
                        true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar17;
  bVar13 = false;
  bVar14 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_218[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_218[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_1f8.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                   ,0xbf6);
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_228 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar10 = true;
      goto LAB_1464f4043;
    }
  }
  bVar10 = false;
  FVar18 = local_1f0;
LAB_1464f4043:
  pTVar1 = &(this->SpatialInterfaceInfo).SpatializationPlugin;
  if (((this->SpatialInterfaceInfo).SpatializationPlugin.Object == (IAudioSpatialization *)0x0) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160961016>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0xbf8,"SpatialInterfaceInfo.SpatializationPlugin.IsValid()"), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this->SpatialInterfaceInfo).MaxChannelsSupportedBySpatializationPlugin <
       param_1->NumInputChannels) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160961017>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0xbf9,
                          "SourceInfo.NumInputChannels <= SpatialInterfaceInfo.MaxChannelsSupportedBySpatializationPlugin"
                         ), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_78 = &param_1->SourceBuffer;
  local_70 = param_1->NumInputChannels;
  local_48 = &param_1->SpatParams;
  local_80 = param_1->AudioComponentID;
  local_88[0] = param_3;
  if ((this->SpatialInterfaceInfo).bSpatializationIsExternalSend == 0) {
    iVar4 = (param_1->AudioPluginOutputData).AudioBuffer.ArrayMax;
    (param_1->AudioPluginOutputData).AudioBuffer.ArrayNum = 0;
    if (iVar4 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&param_1->AudioPluginOutputData,0,
                 &(param_1->AudioPluginOutputData).AudioBuffer.ArrayMax);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(local_210,this->NumOutputFrames * 2);
  }
  FLLMScope::FLLMScope(local_230,AudioMixerPlugins,false,None,Default,true);
  FMemScope::FMemScope(&local_1c8,AudioMixerPlugins,true);
  if ((pTVar1->Object == (IAudioSpatialization *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar12 = local_210;
  pIVar8 = pTVar1->Object;
  (**(code **)((longlong)*pIVar8 + 0x58))(pIVar8,local_88,local_210);
  FMemScope::~FMemScope(&local_1c8);
  FLLMScope::~FLLMScope(local_230);
  if ((this->SpatialInterfaceInfo).bSpatializationIsExternalSend == 0) {
    param_1->NumPostEffectChannels = 2;
    FMixerSourceSubmixOutputBuffer::SetPostAttenuationSourceBuffer(param_2,pTVar12);
    bVar3 = param_1->field_0x522;
  }
  else {
    param_1->NumPostEffectChannels = param_1->NumInputChannels;
    FMixerSourceSubmixOutputBuffer::SetPostAttenuationSourceBuffer(param_2,&param_1->SourceBuffer);
    bVar3 = param_1->field_0x522;
  }
  if ((bVar3 & 0x20) != 0) {
    FMixerSourceSubmixOutputBuffer::SetPreAttenuationSourceBuffer
              (param_2,&param_1->PreDistanceAttenuationBuffer);
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("HRTF",uVar11);
  return;
}

// ComputePostSourceEffectBuffer @ 1464f42f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::ComputePostSourceEffectBuffer
          (FMixerSourceManager *this,bool param_1,int param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar2;
  float fVar3;
  int iVar4;
  Type TVar5;
  FModulationDestinationData *pFVar6;
  FScriptContainerElement *_Src;
  FName _Dst;
  code *pcVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceEffectBuffers> FVar26;
  FSpatializationParams *pFVar27;
  uint uVar28;
  FSpatializationParams *pFVar29;
  FName FVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  FMixerSourceManager *pFVar33;
  FName FVar34;
  int iVar35;
  longlong lVar36;
  FSourceInfo *pFVar37;
  FScriptContainerElement *pFVar38;
  float fVar39;
  float fVar40;
  FNameEntryId FVar41;
  undefined1 auStackY_238 [32];
  undefined1 local_1d0 [8];
  FMixerSourceManager *local_1c8;
  FName local_1c0;
  FName local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  FColor_u_0 local_1a4;
  uint local_1a0;
  FName local_198 [2];
  FName local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FName local_178;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  FName local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FName local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FName local_128 [2];
  TArrayView<float,int> local_118;
  TArrayView<float,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float,int> local_e8;
  undefined4 *local_d8;
  longlong local_d0;
  undefined4 *local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  longlong local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1c8 = this;
  local_1a8 = param_2;
  if (!__CsvProfilerStat3133) {
    FCsvProfilerTrace::OutputInlineStat("SourceEffectsBuffers",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3133 = true;
  }
  local_1a0 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("SourceEffectsBuffers",_GCsvCategory_Audio.Index,"CSV_SourceEffectsBuffers");
  lVar36 = 2;
  FVar26 = StatPtr_STAT_AudioMixerSourceEffectBuffers;
  if (StatPtr_STAT_AudioMixerSourceEffectBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceEffectBuffers>)0x0) {
    pFVar25 = ::FName::FName(local_128,"STAT_AudioMixerSourceEffectBuffers");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceEffectBuffers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSourceEffectBuffers,
                        *pFVar25,L"Source Effect Buffers","STATGROUP_AudioMixer","STATCAT_Advanced",
                        L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar18 = false;
  bVar19 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  FVar34 = *(FName *)FVar26;
  bVar20 = false;
  bVar21 = false;
  if ((FVar34.ComparisonIndex.Value.Value == 0) && (FVar34.Number == 0)) {
LAB_1464f44a7:
    bVar19 = bVar21;
    bVar18 = bVar20;
    bVar20 = false;
    local_188 = local_178;
    FVar34 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar18 = false;
      bVar19 = true;
      bVar20 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198[0].ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_198[0].Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_198,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                   ,0xc3e);
        bVar18 = true;
        bVar19 = true;
        bVar20 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1464f44a7;
    local_1c0 = FVar34;
    local_188 = FVar34;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar20 = true;
  }
  uVar28 = 0;
  if (param_2 < (this->SourceInfos).ArrayNum) {
    uVar28 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar37 = (FSourceInfo *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_2 * 0x5d0);
  if (((pFVar37->bIsBusy == '\0') ||
      (pFVar37->bIsPlaying != '\x01' ||
       (pFVar37->bIsPaused != '\0' || pFVar37->bIsPausedForQuantization != '\0'))) ||
     ((pFVar37->bIsDone != '\0' && (pFVar37->bEffectTailsDone != false)))) goto LAB_1464f5315;
  if (param_1) {
    if (pFVar37->AudioBusId == 0xffffffff) goto LAB_1464f5315;
  }
  else if (pFVar37->AudioBusId != 0xffffffff) goto LAB_1464f5315;
  if (0 < pFVar37->AudioBusSends[0].ArrayNum) {
    piVar1 = &(pFVar37->PreEffectBuffer).ArrayMax;
    (pFVar37->PreEffectBuffer).ArrayNum = 0;
    if ((pFVar37->PreEffectBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(pFVar37->PreEffectBuffer).AllocatorInstance,0,piVar1);
    }
    uVar28 = (pFVar37->PreDistanceAttenuationBuffer).ArrayNum;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    if (*piVar1 < (int)uVar28) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar28,&(pFVar37->PreEffectBuffer).AllocatorInstance,
                 (pFVar37->PreEffectBuffer).ArrayNum,piVar1);
    }
    memcpy((pFVar37->PreEffectBuffer).AllocatorInstance.Data,
           (pFVar37->PreDistanceAttenuationBuffer).AllocatorInstance.Data,
           (longlong)(pFVar37->PreDistanceAttenuationBuffer).ArrayNum << 2);
  }
  iVar4 = (pFVar37->PreDistanceAttenuationBuffer).ArrayNum;
  local_1c0 = (FName)(pFVar37->PreDistanceAttenuationBuffer).AllocatorInstance.Data;
  local_148 = local_1c0;
  iStack_140 = iVar4;
  if ((iVar4 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar33 = local_1c8;
  if ((bool)pFVar37->bIsStopping) {
    iVar23 = pFVar37->VolumeFadeNumFrames - pFVar37->VolumeFadeFramePosition;
    iVar35 = this->NumOutputFrames;
    if (iVar23 < this->NumOutputFrames) {
      iVar35 = iVar23;
    }
    iVar23 = iVar35 + pFVar37->VolumeFadeFramePosition;
    pFVar37->VolumeFadeFramePosition = iVar23;
    FVar41.Value = (uint)((float)iVar23 * pFVar37->VolumeFadeSlope + pFVar37->VolumeFadeStart);
    pFVar37->VolumeSourceDestination = (float)FVar41.Value;
    if ((float)(FVar41.Value & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
      pFVar37->VolumeSourceDestination = 0.0;
      FVar41.Value = 0;
    }
    iVar23 = iVar35 * pFVar37->NumInputChannels;
    fVar40 = pFVar37->VolumeSourceStart;
    if (((local_1c8->MixerDevice->field_0x5c0 & 0x20) != 0) &&
       (*(longlong *)&local_1c8->MixerDevice->field_0x120 != 0)) {
      pFVar6 = (pFVar37->VolumeModulation).DestinationData.Object;
      bVar21 = pFVar6->bHasProcessed;
      fVar39 = pFVar6->ValueTarget;
      FModulationDestination::ProcessControl
                (&pFVar37->VolumeModulation,pFVar37->VolumeModulationBase,0);
      fVar3 = ((pFVar37->VolumeModulation).DestinationData.Object)->ValueTarget;
      fVar8 = fVar3;
      if (bVar21 != false) {
        fVar8 = fVar39;
      }
      fVar40 = fVar40 * fVar8;
      lVar31 = (longlong)(int)local_1a8;
      FVar41.Value = (uint)(fVar3 * FVar41.Value);
      uVar28 = 0;
      if ((int)local_1a8 < (pFVar33->GameThreadInfo).ModulationVolume.ArrayNum) {
        uVar28 = ~local_1a8 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(float *)((pFVar33->GameThreadInfo).ModulationVolume.AllocatorInstance.Data + lVar31 * 4) =
           fVar3;
    }
    local_1b8 = local_1c0;
    iStack_1b0 = iVar23;
    if ((iVar23 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_118._12_4_ = uStack_1ac;
    local_118.ArrayNum = iStack_1b0;
    local_118.DataPtr = (float *)local_1b8;
    ArrayFade(&local_118,fVar40,(float)FVar41.Value);
    this = local_1c8;
    if ((((iVar35 < pFVar33->NumOutputFrames) && (0 < iVar4 - iVar23)) && (-1 < iVar23)) &&
       (iVar23 < iVar4)) {
      memset((void *)((longlong)local_1c0 + (longlong)iVar23 * 4),0,(longlong)(iVar4 - iVar23) << 2)
      ;
      this = local_1c8;
    }
  }
  else {
    fVar40 = pFVar37->VolumeSourceStart;
    FVar41.Value = (uint)pFVar37->VolumeSourceDestination;
    if (((this->MixerDevice->field_0x5c0 & 0x20) != 0) &&
       (*(longlong *)&this->MixerDevice->field_0x120 != 0)) {
      pFVar6 = (pFVar37->VolumeModulation).DestinationData.Object;
      bVar21 = pFVar6->bHasProcessed;
      fVar39 = pFVar6->ValueTarget;
      FModulationDestination::ProcessControl
                (&pFVar37->VolumeModulation,pFVar37->VolumeModulationBase,0);
      fVar3 = ((pFVar37->VolumeModulation).DestinationData.Object)->ValueTarget;
      fVar8 = fVar3;
      if (bVar21 != false) {
        fVar8 = fVar39;
      }
      fVar40 = fVar40 * fVar8;
      FVar41.Value = (uint)((float)FVar41.Value * fVar3);
      uVar28 = 0;
      if (param_2 < (this->GameThreadInfo).ModulationVolume.ArrayNum) {
        uVar28 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(float *)((this->GameThreadInfo).ModulationVolume.AllocatorInstance.Data +
                (longlong)param_2 * 4) = fVar3;
    }
    local_108._12_4_ = uStack_13c;
    local_108.ArrayNum = iStack_140;
    local_108.DataPtr = (float *)local_148;
    ArrayFade(&local_108,fVar40,(float)FVar41.Value);
  }
  if (-1 < AudioMixerChannel->Enabled) {
    if (-1 < AudioMixerChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAudioSoundVolumeFields>((TLogScope<0> *)&local_d8);
      *local_d8 = *(undefined4 *)&this->MixerDevice->field_0xa0;
      QueryPerformanceCounter(&local_168);
      *(LARGE_INTEGER *)(local_d8 + 1) = local_168;
      local_d8[3] = pFVar37->PlayOrder;
      local_d8[4] = pFVar37->ActiveSoundPlayOrder;
      local_1b8.ComparisonIndex.Value = FVar41.Value;
      local_d8[5] = FVar41.Value;
      *(undefined8 *)(local_d0 + 0x28) = *(undefined8 *)(local_d0 + 0x20);
    }
    if (-1 < AudioMixerChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAudioSoundDistanceAttenuationFields>
                ((TLogScope<0> *)&local_c8);
      *local_c8 = *(undefined4 *)&this->MixerDevice->field_0xa0;
      QueryPerformanceCounter(&local_160);
      *(LARGE_INTEGER *)(local_c8 + 1) = local_160;
      local_c8[3] = pFVar37->PlayOrder;
      local_c8[4] = pFVar37->ActiveSoundPlayOrder;
      local_1b8.ComparisonIndex.Value = (uint)pFVar37->DistanceAttenuationSourceDestination;
      local_c8[5] = pFVar37->DistanceAttenuationSourceDestination;
      *(undefined8 *)(local_c0 + 0x28) = *(undefined8 *)(local_c0 + 0x20);
    }
  }
  pFVar37->VolumeSourceStart = pFVar37->VolumeSourceDestination;
  if ((DisableSourceEffectsCvar == 0) && (0 < (pFVar37->SourceEffects).ArrayNum)) {
    pFVar6 = (pFVar37->PitchModulation).DestinationData.Object;
    (pFVar37->SourceEffectInputData).CurrentVolume = pFVar37->VolumeSourceDestination;
    fVar40 = GetFrequencyMultiplier(pFVar6->ValueTarget);
    (pFVar37->SourceEffectInputData).CurrentPitch =
         fVar40 * (pFVar37->PitchSourceParam).CurrentValue;
    iVar35 = pFVar37->NumInputFrames;
    (pFVar37->SourceEffectInputData).AudioClock = *(double *)&this->MixerDevice->field_0x5c8;
    if (0 < iVar35) {
      (pFVar37->SourceEffectInputData).CurrentPlayFraction =
           (float)pFVar37->NumFramesPlayed / (float)iVar35;
    }
    pFVar27 = &(pFVar37->SourceEffectInputData).SpatParams;
    pFVar29 = &pFVar37->SpatParams;
    do {
      dVar13 = (pFVar29->ListenerPosition).field0_0x0._s_0.Y;
      dVar14 = (pFVar29->ListenerPosition).field0_0x0._s_0.Z;
      uVar15 = *(undefined8 *)&pFVar29->field_0x18;
      (pFVar27->ListenerPosition).field0_0x0._s_0.X = (pFVar29->ListenerPosition).field0_0x0._s_0.X;
      (pFVar27->ListenerPosition).field0_0x0._s_0.Y = dVar13;
      dVar13 = (pFVar29->ListenerOrientation).X;
      dVar16 = (pFVar29->ListenerOrientation).Y;
      (pFVar27->ListenerPosition).field0_0x0._s_0.Z = dVar14;
      *(undefined8 *)&pFVar27->field_0x18 = uVar15;
      dVar14 = (pFVar29->ListenerOrientation).Z;
      dVar17 = (pFVar29->ListenerOrientation).W;
      (pFVar27->ListenerOrientation).X = dVar13;
      (pFVar27->ListenerOrientation).Y = dVar16;
      dVar13 = (pFVar29->EmitterPosition).field0_0x0._s_0.X;
      dVar16 = (pFVar29->EmitterPosition).field0_0x0._s_0.Y;
      (pFVar27->ListenerOrientation).Z = dVar14;
      (pFVar27->ListenerOrientation).W = dVar17;
      dVar14 = (pFVar29->EmitterPosition).field0_0x0._s_0.Z;
      dVar17 = (pFVar29->EmitterWorldPosition).field0_0x0._s_0.X;
      (pFVar27->EmitterPosition).field0_0x0._s_0.X = dVar13;
      (pFVar27->EmitterPosition).field0_0x0._s_0.Y = dVar16;
      dVar13 = (pFVar29->EmitterWorldPosition).field0_0x0._s_0.Y;
      dVar16 = (pFVar29->EmitterWorldPosition).field0_0x0._s_0.Z;
      (pFVar27->EmitterPosition).field0_0x0._s_0.Z = dVar14;
      (pFVar27->EmitterWorldPosition).field0_0x0._s_0.X = dVar17;
      uVar9 = *(undefined4 *)&(pFVar29->EmitterWorldRotation).X;
      uVar10 = *(undefined4 *)((longlong)&(pFVar29->EmitterWorldRotation).X + 4);
      uVar11 = *(undefined4 *)&(pFVar29->EmitterWorldRotation).Y;
      uVar12 = *(undefined4 *)((longlong)&(pFVar29->EmitterWorldRotation).Y + 4);
      (pFVar27->EmitterWorldPosition).field0_0x0._s_0.Y = dVar13;
      (pFVar27->EmitterWorldPosition).field0_0x0._s_0.Z = dVar16;
      *(undefined4 *)&(pFVar27->EmitterWorldRotation).X = uVar9;
      *(undefined4 *)((longlong)&(pFVar27->EmitterWorldRotation).X + 4) = uVar10;
      *(undefined4 *)&(pFVar27->EmitterWorldRotation).Y = uVar11;
      *(undefined4 *)((longlong)&(pFVar27->EmitterWorldRotation).Y + 4) = uVar12;
      lVar36 = lVar36 + -1;
      pFVar27 = (FSpatializationParams *)&(pFVar27->EmitterWorldRotation).Z;
      pFVar29 = (FSpatializationParams *)&(pFVar29->EmitterWorldRotation).Z;
    } while (lVar36 != 0);
    lpCriticalSection = &this->EffectChainMutationCriticalSection;
    _Src = (pFVar37->SourceEffectScratchBuffer).AllocatorInstance.Data;
    (pFVar37->SourceEffectInputData).InputSourceEffectBufferPtr =
         (float *)(pFVar37->PreDistanceAttenuationBuffer).AllocatorInstance.Data;
    (pFVar37->SourceEffectInputData).NumSamples = iVar4;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar35 = (pFVar37->SourceEffects).ArrayNum;
    pFVar32 = (pFVar37->SourceEffects).AllocatorInstance.Data;
    pFVar38 = pFVar32 + (longlong)iVar35 * 0x10;
    while( true ) {
      if ((pFVar37->SourceEffects).ArrayNum != iVar35) {
        local_1d0[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FSoundEffectSource,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1d0);
      }
      if (pFVar32 == pFVar38) break;
      if ((*(longlong *)pFVar32 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar21 = FSoundEffectBase::IsActive(*(FSoundEffectBase **)pFVar32);
      if (bVar21) {
        if ((*(longlong *)pFVar32 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FSoundEffectBase::Update(*(FSoundEffectBase **)pFVar32);
      }
      if ((*(longlong *)pFVar32 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar21 = FSoundEffectBase::IsActive(*(FSoundEffectBase **)pFVar32);
      if (bVar21) {
        if ((*(longlong *)pFVar32 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(**(longlong **)pFVar32 + 0x10))
                  (*(longlong **)pFVar32,&pFVar37->SourceEffectInputData,_Src);
        memcpy((pFVar37->SourceEffectInputData).InputSourceEffectBufferPtr,_Src,(longlong)iVar4 << 2
              );
      }
      pFVar32 = pFVar32 + 0x10;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar34 = local_188;
  }
  bVar21 = pFVar37->bEffectTailsDone;
  if (DisableEnvelopeFollowingCvar == 0) {
    local_138 = local_1c0;
    local_f8._12_4_ = uStack_12c;
    local_f8.ArrayNum = iVar4;
    local_f8.DataPtr = (float *)local_1c0;
    iStack_130 = iVar4;
    fVar40 = ArrayGetAverageAbsValue(&local_f8);
    TVar5 = (pFVar37->SourceEnvelopeFollower).Mode;
    if (TVar5 == MeanSquared) {
      fVar40 = fVar40 * fVar40 * (pFVar37->SourceEnvelopeFollower).AnalysisFilterBeta +
               (pFVar37->SourceEnvelopeFollower).AnalysisFilterAlpha *
               (pFVar37->SourceEnvelopeFollower).AnalysisValue;
      (pFVar37->SourceEnvelopeFollower).AnalysisValue = fVar40;
    }
    else if (TVar5 == RootMeanSquared) {
      fVar40 = fVar40 * fVar40 * (pFVar37->SourceEnvelopeFollower).AnalysisFilterBeta +
               (pFVar37->SourceEnvelopeFollower).AnalysisFilterAlpha *
               (pFVar37->SourceEnvelopeFollower).AnalysisValue;
      (pFVar37->SourceEnvelopeFollower).AnalysisValue = fVar40;
      fVar40 = SQRT(fVar40);
    }
    else if (TVar5 == Peak) {
      fVar40 = (float)((uint)fVar40 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    else {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                          ,0x1bf,L"");
      if (bVar22) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    fVar39 = (pFVar37->SourceEnvelopeFollower).Value - fVar40;
    if (0.0 < fVar39) {
      fVar3 = *(float *)((longlong)&(pFVar37->SourceEnvelopeFollower)._padding_ + 4);
    }
    else {
      fVar3 = *(float *)((longlong)&(pFVar37->SourceEnvelopeFollower)._padding_ + 4);
    }
    fVar40 = fVar39 * fVar3 + fVar40;
    (pFVar37->SourceEnvelopeFollower).Value = fVar40;
    if (__real_3f800000 <= fVar40) {
      fVar40 = __real_3f800000;
    }
    if (fVar40 <= 0.0) {
      fVar40 = 0.0;
    }
    pFVar37->SourceEnvelopeValue = fVar40;
    if ((pFVar37->bEffectTailsDone != false) || (fVar40 < ___real_3784f341)) goto LAB_1464f4df5;
    bVar22 = false;
  }
  else {
LAB_1464f4df5:
    bVar22 = true;
  }
  pFVar37->bEffectTailsDone = bVar22;
  if ((bVar21 == false) && (bVar22 != false)) {
    (**(code **)((longlong)*pFVar37->SourceListener + 0x20))();
  }
  pFVar33 = local_1c8;
  if ((((local_1c8->MixerDevice->field_0x5c0 & 0x20) == 0) ||
      (*(longlong *)&local_1c8->MixerDevice->field_0x120 == 0)) ||
     ((pFVar37->bModFiltersUpdated == '\0' &&
      ((bVar21 = FModulationDestination::IsActive(&pFVar37->LowpassModulation), !bVar21 &&
       (bVar21 = FModulationDestination::IsActive(&pFVar37->HighpassModulation), !bVar21)))))) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  if (((pFVar37->bEnableBaseSubmix != '\0') || (pFVar37->bEnableSubmixSends != 0)) || (bVar21)) {
    iVar35 = pFVar37->NumInputChannels * pFVar33->NumOutputFrames;
    if ((pFVar37->bEnableBaseSubmix == '\0') && (pFVar37->bEnableSubmixSends == 0)) {
      FModulationDestination::ProcessControl
                (&pFVar37->LowpassModulation,pFVar37->LowpassModulationBase,0);
      FInterpolatedLPF::StartFrequencyInterpolation
                (&pFVar37->LowPassFilter,
                 ((pFVar37->LowpassModulation).DestinationData.Object)->ValueTarget,
                 pFVar33->NumOutputFrames);
      fVar40 = pFVar37->HighpassModulationBase;
LAB_1464f4f2e:
      FModulationDestination::ProcessControl(&pFVar37->HighpassModulation,fVar40,0);
      FInterpolatedHPF::StartFrequencyInterpolation
                (&pFVar37->HighPassFilter,
                 ((pFVar37->HighpassModulation).DestinationData.Object)->ValueTarget,
                 pFVar33->NumOutputFrames);
    }
    else if (bVar21) {
      fVar40 = pFVar37->LowpassModulationBase;
      if (pFVar37->LowPassFreq <= pFVar37->LowpassModulationBase) {
        fVar40 = pFVar37->LowPassFreq;
      }
      FModulationDestination::ProcessControl(&pFVar37->LowpassModulation,fVar40,0);
      FInterpolatedLPF::StartFrequencyInterpolation
                (&pFVar37->LowPassFilter,
                 ((pFVar37->LowpassModulation).DestinationData.Object)->ValueTarget,
                 pFVar33->NumOutputFrames);
      fVar40 = pFVar37->HighpassModulationBase;
      if (pFVar37->HighpassModulationBase <= pFVar37->HighPassFreq) {
        fVar40 = pFVar37->HighPassFreq;
      }
      goto LAB_1464f4f2e;
    }
    FVar41.Value = (uint)__real_469c4000;
    if ((DisableFilteringCvar != 0) ||
       (__real_469c4000 < (pFVar37->LowPassFilter).CutoffFrequency ||
        __real_469c4000 == (pFVar37->LowPassFilter).CutoffFrequency)) {
      bVar21 = true;
      if (DisableFilteringCvar == 0) goto LAB_1464f4f84;
LAB_1464f4fa4:
      bVar22 = true;
    }
    else {
      bVar21 = false;
LAB_1464f4f84:
      if ((DisableHPFilteringCvar != 0) ||
         ((pFVar37->HighPassFilter).CutoffFrequency <= __real_41a00034)) goto LAB_1464f4fa4;
      bVar22 = false;
    }
    _Dst = (FName)(pFVar37->SourceBuffer).AllocatorInstance.Data;
    FVar30 = local_1c0;
    if (!bVar21) {
      FInterpolatedLPF::ProcessAudioBuffer
                (&pFVar37->LowPassFilter,(float *)local_1c0,(float *)_Dst,iVar35);
      FVar30 = _Dst;
    }
    if (!bVar22) {
      FInterpolatedHPF::ProcessAudioBuffer
                (&pFVar37->HighPassFilter,(float *)FVar30,(float *)_Dst,iVar35);
    }
    if (-1 < AudioMixerChannel->Enabled) {
      if (!bVar21) {
        FVar41.Value = (uint)((pFVar37->LowpassModulation).DestinationData.Object)->ValueTarget;
      }
      fVar40 = __real_41a00000;
      if (!bVar22) {
        fVar40 = ((pFVar37->HighpassModulation).DestinationData.Object)->ValueTarget;
      }
      pFVar33 = local_1c8;
      if (-1 < AudioMixerChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FAudioSoundSourceFiltersFields>
                  ((TLogScope<0> *)&local_b8);
        pFVar33 = local_1c8;
        *local_b8 = *(undefined4 *)&local_1c8->MixerDevice->field_0xa0;
        QueryPerformanceCounter(&local_158);
        *(LARGE_INTEGER *)(local_b8 + 1) = local_158;
        local_b8[3] = pFVar37->PlayOrder;
        local_b8[4] = pFVar37->ActiveSoundPlayOrder;
        local_b8[6] = fVar40;
        local_1b8.ComparisonIndex.Value = FVar41.Value;
        local_b8[5] = FVar41.Value;
        *(undefined8 *)(local_b0 + 0x28) = *(undefined8 *)(local_b0 + 0x20);
      }
      if (-1 < AudioMixerChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FAudioSoundSourceEnvelopeFields>
                  ((TLogScope<0> *)&local_a8);
        *local_a8 = *(undefined4 *)&pFVar33->MixerDevice->field_0xa0;
        QueryPerformanceCounter(&local_150);
        *(LARGE_INTEGER *)(local_a8 + 1) = local_150;
        local_a8[3] = pFVar37->PlayOrder;
        local_a8[4] = pFVar37->ActiveSoundPlayOrder;
        local_1b8.ComparisonIndex.Value = (uint)pFVar37->SourceEnvelopeValue;
        local_a8[5] = pFVar37->SourceEnvelopeValue;
        *(undefined8 *)(local_a0 + 0x28) = *(undefined8 *)(local_a0 + 0x20);
      }
    }
    (pFVar37->LowPassFilter).B1Curr = (pFVar37->LowPassFilter).B1Target;
    (pFVar37->HighPassFilter).A0Curr = (pFVar37->HighPassFilter).A0Target;
    (pFVar37->LowPassFilter).B1Delta = 0.0;
    (pFVar37->HighPassFilter).A0Delta = 0.0;
    pFVar33 = local_1c8;
    if ((bVar21) && (bVar22)) {
      memcpy((void *)_Dst,(void *)local_1c0,(longlong)iVar4 << 2);
      pFVar33 = local_1c8;
    }
  }
  if (((pFVar37->bEnableBaseSubmix != '\0' || pFVar37->bEnableSubmixSends != '\0') ||
      ((pFVar33->SpatialInterfaceInfo).bSpatializationIsExternalSend != 0)) ||
     ((pFVar37->AudioLink).Object != (IAudioLinkSourcePushed *)0x0)) {
    if (DisableDistanceAttenuationCvar == 0) {
      local_188 = (FName)(pFVar37->SourceBuffer).AllocatorInstance.Data;
      iStack_180 = (pFVar37->SourceBuffer).ArrayNum;
      if ((iStack_180 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_e8._12_4_ = uStack_17c;
      local_e8.ArrayNum = iStack_180;
      local_e8.DataPtr = (float *)local_188;
      ArrayFade(&local_e8,pFVar37->DistanceAttenuationSourceStart,
                pFVar37->DistanceAttenuationSourceDestination);
      pFVar37->DistanceAttenuationSourceStart = pFVar37->DistanceAttenuationSourceDestination;
    }
    uVar28 = local_1a8;
    lVar36 = (longlong)(int)local_1a8;
    uVar24 = 0;
    if ((int)local_1a8 < (pFVar33->SourceSubmixOutputBuffers).ArrayNum) {
      uVar24 = ~local_1a8 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    ComputePluginAudio(pFVar33,pFVar37,
                       (FMixerSourceSubmixOutputBuffer *)
                       ((pFVar33->SourceSubmixOutputBuffers).AllocatorInstance.Data + lVar36 * 0x330
                       ),uVar28,iVar4);
  }
  if (((bool)pFVar37->bIsLastBuffer) && (pFVar37->bEffectTailsDone != false)) {
    (pFVar37->CurrentFrameValues).ArrayNum = 0;
    if ((pFVar37->CurrentFrameValues).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(pFVar37->CurrentFrameValues).AllocatorInstance,0,
                 &(pFVar37->CurrentFrameValues).ArrayMax);
    }
    (pFVar37->NextFrameValues).ArrayNum = 0;
    if ((pFVar37->NextFrameValues).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(pFVar37->NextFrameValues).AllocatorInstance,0,
                 &(pFVar37->NextFrameValues).ArrayMax);
    }
    TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>::operator=
              (&pFVar37->CurrentPCMBuffer,(FNullTag *)0x0);
  }
LAB_1464f5315:
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("SourceEffectsBuffers",local_1a0);
  return;
}

// ComputeSourceBuffer @ 1464f53b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::ComputeSourceBuffer(FMixerSourceManager *this,bool param_1,int param_2)

{
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined1 uVar3;
  uint uVar4;
  atomic<float> aVar5;
  FScriptContainerElement *pFVar6;
  atomic<double> aVar7;
  FMixerSourceBuffer *this_01;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  float fVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceBuffers> FVar18;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *pTVar19;
  char *pcVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint *puVar23;
  atomic<unsigned_char> *paVar24;
  uint uVar25;
  undefined1 *puVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  TReferenceControllerBase<1> *pTVar31;
  FName FVar32;
  int iVar33;
  longlong lVar34;
  FSourceInfo *this_02;
  float fVar35;
  float fVar36;
  undefined1 in_XMM2 [16];
  undefined1 auStackY_208 [32];
  int local_1a4;
  int local_1a0;
  longlong local_198;
  int local_178;
  int local_174;
  uint local_170;
  float local_16c;
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FColor_u_0 local_148 [2];
  FScriptContainerElement *local_140;
  int iStack_138;
  undefined4 uStack_134;
  FName local_130;
  FName local_128;
  FName local_120;
  TArray<float,TAlignedHeapAllocator<16>_> local_110;
  LARGE_INTEGER local_100;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FName local_e8;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> local_e0;
  TArrayView<float,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  undefined4 local_9c;
  undefined4 *local_98;
  longlong local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (!__CsvProfilerStat2416) {
    FCsvProfilerTrace::OutputInlineStat("SourceBuffers",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2416 = true;
  }
  uVar28 = _GCsvCategory_Audio.Index;
  local_170 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("SourceBuffers",_GCsvCategory_Audio.Index,"CSV_SourceBuffers");
  FVar18 = StatPtr_STAT_AudioMixerSourceBuffers;
  if (StatPtr_STAT_AudioMixerSourceBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceBuffers>)0x0) {
    pFVar17 = ::FName::FName(&local_e8,"STAT_AudioMixerSourceBuffers");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSourceBuffers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSourceBuffers,*pFVar17,
                        L"Source Buffers","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar9 = false;
  bVar10 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar32 = *(FName *)FVar18;
  bVar14 = false;
  bVar15 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_1464f556e:
    bVar10 = bVar15;
    bVar9 = bVar14;
    bVar14 = false;
    local_128 = local_120;
    FVar32 = local_120;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_130.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                   ,0x971);
        bVar9 = true;
        bVar10 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1464f556e;
    local_128 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar14 = true;
  }
  uVar21 = 0;
  if (param_2 < (this->SourceInfos).ArrayNum) {
    uVar21 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_02 = (FSourceInfo *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_2 * 0x5d0);
  if ((this_02->bIsBusy != '\0') &&
     (this_02->bIsPlaying == '\x01' &&
      (this_02->bIsPaused == '\0' && this_02->bIsPausedForQuantization == '\0'))) {
    uVar21 = this_02->AudioBusId;
    if (param_1) {
      if (uVar21 == 0xffffffff) goto LAB_1464f6704;
    }
    else if (uVar21 != 0xffffffff) goto LAB_1464f6704;
    iVar30 = this_02->NumInputChannels * this->NumOutputFrames;
    if (5 < (byte)LogAudioTiming._0_1_) {
      local_160 = (this_02->DebugName).Data.ArrayNum;
      lVar29 = (longlong)local_160;
      pFVar6 = (this_02->DebugName).Data.AllocatorInstance.Data;
      local_168.Data = (FScriptContainerElement *)0x0;
      if (local_160 == 0) {
        local_15c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_160,0,&local_168,local_160,&local_15c);
        memcpy(local_168.Data,pFVar6,lVar29 * 2);
      }
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_160 != 0) {
        FVar22.Data = local_168.Data;
      }
      bVar15 = MatchesLogFilter((wchar_t *)FVar22.Data);
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      if (bVar15) {
        local_150 = (this_02->DebugName).Data.ArrayNum;
        lVar29 = (longlong)local_150;
        pFVar6 = (this_02->DebugName).Data.AllocatorInstance.Data;
        local_158.Data = (FScriptContainerElement *)0x0;
        if (local_150 == 0) {
          local_14c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_150,0,&local_158,local_150,&local_14c);
          memcpy(local_158.Data,pFVar6,lVar29 * 2);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        if (local_158.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data);
        }
      }
    }
    this_00 = &this_02->PreDistanceAttenuationBuffer;
    (this_02->PreDistanceAttenuationBuffer).ArrayNum = 0;
    if ((this_02->PreDistanceAttenuationBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&this_00->AllocatorInstance,0,
                 &(this_02->PreDistanceAttenuationBuffer).ArrayMax);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(this_00,iVar30);
    (this_02->SourceEffectScratchBuffer).ArrayNum = 0;
    if ((this_02->SourceEffectScratchBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this_02->SourceEffectScratchBuffer).AllocatorInstance,0,
                 &(this_02->SourceEffectScratchBuffer).ArrayMax);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this_02->SourceEffectScratchBuffer,iVar30);
    (this_02->SourceBuffer).ArrayNum = 0;
    if ((this_02->SourceBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this_02->SourceBuffer).AllocatorInstance,0,
                 &(this_02->SourceBuffer).ArrayMax);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this_02->SourceBuffer,iVar30);
    uVar28 = local_170;
    if (this_02->bIsDone == '\0') {
      if (((this_02->SubCallbackDelayLengthInFrames != 0) && (this_02->bDelayLineSet == '\0')) &&
         (PerSourceResampling == 0)) {
        TCircularAudioBuffer<float,16>::SetCapacity
                  (&this_02->SourceBufferDelayLine,
                   (this_02->SubCallbackDelayLengthInFrames + 1) * this_02->NumInputChannels);
        iVar33 = this_02->NumInputChannels * this_02->SubCallbackDelayLengthInFrames;
        pFVar6 = (this_02->SourceBufferDelayLine).InternalBuffer.AllocatorInstance.Data;
        uVar28 = (this_02->SourceBufferDelayLine).WriteCounter.Counter;
        iVar16 = (this_02->SourceBufferDelayLine).ReadCounter.Counter;
        iVar27 = (this_02->SourceBufferDelayLine).WriteCounter.Counter;
        uVar25 = iVar27 - iVar16;
        if (iVar27 < iVar16) {
          uVar25 = uVar25 + (this_02->SourceBufferDelayLine).Capacity;
        }
        uVar4 = (this_02->SourceBufferDelayLine).Capacity;
        iVar16 = ~uVar25 + uVar4;
        if (iVar33 < iVar16) {
          iVar16 = iVar33;
        }
        iVar27 = uVar4 - uVar28;
        if (iVar16 < iVar27) {
          iVar27 = iVar16;
        }
        memset(pFVar6 + (ulonglong)uVar28 * 4,0,(longlong)iVar27 << 2);
        memset(pFVar6,0,(longlong)(iVar16 - iVar27) << 2);
        LOCK();
        (this_02->SourceBufferDelayLine).WriteCounter.Counter =
             (uVar28 + iVar16) % (this_02->SourceBufferDelayLine).Capacity;
        UNLOCK();
        this_02->bDelayLineSet = '\x01';
      }
      fVar12 = __real_3f800000;
      pFVar6 = (this_00->AllocatorInstance).Data;
      if (uVar21 == 0xffffffff) {
        fVar35 = __real_3f800000;
        if (((this->MixerDevice->field_0x5c0 & 0x20) != 0) &&
           (*(longlong *)&this->MixerDevice->field_0x120 != 0)) {
          FModulationDestination::ProcessControl
                    (&this_02->PitchModulation,this_02->PitchModulationBase,0);
          fVar35 = GetFrequencyMultiplier
                             (((this_02->PitchModulation).DestinationData.Object)->ValueTarget);
        }
        fVar2 = (this_02->PitchSourceParam).TargetValue;
        fVar35 = fVar35 * fVar2;
        if (MaxModulationPitchRangeFreqCVar <= fVar35) {
          fVar35 = MaxModulationPitchRangeFreqCVar;
        }
        if (fVar35 <= MinModulationPitchRangeFreqCVar) {
          fVar35 = MinModulationPitchRangeFreqCVar;
        }
        FParam::SetValue(&this_02->PitchSourceParam,fVar35,this->NumOutputFrames);
        if ((-1 < AudioMixerChannel->Enabled) && (-1 < AudioMixerChannel->Enabled)) {
          UE::Trace::Private::FLogScope::Enter<FAudioSoundPitchFields>((TLogScope<0> *)&local_98);
          *local_98 = *(undefined4 *)&this->MixerDevice->field_0xa0;
          QueryPerformanceCounter(&local_100);
          *(LARGE_INTEGER *)(local_98 + 1) = local_100;
          local_98[3] = this_02->PlayOrder;
          local_98[4] = this_02->ActiveSoundPlayOrder;
          local_98[5] = fVar35;
          *(undefined8 *)(local_90 + 0x28) = *(undefined8 *)(local_90 + 0x20);
        }
        if (PerSourceResampling == 0) {
          iVar30 = 0;
          fVar35 = this_02->CurrentFrameAlpha;
          local_1a4 = 0;
          local_1a0 = 0;
          if (0 < this->NumOutputFrames) {
            lVar29 = 0;
            local_198 = 0;
            do {
              uVar3 = this_02->field_0x521;
              FVar32 = local_128;
              if ((bool)this_02->bIsLastBuffer) break;
              this_02->field_0x521 = uVar3 | 1;
              if (fVar35 < fVar12) {
                if ((~this_02->bHasStarted & 1) != 0) goto LAB_1464f5cd2;
              }
              else {
                in_XMM2 = roundps(in_XMM2,ZEXT416((uint)fVar35),1);
                iVar16 = (int)in_XMM2._0_4_;
                fVar35 = fVar35 - in_XMM2._0_4_;
                this_02->CurrentFrameIndex = this_02->CurrentFrameIndex + iVar16;
                this_02->NumFramesPlayed = this_02->NumFramesPlayed + (longlong)iVar16;
LAB_1464f5cd2:
                ReadSourceFrame(this,param_2);
              }
              if (this_02->SubCallbackDelayLengthInFrames == 0) {
                uVar28 = 0;
                if (0 < this_02->NumInputChannels) {
                  lVar34 = 0;
                  do {
                    uVar21 = 0;
                    if ((int)uVar28 < (this_02->CurrentFrameValues).ArrayNum) {
                      uVar21 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    fVar36 = *(float *)((this_02->CurrentFrameValues).AllocatorInstance.Data +
                                       lVar34);
                    uVar21 = 0;
                    if ((int)uVar28 < (this_02->NextFrameValues).ArrayNum) {
                      uVar21 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar30 = iVar30 + 1;
                    uVar28 = uVar28 + 1;
                    pFVar1 = (this_02->NextFrameValues).AllocatorInstance.Data + lVar34;
                    lVar34 = lVar34 + 4;
                    *(float *)(pFVar6 + lVar29 * 4) = (*(float *)pFVar1 - fVar36) * fVar35 + fVar36;
                    lVar29 = lVar29 + 1;
                    local_1a4 = iVar30;
                    local_198 = lVar29;
                  } while ((int)uVar28 < this_02->NumInputChannels);
                }
              }
              else {
                uVar28 = 0;
                lVar29 = local_198;
                if (0 < this_02->NumInputChannels) {
                  lVar34 = 0;
                  do {
                    uVar21 = 0;
                    if ((int)uVar28 < (this_02->CurrentFrameValues).ArrayNum) {
                      uVar21 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    fVar36 = *(float *)((this_02->CurrentFrameValues).AllocatorInstance.Data +
                                       lVar34);
                    uVar21 = 0;
                    if ((int)uVar28 < (this_02->NextFrameValues).ArrayNum) {
                      uVar21 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    local_140 = (this_02->SourceBufferDelayLine).InternalBuffer.AllocatorInstance.
                                Data;
                    uVar21 = (this_02->SourceBufferDelayLine).WriteCounter.Counter;
                    iVar30 = (this_02->SourceBufferDelayLine).ReadCounter.Counter;
                    iVar16 = (this_02->SourceBufferDelayLine).WriteCounter.Counter;
                    local_16c = (*(float *)((this_02->NextFrameValues).AllocatorInstance.Data +
                                           lVar34) - fVar36) * fVar35 + fVar36;
                    if (iVar16 < iVar30) {
                      uVar25 = (iVar16 - iVar30) + (this_02->SourceBufferDelayLine).Capacity;
                    }
                    else {
                      uVar25 = iVar16 - iVar30;
                    }
                    uVar4 = (this_02->SourceBufferDelayLine).Capacity;
                    iVar30 = ~uVar25 + uVar4;
                    if (1 < iVar30) {
                      iVar30 = 1;
                    }
                    iVar16 = uVar4 - uVar21;
                    if (iVar30 < iVar16) {
                      iVar16 = iVar30;
                    }
                    memcpy(local_140 + (ulonglong)uVar21 * 4,&local_16c,(longlong)iVar16 * 4);
                    memcpy(local_140,&local_16c + iVar16,(longlong)(iVar30 - iVar16) << 2);
                    local_198 = local_198 + 1;
                    LOCK();
                    (this_02->SourceBufferDelayLine).WriteCounter.Counter =
                         (uVar21 + iVar30) % (this_02->SourceBufferDelayLine).Capacity;
                    UNLOCK();
                    uVar21 = (this_02->SourceBufferDelayLine).ReadCounter.Counter;
                    local_140 = pFVar6 + (longlong)local_1a4 * 4;
                    iVar30 = local_1a4 + 1;
                    pFVar1 = (this_02->SourceBufferDelayLine).InternalBuffer.AllocatorInstance.Data;
                    iVar16 = (this_02->SourceBufferDelayLine).ReadCounter.Counter;
                    iVar27 = (this_02->SourceBufferDelayLine).WriteCounter.Counter;
                    if (iVar27 < iVar16) {
                      iVar27 = (iVar27 - iVar16) + (this_02->SourceBufferDelayLine).Capacity;
                    }
                    else {
                      iVar27 = iVar27 - iVar16;
                    }
                    if (1 < iVar27) {
                      iVar27 = 1;
                    }
                    iVar16 = (this_02->SourceBufferDelayLine).Capacity - uVar21;
                    if (iVar27 < iVar16) {
                      iVar16 = iVar27;
                    }
                    memcpy(local_140,pFVar1 + (ulonglong)uVar21 * 4,(longlong)iVar16 * 4);
                    memcpy(local_140 + (longlong)iVar16 * 4,pFVar1,(longlong)(iVar27 - iVar16) << 2)
                    ;
                    uVar28 = uVar28 + 1;
                    lVar34 = lVar34 + 4;
                    LOCK();
                    (this_02->SourceBufferDelayLine).ReadCounter.Counter =
                         (uint)((this_02->SourceBufferDelayLine).ReadCounter.Counter + iVar27) %
                         (this_02->SourceBufferDelayLine).Capacity;
                    UNLOCK();
                    lVar29 = local_198;
                    local_1a4 = iVar30;
                  } while ((int)uVar28 < this_02->NumInputChannels);
                }
              }
              local_1a0 = local_1a0 + 1;
              fVar36 = (this_02->PitchSourceParam).DeltaValue +
                       (this_02->PitchSourceParam).CurrentValue;
              (this_02->PitchSourceParam).CurrentValue = fVar36;
              fVar35 = fVar35 + fVar36;
              FVar32 = local_128;
            } while (local_1a0 < this->NumOutputFrames);
          }
          this_02->CurrentFrameAlpha = fVar35;
        }
        else {
          this_02->bHasStarted = '\x01';
          if (((this_02->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) ||
             (this_02->NumInputChannels < 1)) {
            pcVar20 = "SourceInfo.MixerSourceBuffer.IsValid() && SourceInfo.NumInputChannels > 0";
            iVar30 = 0xa39;
            paVar24 = &bGEnsureHasExecuted<3835252409160960569>;
LAB_1464f6699:
            bVar15 = UE::Assert::Private::ExecCheckImplInternal
                               (paVar24,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                                ,iVar30,pcVar20);
            if (bVar15) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          else {
            iVar16 = this_02->SubCallbackDelayLengthInFrames;
            local_1a0 = this->NumOutputFrames;
            if ((0 < iVar16) && (this_02->bDelayLineSet == '\0')) {
              if (local_1a0 < iVar16) {
                bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<3835252409160960576>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                                    ,0xa40,
                                    "SourceInfo.SubCallbackDelayLengthInFrames <= FramesToWrite");
                if (bVar15) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else {
                local_1a0 = local_1a0 - iVar16;
              }
              this_02->bDelayLineSet = '\x01';
            }
            if (0 < local_1a0) {
              iVar16 = local_1a0;
              do {
                iVar27 = FSourceInfo::GetCurrentAudioChunkNumFrames(this_02);
                if (this_02->CurrentFrameIndex < iVar27) {
LAB_1464f640c:
                  if (((fVar35 != fVar12) && (this_02->bResampling == 0)) &&
                     (this_02->field_0x523 = this_02->field_0x523 | 1,
                     (~this_02->bHasStarted & 1) != 0)) {
                    FRuntimeResampler::SetFrameRatio(&this_02->Resampler,fVar35,0);
                  }
                  if (((this_02->CurrentPCMBuffer).Object ==
                       (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("SourceInfo.CurrentPCMBuffer.IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                                          ,0xa7e,L""), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar6 = (this_02->PreDistanceAttenuationBuffer).AllocatorInstance.Data +
                           (longlong)(iVar30 - iVar16 * this_02->NumInputChannels) * 4;
                  if (((this_02->CurrentPCMBuffer).Object ==
                       (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar1 = (((this_02->CurrentPCMBuffer).Object)->AllocatorInstance).Data +
                           (longlong)(this_02->CurrentFrameIndex * this_02->NumInputChannels) * 4;
                  if (this_02->bResampling == 0) {
                    iVar27 = iVar27 - this_02->CurrentFrameIndex;
                    if (iVar16 < iVar27) {
                      iVar27 = iVar16;
                    }
                    memcpy(pFVar6,pFVar1,(longlong)(iVar27 * this_02->NumInputChannels) << 2);
                    this_02->CurrentFrameIndex = this_02->CurrentFrameIndex + iVar27;
                    this_02->NumFramesPlayed = this_02->NumFramesPlayed + (longlong)iVar27;
                    iVar16 = iVar16 - iVar27;
                    local_1a0 = iVar16;
                  }
                  else {
                    local_178 = 0;
                    local_174 = 0;
                    FRuntimeResampler::SetFrameRatio
                              (&this_02->Resampler,fVar35,this->NumOutputFrames);
                    iVar16 = iVar16 * this_02->NumInputChannels;
                    if ((iVar16 < 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ArrayNum >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xfe,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iStack_f0 = (iVar27 - this_02->CurrentFrameIndex) * this_02->NumInputChannels;
                    uStack_134 = local_9c;
                    local_140 = pFVar6;
                    iStack_138 = iVar16;
                    local_f8 = pFVar1;
                    if ((iStack_f0 < 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ArrayNum >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xfe,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    local_c8._12_4_ = uStack_134;
                    local_c8.ArrayNum = iStack_138;
                    local_b8._12_4_ = uStack_ec;
                    local_b8.ArrayNum = iStack_f0;
                    local_c8.DataPtr = (float *)local_140;
                    local_b8.DataPtr = (float *)local_f8;
                    FRuntimeResampler::ProcessInterleaved
                              (&this_02->Resampler,&local_b8,&local_c8,&local_178,&local_174);
                    if (((local_178 < 1) && (local_174 < 1)) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("NumFramesConsumed > 0 || NumFramesProduced > 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                                            ,0xa8f,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    this_02->CurrentFrameIndex = this_02->CurrentFrameIndex + local_178;
                    this_02->NumFramesPlayed = this_02->NumFramesPlayed + (longlong)local_178;
                    iVar16 = local_1a0 - local_174;
                    local_1a0 = iVar16;
                  }
                }
                else {
                  if ((this_02->CurrentPCMBuffer).Object !=
                      (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
                    if (((this_02->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    aVar7 = ((this_02->MixerSourceBuffer).Object)->CPUCoreUtilization;
                    uVar28 = 0;
                    if (param_2 < (this->GameThreadInfo).CPUCoreUtilization.ArrayNum) {
                      uVar28 = (uint)~param_2 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    *(atomic<double> *)
                     ((this->GameThreadInfo).CPUCoreUtilization.AllocatorInstance.Data +
                     (longlong)param_2 * 8) = aVar7;
                    if (((this_02->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    aVar5 = ((this_02->MixerSourceBuffer).Object)->RelativeRenderCost;
                    uVar28 = 0;
                    if (param_2 < (this->GameThreadInfo).RelativeRenderCost.ArrayNum) {
                      uVar28 = (uint)~param_2 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    *(atomic<float> *)
                     ((this->GameThreadInfo).RelativeRenderCost.AllocatorInstance.Data +
                     (longlong)param_2 * 4) = aVar5;
                    if (((this_02->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    FMixerSourceBuffer::OnBufferEnd((this_02->MixerSourceBuffer).Object);
                  }
                  if (((this_02->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  this_01 = (this_02->MixerSourceBuffer).Object;
                  if (this_01->bDirectRendering == 0) {
                    iVar27 = FMixerSourceBuffer::GetNumBuffersQueued(this_01);
                    bVar15 = iVar27 == 0;
                  }
                  else {
                    bVar15 = this_01->bBufferFinished;
                  }
                  if (bVar15 != false) {
                    this_02->bIsLastBuffer = '\x01';
                    break;
                  }
                  if (((this_02->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pTVar19 = FMixerSourceBuffer::GetNextBuffer
                                      ((this_02->MixerSourceBuffer).Object,&local_e0);
                  if (&this_02->CurrentPCMBuffer != pTVar19) {
                    (this_02->CurrentPCMBuffer).Object = pTVar19->Object;
                    pTVar19->Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=
                              (&(this_02->CurrentPCMBuffer).SharedReferenceCount,
                               &pTVar19->SharedReferenceCount);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_e0.SharedReferenceCount.ReferenceController);
                  this_02->CurrentFrameIndex = 0;
                  iVar27 = FSourceInfo::GetCurrentAudioChunkNumFrames(this_02);
                  if ((this_02->CurrentPCMBuffer).Object ==
                      (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
                    pcVar20 = "SourceInfo.CurrentPCMBuffer.IsValid()";
                    iVar30 = 0xa66;
                    paVar24 = &bGEnsureHasExecuted<3835252409160960614>;
                    goto LAB_1464f6699;
                  }
                  if (iVar27 != 0) goto LAB_1464f640c;
                }
              } while (0 < iVar16);
            }
          }
        }
        (this_02->PitchSourceParam).CurrentValue = (this_02->PitchSourceParam).TargetValue;
        (this_02->PitchSourceParam).DeltaValue = 0.0;
        FParam::SetValue(&this_02->PitchSourceParam,fVar2,this->NumOutputFrames);
        uVar28 = local_170;
      }
      else {
        uVar28 = this_02->AudioBusId;
        if (*(int *)&(this->AudioBuses).field_0x8 != *(int *)&(this->AudioBuses).field_0x34) {
          puVar26 = *(undefined1 **)&(this->AudioBuses).field_0x40;
          if (puVar26 == (undefined1 *)0x0) {
            puVar26 = &(this->AudioBuses).field_0x38;
          }
          uVar21 = *(uint *)(puVar26 +
                            (ulonglong)
                            (*(int *)&(this->AudioBuses).field_0x48 - 1U &
                            ((uVar28 >> 2) + 0x9e3779b8 + uVar28 * 0x40 ^ uVar28)) * 4);
          if (uVar21 != 0xffffffff) {
            do {
              puVar23 = (uint *)((longlong)(int)uVar21 * 0x20 + *(longlong *)&this->AudioBuses);
              if ((*puVar23 == uVar28) && (puVar23[1] == 0xffffffff)) {
                if ((uVar21 != 0xffffffff) && (puVar23 != (uint *)0x0)) {
                  pTVar31 = *(TReferenceControllerBase<1> **)(puVar23 + 4);
                  lVar29 = *(longlong *)(puVar23 + 2);
                  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar31->SharedReferenceCount =
                         (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  if (lVar29 == 0) goto LAB_1464f59b2;
                  lVar34 = this_02->SourceBusDurationFrames;
                  iVar30 = this->NumOutputFrames;
                  if ((lVar34 != -1) && (lVar34 <= this_02->NumFramesPlayed + (longlong)iVar30)) {
                    iVar30 = (int)lVar34 - (int)this_02->NumFramesPlayed;
                    this_02->bIsLastBuffer = '\x01';
                  }
                  iVar16 = this_02->NumInputChannels;
                  this_02->NumFramesPlayed = this_02->NumFramesPlayed + (longlong)iVar30;
                  if (*(int *)(lVar29 + 0x5c) == iVar16) {
                    memcpy((this_00->AllocatorInstance).Data,
                           *(void **)(lVar29 + 0x38 + (longlong)*(int *)(lVar29 + 0x58) * 0x10),
                           (longlong)iVar16 * (longlong)iVar30 * 4);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar31);
                    uVar28 = local_170;
                    goto LAB_1464f6704;
                  }
                  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_110.ArrayNum = 0;
                  local_110.ArrayMax = 0;
                  FMixerDevice::Get2DChannelMap
                            (this_02->bIsVorbis,*(int *)(lVar29 + 0x5c),iVar16,
                             this_02->bIsCenterChannelOnly,&local_110);
                  iVar30 = this_02->NumInputChannels;
                  if ((*(int *)(lVar29 + 0x5c) == iVar30) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("NumChannels != InNumOutputChannels",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBus.cpp"
                                          ,0xd3,L""), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  FVar13.Data = local_110.AllocatorInstance.Data;
                  DownmixAndSumIntoBuffer
                            (*(int *)(lVar29 + 0x5c),iVar30,
                             (TArray<float,TAlignedHeapAllocator<16>_> *)
                             ((longlong)*(int *)(lVar29 + 0x58) * 0x10 + 0x38 + lVar29),this_00,
                             (float *)local_110.AllocatorInstance.Data);
                  if (FVar13.Data == (FScriptContainerElement *)0x0) goto LAB_1464f59b2;
                  FMemory::Free(FVar13.Data);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar31);
                  uVar28 = local_170;
                  goto LAB_1464f6704;
                }
                break;
              }
              uVar21 = puVar23[6];
            } while (uVar21 != 0xffffffff);
          }
        }
        pTVar31 = (TReferenceControllerBase<1> *)0x0;
LAB_1464f59b2:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31)
        ;
        uVar28 = local_170;
      }
    }
  }
LAB_1464f6704:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("SourceBuffers",uVar28);
  return;
}

// ConnectBusPatches @ 1464f6e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::ConnectBusPatches(FMixerSourceManager *this)

{
  byte bVar1;
  atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*> aVar2;
  code *pcVar3;
  int iVar4;
  ulong64 uVar5;
  FMixerAudioBus *pFVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  bool local_res8 [8];
  FAudioRenderStepId local_res10;
  FAudioRenderStepId local_res18;
  FAudioRenderStepId local_res20;
  TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> local_d8;
  FAudioBusKey local_b8;
  int local_b0;
  bool local_ac;
  ulong64 local_a8;
  char local_a0;
  TSharedRef<Audio::FMixerAudioBus,1> local_98;
  FAudioRenderStepId local_88;
  TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> local_80;
  FAudioBusKey local_60;
  int local_58;
  undefined1 local_54;
  ulong64 local_50;
  char local_48;
  
  while( true ) {
    aVar2 = ((this->PendingAudioBusConnections).Tail)->Next;
    if (aVar2 == (atomic<TMpscQueue<Audio::FMixerSourceManager::FPendingAudioBusConnection,FMemory>::FNode_*>
                  )0x0) {
      local_a0 = '\0';
    }
    else {
      TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::
      TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>
                (&local_80,
                 (TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> *)
                 ((longlong)aVar2 + 8));
      local_60 = *(FAudioBusKey *)((longlong)aVar2 + 0x28);
      local_58 = *(int *)((longlong)aVar2 + 0x30);
      local_54 = *(undefined1 *)((longlong)aVar2 + 0x34);
      local_50 = *(ulong64 *)((longlong)aVar2 + 0x38);
      local_48 = '\x01';
      bVar1 = *(byte *)((longlong)aVar2 + 0x20);
      if (1 < (ulonglong)bVar1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])((longlong)aVar2 + 8);
      FMemory::Free((this->PendingAudioBusConnections).Tail);
      (this->PendingAudioBusConnections).Tail = (FNode *)aVar2;
      local_a0 = local_48;
      if (local_48 != '\0') {
        TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::
        TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>(&local_d8,&local_80);
        local_b8 = local_60;
        local_b0 = local_58;
        local_ac = (bool)local_54;
        local_a8 = local_50;
        if (local_48 != '\0') {
          uVar9 = (ulonglong)local_80.TypeIndex;
          if (1 < local_80.TypeIndex) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L"");
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(&local_80);
        }
      }
    }
    bVar8 = local_ac;
    iVar4 = local_b0;
    if (local_a0 == '\0') break;
    local_res8[0] = false;
    FindOrAddAudioBus(this,&local_98,local_b8,local_b0,local_ac,local_res8);
    if (local_res8[0] != false) {
      if ((local_98.Object)->NumChannels != iVar4) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3835252409160960699>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                           ,0xabb,"AudioBusPtr->GetNumChannels() == NumChannels");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (local_98.Object)->bIsAutomatic = bVar8;
    }
    if (local_a0 == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_d8.TypeIndex == 0) {
      if (AudioMixerCVars::UseRenderScheduler != 0) {
        if (local_a0 == '\0') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar5 = local_a8;
        if (local_a8 != 0xffffffffffffffff) {
          FAudioRenderStepId::FromTransmitterID((ulong64)&local_88);
          FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&local_res20);
          AddBusPatchDependency(this,uVar5,local_88,local_res20);
        }
      }
      pFVar6 = local_98.Object;
      if (local_a0 == '\0') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_d8.TypeIndex != 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FPatchMixer::AddNewInput(&pFVar6->PatchMixer,(FPatchInput *)&local_d8);
    }
    else if (local_d8.TypeIndex == 1) {
      if (AudioMixerCVars::UseRenderScheduler != 0) {
        if (local_a0 == '\0') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar5 = local_a8;
        if (local_a8 != 0xffffffffffffffff) {
          FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&local_res18);
          FAudioRenderStepId::FromTransmitterID((ulong64)&local_res10);
          AddBusPatchDependency(this,uVar5,local_res18,local_res10);
        }
      }
      pFVar6 = local_98.Object;
      if (local_a0 == '\0') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_d8.TypeIndex != 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FPatchSplitter::AddNewPatch
                (&pFVar6->PatchSplitter,(TSharedPtr<Audio::FPatchOutput,1> *)&local_d8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    if (local_a0 != '\0') {
      uVar9 = (ulonglong)local_d8.TypeIndex;
      if (1 < local_d8.TypeIndex) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_d8);
    }
  }
  return;
}

// DoStallDiagnostics @ 1464fbf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::DoStallDiagnostics(FMixerSourceManager *this)

{
  wchar_t *pwVar1;
  size_t sVar2;
  bool bVar3;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  LARGE_INTEGER local_178;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178.s.LowPart = 0;
  if ((this->RenderThreadPhase == (atomic<ESourceManagerRenderThreadPhase>)0x1) ||
     (this->RenderThreadPhase == (atomic<ESourceManagerRenderThreadPhase>)0x2)) {
    AcquireSRWLockShared((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
    if (2 < (byte)LogAudioMixer._0_1_) {
      pwVar1 = ::LexToString((ESourceManagerRenderThreadPhase)this->RenderThreadPhase);
      QueryPerformanceCounter(&local_178);
      bVar3 = (this->CurrentlyExecuteingCmd).DebugString == (char *)0x0;
      if (bVar3) {
        local_158.Ptr = L"";
      }
      else {
        local_158._padding_ = 0;
        sVar2 = strlen((this->CurrentlyExecuteingCmd).DebugString);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,(this->CurrentlyExecuteingCmd).DebugString,(int)sVar2,Yes);
      }
      ::FString::FString(&local_170,local_158.Ptr);
      if ((!bVar3) && ((void *)local_158._padding_ != (void *)0x0)) {
        FMemory::Free((void *)local_158._padding_);
      }
      local_188 = pwVar1;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
  }
  else if (2 < (byte)LogAudioMixer._0_1_) {
    ::LexToString((ESourceManagerRenderThreadPhase)this->RenderThreadPhase);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  LogInflightAsyncTasks(this);
  if (bDumpCallstackOnStallDiagnostics != false) {
    LogCallstack(this,this->AudioRenderThreadId);
  }
  return;
}

// FindOrAddAudioBus @ 1464fe710

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Audio::FMixerAudioBus,1> * __thiscall
Audio::FMixerSourceManager::FindOrAddAudioBus
          (FMixerSourceManager *this,TSharedRef<Audio::FMixerAudioBus,1> *__return_storage_ptr__,
          FAudioBusKey param_1,int param_2,bool param_3,bool *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<Audio::FMixerAudioBus,1> *pTVar5;
  FMixerAudioBus *pFVar6;
  FAudioBusKey local_res18;
  FMixerAudioBus *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  FAudioBusKey *local_28;
  TReferenceControllerBase<1> **local_20;
  
  local_res18 = param_1;
  pTVar3 = TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                   *)&this->AudioBuses,&local_res18);
  if (pTVar3 == (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *)0x0) {
    local_48 = (FMixerAudioBus *)0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_48 = *(FMixerAudioBus **)&pTVar3->field_0x8;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
    if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = local_48 != (FMixerAudioBus *)0x0;
  }
  if (local_48 == (FMixerAudioBus *)0x0) {
    pTVar4 = ::operator_new(0x248);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = (FMixerAudioBus *)&DAT_00000010;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMixerAudioBus_Audio___00_SharedPointerInternals__6B_
      ;
      FMixerAudioBus::FMixerAudioBus
                ((FMixerAudioBus *)(pTVar4 + 1),this,param_3,param_2,local_res18);
      pFVar6 = (FMixerAudioBus *)(pTVar4 + 1);
      if ((pFVar6 == (FMixerAudioBus *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<Audio::FMixerAudioBus,1> *)(*pcVar1)();
        return pTVar5;
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = 0;
    local_48 = pFVar6;
    local_30.ReferenceController = pTVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    local_28 = &local_res18;
    local_20 = (TReferenceControllerBase<1> **)&local_48;
    TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Audio::FAudioBusKey_const_&,TSharedPtr<Audio::FMixerAudioBus,1>_const_&>_>
              ((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                *)&this->AudioBuses,
               (TPairInitializer<Audio::FAudioBusKey_const_&,TSharedPtr<Audio::FMixerAudioBus,1>_const_&>
                *)&param_4,(bool *)&local_28);
    if ((local_48 == (FMixerAudioBus *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedRef<Audio::FMixerAudioBus,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = local_48;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FStack_40.ReferenceController
  ;
  if (FStack_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (FMixerAudioBus *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Audio::FMixerAudioBus,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return __return_storage_ptr__;
}

// FlushCommandQueue @ 1464fedc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::FlushCommandQueue(FMixerSourceManager *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FStaticBasicLogRecord *pFVar4;
  
  if ((this->CommandsProcessedEvent == (FEvent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandsProcessedEvent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0xfef,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->NumCommands).Counter == 0) {
    if ((byte)LogAudioMixer._0_1_ < 6) {
      return;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    bVar2 = false;
    cVar3 = (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x20))
                      (this->CommandsProcessedEvent,CommandBufferFlushWaitTimeMsCvar,0);
    if (cVar3 == '\0') {
      (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x10))();
      bVar2 = true;
      if (2 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    else if (5 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    Update(this,bVar2);
    if (param_1) {
      PumpCommandQueue(this);
    }
    cVar3 = (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x20))
                      (this->CommandsProcessedEvent,1000,0);
    if (cVar3 == '\0') {
      (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x10))();
      if ((byte)LogAudioMixer._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
    if ((byte)LogAudioMixer._0_1_ < 6) {
      return;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<6>(pFVar4,(FLogCategoryBase *)&LogAudioMixer);
  return;
}

// GenerateSourceAudio @ 1464ff270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::GenerateSourceAudio(FMixerSourceManager *this,bool param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  FTask *pFVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined7 uStack_f;
  
  LOCK();
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)((!param_1 + '\x03') * '\x02');
  UNLOCK();
  if ((!param_1) ||
     (*(int *)&(this->AudioBuses).field_0x8 != *(int *)&(this->AudioBuses).field_0x34)) {
    if (DisableParallelSourceProcessingCvar == 0) {
      this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (this_00 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`Audio::FMixerSourceManager::GenerateSourceAudio'::`8'::<lambda_1>,void,void>
              ::_vftable_;
        if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCompleted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                               ,0x1dd,L"State: %d"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                  (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
        *(FTaskBase **)&this_00->LowLevelTask = this_00;
        *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
        ;
        *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
        pFVar6 = LowLevelTasks::FTask::GetActiveTask();
        if (pFVar6 == (FTask *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)&pFVar6->field_0x30;
        }
        *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar8;
        *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc00000544b554c00;
        this_00->ExtendedPriority = None;
        UE::FInheritedContextBase::CaptureInheritedContext
                  ((FInheritedContextBase *)&this_00->_padding_);
        this_00[1]._padding_ = (longlong)this;
        this_00[1]._padding_ = CONCAT71(uStack_f,param_1);
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`Audio::FMixerSourceManager::GenerateSourceAudio'::`8'::<lambda_1>_>::
              _vftable_;
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
        UE::Tasks::Private::FTaskBase::Wait(this_00);
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
    }
    else {
      iVar7 = 0;
      iVar3 = this->NumTotalSources;
      iVar9 = 0;
      if (0 < iVar3) {
        do {
          ComputeSourceBuffer(this,param_1,iVar9);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar3);
        iVar9 = 0;
        do {
          ComputePostSourceEffectBuffer(this,param_1,iVar9);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar3);
        do {
          ComputeOutputBuffers(this,param_1,iVar7);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
    }
  }
  return;
}

// GenerateSourceAudio @ 1464ff4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::GenerateSourceAudio
          (FMixerSourceManager *this,bool param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (param_2 < param_3) {
    do {
      ComputeSourceBuffer(this,param_1,iVar1);
      iVar1 = iVar1 + 1;
      iVar2 = param_2;
    } while (iVar1 < param_3);
    do {
      ComputePostSourceEffectBuffer(this,param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
    do {
      ComputeOutputBuffers(this,param_1,param_2);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}

// Get2DChannelMap @ 1464ff7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::Get2DChannelMap
          (FMixerSourceManager *this,int param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SourceInfos).AllocatorInstance.Data;
  lVar5 = (longlong)param_1 * 0x5d0;
  FMixerDevice::Get2DChannelMap
            ((bool)((byte)pFVar1[lVar5 + 0x522] >> 3 & 1),*(int *)(pFVar1 + lVar5 + 0x524),param_2,
             (bool)((byte)pFVar1[lVar5 + 0x520] >> 1 & 1),param_3);
  return;
}

// GetAudioBusNumChannels @ 146500a20

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Audio::FMixerSourceManager::GetAudioBusNumChannels(FMixerSourceManager *this,FAudioBusKey param_1)

{
  int iVar1;
  longlong lVar2;
  TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FAudioBusKey local_res10 [3];
  
  local_res10[0] = param_1;
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  pTVar3 = TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                   *)&this->AudioBuses,local_res10);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_> *)0x0) {
    pTVar4 = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
    lVar2 = *(longlong *)&pTVar3->field_0x8;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x5c);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return iVar1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return 0;
}

// GetCPUCoreUtilization @ 1465014c0

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
Audio::FMixerSourceManager::GetCPUCoreUtilization(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x8e1,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).CPUCoreUtilization.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  return *(double *)
          ((this->GameThreadInfo).CPUCoreUtilization.AllocatorInstance.Data + (longlong)param_1 * 8)
  ;
}

// GetCommandQueueFillPercentage @ 1465016f0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FMixerSourceManager::GetCommandQueueFillPercentage(FMixerSourceManager *this)

{
  int iVar1;
  int iVar2;
  
  if (NumCmdsConsideredFullCVar == 0) {
    return 0.0;
  }
  iVar1 = (this->NumCommands).Counter;
  iVar2 = NumCmdsConsideredFullCVar;
  if (iVar1 < NumCmdsConsideredFullCVar) {
    iVar2 = iVar1;
  }
  return (float)(iVar2 / NumCmdsConsideredFullCVar);
}

// GetEncodedOutput @ 1465022b0

/* WARNING: Enum "Type": Some values do not have unique names */

ISoundfieldAudioPacket * __thiscall
Audio::FMixerSourceManager::GetEncodedOutput
          (FMixerSourceManager *this,int param_1,FSoundfieldEncodingKey *param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ISoundfieldAudioPacket *pIVar6;
  longlong lVar7;
  
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  uVar5 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (ISoundfieldAudioPacket *)(*pcVar3)();
      return pIVar6;
    }
  }
  pFVar2 = (this->SourceInfos).AllocatorInstance.Data;
  lVar7 = (longlong)param_1 * 0x5d0;
  FVar1 = pFVar2[lVar7 + 0x520];
  if (((((byte)FVar1 & 0x30) == 0) && (((byte)pFVar2[lVar7 + 0x521] & 0x40) == 0)) &&
     (((byte)FVar1 & 8) != 0)) {
    uVar5 = 0;
    if (param_1 < (this->SourceSubmixOutputBuffers).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pIVar6 = (ISoundfieldAudioPacket *)(*pcVar3)();
        return pIVar6;
      }
    }
    pIVar6 = FMixerSourceSubmixOutputBuffer::GetSoundfieldPacket
                       ((FMixerSourceSubmixOutputBuffer *)
                        ((this->SourceSubmixOutputBuffers).AllocatorInstance.Data +
                        (longlong)param_1 * 0x330),param_2);
  }
  else {
    pIVar6 = (ISoundfieldAudioPacket *)0x0;
  }
  return pIVar6;
}

// GetEnvelopeValue @ 1465023f0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FMixerSourceManager::GetEnvelopeValue(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_1 * 0x5d0 + 0x370);
}

// GetFloatCompareTolerance @ 146502630

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FMixerSourceManager::GetFloatCompareTolerance(FMixerSourceManager *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (NumCmdsConsideredFullCVar == 0) {
    fVar3 = 0.0;
  }
  else {
    iVar1 = (this->NumCommands).Counter;
    iVar2 = NumCmdsConsideredFullCVar;
    if (iVar1 < NumCmdsConsideredFullCVar) {
      iVar2 = iVar1;
    }
    fVar3 = (float)(iVar2 / NumCmdsConsideredFullCVar);
  }
  if ((float)((uint)(fVar3 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    return FloatCompareMaxScaleCVar;
  }
  return FloatCompareMinScaleCVar;
}

// GetFreeSourceId @ 146502690

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceManager::GetFreeSourceId(FMixerSourceManager *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  
  bVar4 = IsInAudioThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = (this->GameThreadInfo).FreeSourceIndices.ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar1 = (this->GameThreadInfo).FreeSourceIndices.ArrayNum;
    iVar7 = iVar1 + -1;
    iVar1 = *(int *)((this->GameThreadInfo).FreeSourceIndices.AllocatorInstance.Data +
                    (longlong)iVar1 * 4 + -4);
    (this->GameThreadInfo).FreeSourceIndices.ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)&this->GameThreadInfo,iVar7,
               &(this->GameThreadInfo).FreeSourceIndices.ArrayMax);
    *param_1 = iVar1;
    if (this->NumTotalSources <= iVar1) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160959068>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x45c,"OutSourceId < NumTotalSources");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar2 = *param_1;
    uVar6 = 0;
    if ((int)uVar2 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[(int)uVar2] !=
        (FScriptContainerElement)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160959069>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x45d,"!GameThreadInfo.bIsBusy[OutSourceId]");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar2 = *param_1;
    uVar6 = 0;
    if ((int)uVar2 < (this->GameThreadInfo).bIsDebugMode.ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((this->GameThreadInfo).bIsDebugMode.AllocatorInstance.Data[(int)uVar2] !=
        (FScriptContainerElement)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160959071>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x45f,"!GameThreadInfo.bIsDebugMode[OutSourceId]");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (this->NumTotalSources <= this->NumActiveSources) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160959072>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x460,"NumActiveSources < NumTotalSources");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    this->NumActiveSources = this->NumActiveSources + 1;
    uVar2 = *param_1;
    uVar6 = 0;
    if ((int)uVar2 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    (this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[(int)uVar2] = (FScriptContainerElement)0x1
    ;
    return true;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3835252409160959078>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                     ,0x466,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// GetListenerRotation @ 146503440

/* WARNING: Enum "Type": Some values do not have unique names */

TQuat<double> * __thiscall
Audio::FMixerSourceManager::GetListenerRotation
          (FMixerSourceManager *this,TQuat<double> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TQuat<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->SourceSubmixOutputBuffers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TQuat<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FMixerSourceSubmixOutputBuffer::GetListenerRotation
            ((FMixerSourceSubmixOutputBuffer *)
             ((this->SourceSubmixOutputBuffers).AllocatorInstance.Data + (longlong)param_1 * 0x330),
             __return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetListenerTransforms @ 146503510

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FMixerSourceManager::GetListenerTransforms(FMixerSourceManager *this)

{
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  return &this->ListenerTransforms;
}

// GetNumActiveAudioBuses @ 146504310

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FMixerSourceManager::GetNumActiveAudioBuses(FMixerSourceManager *this)

{
  return *(int *)&(this->AudioBuses).field_0x8 - *(int *)&(this->AudioBuses).field_0x34;
}

// GetNumActiveSources @ 146504350

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FMixerSourceManager::GetNumActiveSources(FMixerSourceManager *this)

{
  return this->NumActiveSources;
}

// GetNumChannels @ 1465043c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FMixerSourceManager::GetNumChannels(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_1 * 0x5d0 + 0x524);
}

// GetNumFramesPlayed @ 146504480

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
Audio::FMixerSourceManager::GetNumFramesPlayed(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 lVar4;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  return *(long64 *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_1 * 0x5d0 + 200);
}

// GetPreDistanceAttenuationBuffer @ 146504bb0

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall
Audio::FMixerSourceManager::GetPreDistanceAttenuationBuffer(FMixerSourceManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  
  uVar4 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar2)();
      return pfVar5;
    }
  }
  pFVar1 = (this->SourceInfos).AllocatorInstance.Data;
  if (((byte)pFVar1[(longlong)param_1 * 0x5d0 + 0x520] & 0x30) == 0) {
    return *(float **)(pFVar1 + (longlong)param_1 * 0x5d0 + 0x58);
  }
  return (float *)0x0;
}

// GetPreEffectBuffer @ 146504c50

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall
Audio::FMixerSourceManager::GetPreEffectBuffer(FMixerSourceManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  
  uVar4 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar2)();
      return pfVar5;
    }
  }
  pFVar1 = (this->SourceInfos).AllocatorInstance.Data;
  if (((byte)pFVar1[(longlong)param_1 * 0x5d0 + 0x520] & 0x30) == 0) {
    return *(float **)(pFVar1 + (longlong)param_1 * 0x5d0 + 0x48);
  }
  return (float *)0x0;
}

// GetPreviousAudioBusBuffer @ 146504cf0

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall
Audio::FMixerSourceManager::GetPreviousAudioBusBuffer(FMixerSourceManager *this,int param_1)

{
  longlong lVar1;
  float *pfVar2;
  int *piVar3;
  undefined1 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  int iVar6;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)&(this->AudioBuses).field_0x8 != *(int *)&(this->AudioBuses).field_0x34) {
    puVar4 = *(undefined1 **)&(this->AudioBuses).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AudioBuses).field_0x38;
    }
    iVar6 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->AudioBuses).field_0x48 - 1U &
                              (((uint)param_1 >> 2) + 0x9e3779b8 + param_1 * 0x40 ^ param_1)) * 4);
    if (iVar6 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)&this->AudioBuses);
        if ((*piVar3 == param_1) && (piVar3[1] == -1)) {
          if ((iVar6 != -1) && (piVar3 != (int *)0x0)) {
            pTVar5 = *(TReferenceControllerBase<1> **)(piVar3 + 4);
            lVar1 = *(longlong *)(piVar3 + 2);
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (lVar1 != 0) {
              pfVar2 = *(float **)(lVar1 + 0x38 + (longlong)(1 - *(int *)(lVar1 + 0x58)) * 0x10);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              return pfVar2;
            }
          }
          break;
        }
        iVar6 = piVar3[6];
      } while (iVar6 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (float *)0x0;
}

// GetPreviousSourceBusBuffer @ 146504e00

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall
Audio::FMixerSourceManager::GetPreviousSourceBusBuffer(FMixerSourceManager *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  uint *puVar6;
  undefined1 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  
  if ((this->SourceInfos).ArrayNum <= param_1) {
    return (float *)0x0;
  }
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pfVar5 = (float *)(*pcVar3)();
    return pfVar5;
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  uVar1 = *(uint *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_1 * 0x5d0 + 0xe0);
  pTVar8 = pTVar9;
  if (*(int *)&(this->AudioBuses).field_0x8 != *(int *)&(this->AudioBuses).field_0x34) {
    puVar7 = *(undefined1 **)&(this->AudioBuses).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->AudioBuses).field_0x38;
    }
    uVar10 = *(uint *)(puVar7 + (ulonglong)
                                (*(int *)&(this->AudioBuses).field_0x48 - 1U &
                                ((uVar1 >> 2) + 0x9e3779b8 + uVar1 * 0x40 ^ uVar1)) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->AudioBuses);
        if ((*puVar6 == uVar1) && (puVar6[1] == 0xffffffff)) {
          if ((uVar10 != 0xffffffff) && (puVar6 != (uint *)0x0)) {
            pTVar8 = *(TReferenceControllerBase<1> **)(puVar6 + 4);
            lVar2 = *(longlong *)(puVar6 + 2);
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (lVar2 != 0) {
              pTVar9 = *(TReferenceControllerBase<1> **)
                        (lVar2 + 0x38 + (longlong)(1 - *(int *)(lVar2 + 0x58)) * 0x10);
            }
          }
          break;
        }
        uVar10 = puVar6[6];
      } while (uVar10 != 0xffffffff);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (float *)pTVar9;
}

// GetRelativeRenderCost @ 146505210

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FMixerSourceManager::GetRelativeRenderCost(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).RelativeRenderCost.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)((this->GameThreadInfo).RelativeRenderCost.AllocatorInstance.Data +
                   (longlong)param_1 * 4);
}

// GetVolumeModulationValue @ 146505c70

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FMixerSourceManager::GetVolumeModulationValue(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).ModulationVolume.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)((this->GameThreadInfo).ModulationVolume.AllocatorInstance.Data +
                   (longlong)param_1 * 4);
}

// Init @ 146508430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::Init(FMixerSourceManager *this,FSourceManagerInitParams *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<Audio::FMixerSourceVoice_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Audio::FMixerSourceSubmixOutputBuffer,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  FGameThreadInfo *pFVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  FMixerSourceSubmixOutputBuffer *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  IAudioSourceDataOverride *pIVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  FName *pFVar20;
  FAudioSpatializationInterfaceInfo *pFVar21;
  undefined8 *puVar22;
  ulong64 uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  FName local_res18;
  FName local_res20;
  int local_288;
  undefined4 local_284;
  undefined4 local_280 [2];
  undefined1 local_278 [8];
  FDelegateAllocation local_270;
  undefined1 local_260 [8];
  FDelegateAllocation local_258;
  undefined1 local_248 [8];
  FDelegateAllocation local_240;
  undefined1 local_230 [8];
  FDelegateAllocation local_228;
  undefined8 local_218;
  FAttackRelease local_210;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 local_1e0;
  FSharedReferencer<1> FStack_1d8;
  undefined8 local_1d0;
  FSharedReferencer<1> FStack_1c8;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  FDestructionSentinel local_120;
  FDelegateAllocation *local_108;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  FName local_e0;
  FName local_d8;
  undefined1 local_d0 [40];
  TReferenceControllerBase<1> *local_a8;
  
  if ((param_1->NumSources < 1) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160958527>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x23f,"InitParams.NumSources > 0"), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((this->bInitialized == 0) && (this->MixerDevice != (FMixerDevice *)0x0)) {
    if (((float)*(int *)&this->MixerDevice->field_0x84 <= 0.0) &&
       (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3835252409160958534>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                            ,0x246,"MixerDevice->GetSampleRate() > 0"), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar28 = param_1->NumSources;
    uVar30 = (ulonglong)uVar28;
    pTVar4 = &this->MixerSources;
    uVar27 = 0;
    this->NumTotalSources = uVar28;
    local_218 = 0;
    iVar18 = *(int *)&this->MixerDevice->field_0x8c;
    this->NumOutputFrames = iVar18;
    this->NumOutputSamples = iVar18 * (this->MixerDevice->PlatformInfo).NumChannels;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar30);
    }
    piVar1 = &(this->MixerSources).ArrayMax;
    (this->MixerSources).ArrayNum = 0;
    if (*piVar1 != uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar28,&pTVar4->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar28) {
      do {
        pFVar29 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar29 <= (FScriptContainerElement *)&local_218) &&
            ((FScriptContainerElement *)&local_218 < pFVar29 + (longlong)*piVar1 * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar18 = (this->MixerSources).ArrayNum;
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar4->AllocatorInstance,piVar1);
        }
        (this->MixerSources).ArrayNum = iVar18 + 1;
        *(undefined8 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_218;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    pTVar5 = &this->SourceSubmixOutputBuffers;
    piVar1 = &(this->SourceSubmixOutputBuffers).ArrayMax;
    pFVar9 = (FMixerSourceSubmixOutputBuffer *)(pTVar5->AllocatorInstance).Data;
    iVar18 = (this->SourceSubmixOutputBuffers).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<Audio::FMixerSourceSubmixOutputBuffer,int>(pFVar9,iVar18);
      (this->SourceSubmixOutputBuffers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x330,0x10,0,&pTVar5->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<Audio::FMixerSourceSubmixOutputBuffer,int>(pFVar9,iVar18);
      (this->SourceSubmixOutputBuffers).ArrayNum = 0;
    }
    iVar18 = this->NumTotalSources;
    uVar30 = uVar27;
    if (0 < iVar18) {
      do {
        uVar28 = (this->MixerDevice->PlatformInfo).NumChannels;
        iVar18 = (this->SourceSubmixOutputBuffers).ArrayNum;
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x330,0x10,&pTVar5->AllocatorInstance,piVar1);
        }
        (this->SourceSubmixOutputBuffers).ArrayNum = iVar18 + 1;
        FMixerSourceSubmixOutputBuffer::FMixerSourceSubmixOutputBuffer
                  ((FMixerSourceSubmixOutputBuffer *)
                   ((pTVar5->AllocatorInstance).Data + (longlong)iVar18 * 0x330),this->MixerDevice,2
                   ,uVar28,this->NumOutputFrames);
        iVar18 = this->NumTotalSources;
        uVar28 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar28;
      } while ((int)uVar28 < iVar18);
    }
    piVar1 = &(this->SourceInfos).ArrayNum;
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x5d0,0x10,iVar18,&(this->SourceInfos).AllocatorInstance,piVar1,
                        &(this->SourceInfos).ArrayMax);
    DefaultConstructItems<Audio::FMixerSourceManager::FSourceInfo,int>
              ((this->SourceInfos).AllocatorInstance.Data + (longlong)iVar19 * 0x5d0,iVar18);
    fVar16 = __real_c3480000;
    fVar15 = __real_42c80000;
    fVar14 = __real_41200000;
    fVar13 = __real_3f800000;
    iVar18 = this->NumTotalSources;
    uVar30 = uVar27;
    uVar31 = uVar27;
    if (0 < iVar18) {
      do {
        uVar25 = (uint)uVar30;
        uVar28 = 0;
        if ((int)uVar25 < (this->SourceInfos).ArrayNum) {
          uVar28 = ~uVar25 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar29 = (this->SourceInfos).AllocatorInstance.Data;
        local_1e0 = 0;
        FStack_1d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        *(FMixerSourceManager **)(pFVar29 + uVar31 + 8) = this;
        pFVar24 = pFVar29 + uVar31 + 0x10;
        if (pFVar24 != (FScriptContainerElement *)&local_1e0) {
          *(undefined8 *)pFVar24 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar24 + 8),&FStack_1d8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_1d8.ReferenceController);
        *(undefined4 *)(pFVar29 + uVar31 + 0x124) = 0xbf800000;
        pFVar24 = pFVar29 + uVar31 + 0x28;
        *(undefined4 *)(pFVar29 + uVar31 + 0x128) = 0xbf800000;
        *(undefined8 *)(pFVar29 + uVar31 + 300) = 0;
        *(undefined8 *)(pFVar29 + uVar31 + 0x134) = 0;
        *(undefined4 *)(pFVar29 + uVar31 + 0x13c) = 0xbf800000;
        *(undefined4 *)(pFVar29 + uVar31 + 0x140) = 0xbf800000;
        *(undefined4 *)(pFVar29 + uVar31 + 0x144) = 0x469c4000;
        *(undefined4 *)(pFVar29 + uVar31 + 0x148) = 0x41a00000;
        *(undefined8 *)(pFVar29 + uVar31 + 0x20) = 0;
        local_1d0 = 0;
        FStack_1c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar24 != (FScriptContainerElement *)&local_1d0) {
          *(undefined8 *)pFVar24 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar24 + 8),&FStack_1c8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_1c8.ReferenceController);
        *(undefined8 *)(pFVar29 + uVar31 + 0xc0) = 0;
        pFVar26 = pFVar29 + uVar31 + 0xd0;
        *(undefined8 *)(pFVar29 + uVar31 + 200) = 0;
        pFVar24 = pFVar26 + 0xc;
        if (*(int *)pFVar24 < 0) {
          DestructItems<Audio::FMixerSourceSubmixSend,int>
                    (*(FMixerSourceSubmixSend **)&pFVar26->field_0x0,*(int *)&pFVar26[8].field_0x0);
          *(undefined4 *)&pFVar26[8].field_0x0 = 0;
          if (*(int *)pFVar24 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,(ForAnyElementType *)pFVar26,0,(int *)pFVar24);
          }
        }
        else {
          DestructItems<Audio::FMixerSourceSubmixSend,int>
                    (*(FMixerSourceSubmixSend **)&pFVar26->field_0x0,*(int *)&pFVar26[8].field_0x0);
          *(undefined4 *)&pFVar26[8].field_0x0 = 0;
        }
        *(undefined4 *)(pFVar29 + uVar31 + 0xe0) = 0xffffffff;
        pFVar24 = pFVar29 + uVar31 + 0xf0;
        *(undefined8 *)(pFVar29 + uVar31 + 0xe8) = 0xffffffffffffffff;
        iVar18 = *(int *)(pFVar24 + 0xc);
        *(undefined4 *)&pFVar24[8].field_0x0 = 0;
        if (iVar18 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pFVar24,0,(int *)(pFVar24 + 0xc));
        }
        *(undefined4 *)(pFVar29 + uVar31 + 0x108) = 0;
        if (*(int *)(pFVar29 + uVar31 + 0x10c) < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(pFVar29 + uVar31 + 0x100),0,
                     (int *)(pFVar29 + uVar31 + 0x10c));
        }
        *(undefined4 *)(pFVar29 + uVar31 + 0x1d0) = 0xffffffff;
        FAttackRelease::FAttackRelease
                  (&local_210,(float)*(int *)&this->MixerDevice->field_0x84,fVar14,fVar15,true);
        uStack_1f8 = 0;
        uStack_1f4 = 2;
        uStack_1f0 = 0;
        fStack_1e8 = 0.0;
        fStack_1e4 = 1.0;
        uStack_1ec = 0x40a00000;
        if (local_210.SampleRate <= 0.0) {
          bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5241047625217605135>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                              ,0x1f1,"(InSampleRate > 0.f) && (InWinMsec > 0.f)");
          if (bVar17) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          fStack_1e8 = expf(fVar16 / local_210.SampleRate);
          fStack_1e4 = fVar13 - fStack_1e8;
        }
        *(undefined4 *)(pFVar29 + uVar31 + 0x370) = 0;
        pFVar29[uVar31 + 0x1f8] = (FScriptContainerElement)0x0;
        *(ulonglong *)(pFVar29 + uVar31 + 0x340) =
             CONCAT44(local_210.AttackTimeSamples,local_210.SampleRate);
        *(undefined8 *)(pFVar29 + uVar31 + 0x340 + 8) = local_210._8_8_;
        *(undefined8 *)(pFVar29 + uVar31 + 0x350) = local_210._16_8_;
        *(ulonglong *)(pFVar29 + uVar31 + 0x350 + 8) = CONCAT44(uStack_1f4,uStack_1f8);
        *(ulonglong *)(pFVar29 + uVar31 + 0x360) = CONCAT44(uStack_1ec,uStack_1f0);
        *(ulonglong *)(pFVar29 + uVar31 + 0x360 + 8) = CONCAT44(fStack_1e4,fStack_1e8);
        uVar28 = *(uint *)&this->MixerDevice->field_0xa0;
        pFVar20 = ::FName::FName(&local_res18,"Volume");
        FModulationDestination::Init
                  ((FModulationDestination *)(pFVar29 + uVar31 + 0x378),uVar28,*pFVar20,false,true);
        pFVar20 = ::FName::FName(&local_res20,"Pitch");
        FModulationDestination::Init
                  ((FModulationDestination *)(pFVar29 + uVar31 + 0x388),uVar28,*pFVar20,false,false)
        ;
        pFVar20 = ::FName::FName(&local_e0,"HPFCutoffFrequency");
        FModulationDestination::Init
                  ((FModulationDestination *)(pFVar29 + uVar31 + 0x3a8),uVar28,*pFVar20,false,false)
        ;
        pFVar20 = ::FName::FName(&local_d8,"LPFCutoffFrequency");
        FModulationDestination::Init
                  ((FModulationDestination *)(pFVar29 + uVar31 + 0x398),uVar28,*pFVar20,false,false)
        ;
        pFVar29[uVar31 + 0x521] = (FScriptContainerElement)((byte)pFVar29[uVar31 + 0x521] & 8);
        pFVar29[uVar31 + 0x522] = (FScriptContainerElement)((byte)pFVar29[uVar31 + 0x522] & 0x90);
        pFVar29[uVar31 + 0x523] = (FScriptContainerElement)((byte)pFVar29[uVar31 + 0x523] & 0xfe);
        pFVar29[uVar31 + 0x5b0] = (FScriptContainerElement)((byte)pFVar29[uVar31 + 0x5b0] & 0xfe);
        *(undefined8 *)(pFVar29 + uVar31 + 0x3b8) = 0;
        *(undefined4 *)(pFVar29 + uVar31 + 0x3c4) = 0x41a00000;
        *(undefined4 *)(pFVar29 + uVar31 + 0x3c0) = 0x469c4000;
        pFVar29[uVar31 + 0x520] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar29 + uVar31 + 0x524) = 0;
        *(undefined4 *)(pFVar29 + uVar31 + 0x52c) = 0;
        iVar18 = this->NumTotalSources;
        uVar30 = (ulonglong)(uVar25 + 1);
        uVar31 = uVar31 + 0x5d0;
      } while ((int)(uVar25 + 1) < iVar18);
    }
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar18,&(this->GameThreadInfo).bIsBusy.AllocatorInstance,
                        &(this->GameThreadInfo).bIsBusy.ArrayNum,
                        &(this->GameThreadInfo).bIsBusy.ArrayMax);
    memset((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data + iVar19,0,(longlong)iVar18);
    iVar18 = this->NumTotalSources;
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar18,&(this->GameThreadInfo).bNeedsSpeakerMap.AllocatorInstance,
                        &(this->GameThreadInfo).bNeedsSpeakerMap.ArrayNum,
                        &(this->GameThreadInfo).bNeedsSpeakerMap.ArrayMax);
    memset((this->GameThreadInfo).bNeedsSpeakerMap.AllocatorInstance.Data + iVar19,0,
           (longlong)iVar18);
    iVar18 = this->NumTotalSources;
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar18,&(this->GameThreadInfo).bIsDebugMode.AllocatorInstance,
                        &(this->GameThreadInfo).bIsDebugMode.ArrayNum,
                        &(this->GameThreadInfo).bIsDebugMode.ArrayMax);
    memset((this->GameThreadInfo).bIsDebugMode.AllocatorInstance.Data + iVar19,0,(longlong)iVar18);
    iVar18 = this->NumTotalSources;
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar18,&(this->GameThreadInfo).bIsUsingHRTFSpatializer.AllocatorInstance
                        ,&(this->GameThreadInfo).bIsUsingHRTFSpatializer.ArrayNum,
                        &(this->GameThreadInfo).bIsUsingHRTFSpatializer.ArrayMax);
    memset((this->GameThreadInfo).bIsUsingHRTFSpatializer.AllocatorInstance.Data + iVar19,0,
           (longlong)iVar18);
    iVar18 = this->NumTotalSources;
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar18,&(this->GameThreadInfo).CPUCoreUtilization.AllocatorInstance,
                        &(this->GameThreadInfo).CPUCoreUtilization.ArrayNum,
                        &(this->GameThreadInfo).CPUCoreUtilization.ArrayMax);
    memset((this->GameThreadInfo).CPUCoreUtilization.AllocatorInstance.Data + (longlong)iVar19 * 8,0
           ,(longlong)iVar18 << 3);
    uVar28 = this->NumTotalSources;
    pTVar6 = &(this->GameThreadInfo).RelativeRenderCost;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    iVar18 = (this->GameThreadInfo).RelativeRenderCost.ArrayMax;
    piVar2 = &(this->GameThreadInfo).RelativeRenderCost.ArrayMax;
    (this->GameThreadInfo).RelativeRenderCost.ArrayNum = 0;
    if (iVar18 < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar28,&pTVar6->AllocatorInstance,0,piVar2);
    }
    uVar28 = this->NumTotalSources;
    pFVar7 = &this->GameThreadInfo;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    iVar18 = (this->GameThreadInfo).FreeSourceIndices.ArrayMax;
    (this->GameThreadInfo).FreeSourceIndices.ArrayNum = 0;
    if (iVar18 < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar28,(ForAnyElementType *)pFVar7,0,
                 &(this->GameThreadInfo).FreeSourceIndices.ArrayMax);
    }
    uVar28 = this->NumTotalSources;
    pTVar8 = &(this->GameThreadInfo).ModulationVolume;
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
    }
    iVar18 = (this->GameThreadInfo).ModulationVolume.ArrayMax;
    piVar3 = &(this->GameThreadInfo).ModulationVolume.ArrayMax;
    (this->GameThreadInfo).ModulationVolume.ArrayNum = 0;
    if (iVar18 < (int)uVar28) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar28,&pTVar8->AllocatorInstance,0,piVar3);
    }
    local_288 = this->NumTotalSources;
    while (local_288 = local_288 + -1, -1 < local_288) {
      pFVar29 = (pTVar6->AllocatorInstance).Data;
      local_284 = 0x3f800000;
      if (((pFVar29 <= (FScriptContainerElement *)&local_284) &&
          ((FScriptContainerElement *)&local_284 < pFVar29 + (longlong)*piVar2 * 4)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar18 = (this->GameThreadInfo).RelativeRenderCost.ArrayNum;
      if (iVar18 == *piVar2) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar6->AllocatorInstance,piVar2);
      }
      (this->GameThreadInfo).RelativeRenderCost.ArrayNum = iVar18 + 1;
      *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_284;
      pFVar29 = (pFVar7->FreeSourceIndices).AllocatorInstance.Data;
      if (((pFVar29 <= (FScriptContainerElement *)&local_288) &&
          ((FScriptContainerElement *)&local_288 <
           pFVar29 + (longlong)(this->GameThreadInfo).FreeSourceIndices.ArrayMax * 4)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar18 = (this->GameThreadInfo).FreeSourceIndices.ArrayNum;
      if (iVar18 == (this->GameThreadInfo).FreeSourceIndices.ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar7,
                            &(this->GameThreadInfo).FreeSourceIndices.ArrayMax);
      }
      (this->GameThreadInfo).FreeSourceIndices.ArrayNum = iVar18 + 1;
      local_280[0] = 0x3f800000;
      *(int *)((pFVar7->FreeSourceIndices).AllocatorInstance.Data + (longlong)iVar18 * 4) =
           local_288;
      pFVar29 = (pTVar8->AllocatorInstance).Data;
      if (((pFVar29 <= (FScriptContainerElement *)local_280) &&
          ((FScriptContainerElement *)local_280 < pFVar29 + (longlong)*piVar3 * 4)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar18 = (this->GameThreadInfo).ModulationVolume.ArrayNum;
      if (iVar18 == *piVar3) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar8->AllocatorInstance,piVar3);
      }
      (this->GameThreadInfo).ModulationVolume.ArrayNum = iVar18 + 1;
      *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_280[0];
    }
    uVar30 = uVar27;
    if (0 < this->NumTotalSources) {
      do {
        uVar25 = (uint)uVar27;
        uVar28 = 0;
        if ((int)uVar25 < *piVar1) {
          uVar28 = ~uVar25 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar29 = (this->SourceInfos).AllocatorInstance.Data;
        uVar28 = this->NumOutputFrames << 3;
        pFVar24 = pFVar29 + uVar30 + 0x38;
        if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
        }
        iVar18 = *(int *)(pFVar24 + 0xc);
        *(undefined4 *)&pFVar24[8].field_0x0 = 0;
        if (iVar18 < (int)uVar28) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar28,(ForAnyElementType *)pFVar24,0,(int *)(pFVar24 + 0xc));
        }
        pFVar24 = pFVar29 + uVar30 + 0x58;
        uVar28 = this->NumOutputFrames << 3;
        if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
        }
        iVar18 = *(int *)(pFVar24 + 0xc);
        *(undefined4 *)&pFVar24[8].field_0x0 = 0;
        if (iVar18 < (int)uVar28) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar28,(ForAnyElementType *)pFVar24,0,(int *)(pFVar24 + 0xc));
        }
        pFVar24 = pFVar29 + uVar30 + 0x68;
        uVar28 = this->NumOutputFrames << 3;
        if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
        }
        iVar18 = *(int *)(pFVar24 + 0xc);
        *(undefined4 *)&pFVar24[8].field_0x0 = 0;
        if (iVar18 < (int)uVar28) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar28,(ForAnyElementType *)pFVar24,0,(int *)(pFVar24 + 0xc));
        }
        pFVar29 = pFVar29 + uVar30 + 0x330;
        uVar28 = this->NumOutputFrames * 2;
        if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
        }
        iVar18 = *(int *)(pFVar29 + 0xc);
        *(undefined4 *)&pFVar29[8].field_0x0 = 0;
        if (iVar18 < (int)uVar28) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar28,(ForAnyElementType *)pFVar29,0,(int *)(pFVar29 + 0xc));
        }
        uVar27 = (ulonglong)(uVar25 + 1);
        uVar30 = uVar30 + 0x5d0;
      } while ((int)(uVar25 + 1) < this->NumTotalSources);
    }
    this->bUsingSpatializationPlugin = '\0';
    pFVar21 = FAudioDevice::GetCurrentSpatializationPluginInterfaceInfo
                        ((FAudioDevice *)this->MixerDevice,
                         (FAudioSpatializationInterfaceInfo *)(local_d0 + 0x18));
    FAudioDevice::FAudioSpatializationInterfaceInfo::operator=(&this->SpatialInterfaceInfo,pFVar21);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
    if ((this->SpatialInterfaceInfo).SpatializationPlugin.Object != (IAudioSpatialization *)0x0) {
      this->bUsingSpatializationPlugin = '\x01';
    }
    pTVar10 = *(TReferenceControllerBase<1> **)&this->MixerDevice->field_0xf8;
    pIVar11 = *(IAudioSourceDataOverride **)&this->MixerDevice->field_0xf0;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d0._8_8_ = (this->SourceDataOverridePlugin).Object;
    local_d0._16_8_ = (this->SourceDataOverridePlugin).SharedReferenceCount.ReferenceController;
    (this->SourceDataOverridePlugin).Object = pIVar11;
    (this->SourceDataOverridePlugin).SharedReferenceCount.ReferenceController = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d0._16_8_);
    if ((this->SourceDataOverridePlugin).Object != (IAudioSourceDataOverride *)0x0) {
      this->bUsingSourceDataOverridePlugin = '\x01';
    }
    uVar27 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_278 = (undefined1  [8])0x0;
      local_270.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_270.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_278,
                 (FWriteAccessScope *)&local_160);
      local_148 = &local_270;
      puVar22 = UE::Core::Private::DelegateAllocate(0x20,&local_270);
      if (puVar22 != (undefined8 *)0x0) {
        *puVar22 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar23 = FDelegateHandle::GenerateNewID();
        puVar22[2] = uVar23;
        *puVar22 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Audio::FMixerSourceManager::Init'::`2'::<lambda_1>_>
                    ::_vftable_;
        puVar22[3] = this;
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      FAutoConsoleCommand::FAutoConsoleCommand
                (&SpamNopsCmd,L"au.AudioThreadCommand.SpamCommandQueue",L"",
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_278,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_278,
                 (FWriteAccessScope *)&local_1c0);
      if ((local_270.DelegateSize != 0) &&
         (local_270.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_270.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_270,0,0,0x10);
        local_270.DelegateSize = 0;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      if (local_270.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_270.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_278);
      atexit(`Audio::FMixerSourceManager::Init'::__l2::_dynamic_atexit_destructor_for__SpamNopsCmd__
            );
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      local_260 = (undefined1  [8])0x0;
      local_258.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_258.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
                 (FWriteAccessScope *)&local_140);
      local_128 = &local_258;
      puVar22 = UE::Core::Private::DelegateAllocate(0x20,&local_258);
      if (puVar22 != (undefined8 *)0x0) {
        *puVar22 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar23 = FDelegateHandle::GenerateNewID();
        puVar22[2] = uVar23;
        *puVar22 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Audio::FMixerSourceManager::Init'::`2'::<lambda_2>_>
                    ::_vftable_;
        puVar22[3] = this;
      }
      if (local_140.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
      }
      FAutoConsoleCommand::FAutoConsoleCommand
                (&SpamEndlessCmd,L"au.AudioThreadCommand.ChokeCommandQueue",L"",
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_260,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
                 (FWriteAccessScope *)&local_1a8);
      if ((local_258.DelegateSize != 0) &&
         (local_258.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_258.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_258,0,0,0x10);
        local_258.DelegateSize = 0;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      if (local_258.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_258.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_260);
      atexit(`Audio::FMixerSourceManager::Init'::__l2::
             _dynamic_atexit_destructor_for__SpamEndlessCmd__);
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8) + 0x9d4c) <
         ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      local_248 = (undefined1  [8])0x0;
      local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_240.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                 (FWriteAccessScope *)&local_120);
      local_108 = &local_240;
      puVar22 = UE::Core::Private::DelegateAllocate(0x20,&local_240);
      if (puVar22 != (undefined8 *)0x0) {
        *puVar22 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar23 = FDelegateHandle::GenerateNewID();
        puVar22[2] = uVar23;
        *puVar22 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Audio::FMixerSourceManager::Init'::`2'::<lambda_3>_>
                    ::_vftable_;
        puVar22[3] = this;
      }
      if (local_120.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
      }
      FAutoConsoleCommand::FAutoConsoleCommand
                (&SpamEndlessCmdMPSC,L"au.AudioThreadCommand.ChokeMPSCCommandQueue",L"",
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_248,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                 (FWriteAccessScope *)&local_190);
      if ((local_240.DelegateSize != 0) &&
         (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_240,0,0,0x10);
        local_240.DelegateSize = 0;
      }
      if (local_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
      }
      if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_240.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_248);
      atexit(`Audio::FMixerSourceManager::Init'::__l2::
             _dynamic_atexit_destructor_for__SpamEndlessCmdMPSC__);
      _Init_thread_footer(&::_TSS2);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8) + 0x9d4c) <
         ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      local_230 = (undefined1  [8])0x0;
      local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_228.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
                 (FWriteAccessScope *)&local_100);
      local_e8 = &local_228;
      puVar22 = UE::Core::Private::DelegateAllocate(0x20,&local_228);
      if (puVar22 != (undefined8 *)0x0) {
        *puVar22 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar23 = FDelegateHandle::GenerateNewID();
        puVar22[2] = uVar23;
        *puVar22 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Audio::FMixerSourceManager::Init'::`2'::<lambda_4>_>
                    ::_vftable_;
        puVar22[3] = this;
      }
      if (local_100.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
      }
      FAutoConsoleCommand::FAutoConsoleCommand
                (&StallDiagnostics,L"au.AudioSourceManager.HangDiagnostics",L"",
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_230,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
                 (FWriteAccessScope *)&local_178);
      if ((local_228.DelegateSize != 0) &&
         (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_228.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_228,0,0,0x10);
        local_228.DelegateSize = 0;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      if (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_228.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_230);
      atexit(`Audio::FMixerSourceManager::Init'::__l2::
             _dynamic_atexit_destructor_for__StallDiagnostics__);
      _Init_thread_footer(&::_TSS3);
    }
    this->bInitialized = '\x01';
    LOCK();
    this->bPumpQueue = (FThreadSafeBool)0x0;
    UNLOCK();
    RegisterAudioBusEnvelopeFollowerCVars(this);
    TMulticastDelegateRegistration<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
    ::AddRaw<Audio::FMixerSourceManager>
              (&FTraceAuxiliary::OnTraceStarted,(FMixerSourceManager *)local_d0,(pmf_a67dccde)this);
  }
  return;
}

// InitSource @ 14650ad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::InitSource
          (FMixerSourceManager *this,int param_1,FMixerSourceVoiceInitParams *param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FName *pFVar8;
  code **ppcVar9;
  uint uVar10;
  undefined1 auStackY_478 [32];
  TArray<TSharedPtr<FSoundEffectSource,1>,TSizedDefaultAllocator<32>_> local_438;
  FModulationDestination local_428;
  FModulationDestination local_418;
  FModulationDestination local_408;
  FModulationDestination local_3f8;
  FSoundEffectSourceInitData local_3e8;
  FName local_3d0;
  FName local_3c8;
  FName local_3c0;
  FName local_3b8 [2];
  code *local_3a8 [2];
  code *local_398 [3];
  code **local_380;
  FMixerSourceManager *local_378;
  int local_370;
  FMixerSourceVoiceInitParams local_368;
  FModulationDestination local_a0;
  FModulationDestination local_90;
  FModulationDestination local_80;
  FModulationDestination local_70;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  if (this->NumTotalSources <= param_1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959094>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x476,"SourceId < NumTotalSources");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar6 = uVar10;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959095>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x477,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = 0;
  if (param_1 < (this->GameThreadInfo).bIsDebugMode.ArrayNum) {
    uVar6 = uVar10;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsDebugMode.AllocatorInstance.Data[param_1] !=
      (FScriptContainerElement)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959096>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x478,"!GameThreadInfo.bIsDebugMode[SourceId]");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->SourceListener == (ISourceListener *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959097>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x479,"InitParams.SourceListener != nullptr");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar5 = IsInAudioThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (FScriptContainerElement)param_2->bIsDebugMode;
  uVar7 = 0;
  uVar6 = uVar7;
  if (param_1 < (this->GameThreadInfo).bIsDebugMode.ArrayNum) {
    uVar6 = uVar10;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->GameThreadInfo).bIsDebugMode.AllocatorInstance.Data[param_1] = FVar1;
  uVar6 = uVar7;
  if (param_1 < (this->GameThreadInfo).bNeedsSpeakerMap.ArrayNum) {
    uVar6 = uVar10;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->GameThreadInfo).bNeedsSpeakerMap.AllocatorInstance.Data[param_1] =
       (FScriptContainerElement)0x1;
  FVar1 = (FScriptContainerElement)param_2->bUseHRTFSpatialization;
  if (param_1 < (this->GameThreadInfo).bIsUsingHRTFSpatializer.ArrayNum) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_3e8.ParentPresetUniqueId = 0xffffffff;
  (this->GameThreadInfo).bIsUsingHRTFSpatializer.AllocatorInstance.Data[param_1] = FVar1;
  local_3e8.NumSourceChannels = param_2->NumInputChannels;
  local_3e8.SampleRate = (float)*(int *)&this->MixerDevice->field_0x84;
  local_3e8.AudioClock = (double)(**(code **)(*(longlong *)this->MixerDevice + 0x100))();
  local_3e8.AudioDeviceId = *(uint *)&this->MixerDevice->field_0xa0;
  local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.ArrayNum = 0;
  local_438.ArrayMax = 0;
  BuildSourceEffectChain(this,param_1,&local_3e8,&param_2->SourceEffectChain,&local_438);
  FModulationDestination::FModulationDestination(&local_3f8);
  pFVar8 = ::FName::FName(&local_3d0,"Volume");
  FModulationDestination::Init
            (&local_3f8,*(uint *)&this->MixerDevice->field_0xa0,*pFVar8,false,true);
  FModulationDestination::UpdateModulators
            (&local_3f8,&(param_2->ModulationSettings).VolumeModulationDestination.Modulators);
  FModulationDestination::FModulationDestination(&local_408);
  pFVar8 = ::FName::FName(&local_3c8,"Pitch");
  FModulationDestination::Init
            (&local_408,*(uint *)&this->MixerDevice->field_0xa0,*pFVar8,false,false);
  FModulationDestination::UpdateModulators
            (&local_408,&(param_2->ModulationSettings).PitchModulationDestination.Modulators);
  FModulationDestination::FModulationDestination(&local_418);
  pFVar8 = ::FName::FName(&local_3c0,"HPFCutoffFrequency");
  FModulationDestination::Init
            (&local_418,*(uint *)&this->MixerDevice->field_0xa0,*pFVar8,false,false);
  FModulationDestination::UpdateModulators
            (&local_418,&(param_2->ModulationSettings).HighpassModulationDestination.Modulators);
  FModulationDestination::FModulationDestination(&local_428);
  pFVar8 = ::FName::FName(local_3b8,"LPFCutoffFrequency");
  FModulationDestination::Init
            (&local_428,*(uint *)&this->MixerDevice->field_0xa0,*pFVar8,false,false);
  FModulationDestination::UpdateModulators
            (&local_428,&(param_2->ModulationSettings).LowpassModulationDestination.Modulators);
  local_378 = this;
  local_370 = param_1;
  FMixerSourceVoiceInitParams::FMixerSourceVoiceInitParams(&local_368,param_2);
  FModulationDestination::FModulationDestination(&local_a0,&local_3f8);
  FModulationDestination::FModulationDestination(&local_90,&local_418);
  FModulationDestination::FModulationDestination(&local_80,&local_428);
  FModulationDestination::FModulationDestination(&local_70,&local_408);
  FVar3.Data = local_438.AllocatorInstance.Data;
  iVar4 = local_438.ArrayNum;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = CONCAT44(local_58._4_4_,local_438.ArrayNum);
  if (local_438.ArrayNum == 0) {
    local_58 = local_438._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_438.ArrayNum,0,&local_60,local_438.ArrayNum,
               (int *)((longlong)&local_58 + 4));
    ConstructItems<TSharedPtr<FSoundEffectSource,1>,TSharedPtr<FSoundEffectSource,1>,int>
              (local_60.Data,(TSharedPtr<FSoundEffectSource,1> *)FVar3.Data,iVar4);
  }
  local_3a8[0] = (code *)0x0;
  ppcVar9 = FMemory::Malloc(0x330,8);
  *ppcVar9 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`Audio::FMixerSourceManager::InitSource'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar9[1] = (code *)local_378;
  *(int *)(ppcVar9 + 2) = local_370;
  local_380 = ppcVar9;
  FMixerSourceVoiceInitParams::FMixerSourceVoiceInitParams
            ((FMixerSourceVoiceInitParams *)(ppcVar9 + 3),&local_368);
  FModulationDestination::FModulationDestination
            ((FModulationDestination *)(ppcVar9 + 0x5c),&local_a0);
  FModulationDestination::FModulationDestination
            ((FModulationDestination *)(ppcVar9 + 0x5e),&local_90);
  FModulationDestination::FModulationDestination
            ((FModulationDestination *)(ppcVar9 + 0x60),&local_80);
  FModulationDestination::FModulationDestination
            ((FModulationDestination *)(ppcVar9 + 0x62),&local_70);
  ppcVar9[100] = (code *)0x0;
  ppcVar9[100] = (code *)local_60.Data;
  local_60.Data = (FScriptContainerElement *)0x0;
  *(int *)(ppcVar9 + 0x65) = (int)local_58;
  *(undefined4 *)((longlong)ppcVar9 + 0x32c) = local_58._4_4_;
  if (ppcVar9 + 1 != (code **)0x0) {
    local_3a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Audio::FMixerSourceManager::InitSource'::__l2::<lambda_1>,void>
                   ::Call;
  }
  local_58 = 0;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_3a8,(char *)0x0,false);
  if (local_3a8[0] != (code *)0x0) {
    ppcVar9 = local_3a8 + 2;
    if (local_380 != (code **)0x0) {
      ppcVar9 = local_380;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
            ((TSharedPtr<FSoundEffectSource,1> *)local_60.Data,(int)local_58);
  if ((TSharedPtr<FSoundEffectSource,1> *)local_60.Data != (TSharedPtr<FSoundEffectSource,1> *)0x0)
  {
    FMemory::Free(local_60.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.DestinationData.SharedReferenceCount.ReferenceController);
  FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(&local_368);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_428.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_408.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.DestinationData.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
            ((TSharedPtr<FSoundEffectSource,1> *)local_438.AllocatorInstance.Data,local_438.ArrayNum
            );
  if ((TSharedPtr<FSoundEffectSource,1> *)local_438.AllocatorInstance.Data !=
      (TSharedPtr<FSoundEffectSource,1> *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  return;
}

// IsAudioBusActive @ 14650e490

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerSourceManager::IsAudioBusActive(FMixerSourceManager *this,FAudioBusKey param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  uint uStackX_14;
  
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar5 = (this->AudioBusKeys_AudioThread).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->AudioBusKeys_AudioThread).ArrayNum * 8;
  if (pFVar5 != pFVar1) {
    uStackX_14 = param_1.InstanceId;
    do {
      if ((*(uint *)pFVar5 == param_1.ObjectId) && (*(uint *)(pFVar5 + 4) == uStackX_14)) {
        return true;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1);
  }
  return false;
}

// IsSourceBus @ 14650f280

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceManager::IsSourceBus(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(int *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_1 * 0x5d0 + 0xe0) !=
         -1;
}

// IsUsingHRTFSpatializer @ 14650f340

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerSourceManager::IsUsingHRTFSpatializer(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->GameThreadInfo).bIsUsingHRTFSpatializer.ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->GameThreadInfo).bIsUsingHRTFSpatializer.AllocatorInstance.Data[param_1];
}

// LogCallstack @ 146510cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::LogCallstack(FMixerSourceManager *this,uint param_1)

{
  size_t sVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_10138;
  char acStack_10018 [65552];
  
  if (param_1 != 0xffffffff) {
    memset(acStack_10018,0,0x10000);
    FWindowsPlatformStackWalk::ThreadStackWalkAndDump(acStack_10018,0x10000,0,param_1);
    if (2 < (byte)LogAudioMixer._0_1_) {
      TStack_10138._padding_ = 0;
      sVar1 = strlen(acStack_10018);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_10138,acStack_10018,(int)sVar1,Yes);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if ((void *)TStack_10138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_10138._padding_);
      }
    }
  }
  return;
}

// LogCallstacks @ 146510de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::LogCallstacks(FMixerSourceManager *this)

{
  LogCallstack(this,this->AudioRenderThreadId);
  return;
}

// LogInflightAsyncTasks @ 146510df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::LogInflightAsyncTasks(FMixerSourceManager *this)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_98;
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  FName local_80;
  float fStack_78;
  char cStack_74;
  byte bStack_73;
  undefined2 uStack_72;
  FName local_70;
  float fStack_68;
  char cStack_64;
  byte bStack_63;
  undefined2 uStack_62;
  FString local_60 [2];
  
  pFVar9 = (this->SourceInfos).AllocatorInstance.Data;
  iVar1 = (this->SourceInfos).ArrayNum;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x5d0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  while( true ) {
    if ((this->SourceInfos).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSourceManager::FSourceInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    lVar7 = *(longlong *)(pFVar9 + 0x10);
    if (lVar7 != 0) {
      fStack_78 = 0.0;
      cStack_74 = *(longlong *)(lVar7 + 0x70) != 0;
      local_80 = *(FName *)(lVar7 + 0xb0);
      bStack_73 = (byte)(*(uint *)(lVar7 + 0x128) >> 5) & 1;
      if (*(longlong *)(lVar7 + 0x70) != 0) {
        QueryPerformanceCounter(&local_res20);
        fStack_78 = (float)((double)(local_res20.s.LowPart - *(int *)(lVar7 + 0xb8)) *
                           FGenericPlatformTime::SecondsPerCycle);
      }
      if (cStack_74 != '\0') {
        if (((local_90.Data <= &local_80) &&
            (&local_80 < (FName *)(local_90.Data + (longlong)iStack_84 * 0x10))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_88 == iStack_84) {
          local_88 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&local_90,&iStack_84);
        }
        lVar7 = (longlong)local_88;
        FVar3.Number._0_1_ = cStack_74;
        FVar3.ComparisonIndex.Value = (uint)fStack_78;
        FVar3.Number._1_1_ = bStack_73;
        FVar3.Number._2_2_ = uStack_72;
        local_88 = local_88 + 1;
        *(FName *)(local_90.Data + lVar7 * 0x10) = local_80;
        ((FName *)(local_90.Data + lVar7 * 0x10))[1] = FVar3;
      }
    }
    pFVar9 = pFVar9 + 0x5d0;
  }
  iVar1 = (this->PendingSourceBuffers).ArrayNum;
  pFVar9 = (this->PendingSourceBuffers).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PendingSourceBuffers).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSourceBuffer,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    iVar5 = local_88;
    if (pFVar9 == pFVar8) break;
    lVar7 = *(longlong *)pFVar9;
    local_70.ComparisonIndex.Value = 0;
    local_70.Number = 0;
    fStack_68 = 0.0;
    cStack_64 = '\0';
    bStack_63 = 0;
    if (lVar7 != 0) {
      cStack_64 = *(longlong *)(lVar7 + 0x70) != 0;
      local_70 = *(FName *)(lVar7 + 0xb0);
      bStack_63 = (byte)(*(uint *)(lVar7 + 0x128) >> 5) & 1;
      if (*(longlong *)(lVar7 + 0x70) != 0) {
        QueryPerformanceCounter(&local_98);
        fStack_68 = (float)((double)(local_98.s.LowPart - *(int *)(lVar7 + 0xb8)) *
                           FGenericPlatformTime::SecondsPerCycle);
      }
      if (cStack_64 != '\0') {
        if (((local_90.Data <= &local_70) &&
            (&local_70 < (FName *)(local_90.Data + (longlong)iStack_84 * 0x10))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_88 == iStack_84) {
          local_88 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&local_90,&iStack_84);
        }
        lVar7 = (longlong)local_88;
        FVar4.Number._0_1_ = cStack_64;
        FVar4.ComparisonIndex.Value = (uint)fStack_68;
        FVar4.Number._1_1_ = bStack_63;
        FVar4.Number._2_2_ = uStack_62;
        local_88 = local_88 + 1;
        *(FName *)(local_90.Data + lVar7 * 0x10) = local_70;
        ((FName *)(local_90.Data + lVar7 * 0x10))[1] = FVar4;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  pFVar10 = (FName *)(local_90.Data + (longlong)local_88 * 0x10);
  this_00.Data = local_90.Data;
  while( true ) {
    if (local_88 != iVar5) {
      `TCheckedPointerIterator<Audio::FMixerSourceBuffer::FDiagnosticState,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if ((FName *)this_00.Data == pFVar10) break;
    if (2 < (byte)LogAudioMixer._0_1_) {
      ::FName::ToString((FName *)this_00.Data,local_60);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
    }
    this_00.Data = this_00.Data + 0x10;
  }
  if ((FName *)local_90.Data != (FName *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// LogRenderThreadStall @ 1465111f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::LogRenderThreadStall(FMixerSourceManager *this)

{
  char *_Str;
  wchar_t *pwVar1;
  size_t sVar2;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  LARGE_INTEGER local_178;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178.s.LowPart = 0;
  if ((this->RenderThreadPhase == (atomic<ESourceManagerRenderThreadPhase>)0x1) ||
     (this->RenderThreadPhase == (atomic<ESourceManagerRenderThreadPhase>)0x2)) {
    AcquireSRWLockShared((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
    if (2 < (byte)LogAudioMixer._0_1_) {
      pwVar1 = ::LexToString((ESourceManagerRenderThreadPhase)this->RenderThreadPhase);
      QueryPerformanceCounter(&local_178);
      _Str = (this->CurrentlyExecuteingCmd).DebugString;
      if (_Str == (char *)0x0) {
        local_158.Ptr = L"";
      }
      else {
        local_158._padding_ = 0;
        sVar2 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar2,Yes);
      }
      ::FString::FString(&local_170,local_158.Ptr);
      if ((_Str != (char *)0x0) && ((void *)local_158._padding_ != (void *)0x0)) {
        FMemory::Free((void *)local_158._padding_);
      }
      local_188 = pwVar1;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
  }
  else if (2 < (byte)LogAudioMixer._0_1_) {
    ::LexToString((ESourceManagerRenderThreadPhase)this->RenderThreadPhase);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  return;
}

// MixOutputBuffers @ 1465120f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::MixOutputBuffers
          (FMixerSourceManager *this,int param_1,int param_2,float param_3,
          EMixerSourceSubmixSendStage param_4,TArray<float,TAlignedHeapAllocator<16>_> *param_5)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  if (0.0 < param_3) {
    uVar5 = 0;
    if (param_1 < (this->SourceInfos).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->SourceInfos).AllocatorInstance.Data;
    lVar6 = (longlong)param_1 * 0x5d0;
    FVar1 = pFVar2[lVar6 + 0x520];
    if (((((byte)FVar1 & 0x30) == 0) && (((byte)pFVar2[lVar6 + 0x521] & 0x40) == 0)) &&
       (((byte)FVar1 & 8) != 0)) {
      uVar5 = 0;
      if (param_1 < (this->SourceSubmixOutputBuffers).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMixerSourceSubmixOutputBuffer::MixOutput
                ((FMixerSourceSubmixOutputBuffer *)
                 ((this->SourceSubmixOutputBuffers).AllocatorInstance.Data +
                 (longlong)param_1 * 0x330),param_3,param_4,param_5);
    }
  }
  return;
}

// NeedsSpeakerMap @ 146512220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceManager::NeedsSpeakerMap(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->GameThreadInfo).bNeedsSpeakerMap.ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->GameThreadInfo).bNeedsSpeakerMap.AllocatorInstance.Data[param_1];
}

// OnStartAudioBusEnvelopeFollowerCVarChanged @ 146513e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged
          (FMixerSourceManager *this,IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  wchar_t *_Str;
  void *local_58 [4];
  code *local_38 [2];
  undefined **local_28;
  FMixerSourceManager *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160958441>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x1e9,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != (IConsoleVariable *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0xd8))(param_1,local_58);
    if (*(int *)(puVar3 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*puVar3;
    }
    lVar4 = _wtoi64(_Str);
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_14 = local_58[3]._4_4_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::OnStartAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,void>
                  ::Call;
    local_20 = this;
    local_18 = (int)lVar4;
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// OnStopAudioBusEnvelopeFollowerCVarChanged @ 146514040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged
          (FMixerSourceManager *this,IConsoleVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  wchar_t *_Str;
  void *local_58 [4];
  code *local_38 [2];
  undefined **local_28;
  FMixerSourceManager *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160958457>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x1f9,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != (IConsoleVariable *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0xd8))(param_1,local_58);
    if (*(int *)(puVar3 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*puVar3;
    }
    lVar4 = _wtoi64(_Str);
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_14 = local_58[3]._4_4_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::OnStopAudioBusEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,void>
                  ::Call;
    local_20 = this;
    local_18 = (int)lVar4;
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// OnTraceStarted @ 146514250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::OnTraceStarted
          (FMixerSourceManager *this,EConnectionType param_1,FString *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->AudioBuses).field_0x10;
  iVar3 = *(int *)&(this->AudioBuses).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->AudioBuses).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1465142fd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar13 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1465142fd:
  uVar10 = *(uint *)&(this->AudioBuses).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AudioBuses).field_0x8 -
                       *(int *)&(this->AudioBuses).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->AudioBuses).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->AudioBuses).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146514400;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_146514400:
  while( true ) {
    if (*(int *)&(this->AudioBuses).field_0x8 - *(int *)&(this->AudioBuses).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)
             ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 + *(longlong *)&this->AudioBuses);
    if (lVar8 != 0) {
      TraceAudioBusStartMessage
                (*(uint *)&this->MixerDevice->field_0xa0,
                 *(uint *)((longlong)TStack_60.CurrentBitIndex * 0x20 +
                          *(longlong *)&this->AudioBuses),(FString *)(lVar8 + 0x198),
                 *(int *)(lVar8 + 0x5c));
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Pause @ 1465144e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::Pause(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_48 [2];
  undefined **local_38;
  FMixerSourceManager *local_30;
  int local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959749>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x705,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959750>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x706,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::Pause'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::Pause'::__l2::<lambda_1>,void>::Call
  ;
  local_30 = this;
  local_28 = param_1;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48,"Pause()",false);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// PauseSoundForQuantizationCommand @ 146514a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::PauseSoundForQuantizationCommand(FMixerSourceManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (this->NumTotalSources <= param_1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160961648>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0xe70,"SourceId < NumTotalSources");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  uVar4 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SourceInfos).AllocatorInstance.Data;
  pFVar1[(longlong)param_1 * 0x5d0 + 0x520] =
       (FScriptContainerElement)((byte)pFVar1[(longlong)param_1 * 0x5d0 + 0x520] & 0xfb | 0x20);
  return;
}

// Play @ 146514fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::Play(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_48 [2];
  undefined **local_38;
  FMixerSourceManager *local_30;
  int local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959606>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x676,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959607>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x677,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::Play'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::Play'::__l2::<lambda_1>,void>::Call;
  local_30 = this;
  local_28 = param_1;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48,"Play()",false);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// PumpCommandQueue @ 146516070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::PumpCommandQueue(FMixerSourceManager *this)

{
  FAudioMixerThreadCommand *pFVar1;
  int iVar2;
  atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*> aVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  char cVar19;
  ushort uVar20;
  DWORD DVar21;
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  FScriptContainerElement *pFVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  longlong *plVar28;
  int *piVar29;
  longlong lVar30;
  TArray<Audio::FMixerSourceManager::FAudioMixerThreadCommand,TSizedDefaultAllocator<32>_> *pTVar31;
  uint uVar32;
  bool bVar33;
  longlong local_res20;
  ForAnyElementType local_198;
  undefined8 local_190;
  undefined1 local_188 [48];
  bool local_158;
  char *local_150;
  ulong64 local_148;
  bool local_138;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118 [2];
  longlong local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 local_d8;
  char *local_d0;
  ulong64 local_c8;
  char local_b8;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78;
  char *local_70;
  ulong64 local_68;
  char local_58;
  
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3994,"AudioMixerThreadCommands::PumpCommandQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
               ,0xf9a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3994);
  }
  DVar21 = GetCurrentThreadId();
  this->AudioRenderThreadId = DVar21;
  bVar18 = FGenericPlatformProcess::SupportsMultithreading();
  if ((!bVar18) ||
     (cVar19 = (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x20))
                         (this->CommandsProcessedEvent,0), cVar19 == '\0')) {
    LOCK();
    this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x1;
    UNLOCK();
    TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::Dequeue
              (&this->MpscCommandQueue,
               (TOptional<Audio::FMixerSourceManager::FAudioMixerThreadCommand> *)local_188);
    uVar32 = 0;
    while (local_138 != false) {
      AcquireSRWLockExclusive((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
      if ((local_138 == false) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar30 = *(longlong *)&(this->CurrentlyExecuteingCmd).Function;
      uVar5 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x8;
      uVar6 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0xc;
      uVar16 = *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function.field_0x10;
      uVar17 = *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function.field_0x18;
      uVar24 = *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function.field_0x20;
      plVar28 = *(longlong **)&(this->CurrentlyExecuteingCmd).Function.field_0x28;
      *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function = local_188._0_8_;
      *(ulonglong *)&(this->CurrentlyExecuteingCmd).Function.field_0x8 =
           CONCAT44(local_188._12_4_,local_188._8_4_);
      *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x10 = local_188._16_4_;
      *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x14 = local_188._20_4_;
      *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x18 = local_188._24_4_;
      *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x1c = local_188._28_4_;
      *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x20 = local_188._32_4_;
      *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x24 = local_188._36_4_;
      *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x28 = local_188._40_4_;
      *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x2c = local_188._44_4_;
      (this->CurrentlyExecuteingCmd).bDeferExecution = local_158;
      (this->CurrentlyExecuteingCmd).DebugString = local_150;
      (this->CurrentlyExecuteingCmd).StartExecuteTimeInCycles = local_148;
      local_188._0_8_ = lVar30;
      local_188._8_4_ = uVar5;
      local_188._12_4_ = uVar6;
      local_188._16_8_ = uVar16;
      local_188._24_8_ = uVar17;
      local_188._32_8_ = uVar24;
      local_188._40_8_ = plVar28;
      ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
      AcquireSRWLockShared((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
      QueryPerformanceCounter(&local_128);
      (this->CurrentlyExecuteingCmd).StartExecuteTimeInCycles = (ulong64)local_128;
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->CurrentlyExecuteingCmd).Function)
      ;
      plVar28 = *(longlong **)&(this->CurrentlyExecuteingCmd).Function.field_0x28;
      pcVar4 = *(code **)&(this->CurrentlyExecuteingCmd).Function;
      plVar27 = (longlong *)&(this->CurrentlyExecuteingCmd).Function.field_0x10;
      if (plVar28 != (longlong *)0x0) {
        plVar27 = plVar28;
      }
      uVar24 = (**(code **)(*plVar27 + 8))();
      (*pcVar4)(uVar24);
      (this->CurrentlyExecuteingCmd).StartExecuteTimeInCycles = 0;
      ReleaseSRWLockShared((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
      aVar3 = ((this->MpscCommandQueue).Tail)->Next;
      if (aVar3 == (atomic<TMpscQueue<Audio::FMixerSourceManager::FAudioMixerThreadCommand,FMemory>::FNode_*>
                    )0x0) {
        local_b8 = '\0';
      }
      else {
        local_a8 = *(longlong *)((longlong)aVar3 + 0x10);
        local_80 = *(longlong **)((longlong)aVar3 + 0x38);
        *(undefined8 *)((longlong)aVar3 + 0x38) = 0;
        local_98 = *(undefined4 *)((longlong)aVar3 + 0x20);
        uStack_94 = *(undefined4 *)((longlong)aVar3 + 0x24);
        uStack_90 = *(undefined4 *)((longlong)aVar3 + 0x28);
        uStack_8c = *(undefined4 *)((longlong)aVar3 + 0x2c);
        local_88 = *(undefined8 *)((longlong)aVar3 + 0x30);
        if (local_a8 != 0) {
          *(undefined8 *)((longlong)aVar3 + 0x10) = 0;
        }
        local_78 = *(undefined1 *)((longlong)aVar3 + 0x40);
        local_70 = *(char **)((longlong)aVar3 + 0x48);
        local_68 = *(ulong64 *)((longlong)aVar3 + 0x50);
        local_58 = '\x01';
        if (*(longlong *)((longlong)aVar3 + 0x10) != 0) {
          plVar28 = *(longlong **)((longlong)aVar3 + 0x38);
          if (*(longlong **)((longlong)aVar3 + 0x38) == (longlong *)0x0) {
            plVar28 = (longlong *)((longlong)aVar3 + 0x20);
          }
          (**(code **)(*plVar28 + 0x10))();
        }
        FMemory::Free((this->MpscCommandQueue).Tail);
        (this->MpscCommandQueue).Tail = (FNode *)aVar3;
        local_b8 = local_58;
        if (local_58 != '\0') {
          local_108 = local_a8;
          local_e0 = local_80;
          local_80 = (longlong *)0x0;
          local_f8 = local_98;
          uStack_f4 = uStack_94;
          uStack_f0 = uStack_90;
          uStack_ec = uStack_8c;
          local_e8 = local_88;
          if (local_a8 != 0) {
            local_a8 = 0;
          }
          local_d8 = local_78;
          local_d0 = local_70;
          local_c8 = local_68;
          if (local_a8 != 0) {
            (**(code **)(CONCAT44(uStack_94,local_98) + 0x10))(&local_98);
          }
        }
      }
      if (local_b8 == '\0') {
        if (local_138 != false) {
          if (local_188._0_8_ != 0) {
            plVar28 = (longlong *)(local_188 + 0x10);
            if ((longlong *)local_188._40_8_ != (longlong *)0x0) {
              plVar28 = (longlong *)local_188._40_8_;
            }
            (**(code **)(*plVar28 + 0x10))();
          }
          local_138 = false;
          goto LAB_14651640c;
        }
      }
      else {
        if ((local_138 != false) && (local_188._0_8_ != 0)) {
          plVar28 = (longlong *)(local_188 + 0x10);
          if ((longlong *)local_188._40_8_ != (longlong *)0x0) {
            plVar28 = (longlong *)local_188._40_8_;
          }
          (**(code **)(*plVar28 + 0x10))();
        }
        local_188._20_4_ = uStack_f4;
        local_188._16_4_ = local_f8;
        local_188._28_4_ = uStack_ec;
        local_188._24_4_ = uStack_f0;
        local_188._0_8_ = local_108;
        local_188._40_8_ = local_e0;
        local_e0 = (longlong *)0x0;
        local_188._32_8_ = local_e8;
        if (local_108 != 0) {
          local_108 = 0;
        }
        local_158 = (bool)local_d8;
        local_150 = local_d0;
        local_148 = local_c8;
        local_138 = true;
LAB_14651640c:
      }
      if ((local_b8 != '\0') && (local_108 != 0)) {
        plVar28 = (longlong *)&local_f8;
        if (local_e0 != (longlong *)0x0) {
          plVar28 = local_e0;
        }
        (**(code **)(*plVar28 + 0x10))();
      }
    }
    iVar2 = (this->RenderThreadCommandBufferIndex).Counter;
    iVar23 = this->CommandBuffers[iVar2].SourceCommandQueue.ArrayNum;
    lVar30 = (longlong)iVar23;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      __TraceCounter4030.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"AudioMixerThreadCommands::NumCommandsToExecute",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter4030.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(`Audio::FMixerSourceManager::PumpCommandQueue'::__l2::
             _dynamic_atexit_destructor_for____TraceCounter4030__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((__TraceCounter4030.Value != lVar30) &&
       (__TraceCounter4030.Value = lVar30, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter4030.CounterId == (atomic<unsigned_int>)0x0) {
        uVar20 = FCountersTrace::OutputInitCounter
                           (__TraceCounter4030.CounterName,TraceCounterType_Int,
                            __TraceCounter4030.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter4030.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter4030.CounterId._2_2_ = 0;
          __TraceCounter4030.CounterId._0_2_ = uVar20;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter4030.CounterId._0_2_,__TraceCounter4030.Value);
    }
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    LOCK();
    this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x2;
    UNLOCK();
    if (0 < iVar23) {
      pFVar1 = &this->CurrentlyExecuteingCmd;
      local_res20 = 0;
      do {
        AcquireSRWLockExclusive((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
        uVar22 = 0;
        if ((int)uVar32 < this->CommandBuffers[iVar2].SourceCommandQueue.ArrayNum) {
          uVar22 = ~uVar32 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar5 = *(undefined4 *)&pFVar1->Function;
        uVar6 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x4;
        uVar7 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x8;
        uVar8 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0xc;
        uVar9 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x10;
        uVar10 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x14;
        uVar11 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x18;
        uVar12 = *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x1c;
        uVar24 = *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function.field_0x20;
        uVar16 = *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function.field_0x28;
        pFVar25 = this->CommandBuffers[iVar2].SourceCommandQueue.AllocatorInstance.Data +
                  local_res20;
        uVar17 = *(undefined8 *)(pFVar25 + 8);
        *(undefined8 *)&pFVar1->Function = *(undefined8 *)pFVar25;
        *(undefined8 *)&(this->CurrentlyExecuteingCmd).Function.field_0x8 = uVar17;
        uVar13 = *(undefined4 *)(pFVar25 + 0x14);
        uVar14 = *(undefined4 *)(pFVar25 + 0x18);
        uVar15 = *(undefined4 *)(pFVar25 + 0x1c);
        *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x10 =
             *(undefined4 *)(pFVar25 + 0x10);
        *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x14 = uVar13;
        *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x18 = uVar14;
        *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x1c = uVar15;
        uVar13 = *(undefined4 *)(pFVar25 + 0x24);
        uVar14 = *(undefined4 *)(pFVar25 + 0x28);
        uVar15 = *(undefined4 *)(pFVar25 + 0x2c);
        *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x20 =
             *(undefined4 *)(pFVar25 + 0x20);
        *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x24 = uVar13;
        *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x28 = uVar14;
        *(undefined4 *)&(this->CurrentlyExecuteingCmd).Function.field_0x2c = uVar15;
        *(undefined4 *)pFVar25 = uVar5;
        *(undefined4 *)(pFVar25 + 4) = uVar6;
        *(undefined4 *)(pFVar25 + 8) = uVar7;
        *(undefined4 *)(pFVar25 + 0xc) = uVar8;
        *(undefined4 *)(pFVar25 + 0x10) = uVar9;
        *(undefined4 *)(pFVar25 + 0x14) = uVar10;
        *(undefined4 *)(pFVar25 + 0x18) = uVar11;
        *(undefined4 *)(pFVar25 + 0x1c) = uVar12;
        *(undefined8 *)(pFVar25 + 0x20) = uVar24;
        *(undefined8 *)(pFVar25 + 0x28) = uVar16;
        (this->CurrentlyExecuteingCmd).bDeferExecution = (bool)pFVar25[0x30];
        (this->CurrentlyExecuteingCmd).DebugString = *(char **)(pFVar25 + 0x38);
        (this->CurrentlyExecuteingCmd).StartExecuteTimeInCycles = *(ulong64 *)(pFVar25 + 0x40);
        ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
        AcquireSRWLockShared((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
        if ((this->CurrentlyExecuteingCmd).bDeferExecution == false) {
          QueryPerformanceCounter(&local_120);
          (this->CurrentlyExecuteingCmd).StartExecuteTimeInCycles = (ulong64)local_120;
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->Function);
          plVar28 = *(longlong **)&(this->CurrentlyExecuteingCmd).Function.field_0x28;
          pcVar4 = *(code **)&pFVar1->Function;
          plVar27 = (longlong *)&(this->CurrentlyExecuteingCmd).Function.field_0x10;
          if (plVar28 != (longlong *)0x0) {
            plVar27 = plVar28;
          }
          uVar24 = (**(code **)(*plVar27 + 8))();
          (*pcVar4)(uVar24);
          (this->CurrentlyExecuteingCmd).StartExecuteTimeInCycles = 0;
        }
        else {
          (this->CurrentlyExecuteingCmd).bDeferExecution = false;
          if (((local_198.Data <= pFVar1) &&
              (pFVar1 < local_198.Data + (longlong)local_190._4_4_ * 0x50)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar23 = (int)local_190;
          if ((int)local_190 == local_190._4_4_) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1050,&local_198,(int *)((longlong)&local_190 + 4));
          }
          local_190 = CONCAT44(local_190._4_4_,iVar23 + 1);
          pFVar25 = local_198.Data + (longlong)iVar23 * 0x50;
          *(undefined8 *)&pFVar25->field_0x0 = *(undefined8 *)&pFVar1->Function;
          *(undefined8 *)(pFVar25 + 0x28) = 0;
          if (*(longlong *)&pFVar25->field_0x0 != 0) {
            puVar26 = *(undefined8 **)&(this->CurrentlyExecuteingCmd).Function.field_0x28;
            if (puVar26 == (undefined8 *)0x0) {
              puVar26 = (undefined8 *)&(this->CurrentlyExecuteingCmd).Function.field_0x10;
            }
            (**(code **)*puVar26)();
          }
          pFVar25[0x30] = (FScriptContainerElement)(this->CurrentlyExecuteingCmd).bDeferExecution;
          *(char **)(pFVar25 + 0x38) = (this->CurrentlyExecuteingCmd).DebugString;
          *(ulong64 *)(pFVar25 + 0x40) = (this->CurrentlyExecuteingCmd).StartExecuteTimeInCycles;
        }
        ReleaseSRWLockShared((PSRWLOCK)&this->CurrentlyExecutingCmdLock);
        LOCK();
        (this->NumCommands).Counter = (this->NumCommands).Counter + -1;
        UNLOCK();
        LOCK();
        __GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value =
             (atomic<__int64>)
             ((longlong)__GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value + -1);
        UNLOCK();
        if (-1 < CountersChannel->Enabled) {
          if (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId ==
              (atomic<unsigned_int>)0x0) {
            uVar20 = FCountersTrace::OutputInitCounter
                               (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterName,
                                TraceCounterType_Int,
                                __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterFlags &
                                0xf);
            LOCK();
            if (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId ==
                (atomic<unsigned_int>)0x0) {
              __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._2_2_ = 0;
              __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._0_2_ = uVar20;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._0_2_,
                     (long64)__GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value);
        }
        uVar32 = uVar32 + 1;
        local_res20 = local_res20 + 0x50;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    QueryPerformanceCounter(local_118);
    LOCK();
    this->LastPumpCompleteTimeInCycles = (atomic<unsigned___int64>)local_118[0];
    UNLOCK();
    pTVar31 = &this->CommandBuffers[iVar2].SourceCommandQueue;
    if (pTVar31 !=
        (TArray<Audio::FMixerSourceManager::FAudioMixerThreadCommand,TSizedDefaultAllocator<32>_> *)
        &local_198) {
      DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int>
                ((FAudioMixerThreadCommand *)(pTVar31->AllocatorInstance).Data,
                 this->CommandBuffers[iVar2].SourceCommandQueue.ArrayNum);
      pFVar25 = (pTVar31->AllocatorInstance).Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
      (pTVar31->AllocatorInstance).Data = local_198.Data;
      local_198.Data = (FScriptContainerElement *)0x0;
      this->CommandBuffers[iVar2].SourceCommandQueue.ArrayNum = (int)local_190;
      this->CommandBuffers[iVar2].SourceCommandQueue.ArrayMax = local_190._4_4_;
      local_190 = 0;
    }
    piVar29 = &this->CommandBuffers[iVar2].SourceCommandQueue.ArrayMax;
    uVar32 = 10000;
    if (CommandBufferInitialCapacityCvar < 10000) {
      uVar32 = CommandBufferInitialCapacityCvar;
    }
    uVar22 = 0;
    if (0 < (int)uVar32) {
      uVar22 = uVar32;
    }
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if (*piVar29 < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,uVar22,&pTVar31->AllocatorInstance,
                 this->CommandBuffers[iVar2].SourceCommandQueue.ArrayNum,piVar29);
    }
    bVar18 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar18) {
      if ((this->CommandsProcessedEvent == (FEvent *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("CommandsProcessedEvent != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                              ,0xfe4,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x10))();
    }
    else {
      LOCK();
      (this->RenderThreadCommandBufferIndex).Counter = (uint)(iVar2 == 0);
      UNLOCK();
    }
    DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int>
              ((FAudioMixerThreadCommand *)local_198.Data,(int)local_190);
    if ((FAudioMixerThreadCommand *)local_198.Data != (FAudioMixerThreadCommand *)0x0) {
      FMemory::Free(local_198.Data);
    }
    if ((local_138 != false) && (local_188._0_8_ != 0)) {
      plVar28 = (longlong *)(local_188 + 0x10);
      if ((longlong *)local_188._40_8_ != (longlong *)0x0) {
        plVar28 = (longlong *)local_188._40_8_;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReadSourceFrame @ 1465175d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::ReadSourceFrame(FMixerSourceManager *this,int param_1)

{
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *pTVar1;
  undefined4 uVar2;
  atomic<float> aVar3;
  FScriptContainerElement *pFVar4;
  FMixerSourceBuffer *pFVar5;
  atomic<double> aVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  BOOL BVar12;
  int iVar13;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *pTVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  LPCRITICAL_SECTION lpCriticalSection;
  FSourceInfo *this_00;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  int local_res18 [2];
  int local_res20 [2];
  int local_98 [2];
  ulonglong local_90;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> local_88;
  int *local_78;
  int *local_70;
  int *local_68;
  
  uVar17 = (ulonglong)param_1;
  uVar19 = (uint)~param_1 >> 0x1f;
  uVar15 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (FSourceInfo *)((this->SourceInfos).AllocatorInstance.Data + uVar17 * 0x5d0);
  local_res18[0] = this_00->NumInputChannels;
  local_90 = uVar17;
  iVar10 = FSourceInfo::GetCurrentAudioChunkNumFrames(this_00);
  iVar11 = this_00->CurrentFrameIndex;
  pTVar1 = &this_00->CurrentPCMBuffer;
  bVar8 = true;
  bVar9 = iVar10 <= iVar11 + 1;
  bVar22 = SBORROW4(iVar11,iVar10);
  iVar10 = iVar11 - iVar10;
  uVar21 = uVar17;
  while( true ) {
    iVar13 = (int)uVar17;
    bVar22 = bVar22 == iVar10 < 0;
    if (bVar9) {
      if (!bVar22) {
        if (pTVar1->Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3835252409160960271>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                             ,0x90f,"SourceInfo.CurrentPCMBuffer.IsValid()");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((pTVar1->Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        uVar17 = 0;
        pFVar4 = (pTVar1->Object->AllocatorInstance).Data;
        bVar8 = bVar22;
        if (0 < local_res18[0]) {
          iVar11 = local_res18[0] * this_00->CurrentFrameIndex;
          uVar18 = uVar17;
          do {
            uVar16 = (uint)uVar17;
            uVar2 = *(undefined4 *)(pFVar4 + uVar18 + (longlong)iVar11 * 4);
            uVar15 = 0;
            if ((int)uVar16 < (this_00->CurrentFrameValues).ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar17 = (ulonglong)(uVar16 + 1);
            *(undefined4 *)((this_00->CurrentFrameValues).AllocatorInstance.Data + uVar18) = uVar2;
            uVar18 = uVar18 + 4;
            uVar21 = local_90;
            iVar13 = param_1;
          } while ((int)(uVar16 + 1) < local_res18[0]);
        }
      }
    }
    else if (!bVar22) {
      if (pTVar1->Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
        return;
      }
      pFVar4 = (pTVar1->Object->AllocatorInstance).Data;
      iVar10 = iVar11 * local_res18[0];
      local_res20[0] = (iVar11 + 1) * local_res18[0];
      local_98[0] = pTVar1->Object->ArrayNum;
      if (local_98[0] < local_res20[0] + local_res18[0]) {
        local_78 = local_98;
        local_70 = local_res20;
        local_68 = local_res18;
        bVar9 = `Audio::FMixerSourceManager::ReadSourceFrame'::__l29::<lambda_1>::operator()
                          (&local_78);
        if (!bVar9) {
          uVar15 = 0;
          if (local_res18[0] < 1) {
            return;
          }
          lVar20 = 0;
          while( true ) {
            uVar19 = 0;
            if ((int)uVar15 < (this_00->CurrentFrameValues).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) break;
            *(undefined4 *)((this_00->CurrentFrameValues).AllocatorInstance.Data + lVar20) = 0;
            uVar19 = 0;
            if ((int)uVar15 < (this_00->NextFrameValues).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar15 = uVar15 + 1;
            *(undefined4 *)((this_00->NextFrameValues).AllocatorInstance.Data + lVar20) = 0;
            lVar20 = lVar20 + 4;
            if (local_res18[0] <= (int)uVar15) {
              return;
            }
          }
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (bVar8) {
        uVar15 = 0;
        if (0 < local_res18[0]) {
          lVar20 = 0;
          do {
            uVar2 = *(undefined4 *)(pFVar4 + lVar20 + (longlong)iVar10 * 4);
            uVar19 = 0;
            if ((int)uVar15 < (this_00->CurrentFrameValues).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined4 *)((this_00->CurrentFrameValues).AllocatorInstance.Data + lVar20) = uVar2;
            uVar2 = *(undefined4 *)(pFVar4 + (longlong)(int)(local_res20[0] + uVar15) * 4);
            uVar19 = 0;
            if ((int)uVar15 < (this_00->NextFrameValues).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar15 = uVar15 + 1;
            *(undefined4 *)((this_00->NextFrameValues).AllocatorInstance.Data + lVar20) = uVar2;
            lVar20 = lVar20 + 4;
          } while ((int)uVar15 < local_res18[0]);
        }
      }
      else {
        if ((pTVar1->Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((local_res20[0] != pTVar1->Object->ArrayNum) && (uVar15 = 0, 0 < local_res18[0])) {
          lVar20 = 0;
          do {
            uVar2 = *(undefined4 *)(pFVar4 + (longlong)(int)(local_res20[0] + uVar15) * 4);
            uVar19 = 0;
            if ((int)uVar15 < (this_00->NextFrameValues).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar15 = uVar15 + 1;
            *(undefined4 *)((this_00->NextFrameValues).AllocatorInstance.Data + lVar20) = uVar2;
            lVar20 = lVar20 + 4;
          } while ((int)uVar15 < local_res18[0]);
        }
      }
      return;
    }
    if (pTVar1->Object != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      pFVar5 = (this_00->MixerSourceBuffer).Object;
      if (pFVar5 == (FMixerSourceBuffer *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3835252409160960284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                           ,0x91c,"SourceInfo.MixerSourceBuffer.IsValid()");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        aVar6 = pFVar5->CPUCoreUtilization;
        uVar15 = 0;
        if (iVar13 < (this->GameThreadInfo).CPUCoreUtilization.ArrayNum) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(atomic<double> *)
         ((this->GameThreadInfo).CPUCoreUtilization.AllocatorInstance.Data + uVar21 * 8) = aVar6;
        if (((this_00->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        aVar3 = ((this_00->MixerSourceBuffer).Object)->RelativeRenderCost;
        uVar15 = 0;
        if (iVar13 < (this->GameThreadInfo).RelativeRenderCost.ArrayNum) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(atomic<float> *)
         ((this->GameThreadInfo).RelativeRenderCost.AllocatorInstance.Data + uVar21 * 4) = aVar3;
        if (((this_00->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FMixerSourceBuffer::OnBufferEnd((this_00->MixerSourceBuffer).Object);
      }
    }
    pFVar5 = (this_00->MixerSourceBuffer).Object;
    if (pFVar5 == (FMixerSourceBuffer *)0x0) break;
    lpCriticalSection = (LPCRITICAL_SECTION)&pFVar5->SoundWaveCritSec;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    BVar12 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar12 == 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    if (((lpCriticalSection == (LPCRITICAL_SECTION)0x0) ||
        (iVar11 = pFVar5->NumBuffersQeueued, LeaveCriticalSection(lpCriticalSection), iVar11 < 1))
       || (local_res18[0] < 1)) goto LAB_146517da3;
    if (((this_00->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar14 = FMixerSourceBuffer::GetNextBuffer((this_00->MixerSourceBuffer).Object,&local_88);
    iVar10 = 0;
    if (pTVar1 != pTVar14) {
      pTVar1->Object = pTVar14->Object;
      pTVar14->Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this_00->CurrentPCMBuffer).SharedReferenceCount,&pTVar14->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (pTVar1->Object != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      if ((this_00->NumInputChannels == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumInputChannels != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.h"
                             ,0x265,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pTVar1->Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = pTVar1->Object->ArrayNum / this_00->NumInputChannels;
    }
    if (bVar8) {
      iVar13 = this_00->CurrentFrameIndex - iVar10;
      iVar11 = 0;
      if (0 < iVar13) {
        iVar11 = iVar13;
      }
    }
    else {
      iVar11 = -1;
    }
    this_00->CurrentFrameIndex = iVar11;
    uVar17 = (ulonglong)(uint)param_1;
    bVar9 = iVar10 <= iVar11 + 1;
    bVar22 = SBORROW4(iVar11,iVar10);
    iVar10 = iVar11 - iVar10;
  }
  bVar9 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3835252409160960299>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                     ,0x92b,"SourceInfo.MixerSourceBuffer.IsValid()");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_146517da3:
  this_00->bIsLastBuffer = '\x01';
  return;
}

// RegisterAudioBusEnvelopeFollowerCVars @ 1465181d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::RegisterAudioBusEnvelopeFollowerCVars(FMixerSourceManager *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  IConsoleVariable *pIVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  FDelegateAllocation local_e8;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  FString local_b8;
  FString local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  pcVar1 = *(code **)*IConsoleManager::Singleton;
  ::FString::PrintfImpl(&local_b8,L"au.StartAudioBusEnvelopeFollower_AD%d");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar7.Data = local_b8.Data.AllocatorInstance.Data;
  }
  pIVar4 = (IConsoleVariable *)
           (*pcVar1)(pIVar2,FVar7.Data,&local_d8,
                     L"Starts an audio bus envelope follower (args= audio bus id)\n",0);
  this->StartAudioBusEnvelopeFollowerCVar = pIVar4;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  pIVar4 = this->StartAudioBusEnvelopeFollowerCVar;
  if (pIVar4 != (IConsoleVariable *)0x0) {
    local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_100.DelegateSize = 0;
    pcVar1 = *(code **)(*(longlong *)pIVar4 + 0xe0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_68);
    local_50 = &local_100;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFMixerSourceManager_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[4] = OnStartAudioBusEnvelopeFollowerCVarChanged;
      puVar5[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    (*pcVar1)(pIVar4,&local_108);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_108,(FWriteAccessScope *)&local_98);
    if ((local_100.DelegateSize != 0) &&
       (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_100,0,0,0x10);
      local_100.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_100.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  pcVar1 = *(code **)*IConsoleManager::Singleton;
  ::FString::PrintfImpl(&local_a8,L"au.StopAudioBusEnvelopeFollower_AD%d");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar7.Data = local_a8.Data.AllocatorInstance.Data;
  }
  pIVar4 = (IConsoleVariable *)
           (*pcVar1)(pIVar2,FVar7.Data,&local_c8,
                     L"Stops an audio bus envelope follower (args= audio bus id)\n",0);
  this->StopAudioBusEnvelopeFollowerCVar = pIVar4;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  pIVar4 = this->StopAudioBusEnvelopeFollowerCVar;
  if (pIVar4 != (IConsoleVariable *)0x0) {
    local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e8.DelegateSize = 0;
    pcVar1 = *(code **)(*(longlong *)pIVar4 + 0xe0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_48);
    local_30 = &local_e8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_e8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      puVar5[4] = OnStopAudioBusEnvelopeFollowerCVarChanged;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFMixerSourceManager_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    (*pcVar1)(pIVar4,&local_f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f0,(FWriteAccessScope *)&local_80);
    if ((local_e8.DelegateSize != 0) &&
       (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e8,0,0,0x10);
      local_e8.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  }
  return;
}

// ReleaseSource @ 14651ac70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::ReleaseSource(FMixerSourceManager *this,int param_1)

{
  int *piVar1;
  TArray<TSharedPtr<Audio::FMixerSourceBuffer,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  void *_Src;
  FMixerAudioBus *this_00;
  ulong64 uVar4;
  FMixerSubmix *this_01;
  IAudioSpatialization *pIVar5;
  FMixerDevice *pFVar6;
  longlong *plVar7;
  FMixerSourceVoice *pFVar8;
  TNode *pTVar9;
  code *pcVar10;
  atomic<int> aVar11;
  bool bVar12;
  int iVar13;
  atomic<int> aVar14;
  TNode *pTVar15;
  FName *pFVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  longlong lVar23;
  longlong lVar24;
  TReferenceControllerBase<1> *pTVar25;
  ForAnyElementType FVar26;
  TReferenceControllerBase<1> *pTVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  undefined8 *puVar30;
  FScriptContainerElement *pFVar31;
  EBusSendType EVar32;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_168 [8];
  FScriptContainerElement *local_160;
  uint local_158;
  FLLMScope local_154;
  longlong local_150;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  uint local_138 [2];
  uint local_130;
  uint local_12c;
  FScriptContainerElement *local_128;
  TArray<TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,TSizedDefaultAllocator<32>_>
  local_120;
  FAudioBusKey local_110;
  FAudioBusKey local_108;
  FScriptContainerElement *local_100;
  FAudioRenderStepId local_f8;
  FAudioRenderStepId local_f0;
  ulong64 local_e8;
  FMemScope local_e0;
  FString local_d8;
  FString local_c8;
  undefined8 local_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  undefined8 local_78;
  undefined8 local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  local_res10[0] = param_1;
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  if ((this->NumTotalSources <= (int)local_res10[0]) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160958810>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x35a,"SourceId < NumTotalSources"), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((this->bInitialized == 0) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3835252409160958811>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                          ,0x35b,"bInitialized"), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar23 = (longlong)(int)local_res10[0];
  pTVar27 = (TReferenceControllerBase<1> *)0x0;
  uVar17 = 0;
  if ((int)local_res10[0] < (this->MixerSources).ArrayNum) {
    uVar17 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (*(longlong *)((this->MixerSources).AllocatorInstance.Data + lVar23 * 8) == 0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    lVar23 = (longlong)(int)local_res10[0];
    uVar17 = 0;
    if ((int)local_res10[0] < (this->SourceInfos).ArrayNum) {
      uVar17 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (((byte)(this->SourceInfos).AllocatorInstance.Data[lVar23 * 0x5d0 + 0x5b0] & 1) != 0) {
      ::FString::PrintfImpl(&local_c8,L"Is releasing");
      lVar23 = (longlong)(int)local_res10[0];
      uVar17 = 0;
      if ((int)local_res10[0] < (this->SourceInfos).ArrayNum) {
        uVar17 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar29 = (this->SourceInfos).AllocatorInstance.Data;
      local_148.Data = (FScriptContainerElement *)0x0;
      local_140 = *(int *)(pFVar29 + lVar23 * 0x5d0 + 0x5c0);
      lVar24 = (longlong)local_140;
      _Src = *(void **)(pFVar29 + lVar23 * 0x5d0 + 0x5b8);
      if (local_140 == 0) {
        local_13c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_140,0,&local_148,local_140,&local_13c);
        memcpy(local_148.Data,_Src,lVar24 * 2);
      }
      ::FString::PrintfImpl(&local_d8,L"<Debug Sound Log> [Id=%d][Name=%s]: %s");
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data);
      }
      if (4 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    lVar23 = (longlong)(int)local_res10[0];
    uVar17 = 0;
    if ((int)local_res10[0] < (this->SourceInfos).ArrayNum) {
      uVar17 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar23 = lVar23 * 0x5d0;
    pFVar29 = (this->SourceInfos).AllocatorInstance.Data;
    local_160 = pFVar29;
    local_150 = lVar23;
    if (((byte)pFVar29[lVar23 + 0x5b0] & 1) != 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::Remove(&this->DebugSoloSources,(int *)local_res10);
    }
    pFVar31 = local_160;
    uVar17 = *(uint *)(pFVar29 + lVar23 + 0xe0);
    if (uVar17 != 0xffffffff) {
      pTVar25 = pTVar27;
      if (*(int *)&(this->AudioBuses).field_0x8 != *(int *)&(this->AudioBuses).field_0x34) {
        puVar21 = *(undefined1 **)&(this->AudioBuses).field_0x40;
        if (puVar21 == (undefined1 *)0x0) {
          puVar21 = &(this->AudioBuses).field_0x38;
        }
        uVar28 = *(uint *)(puVar21 +
                          (ulonglong)
                          (*(int *)&(this->AudioBuses).field_0x48 - 1U &
                          ((uVar17 >> 2) + 0x9e3779b8 + uVar17 * 0x40 ^ uVar17)) * 4);
        if (uVar28 != 0xffffffff) {
          do {
            puVar18 = (uint *)((longlong)(int)uVar28 * 0x20 +
                              *(longlong *)&(this->AudioBuses).field_0x0);
            if ((*puVar18 == uVar17) && (puVar18[1] == 0xffffffff)) {
              if ((uVar28 != 0xffffffff) && (puVar18 != (uint *)0x0)) {
                pTVar25 = *(TReferenceControllerBase<1> **)(puVar18 + 4);
                lVar24 = *(longlong *)(puVar18 + 2);
                if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar25->SharedReferenceCount =
                       (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar29 = pFVar31;
                if (lVar24 != 0) {
                  if ((*(longlong *)(local_160 + lVar23 + 0x10) == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar12)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  local_138[0] = local_res10[0];
                  iVar13 = TArray<int,TSizedDefaultAllocator<32>_>::Remove
                                     ((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar24 + 8),
                                      (int *)local_138);
                  if ((0 < iVar13) && (AudioMixerCVars::UseRenderScheduler != 0)) {
                    FAudioRenderStepId::FromTransmitterID((ulong64)&local_f8);
                    FAudioRenderStepId::FromAudioBusKey((FAudioBusKey)&local_f0);
                    FAudioRenderScheduler::RemoveDependency
                              (*(FAudioRenderScheduler **)
                                (*(longlong *)(*(longlong *)(lVar24 + 0x68) + 0x40) + 0xe50),
                               local_f0,local_f8);
                  }
                  if ((((*(char *)(lVar24 + 400) != '\0') && (*(int *)(lVar24 + 0x10) == 0)) &&
                      (*(int *)(lVar24 + 0x20) == 0)) && (*(int *)(lVar24 + 0x30) == 0)) {
                    TraceAudioBusStopMessage
                              (*(uint *)&this->MixerDevice->field_0xa0,
                               *(uint *)(pFVar31 + lVar23 + 0xe0));
                    if ((*(char *)(lVar24 + 400) == '\0') &&
                       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<3835252409160958844>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                                            ,0x37c,"AudioBusPtr->IsAutomatic()"), bVar12)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    local_110.ObjectId = *(uint *)(pFVar31 + lVar23 + 0xe0);
                    local_110.InstanceId = 0xffffffff;
                    if (*(int *)&(this->AudioBuses).field_0x8 !=
                        *(int *)&(this->AudioBuses).field_0x34) {
                      TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                      ::RemoveImpl<Audio::FAudioBusKey>
                                ((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                                  *)&this->AudioBuses,
                                 local_110.ObjectId * 0x40 + (local_110.ObjectId >> 2) + 0x9e3779b8
                                 ^ local_110.ObjectId,&local_110);
                    }
                  }
                }
              }
              break;
            }
            uVar28 = puVar18[6];
          } while (uVar28 != 0xffffffff);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
    }
    local_158 = 0;
    local_100 = pFVar29 + lVar23 + 0xf8;
    pTVar25 = pTVar27;
    do {
      local_12c = *(uint *)local_100;
      uVar19 = (ulonglong)(int)local_12c;
      puVar18 = *(uint **)(local_100 + -8);
      local_128 = (FScriptContainerElement *)(puVar18 + uVar19);
      while( true ) {
        pFVar31 = local_100;
        pFVar29 = local_128;
        EVar32 = (EBusSendType)pTVar25;
        if (*(int *)local_100 != (int)uVar19) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
          EVar32 = (EBusSendType)local_158;
        }
        if ((FScriptContainerElement *)puVar18 == pFVar29) break;
        uVar17 = *puVar18;
        local_130 = (uVar17 >> 2) + 0x9e3779b8 + uVar17 * 0x40 ^ uVar17;
        pTVar25 = pTVar27;
        if (*(int *)&(this->AudioBuses).field_0x8 != *(int *)&(this->AudioBuses).field_0x34) {
          puVar21 = *(undefined1 **)&(this->AudioBuses).field_0x40;
          puVar22 = &(this->AudioBuses).field_0x38;
          if (puVar21 != (undefined1 *)0x0) {
            puVar22 = puVar21;
          }
          uVar28 = *(uint *)(puVar22 +
                            (ulonglong)(*(int *)&(this->AudioBuses).field_0x48 - 1U & local_130) * 4
                            );
          if (uVar28 != 0xffffffff) {
            do {
              puVar20 = (uint *)((longlong)(int)uVar28 * 0x20 + *(longlong *)&this->AudioBuses);
              if ((*puVar20 == uVar17) && (puVar20[1] == 0xffffffff)) {
                if ((uVar28 != 0xffffffff) && (puVar20 != (uint *)0x0)) {
                  pTVar25 = *(TReferenceControllerBase<1> **)(puVar20 + 4);
                  this_00 = *(FMixerAudioBus **)(puVar20 + 2);
                  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar25->SharedReferenceCount =
                         (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  if ((this_00 != (FMixerAudioBus *)0x0) &&
                     (bVar12 = FMixerAudioBus::RemoveSend(this_00,EVar32,local_res10[0]), bVar12)) {
                    TraceAudioBusStopMessage(*(uint *)&this->MixerDevice->field_0xa0,uVar17);
                    if ((this_00->bIsAutomatic == false) &&
                       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                           (&bGEnsureHasExecuted<3835252409160958865>,false,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                                            ,0x391,"AudioBusPtr->IsAutomatic()"), bVar12)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    local_108.InstanceId = 0xffffffff;
                    local_108.ObjectId = uVar17;
                    if (*(int *)&(this->AudioBuses).field_0x8 !=
                        *(int *)&(this->AudioBuses).field_0x34) {
                      TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                      ::RemoveImpl<Audio::FAudioBusKey>
                                ((TSet<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>,FDefaultSetAllocator>
                                  *)&this->AudioBuses,local_130,&local_108);
                    }
                  }
                }
                break;
              }
              uVar28 = puVar20[6];
            } while (uVar28 != 0xffffffff);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        pTVar25 = (TReferenceControllerBase<1> *)(ulonglong)local_158;
        puVar18 = puVar18 + 1;
        uVar19 = (ulonglong)local_12c;
      }
      *(int *)pFVar31 = 0;
      if (*(int *)(pFVar31 + 4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar31 + -8),0,(int *)(pFVar31 + 4));
      }
      local_100 = pFVar31 + 0x10;
      local_158 = local_158 + 1;
      pTVar25 = (TReferenceControllerBase<1> *)(ulonglong)local_158;
    } while ((int)local_158 < 2);
    *(undefined4 *)(local_160 + lVar23 + 0xe0) = 0xffffffff;
    pFVar29 = local_160 + lVar23 + 0x10;
    *(undefined8 *)(local_160 + lVar23 + 0xe8) = 0xffffffffffffffff;
    local_128 = pFVar29;
    if (*(longlong *)pFVar29 != 0) {
      if (AudioMixerCVars::UseRenderScheduler != 0) {
        uVar4 = *(ulong64 *)(*(longlong *)pFVar29 + 0x98);
        local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.ArrayNum = 0;
        local_120.ArrayMax = 0;
        TMultiMap<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>_>
        ::MultiFind<TSizedDefaultAllocator<32>_>(&this->BusPatchDependencies,uVar4,&local_120,false)
        ;
        iVar13 = local_120.ArrayNum;
        uVar19 = (ulonglong)local_120.ArrayNum;
        if (local_120.ArrayNum != 0) {
          pFVar31 = local_120.AllocatorInstance.Data + uVar19 * 0x10;
          FVar26.Data = local_120.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar19 != iVar13) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            pFVar29 = local_128;
            if (FVar26.Data == pFVar31) break;
            FAudioRenderScheduler::RemoveDependency
                      ((this->MixerDevice->RenderScheduler).Ptr,
                       (FAudioRenderStepId)*(ulong64 *)FVar26.Data,
                       (FAudioRenderStepId)*(ulong64 *)(FVar26.Data + 8));
            uVar19 = local_120._8_8_ & 0xffffffff;
            FVar26.Data = FVar26.Data + 0x10;
          }
          local_e8 = uVar4;
          if (*(int *)&(this->BusPatchDependencies).field_0x8 !=
              *(int *)&(this->BusPatchDependencies).field_0x34) {
            TSet<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned___int64>
                      ((TSet<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>,FDefaultSetAllocator>
                        *)&this->BusPatchDependencies,(int)(uVar4 >> 0x20) * 0x17 + (int)uVar4,
                       &local_e8);
          }
        }
        lVar23 = local_150;
        if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.AllocatorInstance.Data);
          lVar23 = local_150;
        }
      }
      pTVar2 = &this->PendingSourceBuffers;
      pFVar31 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar31 <= pFVar29) &&
          (pFVar29 < pFVar31 + (longlong)(this->PendingSourceBuffers).ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (this->PendingSourceBuffers).ArrayNum;
      piVar1 = &(this->PendingSourceBuffers).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->PendingSourceBuffers).ArrayNum = iVar13 + 1;
      pFVar31 = (pTVar2->AllocatorInstance).Data;
      *(longlong *)(pFVar31 + (longlong)iVar13 * 0x10) = *(longlong *)pFVar29;
      lVar24 = *(longlong *)(pFVar29 + 8);
      *(longlong *)(pFVar31 + (longlong)iVar13 * 0x10 + 8) = lVar24;
      if (lVar24 != 0) {
        LOCK();
        *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
        UNLOCK();
      }
      local_b8 = 0;
      FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar29 != (FScriptContainerElement *)&local_b8) {
        *(longlong *)pFVar29 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar29 + 8),&FStack_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_b0.ReferenceController);
    }
    *(undefined8 *)(local_160 + lVar23 + 0x20) = 0;
    pFVar29 = local_160 + lVar23 + 0xd0;
    iVar13 = *(int *)&pFVar29[8].field_0x0;
    puVar30 = *(undefined8 **)&pFVar29->field_0x0;
    puVar3 = puVar30 + (longlong)iVar13 * 5;
    while( true ) {
      if (*(int *)&pFVar29[8].field_0x0 != iVar13) {
        local_168[0] = 0;
        `TCheckedPointerIterator<Audio::FMixerSourceSubmixSend,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_168);
      }
      if (puVar30 == puVar3) break;
      pTVar27 = (TReferenceControllerBase<1> *)puVar30[1];
      if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
LAB_14651b6a0:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27)
        ;
        puVar30 = puVar30 + 5;
      }
      else {
        aVar11 = pTVar27->SharedReferenceCount;
        do {
          if (aVar11 == (atomic<int>)0x0) {
            pTVar27 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14651b6a0;
          }
          LOCK();
          aVar14 = pTVar27->SharedReferenceCount;
          bVar12 = aVar11 == aVar14;
          if (bVar12) {
            pTVar27->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
            aVar14 = aVar11;
          }
          UNLOCK();
          aVar11 = aVar14;
        } while (!bVar12);
        this_01 = (FMixerSubmix *)*puVar30;
        if (this_01 == (FMixerSubmix *)0x0) goto LAB_14651b6a0;
        lVar23 = (longlong)(int)local_res10[0];
        uVar17 = 0;
        if ((int)local_res10[0] < (this->MixerSources).ArrayNum) {
          uVar17 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FMixerSubmix::RemoveSourceVoice
                  (this_01,*(FMixerSourceVoice **)
                            ((this->MixerSources).AllocatorInstance.Data + lVar23 * 8));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27)
        ;
        puVar30 = puVar30 + 5;
      }
    }
    if (*(int *)(pFVar29 + 0xc) < 0) {
      DestructItems<Audio::FMixerSourceSubmixSend,int>
                (*(FMixerSourceSubmixSend **)&pFVar29->field_0x0,*(int *)&pFVar29[8].field_0x0);
      *(undefined4 *)&pFVar29[8].field_0x0 = 0;
      if (*(int *)(pFVar29 + 0xc) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)pFVar29,0,(int *)(pFVar29 + 0xc));
      }
    }
    else {
      DestructItems<Audio::FMixerSourceSubmixSend,int>
                (*(FMixerSourceSubmixSend **)&pFVar29->field_0x0,*(int *)&pFVar29[8].field_0x0);
      *(undefined4 *)&pFVar29[8].field_0x0 = 0;
    }
    lVar23 = local_150;
    pFVar29 = local_160;
    if (((byte)local_160[local_150 + 0x521] & 4) != 0) {
      if ((this->bUsingSpatializationPlugin == '\0') &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3835252409160958904>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                              ,0x3b8,"bUsingSpatializationPlugin"), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FLLMScope::FLLMScope(&local_154,AudioMixerPlugins,false,None,Default,true);
      FMemScope::FMemScope(&local_e0,AudioMixerPlugins,true);
      if (((this->SpatialInterfaceInfo).SpatializationPlugin.Object == (IAudioSpatialization *)0x0)
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pIVar5 = (this->SpatialInterfaceInfo).SpatializationPlugin.Object;
      (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,local_res10[0]);
      FMemScope::~FMemScope(&local_e0);
      FLLMScope::~FLLMScope(&local_154);
    }
    if (((byte)pFVar29[lVar23 + 0x521] & 0x10) != 0) {
      pFVar6 = this->MixerDevice;
      if ((*(longlong *)&pFVar6->field_0x110 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar7 = *(longlong **)&pFVar6->field_0x110;
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res10[0]);
    }
    if (((byte)pFVar29[lVar23 + 0x521] & 0x20) != 0) {
      pFVar6 = this->MixerDevice;
      if ((*(longlong *)&pFVar6->field_0x100 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar7 = *(longlong **)&pFVar6->field_0x100;
      (**(code **)(*plVar7 + 0x28))(plVar7,local_res10[0]);
    }
    pFVar31 = pFVar29 + lVar23 + 0x510;
    plVar7 = *(longlong **)pFVar31;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res10[0]);
      local_a8 = 0;
      FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar31 != (FScriptContainerElement *)&local_a8) {
        *(longlong *)pFVar31 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar31 + 8),&FStack_a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_a0.ReferenceController);
    }
    *(undefined4 *)(pFVar29 + lVar23 + 0x1d0) = 0xffffffff;
    ResetSourceEffectChain(this,local_res10[0]);
    uVar28 = 0;
    *(undefined4 *)(pFVar29 + lVar23 + 0x358) = 0;
    pFVar29[lVar23 + 0x1f8] = (FScriptContainerElement)0x1;
    lVar24 = (longlong)(int)local_res10[0];
    pFVar6 = this->MixerDevice;
    uVar17 = uVar28;
    if ((int)local_res10[0] < (this->MixerSources).ArrayNum) {
      uVar17 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar8 = *(FMixerSourceVoice **)((this->MixerSources).AllocatorInstance.Data + lVar24 * 8);
    pTVar15 = ::operator_new(0x10);
    if (pTVar15 != (TNode *)0x0) {
      pTVar15->NextNode = (TNode *)0x0;
      pTVar15->Item = pFVar8;
      pTVar9 = (pFVar6->SourceVoices).Head;
      (pFVar6->SourceVoices).Head = pTVar15;
      pTVar9->NextNode = pTVar15;
    }
    lVar24 = (longlong)(int)local_res10[0];
    uVar17 = uVar28;
    if ((int)local_res10[0] < (this->MixerSources).ArrayNum) {
      uVar17 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(undefined8 *)((this->MixerSources).AllocatorInstance.Data + lVar24 * 8) = 0;
    pFVar31 = pFVar29 + lVar23 + 0x500;
    pFVar29[lVar23 + 0x120] = (FScriptContainerElement)0x1;
    *(undefined4 *)(pFVar29 + lVar23 + 0x124) = 0xbf800000;
    *(undefined4 *)(pFVar29 + lVar23 + 0x128) = 0xbf800000;
    *(undefined8 *)(pFVar29 + lVar23 + 300) = 0;
    plVar7 = *(longlong **)pFVar31;
    *(undefined8 *)(pFVar29 + lVar23 + 0x134) = 0;
    *(undefined4 *)(pFVar29 + lVar23 + 0x13c) = 0xbf800000;
    *(undefined4 *)(pFVar29 + lVar23 + 0x140) = 0xbf800000;
    *(undefined4 *)(pFVar29 + lVar23 + 0x144) = 0x469c4000;
    *(undefined4 *)(pFVar29 + lVar23 + 0x148) = 0x41a00000;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,local_res10[0]);
      local_98 = 0;
      FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar31 != (FScriptContainerElement *)&local_98) {
        *(longlong *)pFVar31 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar31 + 8),&FStack_90);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_90.ReferenceController);
    }
    uVar17 = *(uint *)&this->MixerDevice->field_0xa0;
    pFVar16 = ::FName::FName(&local_68,"Volume");
    FModulationDestination::Init
              ((FModulationDestination *)(pFVar29 + lVar23 + 0x378),uVar17,*pFVar16,false,true);
    pFVar16 = ::FName::FName(&local_60,"Pitch");
    FModulationDestination::Init
              ((FModulationDestination *)(pFVar29 + lVar23 + 0x388),uVar17,*pFVar16,false,false);
    pFVar16 = ::FName::FName(&local_58,"HPFCutoffFrequency");
    FModulationDestination::Init
              ((FModulationDestination *)(pFVar29 + lVar23 + 0x3a8),uVar17,*pFVar16,false,false);
    pFVar16 = ::FName::FName(local_50,"LPFCutoffFrequency");
    FModulationDestination::Init
              ((FModulationDestination *)(pFVar29 + lVar23 + 0x398),uVar17,*pFVar16,false,false);
    *(undefined8 *)(pFVar29 + lVar23 + 0x3b8) = 0;
    *(undefined4 *)(pFVar29 + lVar23 + 0x3c4) = 0x41a00000;
    *(undefined4 *)(pFVar29 + lVar23 + 0x3c0) = 0x469c4000;
    FInterpolatedLPF::Reset((FInterpolatedLPF *)(pFVar29 + lVar23 + 0x150));
    FInterpolatedHPF::Reset((FInterpolatedHPF *)(pFVar29 + lVar23 + 400));
    pFVar31 = pFVar29 + lVar23 + 0x28;
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pFVar31 != (FScriptContainerElement *)&local_88) {
      *(undefined8 *)pFVar31 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar31 + 8),&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
    pFVar31 = pFVar29 + lVar23 + 0x38;
    iVar13 = *(int *)(pFVar31 + 0xc);
    *(undefined4 *)&pFVar31[8].field_0x0 = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar31,0,(int *)(pFVar31 + 0xc));
    }
    pFVar31 = pFVar29 + lVar23 + 0x58;
    iVar13 = *(int *)(pFVar31 + 0xc);
    *(undefined4 *)&pFVar31[8].field_0x0 = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar31,0,(int *)(pFVar31 + 0xc));
    }
    pFVar31 = pFVar29 + lVar23 + 0x68;
    iVar13 = *(int *)(pFVar31 + 0xc);
    *(undefined4 *)&pFVar31[8].field_0x0 = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar31,0,(int *)(pFVar31 + 0xc));
    }
    pFVar31 = pFVar29 + lVar23 + 0x330;
    iVar13 = *(int *)(pFVar31 + 0xc);
    *(undefined4 *)&pFVar31[8].field_0x0 = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar31,0,(int *)(pFVar31 + 0xc));
    }
    pFVar31 = pFVar29 + lVar23 + 0xa0;
    iVar13 = *(int *)(pFVar31 + 0xc);
    *(undefined4 *)&pFVar31[8].field_0x0 = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar31,0,(int *)(pFVar31 + 0xc));
    }
    pFVar31 = pFVar29 + lVar23 + 0xb0;
    iVar13 = *(int *)(pFVar31 + 0xc);
    *(undefined4 *)&pFVar31[8].field_0x0 = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar31,0,(int *)(pFVar31 + 0xc));
    }
    pFVar29[lVar23 + 0x522] = (FScriptContainerElement)((byte)pFVar29[lVar23 + 0x522] & 0x98);
    *(undefined8 *)(pFVar29 + lVar23 + 0xc0) = 0;
    *(undefined8 *)(pFVar29 + lVar23 + 200) = 0;
    *(undefined2 *)(pFVar29 + lVar23 + 0x520) = 0x4000;
    *(undefined8 *)(pFVar29 + lVar23 + 0x538) = 0;
    *(undefined4 *)(pFVar29 + lVar23 + 0x530) = 0xffffffff;
    FQuartzQuantizedCommandHandle::Reset
              ((FQuartzQuantizedCommandHandle *)(pFVar29 + lVar23 + 0x4e0));
    pFVar29[lVar23 + 0x5b0] = (FScriptContainerElement)((byte)pFVar29[lVar23 + 0x5b0] & 0xfe);
    pFVar31 = pFVar29 + lVar23 + 0x5b8;
    local_78 = 0;
    local_70 = 0;
    if (pFVar31 != (FScriptContainerElement *)&local_78) {
      if (*(void **)pFVar31 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar31);
      }
      *(undefined8 *)pFVar31 = 0;
      *(undefined8 *)(pFVar31 + 8) = 0;
    }
    *(undefined8 *)(pFVar29 + lVar23 + 0x524) = 0;
    lVar23 = (longlong)(int)local_res10[0];
    if ((int)local_res10[0] < (this->GameThreadInfo).bNeedsSpeakerMap.ArrayNum) {
      uVar28 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    (this->GameThreadInfo).bNeedsSpeakerMap.AllocatorInstance.Data[lVar23] =
         (FScriptContainerElement)0x0;
  }
  return;
}

// ReleaseSourceId @ 14651be90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::ReleaseSourceId(FMixerSourceManager *this,int param_1)

{
  int *piVar1;
  FGameThreadInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  undefined1 auStackY_b8 [32];
  uint local_68 [8];
  code *local_48 [2];
  undefined **local_38;
  FMixerSourceManager *local_30;
  uint local_28;
  undefined4 local_24;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar7 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  local_68[0] = param_1;
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] ==
       (FScriptContainerElement)0x0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160959417>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x5b9,"GameThreadInfo.bIsBusy[SourceId]"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757107665>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x22f,"IsInAudioThread()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->NumActiveSources < 1) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160959420>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x5bc,"NumActiveSources > 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->NumActiveSources = this->NumActiveSources + -1;
  lVar10 = (longlong)(int)local_68[0];
  uVar7 = 0;
  if ((int)local_68[0] < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar7 = ~local_68[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[lVar10] = (FScriptContainerElement)0x0;
  lVar10 = (longlong)(int)local_68[0];
  uVar7 = 0;
  if ((int)local_68[0] < (this->GameThreadInfo).bIsDebugMode.ArrayNum) {
    uVar7 = ~local_68[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->GameThreadInfo).bIsDebugMode.AllocatorInstance.Data[lVar10] = (FScriptContainerElement)0x0;
  lVar10 = (longlong)(int)local_68[0];
  uVar7 = 0;
  if ((int)local_68[0] < (this->GameThreadInfo).CPUCoreUtilization.ArrayNum) {
    uVar7 = ~local_68[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)((this->GameThreadInfo).CPUCoreUtilization.AllocatorInstance.Data + lVar10 * 8) = 0
  ;
  lVar10 = (longlong)(int)local_68[0];
  uVar7 = 0;
  if ((int)local_68[0] < (this->GameThreadInfo).RelativeRenderCost.ArrayNum) {
    uVar7 = ~local_68[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)((this->GameThreadInfo).RelativeRenderCost.AllocatorInstance.Data + lVar10 * 4) =
       0x3f800000;
  pFVar2 = &this->GameThreadInfo;
  pFVar3 = (pFVar2->FreeSourceIndices).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_68) &&
      ((FScriptContainerElement *)local_68 <
       pFVar3 + (longlong)(this->GameThreadInfo).FreeSourceIndices.ArrayMax * 4)) &&
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
  iVar6 = (this->GameThreadInfo).FreeSourceIndices.ArrayNum;
  piVar1 = &(this->GameThreadInfo).FreeSourceIndices.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar2,piVar1);
  }
  (this->GameThreadInfo).FreeSourceIndices.ArrayNum = iVar6 + 1;
  *(uint *)((pFVar2->FreeSourceIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_68[0];
  pFVar8 = (pFVar2->FreeSourceIndices).AllocatorInstance.Data;
  pFVar3 = pFVar8 + (longlong)(this->GameThreadInfo).FreeSourceIndices.ArrayNum * 4;
  for (; pFVar8 != pFVar3; pFVar8 = pFVar8 + 4) {
    if (*(uint *)pFVar8 == local_68[0]) goto LAB_14651c20e;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3835252409160959436>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                     ,0x5cc,"GameThreadInfo.FreeSourceIndices.Contains(SourceId)");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14651c20e:
  local_28 = local_68[0];
  local_24 = local_68[5];
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::ReleaseSourceId'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::ReleaseSourceId'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48,(char *)0x0,false);
  if (local_48[0] != (code *)0x0) {
    pppuVar9 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar9 = local_20;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  return;
}

// RemoveBusPatchDependencies @ 14651c9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::RemoveBusPatchDependencies(FMixerSourceManager *this,ulong64 param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  ulong64 local_res18 [2];
  TArray<TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,TSizedDefaultAllocator<32>_>
  local_38;
  
  if (AudioMixerCVars::UseRenderScheduler == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioMixerCVars::UseRenderScheduler",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0xb2a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMultiMap<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>(&this->BusPatchDependencies,param_1,&local_38,false);
  iVar2 = local_38.ArrayNum;
  uVar4 = (ulonglong)local_38.ArrayNum;
  if (local_38.ArrayNum != 0) {
    pFVar6 = local_38.AllocatorInstance.Data + uVar4 * 0x10;
    FVar5.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar5.Data == pFVar6) break;
      FAudioRenderScheduler::RemoveDependency
                ((this->MixerDevice->RenderScheduler).Ptr,(FAudioRenderStepId)*(ulong64 *)FVar5.Data
                 ,(FAudioRenderStepId)*(ulong64 *)(FVar5.Data + 8));
      uVar4 = local_38._8_8_ & 0xffffffff;
      FVar5.Data = FVar5.Data + 0x10;
    }
    local_res18[0] = param_1;
    if (*(int *)&(this->BusPatchDependencies).field_0x8 !=
        *(int *)&(this->BusPatchDependencies).field_0x34) {
      TSet<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>,FDefaultSetAllocator>
                  *)&this->BusPatchDependencies,(int)(param_1 >> 0x20) * 0x17 + (int)param_1,
                 local_res18);
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// RenderSource @ 14651e260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::RenderSource(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = *(int *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_1 * 0x5d0 + 0xe0) !=
          -1;
  ComputeSourceBuffer(this,bVar2,param_1);
  ComputePostSourceEffectBuffer(this,bVar2,param_1);
  ComputeOutputBuffers(this,bVar2,param_1);
  return;
}

// ResetSourceEffectChain @ 14651e6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::ResetSourceEffectChain(FMixerSourceManager *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  code *local_38 [2];
  undefined **local_28;
  FScriptContainerElement *local_20;
  undefined4 local_18;
  int local_14;
  undefined8 local_10;
  
  lpCriticalSection = &this->EffectChainMutationCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->SourceInfos).AllocatorInstance.Data;
  if (*(int *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e0) != 0) {
    pFVar2 = pFVar4 + (longlong)param_1 * 0x5d0 + 0x1d8;
    local_20 = *(FScriptContainerElement **)&pFVar2->field_0x0;
    pFVar1 = pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e4;
    *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
    local_14 = *(int *)pFVar1;
    local_18 = *(undefined4 *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e0);
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::ResetSourceEffectChain'::__l6::<lambda_1>,void>
                  ::Call;
    *(undefined4 *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e0) = 0;
    *(int *)pFVar1 = 0;
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerSourceManager::ResetSourceEffectChain'::`6'::<lambda_1>,1,0>
                ::_vftable_;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    DestructItems<TSharedPtr<FSoundEffectSource,1>,int>((TSharedPtr<FSoundEffectSource,1> *)0x0,0);
    if (*(int *)pFVar1 < 0) {
      DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                (*(TSharedPtr<FSoundEffectSource,1> **)&pFVar2->field_0x0,
                 *(int *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e0));
      *(undefined4 *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e0) = 0;
      if (*(int *)pFVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)pFVar2,0,(int *)pFVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
                (*(TSharedPtr<FSoundEffectSource,1> **)&pFVar2->field_0x0,
                 *(int *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e0));
      *(undefined4 *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e0) = 0;
    }
  }
  iVar3 = *(int *)(pFVar4 + (longlong)param_1 * 0x5d0 + 500);
  *(undefined4 *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1f0) = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(pFVar4 + (longlong)param_1 * 0x5d0 + 0x1e8),0,
               (int *)(pFVar4 + (longlong)param_1 * 0x5d0 + 500));
  }
                    /* WARNING: Could not recover jumptable at 0x00014651e849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetBusSendInfo @ 14651edf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetBusSendInfo
          (FMixerSourceManager *this,int param_1,EBusSendType param_2,uint param_3,float param_4,
          FString *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  code **ppcVar4;
  undefined1 auStackY_b8 [32];
  FString local_70;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960141>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x88d,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960142>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x88e,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::FString(&local_70,param_5);
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x30,8);
  ppcVar4 = local_30 + 1;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::SetBusSendInfo'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar4 = (code *)this;
  *(int *)(local_30 + 2) = param_1;
  *(EBusSendType *)((longlong)local_30 + 0x14) = param_2;
  *(uint *)(local_30 + 3) = param_3;
  *(float *)((longlong)local_30 + 0x1c) = param_4;
  ::FString::FString((FString *)(local_30 + 4),&local_70);
  if (ppcVar4 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::SetBusSendInfo'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_58,"SetBusSendInfo()",false);
  if (local_58[0] != (code *)0x0) {
    ppcVar4 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar4 = local_30;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return;
}

// SetChannelMap @ 14651f1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetChannelMap
          (FMixerSourceManager *this,int param_1,uint param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,bool param_4,bool param_5)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  code **ppcVar5;
  longlong lVar6;
  ForAnyElementType _Src_00;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_98;
  int local_90;
  int local_8c [5];
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (this->NumTotalSources <= param_1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959842>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x762,"SourceId < NumTotalSources");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959843>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x763,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_90 = param_3->ArrayNum;
  lVar6 = (longlong)local_90;
  _Src_00.Data = (FScriptContainerElement *)0x0;
  _Src = (param_3->AllocatorInstance).Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  if (local_90 != 0) {
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,local_90,0,&local_98,local_90,local_8c);
    _Src_00.Data = local_98.Data;
    memcpy(local_98.Data,_Src,lVar6 << 2);
  }
  iVar2 = local_90;
  local_78[0] = (code *)0x0;
  ppcVar5 = FMemory::Malloc(0x30,8);
  *(int *)(ppcVar5 + 2) = param_1;
  ppcVar5[3] = (code *)0x0;
  *ppcVar5 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`Audio::FMixerSourceManager::SetChannelMap'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar5[1] = (code *)this;
  *(uint *)((longlong)ppcVar5 + 0x14) = param_2;
  *(int *)(ppcVar5 + 4) = iVar2;
  local_50 = ppcVar5;
  if (iVar2 == 0) {
    *(int *)((longlong)ppcVar5 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)(ppcVar5 + 3),iVar2,
               (int *)((longlong)ppcVar5 + 0x24));
    memcpy(((ForAnyElementType *)(ppcVar5 + 3))->Data,_Src_00.Data,(longlong)iVar2 << 2);
  }
  *(bool *)(ppcVar5 + 5) = param_4;
  *(bool *)((longlong)ppcVar5 + 0x29) = param_5;
  if (ppcVar5 + 1 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::SetChannelMap'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_78,"SetChannelMap()",false);
  if (local_78[0] != (code *)0x0) {
    ppcVar5 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar5 = local_50;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  if (_Src_00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src_00.Data);
  }
  return;
}

// SetDistanceAttenuation @ 14651f4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetDistanceAttenuation
          (FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959807>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x73f,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959808>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x740,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetDistanceAttenuation'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetDistanceAttenuation'::__l2::<lambda_1>,void>
                ::Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_58,"SetDistanceAttenuation()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetHPFFrequency @ 14651f8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetHPFFrequency(FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959893>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x795,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959894>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x796,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetHPFFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetHPFFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_58,"SetHPFFrequency()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetLPFFrequency @ 14651faa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetLPFFrequency(FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959873>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x781,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959874>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x782,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetLPFFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetLPFFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_58,"SetLPFFrequency()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetListenerTransforms @ 14651fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetListenerTransforms
          (FMixerSourceManager *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  code **ppcVar2;
  longlong lVar3;
  undefined1 auStackY_c8 [32];
  ForAnyElementType local_80;
  int local_78;
  int local_74 [3];
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_78 = param_1->ArrayNum;
  lVar3 = (longlong)local_78;
  _Src = (param_1->AllocatorInstance).Data;
  local_80.Data = (FScriptContainerElement *)0x0;
  if (local_78 == 0) {
    local_74[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_78,0,&local_80,local_78,local_74);
    memcpy(local_80.Data,_Src,lVar3 * 0x60);
  }
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x20,8);
  _Src_00.Data = local_80.Data;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  ppcVar2 = local_40 + 1;
  pFVar1 = (ForAnyElementType *)(local_40 + 2);
  *ppcVar2 = (code *)this;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  lVar3 = (longlong)local_78;
  *(int *)(local_40 + 3) = local_78;
  if (local_78 == 0) {
    *(int *)((longlong)local_40 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_78,0,pFVar1,local_78,(int *)((longlong)local_40 + 0x1c));
    memcpy(pFVar1->Data,_Src_00.Data,lVar3 * 0x60);
  }
  if (ppcVar2 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_68,"SetListenerTransforms()",false);
  if (local_68[0] != (code *)0x0) {
    ppcVar2 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar2 = local_40;
    }
    (**(code **)(*ppcVar2 + 0x10))();
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return;
}

// SetModHPFFrequency @ 14651fe00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetModHPFFrequency(FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959928>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x7b8,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959929>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x7b9,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModHPFFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetModHPFFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_58,"SetModHPFFrequency()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetModLPFFrequency @ 14651ffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetModLPFFrequency(FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959912>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x7a8,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959913>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x7a9,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModLPFFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetModLPFFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_58,"SetModLPFFrequency()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetModPitch @ 146520160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetModPitch(FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960015>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x80f,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960016>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x810,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModPitch'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetModPitch'::__l2::<lambda_1>,void>
                ::Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_58,"SetModPitch()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetModVolume @ 146520310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetModVolume(FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960000>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x800,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960001>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x801,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModVolume'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetModVolume'::__l2::<lambda_1>,void>
                ::Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_58,"SetModVolume()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetModulationRouting @ 1465204c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetModulationRouting
          (FMixerSourceManager *this,int param_1,FSoundModulationDefaultSettings *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  code **ppcVar5;
  undefined1 auStack_138 [32];
  FModulationDestination local_108;
  FModulationDestination local_f8;
  FModulationDestination local_e8;
  FModulationDestination local_d8;
  FMixerSourceManager *local_c8;
  int local_c0;
  FModulationDestination local_b8;
  FModulationDestination local_a8;
  FModulationDestination local_98;
  FModulationDestination local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar3 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FModulationDestination::FModulationDestination(&local_d8);
  pFVar4 = ::FName::FName(&local_78,"Volume");
  FModulationDestination::Init(&local_d8,*(uint *)&this->MixerDevice->field_0xa0,*pFVar4,false,true)
  ;
  FModulationDestination::UpdateModulators
            (&local_d8,&(param_2->VolumeModulationDestination).Modulators);
  FModulationDestination::FModulationDestination(&local_e8);
  pFVar4 = ::FName::FName(&local_70,"Pitch");
  FModulationDestination::Init
            (&local_e8,*(uint *)&this->MixerDevice->field_0xa0,*pFVar4,false,false);
  FModulationDestination::UpdateModulators
            (&local_e8,&(param_2->PitchModulationDestination).Modulators);
  FModulationDestination::FModulationDestination(&local_f8);
  pFVar4 = ::FName::FName(&local_68,"HPFCutoffFrequency");
  FModulationDestination::Init
            (&local_f8,*(uint *)&this->MixerDevice->field_0xa0,*pFVar4,false,false);
  FModulationDestination::UpdateModulators
            (&local_f8,&(param_2->HighpassModulationDestination).Modulators);
  FModulationDestination::FModulationDestination(&local_108);
  pFVar4 = ::FName::FName(&local_60,"LPFCutoffFrequency");
  FModulationDestination::Init
            (&local_108,*(uint *)&this->MixerDevice->field_0xa0,*pFVar4,false,false);
  FModulationDestination::UpdateModulators
            (&local_108,&(param_2->LowpassModulationDestination).Modulators);
  local_c8 = this;
  local_c0 = param_1;
  FModulationDestination::FModulationDestination(&local_b8,&local_d8);
  FModulationDestination::FModulationDestination(&local_a8,&local_f8);
  FModulationDestination::FModulationDestination(&local_98,&local_108);
  FModulationDestination::FModulationDestination(&local_88,&local_e8);
  local_58[0] = (code *)0x0;
  ppcVar5 = FMemory::Malloc(0x58,8);
  *ppcVar5 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`Audio::FMixerSourceManager::SetModulationRouting'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar5[1] = (code *)local_c8;
  *(int *)(ppcVar5 + 2) = local_c0;
  local_30 = ppcVar5;
  FModulationDestination::FModulationDestination((FModulationDestination *)(ppcVar5 + 3),&local_b8);
  FModulationDestination::FModulationDestination((FModulationDestination *)(ppcVar5 + 5),&local_a8);
  FModulationDestination::FModulationDestination((FModulationDestination *)(ppcVar5 + 7),&local_98);
  FModulationDestination::FModulationDestination((FModulationDestination *)(ppcVar5 + 9),&local_88);
  if (ppcVar5 + 1 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::SetModulationRouting'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_58,"SetModulationRouting()",false);
  if (local_58[0] != (code *)0x0) {
    ppcVar5 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar5 = local_30;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.DestinationData.SharedReferenceCount.ReferenceController);
  return;
}

// SetPitch @ 146520a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetPitch(FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959766>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x716,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959767>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x717,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetPitch'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetPitch'::__l2::<lambda_1>,void>::
                Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_58,"SetPitch()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// SetSourceBufferListener @ 146520ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetSourceBufferListener
          (FMixerSourceManager *this,int param_1,TSharedPtr<ISourceBufferListener,1> *param_2,
          bool param_3)

{
  ISourceBufferListener *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  code **ppcVar6;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959984>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x7f0,"SourceId < NumTotalSources");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959985>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x7f1,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = IsInAudioThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar1 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x30,8);
  local_30[1] = (code *)this;
  *(int *)(local_30 + 2) = param_1;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSourceBufferListener'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_30[3] = (code *)pIVar1;
  local_30[4] = (code *)pTVar2;
  *(bool *)(local_30 + 5) = param_3;
  if (local_30 != (code **)&DAT_fffffffffffffff8) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::SetSourceBufferListener'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_58,"SetSourceBufferListener()",false);
  if (local_58[0] != (code *)0x0) {
    ppcVar6 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar6 = local_30;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// SetSpatializationParams @ 146521090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetSpatializationParams
          (FMixerSourceManager *this,int param_1,FSpatializationParams *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FMixerSourceManager *pFVar5;
  FMixerSourceManager *pFVar6;
  FMixerSourceManager *pFVar7;
  FMixerSourceManager *pFVar8;
  FMixerSourceManager **ppFVar9;
  bool bVar10;
  uint uVar11;
  double *pdVar12;
  code **ppcVar13;
  code *pcVar14;
  code **ppcVar15;
  FMixerSourceManager **ppFVar16;
  longlong lVar17;
  undefined1 auStackY_188 [32];
  FMixerSourceManager *local_158;
  int iStack_150;
  double local_148 [32];
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->NumTotalSources <= param_1) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3835252409160959828>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                        ,0x754,"SourceId < NumTotalSources");
    if (bVar10) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  uVar11 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3835252409160959829>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                        ,0x755,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar10) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  bVar10 = IsInAudioThread();
  if (!bVar10) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_1614237125757107665>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                        ,0x22f,"IsInAudioThread()");
    if (bVar10) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  lVar17 = 2;
  pcVar14 = (code *)0x2;
  pdVar12 = local_148;
  do {
    dVar1 = (param_2->ListenerPosition).field0_0x0._s_0.Y;
    dVar2 = (param_2->ListenerPosition).field0_0x0._s_0.Z;
    dVar3 = *(double *)&param_2->field_0x18;
    *pdVar12 = (param_2->ListenerPosition).field0_0x0._s_0.X;
    pdVar12[1] = dVar1;
    dVar1 = (param_2->ListenerOrientation).X;
    dVar4 = (param_2->ListenerOrientation).Y;
    pdVar12[2] = dVar2;
    pdVar12[3] = dVar3;
    dVar2 = (param_2->ListenerOrientation).Z;
    dVar3 = (param_2->ListenerOrientation).W;
    pdVar12[4] = dVar1;
    pdVar12[5] = dVar4;
    dVar1 = (param_2->EmitterPosition).field0_0x0._s_0.X;
    dVar4 = (param_2->EmitterPosition).field0_0x0._s_0.Y;
    pdVar12[6] = dVar2;
    pdVar12[7] = dVar3;
    dVar2 = (param_2->EmitterPosition).field0_0x0._s_0.Z;
    dVar3 = (param_2->EmitterWorldPosition).field0_0x0._s_0.X;
    pdVar12[8] = dVar1;
    pdVar12[9] = dVar4;
    dVar1 = (param_2->EmitterWorldPosition).field0_0x0._s_0.Y;
    dVar4 = (param_2->EmitterWorldPosition).field0_0x0._s_0.Z;
    pdVar12[10] = dVar2;
    pdVar12[0xb] = dVar3;
    dVar2 = (param_2->EmitterWorldRotation).X;
    dVar3 = (param_2->EmitterWorldRotation).Y;
    pdVar12[0xc] = dVar1;
    pdVar12[0xd] = dVar4;
    pdVar12[0xe] = dVar2;
    pdVar12[0xf] = dVar3;
    pcVar14 = pcVar14 + -1;
    pdVar12 = pdVar12 + 0x10;
    param_2 = (FSpatializationParams *)&(param_2->EmitterWorldRotation).Z;
  } while (pcVar14 != (code *)0x0);
  local_158 = this;
  iStack_150 = param_1;
  local_48[0] = pcVar14;
  local_20 = FMemory::Malloc(0x120,0x10);
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSpatializationParams'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  ppcVar15 = local_20 + 2;
  ppFVar9 = &local_158;
  do {
    ppFVar16 = ppFVar9;
    ppcVar13 = ppcVar15;
    pFVar5 = ppFVar16[1];
    pFVar6 = ppFVar16[2];
    pFVar7 = ppFVar16[3];
    *ppcVar13 = (code *)*ppFVar16;
    ppcVar13[1] = (code *)pFVar5;
    pFVar5 = ppFVar16[4];
    pFVar8 = ppFVar16[5];
    ppcVar13[2] = (code *)pFVar6;
    ppcVar13[3] = (code *)pFVar7;
    pFVar6 = ppFVar16[6];
    pFVar7 = ppFVar16[7];
    ppcVar13[4] = (code *)pFVar5;
    ppcVar13[5] = (code *)pFVar8;
    pFVar5 = ppFVar16[8];
    pFVar8 = ppFVar16[9];
    ppcVar13[6] = (code *)pFVar6;
    ppcVar13[7] = (code *)pFVar7;
    pFVar6 = ppFVar16[10];
    pFVar7 = ppFVar16[0xb];
    ppcVar13[8] = (code *)pFVar5;
    ppcVar13[9] = (code *)pFVar8;
    pFVar5 = ppFVar16[0xc];
    pFVar8 = ppFVar16[0xd];
    ppcVar13[10] = (code *)pFVar6;
    ppcVar13[0xb] = (code *)pFVar7;
    pFVar6 = ppFVar16[0xe];
    pFVar7 = ppFVar16[0xf];
    ppcVar13[0xc] = (code *)pFVar5;
    ppcVar13[0xd] = (code *)pFVar8;
    ppcVar13[0xe] = (code *)pFVar6;
    ppcVar13[0xf] = (code *)pFVar7;
    lVar17 = lVar17 + -1;
    ppcVar15 = ppcVar13 + 0x10;
    ppFVar9 = ppFVar16 + 0x10;
  } while (lVar17 != 0);
  pFVar5 = ppFVar16[0x11];
  ppcVar13[0x10] = (code *)ppFVar16[0x10];
  ppcVar13[0x11] = (code *)pFVar5;
  if (local_20 + 2 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::SetSpatializationParams'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_48,"SetSpatializationParams()",false);
  if (local_48[0] != (code *)0x0) {
    ppcVar15 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar15 = local_20;
    }
    (**(code **)(*ppcVar15 + 0x10))();
  }
  return;
}

// SetSubBufferDelayForSound @ 146521340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetSubBufferDelayForSound
          (FMixerSourceManager *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160961659>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0xe7b,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  uVar3 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)((this->SourceInfos).AllocatorInstance.Data + (longlong)param_1 * 0x5d0 + 0x78) = param_2;
  return;
}

// SetSubmixSendInfo @ 146522360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetSubmixSendInfo
          (FMixerSourceManager *this,int param_1,FMixerSourceSubmixSend *param_2)

{
  float fVar1;
  atomic<int> aVar2;
  EMixerSourceSubmixSendStage EVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMixerSubmix *pFVar5;
  ISoundfieldFactory *pIVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  code **ppcVar10;
  atomic<int> *paVar11;
  atomic<int> *paVar12;
  undefined1 auStackY_c8 [32];
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (this->NumTotalSources <= param_1) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960030>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x81e,"SourceId < NumTotalSources");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160960031>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x81f,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar8 = IsInAudioThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar4 = (param_2->Submix).WeakReferenceCount.ReferenceController;
  pFVar5 = (param_2->Submix).Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar12 = &pTVar4->WeakReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  paVar11 = &pTVar4->WeakReferenceCount;
  EVar3 = param_2->SubmixSendStage;
  fVar1 = param_2->SendLevel;
  bVar8 = param_2->bIsMainSend;
  pIVar6 = param_2->SoundfieldFactory;
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x40,8);
  *(int *)(local_60 + 2) = param_1;
  local_60[3] = (code *)pFVar5;
  local_60[1] = (code *)this;
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::SetSubmixSendInfo'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_60[4] = (code *)pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  *(EMixerSourceSubmixSendStage *)(local_60 + 6) = EVar3;
  *(float *)(local_60 + 5) = fVar1;
  *(bool *)((longlong)local_60 + 0x2c) = bVar8;
  local_60[7] = (code *)pIVar6;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::SetSubmixSendInfo'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_88,"SetSubmixSendInfo()",false);
  if (local_88[0] != (code *)0x0) {
    ppcVar10 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar10 = local_60;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar2 = *paVar11;
    *paVar11 = (atomic<int>)((int)*paVar11 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// SetVolume @ 146522a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::SetVolume(FMixerSourceManager *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_58 [2];
  undefined **local_48;
  FMixerSourceManager *local_40;
  int local_38;
  float local_34;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959780>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x724,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959781>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x725,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::SetVolume'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::SetVolume'::__l2::<lambda_1>,void>::
                Call;
  local_40 = this;
  local_38 = param_1;
  local_34 = param_2;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_58,"SetVolume()",false);
  if (local_58[0] != (code *)0x0) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// StartAudioBus @ 1465235a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::StartAudioBus
          (FMixerSourceManager *this,FAudioBusKey param_1,FString *param_2,int param_3,bool param_4)

{
  int *piVar1;
  TArray<Audio::FAudioBusKey,TSizedDefaultAllocator<32>_> *pTVar2;
  FAudioBusKey *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAudioBusKey *pFVar7;
  longlong lVar8;
  code **ppcVar9;
  longlong lVar10;
  FAudioBusKey local_res10 [3];
  undefined1 auStack_e8 [32];
  FAudioBusKey *local_c8;
  FAudioBusKey *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  FMixerSourceManager *local_98;
  FAudioBusKey local_90;
  int local_88;
  bool local_84;
  FString local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pTVar2 = &this->AudioBusKeys_AudioThread;
  pFVar3 = (FAudioBusKey *)(pTVar2->AllocatorInstance).Data;
  lVar10 = (longlong)(this->AudioBusKeys_AudioThread).ArrayNum;
  if (pFVar3 != pFVar3 + lVar10) {
    local_res10[0].InstanceId = param_1.InstanceId;
    pFVar7 = pFVar3;
    do {
      if ((pFVar7->ObjectId == param_1.ObjectId) &&
         (pFVar7->InstanceId == local_res10[0].InstanceId)) {
        return;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar3 + lVar10);
  }
  local_res10[0] = param_1;
  if ((pFVar3 <= local_res10) &&
     (lVar8 = (longlong)(this->AudioBusKeys_AudioThread).ArrayMax, local_res10 < pFVar3 + lVar8)) {
    local_a8 = 8;
    local_c8 = local_res10;
    local_c0 = pFVar3;
    local_b8 = lVar8;
    local_b0 = lVar10;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->AudioBusKeys_AudioThread).ArrayNum;
  piVar1 = &(this->AudioBusKeys_AudioThread).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AudioBusKeys_AudioThread).ArrayNum = iVar6 + 1;
  *(FAudioBusKey *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  TraceAudioBusStartMessage
            (*(uint *)&this->MixerDevice->field_0xa0,local_res10[0].ObjectId,param_2,param_3);
  local_90 = local_res10[0];
  local_84 = param_4;
  local_98 = this;
  local_88 = param_3;
  ::FString::FString(&local_80,param_2);
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x30,8);
  ppcVar9 = local_40 + 1;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::StartAudioBus'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar9 = (code *)local_98;
  *(FAudioBusKey *)(local_40 + 2) = local_90;
  *(int *)(local_40 + 3) = local_88;
  *(bool *)((longlong)local_40 + 0x1c) = local_84;
  ::FString::FString((FString *)(local_40 + 4),&local_80);
  if (ppcVar9 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::StartAudioBus'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_68,"StartAudioBus()",false);
  if (local_68[0] != (code *)0x0) {
    ppcVar9 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar9 = local_40;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

// StartAudioBus @ 1465237a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::StartAudioBus
          (FMixerSourceManager *this,FAudioBusKey param_1,int param_2,bool param_3)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  StartAudioBus(this,param_1,&local_18,param_2,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// StartAudioBusEnvelopeFollowerFromCVar @ 146523bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::StartAudioBusEnvelopeFollowerFromCVar
          (FMixerSourceManager *this,uint param_1)

{
  undefined1 *puVar1;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [4];
  uint local_f4;
  FEnvelopeFollowerInitParams local_f0;
  int local_d0;
  int local_cc;
  LARGE_INTEGER local_c8;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  undefined4 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f4 = param_1;
  bVar9 = IsInAudioThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160958473>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x209,"IsInAudioThread()"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar1 = &(this->AudioBuses).field_0x10;
  iStack_b8 = 0;
  iVar4 = *(int *)&(this->AudioBuses).field_0x28;
  pTVar2 = &this->AudioBuses;
  local_a0 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->AudioBuses).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_146523cbd;
      uVar13 = puVar16[lVar10 + 1];
    }
    uStack_b4 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_b4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d0 = (int)lVar10;
    iStack_a4 = local_a0 + -1 + local_d0;
    if (iVar4 < iStack_a4) {
      iStack_a4 = iVar4;
    }
  }
LAB_146523cbd:
  uVar13 = *(uint *)&(this->AudioBuses).field_0x28;
  uStack_9c = local_44;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_98 = *(int *)&(this->AudioBuses).field_0x8 - *(int *)&(this->AudioBuses).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = pTVar2;
  local_b0 = puVar1;
  local_90 = pTVar2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->AudioBuses).field_0x28;
  if (uVar13 != uVar5) {
    puVar15 = *(undefined1 **)&(this->AudioBuses).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146523dc0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_cc = (int)lVar10;
    uVar13 = local_cc + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_146523dc0:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_f8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (((TStack_88.CurrentBitIndex == uVar13) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    lVar10 = *(longlong *)pTVar8;
    lVar14 = (longlong)TStack_88.CurrentBitIndex * 0x20;
    if ((*(uint *)(lVar14 + lVar10) == local_f4) &&
       (lVar6 = *(longlong *)(lVar14 + 8 + lVar10), lVar6 != 0)) {
      if (*(char *)(lVar6 + 0x234) == '\0') {
        local_f0.Mode = Peak;
        local_f0.bIsAnalog = true;
        local_f0.AnalysisWindowMsec = 5.0;
        local_f0.NumChannels = *(int *)(lVar6 + 0x5c);
        local_f0.SampleRate = (float)*(int *)&this->MixerDevice->field_0x84;
        local_f0.AttackTimeMsec = 10.0;
        local_f0.ReleaseTimeMsec = 500.0;
        FEnvelopeFollower::Init((FEnvelopeFollower *)(lVar6 + 0x1a8),&local_f0);
        *(undefined8 *)(lVar6 + 0x210) = 0;
        *(undefined8 *)(lVar6 + 0x218) = 0;
        *(undefined8 *)(lVar6 + 0x220) = 0;
        *(undefined8 *)(lVar6 + 0x228) = 0;
        *(undefined1 *)(lVar6 + 0x234) = 1;
      }
      if (-1 < AudioChannel->Enabled) {
        if ((*(longlong *)(lVar14 + 8 + lVar10) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(char *)(*(longlong *)(lVar14 + 8 + lVar10) + 0x234) != '\0') &&
           (-1 < AudioChannel->Enabled)) {
          UE::Trace::Private::FLogScope::Enter<FAudioAudioBusEnvelopeFollowerEnabledFields>
                    ((TLogScope<0> *)&local_40);
          *local_40 = *(undefined4 *)&this->MixerDevice->field_0xa0;
          local_40[1] = *(undefined4 *)(lVar14 + lVar10);
          QueryPerformanceCounter(&local_c8);
          *(LARGE_INTEGER *)(local_40 + 2) = local_c8;
          *(undefined1 *)(local_40 + 4) = 1;
          *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
        }
      }
      return;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// Stop @ 146524eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::Stop(FMixerSourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_88 [32];
  code *local_48 [2];
  undefined **local_38;
  FMixerSourceManager *local_30;
  int local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->MixerDevice != (FMixerDevice *)0x0) {
    if (this->NumTotalSources <= param_1) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160959667>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x6b3,"SourceId < NumTotalSources");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = 0;
    if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] ==
        (FScriptContainerElement)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160959671>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x6b7,"GameThreadInfo.bIsBusy[SourceId]");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = IsInAudioThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757107665>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x22f,"IsInAudioThread()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerSourceManager::Stop'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::Stop'::__l2::<lambda_1>,void>::
                  Call;
    local_30 = this;
    local_28 = param_1;
    AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48,"Stop()",false);
    if (local_48[0] != (code *)0x0) {
      pppuVar4 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar4 = local_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// StopAudioBus @ 1465250c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::StopAudioBus(FMixerSourceManager *this,FAudioBusKey param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined ***pppuVar3;
  FAudioBusKey local_res10 [3];
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FMixerSourceManager *local_30;
  FAudioBusKey local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pFVar2 = (this->AudioBusKeys_AudioThread).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->AudioBusKeys_AudioThread).ArrayNum * 8;
  if (pFVar2 != pFVar1) {
    local_res10[0].InstanceId = param_1.InstanceId;
    while ((*(uint *)pFVar2 != param_1.ObjectId ||
           (*(uint *)(pFVar2 + 4) != local_res10[0].InstanceId))) {
      pFVar2 = pFVar2 + 8;
      if (pFVar2 == pFVar1) {
        return;
      }
    }
    local_res10[0] = param_1;
    TArray<Audio::FAudioBusKey,TSizedDefaultAllocator<32>_>::Remove
              (&this->AudioBusKeys_AudioThread,local_res10);
    TraceAudioBusStopMessage(*(uint *)&this->MixerDevice->field_0xa0,local_res10[0].ObjectId);
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_28 = local_res10[0];
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,void>
                  ::Call;
    local_30 = this;
    AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48,"StopAudioBus()",false);
    if (local_48[0] != (code *)0x0) {
      pppuVar3 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar3 = local_20;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  return;
}

// StopAudioBusEnvelopeFollowerFromCVar @ 146525410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::StopAudioBusEnvelopeFollowerFromCVar
          (FMixerSourceManager *this,uint param_1)

{
  undefined1 *puVar1;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [4];
  int local_e4;
  int local_e0;
  FMixerSourceManager *local_d8;
  LARGE_INTEGER local_d0;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  undefined4 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d8 = this;
  bVar8 = IsInAudioThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3835252409160958501>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                         ,0x225,"IsInAudioThread()"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_c0 = 0;
  puVar1 = &(this->AudioBuses).field_0x10;
  iVar4 = *(int *)&(this->AudioBuses).field_0x28;
  pTVar2 = &this->AudioBuses;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->AudioBuses).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14652550e;
      uVar12 = puVar13[lVar9 + 1];
    }
    uStack_bc = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_bc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e4 = (int)lVar9;
    iStack_ac = local_e4 + -1 + local_a8;
    if (iVar4 < iStack_ac) {
      iStack_ac = iVar4;
    }
  }
LAB_14652550e:
  uVar12 = *(uint *)&(this->AudioBuses).field_0x28;
  uStack_a4 = local_4c;
  iStack_a0 = *(int *)&(this->AudioBuses).field_0x8 - *(int *)&(this->AudioBuses).field_0x34;
  uVar11 = uVar12 & 0xffffffe0;
  uStack_b0 = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_90.CurrentBitIndex = iStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = pTVar2;
  local_b8 = puVar1;
  local_98 = pTVar2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->AudioBuses).field_0x28;
  if (uVar12 != uVar5) {
    puVar14 = *(undefined1 **)&(this->AudioBuses).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146525610;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e0 = (int)lVar9;
    uVar12 = local_e0 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_146525610:
  while( true ) {
    pTVar7 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_e8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (((TStack_90.CurrentBitIndex == uVar12) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    puVar13 = (uint *)((longlong)TStack_90.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    if ((*puVar13 == param_1) && (*(longlong *)(puVar13 + 2) != 0)) {
      *(undefined1 *)(*(longlong *)(puVar13 + 2) + 0x234) = 0;
      if (-1 < AudioChannel->Enabled) {
        if ((*(longlong *)(puVar13 + 2) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(char *)(*(longlong *)(puVar13 + 2) + 0x234) == '\0') && (-1 < AudioChannel->Enabled))
        {
          UE::Trace::Private::FLogScope::Enter<FAudioAudioBusEnvelopeFollowerEnabledFields>
                    ((TLogScope<0> *)&local_48);
          *local_48 = *(undefined4 *)&local_d8->MixerDevice->field_0xa0;
          local_48[1] = *puVar13;
          QueryPerformanceCounter(&local_d0);
          *(LARGE_INTEGER *)(local_48 + 2) = local_d0;
          *(undefined1 *)(local_48 + 4) = 0;
          *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
        }
      }
      return;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// StopFade @ 146525af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::StopFade(FMixerSourceManager *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined1 auStackY_78 [32];
  code *local_48 [2];
  undefined **local_38;
  FMixerSourceManager *local_30;
  int local_28;
  int local_24;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (this->NumTotalSources <= param_1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959703>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x6d7,"SourceId < NumTotalSources");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959704>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x6d8,"GameThreadInfo.bIsBusy[SourceId]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160959705>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0x6d9,"NumFrames > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x22f,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::StopFade'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::StopFade'::__l2::<lambda_1>,void>::
                Call;
  local_30 = this;
  local_28 = param_1;
  local_24 = param_2;
  AudioMixerThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48,"StopFade()",false);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// StopInternal @ 146525cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::StopInternal(FMixerSourceManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *this_00;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar4 = uVar7;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->SourceInfos).AllocatorInstance.Data;
  lVar6 = (longlong)param_1 * 0x5d0;
  pFVar1[lVar6 + 0x520] = (FScriptContainerElement)((byte)pFVar1[lVar6 + 0x520] & 99);
  if (((byte)pFVar1[lVar6 + 0x520] & 0x20) != 0) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      if ((*(longlong *)(pFVar1 + lVar6 + 0x4e8) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FName *)(**(code **)(**(longlong **)(pFVar1 + lVar6 + 0x4e8) + 0x30))
                                   (*(longlong **)(pFVar1 + lVar6 + 0x4e8),local_res8);
      ::FName::ToString(this_00,&local_38);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    FQuartzQuantizedCommandHandle::Cancel((FQuartzQuantizedCommandHandle *)(pFVar1 + lVar6 + 0x4e0))
    ;
    pFVar1[lVar6 + 0x520] = (FScriptContainerElement)((byte)pFVar1[lVar6 + 0x520] & 0xdf);
  }
  uVar4 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar4 = uVar7;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((byte)(this->SourceInfos).AllocatorInstance.Data[lVar6 + 0x5b0] & 1) != 0) {
    ::FString::PrintfImpl(&local_48,L"Is immediately stopping");
    uVar4 = 0;
    if (param_1 < (this->SourceInfos).ArrayNum) {
      uVar4 = uVar7;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->SourceInfos).AllocatorInstance.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = *(int *)(pFVar1 + lVar6 + 0x5c0);
    lVar5 = (longlong)local_60;
    _Src = *(void **)(pFVar1 + lVar6 + 0x5b8);
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,_Src,lVar5 * 2);
    }
    ::FString::PrintfImpl(&local_58,L"<Debug Sound Log> [Id=%d][Name=%s]: %s");
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (4 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UnPauseSoundForQuantizationCommand @ 1465286a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::UnPauseSoundForQuantizationCommand
          (FMixerSourceManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  
  if (this->NumTotalSources <= param_1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3835252409160961669>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                       ,0xe85,"SourceId < NumTotalSources");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  uVar4 = 0;
  if (param_1 < (this->SourceInfos).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SourceInfos).AllocatorInstance.Data;
  bVar5 = (byte)pFVar1[(longlong)param_1 * 0x5d0 + 0x520] & 0xdf;
  pFVar1[(longlong)param_1 * 0x5d0 + 0x520] =
       (FScriptContainerElement)((~(bVar5 >> 2) ^ bVar5) & 4 ^ bVar5);
  FQuartzQuantizedCommandHandle::Reset
            ((FQuartzQuantizedCommandHandle *)(pFVar1 + (longlong)param_1 * 0x5d0 + 0x4e0));
  return;
}

// UnregisterAudioBusEnvelopeFollowerCVars @ 146529250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::UnregisterAudioBusEnvelopeFollowerCVars(FMixerSourceManager *this)

{
  code *pcVar1;
  bool bVar2;
  
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
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->StartAudioBusEnvelopeFollowerCVar,1);
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
                    /* WARNING: Could not recover jumptable at 0x000146529304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->StopAudioBusEnvelopeFollowerCVar,1);
  return;
}

// Update @ 14652a9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::Update(FMixerSourceManager *this,bool param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FAudioMixerThreadCommand *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER local_98 [2];
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  FScriptContainerElement local_58;
  longlong local_50;
  LARGE_INTEGER local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757107665>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x22f,"IsInAudioThread()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar17 = 0;
  uVar15 = uVar17;
  uVar19 = uVar17;
  if (0 < this->NumTotalSources) {
    do {
      uVar14 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar14 < (this->GameThreadInfo).bIsBusy.ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->GameThreadInfo).bIsBusy.AllocatorInstance.Data[uVar19] ==
          (FScriptContainerElement)0x0) {
        pFVar12 = (this->GameThreadInfo).FreeSourceIndices.AllocatorInstance.Data;
        pFVar16 = pFVar12 + (longlong)(this->GameThreadInfo).FreeSourceIndices.ArrayNum * 4;
        for (; pFVar12 != pFVar16; pFVar12 = pFVar12 + 4) {
          if (*(uint *)pFVar12 == uVar14) goto LAB_14652aac3;
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3835252409160958738>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                           ,0x312,"GameThreadInfo.FreeSourceIndices.Contains(i) == true");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
LAB_14652aac3:
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar19 = uVar19 + 1;
    } while ((int)(uVar14 + 1) < this->NumTotalSources);
  }
  bVar5 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar5) {
    cVar6 = (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x20))
                      (this->CommandsProcessedEvent,0,0);
    if (cVar6 != '\0') {
      bVar5 = (this->RenderThreadCommandBufferIndex).Counter == 0;
      uVar9 = bVar5 - 1 & 1;
      if ((FlushCommandBufferOnTimeoutCvar != 0) &&
         (this->CommandBuffers[uVar9].SourceCommandQueue.ArrayNum != 0)) {
        if (2 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
        uVar15 = uVar17;
        if (0 < this->CommandBuffers[uVar9].SourceCommandQueue.ArrayNum) {
          do {
            uVar18 = (uint)uVar17;
            uVar14 = 0;
            if ((int)uVar18 < this->CommandBuffers[uVar9].SourceCommandQueue.ArrayNum) {
              uVar14 = ~uVar18 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = this->CommandBuffers[uVar9].SourceCommandQueue.AllocatorInstance.Data + uVar15
            ;
            local_88 = *(code **)pFVar16;
            local_60 = (longlong *)0x0;
            if (local_88 != (code *)0x0) {
              pFVar12 = *(FScriptContainerElement **)(pFVar16 + 0x28);
              if (*(FScriptContainerElement **)(pFVar16 + 0x28) == (FScriptContainerElement *)0x0) {
                pFVar12 = pFVar16 + 0x10;
              }
              (*(code *)**(undefined8 **)pFVar12)();
            }
            local_58 = pFVar16[0x30];
            local_50 = *(longlong *)(pFVar16 + 0x38);
            local_48 = *(LARGE_INTEGER *)(pFVar16 + 0x40);
            QueryPerformanceCounter(local_98);
            local_48 = local_98[0];
            UE::Core::Private::Function::CheckCallable(local_88);
            pcVar4 = local_88;
            plVar13 = local_78;
            if (local_60 != (longlong *)0x0) {
              plVar13 = local_60;
            }
            uVar10 = (**(code **)(*plVar13 + 8))();
            (*pcVar4)(uVar10);
            local_48 = (LARGE_INTEGER)0x0;
            LOCK();
            (this->NumCommands).Counter = (this->NumCommands).Counter + -1;
            UNLOCK();
            LOCK();
            __GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value =
                 (atomic<__int64>)
                 ((longlong)__GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value + -1);
            UNLOCK();
            if (-1 < CountersChannel->Enabled) {
              if (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId ==
                  (atomic<unsigned_int>)0x0) {
                uVar8 = FCountersTrace::OutputInitCounter
                                  (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterName,
                                   TraceCounterType_Int,
                                   __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterFlags &
                                   0xf);
                LOCK();
                if (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId ==
                    (atomic<unsigned_int>)0x0) {
                  __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._2_2_ = 0;
                  __GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._0_2_ = uVar8;
                }
                UNLOCK();
              }
              FCountersTrace::OutputSetValue
                        (__GTraceCounterAudioMixerSourceManager_TotalQdCmds.CounterId._0_2_,
                         (long64)__GTraceCounterAudioMixerSourceManager_TotalQdCmds.Value);
            }
            if (local_88 != (code *)0x0) {
              plVar13 = local_78;
              if (local_60 != (longlong *)0x0) {
                plVar13 = local_60;
              }
              (**(code **)(*plVar13 + 0x10))();
            }
            uVar17 = (ulonglong)(uVar18 + 1);
            uVar15 = uVar15 + 0x50;
          } while ((int)(uVar18 + 1) < this->CommandBuffers[uVar9].SourceCommandQueue.ArrayNum);
        }
        piVar1 = &this->CommandBuffers[uVar9].SourceCommandQueue.ArrayMax;
        pFVar3 = (FAudioMixerThreadCommand *)
                 this->CommandBuffers[uVar9].SourceCommandQueue.AllocatorInstance.Data;
        iVar2 = this->CommandBuffers[uVar9].SourceCommandQueue.ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int>(pFVar3,iVar2);
          this->CommandBuffers[uVar9].SourceCommandQueue.ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,0,&this->CommandBuffers[uVar9].SourceCommandQueue.AllocatorInstance
                       ,0,piVar1);
          }
        }
        else {
          DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int>(pFVar3,iVar2);
          this->CommandBuffers[uVar9].SourceCommandQueue.ArrayNum = 0;
        }
      }
      lpCriticalSection = &this->CommandBufferIndexCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      LOCK();
      (this->RenderThreadCommandBufferIndex).Counter = (uint)bVar5;
      UNLOCK();
      (**(code **)(this->CommandsProcessedEvent->_padding_ + 0x18))();
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    uVar9 = (this->RenderThreadCommandBufferIndex).Counter;
    iVar2 = (this->RenderThreadCommandBufferIndex).Counter;
    if ((1 < uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentRenderIndex == 0 || CurrentRenderIndex == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.cpp"
                           ,0x342,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar9 == (iVar2 == 0)) {
      lVar11 = 0xa0;
      if (iVar2 != 0) {
        lVar11 = 0xb8;
      }
      if ((*(int *)((longlong)(this->EffectChainMutationCriticalSection).CriticalSection.Opaque1 +
                   lVar11 + -0x18) != 0) && (2 < (byte)LogAudioMixer._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      LOCK();
      this->bPumpQueue = (FThreadSafeBool)0x1;
      UNLOCK();
    }
  }
  return;
}

// UpdateBuses @ 14652aeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::UpdateBuses(FMixerSourceManager *this)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *pTVar18;
  undefined4 *puVar19;
  bool bVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  undefined1 *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  FMixerSourceManager *pFVar34;
  uint uVar35;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  uint local_104;
  FMixerSourceManager *local_100;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int local_c4;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  TMap<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 *local_78;
  longlong local_70;
  undefined4 *local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  LOCK();
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x9;
  UNLOCK();
  puVar1 = &(this->AudioBuses).field_0x10;
  iStack_f0 = 0;
  local_f8 = &this->AudioBuses;
  local_d8 = 0;
  uStack_ec = 1;
  iVar21 = *(int *)&(this->AudioBuses).field_0x28;
  uVar35 = (uint)AudioMixerChannel->Enabled >> 0x1f;
  iStack_dc = 0;
  if (iVar21 != 0) {
    puVar25 = *(uint **)&(this->AudioBuses).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar1;
    }
    uVar29 = *puVar25;
    while (uVar29 == 0) {
      lVar24 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar21;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14652af9d;
      uVar29 = puVar25[lVar24 + 1];
    }
    uStack_ec = -uVar29 & uVar29;
    uVar32 = (ulonglong)uStack_ec * 2 + 1;
    lVar24 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_c8 = (int)lVar24;
    iStack_dc = local_d8 + -1 + local_c8;
    if (iVar21 < iStack_dc) {
      iStack_dc = iVar21;
    }
  }
LAB_14652af9d:
  uVar29 = *(uint *)&(this->AudioBuses).field_0x28;
  iStack_d0 = *(int *)&(this->AudioBuses).field_0x8 - *(int *)&(this->AudioBuses).field_0x34;
  uVar28 = uVar29 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uStack_ec,iStack_f0);
  uStack_e0 = 0xffffffff;
  TStack_a0.CurrentBitIndex = iStack_dc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar29 >> 5;
  TStack_a0._28_4_ = iStack_dc;
  TStack_a0.BaseBitIndex = local_d8;
  uStack_80 = CONCAT44(uStack_cc,iStack_d0);
  local_104 = uVar35;
  local_100 = this;
  local_e8 = puVar1;
  iStack_d4 = iStack_dc;
  local_c0 = local_f8;
  local_a8 = local_f8;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar29 < 0) || (iVar21 < (int)uVar29)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar17 = _UNK_15061cc7c;
  uVar16 = _UNK_15061cc78;
  uVar15 = _UNK_15061cc74;
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar13 = __real_322bcc77;
  uVar2 = *(uint *)&(this->AudioBuses).field_0x28;
  if (uVar29 != uVar2) {
    puVar31 = *(undefined1 **)&(this->AudioBuses).field_0x20;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = puVar1;
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar27 * 4);
    while (uVar29 == 0) {
      lVar24 = (longlong)iVar27;
      uVar28 = uVar28 + 0x20;
      iVar27 = iVar27 + 1;
      uVar29 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_14652b0c0;
      uVar29 = *(uint *)(puVar31 + lVar24 * 4 + 4);
    }
    uVar32 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    local_c4 = (int)lVar24;
    uVar29 = local_c4 + -1 + uVar28;
    if ((int)uVar2 < (int)uVar29) {
      uVar29 = uVar2;
    }
  }
LAB_14652b0c0:
  pTVar18 = local_a8;
  if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
    local_108[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,TSharedPtr<Audio::FMixerAudioBus,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
  }
  if (((TStack_a0.CurrentBitIndex == uVar29) &&
      (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar18 == local_c0))
  {
    return;
  }
  lVar24 = *(longlong *)pTVar18;
  lVar30 = (longlong)TStack_a0.CurrentBitIndex * 0x20;
  lVar23 = *(longlong *)(lVar30 + 8 + lVar24);
  if (lVar23 != 0) {
    if ((AudioMixerCVars::UseRenderScheduler != 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("!AudioMixerCVars::UseRenderScheduler",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerBus.cpp"
                            ,0x34,L""), bVar20)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int *)(lVar23 + 0x58) = 1 - *(int *)(lVar23 + 0x58);
    if ((char)uVar35 == '\0') {
      if ((*(longlong *)(lVar30 + 8 + lVar24) == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar23 = *(longlong *)(lVar30 + 8 + lVar24);
      lVar3 = *(longlong *)(lVar23 + 0x38 + (longlong)*(int *)(lVar23 + 0x58) * 0x10);
      if ((lVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar23 = *(longlong *)(lVar30 + 8 + lVar24);
      if ((lVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar22 = *(longlong *)(lVar30 + 8 + lVar24);
      lVar26 = 0;
      bVar20 = true;
      uVar33 = (ulonglong)(*(int *)(lVar23 + 0x5c) * *(int *)(lVar22 + 0x60));
      uVar32 = uVar33 & 0xfffffffffffffff0;
      if (0 < (longlong)uVar32) {
        fVar5 = GlobalVectorConstants::SmallNumber.m128_f32[0];
        fVar6 = GlobalVectorConstants::SmallNumber.m128_f32[1];
        fVar7 = GlobalVectorConstants::SmallNumber.m128_f32[2];
        fVar8 = GlobalVectorConstants::SmallNumber.m128_f32[3];
        puVar25 = (uint *)(lVar3 + 0x20);
        do {
          auVar9._4_4_ = -(uint)(fVar6 < (float)(puVar25[-7] & uVar15));
          auVar9._0_4_ = -(uint)(fVar5 < (float)(puVar25[-8] & uVar14));
          auVar9._8_4_ = -(uint)(fVar7 < (float)(puVar25[-6] & uVar16));
          auVar9._12_4_ = -(uint)(fVar8 < (float)(puVar25[-5] & uVar17));
          iVar21 = movmskps((int)lVar22,auVar9);
          if ((((iVar21 != 0) ||
               (auVar10._4_4_ = -(uint)(fVar6 < (float)(uVar15 & puVar25[-3])),
               auVar10._0_4_ = -(uint)(fVar5 < (float)(uVar14 & puVar25[-4])),
               auVar10._8_4_ = -(uint)(fVar7 < (float)(uVar16 & puVar25[-2])),
               auVar10._12_4_ = -(uint)(fVar8 < (float)(uVar17 & puVar25[-1])),
               iVar21 = movmskps(0,auVar10), iVar21 != 0)) ||
              (auVar11._4_4_ = -(uint)(fVar6 < (float)(uVar15 & puVar25[1])),
              auVar11._0_4_ = -(uint)(fVar5 < (float)(uVar14 & *puVar25)),
              auVar11._8_4_ = -(uint)(fVar7 < (float)(uVar16 & puVar25[2])),
              auVar11._12_4_ = -(uint)(fVar8 < (float)(uVar17 & puVar25[3])),
              iVar21 = movmskps(0,auVar11), iVar21 != 0)) ||
             (auVar12._4_4_ = -(uint)(fVar6 < (float)(uVar15 & puVar25[5])),
             auVar12._0_4_ = -(uint)(fVar5 < (float)(uVar14 & puVar25[4])),
             auVar12._8_4_ = -(uint)(fVar7 < (float)(uVar16 & puVar25[6])),
             auVar12._12_4_ = -(uint)(fVar8 < (float)(uVar17 & puVar25[7])),
             iVar21 = movmskps(0,auVar12), iVar21 != 0)) {
            bVar20 = false;
            lVar26 = 0x7fffffff;
            break;
          }
          lVar26 = lVar26 + 0x10;
          puVar25 = puVar25 + 0x10;
          lVar22 = 0;
        } while (lVar26 < (longlong)uVar32);
      }
      do {
        if ((longlong)uVar33 <= lVar26) goto LAB_14652b2bb;
        if (fVar13 < (float)(*(uint *)(lVar3 + lVar26 * 4) & uVar14)) {
          bVar20 = false;
          goto LAB_14652b2bb;
        }
        lVar26 = lVar26 + 1;
      } while( true );
    }
  }
  goto LAB_14652b48b;
LAB_14652b2bb:
  pFVar34 = local_100;
  if (-1 < AudioChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAudioAudioBusHasActivityFields>((TLogScope<0> *)&local_78)
    ;
    puVar19 = local_78;
    pFVar34 = local_100;
    *local_78 = *(undefined4 *)&local_100->MixerDevice->field_0xa0;
    local_78[1] = *(undefined4 *)(lVar30 + lVar24);
    QueryPerformanceCounter(&local_b8);
    *(LARGE_INTEGER *)(puVar19 + 2) = local_b8;
    *(bool *)(puVar19 + 4) = !bVar20;
    *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
  }
  if ((*(longlong *)(lVar30 + 8 + lVar24) == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar35 = local_104;
  if ((*(char *)(*(longlong *)(lVar30 + 8 + lVar24) + 0x234) != '\0') &&
     (-1 < AudioChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FAudioAudioBusEnvelopeValuesFields>
              ((TLogScope<1> *)&local_68);
    puVar19 = local_68;
    *local_68 = *(undefined4 *)&pFVar34->MixerDevice->field_0xa0;
    local_68[1] = *(undefined4 *)(lVar30 + lVar24);
    QueryPerformanceCounter(&local_b0);
    *(LARGE_INTEGER *)(puVar19 + 2) = local_b0;
    if ((*(longlong *)(lVar30 + 8 + lVar24) == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar23 = *(longlong *)(lVar30 + 8 + lVar24);
    iVar21 = *(int *)(lVar23 + 0x5c);
    if ((lVar23 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Trace::Private::Field_WriteAuxData
              (3,(uchar *)(*(longlong *)(lVar30 + 8 + lVar24) + 0x210),iVar21 * 4 & 0x7fffc);
    lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar24 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar24 = *(longlong *)(lVar24 + 0x20);
    **(undefined1 **)(lVar24 + 0x20) = 6;
    lVar23 = *(longlong *)(lVar24 + 0x20) + 1;
    *(longlong *)(lVar24 + 0x20) = lVar23;
    if (lVar24 != local_60) {
      *(longlong *)(lVar24 + 0x28) = lVar23;
    }
    *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
    uVar35 = local_104;
  }
LAB_14652b48b:
  TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  goto LAB_14652b0c0;
}

// UpdateDeviceChannelCount @ 14652b780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::UpdateDeviceChannelCount(FMixerSourceManager *this,int param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [48];
  code *local_48 [2];
  undefined **local_38;
  FMixerSourceManager *local_30;
  int local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,void>
                ::Call;
  local_30 = this;
  local_28 = param_1;
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_48,"UpdateDeviceChannelCount()",false);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// UpdatePendingReleaseData @ 14652ce30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::UpdatePendingReleaseData(FMixerSourceManager *this,bool param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  LOCK();
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0x4;
  UNLOCK();
  uVar8 = (this->PendingSourceBuffers).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->PendingSourceBuffers).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar1 = *(longlong *)((this->PendingSourceBuffers).AllocatorInstance.Data + lVar9);
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x100);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      plVar2 = *(longlong **)(lVar1 + 0x70);
      if (param_1) {
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
          puVar3 = *(undefined8 **)(lVar1 + 0x70);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(lVar1 + 0x70) = 0;
        }
LAB_14652cf29:
        LeaveCriticalSection(lpCriticalSection);
LAB_14652cf32:
        uVar7 = 0;
        if ((int)uVar8 < (this->PendingSourceBuffers).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<TSharedPtr<Audio::FMixerSourceBuffer,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->PendingSourceBuffers,uVar8);
      }
      else {
        if (plVar2 == (longlong *)0x0) goto LAB_14652cf29;
        cVar6 = (**(code **)(*plVar2 + 8))();
        LeaveCriticalSection(lpCriticalSection);
        if (cVar6 != '\0') goto LAB_14652cf32;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// UpdateSourceEffectChain @ 14652dc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceManager::UpdateSourceEffectChain
          (FMixerSourceManager *this,uint param_1,
          TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FSourceEffectChainEntry *pFVar3;
  ForAnyElementType FVar4;
  code **ppcVar5;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  undefined1 local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar2 = param_2->ArrayNum;
  pFVar3 = (FSourceEffectChainEntry *)(param_2->AllocatorInstance).Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = iVar2;
  if (iVar2 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_88,iVar2,&local_7c);
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>(local_88.Data,pFVar3,iVar2);
  }
  local_68[0] = (code *)0x0;
  local_78 = param_3;
  ppcVar5 = FMemory::Malloc(0x30,8);
  iVar2 = local_80;
  FVar4.Data = local_88.Data;
  *ppcVar5 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  pFVar1 = (ForAnyElementType *)(ppcVar5 + 3);
  ppcVar5[1] = (code *)this;
  *(uint *)(ppcVar5 + 2) = param_1;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(int *)(ppcVar5 + 4) = local_80;
  local_40 = ppcVar5;
  if (local_80 == 0) {
    *(int *)((longlong)ppcVar5 + 0x24) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_80,0,pFVar1,local_80,(int *)((longlong)ppcVar5 + 0x24));
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
              (pFVar1->Data,(FSourceEffectChainEntry *)FVar4.Data,iVar2);
  }
  *(undefined1 *)(ppcVar5 + 5) = local_78;
  if (ppcVar5 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioMixerThreadCommand
            (this,(TFunction<void___cdecl(void)> *)local_68,"UpdateSourceEffectChain()",true);
  if (local_68[0] != (code *)0x0) {
    ppcVar5 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar5 = local_40;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  if ((FSourceEffectChainEntry *)local_88.Data != (FSourceEffectChainEntry *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// UpdateSourceState @ 14652de10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::UpdateSourceState(FMixerSourceManager *this)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  LOCK();
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0xc;
  UNLOCK();
  uVar7 = 0;
  if (0 < this->NumTotalSources) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->SourceInfos).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->SourceInfos).AllocatorInstance.Data;
      FVar1 = pFVar2[lVar8 + 0x521];
      if ((char)FVar1 < '\0') {
        if (*(int *)(pFVar2 + lVar8 + 0x78) < 1) {
          if (((byte)FVar1 & 0x40) == 0) {
            pFVar2[lVar8 + 0x521] = (FScriptContainerElement)((byte)FVar1 | 0x40);
            (**(code **)(**(longlong **)(pFVar2 + lVar8 + 0x20) + 0x18))();
            plVar3 = *(longlong **)(pFVar2 + lVar8 + 0x510);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x18))(plVar3,uVar7);
            }
          }
        }
        else {
          *(undefined4 *)(pFVar2 + lVar8 + 0x78) = 0;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x5d0;
    } while ((int)uVar7 < this->NumTotalSources);
  }
  LOCK();
  this->RenderThreadPhase = (atomic<ESourceManagerRenderThreadPhase>)0xd;
  UNLOCK();
  return;
}

// operator() @ 1504eced0

bool __thiscall
`Audio::FMixerSourceManager::ReadSourceFrame'::__l29::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3835252409160960336>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3835252409160960336>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

