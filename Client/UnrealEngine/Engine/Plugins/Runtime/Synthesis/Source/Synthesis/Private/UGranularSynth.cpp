// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 52

// StaticClass @ 14f09fb10

UClass * __cdecl UGranularSynth::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGranularSynth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"GranularSynth",
               &Z_Registration_Info_UClass_UGranularSynth.InnerSingleton,
               StaticRegisterNativesUGranularSynth,0xcb0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGranularSynth>,
               InternalVTableHelperCtorCaller<UGranularSynth>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGranularSynth.InnerSingleton;
}

// UGranularSynth @ 14f0b9850

UGranularSynth * __thiscall
UGranularSynth::UGranularSynth(UGranularSynth *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->GranulatedSoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  Audio::FGranularSynth::FGranularSynth(&this->GranularSynth);
  Audio::FSoundWavePCMLoader::FSoundWavePCMLoader(&this->SoundWaveLoader);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->bIsLoaded = false;
  this->bRegistered = false;
  return this;
}

// UGranularSynth @ 14f0b98c0

UGranularSynth * __thiscall
UGranularSynth::UGranularSynth(UGranularSynth *this,FVTableHelper *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->GranulatedSoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  Audio::FGranularSynth::FGranularSynth(&this->GranularSynth);
  Audio::FSoundWavePCMLoader::FSoundWavePCMLoader(&this->SoundWaveLoader);
  return this;
}

// ~UGranularSynth @ 14f0bff90

void __thiscall UGranularSynth::~UGranularSynth(UGranularSynth *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
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
  Audio::FGranularSynth::~FGranularSynth(&this->GranularSynth);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  return;
}

// operator() @ 14f0c3840

void __thiscall
`UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()
          (void *this,USoundWave *param_1,TSampleBuffer<short> *param_2)

{
  undefined8 *puVar1;
  USynthComponent *this_00;
  bool bVar2;
  TSampleBuffer<short> local_60;
  code *local_38 [5];
  undefined8 *local_10;
  
  this_00 = *(USynthComponent **)this;
  if ((USoundWave *)this_00[1]._padding_ == (USoundWave *)0x0) {
    bVar2 = param_1 == (USoundWave *)0x0;
  }
  else {
    bVar2 = (USoundWave *)this_00[1]._padding_ == param_1;
  }
  if (bVar2) {
    Audio::TSampleBuffer<short>::TSampleBuffer<short>(&local_60,param_2);
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x38,8);
    puVar1 = local_10 + 1;
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::`8'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *puVar1 = this_00;
    Audio::TSampleBuffer<short>::TSampleBuffer<short>
              ((TSampleBuffer<short> *)(local_10 + 2),&local_60);
    if (puVar1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    USynthComponent::SynthCommand(this_00,(TFunction<void___cdecl(void)> *)local_38);
    if (local_60.RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.RawPCMData.AllocatorInstance.Data);
    }
    *(undefined1 *)(*(longlong *)this + 0xca8) = 1;
  }
  return;
}

// GetCurrentPlayheadTime @ 14f0d8f80

float __thiscall UGranularSynth::GetCurrentPlayheadTime(UGranularSynth *this)

{
  float fVar1;
  
  fVar1 = Audio::FGranularSynth::GetCurrentPlayheadTime(&this->GranularSynth);
  return fVar1;
}

// GetPrivateStaticClass @ 14f0dbea0

UClass * __cdecl UGranularSynth::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGranularSynth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"GranularSynth",
               &Z_Registration_Info_UClass_UGranularSynth.InnerSingleton,
               StaticRegisterNativesUGranularSynth,0xcb0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGranularSynth>,
               InternalVTableHelperCtorCaller<UGranularSynth>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGranularSynth.InnerSingleton;
}

// GetSampleDuration @ 14f0dddd0

float __thiscall UGranularSynth::GetSampleDuration(UGranularSynth *this)

{
  float fVar1;
  
  fVar1 = Audio::FGranularSynth::GetSampleDuration(&this->GranularSynth);
  return fVar1;
}

