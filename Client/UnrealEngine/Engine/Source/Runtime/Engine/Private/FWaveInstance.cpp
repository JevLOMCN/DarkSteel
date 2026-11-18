// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// FWaveInstance @ 1475a5e60

FWaveInstance * __thiscall FWaveInstance::FWaveInstance(FWaveInstance *this,FWaveInstance *param_1)

{
  float fVar1;
  USoundWave *pUVar2;
  USoundClass *pUVar3;
  USoundSubmixBase *pUVar4;
  USoundEffectSourcePresetChain *pUVar5;
  double dVar6;
  uint uVar7;
  
  pUVar2 = (param_1->WaveData).field0_0x0.DebugPtr;
  (this->WaveData).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->SoundClass).field0_0x0.DebugPtr;
  (this->SoundClass).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USoundClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = param_1->SoundSubmix;
  (this->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SoundSubmix = pUVar4;
  (this->SoundSubmixSends).AllocatorInstance.Data =
       (param_1->SoundSubmixSends).AllocatorInstance.Data;
  (param_1->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundSubmixSends).ArrayNum = (param_1->SoundSubmixSends).ArrayNum;
  (this->SoundSubmixSends).ArrayMax = (param_1->SoundSubmixSends).ArrayMax;
  (param_1->SoundSubmixSends).ArrayNum = 0;
  (param_1->SoundSubmixSends).ArrayMax = 0;
  this->BusSends[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[0].AllocatorInstance.Data = param_1->BusSends[0].AllocatorInstance.Data;
  param_1->BusSends[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[0].ArrayNum = param_1->BusSends[0].ArrayNum;
  this->BusSends[0].ArrayMax = param_1->BusSends[0].ArrayMax;
  param_1->BusSends[0].ArrayNum = 0;
  param_1->BusSends[0].ArrayMax = 0;
  this->BusSends[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[1].AllocatorInstance.Data = param_1->BusSends[1].AllocatorInstance.Data;
  param_1->BusSends[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[1].ArrayNum = param_1->BusSends[1].ArrayNum;
  this->BusSends[1].ArrayMax = param_1->BusSends[1].ArrayMax;
  param_1->BusSends[1].ArrayNum = 0;
  param_1->BusSends[1].ArrayMax = 0;
  pUVar5 = param_1->SourceEffectChain;
  (this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->SourceEffectChain = pUVar5;
  (this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data =
       (param_1->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data;
  (param_1->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NotifyBufferFinishedHooks).Notifies.ArrayNum =
       (param_1->NotifyBufferFinishedHooks).Notifies.ArrayNum;
  (this->NotifyBufferFinishedHooks).Notifies.ArrayMax =
       (param_1->NotifyBufferFinishedHooks).Notifies.ArrayMax;
  (param_1->NotifyBufferFinishedHooks).Notifies.ArrayNum = 0;
  (param_1->NotifyBufferFinishedHooks).Notifies.ArrayMax = 0;
  this->ActiveSound = param_1->ActiveSound;
  (this->QuantizedRequestData).Ptr = (param_1->QuantizedRequestData).Ptr;
  (param_1->QuantizedRequestData).Ptr = (FQuartzQuantizedRequestData *)0x0;
  (this->SourceBufferListener).Object = (param_1->SourceBufferListener).Object;
  (this->SourceBufferListener).SharedReferenceCount.ReferenceController =
       (param_1->SourceBufferListener).SharedReferenceCount.ReferenceController;
  (param_1->SourceBufferListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SourceBufferListener).Object = (ISourceBufferListener *)0x0;
  this->bShouldSourceBufferListenerZeroBuffer = param_1->bShouldSourceBufferListenerZeroBuffer;
  this->bShouldUseAudioLink = param_1->bShouldUseAudioLink;
  this->AudioLinkSettingsOverride = param_1->AudioLinkSettingsOverride;
  this->Volume = param_1->Volume;
  this->DistanceAttenuation = param_1->DistanceAttenuation;
  this->OcclusionAttenuation = param_1->OcclusionAttenuation;
  this->VolumeMultiplier = param_1->VolumeMultiplier;
  this->EnvelopValue = param_1->EnvelopValue;
  this->RelativeRenderCost = param_1->RelativeRenderCost;
  this->EnvelopeFollowerAttackTime = param_1->EnvelopeFollowerAttackTime;
  this->EnvelopeFollowerReleaseTime = param_1->EnvelopeFollowerReleaseTime;
  this->Priority = param_1->Priority;
  this->VoiceCenterChannelVolume = param_1->VoiceCenterChannelVolume;
  this->RadioFilterVolume = param_1->RadioFilterVolume;
  this->RadioFilterVolumeThreshold = param_1->RadioFilterVolumeThreshold;
  this->LFEBleed = param_1->LFEBleed;
  this->LoopingMode = param_1->LoopingMode;
  this->StartTime = param_1->StartTime;
  uVar7 = (ZPULL(*(undefined4 *)&this->field_0xcc,0,1) ^ param_1->bEnableBusSends) & 1 ^
          *(undefined4 *)&this->field_0xcc;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 2 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 4 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 8 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x10 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x20 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x40 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x80 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x100 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x200 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x400 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x800 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x1000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x2000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x4000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x8000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x10000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x20000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x40000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x80000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  uVar7 = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x100000 ^ uVar7;
  *(uint *)&this->field_0xcc = uVar7;
  *(uint *)&this->field_0xcc = (uVar7 ^ *(uint *)&param_1->field_0xcc) & 0x200000 ^ uVar7;
  this->SpatializationMethod = param_1->SpatializationMethod;
  this->SpatializationPluginSettings = param_1->SpatializationPluginSettings;
  this->OcclusionPluginSettings = param_1->OcclusionPluginSettings;
  this->ReverbPluginSettings = param_1->ReverbPluginSettings;
  this->SourceDataOverridePluginSettings = param_1->SourceDataOverridePluginSettings;
  this->OutputTarget = param_1->OutputTarget;
  this->LowPassFilterFrequency = param_1->LowPassFilterFrequency;
  this->HighPassFilterFrequency = param_1->HighPassFilterFrequency;
  this->SoundClassFilterFrequency = param_1->SoundClassFilterFrequency;
  this->OcclusionFilterFrequency = param_1->OcclusionFilterFrequency;
  this->AmbientZoneFilterFrequency = param_1->AmbientZoneFilterFrequency;
  this->AttenuationLowpassFilterFrequency = param_1->AttenuationLowpassFilterFrequency;
  this->AttenuationHighpassFilterFrequency = param_1->AttenuationHighpassFilterFrequency;
  this->Pitch = param_1->Pitch;
  dVar6 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar6;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  this->NonSpatializedRadiusStart = param_1->NonSpatializedRadiusStart;
  this->NonSpatializedRadiusEnd = param_1->NonSpatializedRadiusEnd;
  this->NonSpatializedRadiusMode = param_1->NonSpatializedRadiusMode;
  this->StereoSpread = param_1->StereoSpread;
  this->AttenuationDistance = param_1->AttenuationDistance;
  this->ListenerToSoundDistance = param_1->ListenerToSoundDistance;
  this->ListenerToSoundDistanceForPanning = param_1->ListenerToSoundDistanceForPanning;
  this->AbsoluteAzimuth = param_1->AbsoluteAzimuth;
  this->PlaybackTime = param_1->PlaybackTime;
  this->PlaybackPercent = param_1->PlaybackPercent;
  this->ReverbSendLevel = param_1->ReverbSendLevel;
  fVar1 = param_1->ManualReverbSendLevel;
  (this->AttenuationSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ManualReverbSendLevel = fVar1;
  (this->AttenuationSubmixSends).AllocatorInstance.Data =
       (param_1->AttenuationSubmixSends).AllocatorInstance.Data;
  (param_1->AttenuationSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttenuationSubmixSends).ArrayNum = (param_1->AttenuationSubmixSends).ArrayNum;
  (this->AttenuationSubmixSends).ArrayMax = (param_1->AttenuationSubmixSends).ArrayMax;
  (param_1->AttenuationSubmixSends).ArrayNum = 0;
  (param_1->AttenuationSubmixSends).ArrayMax = 0;
  this->PlayOrder = param_1->PlayOrder;
  this->WaveInstanceHash = param_1->WaveInstanceHash;
  this->UserIndex = param_1->UserIndex;
  return this;
}

// FWaveInstance @ 1475a63e0

FWaveInstance * __thiscall
FWaveInstance::FWaveInstance(FWaveInstance *this,ulong64 param_1,FActiveSound *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  (this->WaveData).field0_0x0.DebugPtr = (USoundWave *)0x0;
  (this->SoundClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundSubmixSends).ArrayNum = 0;
  (this->SoundSubmixSends).ArrayMax = 0;
  this->SoundSubmix = (USoundSubmixBase *)0x0;
  this->BusSends[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[0].ArrayNum = 0;
  this->BusSends[0].ArrayMax = 0;
  this->BusSends[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[1].ArrayNum = 0;
  this->BusSends[1].ArrayMax = 0;
  uVar2 = *(undefined4 *)&this->field_0xcc;
  (this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->NotifyBufferFinishedHooks).Notifies.ArrayNum = 0;
  (this->NotifyBufferFinishedHooks).Notifies.ArrayMax = 0;
  (this->QuantizedRequestData).Ptr = (FQuartzQuantizedRequestData *)0x0;
  (this->SourceBufferListener).Object = (ISourceBufferListener *)0x0;
  (this->SourceBufferListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SourceEffectChain = (USoundEffectSourcePresetChain *)0x0;
  this->ActiveSound = param_2;
  this->bShouldSourceBufferListenerZeroBuffer = false;
  this->bShouldUseAudioLink = true;
  this->AudioLinkSettingsOverride = (UAudioLinkSettingsAbstract *)0x0;
  this->Volume = 0.0;
  this->DistanceAttenuation = 1.0;
  this->OcclusionAttenuation = 1.0;
  this->VolumeMultiplier = 1.0;
  this->EnvelopValue = 0.0;
  this->RelativeRenderCost = 1.0;
  this->EnvelopeFollowerAttackTime = 10;
  this->EnvelopeFollowerReleaseTime = 100;
  this->Priority = 1.0;
  this->VoiceCenterChannelVolume = 0.0;
  this->RadioFilterVolume = 0.0;
  this->RadioFilterVolumeThreshold = 0.0;
  this->LFEBleed = 0.0;
  this->LoopingMode = LOOP_Never;
  this->StartTime = -1.0;
  uVar4 = (param_2->bEnableBusSendRoutingOverride ^ ZPULL(uVar2,0,1)) & 1 ^ uVar2;
  *(uint *)&this->field_0xcc = uVar4;
  uVar4 = ((byte)param_2->field_0x1a5 >> 3 ^ uVar4) & 2 ^ uVar4;
  *(uint *)&this->field_0xcc = uVar4;
  bVar1 = param_2->field_0x1a5;
  this->SpatializationMethod = SPATIALIZATION_Default;
  this->SpatializationPluginSettings = (USpatializationPluginSourceSettingsBase *)0x0;
  this->OcclusionPluginSettings = (UOcclusionPluginSourceSettingsBase *)0x0;
  this->ReverbPluginSettings = (UReverbPluginSourceSettingsBase *)0x0;
  *(uint *)&this->field_0xcc = (bVar1 >> 3 & 4 ^ uVar4 & 0xfffffffb) & 0xffc0810f | 0x8000;
  this->SourceDataOverridePluginSettings = (USourceDataOverridePluginSourceSettingsBase *)0x0;
  this->OutputTarget = Speaker;
  this->LowPassFilterFrequency = 20000.0;
  this->HighPassFilterFrequency = 20.0;
  this->SoundClassFilterFrequency = 20000.0;
  this->OcclusionFilterFrequency = 20000.0;
  this->AmbientZoneFilterFrequency = 20000.0;
  this->AttenuationLowpassFilterFrequency = 20000.0;
  this->AttenuationHighpassFilterFrequency = 20.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->Pitch = 0.0;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar3;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AttenuationSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttenuationSubmixSends).ArrayNum = 0;
  (this->AttenuationSubmixSends).ArrayMax = 0;
  this->NonSpatializedRadiusStart = 0.0;
  this->NonSpatializedRadiusEnd = 0.0;
  this->NonSpatializedRadiusMode = OmniDirectional;
  this->StereoSpread = 0.0;
  this->AttenuationDistance = 0.0;
  this->ListenerToSoundDistance = 0.0;
  this->ListenerToSoundDistanceForPanning = 0.0;
  this->AbsoluteAzimuth = 0.0;
  this->PlaybackTime = 0.0;
  this->ReverbSendLevel = 0.0;
  this->ManualReverbSendLevel = 0.0;
  this->PlayOrder = 0;
  this->WaveInstanceHash = param_1;
  this->UserIndex = '\0';
  PlayOrderCounter = PlayOrderCounter + 1;
  this->PlayOrder = PlayOrderCounter;
  return this;
}

// operator= @ 1475ab320

FWaveInstance * __thiscall FWaveInstance::operator=(FWaveInstance *this,FWaveInstance *param_1)

{
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FNotifyBufferFinishedHooks *pFVar5;
  FNotifyBufferFinishedHooks *pFVar6;
  TUniquePtr<Audio::FQuartzQuantizedRequestData,TDefaultDelete<Audio::FQuartzQuantizedRequestData>_>
  *pTVar7;
  TUniquePtr<Audio::FQuartzQuantizedRequestData,TDefaultDelete<Audio::FQuartzQuantizedRequestData>_>
  *pTVar8;
  TSharedPtr<ISourceBufferListener,1> *pTVar9;
  TArray<FAttenuationSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FAttenuationSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar11;
  USoundWave *pUVar12;
  USoundClass *pUVar13;
  FScriptContainerElement *pFVar14;
  FQuartzQuantizedRequestData *pFVar15;
  double dVar16;
  uint uVar17;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar12 = (param_1->WaveData).field0_0x0.DebugPtr, pUVar12 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->WaveData).field0_0x0 = (param_1->WaveData).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 = (param_1->SoundClass).field0_0x0.DebugPtr, pUVar13 != (USoundClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pTVar1 = &param_1->SoundSubmixSends;
  (this->SoundClass).field0_0x0 = (param_1->SoundClass).field0_0x0;
  pTVar2 = &this->SoundSubmixSends;
  this->SoundSubmix = param_1->SoundSubmix;
  if (pTVar2 != pTVar1) {
    DestructItems<FSoundSubmixSendInfo,int>
              ((FSoundSubmixSendInfo *)(pTVar2->AllocatorInstance).Data,
               (this->SoundSubmixSends).ArrayNum);
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SoundSubmixSends).ArrayNum = (param_1->SoundSubmixSends).ArrayNum;
    (this->SoundSubmixSends).ArrayMax = (param_1->SoundSubmixSends).ArrayMax;
    (param_1->SoundSubmixSends).ArrayNum = 0;
    (param_1->SoundSubmixSends).ArrayMax = 0;
  }
  pTVar3 = param_1->BusSends;
  pTVar4 = this->BusSends;
  if (pTVar4 != pTVar3) {
    DestructItems<FSoundSourceBusSendInfo,int>
              ((FSoundSourceBusSendInfo *)(pTVar4->AllocatorInstance).Data,
               this->BusSends[0].ArrayNum);
    pFVar14 = (pTVar4->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->BusSends[0].ArrayNum = param_1->BusSends[0].ArrayNum;
    this->BusSends[0].ArrayMax = param_1->BusSends[0].ArrayMax;
    param_1->BusSends[0].ArrayNum = 0;
    param_1->BusSends[0].ArrayMax = 0;
  }
  pTVar3 = param_1->BusSends + 1;
  pTVar4 = this->BusSends + 1;
  if (pTVar4 != pTVar3) {
    DestructItems<FSoundSourceBusSendInfo,int>
              ((FSoundSourceBusSendInfo *)(pTVar4->AllocatorInstance).Data,
               this->BusSends[1].ArrayNum);
    pFVar14 = (pTVar4->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->BusSends[1].ArrayNum = param_1->BusSends[1].ArrayNum;
    this->BusSends[1].ArrayMax = param_1->BusSends[1].ArrayMax;
    param_1->BusSends[1].ArrayNum = 0;
    param_1->BusSends[1].ArrayMax = 0;
  }
  pFVar5 = &param_1->NotifyBufferFinishedHooks;
  pFVar6 = &this->NotifyBufferFinishedHooks;
  this->SourceEffectChain = param_1->SourceEffectChain;
  if (pFVar6 != pFVar5) {
    pFVar14 = (pFVar6->Notifies).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pFVar6->Notifies).AllocatorInstance.Data = (pFVar5->Notifies).AllocatorInstance.Data;
    (pFVar5->Notifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NotifyBufferFinishedHooks).Notifies.ArrayNum =
         (param_1->NotifyBufferFinishedHooks).Notifies.ArrayNum;
    (this->NotifyBufferFinishedHooks).Notifies.ArrayMax =
         (param_1->NotifyBufferFinishedHooks).Notifies.ArrayMax;
    (param_1->NotifyBufferFinishedHooks).Notifies.ArrayNum = 0;
    (param_1->NotifyBufferFinishedHooks).Notifies.ArrayMax = 0;
  }
  pTVar7 = &param_1->QuantizedRequestData;
  pTVar8 = &this->QuantizedRequestData;
  this->ActiveSound = param_1->ActiveSound;
  if (pTVar8 != pTVar7) {
    pFVar15 = pTVar8->Ptr;
    pTVar8->Ptr = pTVar7->Ptr;
    pTVar7->Ptr = (FQuartzQuantizedRequestData *)0x0;
    if (pFVar15 != (FQuartzQuantizedRequestData *)0x0) {
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 (pFVar15->GameThreadSubscribers).AllocatorInstance.Data,
                 (pFVar15->GameThreadSubscribers).ArrayNum);
      pFVar14 = (pFVar15->GameThreadSubscribers).AllocatorInstance.Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                ((FQuartzGameThreadSubscriber *)
                 (pFVar15->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data,
                 (pFVar15->QuantizationBoundary).GameThreadSubscribers.ArrayNum);
      pFVar14 = (pFVar15->QuantizationBoundary).GameThreadSubscribers.AllocatorInstance.Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar15->QuantizedCommandPtr).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar15,0x58);
    }
  }
  pTVar9 = &param_1->SourceBufferListener;
  if (&this->SourceBufferListener != pTVar9) {
    (this->SourceBufferListener).Object = pTVar9->Object;
    pTVar9->Object = (ISourceBufferListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SourceBufferListener).SharedReferenceCount,
               &(param_1->SourceBufferListener).SharedReferenceCount);
  }
  this->bShouldSourceBufferListenerZeroBuffer = param_1->bShouldSourceBufferListenerZeroBuffer;
  this->bShouldUseAudioLink = param_1->bShouldUseAudioLink;
  this->AudioLinkSettingsOverride = param_1->AudioLinkSettingsOverride;
  this->Volume = param_1->Volume;
  this->DistanceAttenuation = param_1->DistanceAttenuation;
  this->OcclusionAttenuation = param_1->OcclusionAttenuation;
  this->VolumeMultiplier = param_1->VolumeMultiplier;
  this->EnvelopValue = param_1->EnvelopValue;
  this->RelativeRenderCost = param_1->RelativeRenderCost;
  this->EnvelopeFollowerAttackTime = param_1->EnvelopeFollowerAttackTime;
  this->EnvelopeFollowerReleaseTime = param_1->EnvelopeFollowerReleaseTime;
  this->Priority = param_1->Priority;
  this->VoiceCenterChannelVolume = param_1->VoiceCenterChannelVolume;
  this->RadioFilterVolume = param_1->RadioFilterVolume;
  this->RadioFilterVolumeThreshold = param_1->RadioFilterVolumeThreshold;
  this->LFEBleed = param_1->LFEBleed;
  this->LoopingMode = param_1->LoopingMode;
  this->StartTime = param_1->StartTime;
  uVar17 = (ZPULL(*(undefined4 *)&this->field_0xcc,0,1) ^ param_1->bEnableBusSends) & 1 ^
           *(undefined4 *)&this->field_0xcc;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 2 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 4 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 8 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x10 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x20 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x40 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x80 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x100 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x200 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x400 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x800 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x1000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x2000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x4000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x8000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x10000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x20000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x40000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x80000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x100000 ^ uVar17;
  *(uint *)&this->field_0xcc = uVar17;
  *(uint *)&this->field_0xcc = (uVar17 ^ *(uint *)&param_1->field_0xcc) & 0x200000 ^ uVar17;
  this->SpatializationMethod = param_1->SpatializationMethod;
  this->SpatializationPluginSettings = param_1->SpatializationPluginSettings;
  this->OcclusionPluginSettings = param_1->OcclusionPluginSettings;
  this->ReverbPluginSettings = param_1->ReverbPluginSettings;
  this->SourceDataOverridePluginSettings = param_1->SourceDataOverridePluginSettings;
  this->OutputTarget = param_1->OutputTarget;
  this->LowPassFilterFrequency = param_1->LowPassFilterFrequency;
  this->HighPassFilterFrequency = param_1->HighPassFilterFrequency;
  pTVar10 = &param_1->AttenuationSubmixSends;
  pTVar11 = &this->AttenuationSubmixSends;
  this->SoundClassFilterFrequency = param_1->SoundClassFilterFrequency;
  this->OcclusionFilterFrequency = param_1->OcclusionFilterFrequency;
  this->AmbientZoneFilterFrequency = param_1->AmbientZoneFilterFrequency;
  this->AttenuationLowpassFilterFrequency = param_1->AttenuationLowpassFilterFrequency;
  this->AttenuationHighpassFilterFrequency = param_1->AttenuationHighpassFilterFrequency;
  this->Pitch = param_1->Pitch;
  dVar16 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar16;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  this->NonSpatializedRadiusStart = param_1->NonSpatializedRadiusStart;
  this->NonSpatializedRadiusEnd = param_1->NonSpatializedRadiusEnd;
  this->NonSpatializedRadiusMode = param_1->NonSpatializedRadiusMode;
  this->StereoSpread = param_1->StereoSpread;
  this->AttenuationDistance = param_1->AttenuationDistance;
  this->ListenerToSoundDistance = param_1->ListenerToSoundDistance;
  this->ListenerToSoundDistanceForPanning = param_1->ListenerToSoundDistanceForPanning;
  this->AbsoluteAzimuth = param_1->AbsoluteAzimuth;
  this->PlaybackTime = param_1->PlaybackTime;
  this->PlaybackPercent = param_1->PlaybackPercent;
  this->ReverbSendLevel = param_1->ReverbSendLevel;
  this->ManualReverbSendLevel = param_1->ManualReverbSendLevel;
  if (pTVar11 != pTVar10) {
    DestructItems<FAttenuationSubmixSendSettings,int>
              ((FAttenuationSubmixSendSettings *)(pTVar11->AllocatorInstance).Data,
               (this->AttenuationSubmixSends).ArrayNum);
    pFVar14 = (pTVar11->AllocatorInstance).Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pTVar11->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
    (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AttenuationSubmixSends).ArrayNum = (param_1->AttenuationSubmixSends).ArrayNum;
    (this->AttenuationSubmixSends).ArrayMax = (param_1->AttenuationSubmixSends).ArrayMax;
    (param_1->AttenuationSubmixSends).ArrayNum = 0;
    (param_1->AttenuationSubmixSends).ArrayMax = 0;
  }
  this->PlayOrder = param_1->PlayOrder;
  this->WaveInstanceHash = param_1->WaveInstanceHash;
  this->UserIndex = param_1->UserIndex;
  return this;
}

// operator() @ 1475ac150

void __thiscall
`FWaveInstance::CalculateInheritedModulationSettingsAndValue'::__l2::<lambda_1>::operator()
          (void *this,float *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float local_res8 [2];
  float local_res18 [4];
  
  lVar1 = *(longlong *)this;
  local_res18[0] = param_2;
  if (*(char *)(lVar1 + 0x14) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x80));
    pcVar2 = *(code **)(lVar1 + 0x80);
    plVar4 = (longlong *)(lVar1 + 0x90);
    if (*(longlong **)(lVar1 + 0xa8) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0xa8);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_1);
    lVar1 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x80));
    pcVar2 = *(code **)(lVar1 + 0x80);
    plVar4 = (longlong *)(lVar1 + 0x90);
    if (*(longlong **)(lVar1 + 0xa8) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0xa8);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res18);
  }
  lVar1 = *(longlong *)this;
  local_res8[0] = local_res18[0];
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x20));
  pcVar2 = *(code **)(lVar1 + 0x20);
  plVar4 = (longlong *)(lVar1 + 0x30);
  if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x48);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_1,local_res8);
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x14) != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x50));
    pcVar2 = *(code **)(lVar1 + 0x50);
    plVar4 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x78) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0x78);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_1);
  }
  return;
}

// operator() @ 1475ad490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FWaveInstance::CalculateInheritedModulationSettingsAndValue'::__l2::<lambda_2>::operator()
          (void *this,FSoundModulationDestinationSettings *param_1)

{
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *this_00;
  float *pfVar1;
  void *this_01;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 auStack_e8 [32];
  FSoundModulationDestinationSettings local_c8;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (**(longlong **)this != 0) {
    FSoundModulationDefaultSettings::GetSettingsForDestination
              ((FSoundModulationDefaultSettings *)(**(longlong **)this + 0x58),&local_c8,
               **(EModulationDestination **)((longlong)this + 8));
    pfVar1 = *(float **)((longlong)this + 0x10);
    this_01 = *(void **)((longlong)this + 0x18);
    *pfVar1 = param_1->Value;
    __l2::<lambda_1>::operator()(this_01,pfVar1,local_c8.Value);
    this_00 = &param_1->Modulators;
    pTVar2 = TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
             ::Union(this_00,&local_68,&local_c8.Modulators);
    if (this_00 != pTVar2) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                (this_00,pTVar2);
    }
    local_68.HashSize = 0;
    if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_68.Elements);
    local_c8.Modulators.HashSize = 0;
    if (local_c8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Modulators.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Modulators.Elements);
  }
  return;
}

// AddReferencedObjects @ 1475b27c0

void __thiscall
FWaveInstance::AddReferencedObjects(FWaveInstance *this,FReferenceCollector *param_1)

{
  int iVar1;
  USoundWave *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x88))(param_1,this);
  if ((this->WaveData).field0_0x0.DebugPtr != (USoundWave *)0x0) {
    pUVar4 = Z_Construct_UClass_USynthSound_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this,pUVar4);
    if ((bVar3) && (pUVar2 = (this->WaveData).field0_0x0.DebugPtr, pUVar2 != (USoundWave *)0x0)) {
      FReferenceCollector::AddReferencedObject
                (param_1,(FWeakObjectPtr *)&pUVar2[1]._padding_,(UObject *)0x0,(FProperty *)0x0);
    }
  }
  iVar1 = (this->SoundSubmixSends).ArrayNum;
  pFVar6 = (this->SoundSubmixSends).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0xb8;
  while( true ) {
    if ((this->SoundSubmixSends).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if (*(longlong *)(pFVar6 + 8) != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar6 + 8);
    }
    pFVar6 = pFVar6 + 0xb8;
  }
  iVar1 = (this->AttenuationSubmixSends).ArrayNum;
  pFVar6 = (this->AttenuationSubmixSends).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0xb0;
  while( true ) {
    if ((this->AttenuationSubmixSends).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAttenuationSubmixSendSettings,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if (*(longlong *)(pFVar6 + 8) != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar6 + 8);
    }
    pFVar6 = pFVar6 + 0xb0;
  }
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SoundClass,0,0);
  iVar1 = (this->NotifyBufferFinishedHooks).Notifies.ArrayNum;
  pFVar6 = (this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->NotifyBufferFinishedHooks).Notifies.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNotifyBufferFinishedHooks::FNotifyBufferDetails,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar6);
    pFVar6 = pFVar6 + 0x10;
  }
  iVar1 = this->BusSends[0].ArrayNum;
  pFVar6 = this->BusSends[0].AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0xb8;
  while( true ) {
    if (this->BusSends[0].ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoundSourceBusSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if (*(longlong *)(pFVar6 + 8) != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar6 + 8);
    }
    if (*(longlong *)(pFVar6 + 0x10) != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar6 + 0x10);
    }
    pFVar6 = pFVar6 + 0xb8;
  }
  iVar1 = this->BusSends[1].ArrayNum;
  pFVar6 = this->BusSends[1].AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0xb8;
  while( true ) {
    if (this->BusSends[1].ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoundSourceBusSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if (*(longlong *)(pFVar6 + 8) != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar6 + 8,0,0);
    }
    if (*(longlong *)(pFVar6 + 0x10) != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar6 + 0x10);
    }
    pFVar6 = pFVar6 + 0xb8;
  }
  return;
}

// CalculateInheritedModulationSettingsAndValue @ 1475b6630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FWaveInstance::CalculateInheritedModulationSettingsAndValue
          (FWaveInstance *this,EModulationDestination param_1,
          FSoundModulationDestinationSettings *param_2,float *param_3)

{
  FActiveSound *this_00;
  TObjectPtr<USoundClass>_u_0 TVar1;
  int iVar2;
  uint uVar3;
  EModulationRouting EVar4;
  EModulationRouting EVar5;
  FModulationParameter *pFVar6;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar7;
  FLazyName *this_01;
  FSoundModulationDefaultSettings *this_02;
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_03;
  longlong *plVar8;
  undefined1 auStackY_288 [32];
  EModulationDestination local_258 [8];
  FName local_250;
  undefined1 *local_248;
  TObjectPtr<USoundClass>_u_0 local_240;
  TObjectPtr<USoundClass>_u_0 *local_238;
  EModulationDestination *local_230;
  float *local_228;
  undefined1 **local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [32];
  void *local_1f0;
  undefined8 local_1e8;
  ForElementType<FSetElementId> FStack_1e0;
  ForElementType<FSetElementId> local_1d0;
  int local_1c8;
  FSoundModulationDestinationSettings local_1b8;
  FSoundModulationDestinationSettings local_158;
  undefined1 local_f8 [80];
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_258[0] = param_1;
  if (param_1 == Volume) {
    FLazyName::Resolve(&AudioModulationPrivate::VolumeParameterName);
    pFVar6 = Audio::GetModulationParameterPtr(local_250);
joined_r0x0001475b66ce:
    if (pFVar6 == (FModulationParameter *)0x0) goto LAB_1475b66d0;
  }
  else {
    if (param_1 == Pitch) {
      this_01 = &AudioModulationPrivate::PitchParameterName;
LAB_1475b6683:
      FLazyName::Resolve(this_01);
      pFVar6 = Audio::GetModulationParameterPtr(local_250);
      goto joined_r0x0001475b66ce;
    }
    if (param_1 == Lowpass) {
      this_01 = &AudioModulationPrivate::LowpassParameterName;
      goto LAB_1475b6683;
    }
    if (param_1 == Highpass) {
      this_01 = &AudioModulationPrivate::HighpassParameterName;
      goto LAB_1475b6683;
    }
LAB_1475b66d0:
    pFVar6 = Audio::GetDefaultModulationParameter();
  }
  Audio::FModulationParameter::FModulationParameter((FModulationParameter *)local_f8,pFVar6);
  *param_3 = (float)local_f8._8_4_;
  this_00 = this->ActiveSound;
  FSoundModulationDefaultSettings::GetSettingsForDestination
            ((FSoundModulationDefaultSettings *)
             &((this->WaveData).field0_0x0.DebugPtr)->ModulationSettings,&local_158,local_258[0]);
  EVar4 = FSoundModulationDefaultRoutingSettings::GetRoutingForDestination
                    (&((this->WaveData).field0_0x0.DebugPtr)->ModulationSettings,local_258[0]);
  local_240.DebugPtr = FActiveSound::GetSoundClass(this_00);
  TVar1 = (TObjectPtr<USoundClass>_u_0)(this->SoundClass).field0_0x0.DebugPtr;
  if (TVar1.DebugPtr != (USoundClass *)0x0) {
    local_240 = TVar1;
  }
  local_248 = local_f8;
  this_02 = (FSoundModulationDefaultSettings *)&this_00->ModulationRouting;
  local_238 = &local_240;
  local_230 = local_258;
  local_220 = &local_248;
  local_228 = param_3;
  EVar5 = FSoundModulationDefaultRoutingSettings::GetRoutingForDestination
                    ((FSoundModulationDefaultRoutingSettings *)this_02,local_258[0]);
  if (EVar5 == Inherit) {
    if (EVar4 != Inherit) {
      if (EVar4 == Override) {
        param_2->Value = local_158.Value;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::operator=(&param_2->Modulators,&local_158.Modulators);
        *param_3 = local_158.Value;
      }
      else if (EVar4 == Union) {
        local_218._0_4_ = local_158.Value;
        local_1e8 = ___xmm_00000000ffffffff0000008000000000;
        FStack_1e0.InlineData[0] = UNK_150631d98;
        FStack_1e0.InlineData[1] = UNK_150631d99;
        FStack_1e0.InlineData[2] = UNK_150631d9a;
        FStack_1e0.InlineData[3] = UNK_150631d9b;
        FStack_1e0._padding_ = _UNK_150631d9c;
        local_210._0_8_ = (FScriptContainerElement *)0x0;
        local_210._8_8_ = 0;
        local_1f0 = (void *)0x0;
        local_1d0 = (ForElementType<FSetElementId>)0x0;
        local_1c8 = 0;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                     *)local_210,&local_158.Modulators);
        `FWaveInstance::CalculateInheritedModulationSettingsAndValue'::__l2::<lambda_2>::operator()
                  (&local_238,(FSoundModulationDestinationSettings *)local_218);
        param_2->Value = (float)local_218._0_4_;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::operator=(&param_2->Modulators,
                    (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                     *)local_210);
        *param_3 = (float)local_218._0_4_;
        local_1c8 = 0;
        if (local_1d0 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1d0);
        }
        iVar2 = SUB84(local_210._8_8_,4);
        local_210._8_8_ = local_210._8_8_ & 0xffffffff00000000;
        if (iVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)local_210,0,(int *)(local_210 + 0xc));
        }
        uVar3 = local_1e8._4_4_;
        FStack_1e0.InlineData[0] = 0xff;
        FStack_1e0.InlineData[1] = 0xff;
        FStack_1e0.InlineData[2] = 0xff;
        FStack_1e0.InlineData[3] = 0xff;
        FStack_1e0._padding_ = 0;
        local_1e8 = (ulonglong)local_1e8._4_4_ << 0x20;
        if (0x80 < uVar3) {
          local_1e8 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_210 + 0x10),0);
        }
        if (local_1f0 != (void *)0x0) {
          FMemory::Free(local_1f0);
        }
        if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_210._0_8_);
        }
      }
      goto LAB_1475b6a72;
    }
    if (local_240.DebugPtr == (USoundClass *)0x0) goto LAB_1475b6a72;
    this_02 = &((local_240.DebugPtr)->Properties).ModulationSettings;
