// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 17

// StaticClass @ 14d982420

UClass * __cdecl USoundHandleSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"SoundHandleSubsystem",
               &Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton,
               StaticRegisterNativesUSoundHandleSubsystem,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundHandleSubsystem>,
               InternalVTableHelperCtorCaller<USoundHandleSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton;
}

// USoundHandleSubsystem @ 14d987f20

USoundHandleSubsystem * __thiscall
USoundHandleSubsystem::USoundHandleSubsystem(USoundHandleSubsystem *this,FVTableHelper *param_1)

{
  UAudioEngineSubsystem::UAudioEngineSubsystem((UAudioEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UAudioEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IActiveSoundUpdateInterface__;
  this->_padding_ = (longlong)&_vftable__for__ISoundHandleSystem__;
  *(undefined8 *)&this->ActiveHandles = 0;
  *(undefined8 *)&(this->ActiveHandles).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveHandles).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveHandles).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveHandles).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveHandles).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveHandles).field_0x48 = 0;
  *(undefined8 *)&this->Owners = 0;
  *(undefined8 *)&(this->Owners).field_0x8 = 0;
  *(undefined8 *)&(this->Owners).field_0x20 = 0;
  *(undefined4 *)&(this->Owners).field_0x28 = 0;
  *(undefined4 *)&(this->Owners).field_0x2c = 0x80;
  *(undefined4 *)&(this->Owners).field_0x34 = 0;
  *(undefined4 *)&(this->Owners).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Owners).field_0x40 = 0;
  *(undefined4 *)&(this->Owners).field_0x48 = 0;
  return this;
}

// USoundHandleSubsystem @ 14d987fd0

USoundHandleSubsystem * __thiscall
USoundHandleSubsystem::USoundHandleSubsystem(USoundHandleSubsystem *this)

{
  UAudioEngineSubsystem::UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UAudioEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IActiveSoundUpdateInterface__;
  this->_padding_ = (longlong)&_vftable__for__ISoundHandleSystem__;
  *(undefined8 *)&this->ActiveHandles = 0;
  *(undefined8 *)&(this->ActiveHandles).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveHandles).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveHandles).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveHandles).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveHandles).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveHandles).field_0x48 = 0;
  *(undefined8 *)&this->Owners = 0;
  *(undefined8 *)&(this->Owners).field_0x8 = 0;
  *(undefined8 *)&(this->Owners).field_0x20 = 0;
  *(undefined4 *)&(this->Owners).field_0x28 = 0;
  *(undefined4 *)&(this->Owners).field_0x2c = 0x80;
  *(undefined4 *)&(this->Owners).field_0x34 = 0;
  *(undefined4 *)&(this->Owners).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Owners).field_0x40 = 0;
  *(undefined4 *)&(this->Owners).field_0x48 = 0;
  return this;
}

// ~USoundHandleSubsystem @ 14d988890

void __thiscall USoundHandleSubsystem::~USoundHandleSubsystem(USoundHandleSubsystem *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Owners).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Owners).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,ISoundHandleOwner_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,ISoundHandleOwner_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,ISoundHandleOwner_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Owners);
  *(undefined4 *)&(this->ActiveHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveHandles);
  this->_padding_ = (longlong)&___7IActiveSoundUpdateInterface__6B_;
  UAudioEngineSubsystem::~UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  return;
}

// CreateSoundHandle @ 14d98a8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
USoundHandleSubsystem::CreateSoundHandle
          (USoundHandleSubsystem *this,USoundBase *param_1,ISoundHandleOwner *param_2)

