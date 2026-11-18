// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 115

// <lambda_1> @ 14653c2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

<lambda_1> * __thiscall
`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  *(FMixerSubmix **)this = param_1->__this;
  *(undefined8 *)
   &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      *)((longlong)this + 8))->Elements = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x34) = 0x80;
  *(undefined4 *)((longlong)this + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)((longlong)this + 8),&param_1->VolMod);
  *(undefined8 *)
   &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      *)((longlong)this + 0x58))->Elements = 0;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  *(undefined4 *)((longlong)this + 0x80) = 0;
  *(undefined4 *)((longlong)this + 0x84) = 0x80;
  *(undefined4 *)((longlong)this + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x8c) = 0;
  *(undefined8 *)((longlong)this + 0x98) = 0;
  *(undefined4 *)((longlong)this + 0xa0) = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)((longlong)this + 0x58),&param_1->WetMod);
  *(undefined8 *)
   &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      *)((longlong)this + 0xa8))->Elements = 0;
  *(undefined8 *)((longlong)this + 0xb0) = 0;
  *(undefined8 *)((longlong)this + 200) = 0;
  *(undefined4 *)((longlong)this + 0xd0) = 0;
  *(undefined4 *)((longlong)this + 0xd4) = 0x80;
  *(undefined4 *)((longlong)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0xdc) = 0;
  *(undefined8 *)((longlong)this + 0xe8) = 0;
  *(undefined4 *)((longlong)this + 0xf0) = 0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)((longlong)this + 0xa8),&param_1->DryMod);
  return this;
}

// FMixerSubmix @ 14653cd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMixerSubmix * __thiscall
Audio::FMixerSubmix::FMixerSubmix(FMixerSubmix *this,FMixerDevice *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  
  pTVar8 = (TNode *)0x0;
  (this->SubmixName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixName).Data.ArrayNum = 0;
  (this->SubmixName).Data.ArrayMax = 0;
  (this->SubmixPathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixPathName).Data.ArrayNum = 0;
  (this->SubmixPathName).Data.ArrayMax = 0;
  (this->ParentSubmix).Object = (FMixerSubmix *)0x0;
  (this->ParentSubmix).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ChildSubmixes = 0;
  *(undefined8 *)&(this->ChildSubmixes).field_0x8 = 0;
  *(undefined8 *)&(this->ChildSubmixes).field_0x20 = 0;
  *(undefined ***)this = &___7FMixerSubmix_Audio__6B_;
  this->Id = GSubmixMixerIDs;
  *(undefined4 *)&(this->ChildSubmixes).field_0x28 = 0;
  *(undefined4 *)&(this->ChildSubmixes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildSubmixes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildSubmixes).field_0x34 = 0;
  *(undefined8 *)&(this->ChildSubmixes).field_0x40 = 0;
  *(undefined4 *)&(this->ChildSubmixes).field_0x48 = 0;
  (this->EffectChains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectChains).ArrayNum = 0;
  (this->EffectChains).ArrayMax = 0;
  (this->EffectChainOutputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectChainOutputBuffer).ArrayNum = 0;
  (this->EffectChainOutputBuffer).ArrayMax = 0;
  this->MixerDevice = param_1;
  *(undefined8 *)&this->MixerSourceVoices = 0;
  *(undefined8 *)&(this->MixerSourceVoices).field_0x8 = 0;
  *(undefined8 *)&(this->MixerSourceVoices).field_0x20 = 0;
  *(undefined4 *)&(this->MixerSourceVoices).field_0x28 = 0;
  *(undefined4 *)&(this->MixerSourceVoices).field_0x2c = 0x80;
  *(undefined4 *)&(this->MixerSourceVoices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MixerSourceVoices).field_0x34 = 0;
  *(undefined8 *)&(this->MixerSourceVoices).field_0x40 = 0;
  *(undefined4 *)&(this->MixerSourceVoices).field_0x48 = 0;
  (this->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBuffer).ArrayNum = 0;
  (this->ScratchBuffer).ArrayMax = 0;
  (this->SubmixChainMixBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixChainMixBuffer).ArrayNum = 0;
  (this->SubmixChainMixBuffer).ArrayMax = 0;
  (this->InputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBuffer).ArrayNum = 0;
  (this->InputBuffer).ArrayMax = 0;
  (this->DownmixedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DownmixedBuffer).ArrayNum = 0;
  (this->DownmixedBuffer).ArrayMax = 0;
  (this->SourceInputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceInputBuffer).ArrayNum = 0;
  (this->SourceInputBuffer).ArrayMax = 0;
  this->NumChannels = 0;
  this->NumSamples = 0;
  (this->SoundfieldStreams).Factory = (ISoundfieldFactory *)0x0;
  (this->SoundfieldStreams).DownmixedChildrenEncoder.Ptr = (ISoundfieldEncoderStream *)0x0;
  (this->SoundfieldStreams).ParentDecoder.Ptr = (ISoundfieldDecoderStream *)0x0;
  (this->SoundfieldStreams).CachedPositionalData.NumChannels = 0;
  (this->SoundfieldStreams).CachedPositionalData.ChannelPositions =
       (TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *)0x0;
  uVar6 = UE::Math::TQuat<double>::Identity.Y._4_4_;
  uVar5 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uVar4 = UE::Math::TQuat<double>::Identity.X._4_4_;
  *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.X =
       UE::Math::TQuat<double>::Identity.X._0_4_;
  *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.X + 4) = uVar4;
  *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Y = uVar5;
  *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Y + 4) = uVar6;
  uVar6 = UE::Math::TQuat<double>::Identity.W._4_4_;
  uVar5 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uVar4 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  GSubmixMixerIDs = GSubmixMixerIDs + 1;
  *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Z =
       UE::Math::TQuat<double>::Identity.Z._0_4_;
  *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Z + 4) = uVar4;
  *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.W = uVar5;
  *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.W + 4) = uVar6;
  (this->SoundfieldStreams).Mixer.Ptr = (ISoundfieldMixerStream *)0x0;
  (this->SoundfieldStreams).MixedDownAudio.Ptr = (ISoundfieldAudioPacket *)0x0;
  (this->SoundfieldStreams).Settings.Ptr = (ISoundfieldEncodingSettingsProxy *)0x0;
  (this->SoundfieldStreams).EffectProcessors.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SoundfieldStreams).EffectProcessors.ArrayNum = 0;
  (this->SoundfieldStreams).EffectProcessors.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->SoundfieldStreams).StreamsLock,4000);
  (this->EndpointData).Input.OutputHandle.Object = (FPatchOutput *)0x0;
  (this->EndpointData).Input.OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EndpointData).Input.PushCallsCounter = 0;
  (this->EndpointData).NonSoundfieldEndpoint.Ptr = (IAudioEndpoint *)0x0;
  (this->EndpointData).SoundfieldEndpoint.Ptr = (ISoundfieldEndpoint *)0x0;
  (this->EndpointData).AudioBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndpointData).AudioBuffer.ArrayNum = 0;
  (this->EndpointData).AudioBuffer.ArrayMax = 0;
  (this->EndpointData).ResampledAudioBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndpointData).ResampledAudioBuffer.ArrayNum = 0;
  (this->EndpointData).ResampledAudioBuffer.ArrayMax = 0;
  (this->EndpointData).DownmixedResampledAudioBuffer.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EndpointData).DownmixedResampledAudioBuffer.ArrayNum = 0;
  (this->EndpointData).DownmixedResampledAudioBuffer.ArrayMax = 0;
  (this->EndpointData).DownmixChannelMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndpointData).DownmixChannelMap.ArrayNum = 0;
  (this->EndpointData).DownmixChannelMap.ArrayMax = 0;
  (this->EndpointData).NumChannels = 0;
  (this->EndpointData).SampleRate = 0.0;
  FResampler::FResampler(&(this->EndpointData).Resampler);
  (this->EndpointData).bShouldResample = false;
  (this->EndpointData).AudioPacket.Ptr = (ISoundfieldAudioPacket *)0x0;
  this->CurrentOutputVolume = 1.0;
  this->TargetOutputVolume = 1.0;
  this->CurrentWetLevel = 1.0;
  this->TargetWetLevel = 1.0;
  this->CurrentDryLevel = 0.0;
  this->TargetDryLevel = 0.0;
  FModulationDestination::FModulationDestination(&this->VolumeMod);
  FModulationDestination::FModulationDestination(&this->DryLevelMod);
  FModulationDestination::FModulationDestination(&this->WetLevelMod);
  this->VolumeModBaseDb = 0.0;
  this->DryModBaseDb = -160.0;
  this->WetModBaseDb = 0.0;
  this->VolumeModifier = 1.0;
  this->DryLevelModifier = 1.0;
  this->WetLevelModifier = 1.0;
  FEnvelopeFollower::FEnvelopeFollower(&this->EnvelopeFollower);
  this->EnvelopeNumChannels = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->EnvelopeCriticalSection,4000);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection,4000);
  (this->SpectrumAnalyzer).Object = (FAsyncSpectrumAnalyzer *)0x0;
  (this->SpectrumAnalyzer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MonoMixBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MonoMixBuffer).ArrayNum = 0;
  (this->MonoMixBuffer).ArrayMax = 0;
  (this->DryChannelBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DryChannelBuffer).ArrayNum = 0;
  (this->DryChannelBuffer).ArrayMax = 0;
  pTVar7 = ::operator_new(0x40);
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    pTVar7->_padding_ = 0;
    *(undefined8 *)&pTVar7->Item = 0;
    *(undefined8 *)&(pTVar7->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar7->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar7->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar7->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar7->Item).field_0x28 = 0;
    pTVar7->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar7->Item = 0;
    *(undefined8 *)&(pTVar7->Item).field_0x28 = 0;
    pTVar8 = pTVar7;
  }
  (this->CommandQueue).Tail = pTVar8;
  (this->CommandQueue).Head = pTVar8;
  (this->BufferListenerPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferListenerPtrs).ArrayNum = 0;
  (this->BufferListenerPtrs).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->BufferListenerCriticalSection,4000);
  (this->RecordingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordingData).ArrayNum = 0;
  (this->RecordingData).ArrayMax = 0;
  puVar2 = &this->field_0x46c;
  this->bIsRecording = '\0';
  this->bIsCurrentlyDisabled = '\0';
  this->bIsSilent = '\0';
  this->bAutoDisable = '\x01';
  this->bIsBackgroundMuted = '\0';
  this->NumSubmixEffects = 0;
  this->AutoDisableTime = 0.1;
  this->SilenceTimeStartSeconds = -1.0;
  this->bIsEnvelopeFollowing = (FThreadSafeBool)0x0;
  *(undefined8 *)&this->OnSubmixEnvelope = 0;
  *(undefined8 *)&(this->OnSubmixEnvelope).field_0x8 = 0;
  *(undefined8 *)&(this->OnSubmixEnvelope).field_0x10 = 0;
  (this->SpectralAnalysisDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpectralAnalysisDelegates).ArrayNum = 0;
  (this->SpectralAnalysisDelegates).ArrayMax = 0;
  this->bIsSpectrumAnalyzing = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RecordingCriticalSection,4000);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection,4000);
  (this->OwningSubmixObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PatchSplitter).PendingOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchSplitter).PendingOutputs.ArrayNum = 0;
  (this->PatchSplitter).PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->PatchSplitter).PendingOutputsCriticalSection,4000);
  (this->PatchSplitter).ConnectedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchSplitter).ConnectedOutputs.ArrayNum = 0;
  (this->PatchSplitter).ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->PatchSplitter).ConnectedOutputsCriticalSection,4000);
  (this->AudioLinkInstance).Ptr = (IAudioLink *)0x0;
  *(undefined8 *)&this->AudioBuses = 0;
  *(undefined8 *)&(this->AudioBuses).field_0x8 = 0;
  *(undefined8 *)&(this->AudioBuses).field_0x20 = 0;
  *(undefined4 *)&(this->AudioBuses).field_0x28 = 0;
  *(undefined4 *)&(this->AudioBuses).field_0x2c = 0x80;
  *(undefined4 *)&(this->AudioBuses).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AudioBuses).field_0x34 = 0;
  *(undefined8 *)&(this->AudioBuses).field_0x40 = 0;
  *(undefined4 *)&(this->AudioBuses).field_0x48 = 0;
  (this->AudioBusSendBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioBusSendBuffer).ArrayNum = 0;
  (this->AudioBusSendBuffer).ArrayMax = 0;
  return this;
}

// ~<lambda_1> @ 14653f580

void __thiscall `Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>::~<lambda_1>(void *this)

{
  *(undefined4 *)((longlong)this + 0xf0) = 0;
  if (*(void **)((longlong)this + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe8));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0xa8));
  *(undefined4 *)((longlong)this + 0xa0) = 0;
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x58));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 8));
  return;
}

// ~FMixerSubmix @ 1465406b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::~FMixerSubmix(FMixerSubmix *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  IAudioLink *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  UObject *pUVar11;
  USoundSubmix *this_00;
  UClass *pUVar12;
  FString *pFVar13;
  int iVar14;
  wchar_t *pwVar15;
  undefined1 auStackY_78 [32];
  LARGE_INTEGER local_48;
  FString local_40;
  FString local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  *(undefined ***)this = &___7FMixerSubmix_Audio__6B_;
  ClearSoundEffectSubmixes(this);
  pwVar15 = L"";
  iVar14 = 0;
  if (((RecoverRecordingOnShutdownCVar != 0) &&
      (bVar9 = FWeakObjectPtr::IsValid(&(this->OwningSubmixObject).WeakPtr), bVar9)) &&
     (this->bIsRecording != 0)) {
    ::FString::FString(&local_40,L"InterruptedRecording.wav");
    if (2 < (byte)LogAudioMixer._0_1_) {
      pUVar11 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
      local_48 = *(LARGE_INTEGER *)&pUVar11->field_0x18;
      ::FName::ToString((FName *)&local_48.s,&local_30);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    this_00 = (USoundSubmix *)FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
    if (this_00 != (USoundSubmix *)0x0) {
      pUVar12 = Z_Construct_UClass_USoundSubmix_NoRegister();
      iVar3 = (int)pUVar12->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar12->_padding_)) {
        local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_30.Data.ArrayNum = 0;
        local_30.Data.ArrayMax = 0;
        USoundSubmix::StopRecordingOutput
                  (this_00,(FAudioDevice *)this->MixerDevice,WavFile,&local_40,&local_30,
                   (USoundWave *)0x0);
      }
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  if ((-1 < AudioChannel->Enabled) && (-1 < AudioChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FAudioSubmixUnloadedFields>((TLogScope<0> *)&local_30);
    FVar8.Data = local_30.Data.AllocatorInstance.Data;
    *(undefined4 *)local_30.Data.AllocatorInstance.Data =
         *(undefined4 *)&this->MixerDevice->field_0xa0;
    pUVar11 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
    pFVar13 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pUVar11,&local_40,(UObject *)0x0);
    iVar3 = (pFVar13->Data).ArrayNum;
    if (iVar3 != 0) {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      iVar14 = iVar3 + -1;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar15);
    *(uint *)(FVar8.Data + 4) = uVar10;
    QueryPerformanceCounter(&local_48);
    *(LARGE_INTEGER *)(FVar8.Data + 8) = local_48;
    *(undefined8 *)(local_30.Data._8_8_ + 0x28) = *(undefined8 *)(local_30.Data._8_8_ + 0x20);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = (this->AudioBusSendBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->AudioBuses).field_0x48 = 0;
  pvVar5 = *(void **)&(this->AudioBuses).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AudioBuses);
  pIVar6 = (this->AudioLinkInstance).Ptr;
  if (pIVar6 != (IAudioLink *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->PatchSplitter).ConnectedOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->PatchSplitter).ConnectedOutputs.AllocatorInstance.Data,
             (this->PatchSplitter).ConnectedOutputs.ArrayNum);
  pFVar4 = (this->PatchSplitter).ConnectedOutputs.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->PatchSplitter).PendingOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->PatchSplitter).PendingOutputs.AllocatorInstance.Data,
             (this->PatchSplitter).PendingOutputs.ArrayNum);
  pFVar4 = (this->PatchSplitter).PendingOutputs.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RecordingCriticalSection);
  DestructItems<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,int>
            ((FSpectrumAnalysisDelegateInfo *)
             (this->SpectralAnalysisDelegates).AllocatorInstance.Data,
             (this->SpectralAnalysisDelegates).ArrayNum);
  pFVar4 = (this->SpectralAnalysisDelegates).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pvVar5 = *(void **)&(this->OnSubmixEnvelope).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSubmixEnvelope);
  pFVar4 = (this->RecordingData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->BufferListenerCriticalSection);
  DestructItems<TWeakPtr<ISubmixBufferListener,1>,int>
            ((TWeakPtr<ISubmixBufferListener,1> *)(this->BufferListenerPtrs).AllocatorInstance.Data,
             (this->BufferListenerPtrs).ArrayNum);
  pFVar4 = (this->BufferListenerPtrs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
            (&this->CommandQueue);
  pFVar4 = (this->DryChannelBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->MonoMixBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SpectrumAnalyzer).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->EnvelopeCriticalSection);
  pFVar4 = (this->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WetLevelMod).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DryLevelMod).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VolumeMod).DestinationData.SharedReferenceCount.ReferenceController);
  FEndpointData::~FEndpointData(&this->EndpointData);
  FSoundfieldStreams::~FSoundfieldStreams(&this->SoundfieldStreams);
  pFVar4 = (this->SourceInputBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->DownmixedBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->InputBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SubmixChainMixBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ScratchBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->MixerSourceVoices).field_0x48 = 0;
  pvVar5 = *(void **)&(this->MixerSourceVoices).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MixerSourceVoices);
  pFVar4 = (this->EffectChainOutputBuffer).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int>
            ((FSubmixEffectFadeInfo *)(this->EffectChains).AllocatorInstance.Data,
             (this->EffectChains).ArrayNum);
  pFVar4 = (this->EffectChains).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->ChildSubmixes).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ChildSubmixes).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildSubmixes);
  pTVar7 = (this->ParentSubmix).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  pFVar4 = (this->SubmixPathName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SubmixName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator() @ 1465428d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall `Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined4 local_res8 [2];
  int local_res10;
  undefined4 *local_18;
  longlong *local_10;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0xb8));
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146542915;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      local_res8[0] = *(undefined4 *)(lVar1 + 0x30);
      lVar1 = *(longlong *)this;
      local_18 = local_res8;
      local_10 = (longlong *)((longlong)this + 8);
      TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&&,TWeakPtr<Audio::FMixerSubmix,1>_const_&>_>
                ((TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x48),
                 (TPairInitializer<unsigned_int_&&,TWeakPtr<Audio::FMixerSubmix,1>_const_&> *)
                 &local_res10,(bool *)&local_18);
      if (((*(FMixerSubmix **)this)->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0) {
        Audio::FMixerSubmix::SetupSoundfieldEncodingForChild
                  (*(FMixerSubmix **)this,
                   (FChildSubmixInfo *)
                   ((longlong)local_res10 * 0x38 + 8 + *(longlong *)(lVar1 + 0x48)));
      }
    }
  }
LAB_146542915:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 146542a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall `Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong local_18;
  longlong local_10;
  
  uVar1 = *(uint *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  if (*(int *)(lVar2 + 0x590) != *(int *)(lVar2 + 0x5bc)) {
    lVar4 = *(longlong *)(lVar2 + 0x5c8);
    if (*(longlong *)(lVar2 + 0x5c8) == 0) {
      lVar4 = lVar2 + 0x5c0;
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar2 + 0x5d0) - 1U &
                             (uVar1 * 0x40 + *(int *)((longlong)this + 0xc) +
                              (uVar1 >> 2) + 0x9e3779b9 ^ uVar1)) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)
               &((TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
                  *)(lVar2 + 0x588))->Elements;
      do {
        lVar3 = (longlong)iVar5;
        if ((*(uint *)(lVar4 + lVar3 * 0x28) == uVar1) &&
           (*(int *)(lVar4 + 4 + lVar3 * 0x28) == *(int *)((longlong)this + 0xc))) {
          if (iVar5 != -1) goto LAB_146542adb;
          break;
        }
        iVar5 = *(int *)(lVar4 + 0x20 + lVar3 * 0x28);
      } while (iVar5 != -1);
    }
  }
  local_10 = (longlong)this + 0x10;
  local_18 = (longlong)this + 8;
  TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<Audio::FAudioBusKey_const_&,Audio::FPatchInput_const_&>_>
            ((TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x588),
             (TPairInitializer<Audio::FAudioBusKey_const_&,Audio::FPatchInput_const_&> *)
             &stack0x00000008,(bool *)&local_18);
LAB_146542adb:
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
            ((TArray<float,TAlignedHeapAllocator<16>_> *)(*(longlong *)this + 0x5d8),
             *(int *)(*(longlong *)this + 0x164) << 3,Default);
  return;
}

// operator() @ 146542c30

void __thiscall `Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)this;
  uVar1 = ((FAudioBusKey *)((longlong)this + 8))->ObjectId;
  uVar5 = uVar1 * 0x40 + *(int *)((longlong)this + 0xc) + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  if (*(int *)(lVar2 + 0x590) != *(int *)(lVar2 + 0x5bc)) {
    lVar4 = *(longlong *)(lVar2 + 0x5c8);
    if (*(longlong *)(lVar2 + 0x5c8) == 0) {
      lVar4 = lVar2 + 0x5c0;
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x5d0) - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)
               &((TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
                  *)(lVar2 + 0x588))->Elements;
      while ((lVar3 = (longlong)iVar6, *(uint *)(lVar4 + lVar3 * 0x28) != uVar1 ||
             (*(int *)(lVar4 + 4 + lVar3 * 0x28) != *(int *)((longlong)this + 0xc)))) {
        iVar6 = *(int *)(lVar4 + 0x20 + lVar3 * 0x28);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 != -1) {
        TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
        ::RemoveImpl<Audio::FAudioBusKey>
                  ((TSet<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,Audio::FPatchInput,0>,FDefaultSetAllocator>
                    *)(lVar2 + 0x588),uVar5,(FAudioBusKey *)((longlong)this + 8));
      }
    }
  }
  return;
}

// operator() @ 146542f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall `Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  Audio::FMixerDevice::CheckAudioRenderingThread(*(FMixerDevice **)(*(longlong *)this + 0xb8));
  lVar3 = *(longlong *)((longlong)this + 0x10);
  lVar4 = *(longlong *)this;
  uVar5 = *(undefined8 *)((longlong)this + 8);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar4 + 0x40);
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  *(longlong *)(lVar4 + 0x40) = lVar3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if (((*(FMixerSubmix **)this)->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0) {
    Audio::FMixerSubmix::SetupSoundfieldStreamForParent(*(FMixerSubmix **)this);
    return;
  }
  return;
}