LAB_1475b6a24:
    FSoundModulationDefaultSettings::GetSettingsForDestination
              (this_02,(FSoundModulationDestinationSettings *)local_218,local_258[0]);
    param_2->Value = (float)local_218._0_4_;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=(&param_2->Modulators,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_210);
    *param_3 = (float)local_218._0_4_;
    local_1c8 = 0;
    if (local_1d0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d0);
    }
    this_03 = (TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_210;
  }
  else {
    if (EVar5 == Override) goto LAB_1475b6a24;
    if (EVar5 != Union) goto LAB_1475b6a72;
    FSoundModulationDefaultSettings::GetSettingsForDestination(this_02,&local_1b8,local_258[0]);
    if (EVar4 == Inherit) {
LAB_1475b682a:
      `FWaveInstance::CalculateInheritedModulationSettingsAndValue'::__l2::<lambda_2>::operator()
                (&local_238,&local_1b8);
    }
    else if (EVar4 == Override) {
      *param_3 = local_1b8.Value;
      `FWaveInstance::CalculateInheritedModulationSettingsAndValue'::__l2::<lambda_1>::operator()
                (&local_248,param_3,local_158.Value);
      pTVar7 = TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               ::Union(&local_1b8.Modulators,
                       (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                        *)local_218,&local_158.Modulators);
      if (&local_1b8.Modulators != pTVar7) {
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                  (&local_1b8.Modulators,pTVar7);
      }
      local_1d0 = (ForElementType<FSetElementId>)((ulonglong)(uint)local_1d0._4_4_ << 0x20);
      if (FStack_1e0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_1e0.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_218);
    }
    else if (EVar4 == Union) {
      *param_3 = local_1b8.Value;
      `FWaveInstance::CalculateInheritedModulationSettingsAndValue'::__l2::<lambda_1>::operator()
                (&local_248,param_3,local_158.Value);
      pTVar7 = TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               ::Union(&local_1b8.Modulators,
                       (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                        *)local_218,&local_158.Modulators);
      if (&local_1b8.Modulators != pTVar7) {
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                  (&local_1b8.Modulators,pTVar7);
      }
      local_1d0 = (ForElementType<FSetElementId>)((ulonglong)(uint)local_1d0._4_4_ << 0x20);
      if (FStack_1e0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_1e0.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_218);
      goto LAB_1475b682a;
    }
    param_2->Value = local_1b8.Value;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=(&param_2->Modulators,&local_1b8.Modulators);
    *param_3 = local_1b8.Value;
    local_1b8.Modulators.HashSize = 0;
    if (local_1b8.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1b8.Modulators.Hash.SecondaryData);
    }
    this_03 = &local_1b8.Modulators.Elements;
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this_03);
LAB_1475b6a72:
  local_158.Modulators.HashSize = 0;
  if (local_158.Modulators.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_158.Modulators.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_158.Modulators.Elements);
  if (local_78 != 0) {
    plVar8 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar8 = local_50;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_a8 != 0) {
    plVar8 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar8 = local_80;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_f8._32_8_ != 0) {
    plVar8 = (longlong *)(local_f8 + 0x30);
    if ((longlong *)local_f8._72_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_f8._72_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// GetActualVolume @ 1475cd700

float __thiscall FWaveInstance::GetActualVolume(FWaveInstance *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = this->OcclusionAttenuation * this->DistanceAttenuation *
          this->VolumeMultiplier * this->Volume;
  if (fVar4 != 0.0) {
    fVar3 = GetDynamicVolume(this);
    fVar4 = fVar4 * fVar3;
    if (this->ActiveSound == (FActiveSound *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveSound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                         ,0x4e0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    if (this->ActiveSound->bIsPreviewSound == '\0') {
      if (this->ActiveSound->AudioDevice == (FAudioDevice *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveSound->AudioDevice",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                           ,0x4e3,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar4 = (float)(*pcVar1)();
          return fVar4;
        }
      }
      fVar4 = fVar4 * this->ActiveSound->AudioDevice->PrimaryVolume;
    }
  }
  return fVar4;
}

// GetDistanceAndOcclusionAttenuation @ 1475d45d0

float __thiscall FWaveInstance::GetDistanceAndOcclusionAttenuation(FWaveInstance *this)

{
  return this->OcclusionAttenuation * this->DistanceAttenuation;
}

// GetDistanceAttenuation @ 1475d45f0

float __thiscall FWaveInstance::GetDistanceAttenuation(FWaveInstance *this)

{
  return this->DistanceAttenuation;
}

// GetDynamicVolume @ 1475d4670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FWaveInstance::GetDynamicVolume(FWaveInstance *this)

{
  int iVar1;
  USoundWave *pUVar2;
  USoundBase *pUVar3;
  USoundClass *pUVar4;
  FAudioDeviceManager *this_00;
  UClass *pUVar5;
  float fVar6;
  float fVar7;
  FName local_res10;
  
  fVar6 = __real_3f800000;
  if (GEngine == (UEngine *)0x0) {
    return __real_3f800000;
  }
  this_00 = UEngine::GetAudioDeviceManager(GEngine);
  if (this_00 != (FAudioDeviceManager *)0x0) {
    pUVar2 = (this->WaveData).field0_0x0.DebugPtr;
    if (pUVar2 != (USoundWave *)0x0) {
      local_res10 = (FName)pUVar2->_padding_;
      fVar6 = FAudioDeviceManager::GetDynamicSoundVolume(this_00,Wave,&local_res10);
    }
    if ((this->ActiveSound != (FActiveSound *)0x0) &&
       (pUVar3 = (this->ActiveSound->Sound).field0_0x0.DebugPtr, pUVar3 != (USoundBase *)0x0)) {
      pUVar5 = Z_Construct_UClass_USoundCue_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        local_res10 = (FName)pUVar3->_padding_;
        fVar7 = FAudioDeviceManager::GetDynamicSoundVolume(this_00,Cue,&local_res10);
        fVar6 = fVar6 * fVar7;
      }
    }
    pUVar4 = (this->SoundClass).field0_0x0.DebugPtr;
    if (pUVar4 != (USoundClass *)0x0) {
      local_res10 = (FName)pUVar4->_padding_;
      fVar7 = FAudioDeviceManager::GetDynamicSoundVolume(this_00,Class,&local_res10);
      fVar6 = fVar6 * fVar7;
    }
  }
  return fVar6;
}

// GetEffectiveModulationSettings @ 1475d4780

FSoundModulationDestinationSettings * __thiscall
FWaveInstance::GetEffectiveModulationSettings
          (FWaveInstance *this,FSoundModulationDestinationSettings *__return_storage_ptr__,
          EModulationDestination param_1)

{
  float local_res10 [6];
  
  __return_storage_ptr__->Value = 1.0;
  *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Modulators).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Modulators).Elements.field_0x30 = 0xffffffff;
  (__return_storage_ptr__->Modulators).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (__return_storage_ptr__->Modulators).HashSize = 0;
  CalculateInheritedModulationSettingsAndValue(this,param_1,__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// GetEffectiveModulationValue @ 1475d47e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FWaveInstance::GetEffectiveModulationValue(FWaveInstance *this,EModulationDestination param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_c8 [32];
  float local_98 [4];
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40 = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  local_88._0_4_ = 1.0;
  CalculateInheritedModulationSettingsAndValue
            (this,param_1,(FSoundModulationDestinationSettings *)local_88,local_98);
  local_38 = 0;
  if (local_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40);
  }
  uVar1 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar2 = local_70.MaxBits;
  uStack_50 = 0xffffffff;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_70.NumBits = 0;
    local_70.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return local_98[0];
}

// GetName @ 1475d5cf0

FString * __thiscall FWaveInstance::GetName(FWaveInstance *this,FString *__return_storage_ptr__)

{
  USoundWave *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = (this->WaveData).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundWave *)0x0) {
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Null");
  return __return_storage_ptr__;
}

// GetOcclusionAttenuation @ 1475d6410

float __thiscall FWaveInstance::GetOcclusionAttenuation(FWaveInstance *this)

{
  return this->OcclusionAttenuation;
}

// GetParameterBasedOnDestination @ 1475d73d0

FModulationParameter * __cdecl
FWaveInstance::GetParameterBasedOnDestination
          (FModulationParameter *__return_storage_ptr__,EModulationDestination param_1)

{
  FModulationParameter *pFVar1;
  FLazyName *this;
  FName local_res18;
  
  if (param_1 == Volume) {
    FLazyName::Resolve(&AudioModulationPrivate::VolumeParameterName);
    pFVar1 = Audio::GetModulationParameterPtr(local_res18);
joined_r0x0001475d7445:
    if (pFVar1 != (FModulationParameter *)0x0) goto LAB_1475d744c;
  }
  else {
    if (param_1 == Pitch) {
      this = &AudioModulationPrivate::PitchParameterName;
LAB_1475d73fa:
      FLazyName::Resolve(this);
      pFVar1 = Audio::GetModulationParameterPtr(local_res18);
      goto joined_r0x0001475d7445;
    }
    if (param_1 == Lowpass) {
      this = &AudioModulationPrivate::LowpassParameterName;
      goto LAB_1475d73fa;
    }
    if (param_1 == Highpass) {
      this = &AudioModulationPrivate::HighpassParameterName;
      goto LAB_1475d73fa;
    }
  }
  pFVar1 = Audio::GetDefaultModulationParameter();
LAB_1475d744c:
  Audio::FModulationParameter::FModulationParameter(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPitch @ 1475d7470

float __thiscall FWaveInstance::GetPitch(FWaveInstance *this)

{
  return this->Pitch;
}

// GetUseSpatialization @ 1475ded60

bool __thiscall FWaveInstance::GetUseSpatialization(FWaveInstance *this)

{
  if ((AllowAudioSpatializationCVar != 0) && (this->bUseSpatialization != 0)) {
    return true;
  }
  return false;
}

// GetVolume @ 1475ded90

float __thiscall FWaveInstance::GetVolume(FWaveInstance *this)

{
  return this->VolumeMultiplier * this->Volume;
}

// GetVolumeWeightedPriority @ 1475dedb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FWaveInstance::GetVolumeWeightedPriority(FWaveInstance *this)

{
  USoundWave *pUVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = this->Priority;
  if (fVar2 <= __real_42c80000) {
    fVar3 = this->OcclusionAttenuation * this->DistanceAttenuation *
            this->VolumeMultiplier * this->Volume;
    if (fVar3 <= 0.0) {
      if (this->bIsStopping != 0) {
        return fVar2 * fVar3 - __real_42ca0000;
      }
      fVar2 = fVar2 - ___real_43490000;
    }
    else {
      pUVar1 = (this->WaveData).field0_0x0.DebugPtr;
      if ((pUVar1 == (USoundWave *)0x0) || (-1 < (char)pUVar1->_padding_)) {
        return fVar2 * fVar3;
      }
    }
  }
  return fVar2;
}

// GetVolumeWithDistanceAndOcclusionAttenuation @ 1475dee40

float __thiscall FWaveInstance::GetVolumeWithDistanceAndOcclusionAttenuation(FWaveInstance *this)

{
  return this->OcclusionAttenuation * this->DistanceAttenuation *
         this->VolumeMultiplier * this->Volume;
}

// IsPlaying @ 1475e2940

bool __thiscall FWaveInstance::IsPlaying(FWaveInstance *this)

{
  float fVar1;
  float fVar2;
  USoundWave *pUVar3;
  FActiveSound *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  float fVar7;
  
  if (this->ActiveSound == (FActiveSound *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveSound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                       ,0x454,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar3 = (this->WaveData).field0_0x0.DebugPtr;
  if (pUVar3 != (USoundWave *)0x0) {
    this_00 = this->ActiveSound;
    if ((this_00->bIsPreviewSound == '\0') &&
       ((this_00->bHandleSubtitles == '\0' ||
        ((this_00->bHasExternalSubtitles == '\0' && ((pUVar3->Subtitles).ArrayNum < 1)))))) {
      bVar5 = FActiveSound::IsPlayWhenSilent(this_00);
      if ((!bVar5) ||
         ((BypassPlayWhenSilentCVar != 0 &&
          (((this->WaveData).field0_0x0.DebugPtr)->bProcedural == 0)))) {
        fVar1 = this->OcclusionAttenuation;
        fVar2 = this->DistanceAttenuation;
        fVar7 = GetDynamicVolume(this);
        if (fVar2 * fVar1 * this->Volume * fVar7 * this->VolumeMultiplier <=
            WaveInstanceMinVolumeThresholdCVar) {
          bVar5 = Audio::FVolumeFader::IsFadingIn(&this->ActiveSound->ComponentVolumeFader);
          return bVar5;
        }
      }
    }
    return true;
  }
  return false;
}

// IsSeekable @ 1475e2ba0

bool __thiscall FWaveInstance::IsSeekable(FWaveInstance *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->WaveData).field0_0x0.DebugPtr == (USoundWave *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaveData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                       ,0x552,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->StartTime == 0.0) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x0001475e2bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(((this->WaveData).field0_0x0.DebugPtr)->_padding_ + 0x410))();
  return (bool)uVar3;
}

// IsStreaming @ 1475e2c30

bool __thiscall FWaveInstance::IsStreaming(FWaveInstance *this)

{
  USoundWave *this_00;
  bool bVar1;
  
  this_00 = (this->WaveData).field0_0x0.DebugPtr;
  if (this_00 != (USoundWave *)0x0) {
    bVar1 = USoundWave::IsStreaming(this_00,(wchar_t *)0x0);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// NotifyFinished @ 1475e6580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWaveInstance::NotifyFinished(FWaveInstance *this,bool param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (-1 < (char)(this->bAlreadyNotifiedHook << 7)) {
    if ((this->bIsStarted == 0) && (2 < (byte)LogAudio._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    this->bIsFinished = 1;
    this->bAlreadyNotifiedHook = 1;
    uVar7 = (this->NotifyBufferFinishedHooks).Notifies.ArrayNum - 1;
    if (-1 < (int)uVar7) {
      lVar8 = (longlong)(int)uVar7 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (this->NotifyBufferFinishedHooks).Notifies.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)((this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data + lVar8)
            != 0) {
          uVar6 = 0;
          if ((int)uVar7 < (this->NotifyBufferFinishedHooks).Notifies.ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar2 = *(longlong **)
                    ((this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data + lVar8);
          cVar5 = (**(code **)(*plVar2 + 0x2b0))(plVar2,this);
          if ((cVar5 != '\0') && (!param_1)) {
            return;
          }
        }
        lVar8 = lVar8 + -0x10;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
  }
  return;
}

// ShouldStopDueToMaxConcurrency @ 1475fe020

bool __thiscall FWaveInstance::ShouldStopDueToMaxConcurrency(FWaveInstance *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->ActiveSound == (FActiveSound *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveSound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                       ,0x52b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->ActiveSound->bShouldStopDueToMaxConcurrency;
}

// StopWithoutNotification @ 1475ff5a0

void __thiscall FWaveInstance::StopWithoutNotification(FWaveInstance *this)

{
  if ((this->LoopingMode != LOOP_Forever) &&
     (this->ActiveSound->bShouldRemainActiveIfDropped == '\0')) {
    this->bIsFinished = 1;
    return;
  }
  this->bIsFinished = 0;
  return;
}

