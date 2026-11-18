// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 31

// StaticClass @ 14f0aa7b0

UClass * __cdecl USynthSamplePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthSamplePlayer",
               &Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton,
               StaticRegisterNativesUSynthSamplePlayer,0xa00,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USynthSamplePlayer>,
               InternalVTableHelperCtorCaller<USynthSamplePlayer>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton;
}

// USynthSamplePlayer @ 14f0bc330

USynthSamplePlayer * __thiscall
USynthSamplePlayer::USynthSamplePlayer(USynthSamplePlayer *this,FObjectInitializer *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnSampleLoaded = 0;
  *(undefined8 *)&(this->OnSampleLoaded).field_0x8 = 0;
  *(undefined8 *)&(this->OnSampleLoaded).field_0x10 = 0;
  *(undefined8 *)&this->OnSamplePlaybackProgress = 0;
  *(undefined8 *)&(this->OnSamplePlaybackProgress).field_0x8 = 0;
  *(undefined8 *)&(this->OnSamplePlaybackProgress).field_0x10 = 0;
  Audio::FSampleBufferReader::FSampleBufferReader(&this->SampleBufferReader);
  (this->SampleBuffer).RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleBuffer).RawPCMData.ArrayNum = 0;
  (this->SampleBuffer).RawPCMData.ArrayMax = 0;
  (this->SampleBuffer).NumSamples = 0;
  (this->SampleBuffer).NumFrames = 0;
  (this->SampleBuffer).NumChannels = 0;
  (this->SampleBuffer).SampleRate = 0;
  (this->SampleBuffer).SampleDuration = 0.0;
  Audio::FSoundWavePCMLoader::FSoundWavePCMLoader(&this->SoundWaveLoader);
  this->field_0x42 = this->field_0x42 | 2;
  this->SampleDurationSec = 0.0;
  this->SamplePlaybackProgressSec = 0.0;
  this->bIsLoaded = false;
  return this;
}

// USynthSamplePlayer @ 14f0bc400

USynthSamplePlayer * __thiscall
USynthSamplePlayer::USynthSamplePlayer(USynthSamplePlayer *this,FVTableHelper *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnSampleLoaded = 0;
  *(undefined8 *)&(this->OnSampleLoaded).field_0x8 = 0;
  *(undefined8 *)&(this->OnSampleLoaded).field_0x10 = 0;
  *(undefined8 *)&this->OnSamplePlaybackProgress = 0;
  *(undefined8 *)&(this->OnSamplePlaybackProgress).field_0x8 = 0;
  *(undefined8 *)&(this->OnSamplePlaybackProgress).field_0x10 = 0;
  Audio::FSampleBufferReader::FSampleBufferReader(&this->SampleBufferReader);
  (this->SampleBuffer).RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleBuffer).RawPCMData.ArrayNum = 0;
  (this->SampleBuffer).RawPCMData.ArrayMax = 0;
  (this->SampleBuffer).NumSamples = 0;
  (this->SampleBuffer).NumFrames = 0;
  (this->SampleBuffer).NumChannels = 0;
  (this->SampleBuffer).SampleRate = 0;
  (this->SampleBuffer).SampleDuration = 0.0;
  Audio::FSoundWavePCMLoader::FSoundWavePCMLoader(&this->SoundWaveLoader);
  return this;
}

// ~USynthSamplePlayer @ 14f0c0ba0

void __thiscall USynthSamplePlayer::~USynthSamplePlayer(USynthSamplePlayer *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<Audio::FSoundWavePCMLoader::FLoadingSoundWaveInfo,int>
            ((FLoadingSoundWaveInfo *)
             (this->SoundWaveLoader).LoadingSoundWaves.AllocatorInstance.Data,
             (this->SoundWaveLoader).LoadingSoundWaves.ArrayNum);
  pFVar1 = (this->SoundWaveLoader).LoadingSoundWaves.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SoundWaveLoader)._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->SoundWaveLoader);
  pFVar1 = (this->SampleBuffer).RawPCMData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FSampleBufferReader::~FSampleBufferReader(&this->SampleBufferReader);
  pvVar2 = *(void **)&(this->OnSamplePlaybackProgress).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSamplePlaybackProgress);
  pvVar2 = *(void **)&(this->OnSampleLoaded).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSampleLoaded);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  return;
}

// operator() @ 14f0c3740

