// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 144

// StaticClass @ 147739f80

UClass * __cdecl UAudioComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAudioComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioComponent",
               &Z_Registration_Info_UClass_UAudioComponent.InnerSingleton,
               StaticRegisterNativesUAudioComponent,0xd40,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioComponent>,
               InternalVTableHelperCtorCaller<UAudioComponent>,aFStackX_8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioComponent.InnerSingleton;
}

// UAudioComponent @ 1477eed80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioComponent * __thiscall
UAudioComponent::UAudioComponent(UAudioComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)&this->field_0x250 = &___7ISoundParameterControllerInterface__6B_;
  FQuartzTickableObject::FQuartzTickableObject((FQuartzTickableObject *)&this->field_0x258);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UAudioComponent__6B_;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  (this->DefaultParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultParameters).ArrayNum = 0;
  (this->DefaultParameters).ArrayMax = 0;
  (this->InstanceParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceParameters).ArrayNum = 0;
  (this->InstanceParameters).ArrayMax = 0;
  (this->SoundClassOverride).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->AudioComponentUserID).ComparisonIndex = 0;
  (this->AudioComponentUserID).Number = 0;
  (this->SourceEffectChain).field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationOverrides);
  (this->ConcurrencySettings_DEPRECATED).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
            (&this->ModulationRouting);
  *(undefined8 *)&this->OnAudioPlayStateChanged = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioPlayStateChangedNative = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChangedNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChangedNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioVirtualizationChanged = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioVirtualizationChangedNative = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChangedNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChangedNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioFinished = 0;
  *(undefined8 *)&(this->OnAudioFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioFinishedNative = 0;
  *(undefined8 *)&(this->OnAudioFinishedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioFinishedNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioFinishedNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioPlaybackPercent = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercent).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioPlaybackPercentNative = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercentNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercentNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercentNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioSingleEnvelopeValue = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValue).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValue).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioSingleEnvelopeValueNative = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValueNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValueNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValueNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioMultiEnvelopeValue = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValue).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValue).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioMultiEnvelopeValueNative = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValueNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValueNative).field_0x10 = 0;
  *(undefined8 *)&this->OnQueueSubtitles = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValueNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnQueueSubtitles).field_0x8 = 0;
  *(undefined8 *)&(this->OnQueueSubtitles).field_0x10 = 0;
  (this->PendingQuartzCommandData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingQuartzCommandData).ArrayNum = 0;
  (this->PendingQuartzCommandData).ArrayMax = 0;
  (this->AutoAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AutoAttachSocketName).ComparisonIndex = 0;
  (this->AutoAttachSocketName).Number = 0;
  *(undefined8 *)&this->SoundWavePlaybackTimes = 0;
  *(undefined8 *)&(this->SoundWavePlaybackTimes).field_0x8 = 0;
  *(undefined8 *)&(this->SoundWavePlaybackTimes).field_0x20 = 0;
  this->LastSoundPlayOrder = 0;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x28 = 0;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x34 = 0;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SoundWavePlaybackTimes).field_0x40 = 0;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x48 = 0;
  (this->SourceBufferListener).Object = (ISourceBufferListener *)0x0;
  (this->SourceBufferListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bShouldSourceBufferListenerZeroBuffer = false;
  (this->PendingSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingSubmixSends).ArrayNum = 0;
  (this->PendingSubmixSends).ArrayMax = 0;
  (this->PendingBusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingBusSends).ArrayNum = 0;
  (this->PendingBusSends).ArrayMax = 0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  return this;
}

// UAudioComponent @ 1477ef0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioComponent * __thiscall
UAudioComponent::UAudioComponent(UAudioComponent *this,FObjectInitializer *param_1)

{
  FRandomStream *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  FName FVar3;
  UAudioComponent *local_res18 [2];
  ulong64 *local_18;
  UAudioComponent **local_10;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)&this->field_0x250 = &___7ISoundParameterControllerInterface__6B_;
  FQuartzTickableObject::FQuartzTickableObject((FQuartzTickableObject *)&this->field_0x258);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UAudioComponent__6B_;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  (this->DefaultParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultParameters).ArrayNum = 0;
  (this->DefaultParameters).ArrayMax = 0;
  (this->InstanceParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceParameters).ArrayNum = 0;
  (this->InstanceParameters).ArrayMax = 0;
  (this->SoundClassOverride).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->AudioComponentUserID).ComparisonIndex = 0;
  (this->AudioComponentUserID).Number = 0;
  (this->SourceEffectChain).field0_0x0.DebugPtr = (USoundEffectSourcePresetChain *)0x0;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationOverrides);
  (this->ConcurrencySettings_DEPRECATED).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
            (&this->ModulationRouting);
  *(undefined8 *)&this->OnAudioPlayStateChanged = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioPlayStateChangedNative = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChangedNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioPlayStateChangedNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioVirtualizationChanged = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioVirtualizationChangedNative = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChangedNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioVirtualizationChangedNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioFinished = 0;
  *(undefined8 *)&(this->OnAudioFinished).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioFinished).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioFinishedNative = 0;
  *(undefined8 *)&(this->OnAudioFinishedNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioFinishedNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioFinishedNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioPlaybackPercent = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercent).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioPlaybackPercentNative = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercentNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercentNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioPlaybackPercentNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioSingleEnvelopeValue = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValue).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValue).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioSingleEnvelopeValueNative = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValueNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValueNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioSingleEnvelopeValueNative).field_0x18 = 2;
  *(undefined8 *)&this->OnAudioMultiEnvelopeValue = 0;
  this_00 = &this->RandomStream;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValue).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValue).field_0x10 = 0;
  *(undefined8 *)&this->OnAudioMultiEnvelopeValueNative = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValueNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValueNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnAudioMultiEnvelopeValueNative).field_0x18 = 2;
  *(undefined8 *)&this->OnQueueSubtitles = 0;
  *(undefined8 *)&(this->OnQueueSubtitles).field_0x8 = 0;
  *(undefined8 *)&(this->OnQueueSubtitles).field_0x10 = 0;
  (this->PendingQuartzCommandData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingQuartzCommandData).ArrayNum = 0;
  (this->PendingQuartzCommandData).ArrayMax = 0;
  (this->AutoAttachParent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AutoAttachSocketName).ComparisonIndex = 0;
  (this->AutoAttachSocketName).Number = 0;
  *(undefined8 *)&this->SoundWavePlaybackTimes = 0;
  *(undefined8 *)&(this->SoundWavePlaybackTimes).field_0x8 = 0;
  *(undefined8 *)&(this->SoundWavePlaybackTimes).field_0x20 = 0;
  this->LastSoundPlayOrder = 0;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x28 = 0;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x34 = 0;
  *(undefined8 *)&(this->SoundWavePlaybackTimes).field_0x40 = 0;
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x48 = 0;
  this->field_0x1a9 = this->field_0x1a9 | 0x20;
  this->field_0x9a = this->field_0x9a | 0xd;
  this->field_0x1aa = this->field_0x1aa | 8;
  this->bIsPreviewSound = '\0';
  this->bAutoManageAttachment = '\0';
  this->bIsPaused = '\0';
  this->bEnableHighPassFilter = '\0';
  this->bDisableParameterUpdatesWhilePlaying = '\0';
  this->bCanPlayMultipleInstances = '\0';
  this->bOverridePriority = '\0';
  puVar2 = &this->field_0x4c8;
  this->bAutoDestroy = '\0';
  this->bEnableLowPassFilter = '\0';
  this->bOverrideSubtitlePriority = '\0';
  this->bAllowSpatialization = '\x01';
  this->bStopWhenOwnerDestroyed = '\x01';
  (this->SourceBufferListener).Object = (ISourceBufferListener *)0x0;
  (this->SourceBufferListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bShouldSourceBufferListenerZeroBuffer = false;
  (this->PendingSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingSubmixSends).ArrayNum = 0;
  (this->PendingSubmixSends).ArrayMax = 0;
  (this->PendingBusSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingBusSends).ArrayNum = 0;
  (this->PendingBusSends).ArrayMax = 0;
  this_00->InitialSeed = 0;
  this_00->Seed = 0;
  this->VolumeMultiplier = 1.0;
  this->Priority = 1.0;
  this->SubtitlePriority = 10000.0;
  this->PitchMultiplier = 1.0;
  this->VolumeModulationMin = 1.0;
  this->VolumeModulationMax = 1.0;
  this->PitchModulationMin = 1.0;
  this->PitchModulationMax = 1.0;
  this->LowPassFilterFrequency = 20000.0;
  this->HighPassFilterFrequency = 20.0;
  this->ActiveCount = 0;
  this->OcclusionCheckInterval = 0.1;
  this->EnvelopeFollowerAttackTime = 10;
  this->EnvelopeFollowerReleaseTime = 100;
  this->AudioDeviceID = 0xffffffff;
  if (FApp::bUseFixedSeed != false) {
    FVar3.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    FVar3.Number = *(uint *)&this->field_0x1c;
  }
  FRandomStream::Initialize(this_00,FVar3);
  EnterCriticalSection((LPCRITICAL_SECTION)&AudioIDToComponentMapLock);
  local_18 = &this->AudioComponentID;
  AudioComponentIDCounter = AudioComponentIDCounter + 1;
  *local_18 = AudioComponentIDCounter;
  local_10 = local_res18;
  local_res18[0] = this;
  TSet<TTuple<unsigned___int64,UAudioComponent_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioComponent_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,UAudioComponent_*_&&>_>
            ((TSet<TTuple<unsigned___int64,UAudioComponent_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioComponent_*,0>,FDefaultSetAllocator>
              *)&AudioIDToComponentMap,
             (TPairInitializer<unsigned___int64_const_&,UAudioComponent_*_&&> *)&stack0x00000008,
             (bool *)&local_18);
  LeaveCriticalSection((LPCRITICAL_SECTION)&AudioIDToComponentMapLock);
  return this;
}

