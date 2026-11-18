// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 27

// StaticClass @ 1465344b0

UClass * __cdecl USubmixEffectDynamicsProcessorPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectDynamicsProcessorPreset",
               &Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectDynamicsProcessorPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectDynamicsProcessorPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 146536880

void __cdecl
`USubmixEffectDynamicsProcessorPreset::ResetKey'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSubmixEffectDynamicsProcessor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &(param_1->KeySource).Patch;
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<Audio::FPatchOutput,1> *)&uStack_18) {
    pTVar1->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->KeySource).Patch.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  lpCriticalSection = &(param_1->KeySource).MutateSourceCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (param_1->KeySource).NumChannels = 0;
    (param_1->KeySource).ObjectId = 0xffffffff;
    (param_1->KeySource).Type = Default;
                    /* WARNING: Could not recover jumptable at 0x00014656fcb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// USubmixEffectDynamicsProcessorPreset @ 14653ead0

USubmixEffectDynamicsProcessorPreset * __thiscall
USubmixEffectDynamicsProcessorPreset::USubmixEffectDynamicsProcessorPreset
          (USubmixEffectDynamicsProcessorPreset *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FSubmixEffectDynamicProcessorFilterSettings *pFVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectDynamicsProcessorPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  pFVar2->bEnabled = '\0';
  pFVar2->bEnabled = '\0';
  pFVar2->bEnabled = '\0';
  puVar3 = &(this->SettingsCopy).field_0x38;
  (this->SettingsCopy).bChannelLinked_DEPRECATED = '\x01';
  (this->SettingsCopy).bKeyAudition = '\0';
  (this->SettingsCopy).bBypass = '\0';
  (this->SettingsCopy).bAnalogMode = '\x01';
  (this->SettingsCopy).DynamicsProcessorType = Compressor;
  (this->SettingsCopy).PeakMode = Peak;
  (this->SettingsCopy).LinkMode = Average;
  pFVar2->bEnabled = '\0';
  puVar3 = &(this->Settings).field_0x38;
  (this->Settings).bChannelLinked_DEPRECATED = '\x01';
  (this->Settings).bKeyAudition = '\0';
  (this->Settings).bBypass = '\0';
  (this->Settings).bAnalogMode = '\x01';
  (this->SettingsCopy).InputGainDb = 0.0;
  (this->SettingsCopy).ThresholdDb = -6.0;
  (this->SettingsCopy).Ratio = 1.5;
  (this->SettingsCopy).KneeBandwidthDb = 10.0;
  (this->SettingsCopy).LookAheadMsec = 3.0;
  (this->SettingsCopy).AttackTimeMsec = 10.0;
  (this->SettingsCopy).ReleaseTimeMsec = 100.0;
  (this->SettingsCopy).KeySource = Default;
  (this->SettingsCopy).ExternalAudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->SettingsCopy).ExternalSubmix.field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  (this->SettingsCopy).KeyGainDb = 0.0;
  (this->SettingsCopy).OutputGainDb = 0.0;
  (this->SettingsCopy).KeyHighshelf.Cutoff = 20.0;
  (this->SettingsCopy).KeyHighshelf.GainDb = 0.0;
  (this->SettingsCopy).KeyLowshelf.Cutoff = 20000.0;
  (this->SettingsCopy).KeyLowshelf.GainDb = 0.0;
  (this->Settings).DynamicsProcessorType = Compressor;
  (this->Settings).PeakMode = Peak;
  (this->Settings).LinkMode = Average;
  (this->Settings).InputGainDb = 0.0;
  (this->Settings).ThresholdDb = -6.0;
  (this->Settings).Ratio = 1.5;
  (this->Settings).KneeBandwidthDb = 10.0;
  (this->Settings).LookAheadMsec = 3.0;
  (this->Settings).AttackTimeMsec = 10.0;
  (this->Settings).ReleaseTimeMsec = 100.0;
  (this->Settings).KeySource = Default;
  (this->Settings).ExternalAudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->Settings).ExternalSubmix.field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  (this->Settings).KeyGainDb = 0.0;
  (this->Settings).OutputGainDb = 0.0;
  (this->Settings).KeyHighshelf.Cutoff = 20.0;
  (this->Settings).KeyHighshelf.GainDb = 0.0;
  (this->Settings).KeyLowshelf.Cutoff = 20000.0;
  (this->Settings).KeyLowshelf.GainDb = 0.0;
  return this;
}

// USubmixEffectDynamicsProcessorPreset @ 14653ec50

USubmixEffectDynamicsProcessorPreset * __thiscall
USubmixEffectDynamicsProcessorPreset::USubmixEffectDynamicsProcessorPreset
          (USubmixEffectDynamicsProcessorPreset *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FSubmixEffectDynamicProcessorFilterSettings *pFVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectDynamicsProcessorPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  pFVar2->bEnabled = '\0';
  pFVar2->bEnabled = '\0';
  pFVar2->bEnabled = '\0';
  puVar3 = &(this->SettingsCopy).field_0x38;
  (this->SettingsCopy).bChannelLinked_DEPRECATED = '\x01';
  (this->SettingsCopy).bKeyAudition = '\0';
  (this->SettingsCopy).bBypass = '\0';
  (this->SettingsCopy).bAnalogMode = '\x01';
  (this->SettingsCopy).DynamicsProcessorType = Compressor;
  (this->SettingsCopy).PeakMode = Peak;
  (this->SettingsCopy).LinkMode = Average;
  pFVar2->bEnabled = '\0';
  puVar3 = &(this->Settings).field_0x38;
  (this->Settings).bChannelLinked_DEPRECATED = '\x01';
  (this->Settings).bKeyAudition = '\0';
  (this->Settings).bBypass = '\0';
  (this->Settings).bAnalogMode = '\x01';
  (this->SettingsCopy).InputGainDb = 0.0;
  (this->SettingsCopy).ThresholdDb = -6.0;
  (this->SettingsCopy).Ratio = 1.5;
  (this->SettingsCopy).KneeBandwidthDb = 10.0;
  (this->SettingsCopy).LookAheadMsec = 3.0;
  (this->SettingsCopy).AttackTimeMsec = 10.0;
  (this->SettingsCopy).ReleaseTimeMsec = 100.0;
  (this->SettingsCopy).KeySource = Default;
  (this->SettingsCopy).ExternalAudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->SettingsCopy).ExternalSubmix.field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  (this->SettingsCopy).KeyGainDb = 0.0;
  (this->SettingsCopy).OutputGainDb = 0.0;
  (this->SettingsCopy).KeyHighshelf.Cutoff = 20.0;
  (this->SettingsCopy).KeyHighshelf.GainDb = 0.0;
  (this->SettingsCopy).KeyLowshelf.Cutoff = 20000.0;
  (this->SettingsCopy).KeyLowshelf.GainDb = 0.0;
  (this->Settings).DynamicsProcessorType = Compressor;
  (this->Settings).PeakMode = Peak;
  (this->Settings).LinkMode = Average;
  (this->Settings).InputGainDb = 0.0;
  (this->Settings).ThresholdDb = -6.0;
  (this->Settings).Ratio = 1.5;
  (this->Settings).KneeBandwidthDb = 10.0;
  (this->Settings).LookAheadMsec = 3.0;
  (this->Settings).AttackTimeMsec = 10.0;
  (this->Settings).ReleaseTimeMsec = 100.0;
  (this->Settings).KeySource = Default;
  (this->Settings).ExternalAudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->Settings).ExternalSubmix.field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  (this->Settings).KeyGainDb = 0.0;
  (this->Settings).OutputGainDb = 0.0;
  (this->Settings).KeyHighshelf.Cutoff = 20.0;
  (this->Settings).KeyHighshelf.GainDb = 0.0;
  (this->Settings).KeyLowshelf.Cutoff = 20000.0;
  (this->Settings).KeyLowshelf.GainDb = 0.0;
  return this;
}

// ~USubmixEffectDynamicsProcessorPreset @ 1465414d0

void __thiscall
USubmixEffectDynamicsProcessorPreset::~USubmixEffectDynamicsProcessorPreset
          (USubmixEffectDynamicsProcessorPreset *this)

{
  this->_padding_ = (longlong)&___7USubmixEffectDynamicsProcessorPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 146548eb0

bool __thiscall
USubmixEffectDynamicsProcessorPreset::CanFilter(USubmixEffectDynamicsProcessorPreset *this)

{
  return false;
}

// CreateNewEffect @ 14654eb30

FSoundEffectBase * __thiscall
USubmixEffectDynamicsProcessorPreset::CreateNewEffect(USubmixEffectDynamicsProcessorPreset *this)

{
  pmf_2b12ffa3 this_00;
  FDelegateHandle FVar1;
  
  this_00 = (pmf_2b12ffa3)::operator_new(0x1f0);
  if (this_00 != (pmf_2b12ffa3)0x0) {
    FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this_00);
    *(undefined4 *)((longlong)this_00 + 0x70) = 0xffffffff;
    *(undefined8 *)((longlong)this_00 + 0x78) = 0;
    *(undefined ***)this_00 = &___7FSubmixEffectDynamicsProcessor__6B_;
    *(undefined4 *)((longlong)this_00 + 0x80) = 0;
    *(undefined4 *)((longlong)this_00 + 0x84) = 0xffffffff;
    *(undefined8 *)((longlong)this_00 + 0x88) = 0;
    *(undefined8 *)((longlong)this_00 + 0x90) = 0;
    *(undefined4 *)((longlong)this_00 + 0x98) = 0xffffffff;
    *(undefined1 *)((longlong)this_00 + 0x9c) = 0;
    *(undefined1 *)((longlong)this_00 + 0xa0) = 0;
    *(undefined4 *)((longlong)this_00 + 0xa4) = 0;
    *(undefined4 *)((longlong)this_00 + 0xa8) = 0xffffffff;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)this_00 + 0xb0),4000);
    *(undefined8 *)((longlong)this_00 + 0xd8) = 0;
    *(undefined8 *)((longlong)this_00 + 0xe0) = 0;
    Audio::FDynamicsProcessor::FDynamicsProcessor((FDynamicsProcessor *)((longlong)this_00 + 0xe8));
    *(undefined8 *)((longlong)this_00 + 0x1e0) = 0;
    *(undefined8 *)((longlong)this_00 + 0x1e8) = 0;
    FVar1 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
            ::AddRaw<FSubmixEffectDynamicsProcessor>
                      ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                        *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
                       (FSubmixEffectDynamicsProcessor *)&stack0x00000010,this_00);
    *(undefined8 *)((longlong)this_00 + 0x1e0) = *(undefined8 *)FVar1.ID;
    FVar1 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
            ::AddRaw<FSubmixEffectDynamicsProcessor>
                      ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                        *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
                       (FSubmixEffectDynamicsProcessor *)&stack0x00000010,this_00);
    *(undefined8 *)((longlong)this_00 + 0x1e8) = *(undefined8 *)FVar1.ID;
    return (FSoundEffectBase *)this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14654eec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectDynamicsProcessorPreset::CreateNewPreset
          (USubmixEffectDynamicsProcessorPreset *this,UObject *param_1,FName param_2,
          EObjectFlags param_3)

{
  UClass *pUVar1;
  UClass *pUVar2;
  USoundEffectPreset *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = (UClass *)(**(code **)(this->_padding_ + 0x2c0))();
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar2 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar2,pUVar1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  local_a8._16_8_ = param_2;
  local_a8._24_4_ = param_3;
  pUVar3 = (USoundEffectPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3);
  return pUVar3;
}

// GetAssetActionName @ 1465550b0

FText * __thiscall
USubmixEffectDynamicsProcessorPreset::GetAssetActionName
          (USubmixEffectDynamicsProcessorPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectDynamicsProcessor");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14655a2e0

UClass * __cdecl USubmixEffectDynamicsProcessorPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectDynamicsProcessorPreset",
               &Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectDynamicsProcessorPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectDynamicsProcessorPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton;
}

// GetSettings @ 14655a900

FSubmixEffectDynamicsProcessorSettings * __thiscall
USubmixEffectDynamicsProcessorPreset::GetSettings
          (USubmixEffectDynamicsProcessorPreset *this,
          FSubmixEffectDynamicsProcessorSettings *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UAudioBus *pUVar1;
  USoundSubmix *pUVar2;
  float fVar3;
  byte bVar4;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    __return_storage_ptr__->DynamicsProcessorType = (this->SettingsCopy).DynamicsProcessorType;
    __return_storage_ptr__->PeakMode = (this->SettingsCopy).PeakMode;
    __return_storage_ptr__->LinkMode = (this->SettingsCopy).LinkMode;
    __return_storage_ptr__->InputGainDb = (this->SettingsCopy).InputGainDb;
    __return_storage_ptr__->ThresholdDb = (this->SettingsCopy).ThresholdDb;
    __return_storage_ptr__->Ratio = (this->SettingsCopy).Ratio;
    __return_storage_ptr__->KneeBandwidthDb = (this->SettingsCopy).KneeBandwidthDb;
    __return_storage_ptr__->LookAheadMsec = (this->SettingsCopy).LookAheadMsec;
    __return_storage_ptr__->AttackTimeMsec = (this->SettingsCopy).AttackTimeMsec;
    __return_storage_ptr__->ReleaseTimeMsec = (this->SettingsCopy).ReleaseTimeMsec;
    __return_storage_ptr__->KeySource = (this->SettingsCopy).KeySource;
    pUVar1 = (this->SettingsCopy).ExternalAudioBus.field0_0x0.DebugPtr;
    (__return_storage_ptr__->ExternalAudioBus).field0_0x0.DebugPtr = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar2 = (this->SettingsCopy).ExternalSubmix.field0_0x0.DebugPtr;
    (__return_storage_ptr__->ExternalSubmix).field0_0x0.DebugPtr = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundSubmix *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    bVar4 = (__return_storage_ptr__->bChannelLinked_DEPRECATED ^
            (this->SettingsCopy).bChannelLinked_DEPRECATED) & 1 ^ __return_storage_ptr__->field_0x38
    ;
    __return_storage_ptr__->field_0x38 = bVar4;
    bVar4 = (bVar4 ^ (this->SettingsCopy).field_0x38) & 2 ^ bVar4;
    __return_storage_ptr__->field_0x38 = bVar4;
    bVar4 = (bVar4 ^ (this->SettingsCopy).field_0x38) & 4 ^ bVar4;
    __return_storage_ptr__->field_0x38 = bVar4;
    __return_storage_ptr__->field_0x38 = (bVar4 ^ (this->SettingsCopy).field_0x38) & 8 ^ bVar4;
    __return_storage_ptr__->KeyGainDb = (this->SettingsCopy).KeyGainDb;
    __return_storage_ptr__->OutputGainDb = (this->SettingsCopy).OutputGainDb;
    fVar3 = (this->SettingsCopy).KeyHighshelf.Cutoff;
    *(undefined4 *)&(__return_storage_ptr__->KeyHighshelf).field_0x0 =
         *(undefined4 *)&(this->SettingsCopy).KeyHighshelf.field_0x0;
    (__return_storage_ptr__->KeyHighshelf).Cutoff = fVar3;
    (__return_storage_ptr__->KeyHighshelf).GainDb = (this->SettingsCopy).KeyHighshelf.GainDb;
    fVar3 = (this->SettingsCopy).KeyLowshelf.Cutoff;
    *(undefined4 *)&(__return_storage_ptr__->KeyLowshelf).field_0x0 =
         *(undefined4 *)&(this->SettingsCopy).KeyLowshelf.field_0x0;
    (__return_storage_ptr__->KeyLowshelf).Cutoff = fVar3;
    (__return_storage_ptr__->KeyLowshelf).GainDb = (this->SettingsCopy).KeyLowshelf.GainDb;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSupportedClass @ 14655b7c0

UClass * __thiscall
USubmixEffectDynamicsProcessorPreset::GetSupportedClass(USubmixEffectDynamicsProcessorPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectDynamicsProcessorPreset",
               &Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectDynamicsProcessorPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectDynamicsProcessorPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.InnerSingleton;
}

// HasAssetActions @ 14655c360

bool __thiscall
USubmixEffectDynamicsProcessorPreset::HasAssetActions(USubmixEffectDynamicsProcessorPreset *this)

{
  return true;
}

// Init @ 14655e1d0

void __thiscall
USubmixEffectDynamicsProcessorPreset::Init(USubmixEffectDynamicsProcessorPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectDynamicsProcessorSettings::operator=(&this->SettingsCopy,&this->Settings);
                    /* WARNING: Could not recover jumptable at 0x00014655e20f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnInit @ 146563eb0

void __thiscall
USubmixEffectDynamicsProcessorPreset::OnInit(USubmixEffectDynamicsProcessorPreset *this)

{
  ESubmixEffectDynamicsKeySource EVar1;
  
  EVar1 = (this->Settings).KeySource;
  if (EVar1 == AudioBus) {
    SetAudioBus(this,(this->Settings).ExternalAudioBus.field0_0x0.DebugPtr);
    return;
  }
  if (EVar1 == Submix) {
    SetExternalSubmix(this,(this->Settings).ExternalSubmix.field0_0x0.DebugPtr);
    return;
  }
  return;
}

// ResetKey @ 14656fcd0

void __thiscall
USubmixEffectDynamicsProcessorPreset::ResetKey(USubmixEffectDynamicsProcessorPreset *this)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `USubmixEffectDynamicsProcessorPreset::ResetKey'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),void,FSubmixEffectDynamicsProcessor_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38);
  return;
}

