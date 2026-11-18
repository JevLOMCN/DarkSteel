// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 52

// StaticClass @ 148675530

UClass * __cdecl USoundSubmix::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmix",
               &Z_Registration_Info_UClass_USoundSubmix.InnerSingleton,
               StaticRegisterNativesUSoundSubmix,0x250,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<USoundSubmix>,
               InternalVTableHelperCtorCaller<USoundSubmix>,local_res8,
               USoundSubmixWithParentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmix.InnerSingleton;
}

// USoundSubmix @ 148697f30

USoundSubmix * __thiscall USoundSubmix::USoundSubmix(USoundSubmix *this,FVTableHelper *param_1)

{
  USoundSubmixWithParentBase::USoundSubmixWithParentBase((USoundSubmixWithParentBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7USoundSubmix__6B_;
  (this->SubmixEffectChain).ArrayNum = 0;
  (this->SubmixEffectChain).ArrayMax = 0;
  *(undefined8 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x8 = 0;
  (this->SubmixEffectChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AmbisonicsPluginSettings).field0_0x0.DebugPtr = (USoundfieldEncodingSettingsBase *)0x0;
  *(undefined8 *)&(this->OutputVolumeModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x20 = 0;
  (this->OutputVolumeModulation).Value = 1.0;
  *(undefined4 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->OutputVolumeModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutputVolumeModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->WetLevelModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WetLevelModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->WetLevelModulation).Modulators.Elements.field_0x20 = 0;
  (this->WetLevelModulation).Value = 1.0;
  *(undefined4 *)&(this->WetLevelModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WetLevelModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WetLevelModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->WetLevelModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->WetLevelModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WetLevelModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->DryLevelModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->DryLevelModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DryLevelModulation).Modulators.Elements.field_0x20 = 0;
  (this->DryLevelModulation).Value = 1.0;
  *(undefined4 *)&(this->DryLevelModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DryLevelModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DryLevelModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DryLevelModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->DryLevelModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DryLevelModulation).Modulators.HashSize = 0;
  (this->AudioLinkSettings).field0_0x0.DebugPtr = (UAudioLinkSettingsAbstract *)0x0;
  *(undefined8 *)&this->OnSubmixRecordedFileDone = 0;
  *(undefined8 *)&(this->OnSubmixRecordedFileDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnSubmixRecordedFileDone).field_0x10 = 0;
  (this->RecordingData).Ptr = (FAudioRecordingData *)0x0;
  return this;
}

// USoundSubmix @ 148698080

USoundSubmix * __thiscall USoundSubmix::USoundSubmix(USoundSubmix *this,FObjectInitializer *param_1)

{
  USoundSubmixWithParentBase::USoundSubmixWithParentBase((USoundSubmixWithParentBase *)this,param_1)
  ;
  this->bMuteWhenBackgrounded = '\0';
  this->_padding_ = (longlong)&___7USoundSubmix__6B_;
  (this->SubmixEffectChain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixEffectChain).ArrayNum = 0;
  (this->SubmixEffectChain).ArrayMax = 0;
  (this->AmbisonicsPluginSettings).field0_0x0.DebugPtr = (USoundfieldEncodingSettingsBase *)0x0;
  *(undefined8 *)&(this->OutputVolumeModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x20 = 0;
  this->EnvelopeFollowerAttackTime = 10;
  this->EnvelopeFollowerReleaseTime = 500;
  (this->OutputVolumeModulation).Value = 0.0;
  *(undefined4 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->OutputVolumeModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->OutputVolumeModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutputVolumeModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->WetLevelModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->WetLevelModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WetLevelModulation).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->WetLevelModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WetLevelModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WetLevelModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->WetLevelModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->WetLevelModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WetLevelModulation).Modulators.HashSize = 0;
  *(undefined8 *)&(this->DryLevelModulation).Modulators.Elements = 0;
  *(undefined8 *)&(this->DryLevelModulation).Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DryLevelModulation).Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DryLevelModulation).Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DryLevelModulation).Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DryLevelModulation).Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DryLevelModulation).Modulators.Elements.field_0x30 = 0xffffffff;
  (this->DryLevelModulation).Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DryLevelModulation).Modulators.HashSize = 0;
  (this->AudioLinkSettings).field0_0x0.DebugPtr = (UAudioLinkSettingsAbstract *)0x0;
  *(undefined8 *)&this->OnSubmixRecordedFileDone = 0;
  *(undefined8 *)&(this->OnSubmixRecordedFileDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnSubmixRecordedFileDone).field_0x10 = 0;
  (this->RecordingData).Ptr = (FAudioRecordingData *)0x0;
  (this->WetLevelModulation).Value = 0.0;
  (this->DryLevelModulation).Value = -96.0;
  return this;
}

// ~<lambda_1> @ 148698c70