// ~UAudioComponent @ 1477f40d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::~UAudioComponent(UAudioComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UAudioComponent__6B_;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  DestructItems<UAudioComponent::FPendingSourceBusSendInfo,int>
            ((FPendingSourceBusSendInfo *)(this->PendingBusSends).AllocatorInstance.Data,
             (this->PendingBusSends).ArrayNum);
  pFVar1 = (this->PendingBusSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoundSubmixSendInfo,int>
            ((FSoundSubmixSendInfo *)(this->PendingSubmixSends).AllocatorInstance.Data,
             (this->PendingSubmixSends).ArrayNum);
  pFVar1 = (this->PendingSubmixSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceBufferListener).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->SoundWavePlaybackTimes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SoundWavePlaybackTimes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoundWavePlaybackTimes);
  DestructItems<UAudioComponent::FAudioComponentPendingQuartzCommandData,int>
            ((FAudioComponentPendingQuartzCommandData *)
             (this->PendingQuartzCommandData).AllocatorInstance.Data,
             (this->PendingQuartzCommandData).ArrayNum);
  pFVar1 = (this->PendingQuartzCommandData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueueSubtitles);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAudioMultiEnvelopeValueNative).field_0x8,
             *(int *)&(this->OnAudioMultiEnvelopeValueNative).field_0x10);
  pvVar2 = *(void **)&(this->OnAudioMultiEnvelopeValueNative).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioMultiEnvelopeValueNative);
  pvVar2 = *(void **)&(this->OnAudioMultiEnvelopeValue).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioMultiEnvelopeValue);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAudioSingleEnvelopeValueNative).field_0x8,
             *(int *)&(this->OnAudioSingleEnvelopeValueNative).field_0x10);
  pvVar2 = *(void **)&(this->OnAudioSingleEnvelopeValueNative).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioSingleEnvelopeValueNative);
  pvVar2 = *(void **)&(this->OnAudioSingleEnvelopeValue).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioSingleEnvelopeValue);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAudioPlaybackPercentNative).field_0x8,
             *(int *)&(this->OnAudioPlaybackPercentNative).field_0x10);
  pvVar2 = *(void **)&(this->OnAudioPlaybackPercentNative).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioPlaybackPercentNative);
  pvVar2 = *(void **)&(this->OnAudioPlaybackPercent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioPlaybackPercent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAudioFinishedNative).field_0x8,
             *(int *)&(this->OnAudioFinishedNative).field_0x10);
  pvVar2 = *(void **)&(this->OnAudioFinishedNative).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioFinishedNative);
  pvVar2 = *(void **)&(this->OnAudioFinished).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioFinished);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAudioVirtualizationChangedNative).field_0x8,
             *(int *)&(this->OnAudioVirtualizationChangedNative).field_0x10);
  pvVar2 = *(void **)&(this->OnAudioVirtualizationChangedNative).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioVirtualizationChangedNative);
  pvVar2 = *(void **)&(this->OnAudioVirtualizationChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioVirtualizationChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAudioPlayStateChangedNative).field_0x8,
             *(int *)&(this->OnAudioPlayStateChangedNative).field_0x10);
  pvVar2 = *(void **)&(this->OnAudioPlayStateChangedNative).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioPlayStateChangedNative);
  pvVar2 = *(void **)&(this->OnAudioPlayStateChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioPlayStateChanged);
  FSoundModulationDefaultSettings::~FSoundModulationDefaultSettings
            ((FSoundModulationDefaultSettings *)&this->ModulationRouting);
  (this->ConcurrencySet).HashSize = 0;
  FVar3 = (this->ConcurrencySet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundConcurrency>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ConcurrencySet).Elements);
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationOverrides);
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->InstanceParameters).AllocatorInstance.Data,
             (this->InstanceParameters).ArrayNum);
  pFVar1 = (this->InstanceParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->DefaultParameters).AllocatorInstance.Data,
             (this->DefaultParameters).ArrayNum);
  pFVar1 = (this->DefaultParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FQuartzTickableObject::~FQuartzTickableObject((FQuartzTickableObject *)&this->field_0x258);
  *(undefined ***)&this->field_0x250 = &___7IInterface__6B_;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// operator() @ 1477f5ba0

void __thiscall
`UAudioComponent::AdjustVolumeInternal'::__l2::<lambda_1>::operator()
          (void *this,FActiveSound *param_1)

{
  float *pfVar1;
  EFadeOut EVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = Audio::FVolumeFader::GetTargetVolume(&param_1->ComponentVolumeFader);
  fVar5 = __real_322bcc77;
  pfVar1 = (float *)((longlong)this + 4);
  if ((*(char *)this == '\0') || (*pfVar1 <= fVar3 && fVar3 != *pfVar1)) {
    fVar3 = (float)((uint)*pfVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (param_1->FadeOut == Concurrency) {
      if (__real_322bcc77 < fVar3) {
        return;
      }
      fVar4 = Audio::FVolumeFader::GetFadeDuration(&param_1->ComponentVolumeFader);
      if (fVar4 < *(float *)((longlong)this + 8)) {
        return;
      }
    }
    else {
      if ((*(char *)this != '\0') || (fVar3 <= __real_322bcc77)) {
        EVar2 = User;
      }
      else {
        EVar2 = None;
      }
      param_1->FadeOut = EVar2;
    }
    if ((*(char *)this != '\0') || (fVar3 <= fVar5)) {
      fVar3 = Audio::FVolumeFader::GetActiveDuration(&param_1->ComponentVolumeFader);
      fVar5 = *(float *)((longlong)this + 8);
      if ((0.0 <= fVar3) && (fVar3 <= fVar5)) {
        fVar5 = fVar3;
      }
      Audio::FVolumeFader::SetActiveDuration(&param_1->ComponentVolumeFader,fVar5);
    }
    Audio::FVolumeFader::StartFade
              (&param_1->ComponentVolumeFader,*(float *)((longlong)this + 4),
               *(float *)((longlong)this + 8),*(EFaderCurve *)((longlong)this + 0xc));
  }
  return;
}

// operator() @ 1477f6080

void __thiscall `UAudioComponent::PlaybackCompleted'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  ulonglong uVar2;
  UAudioComponent *this_00;
  longlong lVar3;
  
  uVar2 = *(ulonglong *)this;
  EnterCriticalSection((LPCRITICAL_SECTION)&UAudioComponent::AudioIDToComponentMapLock);
  if (UAudioComponent::AudioIDToComponentMap._8_4_ != UAudioComponent::AudioIDToComponentMap._52_4_)
  {
    lVar3 = 0x154c2bf28;
    if (UAudioComponent::AudioIDToComponentMap._64_8_ != 0) {
      lVar3 = UAudioComponent::AudioIDToComponentMap._64_8_;
    }
    iVar1 = *(int *)(lVar3 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(UAudioComponent::AudioIDToComponentMap._72_4_ - 1)) * 4);
    while (iVar1 != -1) {
      lVar3 = UAudioComponent::AudioIDToComponentMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(ulonglong *)(UAudioComponent::AudioIDToComponentMap._0_8_ + (longlong)iVar1 * 0x18) ==
          uVar2) {
        if (lVar3 != 0) {
          this_00 = *(UAudioComponent **)(lVar3 + 8);
          LeaveCriticalSection((LPCRITICAL_SECTION)&UAudioComponent::AudioIDToComponentMapLock);
          if (this_00 == (UAudioComponent *)0x0) {
            return;
          }
          UAudioComponent::PlaybackCompleted(this_00,*(bool *)((longlong)this + 8));
          return;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&UAudioComponent::AudioIDToComponentMapLock);
  return;
}

// operator() @ 1477f6160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UAudioComponent::StopDelayed'::__l2::<lambda_1>::operator()(void *this,FActiveSound *param_1)

{
  float fVar1;
  EFadeOut EVar2;
  USoundBase *pUVar3;
  UObject *pUVar4;
  float fVar5;
  FName local_res10;
  FString local_28 [2];
  
  pUVar3 = (param_1->Sound).field0_0x0.DebugPtr;
  if ((pUVar3 != (USoundBase *)0x0) && (5 < (byte)LogAudio._0_1_)) {
    local_res10 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res10,local_28);
    pUVar4 = FWeakObjectPtr::Get(&(param_1->World).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      FWeakObjectPtr::Get(&(param_1->World).WeakPtr);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  EVar2 = param_1->FadeOut;
  if (((EVar2 != None) && (EVar2 != User)) && (EVar2 == Concurrency)) {
    fVar1 = *(float *)this;
    fVar5 = Audio::FVolumeFader::GetFadeDuration(&param_1->ComponentVolumeFader);
    if (fVar1 < fVar5) {
      Audio::FVolumeFader::SetActiveDuration(&param_1->ComponentVolumeFader,fVar1);
    }
    return;
  }
  param_1->FadeOut = User;
  Audio::FVolumeFader::SetActiveDuration(&param_1->ComponentVolumeFader,*(float *)this);
  return;
}

// Activate @ 147804100

void __thiscall UAudioComponent::Activate(UAudioComponent *this,bool param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  TSharedPtr<FActorComponentActivatedSignature_MCSignature,1> local_28;
  UAudioComponent *local_18;
  undefined1 local_10;
  
  if ((!param_1) && (cVar2 = (**(code **)(*(longlong *)this + 0x330))(), cVar2 != '\x01')) {
    return;
  }
  (**(code **)(*(longlong *)this + 0x650))(this,0);
  if ((this->field_0x9a & 0x10) != 0) {
    TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
    ::GetShared((TSparseDynamicDelegate<FActorComponentActivatedSignature_MCSignature,UActorComponent,FActorComponentActivatedSignatureInfoGetter>
                 *)&this->field_0xba,&local_28);
    if ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_28.Object !=
        (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      if (((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_28.Object ==
           (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_18 = this;
      local_10 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_28.Object,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// AddModulationRouting @ 147804540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAudioComponent::AddModulationRouting
          (UAudioComponent *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1,EModulationDestination param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 auStackY_1c8 [32];
  undefined1 local_197;
  undefined1 local_196 [6];
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  undefined1 local_15c [12];
  FAudioDevice *local_150;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  code *local_118 [5];
  undefined8 *local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  EModulationDestination local_98;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_150 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (local_150 == (FAudioDevice *)0x0) {
    return;
  }
  iStack_188 = 0;
  uStack_184 = 1;
  puVar1 = &(param_1->Elements).field_0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_174 = 0;
  local_170 = iStack_188;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    local_170 = 0;
    iStack_188 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_14780466e;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_184 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_184 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_160 = (int)lVar9;
    iStack_174 = local_170 + -1 + local_160;
    if (iVar3 < iStack_174) {
      iStack_174 = iVar3;
    }
  }
LAB_14780466e:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_168 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_178 = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_184,iStack_188);
  TStack_140.CurrentBitIndex = iStack_174;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_140._28_4_ = iStack_174;
  TStack_140.BaseBitIndex = local_170;
  uStack_120 = CONCAT44(uStack_164,iStack_168);
  local_190 = param_1;
  local_180 = puVar1;
  iStack_16c = iStack_174;
  local_148 = param_1;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147804781;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_147804781:
  while( true ) {
    pTVar6 = local_148;
    if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
        (int)uStack_120) {
      `TSparseArray<TSparseSetElement<USoundModulatorBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_197);
    }
    if (((TStack_140.CurrentBitIndex == uVar12) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1)
       ) break;
    local_15c._4_8_ =
         *(undefined8 *)
          (*(longlong *)&pTVar6->Elements + (longlong)TStack_140.CurrentBitIndex * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_15c._4_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_15c._4_8_);
    }
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<USoundModulatorBase>_>
              (&local_88,(TObjectPtr<USoundModulatorBase> *)local_15c,(bool *)(local_15c + 4));
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  if (param_2 == Volume) {
    (this->ModulationRouting).VolumeRouting = Union;
    lVar9 = 0x960;
  }
  else if (param_2 == Pitch) {
    (this->ModulationRouting).PitchRouting = Union;
    lVar9 = 0x9b8;
  }
  else if (param_2 == Lowpass) {
    (this->ModulationRouting).LowpassRouting = Union;
    lVar9 = 0xa68;
  }
  else {
    if (param_2 != Highpass) {
      `UAudioComponent::AddModulationRouting'::__l12::<lambda_1>::operator()(local_196);
      goto LAB_1478049c7;
    }
    (this->ModulationRouting).HighpassRouting = Union;
    lVar9 = 0xa10;
  }
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::Append<FDefaultSetAllocator>
            ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)(&this->field_0x0 + lVar9),&local_88);
  local_bc = 0x80;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_b8 = 0xffffffff;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)local_e8,&local_88);
  local_118[0] = (code *)0x0;
  local_98 = param_2;
  puVar8 = FMemory::Malloc(0x60,8);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`UAudioComponent::AddModulationRouting'::`2'::<lambda_2>,1,1>::
             _vftable_;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x34) = 0x80;
  *(undefined4 *)(puVar8 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0;
  local_f0 = puVar8;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
            ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)(puVar8 + 1),
             (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)local_e8);
  *(EModulationDestination *)(puVar8 + 0xb) = local_98;
  if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
       *)(puVar8 + 1) !=
      (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
       *)0x0) {
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UAudioComponent::AddModulationRouting'::__l2::<lambda_2>,void,FActiveSound_&>
                   ::Call;
  }
  FAudioDevice::SendCommandToActiveSounds
            (local_150,this->AudioComponentID,
             (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_118,(TStatId)0x154f11430);
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
LAB_1478049c7:
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// AdditionalStatObject @ 147805690

UObject * __thiscall UAudioComponent::AdditionalStatObject(UAudioComponent *this)

{
  return (UObject *)(this->Sound).field0_0x0.DebugPtr;
}

// AdjustAttenuation @ 1478056a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioComponent::AdjustAttenuation(UAudioComponent *this,FSoundAttenuationSettings *param_1)

{
  FSoundAttenuationSettings *this_00;
  FAudioDevice *this_01;
  FName *pFVar1;
  TStatId TVar2;
  undefined1 auStackY_4a8 [32];
  FName local_448 [2];
  code *local_438 [5];
  undefined8 *local_410;
  FSoundAttenuationSettings local_408;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  this->bOverrideAttenuation = '\x01';
  FSoundAttenuationSettings::operator=(&this->AttenuationOverrides,param_1);
  if (((this->field_0x9a & 0x10) != 0) &&
     (this_01 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
     this_01 != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioAdjustAttenuation ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::AdjustAttenuation(FSoundAttenuationSettings_const_&)_::_8_::FStat_STAT_AudioAdjustAttenuation>
           )0x0) {
        pFVar1 = ::FName::FName(local_448,"STAT_AudioAdjustAttenuation");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAdjustAttenuation,*pFVar1,
                   L"FAudioThreadTask.AdjustAttenuation","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioAdjustAttenuation;
    if (StatPtr_STAT_AudioAdjustAttenuation ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::AdjustAttenuation(FSoundAttenuationSettings_const_&)_::_8_::FStat_STAT_AudioAdjustAttenuation>
         )0x0) {
      pFVar1 = ::FName::FName(local_448,"STAT_AudioAdjustAttenuation");
      TVar2.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAdjustAttenuation,*pFVar1,
                      L"FAudioThreadTask.AdjustAttenuation","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    FSoundAttenuationSettings::FSoundAttenuationSettings(&local_408,param_1);
    local_438[0] = (code *)0x0;
    local_410 = FMemory::Malloc(0x3d8,8);
    this_00 = (FSoundAttenuationSettings *)(local_410 + 1);
    *local_410 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponent::AdjustAttenuation'::`8'::<lambda_1>,1,1>::
                  _vftable_;
    FSoundAttenuationSettings::FSoundAttenuationSettings(this_00,&local_408);
    if (this_00 != (FSoundAttenuationSettings *)0x0) {
      local_438[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UAudioComponent::AdjustAttenuation'::__l8::<lambda_1>,void,FActiveSound_&>
                     ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this_01,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_438,TVar2);
    FSoundAttenuationSettings::~FSoundAttenuationSettings(&local_408);
  }
  return;
}

// AdjustVolume @ 1478062d0

void __thiscall
UAudioComponent::AdjustVolume
          (UAudioComponent *this,float param_1,float param_2,EAudioFaderCurve param_3)

{
  AdjustVolumeInternal(this,param_1,param_2,false,param_3);
  return;
}

// AdjustVolumeInternal @ 1478062f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioComponent::AdjustVolumeInternal
          (UAudioComponent *this,float param_1,float param_2,bool param_3,EAudioFaderCurve param_4)

{
  undefined1 uVar1;
  USoundBase *pUVar2;
  FAudioDevice *this_00;
  FName *pFVar3;
  TStatId TVar4;
  byte bVar5;
  uint uVar6;
  FName local_res8;
  bool local_78;
  undefined3 uStack_77;
  EAudioFaderCurve EStack_6c;
  undefined3 uStack_6b;
  code *local_68 [2];
  undefined **local_58;
  undefined4 local_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  if (((this->field_0x9a & 0x10) != 0) &&
     (this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
     this_00 != (FAudioDevice *)0x0)) {
    pUVar2 = (this->Sound).field0_0x0.DebugPtr;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    uVar6 = (uint)___xmm_7fffffff7fffffff7fffffff7fffffff;
    if ((((pUVar2 == (USoundBase *)0x0) || (pUVar2->VirtualizationMode != Disabled)) ||
        (__real_322bcc77 < (float)((uint)param_1 & uVar6))) ||
       (__real_322bcc77 < (float)((uint)param_2 & uVar6))) {
      uVar1 = this->field_0x4ca;
      if ((param_3) || ((float)((uint)param_2 & uVar6) <= __real_322bcc77)) {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      this->field_0x4ca = uVar1 & 0xbf | bVar5 << 6;
      if (this->bIsFadingOut != bVar5) {
        BroadcastPlayState(this);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (StatPtr_STAT_AudioAdjustVolume ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::AdjustVolumeInternal(float,float,bool,EAudioFaderCurve)_::_2_::FStat_STAT_AudioAdjustVolume>
             )0x0) {
          pFVar3 = ::FName::FName(&local_res8,"STAT_AudioAdjustVolume");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAdjustVolume,*pFVar3,
                     L"FAudioThreadTask.AdjustVolume","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
      TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioAdjustVolume;
      if (StatPtr_STAT_AudioAdjustVolume ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::AdjustVolumeInternal(float,float,bool,EAudioFaderCurve)_::_2_::FStat_STAT_AudioAdjustVolume>
           )0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_AudioAdjustVolume");
        TVar4.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAdjustVolume,*pFVar3,
                        L"FAudioThreadTask.AdjustVolume","STATGROUP_AudioThreadCommands",
                        "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      EStack_6c = param_4;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponent::AdjustVolumeInternal'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioComponent::AdjustVolumeInternal'::__l2::<lambda_1>,void,FActiveSound_&>
                    ::Call;
      local_78 = param_3;
      local_40 = 0;
      local_50 = _local_78;
      uStack_44 = _EStack_6c;
      fStack_4c = param_2;
      fStack_48 = param_1;
      FAudioDevice::SendCommandToActiveSounds
                (this_00,this->AudioComponentID,
                 (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_68,TVar4);
    }
    else {
      (**(code **)(*(longlong *)this + 0x668))(this);
    }
  }
  return;
}

// BP_GetAttenuationSettingsToApply @ 14780c370

bool __thiscall
UAudioComponent::BP_GetAttenuationSettingsToApply
          (UAudioComponent *this,FSoundAttenuationSettings *param_1)

{
  USoundAttenuation *pUVar1;
  USoundBase *pUVar2;
  FSoundAttenuationSettings *pFVar3;
  
  if (this->bOverrideAttenuation == '\0') {
    pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
    if (pUVar1 == (USoundAttenuation *)0x0) {
      pUVar2 = (this->Sound).field0_0x0.DebugPtr;
      if (pUVar2 == (USoundBase *)0x0) {
        return false;
      }
      pFVar3 = (FSoundAttenuationSettings *)(**(code **)(pUVar2->_padding_ + 0x2c8))();
    }
    else {
      pFVar3 = &pUVar1->Attenuation;
    }
  }
  else {
    pFVar3 = &this->AttenuationOverrides;
  }
  if (pFVar3 == (FSoundAttenuationSettings *)0x0) {
    return false;
  }
  FSoundAttenuationSettings::operator=(param_1,pFVar3);
  return true;
}

// BeginDestroy @ 14780c480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::BeginDestroy(UAudioComponent *this)

{
  USoundBase *pUVar1;
  char cVar2;
  ulong64 local_res8 [4];
  FString local_18;
  
  if ((((this->field_0x9a & 0x10) != 0) &&
      (pUVar1 = (this->Sound).field0_0x0.DebugPtr, pUVar1 != (USoundBase *)0x0)) &&
     (cVar2 = (**(code **)(pUVar1->_padding_ + 0x310))(), cVar2 != '\0')) {
    if (5 < (byte)LogAudio._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(this->Sound).field0_0x0.DebugPtr,&local_18,(UObject *)0x0,
                 None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)this + 0x668))(this);
  }
  (**(code **)(*(longlong *)&this->field_0x250 + 0x10))();
  EnterCriticalSection((LPCRITICAL_SECTION)&AudioIDToComponentMapLock);
  local_res8[0] = this->AudioComponentID;
  if (AudioIDToComponentMap._8_4_ != AudioIDToComponentMap._52_4_) {
    TSet<TTuple<unsigned___int64,UAudioComponent_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioComponent_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,UAudioComponent_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioComponent_*,0>,FDefaultSetAllocator>
                *)&AudioIDToComponentMap,(int)(local_res8[0] >> 0x20) * 0x17 + (int)local_res8[0],
               local_res8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&AudioIDToComponentMapLock);
  USceneComponent::BeginDestroy((USceneComponent *)this);
  return;
}

// BroadcastPlayState @ 14780ce00

void __thiscall UAudioComponent::BroadcastPlayState(UAudioComponent *this)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(UAudioComponent_const_*,EAudioComponentPlayState),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  EAudioComponentPlayState EVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  EAudioComponentPlayState local_res8 [8];
  FDestructionSentinel local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnAudioPlayStateChanged,&local_40);
  iVar2 = *(int *)&(this->OnAudioPlayStateChanged).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if (0 < iVar2) {
    local_res8[0] = GetPlayState(this);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnAudioPlayStateChanged,local_res8);
  }
  this_00 = &this->OnAudioPlayStateChangedNative;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar6) {
    EVar7 = GetPlayState(this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_58);
    puVar1 = &(this->OnAudioPlayStateChangedNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar11 = *(int *)&(this->OnAudioPlayStateChangedNative).field_0x10 - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 << 4;
      bVar6 = false;
      do {
        uVar10 = 0;
        if ((int)uVar11 < *(int *)&(this->OnAudioPlayStateChangedNative).field_0x10) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnAudioPlayStateChangedNative).field_0x8;
        if (((*(int *)(lVar12 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar12 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,this,EVar7), cVar9 == '\0')) {
          bVar6 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    puVar1 = &(this->OnAudioPlayStateChangedNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  return;
}

// CalcBounds @ 14780e150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UAudioComponent::CalcBounds
          (UAudioComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  UObject *pUVar2;
  
  if (((bool)this->bAutoManageAttachment) && (*(longlong *)&this->field_0xd0 == 0)) {
    pUVar2 = FWeakObjectPtr::Get(&(this->AutoAttachParent).WeakPtr);
    if (pUVar2 != (UObject *)0x0) {
      dVar1 = *(double *)(pUVar2 + 7);
      (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *(double *)&pUVar2[6].field_0x20;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
      dVar1 = *(double *)&pUVar2[7].field_0x10;
      (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = *(double *)&pUVar2[7].field_0x8;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
      dVar1 = *(double *)&pUVar2[7].field_0x20;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = *(double *)&pUVar2[7].field_0x18;
      (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar1;
      __return_storage_ptr__->SphereRadius = *(double *)(pUVar2 + 8);
      return __return_storage_ptr__;
    }
  }
  USceneComponent::CalcBounds((USceneComponent *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CancelAutoAttachment @ 147810720

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
UAudioComponent::CancelAutoAttachment(UAudioComponent *this,bool param_1,UWorld *param_2)

{
  bool bVar1;
  TVector<double>_u_0 local_28;
  
  if (((bool)this->bAutoManageAttachment) && (param_2 != (UWorld *)0x0)) {
    bVar1 = UWorld::IsGameWorld(param_2);
    if (bVar1) {
      if (this->bDidAutoAttach != 0) {
        local_28._s_0.X = (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.X;
        local_28._s_0.Y = (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Y;
        local_28._s_0.Z = (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Z;
        USceneComponent::SetRelativeLocation_Direct
                  ((USceneComponent *)this,(TVector<double> *)&local_28._s_0);
        local_28._s_0.X = (this->SavedAutoAttachRelativeRotation).Pitch;
        local_28._s_0.Y = (this->SavedAutoAttachRelativeRotation).Yaw;
        local_28._s_0.Z = (this->SavedAutoAttachRelativeRotation).Roll;
        USceneComponent::SetRelativeRotation_Direct
                  ((USceneComponent *)this,(TRotator<double> *)&local_28._s_0);
        local_28._s_0.X = (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.X;
        local_28._s_0.Y = (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Y;
        local_28._s_0.Z = (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z;
        USceneComponent::SetRelativeScale3D_Direct
                  ((USceneComponent *)this,(TVector<double> *)&local_28._s_0);
        this->bDidAutoAttach = '\0';
      }
      if (param_1) {
        (**(code **)(*(longlong *)this + 0x518))
                  (this,&FDetachmentTransformRules::KeepRelativeTransform);
      }
    }
  }
  return;
}

// CollectAttenuationShapesForVisualization @ 147815270

void __thiscall
UAudioComponent::CollectAttenuationShapesForVisualization
          (UAudioComponent *this,
          TMultiMap<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>_>
          *param_1)

{
  USoundAttenuation *pUVar1;
  USoundBase *pUVar2;
  USoundCue *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  FSoundAttenuationSettings *pFVar7;
  uint uVar8;
  longlong lVar9;
  TArray<USoundNodeAttenuation_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bOverrideAttenuation == '\0') {
    pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
    if (pUVar1 == (USoundAttenuation *)0x0) {
      pUVar2 = (this->Sound).field0_0x0.DebugPtr;
      if (pUVar2 == (USoundBase *)0x0) goto LAB_1478152ce;
      pFVar7 = (FSoundAttenuationSettings *)(**(code **)(pUVar2->_padding_ + 0x2c8))();
    }
    else {
      pFVar7 = &pUVar1->Attenuation;
    }
  }
  else {
    pFVar7 = &this->AttenuationOverrides;
  }
  if (pFVar7 != (FSoundAttenuationSettings *)0x0) {
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,param_1);
  }
LAB_1478152ce:
  if ((this->Sound).field0_0x0.DebugPtr != (USoundBase *)0x0) {
    pUVar6 = Z_Construct_UClass_USoundCue_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->Sound,pUVar6);
    if ((bVar4) &&
       (this_00 = (USoundCue *)(this->Sound).field0_0x0.DebugPtr, this_00 != (USoundCue *)0x0)) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      USoundCue::RecursiveFindAttenuation
                (this_00,(this_00->FirstNode).field0_0x0.DebugPtr,&local_18);
      uVar8 = 0;
      if (0 < local_18.ArrayNum) {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < local_18.ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
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
          pFVar7 = USoundNodeAttenuation::GetAttenuationSettingsToApply
                             (*(USoundNodeAttenuation **)(local_18.AllocatorInstance.Data + lVar9));
          if (pFVar7 != (FSoundAttenuationSettings *)0x0) {
            (**(code **)(pFVar7->_padding_ + 8))(pFVar7,param_1);
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar8 < local_18.ArrayNum);
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Deactivate @ 14781b750

void __thiscall UAudioComponent::Deactivate(UAudioComponent *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UAudioComponent *local_res8;
  TSharedPtr<FActorComponentDeactivateSignature_MCSignature,1> local_18;
  
  cVar2 = (**(code **)(*(longlong *)this + 0x330))();
  if (cVar2 == '\0') {
    (**(code **)(*(longlong *)this + 0x668))(this);
    if ((this->field_0x9a & 0x10) == 0) {
      TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
      ::GetShared((TSparseDynamicDelegate<FActorComponentDeactivateSignature_MCSignature,UActorComponent,FActorComponentDeactivateSignatureInfoGetter>
                   *)&this->field_0xbb,&local_18);
      if ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_18.Object !=
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
        if ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_18.Object ==
            (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_res8 = this;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)local_18.Object,
                   &local_res8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// EndPlay @ 14781e8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::EndPlay(UAudioComponent *this,Type param_1)

{
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  FQuartzTickableObject::QuartzUnsubscribe((FQuartzTickableObject *)&this->field_0x258);
  return;
}

// FadeIn @ 147820950

void __thiscall
UAudioComponent::FadeIn
          (UAudioComponent *this,float param_1,float param_2,float param_3,EAudioFaderCurve param_4)

{
  ForAnyElementType FVar1;
  PlayInternalRequestData local_78;
  
  local_78.QuantizedRequestData.ClockName.ComparisonIndex.Value = 0;
  local_78.QuantizedRequestData.ClockName.Number = 0;
  local_78.QuantizedRequestData.OtherClockName.ComparisonIndex.Value = 0;
  local_78.QuantizedRequestData.OtherClockName.Number = 0;
  local_78.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued = false;
  local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_78.QuantizedRequestData.GameThreadSubscribers.ArrayNum = 0;
  local_78.QuantizedRequestData.GameThreadSubscribers.ArrayMax = 0;
  local_78.FadeCurve = param_4;
  local_78.QuantizedRequestData.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  local_78.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_78.QuantizedRequestData.QuantizationBoundary.Quantization = Tick;
  local_78.QuantizedRequestData.QuantizationBoundary.Multiplier = 1.0;
  local_78.QuantizedRequestData.QuantizationBoundary.CountingReferencePoint = BarRelative;
  local_78.QuantizedRequestData.QuantizationBoundary.bFireOnClockStart = true;
  local_78.QuantizedRequestData.QuantizationBoundary.bCancelCommandIfClockIsNotRunning = false;
  local_78.QuantizedRequestData.QuantizationBoundary.bResetClockOnQueued = false;
  local_78.QuantizedRequestData.GameThreadDelegateID = -1;
  local_78.StartTime = param_3;
  local_78.FadeInDuration = param_1;
  local_78.FadeVolumeLevel = param_2;
  PlayInternal(this,&local_78,(USoundBase *)0x0);
  FVar1.Data = local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data,
             local_78.QuantizedRequestData.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)FVar1.Data != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
               AllocatorInstance.Data;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
             AllocatorInstance.Data,
             local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)FVar1.Data != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.
             ReferenceController);
  return;
}

// FadeOut @ 147820a20

void __thiscall
UAudioComponent::FadeOut(UAudioComponent *this,float param_1,float param_2,EAudioFaderCurve param_3)

{
  AdjustVolumeInternal(this,param_1,param_2,true,param_3);
  return;
}

// GetAttenuationSettingsAsset @ 147834d10

TObjectPtr<USoundAttenuation> __thiscall
UAudioComponent::GetAttenuationSettingsAsset(UAudioComponent *this)

{
  USoundBase *pUVar1;
  USoundAttenuation *pUVar2;
  TObjectPtr<USoundAttenuation>_u_0 in_RDX;
  bool bVar3;
  
  pUVar2 = (this->AttenuationSettings).field0_0x0.DebugPtr;
  if (pUVar2 == (USoundAttenuation *)0x0) {
    pUVar1 = (this->Sound).field0_0x0.DebugPtr;
    if (pUVar1 == (USoundBase *)0x0) {
      (in_RDX.DebugPtr)->_padding_ = 0;
      return (TObjectPtr<USoundAttenuation>)in_RDX.DebugPtr;
    }
    pUVar2 = (pUVar1->AttenuationSettings).field0_0x0.DebugPtr;
    (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      return (TObjectPtr<USoundAttenuation>)in_RDX.DebugPtr;
    }
    bVar3 = pUVar2 == (USoundAttenuation *)0x0;
  }
  else {
    (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar2;
    bVar3 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  if (bVar3) {
    return (TObjectPtr<USoundAttenuation>)in_RDX.DebugPtr;
  }
  UE::GC::MarkAsReachable((UObject *)pUVar2);
  return (TObjectPtr<USoundAttenuation>)in_RDX;
}

// GetAttenuationSettingsToApply @ 147834d80

FSoundAttenuationSettings * __thiscall
UAudioComponent::GetAttenuationSettingsToApply(UAudioComponent *this)

{
  USoundAttenuation *pUVar1;
  USoundBase *pUVar2;
  FSoundAttenuationSettings *pFVar3;
  
  if (this->bOverrideAttenuation != '\0') {
    return &this->AttenuationOverrides;
  }
  pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundAttenuation *)0x0) {
    return &pUVar1->Attenuation;
  }
  pUVar2 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar2 != (USoundBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147834db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FSoundAttenuationSettings *)(**(code **)(pUVar2->_padding_ + 0x2c8))();
    return pFVar3;
  }
  return (FSoundAttenuationSettings *)0x0;
}

// GetAudioComponentFromID @ 147834dd0

UAudioComponent * __cdecl UAudioComponent::GetAudioComponentFromID(ulong64 param_1)

{
  int iVar1;
  longlong lVar2;
  UAudioComponent *pUVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&AudioIDToComponentMapLock);
  if (AudioIDToComponentMap._8_4_ != AudioIDToComponentMap._52_4_) {
    lVar2 = 0x154c2bf28;
    if (AudioIDToComponentMap._64_8_ != 0) {
      lVar2 = AudioIDToComponentMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (AudioIDToComponentMap._72_4_ - 1 &
                             (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    while (iVar1 != -1) {
      lVar2 = AudioIDToComponentMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(ulong64 *)(AudioIDToComponentMap._0_8_ + (longlong)iVar1 * 0x18) == param_1) {
        if (lVar2 != 0) {
          pUVar3 = *(UAudioComponent **)(lVar2 + 8);
          goto LAB_147834e5a;
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  pUVar3 = (UAudioComponent *)0x0;
LAB_147834e5a:
  LeaveCriticalSection((LPCRITICAL_SECTION)&AudioIDToComponentMapLock);
  return pUVar3;
}

// GetAudioDevice @ 147834e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDevice * __thiscall UAudioComponent::GetAudioDevice(UAudioComponent *this)

{
  FAudioDeviceManager *this_00;
  FAudioDevice *pFVar1;
  UWorld *this_01;
  
  if (GEngine != (UEngine *)0x0) {
    if (*(int *)&this->field_0x27c == -1) {
      this_01 = UActorComponent::GetWorld
                          ((UActorComponent *)&this[-1].OnAudioPlayStateChangedNative.field_0x18);
      if (this_01 != (UWorld *)0x0) {
        pFVar1 = UWorld::GetAudioDeviceRaw(this_01);
        return pFVar1;
      }
      pFVar1 = UEngine::GetMainAudioDeviceRaw(GEngine);
      return pFVar1;
    }
    this_00 = UEngine::GetAudioDeviceManager(GEngine);
    if (this_00 != (FAudioDeviceManager *)0x0) {
      pFVar1 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,*(uint *)&this->field_0x27c);
      return pFVar1;
    }
  }
  return (FAudioDevice *)0x0;
}

// GetAudioTimeSeconds @ 147834f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UAudioComponent::GetAudioTimeSeconds(UAudioComponent *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UActorComponent::GetWorld((UActorComponent *)this);
  if (pUVar1 != (UWorld *)0x0) {
    return (float)pUVar1->AudioTimeSeconds;
  }
  if (WorldlessGetAudioTimeBehaviorCVar != 0) {
    return (float)(double)FApp::CurrentTime;
  }
  return 0.0;
}

// GetCookedEnvelopeData @ 147835970

bool __thiscall UAudioComponent::GetCookedEnvelopeData(UAudioComponent *this,float *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  USoundWave *this_00;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  undefined1 local_res18 [8];
  float local_res20 [2];
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  bVar19 = false;
  cVar7 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
  if ((cVar7 == '\0') ||
     (*(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
      *(int *)&(this->SoundWavePlaybackTimes).field_0x34 < 1)) {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UAudioComponent::GetCookedEnvelopeData'::__l5::
           _dynamic_atexit_destructor_for__CookedEnvelopeData__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar18 = 0;
  puVar1 = &(this->SoundWavePlaybackTimes).field_0x10;
  *param_1 = 0.0;
  iVar3 = *(int *)&(this->SoundWavePlaybackTimes).field_0x28;
  iVar14 = 0;
  iVar16 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->SoundWavePlaybackTimes).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147835aa2;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = iVar16 + -1 + (int)lVar12;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_147835aa2:
  uVar13 = *(uint *)&(this->SoundWavePlaybackTimes).field_0x28;
  TStack_78._padding_ = CONCAT44(uVar10,iVar14);
  uVar10 = uVar13 & 0xffffffe0;
  TStack_78.CurrentBitIndex = iVar11;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_78._28_4_ = iVar11;
  TStack_78.BaseBitIndex = iVar16;
  uStack_58 = CONCAT44(uStack_94,
                       *(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
                       *(int *)&(this->SoundWavePlaybackTimes).field_0x34);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar4 = *(uint *)&(this->SoundWavePlaybackTimes).field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(this->SoundWavePlaybackTimes).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147835bac;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_147835bac:
  while( true ) {
    if (*(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
        *(int *)&(this->SoundWavePlaybackTimes).field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar12 = (longlong)TStack_78.CurrentBitIndex;
    if ((TStack_78.CurrentBitIndex == uVar13) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar5 = *(longlong *)&this->SoundWavePlaybackTimes;
    if ((0 < *(int *)(*(longlong *)(lVar5 + 8 + lVar12 * 0x28) + 0x340)) &&
       (0.0 < *(float *)(lVar5 + 0x10 + lVar12 * 0x28))) {
      if (CookedEnvelopeData.ArrayMax < 0) {
        CookedEnvelopeData.ArrayNum = 0;
        if (CookedEnvelopeData.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&CookedEnvelopeData.AllocatorInstance,0,&CookedEnvelopeData.ArrayMax);
        }
      }
      else {
        CookedEnvelopeData.ArrayNum = 0;
      }
      this_00 = *(USoundWave **)(lVar5 + 8 + lVar12 * 0x28);
      local_res20[0] = 0.0;
      bVar8 = (bool)(**(code **)(((this->Sound).field0_0x0.DebugPtr)->_padding_ + 0x310))();
      bVar8 = USoundWave::GetInterpolatedCookedEnvelopeDataForTime
                        (this_00,*(float *)(lVar5 + 0x10 + lVar12 * 0x28),
                         (uint *)(lVar5 + 0x14 + lVar12 * 0x28),local_res20,bVar8);
      if (bVar8) {
        iVar18 = iVar18 + 1;
        bVar19 = true;
        *param_1 = local_res20[0] + *param_1;
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  if (bVar19 != false) {
    *param_1 = *param_1 / (float)iVar18;
  }
  return bVar19;
}

// GetCookedEnvelopeDataForAllPlayingSounds @ 147835d70

bool __thiscall
UAudioComponent::GetCookedEnvelopeDataForAllPlayingSounds
          (UAudioComponent *this,
          TArray<FSoundWaveEnvelopeDataPerSound,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  USoundWave *this_00;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *pTVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  float local_res20 [2];
  float local_c0 [2];
  UObject *local_b8;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  bVar12 = false;
  bVar10 = false;
  cVar9 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
  if ((cVar9 != '\0') &&
     (iStack_88 = *(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
                  *(int *)&(this->SoundWavePlaybackTimes).field_0x34, 0 < iStack_88)) {
    puVar1 = &(this->SoundWavePlaybackTimes).field_0x10;
    iStack_a8 = 0;
    local_b0 = &this->SoundWavePlaybackTimes;
    iVar13 = *(int *)&(this->SoundWavePlaybackTimes).field_0x28;
    local_90 = 0;
    uStack_a4 = 1;
    iStack_94 = 0;
    if (iVar13 != 0) {
      puVar18 = *(uint **)&(this->SoundWavePlaybackTimes).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        lVar14 = (longlong)iStack_a8;
        local_90 = local_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        iStack_94 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_147835e81;
        uVar16 = puVar18[lVar14 + 1];
      }
      uStack_a4 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_a4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_80 = (int)lVar14;
      iStack_94 = local_90 + -1 + local_80;
      if (iVar13 < iStack_94) {
        iStack_94 = iVar13;
      }
    }
LAB_147835e81:
    uVar16 = *(uint *)&(this->SoundWavePlaybackTimes).field_0x28;
    uStack_98 = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_a4,iStack_a8);
    uVar19 = uVar16 & 0xffffffe0;
    TStack_70.CurrentBitIndex = iStack_94;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = iStack_94;
    TStack_70.BaseBitIndex = local_90;
    uStack_50 = CONCAT44(uStack_84,iStack_88);
    iVar15 = (int)uVar16 >> 5;
    local_a0 = puVar1;
    iStack_8c = iStack_94;
    local_78 = local_b0;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar13 < (int)uVar16)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    uVar3 = *(uint *)&(this->SoundWavePlaybackTimes).field_0x28;
    bVar10 = bVar12;
    if (uVar16 != uVar3) {
      puVar17 = *(undefined1 **)&(this->SoundWavePlaybackTimes).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar16 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147835f90;
        uVar16 = *(uint *)(puVar17 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_7c = (int)lVar14;
      uVar16 = local_7c + -1 + uVar19;
      if ((int)uVar3 < (int)uVar16) {
        uVar16 = uVar3;
      }
    }
LAB_147835f90:
    while( true ) {
      pTVar8 = local_78;
      if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      lVar14 = (longlong)TStack_70.CurrentBitIndex;
      if (((TStack_70.CurrentBitIndex == uVar16) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == &this->SoundWavePlaybackTimes)) break;
      lVar4 = *(longlong *)pTVar8;
      this_00 = *(USoundWave **)(lVar4 + 8 + lVar14 * 0x28);
      if ((0 < (this_00->CookedEnvelopeTimeData).ArrayNum) &&
         (0.0 < *(float *)(lVar4 + 0x10 + lVar14 * 0x28))) {
        local_res20[0] = 0.0;
        bVar12 = (bool)(**(code **)(((this->Sound).field0_0x0.DebugPtr)->_padding_ + 0x310))();
        bVar12 = USoundWave::GetInterpolatedCookedEnvelopeDataForTime
                           (this_00,*(float *)(lVar4 + 0x10 + lVar14 * 0x28),
                            (uint *)(lVar4 + 0x14 + lVar14 * 0x28),local_res20,bVar12);
        if (bVar12) {
          pUVar5 = *(UObject **)(lVar4 + 8 + lVar14 * 0x28);
          local_c0[0] = 0.0;
          local_c0[1] = 0.0;
          local_b8 = (UObject *)0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          pFVar6 = (param_1->AllocatorInstance).Data;
          local_c0[1] = (float)*(undefined4 *)(lVar4 + 0x10 + lVar14 * 0x28);
          local_c0[0] = local_res20[0];
          local_b8 = pUVar5;
          if (((pFVar6 <= (FScriptContainerElement *)local_c0) &&
              ((FScriptContainerElement *)local_c0 < pFVar6 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          iVar13 = param_1->ArrayNum;
          if (iVar13 == param_1->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar13 + 1;
          pFVar6 = (param_1->AllocatorInstance).Data;
          lVar14 = (longlong)iVar13;
          *(float *)(pFVar6 + lVar14 * 0x10) = local_c0[0];
          *(float *)(pFVar6 + lVar14 * 0x10 + 4) = local_c0[1];
          *(UObject **)(pFVar6 + lVar14 * 0x10 + 8) = local_b8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_b8);
          }
          bVar10 = true;
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  return bVar10;
}

// GetCookedFFTData @ 1478361a0

bool __thiscall
UAudioComponent::GetCookedFFTData
          (UAudioComponent *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  USoundWave *this_00;
  code *pcVar8;
  ForAnyElementType FVar9;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *pTVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
  float fVar24;
  FIdentityFunctor local_res8;
  undefined1 local_res20 [8];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  uint local_104;
  ForElementType<unsigned_int> local_100;
  int local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int local_e0;
  int local_dc;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *local_d8;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  bVar14 = false;
  cVar11 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
  if (((cVar11 == '\0') ||
      (*(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
       *(int *)&(this->SoundWavePlaybackTimes).field_0x34 < 1)) || (param_1->ArrayNum < 1)) {
    return false;
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  pFVar18 = (param_1->AllocatorInstance).Data;
  iVar5 = param_1->ArrayNum;
  pFVar2 = pFVar18 + (longlong)iVar5 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar18 == pFVar2) break;
    pFVar20 = (param_2->AllocatorInstance).Data;
    local_f0 = *(undefined4 *)pFVar18;
    uStack_ec = 0;
    uStack_e8 = 0;
    if (((pFVar20 <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 < pFVar20 + (longlong)*piVar1 * 0xc)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    iVar15 = param_2->ArrayNum;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar15 + 1;
    pFVar18 = pFVar18 + 4;
    pFVar20 = (param_2->AllocatorInstance).Data;
    *(ulonglong *)(pFVar20 + (longlong)iVar15 * 0xc) = CONCAT44(uStack_ec,local_f0);
    *(undefined4 *)(pFVar20 + (longlong)iVar15 * 0xc + 8) = uStack_e8;
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FSoundWaveSpectralData,int,FIdentityFunctor,TDereferenceWrapper<FSoundWaveSpectralData,FCompareSpectralDataByFrequencyHz>_>
            ((FSoundWaveSpectralData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8,(FCompareSpectralDataByFrequencyHz *)&local_106);
  iVar15 = 0;
  iStack_c8 = 0;
  local_f8 = 0;
  local_b0 = 0;
  uStack_c4 = 1;
  local_100 = (ForElementType<unsigned_int>)&(this->SoundWavePlaybackTimes).field_0x10;
  iVar5 = *(int *)&(this->SoundWavePlaybackTimes).field_0x28;
  local_d8 = &this->SoundWavePlaybackTimes;
  iStack_b4 = 0;
  if (iVar5 != 0) {
    puVar23 = *(uint **)&(this->SoundWavePlaybackTimes).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)local_100;
    }
    uVar21 = *puVar23;
    while (uVar21 == 0) {
      lVar16 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1478363f4;
      uVar21 = (puVar23 + 1)[lVar16];
    }
    uStack_c4 = ~(uVar21 - 1) & uVar21;
    uVar3 = (ulonglong)uStack_c4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_e0 = (int)lVar16;
    iStack_b4 = local_e0 + -1 + local_b0;
    if (iVar5 < iStack_b4) {
      iStack_b4 = iVar5;
    }
  }
LAB_1478363f4:
  uStack_ac = local_54;
  iStack_a8 = *(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
              *(int *)&(this->SoundWavePlaybackTimes).field_0x34;
  uVar21 = *(uint *)&(this->SoundWavePlaybackTimes).field_0x28;
  uStack_b8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uVar19 = uVar21 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_104 = uVar21;
  local_d0 = local_d8;
  local_c0 = (undefined1 *)local_100;
  local_a0 = local_d8;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_100;
  if ((((int)uVar21 < 0) || (iVar5 < (int)uVar21)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  uVar6 = *(int *)((longlong)local_100 + 0x18);
  if (uVar21 != uVar6) {
    FVar22 = *(ForElementType<unsigned_int> *)((longlong)local_100 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_100 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar22 = local_100;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar16 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar6;
      local_104 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_147836506;
      uVar21 = *(uint *)((undefined1 *)((longlong)FVar22 + 4) + lVar16 * 4);
    }
    uVar3 = (ulonglong)(~(uVar21 - 1) & uVar21) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_dc = (int)lVar16;
    uVar21 = local_dc + -1 + uVar19;
    local_104 = uVar21;
    if ((int)uVar6 < (int)uVar21) {
      uVar21 = uVar6;
      local_104 = uVar6;
    }
  }
LAB_147836506:
  do {
    pTVar10 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_108 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
    }
    fVar24 = __real_3f800000;
    lVar16 = (longlong)TStack_98.CurrentBitIndex;
    if (((TStack_98.CurrentBitIndex == uVar21) &&
        ((ForElementType<unsigned_int>)TStack_98.Array == local_100)) && (pTVar10 == local_d8)) {
      if (1 < iVar15) {
        iVar5 = param_2->ArrayNum;
        pFVar18 = (param_2->AllocatorInstance).Data;
        pFVar2 = pFVar18 + (longlong)iVar5 * 0xc;
        while( true ) {
          if (param_2->ArrayNum != iVar5) {
            `TCheckedPointerIterator<FSoundWaveSpectralData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_105);
          }
          if (pFVar18 == pFVar2) break;
          *(float *)(pFVar18 + 8) = (fVar24 / (float)iVar15) * *(float *)(pFVar18 + 8);
          *(float *)(pFVar18 + 4) = (fVar24 / (float)iVar15) * *(float *)(pFVar18 + 4);
          pFVar18 = pFVar18 + 0xc;
        }
      }
      return bVar14;
    }
    lVar7 = *(longlong *)pTVar10;
    if ((0.0 < *(float *)(lVar7 + 0x10 + lVar16 * 0x28)) &&
       (0 < *(int *)(*(longlong *)(lVar7 + 8 + lVar16 * 0x28) + 0x330))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        atexit(`UAudioComponent::GetCookedFFTData'::__l16::
               _dynamic_atexit_destructor_for__CookedSpectralData__);
        _Init_thread_footer(&::_TSS2);
      }
      if (CookedSpectralData.ArrayMax < 0) {
        CookedSpectralData.ArrayNum = 0;
        if (CookedSpectralData.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&CookedSpectralData.AllocatorInstance,0,&CookedSpectralData.ArrayMax);
        }
      }
      else {
        CookedSpectralData.ArrayNum = 0;
      }
      this_00 = *(USoundWave **)(lVar7 + 8 + lVar16 * 0x28);
      bVar12 = (bool)(**(code **)(((this->Sound).field0_0x0.DebugPtr)->_padding_ + 0x310))();
      USoundWave::GetInterpolatedCookedFFTDataForTime
                (this_00,*(float *)(lVar7 + 0x10 + lVar16 * 0x28),
                 (uint *)(lVar7 + 0x18 + lVar16 * 0x28),&CookedSpectralData,bVar12);
      if (0 < CookedSpectralData.ArrayNum) {
        iVar5 = param_2->ArrayNum;
        pFVar18 = (param_2->AllocatorInstance).Data;
        pFVar2 = pFVar18 + (longlong)iVar5 * 0xc;
        iVar15 = CookedSpectralData.ArrayNum;
        while( true ) {
          if (param_2->ArrayNum != iVar5) {
            local_107 = 0;
            `TCheckedPointerIterator<FSoundWaveSpectralData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_107);
            iVar15 = CookedSpectralData.ArrayNum;
          }
          if (pFVar18 == pFVar2) break;
          if ((iVar15 < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar15 = CookedSpectralData.ArrayNum, bVar14)) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
          if (*(float *)CookedSpectralData.AllocatorInstance.Data < *(float *)pFVar18 ||
              *(float *)CookedSpectralData.AllocatorInstance.Data == *(float *)pFVar18) {
            uVar21 = 0;
            if ((int)(iVar15 - 1U) < iVar15) {
              uVar21 = ~(iVar15 - 1U) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar15 = CookedSpectralData.ArrayNum, bVar14)) {
              pcVar8 = (code *)swi(3);
              uVar13 = (*pcVar8)();
              return (bool)uVar13;
            }
            uVar21 = iVar15 - 1;
            if (*(float *)pFVar18 <=
                *(float *)(CookedSpectralData.AllocatorInstance.Data + (longlong)(int)uVar21 * 0xc)
                && *(float *)(CookedSpectralData.AllocatorInstance.Data +
                             (longlong)(int)uVar21 * 0xc) != *(float *)pFVar18) {
              uVar19 = 0;
              if ((int)uVar21 < 1) {
LAB_147836a16:
                pFVar18 = pFVar18 + 0xc;
              }
              else {
                lVar16 = 0;
                do {
                  uVar21 = 0;
                  if ((int)uVar19 < iVar15) {
                    uVar21 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), iVar15 = CookedSpectralData.ArrayNum, bVar14)) {
                    pcVar8 = (code *)swi(3);
                    uVar13 = (*pcVar8)();
                    return (bool)uVar13;
                  }
                  uVar19 = uVar19 + 1;
                  pFVar20 = CookedSpectralData.AllocatorInstance.Data + lVar16;
                  uVar21 = 0;
                  if ((int)uVar19 < iVar15) {
                    uVar21 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), iVar15 = CookedSpectralData.ArrayNum, bVar14)) {
                    pcVar8 = (code *)swi(3);
                    uVar13 = (*pcVar8)();
                    return (bool)uVar13;
                  }
                  FVar9.Data = CookedSpectralData.AllocatorInstance.Data;
                  fVar24 = *(float *)pFVar18;
                  fVar4 = *(float *)pFVar20;
                  if ((fVar4 <= fVar24) &&
                     (fVar24 < *(float *)(CookedSpectralData.AllocatorInstance.Data + lVar16 + 0xc))
                     ) {
                    fVar24 = (fVar24 - fVar4) /
                             (*(float *)(CookedSpectralData.AllocatorInstance.Data + lVar16 + 0xc) -
                             fVar4);
                    *(float *)(pFVar18 + 4) =
                         (*(float *)(CookedSpectralData.AllocatorInstance.Data + lVar16 + 0x10) -
                         *(float *)(pFVar20 + 4)) * fVar24 + *(float *)(pFVar20 + 4) +
                         *(float *)(pFVar18 + 4);
                    *(float *)(pFVar18 + 8) =
                         (*(float *)(FVar9.Data + lVar16 + 0x14) - *(float *)(pFVar20 + 8)) * fVar24
                         + *(float *)(pFVar20 + 8) + *(float *)(pFVar18 + 8);
                    iVar15 = CookedSpectralData.ArrayNum;
                    goto LAB_147836a16;
                  }
                  lVar16 = lVar16 + 0xc;
                } while ((int)uVar19 < iVar15 + -1);
                pFVar18 = pFVar18 + 0xc;
              }
            }
            else {
              uVar19 = 0;
              if ((int)uVar21 < iVar15) {
                uVar19 = ~uVar21 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , iVar15 = CookedSpectralData.ArrayNum, bVar14)) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              *(float *)(pFVar18 + 4) =
                   *(float *)(CookedSpectralData.AllocatorInstance.Data +
                             (longlong)(iVar15 + -1) * 0xc + 4) + *(float *)(pFVar18 + 4);
              uVar21 = 0;
              if ((int)(CookedSpectralData.ArrayNum - 1U) < CookedSpectralData.ArrayNum) {
                uVar21 = ~(CookedSpectralData.ArrayNum - 1U) >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              *(float *)(pFVar18 + 8) =
                   *(float *)(CookedSpectralData.AllocatorInstance.Data +
                             (longlong)(CookedSpectralData.ArrayNum + -1) * 0xc + 8) +
                   *(float *)(pFVar18 + 8);
              pFVar18 = pFVar18 + 0xc;
              iVar15 = CookedSpectralData.ArrayNum;
            }
          }
          else {
            if ((iVar15 < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              uVar13 = (*pcVar8)();
              return (bool)uVar13;
            }
            *(float *)(pFVar18 + 4) =
                 *(float *)(CookedSpectralData.AllocatorInstance.Data + 4) + *(float *)(pFVar18 + 4)
            ;
            if ((CookedSpectralData.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              uVar13 = (*pcVar8)();
              return (bool)uVar13;
            }
            *(float *)(pFVar18 + 8) =
                 *(float *)(CookedSpectralData.AllocatorInstance.Data + 8) + *(float *)(pFVar18 + 8)
            ;
            pFVar18 = pFVar18 + 0xc;
            iVar15 = CookedSpectralData.ArrayNum;
          }
        }
        bVar14 = true;
        local_f8 = local_f8 + 1;
        uVar21 = local_104;
        iVar15 = local_f8;
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// GetCookedFFTDataForAllPlayingSounds @ 147836b30

bool __thiscall
UAudioComponent::GetCookedFFTDataForAllPlayingSounds
          (UAudioComponent *this,
          TArray<FSoundWaveSpectralDataPerSound,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  FSoundWaveSpectralDataPerSound *pFVar4;
  longlong lVar5;
  UObject *pUVar6;
  USoundWave *this_00;
  TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *pTVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *pTVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> local_e8;
  undefined4 local_d8;
  UObject *local_d0;
  ForElementType<unsigned_int> local_c8;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *local_88;
  TMap<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  bVar13 = false;
  bVar11 = false;
  cVar10 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
  if ((cVar10 != '\0') &&
     (0 < *(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
          *(int *)&(this->SoundWavePlaybackTimes).field_0x34)) {
    pFVar4 = (FSoundWaveSpectralDataPerSound *)(param_1->AllocatorInstance).Data;
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < 0) {
      DestructItems<FSoundWaveSpectralDataPerSound,int>(pFVar4,param_1->ArrayNum);
      param_1->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_1->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FSoundWaveSpectralDataPerSound,int>(pFVar4,param_1->ArrayNum);
      param_1->ArrayNum = 0;
    }
    local_88 = &this->SoundWavePlaybackTimes;
    iStack_b8 = 0;
    uStack_b4 = 1;
    local_c8 = (ForElementType<unsigned_int>)&(this->SoundWavePlaybackTimes).field_0x10;
    iVar14 = *(int *)&(this->SoundWavePlaybackTimes).field_0x28;
    iStack_a4 = iStack_b8;
    local_a0 = iStack_b8;
    if (iVar14 != 0) {
      puVar21 = *(uint **)&(this->SoundWavePlaybackTimes).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)local_c8;
      }
      uVar22 = *puVar21;
      local_a0 = 0;
      iStack_b8 = 0;
      while (uVar22 == 0) {
        lVar16 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        iStack_a4 = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_147836c94;
        uVar22 = (puVar21 + 1)[lVar16];
      }
      uStack_b4 = -uVar22 & uVar22;
      uVar2 = (ulonglong)uStack_b4 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_90 = (int)lVar16;
      iStack_a4 = local_a0 + -1 + local_90;
      if (iVar14 < iStack_a4) {
        iStack_a4 = iVar14;
      }
    }
LAB_147836c94:
    local_b0 = &(this->SoundWavePlaybackTimes).field_0x10;
    local_res20 = *(uint *)&(this->SoundWavePlaybackTimes).field_0x28;
    local_c0 = &this->SoundWavePlaybackTimes;
    iStack_98 = *(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
                *(int *)&(this->SoundWavePlaybackTimes).field_0x34;
    uVar22 = local_res20 & 0xffffffe0;
    uStack_a8 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_a4;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
    iVar17 = (int)local_res20 >> 5;
    TStack_78._28_4_ = iStack_a4;
    TStack_78.BaseBitIndex = local_a0;
    uStack_58 = CONCAT44(uStack_94,iStack_98);
    bVar15 = (byte)local_res20;
    iStack_9c = iStack_a4;
    local_80 = local_c0;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
    if ((((int)local_res20 < 0) || (iVar14 < (int)local_res20)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    uVar3 = *(int *)((longlong)local_c8 + 0x18);
    bVar11 = bVar13;
    if (local_res20 != uVar3) {
      FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_c8 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_c8 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_c8;
      }
      uVar19 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar17 * 4);
      while (uVar19 == 0) {
        lVar16 = (longlong)iVar17;
        uVar22 = uVar22 + 0x20;
        iVar17 = iVar17 + 1;
        local_res20 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_147836dc0;
        uVar19 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar16 * 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_8c = (int)lVar16;
      local_res20 = local_8c + -1 + uVar22;
      if ((int)uVar3 < (int)local_res20) {
        local_res20 = uVar3;
      }
    }
LAB_147836dc0:
    while( true ) {
      pTVar9 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      lVar16 = (longlong)TStack_78.CurrentBitIndex;
      if (((TStack_78.CurrentBitIndex == local_res20) &&
          ((ForElementType<unsigned_int>)TStack_78.Array == local_c8)) && (pTVar9 == local_88))
      break;
      lVar5 = *(longlong *)pTVar9;
      if ((0.0 < *(float *)(lVar5 + 0x10 + lVar16 * 0x28)) &&
         (pUVar6 = *(UObject **)(lVar5 + 8 + lVar16 * 0x28), 0 < *(int *)&pUVar6[0x14].field_0x10))
      {
        local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.ArrayNum = 0;
        local_e8.ArrayMax = 0;
        local_d8 = 0;
        local_d0 = (UObject *)0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        local_d8 = *(undefined4 *)(lVar5 + 0x10 + lVar16 * 0x28);
        this_00 = *(USoundWave **)(lVar5 + 8 + lVar16 * 0x28);
        local_d0 = pUVar6;
        bVar13 = (bool)(**(code **)(((this->Sound).field0_0x0.DebugPtr)->_padding_ + 0x310))();
        USoundWave::GetInterpolatedCookedFFTDataForTime
                  (this_00,*(float *)(lVar5 + 0x10 + lVar16 * 0x28),
                   (uint *)(lVar5 + 0x18 + lVar16 * 0x28),&local_e8,bVar13);
        if (local_e8.ArrayNum != 0) {
          pTVar7 = (TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *)
                   (param_1->AllocatorInstance).Data;
          if (((pTVar7 <= &local_e8) && (&local_e8 < pTVar7 + (longlong)*piVar1 * 2)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          iVar14 = param_1->ArrayNum;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&param_1->AllocatorInstance,piVar1);
          }
          _Src.Data = local_e8.AllocatorInstance.Data;
          pFVar18 = (param_1->AllocatorInstance).Data + (longlong)iVar14 * 0x20;
          param_1->ArrayNum = iVar14 + 1;
          *(undefined8 *)&pFVar18->field_0x0 = 0;
          lVar16 = (longlong)local_e8.ArrayNum;
          *(int *)&pFVar18[8].field_0x0 = local_e8.ArrayNum;
          if (local_e8.ArrayNum == 0) {
            *(int *)(pFVar18 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,local_e8.ArrayNum,0,(ForAnyElementType *)pFVar18,local_e8.ArrayNum,
                       (int *)(pFVar18 + 0xc));
            memcpy(*(void **)&pFVar18->field_0x0,_Src.Data,lVar16 * 0xc);
          }
          *(undefined4 *)&pFVar18[0x10].field_0x0 = local_d8;
          *(UObject **)&pFVar18[0x18].field_0x0 = local_d0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_d0);
          }
          bVar11 = true;
        }
        if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.AllocatorInstance.Data);
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return bVar11;
}

// GetDetailedInfoInternal @ 147837100

FString * __thiscall
UAudioComponent::GetDetailedInfoInternal(UAudioComponent *this,FString *__return_storage_ptr__)

{
  USoundBase *this_00;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (this->Sound).field0_0x0.DebugPtr;
  if (this_00 == (USoundBase *)0x0) {
    ::FString::operator=(__return_storage_ptr__,L"No_Sound");
  }
  else {
    pFVar2 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0)
    ;
    if (__return_storage_ptr__ != pFVar2) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetDisableParameterUpdatesWhilePlaying @ 1478371b0

bool __thiscall UAudioComponent::GetDisableParameterUpdatesWhilePlaying(UAudioComponent *this)

{
  return (bool)((byte)this->field_0x279 >> 4 & 1);
}

// GetFNameForStatID @ 147839970

FName __thiscall UAudioComponent::GetFNameForStatID(UAudioComponent *this)

{
  USoundBase *pUVar1;
  undefined8 *puVar2;
  FName FVar3;
  FName in_RDX;
  undefined1 local_res8 [32];
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundBase *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x18))(pUVar1,local_res8);
    *(undefined8 *)in_RDX = *puVar2;
    return in_RDX;
  }
  FVar3 = UObjectBase::GetFNameForStatID((UObjectBase *)this);
  *(undefined8 *)in_RDX = *(undefined8 *)FVar3;
  return in_RDX;
}

// GetInstanceOwnerID @ 147839e20

ulong64 __thiscall UAudioComponent::GetInstanceOwnerID(UAudioComponent *this)

{
  return (this->ModulationRouting)._padding_;
}

// GetInstanceParameters @ 147839e30

TArray<FAudioParameter,TSizedDefaultAllocator<32>_> * __thiscall
UAudioComponent::GetInstanceParameters(UAudioComponent *this)

{
  return (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)&this->field_0x260;
}

// GetModulators @ 14783a810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *
__thiscall
UAudioComponent::GetModulators
          (UAudioComponent *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,EModulationDestination param_1)

{
  longlong *plVar1;
  uint *puVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  int iVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  int iVar27;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b4;
  undefined1 local_1b3 [3];
  ForElementType<unsigned_int> local_1b0;
  int local_1a8;
  int local_1a0;
  uint uStack_19c;
  ForElementType<unsigned_int> FStack_198;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  uint local_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_178;
  undefined4 local_170;
  uint uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  longlong *local_160;
  longlong *local_158;
  undefined8 uStack_150;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FSparseArrayAllocationInfo local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_128 = __return_storage_ptr__;
  lVar7 = (**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (lVar7 == 0) {
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
    (__return_storage_ptr__->Hash).InlineData[0] = '\0';
    (__return_storage_ptr__->Hash).InlineData[1] = '\0';
    (__return_storage_ptr__->Hash).InlineData[2] = '\0';
    (__return_storage_ptr__->Hash).InlineData[3] = '\0';
    (__return_storage_ptr__->Hash)._padding_ = 0;
    *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
    *(undefined8 *)&__return_storage_ptr__->Elements = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
    (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  }
  else {
    if (param_1 == Volume) {
      lVar7 = 0x960;
      lVar20 = 0x968;
      lVar19 = 0x970;
    }
    else if (param_1 == Pitch) {
      lVar7 = 0x9b8;
      lVar20 = 0x9c0;
      lVar19 = 0x9c8;
    }
    else if (param_1 == Lowpass) {
      lVar7 = 0xa68;
      lVar20 = 0xa70;
      lVar19 = 0xa78;
    }
    else {
      if (param_1 != Highpass) {
        `UAudioComponent::GetModulators'::__l8::<lambda_1>::operator()(&local_1b4);
        *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
        *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
        (__return_storage_ptr__->Hash).InlineData[0] = '\0';
        (__return_storage_ptr__->Hash).InlineData[1] = '\0';
        (__return_storage_ptr__->Hash).InlineData[2] = '\0';
        (__return_storage_ptr__->Hash).InlineData[3] = '\0';
        (__return_storage_ptr__->Hash)._padding_ = 0;
        *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
        *(undefined8 *)&__return_storage_ptr__->Elements = 0;
        *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
        *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
        *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
        *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
        (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
        return __return_storage_ptr__;
      }
      lVar7 = 0xa10;
      lVar20 = 0xa18;
      lVar19 = 0xa20;
    }
    plVar1 = (longlong *)(&this->field_0x0 + lVar7);
    local_160 = plVar1;
    if ((plVar1 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ModulatorSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\AudioComponent.cpp"
                           ,0x808,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                *)(*pcVar3)();
      return pTVar8;
    }
    puVar17 = (ulonglong *)0x0;
    local_6c = 0x80;
    local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar1 + 2);
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    uVar21 = 0;
    local_78 = (ForElementType<unsigned_int>)0x0;
    local_70 = 0;
    local_64 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    local_68 = -1;
    uVar12 = *(uint *)(plVar1 + 5);
    local_1b0._0_4_ = 1;
    uStack_140._4_4_ = uVar21;
    local_138._0_4_ = 0;
    if (uVar12 != 0) {
      pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)plVar1[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar1[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar26 = local_148;
      }
      uVar22 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
      puVar16 = puVar17;
      puVar24 = puVar17;
      local_138._0_4_ = 0;
      uVar21 = 0;
      while (uVar22 == 0) {
        iVar25 = (int)puVar16;
        local_138._0_4_ = (int)puVar24 + 0x20;
        puVar24 = (ulonglong *)(ulonglong)(uint)local_138;
        uVar21 = iVar25 + 1;
        puVar16 = (ulonglong *)(ulonglong)uVar21;
        uStack_140._4_4_ = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_14783aa54;
        uVar22 = *(uint *)((pTVar26->AllocatorInstance).InlineData + (longlong)iVar25 * 4 + 4);
      }
      local_1b0._0_4_ = -uVar22 & uVar22;
      uVar23 = (ulonglong)(uint)local_1b0._0_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_1a8 = (int)lVar7;
      uStack_140._4_4_ = ((uint)local_138 - 1) + local_1a8;
      if ((int)uVar12 < (int)uStack_140._4_4_) {
        uStack_140._4_4_ = uVar12;
      }
    }
LAB_14783aa54:
    iStack_130 = *(int *)(&this->field_0x0 + lVar20) - *(int *)((longlong)local_160 + 0x34);
    uVar22 = *(uint *)(local_160 + 5);
    iVar25 = (int)uVar22 >> 5;
    bVar11 = (byte)uVar22 & 0x1f;
    local_158 = local_160;
    uStack_19c = 1 << bVar11;
    uStack_150 = CONCAT44(local_1b0._0_4_,uVar21);
    local_1b0 = (ForElementType<unsigned_int>)((longlong)&this->field_0x0 + lVar19);
    uStack_140._0_4_ = 0xffffffff;
    uVar21 = -1 << bVar11;
    uVar18 = uVar22 & 0xffffffe0;
    local_138._4_4_ = local_9c;
    local_f8 = local_160;
    TStack_f0._padding_ = uStack_150;
    uStack_d0 = CONCAT44(uStack_12c,iStack_130);
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    TStack_f0.CurrentBitIndex = uStack_140._4_4_;
    TStack_f0.BaseBitIndex = (uint)local_138;
    TStack_f0._28_4_ = local_9c;
    local_1a0 = iVar25;
    FStack_198 = local_1b0;
    local_190 = uVar21;
    uStack_18c = uVar22;
    uStack_188 = uVar18;
    TStack_f0.Array = local_148;
    if (((int)uVar22 < 0) || (puVar16 = puVar17, (int)uVar12 < (int)uVar22)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                  *)(*pcVar3)();
        return pTVar8;
      }
      puVar16 = (ulonglong *)(ulonglong)local_64;
    }
    plVar1 = local_160;
    uVar12 = *(int *)((longlong)local_1b0 + 0x18);
    if (uVar22 != uVar12) {
      FVar13 = *(ForElementType<unsigned_int> *)((longlong)local_1b0 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_1b0 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_1b0;
      }
      uVar21 = uVar21 & *(uint *)((longlong)FVar13 + (longlong)iVar25 * 4);
      while (uVar21 == 0) {
        uStack_188 = uVar18 + 0x20;
        local_1a0 = iVar25 + 1;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1a0)
        goto LAB_14783abcc;
        uVar21 = *(uint *)((longlong)FVar13 + 4 + (longlong)iVar25 * 4);
        local_190 = 0xffffffff;
        iVar25 = local_1a0;
        uVar18 = uStack_188;
      }
      uStack_19c = -uVar21 & uVar21;
      uVar23 = (ulonglong)uStack_19c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_18c = (int)lVar7 + -1 + uVar18;
      if ((int)uVar12 < (int)uStack_18c) {
LAB_14783abcc:
        uStack_18c = uVar12;
      }
    }
    uStack_150 = CONCAT44(uStack_19c,local_1a0);
    uStack_140 = CONCAT44(uStack_18c,local_190);
    local_138 = CONCAT44(uStack_184,uStack_188);
    local_148 = (TBitArray<FDefaultBitArrayAllocator> *)FStack_198;
    while( true ) {
      plVar4 = local_f8;
      uVar12 = (uint)puVar16;
      if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
        `TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1b3);
        uVar12 = local_64;
      }
      __return_storage_ptr__ = local_128;
      if (((TStack_f0.CurrentBitIndex == uStack_140._4_4_) && (TStack_f0.Array == local_148)) &&
         (plVar4 == plVar1)) break;
      uVar23 = *(ulonglong *)(*plVar4 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
      if (uVar12 == 0) {
        iVar25 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                            (int *)(local_98 + 0xc));
        uVar12 = local_70;
        if (local_70 == 0) {
          iVar27 = 0;
LAB_14783acca:
          if ((int)local_6c < (int)(local_70 + 1)) {
            uVar21 = local_6c + 0x1f >> 5;
            uVar22 = local_70 + 0x20 >> 5;
            if (uVar22 < 5) {
              iVar6 = 4;
            }
            else {
              uVar10 = (ulonglong)uVar22;
              if (uVar21 < 5) {
                uVar21 = 0;
              }
              if (uVar21 == 0) {
                uVar15 = 4;
                if (4 < uVar10) {
                  uVar15 = uVar10;
                }
              }
              else {
                uVar15 = ((ulonglong)uVar22 * 3 >> 3) + 0x10 + uVar10;
              }
              uVar9 = FMemory::QuantizeSize(uVar15 * 4,0);
              iVar6 = (int)(uVar9 >> 2);
              if (iVar6 < (int)uVar22) {
                iVar6 = 0x7fffffff;
              }
            }
            local_6c = iVar6 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
          }
          local_70 = local_70 + 1;
          uVar22 = (int)local_70 >> 0x1f & 0x1f;
          uVar21 = local_70 + uVar22;
          iVar6 = (uVar21 & 0x1f) - uVar22;
          if (iVar6 != 0) {
            FVar13 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_78;
            }
            puVar2 = (uint *)((longlong)FVar13 + (longlong)((int)uVar21 >> 5) * 4);
            *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
          }
        }
        else {
          iVar27 = (int)(local_70 + ((int)local_70 >> 0x1f & 0x1fU)) >> 5;
          if (iVar27 != (int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5)
          goto LAB_14783acca;
          local_70 = local_70 + 1;
        }
        FVar13 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_78;
        }
        puVar2 = (uint *)((longlong)FVar13 + (longlong)iVar27 * 4);
        *puVar2 = *puVar2 & ~(1 << ((byte)uVar12 & 0x1f));
        iVar27 = local_68;
      }
      else {
        local_64 = uVar12 - 1;
        iVar27 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x10 + 4);
        iVar25 = local_68;
        if (local_64 != 0) {
          *(undefined4 *)(local_98._0_8_ + (longlong)iVar27 * 0x10) = 0xffffffff;
        }
      }
      local_68 = iVar27;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,local_c8,iVar25);
      puVar16 = puVar17;
      if (local_c8[0].Pointer != (ulonglong *)0x0) {
        *(ulonglong *)local_c8[0].Pointer = uVar23;
        *(undefined4 *)((longlong)local_c8[0].Pointer + 8) = 0xffffffff;
        puVar16 = local_c8[0].Pointer;
      }
      uVar23 = *puVar16;
      uVar12 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        for (iVar25 = *(int *)(FVar14.Data + (ulonglong)(local_50 - 1 & uVar12) * 4); iVar25 != -1;
            iVar25 = *(int *)(local_98._0_8_ + (longlong)iVar25 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar25 * 0x10) == uVar23) {
            if (iVar25 != -1) {
              *(ulonglong *)(local_98._0_8_ + (longlong)iVar25 * 0x10) = uVar23;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_98,local_c8[0].Index,1);
              goto LAB_14783b1b6;
            }
            break;
          }
        }
      }
      uVar22 = local_98._8_4_ - local_64;
      uVar21 = 1;
      if (3 < uVar22) {
        uVar23 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar21 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((int)uVar22 < 1) || ((int)uVar21 <= (int)local_50)) {
        uVar12 = local_50 - 1 & uVar12;
        *(uint *)((longlong)puVar16 + 0xc) = uVar12;
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(FVar14.Data + uVar23 * 4);
        *(int *)(FVar14.Data + uVar23 * 4) = local_c8[0].Index;
      }
      else {
        local_50 = uVar21;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar21 != 0) {
          uVar12 = uVar21;
          if (uVar21 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar12 = 0;
              goto LAB_14783afa8;
            }
          }
          else {
LAB_14783afa8:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar12,4);
          }
          if (0 < (int)uVar21) {
            uVar23 = (ulonglong)uVar21;
            puVar16 = puVar17;
            do {
              FVar14.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_58.Data;
              }
              uVar10 = (ulonglong)puVar16 & (longlong)(int)uVar21 - 1U;
              puVar16 = (ulonglong *)((longlong)puVar16 + 1);
              *(undefined4 *)(FVar14.Data + uVar10 * 4) = 0xffffffff;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          local_180 = 0;
          uStack_17c = 1;
          uStack_16c = 0;
          uStack_168 = 0;
          puVar16 = puVar17;
          if (local_70 != 0) {
            FVar13 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar13 = local_78;
            }
            uVar12 = *(uint *)FVar13;
            puVar24 = puVar17;
            while (uVar12 == 0) {
              uStack_168 = (int)puVar24 + 0x20;
              puVar24 = (ulonglong *)(ulonglong)uStack_168;
              iVar25 = (int)puVar16;
              local_180 = iVar25 + 1;
              puVar16 = (ulonglong *)(ulonglong)local_180;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_180) goto LAB_14783b0b0;
              uVar12 = ((uint *)((longlong)FVar13 + 4))[iVar25];
            }
            uStack_17c = -uVar12 & uVar12;
            uVar23 = (ulonglong)uStack_17c * 2 + 1;
            lVar7 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uStack_16c = (uStack_168 - 1) + (int)lVar7;
            puVar16 = (ulonglong *)(ulonglong)uStack_16c;
            if ((int)local_70 < (int)uStack_16c) {
LAB_14783b0b0:
              puVar16 = (ulonglong *)(ulonglong)local_70;
              uStack_16c = local_70;
            }
          }
          local_170 = 0xffffffff;
          local_120 = (longlong *)local_98;
          local_118._padding_ = CONCAT44(uStack_17c,local_180);
          local_118.CurrentBitIndex = uStack_16c;
          local_118.UnvisitedBitMask = 0xffffffff;
          local_118._28_4_ = uStack_164;
          local_118.BaseBitIndex = uStack_168;
          local_118.Array = pTStack_178;
          if ((int)puVar16 < (int)local_70) {
            do {
              puVar24 = (ulonglong *)((longlong)(int)puVar16 * 0x10 + *local_120);
              uVar12 = ((uint)(*puVar24 >> 0x14) & 0xffff ^ (uint)(*puVar24 >> 4)) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_50 - 1;
              *(uint *)((longlong)puVar24 + 0xc) = uVar12;
              FVar14.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar14.Data = local_58.Data;
              }
              uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
              *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(FVar14.Data + uVar23 * 4);
              *(int *)(FVar14.Data + uVar23 * 4) = (int)puVar16;
              local_118.UnvisitedBitMask = local_118.UnvisitedBitMask & ~local_118._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
              puVar16 = (ulonglong *)(ulonglong)(uint)local_118.CurrentBitIndex;
            } while (local_118.CurrentBitIndex < (local_118.Array)->NumBits);
          }
        }
      }
LAB_14783b1b6:
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      puVar16 = (ulonglong *)(ulonglong)local_64;
    }
    *(undefined8 *)&local_128->Elements = 0;
    *(undefined8 *)&(local_128->Elements).field_0x8 = 0;
    *(undefined8 *)&(local_128->Elements).field_0x20 = 0;
    *(undefined4 *)&(local_128->Elements).field_0x28 = 0;
    *(undefined4 *)&(local_128->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(local_128->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(local_128->Elements).field_0x34 = 0;
    (local_128->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_128->HashSize = 0;
    TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>::
    Move<TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_>
              (local_128,
               (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
                *)local_98);
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    iVar25 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar25 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = -1;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  return __return_storage_ptr__;
}

// GetPlayState @ 14783bbc0

EAudioComponentPlayState __thiscall UAudioComponent::GetPlayState(UAudioComponent *this)

{
  EAudioComponentPlayState EVar1;
  float fVar2;
  
  if ((this->field_0x9a & 0x10) == 0) {
    return Stopped;
  }
  if (this->bIsPaused != '\0') {
    return Paused;
  }
  if (this->bIsFadingOut != '\0') {
    return FadingOut;
  }
  fVar2 = GetAudioTimeSeconds(this);
  EVar1 = Playing;
  if (fVar2 - this->TimeAudioComponentPlayed < this->FadeInTimeDuration) {
    EVar1 = FadingIn;
  }
  return EVar1;
}

// GetPrivateStaticClass @ 14783c020

UClass * __cdecl UAudioComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioComponent",
               &Z_Registration_Info_UClass_UAudioComponent.InnerSingleton,
               StaticRegisterNativesUAudioComponent,0xd40,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioComponent>,
               InternalVTableHelperCtorCaller<UAudioComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioComponent.InnerSingleton;
}

// GetSound @ 14783ddb0

USoundBase * __thiscall UAudioComponent::GetSound(UAudioComponent *this)

{
  return *(USoundBase **)&this->field_0x248;
}

// HasCookedAmplitudeEnvelopeData @ 14783f660

bool __thiscall UAudioComponent::HasCookedAmplitudeEnvelopeData(UAudioComponent *this)

{
  USoundBase *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014783f66f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x350))();
    return (bool)uVar2;
  }
  return false;
}

// HasCookedFFTData @ 14783f680

bool __thiscall UAudioComponent::HasCookedFFTData(UAudioComponent *this)

{
  USoundBase *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014783f68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x348))();
    return (bool)uVar2;
  }
  return false;
}

// IsInAudibleRange @ 147840560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UAudioComponent::IsInAudibleRange(UAudioComponent *this,float *param_1)

{
  USoundAttenuation *pUVar1;
  USoundBase *pUVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FAudioDevice *this_00;
  FSoundAttenuationSettings *pFVar6;
  UWorld *pUVar7;
  float local_res8 [2];
  float local_res18 [4];
  TVector<double>_u_0 local_58 [2];
  
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (this_00 == (FAudioDevice *)0x0) {
    return false;
  }
  local_58[0]._0_4_ = *(undefined4 *)&this->field_0x210;
  local_58[0]._4_4_ = *(undefined4 *)&this->field_0x214;
  local_58[0]._8_4_ = *(undefined4 *)&this->field_0x218;
  local_58[0]._12_4_ = *(undefined4 *)&this->field_0x21c;
  local_58[0]._16_4_ = *(undefined4 *)&this->field_0x220;
  local_58[0]._20_4_ = *(undefined4 *)&this->field_0x224;
  local_res8[0] = 0.0;
  local_res18[0] = 0.0;
  if (this->bAllowSpatialization != '\0') {
    if (this->bOverrideAttenuation != '\0') {
      pFVar6 = &this->AttenuationOverrides;
      goto LAB_14784061b;
    }
    pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
    if (pUVar1 != (USoundAttenuation *)0x0) {
      pFVar6 = &pUVar1->Attenuation;
      goto LAB_14784061b;
    }
    pUVar2 = (this->Sound).field0_0x0.DebugPtr;
    if (pUVar2 != (USoundBase *)0x0) {
      pFVar6 = (FSoundAttenuationSettings *)(**(code **)(pUVar2->_padding_ + 0x2c8))();
      goto LAB_14784061b;
    }
  }
  pFVar6 = (FSoundAttenuationSettings *)0x0;
LAB_14784061b:
  pUVar7 = UActorComponent::GetWorld((UActorComponent *)this);
  FAudioDevice::GetMaxDistanceAndFocusFactor
            (this_00,(this->Sound).field0_0x0.DebugPtr,pUVar7,(TVector<double> *)&local_58[0]._s_0,
             pFVar6,local_res8,local_res18);
  fVar4 = local_res18[0];
  fVar3 = local_res8[0];
  if (param_1 != (float *)0x0) {
    *param_1 = local_res8[0];
  }
  pUVar7 = UActorComponent::GetWorld((UActorComponent *)this);
  bVar5 = FAudioDevice::SoundIsAudible
                    (this_00,(this->Sound).field0_0x0.DebugPtr,pUVar7,
                     (TVector<double> *)&local_58[0]._s_0,pFVar6,fVar3,fVar4);
  return bVar5;
}

// IsPlaying @ 147840940

bool __thiscall UAudioComponent::IsPlaying(UAudioComponent *this)

{
  return (bool)((byte)this[-1].OnAudioPlaybackPercentNative.field_0xa >> 4 & 1);
}

// IsReadyForOwnerToAutoDestroy @ 1478409a0

bool __thiscall UAudioComponent::IsReadyForOwnerToAutoDestroy(UAudioComponent *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
  return cVar1 == '\0';
}

// IsVirtualized @ 147840fd0

bool __thiscall UAudioComponent::IsVirtualized(UAudioComponent *this)

{
  return this->bIsVirtualized;
}

// OnRegister @ 1478473c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::OnRegister(UAudioComponent *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  USceneComponent *pUVar3;
  FName FVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  bool bVar8;
  UWorld *this_00;
  FScriptContainerElement *pFVar9;
  UObject *local_res8;
  
  if (((bool)this->bAutoManageAttachment) && ((this->field_0x9a & 0x10) == 0)) {
    if (*(longlong *)&this->field_0xd0 != 0) {
      bVar8 = FWeakObjectPtr::IsValid(&(this->AutoAttachParent).WeakPtr);
      if (!bVar8) {
        local_res8 = *(UObject **)&this->field_0xd0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res8);
        }
        FWeakObjectPtr::operator=(&(this->AutoAttachParent).WeakPtr,(FObjectPtr)&local_res8);
      }
      if (this->AutoAttachSocketName == (FName)0x0) {
        uVar7 = *(undefined4 *)&this->field_0xdc;
        (this->AutoAttachSocketName).ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&this->field_0xd8;
        (this->AutoAttachSocketName).Number = uVar7;
      }
      this_00 = UActorComponent::GetWorld((UActorComponent *)this);
      bVar8 = UWorld::IsGameWorld(this_00);
      if (bVar8) {
        pUVar3 = *(USceneComponent **)&this->field_0xd0;
        pFVar9 = (pUVar3->AttachChildren).AllocatorInstance.Data;
        pFVar1 = pFVar9 + (longlong)(pUVar3->AttachChildren).ArrayNum * 8;
        for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
          if (*(UAudioComponent **)pFVar9 == (UAudioComponent *)0x0) {
            bVar8 = this == (UAudioComponent *)0x0;
          }
          else {
            bVar8 = *(UAudioComponent **)pFVar9 == this;
          }
          if (bVar8) {
            if ((((this->field_0x9a & 8) == 0) ||
                (((this->AutoAttachLocationRule != KeepRelative &&
                  (this->AutoAttachRotationRule != KeepRelative)) &&
                 (this->AutoAttachScaleRule != KeepRelative)))) ||
               ((FVar4.ComparisonIndex.Value = *(uint *)&this->field_0xd8,
                FVar4.Number = *(uint *)&this->field_0xdc, this->AutoAttachSocketName != FVar4 ||
                (bVar8 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::
                         UEOpEquals<USceneComponent,bool>(&this->AutoAttachParent,pUVar3), !bVar8)))
               ) {
              local_res8 = (UObject *)((ulonglong)local_res8 & 0xffffffff00000000);
              (**(code **)(*(longlong *)this + 0x518))(this,&local_res8);
            }
            goto LAB_1478474bd;
          }
        }
        local_res8 = (UObject *)0x0;
        USceneComponent::SetupAttachment((USceneComponent *)this,(USceneComponent *)0x0,(FName)0x0);
      }
    }
LAB_1478474bd:
    dVar5 = *(double *)&this->field_0x150;
    dVar2 = *(double *)&this->field_0x158;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.X = *(double *)&this->field_0x148;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Y = dVar5;
    dVar5 = *(double *)&this->field_0x160;
    dVar6 = *(double *)&this->field_0x168;
    (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Z = dVar2;
    dVar2 = *(double *)&this->field_0x170;
    (this->SavedAutoAttachRelativeRotation).Pitch = dVar5;
    (this->SavedAutoAttachRelativeRotation).Yaw = dVar6;
    dVar5 = *(double *)&this->field_0x178;
    dVar6 = *(double *)&this->field_0x180;
    (this->SavedAutoAttachRelativeRotation).Roll = dVar2;
    dVar2 = *(double *)&this->field_0x188;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.X = dVar5;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Y = dVar6;
    (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z = dVar2;
  }
  USceneComponent::OnRegister((USceneComponent *)this);
  return;
}

// OnUnregister @ 147847c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::OnUnregister(UAudioComponent *this)

{
  USceneComponent::OnUnregister((USceneComponent *)this);
  if ((*(longlong *)&this->field_0xa8 != 0) && (this->bStopWhenOwnerDestroyed == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147847cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x668))(this);
  return;
}

// OnUpdateTransform @ 147847cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAudioComponent::OnUpdateTransform
          (UAudioComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  undefined8 uVar1;
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
  FAudioDevice *this_00;
  FName *pFVar13;
  FName local_res8;
  code *local_38 [5];
  undefined8 *local_10;
  
  USceneComponent::OnUpdateTransform((USceneComponent *)this,param_1,param_2);
  if (((this->bPreviewComponent == '\0') &&
      (this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
      this_00 != (FAudioDevice *)0x0)) && ((this->field_0x9a & 0x10) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioUpdateComponentTransform ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UAudioComponent::OnUpdateTransform(EUpdateTransformFlags,ETeleportType)_::_11_::FStat_STAT_AudioUpdateComponentTransform>
           )0x0) {
        pFVar13 = ::FName::FName(&local_res8,"STAT_AudioUpdateComponentTransform");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateComponentTransform,*pFVar13
                   ,L"FAudioThreadTask.UpdateAudioComponentTransform",
                   "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    uVar1 = *(undefined8 *)&this->field_0x1f0;
    uVar2 = *(undefined8 *)&this->field_0x1f8;
    uVar3 = *(undefined8 *)&this->field_0x200;
    uVar4 = *(undefined8 *)&this->field_0x208;
    uVar5 = *(undefined8 *)&this->field_0x210;
    uVar6 = *(undefined8 *)&this->field_0x218;
    uVar7 = *(undefined8 *)&this->field_0x220;
    uVar8 = *(undefined8 *)&this->field_0x228;
    uVar9 = *(undefined8 *)&this->field_0x230;
    uVar10 = *(undefined8 *)&this->field_0x238;
    uVar11 = *(undefined8 *)&this->field_0x240;
    uVar12 = *(undefined8 *)&this->field_0x248;
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x70,0x10);
    local_10[2] = uVar1;
    local_10[3] = uVar2;
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioComponent::OnUpdateTransform'::`11'::<lambda_1>,1,1>::
                 _vftable_;
    local_10[4] = uVar3;
    local_10[5] = uVar4;
    local_10[6] = uVar5;
    local_10[7] = uVar6;
    local_10[8] = uVar7;
    local_10[9] = uVar8;
    local_10[10] = uVar9;
    local_10[0xb] = uVar10;
    local_10[0xc] = uVar11;
    local_10[0xd] = uVar12;
    if (local_10 != (undefined8 *)0xfffffffffffffff0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioComponent::OnUpdateTransform'::__l11::<lambda_1>,void,FActiveSound_&>
                    ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// Play @ 147851d00

void __thiscall UAudioComponent::Play(UAudioComponent *this,float param_1)

{
  ForAnyElementType FVar1;
  PlayInternalRequestData local_78;
  
  local_78.QuantizedRequestData.ClockName.ComparisonIndex.Value = 0;
  local_78.QuantizedRequestData.ClockName.Number = 0;
  local_78.QuantizedRequestData.OtherClockName.ComparisonIndex.Value = 0;
  local_78.QuantizedRequestData.OtherClockName.Number = 0;
  local_78.QuantizedRequestData.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  local_78.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_78.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued = false;
  local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_78.QuantizedRequestData.GameThreadSubscribers.ArrayNum = 0;
  local_78.QuantizedRequestData.GameThreadSubscribers.ArrayMax = 0;
  local_78.FadeInDuration = 0.0;
  local_78.FadeVolumeLevel = 1.0;
  local_78.FadeCurve = Linear;
  local_78.QuantizedRequestData.QuantizationBoundary.Quantization = Tick;
  local_78.QuantizedRequestData.QuantizationBoundary.Multiplier = 1.0;
  local_78.QuantizedRequestData.QuantizationBoundary.CountingReferencePoint = BarRelative;
  local_78.QuantizedRequestData.QuantizationBoundary.bFireOnClockStart = true;
  local_78.QuantizedRequestData.QuantizationBoundary.bCancelCommandIfClockIsNotRunning = false;
  local_78.QuantizedRequestData.QuantizationBoundary.bResetClockOnQueued = false;
  local_78.QuantizedRequestData.GameThreadDelegateID = -1;
  local_78.StartTime = param_1;
  PlayInternal(this,&local_78,(USoundBase *)0x0);
  FVar1.Data = local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_78.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data,
             local_78.QuantizedRequestData.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)FVar1.Data != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
               AllocatorInstance.Data;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
             AllocatorInstance.Data,
             local_78.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)FVar1.Data != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.
             ReferenceController);
  return;
}

// PlayInternal @ 147851dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAudioComponent::PlayInternal
          (UAudioComponent *this,PlayInternalRequestData *param_1,USoundBase *param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  double dVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName FVar7;
  longlong lVar8;
  USoundBase *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  IQuartzQuantizedCommand *pIVar11;
  ISourceBufferListener *pIVar12;
  FPendingSourceBusSendInfo *pFVar13;
  FAudioParameter *pFVar14;
  AActor *pAVar15;
  code *pcVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  bool bVar23;
  uint uVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_AudioComp_Play> FVar27;
  UWorld *this_00;
  UWorld *pUVar28;
  FAudioDevice *pFVar29;
  UObject *pUVar30;
  FSoundAttenuationSettings *pFVar31;
  FGlobalFocusSettings *pFVar32;
  byte bVar33;
  byte bVar34;
  ulonglong uVar35;
  FName FVar36;
  longlong *plVar37;
  FSoundSubmixSendInfo *pFVar38;
  FScriptContainerElement *pFVar39;
  bool bVar40;
  FSoundSubmixSendInfo *pFVar41;
  FScriptContainerElement *pFVar42;
  FActiveSound *this_01;
  float fVar43;
  float fVar44;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  EAttachmentRule local_215;
  EAttachmentRule local_214;
  EAttachmentRule local_213;
  undefined1 local_212;
  TReferenceControllerBase<1> *local_210;
  float local_208;
  float local_204;
  FAudioDevice *local_200;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_1f8;
  FSoundAttenuationSettings *local_1e8;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_1e0;
  FColor_u_0 local_1d0;
  undefined4 local_1cc;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_1c8;
  USoundAttenuation *local_1b8;
  FActiveSound *local_1b0;
  longlong *local_1a8;
  ulonglong local_1a0;
  FName local_198;
  FName local_190;
  FName local_180;
  FName local_178;
  undefined1 local_170 [24];
  FString local_158;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 *local_130;
  longlong *local_128;
  TSharedRef<FActiveSound,1> local_120;
  FName local_110;
  FString local_108;
  FString local_f8;
  IQuartzQuantizedCommand *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  ISourceBufferListener *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TVector<double>_u_0 local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80 [2];
  
  pFVar31 = (FSoundAttenuationSettings *)0x0;
  FVar27 = StatPtr_STAT_AudioComp_Play;
  if (StatPtr_STAT_AudioComp_Play == (FThreadSafeStaticStat<FStat_STAT_AudioComp_Play>)0x0) {
    pFVar26 = ::FName::FName(&local_110,"STAT_AudioComp_Play");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_AudioComp_Play>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioComp_Play,*pFVar26,
                        L"AudioComponent Play","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)FVar27;
  bVar20 = false;
  bVar19 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar40 = false;
  bVar21 = false;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_147851f4c:
    bVar20 = bVar40;
    bVar19 = bVar21;
    bVar21 = false;
    FVar36 = local_190;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d0._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar20 = false;
      bVar19 = true;
      bVar40 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_198.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\AudioComponent.cpp"
                   ,0x27f);
        bVar20 = true;
        bVar19 = true;
        bVar40 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147851f4c;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar21 = true;
  }
  this_00 = UActorComponent::GetWorld((UActorComponent *)this);
  pUVar28 = UActorComponent::GetWorld((UActorComponent *)this);
  if (pUVar28 == (UWorld *)0x0) {
    if (WorldlessGetAudioTimeBehaviorCVar == 0) {
      fVar44 = 0.0;
    }
    else {
      fVar44 = (float)(double)FApp::CurrentTime;
    }
  }
  else {
    fVar44 = (float)pUVar28->AudioTimeSeconds;
  }
  if (((param_2 == (USoundBase *)0x0) &&
      (param_2 = (this->Sound).field0_0x0.DebugPtr, param_2 == (USoundBase *)0x0)) ||
     ((byte)LogAudio._0_1_ < 6)) {
LAB_147852084:
    this->bIsFadingOut = '\0';
    if (param_2 != (USoundBase *)0x0) goto LAB_147852090;
LAB_1478520a5:
    bVar40 = false;
  }
  else {
    (**(code **)(param_2->_padding_ + 0x310))(param_2);
    local_178 = (FName)param_2->_padding_;
    ::FName::ToString(&local_178,(FString *)(local_170 + 8));
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_108,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if ((FSoundWavePlaybackTimeData *)local_170._8_8_ == (FSoundWavePlaybackTimeData *)0x0)
    goto LAB_147852084;
    FMemory::Free((void *)local_170._8_8_);
    this->bIsFadingOut = '\0';
LAB_147852090:
    cVar22 = (**(code **)(param_2->_padding_ + 0x310))(param_2);
    if (cVar22 == '\0') goto LAB_1478520a5;
    bVar40 = true;
  }
  if (((this->field_0x9a & 0x10) != 0) && ((this->bCanPlayMultipleInstances == '\0' || (bVar40)))) {
    this->bAutoDestroy = '\0';
    (**(code **)(*(longlong *)this + 0x668))(this);
    this->field_0x4c8 = (this->bAutoDestroy ^ this->bAutoDestroy) & 1 ^ this->field_0x4c8;
  }
  if (param_2 == (USoundBase *)0x0) {
    if (5 < (byte)LogAudio._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_f8,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_147853047;
  }
  if (((this_00 != (UWorld *)0x0) && (this_00->bAllowAudioPlayback == '\0')) ||
     (pFVar29 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
     local_200 = pFVar29, pFVar29 == (FAudioDevice *)0x0)) goto LAB_147853047;
  this->TimeAudioComponentPlayed = fVar44;
  this->FadeInTimeDuration = param_1->FadeInDuration;
  this->bDidAutoAttach = '\0';
  if ((((bool)this->bAutoManageAttachment) && (this_00 != (UWorld *)0x0)) &&
     (bVar23 = UWorld::IsGameWorld(this_00), bVar23)) {
    pUVar30 = FWeakObjectPtr::Get(&(this->AutoAttachParent).WeakPtr);
    if (pUVar30 == (UObject *)0x0) {
      CancelAutoAttachment(this,true,this_00);
      pFVar29 = local_200;
    }
    else {
      pUVar6 = *(UObject **)&this->field_0xd0;
      if (((pUVar6 != (UObject *)0x0) && (pUVar6 == pUVar30)) &&
         (FVar7.ComparisonIndex.Value = *(uint *)&this->field_0xd8,
         FVar7.Number = *(uint *)&this->field_0xdc, FVar7 == this->AutoAttachSocketName)) {
        plVar37 = *(longlong **)&pUVar6[5].field_0x20;
        plVar2 = plVar37 + *(int *)(pUVar6 + 6);
        for (; plVar37 != plVar2; plVar37 = plVar37 + 1) {
          if ((UAudioComponent *)*plVar37 == (UAudioComponent *)0x0) {
            bVar23 = this == (UAudioComponent *)0x0;
          }
          else {
            bVar23 = (UAudioComponent *)*plVar37 == this;
          }
          if (bVar23) goto LAB_147852334;
        }
      }
      this->field_0x4cb = (this->bDidAutoAttach ^ this->bDidAutoAttach) & 1 ^ this->field_0x4cb;
      CancelAutoAttachment(this,true,this_00);
      local_215 = this->AutoAttachLocationRule;
      dVar17 = *(double *)&this->field_0x150;
      FVar7 = this->AutoAttachSocketName;
      dVar4 = *(double *)&this->field_0x158;
      (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.X = *(double *)&this->field_0x148;
      (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Y = dVar17;
      local_214 = this->AutoAttachRotationRule;
      dVar17 = *(double *)&this->field_0x168;
      local_213 = this->AutoAttachScaleRule;
      (this->SavedAutoAttachRelativeRotation).Pitch = *(double *)&this->field_0x160;
      (this->SavedAutoAttachRelativeRotation).Yaw = dVar17;
      dVar17 = *(double *)&this->field_0x178;
      dVar18 = *(double *)&this->field_0x180;
      lVar8 = *(longlong *)this;
      (this->SavedAutoAttachRelativeLocation).field0_0x0._s_0.Z = dVar4;
      (this->SavedAutoAttachRelativeRotation).Roll = *(double *)&this->field_0x170;
      dVar4 = *(double *)&this->field_0x188;
      (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.X = dVar17;
      (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Y = dVar18;
      local_212 = 0;
      (this->SavedAutoAttachRelativeScale3D).field0_0x0._s_0.Z = dVar4;
      (**(code **)(lVar8 + 0x508))(this,pUVar30,&local_215,FVar7);
LAB_147852334:
      this->bDidAutoAttach = '\x01';
      pFVar29 = local_200;
    }
  }
  if (this->bAllowSpatialization != '\0') {
    pFVar31 = GetAttenuationSettingsToApply(this);
  }
  fVar44 = __real_3f800000;
  local_c8._s_0.X = (double)*(undefined8 *)&this->field_0x210;
  local_c8._s_0.Y = (double)*(undefined8 *)&this->field_0x218;
  local_c8._s_0.Z = (double)*(undefined8 *)&this->field_0x220;
  local_204 = 0.0;
  local_208 = 1.0;
  local_1e8 = pFVar31;
  FAudioDevice::GetMaxDistanceAndFocusFactor
            (pFVar29,param_2,this_00,(TVector<double> *)&local_c8._s_0,pFVar31,&local_204,&local_208
            );
  local_210 = ::operator_new(0x9a0);
  if (local_210 == (TReferenceControllerBase<1> *)0x0) {
    local_210 = (TReferenceControllerBase<1> *)0x0;
    this_01 = (FActiveSound *)&DAT_00000010;
    local_1b0 = (FActiveSound *)&DAT_00000010;
  }
  else {
    local_210->SharedReferenceCount = (atomic<int>)0x1;
    local_210->WeakReferenceCount = (atomic<int>)0x1;
    local_210->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFActiveSound___00_SharedPointerInternals__6B_;
    FActiveSound::FActiveSound((FActiveSound *)(local_210 + 1));
    this_01 = (FActiveSound *)(local_210 + 1);
    local_1b0 = this_01;
    if ((this_01 == (FActiveSound *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  FActiveSound::SetAudioComponent(this_01,this);
  FActiveSound::SetWorld(this_01,this_00);
  FActiveSound::SetSound(this_01,param_2);
  FActiveSound::SetSourceEffectChain(this_01,(this->SourceEffectChain).field0_0x0.DebugPtr);
  FActiveSound::SetSoundClass(this_01,(this->SoundClassOverride).field0_0x0.DebugPtr);
  local_1b8 = (this->AttenuationSettings).field0_0x0.DebugPtr;
  if (local_1b8 == (USoundAttenuation *)0x0) {
    pUVar9 = (this->Sound).field0_0x0.DebugPtr;
    if (pUVar9 == (USoundBase *)0x0) {
      local_1b8 = (USoundAttenuation *)0x0;
    }
    else {
      local_1b8 = (pUVar9->AttenuationSettings).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1b8 != (USoundAttenuation *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1b8);
      }
    }
  }
  else if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_1b8);
  }
  FActiveSound::SetAttenuationSettingsAsset(this_01,(TObjectPtr<USoundAttenuation>)&local_1b8);
  FActiveSound::SetAttenuationSettingsOverride(this_01,this->bOverrideAttenuation);
  TSet<TObjectPtr<USoundConcurrency>,DefaultKeyFuncs<TObjectPtr<USoundConcurrency>,0>,FDefaultSetAllocator>
  ::operator=(&this_01->ConcurrencySet,&this->ConcurrencySet);
  fVar43 = this->VolumeModulationMax;
  fVar3 = this->VolumeModulationMin;
  uVar24 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar24;
  FActiveSound::SetVolume
            (this_01,((fVar3 - fVar43) * ((float)(uVar24 >> 9 | 0x3f800000) - fVar44) + fVar43) *
                     this->VolumeMultiplier);
  if (this->bOverridePriority == '\0') {
    fVar43 = param_2->Priority;
  }
  else {
    fVar43 = this->Priority;
  }
  this_01->Priority = fVar43;
  fVar43 = this->PitchModulationMax;
  fVar3 = this->PitchModulationMin;
  uVar24 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar24;
  FActiveSound::SetPitch
            (this_01,((fVar3 - fVar43) * ((float)(uVar24 >> 9 | 0x3f800000) - fVar44) + fVar43) *
                     this->PitchMultiplier);
  bVar34 = this->bEnableLowPassFilter;
  bVar33 = bVar34 | this_01->field_0x1a4 & 0xfe;
  this_01->bEnableLowPassFilter = bVar34;
  this_01->LowPassFilterFrequency = this->LowPassFilterFrequency;
  this_01->field_0x1a4 = (this->field_0x4c9 * '\x02' ^ bVar33) & 2 ^ bVar33;
  this_01->HighPassFilterFrequency = this->HighPassFilterFrequency;
  this_01->OcclusionCheckInterval = this->OcclusionCheckInterval;
  fVar44 = param_1->StartTime;
  if (fVar44 <= 0.0) {
    fVar44 = 0.0;
  }
  this_01->RequestedStartTime = fVar44;
  if (this->bOverrideSubtitlePriority == '\0') {
    fVar44 = (float)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
  }
  else {
    fVar44 = this->SubtitlePriority;
  }
  this_01->SubtitlePriority = fVar44;
  this_01->field_0x1a1 =
       (this->field_0x4c8 << 2 ^ this_01->field_0x1a1) & 0x10 ^ this_01->field_0x1a1;
  if (this->bSuppressSubtitles == '\0') {
LAB_1478526b8:
    bVar34 = 8;
  }
  else {
    bVar23 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnQueueSubtitles);
    bVar34 = 0;
    if (bVar23) goto LAB_1478526b8;
  }
  pFVar31 = local_1e8;
  this_01->bHandleSubtitles = '\0';
  this_01->field_0x1a2 = this_01->field_0x1a2 | bVar34;
  bVar33 = (this_01->field_0x1a2 ^ this->field_0x4c9) & 0x40 ^ this_01->field_0x1a2;
  this_01->field_0x1a2 = bVar33;
  bVar34 = (this->bIsUISound ^ this_01->bIsUISound) & 1 ^ this_01->field_0x1a3;
  this_01->field_0x1a3 = bVar34;
  bVar34 = (this->field_0x4ca * '\x02' ^ bVar34) & 2 ^ bVar34;
  this_01->field_0x1a3 = bVar34;
  bVar33 = (this->field_0x4c9 ^ bVar33) & 0x7f ^ this->field_0x4c9;
  this_01->field_0x1a2 = bVar33;
  bVar34 = (this->field_0x4ca * '\x02' ^ bVar34) & 4 ^ bVar34;
  this_01->field_0x1a3 = bVar34;
  bVar34 = (this->field_0x4ca * '\x02' ^ bVar34) & 8 ^ bVar34;
  this_01->field_0x1a3 = bVar34;
  this_01->field_0x1a3 = (this->field_0x4ca * '\x02' ^ bVar34) & 0x10 ^ bVar34;
  bVar33 = (~this->field_0x4c9 ^ bVar33) & 0x20 ^ bVar33;
  this_01->field_0x1a2 = bVar33;
  bVar34 = (this->field_0x4ca << 2 ^ this_01->field_0x1a1) & 0x40 ^ this_01->field_0x1a1;
  this_01->field_0x1a1 = bVar34;
  if ((bVar33 & 0x20) != 0) {
    dVar4 = *(double *)&this->field_0x1f8;
    (this_01->Transform).Rotation.XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
    (this_01->Transform).Rotation.XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)&this->field_0x208;
    (this_01->Transform).Rotation.ZW.m128d_f64[0] = *(double *)&this->field_0x200;
    (this_01->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
    dVar4 = *(double *)&this->field_0x218;
    (this_01->Transform).Translation.XY.m128d_f64[0] = *(double *)&this->field_0x210;
    (this_01->Transform).Translation.XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)&this->field_0x228;
    (this_01->Transform).Translation.ZW.m128d_f64[0] = *(double *)&this->field_0x220;
    (this_01->Transform).Translation.ZW.m128d_f64[1] = dVar4;
    dVar4 = *(double *)&this->field_0x238;
    (this_01->Transform).Scale3D.XY.m128d_f64[0] = *(double *)&this->field_0x230;
    (this_01->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)&this->field_0x248;
    (this_01->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)&this->field_0x240;
    (this_01->Transform).Scale3D.ZW.m128d_f64[1] = dVar4;
  }
  this_01->field_0x1a1 =
       ((byte)this->field_0x4c8 >> 1 & 4 ^ bVar34 & 0xfb) & 0xf7 |
       -(local_1e8 != (FSoundAttenuationSettings *)0x0) & 8U;
  if (local_1e8 != (FSoundAttenuationSettings *)0x0) {
    FSoundAttenuationSettings::operator=(&this_01->AttenuationSettings,local_1e8);
    fVar44 = local_208;
    pFVar32 = FAudioDevice::GetGlobalFocusSettings(local_200);
    fVar44 = FSoundAttenuationSettings::GetFocusPriorityScale(pFVar31,pFVar32,fVar44);
    (this_01->FocusData).PriorityScale = fVar44;
  }
  iVar25 = 0;
  if (0 < this->EnvelopeFollowerAttackTime) {
    iVar25 = this->EnvelopeFollowerAttackTime;
  }
  this_01->EnvelopeFollowerAttackTime = iVar25;
  iVar25 = 0;
  if (0 < this->EnvelopeFollowerReleaseTime) {
    iVar25 = this->EnvelopeFollowerReleaseTime;
  }
  this_01->EnvelopeFollowerReleaseTime = iVar25;
  bVar23 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                     ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                      &this->OnAudioPlaybackPercentNative);
  if (bVar23) {
LAB_1478528ed:
    bVar34 = 4;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnAudioPlaybackPercent,&local_b0);
    iVar25 = *(int *)&(this->OnAudioPlaybackPercent).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
    if (0 < iVar25) goto LAB_1478528ed;
    bVar34 = 0;
  }
  this_01->bUpdatePlayPercentage = bVar34 >> 2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnAudioSingleEnvelopeValue,&local_98);
  iVar25 = *(int *)&(this->OnAudioSingleEnvelopeValue).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  if ((0 < iVar25) ||
     (bVar23 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                          &this->OnAudioSingleEnvelopeValueNative), bVar23)) {
    bVar34 = 8;
  }
  else {
    bVar34 = 0;
  }
  this_01->bUpdateSingleEnvelopeValue = bVar34 >> 3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnAudioMultiEnvelopeValue,local_80);
  iVar25 = *(int *)&(this->OnAudioMultiEnvelopeValue).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_80);
  if ((0 < iVar25) ||
     (bVar23 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                          &this->OnAudioMultiEnvelopeValueNative), bVar23)) {
    bVar34 = 0x10;
  }
  else {
    bVar34 = 0;
  }
  this_01->bUpdateMultiEnvelopeValue = bVar34 >> 4;
  *(int *)&(this_01->ModulationRouting)._padding_ = (int)(this->ModulationRouting)._padding_;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this_01->ModulationRouting)._padding_,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_);
  *(int *)&(this_01->ModulationRouting)._padding_ = (int)(this->ModulationRouting)._padding_;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this_01->ModulationRouting)._padding_,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_);
  *(int *)&(this_01->ModulationRouting)._padding_ = (int)(this->ModulationRouting)._padding_;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this_01->ModulationRouting)._padding_,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_);
  *(int *)&(this_01->ModulationRouting)._padding_ = (int)(this->ModulationRouting)._padding_;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this_01->ModulationRouting)._padding_,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&(this->ModulationRouting)._padding_);
  (this_01->ModulationRouting).VolumeRouting = (this->ModulationRouting).VolumeRouting;
  (this_01->ModulationRouting).PitchRouting = (this->ModulationRouting).PitchRouting;
  (this_01->ModulationRouting).HighpassRouting = (this->ModulationRouting).HighpassRouting;
  (this_01->ModulationRouting).LowpassRouting = (this->ModulationRouting).LowpassRouting;
  if (local_200->bIsBakedAnalysisEnabled != '\0') {
    pUVar9 = (this->Sound).field0_0x0.DebugPtr;
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    cVar22 = (**(code **)(pUVar9->_padding_ + 0x340))(pUVar9,&local_1a8);
    this_01->field_0x1a4 = (cVar22 << 5 ^ this_01->field_0x1a4) & 0x20U ^ this_01->field_0x1a4;
    local_1e8 = (FSoundAttenuationSettings *)&this->SoundWavePlaybackTimes;
    TSet<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>,FDefaultSetAllocator>
             *)local_1e8);
    pFVar31 = local_1e8;
    iVar25 = (int)local_1a0;
    uVar35 = (ulonglong)(int)local_1a0;
    plVar2 = local_1a8 + uVar35;
    plVar37 = local_1a8;
    while( true ) {
      if ((int)uVar35 != iVar25) {
        local_218 = 0;
        `TCheckedPointerIterator<USoundWave_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_218);
      }
      if (plVar37 == plVar2) break;
      local_148 = *plVar37;
      local_140 = 0;
      local_13c = 0xffffffffffffffff;
      local_1cc = *(undefined4 *)(local_148 + 0xc);
      local_130 = &local_1cc;
      local_128 = &local_148;
      TSet<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&&,UAudioComponent::FSoundWavePlaybackTimeData_&&>_>
                ((TSet<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>,TDefaultMapHashableKeyFuncs<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData,0>,FDefaultSetAllocator>
                  *)pFVar31,
                 (TPairInitializer<unsigned_int_&&,UAudioComponent::FSoundWavePlaybackTimeData_&&> *
                 )local_170,(bool *)&local_130);
      uVar35 = local_1a0 & 0xffffffff;
      plVar37 = plVar37 + 1;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
  }
  (this_01->QuantizedRequestData).ClockName = (param_1->QuantizedRequestData).ClockName;
  (this_01->QuantizedRequestData).OtherClockName = (param_1->QuantizedRequestData).OtherClockName;
  pTVar10 = (param_1->QuantizedRequestData).QuantizedCommandPtr.SharedReferenceCount.
            ReferenceController;
  pIVar11 = (param_1->QuantizedRequestData).QuantizedCommandPtr.Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = (this_01->QuantizedRequestData).QuantizedCommandPtr.Object;
  pTStack_e0 = (this_01->QuantizedRequestData).QuantizedCommandPtr.SharedReferenceCount.
               ReferenceController;
  (this_01->QuantizedRequestData).QuantizedCommandPtr.Object = pIVar11;
  (this_01->QuantizedRequestData).QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
  (this_01->QuantizedRequestData).QuantizationBoundary.Quantization =
       (param_1->QuantizedRequestData).QuantizationBoundary.Quantization;
  (this_01->QuantizedRequestData).QuantizationBoundary.Multiplier =
       (param_1->QuantizedRequestData).QuantizationBoundary.Multiplier;
  (this_01->QuantizedRequestData).QuantizationBoundary.CountingReferencePoint =
       (param_1->QuantizedRequestData).QuantizationBoundary.CountingReferencePoint;
  (this_01->QuantizedRequestData).QuantizationBoundary.bFireOnClockStart =
       (param_1->QuantizedRequestData).QuantizationBoundary.bFireOnClockStart;
  (this_01->QuantizedRequestData).QuantizationBoundary.bCancelCommandIfClockIsNotRunning =
       (param_1->QuantizedRequestData).QuantizationBoundary.bCancelCommandIfClockIsNotRunning;
  (this_01->QuantizedRequestData).QuantizationBoundary.bResetClockOnQueued =
       (param_1->QuantizedRequestData).QuantizationBoundary.bResetClockOnQueued;
  (this_01->QuantizedRequestData).QuantizationBoundary.bResumeClockOnQueued =
       (param_1->QuantizedRequestData).QuantizationBoundary.bResumeClockOnQueued;
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::operator=
            (&(this_01->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers,
             &(param_1->QuantizedRequestData).QuantizationBoundary.GameThreadSubscribers);
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::operator=
            (&(this_01->QuantizedRequestData).GameThreadSubscribers,
             &(param_1->QuantizedRequestData).GameThreadSubscribers);
  (this_01->QuantizedRequestData).GameThreadDelegateID =
       (param_1->QuantizedRequestData).GameThreadDelegateID;
  pTVar10 = (this->SourceBufferListener).SharedReferenceCount.ReferenceController;
  bVar23 = this->bShouldSourceBufferListenerZeroBuffer;
  pIVar12 = (this->SourceBufferListener).Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8 = (local_1b0->SourceBufferListener).Object;
  pTStack_d0 = (local_1b0->SourceBufferListener).SharedReferenceCount.ReferenceController;
  (local_1b0->SourceBufferListener).Object = pIVar12;
  (local_1b0->SourceBufferListener).SharedReferenceCount.ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  this_01->bShouldSourceBufferListenerZeroBuffer = bVar23;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  this_01->MaxDistance = local_204;
  iVar25 = (this->PendingSubmixSends).ArrayNum;
  pFVar38 = (FSoundSubmixSendInfo *)(this->PendingSubmixSends).AllocatorInstance.Data;
  pFVar41 = pFVar38 + iVar25;
  while( true ) {
    if ((this->PendingSubmixSends).ArrayNum != iVar25) {
      local_217 = 0;
      `TCheckedPointerIterator<FSoundSubmixSendInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_217);
    }
    if (pFVar38 == pFVar41) break;
    FActiveSound::SetSubmixSend(this_01,pFVar38);
    pFVar38 = pFVar38 + 1;
  }
  piVar1 = &(this->PendingSubmixSends).ArrayMax;
  pFVar38 = (FSoundSubmixSendInfo *)(this->PendingSubmixSends).AllocatorInstance.Data;
  iVar25 = (this->PendingSubmixSends).ArrayNum;
  if ((this->PendingSubmixSends).ArrayMax < 0) {
    DestructItems<FSoundSubmixSendInfo,int>(pFVar38,iVar25);
    (this->PendingSubmixSends).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,0,&(this->PendingSubmixSends).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSoundSubmixSendInfo,int>(pFVar38,iVar25);
    (this->PendingSubmixSends).ArrayNum = 0;
  }
  iVar25 = (this->PendingBusSends).ArrayNum;
  pFVar39 = (this->PendingBusSends).AllocatorInstance.Data;
  pFVar42 = pFVar39 + (longlong)iVar25 * 0xc0;
  while( true ) {
    if ((this->PendingBusSends).ArrayNum != iVar25) {
      local_216 = 0;
      `TCheckedPointerIterator<UAudioComponent::FPendingSourceBusSendInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_216);
    }
    if (pFVar39 == pFVar42) break;
    FActiveSound::SetSourceBusSend
              (this_01,(EBusSendType)*pFVar39,(FSoundSourceBusSendInfo *)(pFVar39 + 8));
    pFVar39 = pFVar39 + 0xc0;
  }
  piVar1 = &(this->PendingBusSends).ArrayMax;
  pFVar13 = (FPendingSourceBusSendInfo *)(this->PendingBusSends).AllocatorInstance.Data;
  iVar25 = (this->PendingBusSends).ArrayNum;
  if ((this->PendingBusSends).ArrayMax < 0) {
    DestructItems<UAudioComponent::FPendingSourceBusSendInfo,int>(pFVar13,iVar25);
    (this->PendingBusSends).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,8,0,&(this->PendingBusSends).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UAudioComponent::FPendingSourceBusSendInfo,int>(pFVar13,iVar25);
    (this->PendingBusSends).ArrayNum = 0;
  }
  Audio::FVolumeFader::SetVolume(&this_01->ComponentVolumeFader,0.0);
  Audio::FVolumeFader::StartFade
            (&this_01->ComponentVolumeFader,param_1->FadeVolumeLevel,param_1->FadeInDuration,
             param_1->FadeCurve);
  this->ActiveCount = this->ActiveCount + 1;
  if (bVar40) {
    if ((this->bCanPlayMultipleInstances != '\0') && (2 < (byte)LogAudio._0_1_)) {
      local_180 = (FName)param_2->_padding_;
      ::FName::ToString(&local_180,&local_158);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    bVar40 = false;
  }
  else {
    bVar40 = this->bCanPlayMultipleInstances;
  }
  pFVar29 = local_200;
  FAudioDevice::SetCanHaveMultipleActiveSounds(local_200,this->AudioComponentID,bVar40);
  iVar25 = (this->DefaultParameters).ArrayNum;
  pFVar14 = (FAudioParameter *)(this->DefaultParameters).AllocatorInstance.Data;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = iVar25;
  if (iVar25 == 0) {
    local_1f8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar25,0,&local_1f8.AllocatorInstance,iVar25,&local_1f8.ArrayMax);
    ConstructItems<FAudioParameter,FAudioParameter,int>
              (local_1f8.AllocatorInstance.Data,pFVar14,iVar25);
  }
  pAVar15 = *(AActor **)&this->field_0xa8;
  if (pAVar15 != (AActor *)0x0) {
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.ArrayNum = 0;
    local_1c8.ArrayMax = 0;
    UActorSoundParameterInterface::Fill(pAVar15,&local_1c8);
    FAudioParameter::Merge(&local_1c8,&local_1f8);
    FActiveSound::SetOwner(this_01,pAVar15);
    DestructItems<FAudioParameter,int>
              ((FAudioParameter *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
    if ((FAudioParameter *)local_1c8.AllocatorInstance.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
  }
  iVar25 = (this->InstanceParameters).ArrayNum;
  pFVar14 = (FAudioParameter *)(this->InstanceParameters).AllocatorInstance.Data;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = iVar25;
  if (iVar25 == 0) {
    local_1e0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar25,0,&local_1e0.AllocatorInstance,iVar25,&local_1e0.ArrayMax);
    ConstructItems<FAudioParameter,FAudioParameter,int>
              (local_1e0.AllocatorInstance.Data,pFVar14,iVar25);
  }
  FAudioParameter::Merge(&local_1e0,&local_1f8);
  pTVar10 = local_210;
  local_120.SharedReferenceCount.ReferenceController = local_210;
  if (local_210 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_210->SharedReferenceCount = (atomic<int>)((int)local_210->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_120.Object = this_01;
  FAudioDevice::AddNewActiveSound
            (pFVar29,&local_120,&local_1f8,&Audio::Trace::EventLog::ID::PlayRequestAudioComponent);
  this->LastSoundPlayOrder = this_01->PlayOrder;
  bVar34 = 0;
  if (0 < this->ActiveCount) {
    bVar34 = 0x10;
  }
  this->field_0x9a = bVar34 | this->field_0x9a & 0xef;
  BroadcastPlayState(this);
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
  if ((FAudioParameter *)local_1e0.AllocatorInstance.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum);
  if ((FAudioParameter *)local_1f8.AllocatorInstance.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_147853047:
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar36,CycleScopeEnd);
  }
  return;
}

// PlayQuantized @ 1478530d0

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
UAudioComponent::PlayQuantized
          (UAudioComponent *this,UObject *param_1,UQuartzClockHandle **param_2,
          FQuartzQuantizationBoundary *param_3,FOnQuartzCommandEventBP *param_4,float param_5,
          float param_6,float param_7,EAudioFaderCurve param_8)

{
  int *piVar1;
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *this_00;
  TArray<UAudioComponent::FAudioComponentPendingQuartzCommandData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UWorld *pUVar11;
  FQuartzGameThreadSubscriber *pFVar12;
  longlong lVar13;
  FScriptContainerElement FVar14;
  FScriptContainerElement *pFVar15;
  UQuartzClockHandle *local_res8;
  FScriptContainerElement local_248 [4];
  float local_244;
  undefined4 local_240;
  FScriptContainerElement local_23c;
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> local_238;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_228;
  undefined8 local_220;
  undefined8 local_218;
  float local_210;
  float local_20c;
  float local_208;
  FScriptContainerElement local_204;
  uint local_200;
  FWeakObjectPtr local_1fc;
  FScriptContainerElement local_1f4;
  FAudioComponentCommandInfo local_1e8;
  double local_178;
  char local_170;
  TTuple<EQuartzCommandQuantization,double> local_168;
  char local_158;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *local_150;
  TReferenceControllerBase<1> *local_148;
  undefined1 local_140;
  undefined1 local_13f;
  int local_13c;
  FScriptContainerElement local_138;
  float local_134;
  EQuarztQuantizationReference local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  FScriptContainerElement local_12c;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  uint local_118;
  FReadAccessScope local_110;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  FQuartzClockTickRate local_c8;
  FQuartzGameThreadSubscriber local_78;
  
  this_00 = &local_1e8.AnticipatoryBoundary.GameThreadSubscribers;
  if (bAlwaysTakeVoiceSlotCVar == 0) {
    bVar8 = FQuartzSubscriptionToken::IsSubscribed((FQuartzSubscriptionToken *)&this->field_0x480);
    if (!bVar8) {
      if (param_1 == (UObject *)0x0) {
        pUVar11 = UActorComponent::GetWorld((UActorComponent *)this);
      }
      else {
        pUVar11 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      }
      FQuartzTickableObject::Init((FQuartzTickableObject *)&this->field_0x258,pUVar11);
      bVar8 = FQuartzSubscriptionToken::IsSubscribed((FQuartzSubscriptionToken *)&this->field_0x480)
      ;
      if (!bVar8) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("FQuartzTickableObject::IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\AudioComponent.cpp"
                           ,0x1eb,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  iVar9 = (**(code **)(*(longlong *)CVarTimeToTakeUpVoiceSlot._8_8_ + 200))();
  local_1e8.AnticipatoryBoundary.Multiplier = __real_3f800000;
  iVar10 = 0x11;
  if (iVar9 < 0x11) {
    iVar10 = iVar9;
  }
  FVar14 = (FScriptContainerElement)0x0;
  if (0 < iVar10) {
    FVar14 = SUB41(iVar10,0);
  }
  pFVar12 = FQuartzTickableObject::GetQuartzSubscriber
                      ((FQuartzTickableObject *)&this->field_0x258,&local_78);
  local_1e8.Subscriber.Offset.OffsetInMilliseconds.bIsSet =
       (pFVar12->Offset).OffsetInMilliseconds.bIsSet;
  if (local_1e8.Subscriber.Offset.OffsetInMilliseconds.bIsSet != false) {
    local_1e8.Subscriber.Offset.OffsetInMilliseconds.TypedValue =
         (pFVar12->Offset).OffsetInMilliseconds.TypedValue;
  }
  local_1e8.Subscriber.Offset.OffsetAsDuration.bIsSet = (pFVar12->Offset).OffsetAsDuration.bIsSet;
  if (local_1e8.Subscriber.Offset.OffsetAsDuration.bIsSet != false) {
    local_1e8.Subscriber.Offset.OffsetAsDuration.TypedValue._0_8_ =
         *(undefined8 *)&(pFVar12->Offset).OffsetAsDuration.TypedValue;
    local_1e8.Subscriber.Offset.OffsetAsDuration.TypedValue._8_8_ =
         *(undefined8 *)&(pFVar12->Offset).OffsetAsDuration.TypedValue.field_0x8;
  }
  local_1e8.Subscriber.Queue.Object = (pFVar12->Queue).Object;
  local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController =
       (pFVar12->Queue).SharedReferenceCount.ReferenceController;
  if (local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e8.Subscriber.bOffsetConvertedToFrames = pFVar12->bOffsetConvertedToFrames;
  local_1e8.Subscriber.bHasBeenNotifiedOfAboutToStart = pFVar12->bHasBeenNotifiedOfAboutToStart;
  local_1e8.Subscriber.OffsetInAudioFrames = pFVar12->OffsetInAudioFrames;
  local_1e8.CommandID =
       `public:___cdecl_FAudioComponentCommandInfo::FAudioComponentCommandInfo(Audio::FQuartzGameThreadSubscriber,FQuartzQuantizationBoundary)___ptr64'
       ::__l2::CommandIDs;
  `public:___cdecl_FAudioComponentCommandInfo::FAudioComponentCommandInfo(Audio::FQuartzGameThreadSubscriber,FQuartzQuantizationBoundary)___ptr64'
  ::__l2::CommandIDs =
       `public:___cdecl_FAudioComponentCommandInfo::FAudioComponentCommandInfo(Audio::FQuartzGameThreadSubscriber,FQuartzQuantizationBoundary)___ptr64'
       ::__l2::CommandIDs + 1;
  local_1e8.AnticipatoryBoundary.CountingReferencePoint = CurrentTimeRelative;
  local_1e8.AnticipatoryBoundary.bFireOnClockStart = true;
  local_1e8.AnticipatoryBoundary.bCancelCommandIfClockIsNotRunning = false;
  local_1e8.AnticipatoryBoundary.bResetClockOnQueued = false;
  local_1e8.AnticipatoryBoundary.bResumeClockOnQueued = false;
  local_1e8.AnticipatoryBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1e8.AnticipatoryBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_1e8.AnticipatoryBoundary.GameThreadSubscribers.ArrayMax = 0;
  local_1e8.AnticipatoryBoundary.Quantization = (EQuartzCommandQuantization)FVar14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar12->Queue).SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>((FQuartzGameThreadSubscriber *)0x0,0);
  local_244 = 1.0;
  local_240._0_1_ = (FScriptContainerElement)0x2;
  local_240._1_1_ = (FScriptContainerElement)0x1;
  local_240._2_1_ = (FScriptContainerElement)0x0;
  local_240._3_1_ = (FScriptContainerElement)0x0;
  local_23c = (FScriptContainerElement)0x0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  local_228.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_248[0] = FVar14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_110);
  local_220 = *(undefined8 *)&param_4->field_0x8;
  local_218 = *(undefined8 *)&param_4->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_110);
  local_res8 = *param_2;
  local_204 = (FScriptContainerElement)param_8;
  local_200 = local_1e8.CommandID;
  local_210 = param_5;
  local_20c = param_6;
  local_208 = param_7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UQuartzClockHandle *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  local_1fc.ObjectIndex = 0;
  local_1fc.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UQuartzClockHandle *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&local_1fc,(FObjectPtr)&local_res8);
  local_1f4 = (FScriptContainerElement)0x0;
  if (*param_2 != (UQuartzClockHandle *)0x0) {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_c8);
    UQuartzClockHandle::GetCurrentTickRate(*param_2,param_1,&local_c8);
    dVar5 = Audio::FQuartzClockTickRate::GetFramesPerDuration
                      (&local_c8,(EQuartzCommandQuantization)FVar14);
    dVar6 = Audio::FQuartzClockTickRate::GetFramesPerDuration(&local_c8,param_3->Quantization);
    if ((bAlwaysTakeVoiceSlotCVar != 0) || ((double)param_3->Multiplier * dVar6 <= dVar5)) {
      UQuartzClockHandle::IsClockRunning(*param_2,param_1);
    }
    else {
      bVar8 = UQuartzClockHandle::IsClockRunning(*param_2,param_1);
      if ((bVar8) && (param_3->bResetClockOnQueued == false)) {
        pTVar2 = &this->PendingQuartzCommandData;
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar3 <= local_248) &&
           (local_248 < pFVar3 + (longlong)(this->PendingQuartzCommandData).ArrayMax * 0x58)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar10 = (this->PendingQuartzCommandData).ArrayNum;
        piVar1 = &(this->PendingQuartzCommandData).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar13 = (longlong)iVar10 * 0x58;
        (this->PendingQuartzCommandData).ArrayNum = iVar10 + 1;
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        pFVar3[lVar13] = local_248[0];
        pFVar15 = pFVar3 + lVar13 + 0x10;
        *(float *)(pFVar3 + lVar13 + 4) = local_244;
        pFVar3[lVar13 + 8] = local_240._0_1_;
        pFVar3[lVar13 + 9] = local_240._1_1_;
        pFVar3[lVar13 + 10] = local_240._2_1_;
        pFVar3[lVar13 + 0xb] = local_240._3_1_;
        pFVar3[lVar13 + 0xc] = local_23c;
        *(undefined8 *)pFVar15 = 0;
        iVar10 = local_238.ArrayNum;
        local_res8 = (UQuartzClockHandle *)local_238.AllocatorInstance.Data;
        *(int *)(pFVar15 + 8) = local_238.ArrayNum;
        if (local_238.ArrayNum == 0) {
          *(int *)(pFVar15 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,local_238.ArrayNum,0,(ForAnyElementType *)pFVar15,local_238.ArrayNum,
                     (int *)(pFVar15 + 0xc));
          ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                    (*(void **)pFVar15,(FQuartzGameThreadSubscriber *)local_res8,iVar10);
        }
        *(undefined8 *)(pFVar3 + lVar13 + 0x20) = 0;
        *(undefined8 *)(pFVar3 + lVar13 + 0x28) = 0;
        *(undefined8 *)(pFVar3 + lVar13 + 0x30) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_228,&local_f8);
        *(undefined8 *)(pFVar3 + lVar13 + 0x28) = local_220;
        *(undefined8 *)(pFVar3 + lVar13 + 0x30) = local_218;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_f8);
        *(float *)(pFVar3 + lVar13 + 0x38) = local_210;
        *(float *)(pFVar3 + lVar13 + 0x3c) = local_20c;
        *(float *)(pFVar3 + lVar13 + 0x40) = local_208;
        pFVar3[lVar13 + 0x44] = local_204;
        *(uint *)(pFVar3 + lVar13 + 0x48) = local_200;
        *(FWeakObjectPtr *)(pFVar3 + lVar13 + 0x4c) = local_1fc;
        pFVar3[lVar13 + 0x54] = local_1f4;
        UQuartzClockHandle::QueueQuantizedSound(*param_2,param_1,param_2,&local_1e8,param_4,param_3)
        ;
        goto LAB_147853922;
      }
    }
    local_1e8.AnticipatoryBoundary.Quantization = param_3->Quantization;
    local_1e8.AnticipatoryBoundary.Multiplier = param_3->Multiplier;
    local_1e8.AnticipatoryBoundary.CountingReferencePoint = param_3->CountingReferencePoint;
    local_1e8.AnticipatoryBoundary.bFireOnClockStart = param_3->bFireOnClockStart;
    local_1e8.AnticipatoryBoundary.bCancelCommandIfClockIsNotRunning =
         param_3->bCancelCommandIfClockIsNotRunning;
    local_1e8.AnticipatoryBoundary.bResetClockOnQueued = param_3->bResetClockOnQueued;
    local_1e8.AnticipatoryBoundary.bResumeClockOnQueued = param_3->bResumeClockOnQueued;
    TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::operator=
              (this_00,&param_3->GameThreadSubscribers);
    local_248[0] = (FScriptContainerElement)local_1e8.AnticipatoryBoundary.Quantization;
    local_240._0_1_ = (FScriptContainerElement)local_1e8.AnticipatoryBoundary.CountingReferencePoint
    ;
    local_240._1_1_ = (FScriptContainerElement)local_1e8.AnticipatoryBoundary.bFireOnClockStart;
    local_240._2_1_ =
         (FScriptContainerElement)local_1e8.AnticipatoryBoundary.bCancelCommandIfClockIsNotRunning;
    local_240._3_1_ = (FScriptContainerElement)local_1e8.AnticipatoryBoundary.bResetClockOnQueued;
    local_23c = (FScriptContainerElement)local_1e8.AnticipatoryBoundary.bResumeClockOnQueued;
    local_244 = local_1e8.AnticipatoryBoundary.Multiplier;
    TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::operator=
              (&local_238,this_00);
    pTVar2 = &this->PendingQuartzCommandData;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= local_248) &&
       (local_248 < pFVar3 + (longlong)(this->PendingQuartzCommandData).ArrayMax * 0x58)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = (this->PendingQuartzCommandData).ArrayNum;
    piVar1 = &(this->PendingQuartzCommandData).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x858,&pTVar2->AllocatorInstance,piVar1);
    }
    FVar7.Data = local_238.AllocatorInstance.Data;
    lVar13 = (longlong)iVar10 * 0x58;
    (this->PendingQuartzCommandData).ArrayNum = iVar10 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pFVar3[lVar13] = local_248[0];
    pFVar15 = pFVar3 + lVar13 + 0x10;
    *(float *)(pFVar3 + lVar13 + 4) = local_244;
    pFVar3[lVar13 + 8] = local_240._0_1_;
    pFVar3[lVar13 + 9] = local_240._1_1_;
    pFVar3[lVar13 + 10] = local_240._2_1_;
    pFVar3[lVar13 + 0xb] = local_240._3_1_;
    pFVar3[lVar13 + 0xc] = local_23c;
    *(undefined8 *)pFVar15 = 0;
    iVar10 = local_238.ArrayNum;
    *(int *)(pFVar15 + 8) = local_238.ArrayNum;
    if (local_238.ArrayNum == 0) {
      *(int *)(pFVar15 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,local_238.ArrayNum,0,(ForAnyElementType *)pFVar15,local_238.ArrayNum,
                 (int *)(pFVar15 + 0xc));
      ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                (*(void **)pFVar15,(FQuartzGameThreadSubscriber *)FVar7.Data,iVar10);
    }
    *(undefined8 *)(pFVar3 + lVar13 + 0x20) = 0;
    *(undefined8 *)(pFVar3 + lVar13 + 0x28) = 0;
    *(undefined8 *)(pFVar3 + lVar13 + 0x30) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_228,&local_e0)
    ;
    *(undefined8 *)(pFVar3 + lVar13 + 0x28) = local_220;
    *(undefined8 *)(pFVar3 + lVar13 + 0x30) = local_218;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e0);
    FVar7.Data = local_1e8.AnticipatoryBoundary.GameThreadSubscribers.AllocatorInstance.Data;
    *(float *)(pFVar3 + lVar13 + 0x38) = local_210;
    *(float *)(pFVar3 + lVar13 + 0x3c) = local_20c;
    *(float *)(pFVar3 + lVar13 + 0x40) = local_208;
    pFVar3[lVar13 + 0x44] = local_204;
    *(uint *)(pFVar3 + lVar13 + 0x48) = local_200;
    *(FWeakObjectPtr *)(pFVar3 + lVar13 + 0x4c) = local_1fc;
    pFVar3[lVar13 + 0x54] = local_1f4;
    pcVar4 = *(code **)(*(longlong *)this + 0x660);
    local_170 = local_1e8.Subscriber.Offset.OffsetInMilliseconds.bIsSet;
    if (local_1e8.Subscriber.Offset.OffsetInMilliseconds.bIsSet != false) {
      local_178 = local_1e8.Subscriber.Offset.OffsetInMilliseconds.TypedValue;
    }
    local_158 = local_1e8.Subscriber.Offset.OffsetAsDuration.bIsSet;
    if (local_1e8.Subscriber.Offset.OffsetAsDuration.bIsSet != false) {
      local_168._0_8_ = local_1e8.Subscriber.Offset.OffsetAsDuration.TypedValue._0_8_;
      local_168._8_8_ = local_1e8.Subscriber.Offset.OffsetAsDuration.TypedValue._8_8_;
    }
    local_150 = local_1e8.Subscriber.Queue.Object;
    local_148 = local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController;
    if (local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar10 = local_1e8.AnticipatoryBoundary.GameThreadSubscribers.ArrayNum;
    local_140 = local_1e8.Subscriber.bOffsetConvertedToFrames;
    local_13f = local_1e8.Subscriber.bHasBeenNotifiedOfAboutToStart;
    local_13c = local_1e8.Subscriber.OffsetInAudioFrames;
    local_138 = (FScriptContainerElement)local_1e8.AnticipatoryBoundary.Quantization;
    local_130 = local_1e8.AnticipatoryBoundary.CountingReferencePoint;
    local_12f = local_1e8.AnticipatoryBoundary.bFireOnClockStart;
    local_12e = local_1e8.AnticipatoryBoundary.bCancelCommandIfClockIsNotRunning;
    local_12d = local_1e8.AnticipatoryBoundary.bResetClockOnQueued;
    local_12c = (FScriptContainerElement)local_1e8.AnticipatoryBoundary.bResumeClockOnQueued;
    local_134 = local_1e8.AnticipatoryBoundary.Multiplier;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = local_1e8.AnticipatoryBoundary.GameThreadSubscribers.ArrayNum;
    if (local_1e8.AnticipatoryBoundary.GameThreadSubscribers.ArrayNum == 0) {
      local_11c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,local_1e8.AnticipatoryBoundary.GameThreadSubscribers.ArrayNum,0,&local_128,
                 local_1e8.AnticipatoryBoundary.GameThreadSubscribers.ArrayNum,&local_11c);
      ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                (local_128.Data,(FQuartzGameThreadSubscriber *)FVar7.Data,iVar10);
    }
    local_118 = local_1e8.CommandID;
    (*pcVar4)(this,param_1,&local_178);
  }
LAB_147853922:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_228.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
  if ((UQuartzClockHandle *)local_238.AllocatorInstance.Data != (UQuartzClockHandle *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_1e8.AnticipatoryBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_1e8.AnticipatoryBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_1e8.AnticipatoryBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_1e8.AnticipatoryBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.Subscriber.Queue.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>((FQuartzGameThreadSubscriber *)0x0,0);
  return;
}

// PlayQueuedQuantizedInternal @ 1478539b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioComponent::PlayQueuedQuantizedInternal
          (UAudioComponent *this,UObject *param_1,FAudioComponentCommandInfo *param_2)

{
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar1;
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  TArray<UAudioComponent::FAudioComponentPendingQuartzCommandData,TSizedDefaultAllocator<32>_>
  *this_00;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UQuartzClockHandle *pUVar10;
  FQuartzQuantizedRequestData *pFVar11;
  FQuartzGameThreadSubscriber *pFVar12;
  uint uVar13;
  longlong lVar14;
  FQuartzQuantizationBoundary *pFVar15;
  PlayInternalRequestData local_1b8;
  FName local_148;
  FName local_140;
  TArray<UAudioComponent::FAudioComponentPendingQuartzCommandData,TSizedDefaultAllocator<32>_>
  *local_138;
  FName local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FQuartzQuantizedRequestData local_d8;
  FQuartzGameThreadSubscriber local_80;
  
  uVar13 = (this->PendingQuartzCommandData).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    local_138 = &this->PendingQuartzCommandData;
    lVar14 = (longlong)(int)uVar13 * 0x58;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (this->PendingQuartzCommandData).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
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
      pFVar15 = (FQuartzQuantizationBoundary *)
                ((this->PendingQuartzCommandData).AllocatorInstance.Data + lVar14);
      uVar8._0_1_ = pFVar15[2].CountingReferencePoint;
      uVar8._1_1_ = pFVar15[2].bFireOnClockStart;
      uVar8._2_1_ = pFVar15[2].bCancelCommandIfClockIsNotRunning;
      uVar8._3_1_ = pFVar15[2].bResetClockOnQueued;
      if (uVar8 == param_2->CommandID) {
        pUVar10 = (UQuartzClockHandle *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)&pFVar15[2].bResumeClockOnQueued);
        local_1b8.StartTime = (float)pFVar15[1].GameThreadSubscribers.ArrayNum;
        local_1b8.FadeInDuration = (float)pFVar15[1].GameThreadSubscribers.ArrayMax;
        local_1b8.FadeVolumeLevel = *(float *)(pFVar15 + 2);
        local_1b8.FadeCurve = *(EAudioFaderCurve *)&pFVar15[2].Multiplier;
        local_1b8.QuantizedRequestData.ClockName.ComparisonIndex.Value = 0;
        local_1b8.QuantizedRequestData.ClockName.Number = 0;
        local_1b8.QuantizedRequestData.OtherClockName.ComparisonIndex.Value = 0;
        local_1b8.QuantizedRequestData.OtherClockName.Number = 0;
        local_1b8.QuantizedRequestData.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
        local_1b8.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.ReferenceController
             = (TReferenceControllerBase<1> *)0x0;
        local_1b8.QuantizedRequestData.QuantizationBoundary.Quantization = Tick;
        local_1b8.QuantizedRequestData.QuantizationBoundary.Multiplier = 1.0;
        local_1b8.QuantizedRequestData.QuantizationBoundary.CountingReferencePoint = BarRelative;
        local_1b8.QuantizedRequestData.QuantizationBoundary.bFireOnClockStart = true;
        local_1b8.QuantizedRequestData.QuantizationBoundary.bCancelCommandIfClockIsNotRunning =
             false;
        local_1b8.QuantizedRequestData.QuantizationBoundary.bResetClockOnQueued = false;
        local_1b8.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued = false;
        local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.
        Data = (FScriptContainerElement *)0x0;
        local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
        local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
        local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayNum = 0;
        local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayMax = 0;
        local_1b8.QuantizedRequestData.GameThreadDelegateID = -1;
        if ((this->Sound).field0_0x0.DebugPtr == (USoundBase *)0x0) {
          if (2 < (byte)LogAudioQuartz._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
          }
        }
        else {
          if (pUVar10 == (UQuartzClockHandle *)0x0) {
            if (2 < (byte)LogAudioQuartz._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
            }
LAB_147853e00:
            bVar7 = false;
          }
          else {
            pFVar11 = UQuartzSubsystem::CreateRequestDataForSchedulePlaySound
                                (&local_d8,pUVar10,(FOnQuartzCommandEventBP *)(pFVar15 + 1),pFVar15)
            ;
            local_1b8.QuantizedRequestData.ClockName = pFVar11->ClockName;
            pTVar1 = &pFVar11->QuantizedCommandPtr;
            local_1b8.QuantizedRequestData.OtherClockName = pFVar11->OtherClockName;
            if (&local_1b8.QuantizedRequestData.QuantizedCommandPtr != pTVar1) {
              local_1b8.QuantizedRequestData.QuantizedCommandPtr.Object = pTVar1->Object;
              pTVar1->Object = (IQuartzQuantizedCommand *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_1b8.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount,
                         &(pFVar11->QuantizedCommandPtr).SharedReferenceCount);
            }
            local_1b8.QuantizedRequestData.QuantizationBoundary.Quantization =
                 (pFVar11->QuantizationBoundary).Quantization;
            pTVar2 = &(pFVar11->QuantizationBoundary).GameThreadSubscribers;
            local_1b8.QuantizedRequestData.QuantizationBoundary.Multiplier =
                 (pFVar11->QuantizationBoundary).Multiplier;
            local_1b8.QuantizedRequestData.QuantizationBoundary.CountingReferencePoint =
                 (pFVar11->QuantizationBoundary).CountingReferencePoint;
            local_1b8.QuantizedRequestData.QuantizationBoundary.bFireOnClockStart =
                 (pFVar11->QuantizationBoundary).bFireOnClockStart;
            local_1b8.QuantizedRequestData.QuantizationBoundary.bCancelCommandIfClockIsNotRunning =
                 (pFVar11->QuantizationBoundary).bCancelCommandIfClockIsNotRunning;
            local_1b8.QuantizedRequestData.QuantizationBoundary.bResetClockOnQueued =
                 (pFVar11->QuantizationBoundary).bResetClockOnQueued;
            local_1b8.QuantizedRequestData.QuantizationBoundary.bResumeClockOnQueued =
                 (pFVar11->QuantizationBoundary).bResumeClockOnQueued;
            if (&local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers != pTVar2
               ) {
              DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                        ((FQuartzGameThreadSubscriber *)
                         local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                         AllocatorInstance.Data,
                         local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                         ArrayNum);
              if ((FQuartzGameThreadSubscriber *)
                  local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                  AllocatorInstance.Data != (FQuartzGameThreadSubscriber *)0x0) {
                FMemory::Free(local_1b8.QuantizedRequestData.QuantizationBoundary.
                              GameThreadSubscribers.AllocatorInstance.Data);
              }
              local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
              AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
              (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayNum =
                   (pFVar11->QuantizationBoundary).GameThreadSubscribers.ArrayNum;
              local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.ArrayMax =
                   (pFVar11->QuantizationBoundary).GameThreadSubscribers.ArrayMax;
              (pFVar11->QuantizationBoundary).GameThreadSubscribers.ArrayNum = 0;
              (pFVar11->QuantizationBoundary).GameThreadSubscribers.ArrayMax = 0;
            }
            pTVar2 = &pFVar11->GameThreadSubscribers;
            if (&local_1b8.QuantizedRequestData.GameThreadSubscribers != pTVar2) {
              DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                        ((FQuartzGameThreadSubscriber *)
                         local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data
                         ,local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayNum);
              if ((FQuartzGameThreadSubscriber *)
                  local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data !=
                  (FQuartzGameThreadSubscriber *)0x0) {
                FMemory::Free(local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance
                              .Data);
              }
              local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data =
                   (pTVar2->AllocatorInstance).Data;
              (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayNum =
                   (pFVar11->GameThreadSubscribers).ArrayNum;
              local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayMax =
                   (pFVar11->GameThreadSubscribers).ArrayMax;
              (pFVar11->GameThreadSubscribers).ArrayNum = 0;
              (pFVar11->GameThreadSubscribers).ArrayMax = 0;
            }
            local_1b8.QuantizedRequestData.GameThreadDelegateID = pFVar11->GameThreadDelegateID;
            DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                      ((FQuartzGameThreadSubscriber *)
                       local_d8.GameThreadSubscribers.AllocatorInstance.Data,
                       local_d8.GameThreadSubscribers.ArrayNum);
            if ((FQuartzGameThreadSubscriber *)local_d8.GameThreadSubscribers.AllocatorInstance.Data
                != (FQuartzGameThreadSubscriber *)0x0) {
              FMemory::Free(local_d8.GameThreadSubscribers.AllocatorInstance.Data);
            }
            DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                      ((FQuartzGameThreadSubscriber *)
                       local_d8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
                       local_d8.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
            if ((FQuartzGameThreadSubscriber *)
                local_d8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
                (FQuartzGameThreadSubscriber *)0x0) {
              FMemory::Free(local_d8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.
                            Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
            UGameplayStatics::PrimeSound((this->Sound).field0_0x0.DebugPtr);
            bVar7 = Audio::FQuartzClockProxy::DoesClockExist(&pUVar10->RawHandle);
            if (!bVar7) {
              if (2 < (byte)LogAudioQuartz._0_1_) {
                local_148 = (FName)((this->Sound).field0_0x0.DebugPtr)->_padding_;
                ::FName::ToString(&local_148,&local_128);
                ::FName::ToString(&local_1b8.QuantizedRequestData.ClockName,&local_f8);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz)
                ;
                if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                }
                if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_147853e00;
            }
            bVar7 = true;
          }
          if (*(char *)((longlong)&pFVar15[2].GameThreadSubscribers.AllocatorInstance.Data + 4) ==
              '\0') {
            if (bVar7) {
              pFVar12 = FQuartzTickableObject::GetQuartzSubscriber
                                  ((FQuartzTickableObject *)&this->field_0x258,&local_80);
              if (((local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data <=
                    pFVar12) &&
                  (pFVar12 < (FQuartzGameThreadSubscriber *)
                             (local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance
                              .Data + (longlong)
                                      local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayMax
                                      * 0x40))) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayNum;
              if (local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayNum ==
                  local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,&local_1b8.QuantizedRequestData.GameThreadSubscribers.
                                          AllocatorInstance,
                                   &local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayMax);
              }
              local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayNum = iVar9 + 1;
              lVar14 = (longlong)iVar9 * 0x40;
              local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data
              [lVar14 + 8] = (FScriptContainerElement)0x0;
              FVar3 = (FScriptContainerElement)(pFVar12->Offset).OffsetInMilliseconds.bIsSet;
              local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data
              [lVar14 + 8] = FVar3;
              if (FVar3 != (FScriptContainerElement)0x0) {
                *(double *)
                 &local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data
                  [lVar14].field_0x0 = (pFVar12->Offset).OffsetInMilliseconds.TypedValue;
              }
              local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data
              [lVar14 + 0x20] = (FScriptContainerElement)0x0;
              FVar3 = (FScriptContainerElement)(pFVar12->Offset).OffsetAsDuration.bIsSet;
              local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data
              [lVar14 + 0x20] = FVar3;
              if (FVar3 != (FScriptContainerElement)0x0) {
                uVar6 = *(undefined8 *)&(pFVar12->Offset).OffsetAsDuration.TypedValue.field_0x8;
                *(undefined8 *)
                 (local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data +
                 lVar14 + 0x10) = *(undefined8 *)&(pFVar12->Offset).OffsetAsDuration.TypedValue;
                *(undefined8 *)
                 (local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data +
                  lVar14 + 0x10 + 8) = uVar6;
              }
              *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                **)(local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data +
                   lVar14 + 0x28) = (pFVar12->Queue).Object;
              *(TReferenceControllerBase<1> **)
               (local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data +
               lVar14 + 0x30) = (pFVar12->Queue).SharedReferenceCount.ReferenceController;
              (pFVar12->Queue).SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              (pFVar12->Queue).Object =
                   (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                    *)0x0;
              local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data
              [lVar14 + 0x38] = (FScriptContainerElement)pFVar12->bOffsetConvertedToFrames;
              local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data
              [lVar14 + 0x39] = (FScriptContainerElement)pFVar12->bHasBeenNotifiedOfAboutToStart;
              *(int *)(local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data +
                      lVar14 + 0x3c) = pFVar12->OffsetInAudioFrames;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_80.Queue.SharedReferenceCount.ReferenceController);
              PlayInternal(this,&local_1b8,(USoundBase *)0x0);
            }
          }
          else {
            if ((local_1b8.QuantizedRequestData.QuantizedCommandPtr.Object ==
                 (IQuartzQuantizedCommand *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            Audio::IQuartzQuantizedCommand::FailedToQueue
                      (local_1b8.QuantizedRequestData.QuantizedCommandPtr.Object,
                       &local_1b8.QuantizedRequestData);
            if (5 < (byte)LogAudioQuartz._0_1_) {
              local_140 = (FName)((this->Sound).field0_0x0.DebugPtr)->_padding_;
              ::FName::ToString(&local_140,&local_118);
              ::FName::ToString(&local_1b8.QuantizedRequestData.ClockName,&local_e8);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        this_00 = local_138;
        uVar8 = 0;
        if ((int)uVar13 < local_138->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
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
        TArray<UAudioComponent::FAudioComponentPendingQuartzCommandData,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(this_00,uVar13);
        DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                  ((FQuartzGameThreadSubscriber *)
                   local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data,
                   local_1b8.QuantizedRequestData.GameThreadSubscribers.ArrayNum);
        if ((FQuartzGameThreadSubscriber *)
            local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data !=
            (FQuartzGameThreadSubscriber *)0x0) {
          FMemory::Free(local_1b8.QuantizedRequestData.GameThreadSubscribers.AllocatorInstance.Data)
          ;
        }
        DestructItems<Audio::FQuartzGameThreadSubscriber,int>
                  ((FQuartzGameThreadSubscriber *)
                   local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                   AllocatorInstance.Data,
                   local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                   ArrayNum);
        if ((FQuartzGameThreadSubscriber *)
            local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
            AllocatorInstance.Data != (FQuartzGameThreadSubscriber *)0x0) {
          FMemory::Free(local_1b8.QuantizedRequestData.QuantizationBoundary.GameThreadSubscribers.
                        AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.QuantizedRequestData.QuantizedCommandPtr.SharedReferenceCount.
                   ReferenceController);
        goto LAB_147853adb;
      }
      lVar14 = lVar14 + -0x58;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  if (2 < (byte)LogAudioQuartz._0_1_) {
    local_130 = (FName)((this->Sound).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_130,&local_108);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
LAB_147853adb:
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             (param_2->AnticipatoryBoundary).GameThreadSubscribers.AllocatorInstance.Data,
             (param_2->AnticipatoryBoundary).GameThreadSubscribers.ArrayNum);
  pFVar4 = (param_2->AnticipatoryBoundary).GameThreadSubscribers.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->Subscriber).Queue.SharedReferenceCount.ReferenceController);
  return;
}

// PlaybackCompleted @ 1478540c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::PlaybackCompleted(UAudioComponent *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AudioFinishedDelegatesCalled> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_AudioFinishedDelegates> FVar18;
  UWorld *pUVar19;
  FName FVar20;
  uint uVar21;
  longlong lVar22;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  FDestructionSentinel local_78;
  FName local_60;
  FName local_58;
  FReadAccessScope local_50;
  
  if ((this->ActiveCount < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveCount > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\AudioComponent.cpp"
                          ,0x491,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->ActiveCount = this->ActiveCount + -1;
  if (0 < this->ActiveCount) {
    return;
  }
  this->field_0x9a = this->field_0x9a & 0xef;
  if (param_1) goto LAB_1478545b5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAudioFinished,
             &local_50);
  iVar3 = *(int *)&(this->OnAudioFinished).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  if ((iVar3 < 1) &&
     (bVar10 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                          &this->OnAudioFinishedNative), !bVar10)) goto LAB_1478545b5;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar15 = StatPtr_STAT_AudioFinishedDelegatesCalled;
    if (StatPtr_STAT_AudioFinishedDelegatesCalled ==
        (FThreadSafeStaticStat<FStat_STAT_AudioFinishedDelegatesCalled>)0x0) {
      pFVar14 = ::FName::FName(&local_60,"STAT_AudioFinishedDelegatesCalled");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_AudioFinishedDelegatesCalled>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFinishedDelegatesCalled,
                          *pFVar14,L"Finished delegates called","STATGROUP_Audio","STATCAT_Advanced"
                          ,L"Audio",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar20 = *(FName *)FVar15;
    if (((FVar20 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_98.NameAndInfo.Number = FVar20.Number & 0xffffafff | 0xa000;
      local_98.StatData.Pad[0] = '\x01';
      local_98.StatData.Pad[1] = '\0';
      local_98.StatData.Pad[2] = '\0';
      local_98.StatData.Pad[3] = '\0';
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_a8 = FVar20;
      local_98.NameAndInfo.Index.Value = FVar20.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_98);
      FStatsTrace::Add(&local_a8,1);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  FVar18 = StatPtr_STAT_AudioFinishedDelegates;
  if (StatPtr_STAT_AudioFinishedDelegates ==
      (FThreadSafeStaticStat<FStat_STAT_AudioFinishedDelegates>)0x0) {
    pFVar14 = ::FName::FName(&local_58,"STAT_AudioFinishedDelegates");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_AudioFinishedDelegates>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFinishedDelegates,*pFVar14,
                        L"Finished delegates time","STATGROUP_Audio","STATCAT_Advanced",L"Audio",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar18;
  bVar10 = false;
  bVar9 = false;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_1478543d8:
    bVar7 = false;
    FVar20.ComparisonIndex.Value = 0;
    FVar20.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_res20.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\AudioComponent.cpp"
                   ,0x49f);
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478543d8;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar7 = true;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnAudioFinished,
             (void *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAudioFinishedNative,
             (FWriteAccessScope *)&local_78);
  puVar1 = &(this->OnAudioFinishedNative).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar8 = false;
  uVar21 = *(int *)&(this->OnAudioFinishedNative).field_0x10 - 1;
  if (-1 < (int)uVar21) {
    lVar22 = (longlong)(int)uVar21 << 4;
    bVar8 = false;
    do {
      uVar13 = 0;
      if ((int)uVar21 < *(int *)&(this->OnAudioFinishedNative).field_0x10) {
        uVar13 = ~uVar21 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->OnAudioFinishedNative).field_0x8;
      if (((*(int *)(lVar22 + 8 + lVar4) == 0) ||
          (plVar5 = *(longlong **)(lVar22 + lVar4), plVar5 == (longlong *)0x0)) ||
         (cVar12 = (**(code **)(*plVar5 + 0x68))(), cVar12 == '\0')) {
        bVar8 = true;
      }
      lVar22 = lVar22 + -0x10;
      uVar21 = uVar21 - 1;
    } while (-1 < (int)uVar21);
  }
  puVar1 = &(this->OnAudioFinishedNative).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnAudioFinishedNative,
               false);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_88.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_88);
      piVar2 = &pFVar16->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
LAB_1478545b5:
  if (this->bAutoDestroy == 0) {
    if ((bool)this->bAutoManageAttachment) {
      pUVar19 = UActorComponent::GetWorld((UActorComponent *)this);
      CancelAutoAttachment(this,true,pUVar19);
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x4a0))(this,0);
  }
  if (this->bIsPreviewSound != '\0') {
    (**(code **)(*(longlong *)&this->field_0x250 + 0x10))();
  }
  BroadcastPlayState(this);
  return;
}

// PlaybackCompleted @ 147854630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioComponent::PlaybackCompleted(ulong64 param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  TStatId TVar4;
  FName local_res8;
  FName local_res18 [2];
  undefined7 uStack_4f;
  code *local_48 [2];
  undefined **local_38;
  ulong64 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\AudioComponent.cpp"
                       ,0x482,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_AudioPlaybackCompleted ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_UAudioComponent::PlaybackCompleted(unsigned___int64,bool)_::_2_::FStat_STAT_AudioPlaybackCompleted>
           )0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_AudioPlaybackCompleted");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioPlaybackCompleted,*pFVar3,
                   L"FGameThreadAudioTask.PlaybackCompleted","STATGROUP_TaskGraphTasks",
                   "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioPlaybackCompleted;
  if (StatPtr_STAT_AudioPlaybackCompleted ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_UAudioComponent::PlaybackCompleted(unsigned___int64,bool)_::_2_::FStat_STAT_AudioPlaybackCompleted>
       )0x0) {
    pFVar3 = ::FName::FName(local_res18,"STAT_AudioPlaybackCompleted");
    TVar4.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioPlaybackCompleted,*pFVar3,
                    L"FGameThreadAudioTask.PlaybackCompleted","STATGROUP_TaskGraphTasks",
                    "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid
                   );
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UAudioComponent::PlaybackCompleted'::`2'::<lambda_1>,1,0>::
              _vftable_;
  uStack_28._1_7_ = uStack_4f;
  uStack_28._0_1_ = param_2;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UAudioComponent::PlaybackCompleted'::__l2::<lambda_1>,void>::
                Call;
  local_20 = 0;
  local_30 = param_1;
  FAudioThread::RunCommandOnGameThread((TUniqueFunction<void___cdecl(void)> *)local_48,TVar4);
  return;
}

// PostLoad @ 147854bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::PostLoad(UAudioComponent *this)

{
  USoundBase *pUVar1;
  FPackageFileVersion FVar2;
  
  if ((PrimeSoundOnAudioComponentSpawnCVar != 0) &&
     (pUVar1 = (this->Sound).field0_0x0.DebugPtr, pUVar1 != (USoundBase *)0x0)) {
    UGameplayStatics::PrimeSound(pUVar1);
  }
  UObject::PostLoad((UObject *)this);
  if (this->field_0xb9 == '\x01') {
    FVar2 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
    if ((*(int *)FVar2 < 0x1bd) && ((*(uint *)&this->field_0x8 & 0x10) == 0)) {
      UActorComponent::DetermineUCSModifiedProperties((UActorComponent *)this);
      return;
    }
  }
  return;
}

// ProcessCommand @ 147856750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAudioComponent::ProcessCommand(UAudioComponent *this,FQuartzQueueCommandData *param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  FAudioComponentCommandInfo *pFVar2;
  UWorld *pUVar3;
  FAudioComponentCommandInfo local_78;
  
  this_00 = &this[-1].OnAudioPlayStateChangedNative.field_0x10;
  pcVar1 = *(code **)(*(longlong *)this_00 + 0x660);
  pFVar2 = FAudioComponentCommandInfo::FAudioComponentCommandInfo
                     (&local_78,&param_1->AudioComponentCommandInfo);
  pUVar3 = UActorComponent::GetWorld((UActorComponent *)this_00);
  (*pcVar1)(this_00,pUVar3,pFVar2);
  return;
}

// RemoveModulationRouting @ 14785df80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAudioComponent::RemoveModulationRouting
          (UAudioComponent *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1,EModulationDestination param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  *pTVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStackY_308 [32];
  undefined1 local_2d7;
  undefined1 local_2d6 [6];
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_2d0;
  int iStack_2c8;
  uint uStack_2c4;
  undefined1 *local_2c0;
  undefined4 uStack_2b8;
  int iStack_2b4;
  int local_2b0;
  int iStack_2ac;
  int iStack_2a8;
  undefined4 uStack_2a4;
  int local_2a0;
  undefined1 local_29c [12];
  FAudioDevice *local_290;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  code *local_258 [5];
  undefined8 *local_230;
  undefined1 local_228 [32];
  void *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  EModulationDestination local_1d8;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_1c8;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_178;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_128;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_d8;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_290 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (local_290 == (FAudioDevice *)0x0) {
    return;
  }
  iStack_2c8 = 0;
  uStack_2c4 = 1;
  puVar1 = &(param_1->Elements).field_0x10;
  local_1c8.Elements._0_8_ = 0;
  local_1c8.Elements._8_8_ = 0;
  local_1c8.Elements._32_8_ = 0;
  local_1c8.Elements._40_4_ = 0;
  local_1c8.Elements._44_4_ = 0x80;
  local_1c8.Elements._48_4_ = 0xffffffff;
  local_1c8.Elements._52_4_ = 0;
  local_1c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1c8.HashSize = 0;
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  iStack_2b4 = 0;
  local_2b0 = iStack_2c8;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    local_2b0 = 0;
    iStack_2c8 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_2c8;
      local_2b0 = local_2b0 + 0x20;
      iStack_2c8 = iStack_2c8 + 1;
      iStack_2b4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2c8) goto LAB_14785e0ae;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_2c4 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_2c4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2a0 = (int)lVar11;
    iStack_2b4 = local_2b0 + -1 + local_2a0;
    if (iVar4 < iStack_2b4) {
      iStack_2b4 = iVar4;
    }
  }
LAB_14785e0ae:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_2a8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_2b8 = 0xffffffff;
  TStack_280._padding_ = CONCAT44(uStack_2c4,iStack_2c8);
  TStack_280.CurrentBitIndex = iStack_2b4;
  TStack_280.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_280._28_4_ = iStack_2b4;
  TStack_280.BaseBitIndex = local_2b0;
  uStack_260 = CONCAT44(uStack_2a4,iStack_2a8);
  local_2d0 = param_1;
  local_2c0 = puVar1;
  iStack_2ac = iStack_2b4;
  local_288 = param_1;
  TStack_280.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14785e1c0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_14785e1c0:
  while( true ) {
    pTVar7 = local_288;
    if (*(int *)&(local_288->Elements).field_0x8 - *(int *)&(local_288->Elements).field_0x34 !=
        (int)uStack_260) {
      `TSparseArray<TSparseSetElement<USoundModulatorBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
    }
    if (((TStack_280.CurrentBitIndex == uVar14) &&
        (TStack_280.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1)
       ) break;
    local_29c._4_8_ =
         *(undefined8 *)
          (*(longlong *)&pTVar7->Elements + (longlong)TStack_280.CurrentBitIndex * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_29c._4_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_29c._4_8_);
    }
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<USoundModulatorBase>_>
              (&local_1c8,(TObjectPtr<USoundModulatorBase> *)local_29c,(bool *)(local_29c + 4));
    TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
  }
  if (param_2 == Volume) {
    plVar3 = &(this->ModulationRouting)._padding_;
    pTVar9 = TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
             ::Difference((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                           *)plVar3,&local_88,&local_1c8);
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)plVar3 != pTVar9) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)plVar3,pTVar9);
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    pTVar9 = &local_88;
  }
  else if (param_2 == Pitch) {
    plVar3 = &(this->ModulationRouting)._padding_;
    pTVar9 = TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
             ::Difference((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                           *)plVar3,&local_d8,&local_1c8);
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)plVar3 != pTVar9) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)plVar3,pTVar9);
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    pTVar9 = &local_d8;
  }
  else if (param_2 == Lowpass) {
    plVar3 = &(this->ModulationRouting)._padding_;
    pTVar9 = TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
             ::Difference((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                           *)plVar3,&local_128,&local_1c8);
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)plVar3 != pTVar9) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)plVar3,pTVar9);
    }
    local_128.HashSize = 0;
    if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.Hash.SecondaryData);
    }
    pTVar9 = &local_128;
  }
  else {
    if (param_2 != Highpass) {
      `UAudioComponent::RemoveModulationRouting'::__l12::<lambda_1>::operator()(local_2d6);
      goto LAB_14785e509;
    }
    plVar3 = &(this->ModulationRouting)._padding_;
    pTVar9 = TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
             ::Difference((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                           *)plVar3,&local_178,&local_1c8);
    if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
         *)plVar3 != pTVar9) {
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
                ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                  *)plVar3,pTVar9);
    }
    local_178.HashSize = 0;
    if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_178.Hash.SecondaryData);
    }
    pTVar9 = &local_178;
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&pTVar9->Elements);
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
               *)local_228,&local_1c8);
  local_258[0] = (code *)0x0;
  local_1d8 = param_2;
  puVar10 = FMemory::Malloc(0x60,8);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UAudioComponent::RemoveModulationRouting'::`2'::<lambda_2>,1,1>
              ::_vftable_;
  puVar10[5] = 0;
  *(undefined4 *)(puVar10 + 6) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x34) = 0x80;
  *(undefined4 *)(puVar10 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = 0;
  puVar10[9] = 0;
  *(undefined4 *)(puVar10 + 10) = 0;
  local_230 = puVar10;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
            ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)(puVar10 + 1),
             (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              *)local_228);
  *(EModulationDestination *)(puVar10 + 0xb) = local_1d8;
  if ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
       *)(puVar10 + 1) !=
      (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
       *)0x0) {
    local_258[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UAudioComponent::RemoveModulationRouting'::__l2::<lambda_2>,void,FActiveSound_&>
                   ::Call;
  }
  FAudioDevice::SendCommandToActiveSounds
            (local_290,this->AudioComponentID,
             (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_258,(TStatId)0x154f11430);
  local_1e0 = 0;
  if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1e8);
  }
  bVar8 = local_228._12_4_ != 0;
  local_228._8_8_ = (ulonglong)(uint)local_228._12_4_ << 0x20;
  if (bVar8) {
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
LAB_14785e509:
  local_1c8.HashSize = 0;
  if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.Elements);
  return;
}