// Init @ 14f0e54e0

bool __thiscall UGranularSynth::Init(UGranularSynth *this,int *param_1)

{
  *(undefined4 *)&this->_padding_ = 2;
  return true;
}

// IsLoaded @ 14f0e7ac0

bool __thiscall UGranularSynth::IsLoaded(UGranularSynth *this)

{
  return this->bIsLoaded;
}

// NoteOff @ 14f0e8830

void __thiscall UGranularSynth::NoteOff(UGranularSynth *this,float param_1,bool param_2)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  float local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::NoteOff'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::NoteOff'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  local_14 = param_2;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// NoteOn @ 14f0e9050

void __thiscall UGranularSynth::NoteOn(UGranularSynth *this,float param_1,int param_2,float param_3)

{
  undefined8 local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::NoteOn'::`2'::<lambda_1>,0,1>::_vftable_;
  local_30[1] = this;
  *(float *)(local_30 + 2) = param_1;
  *(int *)((longlong)local_30 + 0x14) = param_2;
  local_30[3] = CONCAT44((int)((ulonglong)local_68 >> 0x20),param_3);
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::NoteOn'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// OnGenerateAudio @ 14f0e9c20

int __thiscall UGranularSynth::OnGenerateAudio(UGranularSynth *this,float *param_1,int param_2)

{
  Audio::FGranularSynth::Generate(&this->GranularSynth,param_1,param_2 / (int)this->_padding_);
  return param_2;
}

// OnRegister @ 14f0f1700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGranularSynth::OnRegister(UGranularSynth *this)

{
  FAudioDevice *pFVar1;
  
  USynthComponent::OnRegister((USynthComponent *)this);
  if (this->bRegistered == false) {
    this->bRegistered = true;
    (**(code **)(this->_padding_ + 0x420))(this,1);
    UActorComponent::RegisterComponent((UActorComponent *)this);
    pFVar1 = USynthComponent::GetAudioDevice((USynthComponent *)this);
    if (pFVar1 != (FAudioDevice *)0x0) {
      Audio::FGranularSynth::Init(&this->GranularSynth,(int)(float)pFVar1->SampleRate,500);
      return;
    }
  }
  return;
}

// OnUnregister @ 14f0f17b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGranularSynth::OnUnregister(UGranularSynth *this)

{
  AActor *this_00;
  UWorld *pUVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  USceneComponent::OnUnregister((USceneComponent *)this);
  this_00 = (AActor *)this->_padding_;
  if ((this_00 == (AActor *)0x0) || ((this->_padding_ & 2) != 0)) {
    USynthComponent::Stop((USynthComponent *)this);
  }
  if ((this->_padding_ != 0) && ((*(byte *)(this->_padding_ + 0x9b) & 0x40) == 0)) {
    if (this_00 != (AActor *)0x0) {
      pUVar1 = AActor::GetWorld(this_00);
      if (pUVar1 != (UWorld *)0x0) {
        (**(code **)(*(longlong *)this->_padding_ + 0x518))
                  ((longlong *)this->_padding_,&FDetachmentTransformRules::KeepRelativeTransform);
        UActorComponent::UnregisterComponent((UActorComponent *)this->_padding_);
      }
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x4a0))((longlong *)this->_padding_,0);
    this->_padding_ = 0;
  }
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &uStack_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetAttackTime @ 14f0f8f20

void __thiscall UGranularSynth::SetAttackTime(UGranularSynth *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetDecayTime @ 14f0f9e30

void __thiscall UGranularSynth::SetDecayTime(UGranularSynth *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetGrainDuration @ 14f0fc4f0

void __thiscall
UGranularSynth::SetGrainDuration(UGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_30[1] = this;
  *(float *)(local_30 + 2) = param_1;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
  local_30[3] = dVar1;
  local_30[4] = dVar2;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,void>::
                  Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// SetGrainEnvelopeType @ 14f0fc590

void __thiscall
UGranularSynth::SetGrainEnvelopeType(UGranularSynth *this,EGranularSynthEnvelopeType param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  EGranularSynthEnvelopeType local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetGrainPan @ 14f0fc5f0

void __thiscall
UGranularSynth::SetGrainPan(UGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::`2'::<lambda_1>,0,1>::_vftable_;
  local_30[1] = this;
  *(float *)(local_30 + 2) = param_1;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
  local_30[3] = dVar1;
  local_30[4] = dVar2;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// SetGrainPitch @ 14f0fc690

void __thiscall
UGranularSynth::SetGrainPitch(UGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_30[1] = this;
  *(float *)(local_30 + 2) = param_1;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
  local_30[3] = dVar1;
  local_30[4] = dVar2;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// SetGrainProbability @ 14f0fc730

void __thiscall UGranularSynth::SetGrainProbability(UGranularSynth *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetGrainVolume @ 14f0fc780

void __thiscall
UGranularSynth::SetGrainVolume(UGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_30[1] = this;
  *(float *)(local_30 + 2) = param_1;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
  local_30[3] = dVar1;
  local_30[4] = dVar2;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// SetGrainsPerSecond @ 14f0fc820

void __thiscall UGranularSynth::SetGrainsPerSecond(UGranularSynth *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPlaybackSpeed @ 14f0ffd50

void __thiscall UGranularSynth::SetPlaybackSpeed(UGranularSynth *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPlayheadTime @ 14f0ffda0

void __thiscall
UGranularSynth::SetPlayheadTime
          (UGranularSynth *this,float param_1,float param_2,EGranularSynthSeekType param_3)

{
  undefined7 uStack_67;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_30[1] = this;
  *(float *)(local_30 + 2) = param_1;
  *(float *)((longlong)local_30 + 0x14) = param_2;
  local_30[3] = CONCAT71(uStack_67,param_3);
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,void>::Call
    ;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// SetReleaseTimeMsec @ 14f100ae0

void __thiscall UGranularSynth::SetReleaseTimeMsec(UGranularSynth *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,void>::
                Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetScrubMode @ 14f100d90

void __thiscall UGranularSynth::SetScrubMode(UGranularSynth *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetSoundWave @ 14f101f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGranularSynth::SetSoundWave(UGranularSynth *this,USoundWave *param_1)

{
  USoundWave *pUVar1;
  ESoundWaveLoadingBehavior EVar2;
  undefined ***pppuVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined **local_68;
  UGranularSynth *pUStack_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined **local_38;
  UGranularSynth *pUStack_30;
  undefined8 local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pUVar1 = (this->GranulatedSoundWave).field0_0x0.DebugPtr;
  if (pUVar1 == (USoundWave *)0x0) {
    bVar4 = param_1 == (USoundWave *)0x0;
  }
  else {
    bVar4 = pUVar1 == param_1;
  }
  if (!bVar4) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundWave *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (this->GranulatedSoundWave).field0_0x0.DebugPtr = param_1;
      this->bIsLoaded = false;
    }
    else {
      (this->GranulatedSoundWave).field0_0x0.DebugPtr = param_1;
      this->bIsLoaded = false;
      if (param_1 == (USoundWave *)0x0) {
        return;
      }
    }
    EVar2 = USoundWave::GetLoadingBehavior(param_1,false);
    if (EVar2 == ForceInline) {
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::`8'::<lambda_1>,0,0>::
                  _vftable_;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,void,USoundWave_const_*,Audio::TSampleBuffer<short>_const_&>
                    ::Call;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::`8'::<lambda_1>,0,0>::
                  _vftable_;
      local_50 = 0;
      local_20 = (undefined ***)0x0;
      local_48 = 0;
      local_58 = local_28;
      pUStack_60 = this;
      pUStack_30 = this;
      Audio::FSoundWavePCMLoader::LoadSoundWave
                (&this->SoundWaveLoader,param_1,
                 (TFunction<void___cdecl(USoundWave_const_*,Audio::TSampleBuffer<short>_const_&)> *)
                 local_78,false);
      if (local_48 != 0) {
        pppuVar3 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar3 = local_20;
        }
        (*(code *)(*pppuVar3)[2])();
      }
    }
  }
  return;
}

// SetSustainGain @ 14f102710

void __thiscall UGranularSynth::SetSustainGain(UGranularSynth *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  UGranularSynth *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,void>::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// StaticRegisterNativesUGranularSynth @ 14f103520

void __cdecl UGranularSynth::StaticRegisterNativesUGranularSynth(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UGranularSynth_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14f1053a0

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
UGranularSynth::TickComponent
          (UGranularSynth *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  Audio::FSoundWavePCMLoader::Update(&this->SoundWaveLoader);
  return;
}

// execGetCurrentPlayheadTime @ 14f10bd70

void __cdecl
UGranularSynth::execGetCurrentPlayheadTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = Audio::FGranularSynth::GetCurrentPlayheadTime((FGranularSynth *)&param_1[0x38].field_0x8);
  *(float *)param_3 = fVar1;
  return;
}

// execGetSampleDuration @ 14f10c600

void __cdecl UGranularSynth::execGetSampleDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = Audio::FGranularSynth::GetSampleDuration((FGranularSynth *)&param_1[0x38].field_0x8);
  *(float *)param_3 = fVar1;
  return;
}

// execIsLoaded @ 14f10cab0

void __cdecl UGranularSynth::execIsLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x51);
  return;
}

// execNoteOff @ 14f10cb10

void __cdecl UGranularSynth::execNoteOff(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  int local_res10 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
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
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  local_14 = local_res10[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::NoteOff'::`2'::<lambda_1>,0,0>::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::NoteOff'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execNoteOn @ 14f10cea0

void __cdecl UGranularSynth::execNoteOn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
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
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  uVar4 = local_res20[0];
  uVar3 = local_res10[0];
  uVar2 = local_res8[0];
  local_58[0] = (code *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::NoteOn'::`2'::<lambda_1>,0,1>::_vftable_;
  local_30[1] = param_1;
  *(undefined4 *)(local_30 + 2) = uVar2;
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar3;
  local_30[3] = CONCAT44((int)((ulonglong)local_68 >> 0x20),uVar4);
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::NoteOn'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// execSetAttackTime @ 14f10de20

void __cdecl UGranularSynth::execSetAttackTime(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetDecayTime @ 14f10e990

void __cdecl UGranularSynth::execSetDecayTime(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::`2'::<lambda_1>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetGrainDuration @ 14f1113a0

void __cdecl UGranularSynth::execSetGrainDuration(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  uVar2 = local_res8[0];
  local_58[0] = (code *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = param_1;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *(undefined4 *)(local_30 + 1) = (undefined4)local_78;
  *(undefined4 *)((longlong)local_30 + 0xc) = local_78._4_4_;
  *(undefined4 *)(local_30 + 2) = uVar2;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
  local_30[3] = local_88;
  local_30[4] = uStack_80;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,void>::
                  Call;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// execSetGrainEnvelopeType @ 14f1114f0

void __cdecl
UGranularSynth::execSetGrainEnvelopeType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
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
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = local_res8[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetGrainPan @ 14f1115c0

void __cdecl UGranularSynth::execSetGrainPan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  uVar2 = local_res8[0];
  local_58[0] = (code *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = param_1;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::`2'::<lambda_1>,0,1>::_vftable_;
  *(undefined4 *)(local_30 + 1) = (undefined4)local_78;
  *(undefined4 *)((longlong)local_30 + 0xc) = local_78._4_4_;
  *(undefined4 *)(local_30 + 2) = uVar2;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
  local_30[3] = local_88;
  local_30[4] = uStack_80;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// execSetGrainPitch @ 14f111710

void __cdecl UGranularSynth::execSetGrainPitch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  uVar2 = local_res8[0];
  local_58[0] = (code *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = param_1;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *(undefined4 *)(local_30 + 1) = (undefined4)local_78;
  *(undefined4 *)((longlong)local_30 + 0xc) = local_78._4_4_;
  *(undefined4 *)(local_30 + 2) = uVar2;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
  local_30[3] = local_88;
  local_30[4] = uStack_80;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// execSetGrainProbability @ 14f111860

void __cdecl UGranularSynth::execSetGrainProbability(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetGrainVolume @ 14f111920

void __cdecl UGranularSynth::execSetGrainVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_6c;
  code *local_58 [5];
  undefined8 *local_30;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  uVar2 = local_res8[0];
  local_58[0] = (code *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = param_1;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *(undefined4 *)(local_30 + 1) = (undefined4)local_78;
  *(undefined4 *)((longlong)local_30 + 0xc) = local_78._4_4_;
  *(undefined4 *)(local_30 + 2) = uVar2;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_6c;
  local_30[3] = local_88;
  local_30[4] = uStack_80;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,void>::Call;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// execSetGrainsPerSecond @ 14f111a70

void __cdecl UGranularSynth::execSetGrainsPerSecond(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPlaybackSpeed @ 14f114310

void __cdecl UGranularSynth::execSetPlaybackSpeed(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPlayheadTime @ 14f1143d0

void __cdecl UGranularSynth::execSetPlayheadTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined7 uStack_67;
  code *local_58 [5];
  undefined8 *local_30;
  
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
  uVar4 = local_res20[0];
  uVar3 = local_res10[0];
  uVar2 = local_res8[0];
  local_58[0] = (code *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_30[1] = param_1;
  *(undefined4 *)(local_30 + 2) = uVar3;
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar4;
  local_30[3] = CONCAT71(uStack_67,uVar2);
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,void>::Call
    ;
  }
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_58);
  return;
}

// execSetReleaseTimeMsec @ 14f114f90

void __cdecl UGranularSynth::execSetReleaseTimeMsec(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,void>::
                Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetScrubMode @ 14f115340

void __cdecl UGranularSynth::execSetScrubMode(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::`2'::<lambda_1>,0,0>::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetSoundWave @ 14f116ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UGranularSynth::execSetSoundWave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USoundWave *this;
  ESoundWaveLoadingBehavior EVar2;
  undefined ***pppuVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  USoundWave *local_88 [2];
  code *local_78 [2];
  undefined **local_68;
  UObject *pUStack_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined **local_38;
  UObject *pUStack_30;
  undefined8 local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88[0] = (USoundWave *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  this = local_88[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(USoundWave **)(param_1 + 0x38) == (USoundWave *)0x0) {
    bVar4 = local_88[0] == (USoundWave *)0x0;
  }
  else {
    bVar4 = *(USoundWave **)(param_1 + 0x38) == local_88[0];
  }
  if (!bVar4) {
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_88[0] == (USoundWave *)0x0))
    {
      *(USoundWave **)(param_1 + 0x38) = local_88[0];
      *(undefined1 *)(param_1 + 0x51) = 0;
      if (local_88[0] == (USoundWave *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)local_88[0]);
      *(USoundWave **)(param_1 + 0x38) = this;
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    EVar2 = USoundWave::GetLoadingBehavior(this,false);
    if (EVar2 == ForceInline) {
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::`8'::<lambda_1>,0,0>::
                  _vftable_;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,void,USoundWave_const_*,Audio::TSampleBuffer<short>_const_&>
                    ::Call;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::`8'::<lambda_1>,0,0>::
                  _vftable_;
      local_50 = 0;
      local_20 = (undefined ***)0x0;
      local_58 = local_28;
      local_48 = 0;
      pUStack_60 = param_1;
      pUStack_30 = param_1;
      Audio::FSoundWavePCMLoader::LoadSoundWave
                ((FSoundWavePCMLoader *)(param_1 + 0x50),this,
                 (TFunction<void___cdecl(USoundWave_const_*,Audio::TSampleBuffer<short>_const_&)> *)
                 local_78,false);
      if (local_48 != 0) {
        pppuVar3 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar3 = local_20;
        }
        (*(code *)(*pppuVar3)[2])();
      }
    }
  }
  return;
}

// execSetSustainGain @ 14f117b80

void __cdecl UGranularSynth::execSetSustainGain(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,void>::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