void __thiscall `USoundSubmix::PushModulationChanges'::__l5::<lambda_1>::~<lambda_1>(void *this)

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

// ~USoundSubmix @ 14869bee0

void __thiscall USoundSubmix::~USoundSubmix(USoundSubmix *this)

{
  FAudioRecordingData *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->_padding_ = (longlong)&___7USoundSubmix__6B_;
  pFVar1 = (this->RecordingData).Ptr;
  if (pFVar1 != (FAudioRecordingData *)0x0) {
    Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(&pFVar1->Writer);
    pFVar2 = (pFVar1->InputBuffer).RawPCMData.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0xa0);
  }
  pvVar3 = *(void **)&(this->OnSubmixRecordedFileDone).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSubmixRecordedFileDone);
  (this->DryLevelModulation).Modulators.HashSize = 0;
  FVar4 = (this->DryLevelModulation).Modulators.Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DryLevelModulation).Modulators.Elements);
  (this->WetLevelModulation).Modulators.HashSize = 0;
  FVar4 = (this->WetLevelModulation).Modulators.Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->WetLevelModulation).Modulators.Elements);
  (this->OutputVolumeModulation).Modulators.HashSize = 0;
  FVar4 = (this->OutputVolumeModulation).Modulators.Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutputVolumeModulation).Modulators.Elements);
  pFVar2 = (this->SubmixEffectChain).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  USoundSubmixWithParentBase::~USoundSubmixWithParentBase((USoundSubmixWithParentBase *)this);
  return;
}

// AddEnvelopeFollowerDelegate @ 1486a4dc0

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
USoundSubmix::AddEnvelopeFollowerDelegate
          (USoundSubmix *this,UObject *param_1,FOnSubmixEnvelopeBP *param_2)

{
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x1b0))(pFVar1,this,param_2);
      }
    }
  }
  return;
}

// AddSpectralAnalysisDelegate @ 1486a5e80

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
USoundSubmix::AddSpectralAnalysisDelegate
          (USoundSubmix *this,UObject *param_1,
          TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> *param_2,
          FOnSubmixSpectralAnalysisBP *param_3,float param_4,float param_5,bool param_6,bool param_7
          ,float param_8,float param_9)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UWorld *this_00;
  FAudioDevice *pFVar2;
  TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> local_38;
  float local_28;
  float local_24;
  bool local_20;
  bool local_1f;
  float local_1c;
  float local_18;
  
  if (((GEngine != (UEngine *)0x0) &&
      (this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull),
      this_00 != (UWorld *)0x0)) &&
     (pFVar2 = UWorld::GetAudioDeviceRaw(this_00), pFVar2 != (FAudioDevice *)0x0)) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    if (&local_38 != param_2) {
      uVar1 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      local_38.ArrayMax = 0;
      local_38.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,uVar1,0,&local_38.AllocatorInstance,uVar1,&local_38.ArrayMax);
        memcpy(local_38.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 4);
      }
    }
    local_20 = param_6;
    local_1f = param_7;
    local_28 = param_4;
    local_24 = param_5;
    local_1c = param_8;
    local_18 = param_9;
    (**(code **)(pFVar2->_padding_ + 0x1e0))(pFVar2,this,&local_38,param_3);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// GetAudioDeviceFrom @ 1486bb270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDevice * __cdecl USoundSubmix::GetAudioDeviceFrom(UObject *param_1)

{
  UWorld *this;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this);
      return pFVar1;
    }
  }
  return (FAudioDevice *)0x0;
}

// GetPrivateStaticClass @ 1486c58f0

UClass * __cdecl USoundSubmix::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundSubmix",
               &Z_Registration_Info_UClass_USoundSubmix.InnerSingleton,
               StaticRegisterNativesUSoundSubmix,0x250,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<USoundSubmix>,
               InternalVTableHelperCtorCaller<USoundSubmix>,local_res8,
               USoundSubmixWithParentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundSubmix.InnerSingleton;
}

// GetSpectrumAnalysisDelegateSettings @ 1486c85b0

FSoundSpectrumAnalyzerDelegateSettings * __cdecl
USoundSubmix::GetSpectrumAnalysisDelegateSettings
          (FSoundSpectrumAnalyzerDelegateSettings *__return_storage_ptr__,
          TArray<FSoundSubmixSpectralAnalysisBandSettings,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,float param_3,bool param_4,bool param_5,float param_6,float param_7)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->BandSettings).ArrayMax = 0;
  (__return_storage_ptr__->BandSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->BandSettings).ArrayNum = 0;
  if (__return_storage_ptr__ != (FSoundSpectrumAnalyzerDelegateSettings *)param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    (__return_storage_ptr__->BandSettings).ArrayNum = iVar1;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar1,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
                 &(__return_storage_ptr__->BandSettings).ArrayMax);
      memcpy((__return_storage_ptr__->BandSettings).AllocatorInstance.Data,_Src,(longlong)iVar1 << 4
            );
    }
  }
  __return_storage_ptr__->bDoNormalize = param_4;
  __return_storage_ptr__->bDoAutoRange = param_5;
  __return_storage_ptr__->UpdateRate = param_2;
  __return_storage_ptr__->DecibelNoiseFloor = param_3;
  __return_storage_ptr__->AutoRangeAttackTime = param_6;
  __return_storage_ptr__->AutoRangeReleaseTime = param_7;
  return __return_storage_ptr__;
}

// GetSpectrumAnalyzerSettings @ 1486c8690

FSoundSpectrumAnalyzerSettings __cdecl
USoundSubmix::GetSpectrumAnalyzerSettings
          (EFFTSize param_1,EFFTPeakInterpolationMethod param_2,EFFTWindowType param_3,float param_4
          ,EAudioSpectrumType param_5)

{
  FSoundSpectrumAnalyzerSettings FVar1;
  
  if (__real_41200000 <= param_4) {
    param_4 = __real_41200000;
  }
  if (param_4 <= __real_3a83126f) {
    param_4 = __real_3a83126f;
  }
  FVar1.WindowType = param_3;
  FVar1.FFTSize = param_1;
  FVar1.SpectrumType = param_5;
  FVar1.InterpolationMethod = param_2;
  FVar1.HopSize = param_4;
  return FVar1;
}

// PostLoad @ 1486e0cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundSubmix::PostLoad(USoundSubmix *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FAudioDeviceManager *this_00;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStackX_10 [8];
  FString FStack_38;
  
  UObject::PostLoad((UObject *)this);
  if ((ClearBrokenSubmixAssetsCVar != 0) && (iVar8 = (int)this->_padding_ + -1, -1 < iVar8)) {
    lVar7 = (longlong)iVar8;
    lVar9 = lVar7 * 8;
    do {
      if (((int)this->_padding_ <= iVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar9 + this->_padding_);
      if (lVar2 != 0) {
        pUVar6 = USoundSubmixWithParentBase::StaticClass();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          auStackX_10[0] = 0;
          `USoundSubmixBase::PostLoad'::__l36::<lambda_1>::operator()(auStackX_10);
        }
        else {
          if (*(USoundSubmix **)(lVar2 + 0x90) == (USoundSubmix *)0x0) {
            bVar4 = this == (USoundSubmix *)0x0;
          }
          else {
            bVar4 = *(USoundSubmix **)(lVar2 + 0x90) == this;
          }
          if (bVar4) goto LAB_1486e0e99;
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2364199159361176015>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundSubmix.cpp"
                             ,0x1cf,"CastedChildSubmix->ParentSubmix == this");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (2 < (byte)LogAudio._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          }
        }
        if (((int)this->_padding_ <= iVar8) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = (int)this->_padding_;
        iVar5 = (iVar1 - iVar8) + -1;
        if (1 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          memmove((void *)(this->_padding_ + lVar7 * 8),
                  (void *)(this->_padding_ + (longlong)(iVar1 - iVar5) * 8),(longlong)iVar5 << 3);
        }
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
                   (int *)((longlong)&this->_padding_ + 4));
      }