// ResetParameters @ 1478611f0

void __thiscall UAudioComponent::ResetParameters(UAudioComponent *this)

{
  FAudioParameter *pFVar1;
  
  pFVar1 = *(FAudioParameter **)&this->field_0x260;
  if (*(int *)&this->field_0x26c < 0) {
    DestructItems<FAudioParameter,int>(pFVar1,*(int *)&this->field_0x268);
    *(undefined4 *)&this->field_0x268 = 0;
    if (*(int *)&this->field_0x26c != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,0,(ForAnyElementType *)&this->field_0x260,0,(int *)&this->field_0x26c);
    }
  }
  else {
    DestructItems<FAudioParameter,int>(pFVar1,*(int *)&this->field_0x268);
    *(undefined4 *)&this->field_0x268 = 0;
  }
  ISoundParameterControllerInterface::ResetParameters((ISoundParameterControllerInterface *)this);
  return;
}

// Serialize @ 147864710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::Serialize(UAudioComponent *this,FArchive *param_1)

{
  int iVar1;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
    if ((iVar1 < 0x16) && (__real_461c4000 != this->SubtitlePriority)) {
      this->bOverrideSubtitlePriority = '\x01';
    }
  }
  return;
}

// Serialize @ 147864780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponent::Serialize(UAudioComponent *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFrameworkObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFrameworkObjectVersion::GUID);
    if ((iVar1 < 0x16) && (__real_461c4000 != this->SubtitlePriority)) {
      this->bOverrideSubtitlePriority = '\x01';
    }
  }
  return;
}