{
  uint uVar1;
  ISoundHandleOwner *local_res18;
  undefined1 auStack_9e8 [32];
  uint local_9c8;
  undefined1 local_9c4 [4];
  uint *local_9c0;
  FActiveSound *local_9b8;
  FActiveSound local_9a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_9e8;
  if ((param_1 == (USoundBase *)0x0) || (param_2 == (ISoundHandleOwner *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_res18 = param_2;
    FActiveSound::FActiveSound(&local_9a8);
    local_9a8.bLocationDefined = '\0';
    local_9c8 = local_9a8.PlayOrder;
    FActiveSound::SetSound(&local_9a8,param_1);
    local_9c0 = &local_9c8;
    local_9b8 = &local_9a8;
    TSet<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_&,USoundHandleSubsystem::FSoundHandle_&>_>
              ((TSet<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>,FDefaultSetAllocator>
                *)&this->_padding_,
               (TPairInitializer<unsigned_int_&,USoundHandleSubsystem::FSoundHandle_&> *)local_9c4,
               (bool *)(local_9c4 + 4));
    local_9c0 = &local_9c8;
    local_9b8 = (FActiveSound *)&local_res18;
    TSet<TTuple<unsigned_int,ISoundHandleOwner_*>,TDefaultMapHashableKeyFuncs<unsigned_int,ISoundHandleOwner_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_&,ISoundHandleOwner_*_&>_>
              ((TSet<TTuple<unsigned_int,ISoundHandleOwner_*>,TDefaultMapHashableKeyFuncs<unsigned_int,ISoundHandleOwner_*,0>,FDefaultSetAllocator>
                *)&(this->ActiveHandles).field_0x18,
               (TPairInitializer<unsigned_int_&,ISoundHandleOwner_*_&> *)local_9c4,
               (bool *)(local_9c4 + 4));
    uVar1 = local_9c8;
    FActiveSound::~FActiveSound(&local_9a8);
  }
  return uVar1;
}

// Deinitialize @ 14d98b1b0

void __thiscall USoundHandleSubsystem::Deinitialize(USoundHandleSubsystem *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
  *pTVar3;
  
  pIVar2 = IModularFeatures::Get();
  pTVar3 = &this->ActiveHandles;
  if (this == (USoundHandleSubsystem *)0x0) {
    pTVar3 = (TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
              *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"SoundHandles");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'
                   ::__l2::FeatureName,pTVar3);
  TSet<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>,FDefaultSetAllocator>
           *)&this->ActiveHandles);
  return;
}

// GetPrivateStaticClass @ 14d98e1a0

UClass * __cdecl USoundHandleSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"SoundHandleSubsystem",
               &Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton,
               StaticRegisterNativesUSoundHandleSubsystem,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundHandleSubsystem>,
               InternalVTableHelperCtorCaller<USoundHandleSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundHandleSubsystem.InnerSingleton;
}

// Initialize @ 14d98e5b0

void __thiscall
USoundHandleSubsystem::Initialize(USoundHandleSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
  *pTVar2;
  
  pIVar1 = IModularFeatures::Get();
  pTVar2 = &this->ActiveHandles;
  if (this == (USoundHandleSubsystem *)0x0) {
    pTVar2 = (TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
              *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"SoundHandles");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d98e62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_ISoundHandleSystem::GetModularFeatureName(void)'
                    ::__l2::FeatureName,pTVar2);
  return;
}

// NotifyActiveSoundDeleting @ 14d98ed20

void __thiscall
USoundHandleSubsystem::NotifyActiveSoundDeleting(USoundHandleSubsystem *this,FActiveSound *param_1)

{
  NotifySoundDeleting((USoundHandleSubsystem *)&this[-1].Owners.field_0x20,param_1);
  return;
}

// NotifySoundDeleting @ 14d98ed40

void __thiscall
USoundHandleSubsystem::NotifySoundDeleting(USoundHandleSubsystem *this,FActiveSound *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ISoundHandleOwner *pIVar4;
  uint local_res8 [2];
  
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplay\\Source\\AudioGameplay\\Private\\SoundHandleSubsystem.cpp"
                       ,0x2a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < *(int *)&(this->ActiveHandles).field_0x8 - *(int *)&(this->ActiveHandles).field_0x34) {
    uVar1 = param_1->PlayOrder;
    local_res8[0] = uVar1;
    TSet<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,USoundHandleSubsystem::FSoundHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>,FDefaultSetAllocator>
                *)&this->ActiveHandles,uVar1,local_res8);
    pIVar4 = TMap<unsigned_int,ISoundHandleOwner_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,ISoundHandleOwner_*,0>_>
             ::FindAndRemoveChecked(&this->Owners,uVar1);
    if (pIVar4 != (ISoundHandleOwner *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4);
    }
  }
  return;
}

// NotifyVirtualizedSoundDeleting @ 14d98edf0

void __thiscall
USoundHandleSubsystem::NotifyVirtualizedSoundDeleting
          (USoundHandleSubsystem *this,FActiveSound *param_1)

{
  NotifySoundDeleting((USoundHandleSubsystem *)&this[-1].Owners.field_0x20,param_1);
  return;
}

// Play @ 14d98eeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EResult __thiscall USoundHandleSubsystem::Play(USoundHandleSubsystem *this,uint param_1)