LAB_1486e0e99:
      lVar7 = lVar7 + -1;
      lVar9 = lVar9 + -8;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  if (GEngine == (UEngine *)0x0) {
    this_00 = (FAudioDeviceManager *)0x0;
  }
  else {
    this_00 = UEngine::GetAudioDeviceManager(GEngine);
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&FStack_38,(UObject *)0x0);
  bVar4 = ::FString::StartsWith(&FStack_38,L"/Temp/",6,IgnoreCase);
  if ((this_00 != (FAudioDeviceManager *)0x0) && (!bVar4)) {
    FAudioDeviceManager::RegisterSoundSubmix(this_00,(USoundSubmixBase *)this);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  return;
}

// PushModulationChanges @ 1486e38c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USoundSubmix::PushModulationChanges(USoundSubmix *this)

{
  int iVar1;
  ulonglong uVar2;
  FAudioDeviceManager *this_00;
  undefined8 *puVar3;
  undefined1 auStackY_268 [32];
  code *local_238 [5];
  undefined8 *local_210;
  undefined1 local_208 [32];
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  undefined1 local_1b8 [32];
  void *local_198;
  undefined4 local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 local_184;
  ForElementType<FSetElementId> local_178;
  int local_170;
  void *local_168;
  undefined8 local_160;
  TBitArray<FDefaultBitArrayAllocator> local_158;
  undefined4 local_138;
  undefined4 local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  USoundSubmix *local_118;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_110;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_c0;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  local_70;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    local_158.MaxBits = 0x80;
    local_168 = (void *)0x0;
    local_160 = 0;
    local_158.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_158.NumBits = 0;
    local_134 = 0;
    local_128 = (ForElementType<FSetElementId>)0x0;
    local_120 = 0;
    local_138 = 0xffffffff;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&local_168,&(this->OutputVolumeModulation).Modulators);
    local_1b8._0_8_ = (FScriptContainerElement *)0x0;
    local_1b8._8_8_ = 0;
    local_198 = (void *)0x0;
    local_190 = 0;
    local_18c = 0x80;
    local_188 = 0xffffffff;
    local_184 = 0;
    local_178 = (ForElementType<FSetElementId>)0x0;
    local_170 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_1b8,&(this->WetLevelModulation).Modulators);
    local_208._0_8_ = (FScriptContainerElement *)0x0;
    local_208._8_8_ = 0;
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    local_1dc = 0x80;
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1c8 = (ForElementType<FSetElementId>)0x0;
    local_1c0 = 0;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)local_208,&(this->DryLevelModulation).Modulators);
    local_118 = this;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              (&local_110,
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)&local_168);
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              (&local_c0,
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_1b8);
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              (&local_70,
               (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)local_208);
    local_238[0] = (code *)0x0;
    puVar3 = FMemory::Malloc(0x100,8);
    *puVar3 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USoundSubmix::PushModulationChanges'::`5'::<lambda_1>,1,1>::
               _vftable_;
    puVar3[1] = local_118;
    local_210 = puVar3;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar3 + 2),&local_110);
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar3 + 0xc),&local_c0);
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
              ((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                *)(puVar3 + 0x16),&local_70);
    if (puVar3 + 1 != (undefined8 *)0x0) {
      local_238[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`USoundSubmix::PushModulationChanges'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                     ::Call;
    }
    FAudioDeviceManager::IterateOverAllDevices
              (this_00,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_238);
    local_70.HashSize = 0;
    if (local_70.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_70.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_70.Elements);
    local_c0.HashSize = 0;
    if (local_c0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c0.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c0.Elements);
    local_110.HashSize = 0;
    if (local_110.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_110.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_110.Elements);
    local_1c0 = 0;
    if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8);
    }
    iVar1 = SUB84(local_208._8_8_,4);
    local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_208,0,(int *)(local_208 + 0xc));
    }
    local_1d8 = 0xffffffff;
    local_1d4 = 0;
    local_1e0 = 0;
    if (0x80 < local_1dc) {
      local_1dc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),0);
    }
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_208._0_8_);
    }
    local_170 = 0;
    if (local_178 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_178);
    }
    iVar1 = SUB84(local_1b8._8_8_,4);
    local_1b8._8_8_ = local_1b8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
    }
    local_188 = 0xffffffff;
    local_184 = 0;
    local_190 = 0;
    if (0x80 < local_18c) {
      local_18c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10),0);
    }
    if (local_198 != (void *)0x0) {
      FMemory::Free(local_198);
    }
    if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1b8._0_8_);
    }
    local_120 = 0;
    if (local_128 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128);
    }
    uVar2 = local_160 >> 0x20;
    local_160 = local_160 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&local_168,0,(int *)((longlong)&local_160 + 4));
    }
    local_134 = 0;
    local_158.NumBits = 0;
    local_138 = 0xffffffff;
    if (0x80 < (uint)local_158.MaxBits) {
      local_158.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_158,0);
    }
    if (local_158.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
    }
    if (local_168 != (void *)0x0) {
      FMemory::Free(local_168);
    }
  }
  return;
}

// RemoveEnvelopeFollowerDelegate @ 1486e8600

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
USoundSubmix::RemoveEnvelopeFollowerDelegate
          (USoundSubmix *this,UObject *param_1,FOnSubmixEnvelopeBP *param_2)

{
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x1b8))(pFVar1,this,param_2);
      }
    }
  }
  return;
}

// RemoveSpectralAnalysisDelegate @ 1486e8e10

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
USoundSubmix::RemoveSpectralAnalysisDelegate
          (USoundSubmix *this,UObject *param_1,FOnSubmixSpectralAnalysisBP *param_2)

{
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x1e8))(pFVar1,this,param_2);
      }
    }
  }
  return;
}

// Serialize @ 1486ed340

void __thiscall USoundSubmix::Serialize(USoundSubmix *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001486ed360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSoundSubmixCustomVersion::GUID);
  return;
}

// Serialize @ 1486ed370

void __thiscall USoundSubmix::Serialize(USoundSubmix *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FSoundSubmixCustomVersion::GUID);
  return;
}

// SetDryVolumeModulation @ 1486ee2a0

void __thiscall
USoundSubmix::SetDryVolumeModulation
          (USoundSubmix *this,FSoundModulationDestinationSettings *param_1)

{
  (this->DryLevelModulation).Value = param_1->Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->DryLevelModulation).Modulators,&param_1->Modulators);
  PushModulationChanges(this);
  return;
}

// SetOutputVolumeModulation @ 1486eee20

void __thiscall
USoundSubmix::SetOutputVolumeModulation
          (USoundSubmix *this,FSoundModulationDestinationSettings *param_1)

{
  (this->OutputVolumeModulation).Value = param_1->Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->OutputVolumeModulation).Modulators,&param_1->Modulators);
  PushModulationChanges(this);
  return;
}

// SetSubmixDryLevel @ 1486efec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundSubmix::SetSubmixDryLevel(USoundSubmix *this,UObject *param_1,float param_2)

{
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x198))(pFVar1,this,param_2);
      }
    }
  }
  return;
}

// SetSubmixOutputVolume @ 1486eff30

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
USoundSubmix::SetSubmixOutputVolume(USoundSubmix *this,UObject *param_1,float param_2)

{
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x188))(pFVar1,this,param_2);
      }
    }
  }
  return;
}

// SetSubmixWetLevel @ 1486effa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundSubmix::SetSubmixWetLevel(USoundSubmix *this,UObject *param_1,float param_2)

{
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar1->_padding_ + 400))(pFVar1,this,param_2);
      }
    }
  }
  return;
}

// SetWetVolumeModulation @ 1486f0aa0

void __thiscall
USoundSubmix::SetWetVolumeModulation
          (USoundSubmix *this,FSoundModulationDestinationSettings *param_1)

{
  (this->WetLevelModulation).Value = param_1->Value;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=(&(this->WetLevelModulation).Modulators,&param_1->Modulators);
  PushModulationChanges(this);
  return;
}

// StartEnvelopeFollowing @ 1486f13d0

void __thiscall USoundSubmix::StartEnvelopeFollowing(USoundSubmix *this,FAudioDevice *param_1)

{
  if (param_1 != (FAudioDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486f13e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x148))(param_1,this);
    return;
  }
  return;
}

// StartEnvelopeFollowing @ 1486f13f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundSubmix::StartEnvelopeFollowing(USoundSubmix *this,UObject *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x148);
                    /* WARNING: Could not recover jumptable at 0x0001486f1437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pFVar1,this,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  return;
}

// StartRecordingOutput @ 1486f1450

void __thiscall
USoundSubmix::StartRecordingOutput(USoundSubmix *this,FAudioDevice *param_1,float param_2)

{
  if (param_1 != (FAudioDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486f1461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x138))(param_1,this);
    return;
  }
  return;
}

// StartRecordingOutput @ 1486f1470

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
USoundSubmix::StartRecordingOutput(USoundSubmix *this,UObject *param_1,float param_2)

{
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x138))(pFVar1,this,param_2);
      }
    }
  }
  return;
}

// StartSpectralAnalysis @ 1486f14e0

void __thiscall
USoundSubmix::StartSpectralAnalysis
          (USoundSubmix *this,FAudioDevice *param_1,EFFTSize param_2,
          EFFTPeakInterpolationMethod param_3,EFFTWindowType param_4,float param_5,
          EAudioSpectrumType param_6)

{
  undefined2 local_res10;
  EAudioSpectrumType EStackX_12;
  EFFTPeakInterpolationMethod EStackX_13;
  float fStackX_14;
  
  if (param_1 != (FAudioDevice *)0x0) {
    if (__real_41200000 <= param_5) {
      param_5 = __real_41200000;
    }
    if (param_5 <= __real_3a83126f) {
      param_5 = __real_3a83126f;
    }
    _local_res10 = CONCAT44(param_5,CONCAT13(param_3,CONCAT12(param_6,CONCAT11(param_4,param_2))));
    (**(code **)(param_1->_padding_ + 0x1c0))(param_1,this,&local_res10);
  }
  return;
}

// StartSpectralAnalysis @ 1486f1550

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
USoundSubmix::StartSpectralAnalysis
          (USoundSubmix *this,UObject *param_1,EFFTSize param_2,EFFTPeakInterpolationMethod param_3,
          EFFTWindowType param_4,float param_5,EAudioSpectrumType param_6)

{
  UWorld *this_00;
  FAudioDevice *pFVar1;
  undefined3 local_18;
  EFFTPeakInterpolationMethod EStack_15;
  float fStack_14;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        if (__real_41200000 <= param_5) {
          param_5 = __real_41200000;
        }
        if (param_5 <= __real_3a83126f) {
          param_5 = __real_3a83126f;
        }
        _local_18 = CONCAT44(param_5,CONCAT13(param_3,CONCAT21(CONCAT11(param_6,param_4),param_2)));
        (**(code **)(pFVar1->_padding_ + 0x1c0))(pFVar1,this,&local_18);
      }
    }
  }
  return;
}

// StaticRegisterNativesUSoundSubmix @ 1486f1a40

void __cdecl USoundSubmix::StaticRegisterNativesUSoundSubmix(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_USoundSubmix_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopEnvelopeFollowing @ 1486f1d00

void __thiscall USoundSubmix::StopEnvelopeFollowing(USoundSubmix *this,FAudioDevice *param_1)

{
  if (param_1 != (FAudioDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486f1d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x150))(param_1,this);
    return;
  }
  return;
}

// StopEnvelopeFollowing @ 1486f1d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundSubmix::StopEnvelopeFollowing(USoundSubmix *this,UObject *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x150);
                    /* WARNING: Could not recover jumptable at 0x0001486f1d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pFVar1,this,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  return;
}

// StopRecordingOutput @ 1486f1d80

void __thiscall
USoundSubmix::StopRecordingOutput
          (USoundSubmix *this,FAudioDevice *param_1,EAudioRecordingExportType param_2,
          FString *param_3,FString *param_4,USoundWave *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  FAudioRecordingData *pFVar10;
  FAudioRecordingData *pFVar11;
  uint uVar12;
  FAudioRecordingData *pFVar13;
  float *pfVar14;
  float local_res10 [2];
  EAudioRecordingExportType local_res18;
  FString *local_res20;
  ForAnyElementType local_128;
  int local_120 [3];
  int local_114;
  int local_110;
  int local_10c;
  float local_108;
  float local_100 [2];
  TSampleBuffer<short> local_f8;
  code *local_c8 [2];
  undefined **local_b8;
  USoundSubmix *local_b0;
  undefined8 local_a0;
  code *local_98 [2];
  undefined **local_88;
  USoundSubmix *local_80;
  undefined8 local_70;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_1 != (FAudioDevice *)0x0) &&
     (puVar9 = (undefined8 *)
               (**(code **)(param_1->_padding_ + 0x140))(param_1,this,local_res10,local_100),
     *(int *)(puVar9 + 1) != 0)) {
    pFVar10 = ::operator_new(0xa0);
    pFVar11 = (FAudioRecordingData *)0x0;
    pFVar13 = pFVar11;
    if (pFVar10 != (FAudioRecordingData *)0x0) {
      *(undefined8 *)&(pFVar10->InputBuffer).field_0x24 = 0;
      *(undefined8 *)
       ((longlong)&(pFVar10->Writer).CurrentBuffer.RawPCMData.AllocatorInstance.Data + 4) = 0;
      *(undefined8 *)&(pFVar10->Writer).CurrentBuffer.RawPCMData.ArrayMax = 0;
      (pFVar10->Writer).CurrentBuffer.NumFrames = 0;
      (pFVar10->Writer).CurrentBuffer.NumChannels = 0;
      (pFVar10->Writer).CurrentBuffer.SampleRate = 0;
      (pFVar10->Writer).CurrentBuffer.SampleDuration = 0.0;
      *(undefined8 *)&(pFVar10->Writer).CurrentBuffer.field_0x24 = 0;
      *(undefined8 *)((longlong)&(pFVar10->Writer).CurrentSoundWave + 4) = 0;
      *(undefined8 *)&(pFVar10->Writer)._padding_ = 0;
      *(undefined8 *)((longlong)&(pFVar10->Writer).AbsoluteFilePath.Data.AllocatorInstance.Data + 4)
           = 0;
      *(undefined8 *)&(pFVar10->Writer).AbsoluteFilePath.Data.ArrayMax = 0;
      *(undefined8 *)&(pFVar10->Writer).field_0x4c = 0;
      *(undefined8 *)((longlong)&(pFVar10->Writer).CurrentOperation.Ptr + 4) = 0;
      *(undefined8 *)((longlong)&(pFVar10->Writer).SerializedWavData.AllocatorInstance.Data + 4) = 0
      ;
      *(undefined8 *)&(pFVar10->Writer).SerializedWavData.ArrayMax = 0;
      *(undefined8 *)&(pFVar10->Writer).ChunkSize = 0;
      *(undefined4 *)((longlong)&(pFVar10->Writer).CurrentPackage + 4) = 0;
      (pFVar10->InputBuffer).RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->InputBuffer).RawPCMData.ArrayNum = 0;
      (pFVar10->InputBuffer).RawPCMData.ArrayMax = 0;
      (pFVar10->InputBuffer).NumSamples = 0;
      (pFVar10->InputBuffer).NumFrames = 0;
      (pFVar10->InputBuffer).NumChannels = 0;
      (pFVar10->InputBuffer).SampleRate = 0;
      (pFVar10->InputBuffer).SampleDuration = 0.0;
      Audio::FSoundWavePCMWriter::FSoundWavePCMWriter(&pFVar10->Writer,0x2000);
      pFVar13 = pFVar10;
    }
    pFVar10 = (this->RecordingData).Ptr;
    if ((pFVar10 != pFVar13) &&
       ((this->RecordingData).Ptr = pFVar13, pFVar10 != (FAudioRecordingData *)0x0)) {
      Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(&pFVar10->Writer);
      pFVar1 = (pFVar10->InputBuffer).RawPCMData.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(pFVar10,0xa0);
    }
    local_110 = (int)local_res10[0];
    local_120[2] = *(int *)(puVar9 + 1);
    pfVar14 = (float *)*puVar9;
    local_f8.RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.RawPCMData.ArrayMax = 0;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120[1] = 0;
    local_114 = local_120[2] / local_110;
    local_10c = (int)local_100[0];
    local_108 = (float)local_114 / (float)local_10c;
    if (local_120[2] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_120[2]);
    }
    local_120[0] = 0;
    if (0 < local_120[2]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_120[2],&local_128,0,local_120 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_120[2],&local_128,local_120,local_120 + 1);
    fVar6 = __real_46fffe00;
    fVar5 = __real_bf800000;
    fVar4 = __real_3f800000;
    pFVar13 = pFVar11;
    if (0 < local_120[2]) {
      do {
        uVar12 = (uint)pFVar13;
        fVar3 = *pfVar14;
        if (fVar4 <= *pfVar14) {
          fVar3 = fVar4;
        }
        if (fVar3 <= fVar5) {
          fVar3 = fVar5;
        }
        uVar8 = 0;
        if ((int)uVar12 < local_120[0]) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pfVar14 = pfVar14 + 1;
        *(short *)(local_128.Data + (longlong)pFVar11) = (short)(int)(fVar3 * fVar6);
        pFVar11 = (FAudioRecordingData *)
                  ((longlong)&(pFVar11->InputBuffer).RawPCMData.AllocatorInstance.Data + 2);
        pFVar13 = (FAudioRecordingData *)(ulonglong)(uVar12 + 1);
      } while ((int)(uVar12 + 1) < local_120[2]);
    }
    local_f8.NumFrames = local_114;
    local_f8.NumChannels = local_110;
    local_f8.SampleRate = local_10c;
    local_f8.SampleDuration = local_108;
    local_f8.NumSamples = local_120[2];
    if (local_120[2] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_120[2]);
    }
    local_f8.RawPCMData.ArrayNum = 0;
    if (local_f8.RawPCMData.ArrayMax < local_120[2]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_120[2],(ForAnyElementType *)&local_f8,0,&local_f8.RawPCMData.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.NumSamples,(ForAnyElementType *)&local_f8,&local_f8.RawPCMData.ArrayNum,
               &local_f8.RawPCMData.ArrayMax);
    memcpy(local_f8.RawPCMData.AllocatorInstance.Data,local_128.Data,
           (longlong)local_f8.NumSamples * 2);
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    Audio::TSampleBuffer<short>::operator=(&((this->RecordingData).Ptr)->InputBuffer,&local_f8);
    if (local_f8.RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.RawPCMData.AllocatorInstance.Data);
    }
    if (local_res18 == SoundWave) {
      pFVar13 = (this->RecordingData).Ptr;
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::`16'::<lambda_2>,0,0>::
                  _vftable_;
      local_70 = 0;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USoundSubmix::StopRecordingOutput'::__l16::<lambda_2>,void,USoundWave_const_*>
                    ::Call;
      local_80 = this;
      Audio::FSoundWavePCMWriter::BeginGeneratingSoundWaveFromBuffer
                (&pFVar13->Writer,&pFVar13->InputBuffer,(USoundWave *)0x0,
                 (TFunction<void___cdecl(USoundWave_const_*)> *)local_98);
    }
    else if (local_res18 == WavFile) {
      pFVar13 = (this->RecordingData).Ptr;
      local_b8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`USoundSubmix::StopRecordingOutput'::`17'::<lambda_3>,0,0>::
                  _vftable_;
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USoundSubmix::StopRecordingOutput'::__l17::<lambda_3>,void>
                    ::Call;
      local_a0 = 0;
      local_b0 = this;
      Audio::FSoundWavePCMWriter::BeginWriteToWavFile
                (&pFVar13->Writer,&pFVar13->InputBuffer,local_res20,param_4,
                 (TFunction<void___cdecl(void)> *)local_c8);
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// StopRecordingOutput @ 1486f21b0

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
USoundSubmix::StopRecordingOutput
          (USoundSubmix *this,UObject *param_1,EAudioRecordingExportType param_2,FString *param_3,
          FString *param_4,USoundWave *param_5)

{
  FScriptContainerElement *pFVar1;
  UWorld *this_00;
  FAudioDevice *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  if (((GEngine != (UEngine *)0x0) &&
      (this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull),
      this_00 != (UWorld *)0x0)) &&
     (pFVar2 = UWorld::GetAudioDeviceRaw(this_00), pFVar2 != (FAudioDevice *)0x0)) {
    pFVar3 = ::FString::FString(&local_18,param_4);
    StopRecordingOutput(this,pFVar2,param_2,param_3,pFVar3,param_5);
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// StopSpectralAnalysis @ 1486f2270

void __thiscall USoundSubmix::StopSpectralAnalysis(USoundSubmix *this,FAudioDevice *param_1)

{
  if (param_1 != (FAudioDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486f2281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x1c8))(param_1,this);
    return;
  }
  return;
}

// StopSpectralAnalysis @ 1486f2290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundSubmix::StopSpectralAnalysis(USoundSubmix *this,UObject *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UWorld *this_00;
  FAudioDevice *pFVar1;
  
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_00 != (UWorld *)0x0) {
      pFVar1 = UWorld::GetAudioDeviceRaw(this_00);
      if (pFVar1 != (FAudioDevice *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x0001486f22d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pFVar1,this,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  return;
}

// execAddEnvelopeFollowerDelegate @ 1486fa250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
USoundSubmix::execAddEnvelopeFollowerDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  FAudioDevice *pFVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  undefined8 local_60;
  undefined8 local_58;
  FMRSWRecursiveAccessDetector local_50;
  atomic<unsigned___int64> local_48;
  atomic<unsigned___int64> local_40;
  FReadAccessScope local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60 = 0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_50.State = (atomic<unsigned___int64>)0x0;
  this_00 = &local_68;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
              param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_38);
  local_48 = this_00[1].AccessDetector.State;
  local_40 = this_00[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar2 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar2 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x1b0))(pFVar2,param_1,&local_50);
      }
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// execAddSpectralAnalysisDelegate @ 1486fa3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
USoundSubmix::execAddSpectralAnalysisDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  uint uVar2;
  FProperty *pFVar3;
  FScriptContainerElement *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UWorld *this;
  FAudioDevice *pFVar8;
  ForAnyElementType *pFVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  bool bVar10;
  bool bVar11;
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  UObject *local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined4 local_bc;
  undefined4 local_b8;
  FMRSWRecursiveAccessDetector local_b0;
  atomic<unsigned___int64> local_a8;
  atomic<unsigned___int64> local_a0;
  FReadAccessScope local_98 [4];
  
  local_108 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e8 = 0;
  pFVar9 = &local_100;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar9 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  local_e0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_10c = 0;
  this_00 = &local_f0;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
              param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10c,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10c);
  }
  local_110 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar10 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar11 = local_res20[0] != 0;
  local_114 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  local_118 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  uVar7 = local_10c;
  uVar6 = local_110;
  uVar5 = local_114;
  uVar4 = local_118;
  local_b0.State = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,local_98);
  local_a8 = this_00[1].AccessDetector.State;
  local_a0 = this_00[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_98);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_108,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar8 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar8 != (FAudioDevice *)0x0) {
        local_d8.Data = (FScriptContainerElement *)0x0;
        local_d0 = 0;
        if (&local_d8 != pFVar9) {
          uVar2 = *(uint *)&pFVar9[1].Data;
          _Src = pFVar9->Data;
          local_d0 = (ulonglong)uVar2;
          if (uVar2 != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,uVar2,0,&local_d8,uVar2,(int *)((longlong)&local_d0 + 4));
            memcpy(local_d8.Data,_Src,(longlong)(int)uVar2 << 4);
          }
        }
        local_c8 = uVar7;
        local_c4 = uVar6;
        local_bc = uVar5;
        local_b8 = uVar4;
        local_c0 = bVar10;
        local_bf = bVar11;
        (**(code **)(pFVar8->_padding_ + 0x1e0))(pFVar8,param_1,&local_d8,&local_b0);
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
      }
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  return;
}