// SetAttenuationOverrides @ 147869270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAudioComponent::SetAttenuationOverrides(UAudioComponent *this,FSoundAttenuationSettings *param_1)

{
  FSoundAttenuationSettings *this_00;
  FAudioDevice *this_01;
  undefined1 auStack_438 [32];
  code *local_418 [5];
  undefined8 *local_3f0;
  FSoundAttenuationSettings local_3e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_438;
  FSoundAttenuationSettings::operator=(&this->AttenuationOverrides,param_1);
  this_01 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if ((this_01 != (FAudioDevice *)0x0) && ((this->field_0x9a & 0x10) != 0)) {
    FSoundAttenuationSettings::FSoundAttenuationSettings(&local_3e8,param_1);
    local_418[0] = (code *)0x0;
    local_3f0 = FMemory::Malloc(0x3d8,8);
    this_00 = (FSoundAttenuationSettings *)(local_3f0 + 1);
    *local_3f0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponent::SetAttenuationOverrides'::`8'::<lambda_1>,1,1>
                  ::_vftable_;
    FSoundAttenuationSettings::FSoundAttenuationSettings(this_00,&local_3e8);
    if (this_00 != (FSoundAttenuationSettings *)0x0) {
      local_418[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UAudioComponent::SetAttenuationOverrides'::__l8::<lambda_1>,void,FActiveSound_&>
                     ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this_01,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_418,(TStatId)0x154f11430);
    FSoundAttenuationSettings::~FSoundAttenuationSettings(&local_3e8);
  }
  return;
}

// SetAttenuationSettings @ 147869380

void __thiscall
UAudioComponent::SetAttenuationSettings(UAudioComponent *this,USoundAttenuation *param_1)

{
  FAudioDevice *this_00;
  code *local_38 [2];
  undefined **local_28;
  USoundAttenuation *local_20;
  undefined8 local_10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundAttenuation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->AttenuationSettings).field0_0x0.DebugPtr = param_1;
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if ((this_00 != (FAudioDevice *)0x0) && ((this->field_0x9a & 0x10) != 0)) {
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetAttenuationSettings'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    local_10 = 0;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetAttenuationSettings'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_20 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// SetAudioBusSendPostEffect @ 147869420

void __thiscall
UAudioComponent::SetAudioBusSendPostEffect(UAudioComponent *this,UAudioBus *param_1,float param_2)

{
  SetBusSendEffectInternal(this,(USoundSourceBus *)0x0,param_1,param_2,PostEffect);
  return;
}

// SetAudioBusSendPreEffect @ 147869450

void __thiscall
UAudioComponent::SetAudioBusSendPreEffect(UAudioComponent *this,UAudioBus *param_1,float param_2)

{
  SetBusSendEffectInternal(this,(USoundSourceBus *)0x0,param_1,param_2,PreEffect);
  return;
}

// SetBoolParameter @ 147869940

void __thiscall UAudioComponent::SetBoolParameter(UAudioComponent *this,FName param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType FStack_b8;
  int iStack_b0;
  int iStack_ac;
  FAudioParameter FStack_a8;
  
  FStack_a8.FloatParam = 0.0;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  FStack_a8.ParamType = Boolean;
  FStack_a8.IntParam = 0;
  FStack_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  FStack_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.StringParam.Data.ArrayNum = 0;
  FStack_a8.StringParam.Data.ArrayMax = 0;
  FStack_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayFloatParam.ArrayNum = 0;
  FStack_a8.ArrayFloatParam.ArrayMax = 0;
  FStack_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayBoolParam.ArrayNum = 0;
  FStack_a8.ArrayBoolParam.ArrayMax = 0;
  FStack_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayIntParam.ArrayNum = 0;
  FStack_a8.ArrayIntParam.ArrayMax = 0;
  FStack_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayObjectParam.ArrayNum = 0;
  FStack_a8.ArrayObjectParam.ArrayMax = 0;
  FStack_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayStringParam.ArrayNum = 0;
  FStack_a8.ArrayStringParam.ArrayMax = 0;
  FStack_a8.TypeName.ComparisonIndex.Value = 0;
  FStack_a8.TypeName.Number = 0;
  FStack_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ObjectProxies.ArrayNum = 0;
  FStack_a8.ObjectProxies.ArrayMax = 0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  iStack_b0 = 1;
  FStack_a8.ParamName = param_1;
  FStack_a8.BoolParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&FStack_b8,1,&iStack_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(FStack_b8.Data,&FStack_a8,1);
  (*pcVar1)(this,&FStack_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)FStack_b8.Data,iStack_b0);
  if ((FAudioParameter *)FStack_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)FStack_a8.ObjectProxies.AllocatorInstance.Data,
             FStack_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FStack_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FStack_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)FStack_a8.ArrayStringParam.AllocatorInstance.Data,
             FStack_a8.ArrayStringParam.ArrayNum);
  if (FStack_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (FStack_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetBusSendEffectInternal @ 147869a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioComponent::SetBusSendEffectInternal
          (UAudioComponent *this,USoundSourceBus *param_1,UAudioBus *param_2,float param_3,
          EBusSendType param_4)

{
  int *piVar1;
  TArray<UAudioComponent::FPendingSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FSoundSourceBusSendInfo *pFVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FAudioDevice *this_00;
  FName *pFVar9;
  TStatId TVar10;
  undefined8 *puVar11;
  undefined1 auStackY_348 [32];
  FName local_2e8;
  FName local_2e0;
  code *local_2d8 [5];
  undefined8 *local_2b0;
  undefined1 local_2a8 [120];
  void *local_230;
  undefined4 local_228;
  void *local_220;
  ForAnyElementType local_208;
  FScriptContainerElement local_1e8 [8];
  FSoundSourceBusSendInfo local_1e0;
  EBusSendType local_128;
  FSoundSourceBusSendInfo local_120;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2a8._8_8_ = (USoundSourceBus *)0x0;
  local_2a8._16_8_ = (UAudioBus *)0x0;
  local_2a8[0] = Manual;
  local_2a8._24_4_ = 1.0;
  local_2a8._28_4_ = 0.0;
  local_2a8._32_4_ = 1.0;
  local_2a8._36_4_ = 100.0;
  local_2a8._40_4_ = 1000.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)(local_2a8 + 0x30));
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundSourceBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_2a8._8_8_ = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_2a8._24_4_ = param_3;
  local_2a8._16_8_ = param_2;
  cVar6 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))(&this->field_0x250);
  if (cVar6 == '\0') {
    local_1e0.SendLevel = ___xmm_42c800003f800000000000003f800000;
    local_1e0.MinSendLevel = _UNK_1517983b4;
    local_1e0.MaxSendLevel = _UNK_1517983b8;
    local_1e0.MinSendDistance = _UNK_1517983bc;
    local_1e0.SoundSourceBus.field0_0x0.DebugPtr = (TObjectPtr<USoundSourceBus>_u_0)0x0;
    local_1e0.AudioBus.field0_0x0.DebugPtr = (TObjectPtr<UAudioBus>_u_0)0x0;
    local_1e8[0] = (FScriptContainerElement)0x0;
    local_1e0.SourceBusSendLevelControlMethod = Manual;
    local_1e0.MaxSendDistance = 1000.0;
    FRuntimeFloatCurve::FRuntimeFloatCurve(&local_1e0.CustomSendLevelCurve);
    local_1e0.SourceBusSendLevelControlMethod = local_2a8[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((USoundSourceBus *)local_2a8._8_8_ != (USoundSourceBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_2a8._8_8_);
    }
    local_1e0.SoundSourceBus.field0_0x0 = (TObjectPtr<USoundSourceBus>_u_0)local_2a8._8_8_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UAudioBus *)local_2a8._16_8_ != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_2a8._16_8_);
    }
    local_1e0.MinSendDistance = (float)local_2a8._36_4_;
    local_1e0.MaxSendLevel = (float)local_2a8._32_4_;
    local_1e0.SendLevel = (float)local_2a8._24_4_;
    local_1e0.MinSendLevel = (float)local_2a8._28_4_;
    local_1e0.MaxSendDistance = (float)local_2a8._40_4_;
    local_1e0.AudioBus.field0_0x0 = (TObjectPtr<UAudioBus>_u_0)local_2a8._16_8_;
    FRuntimeFloatCurve::operator=
              (&local_1e0.CustomSendLevelCurve,(FRuntimeFloatCurve *)(local_2a8 + 0x30));
    pTVar2 = &this->PendingBusSends;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_1e8[0] = (FScriptContainerElement)param_4;
    if ((pFVar3 <= local_1e8) &&
       (local_1e8 < pFVar3 + (longlong)(this->PendingBusSends).ArrayMax * 0xc0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->PendingBusSends).ArrayNum;
    piVar1 = &(this->PendingBusSends).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8c0,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingBusSends).ArrayNum = iVar8 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pFVar3[(longlong)iVar8 * 0xc0] = local_1e8[0];
    FSoundSourceBusSendInfo::FSoundSourceBusSendInfo
              ((FSoundSourceBusSendInfo *)(pFVar3 + (longlong)iVar8 * 0xc0 + 8),&local_1e0);
    if (local_1e0.CustomSendLevelCurve.EditorCurveData.Keys.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.CustomSendLevelCurve.EditorCurveData.Keys.AllocatorInstance.Data);
    }
    local_1e0.CustomSendLevelCurve.EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
    if ((void *)local_1e0.CustomSendLevelCurve.EditorCurveData._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1e0.CustomSendLevelCurve.EditorCurveData._padding_);
    }
    local_1e0.CustomSendLevelCurve.EditorCurveData._padding_._0_4_ = 0;
    if ((void *)local_1e0.CustomSendLevelCurve.EditorCurveData._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1e0.CustomSendLevelCurve.EditorCurveData._padding_);
    }
    pFVar5 = &local_1e0;
  }
  else {
    this_00 = (FAudioDevice *)
              (**(code **)(*(longlong *)&this->field_0x250 + 0x88))(&this->field_0x250);
    if (this_00 == (FAudioDevice *)0x0) goto LAB_147869ee0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_SetBusSend ==
            (FThreadSafeStaticStat<_private:_void___cdecl_UAudioComponent::SetBusSendEffectInternal(USoundSourceBus_*,UAudioBus_*,float,EBusSendType)_::_8_::FStat_STAT_SetBusSend>
             )0x0) {
          pFVar9 = ::FName::FName(&local_2e8,"STAT_SetBusSend");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetBusSend,*pFVar9,
                     L"FAudioThreadTask.AudioSetBusSend","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_SetBusSend;
    if (StatPtr_STAT_SetBusSend ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UAudioComponent::SetBusSendEffectInternal(USoundSourceBus_*,UAudioBus_*,float,EBusSendType)_::_8_::FStat_STAT_SetBusSend>
         )0x0) {
      pFVar9 = ::FName::FName(&local_2e0,"STAT_SetBusSend");
      TVar10.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetBusSend,*pFVar9,
                      L"FAudioThreadTask.AudioSetBusSend","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_128 = param_4;
    FSoundSourceBusSendInfo::FSoundSourceBusSendInfo
              (&local_120,(FSoundSourceBusSendInfo *)local_2a8);
    local_2d8[0] = (code *)0x0;
    puVar11 = FMemory::Malloc(200,8);
    *puVar11 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetBusSendEffectInternal'::`8'::<lambda_1>,1,1>
                ::_vftable_;
    *(EBusSendType *)(puVar11 + 1) = local_128;
    *(ESourceBusSendLevelControlMethod *)(puVar11 + 2) = local_120.SourceBusSendLevelControlMethod;
    ((TObjectPtr<USoundSourceBus>_u_0 *)(puVar11 + 3))->DebugPtr =
         (USoundSourceBus *)local_120.SoundSourceBus.field0_0x0;
    local_2b0 = puVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_120.SoundSourceBus.field0_0x0.DebugPtr != (TObjectPtr<USoundSourceBus>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_120.SoundSourceBus.field0_0x0);
    }
    ((TObjectPtr<UAudioBus>_u_0 *)(puVar11 + 4))->DebugPtr =
         (UAudioBus *)local_120.AudioBus.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_120.AudioBus.field0_0x0.DebugPtr != (TObjectPtr<UAudioBus>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_120.AudioBus.field0_0x0);
    }
    *(float *)(puVar11 + 5) = local_120.SendLevel;
    *(float *)((longlong)puVar11 + 0x2c) = local_120.MinSendLevel;
    *(float *)(puVar11 + 6) = local_120.MaxSendLevel;
    *(float *)((longlong)puVar11 + 0x34) = local_120.MinSendDistance;
    *(float *)(puVar11 + 7) = local_120.MaxSendDistance;
    FRuntimeFloatCurve::FRuntimeFloatCurve
              ((FRuntimeFloatCurve *)(puVar11 + 8),&local_120.CustomSendLevelCurve);
    if ((EBusSendType *)(puVar11 + 1) != (EBusSendType *)0x0) {
      local_2d8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UAudioComponent::SetBusSendEffectInternal'::__l8::<lambda_1>,void,FActiveSound_&>
                     ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_2d8,TVar10);
    if (local_120.CustomSendLevelCurve.EditorCurveData.Keys.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.CustomSendLevelCurve.EditorCurveData.Keys.AllocatorInstance.Data);
    }
    local_120.CustomSendLevelCurve.EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
    if ((void *)local_120.CustomSendLevelCurve.EditorCurveData._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_120.CustomSendLevelCurve.EditorCurveData._padding_);
    }
    local_120.CustomSendLevelCurve.EditorCurveData._padding_._0_4_ = 0;
    if ((void *)local_120.CustomSendLevelCurve.EditorCurveData._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_120.CustomSendLevelCurve.EditorCurveData._padding_);
    }
    pFVar5 = &local_120;
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(pFVar5->CustomSendLevelCurve).EditorCurveData._padding_);
LAB_147869ee0:
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  local_2a8._48_8_ = &___7FIndexedCurve__6B_;
  if (local_220 != (void *)0x0) {
    FMemory::Free(local_220);
  }
  local_228 = 0;
  if (local_230 != (void *)0x0) {
    FMemory::Free(local_230);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_2a8 + 0x38));
  return;
}