{
  undefined1 *this_00;
  USoundBase *pUVar1;
  uint uVar2;
  FActiveSound *pFVar3;
  FAudioDeviceHandle *pFVar4;
  FAudioDevice *this_01;
  FSoundAttenuationSettings *this_02;
  UWorld *pUVar5;
  FAudioDevice *this_03;
  FGlobalFocusSettings *pFVar6;
  FActiveSound *pFVar7;
  TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
  *pTVar8;
  FActiveSound *pFVar9;
  float fVar10;
  float local_res8 [2];
  float local_res10 [2];
  TVector<double>_u_0 local_78;
  FAudioDeviceHandle local_60;
  FAudioDeviceHandle local_48 [2];
  
  pFVar9 = (FActiveSound *)0x0;
  pFVar3 = pFVar9;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    pTVar8 = *(TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
               **)&(this->ActiveHandles).field_0x8;
    if (pTVar8 == (TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
                   *)0x0) {
      pTVar8 = &this->ActiveHandles;
    }
    uVar2 = *(uint *)(&pTVar8->field_0x0 +
                     (ulonglong)(*(int *)&(this->ActiveHandles).field_0x10 - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar3 = (FActiveSound *)((longlong)(int)uVar2 * 0x9b0 + this->_padding_);
        if (*(uint *)pFVar3 == param_1) break;
        uVar2 = pFVar3[1].WorldID;
        pFVar3 = pFVar9;
      } while (uVar2 != 0xffffffff);
    }
  }
  pFVar7 = (FActiveSound *)&pFVar3->WorldID;
  if (pFVar3 == (FActiveSound *)0x0) {
    pFVar7 = pFVar9;
  }
  if (pFVar7 == (FActiveSound *)0x0) {
    return Failure;
  }
  this_00 = &this[-1].Owners.field_0x18;
  pFVar4 = UAudioEngineSubsystem::GetAudioDeviceHandle((UAudioEngineSubsystem *)this_00,&local_60);
  this_01 = FAudioDeviceHandle::GetAudioDevice(pFVar4);
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_60);
  if (pFVar7->bLocationDefined != '\0') {
    local_78._s_0.X = (pFVar7->Transform).Translation.XY.m128d_f64[0];
    local_78._s_0.Y = (pFVar7->Transform).Translation.XY.m128d_f64[1];
    local_78._s_0.Z = (pFVar7->Transform).Translation.ZW.m128d_f64[0];
    pUVar1 = (pFVar7->Sound).field0_0x0.DebugPtr;
    local_res8[0] = 0.0;
    local_res10[0] = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this_02 = (FSoundAttenuationSettings *)(**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1);
    pUVar5 = (UWorld *)(**(code **)(*(longlong *)this_00 + 0x180))(this_00);
    FAudioDevice::GetMaxDistanceAndFocusFactor
              (this_01,pUVar1,pUVar5,(TVector<double> *)&local_78._s_0,this_02,local_res8,
               local_res10);
    pFVar7->bHasAttenuationSettings = '\0';
    pFVar7->field_0x1a1 = pFVar7->field_0x1a1 | -(this_02 != (FSoundAttenuationSettings *)0x0) & 8U;
    if (this_02 != (FSoundAttenuationSettings *)0x0) {
      FSoundAttenuationSettings::operator=(&pFVar7->AttenuationSettings,this_02);
      fVar10 = local_res10[0];
      pFVar4 = UAudioEngineSubsystem::GetAudioDeviceHandle
                         ((UAudioEngineSubsystem *)this_00,local_48);
      this_03 = FAudioDeviceHandle::GetAudioDevice(pFVar4);
      pFVar6 = FAudioDevice::GetGlobalFocusSettings(this_03);
      fVar10 = FSoundAttenuationSettings::GetFocusPriorityScale(this_02,pFVar6,fVar10);
      (pFVar7->FocusData).PriorityScale = fVar10;
      FAudioDeviceHandle::~FAudioDeviceHandle(local_48);
    }
    pFVar7->MaxDistance = local_res8[0];
  }
  FAudioDevice::AddNewActiveSound
            (this_01,pFVar7,(TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)0x0,
             &Audio::Trace::EventLog::ID::PlayRequestSoundHandle);
  return Success;
}

// SetTransform @ 14d993030

void __thiscall
USoundHandleSubsystem::SetTransform
          (USoundHandleSubsystem *this,uint param_1,TTransform<double> *param_2)