// execRemoveEnvelopeFollowerDelegate @ 1486faf70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
USoundSubmix::execRemoveEnvelopeFollowerDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  FAudioDevice *pFVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  undefined8 local_60;
  undefined8 local_58;
  FMRSWRecursiveAccessDetector local_50;
  atomic<unsigned___int64> local_48;
  atomic<unsigned___int64> local_40;
  FReadAccessScope local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60 = 0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_50.State = (atomic<unsigned___int64>)0x0;
  this_00 = &local_68;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
              param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_38);
  local_48 = this_00[1].AccessDetector.State;
  local_40 = this_00[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar2 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar2 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x1b8))(pFVar2,param_1,&local_50);
      }
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// execRemoveSpectralAnalysisDelegate @ 1486fb0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
USoundSubmix::execRemoveSpectralAnalysisDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  FAudioDevice *pFVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  undefined8 local_60;
  undefined8 local_58;
  FMRSWRecursiveAccessDetector local_50;
  atomic<unsigned___int64> local_48;
  atomic<unsigned___int64> local_40;
  FReadAccessScope local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60 = 0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_50.State = (atomic<unsigned___int64>)0x0;
  this_00 = &local_68;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
              param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_38);
  local_48 = this_00[1].AccessDetector.State;
  local_40 = this_00[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar2 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar2 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x1e8))(pFVar2,param_1,&local_50);
      }
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// execSetDryVolumeModulation @ 1486fb270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USoundSubmix::execSetDryVolumeModulation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  ulonglong uVar5;
  int iVar6;
  uchar *puVar7;
  undefined1 auStackY_b8 [32];
  uchar local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  void *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = 0x80;
  local_88[3] = '?';
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  puVar7 = local_88;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  param_1[0xb].field_0x10 = puVar7[0];
  param_1[0xb].field_0x11 = uVar2;
  param_1[0xb].field_0x12 = uVar3;
  param_1[0xb].field_0x13 = uVar4;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&param_1[0xb].field_0x18,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)(puVar7 + 8));
  PushModulationChanges((USoundSubmix *)param_1);
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  uVar5 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar6 = local_70.MaxBits;
  uStack_50 = 0xffffffff;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
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
  return;
}