// AddChildSubmix @ 1465459b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::AddChildSubmix(FMixerSubmix *this,TWeakPtr<Audio::FMixerSubmix,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMixerSubmix *pFVar4;
  longlong *plVar5;
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  local_20[1] = (longlong)this;
  local_20[2] = (longlong)pFVar4;
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerSubmix::AddChildSubmix'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[3] = (longlong)pTVar3;
  if (local_20 != (longlong *)&DAT_fffffffffffffff8) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSubmix::AddChildSubmix'::__l2::<lambda_1>,void>::
                  Call;
  }
  TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
            (&this->CommandQueue,(TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    plVar5 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar5 = local_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// AddEnvelopeFollowerDelegate @ 146546000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::AddEnvelopeFollowerDelegate(FMixerSubmix *this,FOnSubmixEnvelopeBP *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddUnique
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSubmixEnvelope,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// AddOrSetSourceVoice @ 1465460e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::AddOrSetSourceVoice
          (FMixerSubmix *this,FMixerSourceVoice *param_1,float param_2,
          EMixerSourceSubmixSendStage param_3)

{
  float local_res8;
  EMixerSourceSubmixSendStage local_resc;
  FMixerSourceVoice *local_res10 [2];
  FMixerSourceVoice **local_28;
  float *local_20;
  
  local_res10[0] = param_1;
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  local_28 = local_res10;
  local_20 = &local_res8;
  local_res8 = param_2;
  local_resc = param_3;
  TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<Audio::FMixerSourceVoice_*_const_&,Audio::FSubmixVoiceData_const_&>_>
            ((TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
              *)&this->MixerSourceVoices,
             (TPairInitializer<Audio::FMixerSourceVoice_*_const_&,Audio::FSubmixVoiceData_const_&> *
             )(local_res10 + 1),(bool *)&local_28);
  return;
}

// AddPatch @ 146546160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
Audio::FMixerSubmix::AddPatch
          (FMixerSubmix *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__,
          float param_1)

{
  if ((this->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    __return_storage_ptr__->Object = (FPatchOutput *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FPatchSplitter::AddNewPatch(&this->PatchSplitter,__return_storage_ptr__,this->NumSamples,param_1);
  return __return_storage_ptr__;
}

// AddSoundEffectSubmix @ 146546a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::AddSoundEffectSubmix
          (FMixerSubmix *this,TSharedPtr<FSoundEffectSubmix,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<Audio::FMixerSubmix::FSubmixEffectFadeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  FDynamicParameter *pFVar10;
  ulonglong uVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [4];
  uint local_b4;
  FScriptContainerElement *local_b0;
  FDynamicParameter local_a8;
  void *local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  undefined8 uStack_60;
  
  lpCriticalSection = &this->EffectChainMutationCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  if ((param_1->Object == (FSoundEffectSubmix *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = &this->EffectChains;
  local_b4 = (this->EffectChains).ArrayNum;
  uVar11 = (ulonglong)(int)local_b4;
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  iVar9 = *(int *)&param_1->Object->field_0x54;
  local_b0 = pFVar13 + uVar11 * 0x30;
  while( true ) {
    pFVar14 = local_b0;
    if ((this->EffectChains).ArrayNum != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (pFVar13 == pFVar14) break;
    iVar3 = *(int *)(pFVar13 + 8);
    plVar15 = *(longlong **)pFVar13;
    plVar16 = plVar15 + (longlong)iVar3 * 2;
    while( true ) {
      if (*(int *)(pFVar13 + 8) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FSoundEffectSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (plVar15 == plVar16) break;
      if ((*plVar15 != 0) && (*(int *)(*plVar15 + 0x54) == iVar9)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
        goto LAB_146546ec2;
      }
      plVar15 = plVar15 + 2;
    }
    pFVar13 = pFVar13 + 0x30;
    uVar11 = (ulonglong)local_b4;
  }
  this->NumSubmixEffects = this->NumSubmixEffects + 1;
  fVar7 = __real_3f800000;
  iVar9 = (this->EffectChains).ArrayNum;
  if (iVar9 < 1) {
    local_78._16_4_ = 0.0;
    local_78._20_4_ = 0.0;
    uStack_60 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_78._0_4_ = 0.0;
    local_78._4_4_ = 0.0;
    local_78._8_4_ = 0.0;
    local_78._12_4_ = 0.0;
    FDynamicParameter::FDynamicParameter((FDynamicParameter *)local_78,__real_3f800000);
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    uStack_60._0_6_ = (uint6)(uint)(float)uStack_60;
    if (((pFVar13 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar13 + (longlong)(this->EffectChains).ArrayMax * 0x30)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (this->EffectChains).ArrayNum;
    piVar2 = &(this->EffectChains).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->EffectChains).ArrayNum = iVar9 + 1;
    pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
    *(undefined8 *)pFVar13 = 0;
    *(void **)pFVar13 = local_88;
    local_88 = (void *)0x0;
    *(undefined4 *)(pFVar13 + 8) = (undefined4)local_80;
    *(undefined4 *)(pFVar13 + 0xc) = local_80._4_4_;
    local_80 = 0;
    *(undefined8 *)(pFVar13 + 0x10) = local_78._0_8_;
    *(undefined8 *)(pFVar13 + 0x18) = local_78._8_8_;
    *(undefined8 *)(pFVar13 + 0x20) = local_78._16_8_;
    *(float *)(pFVar13 + 0x28) = (float)uStack_60;
    pFVar13[0x2c] = uStack_60._4_1_;
    pFVar13[0x2d] = uStack_60._5_1_;
    DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>((TSharedPtr<FSoundEffectSubmix,1> *)0x0,0);
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    pFVar13[0x2c] = (FScriptContainerElement)0x1;
    pFVar10 = FDynamicParameter::FDynamicParameter(&local_a8,fVar7);
    uVar6 = *(undefined8 *)&pFVar10->DeltaValue;
    *(undefined8 *)(pFVar13 + 0x10) = *(undefined8 *)pFVar10;
    *(undefined8 *)(pFVar13 + 0x18) = uVar6;
    *(undefined8 *)(pFVar13 + 0x20) = *(undefined8 *)&pFVar10->DurationSec;
    *(float *)(pFVar13 + 0x28) = pFVar10->TargetValue;
    if (((*(TSharedPtr<FSoundEffectSubmix,1> **)pFVar13 <= param_1) &&
        (param_1 < *(TSharedPtr<FSoundEffectSubmix,1> **)pFVar13 + *(int *)(pFVar13 + 0xc))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = *(int *)(pFVar13 + 8);
    if (iVar9 == *(int *)(pFVar13 + 0xc)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
    }
    lVar4 = *(longlong *)pFVar13;
    *(int *)(pFVar13 + 8) = iVar9 + 1;
    *(FSoundEffectSubmix **)(lVar4 + (longlong)iVar9 * 0x10) = param_1->Object;
    pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(lVar4 + 8 + (longlong)iVar9 * 0x10) = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_146546eb6:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    pFVar14 = pFVar13 + (longlong)iVar9 * 0x30;
    while( true ) {
      if ((this->EffectChains).ArrayNum != iVar9) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_b8);
      }
      if (pFVar13 == pFVar14) goto LAB_146546eb6;
      if (pFVar13[0x2c] != (FScriptContainerElement)0x0) break;
      pFVar13 = pFVar13 + 0x30;
    }
    if (((*(TSharedPtr<FSoundEffectSubmix,1> **)pFVar13 <= param_1) &&
        (param_1 < *(TSharedPtr<FSoundEffectSubmix,1> **)pFVar13 + *(int *)(pFVar13 + 0xc))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = *(int *)(pFVar13 + 8);
    if (iVar9 == *(int *)(pFVar13 + 0xc)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
    }
    *(int *)(pFVar13 + 8) = iVar9 + 1;
    lVar4 = *(longlong *)pFVar13;
    *(FSoundEffectSubmix **)(lVar4 + (longlong)iVar9 * 0x10) = param_1->Object;
    pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(lVar4 + 8 + (longlong)iVar9 * 0x10) = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
  }
LAB_146546ec2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// AddSpectralAnalysisDelegate @ 146546f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::AddSpectralAnalysisDelegate
          (FMixerSubmix *this,FSoundSpectrumAnalyzerDelegateSettings *param_1,
          FOnSubmixSpectralAnalysisBP *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  <lambda_1> local_res18 [16];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_b8;
  undefined1 local_a8 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
  TStack_78;
  TUniquePtr<Audio::ISpectrumBandExtractor,TDefaultDelete<Audio::ISpectrumBandExtractor>_> local_68;
  ForAnyElementType FStack_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  local_50 = -1.0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  TStack_78.ArrayNum = 0;
  TStack_78.ArrayMax = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TStack_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_68.Ptr = (ISpectrumBandExtractor *)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_4c = 0.0;
  FSoundSpectrumAnalyzerDelegateSettings::operator=
            ((FSoundSpectrumAnalyzerDelegateSettings *)local_a8,param_1);
  if (__real_41f00000 <= (float)local_a8._16_4_) {
    local_a8._16_4_ = __real_41f00000;
  }
  if ((float)local_a8._16_4_ <= __real_3f800000) {
    local_a8._16_4_ = __real_3f800000;
  }
  local_4c = __real_3f800000 / (float)local_a8._16_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_30);
  local_b8.Object.ObjectIndex = *(int *)&param_2->field_0x8;
  local_b8.Object.ObjectSerialNumber = *(int *)&param_2->field_0xc;
  local_b8.FunctionName.ComparisonIndex.Value = *(uint *)&param_2->field_0x10;
  local_b8.FunctionName.Number = *(uint *)&param_2->field_0x14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_48);
  iVar6 = TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
          ::Find(&TStack_78,&local_b8);
  if (iVar6 == -1) {
    if ((TStack_78.AllocatorInstance.Data <= &local_b8) &&
       (&local_b8 <
        (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)
        (TStack_78.AllocatorInstance.Data + (longlong)TStack_78.ArrayMax * 0x10))) {
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
    iVar6 = TStack_78.ArrayNum;
    if (TStack_78.ArrayNum == TStack_78.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&TStack_78.AllocatorInstance,&TStack_78.ArrayMax);
    }
    lVar7 = (longlong)iVar6;
    TStack_78.ArrayNum = iVar6 + 1;
    *(undefined8 *)(TStack_78.AllocatorInstance.Data + lVar7 * 0x10) = 0;
    *(undefined8 *)(TStack_78.AllocatorInstance.Data + lVar7 * 0x10 + 8) = 0;
    *(FWeakObjectPtr *)(TStack_78.AllocatorInstance.Data + lVar7 * 0x10) = local_b8.Object;
    *(FName *)(TStack_78.AllocatorInstance.Data + lVar7 * 0x10 + 8) = local_b8.FunctionName;
  }
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            (&TStack_78,local_res18,Default);
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  lpCriticalSection = &this->SpectrumAnalyzerCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = &this->SpectralAnalysisDelegates;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_a8) &&
       ((FScriptContainerElement *)local_a8 <
        pFVar3 + (longlong)(this->SpectralAnalysisDelegates).ArrayMax * 0x60)) {
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
    iVar6 = (this->SpectralAnalysisDelegates).ArrayNum;
    piVar1 = &(this->SpectralAnalysisDelegates).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->SpectralAnalysisDelegates).ArrayNum = iVar6 + 1;
    FSpectrumAnalysisDelegateInfo::FSpectrumAnalysisDelegateInfo
              ((FSpectrumAnalysisDelegateInfo *)
               ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x60),
               (FSpectrumAnalysisDelegateInfo *)local_a8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (FStack_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_60.Data);
    }
    if (local_68.Ptr != (ISpectrumBandExtractor *)0x0) {
      (**(code **)*local_68.Ptr)(local_68.Ptr,1);
    }
    if ((TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)TStack_78.AllocatorInstance.Data !=
        (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free(TStack_78.AllocatorInstance.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// BroadcastDelegates @ 146547f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::BroadcastDelegates(FMixerSubmix *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  ISpectrumBandExtractor *pIVar2;
  void *_Src;
  code *pcVar3;
  uint uVar4;
  TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FAsyncSpectrumAnalyzer *local_res20;
  ForAnyElementType local_128;
  undefined8 local_120;
  TArray<float,TSizedDefaultAllocator<32>_> local_118;
  longlong local_108;
  TArray<float,TSizedDefaultAllocator<32>_> local_100;
  TArray<float,TSizedDefaultAllocator<32>_> local_f0;
  TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
  *local_e0;
  LARGE_INTEGER local_d8;
  TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
  *local_d0;
  LPCRITICAL_SECTION local_c8;
  FReadAccessScope local_c0;
  FReadAccessScope local_a8 [4];
  
  if (this->bIsEnvelopeFollowing != (FThreadSafeBool)0x0) {
    lpCriticalSection = &this->EnvelopeCriticalSection;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (0 < this->EnvelopeNumChannels) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,this->EnvelopeNumChannels,&local_f0.AllocatorInstance,&local_f0.ArrayNum,
                 &local_f0.ArrayMax);
      memcpy(local_f0.AllocatorInstance.Data,this->EnvelopeValues,
             (longlong)this->EnvelopeNumChannels << 2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSubmixEnvelope,
               &local_c0);
    iVar12 = *(int *)&(this->OnSubmixEnvelope).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_c0);
    if (0 < iVar12) {
      FOnSubmixEnvelope_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSubmixEnvelope,
                 &local_f0);
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
  }
  if (this->bIsSpectrumAnalyzing == (FThreadSafeBool)0x0) {
    return;
  }
  lpCriticalSection_00 = (LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection;
  local_c8 = lpCriticalSection_00;
  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection_00);
  if (0 < (this->SpectralAnalysisDelegates).ArrayNum) {
    if ((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) {
      local_res8[0] = 0;
      bVar6 = `Audio::FMixerSubmix::BroadcastDelegates'::__l19::<lambda_1>::operator()(local_res8);
      if (!bVar6) goto LAB_1465485b2;
    }
    local_res20 = (this->SpectrumAnalyzer).Object;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    FAsyncSpectrumAnalyzer::LockOutputBuffer(local_res20);
    iVar12 = (this->SpectralAnalysisDelegates).ArrayNum;
    pFVar16 = (this->SpectralAnalysisDelegates).AllocatorInstance.Data;
    pFVar13 = pFVar16 + (longlong)iVar12 * 0x60;
    while( true ) {
      if ((this->SpectralAnalysisDelegates).ArrayNum != iVar12) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar16 == pFVar13) break;
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      QueryPerformanceCounter(&local_d8);
      if ((*(float *)(pFVar16 + 0x58) <= 0.0) ||
         (*(float *)(pFVar16 + 0x5c) <=
          (float)((double)(ulonglong)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle64) -
          *(float *)(pFVar16 + 0x58))) {
        pIVar2 = *(ISpectrumBandExtractor **)(pFVar16 + 0x40);
        *(float *)(pFVar16 + 0x58) =
             (float)((double)(ulonglong)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle64)
        ;
        if (pIVar2 == (ISpectrumBandExtractor *)0x0) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4330698859807246975>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                             ,0xa7f,"DelegateInfo.SpectrumBandExtractor.IsValid()");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FAsyncSpectrumAnalyzer::GetBands((this->SpectrumAnalyzer).Object,pIVar2,&local_118);
        }
        iVar7 = (int)local_120;
        if ((int)local_120 == local_120._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_128,(int *)((longlong)&local_120 + 4));
        }
        local_120 = CONCAT44(local_120._4_4_,iVar7 + 1);
        lVar9 = (longlong)iVar7;
        *(FScriptContainerElement **)(local_128.Data + lVar9 * 0x18) = pFVar16;
        *(undefined8 *)(local_128.Data + lVar9 * 0x18 + 8) = 0;
        *(FScriptContainerElement **)(local_128.Data + lVar9 * 0x18 + 8) =
             local_118.AllocatorInstance.Data;
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_128.Data + lVar9 * 0x18 + 0x10) = local_118.ArrayNum;
        *(int *)(local_128.Data + lVar9 * 0x18 + 0x14) = local_118.ArrayMax;
        local_118.ArrayNum = 0;
        local_118.ArrayMax = 0;
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      pFVar16 = pFVar16 + 0x60;
    }
    FAsyncSpectrumAnalyzer::UnlockOutputBuffer(local_res20);
    uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar10 = (ulonglong)(int)local_120;
    local_res20 = (FAsyncSpectrumAnalyzer *)CONCAT44(local_res20._4_4_,(int)local_120);
    local_d0 = (TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
                *)(local_128.Data + uVar10 * 0x18);
    FVar17.Data = local_128.Data;
    while( true ) {
      pTVar5 = local_d0;
      uVar18 = 0;
      local_e0 = (TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
                  *)FVar17.Data;
      if ((int)local_120 != (int)uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
           *)FVar17.Data == pTVar5) break;
      local_100.ArrayNum =
           *(int *)&((TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
                      *)FVar17.Data)->field_0x10;
      lVar9 = (longlong)local_100.ArrayNum;
      local_108 = *(longlong *)FVar17.Data;
      _Src = *(void **)&((TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
                          *)FVar17.Data)->field_0x8;
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_100.ArrayNum == 0) {
        local_100.ArrayMax = 0;
        iVar12 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_100.ArrayNum,0,&local_100.AllocatorInstance,local_100.ArrayNum,
                   &local_100.ArrayMax);
        memcpy(local_100.AllocatorInstance.Data,_Src,lVar9 << 2);
        iVar12 = local_100.ArrayNum;
      }
      lVar9 = local_108;
      lVar14 = 0;
      if (0 < iVar12) {
        lVar15 = 0;
        do {
          if ((int)uVar18 < *(int *)(lVar9 + 0x50)) {
            if (((int)uVar18 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               iVar12 = local_100.ArrayNum, bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar11 = *(longlong *)(lVar9 + 0x48) + lVar15;
            uVar8 = 0;
            if ((int)uVar18 < iVar12) {
              uVar8 = ~uVar18 >> 0x1f;
            }
            if ((uVar8 == 0) &&
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
            iVar12 = *(int *)(lVar11 + 0x1c);
            fVar20 = *(float *)(local_100.AllocatorInstance.Data + lVar14 * 4);
            if (iVar12 == 0) {
              fVar20 = fVar20 * fVar20 * *(float *)(lVar11 + 0x2c) +
                       *(float *)(lVar11 + 0x28) * *(float *)(lVar11 + 0x20);
              *(float *)(lVar11 + 0x20) = fVar20;
            }
            else if (iVar12 == 1) {
              fVar20 = fVar20 * fVar20 * *(float *)(lVar11 + 0x2c) +
                       *(float *)(lVar11 + 0x28) * *(float *)(lVar11 + 0x20);
              *(float *)(lVar11 + 0x20) = fVar20;
              fVar20 = SQRT(fVar20);
            }
            else if (iVar12 == 2) {
              fVar20 = (float)((uint)fVar20 & uVar4);
            }
            else {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                                 ,0x1bf,L"");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            fVar19 = *(float *)(lVar11 + 0x18) - fVar20;
            if (0.0 < fVar19) {
              fVar1 = *(float *)(lVar11 + 0xc);
            }
            else {
              fVar1 = *(float *)(lVar11 + 4);
            }
            fVar20 = fVar19 * fVar1 + fVar20;
            *(float *)(lVar11 + 0x18) = fVar20;
            uVar8 = 0;
            if ((int)uVar18 < local_100.ArrayNum) {
              uVar8 = ~uVar18 >> 0x1f;
            }
            if ((uVar8 == 0) &&
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
            *(float *)(local_100.AllocatorInstance.Data + lVar14 * 4) = fVar20;
          }
          else {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4330698859807246991>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                               ,0xa8f,"ResultIndex < DelegateInfo->SpectralBands.Num()");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar18 = uVar18 + 1;
          lVar14 = lVar14 + 1;
          lVar15 = lVar15 + 0x30;
          FVar17.Data = (FScriptContainerElement *)local_e0;
          iVar12 = local_100.ArrayNum;
        } while ((int)uVar18 < local_100.ArrayNum);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar9 + 0x28),local_a8);
      iVar12 = *(int *)(lVar9 + 0x38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_a8);
      if (0 < iVar12) {
        FOnSubmixSpectralAnalysis_DelegateWrapper
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar9 + 0x28),&local_100
                  );
      }
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      uVar10 = (ulonglong)local_res20 & 0xffffffff;
      FVar17.Data = FVar17.Data + 0x18;
    }
    DestructItems<TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>,int>
              ((TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
                *)local_128.Data,(int)local_120);
    lpCriticalSection_00 = local_c8;
    if ((TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
         *)local_128.Data !=
        (TTuple<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo_*,TArray<float,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      FMemory::Free(local_128.Data);
    }
  }
LAB_1465485b2:
  LeaveCriticalSection(lpCriticalSection_00);
  return;
}

// ClearSoundEffectSubmixes @ 146549780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::ClearSoundEffectSubmixes(FMixerSubmix *this)

{
  TArray<Audio::FMixerSubmix::FSubmixEffectFadeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSubmixEffectFadeInfo *pFVar6;
  code *pcVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TSharedPtr<FSoundEffectSubmix,1> *pTVar11;
  FScriptContainerElement *pFVar12;
  TSharedPtr<FSoundEffectSubmix,1> *pTVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  LPCRITICAL_SECTION local_res20;
  ForAnyElementType local_88;
  int local_80;
  int iStack_7c;
  code *local_78 [2];
  undefined **local_68;
  TSharedPtr<FSoundEffectSubmix,1> *local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  
  local_res20 = (LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection;
  if (local_res20 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res20);
  pTVar1 = &this->EffectChains;
  iVar3 = (this->EffectChains).ArrayNum;
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  iStack_7c = 0;
  pFVar12 = pFVar10 + (longlong)iVar3 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    lpCriticalSection = local_res20;
    if (pFVar10 == pFVar12) break;
    iVar4 = *(int *)(pFVar10 + 8);
    pTVar11 = *(TSharedPtr<FSoundEffectSubmix,1> **)pFVar10;
    pTVar13 = pTVar11 + iVar4;
    while( true ) {
      if (*(int *)(pFVar10 + 8) != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FSoundEffectSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pTVar11 == pTVar13) break;
      if (pTVar11->Object != (FSoundEffectSubmix *)0x0) {
        if ((local_88.Data <= pTVar11) &&
           (pTVar11 < (TSharedPtr<FSoundEffectSubmix,1> *)
                      (local_88.Data + (longlong)iStack_7c * 0x10))) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_80 == iStack_7c) {
          local_80 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_88,&iStack_7c);
        }
        lVar9 = (longlong)local_80;
        local_80 = local_80 + 1;
        *(FSoundEffectSubmix **)&local_88.Data[lVar9 * 0x10].field_0x0 = pTVar11->Object;
        pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
        *(TReferenceControllerBase<1> **)(local_88.Data + lVar9 * 0x10 + 8) = pTVar5;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      pTVar11 = pTVar11 + 1;
    }
    if (*(int *)(pFVar10 + 0xc) < 0) {
      DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
                (*(TSharedPtr<FSoundEffectSubmix,1> **)pFVar10,*(int *)(pFVar10 + 8));
      *(undefined4 *)(pFVar10 + 8) = 0;
      if (*(int *)(pFVar10 + 0xc) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)pFVar10,0,(int *)(pFVar10 + 0xc));
      }
      pFVar10 = pFVar10 + 0x30;
    }
    else {
      DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
                (*(TSharedPtr<FSoundEffectSubmix,1> **)pFVar10,*(int *)(pFVar10 + 8));
      *(undefined4 *)(pFVar10 + 8) = 0;
      pFVar10 = pFVar10 + 0x30;
    }
  }
  if (local_80 != 0) {
    local_54 = iStack_7c;
    local_60 = (TSharedPtr<FSoundEffectSubmix,1> *)local_88.Data;
    local_58 = local_80;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::__l16::<lambda_1>,void>
                  ::Call;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    iStack_7c = 0;
    local_50 = 0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerSubmix::ClearSoundEffectSubmixes'::`16'::<lambda_1>,1,0>
                ::_vftable_;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_78);
    DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>((TSharedPtr<FSoundEffectSubmix,1> *)0x0,0);
  }
  piVar2 = &(this->EffectChains).ArrayMax;
  this->NumSubmixEffects = 0;
  pFVar6 = (FSubmixEffectFadeInfo *)(pTVar1->AllocatorInstance).Data;
  iVar3 = (this->EffectChains).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int>(pFVar6,iVar3);
    (this->EffectChains).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int>(pFVar6,iVar3);
    (this->EffectChains).ArrayNum = 0;
  }
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
            ((TSharedPtr<FSoundEffectSubmix,1> *)local_88.Data,local_80);
  if ((TSharedPtr<FSoundEffectSubmix,1> *)local_88.Data != (TSharedPtr<FSoundEffectSubmix,1> *)0x0)
  {
    FMemory::Free(local_88.Data);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ClearSubmixEffectChainOverride @ 146549a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::ClearSubmixEffectChainOverride(FMixerSubmix *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->EffectChainMutationCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar2 = __real_3f800000;
  iVar1 = (this->EffectChains).ArrayNum;
  pFVar4 = (this->EffectChains).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    fVar5 = fVar2;
    if (pFVar4[0x2d] == (FScriptContainerElement)0x0) {
      fVar5 = 0.0;
    }
    pFVar4[0x2c] = (FScriptContainerElement)(pFVar4[0x2d] != (FScriptContainerElement)0x0);
    FDynamicParameter::Set((FDynamicParameter *)(pFVar4 + 0x10),fVar5,param_1);
    pFVar4 = pFVar4 + 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x000146549b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// DownmixBuffer @ 146552b70

void __cdecl
Audio::FMixerSubmix::DownmixBuffer
          (int param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2,int param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  TArray<float,TAlignedHeapAllocator<16>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FMixerDevice::Get2DChannelMap(false,param_1,param_3,false,&local_18);
  Audio::DownmixBuffer(param_1,param_3,param_2,param_4,(float *)local_18.AllocatorInstance.Data);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GenerateEffectChainAudio @ 146554860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
Audio::FMixerSubmix::GenerateEffectChainAudio
          (FMixerSubmix *this,FSoundEffectSubmixInputData *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<TSharedPtr<FSoundEffectSubmix,1>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  USoundEffectPreset *pUVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar15;
  float fVar16;
  FSoundEffectSubmixOutputData local_e8;
  FString local_d8;
  FName local_c8 [2];
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [3];
  
  pTVar15 = param_4;
  if ((param_2->ArrayNum != param_4->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudioBuffer.Num() == OutBuffer.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x70e,
                         L"Processing effect chain audio must not alter the number of samples in a buffer. Buffer size mismatch InAudioBuffer[%d] != OutBuffer[%d]"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pTVar2 = &this->ScratchBuffer;
  if (pTVar2 != param_2) {
    iVar9 = param_2->ArrayNum;
    piVar1 = &(this->ScratchBuffer).ArrayMax;
    pFVar14 = (param_2->AllocatorInstance).Data;
    (this->ScratchBuffer).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar9,*piVar1,&pTVar2->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar14,(longlong)iVar9 << 2);
      }
    }
  }
  bVar6 = false;
  local_e8.NumChannels = this->NumChannels;
  iVar9 = pTVar15->ArrayNum / local_e8.NumChannels;
  pFVar14 = (param_3->AllocatorInstance).Data;
  uVar3 = param_3->ArrayNum;
  uVar11 = (ulonglong)(int)uVar3;
  pFVar13 = pFVar14 + uVar11 * 0x10;
  local_e8.AudioBuffer = pTVar15;
  do {
    if (param_3->ArrayNum != (int)uVar11) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<TSharedPtr<FSoundEffectSubmix,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_4);
    }
    if (pFVar14 == pFVar13) {
      return bVar6;
    }
    if (*(longlong **)pFVar14 != (longlong *)0x0) {
      iVar10 = (**(code **)(**(longlong **)pFVar14 + 0x30))();
      if ((iVar10 == -1) || (iVar10 == this->NumChannels)) {
        iVar10 = this->NumChannels;
        pTVar15 = pTVar2;
      }
      else {
        pTVar15 = &this->DownmixedBuffer;
        TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
                  (pTVar15,iVar10 * iVar9,Default);
        DownmixBuffer(this->NumChannels,pTVar2,iVar10,pTVar15);
      }
      param_1->NumChannels = iVar10;
      param_1->AudioBuffer = pTVar15;
      if ((*(longlong *)pFVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      bVar8 = FSoundEffectSubmix::ProcessAudio(*(FSoundEffectSubmix **)pFVar14,param_1,&local_e8);
      if (bVar8) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          FCheckedBufferState::FCheckedBufferState
                    (&BufferCheck1847,0x737,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                     ,L"Submix Effects",None,Ensure);
          _Init_thread_footer(&::_TSS1);
        }
        local_b8 = ((local_e8.AudioBuffer)->AllocatorInstance).Data;
        iVar10 = (local_e8.AudioBuffer)->ArrayNum;
        if ((iVar10 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_88._12_4_ = uStack_ac;
        local_88.ArrayNum = iVar10;
        local_88.DataPtr = (float *)local_b8;
        iStack_b0 = iVar10;
        bVar6 = FCheckedBufferState::DoCheck(&BufferCheck1847,&local_88);
        if (!bVar6) {
          if ((*(longlong *)pFVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pUVar12 = FSoundEffectBase::GetPreset(*(FSoundEffectBase **)pFVar14);
          if (pUVar12 == (USoundEffectPreset *)0x0) {
            ::FString::FString(&local_d8,L"None");
          }
          else {
            local_c8[0] = (FName)pUVar12->_padding_;
            ::FName::ToString(local_c8,&local_d8);
          }
          FCheckedBufferState::FailedBufferCheckImpl(&BufferCheck1847,L"FxPreset=%s, Submix=%s");
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        if ((*(longlong *)pFVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        fVar16 = (float)(**(code **)(**(longlong **)pFVar14 + 0x40))();
        if (0.0 < fVar16) {
          local_a8 = ((local_e8.AudioBuffer)->AllocatorInstance).Data;
          iVar10 = (local_e8.AudioBuffer)->ArrayNum;
          if ((iVar10 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_98 = (pTVar2->AllocatorInstance).Data;
          iVar4 = (this->ScratchBuffer).ArrayNum;
          iStack_a0 = iVar10;
          if ((iVar4 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_78._12_4_ = uStack_9c;
          local_78.ArrayNum = iStack_a0;
          local_68[0]._12_4_ = uStack_8c;
          local_68[0].ArrayNum = iVar4;
          local_68[0].DataPtr = (float *)local_98;
          local_78.DataPtr = (float *)local_a8;
          iStack_90 = iVar4;
          ArrayMixIn(local_68,&local_78,fVar16);
        }
        memcpy((pTVar2->AllocatorInstance).Data,((local_e8.AudioBuffer)->AllocatorInstance).Data,
               (longlong)this->NumSamples << 2);
        bVar6 = true;
      }
    }
    uVar11 = (ulonglong)uVar3;
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}

// GetDefaultPositionalDataForAudioDevice @ 1465573e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FSoundfieldSpeakerPositionalData * __thiscall
Audio::FMixerSubmix::GetDefaultPositionalDataForAudioDevice
          (FMixerSubmix *this,FSoundfieldSpeakerPositionalData *__return_storage_ptr__)

{
  int iVar1;
  FMixerDevice *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  
  dVar4 = UE::Math::TQuat<double>::Identity.W;
  dVar3 = UE::Math::TQuat<double>::Identity.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  this_00 = this->MixerDevice;
  (__return_storage_ptr__->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (__return_storage_ptr__->Rotation).Y = dVar2;
  __return_storage_ptr__->ChannelPositions =
       (TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->Rotation).Z = dVar3;
  (__return_storage_ptr__->Rotation).W = dVar4;
  iVar1 = (this_00->PlatformInfo).NumChannels;
  __return_storage_ptr__->NumChannels = iVar1;
  pTVar5 = FMixerDevice::GetDefaultPositionMap(this_00,iVar1);
  dVar4 = UE::Math::TQuat<double>::Identity.W;
  dVar3 = UE::Math::TQuat<double>::Identity.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (__return_storage_ptr__->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (__return_storage_ptr__->Rotation).Y = dVar2;
  __return_storage_ptr__->ChannelPositions = pTVar5;
  (__return_storage_ptr__->Rotation).Z = dVar3;
  (__return_storage_ptr__->Rotation).W = dVar4;
  return __return_storage_ptr__;
}

// GetInitializationParamsForSoundfieldStream @ 1465586f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FAudioPluginInitializationParams * __thiscall
Audio::FMixerSubmix::GetInitializationParamsForSoundfieldStream
          (FMixerSubmix *this,FAudioPluginInitializationParams *__return_storage_ptr__)

{
  int iVar1;
  FMixerDevice *pFVar2;
  uint uVar3;
  float fVar4;
  
  pFVar2 = this->MixerDevice;
  __return_storage_ptr__->AudioDevicePtr = (FAudioDevice *)pFVar2;
  if (pFVar2 == (FMixerDevice *)0x0) {
    uVar3 = 0;
    fVar4 = 0.0;
    __return_storage_ptr__->BufferLength = 0;
  }
  else {
    iVar1 = *(int *)&pFVar2->field_0x84;
    __return_storage_ptr__->BufferLength = *(uint *)&pFVar2->field_0x8c;
    uVar3 = (pFVar2->PlatformInfo).NumChannels;
    fVar4 = (float)iVar1;
  }
  __return_storage_ptr__->NumOutputChannels = uVar3;
  __return_storage_ptr__->NumSources = 1;
  __return_storage_ptr__->SampleRate = (uint)(longlong)fVar4;
  return __return_storage_ptr__;
}

// GetKeyForSubmixEncoding @ 146558a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FSoundfieldEncodingKey * __thiscall
Audio::FMixerSubmix::GetKeyForSubmixEncoding
          (FMixerSubmix *this,FSoundfieldEncodingKey *__return_storage_ptr__)

{
  TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
  *pTVar1;
  ISoundfieldFactory *pIVar2;
  ISoundfieldEncodingSettingsProxy *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSoundfieldEncodingKey *pFVar7;
  FName FVar8;
  undefined1 local_res8 [16];
  
  pTVar1 = &(this->SoundfieldStreams).Settings;
  if ((((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) ||
      (pTVar1->Ptr == (ISoundfieldEncodingSettingsProxy *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSoundfieldSubmix() && SoundfieldStreams.Settings.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0xaa3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FSoundfieldEncodingKey *)(*pcVar4)();
    return pFVar7;
  }
  pIVar2 = (this->SoundfieldStreams).Factory;
  pIVar3 = pTVar1->Ptr;
  if (pIVar2 == (ISoundfieldFactory *)0x0) {
    FVar8 = ISoundfieldFactory::GetFormatNameForNoEncoding();
  }
  else {
    FVar8 = (FName)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->SoundfieldFormat = *(FName *)FVar8;
  iVar6 = (**(code **)((longlong)*pIVar3 + 8))(pIVar3);
  __return_storage_ptr__->EncodingSettingsID = iVar6;
  return __return_storage_ptr__;
}

// GetMagnitudeForFrequencies @ 146558bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::GetMagnitudeForFrequencies
          (FMixerSubmix *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  EFFTPeakInterpolationMethod EVar1;
  FAsyncSpectrumAnalyzer *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  EPeakInterpolationMethod local_res8;
  
  if (&this->SpectrumAnalyzerCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection);
  if ((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    EVar1 = (this->SpectrumAnalyzerSettings).InterpolationMethod;
    if (EVar1 == NearestNeighbor) {
      local_res8 = NearestNeighbor;
    }
    else if ((EVar1 == Linear) || (EVar1 != Quadratic)) {
      local_res8 = Linear;
    }
    else {
      local_res8 = Quadratic;
    }
    uVar6 = 0;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1->ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
               &param_2->ArrayMax);
    if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FAsyncSpectrumAnalyzer::LockOutputBuffer((this->SpectrumAnalyzer).Object);
    uVar7 = uVar6;
    if (0 < param_1->ArrayNum) {
      do {
        if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (this->SpectrumAnalyzer).Object;
        uVar5 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar8 = FAsyncSpectrumAnalyzer::GetMagnitudeForFrequency
                          (this_00,*(float *)((param_1->AllocatorInstance).Data + uVar7),local_res8)
        ;
        uVar4 = 0;
        if ((int)uVar5 < param_2->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = (ulonglong)(uVar5 + 1);
        *(float *)((param_2->AllocatorInstance).Data + uVar7) = fVar8;
        uVar7 = uVar7 + 4;
      } while ((int)(uVar5 + 1) < param_1->ArrayNum);
    }
    if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FAsyncSpectrumAnalyzer::UnlockOutputBuffer((this->SpectrumAnalyzer).Object);
  }
                    /* WARNING: Could not recover jumptable at 0x000146558e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection);
  return;
}

// GetNumChainEffects @ 146559220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall Audio::FMixerSubmix::GetNumChainEffects(FMixerSubmix *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->EffectChainMutationCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->EffectChains).ArrayNum;
  pFVar3 = (this->EffectChains).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3[0x2c] != (FScriptContainerElement)0x0) {
      iVar2 = *(int *)(pFVar3 + 8);
LAB_146559292:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return iVar2;
    }
    pFVar3 = pFVar3 + 0x30;
  }
  iVar2 = 0;
  goto LAB_146559292;
}

// GetNumEffects @ 146559310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall Audio::FMixerSubmix::GetNumEffects(FMixerSubmix *this)

{
  return this->NumSubmixEffects;
}

// GetNumOutputChannels @ 146559350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall Audio::FMixerSubmix::GetNumOutputChannels(FMixerSubmix *this)

{
  return (this->MixerDevice->PlatformInfo).NumChannels;
}

// GetNumSourceVoices @ 146559550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall Audio::FMixerSubmix::GetNumSourceVoices(FMixerSubmix *this)

{
  return *(int *)&(this->MixerSourceVoices).field_0x8 -
         *(int *)&(this->MixerSourceVoices).field_0x34;
}

// GetOutputVolumeDestination @ 146559cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FModulationDestination * __thiscall
Audio::FMixerSubmix::GetOutputVolumeDestination(FMixerSubmix *this)

{
  return &this->VolumeMod;
}

// GetParentSubmix @ 146559d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TWeakPtr<Audio::FMixerSubmix,1> * __thiscall
Audio::FMixerSubmix::GetParentSubmix
          (FMixerSubmix *this,TWeakPtr<Audio::FMixerSubmix,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->ParentSubmix).Object;
  pTVar1 = (this->ParentSubmix).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPhaseForFrequencies @ 146559d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::GetPhaseForFrequencies
          (FMixerSubmix *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  EFFTPeakInterpolationMethod EVar1;
  FAsyncSpectrumAnalyzer *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  EPeakInterpolationMethod local_res8;
  
  if (&this->SpectrumAnalyzerCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection);
  if ((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    EVar1 = (this->SpectrumAnalyzerSettings).InterpolationMethod;
    if (EVar1 == NearestNeighbor) {
      local_res8 = NearestNeighbor;
    }
    else if ((EVar1 == Linear) || (EVar1 != Quadratic)) {
      local_res8 = Linear;
    }
    else {
      local_res8 = Quadratic;
    }
    uVar6 = 0;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1->ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
               &param_2->ArrayMax);
    if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FAsyncSpectrumAnalyzer::LockOutputBuffer((this->SpectrumAnalyzer).Object);
    uVar7 = uVar6;
    if (0 < param_1->ArrayNum) {
      do {
        if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (this->SpectrumAnalyzer).Object;
        uVar5 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar8 = FAsyncSpectrumAnalyzer::GetPhaseForFrequency
                          (this_00,*(float *)((param_1->AllocatorInstance).Data + uVar7),local_res8)
        ;
        uVar4 = 0;
        if ((int)uVar5 < param_2->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = (ulonglong)(uVar5 + 1);
        *(float *)((param_2->AllocatorInstance).Data + uVar7) = fVar8;
        uVar7 = uVar7 + 4;
      } while ((int)(uVar5 + 1) < param_1->ArrayNum);
    }
    if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FAsyncSpectrumAnalyzer::UnlockOutputBuffer((this->SpectrumAnalyzer).Object);
  }
                    /* WARNING: Could not recover jumptable at 0x000146559fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection);
  return;
}

// GetSampleRate @ 14655a880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall Audio::FMixerSubmix::GetSampleRate(FMixerSubmix *this)

{
  int iVar1;
  
  iVar1 = FMixerDevice::GetDeviceSampleRate(this->MixerDevice);
  return iVar1;
}

// GetSizeOfSubmixChain @ 14655aa80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall Audio::FMixerSubmix::GetSizeOfSubmixChain(FMixerSubmix *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EffectChains).ArrayNum;
  pFVar2 = (this->EffectChains).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x2c] != (FScriptContainerElement)0x0) {
      return *(int *)(pFVar2 + 8);
    }
    pFVar2 = pFVar2 + 0x30;
  }
  return 0;
}

// GetSoundfieldFactory @ 14655b1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

ISoundfieldFactory * __thiscall Audio::FMixerSubmix::GetSoundfieldFactory(FMixerSubmix *this)

{
  return (this->SoundfieldStreams).Factory;
}

// GetSoundfieldFormat @ 14655b1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FName __thiscall Audio::FMixerSubmix::GetSoundfieldFormat(FMixerSubmix *this)

{
  ISoundfieldFactory *pIVar1;
  FName in_RDX;
  
  pIVar1 = (this->SoundfieldStreams).Factory;
  if (pIVar1 != (ISoundfieldFactory *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))();
    return in_RDX;
  }
  ISoundfieldFactory::GetFormatNameForNoEncoding();
  return in_RDX;
}

// GetSoundfieldSettings @ 14655b350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

ISoundfieldEncodingSettingsProxy * __thiscall
Audio::FMixerSubmix::GetSoundfieldSettings(FMixerSubmix *this)

{
  code *pcVar1;
  bool bVar2;
  ISoundfieldEncodingSettingsProxy *pIVar3;
  
  if ((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSoundfieldSubmix()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x45a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISoundfieldEncodingSettingsProxy *)(*pcVar1)();
      return pIVar3;
    }
  }
  if ((this->SoundfieldStreams).Settings.Ptr == (ISoundfieldEncodingSettingsProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundfieldStreams.Settings.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x45b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISoundfieldEncodingSettingsProxy *)(*pcVar1)();
      return pIVar3;
    }
  }
  return (this->SoundfieldStreams).Settings.Ptr;
}

// GetSubmixChannels @ 14655b690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

int __thiscall Audio::FMixerSubmix::GetSubmixChannels(FMixerSubmix *this)

{
  return this->NumChannels;
}

// GetSubmixEffect @ 14655b6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<FSoundEffectSubmix,1> * __thiscall
Audio::FMixerSubmix::GetSubmixEffect
          (FMixerSubmix *this,TSharedPtr<FSoundEffectSubmix,1> *__return_storage_ptr__,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FSoundEffectSubmix,1> *pTVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->EffectChainMutationCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->EffectChains).ArrayNum;
  pFVar7 = (this->EffectChains).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if ((pFVar7[0x2c] != (FScriptContainerElement)0x0) && (param_1 < *(int *)(pFVar7 + 8))) {
      if (param_1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FSoundEffectSubmix,1> *)(*pcVar3)();
          return pTVar5;
        }
      }
      puVar6 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)pFVar7);
      __return_storage_ptr__->Object = (FSoundEffectSubmix *)*puVar6;
      pTVar2 = (TReferenceControllerBase<1> *)puVar6[1];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_14655b789:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
    pFVar7 = pFVar7 + 0x30;
  }
  __return_storage_ptr__->Object = (FSoundEffectSubmix *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  goto LAB_14655b789;
}

// GetTranscoderForChildSubmix @ 14655bb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> __thiscall
Audio::FMixerSubmix::GetTranscoderForChildSubmix
          (FMixerSubmix *this,TSharedPtr<Audio::FMixerSubmix,1> *param_1)

{
  ISoundfieldFactory *pIVar1;
  ISoundfieldFactory *pIVar2;
  ISoundfieldFactory *pIVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> TVar8;
  ISoundfieldEncodingSettingsProxy *pIVar9;
  undefined8 *puVar10;
  FMixerSubmix *pFVar11;
  ISoundfieldEncodingSettingsProxy *pIVar12;
  TSharedPtr<Audio::FMixerSubmix,1> *in_R8;
  float fVar13;
  longlong local_res8;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  FMixerDevice *local_88;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  FMixerDevice *local_70;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  FMixerDevice *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  if ((in_R8->Object == (FMixerSubmix *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChildSubmix.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x47c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
    return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
           TVar8.Ptr;
  }
  if ((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) {
LAB_14655bba9:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSoundfieldSubmix() && InChildSubmix->IsSoundfieldSubmix()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x47d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
  }
  else {
    if ((in_R8->Object == (FMixerSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
    if ((in_R8->Object->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) goto LAB_14655bba9;
  }
  if ((this->SoundfieldStreams).Settings.Ptr != (ISoundfieldEncodingSettingsProxy *)0x0) {
    if ((in_R8->Object == (FMixerSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
    if ((in_R8->Object->SoundfieldStreams).Settings.Ptr != (ISoundfieldEncodingSettingsProxy *)0x0)
    goto LAB_14655bc38;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("SoundfieldStreams.Settings.IsValid() && InChildSubmix->SoundfieldStreams.Settings.IsValid()"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                     ,0x47e,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
    return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
           TVar8.Ptr;
  }
LAB_14655bc38:
  if ((in_R8->Object == (FMixerSubmix *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
    return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
           TVar8.Ptr;
  }
  pIVar1 = (in_R8->Object->SoundfieldStreams).Factory;
  if (pIVar1 == (ISoundfieldFactory *)0x0) {
    ISoundfieldFactory::GetFormatNameForNoEncoding();
  }
  else {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
  }
  pIVar1 = (this->SoundfieldStreams).Factory;
  if (pIVar1 == (ISoundfieldFactory *)0x0) {
    ISoundfieldFactory::GetFormatNameForNoEncoding();
  }
  else {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res18);
  }
  if (local_res18 == local_res8) {
    pIVar1 = (this->SoundfieldStreams).Factory;
    pIVar9 = (this->SoundfieldStreams).Settings.Ptr;
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x38);
    if ((in_R8->Object == (FMixerSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
    cVar7 = (*pcVar5)(pIVar1,(in_R8->Object->SoundfieldStreams).Settings.Ptr,pIVar9);
    if (cVar7 != '\0') {
      local_58 = this->MixerDevice;
      if (local_58 == (FMixerDevice *)0x0) {
        fVar13 = 0.0;
        local_5c = 0;
        local_64 = 0;
      }
      else {
        local_5c = *(undefined4 *)&local_58->field_0x8c;
        local_64 = (local_58->PlatformInfo).NumChannels;
        fVar13 = (float)*(int *)&local_58->field_0x84;
      }
      pIVar1 = (this->SoundfieldStreams).Factory;
      local_68 = 1;
      local_60 = (undefined4)(longlong)fVar13;
      pcVar5 = *(code **)((longlong)*pIVar1 + 0x20);
      pIVar9 = GetSoundfieldSettings(this);
      pIVar2 = (this->SoundfieldStreams).Factory;
      puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_40);
      uVar4 = *puVar10;
      if ((in_R8->Object == (FMixerSubmix *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
        return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
               TVar8.Ptr;
      }
      pIVar12 = GetSoundfieldSettings(in_R8->Object);
      if ((in_R8->Object == (FMixerSubmix *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
        return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
               TVar8.Ptr;
      }
      pIVar2 = (in_R8->Object->SoundfieldStreams).Factory;
      if (pIVar2 == (ISoundfieldFactory *)0x0) {
        ISoundfieldFactory::GetFormatNameForNoEncoding();
      }
      else {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_a0);
      }
      (*pcVar5)(pIVar1,param_1,local_a0,pIVar12,uVar4,pIVar9,&local_68);
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             (ISoundfieldTranscodeStream *)param_1;
    }
  }
  else {
    if ((in_R8->Object == (FMixerSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
    pIVar1 = (this->SoundfieldStreams).Factory;
    pIVar2 = (in_R8->Object->SoundfieldStreams).Factory;
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x40);
    if ((in_R8->Object == (FMixerSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
    pIVar9 = (in_R8->Object->SoundfieldStreams).Settings.Ptr;
    if ((in_R8->Object == (FMixerSubmix *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
    pIVar3 = (in_R8->Object->SoundfieldStreams).Factory;
    if (pIVar3 == (ISoundfieldFactory *)0x0) {
      ISoundfieldFactory::GetFormatNameForNoEncoding();
    }
    else {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res20);
    }
    cVar7 = (*pcVar5)(pIVar1,local_res20,pIVar9);
    if (cVar7 != '\0') {
      local_88 = this->MixerDevice;
      if (local_88 == (FMixerDevice *)0x0) {
        fVar13 = 0.0;
        local_8c = 0;
        local_94 = 0;
      }
      else {
        local_8c = *(undefined4 *)&local_88->field_0x8c;
        local_94 = (local_88->PlatformInfo).NumChannels;
        fVar13 = (float)*(int *)&local_88->field_0x84;
      }
      pIVar1 = (this->SoundfieldStreams).Factory;
      local_98 = 1;
      local_90 = (undefined4)(longlong)fVar13;
      pcVar5 = *(code **)((longlong)*pIVar1 + 0x20);
      pIVar9 = GetSoundfieldSettings(this);
      pIVar2 = (this->SoundfieldStreams).Factory;
      puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_50);
      uVar4 = *puVar10;
      if ((in_R8->Object == (FMixerSubmix *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
        return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
               TVar8.Ptr;
      }
      pFVar11 = in_R8->Object;
      if (((pFVar11->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSoundfieldSubmix()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                             ,0x45a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
        return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
               TVar8.Ptr;
      }
      if (((pFVar11->SoundfieldStreams).Settings.Ptr == (ISoundfieldEncodingSettingsProxy *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SoundfieldStreams.Settings.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                             ,0x45b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
        return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
               TVar8.Ptr;
      }
      pIVar12 = (pFVar11->SoundfieldStreams).Settings.Ptr;
      if ((in_R8->Object == (FMixerSubmix *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
        return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
               TVar8.Ptr;
      }
      pIVar2 = (in_R8->Object->SoundfieldStreams).Factory;
      if (pIVar2 == (ISoundfieldFactory *)0x0) {
        ISoundfieldFactory::GetFormatNameForNoEncoding();
      }
      else {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_b8);
      }
      (*pcVar5)(pIVar1,param_1,local_b8,pIVar12,uVar4,pIVar9,&local_98);
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             (ISoundfieldTranscodeStream *)param_1;
    }
    pcVar5 = *(code **)((longlong)*pIVar2 + 0x48);
    if (((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSoundfieldSubmix()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                           ,0x45a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
    if (((this->SoundfieldStreams).Settings.Ptr == (ISoundfieldEncodingSettingsProxy *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SoundfieldStreams.Settings.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                           ,0x45b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar8.Ptr = (ISoundfieldTranscodeStream *)(*pcVar5)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar8.Ptr;
    }
    pIVar1 = (this->SoundfieldStreams).Factory;
    pIVar9 = (this->SoundfieldStreams).Settings.Ptr;
    if (pIVar1 == (ISoundfieldFactory *)0x0) {
      ISoundfieldFactory::GetFormatNameForNoEncoding();
    }
    else {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_b0);
    }
    cVar7 = (*pcVar5)(pIVar2,local_b0,pIVar9);
    if (cVar7 != '\0') {
      local_70 = this->MixerDevice;
      if (local_70 == (FMixerDevice *)0x0) {
        fVar13 = 0.0;
        local_74 = 0;
        local_7c = 0;
      }
      else {
        local_74 = *(undefined4 *)&local_70->field_0x8c;
        local_7c = (local_70->PlatformInfo).NumChannels;
        fVar13 = (float)*(int *)&local_70->field_0x84;
      }
      local_80 = 1;
      local_78 = (undefined4)(longlong)fVar13;
      pcVar5 = *(code **)((longlong)*pIVar2 + 0x20);
      pIVar9 = GetSoundfieldSettings(this);
      pIVar1 = (this->SoundfieldStreams).Factory;
      puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_48);
      uVar4 = *puVar10;
      pFVar11 = TSharedPtr<Audio::FMixerSubmix,1>::operator->(in_R8);
      pIVar12 = GetSoundfieldSettings(pFVar11);
      pFVar11 = TSharedPtr<Audio::FMixerSubmix,1>::operator->(in_R8);
      pIVar1 = (pFVar11->SoundfieldStreams).Factory;
      if (pIVar1 == (ISoundfieldFactory *)0x0) {
        ISoundfieldFactory::GetFormatNameForNoEncoding();
      }
      else {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_a8);
      }
      (*pcVar5)(pIVar2,param_1,local_a8,pIVar12,uVar4,pIVar9,&local_80);
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             (ISoundfieldTranscodeStream *)param_1;
    }
  }
  param_1->Object = (FMixerSubmix *)0x0;
  return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
         (ISoundfieldTranscodeStream *)param_1;
}

// GetWetVolumeDestination @ 14655c320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FModulationDestination * __thiscall Audio::FMixerSubmix::GetWetVolumeDestination(FMixerSubmix *this)

{
  return &this->WetLevelMod;
}

// Init @ 14655c9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::Init(FMixerSubmix *this,USoundSubmixBase *param_1,bool param_2)

{
  short sVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  USoundfieldSubmix *this_00;
  UClass *pUVar9;
  ISoundfieldFactory *pIVar10;
  USoundfieldEncodingSettingsBase *pUVar11;
  UObject *pUVar12;
  FString *pFVar13;
  USoundSubmixBase *pUVar14;
  longlong lVar15;
  int iVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  int iVar20;
  wchar_t *pwVar21;
  undefined1 auStack_118 [32];
  FString local_f8;
  FName local_e8;
  USoundSubmixBase *local_e0;
  LARGE_INTEGER local_d8;
  TArray<USoundfieldEffectBase_*,TSizedDefaultAllocator<32>_> local_d0;
  code *local_b8 [2];
  undefined **local_a8;
  FMixerSubmix *local_a0;
  undefined ***local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  bVar6 = IsInAudioThread();
  pwVar21 = L"";
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x127,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar20 = 0;
  if (param_1 != (USoundSubmixBase *)0x0) {
    local_e8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_e8,&local_f8);
    pFVar13 = &this->SubmixName;
    if (pFVar13 == &local_f8) {
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar13->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
      (this->SubmixName).Data.ArrayNum = local_f8.Data.ArrayNum;
      (this->SubmixName).Data.ArrayMax = local_f8.Data.ArrayMax;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_88,(UObject *)0x0)
    ;
    pFVar13 = &this->SubmixPathName;
    if (pFVar13 != pFVar8) {
      pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar13->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->SubmixPathName).Data.ArrayNum = (pFVar8->Data).ArrayNum;
      (this->SubmixPathName).Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    bVar6 = FWeakObjectPtr::IsValid(&(this->OwningSubmixObject).WeakPtr);
    if (bVar6) {
      if (param_2) {
        bVar6 = TWeakObjectPtr<USoundSubmixBase_const_,FWeakObjectPtr>::
                UEOpEquals<USoundSubmixBase,bool>(&this->OwningSubmixObject,param_1);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("OwningSubmixObject == InSoundSubmix",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                               ,0x139,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_90 = (undefined ***)0x0;
        local_a8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Audio::FMixerSubmix::Init'::`19'::<lambda_1>,0,0>::
                    _vftable_;
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FMixerSubmix::Init'::__l19::<lambda_1>,void>::Call;
        local_a0 = this;
        TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
                  (&this->CommandQueue,(TFunction<void___cdecl(void)> *)local_b8);
        if (local_b8[0] != (code *)0x0) {
          pppuVar17 = &local_a8;
          if (local_90 != (undefined ***)0x0) {
            pppuVar17 = local_90;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      else {
        this_00 = (USoundfieldSubmix *)FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
        if (this_00 != (USoundfieldSubmix *)0x0) {
          pUVar9 = Z_Construct_UClass_USoundfieldSubmix_NoRegister();
          iVar2 = (int)pUVar9->_padding_;
          if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar9->_padding_)) {
            pIVar10 = USoundfieldSubmix::GetSoundfieldFactoryForSubmix(this_00);
            pUVar11 = USoundfieldSubmix::GetSoundfieldEncodingSettings(this_00);
            USoundfieldSubmix::GetSoundfieldProcessors(this_00,&local_d0);
            SetupSoundfieldStreams(this,pUVar11,&local_d0,pIVar10);
            if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    else {
      local_e0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&(this->OwningSubmixObject).WeakPtr,(FObjectPtr)&local_e0);
      InitInternal(this);
    }
  }
  if ((-1 < AudioChannel->Enabled) && (-1 < AudioChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FAudioSubmixLoadedFields>((TLogScope<1> *)&local_58);
    *local_58 = *(undefined4 *)&this->MixerDevice->field_0xa0;
    pUVar12 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
    pFVar13 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pUVar12,&local_68,(UObject *)0x0);
    iVar2 = (pFVar13->Data).ArrayNum;
    iVar16 = 0;
    if (iVar2 == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      iVar16 = iVar2 + -1;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar19);
    local_58[1] = uVar7;
    QueryPerformanceCounter(&local_d8);
    *(LARGE_INTEGER *)(local_58 + 2) = local_d8;
    pUVar12 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
    pFVar13 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pUVar12,&local_78,(UObject *)0x0);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    sVar1 = *pwVar21;
    pFVar3 = (FScriptContainerElement *)pwVar21;
    while (sVar1 != 0) {
      pFVar3 = pFVar3 + 2;
      iVar20 = iVar20 + 1;
      sVar1 = *(short *)pFVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(3,pwVar21,iVar20);
    local_58[4] = this->NumChannels;
    pUVar14 = (USoundSubmixBase *)(**(code **)(*(longlong *)this->MixerDevice + 0x88))();
    uVar18 = (ulonglong)_tls_index;
    *(bool *)(local_58 + 5) = param_1 == pUVar14;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
    **(undefined1 **)(lVar4 + 0x20) = 6;
    lVar15 = *(longlong *)(lVar4 + 0x20) + 1;
    *(longlong *)(lVar4 + 0x20) = lVar15;
    if (lVar4 != local_50) {
      *(longlong *)(lVar4 + 0x28) = lVar15;
    }
    *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InitInternal @ 14655e3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::InitInternal(FMixerSubmix *this)

{
  int *piVar1;
  TWeakObjectPtr<USoundSubmixBase_const_,FWeakObjectPtr> *this_00;
  undefined1 *puVar2;
  TUniquePtr<IAudioLink,TDefaultDelete<IAudioLink>_> *pTVar3;
  TArray<Audio::FMixerSubmix::FSubmixEffectFadeInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  IAudioLink *pIVar6;
  FSubmixEffectFadeInfo *pFVar7;
  USoundEffectPreset *this_01;
  code *pcVar8;
  float _X;
  ForAnyElementType FVar9;
  undefined8 *puVar10;
  bool bVar11;
  int iVar12;
  UObject *pUVar13;
  FName *pFVar14;
  UClass *pUVar15;
  longlong *plVar16;
  IAudioLinkFactory *pIVar17;
  UClass *pUVar18;
  undefined8 *puVar19;
  FDynamicParameter *pFVar20;
  FSoundEffectSubmix *pFVar21;
  USoundfieldSubmix *this_02;
  ISoundfieldFactory *pIVar22;
  USoundfieldEncodingSettingsBase *pUVar23;
  UEndpointSubmix *this_03;
  IAudioEndpointFactory *pIVar24;
  UAudioEndpointSettingsBase *pUVar25;
  USoundfieldEndpointSubmix *this_04;
  USoundfieldEndpointSettingsBase *pUVar26;
  ulonglong uVar27;
  UObject *pUVar28;
  FScriptContainerElement *pFVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_468 [32];
  undefined1 local_418 [8];
  ISoundfieldEndpointFactory *local_410;
  TSharedPtr<FSoundEffectSubmix,1> local_408;
  ForAnyElementType local_3f8;
  undefined8 local_3f0;
  FDynamicParameter local_3e8;
  undefined2 local_3cc;
  uint local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  void *pvStack_3b8;
  float local_3b0;
  uint uStack_3ac;
  TSharedPtr<FSoundEffectBase,1> local_3a8;
  FWeakObjectPtr local_398;
  FMixerDevice *local_390;
  FWeakObjectPtr local_388;
  UObject *local_380;
  UObject *local_378;
  undefined8 *local_370;
  USoundEffectPreset *local_368;
  undefined8 *local_360;
  FName local_358;
  ISoundfieldEndpointFactory **local_350;
  ISoundfieldEndpointFactory **local_348;
  FName local_340;
  FString local_338;
  FString local_328;
  TArray<USoundfieldEffectBase_*,TSizedDefaultAllocator<32>_> local_318;
  TArray<USoundfieldEffectBase_*,TSizedDefaultAllocator<32>_> local_308;
  code *local_2f8 [2];
  longlong local_2e8 [3];
  longlong *local_2d0;
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  undefined1 local_2a0 [8];
  FDynamicParameter local_298;
  undefined1 local_278 [32];
  void *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined4 local_248;
  undefined4 local_244;
  ForElementType<FSetElementId> local_238;
  int local_230;
  undefined1 local_228 [32];
  void *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  FMixerSubmix *local_188;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_180;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_130;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_e0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_468;
  ClearSoundEffectSubmixes(this);
  this_00 = &this->OwningSubmixObject;
  pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  this->field_0x46c = (*(char *)(pUVar13 + 1) << 2 ^ this->field_0x46c) & 4U ^ this->field_0x46c;
  pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  fVar32 = *(float *)&pUVar13[1].field_0x4;
  this->bIsSilent = '\0';
  this->bIsCurrentlyDisabled = '\0';
  this->SilenceTimeStartSeconds = -1.0;
  this->AutoDisableTime = (double)fVar32;
  if (((this->MixerDevice->field_0x5c0 & 0x20) != 0) &&
     (*(longlong *)&this->MixerDevice->field_0x120 != 0)) {
    pFVar14 = ::FName::FName(&local_2b8,"Volume");
    FModulationDestination::Init
              (&this->VolumeMod,*(uint *)&this->MixerDevice->field_0xa0,*pFVar14,false,true);
    pFVar14 = ::FName::FName(&local_2b0,"Volume");
    FModulationDestination::Init
              (&this->WetLevelMod,*(uint *)&this->MixerDevice->field_0xa0,*pFVar14,false,true);
    pFVar14 = ::FName::FName(&local_2a8,"Volume");
    FModulationDestination::Init
              (&this->DryLevelMod,*(uint *)&this->MixerDevice->field_0xa0,*pFVar14,false,true);
  }
  pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (pUVar13 != (UObject *)0x0) {
    pUVar15 = Z_Construct_UClass_USoundSubmix_NoRegister();
    fVar30 = __real_c3200000;
    _X = __real_41200000;
    fVar32 = __real_3d4ccccd;
    iVar12 = (int)pUVar15->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar15->_padding_)) {
      fVar31 = *(float *)(pUVar13 + 7);
      if (0.0 <= fVar31) {
        fVar31 = 0.0;
      }
      if (fVar31 <= __real_c3200000) {
        fVar31 = __real_c3200000;
      }
      this->VolumeModBaseDb = fVar31;
      fVar33 = *(float *)&pUVar13[9].field_0x8;
      if (0.0 <= fVar33) {
        fVar33 = 0.0;
      }
      if (fVar33 <= fVar30) {
        fVar33 = fVar30;
      }
      this->WetModBaseDb = fVar33;
      fVar34 = *(float *)&pUVar13[0xb].field_0x10;
      if (0.0 <= fVar34) {
        fVar34 = 0.0;
      }
      if (fVar34 <= fVar30) {
        fVar34 = fVar30;
      }
      this->DryModBaseDb = fVar34;
      fVar30 = powf(_X,fVar31 * fVar32);
      this->TargetOutputVolume = fVar30;
      fVar31 = powf(_X,fVar33 * fVar32);
      this->TargetWetLevel = fVar31;
      fVar32 = powf(_X,fVar34 * fVar32);
      this->CurrentOutputVolume = fVar30;
      this->TargetDryLevel = fVar32;
      this->CurrentDryLevel = fVar32;
      this->CurrentWetLevel = fVar31;
      if (((this->MixerDevice->field_0x5c0 & 0x20) != 0) &&
         (*(longlong *)&this->MixerDevice->field_0x120 != 0)) {
        local_1d8._0_8_ = (FScriptContainerElement *)0x0;
        local_1d8._8_8_ = 0;
        local_1b8 = (void *)0x0;
        local_1b0 = 0;
        local_1ac = 0x80;
        local_1a8 = 0xffffffff;
        local_1a4 = 0;
        local_198 = (ForElementType<FSetElementId>)0x0;
        local_190 = 0;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                     *)local_1d8,
                    (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                     *)&pUVar13[7].field_0x8);
        local_228._0_8_ = (FScriptContainerElement *)0x0;
        local_228._8_8_ = 0;
        local_208 = (void *)0x0;
        local_200 = 0;
        local_1fc = 0x80;
        local_1f8 = 0xffffffff;
        local_1f4 = 0;
        local_1e8 = (ForElementType<FSetElementId>)0x0;
        local_1e0 = 0;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                     *)local_228,
                    (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                     *)&pUVar13[9].field_0x10);
        local_278._0_8_ = (FScriptContainerElement *)0x0;
        local_278._8_8_ = 0;
        local_258 = (void *)0x0;
        local_250 = 0;
        local_24c = 0x80;
        local_248 = 0xffffffff;
        local_244 = 0;
        local_238 = (ForElementType<FSetElementId>)0x0;
        local_230 = 0;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                     *)local_278,
                    (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                     *)&pUVar13[0xb].field_0x18);
        local_188 = this;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  (&local_180,
                   (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                    *)local_1d8);
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  (&local_130,
                   (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                    *)local_228);
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  (&local_e0,
                   (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                    *)local_278);
        local_2f8[0] = (code *)0x0;
        plVar16 = FMemory::Malloc(0x100,8);
        *plVar16 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Audio::FMixerSubmix::InitInternal'::`11'::<lambda_1>,0,1>
                    ::_vftable_;
        plVar16[1] = (longlong)local_188;
        local_2d0 = plVar16;
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                    *)(plVar16 + 2),&local_180);
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                    *)(plVar16 + 0xc),&local_130);
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        ::
        TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                    *)(plVar16 + 0x16),&local_e0);
        if (plVar16 + 1 != (longlong *)0x0) {
          local_2f8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>,void>
                         ::Call;
        }
        TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
                  (&this->CommandQueue,(TFunction<void___cdecl(void)> *)local_2f8);
        if (local_2f8[0] != (code *)0x0) {
          plVar16 = local_2e8;
          if (local_2d0 != (longlong *)0x0) {
            plVar16 = local_2d0;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        `Audio::FMixerSubmix::InitInternal'::__l11::<lambda_1>::~<lambda_1>(&local_188);
        local_230 = 0;
        if (local_238 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_238);
        }
        iVar12 = SUB84(local_278._8_8_,4);
        local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
        if (iVar12 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)local_278,0,(int *)(local_278 + 0xc));
        }
        local_248 = 0xffffffff;
        local_244 = 0;
        local_250 = 0;
        if (0x80 < local_24c) {
          local_24c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10),0);
        }
        if (local_258 != (void *)0x0) {
          FMemory::Free(local_258);
        }
        if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_278._0_8_);
        }
        local_1e0 = 0;
        if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1e8);
        }
        iVar12 = SUB84(local_228._8_8_,4);
        local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
        if (iVar12 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
        }
        local_1f8 = 0xffffffff;
        local_1f4 = 0;
        local_200 = 0;
        if (0x80 < local_1fc) {
          local_1fc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
        }
        if (local_208 != (void *)0x0) {
          FMemory::Free(local_208);
        }
        if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_228._0_8_);
        }
        local_190 = 0;
        if (local_198 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_198);
        }
        iVar12 = SUB84(local_1d8._8_8_,4);
        local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
        if (iVar12 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
        }
        local_1a8 = 0xffffffff;
        local_1a4 = 0;
        local_1b0 = 0;
        if (0x80 < local_1ac) {
          local_1ac = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
        }
        if (local_1b8 != (void *)0x0) {
          FMemory::Free(local_1b8);
        }
        if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1d8._0_8_);
        }
      }
      if (((pUVar13[0xd].field_0x18 & 1) == 0) ||
         (pIVar17 = FMixerDevice::GetAudioLinkFactory(this->MixerDevice),
         pIVar17 == (IAudioLinkFactory *)0x0)) goto LAB_14655edd9;
      plVar16 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x10))(pIVar17,local_2a0);
      lVar5 = *plVar16;
      if ((lVar5 == 0) ||
         (pUVar15 = Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister(),
         pUVar15 == (UClass *)0x0)) {
LAB_14655eb6a:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("LinkFactory->GetSettingsClass()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                            ,0x18c,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        iVar12 = (int)pUVar15->_padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar12) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar15->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((!bVar11) || (*plVar16 == 0)) goto LAB_14655eb6a;
      }
      plVar16 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x10))(pIVar17,local_2c8);
      lVar5 = *plVar16;
      if ((lVar5 == 0) ||
         (pUVar15 = Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister(),
         pUVar15 == (UClass *)0x0)) {
LAB_14655ebda:
        pUVar15 = (UClass *)0x0;
      }
      else {
        iVar12 = (int)pUVar15->_padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar12) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar15->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (!bVar11) goto LAB_14655ebda;
        pUVar15 = (UClass *)*plVar16;
      }
      if ((((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) &&
          (UClass::InternalCreateDefaultObjectWrapper(pUVar15),
          (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("LinkFactory->GetSettingsClass()->GetDefaultObject()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                              ,0x18d,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pUVar28 = *(UObject **)&pUVar13[0xd].field_0x20;
      if (pUVar28 == (UObject *)0x0) {
        plVar16 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x10))(pIVar17,local_2c0);
        lVar5 = *plVar16;
        if ((lVar5 == 0) ||
           (pUVar15 = Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister(),
           pUVar15 == (UClass *)0x0)) {
LAB_14655ec78:
          pUVar15 = (UClass *)0x0;
        }
        else {
          iVar12 = (int)pUVar15->_padding_;
          if ((*(int *)(lVar5 + 0x38) < iVar12) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 8) !=
              &pUVar15->_padding_)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (!bVar11) goto LAB_14655ec78;
          pUVar15 = (UClass *)*plVar16;
        }
        if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar15);
        }
        pUVar28 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar18 = Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister();
        lVar5 = *(longlong *)&pUVar28->field_0x10;
        iVar12 = (int)pUVar18->_padding_;
        if (((*(int *)(lVar5 + 0x38) < iVar12) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 8) !=
             &pUVar18->_padding_)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0x1469,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar15);
        }
        pUVar28 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
      }
      pcVar8 = *(code **)((longlong)*pIVar17 + 0x30);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      local_398.ObjectIndex = 0;
      local_398.ObjectSerialNumber = 0;
      local_380 = pUVar13;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      FWeakObjectPtr::operator=(&local_398,(FObjectPtr)&local_380);
      local_390 = this->MixerDevice;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar28 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar28);
      }
      local_388.ObjectIndex = 0;
      local_388.ObjectSerialNumber = 0;
      local_378 = pUVar28;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar28 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar28);
      }
      FWeakObjectPtr::operator=(&local_388,(FObjectPtr)&local_378);
      puVar19 = (undefined8 *)(*pcVar8)(pIVar17,&local_370);
      pTVar3 = &this->AudioLinkInstance;
      if (pTVar3 != (TUniquePtr<IAudioLink,TDefaultDelete<IAudioLink>_> *)puVar19) {
        pIVar6 = pTVar3->Ptr;
        pTVar3->Ptr = (IAudioLink *)*puVar19;
        *puVar19 = 0;
        if (pIVar6 != (IAudioLink *)0x0) {
          (**(code **)*pIVar6)(pIVar6,1);
        }
      }
      if (local_370 != (undefined8 *)0x0) {
        (**(code **)*local_370)(local_370,1);
      }
LAB_14655edd9:
      if (&this->EffectChainMutationCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection);
      this->NumSubmixEffects = 0;
      piVar1 = &(this->EffectChains).ArrayMax;
      pFVar7 = (FSubmixEffectFadeInfo *)(this->EffectChains).AllocatorInstance.Data;
      iVar12 = (this->EffectChains).ArrayNum;
      if ((this->EffectChains).ArrayMax < 0) {
        DestructItems<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int>(pFVar7,iVar12);
        (this->EffectChains).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&(this->EffectChains).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int>(pFVar7,iVar12);
        (this->EffectChains).ArrayNum = 0;
      }
      fVar32 = __real_3f800000;
      if (0 < *(int *)&pUVar13[6].field_0x10) {
        local_3f8.Data = (FScriptContainerElement *)0x0;
        local_3f0 = 0;
        FDynamicParameter::FDynamicParameter(&local_3e8,__real_3f800000);
        local_3cc = 0;
        pFVar20 = FDynamicParameter::FDynamicParameter(&local_298,fVar32);
        local_3c8 = *(uint *)&pUVar13[6].field_0x10;
        uVar27 = (ulonglong)(int)local_3c8;
        puVar19 = *(undefined8 **)&pUVar13[6].field_0x8;
        local_3e8.CurrValue = pFVar20->CurrValue;
        local_3e8.StartValue = pFVar20->StartValue;
        local_3e8.DeltaValue = pFVar20->DeltaValue;
        local_3e8.CurrTimeSec = pFVar20->CurrTimeSec;
        local_360 = puVar19 + uVar27;
        local_3e8.DurationSec = pFVar20->DurationSec;
        local_3e8.LastTime = pFVar20->LastTime;
        local_3e8.TargetValue = pFVar20->TargetValue;
        local_3cc = 0x101;
        while( true ) {
          puVar10 = local_360;
          if (*(int *)&pUVar13[6].field_0x10 != (int)uVar27) {
            local_418[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<USoundEffectSubmixPreset>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_418);
          }
          if (puVar19 == puVar10) break;
          this_01 = (USoundEffectPreset *)*puVar19;
          if (this_01 != (USoundEffectPreset *)0x0) {
            this->NumSubmixEffects = this->NumSubmixEffects + 1;
            pvStack_3b8 = (void *)0x0;
            local_3c0 = *(undefined4 *)&this->MixerDevice->field_0xa0;
            uStack_3ac = *(uint *)((longlong)&this_01->_padding_ + 4);
            local_3b0 = (float)*(int *)&this->MixerDevice->field_0x84;
            pFVar21 = (FSoundEffectSubmix *)(**(code **)(this_01->_padding_ + 0x2d0))(this_01);
            local_368 = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar21->field_0x4c,(FObjectPtr)&local_368)
            ;
            lVar5 = *(longlong *)pFVar21;
            *(uint *)&pFVar21->field_0x54 = uStack_3ac;
            *(ulonglong *)&(pFVar21->InitData_Internal).DeviceID = CONCAT44(uStack_3bc,local_3c0);
            (pFVar21->InitData_Internal).PresetSettings = pvStack_3b8;
            (pFVar21->InitData_Internal).SampleRate = local_3b0;
            (pFVar21->InitData_Internal).ParentPresetUniqueId = uStack_3ac;
            (**(code **)(lVar5 + 0x48))(pFVar21,&local_3c0);
            local_408.Object = pFVar21;
            local_3a8.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
            if (local_3a8.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              local_3a8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
            }
            else {
              (local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)0x1;
              (local_3a8.SharedReferenceCount.ReferenceController)->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_VFSoundEffectSubmix__U__DefaultDeleter_VFSoundEffectSubmix___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              (local_3a8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)0x1;
              local_3a8.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar21;
              LOCK();
              (local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_3a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_3a8.Object = (FSoundEffectBase *)local_408.Object;
            local_408.SharedReferenceCount.ReferenceController =
                 local_3a8.SharedReferenceCount.ReferenceController;
            USoundEffectPreset::AddEffectInstance(this_01,&local_3a8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3a8.SharedReferenceCount.ReferenceController);
            if ((local_408.Object == (FSoundEffectSubmix *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FSoundEffectBase::SetEnabled((FSoundEffectBase *)local_408.Object,true);
            if (((local_3f8.Data <= &local_408) &&
                (&local_408 <
                 (TSharedPtr<FSoundEffectSubmix,1> *)
                 (local_3f8.Data + (longlong)local_3f0._4_4_ * 0x10))) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = (int)local_3f0;
            if ((int)local_3f0 == local_3f0._4_4_) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_3f8,(int *)((longlong)&local_3f0 + 4));
            }
            local_3f0 = CONCAT44(local_3f0._4_4_,iVar12 + 1);
            *(FSoundEffectSubmix **)&local_3f8.Data[(longlong)iVar12 * 0x10].field_0x0 =
                 local_408.Object;
            *(TReferenceControllerBase<1> **)(local_3f8.Data + (longlong)iVar12 * 0x10 + 8) =
                 local_408.SharedReferenceCount.ReferenceController;
            if (local_408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_408.SharedReferenceCount.ReferenceController);
          }
          uVar27 = (ulonglong)local_3c8;
          puVar19 = puVar19 + 1;
        }
        pTVar4 = &this->EffectChains;
        pFVar29 = (pTVar4->AllocatorInstance).Data;
        piVar1 = &(this->EffectChains).ArrayMax;
        if (((pFVar29 <= (FScriptContainerElement *)&local_3f8) &&
            ((FScriptContainerElement *)&local_3f8 < pFVar29 + (longlong)*piVar1 * 0x30)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (this->EffectChains).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar4->AllocatorInstance,piVar1);
        }
        FVar9.Data = local_3f8.Data;
        (this->EffectChains).ArrayNum = iVar12 + 1;
        pFVar29 = (pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x30;
        *(undefined8 *)pFVar29 = 0;
        iVar12 = (int)local_3f0;
        *(int *)(pFVar29 + 8) = (int)local_3f0;
        if ((int)local_3f0 == 0) {
          *(int *)(pFVar29 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,(int)local_3f0,0,(ForAnyElementType *)pFVar29,(int)local_3f0,
                     (int *)(pFVar29 + 0xc));
          ConstructItems<TSharedPtr<FSoundEffectSubmix,1>,TSharedPtr<FSoundEffectSubmix,1>,int>
                    (*(void **)pFVar29,(TSharedPtr<FSoundEffectSubmix,1> *)FVar9.Data,iVar12);
        }
        *(undefined8 *)(pFVar29 + 0x10) = local_3e8._0_8_;
        *(undefined8 *)(pFVar29 + 0x18) = local_3e8._8_8_;
        *(undefined8 *)(pFVar29 + 0x20) = local_3e8._16_8_;
        *(float *)(pFVar29 + 0x28) = local_3e8.TargetValue;
        pFVar29[0x2c] = local_3cc._0_1_;
        pFVar29[0x2d] = local_3cc._1_1_;
        DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
                  ((TSharedPtr<FSoundEffectSubmix,1> *)local_3f8.Data,(int)local_3f0);
        if ((TSharedPtr<FSoundEffectSubmix,1> *)local_3f8.Data !=
            (TSharedPtr<FSoundEffectSubmix,1> *)0x0) {
          FMemory::Free(local_3f8.Data);
        }
      }
      iVar12 = (this->MixerDevice->PlatformInfo).NumChannels;
      this->NumChannels = iVar12;
      this->NumSamples = iVar12 * *(int *)&this->MixerDevice->field_0x8c;
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection);
      return;
    }
  }
  this_02 = (USoundfieldSubmix *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (this_02 != (USoundfieldSubmix *)0x0) {
    pUVar15 = Z_Construct_UClass_USoundfieldSubmix_NoRegister();
    iVar12 = (int)pUVar15->_padding_;
    if ((iVar12 <= *(int *)(this_02->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar15->_padding_)) {
      pIVar22 = USoundfieldSubmix::GetSoundfieldFactoryForSubmix(this_02);
      pUVar23 = USoundfieldSubmix::GetSoundfieldEncodingSettings(this_02);
      USoundfieldSubmix::GetSoundfieldProcessors(this_02,&local_308);
      SetupSoundfieldStreams(this,pUVar23,&local_308,pIVar22);
      if (local_308.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_308.AllocatorInstance.Data);
      return;
    }
  }
  this_03 = (UEndpointSubmix *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (this_03 != (UEndpointSubmix *)0x0) {
    pUVar15 = Z_Construct_UClass_UEndpointSubmix_NoRegister();
    iVar12 = (int)pUVar15->_padding_;
    if ((iVar12 <= *(int *)(this_03->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar15->_padding_)) {
      iVar12 = (this->MixerDevice->PlatformInfo).NumChannels;
      this->NumChannels = iVar12;
      this->NumSamples = iVar12 * *(int *)&this->MixerDevice->field_0x8c;
      pIVar24 = UEndpointSubmix::GetAudioEndpointForSubmix(this_03);
      pUVar25 = UEndpointSubmix::GetEndpointSettings(this_03);
      SetupEndpoint(this,pIVar24,pUVar25);
      return;
    }
  }
  this_04 = (USoundfieldEndpointSubmix *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (this_04 != (USoundfieldEndpointSubmix *)0x0) {
    pUVar15 = Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister();
    iVar12 = (int)pUVar15->_padding_;
    if ((iVar12 <= *(int *)(this_04->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar15->_padding_)) {
      local_410 = USoundfieldEndpointSubmix::GetSoundfieldEndpointForSubmix(this_04);
      pUVar23 = USoundfieldEndpointSubmix::GetEncodingSettings(this_04);
      if (local_410 == (ISoundfieldEndpointFactory *)0x0) {
        if ((byte)LogAudio._0_1_ < 4) {
          return;
        }
        pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_358.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
        local_358.Number = *(uint *)&pUVar13->field_0x1c;
        ::FName::ToString(&local_358,&local_338);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_338.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
        return;
      }
      if ((pUVar23 == (USoundfieldEncodingSettingsBase *)0x0) &&
         (pUVar23 = (USoundfieldEncodingSettingsBase *)(**(code **)((longlong)*local_410 + 0x60))(),
         pUVar23 == (USoundfieldEncodingSettingsBase *)0x0)) {
        local_350 = &local_410;
        bVar11 = `Audio::FMixerSubmix::InitInternal'::__l79::<lambda_2>::operator()(&local_350);
        if (!bVar11) {
          return;
        }
      }
      USoundfieldEndpointSubmix::GetSoundfieldProcessors(this_04,&local_318);
      SetupSoundfieldStreams(this,pUVar23,&local_318,(ISoundfieldFactory *)local_410);
      if ((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) {
        if (3 < (byte)LogAudio._0_1_) {
          pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_340.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
          local_340.Number = *(uint *)&pUVar13->field_0x1c;
          ::FName::ToString(&local_340,&local_328);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_328.Data.AllocatorInstance.Data);
          }
        }
        FSoundfieldStreams::Reset(&this->SoundfieldStreams);
      }
      else {
        pUVar26 = USoundfieldEndpointSubmix::GetEndpointSettings(this_04);
        if ((pUVar26 == (USoundfieldEndpointSettingsBase *)0x0) &&
           (pUVar26 = (USoundfieldEndpointSettingsBase *)
                      (**(code **)((longlong)*(ISoundfieldFactory *)local_410 + 0x88))(),
           pUVar26 == (USoundfieldEndpointSettingsBase *)0x0)) {
          local_348 = &local_410;
          bVar11 = `Audio::FMixerSubmix::InitInternal'::__l88::<lambda_3>::operator()(&local_348);
          if (!bVar11) goto LAB_14655f597;
        }
        SetupEndpoint(this,local_410,pUVar26);
      }
LAB_14655f597:
      if (local_318.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_318.AllocatorInstance.Data);
      return;
    }
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("!\"Enclosing block should never be called\"",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                      ,0x204,L"");
  if (!bVar11) {
    return;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// IsDefaultEndpointSubmix @ 1465610b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSubmix::IsDefaultEndpointSubmix(FMixerSubmix *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((((this->ParentSubmix).Object == (FMixerSubmix *)0x0) ||
       (pTVar1 = (this->ParentSubmix).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     (((this->EndpointData).SoundfieldEndpoint.Ptr == (ISoundfieldEndpoint *)0x0 &&
      ((this->EndpointData).NonSoundfieldEndpoint.Ptr == (IAudioEndpoint *)0x0)))) {
    return true;
  }
  return false;
}

// IsDummyEndpointSubmix @ 1465610f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSubmix::IsDummyEndpointSubmix(FMixerSubmix *this)

{
  IAudioEndpoint *pIVar1;
  char cVar2;
  
  pIVar1 = (this->EndpointData).NonSoundfieldEndpoint.Ptr;
  if (pIVar1 != (IAudioEndpoint *)0x0) {
    cVar2 = (**(code **)(pIVar1->_padding_ + 8))();
    return cVar2 == '\0';
  }
  return false;
}

// IsExternalEndpointSubmix @ 1465612b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSubmix::IsExternalEndpointSubmix(FMixerSubmix *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((((this->ParentSubmix).Object == (FMixerSubmix *)0x0) ||
       (pTVar1 = (this->ParentSubmix).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     (((this->EndpointData).SoundfieldEndpoint.Ptr != (ISoundfieldEndpoint *)0x0 ||
      ((this->EndpointData).NonSoundfieldEndpoint.Ptr != (IAudioEndpoint *)0x0)))) {
    return true;
  }
  return false;
}

// IsRenderingAudio @ 146561480

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSubmix::IsRenderingAudio(FMixerSubmix *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar2;
  int iVar3;
  FMixerSubmix *this_00;
  code *pcVar4;
  double dVar5;
  atomic<int> aVar6;
  char cVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bAutoDisable == '\0') {
    return true;
  }
  lpCriticalSection = &this->BufferListenerCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = (this->BufferListenerPtrs).ArrayNum;
  pFVar15 = (this->BufferListenerPtrs).AllocatorInstance.Data;
  pFVar21 = pFVar15 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->BufferListenerPtrs).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakPtr<ISubmixBufferListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar21) break;
    pTVar13 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar13->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146561511;
        }
        LOCK();
        aVar9 = pTVar13->SharedReferenceCount;
        bVar22 = aVar6 == aVar9;
        if (bVar22) {
          pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar9 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar9;
      } while (!bVar22);
      if ((*(longlong **)pFVar15 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(**(longlong **)pFVar15 + 0x10))(), cVar7 != '\0')) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return true;
      }
    }
LAB_146561511:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    pFVar15 = pFVar15 + 0x10;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->MixerSourceVoices).field_0x8 != *(int *)&(this->MixerSourceVoices).field_0x34)
  {
    return true;
  }
  if (this->SilenceTimeStartSeconds < 0.0) {
    return true;
  }
  dVar5 = *(double *)&this->MixerDevice->field_0x5c8 - this->SilenceTimeStartSeconds;
  if (dVar5 < this->AutoDisableTime || dVar5 == this->AutoDisableTime) {
    return true;
  }
  iVar3 = *(int *)&(this->ChildSubmixes).field_0x28;
  puVar1 = &(this->ChildSubmixes).field_0x10;
  iVar17 = 0;
  iVar19 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->ChildSubmixes).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14656161d;
      uVar16 = puVar20[lVar12 + 1];
    }
    uVar10 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar11 = iVar19 + -1 + local_res18;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14656161d:
  uVar16 = *(uint *)&(this->ChildSubmixes).field_0x28;
  uVar14 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar17);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChildSubmixes).field_0x8 -
                       *(int *)&(this->ChildSubmixes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar22)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  uVar10 = *(uint *)&(this->ChildSubmixes).field_0x28;
  if (uVar16 != uVar10) {
    puVar18 = *(undefined1 **)&(this->ChildSubmixes).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_146561720;
      uVar16 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar10 < (int)uVar16) {
      uVar16 = uVar10;
    }
  }
LAB_146561720:
  do {
    if (*(int *)&(this->ChildSubmixes).field_0x8 - *(int *)&(this->ChildSubmixes).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar16) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return false;
    }
    lVar12 = *(longlong *)&this->ChildSubmixes;
    pTVar13 = *(TReferenceControllerBase<1> **)
               ((longlong)TStack_60.CurrentBitIndex * 0x38 + 0x10 + lVar12);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar13->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146561774;
        }
        LOCK();
        aVar9 = pTVar13->SharedReferenceCount;
        bVar22 = aVar6 == aVar9;
        if (bVar22) {
          pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar9 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar9;
      } while (!bVar22);
      this_00 = *(FMixerSubmix **)((longlong)TStack_60.CurrentBitIndex * 0x38 + 8 + lVar12);
      if ((this_00 != (FMixerSubmix *)0x0) && (bVar22 = IsRenderingAudio(this_00), bVar22)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        return true;
      }
    }
LAB_146561774:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// IsSoundfieldEndpointSubmix @ 146561850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSubmix::IsSoundfieldEndpointSubmix(FMixerSubmix *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((((this->ParentSubmix).Object == (FMixerSubmix *)0x0) ||
       (pTVar1 = (this->ParentSubmix).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     ((this->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0)) {
    return true;
  }
  return false;
}

// IsSoundfieldSubmix @ 146561880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSubmix::IsSoundfieldSubmix(FMixerSubmix *this)

{
  return (this->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0;
}

// IsValid @ 146561e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FMixerSubmix::IsValid(FMixerSubmix *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwningSubmixObject).WeakPtr);
  return bVar1;
}

// MixBufferDownToMono @ 1465623a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::MixBufferDownToMono
          (FMixerSubmix *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar14 = (ulonglong)param_2;
  if (param_2 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumInputChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x374,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar10 = param_1->ArrayNum;
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  iVar10 = iVar10 / param_2;
  lVar15 = (longlong)iVar10;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (4,4,iVar10,&param_3->AllocatorInstance,&param_3->ArrayNum,piVar1);
  memset((param_3->AllocatorInstance).Data + (longlong)iVar10 * 4,0,lVar15 * 4);
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = (param_3->AllocatorInstance).Data;
  fVar25 = __real_3f800000 / SQRT((float)param_2);
  if (0 < lVar15) {
    lVar16 = 0;
    iVar10 = 0;
    do {
      if (0 < param_2) {
        iVar13 = 0;
        if (7 < (uint)param_2) {
          pFVar12 = pFVar3 + (longlong)iVar10 * 4;
          iVar13 = 0;
          if ((pFVar3 + (longlong)(param_2 + -1 + iVar10) * 4 < pFVar4) ||
             (pFVar4 + (uVar14 - 1) * 4 < pFVar12)) {
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
            fVar20 = 0.0;
            fVar21 = 0.0;
            fVar22 = 0.0;
            fVar23 = 0.0;
            fVar24 = 0.0;
            lVar11 = 0;
            do {
              iVar13 = iVar13 + 8;
              lVar11 = lVar11 + 8;
              fVar17 = fVar17 + *(float *)pFVar12 * fVar25;
              fVar18 = fVar18 + *(float *)(pFVar12 + 4) * fVar25;
              fVar19 = fVar19 + *(float *)(pFVar12 + 8) * fVar25;
              fVar20 = fVar20 + *(float *)(pFVar12 + 0xc) * fVar25;
              pFVar2 = pFVar12 + 0x10;
              pFVar6 = pFVar12 + 0x14;
              pFVar7 = pFVar12 + 0x18;
              pFVar8 = pFVar12 + 0x1c;
              pFVar12 = pFVar12 + 0x20;
              fVar21 = fVar21 + *(float *)pFVar2 * fVar25;
              fVar22 = fVar22 + *(float *)pFVar6 * fVar25;
              fVar23 = fVar23 + *(float *)pFVar7 * fVar25;
              fVar24 = fVar24 + *(float *)pFVar8 * fVar25;
            } while (lVar11 < (longlong)(uVar14 & 0xfffffffffffffff8));
            *(float *)(pFVar4 + lVar16 * 4) =
                 *(float *)(pFVar4 + lVar16 * 4) +
                 fVar23 + fVar19 + fVar21 + fVar17 + fVar24 + fVar20 + fVar22 + fVar18;
            if (param_2 <= iVar13) goto LAB_14656257b;
          }
        }
        fVar17 = *(float *)(pFVar4 + lVar16 * 4);
        lVar11 = uVar14 - (longlong)iVar13;
        pFVar12 = pFVar3 + ((longlong)iVar10 + (longlong)iVar13) * 4;
        do {
          fVar18 = *(float *)pFVar12;
          pFVar12 = pFVar12 + 4;
          fVar17 = fVar17 + fVar25 * fVar18;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        *(float *)(pFVar4 + lVar16 * 4) = fVar17;
      }
LAB_14656257b:
      iVar10 = iVar10 + param_2;
      lVar16 = lVar16 + 1;
    } while (lVar16 < lVar15);
  }
  return;
}

// MixInChildSubmix @ 1465625b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::MixInChildSubmix
          (FMixerSubmix *this,FChildSubmixInfo *param_1,ISoundfieldAudioPacket *param_2)

{
  TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *this_00;
  TArray<float,TAlignedHeapAllocator<16>_> *this_01;
  uint uVar1;
  FMixerSubmix *this_02;
  ISoundfieldFactory *pIVar2;
  ISoundfieldEncoderStream *pIVar3;
  ISoundfieldAudioPacket *pIVar4;
  ISoundfieldTranscodeStream *pIVar5;
  ISoundfieldEncodingSettingsProxy *pIVar6;
  code *pcVar7;
  double dVar8;
  atomic<int> aVar9;
  bool bVar10;
  atomic<int> aVar11;
  TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *pTVar12;
  ISoundfieldEncodingSettingsProxy *pIVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined8 *local_res8;
  TArray<float,TAlignedHeapAllocator<16>_> *local_48;
  int local_40;
  ISoundfieldEncodingSettingsProxy *local_38;
  FSoundfieldSpeakerPositionalData *local_30;
  
  if (((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSoundfieldSubmix()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x3e9,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((param_1->Encoder).Ptr != (ISoundfieldEncoderStream *)0x0) &&
      ((param_1->Transcoder).Ptr != (ISoundfieldTranscodeStream *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!(Child.Encoder.IsValid() && Child.Transcoder.IsValid())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x3ec,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar14 = (param_1->SubmixPtr).WeakReferenceCount.ReferenceController;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar9 = pTVar14->SharedReferenceCount;
    do {
      if (aVar9 == (atomic<int>)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146562662;
      }
      LOCK();
      aVar11 = pTVar14->SharedReferenceCount;
      bVar10 = aVar9 == aVar11;
      if (bVar10) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar11 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar11;
    } while (!bVar10);
    this_02 = (param_1->SubmixPtr).Object;
    if (this_02 != (FMixerSubmix *)0x0) {
      pIVar2 = (this_02->SoundfieldStreams).Factory;
      if (pIVar2 == (ISoundfieldFactory *)0x0) {
        uVar1 = this_02->NumSamples;
        this_01 = &this->ScratchBuffer;
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
        }
        (this->ScratchBuffer).ArrayNum = 0;
        if ((this->ScratchBuffer).ArrayMax < (int)uVar1) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar1,&this_01->AllocatorInstance,0,&(this->ScratchBuffer).ArrayMax);
        }
        TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(this_01,this_02->NumSamples);
        if ((param_1->Encoder).Ptr == (ISoundfieldEncoderStream *)0x0) {
          ProcessAudio(this_02,this_01);
        }
        else {
          ProcessAudio(this_02,this_01);
          pIVar3 = (param_1->Encoder).Ptr;
          local_40 = this_02->NumChannels;
          local_38 = (this->SoundfieldStreams).Settings.Ptr;
          local_30 = &(this->SoundfieldStreams).CachedPositionalData;
          local_48 = this_01;
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,&local_48,param_2);
        }
      }
      else if ((param_1->Transcoder).Ptr == (ISoundfieldTranscodeStream *)0x0) {
        ProcessAudio(this_02,param_2);
      }
      else {
        pIVar4 = (param_1->IncomingPacketToTranscode).Ptr;
        this_00 = &param_1->IncomingPacketToTranscode;
        if (pIVar4 == (ISoundfieldAudioPacket *)0x0) {
          pTVar12 = (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *)
                    (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2,&local_res8);
          TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>::operator=
                    (this_00,pTVar12);
          if (local_res8 != (undefined8 *)0x0) {
            (**(code **)*local_res8)(local_res8,1);
          }
        }
        else {
          (**(code **)((longlong)*pIVar4 + 0x18))();
        }
        if ((this_00->Ptr == (ISoundfieldAudioPacket *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Child.IncomingPacketToTranscode.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                                ,0x41a,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ProcessAudio(this_02,this_00->Ptr);
        pIVar5 = (param_1->Transcoder).Ptr;
        pIVar6 = (this->SoundfieldStreams).Settings.Ptr;
        pcVar7 = *(code **)((longlong)*pIVar5 + 0x10);
        pIVar13 = GetSoundfieldSettings(this_02);
        (*pcVar7)(pIVar5,this_00->Ptr,pIVar13,param_2,pIVar6);
      }
      dVar8 = (this_02->SoundfieldStreams).CachedPositionalData.Rotation.Y;
      (this->SoundfieldStreams).CachedPositionalData.Rotation.X =
           (this_02->SoundfieldStreams).CachedPositionalData.Rotation.X;
      (this->SoundfieldStreams).CachedPositionalData.Rotation.Y = dVar8;
      dVar8 = (this_02->SoundfieldStreams).CachedPositionalData.Rotation.W;
      (this->SoundfieldStreams).CachedPositionalData.Rotation.Z =
           (this_02->SoundfieldStreams).CachedPositionalData.Rotation.Z;
      (this->SoundfieldStreams).CachedPositionalData.Rotation.W = dVar8;
    }
  }
LAB_146562662:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

// MixInSource @ 146562860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::MixInSource
          (FMixerSubmix *this,ISoundfieldAudioPacket *param_1,
          ISoundfieldEncodingSettingsProxy *param_2,ISoundfieldAudioPacket *param_3)

{
  ISoundfieldMixerStream *pIVar1;
  code *pcVar2;
  bool bVar3;
  ISoundfieldAudioPacket *local_28;
  ISoundfieldEncodingSettingsProxy *local_20;
  undefined4 local_18;
  
  if ((this->SoundfieldStreams).Mixer.Ptr == (ISoundfieldMixerStream *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundfieldStreams.Mixer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x3d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->SoundfieldStreams).Mixer.Ptr;
  local_18 = 0x3f800000;
  local_28 = param_1;
  local_20 = param_2;
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_28,param_3);
  return;
}

// OnStartRecordingOutput @ 146565eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::OnStartRecordingOutput(FMixerSubmix *this,float param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = &(this->RecordingData).ArrayMax;
  (this->RecordingData).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->RecordingData).AllocatorInstance,0,piVar1);
  }
  iVar2 = FMixerDevice::GetDeviceSampleRate(this->MixerDevice);
  uVar3 = (uint)((float)iVar2 * param_1);
  if (-1 < (int)uVar3) {
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar3,&(this->RecordingData).AllocatorInstance,(this->RecordingData).ArrayNum,
                 piVar1);
    }
    this->bIsRecording = '\x01';
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// OnStopRecordingOutput @ 146565f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FMixerSubmix::OnStopRecordingOutput(FMixerSubmix *this,float *param_1,float *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->RecordingCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->bIsRecording = '\0';
    *param_1 = (float)this->NumChannels;
    iVar1 = FMixerDevice::GetDeviceSampleRate(this->MixerDevice);
    *param_2 = (float)iVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return &this->RecordingData;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PauseRecordingOutput @ 146566510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::PauseRecordingOutput(FMixerSubmix *this)

{
  if ((this->RecordingData).ArrayNum == 0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    this->bIsRecording = '\0';
  }
  return;
}

// ProcessAudio @ 146566750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::ProcessAudio
          (FMixerSubmix *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *pTVar1;
  FDynamicParameter *this_00;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  FWindowsRecursiveMutex *pFVar3;
  float *_Dst;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  EMixerSourceSubmixSendStage EVar8;
  ISoundfieldFactory *pIVar9;
  ISoundfieldAudioPacket *pIVar10;
  ISoundfieldDecoderStream *pIVar11;
  FMixerDevice *pFVar12;
  FMixerSubmix *this_01;
  undefined1 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  double dVar17;
  atomic<int> aVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  TMap<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>_>
  *pTVar25;
  bool bVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  atomic<int> aVar30;
  int iVar31;
  BOOL BVar32;
  int iVar33;
  TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *pTVar34;
  UObject *pUVar35;
  FString *pFVar36;
  UClass *pUVar37;
  TStatId TVar38;
  TArrayView<float_const_,int> *pTVar39;
  FName *pFVar40;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixEffectProcessing> FVar41;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar42;
  byte bVar43;
  int iVar44;
  wchar_t *pwVar45;
  longlong lVar46;
  TStatIdData *pTVar47;
  TArray<Audio::FMixerSubmix::FSubmixEffectFadeInfo,TSizedDefaultAllocator<32>_> *this_02;
  uint uVar48;
  TReferenceControllerBase<1> *pTVar49;
  TReferenceControllerBase<1> *pTVar50;
  ForAnyElementType FVar51;
  TReferenceControllerBase<1> *pTVar52;
  undefined1 *puVar53;
  uint *puVar54;
  FName FVar55;
  TArray<TSharedPtr<FSoundEffectSubmix,1>,TSizedDefaultAllocator<32>_> *pTVar56;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar57;
  FScriptContainerElement *pFVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStackY_5c8 [32];
  byte local_568;
  undefined1 local_567;
  undefined1 local_566;
  undefined1 local_565 [5];
  FName local_560;
  uint local_558;
  uint local_554;
  FName local_550;
  byte local_548;
  FName local_540;
  byte local_538;
  ForAnyElementType local_530;
  int local_528;
  int aiStack_524 [3];
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  int *local_508;
  undefined1 local_500 [24];
  float local_4e8 [2];
  uint local_4e0 [2];
  FColor_u_0 local_4d8;
  FColor_u_0 local_4d4;
  int *local_4d0;
  FScriptContainerElement *local_4c8;
  FName local_4c0;
  byte local_4b8;
  FName local_4b0;
  FName local_4a8;
  TArray<float,TSizedDefaultAllocator<32>_> local_4a0;
  TMap<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>_>
  *local_490;
  longlong lStack_488;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  int local_468;
  undefined4 uStack_464;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_460;
  undefined1 local_440 [24];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTStack_428;
  TArray<float,TAlignedHeapAllocator<16>_> *pTStack_420;
  double local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_410;
  TArray<float,TAlignedHeapAllocator<16>_> *local_3f0;
  LARGE_INTEGER local_3e8;
  LARGE_INTEGER local_3e0;
  TArray<float,TAlignedHeapAllocator<16>_> *local_3d8;
  LARGE_INTEGER local_3d0;
  int local_3c8;
  int local_3c4;
  undefined8 *local_3c0;
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *local_3b8;
  undefined1 auStack_3b0 [20];
  uint uStack_39c;
  TArray<float,TAlignedHeapAllocator<16>_> *local_398;
  double dStack_390;
  TMap<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>_>
  *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  undefined8 uStack_360;
  FScriptContainerElement *local_358;
  int iStack_350;
  undefined4 uStack_34c;
  FScriptContainerElement *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  FScriptContainerElement *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TArrayView<float_const_,int> local_2b8;
  TArrayView<float_const_,int> local_2a8;
  TArrayView<float,int> local_298;
  TArrayView<float_const_,int> local_288;
  TArrayView<float,int> local_278;
  TArrayView<float,int> local_268;
  TArrayView<float,int> local_258;
  TArrayView<float,int> local_248;
  TArrayView<float,int> local_238;
  TArrayView<float_const_,int> local_228;
  TArrayView<float,int> local_218;
  TArrayView<float,int> local_208;
  TArrayView<float,int> local_1f8;
  TArrayView<float,int> local_1e8;
  TArrayView<float_const_,int> local_1d8;
  FString local_1c8;
  FString local_1b8;
  source_location local_1a8;
  FName local_188;
  FName local_180 [2];
  FString local_170;
  TArrayView<float_const_,int> local_160;
  undefined4 local_144;
  undefined4 local_134;
  undefined4 local_124;
  undefined4 local_104;
  FLogScope local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_3d8 = param_1;
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  iVar28 = (this->MixerDevice->PlatformInfo).NumChannels;
  if ((this->NumChannels != iVar28) &&
     (pIVar9 = (this->SoundfieldStreams).Factory, this->NumChannels = iVar28,
     pIVar9 != (ISoundfieldFactory *)0x0)) {
    SetupSoundfieldStreamForParent(this);
  }
  if ((this->NumChannels == 0) || (8 < this->NumChannels)) {
    bVar26 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4330698859807245571>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                        ,0x503,"NumChannels != 0 && NumChannels <= 8");
    if (bVar26) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  else if ((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) {
    PumpCommandQueue(this);
    iVar28 = param_1->ArrayNum / this->NumChannels;
    local_4d0 = (int *)CONCAT44(local_4d0._4_4_,iVar28);
    iVar28 = iVar28 * this->NumChannels;
    this->NumSamples = iVar28;
    TArray<float,TAlignedHeapAllocator<16>_>::Reset(&this->InputBuffer,iVar28);
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->InputBuffer,this->NumSamples);
    local_4c8 = (this->InputBuffer).AllocatorInstance.Data;
    if ((this->bAutoDisable == '\0') || (bVar26 = IsRenderingAudio(this), bVar26)) {
      if (this->bIsCurrentlyDisabled != '\0') {
        pUVar35 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
        if (pUVar35 != (UObject *)0x0) {
          pUVar37 = Z_Construct_UClass_USoundSubmix_NoRegister();
          iVar28 = (int)pUVar37->_padding_;
          if ((iVar28 <= *(int *)(*(longlong *)&pUVar35->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar35->field_0x10 + 0x30) + (longlong)iVar28 * 8) ==
              &pUVar37->_padding_)) {
            UpdateModulationSettings
                      (this,(TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                             *)&pUVar35[7].field_0x8,
                       (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                        *)&pUVar35[9].field_0x10,
                       (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                        *)&pUVar35[0xb].field_0x18);
          }
        }
        this->bIsCurrentlyDisabled = '\0';
        if ((5 < (byte)LogAudioMixer._0_1_) && (LogSubmixEnablementCVar == 1)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      if (__CsvProfilerStat1397 == false) {
        FCsvProfilerTrace::OutputInlineStat("SubmixChildren",_GCsvCategory_Audio.Index);
        __CsvProfilerStat1397 = true;
      }
      local_558 = _GCsvCategory_Audio.Index;
      FCsvProfiler::BeginStat("SubmixChildren",_GCsvCategory_Audio.Index,"CSV_SubmixChildren");
      local_500._8_8_ =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
      ;
      pTVar1 = &this->ChildSubmixes;
      local_500._0_4_ = 0x576;
      local_500._4_4_ = 4;
      local_500._16_8_ =
           "void __cdecl Audio::FMixerSubmix::ProcessAudio(class TArray<float,class TAlignedHeapAllocator<16> > &)"
      ;
      if (*(int *)&(this->ChildSubmixes).field_0x8 - *(int *)&(this->ChildSubmixes).field_0x34 < 1)
      {
        pTVar47 = &TStatId::TStatId_NAME_None;
      }
      else {
        TVar38 = FThreadSafeStaticStatInner<FStat_STAT_AudioMixerSubmixChildren,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_AudioMixerSubmixChildren,1> *)
                            &StatPtr_STAT_AudioMixerSubmixChildren);
        pTVar47 = *(TStatIdData **)&(TVar38.StatIdPtr)->Name;
      }
      local_1a8._Line = local_500._0_4_;
      local_1a8._Column = local_500._4_4_;
      local_1a8._File = (char *)local_500._8_8_;
      local_1a8._Function = (char *)local_500._16_8_;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_4c0,(TStatId)pTVar47,CycleStat|ClearEveryFrame,false,
                 (FSourceLocation *)&local_1a8);
      pTVar52 = (TReferenceControllerBase<1> *)0x0;
      local_460.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChildSubmixes).field_0x10;
      local_530.Data = (FScriptContainerElement *)0x0;
      local_528 = 0;
      aiStack_524[0] = 0;
      local_410._padding_._0_4_ = 0;
      local_508 = (int *)&DAT_00000001;
      local_410._padding_._4_4_ = 1;
      local_410.UnvisitedBitMask = 0xffffffff;
      local_410.CurrentBitIndex = 0;
      local_410.BaseBitIndex = 0;
      local_410.Array = local_460.Array;
      if (*(int *)&(this->ChildSubmixes).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_410);
      }
      local_440._8_8_ = CONCAT44(local_410._padding_._4_4_,(undefined4)local_410._padding_);
      local_418 = (double)CONCAT44(local_418._4_4_,
                                   *(int *)&(this->ChildSubmixes).field_0x8 -
                                   *(int *)&(this->ChildSubmixes).field_0x34);
      pTStack_428 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                    CONCAT44(local_410.CurrentBitIndex,local_410.UnvisitedBitMask);
      pTStack_420 = (TArray<float,TAlignedHeapAllocator<16>_> *)
                    CONCAT44(local_410._28_4_,local_410.BaseBitIndex);
      uVar29 = *(uint *)&(this->ChildSubmixes).field_0x28;
      local_460._padding_._0_4_ = (int)uVar29 >> 5;
      bVar43 = (byte)uVar29 & 0x1f;
      local_460._padding_._4_4_ = (int)local_508 << bVar43;
      local_460.UnvisitedBitMask = -1 << bVar43;
      local_440._16_8_ = local_410.Array;
      local_460.BaseBitIndex = uVar29 & 0xffffffe0;
      auStack_3b0._8_8_ = local_410.Array;
      dStack_390 = local_418;
      local_460.CurrentBitIndex = uVar29;
      local_440._0_8_ = pTVar1;
      local_3b8 = pTVar1;
      auStack_3b0._0_8_ = local_440._8_8_;
      unique0x10003579 = pTStack_428;
      local_398 = pTStack_420;
      if (((int)uVar29 < 0) ||
         (uVar48 = *(uint *)&(this->ChildSubmixes).field_0x28, (int)uVar48 < (int)uVar29)) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar26) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar48 = *(uint *)&(this->ChildSubmixes).field_0x28;
      }
      if (uVar29 != uVar48) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_460);
      }
      lStack_488 = CONCAT44(local_460._padding_._4_4_,(int)local_460._padding_);
      uStack_478 = CONCAT44(local_460.CurrentBitIndex,local_460.UnvisitedBitMask);
      uStack_470 = CONCAT44(local_460._28_4_,local_460.BaseBitIndex);
      pTStack_480 = local_460.Array;
      local_560 = (FName)local_460.Array;
      local_554 = local_460.CurrentBitIndex;
      while( true ) {
        pTVar1 = local_3b8;
        uVar29 = local_554;
        if (*(int *)&local_3b8->field_0x8 - *(int *)&local_3b8->field_0x34 != dStack_390._0_4_) {
          local_567 = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_567);
        }
        iVar28 = local_528;
        if (((uStack_39c == uVar29) && ((FName)auStack_3b0._8_8_ == local_560)) &&
           (pTVar1 == &this->ChildSubmixes)) break;
        pFVar58 = (FScriptContainerElement *)
                  ((longlong)(int)uStack_39c * 0x38 + *(longlong *)pTVar1);
        pTVar50 = *(TReferenceControllerBase<1> **)(pFVar58 + 0x10);
        pTVar49 = pTVar50;
        if (pTVar50 == (TReferenceControllerBase<1> *)0x0) {
LAB_146566ee5:
          if (((local_530.Data <= pFVar58) &&
              (pFVar58 < local_530.Data + (longlong)aiStack_524[0] * 4)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          if (local_528 == aiStack_524[0]) {
            local_528 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_530,aiStack_524);
          }
          lVar46 = (longlong)local_528;
          local_528 = local_528 + 1;
          *(uint *)(local_530.Data + lVar46 * 4) = *(uint *)pFVar58;
          pTVar50 = pTVar49;
        }
        else {
          aVar18 = pTVar50->SharedReferenceCount;
          do {
            pTVar49 = pTVar52;
            if (aVar18 == (atomic<int>)0x0) goto LAB_146566ee5;
            LOCK();
            aVar30 = pTVar50->SharedReferenceCount;
            bVar26 = aVar18 == aVar30;
            if (bVar26) {
              pTVar50->SharedReferenceCount = (atomic<int>)((int)aVar18 + 1);
              aVar30 = aVar18;
            }
            UNLOCK();
            aVar18 = aVar30;
          } while (!bVar26);
          this_01 = *(FMixerSubmix **)(pFVar58 + 8);
          pTVar49 = pTVar50;
          if ((this_01 == (FMixerSubmix *)0x0) ||
             (bVar26 = FWeakObjectPtr::IsValid(&(this_01->OwningSubmixObject).WeakPtr), !bVar26))
          goto LAB_146566ee5;
          ProcessAudio(this_01,&this->InputBuffer);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            FCheckedBufferState::FCheckedBufferState
                      (&BufferCheck1413,0x585,
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,L"Submix Chidren",None,Ensure);
            _Init_thread_footer(&::_TSS1);
          }
          pTVar39 = TArrayView<float_const_,int>::
                    TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                              (&local_160,&this->InputBuffer);
          local_2b8.DataPtr = pTVar39->DataPtr;
          local_2b8.ArrayNum = pTVar39->ArrayNum;
          local_2b8._12_4_ = *(undefined4 *)&pTVar39->field_0xc;
          bVar26 = FCheckedBufferState::DoCheck(&BufferCheck1413,&local_2b8);
          if (!bVar26) {
            FCheckedBufferState::FailedBufferCheckImpl(&BufferCheck1413,L"Submix: %s");
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar50)
        ;
        stack0xfffffffffffffc60 =
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             CONCAT44(uStack_39c,auStack_3b0._16_4_ & ~auStack_3b0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_3b0);
      }
      pTVar47 = &TStatId::TStatId_NAME_None;
      pFVar58 = local_530.Data + (longlong)local_528 * 4;
      FVar51.Data = local_530.Data;
      while( true ) {
        if (local_528 != iVar28) {
          local_566 = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_566);
        }
        if (FVar51.Data == pFVar58) break;
        local_4e0[0] = *(uint *)FVar51.Data;
        if (*(int *)&(this->ChildSubmixes).field_0x8 != *(int *)&(this->ChildSubmixes).field_0x34) {
          TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,Audio::FChildSubmixInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>,FDefaultSetAllocator>
                      *)&this->ChildSubmixes,local_4e0[0],local_4e0);
        }
        FVar51.Data = FVar51.Data + 4;
      }
      if (local_530.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data);
      }
      if ((local_4b8 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_4b8 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_4b8 & 4) != 0) {
        FThreadStats::AddMessage(local_4c0,CycleScopeEnd);
      }
      local_4b8 = 0;
      FCsvProfiler::EndStat("SubmixChildren",local_558);
      if (__CsvProfilerStat1428 == false) {
        FCsvProfilerTrace::OutputInlineStat("SubmixSource",_GCsvCategory_Audio.Index);
        __CsvProfilerStat1428 = true;
      }
      local_558 = _GCsvCategory_Audio.Index;
      FCsvProfiler::BeginStat("SubmixSource",_GCsvCategory_Audio.Index,"CSV_SubmixSource");
      if ((0 < *(int *)&(this->MixerSourceVoices).field_0x8 -
               *(int *)&(this->MixerSourceVoices).field_0x34) &&
         (pTVar47 = (TStatIdData *)StatPtr_STAT_AudioMixerSubmixSource,
         StatPtr_STAT_AudioMixerSubmixSource ==
         (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSource>)0x0)) {
        pFVar40 = ::FName::FName(local_180,"STAT_AudioMixerSubmixSource");
        pTVar47 = FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixSource,
                             *pFVar40,L"Submix Graph Source Mixing","STATGROUP_AudioMixer",
                             "STATCAT_Advanced",L"AudioMixer",true,true,ST_int64,true,false,
                             MCR_Invalid);
      }
      local_550.ComparisonIndex.Value = 0;
      local_550.Number = 0;
      local_548 = 0;
      FVar55 = *(FName *)pTVar47;
      if ((FVar55.ComparisonIndex.Value.Value != 0) || (FVar55.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_4d8.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_4d8._s_0,(char *)*(FName *)((longlong)pTVar47 + 0x10));
          local_548 = local_548 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_4b0.ComparisonIndex.Value = FVar55.ComparisonIndex.Value.Value;
            local_4b0.Number = FVar55.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_4b0,(wchar_t *)*(FName *)((longlong)pTVar47 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x595);
            local_548 = local_548 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_560 = FVar55;
          local_550 = FVar55;
          FThreadStats::AddMessage(FVar55,CycleScopeStart);
          local_548 = local_548 | 4;
        }
      }
      local_490 = &this->MixerSourceVoices;
      iVar28 = *(int *)&(this->MixerSourceVoices).field_0x28;
      pTStack_480 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->MixerSourceVoices).field_0x10;
      uStack_470._0_4_ = 0;
      uStack_478._4_4_ = 0;
      if (iVar28 != 0) {
        puVar54 = *(uint **)&(this->MixerSourceVoices).field_0x20;
        if (puVar54 == (uint *)0x0) {
          puVar54 = (uint *)pTStack_480;
        }
        pTVar50 = pTVar52;
        uStack_470._0_4_ = 0;
        for (uVar29 = *puVar54; uVar29 == 0; uVar29 = puVar54[(int)uVar29]) {
          uVar29 = (int)pTVar52 + 1;
          pTVar52 = (TReferenceControllerBase<1> *)(ulonglong)uVar29;
          uStack_470._0_4_ = (int)pTVar50 + 0x20;
          pTVar50 = (TReferenceControllerBase<1> *)(ulonglong)(uint)uStack_470;
          uStack_478._4_4_ = iVar28;
          if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
          goto LAB_1465672e4;
        }
        local_508 = (int *)(ulonglong)(~(uVar29 - 1) & uVar29);
        uVar4 = (longlong)local_508 * 2 + 1;
        lVar46 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar46 == 0; lVar46 = lVar46 + -1) {
          }
        }
        local_3c8 = (int)lVar46;
        uStack_478._4_4_ = ((uint)uStack_470 - 1) + local_3c8;
        if (iVar28 < uStack_478._4_4_) {
          uStack_478._4_4_ = iVar28;
        }
      }
LAB_1465672e4:
      uVar29 = *(uint *)&(this->MixerSourceVoices).field_0x28;
      FVar55 = (FName)&(this->MixerSourceVoices).field_0x10;
      local_468 = *(int *)&(this->MixerSourceVoices).field_0x8 -
                  *(int *)&(this->MixerSourceVoices).field_0x34;
      uVar48 = uVar29 & 0xffffffe0;
      local_554 = -1 << ((byte)uVar29 & 0x1f);
      lStack_488 = CONCAT44((int)local_508,(int)pTVar52);
      uStack_478._0_4_ = 0xffffffff;
      uStack_470._4_4_ = local_104;
      iVar28 = (int)uVar29 >> 5;
      uStack_360 = CONCAT44(uStack_464,local_468);
      TStack_380.UnvisitedBitMask = 0xffffffff;
      TStack_380.CurrentBitIndex = uStack_478._4_4_;
      TStack_380.BaseBitIndex = (uint)uStack_470;
      TStack_380._28_4_ = local_104;
      local_560 = FVar55;
      local_388 = local_490;
      TStack_380._padding_ = lStack_488;
      TStack_380.Array = pTStack_480;
      if ((((int)uVar29 < 0) || (*(int *)&(this->MixerSourceVoices).field_0x28 < (int)uVar29)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar7 = *(uint *)&(this->MixerSourceVoices).field_0x28;
      if (uVar29 != uVar7) {
        puVar13 = *(undefined1 **)&(this->MixerSourceVoices).field_0x20;
        puVar53 = (undefined1 *)FVar55;
        if (puVar13 != (undefined1 *)0x0) {
          puVar53 = puVar13;
        }
        uVar29 = local_554 & *(uint *)(puVar53 + (longlong)iVar28 * 4);
        while (uVar29 == 0) {
          iVar28 = iVar28 + 1;
          uVar48 = uVar48 + 0x20;
          uVar29 = uVar7;
          if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar28)
          goto LAB_146567406;
          uVar29 = *(uint *)(puVar53 + (longlong)iVar28 * 4);
        }
        uVar4 = (ulonglong)(~(uVar29 - 1) & uVar29) * 2 + 1;
        lVar46 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar46 == 0; lVar46 = lVar46 + -1) {
          }
        }
        local_3c4 = (int)lVar46;
        uVar29 = (uVar48 - 1) + local_3c4;
        if ((int)uVar7 < (int)uVar29) {
          uVar29 = uVar7;
        }
      }
LAB_146567406:
      while( true ) {
        pTVar25 = local_388;
        if (*(int *)&local_388->field_0x8 - *(int *)&local_388->field_0x34 != (int)uStack_360) {
          local_565[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_565);
        }
        lVar46 = (longlong)TStack_380.CurrentBitIndex;
        if (((TStack_380.CurrentBitIndex == uVar29) && ((FName)TStack_380.Array == FVar55)) &&
           (pTVar25 == &this->MixerSourceVoices)) break;
        iVar28 = this->NumChannels;
        lVar14 = *(longlong *)pTVar25;
        puVar15 = *(undefined8 **)(lVar14 + lVar46 * 0x18);
        fVar62 = *(float *)(lVar14 + 8 + lVar46 * 0x18);
        EVar8 = *(EMixerSourceSubmixSendStage *)(lVar14 + 0xc + lVar46 * 0x18);
        FMixerDevice::CheckAudioRenderingThread((FMixerDevice *)puVar15[0xb]);
        if ((*(byte *)(puVar15 + 0x14) & 0x60) != 0) {
          FMixerSourceManager::MixOutputBuffers
                    ((FMixerSourceManager *)*puVar15,*(int *)((longlong)puVar15 + 0x9c),iVar28,
                     fVar62,EVar8,&this->InputBuffer);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
          FCheckedBufferState::FCheckedBufferState
                    (&BufferCheck1441,0x5a1,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                     ,L"Submix SourceMix",None,Ensure);
          _Init_thread_footer(&::_TSS4);
        }
        local_2d8 = (this->InputBuffer).AllocatorInstance.Data;
        iVar28 = (this->InputBuffer).ArrayNum;
        if ((iVar28 < 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        local_2a8._12_4_ = uStack_2cc;
        local_2a8.ArrayNum = iVar28;
        local_2a8.DataPtr = (float *)local_2d8;
        iStack_2d0 = iVar28;
        bVar26 = FCheckedBufferState::DoCheck(&BufferCheck1441,&local_2a8);
        if (!bVar26) {
          FCheckedBufferState::FailedBufferCheckImpl(&BufferCheck1441,L"Submix: %s");
        }
        TStack_380.UnvisitedBitMask = TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
        FVar55 = local_560;
      }
      if ((local_548 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_548 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_548 & 4) != 0) {
        FThreadStats::AddMessage(local_550,CycleScopeEnd);
      }
      local_548 = 0;
      FCsvProfiler::EndStat("SubmixSource",local_558);
      (this->DryChannelBuffer).ArrayNum = 0;
      if ((this->DryChannelBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&(this->DryChannelBuffer).AllocatorInstance,0,
                   &(this->DryChannelBuffer).ArrayMax);
      }
      fVar6 = __real_41200000;
      fVar62 = __real_3d4ccccd;
      if (((this->MixerDevice->field_0x5c0 & 0x20) == 0) ||
         (*(longlong *)&this->MixerDevice->field_0x120 == 0)) {
        fVar59 = powf(__real_41200000,this->DryModBaseDb * __real_3d4ccccd);
      }
      else {
        FModulationDestination::ProcessControl(&this->DryLevelMod,this->DryModBaseDb,0);
        fVar59 = ((this->DryLevelMod).DestinationData.Object)->ValueTarget;
      }
      this->TargetDryLevel = fVar59;
      uVar29 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar22 = __real_322bcc77;
      fVar59 = fVar59 * this->DryLevelModifier;
      this->TargetDryLevel = fVar59;
      if ((fVar22 < (float)((uint)(fVar59 - this->CurrentDryLevel) & uVar29)) ||
         (fVar22 < (float)((uint)this->CurrentDryLevel & uVar29))) {
        TArray<float,TAlignedHeapAllocator<16>_>::Append<float,TAlignedHeapAllocator<16>_>
                  (&this->DryChannelBuffer,&this->InputBuffer);
      }
      if (&this->EffectChainMutationCriticalSection == (FWindowsRecursiveMutex *)0x0)
      goto LAB_1465688f8;
      EnterCriticalSection((LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection);
      fVar59 = __real_3f800000;
      if ((BypassAllSubmixEffectsCVar == 0) && (0 < (this->EffectChains).ArrayNum)) {
        if (DAT_1551b1904 == '\0') {
          FCsvProfilerTrace::OutputInlineStat("SubmixEffectProcessing",_GCsvCategory_Audio.Index);
          DAT_1551b1904 = '\x01';
        }
        local_558 = _GCsvCategory_Audio.Index;
        FCsvProfiler::BeginStat
                  ("SubmixEffectProcessing",_GCsvCategory_Audio.Index,"CSV_SubmixEffectProcessing");
        FVar41 = StatPtr_STAT_AudioMixerSubmixEffectProcessing;
        if (StatPtr_STAT_AudioMixerSubmixEffectProcessing ==
            (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixEffectProcessing>)0x0) {
          pFVar40 = ::FName::FName(&local_188,"STAT_AudioMixerSubmixEffectProcessing");
          FVar41 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixEffectProcessing>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_AudioMixerSubmixEffectProcessing,*pFVar40,
                              L"Submix Graph Effect Processing","STATGROUP_AudioMixer",
                              "STATCAT_Advanced",L"AudioMixer",true,true,ST_int64,true,false,
                              MCR_Invalid);
        }
        local_540.ComparisonIndex.Value = 0;
        local_540.Number = 0;
        local_538 = 0;
        FVar55 = *(FName *)FVar41;
        if ((FVar55.ComparisonIndex.Value.Value != 0) || (FVar55.Number != 0)) {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_4d4.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_4d4._s_0,(char *)*(FName *)((longlong)FVar41 + 0x10));
            local_538 = local_538 | 1;
            if (-1 < CpuChannel->Enabled) {
              local_4a8.ComparisonIndex.Value = FVar55.ComparisonIndex.Value.Value;
              local_4a8.Number = FVar55.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_4a8,(wchar_t *)*(FName *)((longlong)FVar41 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x5c0);
              local_538 = local_538 | 2;
            }
          }
          if (FThreadStats::bPrimaryEnable != false) {
            local_560 = FVar55;
            local_540 = FVar55;
            FThreadStats::AddMessage(FVar55,CycleScopeStart);
            local_538 = local_538 | 4;
          }
        }
        fVar61 = (float)*(int *)&this->MixerDevice->field_0x84;
        if ((fVar61 <= 0.0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("SampleRate > 0.0f",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                                ,0x5c3,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar63 = (float)(int)local_4d0;
        local_440._0_8_ =
             (TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
              *)0x0;
        pTStack_420 = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
        (**(code **)(*(longlong *)this->MixerDevice + 0x100))();
        local_440._12_4_ = this->NumChannels;
        local_440._8_4_ = this->NumSamples / this->NumChannels;
        local_440._16_4_ = (this->MixerDevice->PlatformInfo).NumChannels;
        pTStack_428 = FMixerDevice::GetListenerTransforms(this->MixerDevice);
        uVar48 = this->NumSamples;
        pTVar2 = &this->SubmixChainMixBuffer;
        local_418 = *(double *)&this->MixerDevice->field_0x5c8;
        local_568 = 0;
        if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
        }
        (this->SubmixChainMixBuffer).ArrayNum = 0;
        if ((this->SubmixChainMixBuffer).ArrayMax < (int)uVar48) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar48,&pTVar2->AllocatorInstance,0,&(this->SubmixChainMixBuffer).ArrayMax)
          ;
        }
        uVar48 = this->NumSamples;
        iVar28 = (this->SubmixChainMixBuffer).ArrayNum;
        if (iVar28 < (int)uVar48) {
          TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(pTVar2,uVar48 - iVar28);
        }
        else {
          if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
          }
          if ((int)uVar48 < iVar28) {
            iVar28 = iVar28 - uVar48;
            if (iVar28 < 0) {
              bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 );
              if (bVar26) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            else if (iVar28 == 0) goto LAB_146567a3a;
            pFVar58 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar48 * 4;
            iVar44 = ((this->SubmixChainMixBuffer).ArrayNum - iVar28) - uVar48;
            if (iVar44 != 0) {
              memmove(pFVar58,pFVar58 + (longlong)iVar28 * 4,(longlong)iVar44 << 2);
            }
            iVar28 = (this->SubmixChainMixBuffer).ArrayNum - iVar28;
            (this->SubmixChainMixBuffer).ArrayNum = iVar28;
            UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,&pTVar2->AllocatorInstance,iVar28,&(this->SubmixChainMixBuffer).ArrayMax)
            ;
          }
        }
LAB_146567a3a:
        iVar28 = (this->EffectChains).ArrayNum + -1;
        if (-1 < iVar28) {
          FVar55 = (FName)((longlong)iVar28 * 0x30);
          do {
            this_02 = &this->EffectChains;
            local_560 = FVar55;
            if (((this->EffectChains).ArrayNum <= iVar28) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pTVar56 = (TArray<TSharedPtr<FSoundEffectSubmix,1>,TSizedDefaultAllocator<32>_> *)
                      ((this_02->AllocatorInstance).Data + (longlong)FVar55);
            if (pTVar56->ArrayNum != 0) {
              this_00 = (FDynamicParameter *)(pTVar56 + 1);
              if (((char)pTVar56[2].ArrayMax != '\0') ||
                 (fVar60 = *(float *)&pTVar56[2].AllocatorInstance.Data,
                 (float)pTVar56[1].ArrayMax <= fVar60 && fVar60 != (float)pTVar56[1].ArrayMax)) {
                local_508 = &(this->EffectChainOutputBuffer).ArrayMax;
                local_4d0 = &(this->EffectChainOutputBuffer).ArrayNum;
                *local_4d0 = 0;
                if ((this->EffectChainOutputBuffer).ArrayMax < 0) {
                  UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                            (4,4,0,&(this->EffectChainOutputBuffer).AllocatorInstance,0,local_508);
                }
                iVar44 = this->NumSamples;
                iVar31 = UE::Core::Private::
                         ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                                   (4,4,iVar44,&(this->EffectChainOutputBuffer).AllocatorInstance,
                                    local_4d0,local_508);
                pTVar2 = &this->EffectChainOutputBuffer;
                memset((pTVar2->AllocatorInstance).Data + (longlong)iVar31 * 4,0,
                       (longlong)iVar44 << 2);
                bVar26 = GenerateEffectChainAudio
                                   (this,(FSoundEffectSubmixInputData *)local_440,&this->InputBuffer
                                    ,pTVar56,pTVar2);
                local_568 = local_568 | bVar26;
                fVar60 = this_00->CurrValue;
                pTVar57 = &this->InputBuffer;
                if (bVar26) {
                  pTVar57 = pTVar2;
                }
                FDynamicParameter::Update(this_00,fVar63 / fVar61);
                iVar44 = (this->SubmixChainMixBuffer).ArrayNum;
                fVar5 = this_00->CurrValue;
                pFVar58 = (this->SubmixChainMixBuffer).AllocatorInstance.Data;
                if ((iVar44 < 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar26)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                local_2c8 = (pTVar57->AllocatorInstance).Data;
                iVar31 = pTVar57->ArrayNum;
                uStack_50c = local_144;
                local_518 = pFVar58;
                iStack_510 = iVar44;
                if ((iVar31 < 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar26)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                local_298._12_4_ = uStack_50c;
                local_298.ArrayNum = iStack_510;
                local_288._12_4_ = uStack_2bc;
                local_288.ArrayNum = iVar31;
                local_298.DataPtr = (float *)local_518;
                local_288.DataPtr = (float *)local_2c8;
                iStack_2c0 = iVar31;
                ArrayMixIn(&local_288,&local_298,fVar60,fVar5);
              }
              else if (*(char *)((longlong)&pTVar56[2].ArrayMax + 1) == '\0') {
                if (((this->EffectChains).ArrayNum <= iVar28) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                TArray<Audio::FMixerSubmix::FSubmixEffectFadeInfo,TSizedDefaultAllocator<32>_>::
                RemoveAtSwapImpl(this_02,iVar28);
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,&this_02->AllocatorInstance,(this->EffectChains).ArrayNum,
                           &(this->EffectChains).ArrayMax);
              }
            }
            FVar55 = (FName)((longlong)local_560 + -0x30);
            iVar28 = iVar28 + -1;
          } while (-1 < iVar28);
          local_560 = FVar55;
          if (local_568 != 0) {
            memcpy(local_4c8,(this->SubmixChainMixBuffer).AllocatorInstance.Data,
                   (longlong)this->NumSamples << 2);
          }
        }
        if (((this->MixerDevice->field_0x5c0 & 0x20) == 0) ||
           (*(longlong *)&this->MixerDevice->field_0x120 == 0)) {
          fVar61 = powf(fVar6,this->WetModBaseDb * fVar62);
        }
        else {
          FModulationDestination::ProcessControl(&this->WetLevelMod,this->WetModBaseDb,0);
          fVar61 = ((this->WetLevelMod).DestinationData.Object)->ValueTarget;
        }
        this->TargetWetLevel = fVar61;
        fVar61 = fVar61 * this->WetLevelModifier;
        fVar63 = this->CurrentWetLevel;
        this->TargetWetLevel = fVar61;
        fVar60 = (float)((uint)(fVar61 - fVar63) & uVar29);
        if ((fVar22 < fVar60) || (fVar22 < (float)((uint)(fVar63 - fVar59) & uVar29))) {
          pFVar58 = (this->InputBuffer).AllocatorInstance.Data;
          iVar28 = (this->InputBuffer).ArrayNum;
          if (fVar22 < fVar60) {
            local_348 = pFVar58;
            if ((iVar28 < 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar26)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            local_268._12_4_ = uStack_33c;
            local_268.ArrayNum = iVar28;
            local_268.DataPtr = (float *)local_348;
            iStack_340 = iVar28;
            ArrayFade(&local_268,fVar63,fVar61);
            this->CurrentWetLevel = this->TargetWetLevel;
          }
          else {
            local_358 = pFVar58;
            if ((iVar28 < 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar26)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            local_278._12_4_ = uStack_34c;
            local_278.ArrayNum = iVar28;
            local_278.DataPtr = (float *)local_358;
            iStack_350 = iVar28;
            ArrayMultiplyByConstantInPlace(&local_278,fVar61);
          }
        }
        if ((local_538 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_538 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_538 & 4) != 0) {
          FThreadStats::AddMessage(local_540,CycleScopeEnd);
        }
        local_538 = 0;
        FCsvProfiler::EndStat("SubmixEffectProcessing",local_558);
      }
      iVar28 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->EffectChainMutationCriticalSection);
      if (0 < (this->DryChannelBuffer).ArrayNum) {
        fVar61 = this->TargetDryLevel;
        fVar63 = this->CurrentDryLevel;
        pFVar58 = (this->DryChannelBuffer).AllocatorInstance.Data;
        iVar44 = (this->DryChannelBuffer).ArrayNum;
        if (fVar22 < (float)((uint)(fVar61 - fVar63) & uVar29)) {
          local_328 = pFVar58;
          if ((iVar44 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          local_248._12_4_ = uStack_31c;
          local_248.ArrayNum = iVar44;
          local_248.DataPtr = (float *)local_328;
          iStack_320 = iVar44;
          ArrayFade(&local_248,fVar63,fVar61);
          this->CurrentDryLevel = this->TargetDryLevel;
        }
        else {
          local_338 = pFVar58;
          if ((iVar44 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          local_258._12_4_ = uStack_32c;
          local_258.ArrayNum = iVar44;
          local_258.DataPtr = (float *)local_338;
          iStack_330 = iVar44;
          ArrayMultiplyByConstantInPlace(&local_258,fVar61);
        }
        iVar44 = (this->InputBuffer).ArrayNum;
        pFVar58 = (this->InputBuffer).AllocatorInstance.Data;
        if ((iVar44 < 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uStack_50c = local_134;
        local_318 = (this->DryChannelBuffer).AllocatorInstance.Data;
        iVar31 = (this->DryChannelBuffer).ArrayNum;
        local_518 = pFVar58;
        iStack_510 = iVar44;
        if ((iVar31 < 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        local_238._12_4_ = uStack_50c;
        local_238.ArrayNum = iStack_510;
        local_228._12_4_ = uStack_30c;
        local_228.ArrayNum = iVar31;
        local_238.DataPtr = (float *)local_518;
        local_228.DataPtr = (float *)local_318;
        iStack_310 = iVar31;
        ArrayMixIn(&local_228,&local_238);
      }
      pFVar58 = local_4c8;
      if (this->bIsBackgroundMuted != '\0') {
        memset(local_4c8,0,(longlong)this->NumSamples << 2);
      }
      pFVar3 = &this->RecordingCriticalSection;
      if (pFVar3 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
        if (this->bIsRecording != 0) {
          iVar44 = this->NumSamples;
          if (((pFVar58 == (FScriptContainerElement *)0x0) && (iVar44 != 0)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ptr != nullptr || Count == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x9c1,L""), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar31 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                             (4,4,iVar44,&(this->RecordingData).AllocatorInstance,
                              &(this->RecordingData).ArrayNum,&(this->RecordingData).ArrayMax);
          if (iVar44 != 0) {
            memcpy((this->RecordingData).AllocatorInstance.Data + (longlong)iVar31 * 4,pFVar58,
                   (longlong)iVar44 << 2);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
        pFVar3 = &this->SpectrumAnalyzerCriticalSection;
        if (pFVar3 != (FWindowsRecursiveMutex *)0x0) {
          BVar32 = TryEnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
          if (BVar32 != 0) {
            if ((this->SpectrumAnalyzer).Object != (FAsyncSpectrumAnalyzer *)0x0) {
              MixBufferDownToMono(this,&this->InputBuffer,this->NumChannels,&this->MonoMixBuffer);
              if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar26)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              FAsyncSpectrumAnalyzer::PushAudio
                        ((this->SpectrumAnalyzer).Object,
                         (float *)(this->MonoMixBuffer).AllocatorInstance.Data,
                         (this->MonoMixBuffer).ArrayNum);
              if (((this->SpectrumAnalyzer).Object == (FAsyncSpectrumAnalyzer *)0x0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar26)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              FAsyncSpectrumAnalyzer::PerformAsyncAnalysisIfPossible
                        ((this->SpectrumAnalyzer).Object,true);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
          }
          if (this->bIsEnvelopeFollowing != (FThreadSafeBool)0x0) {
            iVar44 = (this->InputBuffer).ArrayNum;
            pFVar3 = &this->EnvelopeCriticalSection;
            pFVar58 = (this->InputBuffer).AllocatorInstance.Data;
            if (pFVar3 == (FWindowsRecursiveMutex *)0x0) goto LAB_1465688f8;
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
            uVar24 = _UNK_1512d75b8;
            uVar23 = ___xmm_20202020202020202020202020202020;
            _Dst = this->EnvelopeValues;
            *(undefined8 *)_Dst = ___xmm_20202020202020202020202020202020;
            *(undefined8 *)(this->EnvelopeValues + 2) = uVar24;
            *(undefined8 *)(this->EnvelopeValues + 4) = uVar23;
            *(undefined8 *)(this->EnvelopeValues + 6) = uVar24;
            iVar31 = this->NumChannels;
            if (0 < iVar31) {
              iVar33 = FEnvelopeFollower::GetNumChannels(&this->EnvelopeFollower);
              if (iVar33 != this->NumChannels) {
                FEnvelopeFollower::SetNumChannels(&this->EnvelopeFollower,this->NumChannels);
              }
              FEnvelopeFollower::ProcessAudio
                        (&this->EnvelopeFollower,(float *)pFVar58,iVar44 / iVar31);
              pTVar42 = FEnvelopeFollower::GetEnvelopeValues(&this->EnvelopeFollower);
              if ((pTVar42->ArrayNum != this->NumChannels) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("EnvValues.Num() == NumChannels",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                                      ,0x662,L""), bVar26)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              memcpy(_Dst,(pTVar42->AllocatorInstance).Data,(longlong)this->NumChannels << 2);
              iStack_510 = this->NumChannels;
              local_518 = (FScriptContainerElement *)_Dst;
              if ((iStack_510 < 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar26)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              local_218._12_4_ = uStack_50c;
              local_218.ArrayNum = iStack_510;
              local_218.DataPtr = (float *)local_518;
              ArrayClampInPlace(&local_218,0.0,fVar59);
              if ((-1 < AudioChannel->Enabled) && (-1 < AudioChannel->Enabled)) {
                UE::Trace::Private::FLogScope::Enter<FAudioSubmixEnvelopeValuesFields>
                          ((TLogScope<1> *)&local_100);
                pFVar12 = this->MixerDevice;
                uVar19 = pFVar12->field_0xa1;
                uVar20 = pFVar12->field_0xa2;
                uVar21 = pFVar12->field_0xa3;
                local_100.Ptr[0] = pFVar12->field_0xa0;
                local_100.Ptr[1] = uVar19;
                local_100.Ptr[2] = uVar20;
                local_100.Ptr[3] = uVar21;
                pUVar35 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
                pFVar36 = UObjectBaseUtility::GetPathName
                                    ((UObjectBaseUtility *)pUVar35,&local_1b8,(UObject *)0x0);
                iVar44 = (pFVar36->Data).ArrayNum;
                if (iVar44 == 0) {
                  pwVar45 = L"";
                  iVar44 = 0;
                }
                else {
                  pwVar45 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
                  iVar44 = iVar44 + -1;
                }
                uVar48 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar44,pwVar45);
                *(uint *)(local_100.Ptr + 4) = uVar48;
                QueryPerformanceCounter(&local_3e0);
                *(LARGE_INTEGER *)(local_100.Ptr + 8) = local_3e0;
                UE::Trace::Private::Field_WriteAuxData
                          (3,(uchar *)this->EnvelopeValues,(this->NumChannels & 0x1ffffU) << 2);
                UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_100,&local_100);
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                }
              }
            }
            this->EnvelopeNumChannels = this->NumChannels;
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
          }
          if (((this->MixerDevice->field_0x5c0 & 0x20) == 0) ||
             (*(longlong *)&this->MixerDevice->field_0x120 == 0)) {
            fVar62 = powf(fVar6,this->VolumeModBaseDb * fVar62);
          }
          else {
            FModulationDestination::ProcessControl(&this->VolumeMod,this->VolumeModBaseDb,0);
            fVar62 = ((this->VolumeMod).DestinationData.Object)->ValueTarget;
          }
          this->TargetOutputVolume = fVar62;
          fVar62 = fVar62 * this->VolumeModifier;
          fVar6 = this->CurrentOutputVolume;
          this->TargetOutputVolume = fVar62;
          fVar61 = (float)((uint)(fVar62 - fVar6) & uVar29);
          if ((fVar22 < fVar61) || (fVar22 < (float)((uint)(fVar6 - fVar59) & uVar29))) {
            pFVar58 = (this->InputBuffer).AllocatorInstance.Data;
            iVar44 = (this->InputBuffer).ArrayNum;
            if (fVar22 < fVar61) {
              local_2f8 = pFVar58;
              if ((iVar44 < 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar26)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              local_1f8._12_4_ = uStack_2ec;
              local_1f8.ArrayNum = iVar44;
              local_1f8.DataPtr = (float *)local_2f8;
              iStack_2f0 = iVar44;
              ArrayFade(&local_1f8,fVar6,fVar62);
              this->CurrentOutputVolume = this->TargetOutputVolume;
            }
            else {
              local_308 = pFVar58;
              if ((iVar44 < 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar26)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              local_208._12_4_ = uStack_2fc;
              local_208.ArrayNum = iVar44;
              local_208.DataPtr = (float *)local_308;
              iStack_300 = iVar44;
              ArrayMultiplyByConstantInPlace(&local_208,fVar62);
            }
          }
          SendAudioToSubmixBufferListeners(this,&this->InputBuffer);
          SendAudioToRegisteredAudioBuses(this,&this->InputBuffer);
          pTVar2 = local_3d8;
          pwVar45 = L"";
          iVar44 = local_3d8->ArrayNum;
          pFVar58 = (local_3d8->AllocatorInstance).Data;
          if ((iVar44 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uStack_50c = local_124;
          local_2e8 = (this->InputBuffer).AllocatorInstance.Data;
          iVar31 = (this->InputBuffer).ArrayNum;
          local_518 = pFVar58;
          iStack_510 = iVar44;
          if ((iVar31 < 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          local_1e8._12_4_ = uStack_50c;
          local_1e8.ArrayNum = iStack_510;
          local_1d8._12_4_ = uStack_2dc;
          local_1d8.ArrayNum = iVar31;
          local_1e8.DataPtr = (float *)local_518;
          local_1d8.DataPtr = (float *)local_2e8;
          iStack_2e0 = iVar31;
          ArrayMixIn(&local_1d8,&local_1e8);
          if ((AudioChannel->Enabled < 0) ||
             (bVar26 = FWeakObjectPtr::IsValid(&(this->OwningSubmixObject).WeakPtr), !bVar26)) {
            bVar26 = false;
          }
          else {
            bVar26 = true;
          }
          if (this->bAutoDisable == '\0') {
            if (!bVar26) {
              return;
            }
            bVar27 = FMixerSubmixPrivate::IsAudioBufferSilent(pTVar2);
          }
          else {
            bVar27 = FMixerSubmixPrivate::IsAudioBufferSilent(pTVar2);
            if ((bVar27) && (this->bIsSilent == '\0')) {
              this->field_0x46c = this->field_0x46c | 8;
              dVar17 = *(double *)&this->MixerDevice->field_0x5c8;
            }
            else {
              this->bIsSilent = '\0';
              dVar17 = __real_bff0000000000000;
            }
            this->SilenceTimeStartSeconds = dVar17;
            if (!bVar26) {
              return;
            }
          }
          if (AudioChannel->Enabled < 0) {
            return;
          }
          UE::Trace::Private::FLogScope::Enter<FAudioSubmixHasActivityFields>
                    ((TLogScope<0> *)local_e0);
          *(undefined4 *)local_e0._0_8_ = *(undefined4 *)&this->MixerDevice->field_0xa0;
          pUVar35 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
          pFVar36 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)pUVar35,&local_1c8,(UObject *)0x0);
          iVar44 = (pFVar36->Data).ArrayNum;
          if (iVar44 != 0) {
            pwVar45 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
            iVar28 = iVar44 + -1;
          }
          uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar28,pwVar45);
          *(uint *)(local_e0._0_8_ + 4) = uVar29;
          QueryPerformanceCounter(&local_3d0);
          *(LARGE_INTEGER *)(local_e0._0_8_ + 8) = local_3d0;
          *(bool *)(local_e0._0_8_ + 0x10) = bVar27 == false;
          *(undefined8 *)(local_e0._8_8_ + 0x28) = *(undefined8 *)(local_e0._8_8_ + 0x20);
          if (local_1c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          return;
        }
      }
LAB_1465688f8:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    if (this->bIsCurrentlyDisabled == '\0') {
      this->field_0x46c = this->field_0x46c | 0x10;
      FModulationDestination::ClearModulators(&this->VolumeMod);
      FModulationDestination::ClearModulators(&this->WetLevelMod);
      FModulationDestination::ClearModulators(&this->DryLevelMod);
      if ((-1 < AudioChannel->Enabled) &&
         (bVar26 = FWeakObjectPtr::IsValid(&(this->OwningSubmixObject).WeakPtr), bVar26)) {
        iVar28 = 0;
        local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4a0.ArrayNum = 0;
        local_4a0.ArrayMax = 0;
        local_4e8[0] = 0.0;
        TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_4a0,local_4e8,this->NumChannels);
        if (-1 < AudioChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FAudioSubmixEnvelopeValuesFields>
                    ((TLogScope<1> *)local_f0);
          *(undefined4 *)local_f0._0_8_ = *(undefined4 *)&this->MixerDevice->field_0xa0;
          pUVar35 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
          pFVar36 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)pUVar35,&local_170,(UObject *)0x0);
          iVar44 = (pFVar36->Data).ArrayNum;
          if (iVar44 == 0) {
            pwVar45 = L"";
          }
          else {
            pwVar45 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
            iVar28 = iVar44 + -1;
          }
          uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar28,pwVar45);
          *(uint *)(local_f0._0_8_ + 4) = uVar29;
          QueryPerformanceCounter(&local_3e8);
          *(LARGE_INTEGER *)(local_f0._0_8_ + 8) = local_3e8;
          FAudioSubmixEnvelopeValuesFields::EnvelopeValues<float_*,int>
                    ((FAudioSubmixEnvelopeValuesFields *)local_f0,
                     (float *)local_4a0.AllocatorInstance.Data,this->NumChannels);
          UE::Trace::Private::TLogScope<1>::operator+=
                    ((TLogScope<1> *)local_f0,(FLogScope *)local_f0);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
        if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.AllocatorInstance.Data);
        }
      }
      if ((5 < (byte)LogAudioMixer._0_1_) && (LogSubmixEnablementCVar == 1)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    SendAudioToSubmixBufferListeners(this,&this->InputBuffer);
    SendAudioToRegisteredAudioBuses(this,&this->InputBuffer);
  }
  else {
    pFVar3 = &(this->SoundfieldStreams).StreamsLock;
    if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
    pIVar10 = (this->SoundfieldStreams).MixedDownAudio.Ptr;
    if (pIVar10 == (ISoundfieldAudioPacket *)0x0) {
      pIVar9 = (this->SoundfieldStreams).Factory;
      pTVar34 = (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *)
                (**(code **)((longlong)*pIVar9 + 0x30))(pIVar9,&local_3c0);
      TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>::operator=
                (&(this->SoundfieldStreams).MixedDownAudio,pTVar34);
      if (local_3c0 != (undefined8 *)0x0) {
        (**(code **)*local_3c0)(local_3c0,1);
      }
    }
    else {
      (**(code **)((longlong)*pIVar10 + 0x18))();
    }
    if (((this->SoundfieldStreams).MixedDownAudio.Ptr == (ISoundfieldAudioPacket *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("SoundfieldStreams.MixedDownAudio.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                            ,0x518,L""), bVar26)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    ProcessAudio(this,(this->SoundfieldStreams).MixedDownAudio.Ptr);
    pIVar11 = (this->SoundfieldStreams).ParentDecoder.Ptr;
    if (pIVar11 != (ISoundfieldDecoderStream *)0x0) {
      local_500._0_8_ = (this->SoundfieldStreams).MixedDownAudio.Ptr;
      pFVar12 = this->MixerDevice;
      local_500._8_8_ = &(this->SoundfieldStreams).CachedPositionalData;
      if (pFVar12 == (FMixerDevice *)0x0) {
        local_500._16_8_ = 0;
      }
      else {
        local_500._20_4_ = (float)*(int *)&pFVar12->field_0x84;
        local_500._16_4_ = *(undefined4 *)&pFVar12->field_0x8c;
      }
      local_3f0 = param_1;
      (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11,local_500,&local_3f0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
  }
  return;
}

// ProcessAudio @ 1465689d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::ProcessAudio(FMixerSubmix *this,ISoundfieldAudioPacket *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ISoundfieldEncoderStream *pIVar7;
  undefined8 *puVar8;
  ISoundfieldFactory *pIVar9;
  ISoundfieldEncodingSettingsProxy *pIVar10;
  ISoundfieldMixerStream *pIVar11;
  code *pcVar12;
  bool bVar13;
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *pTVar14;
  TMap<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>_>
  *pTVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldChildren> FVar20;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldSources> FVar21;
  ISoundfieldAudioPacket *pIVar22;
  longlong lVar23;
  FName FVar24;
  int iVar25;
  TStatIdData *pTVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  undefined1 *puVar29;
  uint *puVar30;
  uint uVar31;
  TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
  *pTVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_268 [4];
  uint local_264;
  ulonglong local_260;
  FName local_258;
  FColor_u_0 local_250;
  FColor_u_0 local_24c;
  uint local_248;
  FColor_u_0 local_244;
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *local_240;
  int iStack_238;
  uint uStack_234;
  undefined1 *local_230;
  undefined4 uStack_228;
  int iStack_224;
  int local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1e8;
  FName local_1d8;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  FSoundfieldEncodingKey local_1b8;
  TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  TMap<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  ISoundfieldAudioPacket *local_148;
  ISoundfieldEncodingSettingsProxy *local_140;
  undefined4 local_138;
  TArray<float,TAlignedHeapAllocator<16>_> *local_130;
  int local_128;
  ISoundfieldEncodingSettingsProxy *local_120;
  int *local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  undefined1 local_f8 [16];
  int local_e8 [2];
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  TQuat<double> local_b8;
  undefined4 local_7c;
  undefined4 local_5c;
  
  if (((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSoundfieldSubmix()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x74b,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  PumpCommandQueue(this);
  if (__CsvProfilerStat1872 == false) {
    FCsvProfilerTrace::OutputInlineStat("SubmixSoundfieldChildren",_GCsvCategory_Audio.Index);
    __CsvProfilerStat1872 = true;
  }
  local_264 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("SubmixSoundfieldChildren",_GCsvCategory_Audio.Index,"CSV_SubmixSoundfieldChildren");
  iVar28 = 0;
  FVar20 = StatPtr_STAT_AudioMixerSubmixSoundfieldChildren;
  if (StatPtr_STAT_AudioMixerSubmixSoundfieldChildren ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldChildren>)0x0) {
    pFVar19 = ::FName::FName(&local_108,"STAT_AudioMixerSubmixSoundfieldChildren");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldChildren>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_AudioMixerSubmixSoundfieldChildren,*pFVar19,
                        L"Submix Soundfield Children","STATGROUP_AudioMixer","STATCAT_Advanced",
                        L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar20;
  bVar13 = false;
  bVar17 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  bVar18 = false;
  bVar16 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_146568bba:
    bVar13 = bVar18;
    bVar17 = bVar16;
    bVar16 = false;
    FVar24 = local_1f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_250.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_250._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar17 = true;
      bVar18 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_210.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_210.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_210,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                   ,0x751);
        bVar13 = true;
        bVar17 = true;
        bVar18 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146568bba;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar16 = true;
  }
  if ((this->SoundfieldStreams).DownmixedChildrenEncoder.Ptr != (ISoundfieldEncoderStream *)0x0) {
    piVar2 = &(this->ScratchBuffer).ArrayMax;
    (this->ScratchBuffer).ArrayNum = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->ScratchBuffer).AllocatorInstance,0,piVar2);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              (&this->ScratchBuffer,
               (this->MixerDevice->PlatformInfo).NumChannels *
               *(int *)&this->MixerDevice->field_0x8c);
  }
  iVar5 = *(int *)&(this->ChildSubmixes).field_0x28;
  puVar1 = &(this->ChildSubmixes).field_0x10;
  local_240 = &this->ChildSubmixes;
  local_260 = 1;
  uStack_234 = 1;
  iStack_224 = iVar28;
  local_220 = iVar28;
  if (iVar5 != 0) {
    puVar30 = *(uint **)&(this->ChildSubmixes).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar1;
    }
    uStack_234 = *puVar30;
    local_220 = 0;
    iVar28 = 0;
    while (uStack_234 == 0) {
      lVar23 = (longlong)iVar28;
      local_220 = local_220 + 0x20;
      iVar28 = iVar28 + 1;
      uStack_234 = 1;
      iStack_224 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_146568caf;
      uStack_234 = puVar30[lVar23 + 1];
    }
    uStack_234 = -uStack_234 & uStack_234;
    uVar3 = (ulonglong)uStack_234 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_1c8 = (int)lVar23;
    iStack_224 = local_220 + -1 + local_1c8;
    if (iVar5 < iStack_224) {
      iStack_224 = iVar5;
    }
  }
LAB_146568caf:
  uVar31 = *(uint *)&(this->ChildSubmixes).field_0x28;
  uStack_21c = local_7c;
  iStack_218 = *(int *)&(this->ChildSubmixes).field_0x8 - *(int *)&(this->ChildSubmixes).field_0x34;
  uVar33 = uVar31 & 0xffffffe0;
  uStack_228 = 0xffffffff;
  TStack_1a0._padding_ = CONCAT44(uStack_234,iVar28);
  TStack_1a0.CurrentBitIndex = iStack_224;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar31 >> 5;
  TStack_1a0._28_4_ = local_7c;
  TStack_1a0.BaseBitIndex = local_220;
  uStack_180 = CONCAT44(uStack_214,iStack_218);
  iStack_238 = iVar28;
  local_230 = puVar1;
  local_1a8 = local_240;
  TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar31 < 0) || (iVar5 < (int)uVar31)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar6 = *(uint *)&(this->ChildSubmixes).field_0x28;
  if (uVar31 != uVar6) {
    puVar29 = *(undefined1 **)&(this->ChildSubmixes).field_0x20;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = puVar1;
    }
    uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar25 * 4);
    while (uVar31 == 0) {
      lVar23 = (longlong)iVar25;
      uVar33 = uVar33 + 0x20;
      iVar25 = iVar25 + 1;
      uVar31 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_146568db2;
      uVar31 = *(uint *)(puVar29 + lVar23 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_1c4 = (int)lVar23;
    uVar31 = local_1c4 + -1 + uVar33;
    if ((int)uVar6 < (int)uVar31) {
      uVar31 = uVar6;
    }
  }
LAB_146568db2:
  while( true ) {
    pTVar14 = local_1a8;
    if (*(int *)&local_1a8->field_0x8 - *(int *)&local_1a8->field_0x34 != (int)uStack_180) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar31) &&
        (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar14 == &this->ChildSubmixes)) break;
    MixInChildSubmix(this,(FChildSubmixInfo *)
                          (*(longlong *)pTVar14 + (longlong)TStack_1a0.CurrentBitIndex * 0x38 + 8),
                     param_1);
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  }
  iVar28 = 0;
  if ((*(int *)&(this->ChildSubmixes).field_0x8 != *(int *)&(this->ChildSubmixes).field_0x34) &&
     ((this->SoundfieldStreams).DownmixedChildrenEncoder.Ptr != (ISoundfieldEncoderStream *)0x0)) {
    local_e8[0] = (this->MixerDevice->PlatformInfo).NumChannels;
    local_e0 = FMixerDevice::GetDefaultPositionMap(this->MixerDevice,local_e8[0]);
    local_130 = &this->ScratchBuffer;
    local_d8 = UE::Math::TQuat<double>::Identity.X._0_4_;
    uStack_d4 = UE::Math::TQuat<double>::Identity.X._4_4_;
    uStack_d0 = UE::Math::TQuat<double>::Identity.Y._0_4_;
    uStack_cc = UE::Math::TQuat<double>::Identity.Y._4_4_;
    local_c8 = UE::Math::TQuat<double>::Identity.Z._0_4_;
    uStack_c4 = UE::Math::TQuat<double>::Identity.Z._4_4_;
    uStack_c0 = UE::Math::TQuat<double>::Identity.W._0_4_;
    uStack_bc = UE::Math::TQuat<double>::Identity.W._4_4_;
    local_128 = (this->MixerDevice->PlatformInfo).NumChannels;
    local_120 = (this->SoundfieldStreams).Settings.Ptr;
    pIVar7 = (this->SoundfieldStreams).DownmixedChildrenEncoder.Ptr;
    local_118 = local_e8;
    (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7,&local_130,param_1);
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("SubmixSoundfieldChildren",local_264);
  if (__CsvProfilerStat1908 == false) {
    FCsvProfilerTrace::OutputInlineStat("SubmixSoundfieldSources",_GCsvCategory_Audio.Index);
    __CsvProfilerStat1908 = true;
  }
  local_248 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("SubmixSoundfieldSources",_GCsvCategory_Audio.Index,"CSV_SubmixSoundfieldSources");
  if (*(int *)&(this->MixerSourceVoices).field_0x8 - *(int *)&(this->MixerSourceVoices).field_0x34 <
      1) {
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldSources>)
             &TStatId::TStatId_NAME_None;
  }
  else {
    FVar21 = StatPtr_STAT_AudioMixerSubmixSoundfieldSources;
    if (StatPtr_STAT_AudioMixerSubmixSoundfieldSources ==
        (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldSources>)0x0) {
      pFVar19 = ::FName::FName(&local_100,"STAT_AudioMixerSubmixSoundfieldSources");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldSources>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AudioMixerSubmixSoundfieldSources,*pFVar19,
                          L"Submix Soundfield Sources","STATGROUP_AudioMixer","STATCAT_Advanced",
                          L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar24 = *(FName *)FVar21;
  bVar13 = false;
  bVar17 = false;
  local_1e8.ComparisonIndex.Value = 0;
  local_1e8.Number = 0;
  bVar18 = false;
  bVar16 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_1465690ba:
    bVar13 = bVar18;
    bVar17 = bVar16;
    bVar16 = false;
    local_258 = local_1e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_24c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_24c._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar13 = false;
      bVar17 = true;
      bVar18 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_208.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                   ,0x775);
        bVar13 = true;
        bVar17 = true;
        bVar18 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1465690ba;
    local_258 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar16 = true;
  }
  if (((this->SoundfieldStreams).Mixer.Ptr == (ISoundfieldMixerStream *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("SoundfieldStreams.Mixer.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x777,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  puVar1 = &(this->MixerSourceVoices).field_0x10;
  iVar5 = *(int *)&(this->MixerSourceVoices).field_0x28;
  local_240 = (TMap<unsigned_int,Audio::FChildSubmixInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FChildSubmixInfo,0>_>
               *)&this->MixerSourceVoices;
  iStack_224 = iVar28;
  local_220 = iVar28;
  if (iVar5 != 0) {
    puVar30 = *(uint **)&(this->MixerSourceVoices).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar1;
    }
    uVar31 = *puVar30;
    local_220 = 0;
    iVar28 = 0;
    while (uVar31 == 0) {
      lVar23 = (longlong)iVar28;
      local_220 = local_220 + 0x20;
      iVar28 = iVar28 + 1;
      iStack_224 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_146569182;
      uVar31 = puVar30[lVar23 + 1];
    }
    local_260 = (ulonglong)(-uVar31 & uVar31);
    uVar3 = local_260 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_1c0 = (int)lVar23;
    iStack_224 = local_220 + -1 + local_1c0;
    if (iVar5 < iStack_224) {
      iStack_224 = iVar5;
    }
  }
LAB_146569182:
  uVar31 = *(uint *)&(this->MixerSourceVoices).field_0x28;
  uStack_234 = (uint)local_260;
  uStack_21c = local_5c;
  iStack_218 = *(int *)&(this->MixerSourceVoices).field_0x8 -
               *(int *)&(this->MixerSourceVoices).field_0x34;
  uVar33 = uVar31 & 0xffffffe0;
  uStack_228 = 0xffffffff;
  local_264 = -1 << ((byte)uVar31 & 0x1f);
  TStack_170._padding_ = CONCAT44(uStack_234,iVar28);
  TStack_170.CurrentBitIndex = iStack_224;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar31 >> 5;
  TStack_170._28_4_ = local_5c;
  TStack_170.BaseBitIndex = local_220;
  uStack_150 = CONCAT44(uStack_214,iStack_218);
  iStack_238 = iVar28;
  local_230 = puVar1;
  local_178 = (TMap<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>_>
               *)local_240;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_260._0_4_ = uVar31;
  if ((((int)uVar31 < 0) || (iVar5 < (int)uVar31)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar6 = *(uint *)&(this->MixerSourceVoices).field_0x28;
  if (uVar31 != uVar6) {
    puVar29 = *(undefined1 **)&(this->MixerSourceVoices).field_0x20;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = puVar1;
    }
    uVar31 = local_264 & *(uint *)(puVar29 + (longlong)iVar25 * 4);
    while (uVar31 == 0) {
      lVar23 = (longlong)iVar25;
      uVar33 = uVar33 + 0x20;
      iVar25 = iVar25 + 1;
      local_260._0_4_ = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_1465692b5;
      uVar31 = *(uint *)(puVar29 + lVar23 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_1bc = (int)lVar23;
    local_260._0_4_ = (uVar33 - 1) + local_1bc;
    if ((int)uVar6 < (int)(uint)local_260) {
      local_260._0_4_ = uVar6;
    }
  }
LAB_1465692b5:
  uVar31 = (uint)local_260;
  while( true ) {
    pTVar15 = local_178;
    if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    FVar24 = local_258;
    if (((TStack_170.CurrentBitIndex == uVar31) &&
        (TStack_170.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->MixerSourceVoices).field_0x10)) &&
       (pTVar15 == &this->MixerSourceVoices)) break;
    pTVar32 = &(this->SoundfieldStreams).Settings;
    lVar23 = *(longlong *)pTVar15;
    puVar8 = *(undefined8 **)(lVar23 + (longlong)TStack_170.CurrentBitIndex * 0x18);
    uVar4 = *(undefined4 *)(lVar23 + 8 + (longlong)TStack_170.CurrentBitIndex * 0x18);
    if ((((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) ||
        (pTVar32->Ptr == (ISoundfieldEncodingSettingsProxy *)0x0)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSoundfieldSubmix() && SoundfieldStreams.Settings.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                            ,0xaa3,L""), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pIVar9 = (this->SoundfieldStreams).Factory;
    pIVar10 = pTVar32->Ptr;
    if (pIVar9 == (ISoundfieldFactory *)0x0) {
      local_1b8.SoundfieldFormat = ISoundfieldFactory::GetFormatNameForNoEncoding();
    }
    else {
      local_1b8.SoundfieldFormat = (FName)(**(code **)((longlong)*pIVar9 + 8))(pIVar9,local_f8);
    }
    local_1b8.SoundfieldFormat = *(FName *)local_1b8.SoundfieldFormat;
    local_1b8.EncodingSettingsID = (**(code **)((longlong)*pIVar10 + 8))(pIVar10);
    FMixerDevice::CheckAudioRenderingThread((FMixerDevice *)puVar8[0xb]);
    if ((*(byte *)(puVar8 + 0x14) & 0x60) == 0) {
      pIVar22 = (ISoundfieldAudioPacket *)0x0;
    }
    else {
      pIVar22 = FMixerSourceManager::GetEncodedOutput
                          ((FMixerSourceManager *)*puVar8,*(int *)((longlong)puVar8 + 0x9c),
                           &local_1b8);
    }
    FMixerSourceManager::GetListenerRotation
              ((FMixerSourceManager *)*puVar8,&local_b8,*(int *)((longlong)puVar8 + 0x9c));
    *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.X = local_b8.X._0_4_;
    *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.X + 4) =
         local_b8.X._4_4_;
    *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Y = local_b8.Y._0_4_;
    *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Y + 4) =
         local_b8.Y._4_4_;
    *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Z = local_b8.Z._0_4_;
    *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Z + 4) =
         local_b8.Z._4_4_;
    *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.W = local_b8.W._0_4_;
    *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.W + 4) =
         local_b8.W._4_4_;
    if (pIVar22 != (ISoundfieldAudioPacket *)0x0) {
      local_140 = (this->SoundfieldStreams).Settings.Ptr;
      pIVar11 = (this->SoundfieldStreams).Mixer.Ptr;
      local_148 = pIVar22;
      local_138 = uVar4;
      (**(code **)((longlong)*pIVar11 + 8))(pIVar11,&local_148,param_1);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  pTVar26 = &TStatId::TStatId_NAME_None;
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("SubmixSoundfieldSources",local_248);
  if (__CsvProfilerStat1939 == false) {
    FCsvProfilerTrace::OutputInlineStat("SubmixSoundfieldProcessors",_GCsvCategory_Audio.Index);
    __CsvProfilerStat1939 = true;
  }
  uVar31 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat
            ("SubmixSoundfieldProcessors",_GCsvCategory_Audio.Index,"CSV_SubmixSoundfieldProcessors"
            );
  if ((0 < (this->SoundfieldStreams).EffectProcessors.ArrayNum) &&
     (pTVar26 = (TStatIdData *)StatPtr_STAT_AudioMixerSubmixSoundfieldProcessors,
     StatPtr_STAT_AudioMixerSubmixSoundfieldProcessors ==
     (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixSoundfieldProcessors>)0x0)) {
    pFVar19 = ::FName::FName(&local_110,"STAT_AudioMixerSubmixSoundfieldProcessors");
    pTVar26 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_AudioMixerSubmixSoundfieldProcessors,*pFVar19,
                         L"Submix Soundfield Processors","STATGROUP_AudioMixer","STATCAT_Advanced",
                         L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)pTVar26;
  bVar17 = false;
  bVar16 = false;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_244.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_244._s_0,(char *)*(FName *)((longlong)pTVar26 + 0x10));
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_200.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_200.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_200,(wchar_t *)*(FName *)((longlong)pTVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                   ,0x794);
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_258 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar13 = true;
      goto LAB_146569622;
    }
  }
  bVar13 = false;
  FVar24 = local_1d8;
LAB_146569622:
  iVar28 = (this->SoundfieldStreams).EffectProcessors.ArrayNum;
  pFVar27 = (this->SoundfieldStreams).EffectProcessors.AllocatorInstance.Data;
  pFVar34 = pFVar27 + (longlong)iVar28 * 0x10;
  while( true ) {
    if ((this->SoundfieldStreams).EffectProcessors.ArrayNum != iVar28) {
      local_268[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSoundfieldEffectProcessorData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_268);
    }
    if (pFVar27 == pFVar34) {
      if (bVar16) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar13) {
        FThreadStats::AddMessage(FVar24,CycleScopeEnd);
      }
      FCsvProfiler::EndStat("SubmixSoundfieldProcessors",uVar31);
      return;
    }
    if ((*(longlong *)(pFVar27 + 8) == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("EffectData.Processor.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                            ,0x798,L""), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("EffectData.Settings.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                            ,0x799,L""), bVar18)) break;
    (**(code **)(**(longlong **)(pFVar27 + 8) + 8))
              (*(longlong **)(pFVar27 + 8),param_1,(this->SoundfieldStreams).Settings.Ptr,
               *(longlong *)pFVar27);
    pFVar27 = pFVar27 + 0x10;
  }
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

// ProcessAudioAndSendToEndpoint @ 146569750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::ProcessAudioAndSendToEndpoint(FMixerSubmix *this)

{
  FEndpointData *this_00;
  int *piVar1;
  TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *pTVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *this_01;
  int *piVar3;
  int *piVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *this_02;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  int iVar6;
  IAudioEndpoint *pIVar7;
  ISoundfieldFactory *pIVar8;
  ISoundfieldAudioPacket *pIVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  FPatchInput *pFVar16;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar17;
  float fVar18;
  float fVar19;
  int local_res8 [2];
  int local_res10;
  int local_res18;
  undefined8 *local_res20;
  FMixerSubmix *local_88;
  TArray<float,TAlignedHeapAllocator<16>_> local_80;
  FPatchInput local_70 [2];
  
  if ((this->MixerDevice == (FMixerDevice *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MixerDevice",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x7a2,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this_00 = &this->EndpointData;
  pIVar7 = (this->EndpointData).NonSoundfieldEndpoint.Ptr;
  if ((pIVar7 == (IAudioEndpoint *)0x0) ||
     (cVar13 = (**(code **)(pIVar7->_padding_ + 8))(), cVar13 != '\0')) {
    pIVar8 = (this->SoundfieldStreams).Factory;
    if (pIVar8 == (ISoundfieldFactory *)0x0) {
      this_01 = &(this->EndpointData).AudioBuffer;
      iVar14 = (this->EndpointData).AudioBuffer.ArrayMax;
      piVar1 = &(this->EndpointData).AudioBuffer.ArrayMax;
      (this->EndpointData).AudioBuffer.ArrayNum = 0;
      if (iVar14 < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&this_01->AllocatorInstance,0,piVar1);
      }
      TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
                (this_01,(this->MixerDevice->PlatformInfo).NumChannels *
                         *(int *)&this->MixerDevice->field_0x8c);
      ProcessAudio(this,this_01);
      bVar12 = FPatchInput::IsOutputStillActive(&this_00->Input);
      if (!bVar12) {
        pFVar16 = IAudioEndpoint::PatchNewInput
                            ((this->EndpointData).NonSoundfieldEndpoint.Ptr,local_70,
                             (float)*(int *)&this->MixerDevice->field_0x8c /
                             (float)*(int *)&this->MixerDevice->field_0x84,
                             &(this->EndpointData).SampleRate,&(this->EndpointData).NumChannels);
        FPatchInput::operator=(&this_00->Input,pFVar16);
        FPatchInput::~FPatchInput(local_70);
        fVar19 = (this->EndpointData).SampleRate;
        fVar18 = (float)*(int *)&this->MixerDevice->field_0x84;
        if (__real_322bcc77 <
            (float)((uint)(fVar19 - fVar18) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          fVar19 = fVar19 / fVar18;
          FResampler::Init(&(this->EndpointData).Resampler,Linear,fVar19,this->NumChannels);
          (this->EndpointData).bShouldResample = true;
          piVar3 = &(this->EndpointData).ResampledAudioBuffer.ArrayMax;
          iVar14 = *piVar3;
          piVar4 = &(this->EndpointData).ResampledAudioBuffer.ArrayNum;
          *piVar4 = 0;
          if (iVar14 < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&(this->EndpointData).ResampledAudioBuffer.AllocatorInstance,0,piVar3);
          }
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,(int)((float)(this->EndpointData).AudioBuffer.ArrayNum * fVar19 +
                              __real_41800000),
                     &(this->EndpointData).ResampledAudioBuffer.AllocatorInstance,piVar4,piVar3);
        }
      }
      iVar14 = (this->EndpointData).AudioBuffer.ArrayNum;
      this_02 = &(this->EndpointData).ResampledAudioBuffer;
      local_res8[0] = iVar14 / this->NumChannels;
      if ((this->EndpointData).bShouldResample == false) {
        if (this_02 != this_01) {
          pFVar10 = (this_02->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (this_02->AllocatorInstance).Data = (this_01->AllocatorInstance).Data;
          (this_01->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (this->EndpointData).ResampledAudioBuffer.ArrayNum =
               (this->EndpointData).AudioBuffer.ArrayNum;
          (this->EndpointData).ResampledAudioBuffer.ArrayMax = *piVar1;
          (this->EndpointData).AudioBuffer.ArrayNum = 0;
          *piVar1 = 0;
        }
      }
      else {
        FResampler::ProcessAudio
                  (&(this->EndpointData).Resampler,(float *)(this_01->AllocatorInstance).Data,iVar14
                   ,false,(float *)(this_02->AllocatorInstance).Data,
                   (this->EndpointData).ResampledAudioBuffer.ArrayNum,local_res8);
      }
      local_res18 = this->NumChannels;
      local_res10 = (this->EndpointData).NumChannels;
      if (local_res10 == local_res18) {
        TArray<float,TAlignedHeapAllocator<16>_>::operator=
                  (&(this->EndpointData).DownmixedResampledAudioBuffer,this_02);
      }
      else {
        pTVar17 = &(this->EndpointData).DownmixedResampledAudioBuffer;
        iVar14 = (this->EndpointData).DownmixedResampledAudioBuffer.ArrayMax;
        piVar1 = &(this->EndpointData).DownmixedResampledAudioBuffer.ArrayMax;
        (this->EndpointData).DownmixedResampledAudioBuffer.ArrayNum = 0;
        if (iVar14 < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&pTVar17->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,local_res8[0] * (this->EndpointData).NumChannels,&pTVar17->AllocatorInstance,
                   &(this->EndpointData).DownmixedResampledAudioBuffer.ArrayNum,piVar1);
        pTVar5 = &(this->EndpointData).DownmixChannelMap;
        iVar14 = (this->EndpointData).DownmixChannelMap.ArrayMax;
        (this->EndpointData).DownmixChannelMap.ArrayNum = 0;
        if (iVar14 < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&pTVar5->AllocatorInstance,0,
                     &(this->EndpointData).DownmixChannelMap.ArrayMax);
        }
        FMixerDevice::Get2DChannelMap
                  (false,this->NumChannels,(this->EndpointData).NumChannels,false,pTVar5);
        iVar14 = (this->EndpointData).NumChannels;
        iVar6 = this->NumChannels;
        local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_80.ArrayNum = 0;
        local_80.ArrayMax = 0;
        FMixerDevice::Get2DChannelMap(false,iVar6,iVar14,false,&local_80);
        Audio::DownmixBuffer(iVar6,iVar14,this_02,pTVar17,(float *)local_80.AllocatorInstance.Data);
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
      }
      pTVar17 = &(this->EndpointData).DownmixedResampledAudioBuffer;
      FPatchInput::PushAudio
                (&this_00->Input,(float *)(pTVar17->AllocatorInstance).Data,
                 (this->EndpointData).DownmixedResampledAudioBuffer.ArrayNum);
      IAudioEndpoint::ProcessAudioIfNeccessary((this->EndpointData).NonSoundfieldEndpoint.Ptr);
      if (local_res10 == local_res18) {
        TArray<float,TAlignedHeapAllocator<16>_>::operator=(this_02,pTVar17);
      }
      if (((this->EndpointData).bShouldResample == false) && (this_01 != this_02)) {
        pFVar10 = (this_01->AllocatorInstance).Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        (this_01->AllocatorInstance).Data = (this_02->AllocatorInstance).Data;
        (this_02->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->EndpointData).AudioBuffer.ArrayNum =
             (this->EndpointData).ResampledAudioBuffer.ArrayNum;
        (this->EndpointData).AudioBuffer.ArrayMax =
             (this->EndpointData).ResampledAudioBuffer.ArrayMax;
        (this->EndpointData).ResampledAudioBuffer.ArrayNum = 0;
        (this->EndpointData).ResampledAudioBuffer.ArrayMax = 0;
      }
    }
    else {
      pTVar2 = &(this->EndpointData).AudioPacket;
      if (pTVar2->Ptr == (ISoundfieldAudioPacket *)0x0) {
        puVar15 = (undefined8 *)(**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,&local_res20);
        if (pTVar2 != (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *)
                      puVar15) {
          pIVar9 = pTVar2->Ptr;
          pTVar2->Ptr = (ISoundfieldAudioPacket *)*puVar15;
          *puVar15 = 0;
          if (pIVar9 != (ISoundfieldAudioPacket *)0x0) {
            (**(code **)*pIVar9)(pIVar9,1);
          }
        }
        if (local_res20 != (undefined8 *)0x0) {
          (**(code **)*local_res20)(local_res20,1);
        }
      }
      else {
        (**(code **)((longlong)*pTVar2->Ptr + 0x18))();
      }
      if ((pTVar2->Ptr == (ISoundfieldAudioPacket *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("EndpointData.AudioPacket",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                              ,0x7b8,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      ProcessAudio(this,pTVar2->Ptr);
      iVar14 = ISoundfieldEndpoint::GetRemainderInPacketBuffer
                         ((this->EndpointData).SoundfieldEndpoint.Ptr);
      if (iVar14 < 1) {
        local_88 = this;
        `Audio::FMixerSubmix::ProcessAudioAndSendToEndpoint'::__l32::<lambda_1>::operator()
                  (&local_88);
        ISoundfieldEndpoint::ProcessAudioIfNecessary((this->EndpointData).SoundfieldEndpoint.Ptr);
      }
      else {
        ISoundfieldEndpoint::PushAudio((this->EndpointData).SoundfieldEndpoint.Ptr,pTVar2);
        ISoundfieldEndpoint::ProcessAudioIfNecessary((this->EndpointData).SoundfieldEndpoint.Ptr);
      }
    }
  }
  else {
    piVar1 = &(this->EndpointData).AudioBuffer.ArrayMax;
    iVar14 = *piVar1;
    (this->EndpointData).AudioBuffer.ArrayNum = 0;
    if (iVar14 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->EndpointData).AudioBuffer.AllocatorInstance,0,piVar1);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              (&(this->EndpointData).AudioBuffer,
               (this->MixerDevice->PlatformInfo).NumChannels *
               *(int *)&this->MixerDevice->field_0x8c);
  }
  return;
}

// PruneSubmixBufferListeners @ 14656a010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::PruneSubmixBufferListeners(FMixerSubmix *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  byte bVar10;
  
  lpCriticalSection = &this->BufferListenerCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar9 = (this->BufferListenerPtrs).ArrayNum;
  lVar4 = (longlong)iVar9;
  if (iVar9 != 0) {
    iVar9 = 0;
    pFVar1 = (this->BufferListenerPtrs).AllocatorInstance.Data;
    if (((*(longlong *)pFVar1 == 0) || (*(longlong *)(pFVar1 + 8) == 0)) ||
       (*(int *)(*(longlong *)(pFVar1 + 8) + 8) < 1)) {
      bVar10 = 0;
    }
    else {
      bVar10 = 1;
    }
    lVar8 = 0;
    iVar6 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar7 = iVar6 + 1;
      if (lVar8 < lVar4) {
        pFVar2 = pFVar1 + lVar8 * 0x10;
        do {
          if (((*(longlong *)pFVar2 == 0) || (*(longlong *)(pFVar2 + 8) == 0)) ||
             (*(int *)(*(longlong *)(pFVar2 + 8) + 8) < 1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar10 != bVar3) break;
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 1;
          pFVar2 = pFVar2 + 0x10;
        } while (lVar8 < lVar4);
      }
      iVar5 = iVar7 - iVar6;
      if (bVar10 == 0) {
        DestructItems<TWeakPtr<ISubmixBufferListener,1>,int>
                  ((TWeakPtr<ISubmixBufferListener,1> *)(pFVar1 + (longlong)iVar6 * 0x10),iVar5);
      }
      else {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 0x10,pFVar1 + (longlong)iVar6 * 0x10,
                  (longlong)iVar5 << 4);
        }
        iVar9 = iVar9 + iVar5;
      }
      bVar10 = bVar10 ^ 1;
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->BufferListenerPtrs).ArrayNum = iVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00014656a166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PumpCommandQueue @ 14656a240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::PumpCommandQueue(FMixerSubmix *this)

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

// RegisterAudioBus @ 14656b310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::RegisterAudioBus(FMixerSubmix *this,FAudioBusKey *param_1,FPatchInput *param_2)

{
  FAudioBusKey FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FPatchInput local_58;
  code *local_38 [2];
  longlong local_28 [3];
  longlong *local_10;
  
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x254,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = *param_1;
  FPatchInput::FPatchInput(&local_58,param_2);
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x30,8);
  plVar4 = local_10 + 1;
  *local_10 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`Audio::FMixerSubmix::RegisterAudioBus'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *plVar4 = (longlong)this;
  *(FAudioBusKey *)(local_10 + 2) = FVar1;
  FPatchInput::FPatchInput((FPatchInput *)(local_10 + 3),&local_58);
  if (plVar4 != (longlong *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerSubmix::RegisterAudioBus'::__l2::<lambda_1>,void>
                  ::Call;
  }
  TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
            (&this->CommandQueue,(TFunction<void___cdecl(void)> *)local_38);
  if (local_38[0] != (code *)0x0) {
    plVar4 = local_28;
    if (local_10 != (longlong *)0x0) {
      plVar4 = local_10;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FPatchInput::~FPatchInput(&local_58);
  return;
}

// RegisterBufferListener @ 14656b430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::RegisterBufferListener(FMixerSubmix *this,ISubmixBufferListener *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  TWeakPtr<ISubmixBufferListener,1> local_28;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  lpCriticalSection = &this->BufferListenerCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == (ISubmixBufferListener *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferListener",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x906,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                     ((TSharedFromThis<ISubmixBufferListener,1> *)&param_1->field_0x8,&local_18);
  local_28.Object = pTVar5->Object;
  local_28.WeakReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TWeakPtr<ISubmixBufferListener,1>_>(&this->BufferListenerPtrs,&local_28);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014656b502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RegisterBufferListener @ 14656b520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::RegisterBufferListener
          (FMixerSubmix *this,TSharedRef<ISubmixBufferListener,1> *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  TWeakPtr<ISubmixBufferListener,1> local_18;
  
  lpCriticalSection = &this->BufferListenerCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = param_1->Object;
    local_18.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<ISubmixBufferListener,1>_>(&this->BufferListenerPtrs,&local_18);
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
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RemoveChildSubmix @ 14656cea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::RemoveChildSubmix(FMixerSubmix *this,TWeakPtr<Audio::FMixerSubmix,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  undefined ***pppuVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  code *local_48 [2];
  undefined **local_38;
  FMixerSubmix *local_30;
  uint local_28;
  undefined ***local_20;
  
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14656ced0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    if (param_1->Object != (FMixerSubmix *)0x0) {
      local_28 = param_1->Object->Id;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FMixerSubmix::RemoveChildSubmix'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerSubmix::RemoveChildSubmix'::__l2::<lambda_1>,void>
                    ::Call;
      local_20 = (undefined ***)0x0;
      local_30 = this;
      TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
                (&this->CommandQueue,(TFunction<void___cdecl(void)> *)local_48);
      if (local_48[0] != (code *)0x0) {
        pppuVar4 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar4 = local_20;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
  }
LAB_14656ced0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  return;
}

// RemoveEnvelopeFollowerDelegate @ 14656d4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::RemoveEnvelopeFollowerDelegate(FMixerSubmix *this,FOnSubmixEnvelopeBP *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSubmixEnvelope,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// RemoveSoundEffectSubmix @ 14656da90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::RemoveSoundEffectSubmix(FMixerSubmix *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  longlong local_48;
  FSharedReferencer<1> FStack_40;
  
  lpCriticalSection = &this->EffectChainMutationCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  uVar1 = (this->EffectChains).ArrayNum;
  uVar3 = (ulonglong)(int)uVar1;
  pFVar5 = (this->EffectChains).AllocatorInstance.Data;
  pFVar7 = pFVar5 + uVar3 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != (int)uVar3) {
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar7) break;
    iVar2 = *(int *)(pFVar5 + 8);
    plVar6 = *(longlong **)pFVar5;
    plVar4 = plVar6 + (longlong)iVar2 * 2;
    while( true ) {
      if (*(int *)(pFVar5 + 8) != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<FSoundEffectSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar6 == plVar4) break;
      if ((*plVar6 != 0) && (*(uint *)(*plVar6 + 0x54) == param_1)) {
        local_48 = 0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (plVar6 != &local_48) {
          *plVar6 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(plVar6 + 1),&FStack_40);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_40.ReferenceController);
        this->NumSubmixEffects = this->NumSubmixEffects + -1;
        goto LAB_14656db9f;
      }
      plVar6 = plVar6 + 2;
    }
    uVar3 = (ulonglong)uVar1;
    pFVar5 = pFVar5 + 0x30;
  }
LAB_14656db9f:
                    /* WARNING: Could not recover jumptable at 0x00014656dbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveSoundEffectSubmixAtIndex @ 14656dbe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::RemoveSoundEffectSubmixAtIndex(FMixerSubmix *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  iVar1 = (this->EffectChains).ArrayNum;
  pFVar5 = (this->EffectChains).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (pFVar5[0x2c] != (FScriptContainerElement)0x0) {
      if ((-1 < param_1) && (param_1 < *(int *)(pFVar5 + 8))) {
        if ((param_1 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar4 = (longlong *)((longlong)param_1 * 0x10 + *(longlong *)pFVar5);
        if (*plVar4 != 0) {
          local_28 = 0;
          FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (plVar4 != &local_28) {
            *plVar4 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(plVar4 + 1),&FStack_20);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_20.ReferenceController);
          this->NumSubmixEffects = this->NumSubmixEffects + -1;
        }
      }
      return;
    }
    pFVar5 = pFVar5 + 0x30;
  }
  return;
}

// RemoveSourceVoice @ 14656dd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::RemoveSourceVoice(FMixerSubmix *this,FMixerSourceVoice *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  FMixerSourceVoice *local_res8;
  
  FMixerDevice::CheckAudioRenderingThread(this->MixerDevice);
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(this->MixerSourceVoices).field_0x8 != *(int *)&(this->MixerSourceVoices).field_0x34)
  {
    puVar6 = *(undefined1 **)&(this->MixerSourceVoices).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->MixerSourceVoices).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->MixerSourceVoices).field_0x48 - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      lVar7 = *(longlong *)&(this->MixerSourceVoices).field_0x0;
      while (lVar1 = lVar7 + (longlong)iVar4 * 0x18,
            *(FMixerSourceVoice **)(lVar7 + (longlong)iVar4 * 0x18) != param_1) {
        iVar4 = *(int *)(lVar1 + 0x10);
        if (iVar4 == -1) {
          return;
        }
      }
      lVar7 = lVar1 + 8;
      if (lVar1 == 0) {
        lVar7 = 0;
      }
      if (lVar7 != 0) {
        local_res8 = param_1;
        iVar4 = TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
                ::RemoveImpl<Audio::FMixerSourceVoice_const_*>
                          ((TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
                            *)&this->MixerSourceVoices,uVar5,&local_res8);
        if (iVar4 != 1) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4330698859807244978>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                             ,0x2b2,"NumRemoved == 1");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  return;
}

// RemoveSpectralAnalysisDelegate @ 14656de20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::RemoveSpectralAnalysisDelegate
          (FMixerSubmix *this,FOnSubmixSpectralAnalysisBP *param_1)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  FOnSubmixSpectralAnalysisBP *this_00;
  FScriptContainerElement *pFVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FWeakObjectPtr *this_01;
  TArray<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,TSizedDefaultAllocator<32>_> *this_02;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FWeakObjectPtr *pFVar15;
  undefined1 local_res8 [8];
  FOnSubmixSpectralAnalysisBP *local_res10;
  undefined1 local_res18;
  undefined1 local_res20;
  <lambda_1> local_107 [3];
  uint local_104;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  LPCRITICAL_SECTION local_f0;
  int local_e8;
  int iStack_e4;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_d8;
  FDestructionSentinel local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  local_f0 = (LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection;
  local_res10 = param_1;
  if (local_f0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_f0);
  this_00 = local_res10;
  this_02 = &this->SpectralAnalysisDelegates;
  local_104 = (this->SpectralAnalysisDelegates).ArrayNum;
  uVar11 = (ulonglong)(int)local_104;
  pFVar12 = (this_02->AllocatorInstance).Data;
  pFVar13 = pFVar12 + 0x38;
  local_f8 = pFVar12 + uVar11 * 0x60;
  do {
    pFVar3 = local_f8;
    local_100 = pFVar12;
    if ((this->SpectralAnalysisDelegates).ArrayNum != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lpCriticalSection = local_f0;
    if (pFVar12 == pFVar3) {
      iVar7 = (this->SpectralAnalysisDelegates).ArrayNum;
      bVar4 = false;
      uVar6 = 0;
      if (0 < iVar7) {
        lVar14 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar6 < iVar7) {
            uVar10 = ~uVar6 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar13 = (this_02->AllocatorInstance).Data;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (pFVar13 + lVar14 + 0x28),&local_68);
          iVar7 = *(int *)(pFVar13 + lVar14 + 0x38);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_68);
          if (iVar7 < 1) {
            bVar4 = true;
            uVar10 = 0;
            if ((int)uVar6 < (this->SpectralAnalysisDelegates).ArrayNum) {
              uVar10 = ~uVar6 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            TArray<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,TSizedDefaultAllocator<32>_>::
            RemoveAtSwapImpl(this_02,uVar6);
          }
          else {
            uVar6 = uVar6 + 1;
            lVar14 = lVar14 + 0x60;
          }
          iVar7 = (this->SpectralAnalysisDelegates).ArrayNum;
        } while ((int)uVar6 < iVar7);
        if (bVar4) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,&this_02->AllocatorInstance,iVar7,
                     &(this->SpectralAnalysisDelegates).ArrayMax);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014656e23e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_98);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x8);
    FVar1.ObjectIndex = *(int *)&this_00->field_0x10;
    FVar1.ObjectSerialNumber = *(int *)&this_00->field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar13 + -0x10),&local_b0
              );
    this_01 = *(FWeakObjectPtr **)(pFVar13 + -8);
    pFVar15 = this_01 + (longlong)*(int *)pFVar13 * 2;
    local_e8 = FVar1.ObjectIndex;
    iStack_e4 = FVar1.ObjectSerialNumber;
    for (; this_01 != pFVar15; this_01 = this_01 + 2) {
      local_res18 = 0;
      if (((this_01[1] == FVar1) && (local_res20 = 0, pUVar8 != (UObject *)0x0)) &&
         (pUVar9 = FWeakObjectPtr::GetEvenIfUnreachable(this_01), pUVar8 == pUVar9)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_b0);
        if (this_01 != (FWeakObjectPtr *)0x0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_80);
          local_d8.Object.ObjectIndex = *(int *)&this_00->field_0x8;
          local_d8.Object.ObjectSerialNumber = *(int *)&this_00->field_0xc;
          local_d8.FunctionName.ComparisonIndex.Value = *(uint *)&this_00->field_0x10;
          local_d8.FunctionName.Number = *(uint *)&this_00->field_0x14;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_80);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar13 + -0x10),
                     (FWriteAccessScope *)&local_c8);
          uVar6 = TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                  ::Find((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                          *)(pFVar13 + -8),&local_d8);
          if (uVar6 != 0xffffffff) {
            uVar10 = 0;
            if ((int)(uVar6 + 1) <= *(int *)pFVar13) {
              uVar10 = ~uVar6 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar7 = ~uVar6 + *(int *)pFVar13;
            if (1 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 != 0) {
              memmove((void *)((longlong)(int)uVar6 * 0x10 + *(longlong *)(pFVar13 + -8)),
                      (void *)((longlong)(*(int *)pFVar13 - iVar7) * 0x10 +
                              *(longlong *)(pFVar13 + -8)),(longlong)iVar7 << 4);
            }
            *(int *)pFVar13 = *(int *)pFVar13 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,(ForAnyElementType *)(pFVar13 + -8),*(int *)pFVar13,
                       (int *)(pFVar13 + 4));
          }
          TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
          ::
          RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                    ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                      *)(pFVar13 + -8),local_107,Default);
          if (local_c8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
          }
        }
        goto LAB_14656df72;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
LAB_14656df72:
    pFVar12 = local_100 + 0x60;
    uVar11 = (ulonglong)local_104;
    pFVar13 = pFVar13 + 0x60;
  } while( true );
}

// ReplaceSoundEffectSubmix @ 14656ef50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::ReplaceSoundEffectSubmix
          (FMixerSubmix *this,int param_1,TSharedPtr<FSoundEffectSubmix,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSoundEffectSubmix *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->EffectChainMutationCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->EffectChains).ArrayNum;
  pFVar9 = (this->EffectChains).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) goto LAB_14656f059;
    if (pFVar9[0x2c] != (FScriptContainerElement)0x0) break;
    pFVar9 = pFVar9 + 0x30;
  }
  if ((-1 < param_1) && (param_1 < *(int *)(pFVar9 + 8))) {
    if (param_1 < 0) {
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
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar3 = param_2->Object;
    puVar7 = (undefined8 *)((longlong)param_1 * 0x10 + *(longlong *)pFVar9);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (TReferenceControllerBase<1> *)puVar7[1];
    *puVar7 = pFVar3;
    puVar7[1] = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
LAB_14656f059:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ResumeRecordingOutput @ 1465705b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::ResumeRecordingOutput(FMixerSubmix *this)

{
  if ((this->RecordingData).ArrayNum == 0) {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return;
    }
  }
  else {
    this->bIsRecording = '\x01';
  }
  return;
}

// SendAudioToRegisteredAudioBuses @ 146571b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SendAudioToRegisteredAudioBuses
          (FMixerSubmix *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FMixerSourceManager *this_00;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1762,"FMixerSubmix::SendAudioToRegisteredAudioBuses",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
               ,0x6e2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1762);
  }
  this_00 = FMixerDevice::GetSourceManager(this->MixerDevice);
  if (this_00 != (FMixerSourceManager *)0x0) {
    iVar11 = 0;
    local_res20 = param_1->ArrayNum / this->NumChannels;
    puVar1 = &(this->AudioBuses).field_0x10;
    iVar8 = *(int *)&(this->AudioBuses).field_0x28;
    uVar6 = 1;
    iVar13 = 0;
    iVar7 = 0;
    if (iVar8 != 0) {
      puVar14 = *(uint **)&(this->AudioBuses).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar10 = *puVar14;
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar11 + 1;
        iVar7 = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146571caf;
        uVar10 = puVar14[lVar9 + 1];
      }
      uVar6 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = (int)lVar9 + -1 + iVar13;
      if (iVar8 < iVar7) {
        iVar7 = iVar8;
      }
    }
LAB_146571caf:
    uVar10 = *(uint *)&(this->AudioBuses).field_0x28;
    uVar15 = uVar10 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar6,iVar11);
    TStack_70.CurrentBitIndex = iVar7;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_70._28_4_ = iVar7;
    TStack_70.BaseBitIndex = iVar13;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->AudioBuses).field_0x8 -
                         *(int *)&(this->AudioBuses).field_0x34);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar10 < 0) || (iVar8 < (int)uVar10)) &&
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
        lVar9 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar10 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_146571dc0;
        uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (int)lVar9 + -1 + uVar15;
      if ((int)uVar6 < (int)uVar10) {
        uVar10 = uVar6;
      }
    }
LAB_146571dc0:
    while( true ) {
      if (*(int *)&(this->AudioBuses).field_0x8 - *(int *)&(this->AudioBuses).field_0x34 !=
          (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,Audio::FPatchInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      lVar9 = (longlong)TStack_70.CurrentBitIndex;
      if ((TStack_70.CurrentBitIndex == uVar10) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar3 = *(longlong *)&this->AudioBuses;
      iVar8 = FMixerSourceManager::GetAudioBusNumChannels
                        (this_00,*(FAudioBusKey *)(lVar3 + lVar9 * 0x28));
      if (0 < iVar8) {
        DownmixBuffer(this->NumChannels,param_1,iVar8,&this->AudioBusSendBuffer);
        FPatchInput::PushAudio
                  ((FPatchInput *)(lVar3 + lVar9 * 0x28 + 8),
                   (float *)(this->AudioBusSendBuffer).AllocatorInstance.Data,iVar8 * local_res20);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SendAudioToSubmixBufferListeners @ 146571eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SendAudioToSubmixBufferListeners
          (FMixerSubmix *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  byte bVar6;
  atomic<int> aVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixBufferListeners> FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  FColor_u_0 FVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  byte bVar24;
  bool bVar25;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  uint local_res20;
  FName local_78;
  FName local_70;
  byte local_68;
  
  pUVar8 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
  if (pUVar8 != (UObject *)0x0) {
    pUVar9 = Z_Construct_UClass_USoundSubmix_NoRegister();
    iVar16 = (int)pUVar9->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
        &pUVar9->_padding_)) {
      if (__CsvProfilerStat1740 == false) {
        FCsvProfilerTrace::OutputInlineStat("SubmixBufferListeners",_GCsvCategory_Audio.Index);
        __CsvProfilerStat1740 = true;
      }
      local_res20 = _GCsvCategory_Audio.Index;
      FCsvProfiler::BeginStat
                ("SubmixBufferListeners",_GCsvCategory_Audio.Index,"CSV_SubmixBufferListeners");
      pTVar17 = (TReferenceControllerBase<1> *)0x0;
      FVar11 = StatPtr_STAT_AudioMixerSubmixBufferListeners;
      if (StatPtr_STAT_AudioMixerSubmixBufferListeners ==
          (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixBufferListeners>)0x0) {
        pFVar10 = ::FName::FName(&local_78,"STAT_AudioMixerSubmixBufferListeners");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixBufferListeners>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_AudioMixerSubmixBufferListeners,*pFVar10,
                            L"Submix Buffer Listeners","STATGROUP_AudioMixer","STATCAT_Advanced",
                            L"AudioMixer",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_70.ComparisonIndex.Value = 0;
      local_70.Number = 0;
      local_68 = 0;
      FVar1 = *(FName *)FVar11;
      FVar18.Bits = (uint)FVar1.ComparisonIndex.Value;
      uVar14 = FVar1.Number;
      if ((FVar18.Bits != 0) || (uVar14 != 0)) {
        if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
          local_res18.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
          local_68 = local_68 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_res18.Bits = FVar18.Bits;
            uStackX_1c = uVar14;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      ((FName *)&local_res18._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x6cd);
            local_68 = local_68 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_res18.Bits = FVar18.Bits;
          uStackX_1c = uVar14;
          local_70 = FVar1;
          FThreadStats::AddMessage(FVar1,CycleScopeStart);
          local_68 = local_68 | 4;
        }
      }
      uVar4 = (**(code **)(*(longlong *)this->MixerDevice + 0x100))();
      local_78 = (FName)&this->BufferListenerCriticalSection;
      iVar16 = *(int *)&this->MixerDevice->field_0x84;
      if (local_78 == (FName)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)local_78);
      iVar23 = (this->BufferListenerPtrs).ArrayNum;
      pFVar19 = (this->BufferListenerPtrs).AllocatorInstance.Data;
      pFVar13 = pFVar19 + (longlong)iVar23 * 0x10;
      while( true ) {
        if ((this->BufferListenerPtrs).ArrayNum != iVar23) {
          local_res18.Bits = local_res18.Bits & 0xffffff00;
          `TCheckedPointerIterator<TWeakPtr<ISubmixBufferListener,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (pFVar19 == pFVar13) break;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
        pTVar15 = pTVar2;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
LAB_146572166:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          pFVar19 = pFVar19 + 0x10;
        }
        else {
          aVar5 = pTVar2->SharedReferenceCount;
          do {
            pTVar15 = pTVar17;
            if (aVar5 == (atomic<int>)0x0) goto LAB_146572166;
            LOCK();
            aVar7 = pTVar2->SharedReferenceCount;
            bVar25 = aVar5 == aVar7;
            if (bVar25) {
              pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
              aVar7 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar7;
          } while (!bVar25);
          plVar3 = *(longlong **)pFVar19;
          pTVar15 = pTVar2;
          if (plVar3 == (longlong *)0x0) goto LAB_146572166;
          (**(code **)(*plVar3 + 8))
                    (plVar3,pUVar8,(param_1->AllocatorInstance).Data,param_1->ArrayNum,
                     this->NumChannels,(int)(float)iVar16,uVar4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          pFVar19 = pFVar19 + 0x10;
        }
      }
      FPatchSplitter::PushAudio
                (&this->PatchSplitter,(float *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      EnterCriticalSection((LPCRITICAL_SECTION)&this->BufferListenerCriticalSection);
      iVar16 = (this->BufferListenerPtrs).ArrayNum;
      lVar12 = (longlong)iVar16;
      if (iVar16 != 0) {
        uVar20 = 0;
        pFVar19 = (this->BufferListenerPtrs).AllocatorInstance.Data;
        uVar22 = uVar20;
        if (((*(longlong *)pFVar19 == 0) || (*(longlong *)(pFVar19 + 8) == 0)) ||
           (*(int *)(*(longlong *)(pFVar19 + 8) + 8) < 1)) {
          bVar24 = 0;
        }
        else {
          bVar24 = 1;
        }
        do {
          iVar16 = (int)pTVar17;
          uVar20 = uVar20 + 1;
          pTVar17 = (TReferenceControllerBase<1> *)(ulonglong)(iVar16 + 1);
          if ((longlong)uVar20 < lVar12) {
            pFVar13 = pFVar19 + (uVar20 * 2 + 1) * 8;
            do {
              if (((*(longlong *)(pFVar13 + -8) == 0) || (*(longlong *)pFVar13 == 0)) ||
                 (*(int *)(*(longlong *)pFVar13 + 8) < 1)) {
                bVar6 = 0;
              }
              else {
                bVar6 = 1;
              }
              if (bVar24 != bVar6) break;
              pTVar17 = (TReferenceControllerBase<1> *)(ulonglong)((int)pTVar17 + 1);
              uVar20 = uVar20 + 1;
              pFVar13 = pFVar13 + 0x10;
            } while ((longlong)uVar20 < lVar12);
          }
          iVar23 = (int)pTVar17 - iVar16;
          if (bVar24 == 0) {
            DestructItems<TWeakPtr<ISubmixBufferListener,1>,int>
                      ((TWeakPtr<ISubmixBufferListener,1> *)(pFVar19 + (longlong)iVar16 * 0x10),
                       iVar23);
          }
          else {
            iVar21 = (int)uVar22;
            if (iVar21 != iVar16) {
              memmove(pFVar19 + (longlong)iVar21 * 0x10,pFVar19 + (longlong)iVar16 * 0x10,
                      (longlong)iVar23 << 4);
            }
            uVar22 = (ulonglong)(uint)(iVar21 + iVar23);
          }
          bVar24 = bVar24 ^ 1;
        } while ((longlong)uVar20 < lVar12);
        (this->BufferListenerPtrs).ArrayNum = (int)uVar22;
      }
      FVar1 = local_78;
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->BufferListenerCriticalSection);
      LeaveCriticalSection((LPCRITICAL_SECTION)FVar1);
      if ((local_68 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_68 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_68 & 4) != 0) {
        FThreadStats::AddMessage(local_70,CycleScopeEnd);
      }
      local_68 = 0;
      FCsvProfiler::EndStat("SubmixBufferListeners",local_res20);
    }
  }
  return;
}

// SetAutoDisable @ 1465728b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::SetAutoDisable(FMixerSubmix *this,bool param_1)

{
  this->bAutoDisable = '\0';
  this->field_0x46c = this->field_0x46c | param_1 << 2;
  return;
}

// SetAutoDisableTime @ 1465728d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::SetAutoDisableTime(FMixerSubmix *this,float param_1)

{
  this->AutoDisableTime = (double)param_1;
  return;
}

// SetBackgroundMuted @ 1465728f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::SetBackgroundMuted(FMixerSubmix *this,bool param_1)

{
  undefined ***pppuVar1;
  code *local_48 [2];
  undefined **local_38;
  FMixerSubmix *local_30;
  undefined1 local_28;
  undefined ***local_20;
  
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSubmix::SetBackgroundMuted'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSubmix::SetBackgroundMuted'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  local_28 = param_1;
  TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
            (&this->CommandQueue,(TFunction<void___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// SetDryLevel @ 146572ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::SetDryLevel(FMixerSubmix *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->DryLevelModifier = param_1;
  return;
}

// SetModulationBaseLevels @ 146573420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetModulationBaseLevels
          (FMixerSubmix *this,float param_1,float param_2,float param_3)

{
  this->VolumeModBaseDb = param_1;
  this->WetModBaseDb = param_2;
  this->DryModBaseDb = param_3;
  return;
}

// SetOutputVolume @ 146573660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::SetOutputVolume(FMixerSubmix *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->VolumeModifier = param_1;
  return;
}

// SetParentSubmix @ 146573f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetParentSubmix(FMixerSubmix *this,TWeakPtr<Audio::FMixerSubmix,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMixerSubmix *pFVar5;
  FMixerSubmix *pFVar6;
  bool bVar7;
  atomic<int> aVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  
  bVar7 = TWeakPtr<Audio::FMixerSubmix,1>::UEOpEquals<Audio::FMixerSubmix>
                    (&this->ParentSubmix,param_1);
  if (!bVar7) {
    pTVar10 = (this->ParentSubmix).WeakReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar10->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146573f54;
        }
        LOCK();
        aVar8 = pTVar10->SharedReferenceCount;
        bVar7 = aVar2 == aVar8;
        if (bVar7) {
          pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar7);
      pFVar5 = (this->ParentSubmix).Object;
      if (pFVar5 != (FMixerSubmix *)0x0) {
        pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
        pFVar6 = param_1->Object;
        uVar3 = this->Id;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_58[0] = (code *)0x0;
        local_30 = FMemory::Malloc(0x28,8);
        *(uint *)(local_30 + 2) = uVar3;
        *local_30 = (longlong)
                    &UE::Core::Private::Function::
                     TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::`8'::<lambda_1>,0,1>
                     ::_vftable_;
        local_30[3] = (longlong)pFVar6;
        local_30[1] = (longlong)this;
        local_30[4] = (longlong)pTVar4;
        if (local_30 + 1 != (longlong *)0x0) {
          local_58[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`Audio::FMixerSubmix::SetParentSubmix'::__l8::<lambda_1>,void>
                        ::Call;
        }
        TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
                  (&pFVar5->CommandQueue,(TFunction<void___cdecl(void)> *)local_58);
        if (local_58[0] != (code *)0x0) {
          plVar9 = local_48;
          if (local_30 != (longlong *)0x0) {
            plVar9 = local_30;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
LAB_146573f54:
    pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
    pFVar5 = param_1->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_58[0] = (code *)0x0;
    local_30 = FMemory::Malloc(0x20,8);
    local_30[3] = (longlong)pTVar4;
    *local_30 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FMixerSubmix::SetParentSubmix'::`2'::<lambda_2>,0,1>
                 ::_vftable_;
    local_30[1] = (longlong)this;
    local_30[2] = (longlong)pFVar5;
    if (local_30 + 1 != (longlong *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FMixerSubmix::SetParentSubmix'::__l2::<lambda_2>,void>
                    ::Call;
    }
    TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
              (&this->CommandQueue,(TFunction<void___cdecl(void)> *)local_58);
    if (local_58[0] != (code *)0x0) {
      plVar9 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar9 = local_30;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  pTVar10 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  return;
}

// SetSoundfieldFactory @ 146574790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetSoundfieldFactory(FMixerSubmix *this,ISoundfieldFactory *param_1)

{
  (this->SoundfieldStreams).Factory = param_1;
  return;
}

// SetSubmixEffectChainOverride @ 146574870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetSubmixEffectChainOverride
          (FMixerSubmix *this,
          TArray<TSharedPtr<FSoundEffectSubmix,1>,TSizedDefaultAllocator<32>_> *param_1,
          float param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<FSoundEffectSubmix,1> *pTVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  FDynamicParameter *pFVar9;
  TArray<Audio::FMixerSubmix::FSubmixEffectFadeInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  TArray<TSharedPtr<FSoundEffectSubmix,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FDynamicParameter local_a8;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  undefined8 uStack_70;
  FScriptContainerElement *local_68;
  undefined1 auStack_60 [5];
  undefined1 uStack_5b;
  undefined2 uStack_5a;
  
  lpCriticalSection = &this->EffectChainMutationCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar10 = &this->EffectChains;
  iVar8 = (this->EffectChains).ArrayNum;
  pFVar11 = (pTVar10->AllocatorInstance).Data;
  pFVar13 = pFVar11 + (longlong)iVar8 * 0x30;
  while( true ) {
    if ((this->EffectChains).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FMixerSubmix::FSubmixEffectFadeInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    fVar6 = __real_3f800000;
    if (pFVar11 == pFVar13) break;
    pFVar11[0x2c] = (FScriptContainerElement)0x0;
    FDynamicParameter::Set((FDynamicParameter *)(pFVar11 + 0x10),0.0,param_2);
    pFVar11 = pFVar11 + 0x30;
  }
  local_68 = (FScriptContainerElement *)0x0;
  _auStack_60 = 0;
  local_88 = (FScriptContainerElement *)0x0;
  local_78 = (FScriptContainerElement *)0x0;
  uStack_70._0_4_ = 0.0;
  uStack_70._4_4_ = 0.0;
  local_80 = 0;
  FDynamicParameter::FDynamicParameter((FDynamicParameter *)&local_78,__real_3f800000);
  pFVar11 = (pTVar10->AllocatorInstance).Data;
  _auStack_60 = (uint6)(uint)auStack_60._0_4_;
  if ((pFVar11 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar11 + (longlong)(this->EffectChains).ArrayMax * 0x30)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar8 = (this->EffectChains).ArrayNum;
  piVar1 = &(this->EffectChains).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->EffectChains).ArrayNum = iVar8 + 1;
  pTVar12 = (TArray<TSharedPtr<FSoundEffectSubmix,1>,TSizedDefaultAllocator<32>_> *)
            ((pTVar10->AllocatorInstance).Data + (longlong)iVar8 * 0x30);
  (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &pTVar12->ArrayMax;
  (pTVar12->AllocatorInstance).Data = local_88;
  local_88 = (void *)0x0;
  pTVar12->ArrayNum = (int)local_80;
  *piVar1 = local_80._4_4_;
  local_80 = 0;
  pTVar12[1].AllocatorInstance.Data = local_78;
  pTVar12[1].ArrayNum = (int)(float)uStack_70;
  pTVar12[1].ArrayMax = (int)uStack_70._4_4_;
  pTVar12[2].AllocatorInstance.Data = local_68;
  pTVar12[2].ArrayNum = auStack_60._0_4_;
  *(undefined1 *)&pTVar12[2].ArrayMax = auStack_60[4];
  *(undefined1 *)((longlong)&pTVar12[2].ArrayMax + 1) = uStack_5b;
  DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>((TSharedPtr<FSoundEffectSubmix,1> *)0x0,0);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  *(undefined1 *)&pTVar12[2].ArrayMax = 1;
  pFVar9 = FDynamicParameter::FDynamicParameter(&local_a8,0.0);
  fVar4 = pFVar9->DeltaValue;
  fVar5 = pFVar9->CurrTimeSec;
  pTVar12[1].AllocatorInstance.Data = *(FScriptContainerElement **)pFVar9;
  pTVar12[1].ArrayNum = (int)fVar4;
  pTVar12[1].ArrayMax = (int)fVar5;
  pTVar12[2].AllocatorInstance.Data = *(FScriptContainerElement **)&pFVar9->DurationSec;
  pTVar12[2].ArrayNum = (int)pFVar9->TargetValue;
  FDynamicParameter::Set((FDynamicParameter *)(pTVar12 + 1),fVar6,param_2);
  if (pTVar12 != param_1) {
    DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
              ((TSharedPtr<FSoundEffectSubmix,1> *)(pTVar12->AllocatorInstance).Data,
               pTVar12->ArrayNum);
    iVar8 = param_1->ArrayNum;
    pTVar2 = (TSharedPtr<FSoundEffectSubmix,1> *)(param_1->AllocatorInstance).Data;
    pTVar12->ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,*piVar1,(ForAnyElementType *)pTVar12,iVar8,piVar1);
      ConstructItems<TSharedPtr<FSoundEffectSubmix,1>,TSharedPtr<FSoundEffectSubmix,1>,int>
                ((pTVar12->AllocatorInstance).Data,pTVar2,iVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146574b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetUpSoundfieldPositionalData @ 1465754f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetUpSoundfieldPositionalData
          (FMixerSubmix *this,TSharedPtr<Audio::FMixerSubmix,1> *param_1)

{
  int iVar1;
  FMixerDevice *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_1->Object == (FMixerSubmix *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParentSubmix.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x3ca,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_1->Object == (FMixerSubmix *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  this_00 = this->MixerDevice;
  iVar1 = param_1->Object->NumChannels;
  (this->SoundfieldStreams).CachedPositionalData.NumChannels = iVar1;
  pTVar5 = FMixerDevice::GetDefaultPositionMap(this_00,iVar1);
  (this->SoundfieldStreams).CachedPositionalData.ChannelPositions = pTVar5;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->SoundfieldStreams).CachedPositionalData.Rotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->SoundfieldStreams).CachedPositionalData.Rotation.Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->SoundfieldStreams).CachedPositionalData.Rotation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->SoundfieldStreams).CachedPositionalData.Rotation.W = dVar3;
  return;
}

// SetWetLevel @ 146575630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::SetWetLevel(FMixerSubmix *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->WetLevelModifier = param_1;
  return;
}

// SetupEndpoint @ 146575650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetupEndpoint
          (FMixerSubmix *this,IAudioEndpointFactory *param_1,UAudioEndpointSettingsBase *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IAudioEndpoint *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  TUniquePtr<IAudioEndpoint,TDefaultDelete<IAudioEndpoint>_> *pTVar7;
  float fVar8;
  undefined8 *local_res8;
  IAudioEndpointFactory *local_res10;
  UAudioEndpointSettingsBase *local_res18;
  IAudioEndpointFactory **local_res20;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  UAudioEndpointSettingsBase **local_50;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  FMixerDevice *local_38;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (((this->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsSoundfieldSubmix()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x880,
                         L"Soundfield Endpoint Submixes called with non-soundfield arguments."),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((((this->ParentSubmix).Object != (FMixerSubmix *)0x0) &&
       (pTVar1 = (this->ParentSubmix).WeakReferenceCount.ReferenceController,
       pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ParentSubmix.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x881,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FEndpointData::Reset(&this->EndpointData);
  if (local_res10 == (IAudioEndpointFactory *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)0x0;
  if (local_res18 == (UAudioEndpointSettingsBase *)0x0) {
    local_res18 = (UAudioEndpointSettingsBase *)(**(code **)(local_res10->_padding_ + 0x20))();
    if (local_res18 == (UAudioEndpointSettingsBase *)0x0) {
      local_res20 = &local_res10;
      `Audio::FMixerSubmix::SetupEndpoint'::__l26::<lambda_1>::operator()(&local_res20);
    }
    if (local_res18 == (UAudioEndpointSettingsBase *)0x0) goto LAB_146575844;
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_res18 + 0x2b0))(local_res18,&local_60);
    if (&local_68 != puVar5) {
      puVar6 = (undefined8 *)*puVar5;
      *puVar5 = 0;
    }
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_res18 + 0x2b0))(local_res18,&local_res8);
    local_60 = local_res8;
    if (&local_68 != puVar5) {
      puVar6 = (undefined8 *)*puVar5;
      *puVar5 = 0;
    }
  }
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,1);
  }
  if (puVar6 != (undefined8 *)0x0) {
    local_38 = this->MixerDevice;
    if (local_38 == (FMixerDevice *)0x0) {
      local_3c = 0;
      fVar8 = 0.0;
      local_44 = 0;
    }
    else {
      local_3c = *(undefined4 *)&local_38->field_0x8c;
      local_44 = (local_38->PlatformInfo).NumChannels;
      fVar8 = (float)*(int *)&local_38->field_0x84;
    }
    local_48 = 1;
    local_40 = (undefined4)(longlong)fVar8;
    puVar5 = (undefined8 *)
             (**(code **)(local_res10->_padding_ + 0x10))(local_res10,&local_58,&local_48,puVar6);
    pTVar7 = &(this->EndpointData).NonSoundfieldEndpoint;
    if (pTVar7 != (TUniquePtr<IAudioEndpoint,TDefaultDelete<IAudioEndpoint>_> *)puVar5) {
      pIVar2 = pTVar7->Ptr;
      pTVar7->Ptr = (IAudioEndpoint *)*puVar5;
      *puVar5 = 0;
      if (pIVar2 != (IAudioEndpoint *)0x0) {
        (**(code **)pIVar2->_padding_)(pIVar2,1);
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,1);
    }
    (**(code **)*puVar6)(puVar6,1);
    return;
  }
LAB_146575844:
  local_50 = &local_res18;
  `Audio::FMixerSubmix::SetupEndpoint'::__l34::<lambda_2>::operator()(&local_50);
  return;
}

// SetupEndpoint @ 146575870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetupEndpoint
          (FMixerSubmix *this,ISoundfieldEndpointFactory *param_1,
          USoundfieldEndpointSettingsBase *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  ISoundfieldEndpoint *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  TUniquePtr<ISoundfieldEndpoint,TDefaultDelete<ISoundfieldEndpoint>_> *pTVar7;
  float fVar8;
  undefined8 *local_res8;
  ISoundfieldFactory *local_res10;
  USoundfieldEndpointSettingsBase *local_res18;
  ISoundfieldFactory **local_res20;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  USoundfieldEndpointSettingsBase **local_50;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  FMixerDevice *local_38;
  
  local_res10 = (ISoundfieldFactory *)param_1;
  local_res18 = param_2;
  if (((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSoundfieldSubmix()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x8a6,
                         L"Non-Soundfield Endpoint Submixes called with soundfield arguments."),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->SoundfieldStreams).Factory != local_res10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundfieldStreams.Factory == InFactory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x8a7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((((this->ParentSubmix).Object != (FMixerSubmix *)0x0) &&
       (pTVar1 = (this->ParentSubmix).WeakReferenceCount.ReferenceController,
       pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ParentSubmix.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x8a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FEndpointData::Reset(&this->EndpointData);
  if (local_res10 == (ISoundfieldFactory *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)0x0;
  if (local_res18 == (USoundfieldEndpointSettingsBase *)0x0) {
    local_res18 = (USoundfieldEndpointSettingsBase *)(**(code **)((longlong)*local_res10 + 0x88))();
    if (local_res18 == (USoundfieldEndpointSettingsBase *)0x0) {
      local_res20 = &local_res10;
      `Audio::FMixerSubmix::SetupEndpoint'::__l33::<lambda_1>::operator()(&local_res20);
    }
    if (local_res18 == (USoundfieldEndpointSettingsBase *)0x0) goto LAB_146575a9a;
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_res18 + 0x2b0))(local_res18,&local_60);
    if (&local_68 != puVar5) {
      puVar6 = (undefined8 *)*puVar5;
      *puVar5 = 0;
    }
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_res18 + 0x2b0))(local_res18,&local_res8);
    local_60 = local_res8;
    if (&local_68 != puVar5) {
      puVar6 = (undefined8 *)*puVar5;
      *puVar5 = 0;
    }
  }
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,1);
  }
  if (puVar6 != (undefined8 *)0x0) {
    local_38 = this->MixerDevice;
    if (local_38 == (FMixerDevice *)0x0) {
      local_3c = 0;
      fVar8 = 0.0;
      local_44 = 0;
    }
    else {
      local_3c = *(undefined4 *)&local_38->field_0x8c;
      local_44 = (local_38->PlatformInfo).NumChannels;
      fVar8 = (float)*(int *)&local_38->field_0x84;
    }
    local_48 = 1;
    local_40 = (undefined4)(longlong)fVar8;
    puVar5 = (undefined8 *)
             (**(code **)((longlong)*local_res10 + 0x78))(local_res10,&local_58,&local_48,puVar6);
    pTVar7 = &(this->EndpointData).SoundfieldEndpoint;
    if (pTVar7 != (TUniquePtr<ISoundfieldEndpoint,TDefaultDelete<ISoundfieldEndpoint>_> *)puVar5) {
      pIVar2 = pTVar7->Ptr;
      pTVar7->Ptr = (ISoundfieldEndpoint *)*puVar5;
      *puVar5 = 0;
      if (pIVar2 != (ISoundfieldEndpoint *)0x0) {
        (**(code **)pIVar2->_padding_)(pIVar2,1);
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,1);
    }
    (**(code **)*puVar6)(puVar6,1);
    return;
  }
LAB_146575a9a:
  local_50 = &local_res18;
  `Audio::FMixerSubmix::SetupEndpoint'::__l41::<lambda_2>::operator()(&local_50);
  return;
}

// SetupSoundfieldEncodersForChildren @ 146575ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::SetupSoundfieldEncodersForChildren(FMixerSubmix *this)

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
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundfieldStreams.Factory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x38b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->SoundfieldStreams).Settings.Ptr == (ISoundfieldEncodingSettingsProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundfieldStreams.Settings.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x38c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = *(int *)&(this->ChildSubmixes).field_0x28;
  puVar1 = &(this->ChildSubmixes).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ChildSubmixes).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146575bcd;
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
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_146575bcd:
  uVar10 = *(uint *)&(this->ChildSubmixes).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChildSubmixes).field_0x8 -
                       *(int *)&(this->ChildSubmixes).field_0x34);
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
  uVar6 = *(uint *)&(this->ChildSubmixes).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ChildSubmixes).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146575cd0;
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
LAB_146575cd0:
  while( true ) {
    if (*(int *)&(this->ChildSubmixes).field_0x8 - *(int *)&(this->ChildSubmixes).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    SetupSoundfieldEncodingForChild
              (this,(FChildSubmixInfo *)
                    (*(longlong *)&this->ChildSubmixes +
                    (longlong)TStack_60.CurrentBitIndex * 0x38 + 8));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetupSoundfieldEncodingForChild @ 146575d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetupSoundfieldEncodingForChild(FMixerSubmix *this,FChildSubmixInfo *param_1)

{
  TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_> *pTVar1;
  TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> *pTVar2;
  TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
  *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMixerSubmix *pFVar5;
  ISoundfieldFactory *pIVar6;
  ISoundfieldEncoderStream *pIVar7;
  ISoundfieldTranscodeStream *pIVar8;
  code *pcVar9;
  atomic<int> aVar10;
  char cVar11;
  atomic<int> aVar12;
  undefined8 *puVar13;
  TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> TVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  FMixerSubmix *local_res10;
  TSharedPtr<Audio::FMixerSubmix,1> local_res18;
  FMixerSubmix *pFVar19;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  FMixerDevice *local_68;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  FMixerDevice *local_50;
  
  pTVar4 = (param_1->SubmixPtr).WeakReferenceCount.ReferenceController;
  pTVar15 = pTVar4;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14657602e;
  aVar10 = pTVar4->SharedReferenceCount;
  do {
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
    if (aVar10 == (atomic<int>)0x0) goto LAB_14657602e;
    LOCK();
    aVar12 = pTVar4->SharedReferenceCount;
    bVar16 = aVar10 == aVar12;
    if (bVar16) {
      pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
      aVar12 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar12;
  } while (!bVar16);
  pTVar15 = pTVar4;
  if ((pTVar4 == (TReferenceControllerBase<1> *)0x0) ||
     (pFVar5 = (param_1->SubmixPtr).Object, pFVar5 == (FMixerSubmix *)0x0)) goto LAB_14657602e;
  pTVar3 = &(this->SoundfieldStreams).Settings;
  pFVar19 = pFVar5;
  if ((((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) ||
      (pTVar3->Ptr == (ISoundfieldEncodingSettingsProxy *)0x0)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SoundfieldStreams.Factory && SoundfieldStreams.Settings.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x39c,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((pFVar5 == (FMixerSubmix *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar18 = 0.0;
  if ((pFVar5->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) {
    pIVar6 = (this->SoundfieldStreams).Factory;
    cVar11 = (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,pTVar3->Ptr);
    if (cVar11 != '\0') {
      local_68 = this->MixerDevice;
      if (local_68 == (FMixerDevice *)0x0) {
        local_6c = 0;
        fVar17 = 0.0;
        local_74 = 0;
      }
      else {
        local_6c = *(undefined4 *)&local_68->field_0x8c;
        local_74 = (local_68->PlatformInfo).NumChannels;
        fVar17 = (float)*(int *)&local_68->field_0x84;
      }
      pIVar6 = (this->SoundfieldStreams).Factory;
      local_78 = 1;
      local_70 = (undefined4)(longlong)fVar17;
      puVar13 = (undefined8 *)
                (**(code **)((longlong)*pIVar6 + 0x10))
                          (pIVar6,&local_res10,&local_78,(this->SoundfieldStreams).Settings.Ptr,
                           pFVar19,pTVar15);
      pTVar1 = &param_1->Encoder;
      if (pTVar1 != (TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_>
                     *)puVar13) {
        pIVar7 = pTVar1->Ptr;
        pTVar1->Ptr = (ISoundfieldEncoderStream *)*puVar13;
        *puVar13 = 0;
        if (pIVar7 != (ISoundfieldEncoderStream *)0x0) {
          (**(code **)*pIVar7)(pIVar7,1);
        }
      }
      goto LAB_146575f49;
    }
    if ((pFVar5->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0) goto LAB_146575f11;
  }
  else {
LAB_146575f11:
    TVar14 = GetTranscoderForChildSubmix(this,&local_res18);
    pTVar2 = &param_1->Transcoder;
    local_res10 = local_res18.Object;
    if ((ISoundfieldTranscodeStream *)pTVar2 != TVar14.Ptr) {
      pIVar8 = pTVar2->Ptr;
      pTVar2->Ptr = (ISoundfieldTranscodeStream *)*TVar14.Ptr;
      *TVar14.Ptr = (ISoundfieldTranscodeStream)0x0;
      if (pIVar8 != (ISoundfieldTranscodeStream *)0x0) {
        (**(code **)*pIVar8)(pIVar8,1);
        local_res10 = local_res18.Object;
      }
    }
LAB_146575f49:
    if (local_res10 != (FMixerSubmix *)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
  }
  pIVar6 = (this->SoundfieldStreams).Factory;
  pTVar1 = &(this->SoundfieldStreams).DownmixedChildrenEncoder;
  pIVar7 = pTVar1->Ptr;
  cVar11 = (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,(this->SoundfieldStreams).Settings.Ptr);
  pTVar15 = pTVar4;
  if ((pIVar7 == (ISoundfieldEncoderStream *)0x0) && (cVar11 == '\0')) {
    local_50 = this->MixerDevice;
    if (local_50 == (FMixerDevice *)0x0) {
      local_54 = 0;
      local_5c = 0;
    }
    else {
      local_54 = *(undefined4 *)&local_50->field_0x8c;
      local_5c = (local_50->PlatformInfo).NumChannels;
      fVar18 = (float)*(int *)&local_50->field_0x84;
    }
    pIVar6 = (this->SoundfieldStreams).Factory;
    local_60 = 1;
    local_58 = (undefined4)(longlong)fVar18;
    puVar13 = (undefined8 *)
              (**(code **)((longlong)*pIVar6 + 0x10))
                        (pIVar6,&local_res18.SharedReferenceCount,&local_60,
                         (this->SoundfieldStreams).Settings.Ptr);
    if (pTVar1 != (TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_> *)
                  puVar13) {
      pIVar7 = pTVar1->Ptr;
      pTVar1->Ptr = (ISoundfieldEncoderStream *)*puVar13;
      *puVar13 = 0;
      if (pIVar7 != (ISoundfieldEncoderStream *)0x0) {
        (**(code **)*pIVar7)(pIVar7,1);
      }
    }
    if (local_res18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      (**(code **)(local_res18.SharedReferenceCount.ReferenceController)->_padding_)
                (local_res18.SharedReferenceCount.ReferenceController,1);
    }
  }
LAB_14657602e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// SetupSoundfieldStreamForParent @ 146576050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::SetupSoundfieldStreamForParent(FMixerSubmix *this)

{
  int iVar1;
  FMixerSubmix *pFVar2;
  FMixerDevice *this_00;
  ISoundfieldFactory *pIVar3;
  ISoundfieldDecoderStream *pIVar4;
  atomic<int> aVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  atomic<int> aVar10;
  TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined8 *puVar12;
  TReferenceControllerBase<1> *pTVar13;
  TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> *pTVar14;
  bool bVar15;
  float fVar16;
  undefined8 *local_res8;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  FMixerDevice *local_18;
  
  pTVar13 = (this->ParentSubmix).WeakReferenceCount.ReferenceController;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar13->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146576080;
      }
      LOCK();
      aVar10 = pTVar13->SharedReferenceCount;
      bVar15 = aVar5 == aVar10;
      if (bVar15) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar10 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar10;
    } while (!bVar15);
    pFVar2 = (this->ParentSubmix).Object;
    if ((pFVar2 != (FMixerSubmix *)0x0) &&
       ((pFVar2->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0)) {
      iVar1 = pFVar2->NumChannels;
      this_00 = this->MixerDevice;
      (this->SoundfieldStreams).CachedPositionalData.NumChannels = iVar1;
      pTVar11 = FMixerDevice::GetDefaultPositionMap(this_00,iVar1);
      local_18 = this->MixerDevice;
      (this->SoundfieldStreams).CachedPositionalData.ChannelPositions = pTVar11;
      dVar6 = UE::Math::TQuat<double>::Identity.Y;
      (this->SoundfieldStreams).CachedPositionalData.Rotation.X =
           UE::Math::TQuat<double>::Identity.X;
      (this->SoundfieldStreams).CachedPositionalData.Rotation.Y = dVar6;
      uVar9 = UE::Math::TQuat<double>::Identity.W._4_4_;
      uVar8 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar7 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Z =
           UE::Math::TQuat<double>::Identity.Z._0_4_;
      *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.Z + 4) =
           uVar7;
      *(undefined4 *)&(this->SoundfieldStreams).CachedPositionalData.Rotation.W = uVar8;
      *(undefined4 *)((longlong)&(this->SoundfieldStreams).CachedPositionalData.Rotation.W + 4) =
           uVar9;
      if (local_18 == (FMixerDevice *)0x0) {
        local_1c = 0;
        fVar16 = 0.0;
        local_24 = 0;
      }
      else {
        local_1c = *(undefined4 *)&local_18->field_0x8c;
        local_24 = (local_18->PlatformInfo).NumChannels;
        fVar16 = (float)*(int *)&local_18->field_0x84;
      }
      pIVar3 = (this->SoundfieldStreams).Factory;
      local_28 = 1;
      local_20 = (undefined4)(longlong)fVar16;
      puVar12 = (undefined8 *)
                (**(code **)((longlong)*pIVar3 + 0x18))
                          (pIVar3,&local_res8,&local_28,(this->SoundfieldStreams).Settings.Ptr);
      pTVar14 = &(this->SoundfieldStreams).ParentDecoder;
      if (pTVar14 !=
          (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> *)puVar12)
      {
        pIVar4 = pTVar14->Ptr;
        pTVar14->Ptr = (ISoundfieldDecoderStream *)*puVar12;
        *puVar12 = 0;
        if (pIVar4 != (ISoundfieldDecoderStream *)0x0) {
          (**(code **)*pIVar4)(pIVar4,1);
        }
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        return;
      }
    }
  }
LAB_146576080:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

// SetupSoundfieldStreams @ 1465761b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SetupSoundfieldStreams
          (FMixerSubmix *this,USoundfieldEncodingSettingsBase *param_1,
          TArray<USoundfieldEffectBase_*,TSizedDefaultAllocator<32>_> *param_2,
          ISoundfieldFactory *param_3)

{
  TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
  *pTVar1;
  TUniquePtr<ISoundfieldMixerStream,TDefaultDelete<ISoundfieldMixerStream>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  ISoundfieldEncodingSettingsProxy *pIVar6;
  ISoundfieldMixerStream *pIVar7;
  USoundfieldEffectBase *pUVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar14;
  ISoundfieldEncodingSettingsProxy *local_res8;
  USoundfieldEncodingSettingsBase *local_res10;
  TArray<USoundfieldEffectBase_*,TSizedDefaultAllocator<32>_> *local_res18;
  ISoundfieldFactory *local_res20;
  undefined8 *local_88;
  undefined8 *local_80;
  LPCRITICAL_SECTION local_78;
  ISoundfieldFactory **local_70;
  USoundfieldEncodingSettingsBase **local_68;
  ISoundfieldFactory **local_60;
  USoundfieldEncodingSettingsBase **local_58;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&(this->SoundfieldStreams).StreamsLock;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_78 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (((this->SoundfieldStreams).Factory != local_res20) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SoundfieldStreams.Factory == InSoundfieldFactory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x840,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (local_res20 == (ISoundfieldFactory *)0x0) goto LAB_14657645e;
  if ((local_res10 == (USoundfieldEncodingSettingsBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InAmbisonicsSettings != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x847,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((local_res20 != (this->SoundfieldStreams).Factory) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSoundfieldFactory == SoundfieldStreams.Factory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x849,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FSoundfieldStreams::Reset(&this->SoundfieldStreams);
  (this->SoundfieldStreams).Factory = local_res20;
  this->NumChannels = 0;
  this->NumSamples = 0;
  puVar13 = (undefined8 *)(**(code **)(*(longlong *)local_res10 + 0x2b0))(local_res10,&local_88);
  pTVar1 = &(this->SoundfieldStreams).Settings;
  if (pTVar1 != (TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
                 *)puVar13) {
    pIVar6 = pTVar1->Ptr;
    pTVar1->Ptr = (ISoundfieldEncodingSettingsProxy *)*puVar13;
    *puVar13 = 0;
    if (pIVar6 != (ISoundfieldEncodingSettingsProxy *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
  }
  if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,1);
  }
  if (pTVar1->Ptr == (ISoundfieldEncodingSettingsProxy *)0x0) {
    local_70 = &local_res20;
    local_68 = &local_res10;
    bVar11 = `Audio::FMixerSubmix::SetupSoundfieldStreams'::__l27::<lambda_1>::operator()(&local_70)
    ;
    if (bVar11) goto LAB_146576323;
LAB_146576390:
    TeardownSoundfieldStreams(this);
  }
  else {
LAB_146576323:
    puVar13 = (undefined8 *)
              (**(code **)((longlong)*local_res20 + 0x28))(local_res20,&local_80,pTVar1->Ptr);
    pTVar2 = &(this->SoundfieldStreams).Mixer;
    if (pTVar2 != (TUniquePtr<ISoundfieldMixerStream,TDefaultDelete<ISoundfieldMixerStream>_> *)
                  puVar13) {
      pIVar7 = pTVar2->Ptr;
      pTVar2->Ptr = (ISoundfieldMixerStream *)*puVar13;
      *puVar13 = 0;
      if (pIVar7 != (ISoundfieldMixerStream *)0x0) {
        (**(code **)*pIVar7)(pIVar7,1);
      }
    }
    if (local_80 != (undefined8 *)0x0) {
      (**(code **)*local_80)(local_80,1);
    }
    if (pTVar2->Ptr == (ISoundfieldMixerStream *)0x0) {
      local_60 = &local_res20;
      local_58 = &local_res10;
      bVar11 = `Audio::FMixerSubmix::SetupSoundfieldStreams'::__l30::<lambda_2>::operator()
                         (&local_60);
      if (!bVar11) goto LAB_146576390;
    }
    pFVar14 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    pFVar4 = pFVar14 + (longlong)iVar5 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        `TCheckedPointerIterator<USoundfieldEffectBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar14 == pFVar4) break;
      pUVar8 = *(USoundfieldEffectBase **)pFVar14;
      if (pUVar8 != (USoundfieldEffectBase *)0x0) {
        local_res8 = (this->SoundfieldStreams).Settings.Ptr;
        piVar3 = &(this->SoundfieldStreams).EffectProcessors.ArrayMax;
        iVar12 = (this->SoundfieldStreams).EffectProcessors.ArrayNum;
        if (iVar12 == *piVar3) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this->SoundfieldStreams).EffectProcessors.AllocatorInstance,
                              piVar3);
          (this->SoundfieldStreams).EffectProcessors.ArrayNum = iVar12;
        }
        pFVar9 = (this->SoundfieldStreams).EffectProcessors.AllocatorInstance.Data;
        (this->SoundfieldStreams).EffectProcessors.ArrayNum = iVar12 + 1;
        FSoundfieldEffectProcessorData::FSoundfieldEffectProcessorData
                  ((FSoundfieldEffectProcessorData *)(pFVar9 + (longlong)iVar12 * 0x10),
                   (this->SoundfieldStreams).Factory,local_res8,pUVar8);
        param_2 = local_res18;
      }
      pFVar14 = pFVar14 + 8;
    }
    SetupSoundfieldEncodersForChildren(this);
    SetupSoundfieldStreamForParent(this);
    lpCriticalSection = local_78;
  }
LAB_14657645e:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// StartEnvelopeFollowing @ 146576df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::StartEnvelopeFollowing(FMixerSubmix *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UObject *this_00;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 auStack_88 [32];
  FEnvelopeFollowerInitParams local_68;
  LARGE_INTEGER local_48;
  FString local_40;
  undefined4 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->bIsEnvelopeFollowing == (FThreadSafeBool)0x0) {
    local_68.Mode = Peak;
    local_68.bIsAnalog = true;
    local_68.AnalysisWindowMsec = 5.0;
    iVar3 = FMixerDevice::GetDeviceSampleRate(this->MixerDevice);
    local_68.ReleaseTimeMsec = (float)param_2;
    local_68.NumChannels = this->NumChannels;
    local_68.SampleRate = (float)iVar3;
    local_68.AttackTimeMsec = (float)param_1;
    FEnvelopeFollower::Init(&this->EnvelopeFollower,&local_68);
    this->EnvelopeValues[0] = 0.0;
    this->EnvelopeValues[1] = 0.0;
    this->EnvelopeValues[2] = 0.0;
    this->EnvelopeValues[3] = 0.0;
    this->EnvelopeValues[4] = 0.0;
    this->EnvelopeValues[5] = 0.0;
    this->EnvelopeValues[6] = 0.0;
    this->EnvelopeValues[7] = 0.0;
    LOCK();
    this->bIsEnvelopeFollowing = (FThreadSafeBool)0x1;
    UNLOCK();
    if (((-1 < AudioChannel->Enabled) &&
        (bVar2 = FWeakObjectPtr::IsValid(&(this->OwningSubmixObject).WeakPtr), bVar2)) &&
       (-1 < AudioChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FAudioSubmixEnvelopeFollowerEnabledFields>
                ((TLogScope<0> *)&local_30);
      *local_30 = *(undefined4 *)&this->MixerDevice->field_0xa0;
      this_00 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
      pFVar5 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)this_00,&local_40,(UObject *)0x0);
      iVar1 = (pFVar5->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar6 = L"";
        iVar3 = 0;
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar6);
      local_30[1] = uVar4;
      QueryPerformanceCounter(&local_48);
      *(LARGE_INTEGER *)(local_30 + 2) = local_48;
      *(undefined1 *)(local_30 + 4) = 1;
      *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// StartSpectrumAnalysis @ 146577230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::StartSpectrumAnalysis
          (FMixerSubmix *this,FSoundSpectrumAnalyzerSettings *param_1)

{
  ISpectrumBandExtractor *pIVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  FSoundSpectrumAnalyzerSettings FVar6;
  ISpectrumBandExtractor IVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  int iVar20;
  TReferenceControllerBase<1> *pTVar21;
  TUniquePtr<Audio::ISpectrumBandExtractor,TDefaultDelete<Audio::ISpectrumBandExtractor>_> TVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  FScriptContainerElement *pFVar27;
  undefined1 uVar28;
  FScriptContainerElement *pFVar29;
  FAsyncSpectrumAnalyzer *pFVar30;
  undefined4 *puVar31;
  undefined1 local_res10;
  undefined1 local_res20 [8];
  undefined1 local_148 [4];
  uint local_144;
  FSpectrumAnalyzerSettings local_140;
  FAsyncSpectrumAnalyzer *local_138;
  FSharedReferencer<1> FStack_130;
  FInlineEnvelopeFollower local_128;
  undefined1 local_f8;
  int local_f4;
  FScriptContainerElement local_f0;
  FScriptContainerElement local_ef;
  int local_ec;
  int local_e8;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 *local_d0;
  FScriptContainerElement *local_c8;
  LPCRITICAL_SECTION local_c0;
  
  bVar19 = IsInAudioThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4330698859807246718>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                          ,0x97e,"IsInAudioThread()"), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  LOCK();
  this->bIsSpectrumAnalyzing = (FThreadSafeBool)0x1;
  UNLOCK();
  FVar6 = *param_1;
  this->SpectrumAnalyzerSettings = FVar6;
  switch((ulonglong)FVar6 & 0xff) {
  default:
    local_140.FFTSize = Default;
    break;
  case 1:
    local_140.FFTSize = Min_64;
    break;
  case 2:
    local_140.FFTSize = Small_256;
    break;
  case 4:
    local_140.FFTSize = Large_1024;
    break;
  case 5:
    local_140.FFTSize = VeryLarge_2048;
    break;
  case 6:
    local_140.FFTSize = TestLarge_4096;
  }
  uVar24 = FVar6._1_4_ & 0xff;
  if (FVar6.WindowType != None) {
    if (uVar24 == 1) {
      local_140.WindowType = Hamming;
      goto LAB_146577319;
    }
    if (uVar24 == 2) {
      local_140.WindowType = Hann;
      goto LAB_146577319;
    }
    if (uVar24 == 3) {
      local_140.WindowType = Blackman;
      goto LAB_146577319;
    }
  }
  local_140.WindowType = None;
LAB_146577319:
  local_140.HopSize = (this->SpectrumAnalyzerSettings).HopSize;
  if (FVar6.SpectrumType == MagnitudeSpectrum) {
    uVar28 = 0;
  }
  else if ((FVar6._2_4_ & 0xff) == 1) {
    uVar28 = 1;
  }
  else {
    uVar28 = 2;
  }
  uVar24 = FVar6._3_4_ & 0xff;
  if (FVar6.InterpolationMethod == NearestNeighbor) {
    local_res10 = 0;
  }
  else if (uVar24 == 1) {
    local_res10 = 1;
  }
  else if (uVar24 == 2) {
    local_res10 = 2;
  }
  else {
    local_res10 = 3;
  }
  local_c0 = (LPCRITICAL_SECTION)&this->SpectrumAnalyzerCriticalSection;
  if (local_c0 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(local_c0);
    iVar4 = *(int *)&this->MixerDevice->field_0x84;
    pTVar21 = ::operator_new(0x30);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      pTVar21 = (TReferenceControllerBase<1> *)0x0;
      local_138 = ___xmm_00000000000000000000000000000010;
      pFVar30 = (FAsyncSpectrumAnalyzer *)&DAT_00000010;
      FStack_130.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar21->SharedReferenceCount = (atomic<int>)0x1;
      pTVar21->WeakReferenceCount = (atomic<int>)0x1;
      pTVar21->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAsyncSpectrumAnalyzer_Audio___00_SharedPointerInternals__6B_
      ;
      FAsyncSpectrumAnalyzer::FAsyncSpectrumAnalyzer
                ((FAsyncSpectrumAnalyzer *)(pTVar21 + 1),&local_140,(float)iVar4);
      pFVar30 = (FAsyncSpectrumAnalyzer *)(pTVar21 + 1);
      if ((pFVar30 == (FAsyncSpectrumAnalyzer *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      FStack_130.ReferenceController = pTVar21;
      local_138 = pFVar30;
    }
    if (&this->SpectrumAnalyzer != (TSharedPtr<Audio::FAsyncSpectrumAnalyzer,1> *)&local_138) {
      (this->SpectrumAnalyzer).Object = pFVar30;
      local_138 = (FAsyncSpectrumAnalyzer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SpectrumAnalyzer).SharedReferenceCount,&FStack_130);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_130.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    uVar16 = _UNK_1512ea088;
    uVar14 = ___xmm_3f8000000000000040a0000000000000;
    fVar13 = __real_473b8000;
    fVar12 = __real_42c80000;
    fVar11 = __real_40a00000;
    fVar10 = __real_41200000;
    local_144 = (this->SpectralAnalysisDelegates).ArrayNum;
    uVar25 = (ulonglong)(int)local_144;
    pFVar29 = (this->SpectralAnalysisDelegates).AllocatorInstance.Data;
    pFVar27 = pFVar29 + 0x50;
    local_c8 = pFVar29 + uVar25 * 0x60;
    while( true ) {
      pFVar18 = local_c8;
      if ((this->SpectralAnalysisDelegates).ArrayNum != (int)uVar25) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar29 == pFVar18) break;
      local_f4 = *(int *)(pFVar27 + -0x3c);
      local_f0 = pFVar27[-0x38];
      local_e8 = *(int *)(pFVar27 + -0x34);
      local_ec = *(int *)(pFVar27 + -0x30);
      local_ef = pFVar27[-0x37];
      local_f8 = uVar28;
      TVar22 = ISpectrumBandExtractor::CreateSpectrumBandExtractor
                         ((FSpectrumBandExtractorSettings *)&local_d0);
      pIVar1 = (ISpectrumBandExtractor *)(pFVar27 + -0x10);
      if (pIVar1 != TVar22.Ptr) {
        IVar7 = *pIVar1;
        *pIVar1 = *TVar22.Ptr;
        *TVar22.Ptr = (ISpectrumBandExtractor)0x0;
        if (IVar7 != (ISpectrumBandExtractor)0x0) {
          (*(code *)**(undefined8 **)IVar7)(IVar7,1);
        }
      }
      if (local_d0 != (undefined8 *)0x0) {
        (**(code **)*local_d0)(local_d0,1);
      }
      if (*pIVar1 != (ISpectrumBandExtractor)0x0) {
        iVar4 = *(int *)(pFVar27 + -0x48);
        puVar26 = *(undefined4 **)pFVar29;
        puVar31 = puVar26 + (longlong)iVar4 * 4;
        while( true ) {
          if (*(int *)(pFVar27 + -0x48) != iVar4) {
            local_148[0] = 0;
            `TCheckedPointerIterator<FSoundSubmixSpectralAnalysisBandSettings,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_148);
          }
          if (puVar26 == puVar31) break;
          local_dc = *puVar26;
          local_d8 = puVar26[3];
          local_e0[0] = local_res10;
          (**(code **)(**(longlong **)(pFVar27 + -0x10) + 0x28))
                    (*(longlong **)(pFVar27 + -0x10),local_e0);
          FAttackRelease::FAttackRelease((FAttackRelease *)&local_128,fVar13,fVar10,fVar12,true);
          uVar17 = _UNK_1512ea088;
          uVar15 = ___xmm_3f8000000000000040a0000000000000;
          local_128.Value = 0.0;
          local_128.Mode = Peak;
          ___xmm_3f8000000000000040a0000000000000 = (float)uVar14;
          _UNK_1512ea084 = SUB84(uVar14,4);
          local_128.AnalysisValue = ___xmm_3f8000000000000040a0000000000000;
          local_128.AnalysisWindowMsec = _UNK_1512ea084;
          _UNK_1512ea088 = (float)uVar16;
          _UNK_1512ea08c = SUB84(uVar16,4);
          local_128.AnalysisFilterAlpha = _UNK_1512ea088;
          local_128.AnalysisFilterBeta = _UNK_1512ea08c;
          ___xmm_3f8000000000000040a0000000000000 = uVar15;
          _UNK_1512ea088 = uVar17;
          FInlineEnvelopeFollower::SetAnalysisWindow(&local_128,fVar11);
          iVar20 = puVar26[1];
          iVar5 = puVar26[2];
          FAttackRelease::SetSampleRate((FAttackRelease *)&local_128,*(float *)(pFVar27 + -0x40));
          FAttackRelease::SetAttackTime((FAttackRelease *)&local_128,(float)iVar20);
          FAttackRelease::SetReleaseTime((FAttackRelease *)&local_128,(float)iVar5);
          local_128.Mode = Peak;
          FAttackRelease::SetAnalog((FAttackRelease *)&local_128,true);
          FInlineEnvelopeFollower::SetAnalysisWindow(&local_128,fVar11);
          if (((*(FInlineEnvelopeFollower **)(pFVar27 + -8) <= &local_128) &&
              (&local_128 < *(FInlineEnvelopeFollower **)(pFVar27 + -8) + *(int *)(pFVar27 + 4))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar20 = *(int *)pFVar27;
          if (iVar20 == *(int *)(pFVar27 + 4)) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x430,(ForAnyElementType *)(pFVar27 + -8),(int *)(pFVar27 + 4));
          }
          lVar23 = (longlong)iVar20;
          *(int *)pFVar27 = iVar20 + 1;
          lVar8 = *(longlong *)(pFVar27 + -8);
          puVar26 = puVar26 + 4;
          plVar2 = (longlong *)(lVar8 + lVar23 * 0x30);
          *plVar2 = local_128._padding_;
          plVar2[1] = local_128._padding_;
          plVar2 = (longlong *)(lVar8 + 0x10 + lVar23 * 0x30);
          *plVar2 = local_128._padding_;
          plVar2[1] = CONCAT44(local_128.Mode,local_128.Value);
          puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar23 * 0x30);
          *puVar3 = local_128._32_8_;
          puVar3[1] = local_128._40_8_;
        }
      }
      pFVar29 = pFVar29 + 0x60;
      uVar25 = (ulonglong)local_144;
      pFVar27 = pFVar27 + 0x60;
    }
    LeaveCriticalSection(local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StopEnvelopeFollowing @ 146577f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::StopEnvelopeFollowing(FMixerSubmix *this)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  UObject *this_00;
  FString *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  FString local_30;
  undefined4 *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  LOCK();
  this->bIsEnvelopeFollowing = (FThreadSafeBool)0x0;
  UNLOCK();
  if (((-1 < AudioChannel->Enabled) &&
      (bVar2 = FWeakObjectPtr::IsValid(&(this->OwningSubmixObject).WeakPtr), bVar2)) &&
     (-1 < AudioChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FAudioSubmixEnvelopeFollowerEnabledFields>
              ((TLogScope<0> *)&local_20);
    *local_20 = *(undefined4 *)&this->MixerDevice->field_0xa0;
    this_00 = FWeakObjectPtr::Get(&(this->OwningSubmixObject).WeakPtr);
    pFVar4 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_30,(UObject *)0x0)
    ;
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar6 = L"";
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    local_20[1] = uVar3;
    QueryPerformanceCounter(&local_38);
    *(LARGE_INTEGER *)(local_20 + 2) = local_38;
    *(undefined1 *)(local_20 + 4) = 0;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StopSpectrumAnalysis @ 146578090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::StopSpectrumAnalysis(FMixerSubmix *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4330698859807246783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x9bf,"IsInAudioThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this->SpectrumAnalyzerCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    this->bIsSpectrumAnalyzing = (FThreadSafeBool)0x0;
    UNLOCK();
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SpectrumAnalyzer != (TSharedPtr<Audio::FAsyncSpectrumAnalyzer,1> *)&local_18) {
      (this->SpectrumAnalyzer).Object = (FAsyncSpectrumAnalyzer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SpectrumAnalyzer).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000146578136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SubmixCommand @ 146578150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::SubmixCommand(FMixerSubmix *this,TFunction<void___cdecl(void)> *param_1)

{
  longlong *plVar1;
  
  TQueue<TFunction<void___cdecl(void)>,1>::Enqueue(&this->CommandQueue,param_1);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000146578182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// TeardownSoundfieldStreams @ 146578e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::TeardownSoundfieldStreams(FMixerSubmix *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FSoundfieldStreams::Reset(&this->SoundfieldStreams);
  iVar3 = *(int *)&(this->ChildSubmixes).field_0x28;
  puVar1 = &(this->ChildSubmixes).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = iVar12;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ChildSubmixes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    iVar12 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146578ead;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_146578ead:
  uVar11 = *(uint *)&(this->ChildSubmixes).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChildSubmixes).field_0x8 -
                       *(int *)&(this->ChildSubmixes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ChildSubmixes).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ChildSubmixes).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146578fb0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_146578fb0:
  while( true ) {
    if (*(int *)&(this->ChildSubmixes).field_0x8 - *(int *)&(this->ChildSubmixes).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,Audio::FChildSubmixInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)&this->ChildSubmixes + (longlong)TStack_60.CurrentBitIndex * 0x38;
    puVar4 = *(undefined8 **)(lVar9 + 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)*puVar4)(puVar4,1);
    }
    puVar4 = *(undefined8 **)(lVar9 + 0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar9 + 0x20) = 0;
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// UnregisterAudioBus @ 14657aa60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSubmix::UnregisterAudioBus(FMixerSubmix *this,FAudioBusKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined ***pppuVar3;
  code *local_38 [2];
  undefined **local_28;
  FMixerSubmix *local_20;
  FAudioBusKey local_18;
  undefined ***local_10;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x264,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = (undefined ***)0x0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FMixerSubmix::UnregisterAudioBus'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = *param_1;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FMixerSubmix::UnregisterAudioBus'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  TQueue<TFunction<void___cdecl(void)>,1>::Enqueue
            (&this->CommandQueue,(TFunction<void___cdecl(void)> *)local_38);
  if (local_38[0] != (code *)0x0) {
    pppuVar3 = &local_28;
    if (local_10 != (undefined ***)0x0) {
      pppuVar3 = local_10;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  return;
}

// UnregisterBufferListener @ 14657ab10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::UnregisterBufferListener(FMixerSubmix *this,ISubmixBufferListener *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  TWeakPtr<ISubmixBufferListener,1> local_28;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  lpCriticalSection = &this->BufferListenerCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == (ISubmixBufferListener *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferListener",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                       ,0x913,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                     ((TSharedFromThis<ISubmixBufferListener,1> *)&param_1->field_0x8,&local_18);
  local_28.Object = pTVar5->Object;
  local_28.WeakReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::Remove
            (&this->BufferListenerPtrs,&local_28);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014657abe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UnregisterBufferListener @ 14657ac00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::UnregisterBufferListener
          (FMixerSubmix *this,TSharedRef<ISubmixBufferListener,1> *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  TWeakPtr<ISubmixBufferListener,1> local_18;
  
  lpCriticalSection = &this->BufferListenerCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = param_1->Object;
    local_18.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::Remove
              (&this->BufferListenerPtrs,&local_18);
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
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UnregisterBufferListenerInternal @ 14657acb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::UnregisterBufferListenerInternal(FMixerSubmix *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  lpCriticalSection = &this->BufferListenerCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8.ListenerBufferPtr = param_1;
    TArray<TWeakPtr<ISubmixBufferListener,1>,TSizedDefaultAllocator<32>_>::
    RemoveAll<_Audio::FMixerSubmix::UnregisterBufferListenerInternal_::__l2::<lambda_1>_>
              (&this->BufferListenerPtrs,&local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014657ad02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateEndpointSettings @ 14657be70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::UpdateEndpointSettings
          (FMixerSubmix *this,
          TUniquePtr<IAudioEndpointSettingsProxy,TDefaultDelete<IAudioEndpointSettingsProxy>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  if (((this->SoundfieldStreams).Factory != (ISoundfieldFactory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsSoundfieldSubmix()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x8ce,
                         L"UpdateEndpointSettings for a soundfield submix was called with an IAudioEndpointSettingsProxy rather than an ISoundfieldEndpointSettingsProxy."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->EndpointData).NonSoundfieldEndpoint.Ptr == (IAudioEndpoint *)0x0) &&
     (bVar2 = `Audio::FMixerSubmix::UpdateEndpointSettings'::__l12::<lambda_1>::operator()
                        (local_res8), !bVar2)) {
    return;
  }
  IAudioEndpoint::SetNewSettings((this->EndpointData).NonSoundfieldEndpoint.Ptr,param_1);
  return;
}

// UpdateEndpointSettings @ 14657bef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::UpdateEndpointSettings
          (FMixerSubmix *this,
          TUniquePtr<ISoundfieldEndpointSettingsProxy,TDefaultDelete<ISoundfieldEndpointSettingsProxy>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  if (((this->SoundfieldStreams).Factory == (ISoundfieldFactory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSoundfieldSubmix()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSubmix.cpp"
                         ,0x8d7,
                         L"UpdateEndpointSettings for a non-soundfield submix was called with an ISoundfieldEndpointSettingsProxy rather than an IAudioEndpointSettingsProxy."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->EndpointData).SoundfieldEndpoint.Ptr == (ISoundfieldEndpoint *)0x0) &&
     (bVar2 = `Audio::FMixerSubmix::UpdateEndpointSettings'::__l12::<lambda_1>::operator()
                        (local_res8), !bVar2)) {
    return;
  }
  ISoundfieldEndpoint::SetNewSettings((this->EndpointData).SoundfieldEndpoint.Ptr,param_1);
  return;
}

// UpdateListenerRotation @ 14657c720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::UpdateListenerRotation(FMixerSubmix *this,TQuat<double> *param_1)

{
  double dVar1;
  
  dVar1 = param_1->Y;
  (this->SoundfieldStreams).CachedPositionalData.Rotation.X = param_1->X;
  (this->SoundfieldStreams).CachedPositionalData.Rotation.Y = dVar1;
  dVar1 = param_1->W;
  (this->SoundfieldStreams).CachedPositionalData.Rotation.Z = param_1->Z;
  (this->SoundfieldStreams).CachedPositionalData.Rotation.W = dVar1;
  return;
}

// UpdateModulationSettings @ 14657c740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FMixerSubmix::UpdateModulationSettings
          (FMixerSubmix *this,
          TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
          *param_1,TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *param_2,
          TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
          *param_3)

{
  FModulationDestination::UpdateModulators(&this->VolumeMod,param_1);
  FModulationDestination::UpdateModulators(&this->WetLevelMod,param_2);
  FModulationDestination::UpdateModulators(&this->DryLevelMod,param_3);
  return;
}

// operator() @ 1504ed890

bool __thiscall `Audio::FMixerSubmix::BroadcastDelegates'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807246952>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246952>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ed910

bool __thiscall `Audio::FMixerSubmix::SetupEndpoint'::__l26::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *this_00;
  bool bVar4;
  undefined4 local_res10 [6];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807246481>);
  if (bVar2) {
    this_00 = (FName *)(**(code **)(*(longlong *)**(undefined8 **)this + 8))
                                 ((longlong *)**(undefined8 **)this,local_res10);
    ::FName::ToString(this_00,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246481>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ed988;
    }
  }
  bVar2 = false;
LAB_1504ed988:
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

// operator() @ 1504ed9c0

bool __thiscall
`Audio::FMixerSubmix::SetupSoundfieldStreams'::__l27::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *this_00;
  FName local_res10;
  undefined1 local_res18 [16];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4330698859807246423>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_38);
    this_00 = (FName *)(**(code **)(*(longlong *)**(undefined8 **)this + 8))
                                 ((longlong *)**(undefined8 **)this,local_res18);
    ::FName::ToString(this_00,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246423>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504eda7f;
    }
  }
  bVar4 = false;
LAB_1504eda7f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504edad0

bool __thiscall
`Audio::FMixerSubmix::ProcessAudioAndSendToEndpoint'::__l32::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *this_00;
  bool bVar4;
  undefined4 local_res10 [6];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807246273>);
  if (bVar2) {
    this_00 = (FName *)(**(code **)(**(longlong **)(*(longlong *)this + 0x170) + 8))
                                 (*(longlong **)(*(longlong *)this + 0x170),local_res10);
    ::FName::ToString(this_00,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246273>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504edb4c;
    }
  }
  bVar2 = false;
LAB_1504edb4c:
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

// operator() @ 1504edb80

bool __thiscall `Audio::FMixerSubmix::SetupEndpoint'::__l33::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *this_00;
  bool bVar4;
  undefined4 local_res10 [6];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807246521>);
  if (bVar2) {
    this_00 = (FName *)(**(code **)(*(longlong *)**(undefined8 **)this + 0x70))
                                 ((longlong *)**(undefined8 **)this,local_res10);
    ::FName::ToString(this_00,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246521>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504edbf8;
    }
  }
  bVar2 = false;
LAB_1504edbf8:
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

// operator() @ 1504edc30

bool __thiscall
`Audio::FMixerSubmix::UpdateEndpointSettings'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807246543>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246543>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504edc70

bool __thiscall
`Audio::FMixerSubmix::UpdateEndpointSettings'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807246552>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246552>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504edcb0

bool __thiscall
`Audio::FMixerSubmix::SetupSoundfieldStreams'::__l30::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *this_00;
  FName local_res10;
  undefined1 local_res18 [16];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4330698859807246432>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_38);
    this_00 = (FName *)(**(code **)(*(longlong *)**(undefined8 **)this + 8))
                                 ((longlong *)**(undefined8 **)this,local_res18);
    ::FName::ToString(this_00,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246432>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504edd6f;
    }
  }
  bVar4 = false;
LAB_1504edd6f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504eddc0

bool __thiscall `Audio::FMixerSubmix::SetupEndpoint'::__l34::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807246496>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246496>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504ede82;
    }
  }
  bVar4 = false;
LAB_1504ede82:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504edee0

bool __thiscall `Audio::FMixerSubmix::SetupEndpoint'::__l41::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807246536>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807246536>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504edfa2;
    }
  }
  bVar4 = false;
LAB_1504edfa2:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504ee000

bool __thiscall `Audio::FMixerSubmix::InitInternal'::__l79::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *this_00;
  bool bVar4;
  undefined4 local_res10 [6];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807244769>);
  if (bVar2) {
    this_00 = (FName *)(**(code **)(*(longlong *)**(undefined8 **)this + 0x70))
                                 ((longlong *)**(undefined8 **)this,local_res10);
    ::FName::ToString(this_00,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807244769>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ee078;
    }
  }
  bVar2 = false;
LAB_1504ee078:
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

// operator() @ 1504ee0b0

bool __thiscall `Audio::FMixerSubmix::InitInternal'::__l88::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *this_00;
  bool bVar4;
  undefined4 local_res10 [6];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4330698859807244787>);
  if (bVar2) {
    this_00 = (FName *)(**(code **)(*(longlong *)**(undefined8 **)this + 0x70))
                                 ((longlong *)**(undefined8 **)this,local_res10);
    ::FName::ToString(this_00,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4330698859807244787>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ee128;
    }
  }
  bVar2 = false;
LAB_1504ee128:
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