// SetFadeInComplete @ 14786a6c0

void __thiscall UAudioComponent::SetFadeInComplete(UAudioComponent *this)

{
  float fVar1;
  
  if ((((this->field_0x9a & 0x10) != 0) && (this->bIsPaused == '\0')) &&
     (this->bIsFadingOut == '\0')) {
    fVar1 = GetAudioTimeSeconds(this);
    if (fVar1 - this->TimeAudioComponentPlayed < this->FadeInTimeDuration) {
      return;
    }
  }
  BroadcastPlayState(this);
  return;
}

// SetFloatParameter @ 14786a710

void __thiscall
UAudioComponent::SetFloatParameter(UAudioComponent *this,FName param_1,float param_2)

{
  code *pcVar1;
  ForAnyElementType FStack_b8;
  int iStack_b0;
  int iStack_ac;
  FAudioParameter FStack_a8;
  
  FStack_a8.BoolParam = false;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  FStack_a8.ParamType = Float;
  FStack_a8.IntParam = 0;
  FStack_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  FStack_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.StringParam.Data.ArrayNum = 0;
  FStack_a8.StringParam.Data.ArrayMax = 0;
  FStack_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayFloatParam.ArrayNum = 0;
  FStack_a8.ArrayFloatParam.ArrayMax = 0;
  FStack_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayBoolParam.ArrayNum = 0;
  FStack_a8.ArrayBoolParam.ArrayMax = 0;
  FStack_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayIntParam.ArrayNum = 0;
  FStack_a8.ArrayIntParam.ArrayMax = 0;
  FStack_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayObjectParam.ArrayNum = 0;
  FStack_a8.ArrayObjectParam.ArrayMax = 0;
  FStack_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayStringParam.ArrayNum = 0;
  FStack_a8.ArrayStringParam.ArrayMax = 0;
  FStack_a8.TypeName.ComparisonIndex.Value = 0;
  FStack_a8.TypeName.Number = 0;
  FStack_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ObjectProxies.ArrayNum = 0;
  FStack_a8.ObjectProxies.ArrayMax = 0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  iStack_b0 = 1;
  FStack_a8.ParamName = param_1;
  FStack_a8.FloatParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&FStack_b8,1,&iStack_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(FStack_b8.Data,&FStack_a8,1);
  (*pcVar1)(this,&FStack_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)FStack_b8.Data,iStack_b0);
  if ((FAudioParameter *)FStack_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)FStack_a8.ObjectProxies.AllocatorInstance.Data,
             FStack_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FStack_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FStack_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)FStack_a8.ArrayStringParam.AllocatorInstance.Data,
             FStack_a8.ArrayStringParam.ArrayNum);
  if (FStack_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (FStack_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetHighPassFilterEnabled @ 14786aec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetHighPassFilterEnabled(UAudioComponent *this,bool param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  TStatId TVar2;
  FName local_res8;
  code *local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined8 local_20;
  
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AudioSetHighPassFilterEnabled ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetHighPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetHighPassFilterEnabled>
             )0x0) {
          pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetHighPassFilterEnabled");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetHighPassFilterEnabled,
                     *pFVar1,L"FAudioThreadTask.SetHighPassFilterFrequency",
                     "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                     true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetHighPassFilterEnabled;
    if (StatPtr_STAT_AudioSetHighPassFilterEnabled ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetHighPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetHighPassFilterEnabled>
         )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetHighPassFilterEnabled");
      TVar2.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetHighPassFilterEnabled,
                      *pFVar1,L"FAudioThreadTask.SetHighPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetHighPassFilterEnabled'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_20 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetHighPassFilterEnabled'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar2);
  }
  return;
}