// execSetOutputVolumeModulation @ 1486fb4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USoundSubmix::execSetOutputVolumeModulation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  ulonglong uVar5;
  int iVar6;
  uchar *puVar7;
  undefined1 auStackY_b8 [32];
  uchar local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  void *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = 0x80;
  local_88[3] = '?';
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  puVar7 = local_88;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  param_1[7].field_0x0 = puVar7[0];
  param_1[7].field_0x1 = uVar2;
  param_1[7].field_0x2 = uVar3;
  param_1[7].field_0x3 = uVar4;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&param_1[7].field_0x8,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)(puVar7 + 8));
  PushModulationChanges((USoundSubmix *)param_1);
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  uVar5 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar6 = local_70.MaxBits;
  uStack_50 = 0xffffffff;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
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
  return;
}

// execSetSubmixDryLevel @ 1486fb6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundSubmix::execSetSubmixDryLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  UWorld *this;
  FAudioDevice *pFVar3;
  undefined4 local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar3 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar3 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar3->_padding_ + 0x198))(pFVar3,param_1,uVar2);
      }
    }
  }
  return;
}

// execSetSubmixOutputVolume @ 1486fb7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundSubmix::execSetSubmixOutputVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  UWorld *this;
  FAudioDevice *pFVar3;
  undefined4 local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar3 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar3 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar3->_padding_ + 0x188))(pFVar3,param_1,uVar2);
      }
    }
  }
  return;
}

