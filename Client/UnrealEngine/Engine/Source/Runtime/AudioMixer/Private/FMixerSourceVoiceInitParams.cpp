// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// FMixerSourceVoiceInitParams @ 1464d9190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMixerSourceVoiceInitParams * __thiscall
Audio::FMixerSourceVoiceInitParams::FMixerSourceVoiceInitParams
          (FMixerSourceVoiceInitParams *this,FMixerSourceVoiceInitParams *param_1)

{
  TArray<Audio::FMixerSourceSubmixSend,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSourceEffectChainEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar4;
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  float fVar7;
  TReferenceControllerBase<1> *pTVar8;
  FMixerSourceSubmixSend *pFVar9;
  FInitAudioBusSend *pFVar10;
  FSourceEffectChainEntry *pFVar11;
  FQuartzGameThreadSubscriber *pFVar12;
  int *piVar13;
  
  (this->MixerSourceBuffer).Object = (param_1->MixerSourceBuffer).Object;
  pTVar8 = (param_1->MixerSourceBuffer).SharedReferenceCount.ReferenceController;
  (this->MixerSourceBuffer).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->SubmixSends;
  this->SourceListener = param_1->SourceListener;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar13 = &(this->SubmixSends).ArrayMax;
  iVar6 = (param_1->SubmixSends).ArrayNum;
  pFVar9 = (FMixerSourceSubmixSend *)(param_1->SubmixSends).AllocatorInstance.Data;
  (this->SubmixSends).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar13);
    ConstructItems<Audio::FMixerSourceSubmixSend,Audio::FMixerSourceSubmixSend,int>
              ((pTVar1->AllocatorInstance).Data,pFVar9,iVar6);
  }
  pTVar2 = this->AudioBusSends;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar13 = &this->AudioBusSends[0].ArrayMax;
  iVar6 = param_1->AudioBusSends[0].ArrayNum;
  pFVar10 = (FInitAudioBusSend *)param_1->AudioBusSends[0].AllocatorInstance.Data;
  this->AudioBusSends[0].ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar13);
    ConstructItems<Audio::FInitAudioBusSend,Audio::FInitAudioBusSend,int>
              ((pTVar2->AllocatorInstance).Data,pFVar10,iVar6);
  }
  this->AudioBusSends[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = param_1->AudioBusSends[1].ArrayNum;
  pFVar10 = (FInitAudioBusSend *)param_1->AudioBusSends[1].AllocatorInstance.Data;
  this->AudioBusSends[1].ArrayNum = iVar6;
  piVar13 = &this->AudioBusSends[1].ArrayMax;
  if (iVar6 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,0,&this->AudioBusSends[1].AllocatorInstance,iVar6,piVar13);
    ConstructItems<Audio::FInitAudioBusSend,Audio::FInitAudioBusSend,int>
              (this->AudioBusSends[1].AllocatorInstance.Data,pFVar10,iVar6);
  }
  this->AudioBusId = param_1->AudioBusId;
  this->AudioBusChannels = param_1->AudioBusChannels;
  ::FString::FString(&this->AudioBusName,&param_1->AudioBusName);
  pTVar3 = &this->SourceEffectChain;
  this->SourceBusDuration = param_1->SourceBusDuration;
  this->SourceEffectChainId = param_1->SourceEffectChainId;
  piVar13 = &(this->SourceEffectChain).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->SourceEffectChain).ArrayNum;
  pFVar11 = (FSourceEffectChainEntry *)(param_1->SourceEffectChain).AllocatorInstance.Data;
  (this->SourceEffectChain).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar13);
    ConstructItems<FSourceEffectChainEntry,FSourceEffectChainEntry,int>
              ((pTVar3->AllocatorInstance).Data,pFVar11,iVar6);
  }
  this->SourceEffectChainMaxSupportedChannels = param_1->SourceEffectChainMaxSupportedChannels;
  this->SourceVoice = param_1->SourceVoice;
  this->NumInputChannels = param_1->NumInputChannels;
  this->NumInputFrames = param_1->NumInputFrames;
  this->EnvelopeFollowerAttackTime = param_1->EnvelopeFollowerAttackTime;
  this->EnvelopeFollowerReleaseTime = param_1->EnvelopeFollowerReleaseTime;
  ::FString::FString(&this->DebugName,&param_1->DebugName);
  pTVar4 = &(this->ModulationSettings).VolumeModulationDestination.Modulators;
  this->SpatializationPluginSettings = param_1->SpatializationPluginSettings;
  this->OcclusionPluginSettings = param_1->OcclusionPluginSettings;
  this->ReverbPluginSettings = param_1->ReverbPluginSettings;
  this->SourceDataOverridePluginSettings = param_1->SourceDataOverridePluginSettings;
  fVar7 = (param_1->ModulationSettings).VolumeModulationDestination.Value;
  *(undefined8 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&pTVar4->Elements = 0;
  *(undefined8 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x20 = 0;
  (this->ModulationSettings).VolumeModulationDestination.Value = fVar7;
  *(undefined4 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->ModulationSettings).VolumeModulationDestination.Modulators.Elements.field_0x34 = 0;
  (this->ModulationSettings).VolumeModulationDestination.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ModulationSettings).VolumeModulationDestination.Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar4,&(param_1->ModulationSettings).VolumeModulationDestination.Modulators);
  fVar7 = (param_1->ModulationSettings).PitchModulationDestination.Value;
  pTVar4 = &(this->ModulationSettings).PitchModulationDestination.Modulators;
  *(undefined8 *)&pTVar4->Elements = 0;
  *(undefined8 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x20 = 0;
  (this->ModulationSettings).PitchModulationDestination.Value = fVar7;
  *(undefined4 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->ModulationSettings).PitchModulationDestination.Modulators.Elements.field_0x34 = 0;
  (this->ModulationSettings).PitchModulationDestination.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ModulationSettings).PitchModulationDestination.Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar4,&(param_1->ModulationSettings).PitchModulationDestination.Modulators);
  fVar7 = (param_1->ModulationSettings).HighpassModulationDestination.Value;
  pTVar4 = &(this->ModulationSettings).HighpassModulationDestination.Modulators;
  *(undefined8 *)&pTVar4->Elements = 0;
  *(undefined8 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x20 = 0;
  (this->ModulationSettings).HighpassModulationDestination.Value = fVar7;
  *(undefined4 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->ModulationSettings).HighpassModulationDestination.Modulators.Elements.field_0x34 = 0;
  (this->ModulationSettings).HighpassModulationDestination.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ModulationSettings).HighpassModulationDestination.Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar4,&(param_1->ModulationSettings).HighpassModulationDestination.Modulators);
  fVar7 = (param_1->ModulationSettings).LowpassModulationDestination.Value;
  pTVar4 = &(this->ModulationSettings).LowpassModulationDestination.Modulators;
  *(undefined8 *)&pTVar4->Elements = 0;
  *(undefined8 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x20 = 0;
  (this->ModulationSettings).LowpassModulationDestination.Value = fVar7;
  *(undefined4 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)
   &(this->ModulationSettings).LowpassModulationDestination.Modulators.Elements.field_0x34 = 0;
  (this->ModulationSettings).LowpassModulationDestination.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ModulationSettings).LowpassModulationDestination.Modulators.HashSize = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(pTVar4,&(param_1->ModulationSettings).LowpassModulationDestination.Modulators);
  (this->QuantizedRequestData).ClockName = (param_1->QuantizedRequestData).ClockName;
  (this->QuantizedRequestData).OtherClockName = (param_1->QuantizedRequestData).OtherClockName;
  (this->QuantizedRequestData).QuantizedCommandPtr.Object =
       (param_1->QuantizedRequestData).QuantizedCommandPtr.Object;
  pTVar8 = (param_1->QuantizedRequestData).QuantizedCommandPtr.SharedReferenceCount.
           ReferenceController;
  (this->QuantizedRequestData).QuantizedCommandPtr.SharedReferenceCount.ReferenceController = pTVar8
  ;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  FQuartzQuantizationBoundary::FQuartzQuantizationBoundary
            (&(this->QuantizedRequestData).QuantizationBoundary,
             &(param_1->QuantizedRequestData).QuantizationBoundary);
  pTVar5 = &(this->QuantizedRequestData).GameThreadSubscribers;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar13 = &(this->QuantizedRequestData).GameThreadSubscribers.ArrayMax;
  iVar6 = (param_1->QuantizedRequestData).GameThreadSubscribers.ArrayNum;
  pFVar12 = (FQuartzGameThreadSubscriber *)
            (param_1->QuantizedRequestData).GameThreadSubscribers.AllocatorInstance.Data;
  (this->QuantizedRequestData).GameThreadSubscribers.ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar13);
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              ((pTVar5->AllocatorInstance).Data,pFVar12,iVar6);
  }
  (this->QuantizedRequestData).GameThreadDelegateID =
       (param_1->QuantizedRequestData).GameThreadDelegateID;
  (this->SourceBufferListener).Object = (param_1->SourceBufferListener).Object;
  pTVar8 = (param_1->SourceBufferListener).SharedReferenceCount.ReferenceController;
  (this->SourceBufferListener).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->AudioLink).Object = (param_1->AudioLink).Object;
  pTVar8 = (param_1->AudioLink).SharedReferenceCount.ReferenceController;
  (this->AudioLink).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->AudioComponentUserID = param_1->AudioComponentUserID;
  this->AudioComponentID = param_1->AudioComponentID;
  this->bIs3D = param_1->bIs3D;
  this->bPlayEffectChainTails = param_1->bPlayEffectChainTails;
  this->bUseHRTFSpatialization = param_1->bUseHRTFSpatialization;
  this->bIsExternalSend = param_1->bIsExternalSend;
  this->bIsDebugMode = param_1->bIsDebugMode;
  this->bEnableBusSends = param_1->bEnableBusSends;
  this->bEnableBaseSubmix = param_1->bEnableBaseSubmix;
  this->bEnableSubmixSends = param_1->bEnableSubmixSends;
  this->bIsVorbis = param_1->bIsVorbis;
  this->bIsSoundfield = param_1->bIsSoundfield;
  this->bIsSeeking = param_1->bIsSeeking;
  this->bShouldSourceBufferListenerZeroBuffer = param_1->bShouldSourceBufferListenerZeroBuffer;
  this->PlayOrder = param_1->PlayOrder;
  this->ActiveSoundPlayOrder = param_1->ActiveSoundPlayOrder;
  return this;
}