// SetHighPassFilterFrequency @ 14786b0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetHighPassFilterFrequency(UAudioComponent *this,float param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  TStatId TVar2;
  FName local_res8;
  code *local_48 [2];
  undefined **local_38;
  float local_30;
  undefined8 local_20;
  
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AudioSetHighPassFilterFrequency ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetHighPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetHighPassFilterFrequency>
             )0x0) {
          pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetHighPassFilterFrequency");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetHighPassFilterFrequency,
                     *pFVar1,L"FAudioThreadTask.SetHighPassFilterFrequency",
                     "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                     true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetHighPassFilterFrequency;
    if (StatPtr_STAT_AudioSetHighPassFilterFrequency ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetHighPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetHighPassFilterFrequency>
         )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetHighPassFilterFrequency");
      TVar2.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetHighPassFilterFrequency,
                      *pFVar1,L"FAudioThreadTask.SetHighPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetHighPassFilterFrequency'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_20 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetHighPassFilterFrequency'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar2);
  }
  return;
}

// SetIntParameter @ 14786b6d0

void __thiscall UAudioComponent::SetIntParameter(UAudioComponent *this,FName param_1,int param_2)

{
  code *pcVar1;
  ForAnyElementType FStack_b8;
  int iStack_b0;
  int iStack_ac;
  FAudioParameter FStack_a8;
  
  FStack_a8.FloatParam = 0.0;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  FStack_a8.BoolParam = false;
  FStack_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  FStack_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.StringParam.Data.ArrayNum = 0;
  FStack_a8.StringParam.Data.ArrayMax = 0;
  FStack_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayFloatParam.ArrayNum = 0;
  FStack_a8.ArrayFloatParam.ArrayMax = 0;
  FStack_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayBoolParam.ArrayNum = 0;
  FStack_a8.ArrayBoolParam.ArrayMax = 0;
  FStack_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayIntParam.ArrayNum = 0;
  FStack_a8.ArrayIntParam.ArrayMax = 0;
  FStack_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayObjectParam.ArrayNum = 0;
  FStack_a8.ArrayObjectParam.ArrayMax = 0;
  FStack_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ArrayStringParam.ArrayNum = 0;
  FStack_a8.ArrayStringParam.ArrayMax = 0;
  FStack_a8.TypeName.ComparisonIndex.Value = 0;
  FStack_a8.TypeName.Number = 0;
  FStack_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ObjectProxies.ArrayNum = 0;
  FStack_a8.ObjectProxies.ArrayMax = 0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  FStack_a8.ParamType = Integer;
  iStack_b0 = 1;
  FStack_a8.ParamName = param_1;
  FStack_a8.IntParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&FStack_b8,1,&iStack_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(FStack_b8.Data,&FStack_a8,1);
  (*pcVar1)(this,&FStack_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)FStack_b8.Data,iStack_b0);
  if ((FAudioParameter *)FStack_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)FStack_a8.ObjectProxies.AllocatorInstance.Data,
             FStack_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FStack_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FStack_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)FStack_a8.ArrayStringParam.AllocatorInstance.Data,
             FStack_a8.ArrayStringParam.ArrayNum);
  if (FStack_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (FStack_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (FStack_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetIsVirtualized @ 14786b850

void __thiscall UAudioComponent::SetIsVirtualized(UAudioComponent *this,bool param_1)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(UAudioComponent_const_*,bool),FDefaultDelegateUserPolicy> *this_00
  ;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_res10 [8];
  FDestructionSentinel local_58;
  FReadAccessScope local_40;
  
  if (this->bIsVirtualized != param_1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnAudioVirtualizationChanged,&local_40);
    iVar2 = *(int *)&(this->OnAudioVirtualizationChanged).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    if (0 < iVar2) {
      local_res10[0] = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnAudioVirtualizationChanged,local_res10);
    }
    this_00 = &this->OnAudioVirtualizationChangedNative;
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_58);
      puVar1 = &(this->OnAudioVirtualizationChangedNative).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar10 = *(int *)&(this->OnAudioVirtualizationChangedNative).field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar10 < *(int *)&(this->OnAudioVirtualizationChangedNative).field_0x10) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(this->OnAudioVirtualizationChangedNative).field_0x8;
          if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,this,param_1), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(this->OnAudioVirtualizationChangedNative).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
    }
  }
  this->bIsVirtualized = '\0';
  this->field_0x4ca = this->field_0x4ca | param_1 << 5;
  return;
}