// Serialize @ 1465725d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USubmixEffectDynamicsProcessorPreset::Serialize
          (USubmixEffectDynamicsProcessorPreset *this,FArchive *param_1)

{
  undefined1 uVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  FArchive *pFVar3;
  undefined1 auStack_1d8 [32];
  FSlotBase local_1b8 [2];
  FStructuredArchiveFromArchive local_1a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a8,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1b8[0].StructuredArchive = *(FStructuredArchive **)FVar2;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1b8);
  if (((pFVar3->field_0x28 & 1) != 0) &&
     (uVar1 = (this->Settings).field_0x38, (this->Settings).bChannelLinked_DEPRECATED != 0)) {
    (this->Settings).LinkMode = Average;
    (this->Settings).field_0x38 = uVar1 & 0xfe;
  }
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_1b8[0].StructuredArchive);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a8);
  return;
}

// Serialize @ 146572670

void __thiscall
USubmixEffectDynamicsProcessorPreset::Serialize
          (USubmixEffectDynamicsProcessorPreset *this,FStructuredArchiveRecord param_1)

{
  undefined1 uVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if (((pFVar2->field_0x28 & 1) != 0) &&
     (uVar1 = (this->Settings).field_0x38, (this->Settings).bChannelLinked_DEPRECATED != 0)) {
    (this->Settings).LinkMode = Average;
    (this->Settings).field_0x38 = uVar1 & 0xfe;
  }
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_res10[0].StructuredArchive);
  return;
}