{
  double dVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
  *pTVar5;
  
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    pTVar5 = *(TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
               **)&(this->ActiveHandles).field_0x8;
    if (pTVar5 == (TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
                   *)0x0) {
      pTVar5 = &this->ActiveHandles;
    }
    uVar2 = *(uint *)(&pTVar5->field_0x0 +
                     (ulonglong)(*(int *)&(this->ActiveHandles).field_0x10 - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      while (puVar3 = (uint *)((longlong)(int)uVar2 * 0x9b0 + this->_padding_), *puVar3 != param_1)
      {
        uVar2 = puVar3[0x268];
        if (uVar2 == 0xffffffff) {
          return;
        }
      }
      puVar4 = puVar3 + 4;
      if (puVar3 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      if (puVar4 != (uint *)0x0) {
        *(byte *)((longlong)puVar4 + 0x1a2) = *(byte *)((longlong)puVar4 + 0x1a2) | 0x20;
        dVar1 = (param_2->Rotation).XY.m128d_f64[1];
        *(double *)(puVar4 + 0x98) = (param_2->Rotation).XY.m128d_f64[0];
        *(double *)(puVar4 + 0x9a) = dVar1;
        dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
        *(double *)(puVar4 + 0x9c) = (param_2->Rotation).ZW.m128d_f64[0];
        *(double *)(puVar4 + 0x9e) = dVar1;
        dVar1 = (param_2->Translation).XY.m128d_f64[1];
        *(double *)(puVar4 + 0xa0) = (param_2->Translation).XY.m128d_f64[0];
        *(double *)(puVar4 + 0xa2) = dVar1;
        dVar1 = (param_2->Translation).ZW.m128d_f64[1];
        *(double *)(puVar4 + 0xa4) = (param_2->Translation).ZW.m128d_f64[0];
        *(double *)(puVar4 + 0xa6) = dVar1;
        dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
        *(double *)(puVar4 + 0xa8) = (param_2->Scale3D).XY.m128d_f64[0];
        *(double *)(puVar4 + 0xaa) = dVar1;
        dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
        *(double *)(puVar4 + 0xac) = (param_2->Scale3D).ZW.m128d_f64[0];
        *(double *)(puVar4 + 0xae) = dVar1;
      }
    }
  }
  return;
}

// ShouldCreateSubsystem @ 14d9931b0

bool __thiscall
USoundHandleSubsystem::ShouldCreateSubsystem(USoundHandleSubsystem *this,UObject *param_1)

{
  return true;
}

// StaticRegisterNativesUSoundHandleSubsystem @ 14d993770

void __cdecl USoundHandleSubsystem::StaticRegisterNativesUSoundHandleSubsystem(void)

{
  return;
}

// Stop @ 14d993790

void __thiscall USoundHandleSubsystem::Stop(USoundHandleSubsystem *this,uint param_1)

{
  uint uVar1;
  FActiveSound *pFVar2;
  FAudioDeviceHandle *this_00;
  FAudioDevice *this_01;
  FActiveSound *pFVar3;
  TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
  *pTVar4;
  FActiveSound *pFVar5;
  FAudioDeviceHandle local_28;
  
  pFVar5 = (FActiveSound *)0x0;
  pFVar2 = pFVar5;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    pTVar4 = *(TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
               **)&(this->ActiveHandles).field_0x8;
    if (pTVar4 == (TMap<unsigned_int,USoundHandleSubsystem::FSoundHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,USoundHandleSubsystem::FSoundHandle,0>_>
                   *)0x0) {
      pTVar4 = &this->ActiveHandles;
    }
    uVar1 = *(uint *)(&pTVar4->field_0x0 +
                     (ulonglong)(*(int *)&(this->ActiveHandles).field_0x10 - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FActiveSound *)((longlong)(int)uVar1 * 0x9b0 + this->_padding_);
        if (*(uint *)pFVar2 == param_1) break;
        uVar1 = pFVar2[1].WorldID;
        pFVar2 = pFVar5;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = (FActiveSound *)&pFVar2->WorldID;
  if (pFVar2 == (FActiveSound *)0x0) {
    pFVar3 = pFVar5;
  }
  if (pFVar3 != (FActiveSound *)0x0) {
    this_00 = UAudioEngineSubsystem::GetAudioDeviceHandle
                        ((UAudioEngineSubsystem *)&this[-1].Owners.field_0x18,&local_28);
    this_01 = FAudioDeviceHandle::GetAudioDevice(this_00);
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
    FAudioDevice::StopActiveSound
              (this_01,pFVar3,&Audio::Trace::EventLog::ID::StopRequestedSoundHandle);
  }
  return;
}

// _getUObject @ 14d996320

UObject * __thiscall USoundHandleSubsystem::_getUObject(USoundHandleSubsystem *this)

{
  return (UObject *)&this[-1].Owners.field_0x20;
}