// execSetSubmixWetLevel @ 1486fb910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundSubmix::execSetSubmixWetLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  UWorld *this;
  FAudioDevice *pFVar3;
  undefined4 local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar3 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar3 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar3->_padding_ + 400))(pFVar3,param_1,uVar2);
      }
    }
  }
  return;
}

// execSetWetVolumeModulation @ 1486fba30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USoundSubmix::execSetWetVolumeModulation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  ulonglong uVar5;
  int iVar6;
  uchar *puVar7;
  undefined1 auStackY_b8 [32];
  uchar local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  void *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = 0x80;
  local_88[3] = '?';
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (void *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  puVar7 = local_88;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  param_1[9].field_0x8 = puVar7[0];
  param_1[9].field_0x9 = uVar2;
  param_1[9].field_0xa = uVar3;
  param_1[9].field_0xb = uVar4;
  TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)&param_1[9].field_0x10,
              (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
               *)(puVar7 + 8));
  PushModulationChanges((USoundSubmix *)param_1);
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  uVar5 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar6 = local_70.MaxBits;
  uStack_50 = 0xffffffff;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
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
  return;
}

// execStartEnvelopeFollowing @ 1486fbbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
USoundSubmix::execStartEnvelopeFollowing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  FAudioDevice *pFVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
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
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar2 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar2 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x148))(pFVar2,param_1);
      }
    }
  }
  return;
}

