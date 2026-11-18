// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 177

// <lambda_1> @ 1464d72f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

<lambda_1> * __thiscall
`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FSoundEffectSubmix,1> *pTVar4;
  
  *(FMixerSubmix **)this = (param_1->MixerSubmixPtr).Object;
  pTVar3 = (param_1->MixerSubmixPtr).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->InSubmixEffectPresetChain).ArrayNum;
  pTVar4 = (TSharedPtr<FSoundEffectSubmix,1> *)
           (param_1->InSubmixEffectPresetChain).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    ConstructItems<TSharedPtr<FSoundEffectSubmix,1>,TSharedPtr<FSoundEffectSubmix,1>,int>
              (pFVar1->Data,pTVar4,iVar2);
  }
  *(float *)((longlong)this + 0x20) = param_1->InFadeTimeSec;
  return this;
}

// FMixerDevice @ 1464d81d0

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerDevice * __thiscall
Audio::FMixerDevice::FMixerDevice(FMixerDevice *this,IAudioMixerPlatformInterface *param_1)

{
  TUniquePtr<Audio::FAudioRenderScheduler,TDefaultDelete<Audio::FAudioRenderScheduler>_> *pTVar1;
  TUniquePtr<Audio::FMixerSourceManager,TDefaultDelete<Audio::FMixerSourceManager>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FChannelPositionInfo *pFVar8;
  FMixerSourceManager *pFVar9;
  atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar10;
  FMixerSourceManager *pFVar11;
  FAudioRenderScheduler *this_00;
  FMixerSourceManager *pFVar12;
  FMixerDevice *pFVar13;
  IAudioLinkFactory *pIVar14;
  longlong lVar15;
  undefined8 local_48;
  undefined8 local_40;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  code *local_28;
  undefined8 uStack_20;
  
  FAudioDevice::FAudioDevice((FAudioDevice *)this);
  this->field_0xa98 = 0;
  *(undefined ***)&this->field_0xa90 = &___7IAudioMixer_Audio__6B_;
  *(undefined2 *)&this->field_0xaa8 = 0;
  *(undefined ***)&this->field_0xaa0 = &___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->field_0xaa0);
  *(undefined ***)this = &_vftable__for__FAudioDevice__;
  *(undefined ***)&this->field_0xa90 = &_vftable__for__Audio__IAudioMixer__;
  *(undefined ***)&this->field_0xaa0 = &_vftable__for__FGCObject__;
  FQuartzClockManager::FQuartzClockManager(&this->QuantizedEventClockManager,this);
  pFVar12 = (FMixerSourceManager *)0x0;
  (this->QuartzSubsystemData).Object = (FPersistentQuartzSubsystemData *)0x0;
  (this->QuartzSubsystemData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->QuartzPersistentStateCritSec,4000);
  pFVar8 = this->DefaultChannelAzimuthPositions;
  (this->ListenerTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar15 = 0xb;
  (this->ListenerTransforms).ArrayNum = 0;
  (this->ListenerTransforms).ArrayMax = 0;
  (this->RequiredSubmixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredSubmixes).ArrayNum = 0;
  (this->RequiredSubmixes).ArrayMax = 0;
  (this->RequiredSubmixInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredSubmixInstances).ArrayNum = 0;
  (this->RequiredSubmixInstances).ArrayMax = 0;
  (this->DefaultAudioBuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultAudioBuses).ArrayNum = 0;
  (this->DefaultAudioBuses).ArrayMax = 0;
  this->AudioMixerPlatform = param_1;
  do {
    pFVar8->Channel = DefaultChannel;
    pFVar8->Azimuth = 0.0;
    pFVar8->Elevation = 0.0;
    pFVar8->Radius = 1.0;
    pFVar8 = pFVar8 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  (this->DeviceChannelAzimuthPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioThreadTimingData).AudioThreadTimeJitterDelta = 0.05;
  (this->DeviceChannelAzimuthPositions).ArrayNum = 0;
  (this->DeviceChannelAzimuthPositions).ArrayMax = 0;
  (this->OpenStreamParams).OutputDeviceIndex = 0xffffffff;
  (this->OpenStreamParams).NumFrames = 0x400;
  (this->OpenStreamParams).NumBuffers = 1;
  (this->OpenStreamParams).AudioMixer = (IAudioMixer *)0x0;
  (this->OpenStreamParams).SampleRate = 0xac44;
  (this->OpenStreamParams).MaxSources = 0;
  (this->OpenStreamParams).bRestoreIfRemoved = false;
  (this->OpenStreamParams).bUseSystemAudioDevice = true;
  (this->OpenStreamParams).AudioDeviceId.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OpenStreamParams).AudioDeviceId.Data.ArrayNum = 0;
  (this->OpenStreamParams).AudioDeviceId.Data.ArrayMax = 0;
  this->AudioClockDelta = 0.0;
  (this->AudioClockTimingData).UpdateTime = 0.0;
  this->PreviousPrimaryVolume = -1.0;
  (this->AudioThreadTimingData).StartTime = 0.0;
  (this->AudioThreadTimingData).AudioThreadTime = 0.0;
  (this->AudioThreadTimingData).AudioRenderThreadTime = 0.0;
  FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo(&this->PlatformInfo);
  *(undefined8 *)&(this->Submixes).SubmixMap = 0;
  *(undefined8 *)&(this->Submixes).SubmixMap.field_0x8 = 0;
  *(undefined8 *)&(this->Submixes).SubmixMap.field_0x20 = 0;
  *(undefined4 *)&(this->Submixes).SubmixMap.field_0x28 = 0;
  *(undefined4 *)&(this->Submixes).SubmixMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->Submixes).SubmixMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Submixes).SubmixMap.field_0x34 = 0;
  *(undefined8 *)&(this->Submixes).SubmixMap.field_0x40 = 0;
  *(undefined4 *)&(this->Submixes).SubmixMap.field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Submixes).MutationLock,4000);
  (this->DefaultEndpointSubmixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultEndpointSubmixes).ArrayNum = 0;
  (this->DefaultEndpointSubmixes).ArrayMax = 0;
  (this->ExternalEndpointSubmixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalEndpointSubmixes).ArrayNum = 0;
  (this->ExternalEndpointSubmixes).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->EndpointSubmixesMutationLock,4000);
  (this->DelegateBoundSubmixes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelegateBoundSubmixes).ArrayNum = 0;
  (this->DelegateBoundSubmixes).ArrayMax = 0;
  pFVar9 = ::operator_new(0x10);
  pFVar11 = pFVar12;
  if (pFVar9 != (FMixerSourceManager *)0x0) {
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)&pFVar9->StartAudioBusEnvelopeFollowerCVar = 0;
    *(undefined8 *)pFVar9 = 0;
    pFVar11 = pFVar9;
  }
  (this->SourceVoices).Tail = (TNode *)pFVar11;
  pTVar1 = &this->RenderScheduler;
  (this->SourceVoices).Head = (TNode *)pFVar11;
  pTVar2 = &this->SourceManager;
  *(undefined8 *)&this->SourceEffectChainOverrides = 0;
  *(undefined8 *)&(this->SourceEffectChainOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->SourceEffectChainOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->SourceEffectChainOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->SourceEffectChainOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceEffectChainOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceEffectChainOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->SourceEffectChainOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->SourceEffectChainOverrides).field_0x48 = 0;
  pTVar1->Ptr = (FAudioRenderScheduler *)0x0;
  pTVar2->Ptr = (FMixerSourceManager *)0x0;
  this->GameOrAudioThreadId = -1;
  this->AudioPlatformThreadId = (atomic<int>)0xffffffff;
  pFVar9 = ::operator_new(0x40);
  pFVar11 = pFVar12;
  if (pFVar9 != (FMixerSourceManager *)0x0) {
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)&pFVar9->StartAudioBusEnvelopeFollowerCVar = 0;
    pFVar9->StopAudioBusEnvelopeFollowerCVar = (IConsoleVariable *)0x0;
    (pFVar9->EffectChainMutationCriticalSection).CriticalSection.Opaque1[0] = (void *)0x0;
    (pFVar9->EffectChainMutationCriticalSection).CriticalSection.Opaque2[0] = 0;
    (pFVar9->EffectChainMutationCriticalSection).CriticalSection.Opaque2[1] = 0;
    (pFVar9->EffectChainMutationCriticalSection).CriticalSection.Opaque3[0] = (void *)0x0;
    (pFVar9->EffectChainMutationCriticalSection).CriticalSection.Opaque3[1] = (void *)0x0;
    (pFVar9->EffectChainMutationCriticalSection).CriticalSection.Opaque3[2] = (void *)0x0;
    *(undefined8 *)pFVar9 = 0;
    pFVar9->StopAudioBusEnvelopeFollowerCVar = (IConsoleVariable *)0x0;
    (pFVar9->EffectChainMutationCriticalSection).CriticalSection.Opaque3[2] = (void *)0x0;
    pFVar11 = pFVar9;
  }
  (this->CommandQueue).Tail = (TNode *)pFVar11;
  (this->CommandQueue).Head = (TNode *)pFVar11;
  (this->GameThreadCommandQueue).Head =
       (atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0;
  aVar10 = (atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>)
           FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar10 = 0;
  (this->GameThreadCommandQueue).Head = aVar10;
  (this->GameThreadCommandQueue).Tail = (FNode *)aVar10;
  this->field_0x5ba = this->field_0x5ba | 0x20;
  this->AudioLinkFactory = (IAudioLinkFactory *)0x0;
  this->StartSubmixEnvelopeFollowerCVar = (IConsoleVariable *)0x0;
  this->StopSubmixEnvelopeFollowerCVar = (IConsoleVariable *)0x0;
  this->SubmixesAlivePingTimeSec = 0.0;
  this->bDebugOutputEnabled = false;
  this->bSubmixRegistrationDisabled = true;
  pFVar9 = ::operator_new(800);
  pFVar11 = pFVar12;
  if (pFVar9 != (FMixerSourceManager *)0x0) {
    pFVar11 = FMixerSourceManager::FMixerSourceManager(pFVar9,this);
  }
  if (pTVar2 == (TUniquePtr<Audio::FMixerSourceManager,TDefaultDelete<Audio::FMixerSourceManager>_>
                 *)&local_48) {
    if (pFVar11 != (FMixerSourceManager *)0x0) {
      FMixerSourceManager::~FMixerSourceManager(pFVar11);
      goto LAB_1464d858a;
    }
  }
  else {
    pFVar9 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar11;
    if (pFVar9 != (FMixerSourceManager *)0x0) {
      FMixerSourceManager::~FMixerSourceManager(pFVar9);
      pFVar11 = pFVar9;
LAB_1464d858a:
      ::operator_delete(pFVar11,800);
    }
  }
  this_00 = ::operator_new(0x98);
  if (this_00 != (FAudioRenderScheduler *)0x0) {
    pFVar12 = (FMixerSourceManager *)FAudioRenderScheduler::FAudioRenderScheduler(this_00,this);
  }
  if (pTVar1 == (TUniquePtr<Audio::FAudioRenderScheduler,TDefaultDelete<Audio::FAudioRenderScheduler>_>
                 *)&local_40) {
    if (pFVar12 == (FMixerSourceManager *)0x0) goto LAB_1464d868c;
    pFVar3 = (((TArray<TTuple<short,short>,TSizedDefaultAllocator<32>_> *)
              &(pFVar12->MixerSources).ArrayNum)->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (((TArray<short,TSizedDefaultAllocator<32>_> *)
              &(pFVar12->SourceDataOverridePlugin).SharedReferenceCount)->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<Audio::FAudioRenderScheduler::FStepEntry,int>
              ((FStepEntry *)
               (pFVar12->SpatialInterfaceInfo).SpatializationPlugin.SharedReferenceCount.
               ReferenceController,
               (pFVar12->SpatialInterfaceInfo).MaxChannelsSupportedBySpatializationPlugin);
    pTVar4 = (pFVar12->SpatialInterfaceInfo).SpatializationPlugin.SharedReferenceCount.
             ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(pTVar4);
    }
    *(undefined4 *)&(pFVar12->SpatialInterfaceInfo).SpatializationPlugin.Object = 0;
    FVar5 = (pFVar12->SpatialInterfaceInfo).PluginName;
    if (FVar5 != (FName)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar12->StartAudioBusEnvelopeFollowerCVar);
  }
  else {
    pFVar11 = (FMixerSourceManager *)pTVar1->Ptr;
    pTVar1->Ptr = (FAudioRenderScheduler *)pFVar12;
    if (pFVar11 == (FMixerSourceManager *)0x0) goto LAB_1464d868c;
    pFVar3 = (((TArray<TTuple<short,short>,TSizedDefaultAllocator<32>_> *)
              &(pFVar11->MixerSources).ArrayNum)->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (((TArray<short,TSizedDefaultAllocator<32>_> *)
              &(pFVar11->SourceDataOverridePlugin).SharedReferenceCount)->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<Audio::FAudioRenderScheduler::FStepEntry,int>
              ((FStepEntry *)
               (pFVar11->SpatialInterfaceInfo).SpatializationPlugin.SharedReferenceCount.
               ReferenceController,
               (pFVar11->SpatialInterfaceInfo).MaxChannelsSupportedBySpatializationPlugin);
    pTVar4 = (pFVar11->SpatialInterfaceInfo).SpatializationPlugin.SharedReferenceCount.
             ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(pTVar4);
    }
    *(undefined4 *)&(pFVar11->SpatialInterfaceInfo).SpatializationPlugin.Object = 0;
    FVar5 = (pFVar11->SpatialInterfaceInfo).PluginName;
    if (FVar5 != (FName)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar11->StartAudioBusEnvelopeFollowerCVar);
    pFVar12 = pFVar11;
  }
  ::operator_delete(pFVar12,0x98);
LAB_1464d868c:
  IAudioLinkFactory::GetAllRegisteredFactoryNames(&local_38);
  if (0 < local_38.ArrayNum) {
    if ((local_38.ArrayNum != 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Factories.Num()==1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0x164,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FMixerDevice *)(*pcVar6)();
      return pFVar13;
    }
    if ((local_38.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FMixerDevice *)(*pcVar6)();
      return pFVar13;
    }
    pIVar14 = IAudioLinkFactory::FindFactory(*(FName *)local_38.AllocatorInstance.Data);
    this->AudioLinkFactory = pIVar14;
  }
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = OnTraceStarted;
  TMulticastDelegateRegistration<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
  ::AddRaw<Audio::FMixerDevice>
            (&FTraceAuxiliary::OnTraceStarted,(FMixerDevice *)&stack0x00000008,(pmf_0f81184e *)this)
  ;
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return this;
}

// ~<lambda_1> @ 1464da1d0

void __thiscall
`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>::~<lambda_1>(void *this)

{
  *(undefined4 *)((longlong)this + 0xf8) = 0;
  if (*(void **)((longlong)this + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf0));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0xb0));
  *(undefined4 *)((longlong)this + 0xa8) = 0;
  if (*(void **)((longlong)this + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa0));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x60));
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x10));
  return;
}

// ~FMixerDevice @ 1464dc1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::~FMixerDevice(FMixerDevice *this)

{
  IAudioMixerPlatformInterface *pIVar1;
  FMixerSourceManager *this_00;
  FAudioRenderScheduler *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  
  *(undefined ***)this = &_vftable__for__FAudioDevice__;
  *(undefined ***)&this->field_0xa90 = &_vftable__for__Audio__IAudioMixer__;
  *(undefined ***)&this->field_0xaa0 = &_vftable__for__FGCObject__;
  bVar7 = IsInAudioThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757107665>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x22f,"IsInAudioThread()"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &FTraceAuxiliary::OnTraceStarted,this);
  FQuartzClockManager::Shutdown(&this->QuantizedEventClockManager);
  pIVar1 = this->AudioMixerPlatform;
  if (pIVar1 != (IAudioMixerPlatformInterface *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,1);
  }
  LOCK();
  this->AudioPlatformThreadId = (atomic<int>)0xffffffff;
  UNLOCK();
  CheckAudioRenderingThread(this);
  TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::
  ~TMpscQueue<TFunction<void___cdecl(void)>,FMemory>(&this->GameThreadCommandQueue);
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
            (&this->CommandQueue);
  this_00 = (this->SourceManager).Ptr;
  if (this_00 != (FMixerSourceManager *)0x0) {
    FMixerSourceManager::~FMixerSourceManager(this_00);
    ::operator_delete(this_00,800);
  }
  pFVar2 = (this->RenderScheduler).Ptr;
  if (pFVar2 != (FAudioRenderScheduler *)0x0) {
    pFVar3 = (pFVar2->BrokenLinks).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar2->ActiveSteps).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<Audio::FAudioRenderScheduler::FStepEntry,int>
              ((FStepEntry *)(pFVar2->Steps).AllocatorInstance.Data,(pFVar2->Steps).ArrayNum);
    pFVar3 = (pFVar2->Steps).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    *(undefined4 *)&(pFVar2->IndexMap).field_0x48 = 0;
    pvVar4 = *(void **)&(pFVar2->IndexMap).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<Audio::FAudioRenderStepId,short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar2->IndexMap);
    ::operator_delete(pFVar2,0x98);
  }
  *(undefined4 *)&(this->SourceEffectChainOverrides).field_0x48 = 0;
  pvVar4 = *(void **)&(this->SourceEffectChainOverrides).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceEffectChainOverrides);
  pTVar5 = (this->SourceVoices).Tail;
  while (pTVar5 != (TNode *)0x0) {
    (this->SourceVoices).Tail = pTVar5->NextNode;
    ::operator_delete(pTVar5,0x10);
    pTVar5 = (this->SourceVoices).Tail;
  }
  pFVar3 = (this->DelegateBoundSubmixes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EndpointSubmixesMutationLock);
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
            ((TSharedPtr<Audio::FMixerSubmix,1> *)
             (this->ExternalEndpointSubmixes).AllocatorInstance.Data,
             (this->ExternalEndpointSubmixes).ArrayNum);
  pFVar3 = (this->ExternalEndpointSubmixes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
            ((TSharedPtr<Audio::FMixerSubmix,1> *)
             (this->DefaultEndpointSubmixes).AllocatorInstance.Data,
             (this->DefaultEndpointSubmixes).ArrayNum);
  pFVar3 = (this->DefaultEndpointSubmixes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Submixes).MutationLock);
  *(undefined4 *)&(this->Submixes).SubmixMap.field_0x48 = 0;
  pvVar4 = *(void **)&(this->Submixes).SubmixMap.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Submixes);
  pFVar3 = (this->PlatformInfo).OutputChannelArray.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PlatformInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PlatformInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->OpenStreamParams).AudioDeviceId.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DeviceChannelAzimuthPositions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->DefaultAudioBuses).AllocatorInstance.Data,(this->DefaultAudioBuses).ArrayNum)
  ;
  pFVar3 = (this->DefaultAudioBuses).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>
            ((TSharedPtr<Audio::FMixerSubmix,1> *)
             (this->RequiredSubmixInstances).AllocatorInstance.Data,
             (this->RequiredSubmixInstances).ArrayNum);
  pFVar3 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->RequiredSubmixes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ListenerTransforms).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QuartzPersistentStateCritSec);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QuartzSubsystemData).SharedReferenceCount.ReferenceController);
  FQuartzClockManager::~FQuartzClockManager(&this->QuantizedEventClockManager);
  *(undefined ***)&this->field_0xaa0 = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->field_0xaa0);
  FAudioDevice::~FAudioDevice((FAudioDevice *)this);
  return;
}

// operator() @ 1464ddd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall `Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  FMixerSubmix *this_00;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FSoundEffectSubmix,1> local_18;
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0xb80) < 1) {
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
  plVar2 = *(longlong **)(lVar1 + 0xb78);
  if (*plVar2 == 0) {
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
  local_18.Object = *(FSoundEffectSubmix **)((longlong)this + 8);
  this_00 = (FMixerSubmix *)*plVar2;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Audio::FMixerSubmix::AddSoundEffectSubmix(this_00,&local_18);
  return;
}

// operator() @ 1464dde20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0xb80) < 1) {
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
  plVar2 = *(longlong **)(lVar1 + 0xb78);
  if (*plVar2 == 0) {
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
  Audio::FMixerSubmix::ClearSoundEffectSubmixes((FMixerSubmix *)*plVar2);
  return;
}

// operator() @ 1464e0590

/* WARNING: Removing unreachable block (ram,0x0001464e06d3) */
/* WARNING: Removing unreachable block (ram,0x0001464e06e3) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerDevice *pFVar3;
  FScriptContainerElement *pFVar4;
  FMixerSubmix *pFVar5;
  FMixerSubmix *pFVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  uint uVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  atomic<int> aVar13;
  UObject *pUVar14;
  USoundSubmixBase *pUVar15;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar16;
  FMixerSubmix *pFVar17;
  FMixerSubmix *pFVar18;
  FMixerSubmix *pFVar19;
  FSharedReferencer<1> local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  TWeakPtr<Audio::FMixerSubmix,1> local_48;
  TWeakPtr<Audio::FMixerSubmix,1> local_38;
  
  pFVar18 = (FMixerSubmix *)0x0;
  if (!__CsvProfilerStat2982) {
    FCsvProfilerTrace::OutputInlineStat("RegisterSubmixBufferListener",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2982 = true;
  }
  uVar10 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("RegisterSubmixBufferListener",_GCsvCategory_Audio.Index,
             "CSV_RegisterSubmixBufferListener");
  pFVar3 = *(FMixerDevice **)this;
  pFVar19 = pFVar18;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pUVar15 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x14));
    pTVar16 = Audio::FMixerDevice::GetSubmixInstance(pFVar3,&local_48,pUVar15);
    pFVar5 = (FMixerSubmix *)(pTVar16->WeakReferenceCount).ReferenceController;
    local_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    if (pFVar5 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar5->field_0x8;
      do {
        local_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar13 = *(atomic<int> *)&pFVar5->field_0x8;
        bVar12 = aVar2 == aVar13;
        if (bVar12) {
          *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar13 = aVar2;
        }
        UNLOCK();
        local_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
        aVar2 = aVar13;
      } while (!bVar12);
      pTVar8 = (pTVar16->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar8 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
      (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if ((FMixerSubmix *)local_80.ReferenceController != (FMixerSubmix *)0x0) {
        pFVar19 = pTVar16->Object;
        pTVar16->Object = (FMixerSubmix *)0x0;
      }
    }
    local_50 = 0;
    local_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_48.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  else {
    if (((pFVar3->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar4 = (pFVar3->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar5 = *(FMixerSubmix **)(pFVar4 + 8);
    pFVar6 = *(FMixerSubmix **)pFVar4;
    pFVar17 = pFVar5;
    if (pFVar5 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar5->field_0x8;
      do {
        pFVar17 = pFVar18;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar13 = *(atomic<int> *)&pFVar5->field_0x8;
        bVar12 = aVar2 == aVar13;
        if (bVar12) {
          *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar13 = aVar2;
        }
        UNLOCK();
        pFVar17 = pFVar5;
        aVar2 = aVar13;
      } while (!bVar12);
      LOCK();
      paVar1 = (atomic<int> *)&pFVar5->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,1);
      }
      if (pFVar17 != (FMixerSubmix *)0x0) {
        pFVar19 = pFVar6;
      }
    }
    local_60 = 0;
    local_68 = 0;
    local_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar17;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (((*(char *)((longlong)this + 0x10) == '\0') && (pFVar19 == (FMixerSubmix *)0x0)) &&
     (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x14)), bVar12)) {
    plVar7 = *(longlong **)this;
    pcVar9 = *(code **)(*plVar7 + 0x78);
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x14));
    (*pcVar9)(plVar7,pUVar14,1);
    pFVar3 = *(FMixerDevice **)this;
    pUVar15 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x14));
    pTVar16 = Audio::FMixerDevice::GetSubmixInstance(pFVar3,&local_38,pUVar15);
    local_70.ReferenceController = (pTVar16->WeakReferenceCount).ReferenceController;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_70.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar13 = (local_70.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar2 == aVar13;
        if (bVar12) {
          (local_70.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar13 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar13;
      } while (!bVar12);
      FVar11.ReferenceController = local_70.ReferenceController;
      pTVar8 = (pTVar16->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar8 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
      (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        pFVar18 = pTVar16->Object;
        pTVar16->Object = (FMixerSubmix *)0x0;
      }
    }
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    pFVar19 = pFVar18;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  if (pFVar19 == (FMixerSubmix *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if ((pFVar19 == (FMixerSubmix *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    Audio::FMixerSubmix::RegisterBufferListener
              (pFVar19,*(ISubmixBufferListener **)((longlong)this + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  FCsvProfiler::EndStat("RegisterSubmixBufferListener",uVar10);
  return;
}

// operator() @ 1464e0970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerDevice *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  FSharedReferencer<1> FVar8;
  atomic<int> aVar9;
  USoundSubmixBase *pUVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  UObject *pUVar12;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar13;
  bool bVar14;
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<ISubmixBufferListener,1> local_58;
  TWeakPtr<Audio::FMixerSubmix,1> local_48;
  TWeakPtr<Audio::FMixerSubmix,1> local_38;
  
  if (!__CsvProfilerStat3025) {
    FCsvProfilerTrace::OutputInlineStat("RegisterSubmixBufferListener",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3025 = true;
  }
  uVar7 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("RegisterSubmixBufferListener",_GCsvCategory_Audio.Index,
             "CSV_RegisterSubmixBufferListener");
  pFVar3 = *(FMixerDevice **)this;
  pUVar10 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  pTVar11 = Audio::FMixerDevice::GetSubmixInstance(pFVar3,&local_48,pUVar10);
  pFVar13 = (FMixerSubmix *)0x0;
  local_70.ReferenceController = (pTVar11->WeakReferenceCount).ReferenceController;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_70.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar9 = (local_70.ReferenceController)->SharedReferenceCount;
      bVar14 = aVar2 == aVar9;
      if (bVar14) {
        (local_70.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar14);
    pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  this_00 = pFVar13;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this_00 = pTVar11->Object;
    pTVar11->Object = (FMixerSubmix *)0x0;
  }
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  bVar14 = false;
  if (this_00 == (FMixerSubmix *)0x0) {
    bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x28));
    if (bVar14) {
      plVar5 = *(longlong **)this;
      pcVar6 = *(code **)(*plVar5 + 0x78);
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
      (*pcVar6)(plVar5,pUVar12,1);
      pFVar3 = *(FMixerDevice **)this;
      pUVar10 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
      pTVar11 = Audio::FMixerDevice::GetSubmixInstance(pFVar3,&local_38,pUVar10);
      local_60.ReferenceController = (pTVar11->WeakReferenceCount).ReferenceController;
      this_00 = pFVar13;
      if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = (local_60.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar9 = (local_60.ReferenceController)->SharedReferenceCount;
          bVar14 = aVar2 == aVar9;
          if (bVar14) {
            (local_60.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar9 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar9;
        } while (!bVar14);
        FVar8.ReferenceController = local_60.ReferenceController;
        pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
        (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          this_00 = pTVar11->Object;
          pTVar11->Object = (FMixerSubmix *)0x0;
        }
      }
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_70,&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
      if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_38.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
    bVar14 = this_00 == (FMixerSubmix *)0x0;
  }
  if (this_00 == (FMixerSubmix *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if ((bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_58.Object = *(ISubmixBufferListener **)((longlong)this + 8);
    local_58.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Audio::FMixerSubmix::RegisterBufferListener(this_00,&local_58);
    if (3 < (byte)LogAudioMixer._0_1_) {
      if ((this_00 == (FMixerSubmix *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  FCsvProfiler::EndStat("RegisterSubmixBufferListener",uVar7);
  return;
}

// operator() @ 1464e0df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0xb80) < 1) {
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
  plVar2 = *(longlong **)(lVar1 + 0xb78);
  if (*plVar2 == 0) {
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
  Audio::FMixerSubmix::RemoveSoundEffectSubmix
            ((FMixerSubmix *)*plVar2,*(uint *)((longlong)this + 8));
  return;
}

// operator() @ 1464e2490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>::operator()
          (void *this,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)&param_1->field_0x8;
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x18);
    iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
    if (iVar4 == iVar1) {
      if (iVar4 < 2) goto LAB_1464e24d5;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar2 + 0x10),
                         (wchar_t *)**(undefined8 **)((longlong)this + 8));
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar4 + iVar1 == 1;
    }
    if (bVar5) {
LAB_1464e24d5:
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      Audio::FMixerSubmix::StartEnvelopeFollowing(*(FMixerSubmix **)&param_1->field_0x8,10,500);
      return;
    }
  }
  return;
}

// operator() @ 1464e2990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>::operator()
          (void *this,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)&param_1->field_0x8;
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x18);
    iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
    if (iVar4 == iVar1) {
      if (iVar4 < 2) goto LAB_1464e29d5;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar2 + 0x10),
                         (wchar_t *)**(undefined8 **)((longlong)this + 8));
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar4 + iVar1 == 1;
    }
    if (bVar5) {
LAB_1464e29d5:
      if (*(longlong *)&param_1->field_0x8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      Audio::FMixerSubmix::StopEnvelopeFollowing(*(FMixerSubmix **)&param_1->field_0x8);
      return;
    }
  }
  return;
}

// operator() @ 1464e2a20

/* WARNING: Removing unreachable block (ram,0x0001464e2b4d) */
/* WARNING: Removing unreachable block (ram,0x0001464e2b5b) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerDevice *this_00;
  FScriptContainerElement *pFVar3;
  FMixerSubmix *pFVar4;
  FMixerSubmix *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  atomic<int> aVar10;
  USoundSubmixBase *pUVar11;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar12;
  FMixerSubmix *this_01;
  FMixerSubmix *pFVar13;
  TWeakPtr<Audio::FMixerSubmix,1> local_38;
  
  this_01 = (FMixerSubmix *)0x0;
  if (!__CsvProfilerStat3060) {
    FCsvProfilerTrace::OutputInlineStat("UnregisterSubmixBufferListener",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3060 = true;
  }
  uVar8 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("UnregisterSubmixBufferListener",_GCsvCategory_Audio.Index,
             "CSV_UnregisterSubmixBufferListener");
  this_00 = *(FMixerDevice **)this;
  if (*(char *)((longlong)this + 0x10) == '\0') {
    pUVar11 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x14));
    pTVar12 = Audio::FMixerDevice::GetSubmixInstance(this_00,&local_38,pUVar11);
    pFVar4 = (FMixerSubmix *)(pTVar12->WeakReferenceCount).ReferenceController;
    pFVar13 = pFVar4;
    if (pFVar4 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
      do {
        pFVar13 = this_01;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar10 = *(atomic<int> *)&pFVar4->field_0x8;
        bVar9 = aVar2 == aVar10;
        if (bVar9) {
          *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        pFVar13 = pFVar4;
        aVar2 = aVar10;
      } while (!bVar9);
      pTVar6 = (pTVar12->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
      (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar13 != (FMixerSubmix *)0x0) {
        this_01 = pTVar12->Object;
        pTVar12->Object = (FMixerSubmix *)0x0;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  else {
    if (((this_00->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (this_00->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar4 = *(FMixerSubmix **)(pFVar3 + 8);
    pFVar5 = *(FMixerSubmix **)pFVar3;
    pFVar13 = pFVar4;
    if (pFVar4 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar4->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar4->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
      do {
        pFVar13 = this_01;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar10 = *(atomic<int> *)&pFVar4->field_0x8;
        bVar9 = aVar2 == aVar10;
        if (bVar9) {
          *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        pFVar13 = pFVar4;
        aVar2 = aVar10;
      } while (!bVar9);
      LOCK();
      paVar1 = (atomic<int> *)&pFVar4->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
      }
      if (pFVar13 != (FMixerSubmix *)0x0) {
        this_01 = pFVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (this_01 == (FMixerSubmix *)0x0) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    Audio::FMixerSubmix::UnregisterBufferListener
              (this_01,*(ISubmixBufferListener **)((longlong)this + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  FCsvProfiler::EndStat("UnregisterSubmixBufferListener",uVar8);
  return;
}

// operator() @ 1464e2c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerDevice *this_00;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  atomic<int> aVar5;
  USoundSubmixBase *pUVar6;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMixerSubmix *this_01;
  bool bVar9;
  TWeakPtr<Audio::FMixerSubmix,1> local_28;
  
  if (!__CsvProfilerStat3091) {
    FCsvProfilerTrace::OutputInlineStat("UnregisterSubmixBufferListener",_GCsvCategory_Audio.Index);
    __CsvProfilerStat3091 = true;
  }
  uVar4 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("UnregisterSubmixBufferListener",_GCsvCategory_Audio.Index,
             "CSV_UnregisterSubmixBufferListener");
  this_00 = *(FMixerDevice **)this;
  pUVar6 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
  pTVar7 = Audio::FMixerDevice::GetSubmixInstance(this_00,&local_28,pUVar6);
  this_01 = (FMixerSubmix *)0x0;
  pTVar8 = (pTVar7->WeakReferenceCount).ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar9);
    pTVar3 = (pTVar7->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      this_01 = pTVar7->Object;
      pTVar7->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_28.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (this_01 == (FMixerSubmix *)0x0) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    Audio::FMixerSubmix::UnregisterBufferListenerInternal
              (this_01,*(ulong64 *)((longlong)this + 0x10));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FCsvProfiler::EndStat("UnregisterSubmixBufferListener",uVar4);
  return;
}

// operator() @ 1464e3160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>::operator()(void *this)

{
  ForAnyElementType *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  FMixerSourceManager *this_00;
  FSourceEffectChainEntry *pFVar5;
  ForAnyElementType FVar6;
  FAudioDeviceManager *this_01;
  FAudioDevice *pFVar7;
  code **ppcVar8;
  undefined1 auStackY_c8 [32];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  undefined1 local_68;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this_01 = FAudioDeviceManager::Get();
  if (((this_01 != (FAudioDeviceManager *)0x0) &&
      (pFVar7 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,*(uint *)this),
      pFVar7 != (FAudioDevice *)0x0)) &&
     (this_00 = *(FMixerSourceManager **)&pFVar7[1].DynamicSoundClassProperties.field_0x28,
     this_00 != (FMixerSourceManager *)0x0)) {
    uVar3 = *(undefined4 *)((longlong)this + 4);
    uVar2 = *(undefined1 *)((longlong)this + 0x18);
    iVar4 = *(int *)((longlong)this + 0x10);
    pFVar5 = *(FSourceEffectChainEntry **)((longlong)this + 8);
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = iVar4;
    if (iVar4 == 0) {
      local_6c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,0,&local_78,iVar4,&local_6c);
      ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
                (local_78.Data,pFVar5,iVar4);
    }
    local_58[0] = (code *)0x0;
    local_68 = uVar2;
    ppcVar8 = FMemory::Malloc(0x30,8);
    iVar4 = local_70;
    FVar6.Data = local_78.Data;
    *ppcVar8 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::`2'::<lambda_1>,0,1>
                        ::_vftable_;
    pFVar1 = (ForAnyElementType *)(ppcVar8 + 3);
    ppcVar8[1] = (code *)this_00;
    *(undefined4 *)(ppcVar8 + 2) = uVar3;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(ppcVar8 + 4) = local_70;
    local_30 = ppcVar8;
    if (local_70 == 0) {
      *(int *)((longlong)ppcVar8 + 0x24) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_70,0,pFVar1,local_70,(int *)((longlong)ppcVar8 + 0x24));
      ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
                (pFVar1->Data,(FSourceEffectChainEntry *)FVar6.Data,iVar4);
    }
    *(undefined1 *)(ppcVar8 + 5) = local_68;
    if (ppcVar8 + 1 != (code **)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerSourceManager::UpdateSourceEffectChain'::__l2::<lambda_1>,void>
                    ::Call;
    }
    Audio::FMixerSourceManager::AudioMixerThreadCommand
              (this_00,(TFunction<void___cdecl(void)> *)local_58,"UpdateSourceEffectChain()",true);
    if (local_58[0] != (code *)0x0) {
      ppcVar8 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar8 = local_30;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
    if ((FSourceEffectChainEntry *)local_78.Data != (FSourceEffectChainEntry *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  return;
}

// operator() @ 1464e3860

void __thiscall
`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2755) {
    FCsvProfilerTrace::OutputInlineStat("AddEnvelopeFollowerDelegate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2755 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("AddEnvelopeFollowerDelegate",_GCsvCategory_Audio.Index,
             "CSV_AddEnvelopeFollowerDelegate");
  (**(code **)(**(longlong **)this + 0x1b0))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),(longlong)this + 0x10);
  FCsvProfiler::EndStat("AddEnvelopeFollowerDelegate",uVar1);
  return;
}

// operator() @ 1464e38e0

void __thiscall
`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2913) {
    FCsvProfilerTrace::OutputInlineStat("AddSpectralAnalysisDelegate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2913 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("AddSpectralAnalysisDelegate",_GCsvCategory_Audio.Index,
             "CSV_AddSpectralAnalysisDelegate");
  (**(code **)(**(longlong **)this + 0x1e0))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),(longlong)this + 0x10,
             (longlong)this + 0x38);
  FCsvProfiler::EndStat("AddSpectralAnalysisDelegate",uVar1);
  return;
}

// operator() @ 1464e3960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  code *local_48 [5];
  undefined8 *local_20;
  
  lVar2 = *(longlong *)this;
  bVar5 = IsInAudioThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107722>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x1f6,"IsInAudioThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_20[1] = lVar2;
  local_20[2] = (undefined8 *)((longlong)this + 8);
  *(undefined4 *)(local_20 + 3) = 10;
  *(undefined4 *)((longlong)local_20 + 0x1c) = 500;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
                  ::Call;
  }
  Audio::FSubmixMap::Iterate
            ((FSubmixMap *)(lVar2 + 0xd20),
             (TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
              *)local_48);
  iVar1 = *(int *)(lVar2 + 0xb80);
  plVar7 = *(longlong **)(lVar2 + 0xb78);
  plVar8 = plVar7 + (longlong)iVar1 * 2;
  do {
    if (*(int *)(lVar2 + 0xb80) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar7 == plVar8) {
      return;
    }
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar3 + 0x18);
      if (iVar6 == *(int *)((longlong)this + 0x10)) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x10),*(wchar_t **)((longlong)this + 8));
          bVar5 = iVar6 == 0;
          goto LAB_1464e3a75;
        }
      }
      else {
        bVar5 = iVar6 + *(int *)((longlong)this + 0x10) == 1;
LAB_1464e3a75:
        if (!bVar5) goto LAB_1464e3abb;
      }
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
      Audio::FMixerSubmix::StartEnvelopeFollowing((FMixerSubmix *)*plVar7,10,500);
    }
LAB_1464e3abb:
    plVar7 = plVar7 + 2;
  } while( true );
}

// operator() @ 1464e3ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  code *local_48 [2];
  undefined **local_38;
  longlong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  lVar2 = *(longlong *)this;
  bVar5 = IsInAudioThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107695>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x211,"IsInAudioThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
                ::Call;
  local_30 = lVar2;
  local_28 = (undefined8 *)((longlong)this + 8);
  Audio::FSubmixMap::Iterate
            ((FSubmixMap *)(lVar2 + 0xd20),
             (TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
              *)local_48);
  iVar1 = *(int *)(lVar2 + 0xb80);
  plVar7 = *(longlong **)(lVar2 + 0xb78);
  plVar8 = plVar7 + (longlong)iVar1 * 2;
  do {
    if (*(int *)(lVar2 + 0xb80) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar7 == plVar8) {
      return;
    }
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar3 + 0x18);
      if (iVar6 == *(int *)((longlong)this + 0x10)) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x10),*(wchar_t **)((longlong)this + 8));
          bVar5 = iVar6 == 0;
          goto LAB_1464e3bd2;
        }
      }
      else {
        bVar5 = iVar6 + *(int *)((longlong)this + 0x10) == 1;
LAB_1464e3bd2:
        if (!bVar5) goto LAB_1464e3c0d;
      }
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
      Audio::FMixerSubmix::StopEnvelopeFollowing((FMixerSubmix *)*plVar7);
    }
LAB_1464e3c0d:
    plVar7 = plVar7 + 2;
  } while( true );
}

// operator() @ 1464e3c40

void __thiscall `Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2631) {
    FCsvProfilerTrace::OutputInlineStat("PauseRecording",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2631 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("PauseRecording",_GCsvCategory_Audio.Index,"CSV_PauseRecording");
  (**(code **)(**(longlong **)this + 0x240))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  FCsvProfiler::EndStat("PauseRecording",uVar1);
  return;
}

// operator() @ 1464e3cc0

void __thiscall
`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2785) {
    FCsvProfilerTrace::OutputInlineStat("RemoveEnvelopeFollowerDelegate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2785 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("RemoveEnvelopeFollowerDelegate",_GCsvCategory_Audio.Index,
             "CSV_RemoveEnvelopeFollowerDelegate");
  (**(code **)(**(longlong **)this + 0x1b8))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),(longlong)this + 0x10);
  FCsvProfiler::EndStat("RemoveEnvelopeFollowerDelegate",uVar1);
  return;
}

// operator() @ 1464e3d40

void __thiscall
`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2943) {
    FCsvProfilerTrace::OutputInlineStat("RemoveSpectralAnalysisDelegate",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2943 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("RemoveSpectralAnalysisDelegate",_GCsvCategory_Audio.Index,
             "CSV_RemoveSpectralAnalysisDelegate");
  (**(code **)(**(longlong **)this + 0x1e8))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),(longlong)this + 0x10);
  FCsvProfiler::EndStat("RemoveSpectralAnalysisDelegate",uVar1);
  return;
}

// operator() @ 1464e3dc0

void __thiscall `Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2661) {
    FCsvProfilerTrace::OutputInlineStat("ResumeRecording",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2661 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("ResumeRecording",_GCsvCategory_Audio.Index,"CSV_ResumeRecording");
  (**(code **)(**(longlong **)this + 0x248))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  FCsvProfiler::EndStat("ResumeRecording",uVar1);
  return;
}

// operator() @ 1464e3e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_1>::operator()
          (void *this,TSharedPtr<Audio::FMixerSubmix,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FMixerSubmix *pFVar12;
  FMixerSubmix *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  FMixerSubmix *pFVar17;
  wchar_t *pwVar18;
  uint uVar19;
  FMixerSubmix *pFVar20;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  LARGE_INTEGER local_48;
  undefined4 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (-1 < AudioChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FAudioSubmixAlivePingFields>((TLogScope<1> *)&local_40);
    puVar8 = local_40;
    *local_40 = *(undefined4 *)(*(longlong *)this + 0xa0);
    pFVar12 = TSharedPtr<Audio::FMixerSubmix,1>::operator->(param_1);
    pwVar18 = L"";
    iVar4 = (pFVar12->SubmixPathName).Data.ArrayNum;
    if (iVar4 == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->SubmixPathName).Data.AllocatorInstance.Data;
    }
    pFVar12 = (FMixerSubmix *)0x0;
    uVar19 = 0;
    uVar10 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar10 = uVar19;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar10,pwVar16);
    puVar8[1] = uVar10;
    QueryPerformanceCounter(&local_48);
    *(LARGE_INTEGER *)(puVar8 + 2) = local_48;
    pFVar13 = TSharedPtr<Audio::FMixerSubmix,1>::operator->(param_1);
    if ((pFVar13->SubmixPathName).Data.ArrayNum != 0) {
      pwVar18 = (wchar_t *)(pFVar13->SubmixPathName).Data.AllocatorInstance.Data;
    }
    sVar3 = *pwVar18;
    pFVar1 = (FScriptContainerElement *)pwVar18;
    pFVar13 = pFVar12;
    while (sVar3 != 0) {
      pFVar1 = pFVar1 + 2;
      uVar19 = (int)pFVar13 + 1;
      pFVar13 = (FMixerSubmix *)(ulonglong)uVar19;
      sVar3 = *(short *)pFVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(3,pwVar18,uVar19);
    pFVar13 = TSharedPtr<Audio::FMixerSubmix,1>::operator->(param_1);
    puVar8[4] = pFVar13->NumChannels;
    lVar5 = *(longlong *)this;
    iVar4 = *(int *)(lVar5 + 0xb80);
    if (iVar4 < 1) {
      local_58 = 0;
      local_50 = (longlong)iVar4;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    puVar6 = *(undefined8 **)(lVar5 + 0xb78);
    pFVar13 = (FMixerSubmix *)puVar6[1];
    pFVar20 = (FMixerSubmix *)*puVar6;
    pFVar17 = pFVar13;
    if (pFVar13 != (FMixerSubmix *)0x0) {
      LOCK();
      *(int *)&pFVar13->field_0xc = *(int *)&pFVar13->field_0xc + 1;
      UNLOCK();
      iVar4 = *(int *)&pFVar13->field_0x8;
      do {
        pFVar17 = pFVar12;
        if (iVar4 == 0) break;
        LOCK();
        iVar11 = *(int *)&pFVar13->field_0x8;
        bVar9 = iVar4 == iVar11;
        if (bVar9) {
          *(int *)&pFVar13->field_0x8 = iVar4 + 1;
          iVar11 = iVar4;
        }
        UNLOCK();
        pFVar17 = pFVar13;
        iVar4 = iVar11;
      } while (!bVar9);
    }
    if (pFVar17 == (FMixerSubmix *)0x0) {
      pFVar20 = pFVar12;
    }
    pFVar12 = param_1->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar17);
    uVar15 = (ulonglong)_tls_index;
    *(bool *)(local_40 + 5) = pFVar12 == pFVar20;
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar5 + 0x20);
    **(undefined1 **)(lVar5 + 0x20) = 6;
    lVar14 = *(longlong *)(lVar5 + 0x20) + 1;
    *(longlong *)(lVar5 + 0x20) = lVar14;
    if (lVar5 != local_38) {
      *(longlong *)(lVar5 + 0x28) = lVar14;
    }
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
    if (pFVar13 != (FMixerSubmix *)0x0) {
      LOCK();
      puVar2 = &pFVar13->field_0xc;
      iVar4 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)&pFVar13->field_0x0 + 8))(pFVar13,1);
      }
    }
  }
  return;
}

// operator() @ 1464e4080

void __thiscall
`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2691) {
    FCsvProfilerTrace::OutputInlineStat("StartEnvelopeFollowing",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2691 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("StartEnvelopeFollowing",_GCsvCategory_Audio.Index,"CSV_StartEnvelopeFollowing");
  (**(code **)(**(longlong **)this + 0x148))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  FCsvProfiler::EndStat("StartEnvelopeFollowing",uVar1);
  return;
}

// operator() @ 1464e4100

void __thiscall `Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2584) {
    FCsvProfilerTrace::OutputInlineStat("StartRecording",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2584 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("StartRecording",_GCsvCategory_Audio.Index,"CSV_StartRecording");
  (**(code **)(**(longlong **)this + 0x138))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),
             *(undefined4 *)((longlong)this + 0x10));
  FCsvProfiler::EndStat("StartRecording",uVar1);
  return;
}

// operator() @ 1464e4180

void __thiscall
`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2815) {
    FCsvProfilerTrace::OutputInlineStat("StartSpectrumAnalysis",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2815 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("StartSpectrumAnalysis",_GCsvCategory_Audio.Index,"CSV_StartSpectrumAnalysis");
  (**(code **)(**(longlong **)this + 0x1c0))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),(longlong)this + 0x10);
  FCsvProfiler::EndStat("StartSpectrumAnalysis",uVar1);
  return;
}

// operator() @ 1464e4330

void __thiscall
`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2723) {
    FCsvProfilerTrace::OutputInlineStat("StopEnvelopeFollowing",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2723 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("StopEnvelopeFollowing",_GCsvCategory_Audio.Index,"CSV_StopEnvelopeFollowing");
  (**(code **)(**(longlong **)this + 0x150))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  FCsvProfiler::EndStat("StopEnvelopeFollowing",uVar1);
  return;
}

// operator() @ 1464e43b0

void __thiscall
`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2846) {
    FCsvProfilerTrace::OutputInlineStat("StopSpectrumAnalysis",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2846 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("StopSpectrumAnalysis",_GCsvCategory_Audio.Index,"CSV_StopSpectrumAnalysis");
  (**(code **)(**(longlong **)this + 0x1c8))(*(longlong **)this,*(undefined8 *)((longlong)this + 8))
  ;
  FCsvProfiler::EndStat("StopSpectrumAnalysis",uVar1);
  return;
}

// operator() @ 1464e4b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>::operator()(void *this)

{
  FMixerDevice *this_00;
  uint uVar1;
  bool bVar2;
  USoundSubmixBase *pUVar3;
  
  if (!__CsvProfilerStat2223) {
    FCsvProfilerTrace::OutputInlineStat("UnregisterSubmix",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2223 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("UnregisterSubmix",_GCsvCategory_Audio.Index,"CSV_UnregisterSubmix");
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 8));
  if (bVar2) {
    this_00 = *(FMixerDevice **)this;
    bVar2 = *(bool *)((longlong)this + 0x10);
    pUVar3 = (USoundSubmixBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
    Audio::FMixerDevice::UnloadSoundSubmix(this_00,pUVar3,bVar2);
  }
  FCsvProfiler::EndStat("UnregisterSubmix",uVar1);
  return;
}

// operator() @ 1464e4bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>::operator()(void *this)

{
  FMixerSubmix *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedPtr<FSoundEffectSubmix,1> local_18;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1464e4c02;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = *(FMixerSubmix **)this;
    if ((this_00 != (FMixerSubmix *)0x0) &&
       (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x10)), bVar4)) {
      local_18.Object = *(FSoundEffectSubmix **)((longlong)this + 0x18);
      local_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      Audio::FMixerSubmix::ReplaceSoundEffectSubmix(this_00,0,&local_18);
    }
  }
LAB_1464e4c02:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// operator() @ 1464e50e0

void __thiscall
`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  
  if (!__CsvProfilerStat2113) {
    FCsvProfilerTrace::OutputInlineStat("RegisterSubmix",_GCsvCategory_Audio.Index);
    __CsvProfilerStat2113 = true;
  }
  uVar1 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("RegisterSubmix",_GCsvCategory_Audio.Index,"CSV_RegisterSubmix");
  (**(code **)(**(longlong **)this + 0x78))
            (*(longlong **)this,*(undefined8 *)((longlong)this + 8),
             *(undefined1 *)((longlong)this + 0x10));
  FCsvProfiler::EndStat("RegisterSubmix",uVar1);
  return;
}

// operator() @ 1464e5a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)this == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Audio::FMixerSubmix::SetOutputVolume(*(FMixerSubmix **)this,*(float *)((longlong)this + 0x10));
  if (*(longlong *)this == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Audio::FMixerSubmix::SetWetLevel(*(FMixerSubmix **)this,*(float *)((longlong)this + 0x14));
  if (*(longlong *)this == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Audio::FMixerSubmix::SetDryLevel(*(FMixerSubmix **)this,*(float *)((longlong)this + 0x18));
  return;
}

// AddEnvelopeFollowerDelegate @ 1464eb670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::AddEnvelopeFollowerDelegate
          (FMixerDevice *this,USoundSubmix *param_1,FOnSubmixEnvelopeBP *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  undefined8 *puVar11;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar12;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar13;
  FMixerSubmix *pFVar14;
  FMixerSubmix *pFVar15;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FName local_a0;
  TWeakPtr<Audio::FMixerSubmix,1> local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  code *local_58 [5];
  undefined8 *local_30;
  
  bVar7 = IsInAudioThread();
  if (bVar7) {
    pTVar12 = GetSubmixInstance(this,&local_98,(USoundSubmixBase *)param_1);
    pFVar14 = (FMixerSubmix *)0x0;
    pFVar3 = (FMixerSubmix *)(pTVar12->WeakReferenceCount).ReferenceController;
    pFVar13 = pFVar14;
    pFVar15 = pFVar3;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        pFVar15 = pFVar14;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        pFVar15 = pFVar3;
        aVar2 = aVar8;
      } while (!bVar7);
      pTVar4 = (pTVar12->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
      (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar13 = (FMixerSubmix *)0x0;
      if (pFVar15 != (FMixerSubmix *)0x0) {
        pFVar13 = pTVar12->Object;
        pTVar12->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_98.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar13 == (FMixerSubmix *)0x0) {
      if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
      pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
      pFVar13 = *(FMixerSubmix **)pFVar5;
      if (pFVar3 != (FMixerSubmix *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar3->field_0xc =
             (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
        UNLOCK();
        aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
        do {
          this_00 = pFVar14;
          if (aVar2 == (atomic<int>)0x0) goto LAB_1464eb965;
          LOCK();
          aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
          bVar7 = aVar2 == aVar8;
          if (bVar7) {
            *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
            aVar8 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar8;
        } while (!bVar7);
      }
      this_00 = pFVar13;
      if (pFVar3 == (FMixerSubmix *)0x0) {
        this_00 = pFVar14;
      }
      pFVar14 = pFVar3;
      if (this_00 == (FMixerSubmix *)0x0) {
LAB_1464eb965:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MainSubmixPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0xad3,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FMixerSubmix::AddEnvelopeFollowerDelegate(this_00,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar14);
      if (pFVar3 != (FMixerSubmix *)0x0) {
        LOCK();
        paVar1 = (atomic<int> *)&pFVar3->field_0xc;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
        }
      }
    }
    else {
      FMixerSubmix::AddEnvelopeFollowerDelegate(pFVar13,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar15);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AddEnvelopeFollowerDelegate ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::AddEnvelopeFollowerDelegate(USoundSubmix_*,FOnSubmixEnvelopeBP_const_&)_::_5_::FStat_STAT_AddEnvelopeFollowerDelegate>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res20,"STAT_AddEnvelopeFollowerDelegate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddEnvelopeFollowerDelegate,*pFVar9,
                   L"FAudioThreadTask.AddEnvelopeFollowerDelegate","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_AddEnvelopeFollowerDelegate;
    if (StatPtr_STAT_AddEnvelopeFollowerDelegate ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::AddEnvelopeFollowerDelegate(USoundSubmix_*,FOnSubmixEnvelopeBP_const_&)_::_5_::FStat_STAT_AddEnvelopeFollowerDelegate>
         )0x0) {
      pFVar9 = ::FName::FName(&local_a0,"STAT_AddEnvelopeFollowerDelegate");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddEnvelopeFollowerDelegate,*pFVar9
                      ,L"FAudioThreadTask.AddEnvelopeFollowerDelegate",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_88);
    local_b0 = *(undefined8 *)&param_2->field_0x8;
    local_a8 = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    local_58[0] = (code *)0x0;
    puVar11 = FMemory::Malloc(0x30,8);
    *puVar11 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::`5'::<lambda_1>,1,1>
                ::_vftable_;
    puVar11[1] = this;
    puVar11[2] = param_1;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    local_30 = puVar11;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
    puVar11[4] = local_b0;
    puVar11[5] = local_a8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (puVar11 + 1 != (undefined8 *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::AddEnvelopeFollowerDelegate'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar10);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  }
  return;
}

// AddMainSubmixEffect @ 1464ebbc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::AddMainSubmixEffect
          (FMixerDevice *this,TSharedPtr<FSoundEffectSubmix,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSoundEffectSubmix *pFVar2;
  code *local_38 [5];
  undefined8 *local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  local_10[1] = this;
  local_10[2] = pFVar2;
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_10[3] = pTVar1;
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddMasterSubmixEffect @ 1464ebc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::AddMasterSubmixEffect
          (FMixerDevice *this,TSharedPtr<FSoundEffectSubmix,1> *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSoundEffectSubmix *pFVar3;
  code *local_38 [5];
  undefined8 *local_10;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  local_10[1] = this;
  local_10[2] = pFVar3;
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerDevice::AddMainSubmixEffect'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_10[3] = pTVar2;
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::AddMainSubmixEffect'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddPatchForSubmix @ 1464ebef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
Audio::FMixerDevice::AddPatchForSubmix
          (FMixerDevice *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__,uint param_1
          ,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  USoundSubmixBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  atomic<int> aVar4;
  uint uVar5;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar6;
  undefined1 *puVar7;
  char cVar8;
  uint uVar9;
  FMixerSubmix *this_00;
  uint *puVar10;
  FSharedReferencer<1> FVar11;
  char local_res8 [8];
  TSharedPtr<Audio::FMixerSubmix,1> local_28 [2];
  
  aVar4 = (atomic<int>)GetCurrentThreadId();
  if (aVar4 == this->AudioPlatformThreadId) {
    uVar9 = 0;
    if (0 < (this->RequiredSubmixes).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar9 < (this->RequiredSubmixes).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedPtr<Audio::FPatchOutput,1> *)(*pcVar2)();
          return pTVar6;
        }
        pUVar1 = *(USoundSubmixBase **)
                  ((this->RequiredSubmixes).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        if (pUVar1 == (USoundSubmixBase *)0x0) {
          cVar8 = (char)uVar9;
          if (cVar8 == '\0') {
            local_res8[0] = cVar8;
            `Audio::FMixerDevice::FindSubmixInstanceByObjectId'::__l12::<lambda_1>::operator()
                      (local_res8);
          }
          if (((DisableSubmixEffectEQCvar == 0) && (cVar8 == '\x03')) &&
             (2 < (byte)LogAudioMixer._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          }
        }
        else if (*(uint *)((longlong)&pUVar1->_padding_ + 4) == param_1) {
          GetRequiredSubmixInstance(this,local_28,pUVar1);
          this_00 = local_28[0].Object;
          FVar11.ReferenceController = local_28[0].SharedReferenceCount.ReferenceController;
          goto LAB_1464ec19a;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (this->RequiredSubmixes).ArrayNum);
    }
    if (DisableSubmixMutationLockCVar == 0) {
      lpCriticalSection = &(this->Submixes).MutationLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
          *(int *)&(this->Submixes).SubmixMap.field_0x34) {
        puVar7 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this->Submixes).SubmixMap.field_0x38;
        }
        uVar9 = *(uint *)(puVar7 + (ulonglong)
                                   (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & param_1) *
                                   4);
        if (uVar9 != 0xffffffff) {
          do {
            puVar10 = (uint *)((longlong)(int)uVar9 * 0x20 +
                              *(longlong *)&(this->Submixes).SubmixMap);
            if (*puVar10 == param_1) {
              if (puVar10 != (uint *)0x0) {
                local_28[0].Object = *(FMixerSubmix **)(puVar10 + 2);
                local_28[0].SharedReferenceCount.ReferenceController =
                     *(TReferenceControllerBase<1> **)(puVar10 + 4);
                if (local_28[0].SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_28[0].SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                goto LAB_1464ec191;
              }
              break;
            }
            uVar9 = puVar10[6];
          } while (uVar9 != 0xffffffff);
        }
      }
      local_28[0].Object = (FMixerSubmix *)0x0;
      local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_1464ec191:
      FVar11.ReferenceController = local_28[0].SharedReferenceCount.ReferenceController;
      this_00 = local_28[0].Object;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
          *(int *)&(this->Submixes).SubmixMap.field_0x34) {
        puVar7 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this->Submixes).SubmixMap.field_0x38;
        }
        uVar9 = *(uint *)(puVar7 + (ulonglong)
                                   (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & param_1) *
                                   4);
        if (uVar9 != 0xffffffff) {
          do {
            puVar10 = (uint *)((longlong)(int)uVar9 * 0x20 +
                              *(longlong *)&(this->Submixes).SubmixMap);
            if (*puVar10 == param_1) {
              if (puVar10 != (uint *)0x0) {
                this_00 = *(FMixerSubmix **)(puVar10 + 2);
                FVar11.ReferenceController = *(TReferenceControllerBase<1> **)(puVar10 + 4);
                local_28[0].Object = this_00;
                local_28[0].SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
                if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (FVar11.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                goto LAB_1464ec19a;
              }
              break;
            }
            uVar9 = puVar10[6];
          } while (uVar9 != 0xffffffff);
        }
      }
      this_00 = (FMixerSubmix *)0x0;
      FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_28[0].Object = (FMixerSubmix *)0x0;
      local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
LAB_1464ec19a:
    if (this_00 == (FMixerSubmix *)0x0) {
      __return_storage_ptr__->Object = (FPatchOutput *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      if ((this_00 == (FMixerSubmix *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<Audio::FPatchOutput,1> *)(*pcVar2)();
        return pTVar6;
      }
      FMixerSubmix::AddPatch(this_00,__return_storage_ptr__,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757105098>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0xc36,"IsAudioRenderingThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<Audio::FPatchOutput,1> *)(*pcVar2)();
      return pTVar6;
    }
    __return_storage_ptr__->Object = (FPatchOutput *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 1464ed170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::AddReferencedObjects(FMixerDevice *this,FReferenceCollector *param_1)

{
  return;
}

// AddSpectralAnalysisDelegate @ 1464ed4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::AddSpectralAnalysisDelegate
          (FMixerDevice *this,USoundSubmix *param_1,FSoundSpectrumAnalyzerDelegateSettings *param_2,
          FOnSubmixSpectralAnalysisBP *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  FName *pFVar8;
  TStatId TVar9;
  undefined8 *puVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  FMixerSubmix *local_118;
  FSharedReferencer<1> local_110;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  FMixerDevice *local_f8;
  USoundSubmix *local_f0;
  FSoundSpectrumAnalyzerDelegateSettings local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  FName local_a8;
  FName local_a0;
  TWeakPtr<Audio::FMixerSubmix,1> local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  code *local_58 [5];
  undefined8 *local_30;
  
  bVar6 = IsInAudioThread();
  if (bVar6) {
    pTVar11 = GetSubmixInstance(this,&local_98,(USoundSubmixBase *)param_1);
    local_118 = (FMixerSubmix *)0x0;
    local_110.ReferenceController = (pTVar11->WeakReferenceCount).ReferenceController;
    if (local_110.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_110.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_110.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar7 = (local_110.ReferenceController)->SharedReferenceCount;
        bVar6 = aVar2 == aVar7;
        if (bVar6) {
          (local_110.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar6);
      pTVar3 = (pTVar11->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))();
      }
      (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    if (local_110.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_118 = pTVar11->Object;
      pTVar11->Object = (FMixerSubmix *)0x0;
    }
    if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
      }
    }
    bVar6 = false;
    if (local_118 == (FMixerSubmix *)0x0) {
      if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
      local_118 = *(FMixerSubmix **)pFVar4;
      local_100.ReferenceController = pTVar3;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        local_118 = (FMixerSubmix *)0x0;
        local_108 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_110,&local_100);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
        aVar2 = pTVar3->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_118 = (FMixerSubmix *)0x0;
            break;
          }
          LOCK();
          aVar7 = pTVar3->SharedReferenceCount;
          bVar6 = aVar2 == aVar7;
          if (bVar6) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar7 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar7;
        } while (!bVar6);
        local_108 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_110,&local_100);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100.ReferenceController);
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3);
        }
      }
      bVar6 = local_118 == (FMixerSubmix *)0x0;
    }
    if (local_118 == (FMixerSubmix *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757105295>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0xb71,"FoundSubmix.IsValid()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      if ((bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FMixerSubmix::AddSpectralAnalysisDelegate(local_118,param_2,param_3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_110.ReferenceController);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AddSpectralAnalysisDelegate ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::AddSpectralAnalysisDelegate(USoundSubmix_*,FSoundSpectrumAnalyzerDelegateSettings_const_&,FOnSubmixSpectralAnalysisBP_const_&)_::_5_::FStat_STAT_AddSpectralAnalysisDelegate>
           )0x0) {
        pFVar8 = ::FName::FName(&local_a8,"STAT_AddSpectralAnalysisDelegate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddSpectralAnalysisDelegate,*pFVar8,
                   L"FAudioThreadTask.AddSpectralAnalysisDelegate","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar9.StatIdPtr = (TStatIdData *)StatPtr_STAT_AddSpectralAnalysisDelegate;
    if (StatPtr_STAT_AddSpectralAnalysisDelegate ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::AddSpectralAnalysisDelegate(USoundSubmix_*,FSoundSpectrumAnalyzerDelegateSettings_const_&,FOnSubmixSpectralAnalysisBP_const_&)_::_5_::FStat_STAT_AddSpectralAnalysisDelegate>
         )0x0) {
      pFVar8 = ::FName::FName(&local_a0,"STAT_AddSpectralAnalysisDelegate");
      TVar9.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddSpectralAnalysisDelegate,*pFVar8
                      ,L"FAudioThreadTask.AddSpectralAnalysisDelegate",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_f8 = this;
    local_f0 = param_1;
    FSoundSpectrumAnalyzerDelegateSettings::FSoundSpectrumAnalyzerDelegateSettings
              (&local_e8,param_2);
    local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_b8 = 0;
    local_b0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_88);
    local_b8 = *(undefined8 *)&param_3->field_0x8;
    local_b0 = *(undefined8 *)&param_3->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    local_58[0] = (code *)0x0;
    puVar10 = FMemory::Malloc(0x58,8);
    *puVar10 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::`5'::<lambda_1>,1,1>
                ::_vftable_;
    puVar10[1] = local_f8;
    puVar10[2] = local_f0;
    local_30 = puVar10;
    FSoundSpectrumAnalyzerDelegateSettings::FSoundSpectrumAnalyzerDelegateSettings
              ((FSoundSpectrumAnalyzerDelegateSettings *)(puVar10 + 3),&local_e8);
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c0,&local_70);
    puVar10[9] = local_b8;
    puVar10[10] = local_b0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (puVar10 + 1 != (undefined8 *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::AddSpectralAnalysisDelegate'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar9);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
    if (local_e8.BandSettings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.BandSettings.AllocatorInstance.Data);
    }
  }
  return;
}

// AddSubmixEffect @ 1464ed960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall
Audio::FMixerDevice::AddSubmixEffect
          (FMixerDevice *this,USoundSubmix *param_1,TSharedPtr<FSoundEffectSubmix,1> *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSoundEffectSubmix *pFVar5;
  longlong *plVar6;
  atomic<int> aVar7;
  int iVar8;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FMixerSubmix *this_00;
  bool bVar11;
  FName local_res20;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  pTVar9 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
  this_00 = (FMixerSubmix *)0x0;
  pTVar10 = (pTVar9->WeakReferenceCount).ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar7 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar7;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar11);
    pTVar4 = (pTVar9->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar3 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar9->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      this_00 = pTVar9->Object;
      pTVar9->Object = (FMixerSubmix *)0x0;
    }
  }
  plVar6 = (longlong *)
           CONCAT44(local_68.WeakReferenceCount.ReferenceController._4_4_,
                    local_68.WeakReferenceCount.ReferenceController._0_4_);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if (this_00 == (FMixerSubmix *)0x0) {
    if (2 < (byte)LogAudio._0_1_) {
      local_res20 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res20,(FString *)&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_68.Object != (FMixerSubmix *)0x0) {
        FMemory::Free(local_68.Object);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    iVar8 = 0;
  }
  else {
    iVar8 = FMixerSubmix::GetNumEffects(this_00);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar5 = param_2->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x30,8);
    local_30[1] = this;
    local_30[2] = this_00;
    *local_30 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::AddSubmixEffect'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_30[3] = pTVar10;
    local_30[4] = pFVar5;
    local_30[5] = pTVar4;
    if (local_30 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::AddSubmixEffect'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    iVar8 = iVar8 + 1;
  }
  return iVar8;
}

// AudioRenderThreadCommand @ 1464eeaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::AudioRenderThreadCommand
          (FMixerDevice *this,TFunction<void___cdecl(void)> *param_1)

{
  TNode *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TNode *pTVar5;
  longlong *plVar6;
  
  pTVar5 = ::operator_new(0x40);
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar5->Item = *(undefined8 *)param_1;
    *(undefined8 *)&(pTVar5->Item).field_0x28 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    uVar2 = *(undefined4 *)&param_1->field_0x14;
    uVar3 = *(undefined4 *)&param_1->field_0x18;
    uVar4 = *(undefined4 *)&param_1->field_0x1c;
    *(undefined4 *)&(pTVar5->Item).field_0x10 = *(undefined4 *)&param_1->field_0x10;
    *(undefined4 *)&(pTVar5->Item).field_0x14 = uVar2;
    *(undefined4 *)&(pTVar5->Item).field_0x18 = uVar3;
    *(undefined4 *)&(pTVar5->Item).field_0x1c = uVar4;
    *(undefined8 *)&(pTVar5->Item).field_0x20 = *(undefined8 *)&param_1->field_0x20;
    if (*(longlong *)&pTVar5->Item != 0) {
      *(undefined8 *)param_1 = 0;
    }
    pTVar1 = (this->CommandQueue).Head;
    (this->CommandQueue).Head = pTVar5;
    pTVar1->NextNode = pTVar5;
  }
  if (*(longlong *)param_1 != 0) {
    plVar6 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}

// CacheChannelMap @ 1464eefa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::CacheChannelMap(FMixerDevice *this,int param_1,int param_2,bool param_3)

{
  EMonoChannelUpmixMethod EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  FChannelMapParams local_48;
  ulonglong local_38;
  
  if ((((0 < param_1) && (local_38 = __security_cookie.value ^ (ulonglong)auStack_78, 0 < param_2))
      && (param_1 < 9)) && (param_2 < 9)) {
    uVar4 = GetChannelMapCacheId(param_1,param_2,param_3);
    EVar1 = this->MonoChannelUpmixMethod;
    local_48.Order = OutputMajorOrder;
    local_48.NumInputChannels = param_1;
    local_48.NumOutputChannels = param_2;
    local_48.bIsCenterChannelOnly = param_3;
    if (EVar1 == Linear) {
      local_48.MonoUpmixMethod = Linear;
    }
    else if (EVar1 == EqualPower) {
      local_48.MonoUpmixMethod = EqualPower;
    }
    else if (EVar1 == FullVolume) {
      local_48.MonoUpmixMethod = FullVolume;
    }
    else {
      local_48.MonoUpmixMethod = EqualPower;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerChannelMaps.cpp"
                         ,0x71,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = 0;
    if ((int)uVar4 < ChannelMapCache.ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (local_58 = (longlong)(int)uVar4, local_50 = (longlong)ChannelMapCache.ArrayNum,
       bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = Create2DChannelMap(&local_48,
                               (TArray<float,TSizedDefaultAllocator<32>_> *)
                               (ChannelMapCache.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10
                               ));
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bSuccess",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerChannelMaps.cpp"
                           ,0x75,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// CheckAudioRenderingThread @ 1464f01f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::CheckAudioRenderingThread(FMixerDevice *this)

{
  code *pcVar1;
  bool bVar2;
  atomic<int> aVar3;
  
  if (this->AudioPlatformThreadId == (atomic<int>)0xffffffff) {
    aVar3 = (atomic<int>)GetCurrentThreadId();
    LOCK();
    this->AudioPlatformThreadId = aVar3;
    UNLOCK();
  }
  aVar3 = (atomic<int>)GetCurrentThreadId();
  if (aVar3 != this->AudioPlatformThreadId) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107634>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x24e,"CurrentThreadId == AudioPlatformThreadId");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CheckAudioThread @ 1464f0260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::CheckAudioThread(FMixerDevice *this)

{
  code *pcVar1;
  bool bVar2;
  
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
  return;
}

// ClearMainSubmixEffects @ 1464f02b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::ClearMainSubmixEffects(FMixerDevice *this)

{
  code *local_38 [2];
  undefined **local_28;
  FMixerDevice *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// ClearMasterSubmixEffects @ 1464f02f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::ClearMasterSubmixEffects(FMixerDevice *this)

{
  code *local_38 [2];
  undefined **local_28;
  FMixerDevice *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerDevice::ClearMainSubmixEffects'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerDevice::ClearMainSubmixEffects'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// ClearSubmixEffectChainOverride @ 1464f0490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::ClearSubmixEffectChainOverride
          (FMixerDevice *this,USoundSubmix *param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMixerSubmix *pFVar7;
  bool bVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  pTVar5 = GetSubmixInstance(this,&local_58,(USoundSubmixBase *)param_1);
  pFVar7 = (FMixerSubmix *)0x0;
  pTVar6 = (pTVar5->WeakReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar3 = (pTVar5->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = pTVar5->Object;
      pTVar5->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar7 != (FMixerSubmix *)0x0) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x20,8);
    *(float *)(local_20 + 3) = param_2;
    local_20[1] = pFVar7;
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_20[2] = pTVar6;
    if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::ClearSubmixEffectChainOverride'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// ClearSubmixEffects @ 1464f0630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::ClearSubmixEffects(FMixerDevice *this,USoundSubmix *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMixerSubmix *pFVar7;
  bool bVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_48;
  code *local_38 [2];
  undefined **local_28;
  FMixerSubmix *local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  pTVar5 = GetSubmixInstance(this,&local_48,(USoundSubmixBase *)param_1);
  pFVar7 = (FMixerSubmix *)0x0;
  pTVar6 = (pTVar5->WeakReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar3 = (pTVar5->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = pTVar5->Object;
      pTVar5->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar7 != (FMixerSubmix *)0x0) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::ClearSubmixEffects'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::ClearSubmixEffects'::__l5::<lambda_1>,void>
                  ::Call;
    local_20 = pFVar7;
    local_18 = pTVar6;
    AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// CountBytes @ 1464f7a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::CountBytes(FMixerDevice *this,FArchive *param_1)

{
  longlong lVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&this->field_0x208 << 3,
             (longlong)*(int *)&this->field_0x20c << 3);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&this->field_0x218 << 3,
             (longlong)*(int *)&this->field_0x21c << 3);
  TSet<TTuple<FWaveInstance_*,FSoundSource_*>,TDefaultMapHashableKeyFuncs<FWaveInstance_*,FSoundSource_*,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FWaveInstance_*,FSoundSource_*>,TDefaultMapHashableKeyFuncs<FWaveInstance_*,FSoundSource_*,0>,FDefaultSetAllocator>
                *)&this->field_0x300,param_1);
  lVar1 = (longlong)(*(int *)&this->field_0x308 - *(int *)&this->field_0x334) * 400;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar1,lVar1);
  TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<USoundClass_*,FSoundClassProperties>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassProperties,0>,FDefaultSetAllocator>
                *)&this->field_0x350,param_1);
  TSet<TTuple<TObjectPtr<USoundMix>,FSoundMixState>,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<TObjectPtr<USoundMix>,FSoundMixState>,TDefaultMapHashableKeyFuncs<TObjectPtr<USoundMix>,FSoundMixState,0>,FDefaultSetAllocator>
                *)&this->field_0x400,param_1);
  return;
}

// CreateEffectsManager @ 1464f8960

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioEffectsManager * __thiscall Audio::FMixerDevice::CreateEffectsManager(FMixerDevice *this)

{
  FAudioEffectsManager *this_00;
  
  this_00 = ::operator_new(0x2d8);
  if (this_00 != (FAudioEffectsManager *)0x0) {
    FAudioEffectsManager::FAudioEffectsManager(this_00,(FAudioDevice *)this);
    this_00->_padding_ = (longlong)&___7FAudioMixerEffectsManager_Audio__6B_;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)(this_00 + 1));
    this_00[1].CurrentReverbEffect.GainHF = 0.0;
    this_00[1].CurrentReverbEffect.DecayTime = 0.0;
    this_00[1].CurrentReverbEffect.DecayHFRatio = 0.0;
    this_00[1].CurrentReverbEffect.ReflectionsGain = 0.0;
    this_00[1].CurrentReverbEffect.ReflectionsDelay = 0.0;
    this_00[1].CurrentReverbEffect.LateGain = 0.0;
    this_00[1].CurrentReverbEffect.LateDelay = 0.0;
    this_00[1].CurrentReverbEffect.AirAbsorptionGainHF = 0.0;
    return this_00;
  }
  return (FAudioEffectsManager *)0x0;
}

// CreateSoundSource @ 1464f8d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FSoundSource * __thiscall Audio::FMixerDevice::CreateSoundSource(FMixerDevice *this)

{
  FMixerSource *pFVar1;
  
  pFVar1 = ::operator_new(0x2c0);
  if (pFVar1 != (FMixerSource *)0x0) {
    pFVar1 = FMixerSource::FMixerSource(pFVar1,(FAudioDevice *)this);
    return (FSoundSource *)pFVar1;
  }
  return (FSoundSource *)0x0;
}

// CreateSynchronizedAudioTaskQueue @ 1464f91f0

void __cdecl Audio::FMixerDevice::CreateSynchronizedAudioTaskQueue(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  uint *puVar4;
  longlong lVar5;
  uint local_res8 [2];
  TKeyInitializer<unsigned_int_const_&> local_res10;
  uint *local_res18 [2];
  
  local_res8[0] = param_1;
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._8_4_ !=
      FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar5 = 0x154bfa788;
    if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar5 = FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar1 = *(uint *)(lVar5 + (ulonglong)
                              (FSynchronizedProceduralDecodeHandle::
                               ProceduralRenderingSynchronizationQueues._72_4_ - 1 & local_res8[0])
                              * 4);
    while (uVar1 != 0xffffffff) {
      puVar4 = (uint *)((longlong)(int)uVar1 * 0x20 +
                       FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues
                       ._0_8_);
      if (*puVar4 == local_res8[0]) {
        puVar2 = puVar4 + 2;
        if (puVar4 == (uint *)0x0) {
          puVar2 = (uint *)0x0;
        }
        if (puVar2 != (uint *)0x0) goto LAB_1464f92dc;
        break;
      }
      uVar1 = puVar4[6];
    }
  }
  local_res18[0] = local_res8;
  TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues,
             &local_res10,(bool *)local_res18);
  pTVar3 = TMapBase<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked((TMapBase<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&FSynchronizedProceduralDecodeHandle::
                             ProceduralRenderingSynchronizationQueues,local_res8[0]);
  if (pTVar3->ArrayMax < 0x80) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x80,&pTVar3->AllocatorInstance,pTVar3->ArrayNum,&pTVar3->ArrayMax);
  }
LAB_1464f92dc:
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  return;
}

// DestroySynchronizedAudioTaskQueue @ 1464fb340

void __cdecl Audio::FMixerDevice::DestroySynchronizedAudioTaskQueue(uint param_1,bool param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint local_res18 [4];
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  if (param_2) {
    FSynchronizedProceduralDecodeHandle::KickQueuedTasks(param_1);
  }
  if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._8_4_ !=
      FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar4 = 0x154bfa788;
    if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar4 = FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar1 = *(uint *)(lVar4 + (ulonglong)
                              (FSynchronizedProceduralDecodeHandle::
                               ProceduralRenderingSynchronizationQueues._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar3 = (uint *)((longlong)(int)uVar1 * 0x20 +
                       FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues
                       ._0_8_);
      if (*puVar3 == param_1) {
        puVar2 = puVar3 + 2;
        if (puVar3 == (uint *)0x0) {
          puVar2 = (uint *)0x0;
        }
        if (puVar2 != (uint *)0x0) {
          local_res18[0] = param_1;
          TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&FSynchronizedProceduralDecodeHandle::
                         ProceduralRenderingSynchronizationQueues,param_1,local_res18);
        }
        break;
      }
      uVar1 = puVar3[6];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001464fb402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  return;
}

// DrawSubmixes @ 1464fd070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::DrawSubmixes
          (FMixerDevice *this,FOutputDevice *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  FString *pFVar6;
  UClass *pUVar7;
  byte bVar8;
  longlong *plVar9;
  ForElementType<FSetElementId> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 auStackY_218 [32];
  <lambda_2> local_1e8 [4];
  undefined4 local_1e4;
  TObjectIterator<USoundSubmixBase> local_1e0;
  FString local_1c8;
  TPairInitializer<unsigned_int_&&,USoundSubmixBase_*_&&> local_1b8;
  undefined8 local_1a8;
  FOutputDevice *local_1a0;
  FName local_198;
  longlong *local_190;
  uint uStack_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  undefined4 uStack_178;
  uint uStack_174;
  uint local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined4 *local_130;
  undefined8 *local_128;
  TSharedPtr<Audio::FMixerSubmix,1> local_120 [2];
  undefined4 local_f4;
  TSet<TTuple<unsigned_int,USoundSubmixBase_*>,TDefaultMapHashableKeyFuncs<unsigned_int,USoundSubmixBase_*,0>,FDefaultSetAllocator>
  local_e8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar5 = 0;
  uVar16 = 0;
  local_1e4 = 0;
  local_1a0 = param_1;
  FOutputDevice::LogfImpl(param_1,L"AudioDevice=%d, Device Instance=0x%p");
  pFVar6 = AlgoImpl::
           FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,_Audio::FMixerDevice::DrawSubmixes_::__l3::<lambda_1>_>
                     (param_2,(<lambda_1>)local_1e8[0]);
  if ((pFVar6 != (FString *)0x0) &&
     (FOutputDevice::Log(param_1,L"[Instance Hierarchy]"), uVar12 = uVar5,
     0 < (this->RequiredSubmixes).ArrayNum)) {
    do {
      FOutputDevice::LogfImpl(param_1,L"SlotName=[%s]");
      uVar15 = 0;
      if ((int)uVar12 < (this->RequiredSubmixInstances).ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      DrawSubmixInstances(*(FMixerSubmix **)
                           ((this->RequiredSubmixInstances).AllocatorInstance.Data +
                           (longlong)(int)uVar12 * 0x10),1,param_1);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->RequiredSubmixes).ArrayNum);
  }
  pFVar6 = AlgoImpl::
           FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>_const_&,_Audio::FMixerDevice::DrawSubmixes_::__l8::<lambda_2>_>
                     (param_2,local_1e8[0]);
  if (pFVar6 != (FString *)0x0) {
    FOutputDevice::Log(param_1,L"[Map of UObject -> SubmixPtrs]");
    local_e8.Elements._0_8_ = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    local_1e0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ObjectArray.ArrayNum = 0;
    local_1e0.ObjectArray.ArrayMax = 0;
    local_1e0.Index = 0xffffffff;
    EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = Z_Construct_UClass_USoundSubmixBase_NoRegister();
    GetObjectsOfClass(pUVar7,&local_1e0.ObjectArray,true,RF_ClassDefaultObject,
                      EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USoundSubmixBase>::Advance(&local_1e0);
      lVar14 = (longlong)local_1e0.Index;
      if ((local_1e0.Index < 0) || (local_1e0.ObjectArray.ArrayNum <= local_1e0.Index)) break;
      uVar12 = uVar16;
      if (local_1e0.Index < local_1e0.ObjectArray.ArrayNum) {
        uVar12 = (uint)~local_1e0.Index >> 0x1f;
      }
      if (uVar12 == 0) {
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
      local_1a8 = *(undefined8 *)(local_1e0.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
      lVar14 = (longlong)local_1e0.Index;
      uVar12 = uVar16;
      if (local_1e0.Index < local_1e0.ObjectArray.ArrayNum) {
        uVar12 = (uint)~local_1e0.Index >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1e4 = *(undefined4 *)
                   (*(longlong *)(local_1e0.ObjectArray.AllocatorInstance.Data + lVar14 * 8) + 0xc);
      local_130 = &local_1e4;
      local_128 = &local_1a8;
      TSet<TTuple<unsigned_int,USoundSubmixBase_*>,TDefaultMapHashableKeyFuncs<unsigned_int,USoundSubmixBase_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&&,USoundSubmixBase_*_&&>_>
                (&local_e8,&local_1b8,(bool *)&local_130);
    }
    if (local_1e0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.ObjectArray.AllocatorInstance.Data);
    }
    FSubmixMap::GetKeys(&this->Submixes,
                        (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                        local_98);
    uVar12 = local_70;
    uStack_184 = 1;
    uStack_174 = uVar16;
    local_170 = uVar16;
    if (local_70 != 0) {
      puVar17 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar17 = local_78;
      }
      uVar15 = *puVar17;
      while (uVar15 == 0) {
        lVar14 = (longlong)(int)uVar16;
        local_170 = local_170 + 0x20;
        uVar16 = uVar16 + 1;
        uStack_174 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_1464fd411;
        uVar15 = puVar17[lVar14 + 1];
      }
      uStack_184 = -uVar15 & uVar15;
      uVar1 = (ulonglong)uStack_184 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1b8.Key._4_4_ = (int)lVar14;
      uStack_174 = (local_170 - 1) + local_1b8.Key._4_4_;
      if ((int)local_70 < (int)uStack_174) {
        uStack_174 = local_70;
      }
    }
LAB_1464fd411:
    local_190 = (longlong *)local_98;
    uStack_16c = local_f4;
    local_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar15 = local_70 & 0xffffffe0;
    iStack_168 = local_98._8_4_ - local_64;
    uStack_178 = 0xffffffff;
    TStack_158.CurrentBitIndex = uStack_174;
    TStack_158.UnvisitedBitMask = 0xffffffff;
    TStack_158._padding_ = CONCAT44(uStack_184,uVar16);
    iVar13 = (int)local_70 >> 5;
    TStack_158._28_4_ = local_f4;
    TStack_158.BaseBitIndex = local_170;
    uStack_138 = CONCAT44(uStack_164,iStack_168);
    bVar8 = (byte)local_70;
    uStack_188 = uVar16;
    local_160 = local_190;
    TStack_158.Array = local_180;
    if (((int)local_70 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1 = local_1a0;
    if (uVar12 != local_70) {
      puVar17 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar17 = local_78;
      }
      uVar16 = -1 << (bVar8 & 0x1f) & puVar17[iVar13];
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1464fd521;
        uVar16 = puVar17[lVar14 + 1];
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1b8.Value._0_4_ = (int)lVar14;
      uVar12 = (int)local_1b8.Value + -1 + uVar15;
      if ((int)local_70 < (int)uVar12) {
        uVar12 = local_70;
      }
    }
LAB_1464fd521:
    while( true ) {
      plVar9 = local_160;
      if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
        local_1e8[0] = (<lambda_2>)0x0;
        `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
      }
      if (((TStack_158.CurrentBitIndex == uVar12) &&
          (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar9 == (longlong *)local_98)) break;
      uVar16 = *(uint *)(*plVar9 + (longlong)TStack_158.CurrentBitIndex * 0xc);
      if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
        FVar10 = (ForElementType<FSetElementId>)&local_e8.Hash;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar10 = local_e8.Hash.SecondaryData;
        }
        iVar13 = *(int *)((longlong)FVar10 + (ulonglong)(local_e8.HashSize - 1U & uVar16) * 4);
        while (iVar13 != -1) {
          lVar14 = local_e8.Elements._0_8_ + (longlong)iVar13 * 0x18;
          if (*(uint *)(local_e8.Elements._0_8_ + (longlong)iVar13 * 0x18) == uVar16) {
            plVar9 = (longlong *)(lVar14 + 8);
            if (lVar14 == 0) {
              plVar9 = (longlong *)0x0;
            }
            if (plVar9 != (longlong *)0x0) {
              uVar5 = 1;
              if (*plVar9 == 0) {
                ::FString::FString(&local_1c8,L"None");
              }
              else {
                local_198 = *(FName *)(*plVar9 + 0x18);
                ::FName::ToString(&local_198,&local_1c8);
              }
            }
            break;
          }
          iVar13 = *(int *)(lVar14 + 0x10);
        }
      }
      FOutputDevice::LogfImpl(param_1,L"%u -> %s");
      if ((uVar5 != 0) &&
         (uVar5 = 0, local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,USoundSubmixBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,USoundSubmixBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
  }
  uVar16 = 0;
  FOutputDevice::Log(param_1,L"[Map of UObject Hierarchy]");
  if (0 < (this->RequiredSubmixes).ArrayNum) {
    do {
      FOutputDevice::LogfImpl(param_1,L"SlotName=[%s]");
      uVar5 = 0;
      if ((int)uVar16 < (this->RequiredSubmixInstances).ArrayNum) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (this->RequiredSubmixInstances).AllocatorInstance.Data +
                (longlong)(int)uVar16 * 0x10;
      local_120[0].Object = *(FMixerSubmix **)pFVar11;
      local_120[0].SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      if (local_120[0].SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_120[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_120[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
             );
        UNLOCK();
      }
      uVar5 = 0;
      if ((int)uVar16 < (this->RequiredSubmixes).ArrayNum) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      DrawSubmixHeirarchy(*(USoundSubmixBase **)
                           ((this->RequiredSubmixes).AllocatorInstance.Data +
                           (longlong)(int)uVar16 * 8),local_120,this,1,param_1,L"In Slot");
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (this->RequiredSubmixes).ArrayNum);
  }
  return;
}

// EnableDebugAudioOutput @ 1464fda20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::EnableDebugAudioOutput(FMixerDevice *this)

{
  this->bDebugOutputEnabled = true;
  return;
}

// Exec @ 1464fdb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
Audio::FMixerDevice::Exec
          (FMixerDevice *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  
  bVar1 = FAudioDevice::Exec((FAudioDevice *)this,param_1,param_2,param_3);
  return bVar1;
}

// FadeIn @ 1464fe590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::FadeIn(FMixerDevice *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fe59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->AudioMixerPlatform->_padding_ + 0x138))();
  return;
}

// FadeOut @ 1464fe5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::FadeOut(FMixerDevice *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464fe5ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->AudioMixerPlatform->_padding_ + 0x140))();
  return;
}

// FindSubmixInstanceByObjectId @ 1464fea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::FindSubmixInstanceByObjectId
          (FMixerDevice *this,TSharedPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__,uint param_1
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  USoundSubmixBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar5;
  char cVar6;
  uint uVar7;
  char local_res8 [8];
  
  uVar7 = 0;
  if (0 < (this->RequiredSubmixes).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->RequiredSubmixes).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<Audio::FMixerSubmix,1> *)(*pcVar2)();
        return pTVar5;
      }
      pUVar1 = *(USoundSubmixBase **)
                ((this->RequiredSubmixes).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
      if (pUVar1 == (USoundSubmixBase *)0x0) {
        cVar6 = (char)uVar7;
        if (cVar6 == '\0') {
          local_res8[0] = cVar6;
          `Audio::FMixerDevice::FindSubmixInstanceByObjectId'::__l12::<lambda_1>::operator()
                    (local_res8);
        }
        if (((DisableSubmixEffectEQCvar == 0) && (cVar6 == '\x03')) &&
           (2 < (byte)LogAudioMixer._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      else if (*(uint *)((longlong)&pUVar1->_padding_ + 4) == param_1) {
        GetRequiredSubmixInstance(this,__return_storage_ptr__,pUVar1);
        return __return_storage_ptr__;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->RequiredSubmixes).ArrayNum);
  }
  if (DisableSubmixMutationLockCVar == 0) {
    lpCriticalSection = &(this->Submixes).MutationLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
    ::FindRef((TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
               *)&this->Submixes,__return_storage_ptr__,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
    ::FindRef((TMapBase<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>_>
               *)&this->Submixes,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// FlushAudioRenderingCommands @ 1464fed00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::FlushAudioRenderingCommands(FMixerDevice *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((this->field_0x5c1 & 4) != 0) {
    bVar1 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar1) {
      cVar2 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0xf8))();
      if (cVar2 == '\0') {
        FMixerSourceManager::FlushCommandQueue((this->SourceManager).Ptr,param_1);
        return;
      }
    }
  }
  cVar2 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0xf8))();
  if (cVar2 != '\0') {
    FMixerSourceManager::FlushCommandQueue((this->SourceManager).Ptr,true);
    return;
  }
  PumpCommandQueue(this);
  FMixerSourceManager::PumpCommandQueue((this->SourceManager).Ptr);
  FMixerSourceManager::PumpCommandQueue((this->SourceManager).Ptr);
  FMixerSourceManager::UpdatePendingReleaseData((this->SourceManager).Ptr,true);
  return;
}

// FlushExtended @ 1464fef30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::FlushExtended(FMixerDevice *this,UWorld *param_1,bool param_2)

{
  FQuartzClockManager::Flush(&this->QuantizedEventClockManager);
  return;
}

// GameThreadMPSCCommand @ 1464ff1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::GameThreadMPSCCommand
          (FMixerDevice *this,TFunction<void___cdecl(void)> *param_1)

{
  atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar5;
  longlong *plVar6;
  
  aVar5 = (atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>)
          FMemory::Malloc(0x40,0x10);
  *(undefined8 *)aVar5 = 0;
  *(undefined8 *)((longlong)aVar5 + 0x10) = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)aVar5 + 0x38) = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar2 = *(undefined4 *)&param_1->field_0x14;
  uVar3 = *(undefined4 *)&param_1->field_0x18;
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)((longlong)aVar5 + 0x20) = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)((longlong)aVar5 + 0x24) = uVar2;
  *(undefined4 *)((longlong)aVar5 + 0x28) = uVar3;
  *(undefined4 *)((longlong)aVar5 + 0x2c) = uVar4;
  *(undefined8 *)((longlong)aVar5 + 0x30) = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)((longlong)aVar5 + 0x10) != 0) {
    *(undefined8 *)param_1 = 0;
  }
  LOCK();
  aVar1 = (this->GameThreadCommandQueue).Head;
  (this->GameThreadCommandQueue).Head = aVar5;
  UNLOCK();
  *(atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> *)aVar1 = aVar5;
  if (*(longlong *)param_1 != 0) {
    plVar6 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}

// Get2DChannelMap @ 1464ff570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::Get2DChannelMap
          (FMixerDevice *this,bool param_1,int param_2,bool param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  Get2DChannelMap(param_1,param_2,(this->PlatformInfo).NumChannels,param_3,param_4);
  return;
}

// Get2DChannelMap @ 1464ff590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Audio::FMixerDevice::Get2DChannelMap
          (bool param_1,int param_2,int param_3,bool param_4,
          TArray<float,TAlignedHeapAllocator<16>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  LARGE_INTEGER local_18;
  LARGE_INTEGER local_10;
  
  if ((((param_2 < 1) || (param_3 < 1)) || (8 < param_2)) || (8 < param_3)) {
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0x40,&param_5->AllocatorInstance,&param_5->ArrayNum,&param_5->ArrayMax);
    memset((param_5->AllocatorInstance).Data + (longlong)iVar4 * 4,0,0x100);
    QueryPerformanceCounter(&local_18);
    if (__real_40b3880000000000 <
        (double)(local_18.QuadPart - TimeOfLastLogMsgInCycles) *
        FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000) {
      QueryPerformanceCounter(&local_10);
      TimeOfLastLogMsgInCycles = local_10.QuadPart;
      if (2 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    return;
  }
  if ((param_1) && (param_2 == 6)) {
    uVar5 = 0;
    if ((int)(param_3 - 1U) < VorbisChannelMapCache.ArrayNum) {
      uVar5 = ~(param_3 - 1U) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TArray<float,TAlignedHeapAllocator<16>_>::operator=<TSizedDefaultAllocator<32>_>
              (param_5,(TArray<float,TSizedDefaultAllocator<32>_> *)
                       (VorbisChannelMapCache.AllocatorInstance.Data +
                       (longlong)param_3 * 0x10 + -0x10));
    return;
  }
  uVar3 = GetChannelMapCacheId(param_2,param_3,param_4);
  uVar5 = 0;
  if ((int)uVar3 < ChannelMapCache.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TArray<float,TAlignedHeapAllocator<16>_>::operator=<TSizedDefaultAllocator<32>_>
            (param_5,(TArray<float,TSizedDefaultAllocator<32>_> *)
                     (ChannelMapCache.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10));
  return;
}

// Get3DChannelMap @ 1464ff890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::Get3DChannelMap
          (FMixerDevice *this,int param_1,FWaveInstance *param_2,float param_3,float param_4,
          TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
          *param_5,float param_6,TArray<float,TAlignedHeapAllocator<16>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res18 [8];
  undefined1 local_a8;
  undefined1 local_a7 [3];
  float local_a4;
  float local_a0;
  float local_9c;
  FScriptContainerElement *local_98;
  
  fVar20 = __real_3f800000;
  if (param_2->bCenterChannelOnly == 0) {
    uVar13 = 0;
    uVar14 = uVar13;
    if (0 < (this->DeviceChannelAzimuthPositions).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar8 = 0;
        if ((int)uVar12 < (this->DeviceChannelAzimuthPositions).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar17 = (this->DeviceChannelAzimuthPositions).AllocatorInstance.Data + uVar14 + 4;
        if (param_3 < *(float *)pFVar17 || param_3 == *(float *)pFVar17) {
          uVar8 = 0;
          if ((int)uVar12 < (this->DeviceChannelAzimuthPositions).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          pFVar17 = (this->DeviceChannelAzimuthPositions).AllocatorInstance.Data +
                    (longlong)(int)uVar12 * 0x10;
          uVar12 = uVar12 - 1;
          if ((int)uVar12 < 0) {
            uVar12 = (this->DeviceChannelAzimuthPositions).ArrayNum - 1;
          }
          uVar8 = 0;
          if ((int)uVar12 < (this->DeviceChannelAzimuthPositions).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          pFVar16 = (this->DeviceChannelAzimuthPositions).AllocatorInstance.Data +
                    (longlong)(int)uVar12 * 0x10;
          if (pFVar16 != (FScriptContainerElement *)0x0) goto LAB_1464ffd54;
          break;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 0x10;
      } while ((int)(uVar12 + 1) < (this->DeviceChannelAzimuthPositions).ArrayNum);
    }
    iVar6 = (this->DeviceChannelAzimuthPositions).ArrayNum;
    uVar12 = iVar6 - 1;
    uVar8 = 0;
    if ((int)uVar12 < iVar6) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (this->DeviceChannelAzimuthPositions).AllocatorInstance.Data +
              (longlong)(int)uVar12 * 0x10;
    if (((this->DeviceChannelAzimuthPositions).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar17 = (this->DeviceChannelAzimuthPositions).AllocatorInstance.Data;
    if ((pFVar16 == pFVar17) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1614237125757105782>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0x98a,"PrevChannelInfo != NextChannelInfo"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_1464ffd54:
    fVar20 = *(float *)(pFVar17 + 4);
    fVar18 = *(float *)(pFVar16 + 4);
    if (fVar20 < fVar18) {
      fVar20 = fVar20 + __real_43b40000;
    }
    if (param_3 < fVar18) {
      param_3 = param_3 + __real_43b40000;
    }
    if ((fVar20 <= fVar18) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1614237125757105766>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0x99a,"NextChannelAzimuth > PrevChannelAzimuth"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_3 <= fVar18) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1614237125757105765>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0x99b,"Azimuth > PrevChannelAzimuth"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar4 = __real_3f800000;
    fVar20 = (param_3 - fVar18) / (fVar20 - fVar18);
    if (((fVar20 < 0.0) || (__real_3f800000 < fVar20)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1614237125757105763>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0x99d,"Fraction >= 0.0f && Fraction <= 1.0f"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (this->PanningMethod == EqualPower) {
      fVar20 = fVar20 * __real_3fc90fdb;
      if (fVar20 < 0.0) {
        fVar18 = fVar20 * __real_3e22f983 - __real_3f000000;
      }
      else {
        fVar18 = fVar20 * __real_3e22f983 + __real_3f000000;
      }
      fVar20 = fVar20 - (float)(longlong)fVar18 * __real_40c90fdb;
      if (fVar20 <= __real_3fc90fdb) {
        fVar18 = fVar4;
        if (fVar20 < __real_bfc90fdb) {
          fVar20 = __real_c0490fdb - fVar20;
          fVar18 = __real_bf800000;
        }
      }
      else {
        fVar20 = __real_40490fdb - fVar20;
        fVar18 = __real_bf800000;
      }
      fVar19 = fVar20 * fVar20;
      fVar20 = (((((__real_3638b88e - fVar19 * __real_32cd365b) * fVar19 - __real_39500bf1) * fVar19
                 + ___real_3c088886) * fVar19 - __real_3e2aaaab) * fVar19 + fVar4) * fVar20;
      if (fVar4 <= fVar20) {
        fVar20 = fVar4;
      }
      fVar18 = (((((__real_37cfb4c2 - fVar19 * ___real_348bdd11) * fVar19 - ___real_3ab609aa) *
                  fVar19 + ___real_3d2aaaa3) * fVar19 - __real_3f000000) * fVar19 + fVar4) * fVar18;
      if (fVar4 <= fVar18) {
        fVar18 = fVar4;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
    }
    else {
      fVar18 = fVar4 - fVar20;
    }
    pFVar15 = (this->PlatformInfo).OutputChannelArray.AllocatorInstance.Data;
    iVar6 = (this->PlatformInfo).OutputChannelArray.ArrayNum;
    pFVar1 = pFVar15 + (longlong)iVar6 * 4;
    local_98 = pFVar1;
    if (param_4 <= 0.0) {
      while( true ) {
        if ((this->PlatformInfo).OutputChannelArray.ArrayNum != iVar6) {
          local_a7[0] = 0;
          `TCheckedPointerIterator<enum_EAudioMixerChannel::Type_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_a7);
        }
        if (pFVar15 == pFVar1) break;
        uVar8 = *(uint *)pFVar15;
        local_a4 = 0.0;
        if (uVar8 == 3) {
          fVar19 = param_2->LFEBleed;
LAB_14650022a:
          local_a4 = fVar19;
          if (((fVar19 < 0.0) || (fVar4 < fVar19)) &&
             (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1614237125757105659>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                                 ,0xa05,"EffectivePan >= 0.0f && EffectivePan <= 1.0f"), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          fVar19 = fVar18;
          if ((uVar8 == *(uint *)pFVar16) || (fVar19 = fVar20, uVar8 == *(uint *)pFVar17))
          goto LAB_14650022a;
          if (uVar8 == 2) {
            fVar19 = param_2->VoiceCenterChannelVolume;
            if (param_2->VoiceCenterChannelVolume <= 0.0) {
              fVar19 = 0.0;
            }
            goto LAB_14650022a;
          }
        }
        pFVar2 = (param_7->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_a4) &&
            ((FScriptContainerElement *)&local_a4 < pFVar2 + (longlong)param_7->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_7->ArrayNum;
        if (iVar7 == param_7->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                            (0x404,&param_7->AllocatorInstance,&param_7->ArrayMax);
        }
        param_7->ArrayNum = iVar7 + 1;
        pFVar15 = pFVar15 + 4;
        *(float *)((param_7->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a4;
      }
    }
    else {
      while( true ) {
        if ((this->PlatformInfo).OutputChannelArray.ArrayNum != iVar6) {
          local_a8 = 0;
          `TCheckedPointerIterator<enum_EAudioMixerChannel::Type_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_a8);
        }
        if (pFVar15 == local_98) break;
        uVar8 = *(uint *)pFVar15;
        fVar19 = param_6;
        if (param_5 !=
            (TMap<EAudioMixerChannel::Type,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioMixerChannel::Type,float,0>_>
             *)0x0) {
          if (*(int *)&param_5->field_0x8 != *(int *)&param_5->field_0x34) {
            puVar11 = &param_5->field_0x38;
            if (*(undefined1 **)&param_5->field_0x40 != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)&param_5->field_0x40;
            }
            uVar12 = *(uint *)(puVar11 + (ulonglong)(*(int *)&param_5->field_0x48 - 1U & uVar8) * 4)
            ;
            if (uVar12 != 0xffffffff) {
              do {
                puVar10 = (uint *)((longlong)(int)uVar12 * 0x10 + *(longlong *)param_5);
                if (*puVar10 == uVar8) {
                  pfVar9 = (float *)(puVar10 + 1);
                  if (puVar10 == (uint *)0x0) {
                    pfVar9 = (float *)0x0;
                  }
                  if (pfVar9 != (float *)0x0) {
                    fVar19 = *pfVar9;
                    goto LAB_14650006a;
                  }
                  break;
                }
                uVar12 = puVar10[2];
              } while (uVar12 != 0xffffffff);
            }
          }
          fVar19 = 0.0;
        }
LAB_14650006a:
        if (uVar8 == 3) {
          local_9c = param_2->LFEBleed;
        }
        else if (uVar8 == *(uint *)pFVar16) {
          local_9c = (fVar19 - fVar18) * param_4 + fVar18;
        }
        else if (uVar8 == *(uint *)pFVar17) {
          local_9c = (fVar19 - fVar20) * param_4 + fVar20;
        }
        else {
          fVar19 = fVar19 * param_4;
          local_9c = fVar19;
          if ((uVar8 == 2) &&
             (local_9c = param_2->VoiceCenterChannelVolume,
             param_2->VoiceCenterChannelVolume <= fVar19)) {
            local_9c = fVar19;
          }
        }
        if (((local_9c < 0.0) || (fVar4 < local_9c)) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1614237125757105687>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                               ,0x9e9,"EffectivePan >= 0.0f && EffectivePan <= 1.0f"), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_7->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_9c) &&
            ((FScriptContainerElement *)&local_9c < pFVar1 + (longlong)param_7->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_7->ArrayNum;
        if (iVar7 == param_7->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                            (0x404,&param_7->AllocatorInstance,&param_7->ArrayMax);
        }
        param_7->ArrayNum = iVar7 + 1;
        pFVar15 = pFVar15 + 4;
        *(float *)((param_7->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_9c;
      }
    }
  }
  else if (param_1 == 2) {
    pFVar17 = (param_7->AllocatorInstance).Data;
    if (((pFVar17 < (FScriptContainerElement *)0x154bfa749) &&
        (&Pan < pFVar17 + (longlong)param_7->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_7->ArrayNum;
    if (iVar6 == param_7->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (0x404,&param_7->AllocatorInstance,&param_7->ArrayMax);
    }
    param_7->ArrayNum = iVar6 + 1;
    *(float *)((param_7->AllocatorInstance).Data + (longlong)iVar6 * 4) = Pan;
    pFVar17 = (param_7->AllocatorInstance).Data;
    if (((pFVar17 < (FScriptContainerElement *)0x154bfa749) &&
        (&Pan < pFVar17 + (longlong)param_7->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_7->ArrayNum;
    if (iVar6 == param_7->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (0x404,&param_7->AllocatorInstance,&param_7->ArrayMax);
    }
    param_7->ArrayNum = iVar6 + 1;
    *(float *)((param_7->AllocatorInstance).Data + (longlong)iVar6 * 4) = Pan;
  }
  else {
    pFVar16 = (this->PlatformInfo).OutputChannelArray.AllocatorInstance.Data;
    iVar6 = (this->PlatformInfo).OutputChannelArray.ArrayNum;
    pFVar17 = pFVar16 + (longlong)iVar6 * 4;
    while( true ) {
      if ((this->PlatformInfo).OutputChannelArray.ArrayNum != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<enum_EAudioMixerChannel::Type_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar16 == pFVar17) break;
      local_a0 = fVar20;
      if (*(int *)pFVar16 != 2) {
        local_a0 = 0.0;
      }
      pFVar1 = (param_7->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_a0) &&
          ((FScriptContainerElement *)&local_a0 < pFVar1 + (longlong)param_7->ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = param_7->ArrayNum;
      if (iVar7 == param_7->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                          (0x404,&param_7->AllocatorInstance,&param_7->ArrayMax);
      }
      param_7->ArrayNum = iVar7 + 1;
      pFVar16 = pFVar16 + 4;
      *(float *)((param_7->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_a0;
    }
  }
  return;
}

// GetAudioDeviceList @ 146500a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::GetAudioDeviceList
          (FMixerDevice *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FAudioPlatformDeviceInfo *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  char cVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint local_res8 [2];
  FAudioPlatformDeviceInfo local_78;
  
  if ((((this->AudioMixerPlatform != (IAudioMixerPlatformInterface *)0x0) &&
       (cVar3 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0x58))(), cVar3 != '\0')) &&
      (cVar3 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0x60))
                         (this->AudioMixerPlatform,local_res8), cVar3 != '\0')) &&
     (uVar7 = 0, local_res8[0] != 0)) {
    do {
      FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo(&local_78);
      cVar3 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0x68))
                        (this->AudioMixerPlatform,uVar7,&local_78);
      if (cVar3 != '\0') {
        pFVar1 = (FAudioPlatformDeviceInfo *)(param_1->AllocatorInstance).Data;
        if (((pFVar1 <= &local_78) &&
            (&local_78 < (FAudioPlatformDeviceInfo *)(&pFVar1->Name + param_1->ArrayMax))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        _Src.Data = local_78.Name.Data.AllocatorInstance.Data;
        pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        param_1->ArrayNum = iVar5 + 1;
        *(undefined8 *)&pFVar6->field_0x0 = 0;
        iVar5 = local_78.Name.Data.ArrayNum;
        *(int *)&pFVar6[8].field_0x0 = iVar5;
        if (iVar5 == 0) {
          *(int *)(pFVar6 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar5,0,(ForAnyElementType *)pFVar6,iVar5,(int *)(pFVar6 + 0xc));
          memcpy(*(void **)&pFVar6->field_0x0,_Src.Data,(longlong)iVar5 * 2);
        }
      }
      if (local_78.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.OutputChannelArray.AllocatorInstance.Data);
      }
      if (local_78.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.DeviceId.Data.AllocatorInstance.Data);
      }
      if (local_78.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Name.Data.AllocatorInstance.Data);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_res8[0]);
  }
  return;
}

// GetAudioLinkFactory @ 146500cb0

/* WARNING: Enum "Type": Some values do not have unique names */

IAudioLinkFactory * __thiscall Audio::FMixerDevice::GetAudioLinkFactory(FMixerDevice *this)

{
  return this->AudioLinkFactory;
}

// GetAudioTime @ 146500cc0

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall Audio::FMixerDevice::GetAudioTime(FMixerDevice *this)

{
  return *(double *)&this->field_0x5c8;
}

// GetBaseDefaultSubmix @ 146501320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetBaseDefaultSubmix
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  
  if ((this->RequiredSubmixInstances).ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TWeakPtr<Audio::FMixerSubmix,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (*(longlong *)((this->RequiredSubmixInstances).AllocatorInstance.Data + 0x10) == 0) {
    GetMainSubmix(this,__return_storage_ptr__);
  }
  else {
    if ((this->RequiredSubmixInstances).ArrayNum < 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TWeakPtr<Audio::FMixerSubmix,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar1 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    __return_storage_ptr__->Object = *(FMixerSubmix **)(pFVar1 + 0x10);
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 0x18);
    (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetChannelArray @ 1465015b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FMixerDevice::GetChannelArray(FMixerDevice *this)

{
  return &(this->PlatformInfo).OutputChannelArray;
}

// GetChannelMapCacheId @ 1465015c0

int __cdecl Audio::FMixerDevice::GetChannelMapCacheId(int param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2434335249455382511>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerChannelMaps.cpp"
                       ,0x11,"NumSourceChannels > 0");
    if (!bVar2) {
      return 0;
    }
  }
  else if (param_2 < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2434335249455382510>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerChannelMaps.cpp"
                       ,0x12,"NumOutputChannels > 0");
    if (!bVar2) {
      return 0;
    }
  }
  else if (param_1 < 9) {
    if (param_2 < 9) {
      return param_1 + -9 + (param_2 + (uint)param_3 * 8) * 8;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2434335249455382508>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerChannelMaps.cpp"
                       ,0x14,"NumOutputChannels <= 8");
    if (!bVar2) {
      return 0;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2434335249455382509>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerChannelMaps.cpp"
                       ,0x13,"NumSourceChannels <= 8");
    if (!bVar2) {
      return 0;
    }
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

// GetCurrentSourceEffectChain @ 146501ac0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerDevice::GetCurrentSourceEffectChain
          (FMixerDevice *this,uint param_1,
          TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  uint *puVar2;
  TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->SourceEffectChainOverrides).field_0x8 !=
      *(int *)&(this->SourceEffectChainOverrides).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SourceEffectChainOverrides).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SourceEffectChainOverrides).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->SourceEffectChainOverrides).field_0x48 - 1U &
                               param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 +
                         *(longlong *)&this->SourceEffectChainOverrides);
        if (*puVar2 == param_1) {
          pTVar3 = (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)(puVar2 + 2);
          if (puVar2 == (uint *)0x0) {
            pTVar3 = (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (pTVar3 == (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)0x0) {
            return false;
          }
          TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>::operator=(param_2,pTVar3);
          return true;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return false;
}

// GetDefaultChannelPositions @ 146501b80

/* WARNING: Enum "Type": Some values do not have unique names */

FChannelPositionInfo * __thiscall
Audio::FMixerDevice::GetDefaultChannelPositions(FMixerDevice *this)

{
  return this->DefaultChannelAzimuthPositions;
}

// GetDefaultPositionMap @ 146501b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FMixerDevice::GetDefaultPositionMap(FMixerDevice *this,int param_1)

{
  FChannelPositionInfo *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ForAnyElementType FVar18;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar19;
  
  pFVar1 = this->DefaultChannelAzimuthPositions;
  if (pFVar1 == (FChannelPositionInfo *)0x0) {
switchD_146501c05_caseD_0:
    pTVar19 = (TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *)0x0;
  }
  else {
    switch(param_1) {
    default:
      goto switchD_146501c05_caseD_0;
    case 1:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,1,0,&MonoMap.AllocatorInstance,1,&MonoMap.ArrayMax);
        FVar18 = MonoMap.AllocatorInstance;
        *(undefined8 *)MonoMap.AllocatorInstance.Data = 2;
        *(undefined8 *)(FVar18.Data + 8) = 0x3f80000000000000;
        atexit(`Audio::FMixerDevice::GetDefaultPositionMap'::__l8::
               _dynamic_atexit_destructor_for__MonoMap__);
        _Init_thread_footer(&::_TSS0);
        pTVar19 = &MonoMap;
      }
      else {
        pTVar19 = &MonoMap;
      }
      break;
    case 2:
      pTVar19 = &StereoMap;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        uVar2 = *(undefined8 *)pFVar1;
        uVar3 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[0].Elevation;
        uVar4 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 1);
        uVar5 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[1].Elevation;
        StereoMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        StereoMap.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,2,0,&StereoMap.AllocatorInstance,2,&StereoMap.ArrayMax);
        FVar18 = StereoMap.AllocatorInstance;
        *(undefined8 *)StereoMap.AllocatorInstance.Data = uVar2;
        *(undefined8 *)(FVar18.Data + 8) = uVar3;
        *(undefined8 *)(FVar18.Data + 0x10) = uVar4;
        *(undefined8 *)(FVar18.Data + 0x18) = uVar5;
        atexit(`Audio::FMixerDevice::GetDefaultPositionMap'::__l9::
               _dynamic_atexit_destructor_for__StereoMap__);
        _Init_thread_footer(&::_TSS1);
        pTVar19 = &StereoMap;
      }
      break;
    case 4:
      pTVar19 = &QuadMap;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        uVar2 = *(undefined8 *)pFVar1;
        uVar3 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[0].Elevation;
        uVar4 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 1);
        uVar5 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[1].Elevation;
        uVar6 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 9);
        uVar7 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[9].Elevation;
        uVar8 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 10);
        uVar9 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[10].Elevation;
        QuadMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        QuadMap.ArrayNum = 4;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,4,0,&QuadMap.AllocatorInstance,4,&QuadMap.ArrayMax);
        FVar18 = QuadMap.AllocatorInstance;
        *(undefined8 *)QuadMap.AllocatorInstance.Data = uVar2;
        *(undefined8 *)(FVar18.Data + 8) = uVar3;
        *(undefined8 *)(FVar18.Data + 0x10) = uVar4;
        *(undefined8 *)(FVar18.Data + 0x18) = uVar5;
        *(undefined8 *)(FVar18.Data + 0x20) = uVar6;
        *(undefined8 *)(FVar18.Data + 0x28) = uVar7;
        *(undefined8 *)(FVar18.Data + 0x30) = uVar8;
        *(undefined8 *)(FVar18.Data + 0x38) = uVar9;
        atexit(`Audio::FMixerDevice::GetDefaultPositionMap'::__l10::
               _dynamic_atexit_destructor_for__QuadMap__);
        _Init_thread_footer(&::_TSS2);
        pTVar19 = &QuadMap;
      }
      break;
    case 6:
      pTVar19 = &FiveDotOneMap;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        uVar2 = *(undefined8 *)pFVar1;
        uVar3 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[0].Elevation;
        uVar4 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 1);
        uVar5 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[1].Elevation;
        uVar6 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 2);
        uVar7 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[2].Elevation;
        uVar8 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 3);
        uVar9 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[3].Elevation;
        uVar10 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 9);
        uVar11 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[9].Elevation;
        uVar12 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 10);
        uVar13 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[10].Elevation;
        FiveDotOneMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FiveDotOneMap.ArrayNum = 6;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,6,0,&FiveDotOneMap.AllocatorInstance,6,&FiveDotOneMap.ArrayMax);
        FVar18 = FiveDotOneMap.AllocatorInstance;
        *(undefined8 *)FiveDotOneMap.AllocatorInstance.Data = uVar2;
        *(undefined8 *)(FVar18.Data + 8) = uVar3;
        *(undefined8 *)(FVar18.Data + 0x10) = uVar4;
        *(undefined8 *)(FVar18.Data + 0x18) = uVar5;
        *(undefined8 *)(FVar18.Data + 0x20) = uVar6;
        *(undefined8 *)(FVar18.Data + 0x28) = uVar7;
        *(undefined8 *)(FVar18.Data + 0x30) = uVar8;
        *(undefined8 *)(FVar18.Data + 0x38) = uVar9;
        *(undefined8 *)(FVar18.Data + 0x40) = uVar10;
        *(undefined8 *)(FVar18.Data + 0x48) = uVar11;
        *(undefined8 *)(FVar18.Data + 0x50) = uVar12;
        *(undefined8 *)(FVar18.Data + 0x58) = uVar13;
        atexit(`Audio::FMixerDevice::GetDefaultPositionMap'::__l11::
               _dynamic_atexit_destructor_for__FiveDotOneMap__);
        _Init_thread_footer(&::_TSS3);
        pTVar19 = &FiveDotOneMap;
      }
      break;
    case 8:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        uVar2 = *(undefined8 *)pFVar1;
        uVar3 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[0].Elevation;
        uVar4 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 1);
        uVar5 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[1].Elevation;
        uVar6 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 2);
        uVar7 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[2].Elevation;
        uVar8 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 3);
        uVar9 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[3].Elevation;
        uVar10 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 4);
        uVar11 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[4].Elevation;
        uVar12 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 5);
        uVar13 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[5].Elevation;
        uVar14 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 9);
        uVar15 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[9].Elevation;
        uVar16 = *(undefined8 *)(this->DefaultChannelAzimuthPositions + 10);
        uVar17 = *(undefined8 *)&this->DefaultChannelAzimuthPositions[10].Elevation;
        SevenDotOneMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        SevenDotOneMap.ArrayNum = 8;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,8,0,&SevenDotOneMap.AllocatorInstance,8,&SevenDotOneMap.ArrayMax);
        FVar18 = SevenDotOneMap.AllocatorInstance;
        *(undefined8 *)SevenDotOneMap.AllocatorInstance.Data = uVar2;
        *(undefined8 *)(FVar18.Data + 8) = uVar3;
        *(undefined8 *)(FVar18.Data + 0x10) = uVar4;
        *(undefined8 *)(FVar18.Data + 0x18) = uVar5;
        *(undefined8 *)(FVar18.Data + 0x20) = uVar6;
        *(undefined8 *)(FVar18.Data + 0x28) = uVar7;
        *(undefined8 *)(FVar18.Data + 0x30) = uVar8;
        *(undefined8 *)(FVar18.Data + 0x38) = uVar9;
        *(undefined8 *)(FVar18.Data + 0x40) = uVar10;
        *(undefined8 *)(FVar18.Data + 0x48) = uVar11;
        *(undefined8 *)(FVar18.Data + 0x50) = uVar12;
        *(undefined8 *)(FVar18.Data + 0x58) = uVar13;
        *(undefined8 *)(FVar18.Data + 0x60) = uVar14;
        *(undefined8 *)(FVar18.Data + 0x68) = uVar15;
        *(undefined8 *)(FVar18.Data + 0x70) = uVar16;
        *(undefined8 *)(FVar18.Data + 0x78) = uVar17;
        atexit(`Audio::FMixerDevice::GetDefaultPositionMap'::__l12::
               _dynamic_atexit_destructor_for__SevenDotOneMap__);
        _Init_thread_footer(&::_TSS4);
        pTVar19 = &SevenDotOneMap;
      }
      else {
        pTVar19 = &SevenDotOneMap;
      }
    }
  }
  return pTVar19;
}

// GetDeviceOutputChannels @ 146502170

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FMixerDevice::GetDeviceOutputChannels(FMixerDevice *this)

{
  return (this->PlatformInfo).NumChannels;
}

// GetDeviceSampleRate @ 146502180

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FMixerDevice::GetDeviceSampleRate(FMixerDevice *this)

{
  return *(int *)&this->field_0x84;
}

// GetEQSubmix @ 146502220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetEQSubmix
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  
  if ((this->RequiredSubmixInstances).ArrayNum < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TWeakPtr<Audio::FMixerSubmix,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  __return_storage_ptr__->Object = *(FMixerSubmix **)(pFVar1 + 0x30);
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 0x38);
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFactoryForSubmixInstance @ 146502530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

ISoundfieldFactory * __thiscall
Audio::FMixerDevice::GetFactoryForSubmixInstance
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146502561;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar5 = pTVar1;
    if (param_1->Object != (FMixerSubmix *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)FMixerSubmix::GetSoundfieldFactory(param_1->Object);
    }
  }
LAB_146502561:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (ISoundfieldFactory *)pTVar4;
}

// GetFactoryForSubmixInstance @ 146502590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

ISoundfieldFactory * __thiscall
Audio::FMixerDevice::GetFactoryForSubmixInstance(FMixerDevice *this,USoundSubmix *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  TWeakPtr<Audio::FMixerSubmix,1> local_18;
  
  GetSubmixInstance(this,&local_18,(USoundSubmixBase *)param_1);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  FVar5.ReferenceController = local_18.WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_18.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      FVar5.ReferenceController = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1465025d4;
      LOCK();
      aVar3 = (local_18.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        (local_18.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    FVar5.ReferenceController = local_18.WeakReferenceCount.ReferenceController;
    if (local_18.Object != (FMixerSubmix *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)FMixerSubmix::GetSoundfieldFactory(local_18.Object);
    }
  }
LAB_1465025d4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  return (ISoundfieldFactory *)pTVar4;
}

// GetInterpolatedAudioClock @ 146503060

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall Audio::FMixerDevice::GetInterpolatedAudioClock(FMixerDevice *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER local_res8 [4];
  
  dVar3 = *(double *)&this->field_0x5c8;
  dVar1 = this->AudioClockDelta;
  if (0.0 < (this->AudioClockTimingData).UpdateTime) {
    QueryPerformanceCounter(local_res8);
    dVar2 = (((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000) - (this->AudioClockTimingData).UpdateTime) / dVar1;
    if (__real_3ff0000000000000 <= dVar2) {
      dVar2 = __real_3ff0000000000000;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    dVar3 = dVar2 * dVar1 + dVar3;
  }
  return dVar3;
}

// GetListenerTransforms @ 1465034e0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FMixerDevice::GetListenerTransforms(FMixerDevice *this)

{
  FMixerSourceManager *pFVar1;
  
  pFVar1 = (this->SourceManager).Ptr;
  CheckAudioRenderingThread(pFVar1->MixerDevice);
  return &pFVar1->ListenerTransforms;
}

// GetMagnitudesForFrequencies @ 1465035c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::GetMagnitudesForFrequencies
          (FMixerDevice *this,USoundSubmix *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar8;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar9;
  FMixerSubmix *pFVar10;
  FMixerSubmix *pFVar11;
  bool bVar12;
  TWeakPtr<Audio::FMixerSubmix,1> local_38;
  
  pTVar8 = GetSubmixInstance(this,&local_38,(USoundSubmixBase *)param_1);
  pFVar10 = (FMixerSubmix *)0x0;
  pFVar3 = (FMixerSubmix *)(pTVar8->WeakReferenceCount).ReferenceController;
  pFVar9 = pFVar10;
  pFVar11 = pFVar3;
  if (pFVar3 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar11 = pFVar10;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar7 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar12 = aVar2 == aVar7;
      if (bVar12) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      pFVar11 = pFVar3;
      aVar2 = aVar7;
    } while (!bVar12);
    pTVar4 = (pTVar8->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FMixerSubmix *)0x0;
    if (pFVar11 != (FMixerSubmix *)0x0) {
      pFVar9 = pTVar8->Object;
      pTVar8->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar9 == (FMixerSubmix *)0x0) {
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
    pFVar9 = *(FMixerSubmix **)pFVar5;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        this_00 = pFVar10;
        if (aVar2 == (atomic<int>)0x0) goto LAB_146503715;
        LOCK();
        aVar7 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar12 = aVar2 == aVar7;
        if (bVar12) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar12);
    }
    this_00 = pFVar9;
    if (pFVar3 == (FMixerSubmix *)0x0) {
      this_00 = pFVar10;
    }
    pFVar10 = pFVar3;
    if (this_00 == (FMixerSubmix *)0x0) {
LAB_146503715:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MainSubmixPtr.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                          ,0xb41,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMixerSubmix::GetMagnitudeForFrequencies(this_00,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&pFVar3->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  else {
    FMixerSubmix::GetMagnitudeForFrequencies(pFVar9,param_2,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  return;
}

// GetMainSubmix @ 1465037d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetMainSubmix
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  
  if ((this->RequiredSubmixInstances).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TWeakPtr<Audio::FMixerSubmix,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  __return_storage_ptr__->Object = *(FMixerSubmix **)pFVar1;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 8);
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMainSubmixObject @ 146503860

/* WARNING: Enum "Type": Some values do not have unique names */

USoundSubmix * __thiscall Audio::FMixerDevice::GetMainSubmixObject(FMixerDevice *this)

{
  code *pcVar1;
  bool bVar2;
  USoundSubmix *pUVar3;
  
  if ((this->RequiredSubmixes).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USoundSubmix *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = *(USoundSubmix **)(this->RequiredSubmixes).AllocatorInstance.Data;
  if (pUVar3 == (USoundSubmix *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MainSubmix",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0xb99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USoundSubmix *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetMasterEQSubmix @ 1465038f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetMasterEQSubmix
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  
  if ((this->RequiredSubmixInstances).ArrayNum < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TWeakPtr<Audio::FMixerSubmix,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  __return_storage_ptr__->Object = *(FMixerSubmix **)(pFVar1 + 0x30);
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 0x38);
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMasterReverbSubmix @ 146503980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetMasterReverbSubmix
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  
  if ((this->RequiredSubmixInstances).ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TWeakPtr<Audio::FMixerSubmix,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  __return_storage_ptr__->Object = *(FMixerSubmix **)(pFVar1 + 0x20);
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 0x28);
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMasterSubmix @ 146503a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetMasterSubmix
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__)

{
  GetMainSubmix(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMixerSourceVoice @ 146503a30

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceVoice * __thiscall Audio::FMixerDevice::GetMixerSourceVoice(FMixerDevice *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FMixerSourceVoice *pFVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioMixer,true);
  pTVar1 = ((this->SourceVoices).Tail)->NextNode;
  if (pTVar1 == (TNode *)0x0) {
    pFVar3 = ::operator_new(0xa8);
    if (pFVar3 == (FMixerSourceVoice *)0x0) {
      pFVar3 = (FMixerSourceVoice *)0x0;
    }
    else {
      pFVar3 = FMixerSourceVoice::FMixerSourceVoice(pFVar3);
    }
  }
  else {
    pFVar3 = pTVar1->Item;
    pTVar2 = (this->SourceVoices).Tail;
    (this->SourceVoices).Tail = pTVar1;
    pTVar1->Item = (FMixerSourceVoice *)0x0;
    ::operator_delete(pTVar2,0x10);
  }
  FMixerSourceVoice::Reset(pFVar3,this);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar3;
}

// GetNumActiveSources @ 146504330

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FMixerDevice::GetNumActiveSources(FMixerDevice *this)

{
  return ((this->SourceManager).Ptr)->NumActiveSources;
}

// GetNumSources @ 146504540

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall Audio::FMixerDevice::GetNumSources(FMixerDevice *this)

{
  return *(int *)&this->field_0x208;
}

// GetPhasesForFrequencies @ 146504700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::GetPhasesForFrequencies
          (FMixerDevice *this,USoundSubmix *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar8;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar9;
  FMixerSubmix *pFVar10;
  FMixerSubmix *pFVar11;
  bool bVar12;
  TWeakPtr<Audio::FMixerSubmix,1> local_38;
  
  pTVar8 = GetSubmixInstance(this,&local_38,(USoundSubmixBase *)param_1);
  pFVar10 = (FMixerSubmix *)0x0;
  pFVar3 = (FMixerSubmix *)(pTVar8->WeakReferenceCount).ReferenceController;
  pFVar9 = pFVar10;
  pFVar11 = pFVar3;
  if (pFVar3 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar11 = pFVar10;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar7 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar12 = aVar2 == aVar7;
      if (bVar12) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      pFVar11 = pFVar3;
      aVar2 = aVar7;
    } while (!bVar12);
    pTVar4 = (pTVar8->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FMixerSubmix *)0x0;
    if (pFVar11 != (FMixerSubmix *)0x0) {
      pFVar9 = pTVar8->Object;
      pTVar8->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar9 == (FMixerSubmix *)0x0) {
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
    pFVar9 = *(FMixerSubmix **)pFVar5;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        this_00 = pFVar10;
        if (aVar2 == (atomic<int>)0x0) goto LAB_146504855;
        LOCK();
        aVar7 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar12 = aVar2 == aVar7;
        if (bVar12) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar12);
    }
    this_00 = pFVar9;
    if (pFVar3 == (FMixerSubmix *)0x0) {
      this_00 = pFVar10;
    }
    pFVar10 = pFVar3;
    if (this_00 == (FMixerSubmix *)0x0) {
LAB_146504855:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MainSubmixPtr.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                          ,0xb52,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMixerSubmix::GetPhaseForFrequencies(this_00,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&pFVar3->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  else {
    FMixerSubmix::GetPhaseForFrequencies(pFVar9,param_2,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  return;
}

// GetPlatformSettings @ 146504910

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioPlatformSettings * __thiscall
Audio::FMixerDevice::GetPlatformSettings
          (FMixerDevice *this,FAudioPlatformSettings *__return_storage_ptr__)

{
  int iVar1;
  IAudioMixerPlatformInterface *pIVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  UClass *this_00;
  undefined1 local_28 [32];
  
  __return_storage_ptr__->SampleRate = 48000;
  __return_storage_ptr__->CallbackBufferFrameSize = 0x400;
  pIVar2 = this->AudioMixerPlatform;
  __return_storage_ptr__->NumBuffers = 2;
  __return_storage_ptr__->MaxChannels = 0;
  __return_storage_ptr__->NumSourceWorkers = 0;
  if (pIVar2 != (IAudioMixerPlatformInterface *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(pIVar2->_padding_ + 0x80))(pIVar2,local_28);
    uVar3 = *puVar5;
    uVar4 = puVar5[1];
    iVar1 = *(int *)(puVar5 + 2);
    __return_storage_ptr__->SampleRate = (int)uVar3;
    __return_storage_ptr__->CallbackBufferFrameSize = (int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->NumBuffers = (int)uVar4;
    __return_storage_ptr__->MaxChannels = (int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->NumSourceWorkers = iVar1;
    this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    UAudioSettings::GetHighestMaxChannels
              ((UAudioSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr);
    if ((((3 < (byte)LogAudioMixer._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer),
         3 < (byte)LogAudioMixer._0_1_)) &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer),
        3 < (byte)LogAudioMixer._0_1_)) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer),
       3 < (byte)LogAudioMixer._0_1_)) {
      (**(code **)(this->AudioMixerPlatform->_padding_ + 0xe0))
                (this->AudioMixerPlatform,__return_storage_ptr__->CallbackBufferFrameSize);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if ((3 < (byte)LogAudioMixer._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer),
         3 < (byte)LogAudioMixer._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  return __return_storage_ptr__;
}

// GetReferencerName @ 1465051a0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
Audio::FMixerDevice::GetReferencerName(FMixerDevice *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Audio::FMixerDevice");
  return __return_storage_ptr__;
}

// GetRequiredSubmixInstance @ 1465052d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetRequiredSubmixInstance
          (FMixerDevice *this,TSharedPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__,uint param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  longlong lVar7;
  
  if (((this->RequiredSubmixes).ArrayNum != 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredSubmixes.Num() == (int32)ERequiredSubmixes::Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x815,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedPtr<Audio::FMixerSubmix,1> *)(*pcVar2)();
    return pTVar4;
  }
  iVar6 = 0;
  lVar7 = 0;
  do {
    if (((this->RequiredSubmixes).ArrayNum <= iVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<Audio::FMixerSubmix,1> *)(*pcVar2)();
      return pTVar4;
    }
    if (*(longlong *)((this->RequiredSubmixes).AllocatorInstance.Data + lVar7) != 0) {
      if (((this->RequiredSubmixes).ArrayNum <= iVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<Audio::FMixerSubmix,1> *)(*pcVar2)();
        return pTVar4;
      }
      if (param_1 ==
          *(uint *)(*(longlong *)((this->RequiredSubmixes).AllocatorInstance.Data + lVar7) + 0xc)) {
        if (((this->RequiredSubmixInstances).ArrayNum <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TSharedPtr<Audio::FMixerSubmix,1> *)(*pcVar2)();
          return pTVar4;
        }
        pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        __return_storage_ptr__->Object = *(FMixerSubmix **)pFVar5;
        pTVar1 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
          return __return_storage_ptr__;
        }
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        return __return_storage_ptr__;
      }
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 8;
    if (3 < iVar6) {
      __return_storage_ptr__->Object = (FMixerSubmix *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetRequiredSubmixInstance @ 146505480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetRequiredSubmixInstance
          (FMixerDevice *this,TSharedPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__,
          USoundSubmixBase *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  if (((this->RequiredSubmixes).ArrayNum != 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredSubmixes.Num() == (int32)ERequiredSubmixes::Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x822,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedPtr<Audio::FMixerSubmix,1> *)(*pcVar2)();
    return pTVar4;
  }
  uVar6 = 0;
  lVar7 = 0;
  while( true ) {
    if (((this->RequiredSubmixes).ArrayNum <= (int)uVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<Audio::FMixerSubmix,1> *)(*pcVar2)();
      return pTVar4;
    }
    if (param_1 == *(USoundSubmixBase **)((this->RequiredSubmixes).AllocatorInstance.Data + lVar7))
    break;
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 8;
    if (3 < (int)uVar6) {
      __return_storage_ptr__->Object = (FMixerSubmix *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
  }
  if (((this->RequiredSubmixInstances).ArrayNum <= (int)uVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedPtr<Audio::FMixerSubmix,1> *)(*pcVar2)();
    return pTVar4;
  }
  pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data + (ulonglong)uVar6 * 0x10;
  __return_storage_ptr__->Object = *(FMixerSubmix **)pFVar5;
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return __return_storage_ptr__;
  }
  LOCK();
  pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
  UNLOCK();
  return __return_storage_ptr__;
}

// GetReverbSubmix @ 146505700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetReverbSubmix
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  
  if ((this->RequiredSubmixInstances).ArrayNum < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TWeakPtr<Audio::FMixerSubmix,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  __return_storage_ptr__->Object = *(FMixerSubmix **)(pFVar1 + 0x20);
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + 0x28);
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSourceManager @ 146505940

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceManager * __thiscall Audio::FMixerDevice::GetSourceManager(FMixerDevice *this)

{
  return (this->SourceManager).Ptr;
}

// GetSourceManager @ 146505950

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerSourceManager * __thiscall Audio::FMixerDevice::GetSourceManager(FMixerDevice *this)

{
  return (this->SourceManager).Ptr;
}

// GetSubmixInstance @ 146505960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerDevice::GetSubmixInstance
          (FMixerDevice *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__,
          USoundSubmixBase *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  FMixerSubmix *pFVar4;
  uint *puVar5;
  FMixerSubmix *pFVar6;
  FLLMScope local_res20 [2];
  FMemScope local_28;
  TSharedPtr<Audio::FMixerSubmix,1> local_20;
  
  FLLMScope::FLLMScope(local_res20,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_28,AudioMixer,true);
  GetRequiredSubmixInstance(this,&local_20,param_1);
  if (local_20.Object == (FMixerSubmix *)0x0) {
    if (param_1 != (USoundSubmixBase *)0x0) {
      uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
      if (DisableSubmixMutationLockCVar == 0) {
        lpCriticalSection = &(this->Submixes).MutationLock;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
            *(int *)&(this->Submixes).SubmixMap.field_0x34) {
          puVar3 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &(this->Submixes).SubmixMap.field_0x38;
          }
          uVar2 = *(uint *)(puVar3 + (ulonglong)
                                     (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & uVar1) *
                                     4);
          if (uVar2 != 0xffffffff) {
            do {
              puVar5 = (uint *)((longlong)(int)uVar2 * 0x20 +
                               *(longlong *)&(this->Submixes).SubmixMap);
              if (*puVar5 == uVar1) {
                if (puVar5 != (uint *)0x0) {
                  pFVar4 = *(FMixerSubmix **)(puVar5 + 2);
                  pFVar6 = *(FMixerSubmix **)(puVar5 + 4);
                  if (pFVar6 != (FMixerSubmix *)0x0) {
                    LOCK();
                    *(int *)&pFVar6->field_0x8 = *(int *)&pFVar6->field_0x8 + 1;
                    UNLOCK();
                  }
                  goto LAB_146505b0b;
                }
                break;
              }
              uVar2 = puVar5[6];
            } while (uVar2 != 0xffffffff);
          }
        }
        pFVar4 = (FMixerSubmix *)0x0;
        pFVar6 = pFVar4;
LAB_146505b0b:
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      else {
        if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
            *(int *)&(this->Submixes).SubmixMap.field_0x34) {
          puVar3 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &(this->Submixes).SubmixMap.field_0x38;
          }
          uVar2 = *(uint *)(puVar3 + (ulonglong)
                                     (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & uVar1) *
                                     4);
          if (uVar2 != 0xffffffff) {
            do {
              puVar5 = (uint *)((longlong)(int)uVar2 * 0x20 +
                               *(longlong *)&(this->Submixes).SubmixMap);
              if (*puVar5 == uVar1) {
                if (puVar5 != (uint *)0x0) {
                  pFVar4 = *(FMixerSubmix **)(puVar5 + 2);
                  pFVar6 = *(FMixerSubmix **)(puVar5 + 4);
                  if (pFVar6 != (FMixerSubmix *)0x0) {
                    LOCK();
                    *(int *)&pFVar6->field_0x8 = *(int *)&pFVar6->field_0x8 + 1;
                    UNLOCK();
                  }
                  goto LAB_146505b14;
                }
                break;
              }
              uVar2 = puVar5[6];
            } while (uVar2 != 0xffffffff);
          }
        }
        pFVar4 = (FMixerSubmix *)0x0;
        pFVar6 = pFVar4;
      }
LAB_146505b14:
      __return_storage_ptr__->Object = pFVar4;
      (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)pFVar6;
      if (pFVar6 != (FMixerSubmix *)0x0) {
        LOCK();
        *(int *)&pFVar6->field_0xc = *(int *)&pFVar6->field_0xc + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.SharedReferenceCount.ReferenceController);
      FMemScope::~FMemScope(&local_28);
      FLLMScope::~FLLMScope(local_res20);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Object = (FMixerSubmix *)0x0;
    (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = local_20.Object;
    (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
         local_20.SharedReferenceCount.ReferenceController;
    if (local_20.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_20.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res20);
  return __return_storage_ptr__;
}

// HasCompressedAudioInfoClass @ 146505d20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerDevice::HasCompressedAudioInfoClass(FMixerDevice *this,USoundWave *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (USoundWave *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSoundWave",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x43d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (this->AudioMixerPlatform == (IAudioMixerPlatformInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioMixerPlatform",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x43e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return true;
}

// InitSoundSubmixes @ 146509ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::InitSoundSubmixes(FMixerDevice *this)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  UObject *pUVar3;
  USoundSubmixBase *pUVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  EInternalObjectFlags EVar9;
  uint uVar10;
  uint uVar11;
  UClass *pUVar12;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar13;
  FName *pFVar14;
  TStatId TVar15;
  FStaticBasicLogRecord *pFVar16;
  uint *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  FSharedReferencer<1> FVar20;
  FMixerSubmix *pFVar21;
  FName local_res10;
  FName local_res18;
  TObjectIterator<USoundSubmixBase> local_f8;
  TObjectIterator<USoundSubmixBase_const_> local_e0;
  TSharedPtr<Audio::FMixerSubmix,1> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TSharedPtr<Audio::FMixerSubmix,1> local_78;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  FMixerDevice *local_40;
  undefined8 local_30;
  
  bVar7 = IsInGameThread();
  if (!bVar7) goto LAB_14650a1f1;
  this->bSubmixRegistrationDisabled = true;
  pUVar12 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar12);
  }
  pUVar3 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 == (UObject *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x58d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((this->RequiredSubmixes).ArrayNum < 1) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      pFVar16 = &::LOG_Static;
      goto LAB_146509f63;
    }
  }
  else if (3 < (byte)LogAudioMixer._0_1_) {
    pFVar16 = &::LOG_Static;
LAB_146509f63:
    UE::Logging::Private::BasicLog<4>(pFVar16,(FLogCategoryBase *)&LogAudioMixer);
  }
  ::FString::FString(&local_b8,L"MasterSubmixDefault");
  LoadRequiredSubmix(this,Main,&local_b8,false,(FSoftObjectPath *)&pUVar3[5].field_0x10);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)&pUVar3[6].field_0x8 != 0) {
    ::FString::FString(&local_a8,L"BaseDefault");
    LoadRequiredSubmix(this,BaseDefault,&local_a8,false,(FSoftObjectPath *)&pUVar3[6].field_0x8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_98,L"MasterReverbSubmixDefault");
  LoadRequiredSubmix(this,Reverb,&local_98,true,(FSoftObjectPath *)(pUVar3 + 7));
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (DisableSubmixEffectEQCvar == 0) {
    ::FString::FString(&local_88,L"MasterEQSubmixDefault");
    LoadRequiredSubmix(this,EQ,&local_88,false,(FSoftObjectPath *)&pUVar3[7].field_0x20);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  LoadPluginSoundSubmixes(this);
  local_f8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ObjectArray.ArrayNum = 0;
  local_f8.ObjectArray.ArrayMax = 0;
  local_f8.Index = 0xffffffff;
  EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = Z_Construct_UClass_USoundSubmixBase_NoRegister();
  GetObjectsOfClass(pUVar12,&local_f8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<USoundSubmixBase>::Advance(&local_f8);
    lVar19 = (longlong)local_f8.Index;
    if (local_f8.Index < 0) break;
    if (local_f8.ObjectArray.ArrayNum <= local_f8.Index) break;
    uVar10 = 0;
    if (local_f8.Index < local_f8.ObjectArray.ArrayNum) {
      uVar10 = (uint)~local_f8.Index >> 0x1f;
    }
    if (uVar10 == 0) {
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
    pUVar4 = *(USoundSubmixBase **)(local_f8.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
    if (pUVar4 == (USoundSubmixBase *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubmixToLoad",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x5ad,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    bVar7 = IsRequiredSubmixType(this,pUVar4);
    if (!bVar7) {
      cVar8 = (**(code **)(pUVar4->_padding_ + 0x2c8))(pUVar4,1);
      if (cVar8 == '\0') {
        LoadSoundSubmix(this,pUVar4);
        pTVar13 = GetSubmixInstance(this,&local_68,pUVar4);
        TSharedPtr<Audio::FMixerSubmix,1>::TSharedPtr<Audio::FMixerSubmix,1><Audio::FMixerSubmix>
                  (&local_78,pTVar13);
        InitSoundfieldAndEndpointDataForSubmix(this,pUVar4,&local_78,false);
        if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_68.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
    }
  }
  if (local_f8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.ObjectArray.AllocatorInstance.Data);
  }
  this->bSubmixRegistrationDisabled = false;
LAB_14650a1f1:
  bVar7 = IsInAudioThread();
  if (!bVar7) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_InitSoundSubmixes ==
            (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_Audio::FMixerDevice::InitSoundSubmixes(void)_::_74_::FStat_STAT_InitSoundSubmixes>
             )0x0) {
          pFVar14 = ::FName::FName(&local_res10,"STAT_InitSoundSubmixes");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitSoundSubmixes,*pFVar14,
                     L"FAudioThreadTask.InitSoundSubmixes","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar15.StatIdPtr = (TStatIdData *)StatPtr_STAT_InitSoundSubmixes;
    if (StatPtr_STAT_InitSoundSubmixes ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_Audio::FMixerDevice::InitSoundSubmixes(void)_::_74_::FStat_STAT_InitSoundSubmixes>
         )0x0) {
      pFVar14 = ::FName::FName(&local_res18,"STAT_InitSoundSubmixes");
      TVar15.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitSoundSubmixes,*pFVar14,
                      L"FAudioThreadTask.InitSoundSubmixes","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::InitSoundSubmixes'::`74'::<lambda_1>,1,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::InitSoundSubmixes'::__l74::<lambda_1>,void>
                  ::Call;
    local_40 = this;
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar15);
    return;
  }
  if ((this->RequiredSubmixes).ArrayNum < 1) {
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
  pUVar4 = *(USoundSubmixBase **)(this->RequiredSubmixes).AllocatorInstance.Data;
  if (pUVar4 != (USoundSubmixBase *)0x0) {
    if ((this->RequiredSubmixes).ArrayNum < 1) {
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
    if (pUVar4 != *(USoundSubmixBase **)(this->RequiredSubmixes).AllocatorInstance.Data) {
      if ((this->RequiredSubmixInstances).ArrayNum < 1) {
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
      RebuildSubmixLinks(this,pUVar4,
                         (TSharedPtr<Audio::FMixerSubmix,1> *)
                         (this->RequiredSubmixInstances).AllocatorInstance.Data);
    }
  }
  if ((this->RequiredSubmixes).ArrayNum < 2) {
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
  pUVar4 = *(USoundSubmixBase **)((this->RequiredSubmixes).AllocatorInstance.Data + 8);
  if (pUVar4 != (USoundSubmixBase *)0x0) {
    if ((this->RequiredSubmixes).ArrayNum < 1) {
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
    if (pUVar4 != *(USoundSubmixBase **)(this->RequiredSubmixes).AllocatorInstance.Data) {
      if ((this->RequiredSubmixInstances).ArrayNum < 2) {
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
      RebuildSubmixLinks(this,pUVar4,
                         (TSharedPtr<Audio::FMixerSubmix,1> *)
                         ((this->RequiredSubmixInstances).AllocatorInstance.Data + 0x10));
    }
  }
  if ((this->RequiredSubmixes).ArrayNum < 3) {
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
  pUVar4 = *(USoundSubmixBase **)((this->RequiredSubmixes).AllocatorInstance.Data + 0x10);
  if (pUVar4 != (USoundSubmixBase *)0x0) {
    if ((this->RequiredSubmixes).ArrayNum < 1) {
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
    if (pUVar4 != *(USoundSubmixBase **)(this->RequiredSubmixes).AllocatorInstance.Data) {
      if ((this->RequiredSubmixInstances).ArrayNum < 3) {
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
      RebuildSubmixLinks(this,pUVar4,
                         (TSharedPtr<Audio::FMixerSubmix,1> *)
                         ((this->RequiredSubmixInstances).AllocatorInstance.Data + 0x20));
    }
  }
  if (DisableSubmixEffectEQCvar == 0) {
    if ((this->RequiredSubmixes).ArrayNum < 4) {
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
    pUVar4 = *(USoundSubmixBase **)((this->RequiredSubmixes).AllocatorInstance.Data + 0x18);
    if (pUVar4 != (USoundSubmixBase *)0x0) {
      if ((this->RequiredSubmixes).ArrayNum < 1) {
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
      if (pUVar4 != *(USoundSubmixBase **)(this->RequiredSubmixes).AllocatorInstance.Data) {
        if ((this->RequiredSubmixInstances).ArrayNum < 4) {
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
        RebuildSubmixLinks(this,pUVar4,
                           (TSharedPtr<Audio::FMixerSubmix,1> *)
                           ((this->RequiredSubmixInstances).AllocatorInstance.Data + 0x30));
      }
    }
  }
  local_e0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ObjectArray.ArrayNum = 0;
  local_e0.ObjectArray.ArrayMax = 0;
  local_e0.Index = 0xffffffff;
  EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = Z_Construct_UClass_USoundSubmixBase_NoRegister();
  GetObjectsOfClass(pUVar12,&local_e0.ObjectArray,true,RF_ClassDefaultObject,
                    EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<USoundSubmixBase_const_>::Advance(&local_e0);
  while( true ) {
    lVar19 = (longlong)local_e0.Index;
    if (local_e0.Index < 0) break;
    if (local_e0.ObjectArray.ArrayNum <= local_e0.Index) break;
    uVar10 = 0;
    if (local_e0.Index < local_e0.ObjectArray.ArrayNum) {
      uVar10 = (uint)~local_e0.Index >> 0x1f;
    }
    if (uVar10 == 0) {
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
    pUVar4 = *(USoundSubmixBase **)(local_e0.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
    if (pUVar4 != (USoundSubmixBase *)0x0) {
      bVar7 = IsRequiredSubmixType(this,pUVar4);
      if (!bVar7) {
        uVar10 = *(uint *)((longlong)&pUVar4->_padding_ + 4);
        if (DisableSubmixMutationLockCVar == 0) {
          lpCriticalSection = &(this->Submixes).MutationLock;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
              *(int *)&(this->Submixes).SubmixMap.field_0x34) {
            puVar5 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
            puVar18 = &(this->Submixes).SubmixMap.field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar18 = puVar5;
            }
            uVar11 = *(uint *)(puVar18 +
                              (ulonglong)
                              (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & uVar10) * 4);
            if (uVar11 != 0xffffffff) {
              do {
                puVar17 = (uint *)((longlong)(int)uVar11 * 0x20 +
                                  *(longlong *)&(this->Submixes).SubmixMap);
                if (*puVar17 == uVar10) {
                  if (puVar17 != (uint *)0x0) {
                    local_c8.SharedReferenceCount.ReferenceController =
                         *(TReferenceControllerBase<1> **)(puVar17 + 4);
                    local_c8.Object = *(FMixerSubmix **)(puVar17 + 2);
                    if (local_c8.SharedReferenceCount.ReferenceController !=
                        (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                           (atomic<int>)
                           ((int)(local_c8.SharedReferenceCount.ReferenceController)->
                                 SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    goto LAB_14650a89b;
                  }
                  break;
                }
                uVar11 = puVar17[6];
              } while (uVar11 != 0xffffffff);
            }
          }
          local_c8.Object = (FMixerSubmix *)0x0;
          local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14650a89b:
          FVar20.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
          pFVar21 = local_c8.Object;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        else {
          if (*(int *)&(this->Submixes).SubmixMap.field_0x8 !=
              *(int *)&(this->Submixes).SubmixMap.field_0x34) {
            puVar5 = *(undefined1 **)&(this->Submixes).SubmixMap.field_0x40;
            puVar18 = &(this->Submixes).SubmixMap.field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar18 = puVar5;
            }
            uVar11 = *(uint *)(puVar18 +
                              (ulonglong)
                              (*(int *)&(this->Submixes).SubmixMap.field_0x48 - 1U & uVar10) * 4);
            if (uVar11 != 0xffffffff) {
              do {
                puVar17 = (uint *)((longlong)(int)uVar11 * 0x20 +
                                  *(longlong *)&(this->Submixes).SubmixMap);
                if (*puVar17 == uVar10) {
                  if (puVar17 != (uint *)0x0) {
                    FVar20.ReferenceController = *(TReferenceControllerBase<1> **)(puVar17 + 4);
                    pFVar21 = *(FMixerSubmix **)(puVar17 + 2);
                    local_c8.Object = pFVar21;
                    local_c8.SharedReferenceCount.ReferenceController = FVar20.ReferenceController;
                    if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      (FVar20.ReferenceController)->SharedReferenceCount =
                           (atomic<int>)
                           ((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    goto LAB_14650a8a4;
                  }
                  break;
                }
                uVar11 = puVar17[6];
              } while (uVar11 != 0xffffffff);
            }
          }
          local_c8.Object = (FMixerSubmix *)0x0;
          local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FVar20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar21 = (FMixerSubmix *)0x0;
        }
LAB_14650a8a4:
        if (pFVar21 != (FMixerSubmix *)0x0) {
          RebuildSubmixLinks(this,pUVar4,&local_c8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar20.ReferenceController);
      }
    }
    TObjectIterator<USoundSubmixBase_const_>::Advance(&local_e0);
  }
  if (local_e0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// InitSoundfieldAndEndpointDataForSubmix @ 14650a9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::InitSoundfieldAndEndpointDataForSubmix
          (FMixerDevice *this,USoundSubmixBase *param_1,TSharedPtr<Audio::FMixerSubmix,1> *param_2,
          bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  ISoundfieldFactory *pIVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FMixerSubmix *this_00;
  TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  
  lpCriticalSection = &this->EndpointSubmixesMutationLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 != (USoundSubmixBase *)0x0) {
    pUVar6 = Z_Construct_UClass_USoundfieldSubmix_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) {
      if (param_1 != (USoundSubmixBase *)0x0) {
        pUVar6 = Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister();
        iVar5 = (int)pUVar6->_padding_;
        if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar6->_padding_)) {
          if ((param_2->Object == (FMixerSubmix *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = param_2->Object;
          pIVar7 = (ISoundfieldFactory *)
                   USoundfieldEndpointSubmix::GetSoundfieldEndpointForSubmix
                             ((USoundfieldEndpointSubmix *)param_1);
          goto LAB_14650aac2;
        }
      }
    }
    else {
      if ((param_2->Object == (FMixerSubmix *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = param_2->Object;
      pIVar7 = USoundfieldSubmix::GetSoundfieldFactoryForSubmix((USoundfieldSubmix *)param_1);
LAB_14650aac2:
      FMixerSubmix::SetSoundfieldFactory(this_00,pIVar7);
    }
  }
  pFVar9 = (this->DefaultEndpointSubmixes).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)(this->DefaultEndpointSubmixes).ArrayNum * 0x10;
  if (pFVar9 != pFVar8) {
    do {
      if (*(FMixerSubmix **)pFVar9 == param_2->Object) {
        TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                  (&this->DefaultEndpointSubmixes,param_2,Default);
        break;
      }
      pFVar9 = pFVar9 + 0x10;
    } while (pFVar9 != pFVar8);
  }
  pFVar9 = (this->ExternalEndpointSubmixes).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)(this->ExternalEndpointSubmixes).ArrayNum * 0x10;
  if (pFVar9 != pFVar8) {
    do {
      if (*(FMixerSubmix **)pFVar9 == param_2->Object) {
        TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                  (&this->ExternalEndpointSubmixes,param_2,Default);
        break;
      }
      pFVar9 = pFVar9 + 0x10;
    } while (pFVar9 != pFVar8);
  }
  if ((param_2->Object == (FMixerSubmix *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMixerSubmix::Init(param_2->Object,param_1,param_3);
  if (param_1 == (USoundSubmixBase *)0x0) {
LAB_14650ac1d:
    if ((param_2->Object == (FMixerSubmix *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = FMixerSubmix::IsExternalEndpointSubmix(param_2->Object);
    if (!bVar4) goto LAB_14650ad02;
    pTVar10 = &this->ExternalEndpointSubmixes;
  }
  else {
    pUVar6 = Z_Construct_UClass_UEndpointSubmix_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister();
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) goto LAB_14650ac1d;
    }
    if ((param_2->Object == (FMixerSubmix *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = FMixerSubmix::IsDefaultEndpointSubmix(param_2->Object);
    if (!bVar4) goto LAB_14650ac1d;
    pTVar10 = &this->DefaultEndpointSubmixes;
  }
  pTVar1 = (TSharedPtr<Audio::FMixerSubmix,1> *)(pTVar10->AllocatorInstance).Data;
  if (((pTVar1 <= param_2) && (param_2 < pTVar1 + pTVar10->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = pTVar10->ArrayNum;
  if (iVar5 == pTVar10->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
  }
  pTVar10->ArrayNum = iVar5 + 1;
  pFVar9 = (pTVar10->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FMixerSubmix **)pFVar9 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14650ad02:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// InitializeChannelAzimuthMap @ 14650cdb0

/* WARNING: Removing unreachable block (ram,0x00014650d30f) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::InitializeChannelAzimuthMap(FMixerDevice *this,int param_1)

{
  int *piVar1;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  float *pfVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res10 [8];
  undefined4 local_res18;
  
  if (ChannelMapCache.ArrayNum == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0x80,&ChannelMapCache.AllocatorInstance,&ChannelMapCache.ArrayNum,
                       &ChannelMapCache.ArrayMax);
    memset(ChannelMapCache.AllocatorInstance.Data + (longlong)iVar8 * 0x10,0,0x800);
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,8,&VorbisChannelMapCache.AllocatorInstance,
                       &VorbisChannelMapCache.ArrayNum,&VorbisChannelMapCache.ArrayMax);
    iVar11 = 1;
    pFVar10 = VorbisChannelMapCache.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)(pFVar10 + 8) = 0;
    *(undefined8 *)(pFVar10 + 0x10) = 0;
    *(undefined8 *)(pFVar10 + 0x18) = 0;
    *(undefined8 *)(pFVar10 + 0x20) = 0;
    *(undefined8 *)(pFVar10 + 0x28) = 0;
    *(undefined8 *)(pFVar10 + 0x30) = 0;
    *(undefined8 *)(pFVar10 + 0x38) = 0;
    *(undefined8 *)(pFVar10 + 0x40) = 0;
    *(undefined8 *)(pFVar10 + 0x48) = 0;
    *(undefined8 *)(pFVar10 + 0x50) = 0;
    *(undefined8 *)(pFVar10 + 0x58) = 0;
    *(undefined8 *)(pFVar10 + 0x60) = 0;
    *(undefined8 *)(pFVar10 + 0x68) = 0;
    *(undefined8 *)(pFVar10 + 0x70) = 0;
    *(undefined8 *)(pFVar10 + 0x78) = 0;
    do {
      iVar8 = 1;
      do {
        CacheChannelMap(this,iVar8,iVar11,true);
        CacheChannelMap(this,iVar8,iVar11,false);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 9);
      uVar9 = 0;
      if (iVar11 + -1 < VorbisChannelMapCache.ArrayNum) {
        uVar9 = (uint)-iVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar7 = CreateVorbis2DChannelMap
                        (iVar11,OutputMajorOrder,
                         (TArray<float,TSizedDefaultAllocator<32>_> *)
                         (VorbisChannelMapCache.AllocatorInstance.Data +
                         (longlong)iVar11 * 0x10 + -0x10));
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bSuccess",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerChannelMaps.cpp"
                             ,0x8e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 9);
  }
  fVar14 = __real_3f800000;
  fVar15 = __real_41f00000;
  fVar16 = __real_43a50000;
  if (param_1 == 2) {
    fVar15 = __real_42b40000;
    fVar16 = __real_43870000;
  }
  this->DefaultChannelAzimuthPositions[0].Channel = DefaultChannel;
  this->DefaultChannelAzimuthPositions[0].Azimuth = fVar16;
  this->DefaultChannelAzimuthPositions[0].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[0].Radius = fVar14;
  this->DefaultChannelAzimuthPositions[1].Channel = FrontRight;
  this->DefaultChannelAzimuthPositions[1].Azimuth = fVar15;
  this->DefaultChannelAzimuthPositions[1].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[1].Radius = fVar14;
  fVar14 = __real_bf800000;
  if ((this->field_0x5d0 & 1) != 0) {
    fVar14 = 0.0;
  }
  this->DefaultChannelAzimuthPositions[2].Channel = FrontCenter;
  this->DefaultChannelAzimuthPositions[2].Azimuth = fVar14;
  this->DefaultChannelAzimuthPositions[2].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[2].Radius = 1.0;
  this->DefaultChannelAzimuthPositions[3].Channel = LowFrequency;
  this->DefaultChannelAzimuthPositions[3].Azimuth = -1.0;
  this->DefaultChannelAzimuthPositions[3].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[3].Radius = 1.0;
  this->DefaultChannelAzimuthPositions[4].Channel = BackLeft;
  this->DefaultChannelAzimuthPositions[4].Azimuth = 210.0;
  this->DefaultChannelAzimuthPositions[4].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[4].Radius = 1.0;
  this->DefaultChannelAzimuthPositions[5].Channel = BackRight;
  this->DefaultChannelAzimuthPositions[5].Azimuth = 150.0;
  this->DefaultChannelAzimuthPositions[5].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[5].Radius = 1.0;
  this->DefaultChannelAzimuthPositions[6].Channel = FrontLeftOfCenter;
  this->DefaultChannelAzimuthPositions[6].Azimuth = 15.0;
  this->DefaultChannelAzimuthPositions[6].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[6].Radius = 1.0;
  this->DefaultChannelAzimuthPositions[7].Channel = FrontRightOfCenter;
  this->DefaultChannelAzimuthPositions[7].Azimuth = 345.0;
  this->DefaultChannelAzimuthPositions[7].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[7].Radius = 1.0;
  this->DefaultChannelAzimuthPositions[8].Channel = BackCenter;
  this->DefaultChannelAzimuthPositions[8].Azimuth = 180.0;
  this->DefaultChannelAzimuthPositions[8].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[8].Radius = 1.0;
  this->DefaultChannelAzimuthPositions[9].Channel = SideLeft;
  this->DefaultChannelAzimuthPositions[9].Azimuth = 250.0;
  this->DefaultChannelAzimuthPositions[9].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[9].Radius = 1.0;
  this->DefaultChannelAzimuthPositions[10].Channel = SideRight;
  this->DefaultChannelAzimuthPositions[10].Azimuth = 110.0;
  this->DefaultChannelAzimuthPositions[10].Elevation = 0.0;
  this->DefaultChannelAzimuthPositions[10].Radius = 1.0;
  if (param_1 != 2) {
    local_res18 = 0;
    iVar8 = 0;
    while ((iVar8 == 2 && ((this->field_0x5d0 & 1) == 0))) {
      iVar8 = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x00014650d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + *(uint *)(&DAT_14650d47c + (longlong)iVar8 * 4))
    )(switchD_1501dbc7b::caseD_1.e_magic + *(uint *)(&DAT_14650d47c + (longlong)iVar8 * 4),
      &GEngineIni);
    return;
  }
  pTVar2 = &this->DeviceChannelAzimuthPositions;
  piVar1 = &(this->DeviceChannelAzimuthPositions).ArrayMax;
  (this->DeviceChannelAzimuthPositions).ArrayNum = 0;
  if ((this->DeviceChannelAzimuthPositions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar13 = (this->PlatformInfo).OutputChannelArray.AllocatorInstance.Data;
  iVar8 = (this->PlatformInfo).OutputChannelArray.ArrayNum;
  pFVar10 = pFVar13 + (longlong)iVar8 * 4;
  while( true ) {
    if ((this->PlatformInfo).OutputChannelArray.ArrayNum != iVar8) {
      local_res10[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<enum_EAudioMixerChannel::Type,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar13 == pFVar10) break;
    iVar11 = *(int *)pFVar13;
    if ((iVar11 != 3) &&
       (pfVar3 = &this->DefaultChannelAzimuthPositions[iVar11].Azimuth,
       0.0 < *pfVar3 || *pfVar3 == 0.0)) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      pFVar12 = (FScriptContainerElement *)(this->DefaultChannelAzimuthPositions + iVar11);
      if ((pFVar4 <= pFVar12) &&
         ((pFVar12 < pFVar4 + (longlong)*piVar1 * 0x10 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (this->DeviceChannelAzimuthPositions).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->DeviceChannelAzimuthPositions).ArrayNum = iVar11 + 1;
      uVar6 = *(undefined8 *)(pFVar12 + 8);
      pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar12;
      *(undefined8 *)(pFVar4 + 8) = uVar6;
    }
    pFVar13 = pFVar13 + 4;
  }
  AlgoImpl::
  IntroSortInternal<Audio::FChannelPositionInfo,int,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::__l2::FCompareByAzimuth>_>
            ((FChannelPositionInfo *)(pTVar2->AllocatorInstance).Data,
             (this->DeviceChannelAzimuthPositions).ArrayNum,local_res10[0],
             (FCompareByAzimuth *)local_res8);
  return;
}

// InitializeChannelMaps @ 14650d4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::InitializeChannelMaps(FMixerDevice *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  if (ChannelMapCache.ArrayNum == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0x80,&ChannelMapCache.AllocatorInstance,&ChannelMapCache.ArrayNum,
                       &ChannelMapCache.ArrayMax);
    memset(ChannelMapCache.AllocatorInstance.Data + (longlong)iVar3 * 0x10,0,0x800);
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,8,&VorbisChannelMapCache.AllocatorInstance,
                       &VorbisChannelMapCache.ArrayNum,&VorbisChannelMapCache.ArrayMax);
    iVar6 = 1;
    pFVar5 = VorbisChannelMapCache.AllocatorInstance.Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(undefined8 *)(pFVar5 + 8) = 0;
    *(undefined8 *)(pFVar5 + 0x10) = 0;
    *(undefined8 *)(pFVar5 + 0x18) = 0;
    *(undefined8 *)(pFVar5 + 0x20) = 0;
    *(undefined8 *)(pFVar5 + 0x28) = 0;
    *(undefined8 *)(pFVar5 + 0x30) = 0;
    *(undefined8 *)(pFVar5 + 0x38) = 0;
    *(undefined8 *)(pFVar5 + 0x40) = 0;
    *(undefined8 *)(pFVar5 + 0x48) = 0;
    *(undefined8 *)(pFVar5 + 0x50) = 0;
    *(undefined8 *)(pFVar5 + 0x58) = 0;
    *(undefined8 *)(pFVar5 + 0x60) = 0;
    *(undefined8 *)(pFVar5 + 0x68) = 0;
    *(undefined8 *)(pFVar5 + 0x70) = 0;
    *(undefined8 *)(pFVar5 + 0x78) = 0;
    do {
      iVar3 = 1;
      do {
        CacheChannelMap(this,iVar3,iVar6,true);
        CacheChannelMap(this,iVar3,iVar6,false);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 9);
      uVar4 = 0;
      if (iVar6 + -1 < VorbisChannelMapCache.ArrayNum) {
        uVar4 = (uint)-iVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = CreateVorbis2DChannelMap
                        (iVar6,OutputMajorOrder,
                         (TArray<float,TSizedDefaultAllocator<32>_> *)
                         (VorbisChannelMapCache.AllocatorInstance.Data +
                         (longlong)iVar6 * 0x10 + -0x10));
      if ((!bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("bSuccess",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerChannelMaps.cpp"
                             ,0x8e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 9);
  }
  return;
}

// InitializeHardware @ 14650d6b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerDevice::InitializeHardware(FMixerDevice *this)

{
  uint uVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  IAudioMixerPlatformInterface *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  void *_Src;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  UClass *this_00;
  FAudioDeviceManager *pFVar13;
  FMixerDevice *pFVar14;
  IAudioMixer *pIVar15;
  IModularFeatures *pIVar16;
  IHeadMountedDisplayModule *pIVar17;
  void **ppvVar18;
  FAudioPlatformDeviceInfo *pFVar19;
  FName FVar20;
  uint *puVar21;
  TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_> *pTVar22;
  IAnalyticsProviderET *pIVar23;
  wchar_t *pwVar24;
  uint *puVar25;
  longlong lVar26;
  uint *puVar27;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_228;
  FString local_218;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  FSourceManagerInitParams local_1f8;
  undefined1 local_1f4 [12];
  LARGE_INTEGER local_1e8;
  uint *local_1e0;
  wchar_t *local_1d8;
  wchar_t *local_1d0;
  wchar_t *local_1c8;
  wchar_t *local_1c0;
  wchar_t *local_1b8;
  FMemScope local_1b0;
  FString local_1a8;
  FString local_198;
  FAudioPlatformDeviceInfo local_188;
  void *local_130 [2];
  void *local_120 [2];
  void *local_110 [3];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  void *local_98 [2];
  void *local_88;
  void *local_68;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757107511>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x2c9,"IsInGameThread()"), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  FLLMScope::FLLMScope(local_res10,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_1b0,AudioMixer,true);
  if ((this->AudioMixerPlatform == (IAudioMixerPlatformInterface *)0x0) ||
     (cVar10 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0x38))(), cVar10 == '\0')) {
    pIVar4 = this->AudioMixerPlatform;
    if ((pIVar4 != (IAudioMixerPlatformInterface *)0x0) && (2 < (byte)LogAudioMixer._0_1_)) {
      (**(code **)(pIVar4->_padding_ + 0x30))(pIVar4,local_110);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      goto LAB_14650e14c;
    }
  }
  else {
    if (3 < (byte)LogAudioMixer._0_1_) {
      (**(code **)(this->AudioMixerPlatform->_padding_ + 0x30))(this->AudioMixerPlatform,local_130);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_130[0] != (void *)0x0) {
        FMemory::Free(local_130[0]);
      }
    }
    if (bMuteAudioCVar == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::_thread_safe_static_guard_0__
         == -1)) {
        pwVar24 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::bMuteAudio =
             FParse::Param(pwVar24,L"muteaudio");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (`public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::bMuteAudio != false)
      goto LAB_14650d7f7;
    }
    else {
LAB_14650d7f7:
      if (3 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    this->MonoChannelUpmixMethod = pUVar3[10].field_0x1;
    this->PanningMethod = *(EPanningMethod *)(pUVar3 + 10);
    pFVar13 = FAudioDeviceManager::Get();
    pFVar14 = (FMixerDevice *)FAudioDeviceHandle::GetAudioDevice(&pFVar13->MainAudioDeviceHandle);
    this->field_0xa98 = this == pFVar14;
    if (((float)*(int *)&this->field_0x84 == 0.0) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1614237125757107487>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0x2e1,"SampleRate != 0.0f"), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    (**(code **)(this->AudioMixerPlatform->_padding_ + 8))();
    uVar11 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0xe0))
                       (this->AudioMixerPlatform,*(undefined4 *)&this->field_0x8c);
    iVar12 = *(int *)&this->field_0x90;
    *(uint *)&this->field_0x8c = uVar11;
    (this->OpenStreamParams).NumFrames = uVar11;
    (this->OpenStreamParams).SampleRate = *(uint *)&this->field_0x84;
    pIVar15 = (IAudioMixer *)&this->field_0xa90;
    if (this == (FMixerDevice *)0x0) {
      pIVar15 = (IAudioMixer *)0x0;
    }
    (this->OpenStreamParams).NumBuffers = iVar12;
    (this->OpenStreamParams).AudioMixer = pIVar15;
    (this->OpenStreamParams).OutputDeviceIndex = 0xffffffff;
    iVar12 = FAudioDevice::GetMaxSources((FAudioDevice *)this);
    pIVar4 = this->AudioMixerPlatform;
    (this->OpenStreamParams).MaxSources = iVar12;
    (**(code **)(pIVar4->_padding_ + 0x100))(pIVar4,&local_208);
    if ((local_200 < 2) && (bVar8 = FAudioDevice::CanUseVRAudioDevice(), bVar8)) {
      bVar8 = IsInGameThread();
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                             ,0x5a,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pIVar16 = IModularFeatures::Get();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                        ::__l2::HMDFeatureName,L"HMD");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      iVar12 = (**(code **)((longlong)*pIVar16 + 0x18))
                         (pIVar16,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                                  ::__l2::HMDFeatureName);
      if (0 < iVar12) {
        pIVar17 = IHeadMountedDisplayModule::Get();
        ppvVar18 = (void **)(**(code **)((longlong)*pIVar17 + 0x70))(pIVar17,local_120);
        if (&local_208 != ppvVar18) {
          if (local_208 != (void *)0x0) {
            FMemory::Free(local_208);
          }
          local_208 = *ppvVar18;
          *ppvVar18 = (void *)0x0;
          local_200 = *(int *)(ppvVar18 + 1);
          local_1fc = *(undefined4 *)((longlong)ppvVar18 + 0xc);
          ppvVar18[1] = (void *)0x0;
        }
        if (local_120[0] != (void *)0x0) {
          FMemory::Free(local_120[0]);
        }
      }
    }
    iVar12 = local_200;
    _Src = local_208;
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.Data.ArrayNum = local_200;
    if (local_200 == 0) {
      local_218.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_200,0,(ForAnyElementType *)&local_218,local_200,&local_218.Data.ArrayMax)
      ;
      memcpy(local_218.Data.AllocatorInstance.Data,_Src,(longlong)iVar12 * 2);
    }
    puVar27 = (uint *)0x0;
    if ((this->OpenStreamParams).bUseSystemAudioDevice == false) {
      iVar12 = (this->OpenStreamParams).AudioDeviceId.Data.ArrayNum;
      puVar25 = (uint *)(ulonglong)(iVar12 - 1);
      if (iVar12 == 0) {
        puVar25 = puVar27;
      }
      ::FString::AssignRange
                (&local_218,
                 (wchar_t *)(this->OpenStreamParams).AudioDeviceId.Data.AllocatorInstance.Data,
                 (int)puVar25);
    }
    if (1 < local_218.Data.ArrayNum) {
      local_res18[0] = 0;
      (**(code **)(this->AudioMixerPlatform->_padding_ + 0x60))
                (this->AudioMixerPlatform,local_res18);
      puVar25 = puVar27;
      if (local_res18[0] != 0) {
        do {
          FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo(&local_188);
          (**(code **)(this->AudioMixerPlatform->_padding_ + 0x68))
                    (this->AudioMixerPlatform,puVar25);
          iVar12 = local_188.Name.Data.ArrayNum;
          if (iVar12 == local_218.Data.ArrayNum) {
            if (1 < iVar12) {
              iVar12 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)local_188.Name.Data.AllocatorInstance.Data,
                                  (wchar_t *)local_218.Data.AllocatorInstance.Data);
              bVar8 = iVar12 == 0;
              goto LAB_14650db2c;
            }
LAB_14650db98:
            (this->OpenStreamParams).OutputDeviceIndex = (uint)puVar25;
            (this->OpenStreamParams).bRestoreIfRemoved = true;
            if (local_188.OutputChannelArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.OutputChannelArray.AllocatorInstance.Data);
            }
            if (local_188.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.DeviceId.Data.AllocatorInstance.Data);
            }
            if (local_188.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.Name.Data.AllocatorInstance.Data);
            }
            break;
          }
          bVar8 = iVar12 + local_218.Data.ArrayNum == 1;
LAB_14650db2c:
          if (bVar8) goto LAB_14650db98;
          iVar12 = local_188.DeviceId.Data.ArrayNum;
          if (iVar12 == local_218.Data.ArrayNum) {
            if (iVar12 < 2) goto LAB_14650db98;
            iVar12 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)local_188.DeviceId.Data.AllocatorInstance.Data,
                                (wchar_t *)local_218.Data.AllocatorInstance.Data);
            bVar8 = iVar12 == 0;
          }
          else {
            bVar8 = iVar12 + local_218.Data.ArrayNum == 1;
          }
          if (bVar8) goto LAB_14650db98;
          if (local_188.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_188.OutputChannelArray.AllocatorInstance.Data);
          }
          if (local_188.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.DeviceId.Data.AllocatorInstance.Data);
          }
          if (local_188.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Name.Data.AllocatorInstance.Data);
          }
          uVar11 = (uint)puVar25 + 1;
          puVar25 = (uint *)(ulonglong)uVar11;
        } while (uVar11 < local_res18[0]);
      }
    }
    cVar10 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0x90))
                       (this->AudioMixerPlatform,&this->OpenStreamParams);
    if (cVar10 != '\0') {
      pFVar19 = (FAudioPlatformDeviceInfo *)
                (**(code **)(this->AudioMixerPlatform->_padding_ + 200))
                          (this->AudioMixerPlatform,local_98);
      FAudioPlatformDeviceInfo::operator=(&this->PlatformInfo,pFVar19);
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_98[0] != (void *)0x0) {
        FMemory::Free(local_98[0]);
      }
      if (3 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      InitializeChannelAzimuthMap(this,(this->PlatformInfo).NumChannels);
      local_1f8.NumSources = FAudioDevice::GetMaxSources((FAudioDevice *)this);
      uVar11 = (this->OpenStreamParams).NumFrames;
      uVar1 = (this->OpenStreamParams).SampleRate;
      *(int *)&this->field_0xd8 = local_1f8.NumSources;
      uVar2 = *(undefined4 *)&this->field_0x84;
      *(uint *)&this->field_0xe4 = uVar11;
      *(undefined8 *)&this->field_0x5c8 = 0;
      (this->AudioClockTimingData).UpdateTime = 0.0;
      this->SubmixesAlivePingTimeSec = 0.0;
      *(undefined4 *)&this->field_0xe0 = uVar2;
      *(FMixerDevice **)&this->field_0xe8 = this;
      this->AudioClockDelta = (double)uVar11 / (double)uVar1;
      FLLMScope::FLLMScope(local_res8,AudioMixerPlugins,false,None,Default,true);
      FMemScope::FMemScope((FMemScope *)(local_1f4 + 4),AudioMixerPlugins,true);
      FVar20 = AudioPluginUtilities::GetDesiredSpatializationPluginName();
      FAudioDevice::SetCurrentSpatializationPlugin((FAudioDevice *)this,*(FName *)FVar20);
      plVar5 = *(longlong **)&this->field_0x110;
      if (plVar5 != (longlong *)0x0) {
        local_f8 = *(undefined4 *)&this->field_0xd8;
        uStack_f4 = *(undefined4 *)&this->field_0xdc;
        uStack_f0 = *(undefined4 *)&this->field_0xe0;
        uStack_ec = *(undefined4 *)&this->field_0xe4;
        local_e8 = *(undefined8 *)&this->field_0xe8;
        (**(code **)(*plVar5 + 8))(plVar5,&local_f8);
      }
      plVar5 = *(longlong **)&this->field_0x100;
      if (plVar5 != (longlong *)0x0) {
        local_d8 = *(undefined4 *)&this->field_0xd8;
        uStack_d4 = *(undefined4 *)&this->field_0xdc;
        uStack_d0 = *(undefined4 *)&this->field_0xe0;
        uStack_cc = *(undefined4 *)&this->field_0xe4;
        local_c8 = *(undefined8 *)&this->field_0xe8;
        (**(code **)(*plVar5 + 8))(plVar5,&local_d8);
      }
      plVar5 = *(longlong **)&this->field_0xf0;
      if (plVar5 != (longlong *)0x0) {
        local_b8 = *(undefined4 *)&this->field_0xd8;
        uStack_b4 = *(undefined4 *)&this->field_0xdc;
        uStack_b0 = *(undefined4 *)&this->field_0xe0;
        uStack_ac = *(undefined4 *)&this->field_0xe4;
        local_a8 = *(undefined8 *)&this->field_0xe8;
        (**(code **)(*plVar5 + 8))(plVar5,&local_b8);
      }
      FMemScope::~FMemScope((FMemScope *)(local_1f4 + 4));
      FLLMScope::~FLLMScope(local_res8);
      FMixerSourceManager::Init((this->SourceManager).Ptr,&local_1f8);
      (**(code **)(*(longlong *)this + 0x70))(this);
      RegisterSubmixEnvelopeFollowerCVars(this);
      IAudioMixerPlatformInterface::PostInitializeHardware(this->AudioMixerPlatform);
      QueryPerformanceCounter(&local_1e8);
      local_res20[0] = *(uint *)&this->field_0xa0;
      dVar7 = (double)local_1e8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      (this->AudioThreadTimingData).AudioThreadTime = 0.0;
      (this->AudioThreadTimingData).AudioRenderThreadTime = 0.0;
      (this->AudioThreadTimingData).StartTime = dVar7 + __real_4170000000000000;
      EnterCriticalSection
                ((LPCRITICAL_SECTION)
                 &FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs);
      if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._8_4_ !=
          FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._52_4_) {
        lVar26 = 0x154bfa788;
        if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ !=
            0) {
          lVar26 = FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues.
                   _64_8_;
        }
        uVar11 = *(uint *)(lVar26 + (ulonglong)
                                    (FSynchronizedProceduralDecodeHandle::
                                     ProceduralRenderingSynchronizationQueues._72_4_ - 1 &
                                    local_res20[0]) * 4);
        while (uVar11 != 0xffffffff) {
          puVar25 = (uint *)((longlong)(int)uVar11 * 0x20 +
                            FSynchronizedProceduralDecodeHandle::
                            ProceduralRenderingSynchronizationQueues._0_8_);
          if (*puVar25 == local_res20[0]) {
            puVar21 = puVar25 + 2;
            if (puVar25 == (uint *)0x0) {
              puVar21 = puVar27;
            }
            if (puVar21 != (uint *)0x0) goto LAB_14650df3c;
            break;
          }
          uVar11 = puVar25[6];
        }
      }
      local_1e0 = local_res20;
      TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues,
                 (TKeyInitializer<unsigned_int_const_&> *)local_1f4,(bool *)&local_1e0);
      pTVar22 = TMapBase<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>_>
                ::FindChecked((TMapBase<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>_>
                               *)&FSynchronizedProceduralDecodeHandle::
                                  ProceduralRenderingSynchronizationQueues,local_res20[0]);
      if (pTVar22->ArrayMax < 0x80) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0x80,&pTVar22->AllocatorInstance,pTVar22->ArrayNum,&pTVar22->ArrayMax);
      }
LAB_14650df3c:
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)
                 &FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs);
      local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.ArrayMax = 0;
      DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
      local_228.ArrayNum = 0;
      if (local_228.ArrayMax != 5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,5,&local_228.AllocatorInstance,0,&local_228.ArrayMax);
      }
      local_1d8 = L"SampleRate";
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int>
                (&local_228,&local_1d8,(int *)&this->field_0x88);
      local_1d0 = L"BufferSize";
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int>
                (&local_228,&local_1d0,(int *)&this->field_0x8c);
      local_1c8 = L"NumBuffers";
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int>
                (&local_228,&local_1c8,(int *)&this->field_0x90);
      local_1c0 = L"NumSources";
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int>
                (&local_228,&local_1c0,(int *)&this->field_0x94);
      local_1b8 = L"NumOutputChannels";
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int>
                (&local_228,&local_1b8,&(this->PlatformInfo).NumChannels);
      ::FString::FString(&local_198,L"ProjectSettings");
      if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
        pIVar23 = FEngineAnalytics::GetProvider();
        pcVar6 = *(code **)(pIVar23->_padding_ + 0x100);
        ::FString::ConcatCF(&local_1a8,L"Audio.Usage.",&local_198);
        (*pcVar6)(pIVar23,&local_1a8,&local_228);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
      if ((FAnalyticsEventAttribute *)local_228.AllocatorInstance.Data !=
          (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
      uVar9 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0xa0))();
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      goto LAB_14650e158;
    }
    local_110[0] = local_208;
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
      local_110[0] = local_208;
    }
LAB_14650e14c:
    if (local_110[0] != (void *)0x0) {
      FMemory::Free(local_110[0]);
    }
  }
  uVar9 = 0;
LAB_14650e158:
  FMemScope::~FMemScope(&local_1b0);
  FLLMScope::~FLLMScope(local_res10);
  return (bool)uVar9;
}

// IsAudioRenderingThread @ 14650e770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerDevice::IsAudioRenderingThread(FMixerDevice *this)

{
  atomic<int> aVar1;
  
  aVar1 = (atomic<int>)GetCurrentThreadId();
  return aVar1 == this->AudioPlatformThreadId;
}

// IsEndpointSubmix @ 14650e920

bool __cdecl Audio::FMixerDevice::IsEndpointSubmix(USoundSubmixBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 == (USoundSubmixBase *)0x0) {
    return false;
  }
  pUVar2 = Z_Construct_UClass_UEndpointSubmix_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_) {
      return false;
    }
  }
  return true;
}

// IsExernalBackgroundSoundActive @ 14650e990

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerDevice::IsExernalBackgroundSoundActive(FMixerDevice *this)

{
  return false;
}

// IsMainAudioDevice @ 14650ea80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerDevice::IsMainAudioDevice(FMixerDevice *this)

{
  FAudioDeviceManager *pFVar1;
  FMixerDevice *pFVar2;
  
  pFVar1 = FAudioDeviceManager::Get();
  pFVar2 = (FMixerDevice *)FAudioDeviceHandle::GetAudioDevice(&pFVar1->MainAudioDeviceHandle);
  return this == pFVar2;
}

// IsNonRealtime @ 14650eab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerDevice::IsNonRealtime(FMixerDevice *this)

{
  char cVar1;
  
  if (this->AudioMixerPlatform != (IAudioMixerPlatformInterface *)0x0) {
    cVar1 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsRequiredSubmixType @ 14650f160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerDevice::IsRequiredSubmixType(FMixerDevice *this,USoundSubmixBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    if (((this->RequiredSubmixes).ArrayNum <= iVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (param_1 == *(USoundSubmixBase **)((this->RequiredSubmixes).AllocatorInstance.Data + lVar5))
    {
      return true;
    }
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 8;
  } while (iVar4 < 4);
  return false;
}

// KickQueuedTasks @ 14650f920

int __cdecl Audio::FMixerDevice::KickQueuedTasks(uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackX_10 [8];
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  iVar7 = 0;
  if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._8_4_ !=
      FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._52_4_) {
    lVar5 = 0x154bfa788;
    if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ != 0) {
      lVar5 = FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_;
    }
    uVar3 = *(uint *)(lVar5 + (ulonglong)
                              (FSynchronizedProceduralDecodeHandle::
                               ProceduralRenderingSynchronizationQueues._72_4_ - 1 & param_1) * 4);
    while (iVar7 = 0, uVar3 != 0xffffffff) {
      puVar4 = (uint *)((longlong)(int)uVar3 * 0x20 +
                       FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues
                       ._0_8_);
      if (*puVar4 == param_1) {
        pFVar6 = (ForAnyElementType *)(puVar4 + 2);
        if (puVar4 == (uint *)0x0) {
          pFVar6 = (ForAnyElementType *)0x0;
        }
        if (pFVar6 != (ForAnyElementType *)0x0) {
          pFVar8 = pFVar6->Data;
          iVar7 = *(int *)&pFVar6[1].Data;
          pFVar2 = pFVar8 + (longlong)iVar7 * 8;
          while( true ) {
            if (*(int *)&pFVar6[1].Data != iVar7) {
              `TCheckedPointerIterator<FAsyncTask<Audio::FAsyncDecodeWorker>_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(auStackX_10);
            }
            if (pFVar8 == pFVar2) break;
            FAsyncTaskBase::Start
                      (*(FAsyncTaskBase **)pFVar8,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
            pFVar8 = pFVar8 + 8;
          }
          piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
          iVar7 = *(int *)&pFVar6[1].Data;
          *(undefined4 *)&pFVar6[1].Data = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,pFVar6,0,piVar1);
          }
        }
        break;
      }
      uVar3 = puVar4[6];
    }
  }
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs)
  ;
  return iVar7;
}

// LoadPluginSoundSubmixes @ 14650fc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::LoadPluginSoundSubmixes(FMixerDevice *this)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  int iVar4;
  FMixerSubmix *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  atomic<int> aVar10;
  USoundSubmixBase *pUVar11;
  FUObjectItem *this_00;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar12;
  USoundEffectPreset *pUVar13;
  FMixerSubmix *pFVar14;
  FMixerSubmix *pFVar15;
  FLLMScope local_res8 [2];
  FWeakObjectPtr local_res10;
  FMixerSubmix *local_res18;
  USoundSubmixBase *local_res20;
  FMemScope local_c8;
  FSoundEffectBase *local_c0;
  TReferenceControllerBase<1> *local_b8;
  TSharedPtr<Audio::FMixerSubmix,1> local_b0;
  TWeakPtr<Audio::FMixerSubmix,1> local_a0;
  TWeakPtr<Audio::FMixerSubmix,1> local_90;
  code *local_78 [5];
  undefined8 *local_50;
  
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x55c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->field_0x5c0 & 8) != 0) && (*(longlong *)&this->field_0x100 != 0)) {
    FLLMScope::FLLMScope(local_res8,AudioMixerPlugins,false,None,Default,true);
    FMemScope::FMemScope(&local_c8,AudioMixerPlugins,true);
    if ((*(longlong *)&this->field_0x100 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar11 = (USoundSubmixBase *)(**(code **)(**(longlong **)&this->field_0x100 + 0x38))();
    if ((pUVar11 == (USoundSubmixBase *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReverbPluginSubmix",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0x562,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar11->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
    LoadSoundSubmix(this,pUVar11);
    pTVar12 = GetSubmixInstance(this,&local_a0,pUVar11);
    TSharedPtr<Audio::FMixerSubmix,1>::TSharedPtr<Audio::FMixerSubmix,1><Audio::FMixerSubmix>
              (&local_b0,pTVar12);
    InitSoundfieldAndEndpointDataForSubmix(this,pUVar11,&local_b0,false);
    if (local_a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_a0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a0.WeakReferenceCount.ReferenceController,1);
      }
    }
    if ((*(longlong *)&this->field_0x100 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(**(longlong **)&this->field_0x100 + 0x30))
              (*(longlong **)&this->field_0x100,&local_c0);
    if (local_c0 == (FSoundEffectBase *)0x0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    else {
      if ((local_c0 == (FSoundEffectBase *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar13 = FSoundEffectBase::GetPreset(local_c0);
      if (pUVar13 != (USoundEffectPreset *)0x0) {
        pTVar12 = GetSubmixInstance(this,&local_90,pUVar11);
        local_res18 = (FMixerSubmix *)0x0;
        pFVar5 = (FMixerSubmix *)(pTVar12->WeakReferenceCount).ReferenceController;
        pFVar14 = pFVar5;
        pFVar15 = (FMixerSubmix *)0x0;
        if (pFVar5 != (FMixerSubmix *)0x0) {
          aVar3 = *(atomic<int> *)&pFVar5->field_0x8;
          do {
            pFVar14 = (FMixerSubmix *)0x0;
            if (aVar3 == (atomic<int>)0x0) break;
            LOCK();
            aVar10 = *(atomic<int> *)&pFVar5->field_0x8;
            bVar9 = aVar3 == aVar10;
            if (bVar9) {
              *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)aVar3 + 1);
              aVar10 = aVar3;
            }
            UNLOCK();
            pFVar14 = pFVar5;
            aVar3 = aVar10;
          } while (!bVar9);
          pTVar6 = (pTVar12->WeakReferenceCount).ReferenceController;
          LOCK();
          paVar1 = &pTVar6->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar3 == (atomic<int>)0x1) && (pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
          (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar15 = (FMixerSubmix *)0x0;
          if (pFVar14 != (FMixerSubmix *)0x0) {
            pFVar15 = pTVar12->Object;
            pTVar12->Object = (FMixerSubmix *)0x0;
            local_res18 = pFVar15;
          }
        }
        if (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)((local_90.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_90.WeakReferenceCount.ReferenceController,1);
          }
        }
        if ((pFVar15 == (FMixerSubmix *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReverbPluginMixerSubmixPtr.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                               ,0x571,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res20 = pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
        pTVar6 = local_b8;
        FVar8 = local_res10;
        if (pFVar14 != (FMixerSubmix *)0x0) {
          puVar2 = &pFVar14->field_0xc;
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + 1;
          UNLOCK();
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + 1;
          UNLOCK();
        }
        puVar2 = &pFVar14->field_0xc;
        if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_b8->SharedReferenceCount = (atomic<int>)((int)local_b8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78[0] = (code *)0x0;
        local_50 = FMemory::Malloc(0x30,8);
        local_50[2] = pFVar14;
        *local_50 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::`25'::<lambda_1>,0,1>
                     ::_vftable_;
        local_50[1] = local_res18;
        *(FWeakObjectPtr *)(local_50 + 3) = FVar8;
        local_50[4] = local_c0;
        local_50[5] = pTVar6;
        if (local_50 + 1 != (undefined8 *)0x0) {
          local_78[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`Audio::FMixerDevice::LoadPluginSoundSubmixes'::__l25::<lambda_1>,void>
                        ::Call;
        }
        AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pFVar14 != (FMixerSubmix *)0x0) {
          LOCK();
          iVar4 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*(longlong *)&pFVar14->field_0x0 + 8))(pFVar14,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
    FMemScope::~FMemScope(&local_c8);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// LoadRequiredSubmix @ 146510060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::LoadRequiredSubmix
          (FMixerDevice *this,ERequiredSubmixes param_1,FString *param_2,bool param_3,
          FSoftObjectPath *param_4)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  UObjectBaseUtility *this_00;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  int iVar10;
  atomic<int> aVar11;
  FString *pFVar12;
  FUObjectItem *pFVar13;
  FMixerSubmix *this_01;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar14;
  USoundSubmixBase *pUVar15;
  UClass *pUVar16;
  FName *pFVar17;
  UClass *pUVar18;
  TReferenceControllerBase<1> *pTVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  int iVar22;
  longlong lVar23;
  TReferenceControllerBase<1> *pTVar24;
  FMixerSubmix *this_02;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  undefined1 auStackY_228 [32];
  TSharedPtr<Audio::FMixerSubmix,1> local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  undefined8 local_1a8;
  FMixerSubmix *local_1a0;
  undefined8 local_198;
  FSharedReferencer<1> local_190;
  FSoftObjectPath *local_188;
  FString *local_180;
  FName local_178;
  FName local_170;
  FString local_168;
  FString local_158;
  FString local_148;
  TWeakPtr<Audio::FMixerSubmix,1> local_138;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FName local_118;
  FString local_110;
  TWeakPtr<Audio::FMixerSubmix,1> local_100;
  TStringView<wchar_t> local_e8;
  undefined8 local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  uint uVar27;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_188 = param_4;
  local_180 = param_2;
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x4fc,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar22 = (this->RequiredSubmixes).ArrayNum;
  if (iVar22 < 4) {
    iVar22 = 4 - iVar22;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar22,&(this->RequiredSubmixes).AllocatorInstance,
                        &(this->RequiredSubmixes).ArrayNum,&(this->RequiredSubmixes).ArrayMax);
    memset((this->RequiredSubmixes).AllocatorInstance.Data + (longlong)iVar10 * 8,0,
           (longlong)iVar22 << 3);
  }
  iVar22 = (this->RequiredSubmixInstances).ArrayNum;
  local_1a0 = (FMixerSubmix *)&DAT_00000010;
  if (iVar22 < 4) {
    iVar22 = 4 - iVar22;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar22,&(this->RequiredSubmixInstances).AllocatorInstance,
                        &(this->RequiredSubmixInstances).ArrayNum,
                        &(this->RequiredSubmixInstances).ArrayMax);
    memset((this->RequiredSubmixInstances).AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
           (longlong)iVar22 << 4);
  }
  if (((this->RequiredSubmixes).ArrayNum <= (int)(uint)param_1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_02 = (FMixerSubmix *)0x0;
  this_00 = *(UObjectBaseUtility **)
             ((this->RequiredSubmixes).AllocatorInstance.Data + (longlong)(int)(uint)param_1 * 8);
  uVar26 = (uint)param_1;
  uVar27 = (uint)param_1;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    if ((param_4->AssetPath).PackageName == (FName)0x0) {
      return;
    }
    pFVar12 = UObjectBaseUtility::GetPathName(this_00,&local_110,(UObject *)0x0);
    if ((param_4->AssetPath).PackageName == (FName)0x0) {
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
    }
    else {
      FTopLevelAssetPath::ToString(&param_4->AssetPath,&local_1d8);
    }
    iVar22 = (pFVar12->Data).ArrayNum;
    if (local_1d8.Data.ArrayNum == iVar22) {
      if (local_1d8.Data.ArrayNum < 2) {
        bVar9 = true;
      }
      else {
        iVar22 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_1d8.Data.AllocatorInstance.Data,
                            (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
        bVar9 = iVar22 == 0;
      }
    }
    else {
      bVar9 = iVar22 + local_1d8.Data.ArrayNum == 1;
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      return;
    }
    pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar13,RootSet);
    if (((this->RequiredSubmixInstances).ArrayNum <= (int)uVar27) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar25 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    lVar23 = (longlong)(int)(uint)param_1 * 0x10;
    pTVar19 = *(TReferenceControllerBase<1> **)(pFVar25 + lVar23 + 8);
    lVar4 = *(longlong *)(pFVar25 + lVar23);
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar4 != 0) {
      if (((this->RequiredSubmixInstances).ArrayNum <= (int)uVar27) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01 = TSharedPtr<Audio::FMixerSubmix,1>::operator->
                          ((TSharedPtr<Audio::FMixerSubmix,1> *)
                           ((this->RequiredSubmixInstances).AllocatorInstance.Data + lVar23));
      pTVar14 = FMixerSubmix::GetParentSubmix(this_01,&local_100);
      pTVar24 = (pTVar14->WeakReferenceCount).ReferenceController;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar24->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar24 = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar11 = pTVar24->SharedReferenceCount;
          bVar9 = aVar3 == aVar11;
          if (bVar9) {
            pTVar24->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar11 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar11;
        } while (!bVar9);
        pTVar5 = (pTVar14->WeakReferenceCount).ReferenceController;
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar3 == (atomic<int>)0x1) && (pTVar5 != (TReferenceControllerBase<1> *)0x0)) {
          (**(code **)(pTVar5->_padding_ + 8))();
        }
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
          this_02 = pTVar14->Object;
          pTVar14->Object = (FMixerSubmix *)0x0;
        }
      }
      if (local_100.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_100.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar3 == (atomic<int>)0x1) &&
           (local_100.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0))
        {
          (**(code **)((local_100.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
        }
      }
      if (this_02 != (FMixerSubmix *)0x0) {
        if (((this->RequiredSubmixInstances).ArrayNum <= (int)uVar26) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar25 = (this->RequiredSubmixInstances).AllocatorInstance.Data +
                  (longlong)(int)uVar26 * 0x10;
        local_138.Object = *(FMixerSubmix **)pFVar25;
        local_138.WeakReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar25 + 8);
        if (local_138.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_138.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_138.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        FMixerSubmix::RemoveChildSubmix(this_02,&local_138);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
      param_4 = local_188;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    param_2 = local_180;
  }
  pUVar15 = (USoundSubmixBase *)FSoftObjectPath::TryLoad(param_4,(FUObjectSerializeContext *)0x0);
  if (pUVar15 != (USoundSubmixBase *)0x0) {
    pUVar16 = Z_Construct_UClass_USoundSubmix_NoRegister();
    iVar22 = (int)pUVar16->_padding_;
    if ((iVar22 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar16->_padding_)) goto LAB_146510762;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&EngineSubmixDir,L"/Engine/EngineSounds/Submixes");
    atexit(`Audio::FMixerDevice::LoadRequiredSubmix'::__l33::
           _dynamic_atexit_destructor_for__EngineSubmixDir__);
    _Init_thread_footer(&::_TSS0);
  }
  ::FString::PrintfImpl(&local_168,L"%s/%s.%s");
  local_128 = local_168.Data.AllocatorInstance.Data;
  iStack_120 = 0;
  if (local_168.Data.ArrayNum != 0) {
    iStack_120 = local_168.Data.ArrayNum + -1;
  }
  local_e8._12_4_ = uStack_11c;
  local_e8.Size = iStack_120;
  local_e8.DataPtr = (wchar_t *)local_168.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(param_4,&local_e8);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  pUVar15 = (USoundSubmixBase *)FSoftObjectPath::TryLoad(param_4,(FUObjectSerializeContext *)0x0);
  if (pUVar15 == (USoundSubmixBase *)0x0) {
LAB_14651059d:
    pUVar15 = (USoundSubmixBase *)0x0;
  }
  else {
    pUVar16 = Z_Construct_UClass_USoundSubmix_NoRegister();
    iVar22 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar16->_padding_)) goto LAB_14651059d;
  }
  if (3 < (byte)LogAudioMixer._0_1_) {
    if ((param_4->AssetPath).PackageName == (FName)0x0) {
      local_1c8.Data.ArrayMax = 0;
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = 0;
    }
    else {
      FTopLevelAssetPath::ToString(&param_4->AssetPath,&local_1c8);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  if (pUVar15 == (USoundSubmixBase *)0x0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      if ((param_4->AssetPath).PackageName == (FName)0x0) {
        local_1b8.Data.ArrayMax = 0;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.Data.ArrayNum = 0;
      }
      else {
        FTopLevelAssetPath::ToString(&param_4->AssetPath,&local_1b8);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    if ((param_2->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar17 = ::FName::FName(&local_118,pwVar21);
    FVar6 = *pFVar17;
    pUVar16 = Z_Construct_UClass_USoundSubmix_NoRegister();
    local_1a8 = 0;
    if (FVar6 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar16,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar18 = Z_Construct_UClass_USoundSubmix_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar18);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar16;
    local_c8._16_8_ = FVar6;
    pUVar15 = (USoundSubmixBase *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar20 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    puVar2 = &pUVar15[1].DynamicChildSubmixes.field_0x20;
    *puVar2 = *puVar2 & 0xfe;
    puVar2 = &pUVar15[1].DynamicChildSubmixes.field_0x20;
    *puVar2 = *puVar2 | param_3;
  }
LAB_146510762:
  pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar15->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(pFVar13,RootSet);
  GetRequiredSubmixInstance(this,&local_1e8,pUVar15);
  if (local_1e8.Object == (FMixerSubmix *)0x0) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      local_178 = (FName)pUVar15->_padding_;
      ::FName::ToString(&local_178,&local_158);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    pTVar19 = ::operator_new(0x600);
    if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
      local_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar19->SharedReferenceCount = (atomic<int>)0x1;
      pTVar19->WeakReferenceCount = (atomic<int>)0x1;
      pTVar19->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFMixerSubmix_Audio___00_SharedPointerInternals__6B_
      ;
      FMixerSubmix::FMixerSubmix((FMixerSubmix *)(pTVar19 + 1),this);
      local_1a0 = (FMixerSubmix *)(pTVar19 + 1);
      if ((local_1a0 == (FMixerSubmix *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
      local_190.ReferenceController = pTVar19;
    }
    FVar8.ReferenceController = local_190.ReferenceController;
    local_1e8.Object = local_1a0;
    local_198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_1e8.SharedReferenceCount,&local_190);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
  }
  iVar22 = FSubmixMap::Remove(&this->Submixes,*(uint *)((longlong)&pUVar15->_padding_ + 4));
  if ((0 < iVar22) && (3 < (byte)LogAudioMixer._0_1_)) {
    local_170 = (FName)pUVar15->_padding_;
    ::FName::ToString(&local_170,&local_148);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  if (((this->RequiredSubmixes).ArrayNum <= (int)uVar26) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(USoundSubmixBase **)
   ((this->RequiredSubmixes).AllocatorInstance.Data + (longlong)(int)uVar27 * 8) = pUVar15;
  if (((this->RequiredSubmixInstances).ArrayNum <= (int)uVar27) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar25 = (this->RequiredSubmixInstances).AllocatorInstance.Data + (ulonglong)param_1 * 0x10;
  if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8 = *(undefined8 *)pFVar25;
  pTStack_d0 = *(TReferenceControllerBase<1> **)(pFVar25 + 8);
  *(FMixerSubmix **)pFVar25 = local_1e8.Object;
  *(TReferenceControllerBase<1> **)(pFVar25 + 8) =
       local_1e8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  if ((local_1e8.Object == (FMixerSubmix *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FMixerSubmix::Init(local_1e8.Object,pUVar15,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  return;
}

// LoadSoundSubmix @ 146510a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::LoadSoundSubmix(FMixerDevice *this,USoundSubmixBase *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  code *pcVar3;
  atomic<int> aVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  FUObjectItem *this_00;
  TReferenceControllerBase<1> *pTVar6;
  FSharedReferencer<1> FVar7;
  FMixerSubmix *pFVar8;
  bool bVar9;
  undefined4 local_res18 [4];
  TPairInitializer<unsigned_int_const_&,TSharedPtr<Audio::FMixerSubmix,1>_const_&> local_a8;
  FMixerSubmix *local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  FMixerSubmix *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined4 *local_68;
  FMixerSubmix **local_60;
  undefined4 *local_58;
  FMixerSubmix **local_50;
  TWeakPtr<Audio::FMixerSubmix,1> local_48;
  
  pTVar5 = GetSubmixInstance(this,&local_48,param_1);
  local_98 = (FMixerSubmix *)0x0;
  FVar7.ReferenceController = (pTVar5->WeakReferenceCount).ReferenceController;
  pFVar8 = (FMixerSubmix *)0x0;
  FStack_90.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (FVar7.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar4 = (FVar7.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    FVar7.ReferenceController = FStack_90.ReferenceController;
    pTVar6 = (pTVar5->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
    (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FMixerSubmix *)0x0;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      pFVar8 = pTVar5->Object;
      pTVar5->Object = (FMixerSubmix *)0x0;
      local_98 = pFVar8;
    }
  }
  if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar8 == (FMixerSubmix *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
    pTVar6 = ::operator_new(0x600);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      local_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar8 = (FMixerSubmix *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFMixerSubmix_Audio___00_SharedPointerInternals__6B_
      ;
      FMixerSubmix::FMixerSubmix((FMixerSubmix *)(pTVar6 + 1),this);
      pFVar8 = (FMixerSubmix *)(pTVar6 + 1);
      if ((pFVar8 == (FMixerSubmix *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      local_80.ReferenceController = pTVar6;
    }
    FVar7.ReferenceController = local_80.ReferenceController;
    local_88 = 0;
    local_98 = pFVar8;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_90,&local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    FVar7.ReferenceController = FStack_90.ReferenceController;
    local_78 = local_98;
    pTStack_70 = FStack_90.ReferenceController;
    if (FStack_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_90.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_90.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res18[0] = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    if (DisableSubmixMutationLockCVar == 0) {
      lpCriticalSection = &(this->Submixes).MutationLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_58 = local_res18;
      local_50 = &local_78;
      TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,TSharedPtr<Audio::FMixerSubmix,1>_const_&>_>
                ((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                  *)&this->Submixes,&local_a8,(bool *)&local_58);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      local_68 = local_res18;
      local_60 = &local_78;
      TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,TSharedPtr<Audio::FMixerSubmix,1>_const_&>_>
                ((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
                  *)&this->Submixes,
                 (TPairInitializer<unsigned_int_const_&,TSharedPtr<Audio::FMixerSubmix,1>_const_&> *
                 )(local_res18 + 2),(bool *)&local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return;
}

// MakePatch @ 146511840

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
Audio::FMixerDevice::MakePatch
          (FMixerDevice *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__,int param_1,
          int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = ((this->SourceManager).Ptr)->NumOutputFrames;
  iVar5 = iVar6;
  if (iVar6 < param_1) {
    iVar5 = param_1;
  }
  if (param_1 < iVar6) {
    iVar6 = param_1;
  }
  iVar6 = ((iVar5 + -1 + iVar6) / iVar6) * AudioMixerPatchBufferBlocks;
  pTVar3 = ::operator_new(0x60);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FPatchOutput *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFPatchOutput_Audio___00_SharedPointerInternals__6B_;
    FPatchOutput::FPatchOutput((FPatchOutput *)(pTVar3 + 1),iVar6 * param_1 * param_2,param_3);
    if ((FPatchOutput *)(pTVar3 + 1) == (FPatchOutput *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<Audio::FPatchOutput,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FPatchOutput *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// OnAudioStreamShutdown @ 1465122d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::OnAudioStreamShutdown(FMixerDevice *this)

{
  FMixerSourceManager::PumpCommandQueue(*(FMixerSourceManager **)&this->field_0x3c8);
  FMixerSourceManager::PumpCommandQueue(*(FMixerSourceManager **)&this->field_0x3c8);
  FMixerSourceManager::UpdatePendingReleaseData(*(FMixerSourceManager **)&this->field_0x3c8,true);
  return;
}

// OnListenerUpdated @ 146512e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::OnListenerUpdated
          (FMixerDevice *this,TArray<FListener,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FMixerSourceManager *this_00;
  code *pcVar8;
  undefined8 uVar9;
  ForAnyElementType _Src;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  code **ppcVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [4];
  FLLMScope local_a4;
  FMixerSourceManager *local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FMemScope local_88 [2];
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FLLMScope::FLLMScope(&local_a4,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(local_88,AudioMixer,true);
  uVar4 = param_1->ArrayNum;
  pTVar3 = &this->ListenerTransforms;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->ListenerTransforms).ArrayMax;
  (this->ListenerTransforms).ArrayNum = 0;
  if ((this->ListenerTransforms).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar4,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar5 = param_1->ArrayNum;
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar15 = pFVar14 + (longlong)iVar5 * 0x110;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FListener_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar14 == pFVar15) break;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if ((pFVar6 <= pFVar14) && (pFVar14 < pFVar6 + (longlong)*piVar1 * 0x60)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar11 = (this->ListenerTransforms).ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->ListenerTransforms).ArrayNum = iVar11 + 1;
    uVar9 = *(undefined8 *)(pFVar14 + 8);
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    lVar12 = (longlong)iVar11 * 0x60;
    *(undefined8 *)(pFVar7 + lVar12) = *(undefined8 *)pFVar14;
    *(undefined8 *)(pFVar7 + lVar12 + 8) = uVar9;
    uVar9 = *(undefined8 *)(pFVar14 + 0x18);
    *(undefined8 *)(pFVar7 + lVar12 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
    *(undefined8 *)(pFVar7 + lVar12 + 0x10 + 8) = uVar9;
    uVar9 = *(undefined8 *)(pFVar14 + 0x28);
    *(undefined8 *)(pFVar7 + lVar12 + 0x20) = *(undefined8 *)(pFVar14 + 0x20);
    *(undefined8 *)(pFVar7 + lVar12 + 0x20 + 8) = uVar9;
    uVar9 = *(undefined8 *)(pFVar14 + 0x38);
    *(undefined8 *)(pFVar7 + lVar12 + 0x30) = *(undefined8 *)(pFVar14 + 0x30);
    *(undefined8 *)(pFVar7 + lVar12 + 0x30 + 8) = uVar9;
    uVar9 = *(undefined8 *)(pFVar14 + 0x48);
    *(undefined8 *)(pFVar7 + lVar12 + 0x40) = *(undefined8 *)(pFVar14 + 0x40);
    *(undefined8 *)(pFVar7 + lVar12 + 0x40 + 8) = uVar9;
    pFVar6 = pFVar14 + 0x50;
    uVar9 = *(undefined8 *)(pFVar14 + 0x58);
    pFVar14 = pFVar14 + 0x110;
    *(undefined8 *)(pFVar7 + lVar12 + 0x50) = *(undefined8 *)pFVar6;
    *(undefined8 *)(pFVar7 + lVar12 + 0x50 + 8) = uVar9;
  }
  local_90 = (this->ListenerTransforms).ArrayNum;
  lVar12 = (longlong)local_90;
  this_00 = (this->SourceManager).Ptr;
  pFVar14 = (pTVar3->AllocatorInstance).Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_a0 = this_00;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,pFVar14,lVar12 * 0x60);
  }
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x20,8);
  _Src.Data = local_98.Data;
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Audio::FMixerSourceManager::SetListenerTransforms'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  ppcVar13 = local_50 + 1;
  pFVar2 = (ForAnyElementType *)(local_50 + 2);
  *ppcVar13 = (code *)local_a0;
  pFVar2->Data = (FScriptContainerElement *)0x0;
  lVar12 = (longlong)local_90;
  *(int *)(local_50 + 3) = local_90;
  if (local_90 == 0) {
    *(int *)((longlong)local_50 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_90,0,pFVar2,local_90,(int *)((longlong)local_50 + 0x1c));
    memcpy(pFVar2->Data,_Src.Data,lVar12 * 0x60);
  }
  if (ppcVar13 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSourceManager::SetListenerTransforms'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FMixerSourceManager::AudioMixerThreadCommand
            (this_00,(TFunction<void___cdecl(void)> *)local_78,"SetListenerTransforms()",false);
  if (local_78[0] != (code *)0x0) {
    ppcVar13 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar13 = local_50;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  FMemScope::~FMemScope(local_88);
  FLLMScope::~FLLMScope(&local_a4);
  return;
}

// OnProcessAudioStream @ 1465131d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FMixerDevice::OnProcessAudioStream
          (FMixerDevice *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  atomic<int> *paVar1;
  undefined1 *this_00;
  atomic<int> aVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  float fVar13;
  bool bVar14;
  undefined1 uVar15;
  atomic<int> aVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixes> FVar19;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerEndpointSubmixes> FVar20;
  wchar_t *pwVar21;
  FNameEntryId FVar22;
  FName FVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  TReferenceControllerBase<1> *pTVar31;
  FMixerDevice *this_01;
  ulonglong uVar32;
  ulonglong uVar33;
  FMixerSubmix *this_02;
  longlong *plVar34;
  bool bVar35;
  double dVar36;
  float fVar37;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_118;
  FAudioDeviceRenderInfo local_110;
  int local_10c;
  FLLMScope local_108 [2];
  uint local_100;
  uint uStack_fc;
  FColor_u_0 local_f8;
  FColor_u_0 local_f4;
  FName local_f0;
  FName local_e8;
  TReferenceControllerBase<1> *local_e0;
  FName local_d8;
  FName local_c8;
  LARGE_INTEGER local_b8;
  LPCRITICAL_SECTION local_b0;
  FMixerDevice *local_a8;
  LARGE_INTEGER local_a0;
  FMemScope local_98;
  FName local_90;
  FName local_88 [9];
  
  FLLMScope::FLLMScope(local_108,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_98,AudioMixer,true);
  this_00 = &this[-1].field_0x430;
  LOCK();
  *(undefined4 *)&this->field_0x3d4 = 0xffffffff;
  UNLOCK();
  local_a8 = (FMixerDevice *)this_00;
  CheckAudioRenderingThread((FMixerDevice *)this_00);
  local_10c = *(int *)&this->field_0x3d4;
  QueryPerformanceCounter(&local_b8);
  dVar12 = __real_4170000000000000;
  *(double *)&this->field_0x238 =
       ((double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000)
       - *(double *)&this->field_0x228;
  local_110.NumFrames = *(int *)(*(longlong *)&this->field_0x3c8 + 0x240);
  FAudioDevice::NotifyAudioDevicePreRender((FAudioDevice *)this_00,&local_110);
  PumpCommandQueue((FMixerDevice *)this_00);
  FQuartzClockManager::Update
            ((FQuartzClockManager *)&this->field_0x20,
             *(int *)(*(longlong *)&this->field_0x3c8 + 0x240));
  FMixerSourceManager::ComputeNextBlockOfSamples(*(FMixerSourceManager **)&this->field_0x3c8);
  if ((*(int *)&this->field_0xf0 < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  local_e0 = (TReferenceControllerBase<1> *)(*(undefined8 **)&this->field_0xe8)[1];
  this_02 = (FMixerSubmix *)**(undefined8 **)&this->field_0xe8;
  if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_e0->WeakReferenceCount = (atomic<int>)((int)local_e0->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (__CsvProfilerStat1168 == false) {
    FCsvProfilerTrace::OutputInlineStat("Submixes",_GCsvCategory_Audio.Index);
    __CsvProfilerStat1168 = true;
  }
  uVar28 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("Submixes",_GCsvCategory_Audio.Index,"CSV_Submixes");
  FVar19 = StatPtr_STAT_AudioMixerSubmixes;
  if (StatPtr_STAT_AudioMixerSubmixes == (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixes>)0x0)
  {
    pFVar18 = ::FName::FName(&local_90,"STAT_AudioMixerSubmixes");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixes,*pFVar18,
                        L"Submix Graph","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar19;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar14 = false;
  bVar11 = false;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar29 = FVar23.Number;
  if ((FVar22.Value == 0) && (uVar29 == 0)) {
LAB_146513482:
    bVar10 = false;
    FVar23 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar14 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar22.Value;
        local_f0.Number = uVar29;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                   ,0x491);
        bVar14 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146513482;
    local_100 = FVar22.Value;
    uStack_fc = uVar29;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  pTVar31 = local_e0;
  if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = local_e0->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar31 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14651351d;
      }
      LOCK();
      aVar16 = local_e0->SharedReferenceCount;
      bVar35 = aVar2 == aVar16;
      if (bVar35) {
        local_e0->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar16 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar16;
    } while (!bVar35);
  }
  if (local_e0 == (TReferenceControllerBase<1> *)0x0) {
    this_02 = (FMixerSubmix *)0x0;
  }
  if (this_02 != (FMixerSubmix *)0x0) {
    FMixerSubmix::ProcessAudio(this_02,param_1);
    if (bMuteAudioCVar == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::_thread_safe_static_guard_0__
         == -1)) {
        pwVar21 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::bMuteAudio =
             FParse::Param(pwVar21,L"muteaudio");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (`public:_static_bool___cdecl_FApp::IsAudioMuted(void)'::__l2::bMuteAudio == false)
      goto LAB_14651351d;
    }
    memset((param_1->AllocatorInstance).Data,0,(longlong)param_1->ArrayNum << 2);
  }
LAB_14651351d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("Submixes",uVar28);
  lVar6 = *(longlong *)&this->field_0x3c8;
  uVar28 = 0;
  LOCK();
  *(undefined1 *)(lVar6 + 0x260) = 0xc;
  UNLOCK();
  if (0 < *(int *)(lVar6 + 0x23c)) {
    lVar24 = 0;
    do {
      uVar29 = 0;
      if ((int)uVar28 < *(int *)(lVar6 + 0x130)) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      lVar7 = *(longlong *)(lVar6 + 0x128);
      bVar3 = *(byte *)(lVar7 + 0x521 + lVar24);
      if ((char)bVar3 < '\0') {
        if (*(int *)(lVar7 + 0x78 + lVar24) < 1) {
          if ((bVar3 & 0x40) == 0) {
            *(byte *)(lVar7 + 0x521 + lVar24) = bVar3 | 0x40;
            (**(code **)(**(longlong **)(lVar7 + 0x20 + lVar24) + 0x18))();
            plVar26 = *(longlong **)(lVar7 + 0x510 + lVar24);
            if (plVar26 != (longlong *)0x0) {
              (**(code **)(*plVar26 + 0x18))(plVar26,uVar28);
            }
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x78 + lVar24) = 0;
        }
      }
      uVar28 = uVar28 + 1;
      lVar24 = lVar24 + 0x5d0;
    } while ((int)uVar28 < *(int *)(lVar6 + 0x23c));
  }
  LOCK();
  *(undefined1 *)(lVar6 + 0x260) = 0xd;
  UNLOCK();
  if (__CsvProfilerStat1191 == false) {
    FCsvProfilerTrace::OutputInlineStat("EndpointSubmixes",_GCsvCategory_Audio.Index);
    __CsvProfilerStat1191 = true;
  }
  local_100 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("EndpointSubmixes",_GCsvCategory_Audio.Index,"CSV_EndpointSubmixes");
  FVar20 = StatPtr_STAT_AudioMixerEndpointSubmixes;
  if (StatPtr_STAT_AudioMixerEndpointSubmixes ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerEndpointSubmixes>)0x0) {
    pFVar18 = ::FName::FName(local_88,"STAT_AudioMixerEndpointSubmixes");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerEndpointSubmixes>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerEndpointSubmixes,
                        *pFVar18,L"Submix Graph Endpoint","STATGROUP_AudioMixer","STATCAT_Advanced",
                        L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_118 = *(FName *)FVar20;
  bVar11 = false;
  bVar14 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((local_118.ComparisonIndex.Value.Value != 0) || (local_118.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f4._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar11 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = local_118.ComparisonIndex.Value.Value;
        local_e8.Number = local_118.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                   ,0x4a8);
        bVar11 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_118,CycleScopeStart);
      bVar10 = true;
      goto LAB_1465137b6;
    }
  }
  bVar10 = false;
  local_118 = local_c8;
LAB_1465137b6:
  local_b0 = (LPCRITICAL_SECTION)&this->field_0x328;
  if (local_b0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_b0);
  if (EnableAudibleDefaultEndpointSubmixesCVar != 0) {
    iVar5 = *(int *)&this->field_0x310;
    plVar26 = *(longlong **)&this->field_0x308;
    plVar34 = plVar26 + (longlong)iVar5 * 2;
    while( true ) {
      if (*(int *)&this->field_0x310 != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (plVar26 == plVar34) break;
      if ((*plVar26 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar35)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      bVar35 = FMixerSubmix::IsDefaultEndpointSubmix((FMixerSubmix *)*plVar26);
      if ((!bVar35) &&
         (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1614237125757107022>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                              ,0x4b2,"Submix->IsDefaultEndpointSubmix()"), bVar35)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      if ((*plVar26 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar35)) {
        pcVar9 = (code *)swi(3);
        uVar15 = (*pcVar9)();
        return (bool)uVar15;
      }
      FMixerSubmix::ProcessAudio((FMixerSubmix *)*plVar26,param_1);
      plVar26 = plVar26 + 2;
    }
  }
  iVar5 = *(int *)&this->field_0x320;
  plVar26 = *(longlong **)&this->field_0x318;
  plVar34 = plVar26 + (longlong)iVar5 * 2;
  while( true ) {
    if (*(int *)&this->field_0x320 != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (plVar26 == plVar34) {
      LeaveCriticalSection(local_b0);
      uVar28 = local_100;
      if (bVar14) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar10) {
        FThreadStats::AddMessage(local_118,CycleScopeEnd);
      }
      FCsvProfiler::EndStat("EndpointSubmixes",uVar28);
      uVar32 = 0;
      lVar6 = *(longlong *)&this->field_0x3c8;
      uVar33 = uVar32;
      uVar25 = uVar32;
      if (0 < *(int *)(lVar6 + 0x23c)) {
        do {
          uVar29 = (uint)uVar25;
          uVar28 = 0;
          if ((int)uVar29 < *(int *)(lVar6 + 0x130)) {
            uVar28 = ~uVar29 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            uVar15 = (*pcVar9)();
            return (bool)uVar15;
          }
          lVar24 = *(longlong *)(lVar6 + 0x128);
          bVar3 = *(byte *)(lVar24 + 0x521 + uVar33);
          if ((((bVar3 & 0x40) == 0) &&
              (bVar4 = *(byte *)(lVar24 + 0x520 + uVar33), (char)bVar4 < '\0')) &&
             (*(float *)(lVar24 + 0x128 + uVar33) == 0.0)) {
            *(byte *)(lVar24 + 0x521 + uVar33) = bVar3 | 0x40;
            *(byte *)(lVar24 + 0x520 + uVar33) = bVar4 & 0x7f;
            (**(code **)(**(longlong **)(lVar24 + 0x20 + uVar33) + 0x18))();
            plVar26 = *(longlong **)(lVar24 + 0x510 + uVar33);
            if (plVar26 != (longlong *)0x0) {
              (**(code **)(*plVar26 + 0x18))(plVar26,uVar25);
            }
          }
          uVar33 = uVar33 + 0x5d0;
          uVar25 = (ulonglong)(uVar29 + 1);
        } while ((int)(uVar29 + 1) < *(int *)(lVar6 + 0x23c));
      }
      if ((this->field_0x420 == '\0') && (DebugGeneratorEnableCVar < 1)) {
        this_01 = (FMixerDevice *)&this[-1].field_0x430;
      }
      else {
        this_01 = (FMixerDevice *)&this[-1].field_0x430;
        if (DebugGeneratorEnableCVar < 2) {
          SineOscTest(this_01,param_1);
        }
        else {
          uVar28 = *(uint *)&this->field_0x1dc;
          uVar33 = (ulonglong)uVar28;
          uVar29 = *(uint *)&this->field_0x268;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            FWhiteNoise::FWhiteNoise(&WhiteNoise);
            _Init_thread_footer(&::_TSS0);
          }
          fVar13 = __real_3f800000;
          if (0 < (int)uVar28) {
            uVar28 = 0;
            do {
              if (0 < (int)uVar29) {
                uVar27 = (ulonglong)uVar29;
                uVar25 = uVar32;
                uVar30 = uVar28;
                do {
                  WhiteNoise.RandomStream.Seed =
                       WhiteNoise.RandomStream.Seed * 0xbb38435 + 0x3619636b;
                  fVar37 = (float)(WhiteNoise.RandomStream.Seed >> 9 | 0x3f800000) - fVar13;
                  uVar17 = 0;
                  if ((int)uVar30 < param_1->ArrayNum) {
                    uVar17 = ~uVar30 >> 0x1f;
                  }
                  fVar37 = ((fVar37 + fVar37) - fVar13) * DebugGeneratorAmpCVar;
                  if ((uVar17 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    uVar15 = (*pcVar9)();
                    return (bool)uVar15;
                  }
                  pFVar8 = (param_1->AllocatorInstance).Data;
                  uVar30 = uVar30 + 1;
                  *(float *)(pFVar8 + uVar25 * 4) = fVar37 + *(float *)(pFVar8 + uVar25 * 4);
                  uVar25 = uVar25 + 1;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
              uVar28 = uVar28 + uVar29;
              uVar32 = uVar32 + (longlong)(int)uVar29;
              uVar33 = uVar33 - 1;
              this_01 = local_a8;
            } while (uVar33 != 0);
          }
        }
      }
      *(double *)&this[-1].field_0x9f8 =
           *(double *)&this->field_0x210 + *(double *)&this[-1].field_0x9f8;
      QueryPerformanceCounter(&local_a0);
      *(double *)&this->field_0x218 =
           (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
      dVar12 = __real_3ff0000000000000;
      dVar36 = this_01->AudioClockDelta + this_01->SubmixesAlivePingTimeSec;
      this_01->SubmixesAlivePingTimeSec = dVar36;
      if (dVar12 < dVar36) {
        SendSubmixesAlivePing(this_01);
        this_01->SubmixesAlivePingTimeSec = 0.0;
      }
      FAudioDevice::NotifyAudioDevicePostRender((FAudioDevice *)this_01,&local_110);
      FSynchronizedProceduralDecodeHandle::KickQueuedTasks(*(uint *)&this[-1].field_0x4d0);
      if ((1 < (byte)LogAudioMixer._0_1_) && (local_10c != *(int *)&this->field_0x3d4)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &local_e0->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(local_e0->_padding_ + 8))(local_e0,1);
        }
      }
      FMemScope::~FMemScope(&local_98);
      FLLMScope::~FLLMScope(local_108);
      return true;
    }
    if ((*plVar26 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar35)) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
    bVar35 = FMixerSubmix::IsExternalEndpointSubmix((FMixerSubmix *)*plVar26);
    if ((!bVar35) &&
       (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1614237125757107009>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                            ,0x4bf,"Submix->IsExternalEndpointSubmix()"), bVar35)) break;
    if ((*plVar26 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar35)) {
      pcVar9 = (code *)swi(3);
      uVar15 = (*pcVar9)();
      return (bool)uVar15;
    }
    FMixerSubmix::ProcessAudioAndSendToEndpoint((FMixerSubmix *)*plVar26);
    plVar26 = plVar26 + 2;
  }
  pcVar9 = (code *)swi(3);
  uVar15 = (*pcVar9)();
  return (bool)uVar15;
}

// OnStartSubmixEnvelopeFollowerCVarChanged @ 146513f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged
          (FMixerDevice *this,IConsoleVariable *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *local_48 [2];
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107748>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x1dc,"IsInGameThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 != (IConsoleVariable *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0xd8))(param_1,local_48);
    uVar3 = *puVar6;
    *puVar6 = 0;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    uVar2 = *(undefined4 *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x20,8);
    local_10[2] = uVar3;
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_10[1] = this;
    *(undefined4 *)(local_10 + 3) = uVar1;
    *(undefined4 *)((longlong)local_10 + 0x1c) = uVar2;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::OnStartSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return;
}

// OnStopSubmixEnvelopeFollowerCVarChanged @ 146514130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged
          (FMixerDevice *this,IConsoleVariable *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *local_48 [2];
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107735>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x1e9,"IsInGameThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 != (IConsoleVariable *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0xd8))(param_1,local_48);
    uVar3 = *puVar6;
    *puVar6 = 0;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    uVar2 = *(undefined4 *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x20,8);
    local_10[2] = uVar3;
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_10[1] = this;
    *(undefined4 *)(local_10 + 3) = uVar1;
    *(undefined4 *)((longlong)local_10 + 0x1c) = uVar2;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::OnStopSubmixEnvelopeFollowerCVarChanged'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  return;
}

// OnTraceStarted @ 146514240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::OnTraceStarted(FMixerDevice *this,EConnectionType param_1,FString *param_2)

{
  int iVar1;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar2;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar3;
  undefined1 auStackX_10 [8];
  FMixerDevice *apFStackX_18 [2];
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FMixerDevice *pFStack_30;
  FMixerDevice **ppFStack_28;
  undefined8 uStack_20;
  
  if (-1 < AudioChannel->Enabled) {
    ppuStack_38 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::`5'::<lambda_2>,1,0>
                   ::_vftable_;
    ppFStack_28 = apFStackX_18;
    apcStack_48[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
         ::Call;
    uStack_20 = 0;
    apFStackX_18[0] = this;
    pFStack_30 = this;
    FSubmixMap::Iterate(&this->Submixes,
                        (TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
                         *)apcStack_48);
    iVar1 = (this->RequiredSubmixInstances).ArrayNum;
    pTVar2 = (TSharedPtr<Audio::FMixerSubmix,1> *)
             (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pTVar3 = pTVar2 + iVar1;
    while( true ) {
      if ((this->RequiredSubmixInstances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_10);
      }
      if (pTVar2 == pTVar3) break;
      if (pTVar2->Object != (FMixerSubmix *)0x0) {
        `Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_1>::operator()
                  (apFStackX_18,pTVar2);
      }
      pTVar2 = pTVar2 + 1;
    }
  }
  return;
}

// PauseRecording @ 146514680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::PauseRecording(FMixerDevice *this,USoundSubmix *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar12;
  FMixerSubmix *pFVar13;
  FMixerSubmix *pFVar14;
  FName local_res18;
  FName local_res20;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  FMixerDevice *local_40;
  USoundSubmix *local_38;
  undefined8 local_30;
  
  bVar7 = IsInAudioThread();
  if (!bVar7) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_PauseRecording ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::PauseRecording(USoundSubmix_*)_::_5_::FStat_STAT_PauseRecording>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res18,"STAT_PauseRecording");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PauseRecording,*pFVar9,
                   L"FAudioThreadTask.PauseRecording","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_PauseRecording;
    if (StatPtr_STAT_PauseRecording ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::PauseRecording(USoundSubmix_*)_::_5_::FStat_STAT_PauseRecording>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_PauseRecording");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PauseRecording,*pFVar9,
                      L"FAudioThreadTask.PauseRecording","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::PauseRecording'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::PauseRecording'::__l5::<lambda_1>,void>::
                  Call;
    local_40 = this;
    local_38 = param_1;
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar10);
    return;
  }
  pTVar11 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
  pFVar13 = (FMixerSubmix *)0x0;
  pFVar3 = (FMixerSubmix *)(pTVar11->WeakReferenceCount).ReferenceController;
  pFVar12 = pFVar13;
  pFVar14 = pFVar3;
  if (pFVar3 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar14 = pFVar13;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      pFVar14 = pFVar3;
      aVar2 = aVar8;
    } while (!bVar7);
    pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar12 = (FMixerSubmix *)0x0;
    if (pFVar14 != (FMixerSubmix *)0x0) {
      pFVar12 = pTVar11->Object;
      pTVar11->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar12 == (FMixerSubmix *)0x0) {
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
    pFVar12 = *(FMixerSubmix **)pFVar5;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        this_00 = pFVar13;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1465148b9;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar7);
    }
    this_00 = pFVar12;
    if (pFVar3 == (FMixerSubmix *)0x0) {
      this_00 = pFVar13;
    }
    pFVar13 = pFVar3;
    if (this_00 == (FMixerSubmix *)0x0) {
LAB_1465148b9:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MainSubmixPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0xa57,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMixerSubmix::PauseRecordingOutput(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&pFVar3->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  else {
    FMixerSubmix::PauseRecordingOutput(pFVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  return;
}

// PumpCommandQueue @ 146515ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::PumpCommandQueue(FMixerDevice *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (plVar13 = plStack_50, uVar7 = local_58, uVar11 = uStack_60, lVar10 = local_68,
        pTVar1 = ((this->CommandQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pcVar8 = *(code **)&pTVar1->Item;
    uVar9 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    local_68 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    local_58 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_50 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = local_78;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_70;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar11;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar7;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar13;
    pTVar2 = (this->CommandQueue).Tail;
    (this->CommandQueue).Tail = pTVar1;
    local_48 = *(longlong *)&pTVar1->Item;
    uVar7 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar3 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar6 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar11 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_20 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = local_38;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_34;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_30;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_2c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_40 = uVar7;
    local_38 = uVar3;
    uStack_34 = uVar4;
    uStack_30 = uVar5;
    uStack_2c = uVar6;
    local_28 = uVar11;
    local_78 = pcVar8;
    uStack_70 = uVar9;
    if (local_48 != 0) {
      plVar13 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar13 = plStack_20;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pTVar2 != (TNode *)0x0) {
      if (*(longlong *)&pTVar2->Item != 0) {
        plVar13 = *(longlong **)&(pTVar2->Item).field_0x28;
        plVar12 = (longlong *)&(pTVar2->Item).field_0x10;
        if (plVar13 != (longlong *)0x0) {
          plVar12 = plVar13;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      ::operator_delete(pTVar2,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar8 = local_78;
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar8)(uVar11);
  }
  if (local_78 != (code *)0x0) {
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// PumpGameThreadCommandQueue @ 1465169b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146516b43) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::PumpGameThreadCommandQueue(FMixerDevice *this)

{
  atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  code *local_108 [2];
  longlong local_f8 [3];
  longlong *local_e0;
  bool local_d8;
  code *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  char local_98;
  code *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  char local_58;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::Dequeue
            (&this->GameThreadCommandQueue,(TOptional<TFunction<void___cdecl(void)>_> *)local_108);
  if (local_d8 != false) {
    if ((local_d8 == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    do {
      pcVar2 = local_108[0];
      local_48 = local_108[0];
      local_20 = local_e0;
      local_e0 = (longlong *)0x0;
      local_38[0] = local_f8[0];
      local_38[1] = local_f8[1];
      local_38[2] = local_f8[2];
      if (local_108[0] != (code *)0x0) {
        local_108[0] = (code *)0x0;
      }
      UE::Core::Private::Function::CheckCallable(pcVar2);
      pcVar2 = local_48;
      plVar5 = local_38;
      if (local_20 != (longlong *)0x0) {
        plVar5 = local_20;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4);
      aVar1 = ((this->GameThreadCommandQueue).Tail)->Next;
      if (aVar1 == (atomic<TMpscQueue<TFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
        local_98 = '\0';
      }
      else {
        local_88 = *(code **)((longlong)aVar1 + 0x10);
        local_60 = *(longlong **)((longlong)aVar1 + 0x38);
        *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
        local_78 = *(undefined4 *)((longlong)aVar1 + 0x20);
        uStack_74 = *(undefined4 *)((longlong)aVar1 + 0x24);
        uStack_70 = *(undefined4 *)((longlong)aVar1 + 0x28);
        uStack_6c = *(undefined4 *)((longlong)aVar1 + 0x2c);
        local_68 = *(undefined8 *)((longlong)aVar1 + 0x30);
        if (local_88 != (code *)0x0) {
          *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
        }
        local_58 = '\x01';
        if (*(longlong *)((longlong)aVar1 + 0x10) != 0) {
          plVar5 = *(longlong **)((longlong)aVar1 + 0x38);
          if (*(longlong **)((longlong)aVar1 + 0x38) == (longlong *)0x0) {
            plVar5 = (longlong *)((longlong)aVar1 + 0x20);
          }
          (**(code **)(*plVar5 + 0x10))();
        }
        FMemory::Free((this->GameThreadCommandQueue).Tail);
        (this->GameThreadCommandQueue).Tail = (FNode *)aVar1;
        local_98 = local_58;
        if (local_58 != '\0') {
          local_c8 = local_88;
          local_a0 = local_60;
          local_60 = (longlong *)0x0;
          local_b8 = local_78;
          uStack_b4 = uStack_74;
          uStack_b0 = uStack_70;
          uStack_ac = uStack_6c;
          local_a8 = local_68;
          if (local_88 != (code *)0x0) {
            local_88 = (code *)0x0;
          }
        }
      }
      if (local_98 == '\0') {
        if (local_d8 != false) {
          if (local_108[0] != (code *)0x0) {
            plVar5 = local_f8;
            if (local_e0 != (longlong *)0x0) {
              plVar5 = local_e0;
            }
            (**(code **)(*plVar5 + 0x10))();
          }
          local_d8 = false;
          goto LAB_146516bdc;
        }
      }
      else {
        if ((local_d8 != false) && (local_108[0] != (code *)0x0)) {
          plVar5 = local_f8;
          if (local_e0 != (longlong *)0x0) {
            plVar5 = local_e0;
          }
          (**(code **)(*plVar5 + 0x10))();
        }
        local_f8[1]._4_4_ = uStack_ac;
        local_f8[1]._0_4_ = uStack_b0;
        local_108[0] = local_c8;
        local_e0 = local_a0;
        local_a0 = (longlong *)0x0;
        local_f8[0] = CONCAT44(uStack_b4,local_b8);
        local_f8[2] = local_a8;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        local_d8 = true;
LAB_146516bdc:
      }
      if ((local_98 != '\0') && (local_c8 != (code *)0x0)) {
        plVar5 = (longlong *)&local_b8;
        if (local_a0 != (longlong *)0x0) {
          plVar5 = local_a0;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_48 != (code *)0x0) {
        plVar5 = local_38;
        if (local_20 != (longlong *)0x0) {
          plVar5 = local_20;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
    } while (local_d8 != false);
  }
  return;
}

// RebuildSubmixLinks @ 146517dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::RebuildSubmixLinks
          (FMixerDevice *this,USoundSubmixBase *param_1,TSharedPtr<Audio::FMixerSubmix,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FMixerSubmix *this_00;
  code *pcVar6;
  char cVar7;
  atomic<int> aVar8;
  UClass *pUVar9;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  USoundSubmixBase *local_res10;
  FMixerSubmix *local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined8 local_98;
  FSharedReferencer<1> local_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  TWeakPtr<Audio::FMixerSubmix,1> local_48;
  TWeakPtr<Audio::FMixerSubmix,1> local_38;
  
  FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FVar11.ReferenceController = FStack_a0.ReferenceController;
  if (param_1 == (USoundSubmixBase *)0x0) goto LAB_146518199;
  pUVar9 = Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister();
  iVar3 = (int)pUVar9->_padding_;
  FVar11.ReferenceController = FStack_a0.ReferenceController;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar9->_padding_)) goto LAB_146518199;
  USoundSubmixWithParentBase::GetParent((USoundSubmixWithParentBase *)param_1,(uint)&local_res10);
  if (local_res10 == (USoundSubmixBase *)0x0) {
    cVar7 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1,1);
    FVar11.ReferenceController = FStack_a0.ReferenceController;
    if (cVar7 != '\0') goto LAB_146518199;
    if (((this->RequiredSubmixInstances).ArrayNum < 2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_2->Object !=
        *(FMixerSubmix **)((this->RequiredSubmixInstances).AllocatorInstance.Data + 0x10)) {
      pTVar10 = GetBaseDefaultSubmix(this,&local_48);
      local_70.ReferenceController = (pTVar10->WeakReferenceCount).ReferenceController;
      local_a8 = (FMixerSubmix *)0x0;
      if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = (local_70.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar8 = (local_70.ReferenceController)->SharedReferenceCount;
          bVar12 = aVar2 == aVar8;
          if (bVar12) {
            (local_70.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar8 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar8;
        } while (!bVar12);
        FVar11.ReferenceController = local_70.ReferenceController;
        pTVar4 = (pTVar10->WeakReferenceCount).ReferenceController;
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
        (pTVar10->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_a8 = (FMixerSubmix *)0x0;
        if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          local_a8 = pTVar10->Object;
          pTVar10->Object = (FMixerSubmix *)0x0;
        }
      }
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.ReferenceController);
      local_58.WeakReferenceCount.ReferenceController =
           local_48.WeakReferenceCount.ReferenceController;
      goto LAB_1465180b6;
    }
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    local_a8 = *(FMixerSubmix **)pFVar5;
    local_90.ReferenceController = pTVar4;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_146518019:
      local_a8 = (FMixerSubmix *)0x0;
    }
    else {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar8 = pTVar4->SharedReferenceCount;
        bVar12 = aVar2 == aVar8;
        if (bVar12) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar12);
      FVar11.ReferenceController = local_90.ReferenceController;
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
      if (FVar11.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_146518019;
    }
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.ReferenceController);
  }
  else {
    pTVar10 = GetSubmixInstance(this,&local_58,local_res10);
    local_80.ReferenceController = (pTVar10->WeakReferenceCount).ReferenceController;
    local_a8 = (FMixerSubmix *)0x0;
    if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_80.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar8 = (local_80.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar2 == aVar8;
        if (bVar12) {
          (local_80.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar12);
      FVar11.ReferenceController = local_80.ReferenceController;
      pTVar4 = (pTVar10->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
      (pTVar10->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_a8 = (FMixerSubmix *)0x0;
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_a8 = pTVar10->Object;
        pTVar10->Object = (FMixerSubmix *)0x0;
      }
    }
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
LAB_1465180b6:
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) &&
         (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  FVar11.ReferenceController = FStack_a0.ReferenceController;
  if (local_a8 != (FMixerSubmix *)0x0) {
    if ((param_2->Object == (FMixerSubmix *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar11.ReferenceController = FStack_a0.ReferenceController;
    this_00 = param_2->Object;
    local_38.Object = local_a8;
    local_38.WeakReferenceCount.ReferenceController = FStack_a0.ReferenceController;
    if (FStack_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_a0.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FStack_a0.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FMixerSubmix::SetParentSubmix(this_00,&local_38);
    if ((local_a8 == (FMixerSubmix *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_68.Object = param_2->Object;
    local_68.WeakReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FMixerSubmix::AddChildSubmix(local_a8,&local_68);
  }
LAB_146518199:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  return;
}

// RegisterSoundSubmix @ 146518940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::RegisterSoundSubmix(FMixerDevice *this,USoundSubmixBase *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FMixerSubmix *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  char cVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  UClass *pUVar11;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar12;
  FMixerSubmix *pFVar13;
  FSharedReferencer<1> FVar14;
  FMixerSubmix *pFVar15;
  FName local_res10;
  char local_res18;
  USoundSubmixBase *local_res20;
  TSharedPtr<Audio::FMixerSubmix,1> local_98;
  TSharedPtr<Audio::FMixerSubmix,1> local_88;
  undefined1 local_78;
  undefined7 uStack_77;
  code *local_68 [5];
  undefined8 *local_40;
  
  if (param_1 != (USoundSubmixBase *)0x0) {
    local_res18 = param_2;
    if (this->bSubmixRegistrationDisabled == false) {
      bVar6 = IsInAudioThread();
      if (bVar6) {
        if (3 < (byte)LogAudioMixer._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,(FString *)&local_98,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          if (local_98.Object != (FMixerSubmix *)0x0) {
            FMemory::Free(local_98.Object);
          }
        }
        cVar7 = IsRequiredSubmixType(this,param_1);
        local_res10.ComparisonIndex.Value._0_1_ = cVar7;
        if ((bool)cVar7) {
          if (3 < (byte)LogAudioMixer._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,(FString *)&local_98,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            if (local_98.Object != (FMixerSubmix *)0x0) {
              FMemory::Free(local_98.Object);
            }
          }
        }
        else {
          pUVar11 = Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister();
          iVar3 = (int)pUVar11->_padding_;
          if (((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
               &pUVar11->_padding_)) &&
             (USoundSubmixWithParentBase::GetParent
                        ((USoundSubmixWithParentBase *)param_1,(uint)&local_res20),
             local_res20 != (USoundSubmixBase *)0x0)) {
            pTVar12 = GetSubmixInstance(this,(TWeakPtr<Audio::FMixerSubmix,1> *)&local_98,
                                        local_res20);
            pFVar4 = (FMixerSubmix *)(pTVar12->WeakReferenceCount).ReferenceController;
            pFVar13 = pFVar4;
            pFVar15 = (FMixerSubmix *)0x0;
            if (pFVar4 != (FMixerSubmix *)0x0) {
              aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
              do {
                pFVar13 = (FMixerSubmix *)0x0;
                if (aVar2 == (atomic<int>)0x0) break;
                LOCK();
                aVar8 = *(atomic<int> *)&pFVar4->field_0x8;
                bVar6 = aVar2 == aVar8;
                if (bVar6) {
                  *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
                  aVar8 = aVar2;
                }
                UNLOCK();
                pFVar13 = pFVar4;
                aVar2 = aVar8;
              } while (!bVar6);
              pTVar5 = (pTVar12->WeakReferenceCount).ReferenceController;
              LOCK();
              paVar1 = &pTVar5->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if ((aVar2 == (atomic<int>)0x1) && (pTVar5 != (TReferenceControllerBase<1> *)0x0)) {
                (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
              }
              (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              pFVar15 = (FMixerSubmix *)0x0;
              if (pFVar13 != (FMixerSubmix *)0x0) {
                pFVar15 = pTVar12->Object;
                pTVar12->Object = (FMixerSubmix *)0x0;
              }
            }
            if (local_98.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(local_98.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if ((aVar2 == (atomic<int>)0x1) &&
                 (local_98.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0)) {
                (**(code **)((local_98.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_98.SharedReferenceCount.ReferenceController,1);
              }
            }
            if (pFVar15 == (FMixerSubmix *)0x0) {
              (**(code **)(*(longlong *)this + 0x78))(this,local_res20,local_res18);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar13);
            cVar7 = (char)local_res10.ComparisonIndex.Value;
          }
          LoadSoundSubmix(this,param_1);
        }
        pTVar12 = GetSubmixInstance(this,(TWeakPtr<Audio::FMixerSubmix,1> *)&local_88,param_1);
        local_98.Object = (FMixerSubmix *)0x0;
        FVar14.ReferenceController = (pTVar12->WeakReferenceCount).ReferenceController;
        local_98.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
        if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = (FVar14.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              break;
            }
            LOCK();
            aVar8 = (FVar14.ReferenceController)->SharedReferenceCount;
            bVar6 = aVar2 == aVar8;
            if (bVar6) {
              (FVar14.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar8 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar8;
          } while (!bVar6);
          FVar14.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
          pTVar5 = (pTVar12->WeakReferenceCount).ReferenceController;
          LOCK();
          paVar1 = &pTVar5->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar2 == (atomic<int>)0x1) && (pTVar5 != (TReferenceControllerBase<1> *)0x0)) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
          (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            local_98.Object = pTVar12->Object;
            pTVar12->Object = (FMixerSubmix *)0x0;
          }
        }
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(local_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar2 == (atomic<int>)0x1) &&
             (local_88.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0)) {
            (**(code **)((local_88.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_88.SharedReferenceCount.ReferenceController,1);
          }
        }
        if (local_res18 != '\0') {
          local_88.Object = local_98.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_98.SharedReferenceCount.ReferenceController;
          if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar14.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          InitSoundfieldAndEndpointDataForSubmix(this,param_1,&local_88,true);
        }
        if (cVar7 == '\0') {
          RebuildSubmixLinks(this,param_1,&local_98);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar14.ReferenceController);
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_AudioRegisterSoundSubmix ==
              (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::RegisterSoundSubmix(USoundSubmixBase_*,bool)_::_29_::FStat_STAT_AudioRegisterSoundSubmix>
               )0x0) {
            pFVar9 = ::FName::FName(&local_res10,"STAT_AudioRegisterSoundSubmix");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioRegisterSoundSubmix,*pFVar9,
                       L"FAudioThreadTask.RegisterSoundSubmix","STATGROUP_AudioThreadCommands",
                       "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioRegisterSoundSubmix;
        if (StatPtr_STAT_AudioRegisterSoundSubmix ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::RegisterSoundSubmix(USoundSubmixBase_*,bool)_::_29_::FStat_STAT_AudioRegisterSoundSubmix>
             )0x0) {
          pFVar9 = ::FName::FName(&local_res10,"STAT_AudioRegisterSoundSubmix");
          TVar10.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioRegisterSoundSubmix,
                          *pFVar9,L"FAudioThreadTask.RegisterSoundSubmix",
                          "STATGROUP_AudioThreadCommands","STATCAT_Advanced",
                          L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
        }
        local_68[0] = (code *)0x0;
        local_88.Object = (FMixerSubmix *)this;
        local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
        local_78 = param_2;
        local_40 = FMemory::Malloc(0x20,8);
        *local_40 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSoundSubmix'::`29'::<lambda_1>,1,1>
                     ::_vftable_;
        local_40[1] = local_88.Object;
        local_40[2] = local_88.SharedReferenceCount.ReferenceController;
        local_40[3] = CONCAT71(uStack_77,local_78);
        if (local_40 + 1 != (undefined8 *)0x0) {
          local_68[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`Audio::FMixerDevice::RegisterSoundSubmix'::__l29::<lambda_1>,void>
                        ::Call;
        }
        FAudioThread::RunCommandOnAudioThread
                  ((TUniqueFunction<void___cdecl(void)> *)local_68,TVar10);
      }
    }
    else if (2 < (byte)LogAudioMixer._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)param_1,(FString *)&local_98,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_98.Object != (FMixerSubmix *)0x0) {
        FMemory::Free(local_98.Object);
      }
    }
  }
  return;
}

// RegisterSubmixBufferListener @ 146518e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::RegisterSubmixBufferListener
          (FMixerDevice *this,ISubmixBufferListener *param_1,USoundSubmix *param_2)

{
  FName *pFVar1;
  FWeakObjectPtr local_res8;
  FName local_res10;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  code *local_48 [5];
  undefined8 *local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RegisterSubmixBufferListener ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::RegisterSubmixBufferListener(ISubmixBufferListener_*,USoundSubmix_*)_::_2_::FStat_STAT_RegisterSubmixBufferListener>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"STAT_RegisterSubmixBufferListener");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RegisterSubmixBufferListener,*pFVar1,
                   L"FAudioThreadTask.RegisterSubmixBufferListener","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FName)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  iStack_54 = local_res8.ObjectIndex;
  iStack_50 = local_res8.ObjectSerialNumber;
  local_58 = CONCAT31(local_58._1_3_,param_2 == (USoundSubmix *)0x0);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_20[1] = this;
  local_20[2] = param_1;
  local_20[3] = CONCAT44(iStack_54,local_58);
  local_20[4] = CONCAT44(uStack_4c,iStack_50);
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FAudioThread::RunCommandOnAudioThread
            ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
  return;
}

// RegisterSubmixBufferListener @ 146519060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::RegisterSubmixBufferListener
          (FMixerDevice *this,TSharedRef<ISubmixBufferListener,1> *param_1,USoundSubmix *param_2)

{
  void *_Src;
  ForAnyElementType _Src_00;
  int iVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  longlong lVar4;
  FWeakObjectPtr local_res8;
  FName local_res10;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FMixerDevice *local_88;
  ISubmixBufferListener *local_80;
  TReferenceControllerBase<1> *local_78;
  FString local_70;
  FWeakObjectPtr local_60;
  code *local_58 [5];
  undefined8 *local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RegisterSubmixBufferListener ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::RegisterSubmixBufferListener(TSharedRef<ISubmixBufferListener,1>,USoundSubmix_&)_::_2_::FStat_STAT_RegisterSubmixBufferListener>
         )0x0) {
      pFVar3 = ::FName::FName(&local_res10,"STAT_RegisterSubmixBufferListener");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RegisterSubmixBufferListener,*pFVar3,
                 L"FAudioThreadTask.RegisterSubmixBufferListener","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FName)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x18))();
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = *(int *)(puVar2 + 1);
  lVar4 = (longlong)local_90;
  _Src = (void *)*puVar2;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,_Src,lVar4 * 2);
  }
  iVar1 = local_90;
  _Src_00.Data = local_98.Data;
  local_80 = param_1->Object;
  local_78 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88 = this;
  local_70.Data.ArrayNum = local_90;
  if (local_90 == 0) {
    local_70.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,(ForAnyElementType *)&local_70,local_90,&local_70.Data.ArrayMax);
    memcpy(local_70.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar1 * 2);
  }
  local_60 = local_res8;
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  local_58[0] = (code *)0x0;
  puVar2 = FMemory::Malloc(0x38,8);
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
             ::_vftable_;
  puVar2[1] = local_88;
  puVar2[2] = local_80;
  puVar2[3] = local_78;
  if (local_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = puVar2;
  ::FString::FString((FString *)(puVar2 + 4),&local_70);
  *(FWeakObjectPtr *)(puVar2 + 6) = local_60;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::RegisterSubmixBufferListener'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FAudioThread::RunCommandOnAudioThread
            ((TUniqueFunction<void___cdecl(void)> *)local_58,(TStatId)0x154f11430);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterSubmixEnvelopeFollowerCVars @ 146519360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::RegisterSubmixEnvelopeFollowerCVars(FMixerDevice *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  IConsoleVariable *pIVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation local_110;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  FDelegateAllocation local_f8;
  code *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  FString local_d8;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
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
  local_c8 = (void *)0x0;
  local_c0 = 0;
  pcVar1 = *(code **)*IConsoleManager::Singleton;
  ::FString::PrintfImpl(&local_a8,L"au.StartSubmixEnvelopeFollower_AD%d");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar7.Data = local_a8.Data.AllocatorInstance.Data;
  }
  pIVar4 = (IConsoleVariable *)
           (*pcVar1)(pIVar2,FVar7.Data,&local_c8,
                     L"Starts a submix envelope follower (args= submix name)\n",0);
  this->StartSubmixEnvelopeFollowerCVar = pIVar4;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  pIVar4 = this->StartSubmixEnvelopeFollowerCVar;
  if (pIVar4 != (IConsoleVariable *)0x0) {
    uStack_e0 = 0;
    local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    pcVar1 = *(code **)(*(longlong *)pIVar4 + 0xe0);
    local_e8 = OnStartSubmixEnvelopeFollowerCVarChanged;
    iStack_dc = local_d8.Data.ArrayMax;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_68);
    local_50 = &local_110;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_110);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      puVar5[4] = local_e8;
      puVar5[5] = CONCAT44(iStack_dc,uStack_e0);
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFMixerDevice_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[3] = this;
      if (puVar5[4] == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    (*pcVar1)(pIVar4,&local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_98);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
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
  local_b8 = (void *)0x0;
  local_b0 = 0;
  pcVar1 = *(code **)*IConsoleManager::Singleton;
  ::FString::PrintfImpl(&local_d8,L"au.StopSubmixEnvelopeFollower_AD%d");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar7.Data = local_d8.Data.AllocatorInstance.Data;
  }
  pIVar4 = (IConsoleVariable *)
           (*pcVar1)(pIVar2,FVar7.Data,&local_b8,
                     L"Stops a submix envelope follower (args= submix name)\n",0);
  this->StopSubmixEnvelopeFollowerCVar = pIVar4;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  pIVar4 = this->StopSubmixEnvelopeFollowerCVar;
  if (pIVar4 != (IConsoleVariable *)0x0) {
    uStack_e0 = 0;
    local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    pcVar1 = *(code **)(*(longlong *)pIVar4 + 0xe0);
    local_e8 = OnStopSubmixEnvelopeFollowerCVarChanged;
    iStack_dc = local_d8.Data.ArrayMax;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_100,(FWriteAccessScope *)&local_48);
    local_30 = &local_f8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_f8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      puVar5[4] = local_e8;
      puVar5[5] = CONCAT44(iStack_dc,uStack_e0);
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFMixerDevice_Audio____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[3] = this;
      if (puVar5[4] == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    (*pcVar1)(pIVar4,&local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_100,(FWriteAccessScope *)&local_80);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  }
  return;
}

// ReleaseMixerSourceVoice @ 14651ac20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::ReleaseMixerSourceVoice(FMixerDevice *this,FMixerSourceVoice *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = ::operator_new(0x10);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    pTVar2->Item = param_1;
    pTVar1 = (this->SourceVoices).Head;
    (this->SourceVoices).Head = pTVar2;
    pTVar1->NextNode = pTVar2;
  }
  return;
}

// RemoveEnvelopeFollowerDelegate @ 14651cb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate
          (FMixerDevice *this,USoundSubmix *param_1,FOnSubmixEnvelopeBP *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  undefined8 *puVar11;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar12;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar13;
  FMixerSubmix *pFVar14;
  FMixerSubmix *pFVar15;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FName local_a0;
  TWeakPtr<Audio::FMixerSubmix,1> local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  code *local_58 [5];
  undefined8 *local_30;
  
  bVar7 = IsInAudioThread();
  if (bVar7) {
    pTVar12 = GetSubmixInstance(this,&local_98,(USoundSubmixBase *)param_1);
    pFVar14 = (FMixerSubmix *)0x0;
    pFVar3 = (FMixerSubmix *)(pTVar12->WeakReferenceCount).ReferenceController;
    pFVar13 = pFVar14;
    pFVar15 = pFVar3;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        pFVar15 = pFVar14;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        pFVar15 = pFVar3;
        aVar2 = aVar8;
      } while (!bVar7);
      pTVar4 = (pTVar12->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
      (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar13 = (FMixerSubmix *)0x0;
      if (pFVar15 != (FMixerSubmix *)0x0) {
        pFVar13 = pTVar12->Object;
        pTVar12->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_98.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar13 == (FMixerSubmix *)0x0) {
      if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
      pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
      pFVar13 = *(FMixerSubmix **)pFVar5;
      if (pFVar3 != (FMixerSubmix *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar3->field_0xc =
             (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
        UNLOCK();
        aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
        do {
          this_00 = pFVar14;
          if (aVar2 == (atomic<int>)0x0) goto LAB_14651ce05;
          LOCK();
          aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
          bVar7 = aVar2 == aVar8;
          if (bVar7) {
            *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
            aVar8 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar8;
        } while (!bVar7);
      }
      this_00 = pFVar13;
      if (pFVar3 == (FMixerSubmix *)0x0) {
        this_00 = pFVar14;
      }
      pFVar14 = pFVar3;
      if (this_00 == (FMixerSubmix *)0x0) {
LAB_14651ce05:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MainSubmixPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0xaf1,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FMixerSubmix::RemoveEnvelopeFollowerDelegate(this_00,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar14);
      if (pFVar3 != (FMixerSubmix *)0x0) {
        LOCK();
        paVar1 = (atomic<int> *)&pFVar3->field_0xc;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
        }
      }
    }
    else {
      FMixerSubmix::RemoveEnvelopeFollowerDelegate(pFVar13,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar15);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_RemoveEnvelopeFollowerDelegate ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate(USoundSubmix_*,FOnSubmixEnvelopeBP_const_&)_::_5_::FStat_STAT_RemoveEnvelopeFollowerDelegate>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res20,"STAT_RemoveEnvelopeFollowerDelegate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveEnvelopeFollowerDelegate,*pFVar9
                   ,L"FAudioThreadTask.RemoveEnvelopeFollowerDelegate",
                   "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_RemoveEnvelopeFollowerDelegate;
    if (StatPtr_STAT_RemoveEnvelopeFollowerDelegate ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate(USoundSubmix_*,FOnSubmixEnvelopeBP_const_&)_::_5_::FStat_STAT_RemoveEnvelopeFollowerDelegate>
         )0x0) {
      pFVar9 = ::FName::FName(&local_a0,"STAT_RemoveEnvelopeFollowerDelegate");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveEnvelopeFollowerDelegate,
                      *pFVar9,L"FAudioThreadTask.RemoveEnvelopeFollowerDelegate",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_88);
    local_b0 = *(undefined8 *)&param_2->field_0x8;
    local_a8 = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    local_58[0] = (code *)0x0;
    puVar11 = FMemory::Malloc(0x30,8);
    *puVar11 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::`5'::<lambda_1>,1,1>
                ::_vftable_;
    puVar11[1] = this;
    puVar11[2] = param_1;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    local_30 = puVar11;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
    puVar11[4] = local_b0;
    puVar11[5] = local_a8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (puVar11 + 1 != (undefined8 *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::RemoveEnvelopeFollowerDelegate'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar10);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  }
  return;
}

// RemoveMainSubmixEffect @ 14651d000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::RemoveMainSubmixEffect(FMixerDevice *this,uint param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FMixerDevice *local_20;
  uint local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// RemoveMasterSubmixEffect @ 14651d050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::RemoveMasterSubmixEffect(FMixerDevice *this,uint param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FMixerDevice *local_20;
  uint local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerDevice::RemoveMainSubmixEffect'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerDevice::RemoveMainSubmixEffect'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// RemoveSpectralAnalysisDelegate @ 14651d6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::RemoveSpectralAnalysisDelegate
          (FMixerDevice *this,USoundSubmix *param_1,FOnSubmixSpectralAnalysisBP *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  FName *pFVar8;
  TStatId TVar9;
  undefined8 *puVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  FName local_res20;
  FMixerSubmix *local_e8;
  FSharedReferencer<1> local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  FMixerDevice *local_c8;
  USoundSubmix *local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FName local_a0;
  TWeakPtr<Audio::FMixerSubmix,1> local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  code *local_58 [5];
  undefined8 *local_30;
  
  bVar6 = IsInAudioThread();
  if (bVar6) {
    pTVar11 = GetSubmixInstance(this,&local_98,(USoundSubmixBase *)param_1);
    local_e8 = (FMixerSubmix *)0x0;
    local_e0.ReferenceController = (pTVar11->WeakReferenceCount).ReferenceController;
    if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_e0.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar7 = (local_e0.ReferenceController)->SharedReferenceCount;
        bVar6 = aVar2 == aVar7;
        if (bVar6) {
          (local_e0.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar6);
      pTVar3 = (pTVar11->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))();
      }
      (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_e8 = pTVar11->Object;
      pTVar11->Object = (FMixerSubmix *)0x0;
    }
    if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
      }
    }
    bVar6 = false;
    if (local_e8 == (FMixerSubmix *)0x0) {
      if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
      local_e8 = *(FMixerSubmix **)pFVar4;
      local_d0.ReferenceController = pTVar3;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        local_e8 = (FMixerSubmix *)0x0;
        local_d8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e0,&local_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.ReferenceController);
      }
      else {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
        aVar2 = pTVar3->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_e8 = (FMixerSubmix *)0x0;
            break;
          }
          LOCK();
          aVar7 = pTVar3->SharedReferenceCount;
          bVar6 = aVar2 == aVar7;
          if (bVar6) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar7 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar7;
        } while (!bVar6);
        local_d8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e0,&local_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.ReferenceController);
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3);
        }
      }
      bVar6 = local_e8 == (FMixerSubmix *)0x0;
    }
    if (local_e8 == (FMixerSubmix *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757105265>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0xb8f,"FoundSubmix.IsValid()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      if ((bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FMixerSubmix::RemoveSpectralAnalysisDelegate(local_e8,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.ReferenceController);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_RemoveSpectralAnalysisDelegate ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::RemoveSpectralAnalysisDelegate(USoundSubmix_*,FOnSubmixSpectralAnalysisBP_const_&)_::_5_::FStat_STAT_RemoveSpectralAnalysisDelegate>
           )0x0) {
        pFVar8 = ::FName::FName(&local_res20,"STAT_RemoveSpectralAnalysisDelegate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveSpectralAnalysisDelegate,*pFVar8
                   ,L"FAudioThreadTask.RemoveSpectralAnalysisDelegate",
                   "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar9.StatIdPtr = (TStatIdData *)StatPtr_STAT_RemoveSpectralAnalysisDelegate;
    if (StatPtr_STAT_RemoveSpectralAnalysisDelegate ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::RemoveSpectralAnalysisDelegate(USoundSubmix_*,FOnSubmixSpectralAnalysisBP_const_&)_::_5_::FStat_STAT_RemoveSpectralAnalysisDelegate>
         )0x0) {
      pFVar8 = ::FName::FName(&local_a0,"STAT_RemoveSpectralAnalysisDelegate");
      TVar9.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RemoveSpectralAnalysisDelegate,
                      *pFVar8,L"FAudioThreadTask.RemoveSpectralAnalysisDelegate",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_c8 = this;
    local_c0 = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_88);
    local_b0 = *(undefined8 *)&param_2->field_0x8;
    local_a8 = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    local_58[0] = (code *)0x0;
    puVar10 = FMemory::Malloc(0x30,8);
    *puVar10 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::`5'::<lambda_1>,1,1>
                ::_vftable_;
    puVar10[1] = local_c8;
    puVar10[2] = local_c0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    local_30 = puVar10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
    puVar10[4] = local_b0;
    puVar10[5] = local_a8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (puVar10 + 1 != (undefined8 *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::RemoveSpectralAnalysisDelegate'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar9);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  }
  return;
}

// RemoveSubmixEffect @ 14651db30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::RemoveSubmixEffect(FMixerDevice *this,USoundSubmix *param_1,uint param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMixerSubmix *pFVar7;
  bool bVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  pTVar5 = GetSubmixInstance(this,&local_58,(USoundSubmixBase *)param_1);
  pFVar7 = (FMixerSubmix *)0x0;
  pTVar6 = (pTVar5->WeakReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar3 = (pTVar5->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = pTVar5->Object;
      pTVar5->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar7 != (FMixerSubmix *)0x0) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x20,8);
    local_20[1] = pFVar7;
    local_20[2] = pTVar6;
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffect'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *(uint *)(local_20 + 3) = param_2;
    if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::RemoveSubmixEffect'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// RemoveSubmixEffectAtIndex @ 14651ddd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::RemoveSubmixEffectAtIndex(FMixerDevice *this,USoundSubmix *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMixerSubmix *pFVar7;
  bool bVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  pTVar5 = GetSubmixInstance(this,&local_58,(USoundSubmixBase *)param_1);
  pFVar7 = (FMixerSubmix *)0x0;
  pTVar6 = (pTVar5->WeakReferenceCount).ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar3 = (pTVar5->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (pTVar5->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pFVar7 = pTVar5->Object;
      pTVar5->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar7 != (FMixerSubmix *)0x0) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x20,8);
    local_20[1] = pFVar7;
    local_20[2] = pTVar6;
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *(int *)(local_20 + 3) = param_2;
    if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::RemoveSubmixEffectAtIndex'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// ReplaceSoundEffectSubmix @ 14651e320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::ReplaceSoundEffectSubmix
          (FMixerDevice *this,USoundSubmix *param_1,int param_2,
          TSharedPtr<FSoundEffectSubmix,1> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSoundEffectSubmix *pFVar4;
  atomic<int> aVar5;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  bool bVar9;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  code *local_48 [5];
  undefined8 *local_20;
  
  pTVar6 = GetSubmixInstance(this,&local_58,(USoundSubmixBase *)param_1);
  pFVar8 = (FMixerSubmix *)0x0;
  pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar9);
    pTVar3 = (pTVar6->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      pFVar8 = pTVar6->Object;
      pTVar6->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar8 != (FMixerSubmix *)0x0) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar4 = param_3->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x30,8);
    local_20[1] = pFVar8;
    local_20[2] = pTVar7;
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *(int *)(local_20 + 3) = param_2;
    local_20[4] = pFVar4;
    local_20[5] = pTVar3;
    if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::ReplaceSoundEffectSubmix'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// ResetAudioRenderingThreadId @ 14651e6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::ResetAudioRenderingThreadId(FMixerDevice *this)

{
  LOCK();
  this->AudioPlatformThreadId = (atomic<int>)0xffffffff;
  UNLOCK();
  CheckAudioRenderingThread(this);
  return;
}

// ResumeContext @ 14651e860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::ResumeContext(FMixerDevice *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014651e86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->AudioMixerPlatform->_padding_ + 0x110))();
  return;
}

// ResumeRecording @ 14651e880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::ResumeRecording(FMixerDevice *this,USoundSubmix *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar12;
  FMixerSubmix *pFVar13;
  FMixerSubmix *pFVar14;
  FName local_res18;
  FName local_res20;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  FMixerDevice *local_40;
  USoundSubmix *local_38;
  undefined8 local_30;
  
  bVar7 = IsInAudioThread();
  if (!bVar7) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_ResumeRecording ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::ResumeRecording(USoundSubmix_*)_::_5_::FStat_STAT_ResumeRecording>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res18,"STAT_ResumeRecording");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResumeRecording,*pFVar9,
                   L"FAudioThreadTask.ResumeRecording","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_ResumeRecording;
    if (StatPtr_STAT_ResumeRecording ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::ResumeRecording(USoundSubmix_*)_::_5_::FStat_STAT_ResumeRecording>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_ResumeRecording");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResumeRecording,*pFVar9,
                      L"FAudioThreadTask.ResumeRecording","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::ResumeRecording'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::ResumeRecording'::__l5::<lambda_1>,void>
                  ::Call;
    local_40 = this;
    local_38 = param_1;
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar10);
    return;
  }
  pTVar11 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
  pFVar13 = (FMixerSubmix *)0x0;
  pFVar3 = (FMixerSubmix *)(pTVar11->WeakReferenceCount).ReferenceController;
  pFVar12 = pFVar13;
  pFVar14 = pFVar3;
  if (pFVar3 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar14 = pFVar13;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      pFVar14 = pFVar3;
      aVar2 = aVar8;
    } while (!bVar7);
    pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar12 = (FMixerSubmix *)0x0;
    if (pFVar14 != (FMixerSubmix *)0x0) {
      pFVar12 = pTVar11->Object;
      pTVar11->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar12 == (FMixerSubmix *)0x0) {
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
    pFVar12 = *(FMixerSubmix **)pFVar5;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        this_00 = pFVar13;
        if (aVar2 == (atomic<int>)0x0) goto LAB_14651eab9;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar7);
    }
    this_00 = pFVar12;
    if (pFVar3 == (FMixerSubmix *)0x0) {
      this_00 = pFVar13;
    }
    pFVar13 = pFVar3;
    if (this_00 == (FMixerSubmix *)0x0) {
LAB_14651eab9:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MainSubmixPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0xa75,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMixerSubmix::ResumeRecordingOutput(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&pFVar3->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  else {
    FMixerSubmix::ResumeRecordingOutput(pFVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  return;
}

// SendSubmixesAlivePing @ 14651ed20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::SendSubmixesAlivePing(FMixerDevice *this)

{
  int iVar1;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar2;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar3;
  undefined1 local_res10 [8];
  FMixerDevice *local_res18 [2];
  code *local_48 [2];
  undefined **local_38;
  FMixerDevice *local_30;
  FMixerDevice **local_28;
  undefined8 local_20;
  
  if (-1 < AudioChannel->Enabled) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::SendSubmixesAlivePing'::`5'::<lambda_2>,1,0>
                ::_vftable_;
    local_28 = local_res18;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_2>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
                  ::Call;
    local_20 = 0;
    local_res18[0] = this;
    local_30 = this;
    FSubmixMap::Iterate(&this->Submixes,
                        (TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
                         *)local_48);
    iVar1 = (this->RequiredSubmixInstances).ArrayNum;
    pTVar2 = (TSharedPtr<Audio::FMixerSubmix,1> *)
             (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pTVar3 = pTVar2 + iVar1;
    while( true ) {
      if ((this->RequiredSubmixInstances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pTVar2 == pTVar3) break;
      if (pTVar2->Object != (FMixerSubmix *)0x0) {
        `Audio::FMixerDevice::SendSubmixesAlivePing'::__l5::<lambda_1>::operator()
                  (local_res18,pTVar2);
      }
      pTVar2 = pTVar2 + 1;
    }
  }
  return;
}

// SetSubmixAutoDisable @ 146521410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SetSubmixAutoDisable(FMixerDevice *this,USoundSubmix *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  atomic<int> aVar5;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  undefined1 local_58;
  undefined7 uStack_57;
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar4 = IsInAudioThread();
  if (!bVar4) {
    local_48[0] = (code *)0x0;
    local_68.Object = (FMixerSubmix *)this;
    local_68.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
    local_58 = param_2;
    local_20 = FMemory::Malloc(0x20,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_20[1] = local_68.Object;
    local_20[2] = local_68.WeakReferenceCount.ReferenceController;
    local_20[3] = CONCAT71(uStack_57,local_58);
    if (local_20 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
    return;
  }
  pTVar6 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
  pFVar8 = (FMixerSubmix *)0x0;
  pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar4 = aVar2 == aVar5;
      if (bVar4) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar4);
    pTVar3 = (pTVar6->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      pFVar8 = pTVar6->Object;
      pTVar6->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar8 != (FMixerSubmix *)0x0) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x20,8);
    local_20[1] = pFVar8;
    local_20[2] = pTVar7;
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisable'::`8'::<lambda_2>,0,1>
                 ::_vftable_;
    *(bool *)(local_20 + 3) = param_2;
    if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixAutoDisable'::__l8::<lambda_2>,void>
                    ::Call;
    }
    AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// SetSubmixAutoDisableTime @ 1465215e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SetSubmixAutoDisableTime
          (FMixerDevice *this,USoundSubmix *param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  atomic<int> aVar5;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  undefined8 local_58;
  undefined4 uStack_54;
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar4 = IsInAudioThread();
  if (bVar4) {
    pTVar6 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
    pFVar8 = (FMixerSubmix *)0x0;
    pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar4 = aVar2 == aVar5;
        if (bVar4) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar4);
      pTVar3 = (pTVar6->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
      (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        pFVar8 = pTVar6->Object;
        pTVar6->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar8 != (FMixerSubmix *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      *(float *)(local_20 + 3) = param_2;
      local_20[1] = pFVar8;
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::`8'::<lambda_2>,0,1>
                   ::_vftable_;
      local_20[2] = pTVar7;
      if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l8::<lambda_2>,void>
                      ::Call;
      }
      AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  else {
    local_48[0] = (code *)0x0;
    local_68.Object = (FMixerSubmix *)this;
    local_68.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
    local_20 = FMemory::Malloc(0x20,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_20[1] = local_68.Object;
    local_20[2] = local_68.WeakReferenceCount.ReferenceController;
    local_20[3] = CONCAT44(uStack_54,param_2);
    if (local_20 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixAutoDisableTime'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
  }
  return;
}

// SetSubmixDryLevel @ 1465217d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SetSubmixDryLevel(FMixerDevice *this,USoundSubmix *param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  atomic<int> aVar5;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  undefined8 local_58;
  undefined4 uStack_54;
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar4 = IsInAudioThread();
  if (bVar4) {
    pTVar6 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
    pFVar8 = (FMixerSubmix *)0x0;
    pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar4 = aVar2 == aVar5;
        if (bVar4) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar4);
      pTVar3 = (pTVar6->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
      (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        pFVar8 = pTVar6->Object;
        pTVar6->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar8 != (FMixerSubmix *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      *(float *)(local_20 + 3) = param_2;
      local_20[1] = pFVar8;
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::`8'::<lambda_2>,0,1>
                   ::_vftable_;
      local_20[2] = pTVar7;
      if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixDryLevel'::__l8::<lambda_2>,void>
                      ::Call;
      }
      AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  else {
    local_48[0] = (code *)0x0;
    local_68.Object = (FMixerSubmix *)this;
    local_68.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
    local_20 = FMemory::Malloc(0x20,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixDryLevel'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_20[1] = local_68.Object;
    local_20[2] = local_68.WeakReferenceCount.ReferenceController;
    local_20[3] = CONCAT44(uStack_54,param_2);
    if (local_20 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixDryLevel'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
  }
  return;
}

// SetSubmixEffectChainOverride @ 1465219c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SetSubmixEffectChainOverride
          (FMixerDevice *this,USoundSubmix *param_1,
          TArray<TSharedPtr<FSoundEffectSubmix,1>,TSizedDefaultAllocator<32>_> *param_2,
          float param_3)

{
  atomic<int> *paVar1;
  ForAnyElementType *pFVar2;
  atomic<int> aVar3;
  int iVar4;
  FMixerSubmix *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FSoundEffectSubmix,1> *pTVar7;
  ForAnyElementType FVar8;
  atomic<int> aVar9;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar10;
  undefined8 *puVar11;
  FMixerSubmix *pFVar12;
  FMixerSubmix *pFVar13;
  bool bVar14;
  TWeakPtr<Audio::FMixerSubmix,1> local_a8;
  FMixerSubmix *local_98;
  FMixerSubmix *local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  float local_78;
  code *local_68 [5];
  undefined8 *local_40;
  
  pTVar10 = GetSubmixInstance(this,&local_a8,(USoundSubmixBase *)param_1);
  pFVar5 = (FMixerSubmix *)(pTVar10->WeakReferenceCount).ReferenceController;
  pFVar12 = pFVar5;
  pFVar13 = (FMixerSubmix *)0x0;
  if (pFVar5 != (FMixerSubmix *)0x0) {
    aVar3 = *(atomic<int> *)&pFVar5->field_0x8;
    do {
      pFVar12 = (FMixerSubmix *)0x0;
      if (aVar3 == (atomic<int>)0x0) break;
      LOCK();
      aVar9 = *(atomic<int> *)&pFVar5->field_0x8;
      bVar14 = aVar3 == aVar9;
      if (bVar14) {
        *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      pFVar12 = pFVar5;
      aVar3 = aVar9;
    } while (!bVar14);
    pTVar6 = (pTVar10->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar3 == (atomic<int>)0x1) && (pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
    (pTVar10->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar13 = (FMixerSubmix *)0x0;
    if (pFVar12 != (FMixerSubmix *)0x0) {
      pFVar13 = pTVar10->Object;
      pTVar10->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_a8.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar13 != (FMixerSubmix *)0x0) {
    if (pFVar12 != (FMixerSubmix *)0x0) {
      LOCK();
      *(int *)&pFVar12->field_0x8 = *(int *)&pFVar12->field_0x8 + 1;
      UNLOCK();
    }
    iVar4 = param_2->ArrayNum;
    pTVar7 = (TSharedPtr<FSoundEffectSubmix,1> *)(param_2->AllocatorInstance).Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = iVar4;
    if (iVar4 == 0) {
      local_7c = 0;
      local_98 = pFVar13;
      local_90 = pFVar12;
    }
    else {
      local_98 = pFVar13;
      local_90 = pFVar12;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,0,&local_88,iVar4,&local_7c);
      ConstructItems<TSharedPtr<FSoundEffectSubmix,1>,TSharedPtr<FSoundEffectSubmix,1>,int>
                (local_88.Data,pTVar7,iVar4);
    }
    local_68[0] = (code *)0x0;
    local_78 = param_3;
    puVar11 = FMemory::Malloc(0x30,8);
    iVar4 = local_80;
    FVar8.Data = local_88.Data;
    *puVar11 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::`5'::<lambda_1>,0,1>
                ::_vftable_;
    pFVar2 = (ForAnyElementType *)(puVar11 + 3);
    puVar11[1] = local_98;
    puVar11[2] = local_90;
    local_90 = (FMixerSubmix *)0x0;
    local_98 = (FMixerSubmix *)0x0;
    pFVar2->Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar11 + 4) = local_80;
    local_40 = puVar11;
    if (local_80 == 0) {
      *(int *)((longlong)puVar11 + 0x24) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_80,0,pFVar2,local_80,(int *)((longlong)puVar11 + 0x24));
      ConstructItems<TSharedPtr<FSoundEffectSubmix,1>,TSharedPtr<FSoundEffectSubmix,1>,int>
                (pFVar2->Data,(TSharedPtr<FSoundEffectSubmix,1> *)FVar8.Data,iVar4);
    }
    *(float *)(puVar11 + 5) = local_78;
    if (puVar11 + 1 != (undefined8 *)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixEffectChainOverride'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_68);
    DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
              ((TSharedPtr<FSoundEffectSubmix,1> *)local_88.Data,local_80);
    if ((TSharedPtr<FSoundEffectSubmix,1> *)local_88.Data != (TSharedPtr<FSoundEffectSubmix,1> *)0x0
       ) {
      FMemory::Free(local_88.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return;
}

// SetSubmixModulationBaseLevels @ 146521f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SetSubmixModulationBaseLevels
          (FMixerDevice *this,USoundSubmix *param_1,float param_2,float param_3,float param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined4 uVar3;
  FMixerSubmix *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  atomic<int> aVar8;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar9;
  FMixerSubmix *pFVar10;
  FMixerSubmix *pFVar11;
  FWeakObjectPtr local_88;
  TWeakPtr<Audio::FMixerSubmix,1> local_80;
  code *local_68 [5];
  undefined8 *local_40;
  
  bVar7 = IsInAudioThread();
  if (bVar7) {
    pTVar9 = GetSubmixInstance(this,&local_80,(USoundSubmixBase *)param_1);
    pFVar4 = (FMixerSubmix *)(pTVar9->WeakReferenceCount).ReferenceController;
    pFVar10 = pFVar4;
    pFVar11 = (FMixerSubmix *)0x0;
    if (pFVar4 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
      do {
        pFVar10 = (FMixerSubmix *)0x0;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar4->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        pFVar10 = pFVar4;
        aVar2 = aVar8;
      } while (!bVar7);
      pTVar5 = (pTVar9->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar5 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
      (pTVar9->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = (FMixerSubmix *)0x0;
      if (pFVar10 != (FMixerSubmix *)0x0) {
        pFVar11 = pTVar9->Object;
        pTVar9->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_80.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_80.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar11 != (FMixerSubmix *)0x0) {
      if (pFVar10 != (FMixerSubmix *)0x0) {
        LOCK();
        *(int *)&pFVar10->field_0x8 = *(int *)&pFVar10->field_0x8 + 1;
        UNLOCK();
      }
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x28,8);
      *(float *)(local_40 + 3) = param_2;
      *local_40 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::`8'::<lambda_2>,0,1>
                   ::_vftable_;
      *(float *)((longlong)local_40 + 0x1c) = param_3;
      *(float *)(local_40 + 4) = param_4;
      local_40[1] = pFVar11;
      local_40[2] = pFVar10;
      if (local_40 + 1 != (undefined8 *)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l8::<lambda_2>,void>
                      ::Call;
      }
      AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundSubmix *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_88.ObjectIndex = 0;
    local_88.ObjectSerialNumber = 0;
    local_80.Object = (FMixerSubmix *)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundSubmix *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_80);
    FVar6 = local_88;
    uVar3 = *(undefined4 *)&this->field_0xa0;
    local_68[0] = (code *)0x0;
    local_40 = FMemory::Malloc(0x20,8);
    *local_40 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    *(undefined4 *)(local_40 + 1) = uVar3;
    *(FWeakObjectPtr *)((longlong)local_40 + 0xc) = FVar6;
    *(float *)((longlong)local_40 + 0x14) = param_2;
    *(float *)(local_40 + 3) = param_3;
    *(float *)((longlong)local_40 + 0x1c) = param_4;
    if (local_40 + 1 != (undefined8 *)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixModulationBaseLevels'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_68,(TStatId)0x154f11430);
  }
  return;
}

// SetSubmixOutputVolume @ 146522170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SetSubmixOutputVolume(FMixerDevice *this,USoundSubmix *param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  atomic<int> aVar5;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  undefined8 local_58;
  undefined4 uStack_54;
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar4 = IsInAudioThread();
  if (bVar4) {
    pTVar6 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
    pFVar8 = (FMixerSubmix *)0x0;
    pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar4 = aVar2 == aVar5;
        if (bVar4) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar4);
      pTVar3 = (pTVar6->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
      (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        pFVar8 = pTVar6->Object;
        pTVar6->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar8 != (FMixerSubmix *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      *(float *)(local_20 + 3) = param_2;
      local_20[1] = pFVar8;
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::`8'::<lambda_2>,0,1>
                   ::_vftable_;
      local_20[2] = pTVar7;
      if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l8::<lambda_2>,void>
                      ::Call;
      }
      AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  else {
    local_48[0] = (code *)0x0;
    local_68.Object = (FMixerSubmix *)this;
    local_68.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
    local_20 = FMemory::Malloc(0x20,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixOutputVolume'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_20[1] = local_68.Object;
    local_20[2] = local_68.WeakReferenceCount.ReferenceController;
    local_20[3] = CONCAT44(uStack_54,param_2);
    if (local_20 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixOutputVolume'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
  }
  return;
}

// SetSubmixWetDryLevel @ 146522600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SetSubmixWetDryLevel
          (FMixerDevice *this,USoundSubmix *param_1,float param_2,float param_3,float param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  atomic<int> aVar5;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_88;
  undefined4 uStack_6c;
  code *local_68 [5];
  undefined8 *local_40;
  
  bVar4 = IsInAudioThread();
  if (bVar4) {
    pTVar6 = GetSubmixInstance(this,&local_88,(USoundSubmixBase *)param_1);
    pFVar8 = (FMixerSubmix *)0x0;
    pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar4 = aVar2 == aVar5;
        if (bVar4) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar4);
      pTVar3 = (pTVar6->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
      (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        pFVar8 = pTVar6->Object;
        pTVar6->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar8 != (FMixerSubmix *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x28,8);
      *(float *)(local_40 + 3) = param_2;
      *local_40 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::`8'::<lambda_2>,0,1>
                   ::_vftable_;
      *(float *)((longlong)local_40 + 0x1c) = param_3;
      *(float *)(local_40 + 4) = param_4;
      local_40[1] = pFVar8;
      local_40[2] = pTVar7;
      if (local_40 + 1 != (undefined8 *)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l8::<lambda_2>,void>
                      ::Call;
      }
      AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  else {
    local_68[0] = (code *)0x0;
    local_88.Object = (FMixerSubmix *)this;
    local_88.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
    local_40 = FMemory::Malloc(0x28,8);
    *local_40 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetDryLevel'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_40[1] = local_88.Object;
    local_40[2] = local_88.WeakReferenceCount.ReferenceController;
    *(float *)(local_40 + 3) = param_2;
    *(float *)((longlong)local_40 + 0x1c) = param_3;
    *(float *)(local_40 + 4) = param_4;
    *(undefined4 *)((longlong)local_40 + 0x24) = uStack_6c;
    if (local_40 + 1 != (undefined8 *)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixWetDryLevel'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_68,(TStatId)0x154f11430);
  }
  return;
}

// SetSubmixWetLevel @ 146522840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SetSubmixWetLevel(FMixerDevice *this,USoundSubmix *param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  atomic<int> aVar5;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMixerSubmix *pFVar8;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  undefined8 local_58;
  undefined4 uStack_54;
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar4 = IsInAudioThread();
  if (bVar4) {
    pTVar6 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
    pFVar8 = (FMixerSubmix *)0x0;
    pTVar7 = (pTVar6->WeakReferenceCount).ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar4 = aVar2 == aVar5;
        if (bVar4) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar4);
      pTVar3 = (pTVar6->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
      (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        pFVar8 = pTVar6->Object;
        pTVar6->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_68.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar8 != (FMixerSubmix *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x20,8);
      *(float *)(local_20 + 3) = param_2;
      local_20[1] = pFVar8;
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::`8'::<lambda_2>,0,1>
                   ::_vftable_;
      local_20[2] = pTVar7;
      if (local_20 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixWetLevel'::__l8::<lambda_2>,void>
                      ::Call;
      }
      AudioRenderThreadCommand(this,(TFunction<void___cdecl(void)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  else {
    local_48[0] = (code *)0x0;
    local_68.Object = (FMixerSubmix *)this;
    local_68.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
    local_20 = FMemory::Malloc(0x20,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::SetSubmixWetLevel'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_20[1] = local_68.Object;
    local_20[2] = local_68.WeakReferenceCount.ReferenceController;
    local_20[3] = CONCAT44(uStack_54,param_2);
    if (local_20 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::SetSubmixWetLevel'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
  }
  return;
}

// SineOscTest @ 1465231b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::SineOscTest
          (FMixerDevice *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  
  iVar3 = (this->PlatformInfo).NumChannels;
  uVar11 = (this->OpenStreamParams).NumFrames;
  uVar13 = (ulonglong)uVar11;
  if ((iVar3 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0xc74,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar6 = iVar3 + -1;
  if (DebugGeneratorChannelCVar < iVar3 + -1) {
    iVar6 = DebugGeneratorChannelCVar;
  }
  iVar12 = 0;
  if (0 < iVar6) {
    iVar12 = iVar6;
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FSineOsc::FSineOsc(&SineOscLeft,(this->PlatformInfo).SampleRate,DebugGeneratorFreqCVar,
                       DebugGeneratorAmpCVar,0.0);
    atexit(`Audio::FMixerDevice::SineOscTest'::__l2::_dynamic_atexit_destructor_for__SineOscLeft__);
    _Init_thread_footer(&::_TSS0);
  }
  fVar14 = __real_3f000000;
  if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FSineOsc::FSineOsc(&SineOscRight,(this->PlatformInfo).SampleRate,DebugGeneratorFreqCVar * fVar14
                       ,DebugGeneratorAmpCVar,0.0);
    atexit(`Audio::FMixerDevice::SineOscTest'::__l2::_dynamic_atexit_destructor_for__SineOscRight__)
    ;
    _Init_thread_footer(&::_TSS1);
  }
  FSineOsc::SetFrequency(&SineOscLeft,DebugGeneratorFreqCVar);
  FSineOsc::SetScale(&SineOscLeft,DebugGeneratorAmpCVar);
  if (DebugGeneratorEnableCVar == 0) {
    FSineOsc::SetFrequency(&SineOscRight,DebugGeneratorFreqCVar * fVar14);
    FSineOsc::SetScale(&SineOscRight,DebugGeneratorAmpCVar);
  }
  if (0 < (int)uVar11) {
    uVar11 = 1;
    lVar10 = 1;
    do {
      fVar14 = FSineOsc::ProcessAudio(&SineOscLeft);
      uVar9 = iVar12 + -1 + uVar11;
      uVar8 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar2 = lVar10 * 4;
      lVar1 = lVar2 + (longlong)iVar12 * 4;
      *(float *)(pFVar4 + lVar1 + -4) = fVar14 + *(float *)(pFVar4 + lVar1 + -4);
      if (((DebugGeneratorEnableCVar == 0) && (1 < iVar3)) && (DebugGeneratorChannelCVar == 0)) {
        fVar14 = FSineOsc::ProcessAudio(&SineOscRight);
        uVar8 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        *(float *)(pFVar4 + lVar2) = fVar14 + *(float *)(pFVar4 + lVar2);
      }
      uVar11 = uVar11 + iVar3;
      lVar10 = lVar10 + iVar3;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}

// StartEnvelopeFollowing @ 146524010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::StartEnvelopeFollowing(FMixerDevice *this,USoundSubmix *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar12;
  FMixerSubmix *pFVar13;
  FMixerSubmix *pFVar14;
  USoundSubmix *local_res10;
  FName local_res18;
  FName local_res20;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  FMixerDevice *local_40;
  USoundSubmix *local_38;
  undefined8 local_30;
  
  local_res10 = param_1;
  bVar7 = IsInAudioThread();
  if (!bVar7) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_StartEnvelopeFollowing ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StartEnvelopeFollowing(USoundSubmix_*)_::_5_::FStat_STAT_StartEnvelopeFollowing>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res18,"STAT_StartEnvelopeFollowing");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartEnvelopeFollowing,*pFVar9,
                   L"FAudioThreadTask.StartEnvelopeFollowing","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_StartEnvelopeFollowing;
    if (StatPtr_STAT_StartEnvelopeFollowing ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StartEnvelopeFollowing(USoundSubmix_*)_::_5_::FStat_STAT_StartEnvelopeFollowing>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_StartEnvelopeFollowing");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartEnvelopeFollowing,*pFVar9,
                      L"FAudioThreadTask.StartEnvelopeFollowing","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::StartEnvelopeFollowing'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_38 = local_res10;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::StartEnvelopeFollowing'::__l5::<lambda_1>,void>
                  ::Call;
    local_40 = this;
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar10);
    return;
  }
  pTVar11 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)local_res10);
  pFVar13 = (FMixerSubmix *)0x0;
  pFVar3 = (FMixerSubmix *)(pTVar11->WeakReferenceCount).ReferenceController;
  pFVar12 = pFVar13;
  pFVar14 = pFVar3;
  if (pFVar3 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar14 = pFVar13;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      pFVar14 = pFVar3;
      aVar2 = aVar8;
    } while (!bVar7);
    pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar12 = (FMixerSubmix *)0x0;
    if (pFVar14 != (FMixerSubmix *)0x0) {
      pFVar12 = pTVar11->Object;
      pTVar11->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar12 == (FMixerSubmix *)0x0) {
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
    pFVar12 = *(FMixerSubmix **)pFVar5;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        this_00 = pFVar13;
        if (aVar2 == (atomic<int>)0x0) goto LAB_146524275;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar7);
    }
    this_00 = pFVar12;
    if (pFVar3 == (FMixerSubmix *)0x0) {
      this_00 = pFVar13;
    }
    pFVar13 = pFVar3;
    if (this_00 == (FMixerSubmix *)0x0) {
LAB_146524275:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MainSubmixPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0xa93,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMixerSubmix::StartEnvelopeFollowing
              (this_00,local_res10->EnvelopeFollowerAttackTime,
               local_res10->EnvelopeFollowerReleaseTime);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&pFVar3->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  else {
    FMixerSubmix::StartEnvelopeFollowing
              (pFVar12,local_res10->EnvelopeFollowerAttackTime,
               local_res10->EnvelopeFollowerReleaseTime);
  }
  TArray<USoundSubmix_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USoundSubmix_*_const_&>
            (&this->DelegateBoundSubmixes,&local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  return;
}

// StartRecording @ 1465243e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::StartRecording(FMixerDevice *this,USoundSubmix *param_1,float param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar12;
  FMixerSubmix *pFVar13;
  FMixerSubmix *pFVar14;
  FName local_res20;
  FName local_88;
  TWeakPtr<Audio::FMixerSubmix,1> local_80;
  FMixerDevice *local_70;
  USoundSubmix *pUStack_68;
  undefined8 local_60;
  undefined4 uStack_5c;
  code *local_58 [5];
  undefined8 *local_30;
  
  bVar7 = IsInAudioThread();
  if (bVar7) {
    pTVar11 = GetSubmixInstance(this,&local_80,(USoundSubmixBase *)param_1);
    pFVar13 = (FMixerSubmix *)0x0;
    pFVar3 = (FMixerSubmix *)(pTVar11->WeakReferenceCount).ReferenceController;
    pFVar12 = pFVar13;
    pFVar14 = pFVar3;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        pFVar14 = pFVar13;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        pFVar14 = pFVar3;
        aVar2 = aVar8;
      } while (!bVar7);
      pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
      (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar12 = (FMixerSubmix *)0x0;
      if (pFVar14 != (FMixerSubmix *)0x0) {
        pFVar12 = pTVar11->Object;
        pTVar11->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_80.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_80.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar12 == (FMixerSubmix *)0x0) {
      if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
      pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
      pFVar12 = *(FMixerSubmix **)pFVar5;
      if (pFVar3 != (FMixerSubmix *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar3->field_0xc =
             (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
        UNLOCK();
        aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
        do {
          this_00 = pFVar13;
          if (aVar2 == (atomic<int>)0x0) goto LAB_146524659;
          LOCK();
          aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
          bVar7 = aVar2 == aVar8;
          if (bVar7) {
            *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
            aVar8 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar8;
        } while (!bVar7);
      }
      this_00 = pFVar12;
      if (pFVar3 == (FMixerSubmix *)0x0) {
        this_00 = pFVar13;
      }
      pFVar13 = pFVar3;
      if (this_00 == (FMixerSubmix *)0x0) {
LAB_146524659:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MainSubmixPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0xa28,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FMixerSubmix::OnStartRecordingOutput(this_00,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
      if (pFVar3 != (FMixerSubmix *)0x0) {
        LOCK();
        paVar1 = (atomic<int> *)&pFVar3->field_0xc;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
        }
      }
    }
    else {
      FMixerSubmix::OnStartRecordingOutput(pFVar12,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_StartRecording ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StartRecording(USoundSubmix_*,float)_::_5_::FStat_STAT_StartRecording>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res20,"STAT_StartRecording");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartRecording,*pFVar9,
                   L"FAudioThreadTask.PauseRecording","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_StartRecording;
    if (StatPtr_STAT_StartRecording ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StartRecording(USoundSubmix_*,float)_::_5_::FStat_STAT_StartRecording>
         )0x0) {
      pFVar9 = ::FName::FName(&local_88,"STAT_StartRecording");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartRecording,*pFVar9,
                      L"FAudioThreadTask.PauseRecording","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_58[0] = (code *)0x0;
    local_70 = this;
    pUStack_68 = param_1;
    local_30 = FMemory::Malloc(0x20,8);
    *local_30 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::StartRecording'::`5'::<lambda_1>,1,1>::
                 _vftable_;
    local_30[1] = local_70;
    local_30[2] = pUStack_68;
    local_30[3] = CONCAT44(uStack_5c,param_2);
    if (local_30 + 1 != (undefined8 *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::StartRecording'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar10);
  }
  return;
}

// StartSpectrumAnalysis @ 146524810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::StartSpectrumAnalysis
          (FMixerDevice *this,USoundSubmix *param_1,FSoundSpectrumAnalyzerSettings *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSoundSpectrumAnalyzerSettings FVar3;
  FMixerSubmix *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  USoundSubmix *pUVar8;
  bool bVar9;
  atomic<int> aVar10;
  FName *pFVar11;
  TStatId TVar12;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar13;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar14;
  FMixerSubmix *pFVar15;
  FMixerSubmix *pFVar16;
  USoundSubmix *local_res10;
  FName local_res20;
  FName local_78;
  TWeakPtr<Audio::FMixerSubmix,1> local_70;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_res10 = param_1;
  bVar9 = IsInAudioThread();
  if (bVar9) {
    pTVar13 = GetSubmixInstance(this,&local_70,(USoundSubmixBase *)local_res10);
    pFVar15 = (FMixerSubmix *)0x0;
    pFVar4 = (FMixerSubmix *)(pTVar13->WeakReferenceCount).ReferenceController;
    pFVar14 = pFVar15;
    pFVar16 = pFVar4;
    if (pFVar4 != (FMixerSubmix *)0x0) {
      aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
      do {
        pFVar16 = pFVar15;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar10 = *(atomic<int> *)&pFVar4->field_0x8;
        bVar9 = aVar2 == aVar10;
        if (bVar9) {
          *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        pFVar16 = pFVar4;
        aVar2 = aVar10;
      } while (!bVar9);
      pTVar5 = (pTVar13->WeakReferenceCount).ReferenceController;
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar2 == (atomic<int>)0x1) && (pTVar5 != (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
      (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar14 = (FMixerSubmix *)0x0;
      if (pFVar16 != (FMixerSubmix *)0x0) {
        pFVar14 = pTVar13->Object;
        pTVar13->Object = (FMixerSubmix *)0x0;
      }
    }
    if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_70.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pFVar14 == (FMixerSubmix *)0x0) {
      if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
      pFVar4 = *(FMixerSubmix **)(pFVar6 + 8);
      pFVar14 = *(FMixerSubmix **)pFVar6;
      if (pFVar4 != (FMixerSubmix *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar4->field_0xc =
             (atomic<int>)((int)*(atomic<int> *)&pFVar4->field_0xc + 1);
        UNLOCK();
        aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
        do {
          this_00 = pFVar15;
          if (aVar2 == (atomic<int>)0x0) goto LAB_146524a79;
          LOCK();
          aVar10 = *(atomic<int> *)&pFVar4->field_0x8;
          bVar9 = aVar2 == aVar10;
          if (bVar9) {
            *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
            aVar10 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar10;
        } while (!bVar9);
      }
      this_00 = pFVar14;
      if (pFVar4 == (FMixerSubmix *)0x0) {
        this_00 = pFVar15;
      }
      pFVar15 = pFVar4;
      if (this_00 == (FMixerSubmix *)0x0) {
LAB_146524a79:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MainSubmixPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                           ,0xb0e,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FMixerSubmix::StartSpectrumAnalysis(this_00,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
      if (pFVar4 != (FMixerSubmix *)0x0) {
        LOCK();
        paVar1 = (atomic<int> *)&pFVar4->field_0xc;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
        }
      }
    }
    else {
      FMixerSubmix::StartSpectrumAnalysis(pFVar14,param_2);
    }
    TArray<USoundSubmix_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USoundSubmix_*_const_&>
              (&this->DelegateBoundSubmixes,&local_res10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar16);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_StartSpectrumAnalysis ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StartSpectrumAnalysis(USoundSubmix_*,FSoundSpectrumAnalyzerSettings_const_&)_::_5_::FStat_STAT_StartSpectrumAnalysis>
           )0x0) {
        pFVar11 = ::FName::FName(&local_res20,"STAT_StartSpectrumAnalysis");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartSpectrumAnalysis,*pFVar11,
                   L"FAudioThreadTask.StartSpectrumAnalysis","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar12.StatIdPtr = (TStatIdData *)StatPtr_STAT_StartSpectrumAnalysis;
    if (StatPtr_STAT_StartSpectrumAnalysis ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StartSpectrumAnalysis(USoundSubmix_*,FSoundSpectrumAnalyzerSettings_const_&)_::_5_::FStat_STAT_StartSpectrumAnalysis>
         )0x0) {
      pFVar11 = ::FName::FName(&local_78,"STAT_StartSpectrumAnalysis");
      TVar12.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartSpectrumAnalysis,*pFVar11,
                      L"FAudioThreadTask.StartSpectrumAnalysis","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    pUVar8 = local_res10;
    FVar3 = *param_2;
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x20,8);
    *local_30 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerDevice::StartSpectrumAnalysis'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    local_30[1] = this;
    local_30[2] = pUVar8;
    *(FSoundSpectrumAnalyzerSettings *)(local_30 + 3) = FVar3;
    if (local_30 + 1 != (undefined8 *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerDevice::StartSpectrumAnalysis'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar12);
  }
  return;
}

// StartSubmixEnvelopeFollowerFromCVar @ 146524bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar(FMixerDevice *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar5 = IsInAudioThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107722>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x1f6,"IsInAudioThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_20[1] = this;
  local_20[2] = param_1;
  *(undefined4 *)(local_20 + 3) = 10;
  *(undefined4 *)((longlong)local_20 + 0x1c) = 500;
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::StartSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
                  ::Call;
  }
  FSubmixMap::Iterate(&this->Submixes,
                      (TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
                       *)local_48);
  iVar1 = (this->RequiredSubmixInstances).ArrayNum;
  pFVar7 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  do {
    if ((this->RequiredSubmixInstances).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    lVar3 = *(longlong *)pFVar7;
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar3 + 0x18);
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar6 == iVar2) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x10),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar5 = iVar6 == 0;
          goto LAB_146524ce4;
        }
      }
      else {
        bVar5 = iVar6 + iVar2 == 1;
LAB_146524ce4:
        if (!bVar5) goto LAB_146524d2a;
      }
      if (*(longlong *)pFVar7 == 0) {
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
      FMixerSubmix::StartEnvelopeFollowing(*(FMixerSubmix **)pFVar7,10,500);
    }
LAB_146524d2a:
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// StopEnvelopeFollowing @ 146525760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::StopEnvelopeFollowing(FMixerDevice *this,USoundSubmix *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar12;
  FMixerSubmix *pFVar13;
  FMixerSubmix *pFVar14;
  USoundSubmix *local_res10;
  FName local_res18;
  FName local_res20;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  FMixerDevice *local_40;
  USoundSubmix *local_38;
  undefined8 local_30;
  
  local_res10 = param_1;
  bVar7 = IsInAudioThread();
  if (!bVar7) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_StopEnvelopeFollowing ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StopEnvelopeFollowing(USoundSubmix_*)_::_5_::FStat_STAT_StopEnvelopeFollowing>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res18,"STAT_StopEnvelopeFollowing");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StopEnvelopeFollowing,*pFVar9,
                   L"FAudioThreadTask.StopEnvelopeFollowing","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_StopEnvelopeFollowing;
    if (StatPtr_STAT_StopEnvelopeFollowing ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StopEnvelopeFollowing(USoundSubmix_*)_::_5_::FStat_STAT_StopEnvelopeFollowing>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_StopEnvelopeFollowing");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StopEnvelopeFollowing,*pFVar9,
                      L"FAudioThreadTask.StopEnvelopeFollowing","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::StopEnvelopeFollowing'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::StopEnvelopeFollowing'::__l5::<lambda_1>,void>
                  ::Call;
    local_40 = this;
    local_38 = param_1;
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar10);
    return;
  }
  pTVar11 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
  pFVar13 = (FMixerSubmix *)0x0;
  pFVar3 = (FMixerSubmix *)(pTVar11->WeakReferenceCount).ReferenceController;
  pFVar12 = pFVar13;
  pFVar14 = pFVar3;
  if (pFVar3 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar14 = pFVar13;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      pFVar14 = pFVar3;
      aVar2 = aVar8;
    } while (!bVar7);
    pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar12 = (FMixerSubmix *)0x0;
    if (pFVar14 != (FMixerSubmix *)0x0) {
      pFVar12 = pTVar11->Object;
      pTVar11->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar12 == (FMixerSubmix *)0x0) {
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
    pFVar12 = *(FMixerSubmix **)pFVar5;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        this_00 = pFVar13;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1465259a6;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar7);
    }
    this_00 = pFVar12;
    if (pFVar3 == (FMixerSubmix *)0x0) {
      this_00 = pFVar13;
    }
    pFVar13 = pFVar3;
    if (this_00 == (FMixerSubmix *)0x0) {
LAB_1465259a6:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MainSubmixPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0xab3,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMixerSubmix::StopEnvelopeFollowing(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&pFVar3->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  else {
    FMixerSubmix::StopEnvelopeFollowing(pFVar12);
  }
  TArray<USoundSubmix_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            (&this->DelegateBoundSubmixes,&local_res10,Default);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  return;
}

// StopRecording @ 1465260b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FMixerDevice::StopRecording
          (FMixerDevice *this,USoundSubmix *param_1,float *param_2,float *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar8;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar9;
  FMixerSubmix *pFVar10;
  FMixerSubmix *pFVar11;
  FMixerSubmix *pFVar12;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar13;
  bool bVar14;
  TWeakPtr<Audio::FMixerSubmix,1> local_38;
  
  pTVar8 = GetSubmixInstance(this,&local_38,(USoundSubmixBase *)param_1);
  pFVar13 = (FMixerSubmix *)0x0;
  pFVar3 = (FMixerSubmix *)(pTVar8->WeakReferenceCount).ReferenceController;
  pFVar10 = pFVar3;
  pFVar11 = pFVar13;
  if (pFVar3 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar10 = pFVar13;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar7 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar14 = aVar2 == aVar7;
      if (bVar14) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      pFVar10 = pFVar3;
      aVar2 = aVar7;
    } while (!bVar14);
    pTVar4 = (pTVar8->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = (FMixerSubmix *)0x0;
    if (pFVar10 != (FMixerSubmix *)0x0) {
      pFVar11 = pTVar8->Object;
      pTVar8->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar11 != (FMixerSubmix *)0x0) {
    pTVar9 = FMixerSubmix::OnStopRecordingOutput(pFVar11,param_2,param_3);
    goto LAB_146526281;
  }
  if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar6)();
    return pTVar9;
  }
  pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
  pFVar11 = *(FMixerSubmix **)pFVar5;
  pFVar12 = pFVar3;
  this_00 = pFVar13;
  if (pFVar3 == (FMixerSubmix *)0x0) {
LAB_14652621c:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("MainSubmixPtr.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                        ,0xa39,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar6)();
      return pTVar9;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar6)();
      return pTVar9;
    }
  }
  else {
    LOCK();
    *(atomic<int> *)&pFVar3->field_0xc = (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
    UNLOCK();
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar12 = pFVar13;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar7 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar14 = aVar2 == aVar7;
      if (bVar14) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      pFVar12 = pFVar3;
      aVar2 = aVar7;
    } while (!bVar14);
    LOCK();
    paVar1 = (atomic<int> *)&pFVar3->field_0xc;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
    }
    this_00 = pFVar11;
    if (pFVar12 == (FMixerSubmix *)0x0) {
      this_00 = pFVar13;
    }
    if (this_00 == (FMixerSubmix *)0x0) goto LAB_14652621c;
  }
  pTVar9 = FMixerSubmix::OnStopRecordingOutput(this_00,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
LAB_146526281:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return pTVar9;
}

// StopSpectrumAnalysis @ 1465267a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::StopSpectrumAnalysis(FMixerDevice *this,USoundSubmix *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMixerSubmix *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  TStatId TVar10;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar11;
  FMixerSubmix *this_00;
  FMixerSubmix *pFVar12;
  FMixerSubmix *pFVar13;
  FMixerSubmix *pFVar14;
  USoundSubmix *local_res10;
  FName local_res18;
  FName local_res20;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  FMixerDevice *local_40;
  USoundSubmix *local_38;
  undefined8 local_30;
  
  local_res10 = param_1;
  bVar7 = IsInAudioThread();
  if (!bVar7) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_StopSpectrumAnalysis ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StopSpectrumAnalysis(USoundSubmix_*)_::_5_::FStat_STAT_StopSpectrumAnalysis>
           )0x0) {
        pFVar9 = ::FName::FName(&local_res18,"STAT_StopSpectrumAnalysis");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StopSpectrumAnalysis,*pFVar9,
                   L"FAudioThreadTask.StopSpectrumAnalysis","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_StopSpectrumAnalysis;
    if (StatPtr_STAT_StopSpectrumAnalysis ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::StopSpectrumAnalysis(USoundSubmix_*)_::_5_::FStat_STAT_StopSpectrumAnalysis>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_StopSpectrumAnalysis");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StopSpectrumAnalysis,*pFVar9,
                      L"FAudioThreadTask.StopSpectrumAnalysis","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerDevice::StopSpectrumAnalysis'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::StopSpectrumAnalysis'::__l5::<lambda_1>,void>
                  ::Call;
    local_40 = this;
    local_38 = param_1;
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar10);
    return;
  }
  pTVar11 = GetSubmixInstance(this,&local_68,(USoundSubmixBase *)param_1);
  pFVar13 = (FMixerSubmix *)0x0;
  pFVar3 = (FMixerSubmix *)(pTVar11->WeakReferenceCount).ReferenceController;
  pFVar12 = pFVar13;
  pFVar14 = pFVar3;
  if (pFVar3 != (FMixerSubmix *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar14 = pFVar13;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar7 = aVar2 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      pFVar14 = pFVar3;
      aVar2 = aVar8;
    } while (!bVar7);
    pTVar4 = (pTVar11->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar12 = (FMixerSubmix *)0x0;
    if (pFVar14 != (FMixerSubmix *)0x0) {
      pFVar12 = pTVar11->Object;
      pTVar11->Object = (FMixerSubmix *)0x0;
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (pFVar12 == (FMixerSubmix *)0x0) {
    if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
    pFVar3 = *(FMixerSubmix **)(pFVar5 + 8);
    pFVar12 = *(FMixerSubmix **)pFVar5;
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar3->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar3->field_0xc + 1);
      UNLOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      do {
        this_00 = pFVar13;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1465269e6;
        LOCK();
        aVar8 = *(atomic<int> *)&pFVar3->field_0x8;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar7);
    }
    this_00 = pFVar12;
    if (pFVar3 == (FMixerSubmix *)0x0) {
      this_00 = pFVar13;
    }
    pFVar13 = pFVar3;
    if (this_00 == (FMixerSubmix *)0x0) {
LAB_1465269e6:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MainSubmixPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0xb2d,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMixerSubmix::StopSpectrumAnalysis(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
    if (pFVar3 != (FMixerSubmix *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&pFVar3->field_0xc;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  else {
    FMixerSubmix::StopSpectrumAnalysis(pFVar12);
  }
  TArray<USoundSubmix_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
            (&this->DelegateBoundSubmixes,&local_res10,Default);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  return;
}

// StopSubmixEnvelopeFollowerFromCVar @ 146526b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar(FMixerDevice *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  code *local_48 [2];
  undefined **local_38;
  FMixerDevice *local_30;
  FString *local_28;
  undefined8 local_20;
  
  bVar5 = IsInAudioThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1614237125757107695>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                       ,0x211,"IsInAudioThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerDevice::StopSubmixEnvelopeFollowerFromCVar'::__l2::<lambda_1>,void,TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&>
                ::Call;
  local_30 = this;
  local_28 = param_1;
  FSubmixMap::Iterate(&this->Submixes,
                      (TUniqueFunction<void___cdecl(TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>_const_&)>
                       *)local_48);
  iVar1 = (this->RequiredSubmixInstances).ArrayNum;
  pFVar7 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  do {
    if ((this->RequiredSubmixInstances).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    lVar3 = *(longlong *)pFVar7;
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar3 + 0x18);
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar6 == iVar2) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x10),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar5 = iVar6 == 0;
          goto LAB_146526c21;
        }
      }
      else {
        bVar5 = iVar6 + iVar2 == 1;
LAB_146526c21:
        if (!bVar5) goto LAB_146526c5c;
      }
      if (*(longlong *)pFVar7 == 0) {
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
      FMixerSubmix::StopEnvelopeFollowing(*(FMixerSubmix **)pFVar7);
    }
LAB_146526c5c:
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// SuspendContext @ 146527830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::SuspendContext(FMixerDevice *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014652783a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->AudioMixerPlatform->_padding_ + 0x108))();
  return;
}

// TeardownHardware @ 146527ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::TeardownHardware(FMixerDevice *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar2;
  int iVar3;
  TSharedPtr<Audio::FMixerSubmix,1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  UClass *pUVar9;
  uint *puVar10;
  uint *puVar11;
  longlong lVar12;
  uint local_res8 [2];
  TObjectIterator<USoundSubmix> local_28;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1614237125757107321>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                         ,0x387,"IsInGameThread()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->field_0x5c1 & 4) != 0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->StartSubmixEnvelopeFollowerCVar,1);
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->StopSubmixEnvelopeFollowerCVar,1);
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar9 = Z_Construct_UClass_USoundSubmix_NoRegister();
    GetObjectsOfClass(pUVar9,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while ((TObjectIterator<USoundSubmix>::Advance(&local_28), -1 < local_28.Index &&
           (local_28.Index < local_28.ObjectArray.ArrayNum))) {
      pcVar5 = *(code **)(*(longlong *)this + 0x80);
      uVar8 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar8 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (*pcVar5)(this);
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
    uVar8 = *(uint *)&this->field_0xa0;
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               &FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs);
    if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._8_4_ !=
        FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._52_4_) {
      lVar12 = 0x154bfa788;
      if (FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues._64_8_ != 0)
      {
        lVar12 = FSynchronizedProceduralDecodeHandle::ProceduralRenderingSynchronizationQueues.
                 _64_8_;
      }
      uVar2 = *(uint *)(lVar12 + (ulonglong)
                                 (FSynchronizedProceduralDecodeHandle::
                                  ProceduralRenderingSynchronizationQueues._72_4_ - 1 & uVar8) * 4);
      while (uVar2 != 0xffffffff) {
        puVar11 = (uint *)((longlong)(int)uVar2 * 0x20 +
                          FSynchronizedProceduralDecodeHandle::
                          ProceduralRenderingSynchronizationQueues._0_8_);
        if (*puVar11 == uVar8) {
          puVar10 = puVar11 + 2;
          if (puVar11 == (uint *)0x0) {
            puVar10 = (uint *)0x0;
          }
          if (puVar10 != (uint *)0x0) {
            local_res8[0] = uVar8;
            TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FAsyncTask<Audio::FAsyncDecodeWorker>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&FSynchronizedProceduralDecodeHandle::
                           ProceduralRenderingSynchronizationQueues,uVar8,local_res8);
          }
          break;
        }
        uVar2 = puVar11[6];
      }
    }
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)
               &FSynchronizedProceduralDecodeHandle::SynchronizationQuequesLockCs);
  }
  if (this->AudioMixerPlatform != (IAudioMixerPlatformInterface *)0x0) {
    FMixerSourceManager::Update((this->SourceManager).Ptr,false);
    (**(code **)(this->AudioMixerPlatform->_padding_ + 0x10))();
    (**(code **)(this->AudioMixerPlatform->_padding_ + 0xa8))();
    (**(code **)(this->AudioMixerPlatform->_padding_ + 0x98))();
    (**(code **)(this->AudioMixerPlatform->_padding_ + 0x50))();
  }
  piVar1 = &(this->RequiredSubmixInstances).ArrayMax;
  pTVar4 = (TSharedPtr<Audio::FMixerSubmix,1> *)
           (this->RequiredSubmixInstances).AllocatorInstance.Data;
  iVar3 = (this->RequiredSubmixInstances).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>(pTVar4,iVar3);
    (this->RequiredSubmixInstances).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->RequiredSubmixInstances).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<Audio::FMixerSubmix,1>,int>(pTVar4,iVar3);
    (this->RequiredSubmixInstances).ArrayNum = 0;
  }
  if (DisableSubmixMutationLockCVar == 0) {
    lpCriticalSection = &(this->Submixes).MutationLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
             *)&this->Submixes);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
             *)&this->Submixes);
  }
  return;
}

// UnloadSoundSubmix @ 146528ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::UnloadSoundSubmix(FMixerDevice *this,USoundSubmixBase *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  atomic<int> aVar11;
  UClass *pUVar12;
  TObjectPtr<USoundSubmixBase> TVar13;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar14;
  FMixerSubmix **ppFVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_> *this_00;
  FMixerSubmix *pFVar18;
  FScriptContainerElement *pFVar19;
  FMixerSubmix *pFVar20;
  FMixerSubmix *pFVar21;
  bool bVar22;
  bool bVar23;
  uint local_res18 [2];
  uint local_res20 [2];
  TSharedPtr<Audio::FMixerSubmix,1> local_108;
  FScriptContainerElement *local_f8;
  FMixerSubmix *local_f0;
  TReferenceControllerBase<1> *local_e8;
  FMixerSubmix *local_e0;
  TReferenceControllerBase<1> *local_d8;
  FMixerSubmix *local_d0;
  FSharedReferencer<1> FStack_c8;
  FMixerSubmix *local_c0;
  TWeakPtr<Audio::FMixerSubmix,1> local_b8;
  undefined8 local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  TWeakPtr<Audio::FMixerSubmix,1> local_88;
  TWeakPtr<Audio::FMixerSubmix,1> local_78;
  TWeakPtr<Audio::FMixerSubmix,1> local_68;
  TWeakPtr<Audio::FMixerSubmix,1> local_58;
  
  local_res18[0] = 0;
  bVar10 = IsInAudioThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                          ,0x8bd,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->RequiredSubmixInstances).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar19 = (this->RequiredSubmixInstances).AllocatorInstance.Data;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
  pFVar20 = *(FMixerSubmix **)pFVar19;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_d0 = (FMixerSubmix *)0x0;
  FStack_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c0 = pFVar20;
  if (param_1 != (USoundSubmixBase *)0x0) {
    pUVar12 = Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister();
    iVar3 = (int)pUVar12->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar12->_padding_)) {
      TVar13 = USoundSubmixWithParentBase::GetParent
                         ((USoundSubmixWithParentBase *)param_1,(uint)local_res20);
      if (*(longlong *)TVar13.field0_0x0 == 0) {
        bVar23 = false;
        bVar7 = false;
        bVar10 = true;
        local_f0 = (FMixerSubmix *)0x0;
        pFVar21 = local_f0;
        local_e8 = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = pTVar4->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_e8 = (TReferenceControllerBase<1> *)0x0;
              pFVar21 = local_f0;
              break;
            }
            LOCK();
            aVar11 = pTVar4->SharedReferenceCount;
            bVar22 = aVar2 == aVar11;
            if (bVar22) {
              pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar11 = aVar2;
            }
            UNLOCK();
            pFVar21 = pFVar20;
            aVar2 = aVar11;
          } while (!bVar22);
        }
        local_f0 = pFVar21;
        ppFVar15 = &local_f0;
        local_d0 = local_f0;
      }
      else {
        TVar13 = USoundSubmixWithParentBase::GetParent
                           ((USoundSubmixWithParentBase *)param_1,(uint)&local_f8);
        pTVar14 = GetSubmixInstance(this,&local_78,*(USoundSubmixBase **)TVar13.field0_0x0);
        bVar23 = true;
        bVar7 = true;
        bVar10 = false;
        local_e0 = (FMixerSubmix *)0x0;
        local_d8 = (pTVar14->WeakReferenceCount).ReferenceController;
        pFVar20 = (FMixerSubmix *)0x0;
        if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = local_d8->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_d8 = (TReferenceControllerBase<1> *)0x0;
              break;
            }
            LOCK();
            aVar11 = local_d8->SharedReferenceCount;
            bVar22 = aVar2 == aVar11;
            if (bVar22) {
              local_d8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar11 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar11;
          } while (!bVar22);
          pTVar8 = local_d8;
          pTVar5 = (pTVar14->WeakReferenceCount).ReferenceController;
          LOCK();
          paVar1 = &pTVar5->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar2 == (atomic<int>)0x1) && (pTVar5 != (TReferenceControllerBase<1> *)0x0)) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
          (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar20 = (FMixerSubmix *)0x0;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            pFVar20 = pTVar14->Object;
            pTVar14->Object = (FMixerSubmix *)0x0;
            local_e0 = pFVar20;
          }
        }
        ppFVar15 = &local_e0;
        local_d0 = pFVar20;
      }
      *ppFVar15 = (FMixerSubmix *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_c8,(FSharedReferencer<1> *)(ppFVar15 + 1));
      if (bVar10) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8);
      }
      if (bVar7) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8);
      }
      if ((bVar23) &&
         (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar2 == (atomic<int>)0x1) &&
           (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0))
        {
          (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_78.WeakReferenceCount.ReferenceController,1);
        }
      }
      pFVar20 = local_d0;
      if (local_d0 != (FMixerSubmix *)0x0) {
        pTVar14 = GetSubmixInstance(this,&local_58,param_1);
        FMixerSubmix::RemoveChildSubmix(pFVar20,pTVar14);
      }
    }
  }
  FVar9.ReferenceController = FStack_c8.ReferenceController;
  bVar7 = false;
  bVar10 = false;
  if (param_2) {
    local_res20[0] = (param_1->ChildSubmixes).ArrayNum;
    uVar16 = (ulonglong)(int)local_res20[0];
    pFVar19 = (param_1->ChildSubmixes).AllocatorInstance.Data;
    local_f8 = pFVar19 + uVar16 * 8;
    while( true ) {
      if ((param_1->ChildSubmixes).ArrayNum != (int)uVar16) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TCheckedPointerIterator<TObjectPtr<USoundSubmixBase>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar19 == local_f8) break;
      pTVar14 = GetSubmixInstance(this,&local_68,*(USoundSubmixBase **)pFVar19);
      pFVar20 = (FMixerSubmix *)(pTVar14->WeakReferenceCount).ReferenceController;
      pFVar18 = pFVar20;
      pFVar21 = (FMixerSubmix *)0x0;
      if (pFVar20 != (FMixerSubmix *)0x0) {
        aVar2 = *(atomic<int> *)&pFVar20->field_0x8;
        do {
          pFVar18 = (FMixerSubmix *)0x0;
          if (aVar2 == (atomic<int>)0x0) break;
          LOCK();
          aVar11 = *(atomic<int> *)&pFVar20->field_0x8;
          bVar23 = aVar2 == aVar11;
          if (bVar23) {
            *(atomic<int> *)&pFVar20->field_0x8 = (atomic<int>)((int)aVar2 + 1);
            aVar11 = aVar2;
          }
          UNLOCK();
          pFVar18 = pFVar20;
          aVar2 = aVar11;
        } while (!bVar23);
        pTVar5 = (pTVar14->WeakReferenceCount).ReferenceController;
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar2 == (atomic<int>)0x1) && (pTVar5 != (TReferenceControllerBase<1> *)0x0)) {
          (**(code **)(pTVar5->_padding_ + 8))();
        }
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar21 = (FMixerSubmix *)0x0;
        if (pFVar18 != (FMixerSubmix *)0x0) {
          pFVar21 = pTVar14->Object;
          pTVar14->Object = (FMixerSubmix *)0x0;
        }
      }
      if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if ((aVar2 == (atomic<int>)0x1) &&
           (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0))
        {
          (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))();
        }
      }
      if (pFVar21 != (FMixerSubmix *)0x0) {
        if (local_d0 == (FMixerSubmix *)0x0) {
          bVar10 = true;
          local_a0 = pTVar4;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
            UNLOCK();
          }
          puVar17 = &local_a8;
          local_b8.Object = local_c0;
        }
        else {
          bVar7 = true;
          local_90 = FVar9.ReferenceController;
          if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar9.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)((int)(FVar9.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          puVar17 = &local_98;
          local_b8.Object = local_d0;
        }
        *puVar17 = 0;
        local_b8.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar17[1];
        puVar17[1] = 0;
        FMixerSubmix::SetParentSubmix(pFVar21,&local_b8);
        if ((bVar10) && (bVar10 = false, local_a0 != (TReferenceControllerBase<1> *)0x0)) {
          LOCK();
          paVar1 = &local_a0->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(local_a0->_padding_ + 8))(local_a0,1);
          }
        }
        if ((bVar7) && (bVar7 = false, local_90 != (TReferenceControllerBase<1> *)0x0)) {
          LOCK();
          paVar1 = &local_90->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(local_90->_padding_ + 8))(local_90,1);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar18);
      uVar16 = (ulonglong)local_res20[0];
      pFVar19 = pFVar19 + 8;
    }
  }
  GetSubmixInstance(this,&local_88,param_1);
  local_108.Object = (FMixerSubmix *)0x0;
  local_108.SharedReferenceCount.ReferenceController =
       local_88.WeakReferenceCount.ReferenceController;
  if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_88.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146529138;
      }
      LOCK();
      aVar11 = (local_88.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar11;
      if (bVar10) {
        (local_88.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar11 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar11;
    } while (!bVar10);
    if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_108.Object = local_88.Object;
    }
LAB_146529138:
    if (local_108.Object != (FMixerSubmix *)0x0) {
      bVar10 = FMixerSubmix::IsDefaultEndpointSubmix(local_108.Object);
      if (bVar10) {
        if (&this->EndpointSubmixesMutationLock == (FWindowsRecursiveMutex *)0x0) {
LAB_146529237:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&this->EndpointSubmixesMutationLock);
        this_00 = &this->DefaultEndpointSubmixes;
      }
      else {
        if ((local_108.Object == (FMixerSubmix *)0x0) ||
           (bVar10 = FMixerSubmix::IsExternalEndpointSubmix(local_108.Object), !bVar10))
        goto LAB_1465291c4;
        if (&this->EndpointSubmixesMutationLock == (FWindowsRecursiveMutex *)0x0)
        goto LAB_146529237;
        EnterCriticalSection((LPCRITICAL_SECTION)&this->EndpointSubmixesMutationLock);
        this_00 = &this->ExternalEndpointSubmixes;
      }
      TArray<TSharedPtr<Audio::FMixerSubmix,1>,TSizedDefaultAllocator<32>_>::Remove
                (this_00,&local_108);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->EndpointSubmixesMutationLock);
    }
  }
LAB_1465291c4:
  FSubmixMap::Remove(&this->Submixes,*(uint *)((longlong)&param_1->_padding_ + 4));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_88.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// UnregisterSoundSubmix @ 146529520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::UnregisterSoundSubmix
          (FMixerDevice *this,USoundSubmixBase *param_1,bool param_2)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  FName *pFVar3;
  TStatId TVar4;
  FWeakObjectPtr local_res10 [2];
  FName local_res20;
  undefined7 uStack_67;
  code *local_58 [5];
  undefined8 *local_30;
  
  if (((param_1 != (USoundSubmixBase *)0x0) && (this->bSubmixRegistrationDisabled == false)) &&
     (bVar2 = IsRequiredSubmixType(this,param_1), !bVar2)) {
    bVar2 = IsInAudioThread();
    if (!bVar2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (StatPtr_STAT_AudioUnregisterSoundSubmix ==
            (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::UnregisterSoundSubmix(USoundSubmixBase_const_*,bool)_::_8_::FStat_STAT_AudioUnregisterSoundSubmix>
             )0x0) {
          pFVar3 = ::FName::FName(&local_res20,"STAT_AudioUnregisterSoundSubmix");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUnregisterSoundSubmix,*pFVar3,
                     L"FAudioThreadTask.UnregisterSoundSubmix","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10[0].ObjectIndex = 0;
      local_res10[0].ObjectSerialNumber = 0;
      local_res20 = (FName)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
      TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioUnregisterSoundSubmix;
      if (StatPtr_STAT_AudioUnregisterSoundSubmix ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::UnregisterSoundSubmix(USoundSubmixBase_const_*,bool)_::_8_::FStat_STAT_AudioUnregisterSoundSubmix>
           )0x0) {
        pFVar3 = ::FName::FName(&local_res20,"STAT_AudioUnregisterSoundSubmix");
        TVar4.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUnregisterSoundSubmix,
                        *pFVar3,L"FAudioThreadTask.UnregisterSoundSubmix",
                        "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                        true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar1 = local_res10[0];
      local_58[0] = (code *)0x0;
      local_30 = FMemory::Malloc(0x20,8);
      *local_30 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSoundSubmix'::`8'::<lambda_1>,1,1>
                   ::_vftable_;
      local_30[1] = this;
      *(FWeakObjectPtr *)(local_30 + 2) = FVar1;
      local_30[3] = CONCAT71(uStack_67,param_2);
      if (local_30 + 1 != (undefined8 *)0x0) {
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerDevice::UnregisterSoundSubmix'::__l8::<lambda_1>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar4);
      return;
    }
    UnloadSoundSubmix(this,param_1,param_2);
  }
  return;
}

// UnregisterSubmixBufferListener @ 1465297c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::UnregisterSubmixBufferListener
          (FMixerDevice *this,ISubmixBufferListener *param_1,USoundSubmix *param_2)

{
  FName *pFVar1;
  FWeakObjectPtr local_res8;
  FName local_res10;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  code *local_48 [5];
  undefined8 *local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UnregisterSubmixBufferListener ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::UnregisterSubmixBufferListener(ISubmixBufferListener_*,USoundSubmix_*)_::_2_::FStat_STAT_UnregisterSubmixBufferListener>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"STAT_UnregisterSubmixBufferListener");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnregisterSubmixBufferListener,*pFVar1
                   ,L"FAudioThreadTask.UnregisterSubmixBufferListener",
                   "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FName)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  iStack_54 = local_res8.ObjectIndex;
  iStack_50 = local_res8.ObjectSerialNumber;
  local_58 = CONCAT31(local_58._1_3_,param_2 == (USoundSubmix *)0x0);
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_20[1] = this;
  local_20[2] = param_1;
  local_20[3] = CONCAT44(iStack_54,local_58);
  local_20[4] = CONCAT44(uStack_4c,iStack_50);
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FAudioThread::RunCommandOnAudioThread
            ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
  return;
}

// UnregisterSubmixBufferListener @ 1465299b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::UnregisterSubmixBufferListener
          (FMixerDevice *this,TSharedRef<ISubmixBufferListener,1> *param_1,USoundSubmix *param_2)

{
  ISubmixBufferListener *pIVar1;
  void *_Src;
  ForAnyElementType _Src_00;
  int iVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  longlong lVar5;
  FWeakObjectPtr local_res8;
  FName local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FMixerDevice *local_98;
  FWeakObjectPtr local_90;
  ISubmixBufferListener *local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  code *local_68 [5];
  undefined8 *local_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UnregisterSubmixBufferListener ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_Audio::FMixerDevice::UnregisterSubmixBufferListener(TSharedRef<ISubmixBufferListener,1>,USoundSubmix_&)_::_2_::FStat_STAT_UnregisterSubmixBufferListener>
           )0x0) {
        pFVar4 = ::FName::FName(&local_res10,"STAT_UnregisterSubmixBufferListener");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnregisterSubmixBufferListener,*pFVar4
                   ,L"FAudioThreadTask.UnregisterSubmixBufferListener",
                   "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FName)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pIVar1 = param_1->Object;
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)pIVar1 + 0x18))(pIVar1);
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = *(int *)(puVar3 + 1);
  lVar5 = (longlong)local_a0;
  _Src = (void *)*puVar3;
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,_Src,lVar5 * 2);
  }
  iVar2 = local_a0;
  _Src_00.Data = local_a8.Data;
  local_90 = local_res8;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = CONCAT44(local_78._4_4_,local_a0);
  local_98 = this;
  local_88 = pIVar1;
  if (local_a0 == 0) {
    local_78 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_80,local_a0,(int *)((longlong)&local_78 + 4));
    memcpy(local_80.Data,_Src_00.Data,(longlong)iVar2 * 2);
  }
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x30,8);
  *local_40 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_40[1] = local_98;
  *(FWeakObjectPtr *)(local_40 + 2) = local_90;
  local_40[4] = 0;
  local_40[3] = local_88;
  local_40[4] = local_80.Data;
  local_80.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_40 + 5) = (undefined4)local_78;
  *(undefined4 *)((longlong)local_40 + 0x2c) = local_78._4_4_;
  local_78 = 0;
  if (local_40 + 1 != (undefined8 *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::UnregisterSubmixBufferListener'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FAudioThread::RunCommandOnAudioThread
            ((TUniqueFunction<void___cdecl(void)> *)local_68,(TStatId)0x154f11430);
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnregisterSubmixEnvelopeFollowerCVars @ 146529c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::UnregisterSubmixEnvelopeFollowerCVars(FMixerDevice *this)

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
            (IConsoleManager::Singleton,this->StartSubmixEnvelopeFollowerCVar,1);
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
                    /* WARNING: Could not recover jumptable at 0x000146529d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
            (IConsoleManager::Singleton,this->StopSubmixEnvelopeFollowerCVar,1);
  return;
}

// UpdateAudioClock @ 14652ae50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::UpdateAudioClock(FMixerDevice *this)

{
  LARGE_INTEGER local_res8 [4];
  
  *(double *)&this->field_0x5c8 = this->AudioClockDelta + *(double *)&this->field_0x5c8;
  QueryPerformanceCounter(local_res8);
  (this->AudioClockTimingData).UpdateTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// UpdateDeviceDeltaTime @ 14652b810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::UpdateDeviceDeltaTime(FMixerDevice *this)

{
  float fVar1;
  
  fVar1 = FAudioDevice::GetGameDeltaTime((FAudioDevice *)this);
  *(float *)&this->field_0x5d4 = fVar1;
  return;
}

// UpdateGameThread @ 14652c540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::UpdateGameThread(FMixerDevice *this)

{
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AudioMixer,true);
  PumpGameThreadCommandQueue(this);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// UpdateHardware @ 14652c5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::UpdateHardware(FMixerDevice *this)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  float fVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  float fVar8;
  uint uVar9;
  UEngine *pUVar10;
  FWeakReferencer<1> FVar11;
  char cVar12;
  bool bVar13;
  EInternalObjectFlags EVar14;
  uint uVar15;
  atomic<int> aVar16;
  FAudioPlatformDeviceInfo *pFVar17;
  FMixerSubmix *pFVar18;
  UClass *pUVar19;
  USubsystem *pUVar20;
  TWeakPtr<Audio::FMixerSubmix,1> *pTVar21;
  undefined ***pppuVar22;
  longlong lVar23;
  FMixerSubmix *pFVar24;
  FScriptContainerElement *pFVar25;
  FMixerSubmix *pFVar26;
  FMixerSubmix *this_00;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [4];
  atomic<int> local_144;
  FLLMScope local_140 [2];
  TObjectIterator<USoundSubmix> local_138;
  FMemScope local_120;
  TWeakPtr<Audio::FMixerSubmix,1> local_118;
  TWeakPtr<Audio::FMixerSubmix,1> local_108;
  code *local_f8 [5];
  undefined8 *local_d0;
  undefined4 local_bc;
  void *local_b8 [2];
  void *local_a8;
  void *local_88;
  code *local_68 [2];
  undefined **local_58;
  FMixerSourceManager *local_50;
  int local_48;
  undefined4 local_44;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FLLMScope::FLLMScope(local_140,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_120,AudioMixer,true);
  FMixerSourceManager::Update((this->SourceManager).Ptr,false);
  (**(code **)(this->AudioMixerPlatform->_padding_ + 0x118))();
  cVar12 = (**(code **)(this->AudioMixerPlatform->_padding_ + 0x40))();
  pFVar26 = (FMixerSubmix *)0x0;
  if (cVar12 == '\0') goto LAB_14652c7df;
  pFVar17 = (FAudioPlatformDeviceInfo *)
            (**(code **)(this->AudioMixerPlatform->_padding_ + 200))
                      (this->AudioMixerPlatform,local_b8);
  FAudioPlatformDeviceInfo::operator=(&this->PlatformInfo,pFVar17);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8[0] != (void *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  InitializeChannelAzimuthMap(this,(this->PlatformInfo).NumChannels);
  local_50 = (this->SourceManager).Ptr;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48 = (this->PlatformInfo).NumChannels;
  local_44 = local_bc;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSourceManager::UpdateDeviceChannelCount'::__l2::<lambda_1>,void>
                ::Call;
  local_40 = (undefined ***)0x0;
  FMixerSourceManager::AudioMixerThreadCommand
            (local_50,(TFunction<void___cdecl(void)> *)local_68,"UpdateDeviceChannelCount()",false);
  if (local_68[0] != (code *)0x0) {
    pppuVar22 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar22 = local_40;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  LOCK();
  this->AudioPlatformThreadId = (atomic<int>)0xffffffff;
  UNLOCK();
  CheckAudioRenderingThread(this);
  local_144 = this->AudioPlatformThreadId;
  (**(code **)(*(longlong *)this + 0x58))(this,1);
  pUVar10 = GEngine;
  pFVar18 = (FMixerSubmix *)UAudioDeviceNotificationSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pFVar18 != (FMixerSubmix *)0x0) goto LAB_14652c73c;
LAB_14652c76a:
    pFVar18 = pFVar26;
  }
  else {
    if (pFVar18 == (FMixerSubmix *)0x0) goto LAB_14652c76a;
    UE::GC::MarkAsReachable((UObject *)pFVar18);
LAB_14652c73c:
    pUVar19 = UAudioDeviceNotificationSubsystem::StaticClass();
    if (pUVar19 == (UClass *)0x0) goto LAB_14652c76a;
    iVar5 = (int)pUVar19->_padding_;
    if ((*(int *)&(pFVar18->ParentSubmix).Object < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pFVar18->Id + (longlong)iVar5 * 8) !=
        &pUVar19->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar13) goto LAB_14652c76a;
  }
  pUVar20 = FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar10->EngineSubsystemCollection,
                       (UClass *)pFVar18);
  if (pUVar20 != (USubsystem *)0x0) {
    (**(code **)(pUVar20->_padding_ + 0x2c8))(pUVar20,&(this->PlatformInfo).DeviceId);
  }
  if ((1 < (byte)LogAudioMixer._0_1_) && (local_144 != this->AudioPlatformThreadId)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  (**(code **)(this->AudioMixerPlatform->_padding_ + 0x48))();
LAB_14652c7df:
  if ((this->field_0x5c1 & 4) != 0) {
    pFVar25 = (this->DelegateBoundSubmixes).AllocatorInstance.Data;
    iVar5 = (this->DelegateBoundSubmixes).ArrayNum;
    pFVar2 = pFVar25 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->DelegateBoundSubmixes).ArrayNum != iVar5) {
        local_148[0] = 0;
        `TCheckedPointerIterator<USoundSubmix_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_148);
      }
      uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar8 = __real_322bcc77;
      if (pFVar25 == pFVar2) break;
      if (*(USoundSubmixBase **)pFVar25 != (USoundSubmixBase *)0x0) {
        GetSubmixInstance(this,&local_118,*(USoundSubmixBase **)pFVar25);
        FVar11.ReferenceController = local_118.WeakReferenceCount.ReferenceController;
        pFVar18 = local_118.Object;
        if (local_118.Object != (FMixerSubmix *)0x0) {
          if (local_118.WeakReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
             ) goto LAB_14652c8e4;
          if (0 < (int)(local_118.WeakReferenceCount.ReferenceController)->SharedReferenceCount) {
            LOCK();
            (local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
            local_f8[0] = (code *)0x0;
            local_d0 = (undefined8 *)0x0;
            local_d0 = FMemory::Malloc(0x20,8);
            local_d0[1] = this;
            *local_d0 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`Audio::FMixerDevice::UpdateHardware'::`46'::<lambda_1>,1,1>
                         ::_vftable_;
            local_d0[2] = pFVar18;
            local_d0[3] = FVar11.ReferenceController;
            if (local_d0 != (undefined8 *)&DAT_fffffffffffffff8) {
              local_f8[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`Audio::FMixerDevice::UpdateHardware'::__l46::<lambda_1>,void>
                            ::Call;
            }
            FAudioThread::RunCommandOnGameThread
                      ((TUniqueFunction<void___cdecl(void)> *)local_f8,(TStatId)0x154f11430);
          }
        }
        if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(FVar11.ReferenceController)->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)((FVar11.ReferenceController)->_padding_ + 8))(FVar11.ReferenceController,1)
            ;
          }
        }
      }
LAB_14652c8e4:
      pFVar25 = pFVar25 + 8;
    }
    fVar4 = *(float *)&this->field_0x180;
    if (__real_322bcc77 <
        (float)((uint)(this->PreviousPrimaryVolume - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff
               )) {
      this->PreviousPrimaryVolume = fVar4;
      local_138.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ObjectArray.ArrayNum = 0;
      local_138.ObjectArray.ArrayMax = 0;
      local_138.Index = 0xffffffff;
      EVar14 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar19 = Z_Construct_UClass_USoundSubmix_NoRegister();
      GetObjectsOfClass(pUVar19,&local_138.ObjectArray,true,RF_ClassDefaultObject,
                        EVar14 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<USoundSubmix>::Advance(&local_138);
        lVar23 = (longlong)local_138.Index;
        if ((local_138.Index < 0) || (local_138.ObjectArray.ArrayNum <= local_138.Index)) break;
        uVar15 = 0;
        if (local_138.Index < local_138.ObjectArray.ArrayNum) {
          uVar15 = (uint)~local_138.Index >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if ((*(byte *)(*(longlong *)(local_138.ObjectArray.AllocatorInstance.Data + lVar23 * 8) +
                      0xf0) & 1) != 0) {
          lVar23 = (longlong)local_138.Index;
          uVar15 = 0;
          if (local_138.Index < local_138.ObjectArray.ArrayNum) {
            uVar15 = (uint)~local_138.Index >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar21 = GetSubmixInstance(this,&local_108,
                                      *(USoundSubmixBase **)
                                       (local_138.ObjectArray.AllocatorInstance.Data + lVar23 * 8));
          pFVar18 = (FMixerSubmix *)(pTVar21->WeakReferenceCount).ReferenceController;
          pFVar24 = pFVar18;
          this_00 = pFVar26;
          if (pFVar18 != (FMixerSubmix *)0x0) {
            aVar3 = *(atomic<int> *)&pFVar18->field_0x8;
            do {
              pFVar24 = pFVar26;
              if (aVar3 == (atomic<int>)0x0) break;
              LOCK();
              aVar16 = *(atomic<int> *)&pFVar18->field_0x8;
              bVar13 = aVar3 == aVar16;
              if (bVar13) {
                *(atomic<int> *)&pFVar18->field_0x8 = (atomic<int>)((int)aVar3 + 1);
                aVar16 = aVar3;
              }
              UNLOCK();
              pFVar24 = pFVar18;
              aVar3 = aVar16;
            } while (!bVar13);
            pTVar6 = (pTVar21->WeakReferenceCount).ReferenceController;
            LOCK();
            paVar1 = &pTVar6->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if ((aVar3 == (atomic<int>)0x1) && (pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
              (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            }
            (pTVar21->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pFVar24 != (FMixerSubmix *)0x0) {
              this_00 = pTVar21->Object;
              pTVar21->Object = (FMixerSubmix *)0x0;
            }
          }
          if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             ) {
            LOCK();
            paVar1 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_108.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (this_00 != (FMixerSubmix *)0x0) {
            FMixerSubmix::SetBackgroundMuted(this_00,(float)((uint)fVar4 & uVar9) <= fVar8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar24);
        }
      }
      if (local_138.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  FMemScope::~FMemScope(&local_120);
  FLLMScope::~FLLMScope(local_140);
  return;
}

// UpdateHardwareTiming @ 14652cb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::UpdateHardwareTiming(FMixerDevice *this)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  dVar1 = this->AudioClockDelta;
  QueryPerformanceCounter(local_res8);
  (this->AudioThreadTimingData).AudioThreadTime =
       (((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - (this->AudioThreadTimingData).StartTime) + dVar1;
  return;
}

// UpdateSourceEffectChain @ 14652da60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::UpdateSourceEffectChain
          (FMixerDevice *this,uint param_1,
          TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FSourceEffectChainEntry *pFVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint local_res10 [6];
  undefined8 local_78;
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  undefined1 local_60;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_res10[0] = param_1;
  if (*(int *)&(this->SourceEffectChainOverrides).field_0x8 !=
      *(int *)&(this->SourceEffectChainOverrides).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SourceEffectChainOverrides).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SourceEffectChainOverrides).field_0x38;
    }
    uVar5 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->SourceEffectChainOverrides).field_0x48 - 1U &
                               param_1) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar5 * 0x20 +
                         *(longlong *)&(this->SourceEffectChainOverrides).field_0x0);
        if (*puVar7 == param_1) {
          this_00 = (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)(puVar7 + 2);
          if (puVar7 == (uint *)0x0) {
            this_00 = (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (this_00 != (TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *)0x0) {
            TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>::operator=(this_00,param_2);
            goto LAB_14652daf5;
          }
          break;
        }
        uVar5 = puVar7[6];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_78 = local_res10;
  local_70.Data = (FScriptContainerElement *)param_2;
  TSet<TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->SourceEffectChainOverrides,
             (TPairInitializer<unsigned_int_const_&,TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_>_const_&>
              *)(local_res10 + 4),(bool *)&local_78);
LAB_14652daf5:
  local_78._0_4_ = *(undefined4 *)&this->field_0xa0;
  iVar2 = param_2->ArrayNum;
  pFVar3 = (FSourceEffectChainEntry *)(param_2->AllocatorInstance).Data;
  local_78._4_4_ = local_res10[0];
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = iVar2;
  if (iVar2 == 0) {
    local_64 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_70,iVar2,&local_64);
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>(local_70.Data,pFVar3,iVar2);
  }
  local_58[0] = (code *)0x0;
  local_60 = param_3;
  puVar6 = FMemory::Malloc(0x28,8);
  iVar2 = local_68;
  FVar4.Data = local_70.Data;
  *puVar6 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSourceEffectChain'::`2'::<lambda_1>,1,1>
             ::_vftable_;
  pFVar1 = (ForAnyElementType *)(puVar6 + 2);
  *(undefined4 *)(puVar6 + 1) = (undefined4)local_78;
  *(uint *)((longlong)puVar6 + 0xc) = local_78._4_4_;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar6 + 3) = local_68;
  local_30 = puVar6;
  if (local_68 == 0) {
    *(int *)((longlong)puVar6 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_68,0,pFVar1,local_68,(int *)((longlong)puVar6 + 0x1c));
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
              (pFVar1->Data,(FSourceEffectChainEntry *)FVar4.Data,iVar2);
  }
  *(undefined1 *)(puVar6 + 4) = local_60;
  if (puVar6 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerDevice::UpdateSourceEffectChain'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FAudioThread::RunCommandOnAudioThread
            ((TUniqueFunction<void___cdecl(void)> *)local_58,(TStatId)0x154f11430);
  if ((FSourceEffectChainEntry *)local_70.Data != (FSourceEffectChainEntry *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// UpdateSubmixModulationSettings @ 14652e060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::UpdateSubmixModulationSettings
          (FMixerDevice *this,USoundSubmix *param_1,
          TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
          *param_2,TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *param_3,
          TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
          *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  bool bVar4;
  atomic<int> aVar5;
  undefined8 *puVar6;
  FWeakReferencer<1> FVar7;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_198;
  TWeakPtr<Audio::FMixerSubmix,1> local_190;
  code *local_178 [5];
  undefined8 *local_150;
  undefined4 local_148;
  FWeakObjectPtr local_144;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_190.Object = (FMixerSubmix *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_190);
  bVar4 = IsInAudioThread();
  if (bVar4) {
    if (((this->field_0x5c0 & 0x20) != 0) && (*(longlong *)&this->field_0x120 != 0)) {
      GetSubmixInstance(this,&local_190,(USoundSubmixBase *)param_1);
      bVar4 = FWeakObjectPtr::IsValid(&local_198);
      if (bVar4) {
        FVar7.ReferenceController = local_190.WeakReferenceCount.ReferenceController;
        if (local_190.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          aVar2 = (local_190.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (aVar2 == (atomic<int>)0x0) goto LAB_14652e477;
            LOCK();
            aVar5 = (local_190.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar2 == aVar5;
            if (bVar4) {
              (local_190.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar4);
          FVar7.ReferenceController = local_190.WeakReferenceCount.ReferenceController;
          if (local_190.Object != (FMixerSubmix *)0x0) {
            FMixerSubmix::UpdateModulationSettings(local_190.Object,param_2,param_3,param_4);
          }
        }
LAB_14652e477:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
      }
      if (local_190.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_190.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_190.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_190.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
  }
  else {
    local_148 = *(undefined4 *)&this->field_0xa0;
    local_144 = local_198;
    local_138._0_8_ = (FScriptContainerElement *)0x0;
    local_138._8_8_ = 0;
    local_118 = (void *)0x0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_138,param_2);
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (ForElementType<FSetElementId>)0x0;
    local_a0 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_e8,param_3);
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_98,param_4);
    local_178[0] = (code *)0x0;
    puVar6 = FMemory::Malloc(0x108,8);
    *puVar6 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::`5'::<lambda_1>,1,1>
               ::_vftable_;
    *(undefined4 *)(puVar6 + 1) = local_148;
    *(FWeakObjectPtr *)((longlong)puVar6 + 0xc) = local_144;
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar6 + 3))->Elements = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 0x80;
    *(undefined4 *)(puVar6 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x4c) = 0;
    puVar6[0xb] = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    local_150 = puVar6;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar6 + 3),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_138);
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar6 + 0xd))->Elements = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    *(undefined4 *)(puVar6 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x94) = 0x80;
    *(undefined4 *)(puVar6 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x9c) = 0;
    puVar6[0x15] = 0;
    *(undefined4 *)(puVar6 + 0x16) = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar6 + 0xd),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_e8);
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar6 + 0x17))->Elements = 0;
    puVar6[0x18] = 0;
    puVar6[0x1b] = 0;
    *(undefined4 *)(puVar6 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xe4) = 0x80;
    *(undefined4 *)(puVar6 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0xec) = 0;
    puVar6[0x1f] = 0;
    *(undefined4 *)(puVar6 + 0x20) = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar6 + 0x17),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_98);
    if (puVar6 + 1 != (undefined8 *)0x0) {
      local_178[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`Audio::FMixerDevice::UpdateSubmixModulationSettings'::__l5::<lambda_1>,void>
                     ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_178,(TStatId)0x154f11430);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    iVar3 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    iVar3 = SUB84(local_e8._8_8_,4);
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
    }
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_c0 = 0;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    iVar3 = SUB84(local_138._8_8_,4);
    local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
    }
    local_108 = 0xffffffff;
    local_104 = 0;
    local_110 = 0;
    if (0x80 < local_10c) {
      local_10c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
    }
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
    if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_138._0_8_);
    }
  }
  return;
}

// UpdateSubmixProperties @ 14652e4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::UpdateSubmixProperties(FMixerDevice *this,USoundSubmixBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (USoundSubmixBase *)0x0) {
    Z_Construct_UClass_USoundSubmix_NoRegister();
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InSoundSubmix",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                     ,0x6e6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// UpdateSubmixesAlivePingTime @ 14652e700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerDevice::UpdateSubmixesAlivePingTime(FMixerDevice *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = __real_3ff0000000000000;
  dVar2 = this->AudioClockDelta + this->SubmixesAlivePingTimeSec;
  this->SubmixesAlivePingTimeSec = dVar2;
  if (dVar1 < dVar2) {
    SendSubmixesAlivePing(this);
    this->SubmixesAlivePingTimeSec = 0.0;
  }
  return;
}

// ValidateAPICall @ 14652eab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerDevice::ValidateAPICall(FMixerDevice *this,wchar_t *param_1,uint param_2)

{
  return false;
}

// WhiteNoiseTest @ 14652eac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerDevice::WhiteNoiseTest
          (FMixerDevice *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  float fVar13;
  
  uVar12 = (this->OpenStreamParams).NumFrames;
  uVar11 = (ulonglong)uVar12;
  uVar1 = (this->PlatformInfo).NumChannels;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FWhiteNoise::FWhiteNoise(&WhiteNoise);
    _Init_thread_footer(&::_TSS0);
  }
  fVar5 = __real_3f800000;
  if (0 < (int)uVar12) {
    uVar12 = 0;
    lVar10 = 0;
    do {
      if (0 < (int)uVar1) {
        uVar8 = (ulonglong)uVar1;
        lVar7 = lVar10;
        uVar9 = uVar12;
        do {
          WhiteNoise.RandomStream.Seed = WhiteNoise.RandomStream.Seed * 0xbb38435 + 0x3619636b;
          fVar13 = (float)(WhiteNoise.RandomStream.Seed >> 9 | 0x3f800000) - fVar5;
          uVar4 = 0;
          if ((int)uVar9 < param_1->ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          fVar13 = ((fVar13 + fVar13) - fVar5) * DebugGeneratorAmpCVar;
          if ((uVar4 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          uVar9 = uVar9 + 1;
          *(float *)(pFVar2 + lVar7 * 4) = fVar13 + *(float *)(pFVar2 + lVar7 * 4);
          lVar7 = lVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar12 = uVar12 + uVar1;
      lVar10 = lVar10 + (int)uVar1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}

// operator() @ 1504ecf30

bool __thiscall
`Audio::FMixerDevice::FindSubmixInstanceByObjectId'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1614237125757105922>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1614237125757105922>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