// SetLowPassFilterEnabled @ 14786ba00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetLowPassFilterEnabled(UAudioComponent *this,bool param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  TStatId TVar2;
  FName local_res8;
  code *local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined8 local_20;
  
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AudioSetLowPassFilterEnabled ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetLowPassFilterEnabled>
             )0x0) {
          pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetLowPassFilterEnabled");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterEnabled,*pFVar1
                     ,L"FAudioThreadTask.SetLowPassFilterFrequency","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetLowPassFilterEnabled;
    if (StatPtr_STAT_AudioSetLowPassFilterEnabled ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetLowPassFilterEnabled>
         )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetLowPassFilterEnabled");
      TVar2.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterEnabled,
                      *pFVar1,L"FAudioThreadTask.SetLowPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetLowPassFilterEnabled'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_20 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetLowPassFilterEnabled'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar2);
  }
  return;
}

// SetLowPassFilterFrequency @ 14786bbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetLowPassFilterFrequency(UAudioComponent *this,float param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  TStatId TVar2;
  FName local_res8;
  code *local_48 [2];
  undefined **local_38;
  float local_30;
  undefined8 local_20;
  
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AudioSetLowPassFilterFrequency ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetLowPassFilterFrequency>
             )0x0) {
          pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetLowPassFilterFrequency");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterFrequency,
                     *pFVar1,L"FAudioThreadTask.SetLowPassFilterFrequency",
                     "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                     true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetLowPassFilterFrequency;
    if (StatPtr_STAT_AudioSetLowPassFilterFrequency ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetLowPassFilterFrequency>
         )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetLowPassFilterFrequency");
      TVar2.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterFrequency,
                      *pFVar1,L"FAudioThreadTask.SetLowPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetLowPassFilterFrequency'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_20 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetLowPassFilterFrequency'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar2);
  }
  return;
}

// SetModulationRouting @ 14786bde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UAudioComponent::SetModulationRouting
          (UAudioComponent *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1,EModulationDestination param_2,EModulationRouting param_3)

{
  int iVar1;
  uint uVar2;
  FAudioDevice *this_00;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [16];
  code *local_1d8 [5];
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [32];
  void *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ForElementType<FSetElementId> local_160;
  int local_158;
  undefined4 local_150;
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  undefined4 local_f8;
  undefined1 local_f0 [32];
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ForElementType<FSetElementId> local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  EModulationRouting local_48;
  EModulationRouting local_47;
  EModulationRouting local_46;
  EModulationRouting local_45;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (param_2 == Volume) {
      (this->ModulationRouting).VolumeRouting = param_3;
      lVar3 = 0x960;
    }
    else if (param_2 == Pitch) {
      (this->ModulationRouting).PitchRouting = param_3;
      lVar3 = 0x9b8;
    }
    else if (param_2 == Lowpass) {
      (this->ModulationRouting).LowpassRouting = param_3;
      lVar3 = 0xa68;
    }
    else {
      if (param_2 != Highpass) {
        `UAudioComponent::SetModulationRouting'::__l8::<lambda_1>::operator()(local_1e8);
        return;
      }
      (this->ModulationRouting).HighpassRouting = param_3;
      lVar3 = 0xa10;
    }
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    operator=<DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator,TObjectPtr<USoundModulatorBase>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(&this->field_0x0 + lVar3),param_1);
    local_1a8 = (undefined4)(this->ModulationRouting)._padding_;
    local_178 = ___xmm_00000000ffffffff0000008000000000;
    uStack_170 = _UNK_150631d98;
    local_1a0._0_8_ = (FScriptContainerElement *)0x0;
    local_1a0._8_8_ = 0;
    local_180 = (void *)0x0;
    local_160 = (ForElementType<FSetElementId>)0x0;
    local_158 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_1a0,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(this->ModulationRouting)._padding_);
    local_150 = (undefined4)(this->ModulationRouting)._padding_;
    local_148._0_8_ = (FScriptContainerElement *)0x0;
    local_148._8_8_ = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_11c = 0x80;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (ForElementType<FSetElementId>)0x0;
    local_100 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_148,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(this->ModulationRouting)._padding_);
    local_f8 = (undefined4)(this->ModulationRouting)._padding_;
    local_c8 = ___xmm_00000000ffffffff0000008000000000;
    uStack_c0 = _UNK_150631d98;
    local_f0._0_8_ = (FScriptContainerElement *)0x0;
    local_f0._8_8_ = 0;
    local_d0 = (void *)0x0;
    local_b0 = (ForElementType<FSetElementId>)0x0;
    local_a8 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_f0,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(this->ModulationRouting)._padding_);
    local_a0 = (undefined4)(this->ModulationRouting)._padding_;
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
                 *)local_98,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&(this->ModulationRouting)._padding_);
    local_48 = (this->ModulationRouting).VolumeRouting;
    local_47 = (this->ModulationRouting).PitchRouting;
    local_46 = (this->ModulationRouting).HighpassRouting;
    local_45 = (this->ModulationRouting).LowpassRouting;
    local_1d8[0] = (code *)0x0;
    puVar4 = FMemory::Malloc(0x170,8);
    *puVar4 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioComponent::SetModulationRouting'::`2'::<lambda_2>,1,1>::
               _vftable_;
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar4 + 2))->Elements = 0;
    puVar4[3] = 0;
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 1) = local_1a8;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80;
    *(undefined4 *)(puVar4 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x44) = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    local_1b0 = puVar4;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar4 + 2),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_1a0);
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar4 + 0xd))->Elements = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    *(undefined4 *)(puVar4 + 0xc) = local_150;
    *(undefined4 *)(puVar4 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x94) = 0x80;
    *(undefined4 *)(puVar4 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x9c) = 0;
    puVar4[0x15] = 0;
    *(undefined4 *)(puVar4 + 0x16) = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar4 + 0xd),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_148);
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar4 + 0x18))->Elements = 0;
    puVar4[0x19] = 0;
    puVar4[0x1c] = 0;
    *(undefined4 *)(puVar4 + 0x17) = local_f8;
    *(undefined4 *)(puVar4 + 0x1d) = 0;
    *(undefined4 *)((longlong)puVar4 + 0xec) = 0x80;
    *(undefined4 *)(puVar4 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0xf4) = 0;
    puVar4[0x20] = 0;
    *(undefined4 *)(puVar4 + 0x21) = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar4 + 0x18),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_f0);
    *(undefined8 *)
     &((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
        *)(puVar4 + 0x23))->Elements = 0;
    puVar4[0x24] = 0;
    puVar4[0x27] = 0;
    *(undefined4 *)(puVar4 + 0x22) = local_a0;
    *(undefined4 *)(puVar4 + 0x28) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x144) = 0x80;
    *(undefined4 *)(puVar4 + 0x29) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x14c) = 0;
    puVar4[0x2b] = 0;
    *(undefined4 *)(puVar4 + 0x2c) = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>_>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar4 + 0x23),
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_98);
    *(EModulationRouting *)(puVar4 + 0x2d) = local_48;
    *(EModulationRouting *)((longlong)puVar4 + 0x169) = local_47;
    *(EModulationRouting *)((longlong)puVar4 + 0x16a) = local_46;
    *(EModulationRouting *)((longlong)puVar4 + 0x16b) = local_45;
    if (puVar4 + 1 != (undefined8 *)0x0) {
      local_1d8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UAudioComponent::SetModulationRouting'::__l2::<lambda_2>,void,FActiveSound_&>
                     ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_1d8,(TStatId)0x154f11430);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    iVar1 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
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
    local_a8 = 0;
    if (local_b0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b0);
    }
    iVar1 = SUB84(local_f0._8_8_,4);
    local_f0._8_8_ = local_f0._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_f0,0,(int *)(local_f0 + 0xc));
    }
    uVar2 = local_c8._4_4_;
    uStack_c0 = 0xffffffff;
    local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
    if (0x80 < uVar2) {
      local_c8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f0 + 0x10),0);
    }
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
    if ((FScriptContainerElement *)local_f0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f0._0_8_);
    }
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    iVar1 = SUB84(local_148._8_8_,4);
    local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
    }
    local_118 = 0xffffffff;
    local_114 = 0;
    local_120 = 0;
    if (0x80 < local_11c) {
      local_11c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
    local_158 = 0;
    if (local_160 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_160);
    }
    iVar1 = SUB84(local_1a0._8_8_,4);
    local_1a0._8_8_ = local_1a0._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_1a0,0,(int *)(local_1a0 + 0xc));
    }
    uVar2 = local_178._4_4_;
    uStack_170 = 0xffffffff;
    local_178 = (ulonglong)local_178._4_4_ << 0x20;
    if (0x80 < uVar2) {
      local_178 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a0 + 0x10),0);
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    if ((FScriptContainerElement *)local_1a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1a0._0_8_);
    }
  }
  return;
}

// SetOutputToBusOnly @ 14786ca90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetOutputToBusOnly(UAudioComponent *this,bool param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  FName local_res8;
  code *local_38 [2];
  undefined **local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if (this_00 != (FAudioDevice *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (StatPtr_STAT_AudioSetOutputToBusOnly ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetOutputToBusOnly(bool)_::_5_::FStat_STAT_AudioSetOutputToBusOnly>
             )0x0) {
          pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetOutputToBusOnly");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetOutputToBusOnly,*pFVar1,
                     L"FAudioThreadTask.SetOutputToBusOnly","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetOutputToBusOnly'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_10 = 0;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetOutputToBusOnly'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_20 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// SetOverrideAttenuation @ 14786cbf0

void __thiscall UAudioComponent::SetOverrideAttenuation(UAudioComponent *this,bool param_1)

{
  FAudioDevice *this_00;
  code *local_38 [2];
  undefined **local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  this->bOverrideAttenuation = '\0';
  this->field_0x4c8 = this->field_0x4c8 | param_1 << 4;
  this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
  if ((this_00 != (FAudioDevice *)0x0) && ((this->field_0x9a & 0x10) != 0)) {
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetOverrideAttenuation'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    local_10 = 0;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetOverrideAttenuation'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_20 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// SetPaused @ 14786cce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetPaused(UAudioComponent *this,bool param_1)

{
  USoundBase *pUVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  TStatId TVar5;
  FName local_res8;
  undefined4 local_res10;
  FString local_88;
  FString local_78;
  undefined1 local_68;
  undefined7 uStack_67;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_res10 = 0;
  if (this->bIsPaused != param_1) {
    this->field_0x4ca = this->field_0x4ca & 0xef | param_1 << 4;
    if ((this->field_0x9a & 0x10) != 0) {
      if (5 < (byte)LogAudio._0_1_) {
        pUVar1 = (this->Sound).field0_0x0.DebugPtr;
        if (pUVar1 != (USoundBase *)0x0) {
          local_res8 = (FName)pUVar1->_padding_;
          ::FName::ToString(&local_res8,&local_88);
        }
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0,None);
        GetAudioTimeSeconds(this);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((pUVar1 != (USoundBase *)0x0) &&
           (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      pFVar3 = (FScriptContainerElement *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))();
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_AudioPauseActiveSound ==
              (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetPaused(bool)_::_29_::FStat_STAT_AudioPauseActiveSound>
               )0x0) {
            pFVar4 = ::FName::FName(&local_res8,"STAT_AudioPauseActiveSound");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioPauseActiveSound,*pFVar4,
                       L"FAudioThreadTask.PauseActiveSound","STATGROUP_AudioThreadCommands",
                       "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        uVar2 = this->AudioComponentID;
        TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioPauseActiveSound;
        if (StatPtr_STAT_AudioPauseActiveSound ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetPaused(bool)_::_29_::FStat_STAT_AudioPauseActiveSound>
             )0x0) {
          pFVar4 = ::FName::FName(&local_res8,"STAT_AudioPauseActiveSound");
          TVar5.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioPauseActiveSound,*pFVar4,
                          L"FAudioThreadTask.PauseActiveSound","STATGROUP_AudioThreadCommands",
                          "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                          MCR_Invalid);
        }
        local_58[0] = (code *)0x0;
        local_78.Data.AllocatorInstance.Data = pFVar3;
        local_78.Data._8_8_ = uVar2;
        local_68 = param_1;
        local_30 = FMemory::Malloc(0x20,8);
        *local_30 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UAudioComponent::SetPaused'::`29'::<lambda_1>,1,1>::
                     _vftable_;
        local_30[1] = local_78.Data.AllocatorInstance.Data;
        local_30[2] = local_78.Data._8_8_;
        local_30[3] = CONCAT71(uStack_67,local_68);
        if (local_30 + 1 != (longlong *)0x0) {
          local_58[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UAudioComponent::SetPaused'::__l29::<lambda_1>,void>::
                        Call;
        }
        FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_58,TVar5)
        ;
      }
    }
    BroadcastPlayState(this);
  }
  return;
}

// SetPitchMultiplier @ 14786d020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetPitchMultiplier(UAudioComponent *this,float param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  TStatId TVar2;
  FName local_res8;
  code *local_48 [2];
  undefined **local_38;
  float local_30;
  undefined8 local_20;
  
  this->PitchMultiplier = param_1;
  this->PitchModulationMax = 1.0;
  this->PitchModulationMin = 1.0;
  if (((this->field_0x9a & 0x10) != 0) &&
     (this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
     this_00 != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioSetPitchMultiplier ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetPitchMultiplier(float)_::_8_::FStat_STAT_AudioSetPitchMultiplier>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetPitchMultiplier");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetPitchMultiplier,*pFVar1,
                   L"FAudioThreadTask.SetPitchMultiplier","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetPitchMultiplier;
    if (StatPtr_STAT_AudioSetPitchMultiplier ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetPitchMultiplier(float)_::_8_::FStat_STAT_AudioSetPitchMultiplier>
         )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetPitchMultiplier");
      TVar2.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetPitchMultiplier,*pFVar1,
                      L"FAudioThreadTask.SetPitchMultiplier","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetPitchMultiplier'::`8'::<lambda_1>,1,0>::
                _vftable_;
    local_20 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetPitchMultiplier'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar2);
  }
  return;
}

// SetPlaybackTimes @ 14786d240

void __thiscall
UAudioComponent::SetPlaybackTimes
          (UAudioComponent *this,
          TMap<unsigned_int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>_>
          *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TMap<unsigned_int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_158;
  undefined4 uStack_124;
  undefined4 uStack_e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  TMap<unsigned_int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,float,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined4 local_64;
  
  local_158 = 1;
  iVar15 = 0;
  puVar3 = &(this->SoundWavePlaybackTimes).field_0x10;
  iVar14 = *(int *)&(this->SoundWavePlaybackTimes).field_0x28;
  iVar17 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar14 != 0) {
    puVar18 = *(uint **)&(this->SoundWavePlaybackTimes).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar7 = *puVar18;
    iVar17 = 0;
    while (uVar7 == 0) {
      lVar10 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar7 = 1;
      iVar8 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14786d2fe;
      uVar7 = puVar18[lVar10 + 1];
    }
    uVar7 = -uVar7 & uVar7;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar17;
    if (iVar14 < iVar8) {
      iVar8 = iVar14;
    }
  }
LAB_14786d2fe:
  uVar13 = *(uint *)&(this->SoundWavePlaybackTimes).field_0x28;
  uVar19 = uVar13 & 0xffffffe0;
  TStack_d8._padding_ = CONCAT44(uVar7,iVar15);
  TStack_d8.CurrentBitIndex = iVar8;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_d8._28_4_ = local_64;
  TStack_d8.BaseBitIndex = iVar17;
  uStack_b8 = CONCAT44(uStack_124,
                       *(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
                       *(int *)&(this->SoundWavePlaybackTimes).field_0x34);
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar13 < 0) || (iVar14 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->SoundWavePlaybackTimes).field_0x28;
  if (uVar13 != uVar7) {
    puVar16 = *(undefined1 **)&(this->SoundWavePlaybackTimes).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14786d412;
      uVar13 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar19;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14786d412:
  iVar14 = 0;
  while( true ) {
    if (*(int *)&(this->SoundWavePlaybackTimes).field_0x8 -
        *(int *)&(this->SoundWavePlaybackTimes).field_0x34 != (int)uStack_b8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_d8.CurrentBitIndex == uVar13) &&
       (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    *(undefined4 *)
     (*(longlong *)&this->SoundWavePlaybackTimes + 0x10 + (longlong)TStack_d8.CurrentBitIndex * 0x28
     ) = 0;
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  iVar15 = *(int *)&param_1->field_0x28;
  puVar3 = &param_1->field_0x10;
  iVar9 = iVar14;
  iVar17 = iVar14;
  if (iVar15 != 0) {
    puVar18 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar7 = *puVar18;
    while (uVar7 == 0) {
      lVar10 = (longlong)iVar14;
      iVar17 = iVar17 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14786d501;
      uVar7 = puVar18[lVar10 + 1];
    }
    local_158 = -uVar7 & uVar7;
    uVar2 = (ulonglong)local_158 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar17 + -1 + (int)lVar10;
    if (iVar15 < iVar9) {
      iVar9 = iVar15;
    }
  }
LAB_14786d501:
  uVar7 = *(uint *)&param_1->field_0x28;
  uVar13 = uVar7 & 0xffffffe0;
  TStack_a8._padding_ = CONCAT44(local_158,iVar14);
  TStack_a8.CurrentBitIndex = iVar9;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar7 >> 5;
  TStack_a8._28_4_ = iVar8;
  TStack_a8.BaseBitIndex = iVar17;
  uStack_88 = CONCAT44(uStack_e4,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_b0 = param_1;
  TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar7 < 0) || (iVar15 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar19 = *(uint *)&param_1->field_0x28;
  if (uVar7 != uVar19) {
    puVar16 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar3;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar7 == 0) {
      lVar10 = (longlong)iVar14;
      uVar13 = uVar13 + 0x20;
      iVar14 = iVar14 + 1;
      uVar7 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14786d60c;
      uVar7 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar7 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar19 < (int)uVar7) {
      uVar7 = uVar19;
    }
  }
LAB_14786d60c:
  do {
    pTVar5 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_a8.CurrentBitIndex == uVar7) &&
        (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar5 == param_1))
    {
      return;
    }
    lVar10 = *(longlong *)pTVar5;
    uVar13 = *(uint *)(lVar10 + (longlong)TStack_a8.CurrentBitIndex * 0x10);
    if (*(int *)&(this->SoundWavePlaybackTimes).field_0x8 !=
        *(int *)&(this->SoundWavePlaybackTimes).field_0x34) {
      puVar16 = *(undefined1 **)&(this->SoundWavePlaybackTimes).field_0x40;
      puVar12 = &(this->SoundWavePlaybackTimes).field_0x38;
      if (puVar16 != (undefined1 *)0x0) {
        puVar12 = puVar16;
      }
      iVar14 = *(int *)(puVar12 +
                       (ulonglong)(*(int *)&(this->SoundWavePlaybackTimes).field_0x48 - 1U & uVar13)
                       * 4);
      if (iVar14 != -1) {
        lVar11 = *(longlong *)&this->SoundWavePlaybackTimes;
        do {
          lVar1 = lVar11 + (longlong)iVar14 * 0x28;
          if (*(uint *)(lVar11 + (longlong)iVar14 * 0x28) == uVar13) {
            lVar11 = lVar1 + 8;
            if (lVar1 == 0) {
              lVar11 = 0;
            }
            if (lVar11 != 0) {
              fVar20 = *(float *)(lVar10 + 4 + (longlong)TStack_a8.CurrentBitIndex * 0x10) -
                       BakedAnalysisTimeShiftCVar;
              if (fVar20 <= 0.0) {
                fVar20 = 0.0;
              }
              *(float *)(lVar11 + 8) = fVar20;
            }
            break;
          }
          iVar14 = *(int *)(lVar1 + 0x20);
        } while (iVar14 != -1);
      }
    }
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
  } while( true );
}

// SetSound @ 14786d910

void __thiscall UAudioComponent::SetSound(UAudioComponent *this,USoundBase *param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))();
  this->bAutoDestroy = '\0';
  if (this->bCanPlayMultipleInstances == '\0') {
    (**(code **)(*(longlong *)this + 0x668))(this);
  }
  this->field_0x4c8 = (this->bAutoDestroy ^ this->bAutoDestroy) & 1 ^ this->field_0x4c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Sound).field0_0x0.DebugPtr = param_1;
  if ((PrimeSoundOnAudioComponentSpawnCVar != 0) && (param_1 != (USoundBase *)0x0)) {
    UGameplayStatics::PrimeSound(param_1);
  }
  if ((cVar2 != '\0') && (this->bCanPlayMultipleInstances == '\0')) {
    (**(code **)(*(longlong *)this + 0x650))(this,0);
  }
  return;
}

// SetSourceBufferListener @ 14786d9f0

void __thiscall
UAudioComponent::SetSourceBufferListener
          (UAudioComponent *this,TSharedPtr<ISourceBufferListener,1> *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  ISourceBufferListener *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SourceBufferListener).SharedReferenceCount.ReferenceController;
  (this->SourceBufferListener).Object = pIVar2;
  (this->SourceBufferListener).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bShouldSourceBufferListenerZeroBuffer = param_2;
  return;
}

// SetSourceBusSendPostEffect @ 14786da50

void __thiscall
UAudioComponent::SetSourceBusSendPostEffect
          (UAudioComponent *this,USoundSourceBus *param_1,float param_2)

{
  SetBusSendEffectInternal(this,param_1,(UAudioBus *)0x0,param_2,PostEffect);
  return;
}

// SetSourceBusSendPreEffect @ 14786da70

void __thiscall
UAudioComponent::SetSourceBusSendPreEffect
          (UAudioComponent *this,USoundSourceBus *param_1,float param_2)

{
  SetBusSendEffectInternal(this,param_1,(UAudioBus *)0x0,param_2,PreEffect);
  return;
}

// SetSourceEffectChain @ 14786da90

void __thiscall
UAudioComponent::SetSourceEffectChain(UAudioComponent *this,USoundEffectSourcePresetChain *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (USoundEffectSourcePresetChain *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->SourceEffectChain).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->SourceEffectChain).field0_0x0.DebugPtr = param_1;
  return;
}

// SetSubmixSend @ 14786db90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioComponent::SetSubmixSend(UAudioComponent *this,USoundSubmixBase *param_1,float param_2)

{
  int *piVar1;
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FAudioDevice *this_00;
  FName *pFVar8;
  TStatId TVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStackY_278 [32];
  FName local_218;
  FName local_210;
  code *local_208 [5];
  undefined8 *local_1e0;
  undefined1 local_1d8 [112];
  void *local_168;
  undefined4 local_160;
  void *local_158;
  ForAnyElementType local_140;
  TObjectPtr<UCurveFloat>_u_0 local_130;
  FScriptContainerElement local_128;
  FScriptContainerElement local_118;
  TObjectPtr<USoundSubmixBase>_u_0 local_110;
  float local_108;
  FScriptContainerElement local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [72];
  void *local_a8;
  undefined4 local_a0;
  void *local_98;
  ForAnyElementType local_80;
  TObjectPtr<UCurveFloat>_u_0 local_70;
  FScriptContainerElement local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  FSoundSubmixSendInfoBase::FSoundSubmixSendInfoBase((FSoundSubmixSendInfoBase *)local_1d8);
  local_128 = (FScriptContainerElement)0x0;
  local_1d8._8_8_ = param_1;
  local_1d8._16_4_ = param_2;
  cVar5 = (**(code **)(*(longlong *)&this->field_0x250 + 0xa8))(&this->field_0x250);
  if (cVar5 == '\0') {
    pTVar2 = &this->PendingSubmixSends;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_1d8) &&
       ((FScriptContainerElement *)local_1d8 <
        pFVar3 + (longlong)(this->PendingSubmixSends).ArrayMax * 0xb8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->PendingSubmixSends).ArrayNum;
    piVar1 = &(this->PendingSubmixSends).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b8,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar11 = (longlong)iVar7 * 0xb8;
    (this->PendingSubmixSends).ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pFVar3[lVar11] = local_1d8[0];
    ((TObjectPtr<USoundSubmixBase>_u_0 *)(pFVar3 + lVar11 + 8))->DebugPtr =
         (USoundSubmixBase *)local_1d8._8_8_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((USoundSubmixBase *)local_1d8._8_8_ != (USoundSubmixBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1d8._8_8_);
    }
    *(undefined4 *)(pFVar3 + lVar11 + 0x10) = local_1d8._16_4_;
    pFVar3[lVar11 + 0x14] = local_1d8[0x14];
    *(undefined4 *)(pFVar3 + lVar11 + 0x18) = local_1d8._24_4_;
    *(undefined4 *)(pFVar3 + lVar11 + 0x1c) = local_1d8._28_4_;
    *(undefined4 *)(pFVar3 + lVar11 + 0x20) = local_1d8._32_4_;
    *(undefined4 *)(pFVar3 + lVar11 + 0x24) = local_1d8._36_4_;
    FRichCurve::FRichCurve((FRichCurve *)(pFVar3 + lVar11 + 0x28),(FRichCurve *)(local_1d8 + 0x28));
    ((TObjectPtr<UCurveFloat>_u_0 *)(pFVar3 + lVar11 + 0xa8))->DebugPtr = (UCurveFloat *)local_130;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_130.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_130.DebugPtr);
    }
    pFVar3[lVar11 + 0xb0] = local_128;
  }
  else {
    this_00 = (FAudioDevice *)
              (**(code **)(*(longlong *)&this->field_0x250 + 0x88))(&this->field_0x250);
    if (this_00 != (FAudioDevice *)0x0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          if (StatPtr_STAT_SetSubmixSend ==
              (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetSubmixSend(USoundSubmixBase_*,float)_::_8_::FStat_STAT_SetSubmixSend>
               )0x0) {
            pFVar8 = ::FName::FName(&local_218,"STAT_SetSubmixSend");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetSubmixSend,*pFVar8,
                       L"FAudioThreadTask.AudioSetSubmixSend","STATGROUP_AudioThreadCommands",
                       "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
      }
      TVar9.StatIdPtr = (TStatIdData *)StatPtr_STAT_SetSubmixSend;
      if (StatPtr_STAT_SetSubmixSend ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetSubmixSend(USoundSubmixBase_*,float)_::_8_::FStat_STAT_SetSubmixSend>
           )0x0) {
        pFVar8 = ::FName::FName(&local_210,"STAT_SetSubmixSend");
        TVar9.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetSubmixSend,*pFVar8,
                        L"FAudioThreadTask.AudioSetSubmixSend","STATGROUP_AudioThreadCommands",
                        "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      local_118 = local_1d8[0];
      local_110.DebugPtr = (USoundSubmixBase *)local_1d8._8_8_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((USoundSubmixBase *)local_1d8._8_8_ != (USoundSubmixBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1d8._8_8_);
      }
      local_108 = (float)local_1d8._16_4_;
      local_100 = CONCAT44(local_1d8._28_4_,local_1d8._24_4_);
      uStack_f8 = CONCAT44(local_1d8._36_4_,local_1d8._32_4_);
      local_104 = local_1d8[0x14];
      FRichCurve::FRichCurve((FRichCurve *)local_f0,(FRichCurve *)(local_1d8 + 0x28));
      local_70.DebugPtr = local_130.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_130.DebugPtr != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_130.DebugPtr);
      }
      local_68 = local_128;
      local_208[0] = (code *)0x0;
      puVar10 = FMemory::Malloc(0xc0,8);
      *puVar10 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponent::SetSubmixSend'::`8'::<lambda_1>,1,1>::
                  _vftable_;
      *(FScriptContainerElement *)(puVar10 + 1) = local_118;
      ((TObjectPtr<USoundSubmixBase>_u_0 *)(puVar10 + 2))->DebugPtr = (USoundSubmixBase *)local_110;
      local_1e0 = puVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_110.DebugPtr != (USoundSubmixBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_110.DebugPtr);
      }
      *(float *)(puVar10 + 3) = local_108;
      *(FScriptContainerElement *)((longlong)puVar10 + 0x1c) = local_104;
      *(undefined4 *)(puVar10 + 4) = (undefined4)local_100;
      *(undefined4 *)((longlong)puVar10 + 0x24) = local_100._4_4_;
      *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_f8;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_f8._4_4_;
      FRuntimeFloatCurve::FRuntimeFloatCurve
                ((FRuntimeFloatCurve *)(puVar10 + 6),(FRuntimeFloatCurve *)local_f0);
      *(FScriptContainerElement *)(puVar10 + 0x17) = local_68;
      if ((FScriptContainerElement *)(puVar10 + 1) != (FScriptContainerElement *)0x0) {
        local_208[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UAudioComponent::SetSubmixSend'::__l8::<lambda_1>,void,FActiveSound_&>
                       ::Call;
      }
      FAudioDevice::SendCommandToActiveSounds
                (this_00,this->AudioComponentID,
                 (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_208,TVar9);
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      local_f0._0_8_ = &___7FIndexedCurve__6B_;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      local_a0 = 0;
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_f0 + 8));
    }
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  local_1d8._40_8_ = &___7FIndexedCurve__6B_;
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  local_160 = 0;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1d8 + 0x30));
  return;
}

// SetUISound @ 14786e280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetUISound(UAudioComponent *this,bool param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  TStatId TVar2;
  FName local_res8;
  code *local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined8 local_20;
  
  this->bIsUISound = '\0';
  this->field_0x4c8 = this->field_0x4c8 | param_1 << 6;
  if (((this->field_0x9a & 0x10) != 0) &&
     (this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
     this_00 != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioSetIsUISound ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetUISound(bool)_::_8_::FStat_STAT_AudioSetIsUISound>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetIsUISound");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetIsUISound,*pFVar1,
                   L"FAudioThreadTask.SetIsUISound","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetIsUISound;
    if (StatPtr_STAT_AudioSetIsUISound ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetUISound(bool)_::_8_::FStat_STAT_AudioSetIsUISound>
         )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetIsUISound");
      TVar2.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetIsUISound,*pFVar1,
                      L"FAudioThreadTask.SetIsUISound","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetUISound'::`8'::<lambda_1>,1,0>::_vftable_
    ;
    local_20 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetUISound'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar2);
  }
  return;
}

// SetVolumeMultiplier @ 14786eb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::SetVolumeMultiplier(UAudioComponent *this,float param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  TStatId TVar2;
  FName local_res8;
  code *local_48 [2];
  undefined **local_38;
  float local_30;
  undefined8 local_20;
  
  this->VolumeMultiplier = param_1;
  this->VolumeModulationMax = 1.0;
  this->VolumeModulationMin = 1.0;
  if (((this->field_0x9a & 0x10) != 0) &&
     (this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
     this_00 != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioSetVolumeMultiplier ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetVolumeMultiplier(float)_::_8_::FStat_STAT_AudioSetVolumeMultiplier>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetVolumeMultiplier");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetVolumeMultiplier,*pFVar1,
                   L"FAudioThreadTask.SetVolumeMultiplier","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetVolumeMultiplier;
    if (StatPtr_STAT_AudioSetVolumeMultiplier ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetVolumeMultiplier(float)_::_8_::FStat_STAT_AudioSetVolumeMultiplier>
         )0x0) {
      pFVar1 = ::FName::FName(&local_res8,"STAT_AudioSetVolumeMultiplier");
      TVar2.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetVolumeMultiplier,*pFVar1,
                      L"FAudioThreadTask.SetVolumeMultiplier","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetVolumeMultiplier'::`8'::<lambda_1>,1,0>::
                _vftable_;
    local_20 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetVolumeMultiplier'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_30 = param_1;
    FAudioDevice::SendCommandToActiveSounds
              (this_00,this->AudioComponentID,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar2);
  }
  return;
}

// SetWaveParameter @ 14786ee30

void __thiscall
UAudioComponent::SetWaveParameter(UAudioComponent *this,FName param_1,USoundWave *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014786ee3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->field_0x250 + 0x60))();
  return;
}

// StaticRegisterNativesUAudioComponent @ 147875920

void __cdecl UAudioComponent::StaticRegisterNativesUAudioComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2c;
  local_18.DataPtr = Z_Construct_UClass_UAudioComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 147876790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::Stop(UAudioComponent *this)