// execStartRecordingOutput @ 1486fbc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundSubmix::execStartRecordingOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  UWorld *this;
  FAudioDevice *pFVar3;
  undefined4 local_res10 [2];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar3 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar3 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar3->_padding_ + 0x138))(pFVar3,param_1,uVar2);
      }
    }
  }
  return;
}

// execStartSpectralAnalysis @ 1486fbd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundSubmix::execStartSpectralAnalysis(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  UWorld *this;
  FAudioDevice *pFVar7;
  float fVar8;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_58;
  undefined1 local_57 [3];
  float local_54;
  undefined4 local_50;
  float fStack_4c;
  UObject *local_48 [4];
  
  local_48[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_57[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_57,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_57);
  }
  local_58 = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_54 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar8 = local_54;
  uVar6 = local_57[0];
  uVar5 = local_58;
  uVar4 = local_res20[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_48[0],LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar7 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar7 != (FAudioDevice *)0x0) {
        if (__real_41200000 <= fVar8) {
          fVar8 = __real_41200000;
        }
        local_50._0_3_ = CONCAT12(uVar3,CONCAT11(uVar4,uVar6));
        if (fVar8 <= __real_3a83126f) {
          fVar8 = __real_3a83126f;
        }
        _local_50 = CONCAT44(fVar8,CONCAT13(uVar5,(undefined3)local_50));
        (**(code **)(pFVar7->_padding_ + 0x1c0))(pFVar7,param_1,&local_50);
      }
    }
  }
  return;
}