// SetAudioBus @ 146572710

void __thiscall
USubmixEffectDynamicsProcessorPreset::SetAudioBus
          (USubmixEffectDynamicsProcessorPreset *this,UAudioBus *param_1)

{
  USubmixEffectDynamicsProcessorPreset *local_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_1 != (UAudioBus *)0x0) {
    uStack_60 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_58 = (undefined **)CONCAT44(local_58._4_4_,param_1->AudioBusChannels + 1);
    uStack_5c = 1;
    local_38[0] = (code *)0x0;
    local_68 = this;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_68;
    local_10[2] = CONCAT44(_uStack_5c,uStack_60);
    local_10[3] = local_58;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
                    ::Call;
    }
    USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
              ((USoundEffectPreset *)this,
               (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38);
    return;
  }
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `USubmixEffectDynamicsProcessorPreset::ResetKey'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_68 = (USubmixEffectDynamicsProcessorPreset *)
             UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),void,FSubmixEffectDynamicsProcessor_&>
             ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)&local_68);
  return;
}

// SetExternalSubmix @ 146572d20

void __thiscall
USubmixEffectDynamicsProcessorPreset::SetExternalSubmix
          (USubmixEffectDynamicsProcessorPreset *this,USoundSubmix *param_1)

{
  USubmixEffectDynamicsProcessorPreset *local_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_1 != (USoundSubmix *)0x0) {
    uStack_60 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_58 = (undefined **)((ulonglong)local_58 & 0xffffffff00000000);
    local_38[0] = (code *)0x0;
    uStack_5c = 2;
    local_68 = this;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_68;
    local_10[2] = CONCAT44(_uStack_5c,uStack_60);
    local_10[3] = local_58;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
                    ::Call;
    }
    USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
              ((USoundEffectPreset *)this,
               (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38);
    return;
  }
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `USubmixEffectDynamicsProcessorPreset::ResetKey'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_68 = (USubmixEffectDynamicsProcessorPreset *)
             UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),void,FSubmixEffectDynamicsProcessor_&>
             ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)&local_68);
  return;
}