{
  int iVar1;
  USoundBase *pUVar2;
  FAudioDevice *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this->field_0x9a & 0x10) == 0) {
    iVar1 = (this->PendingQuartzCommandData).ArrayNum;
    pFVar3 = (this->PendingQuartzCommandData).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x58;
    while( true ) {
      if ((this->PendingQuartzCommandData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UAudioComponent::FAudioComponentPendingQuartzCommandData,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar3 == pFVar4) break;
      pFVar3[0x54] = (FScriptContainerElement)0x1;
      pFVar3 = pFVar3 + 0x58;
    }
  }
  else {
    this_00 = (FAudioDevice *)
              (**(code **)(*(longlong *)&this->field_0x250 + 0x88))(&this->field_0x250);
    if (this_00 != (FAudioDevice *)0x0) {
      if (this->bIsPreviewSound != '\0') {
        (**(code **)(*(longlong *)&this->field_0x250 + 0x10))(&this->field_0x250);
      }
      this->field_0x9a = this->field_0x9a & 0xef;
      if (5 < (byte)LogAudio._0_1_) {
        pUVar2 = (this->Sound).field0_0x0.DebugPtr;
        if (pUVar2 != (USoundBase *)0x0) {
          local_res8 = (FName)pUVar2->_padding_;
          ::FName::ToString(&local_res8,&local_38);
        }
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
        GetAudioTimeSeconds(this);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if ((pUVar2 != (USoundBase *)0x0) &&
           (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      FAudioDevice::StopActiveSound
                (this_00,this->AudioComponentID,
                 &Audio::Trace::EventLog::ID::StopRequestAudioComponent);
      BroadcastPlayState(this);
    }
  }
  return;
}

// StopDelayed @ 1478769b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioComponent::StopDelayed(UAudioComponent *this,float param_1)

{
  FAudioDevice *this_00;
  FName *pFVar1;
  TStatId TVar2;
  FName local_res18;
  code *local_48 [2];
  undefined **local_38;
  float local_30;
  undefined8 local_20;
  
  if ((0.0 <= param_1) &&
     (__real_322bcc77 < (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if (((this->field_0x9a & 0x10) != 0) &&
       (this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
       this_00 != (FAudioDevice *)0x0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (StatPtr_STAT_AudioStopDelayed ==
            (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::StopDelayed(float)_::_2_::FStat_STAT_AudioStopDelayed>
             )0x0) {
          pFVar1 = ::FName::FName(&local_res18,"STAT_AudioStopDelayed");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStopDelayed,*pFVar1,
                     L"FAudioThreadTask.StopDelayed","STATGROUP_AudioThreadCommands",
                     "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                     MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
      TVar2.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioStopDelayed;
      if (StatPtr_STAT_AudioStopDelayed ==
          (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::StopDelayed(float)_::_2_::FStat_STAT_AudioStopDelayed>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res18,"STAT_AudioStopDelayed");
        TVar2.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStopDelayed,*pFVar1,
                        L"FAudioThreadTask.StopDelayed","STATGROUP_AudioThreadCommands",
                        "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponent::StopDelayed'::`2'::<lambda_1>,1,0>::
                  _vftable_;
      local_20 = 0;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioComponent::StopDelayed'::__l2::<lambda_1>,void,FActiveSound_&>
                    ::Call;
      local_30 = param_1;
      FAudioDevice::SendCommandToActiveSounds
                (this_00,this->AudioComponentID,
                 (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,TVar2);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147876b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x668))();
  return;
}

// _getUObject @ 147880e10

UObject * __thiscall UAudioComponent::_getUObject(UAudioComponent *this)

{
  return (UObject *)&this[-1].PendingSubmixSends.ArrayNum;
}

// _getUObject`adjustor{552}' @ 147880e1c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAudioComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UAudioComponent::_getUObject_adjustor_552__(UAudioComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAudioComponent *)&this[-1].OnAudioVirtualizationChangedNative.field_0x8);
  return (UObject *)pUVar1;
}

// execAddModulationRouting @ 1478810b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAudioComponent::execAddModulationRouting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 auStackY_b8 [32];
  EModulationDestination local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_88[0] = Volume;
  pTVar3 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *)
      0x0) {
    pTVar3 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddModulationRouting((UAudioComponent *)param_1,pTVar3,local_88[0]);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execAdjustAttenuation @ 147881390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioComponent::execAdjustAttenuation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioDevice *this;
  FName *pFVar2;
  TStatId TVar3;
  FSoundAttenuationSettings *pFVar4;
  undefined1 auStackY_878 [32];
  FName local_818 [2];
  code *local_808 [5];
  undefined8 *local_7e0;
  FSoundAttenuationSettings local_7d8;
  FSoundAttenuationSettings local_408;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_878;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&local_7d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7d8);
  }
  pFVar4 = &local_7d8;
  if ((FSoundAttenuationSettings *)param_2->MostRecentPropertyAddress !=
      (FSoundAttenuationSettings *)0x0) {
    pFVar4 = (FSoundAttenuationSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1e].field_0x18 = param_1[0x1e].field_0x18 | 0x10;
  FSoundAttenuationSettings::operator=
            ((FSoundAttenuationSettings *)&param_1[0x20].field_0x20,pFVar4);
  if (((param_1[3].field_0x22 & 0x10) != 0) &&
     (this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))(),
     this != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioAdjustAttenuation =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::AdjustAttenuation(FSoundAttenuationSettings_const_&)_::_8_::FStat_STAT_AudioAdjustAttenuation>
            )0x0;
      pFVar2 = ::FName::FName(local_818,"STAT_AudioAdjustAttenuation");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAdjustAttenuation,*pFVar2,
                 L"FAudioThreadTask.AdjustAttenuation","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioAdjustAttenuation;
    if (StatPtr_STAT_AudioAdjustAttenuation ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::AdjustAttenuation(FSoundAttenuationSettings_const_&)_::_8_::FStat_STAT_AudioAdjustAttenuation>
         )0x0) {
      pFVar2 = ::FName::FName(local_818,"STAT_AudioAdjustAttenuation");
      TVar3.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAdjustAttenuation,*pFVar2,
                      L"FAudioThreadTask.AdjustAttenuation","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    FSoundAttenuationSettings::FSoundAttenuationSettings(&local_408,pFVar4);
    local_808[0] = (code *)0x0;
    local_7e0 = FMemory::Malloc(0x3d8,8);
    pFVar4 = (FSoundAttenuationSettings *)(local_7e0 + 1);
    *local_7e0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponent::AdjustAttenuation'::`8'::<lambda_1>,1,1>::
                  _vftable_;
    FSoundAttenuationSettings::FSoundAttenuationSettings(pFVar4,&local_408);
    if (pFVar4 != (FSoundAttenuationSettings *)0x0) {
      local_808[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UAudioComponent::AdjustAttenuation'::__l8::<lambda_1>,void,FActiveSound_&>
                     ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_808,TVar3);
    FSoundAttenuationSettings::~FSoundAttenuationSettings(&local_408);
  }
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&local_7d8);
  return;
}

// execAdjustVolume @ 147881690

void __cdecl UAudioComponent::execAdjustVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EAudioFaderCurve local_res10 [16];
  float local_res20 [2];
  float local_18 [4];
  
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = Linear;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AdjustVolumeInternal((UAudioComponent *)param_1,local_18[0],local_res20[0],false,local_res10[0]);
  return;
}

// execBP_GetAttenuationSettingsToApply @ 1478817b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAudioComponent::execBP_GetAttenuationSettingsToApply
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FSoundAttenuationSettings *pFVar3;
  FSoundAttenuationSettings *this;
  undefined1 auStack_428 [32];
  FSoundAttenuationSettings local_408;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_428;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&local_408);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_408,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_408);
  }
  this = &local_408;
  if ((FSoundAttenuationSettings *)param_2->MostRecentPropertyAddress !=
      (FSoundAttenuationSettings *)0x0) {
    this = (FSoundAttenuationSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x1e].field_0x18 & 0x10) == 0) {
    if (*(longlong *)&param_1[0x20].field_0x18 != 0) {
      pFVar3 = (FSoundAttenuationSettings *)(*(longlong *)&param_1[0x20].field_0x18 + 0x28);
      goto LAB_14788187d;
    }
    if (*(longlong **)&param_1[0x1d].field_0x10 != (longlong *)0x0) {
      pFVar3 = (FSoundAttenuationSettings *)
               (**(code **)(**(longlong **)&param_1[0x1d].field_0x10 + 0x2c8))();
      goto LAB_14788187d;
    }
  }
  else {
    pFVar3 = (FSoundAttenuationSettings *)&param_1[0x20].field_0x20;
LAB_14788187d:
    if (pFVar3 != (FSoundAttenuationSettings *)0x0) {
      FSoundAttenuationSettings::operator=(this,pFVar3);
      uVar2 = 1;
      goto LAB_147881893;
    }
  }
  uVar2 = 0;
LAB_147881893:
  *(undefined1 *)param_3 = uVar2;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&local_408);
  return;
}

// execFadeIn @ 147881e10

void __cdecl UAudioComponent::execFadeIn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x640))
            (param_1,local_18[0],local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execFadeOut @ 147881f80

void __cdecl UAudioComponent::execFadeOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x648))(param_1,local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execGetCookedEnvelopeData @ 147882130

void __cdecl
UAudioComponent::execGetCookedEnvelopeData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCookedEnvelopeData((UAudioComponent *)param_1,pfVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCookedEnvelopeDataForAllPlayingSounds @ 1478821e0

void __cdecl
UAudioComponent::execGetCookedEnvelopeDataForAllPlayingSounds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FSoundWaveEnvelopeDataPerSound,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSoundWaveEnvelopeDataPerSound,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<FSoundWaveEnvelopeDataPerSound,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FSoundWaveEnvelopeDataPerSound,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FSoundWaveEnvelopeDataPerSound,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCookedEnvelopeDataForAllPlayingSounds((UAudioComponent *)param_1,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCookedFFTData @ 1478822a0

void __cdecl UAudioComponent::execGetCookedFFTData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> local_28;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar4 = &local_28;
  if ((TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCookedFFTData((UAudioComponent *)param_1,pTVar3,pTVar4);
  *(bool *)param_3 = bVar2;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCookedFFTDataForAllPlayingSounds @ 1478823d0

void __cdecl
UAudioComponent::execGetCookedFFTDataForAllPlayingSounds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FSoundWaveSpectralDataPerSound,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSoundWaveSpectralDataPerSound,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<FSoundWaveSpectralDataPerSound,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FSoundWaveSpectralDataPerSound,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FSoundWaveSpectralDataPerSound,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCookedFFTDataForAllPlayingSounds((UAudioComponent *)param_1,pTVar3);
  *(bool *)param_3 = bVar2;
  DestructItems<FSoundWaveSpectralDataPerSound,int>
            ((FSoundWaveSpectralDataPerSound *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FSoundWaveSpectralDataPerSound *)local_18.AllocatorInstance.Data !=
      (FSoundWaveSpectralDataPerSound *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetModulators @ 1478827f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UAudioComponent::execGetModulators(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 auStack_a8 [32];
  EModulationDestination local_88 [16];
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> local_78
  ;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = Volume;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetModulators((UAudioComponent *)param_1,&local_78,local_88[0]);
  if (param_3 != pTVar2) {
    TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>::
    Move<TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_>
              (param_3,pTVar2);
  }
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  return;
}

// execGetPlayState @ 147882970

void __cdecl UAudioComponent::execGetPlayState(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  float fVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[3].field_0x22 & 0x10) == 0) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  if ((param_1[0x1e].field_0x1a & 0x10) != 0) {
    *(undefined1 *)param_3 = 2;
    return;
  }
  if ((param_1[0x1e].field_0x1a & 0x40) != 0) {
    *(undefined1 *)param_3 = 4;
    return;
  }
  fVar2 = GetAudioTimeSeconds((UAudioComponent *)param_1);
  uVar1 = 0;
  if (fVar2 - *(float *)&param_1[0x3b].field_0x14 < *(float *)&param_1[0x3b].field_0x18) {
    uVar1 = 3;
  }
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execHasCookedAmplitudeEnvelopeData @ 1478831d0

void __cdecl
UAudioComponent::execHasCookedAmplitudeEnvelopeData(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x1d].field_0x10 != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)&param_1[0x1d].field_0x10 + 0x350))();
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasCookedFFTData @ 147883220

void __cdecl UAudioComponent::execHasCookedFFTData(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x1d].field_0x10 != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)&param_1[0x1d].field_0x10 + 0x348))();
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsPlaying @ 147883340

void __cdecl UAudioComponent::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0xa8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsVirtualized @ 147883380

void __cdecl UAudioComponent::execIsVirtualized(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[0x1e].field_0x1a >> 5 & 1;
  return;
}

// execPlay @ 147883ae0

void __cdecl UAudioComponent::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x650))(param_1,local_res8[0]);
  return;
}

// execPlayQuantized @ 147883b70

void __cdecl UAudioComponent::execPlayQuantized(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar *puVar7;
  uchar *puVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_e8 [2];
  uchar local_e0 [8];
  undefined8 local_d8;
  uchar local_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  FQuartzGameThreadSubscriber *local_c0;
  undefined8 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  FMRSWRecursiveAccessDetector local_98;
  atomic<unsigned___int64> local_90;
  atomic<unsigned___int64> local_88;
  FReadAccessScope local_80 [3];
  
  local_d8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e0[0] = '\0';
  local_e0[1] = '\0';
  local_e0[2] = '\0';
  local_e0[3] = '\0';
  local_e0[4] = '\0';
  local_e0[5] = '\0';
  local_e0[6] = '\0';
  local_e0[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  local_d0[0] = '\x13';
  local_cc = 0x3f800000;
  puVar7 = local_e0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  local_c8 = 0x100;
  local_c4 = 0;
  local_c0 = (FQuartzGameThreadSubscriber *)0x0;
  local_b8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d0);
  }
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a8 = 0;
  puVar8 = local_d0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_e8[0] = 0;
  this = &local_b0;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  uVar6 = local_e8[0];
  uVar5 = local_res20[0];
  uVar4 = local_res10[0];
  uVar3 = local_res8[0];
  local_98.State = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x658);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,local_80);
  local_90 = this[1].AccessDetector.State;
  local_88 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_80);
  (*pcVar2)(param_1,local_d8,puVar7,puVar8,&local_98,uVar6,uVar5,uVar4,uVar3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>(local_c0,(int)local_b8);
  if (local_c0 != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// execRemoveModulationRouting @ 147883ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAudioComponent::execRemoveModulationRouting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 auStackY_b8 [32];
  EModulationDestination local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_88[0] = Volume;
  pTVar3 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *)
      0x0) {
    pTVar3 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveModulationRouting((UAudioComponent *)param_1,pTVar3,local_88[0]);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execSetAttenuationOverrides @ 1478844f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAudioComponent::execSetAttenuationOverrides(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioDevice *this;
  FSoundAttenuationSettings *pFVar2;
  undefined1 auStack_818 [32];
  code *local_7f8 [5];
  undefined8 *local_7d0;
  FSoundAttenuationSettings local_7c8;
  FSoundAttenuationSettings local_3f8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_818;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&local_7c8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7c8);
  }
  pFVar2 = &local_7c8;
  if ((FSoundAttenuationSettings *)param_2->MostRecentPropertyAddress !=
      (FSoundAttenuationSettings *)0x0) {
    pFVar2 = (FSoundAttenuationSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSoundAttenuationSettings::operator=
            ((FSoundAttenuationSettings *)&param_1[0x20].field_0x20,pFVar2);
  this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))();
  if ((this != (FAudioDevice *)0x0) && ((param_1[3].field_0x22 & 0x10) != 0)) {
    FSoundAttenuationSettings::FSoundAttenuationSettings(&local_3f8,pFVar2);
    local_7f8[0] = (code *)0x0;
    local_7d0 = FMemory::Malloc(0x3d8,8);
    pFVar2 = (FSoundAttenuationSettings *)(local_7d0 + 1);
    *local_7d0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponent::SetAttenuationOverrides'::`8'::<lambda_1>,1,1>
                  ::_vftable_;
    FSoundAttenuationSettings::FSoundAttenuationSettings(pFVar2,&local_3f8);
    if (pFVar2 != (FSoundAttenuationSettings *)0x0) {
      local_7f8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UAudioComponent::SetAttenuationOverrides'::__l8::<lambda_1>,void,FActiveSound_&>
                     ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_7f8,(TStatId)0x154f11430);
    FSoundAttenuationSettings::~FSoundAttenuationSettings(&local_3f8);
  }
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&local_7c8);
  return;
}

// execSetAttenuationSettings @ 147884680

void __cdecl
UAudioComponent::execSetAttenuationSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FAudioDevice *this;
  UObject *local_res8;
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined8 local_10;
  
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
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0x20].field_0x18 = pUVar2;
  this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))();
  if ((this != (FAudioDevice *)0x0) && ((param_1[3].field_0x22 & 0x10) != 0)) {
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetAttenuationSettings'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    local_10 = 0;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetAttenuationSettings'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_20 = pUVar2;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// execSetAudioBusSendPostEffect @ 147884780

void __cdecl
UAudioComponent::execSetAudioBusSendPostEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  UAudioBus *local_res20;
  
  local_res20 = (UAudioBus *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  SetBusSendEffectInternal
            ((UAudioComponent *)param_1,(USoundSourceBus *)0x0,local_res20,local_res10[0],PostEffect
            );
  return;
}

// execSetAudioBusSendPreEffect @ 147884860

void __cdecl
UAudioComponent::execSetAudioBusSendPreEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  UAudioBus *local_res20;
  
  local_res20 = (UAudioBus *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  SetBusSendEffectInternal
            ((UAudioComponent *)param_1,(USoundSourceBus *)0x0,local_res20,local_res10[0],PreEffect)
  ;
  return;
}

// execSetBoolParameter @ 147884c70

void __cdecl UAudioComponent::execSetBoolParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  (**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x20))
            (&param_1[0xe].field_0x20,local_res10,local_res8[0] != 0);
  return;
}

// execSetFloatParameter @ 147885400

void __cdecl UAudioComponent::execSetFloatParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  (**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x40))
            (&param_1[0xe].field_0x20,local_res10,local_res8[0]);
  return;
}

// execSetHighPassFilterEnabled @ 1478857e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioComponent::execSetHighPassFilterEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioDevice *this;
  FName *pFVar2;
  TStatId TVar3;
  bool bVar4;
  int local_res8 [2];
  FName local_res10;
  code *local_58 [2];
  undefined **local_48;
  undefined1 local_40;
  undefined8 local_30;
  
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
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))();
  if (this != (FAudioDevice *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetHighPassFilterEnabled =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetHighPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetHighPassFilterEnabled>
            )0x0;
      pFVar2 = ::FName::FName(&local_res10,"STAT_AudioSetHighPassFilterEnabled");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetHighPassFilterEnabled,*pFVar2,
                 L"FAudioThreadTask.SetHighPassFilterFrequency","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetHighPassFilterEnabled;
    if (StatPtr_STAT_AudioSetHighPassFilterEnabled ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetHighPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetHighPassFilterEnabled>
         )0x0) {
      pFVar2 = ::FName::FName(&local_res10,"STAT_AudioSetHighPassFilterEnabled");
      TVar3.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetHighPassFilterEnabled,
                      *pFVar2,L"FAudioThreadTask.SetHighPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetHighPassFilterEnabled'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetHighPassFilterEnabled'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_40 = bVar4;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_58,TVar3);
  }
  return;
}

// execSetHighPassFilterFrequency @ 147885a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioComponent::execSetHighPassFilterFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  FAudioDevice *this;
  FName *pFVar3;
  TStatId TVar4;
  undefined4 local_res8 [2];
  FName local_res10;
  code *local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined8 local_30;
  
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
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))();
  if (this != (FAudioDevice *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetHighPassFilterFrequency =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetHighPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetHighPassFilterFrequency>
            )0x0;
      pFVar3 = ::FName::FName(&local_res10,"STAT_AudioSetHighPassFilterFrequency");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetHighPassFilterFrequency,*pFVar3,
                 L"FAudioThreadTask.SetHighPassFilterFrequency","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetHighPassFilterFrequency;
    if (StatPtr_STAT_AudioSetHighPassFilterFrequency ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetHighPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetHighPassFilterFrequency>
         )0x0) {
      pFVar3 = ::FName::FName(&local_res10,"STAT_AudioSetHighPassFilterFrequency");
      TVar4.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetHighPassFilterFrequency,
                      *pFVar3,L"FAudioThreadTask.SetHighPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetHighPassFilterFrequency'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetHighPassFilterFrequency'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_40 = uVar2;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_58,TVar4);
  }
  return;
}

// execSetIntParameter @ 147885c70

void __cdecl UAudioComponent::execSetIntParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
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
  (**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x30))
            (&param_1[0xe].field_0x20,local_res10,local_res8[0]);
  return;
}

// execSetLowPassFilterEnabled @ 147885e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioComponent::execSetLowPassFilterEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioDevice *this;
  FName *pFVar2;
  TStatId TVar3;
  bool bVar4;
  int local_res8 [2];
  FName local_res10;
  code *local_58 [2];
  undefined **local_48;
  undefined1 local_40;
  undefined8 local_30;
  
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
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))();
  if (this != (FAudioDevice *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetLowPassFilterEnabled =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetLowPassFilterEnabled>
            )0x0;
      pFVar2 = ::FName::FName(&local_res10,"STAT_AudioSetLowPassFilterEnabled");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterEnabled,*pFVar2,
                 L"FAudioThreadTask.SetLowPassFilterFrequency","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetLowPassFilterEnabled;
    if (StatPtr_STAT_AudioSetLowPassFilterEnabled ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterEnabled(bool)_::_5_::FStat_STAT_AudioSetLowPassFilterEnabled>
         )0x0) {
      pFVar2 = ::FName::FName(&local_res10,"STAT_AudioSetLowPassFilterEnabled");
      TVar3.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterEnabled,
                      *pFVar2,L"FAudioThreadTask.SetLowPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetLowPassFilterEnabled'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetLowPassFilterEnabled'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_40 = bVar4;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_58,TVar3);
  }
  return;
}

// execSetLowPassFilterFrequency @ 1478860c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioComponent::execSetLowPassFilterFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  FAudioDevice *this;
  FName *pFVar3;
  TStatId TVar4;
  undefined4 local_res8 [2];
  FName local_res10;
  code *local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined8 local_30;
  
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
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))();
  if (this != (FAudioDevice *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetLowPassFilterFrequency =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetLowPassFilterFrequency>
            )0x0;
      pFVar3 = ::FName::FName(&local_res10,"STAT_AudioSetLowPassFilterFrequency");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterFrequency,*pFVar3,
                 L"FAudioThreadTask.SetLowPassFilterFrequency","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetLowPassFilterFrequency;
    if (StatPtr_STAT_AudioSetLowPassFilterFrequency ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetLowPassFilterFrequency(float)_::_5_::FStat_STAT_AudioSetLowPassFilterFrequency>
         )0x0) {
      pFVar3 = ::FName::FName(&local_res10,"STAT_AudioSetLowPassFilterFrequency");
      TVar4.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetLowPassFilterFrequency,
                      *pFVar3,L"FAudioThreadTask.SetLowPassFilterFrequency",
                      "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                      true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetLowPassFilterFrequency'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetLowPassFilterFrequency'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_40 = uVar2;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_58,TVar4);
  }
  return;
}

// execSetModulationRouting @ 147886310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAudioComponent::execSetModulationRouting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *pTVar3;
  undefined1 auStackY_b8 [32];
  EModulationRouting local_88;
  EModulationDestination local_87 [15];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_87[0] = Volume;
  pTVar3 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator> *)
      0x0) {
    pTVar3 = (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_87,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_87);
  }
  local_88 = Disable;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetModulationRouting((UAudioComponent *)param_1,pTVar3,local_87[0],local_88);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execSetOutputToBusOnly @ 147886670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioComponent::execSetOutputToBusOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioDevice *this;
  FName *pFVar2;
  bool bVar3;
  int local_res8 [2];
  FName local_res10;
  code *local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined8 local_20;
  
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
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))();
  if (this != (FAudioDevice *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetOutputToBusOnly =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetOutputToBusOnly(bool)_::_5_::FStat_STAT_AudioSetOutputToBusOnly>
            )0x0;
      pFVar2 = ::FName::FName(&local_res10,"STAT_AudioSetOutputToBusOnly");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetOutputToBusOnly,*pFVar2,
                 L"FAudioThreadTask.SetOutputToBusOnly","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetOutputToBusOnly'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_20 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetOutputToBusOnly'::__l5::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_30 = bVar3;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_48,(TStatId)0x154f11430);
  }
  return;
}

// execSetOverrideAttenuation @ 147886830

void __cdecl
UAudioComponent::execSetOverrideAttenuation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioDevice *this;
  bool bVar2;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  undefined1 local_20;
  undefined8 local_10;
  
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
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1e].field_0x18 = param_1[0x1e].field_0x18 & 0xef;
  param_1[0x1e].field_0x18 = param_1[0x1e].field_0x18 | bVar2 << 4;
  this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))();
  if ((this != (FAudioDevice *)0x0) && ((param_1[3].field_0x22 & 0x10) != 0)) {
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetOverrideAttenuation'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    local_10 = 0;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetOverrideAttenuation'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_20 = bVar2;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_38,(TStatId)0x154f11430);
  }
  return;
}

// execSetPaused @ 147886920

void __cdecl UAudioComponent::execSetPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  SetPaused((UAudioComponent *)param_1,local_res10[0] != 0);
  return;
}

// execSetPitchMultiplier @ 1478869b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioComponent::execSetPitchMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  FAudioDevice *this;
  FName *pFVar4;
  TStatId TVar5;
  undefined4 local_res8 [2];
  FName local_res10;
  code *local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined8 local_30;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = param_1[3].field_0x22;
  *(undefined4 *)&param_1[0x20].field_0x8 = local_res8[0];
  *(undefined4 *)&param_1[0x1f].field_0x4 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  if (((bVar1 & 0x10) != 0) &&
     (this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))(),
     this != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetPitchMultiplier =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetPitchMultiplier(float)_::_8_::FStat_STAT_AudioSetPitchMultiplier>
            )0x0;
      pFVar4 = ::FName::FName(&local_res10,"STAT_AudioSetPitchMultiplier");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetPitchMultiplier,*pFVar4,
                 L"FAudioThreadTask.SetPitchMultiplier","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetPitchMultiplier;
    if (StatPtr_STAT_AudioSetPitchMultiplier ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetPitchMultiplier(float)_::_8_::FStat_STAT_AudioSetPitchMultiplier>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res10,"STAT_AudioSetPitchMultiplier");
      TVar5.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetPitchMultiplier,*pFVar4,
                      L"FAudioThreadTask.SetPitchMultiplier","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetPitchMultiplier'::`8'::<lambda_1>,1,0>::
                _vftable_;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetPitchMultiplier'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_40 = uVar3;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_58,TVar5);
  }
  return;
}

// execSetSound @ 147886cc0

void __cdecl UAudioComponent::execSetSound(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  USoundBase *pUVar3;
  char cVar4;
  USoundBase *local_res8;
  
  local_res8 = (USoundBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar4 = (**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0xa8))();
  bVar1 = param_1[0x1e].field_0x18;
  param_1[0x1e].field_0x18 = bVar1 & 0xfe;
  if ((param_1[0x1e].field_0x19 & 8) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1);
  }
  param_1[0x1e].field_0x18 = (param_1[0x1e].field_0x18 ^ bVar1) & 1 ^ param_1[0x1e].field_0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USoundBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(USoundBase **)&param_1[0x1d].field_0x10 = pUVar3;
  if ((PrimeSoundOnAudioComponentSpawnCVar != 0) && (pUVar3 != (USoundBase *)0x0)) {
    UGameplayStatics::PrimeSound(pUVar3);
  }
  if ((cVar4 != '\0') && ((param_1[0x1e].field_0x19 & 8) == 0)) {
    (**(code **)(*(longlong *)param_1 + 0x650))(param_1,0);
  }
  return;
}

// execSetSourceBusSendPostEffect @ 147886e00

void __cdecl
UAudioComponent::execSetSourceBusSendPostEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  USoundSourceBus *local_res20;
  
  local_res20 = (USoundSourceBus *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  SetBusSendEffectInternal
            ((UAudioComponent *)param_1,local_res20,(UAudioBus *)0x0,local_res10[0],PostEffect);
  return;
}

// execSetSourceBusSendPreEffect @ 147886ee0

void __cdecl
UAudioComponent::execSetSourceBusSendPreEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  USoundSourceBus *local_res20;
  
  local_res20 = (USoundSourceBus *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  SetBusSendEffectInternal
            ((UAudioComponent *)param_1,local_res20,(UAudioBus *)0x0,local_res10[0],PreEffect);
  return;
}

// execSetSubmixSend @ 1478871f0

void __cdecl UAudioComponent::execSetSubmixSend(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  USoundSubmixBase *local_res20;
  
  local_res20 = (USoundSubmixBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  SetSubmixSend((UAudioComponent *)param_1,local_res20,local_res10[0]);
  return;
}

// execSetUISound @ 147887470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioComponent::execSetUISound(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioDevice *this;
  FName *pFVar2;
  TStatId TVar3;
  bool bVar4;
  int local_res8 [2];
  FName local_res10;
  code *local_58 [2];
  undefined **local_48;
  undefined1 local_40;
  undefined8 local_30;
  
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
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1e].field_0x18 = param_1[0x1e].field_0x18 & 0xbf;
  param_1[0x1e].field_0x18 = param_1[0x1e].field_0x18 | bVar4 << 6;
  if (((param_1[3].field_0x22 & 0x10) != 0) &&
     (this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))(),
     this != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetIsUISound =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetUISound(bool)_::_8_::FStat_STAT_AudioSetIsUISound>
            )0x0;
      pFVar2 = ::FName::FName(&local_res10,"STAT_AudioSetIsUISound");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetIsUISound,*pFVar2,
                 L"FAudioThreadTask.SetIsUISound","STATGROUP_AudioThreadCommands","STATCAT_Advanced"
                 ,L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar3.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetIsUISound;
    if (StatPtr_STAT_AudioSetIsUISound ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetUISound(bool)_::_8_::FStat_STAT_AudioSetIsUISound>
         )0x0) {
      pFVar2 = ::FName::FName(&local_res10,"STAT_AudioSetIsUISound");
      TVar3.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetIsUISound,*pFVar2,
                      L"FAudioThreadTask.SetIsUISound","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetUISound'::`8'::<lambda_1>,1,0>::_vftable_
    ;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetUISound'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_40 = bVar4;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_58,TVar3);
  }
  return;
}

// execSetVolumeMultiplier @ 1478878c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UAudioComponent::execSetVolumeMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  FAudioDevice *this;
  FName *pFVar4;
  TStatId TVar5;
  undefined4 local_res8 [2];
  FName local_res10;
  code *local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined8 local_30;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = param_1[3].field_0x22;
  *(undefined4 *)&param_1[0x1f].field_0x10 = local_res8[0];
  *(undefined4 *)&param_1[0x1f].field_0xc = 0x3f800000;
  *(undefined4 *)&param_1[0x1f].field_0x8 = 0x3f800000;
  if (((bVar1 & 0x10) != 0) &&
     (this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))(),
     this != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioSetVolumeMultiplier =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetVolumeMultiplier(float)_::_8_::FStat_STAT_AudioSetVolumeMultiplier>
            )0x0;
      pFVar4 = ::FName::FName(&local_res10,"STAT_AudioSetVolumeMultiplier");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetVolumeMultiplier,*pFVar4,
                 L"FAudioThreadTask.SetVolumeMultiplier","STATGROUP_AudioThreadCommands",
                 "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar5.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetVolumeMultiplier;
    if (StatPtr_STAT_AudioSetVolumeMultiplier ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::SetVolumeMultiplier(float)_::_8_::FStat_STAT_AudioSetVolumeMultiplier>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res10,"STAT_AudioSetVolumeMultiplier");
      TVar5.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetVolumeMultiplier,*pFVar4,
                      L"FAudioThreadTask.SetVolumeMultiplier","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::SetVolumeMultiplier'::`8'::<lambda_1>,1,0>::
                _vftable_;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::SetVolumeMultiplier'::__l8::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_40 = uVar3;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_58,TVar5);
  }
  return;
}

// execSetWaveParameter @ 147887cd0

void __cdecl UAudioComponent::execSetWaveParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = 0;
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
  (**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x60))
            (&param_1[0xe].field_0x20,local_res8,local_res10);
  return;
}

// execStop @ 147887db0

void __cdecl UAudioComponent::execStop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147887dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x668))();
  return;
}

// execStopDelayed @ 147887de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAudioComponent::execStopDelayed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FAudioDevice *this;
  FName *pFVar3;
  TStatId TVar4;
  float local_res10 [2];
  FName local_res20;
  code *local_68 [2];
  undefined **local_58;
  float local_50;
  undefined8 local_40;
  
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
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] < 0.0) ||
     ((float)((uint)local_res10[0] & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    (**(code **)(*(longlong *)param_1 + 0x668))(param_1);
  }
  else if (((param_1[3].field_0x22 & 0x10) != 0) &&
          (this = (FAudioDevice *)(**(code **)(*(longlong *)&param_1[0xe].field_0x20 + 0x88))(),
          this != (FAudioDevice *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_AudioStopDelayed =
           (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::StopDelayed(float)_::_2_::FStat_STAT_AudioStopDelayed>
            )0x0;
      pFVar3 = ::FName::FName(&local_res20,"STAT_AudioStopDelayed");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStopDelayed,*pFVar3,
                 L"FAudioThreadTask.StopDelayed","STATGROUP_AudioThreadCommands","STATCAT_Advanced",
                 L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar4.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioStopDelayed;
    if (StatPtr_STAT_AudioStopDelayed ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAudioComponent::StopDelayed(float)_::_2_::FStat_STAT_AudioStopDelayed>
         )0x0) {
      pFVar3 = ::FName::FName(&local_res20,"STAT_AudioStopDelayed");
      TVar4.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStopDelayed,*pFVar3,
                      L"FAudioThreadTask.StopDelayed","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponent::StopDelayed'::`2'::<lambda_1>,1,0>::
                _vftable_;
    local_40 = 0;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponent::StopDelayed'::__l2::<lambda_1>,void,FActiveSound_&>
                  ::Call;
    local_50 = fVar2;
    FAudioDevice::SendCommandToActiveSounds
              (this,*(ulong64 *)&param_1[0x4e].field_0x18,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_68,TVar4);
  }
  return;
}

// operator() @ 150510af0

bool __thiscall `UAudioComponent::GetModulators'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3357720503329490947>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3357720503329490947>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150510b30

bool __thiscall `UAudioComponent::SetModulationRouting'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3357720503329490817>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3357720503329490817>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150512880

bool __thiscall `UAudioComponent::AddModulationRouting'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3357720503329490865>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3357720503329490865>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505128c0

bool __thiscall
`UAudioComponent::RemoveModulationRouting'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3357720503329490908>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3357720503329490908>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