// execStopEnvelopeFollowing @ 1486fbfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundSubmix::execStopEnvelopeFollowing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  FAudioDevice *pFVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
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
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar2 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar2 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,param_1);
      }
    }
  }
  return;
}

// execStopRecordingOutput @ 1486fc070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundSubmix::execStopRecordingOutput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  EAudioRecordingExportType EVar3;
  USoundWave *pUVar4;
  void *_Src;
  UWorld *this;
  FAudioDevice *pFVar5;
  FString *pFVar6;
  longlong lVar7;
  EAudioRecordingExportType local_res10 [16];
  USoundWave *local_res20;
  UObject *local_78;
  FString local_70;
  void *local_60;
  undefined8 local_58;
  FString local_50;
  FString local_40;
  
  local_78 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = SoundWave;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20 = (USoundWave *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  _Src = local_60;
  pUVar4 = local_res20;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_58;
  local_70.Data.ArrayNum = (int)local_58;
  if ((int)local_58 == 0) {
    local_70.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_58,0,(ForAnyElementType *)&local_70,(int)local_58,
               &local_70.Data.ArrayMax);
    memcpy(local_70.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  EVar3 = local_res10[0];
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_78,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar5 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar5 != (FAudioDevice *)0x0) {
        pFVar6 = ::FString::FString(&local_40,&local_70);
        StopRecordingOutput((USoundSubmix *)param_1,pFVar5,EVar3,&local_50,pFVar6,pUVar4);
      }
    }
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execStopSpectralAnalysis @ 1486fc2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundSubmix::execStopSpectralAnalysis(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *this;
  FAudioDevice *pFVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
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
  if (GEngine != (UEngine *)0x0) {
    this = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
    if (this != (UWorld *)0x0) {
      pFVar2 = UWorld::GetAudioDeviceRaw(this);
      if (pFVar2 != (FAudioDevice *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x1c8))(pFVar2,param_1);
      }
    }
  }
  return;
}