// SetKey @ 146573030

void __thiscall
USubmixEffectDynamicsProcessorPreset::SetKey
          (USubmixEffectDynamicsProcessorPreset *this,ESubmixEffectDynamicsKeySource param_1,
          UObject *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_2 != (UObject *)0x0) {
    uVar1 = *(undefined4 *)&param_2->field_0xc;
    uStack_4c = CONCAT31(uStack_4c._1_3_,param_1);
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = this;
    local_10[2] = CONCAT44(uStack_4c,uVar1);
    local_10[3] = CONCAT44(uStack_44,param_3);
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
                    ::Call;
    }
    USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
              ((USoundEffectPreset *)this,
               (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38);
  }
  return;
}

// SetSettings @ 146574510

void __thiscall
USubmixEffectDynamicsProcessorPreset::SetSettings
          (USubmixEffectDynamicsProcessorPreset *this,
          FSubmixEffectDynamicsProcessorSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *local_38 [2];
  undefined **local_28;
  FSubmixEffectDynamicsProcessorSettings *local_20;
  undefined8 local_10;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectDynamicsProcessorSettings::operator=(&this->SettingsCopy,param_1);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
                  ::Call;
    local_20 = param_1;
    USoundEffectPreset::IterateEffects<FSubmixEffectDynamicsProcessor>
              ((USoundEffectPreset *)this,
               (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset @ 146577980

void __cdecl
USubmixEffectDynamicsProcessorPreset::StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execResetKey @ 146580bb0

void __cdecl
USubmixEffectDynamicsProcessorPreset::execResetKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `USubmixEffectDynamicsProcessorPreset::ResetKey'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),void,FSubmixEffectDynamicsProcessor_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38);
  return;
}

// execSetAudioBus @ 146581300

void __cdecl
USubmixEffectDynamicsProcessorPreset::execSetAudioBus
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *pTVar2;
  longlong local_res10 [3];
  UObject *local_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_40 = 0;
    local_58 = &
               ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    pTVar2 = (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)&local_68;
    local_50 = `USubmixEffectDynamicsProcessorPreset::ResetKey'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_68 = (UObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),void,FSubmixEffectDynamicsProcessor_&>
               ::Call;
  }
  else {
    uStack_60 = *(undefined4 *)(local_res10[0] + 0xc);
    local_58 = (undefined **)CONCAT44(local_58._4_4_,*(byte *)(local_res10[0] + 0x30) + 1);
    uStack_5c = 1;
    local_38[0] = (code *)0x0;
    local_68 = param_1;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_68;
    local_10[2] = CONCAT44(_uStack_5c,uStack_60);
    local_10[3] = local_58;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
                    ::Call;
    }
    pTVar2 = (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38;
  }
  USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
            ((USoundEffectPreset *)param_1,pTVar2);
  return;
}

// execSetExternalSubmix @ 146581910

void __cdecl
USubmixEffectDynamicsProcessorPreset::execSetExternalSubmix
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *pTVar2;
  longlong local_res10;
  UObject *local_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
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
  if (local_res10 == 0) {
    local_40 = 0;
    local_58 = &
               ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectDynamicsProcessor___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    pTVar2 = (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)&local_68;
    local_50 = `USubmixEffectDynamicsProcessorPreset::ResetKey'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_68 = (UObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectDynamicsProcessor_&),void,FSubmixEffectDynamicsProcessor_&>
               ::Call;
  }
  else {
    uStack_60 = *(undefined4 *)(local_res10 + 0xc);
    uStack_5c = 2;
    local_58 = (undefined **)((ulonglong)local_58._4_4_ << 0x20);
    local_38[0] = (code *)0x0;
    local_68 = param_1;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_68;
    local_10[2] = CONCAT44(_uStack_5c,uStack_60);
    local_10[3] = local_58;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
                    ::Call;
    }
    pTVar2 = (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38;
  }
  USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
            ((USoundEffectPreset *)param_1,pTVar2);
  return;
}

// execSetSettings @ 1465827b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USubmixEffectDynamicsProcessorPreset::execSetSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  FSubmixEffectDynamicsProcessorSettings *pFVar2;
  FSubmixEffectDynamicsProcessorSettings local_98;
  code *local_38 [2];
  undefined **local_28;
  FSubmixEffectDynamicsProcessorSettings *local_20;
  undefined8 local_10;
  
  local_98.KeyHighshelf.bEnabled = '\0';
  local_98.KeyLowshelf.bEnabled = '\0';
  local_98.bKeyAudition = '\0';
  local_98.bBypass = '\0';
  local_98.bAnalogMode = '\x01';
  local_98.bChannelLinked_DEPRECATED = '\x01';
  local_98.DynamicsProcessorType = Compressor;
  local_98.PeakMode = Peak;
  local_98.LinkMode = Average;
  local_98.InputGainDb = 0.0;
  local_98.ThresholdDb = -6.0;
  local_98.Ratio = 1.5;
  local_98._16_8_ = ___xmm_42c80000412000004040000041200000;
  local_98._24_8_ = _UNK_1512ea0b8;
  local_98.KeySource = Default;
  local_98.ExternalAudioBus.field0_0x0.DebugPtr = (TObjectPtr<UAudioBus>_u_0)0x0;
  local_98.ExternalSubmix.field0_0x0.DebugPtr = (TObjectPtr<USoundSubmix>_u_0)0x0;
  local_98.KeyGainDb = 0.0;
  local_98.OutputGainDb = 0.0;
  local_98.KeyHighshelf.Cutoff = 20.0;
  local_98.KeyHighshelf.GainDb = 0.0;
  local_98.KeyLowshelf.Cutoff = 20000.0;
  local_98.KeyLowshelf.GainDb = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pFVar2 = &local_98;
  if ((FSubmixEffectDynamicsProcessorSettings *)param_2->MostRecentPropertyAddress !=
      (FSubmixEffectDynamicsProcessorSettings *)0x0) {
    pFVar2 = (FSubmixEffectDynamicsProcessorSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectDynamicsProcessorSettings::operator=
              ((FSubmixEffectDynamicsProcessorSettings *)&param_1[3].field_0x18,pFVar2);
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USubmixEffectDynamicsProcessorPreset::SetSettings'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USubmixEffectDynamicsProcessorPreset::SetSettings'::__l2::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
                  ::Call;
    local_20 = pFVar2;
    USoundEffectPreset::IterateEffects<FSubmixEffectDynamicsProcessor>
              ((USoundEffectPreset *)param_1,
               (TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