void __thiscall
`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()
          (void *this,USoundWave *param_1,TSampleBuffer<short> *param_2)

{
  undefined8 *puVar1;
  USoundWave *pUVar2;
  USynthComponent *this_00;
  bool bVar3;
  TSampleBuffer<short> local_60;
  code *local_38 [5];
  undefined8 *local_10;
  
  pUVar2 = *(USoundWave **)(*(longlong *)this + 0x8c0);
  if (pUVar2 == (USoundWave *)0x0) {
    bVar3 = param_1 == (USoundWave *)0x0;
  }
  else {
    bVar3 = pUVar2 == param_1;
  }
  if (bVar3) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x8c8),
               (void *)0x0);
    this_00 = *(USynthComponent **)this;
    Audio::TSampleBuffer<short>::TSampleBuffer<short>(&local_60,param_2);
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x38,8);
    puVar1 = local_10 + 1;
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *puVar1 = this_00;
    Audio::TSampleBuffer<short>::TSampleBuffer<short>
              ((TSampleBuffer<short> *)(local_10 + 2),&local_60);
    if (puVar1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    USynthComponent::SynthCommand(this_00,(TFunction<void___cdecl(void)> *)local_38);
    if (local_60.RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.RawPCMData.AllocatorInstance.Data);
    }
    *(undefined1 *)(*(longlong *)this + 0x9f0) = 1;
  }
  return;
}

// GetCurrentPlaybackProgressPercent @ 14f0d8f40

float __thiscall USynthSamplePlayer::GetCurrentPlaybackProgressPercent(USynthSamplePlayer *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < this->SampleDurationSec) {
    fVar1 = this->SamplePlaybackProgressSec / this->SampleDurationSec;
  }
  return fVar1;
}

// GetCurrentPlaybackProgressTime @ 14f0d8f70

float __thiscall USynthSamplePlayer::GetCurrentPlaybackProgressTime(USynthSamplePlayer *this)

{
  return this->SamplePlaybackProgressSec;
}

// GetPrivateStaticClass @ 14f0dd800

UClass * __cdecl USynthSamplePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthSamplePlayer",
               &Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton,
               StaticRegisterNativesUSynthSamplePlayer,0xa00,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USynthSamplePlayer>,
               InternalVTableHelperCtorCaller<USynthSamplePlayer>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthSamplePlayer.InnerSingleton;
}

// GetSampleDuration @ 14f0dddf0

float __thiscall USynthSamplePlayer::GetSampleDuration(USynthSamplePlayer *this)

{
  return this->SampleDurationSec;
}

// Init @ 14f0e6660

bool __thiscall USynthSamplePlayer::Init(USynthSamplePlayer *this,int *param_1)

{
  *(undefined4 *)&this->field_0x880 = 2;
  Audio::FSampleBufferReader::Init(&this->SampleBufferReader,*param_1);
  if ((this->SoundWave).field0_0x0.DebugPtr != (USoundWave *)0x0) {
    LoadSoundWaveInternal(this);
  }
  return true;
}

// IsLoaded @ 14f0e7ad0

bool __thiscall USynthSamplePlayer::IsLoaded(USynthSamplePlayer *this)

{
  return this->bIsLoaded;
}

// LoadSoundWaveInternal @ 14f0e82b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USynthSamplePlayer::LoadSoundWaveInternal(USynthSamplePlayer *this)

{
  USoundWave *pUVar1;
  undefined ***pppuVar2;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined **local_68;
  USynthSamplePlayer *pUStack_60;
  undefined8 local_50;
  longlong local_48;
  undefined **local_38;
  USynthSamplePlayer *pUStack_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pUVar1 = (this->SoundWave).field0_0x0.DebugPtr;
  this->bIsLoaded = false;
  if (pUVar1 != (USoundWave *)0x0) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>,void,USoundWave_const_*,Audio::TSampleBuffer<short>_const_&>
                  ::Call;
    local_20 = (undefined ***)0x0;
    local_50 = 0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_48 = 0;
    pUStack_60 = this;
    pUStack_30 = this;
    Audio::FSoundWavePCMLoader::LoadSoundWave
              (&this->SoundWaveLoader,pUVar1,
               (TFunction<void___cdecl(USoundWave_const_*,Audio::TSampleBuffer<short>_const_&)> *)
               local_78,true);
    if (local_48 != 0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  return;
}

// OnGenerateAudio @ 14f0ea000

int __thiscall
USynthSamplePlayer::OnGenerateAudio(USynthSamplePlayer *this,float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->SampleBuffer).RawPCMData.AllocatorInstance.Data;
  if ((pFVar4 != (FScriptContainerElement *)0x0) &&
     ((this->SampleBufferReader).BufferPtr == (short *)0x0)) {
    iVar1 = (this->SampleBuffer).NumChannels;
    iVar2 = (this->SampleBuffer).SampleRate;
    iVar3 = (this->SampleBuffer).NumSamples;
    Audio::FSampleBufferReader::SetBuffer
              (&this->SampleBufferReader,(short *)pFVar4,iVar3,iVar1,iVar2);
    this->SampleDurationSec = (float)(iVar3 / (iVar2 * iVar1));
  }
  if ((this->SampleBufferReader).BufferPtr != (short *)0x0) {
    Audio::FSampleBufferReader::Generate
              (&this->SampleBufferReader,param_1,param_2 / *(int *)&this->field_0x880,
               *(int *)&this->field_0x880,true);
    this->SamplePlaybackProgressSec = (this->SampleBufferReader).PlaybackProgress;
    return param_2;
  }
  memset(param_1,0,(longlong)param_2 << 2);
  return param_2;
}

// OnRegister @ 14f0f1780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthSamplePlayer::OnRegister(USynthSamplePlayer *this)

{
  USynthComponent::OnRegister((USynthComponent *)this);
  (**(code **)(*(longlong *)this + 0x420))(this,1);
  UActorComponent::RegisterComponent((UActorComponent *)this);
  return;
}

// OnUnregister @ 14f0f17c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USynthSamplePlayer::OnUnregister(USynthSamplePlayer *this)

{
  AActor *this_00;
  UWorld *pUVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  USceneComponent::OnUnregister((USceneComponent *)this);
  this_00 = *(AActor **)&this->field_0xa8;
  if ((this_00 == (AActor *)0x0) || ((this->field_0x250 & 2) != 0)) {
    USynthComponent::Stop((USynthComponent *)this);
  }
  if ((*(longlong *)&this->field_0x890 != 0) &&
     ((*(byte *)(*(longlong *)&this->field_0x890 + 0x9b) & 0x40) == 0)) {
    if (this_00 != (AActor *)0x0) {
      pUVar1 = AActor::GetWorld(this_00);
      if (pUVar1 != (UWorld *)0x0) {
        (**(code **)(**(longlong **)&this->field_0x890 + 0x518))
                  (*(longlong **)&this->field_0x890,
                   &FDetachmentTransformRules::KeepRelativeTransform);
        UActorComponent::UnregisterComponent(*(UActorComponent **)&this->field_0x890);
      }
    }
    (**(code **)(**(longlong **)&this->field_0x890 + 0x4a0))(*(longlong **)&this->field_0x890,0);
    *(undefined8 *)&this->field_0x890 = 0;
  }
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x8b0 != &uStack_18) {
    *(undefined8 *)&this->field_0x8b0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x8b8,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SeekToTime @ 14f0f8a90

void __thiscall
USynthSamplePlayer::SeekToTime
          (USynthSamplePlayer *this,float param_1,ESamplePlayerSeekType param_2,bool param_3)

{
  undefined4 uVar1;
  undefined7 uStack_57;
  code *local_48 [5];
  undefined8 *local_20;
  
  if (param_2 != FromBeginning) {
    if (param_2 == FromCurrentPosition) {
      uVar1 = 1;
      goto LAB_14f0f8ac7;
    }
    if (param_2 == FromEnd) {
      uVar1 = 2;
      goto LAB_14f0f8ac7;
    }
  }
  uVar1 = 0;
LAB_14f0f8ac7:
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = this;
  *(float *)(local_20 + 2) = param_1;
  *(undefined4 *)((longlong)local_20 + 0x14) = uVar1;
  local_20[3] = CONCAT71(uStack_57,param_3);
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_48);
  return;
}

// SetPitch @ 14f0ffcb0

void __thiscall USynthSamplePlayer::SetPitch(USynthSamplePlayer *this,float param_1,float param_2)

{
  code *local_38 [2];
  undefined **local_28;
  USynthSamplePlayer *local_20;
  float local_18;
  float local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetScrubMode @ 14f100df0

void __thiscall USynthSamplePlayer::SetScrubMode(USynthSamplePlayer *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthSamplePlayer *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetScrubTimeWidth @ 14f100e50

void __thiscall USynthSamplePlayer::SetScrubTimeWidth(USynthSamplePlayer *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthSamplePlayer *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetSoundWave @ 14f102040

void __thiscall USynthSamplePlayer::SetSoundWave(USynthSamplePlayer *this,USoundWave *param_1)

{
  USoundWave *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->SoundWave).field0_0x0.DebugPtr;
  if (pUVar1 == (USoundWave *)0x0) {
    bVar2 = param_1 == (USoundWave *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundWave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SoundWave).field0_0x0.DebugPtr = param_1;
    LoadSoundWaveInternal(this);
  }
  return;
}

// StaticRegisterNativesUSynthSamplePlayer @ 14f103d40

void __cdecl USynthSamplePlayer::StaticRegisterNativesUSynthSamplePlayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_USynthSamplePlayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14f105450

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
USynthSamplePlayer::TickComponent
          (USynthSamplePlayer *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  float local_res8;
  float local_resc;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  Audio::FSoundWavePCMLoader::Update(&this->SoundWaveLoader);
  local_resc = 0.0;
  if (0.0 < this->SampleDurationSec) {
    local_resc = this->SamplePlaybackProgressSec / this->SampleDurationSec;
  }
  local_res8 = this->SamplePlaybackProgressSec;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSamplePlaybackProgress
             ,&local_res8);
  return;
}

// execGetCurrentPlaybackProgressPercent @ 14f10bd00

void __cdecl
USynthSamplePlayer::execGetCurrentPlaybackProgressPercent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  fVar1 = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0.0 < *(float *)&param_1[0x3f].field_0x10) {
    fVar1 = *(float *)&param_1[0x3f].field_0x14 / *(float *)&param_1[0x3f].field_0x10;
  }
  *(float *)param_3 = fVar1;
  return;
}

// execGetCurrentPlaybackProgressTime @ 14f10bd40

void __cdecl
USynthSamplePlayer::execGetCurrentPlaybackProgressTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x3f].field_0x14;
  return;
}

// execGetSampleDuration @ 14f10c640

void __cdecl
USynthSamplePlayer::execGetSampleDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x3f].field_0x10;
  return;
}

// execIsLoaded @ 14f10cae0

void __cdecl USynthSamplePlayer::execIsLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x3f].field_0x18;
  return;
}

// execSeekToTime @ 14f10d620

void __cdecl USynthSamplePlayer::execSeekToTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char local_res8 [8];
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined7 uStack_57;
  code *local_48 [5];
  undefined8 *local_20;
  
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
  uVar2 = local_res20[0];
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != '\0') {
    if (local_res8[0] == '\x01') {
      uVar3 = 1;
      goto LAB_14f10d75d;
    }
    if (local_res8[0] == '\x02') {
      uVar3 = 2;
      goto LAB_14f10d75d;
    }
  }
  uVar3 = 0;
LAB_14f10d75d:
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = param_1;
  *(undefined4 *)(local_20 + 2) = uVar2;
  *(undefined4 *)((longlong)local_20 + 0x14) = uVar3;
  local_20[3] = CONCAT71(uStack_57,bVar4);
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_48);
  return;
}

// execSetPitch @ 14f114140

void __cdecl USynthSamplePlayer::execSetPitch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
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
  local_18 = local_res8[0];
  local_14 = local_res10[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetScrubMode @ 14f115410

void __cdecl USynthSamplePlayer::execSetScrubMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
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
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::`2'::<lambda_1>,0,0>::
              _vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetScrubTimeWidth @ 14f1154e0

void __cdecl
USynthSamplePlayer::execSetScrubTimeWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
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
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetSoundWave @ 14f117080

void __cdecl USynthSamplePlayer::execSetSoundWave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  UObject *local_res8;
  
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
  if (*(UObject **)(param_1 + 0x38) == (UObject *)0x0) {
    bVar3 = local_res8 == (UObject *)0x0;
  }
  else {
    bVar3 = *(UObject **)(param_1 + 0x38) == local_res8;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    *(UObject **)(param_1 + 0x38) = pUVar2;
    LoadSoundWaveInternal((USynthSamplePlayer *)param_1);
  }
  return;
}