// ~FMixerSourceVoiceInitParams @ 1464dcaa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(FMixerSourceVoiceInitParams *this)

{
  FScriptContainerElement *pFVar1;
  TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *pTVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioLink).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceBufferListener).SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             (this->QuantizedRequestData).GameThreadSubscribers.AllocatorInstance.Data,
             (this->QuantizedRequestData).GameThreadSubscribers.ArrayNum);
  pFVar1 = (this->QuantizedRequestData).GameThreadSubscribers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.
             AllocatorInstance.Data,
             (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  pFVar1 = (this->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers.AllocatorInstance
           .Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QuantizedRequestData).QuantizedCommandPtr.SharedReferenceCount.
             ReferenceController);
  FSoundModulationDefaultSettings::~FSoundModulationDefaultSettings(&this->ModulationSettings);
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceEffectChain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioBusName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar4 = (TArray<Audio::FInitAudioBusSend,TSizedDefaultAllocator<32>_> *)&this->AudioBusId;
  lVar3 = 2;
  do {
    pTVar2 = pTVar4 + -1;
    pTVar4 = pTVar4 + -1;
    lVar3 = lVar3 + -1;
    DestructItems<Audio::FInitAudioBusSend,int>
              ((FInitAudioBusSend *)(pTVar4->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar3 != 0);
  DestructItems<Audio::FMixerSourceSubmixSend,int>
            ((FMixerSourceSubmixSend *)(this->SubmixSends).AllocatorInstance.Data,
             (this->SubmixSends).ArrayNum);
  pFVar1 = (this->SubmixSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MixerSourceBuffer).SharedReferenceCount.ReferenceController);
  return;
}

