// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 24

// StaticClass @ 1464cf9b0

UClass * __cdecl UAudioBusSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioBusSubsystem",
               &Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioBusSubsystem,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioBusSubsystem>,
               InternalVTableHelperCtorCaller<UAudioBusSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton;
}

// UAudioBusSubsystem @ 1464d9cc0

UAudioBusSubsystem * __thiscall
UAudioBusSubsystem::UAudioBusSubsystem(UAudioBusSubsystem *this,FVTableHelper *param_1)

{
  UAudioEngineSubsystem::UAudioEngineSubsystem((UAudioEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioBusSubsystem__6B_;
  (this->DefaultAudioBuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultAudioBuses).ArrayNum = 0;
  (this->DefaultAudioBuses).ArrayMax = 0;
  *(undefined8 *)&this->ActiveAudioBuses_GameThread = 0;
  *(undefined8 *)&(this->ActiveAudioBuses_GameThread).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveAudioBuses_GameThread).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveAudioBuses_GameThread).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x48 = 0;
  *(undefined8 *)&this->SoundInstanceConnectionMap = 0;
  *(undefined8 *)&(this->SoundInstanceConnectionMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundInstanceConnectionMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x34 = 0;
  *(undefined8 *)&(this->SoundInstanceConnectionMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Mutex,4000);
  return this;
}

// UAudioBusSubsystem @ 1464d9d80

UAudioBusSubsystem * __thiscall UAudioBusSubsystem::UAudioBusSubsystem(UAudioBusSubsystem *this)

{
  UAudioEngineSubsystem::UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UAudioBusSubsystem__6B_;
  (this->DefaultAudioBuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultAudioBuses).ArrayNum = 0;
  (this->DefaultAudioBuses).ArrayMax = 0;
  *(undefined8 *)&this->ActiveAudioBuses_GameThread = 0;
  *(undefined8 *)&(this->ActiveAudioBuses_GameThread).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveAudioBuses_GameThread).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveAudioBuses_GameThread).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x48 = 0;
  *(undefined8 *)&this->SoundInstanceConnectionMap = 0;
  *(undefined8 *)&(this->SoundInstanceConnectionMap).field_0x8 = 0;
  *(undefined8 *)&(this->SoundInstanceConnectionMap).field_0x20 = 0;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x28 = 0;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x34 = 0;
  *(undefined8 *)&(this->SoundInstanceConnectionMap).field_0x40 = 0;
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Mutex,4000);
  return this;
}

// ~UAudioBusSubsystem @ 1464dcee0

void __thiscall UAudioBusSubsystem::~UAudioBusSubsystem(UAudioBusSubsystem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  *(undefined4 *)&(this->SoundInstanceConnectionMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SoundInstanceConnectionMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoundInstanceConnectionMap);
  *(undefined4 *)&(this->ActiveAudioBuses_GameThread).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveAudioBuses_GameThread).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveAudioBuses_GameThread);
  DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->DefaultAudioBuses).AllocatorInstance.Data,(this->DefaultAudioBuses).ArrayNum)
  ;
  pFVar2 = (this->DefaultAudioBuses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAudioEngineSubsystem::~UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  return;
}

// operator() @ 1464e4200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  undefined ***pppuVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_78 [32];
  FAudioBusKey local_58 [2];
  code *local_48 [2];
  undefined **local_38;
  FMixerSourceManager *local_30;
  FAudioBusKey local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_30 = UAudioEngineSubsystem::GetMutableSourceManager(*(UAudioEngineSubsystem **)this);
  if (local_30 != (FMixerSourceManager *)0x0) {
    pFVar3 = (local_30->AudioBusKeys_AudioThread).AllocatorInstance.Data;
    local_58[0] = *(FAudioBusKey *)((longlong)this + 8);
    pFVar1 = pFVar3 + (longlong)(local_30->AudioBusKeys_AudioThread).ArrayNum * 8;
    if (pFVar3 != pFVar1) {
      do {
        if ((*(uint *)pFVar3 == local_58[0].ObjectId) &&
           (*(uint *)(pFVar3 + 4) == local_58[0].InstanceId)) {
          TArray<Audio::FAudioBusKey,TSizedDefaultAllocator<32>_>::Remove
                    (&local_30->AudioBusKeys_AudioThread,local_58);
          Audio::TraceAudioBusStopMessage
                    (*(uint *)&local_30->MixerDevice->field_0xa0,local_58[0].ObjectId);
          local_20 = (undefined ***)0x0;
          local_38 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`Audio::FMixerSourceManager::StopAudioBus'::`2'::<lambda_1>,0,0>
                      ::_vftable_;
          local_28 = local_58[0];
          local_48[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`Audio::FMixerSourceManager::StopAudioBus'::__l2::<lambda_1>,void>
                        ::Call;
          Audio::FMixerSourceManager::AudioMixerThreadCommand
                    (local_30,(TFunction<void___cdecl(void)> *)local_48,"StopAudioBus()",false);
          if (local_48[0] == (code *)0x0) {
            return;
          }
          pppuVar2 = &local_38;
          if (local_20 != (undefined ***)0x0) {
            pppuVar2 = local_20;
          }
          (*(code *)(*pppuVar2)[2])();
          return;
        }
        pFVar3 = pFVar3 + 8;
      } while (pFVar3 != pFVar1);
    }
  }
  return;
}

// AddPatchInputForAudioBus @ 1464ec3e0

/* WARNING: Enum "Type": Some values do not have unique names */

FPatchInput * __thiscall
UAudioBusSubsystem::AddPatchInputForAudioBus
          (UAudioBusSubsystem *this,FPatchInput *__return_storage_ptr__,FAudioBusKey param_1,
          int param_2,int param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  FMixerSourceManager *this_00;
  FPatchInput *pFVar3;
  FMixerDevice *this_01;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar4;
  TSharedPtr<Audio::FPatchOutput,1> local_48;
  FPatchInput local_38;
  FPatchInput local_20;
  
  this_00 = UAudioEngineSubsystem::GetMutableSourceManager((UAudioEngineSubsystem *)this);
  if (this_00 == (FMixerSourceManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioBusSubsystem.cpp"
                       ,0x7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPatchInput *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_01 = UAudioEngineSubsystem::GetMutableMixerDevice((UAudioEngineSubsystem *)this);
  if (this_01 == (FMixerDevice *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->PushCallsCounter = 0;
    (__return_storage_ptr__->OutputHandle).Object = (FPatchOutput *)0x0;
    (__return_storage_ptr__->OutputHandle).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4 = Audio::FMixerDevice::MakePatch(this_01,&local_48,param_2,param_3,param_4);
    Audio::FPatchInput::FPatchInput(&local_38,pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pFVar3 = Audio::FPatchInput::FPatchInput(&local_20,&local_38);
    Audio::FMixerSourceManager::AddPendingAudioBusConnection
              (this_00,param_1,param_3,false,pFVar3,0xffffffffffffffff);
    Audio::FPatchInput::FPatchInput(__return_storage_ptr__,&local_38);
    Audio::FPatchInput::~FPatchInput(&local_38);
  }
  return __return_storage_ptr__;
}

// AddPatchInputForSoundAndAudioBus @ 1464ec620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPatchInput * __thiscall
UAudioBusSubsystem::AddPatchInputForSoundAndAudioBus
          (UAudioBusSubsystem *this,FPatchInput *__return_storage_ptr__,ulong64 param_1,
          FAudioBusKey param_2,int param_3,int param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  FMixerDevice *this_00;
  FPatchInput *pFVar3;
  ulonglong uVar4;
  undefined1 auStackY_c8 [32];
  TSharedPtr<Audio::FPatchOutput,1> local_98;
  FPatchInput local_88;
  FPendingConnection local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this_00 = UAudioEngineSubsystem::GetMutableMixerDevice((UAudioEngineSubsystem *)this);
  if (this_00 != (FMixerDevice *)0x0) {
    Audio::FMixerDevice::MakePatch(this_00,&local_98,param_3,param_4,param_5);
    if (local_98.Object != (FPatchOutput *)0x0) {
      Audio::FPatchInput::FPatchInput(&local_88,&local_98);
      Audio::FPatchInput::FPatchInput((FPatchInput *)&local_70,&local_88);
      local_70.PatchVariant.TypeIndex = 0;
      local_70.BlockSizeFrames = param_3;
      local_70.NumChannels = param_4;
      local_70.bIsAutomatic = false;
      local_70.AudioBusKey = param_2;
      AddPendingConnection(this,param_1,&local_70);
      uVar4 = (ulonglong)local_70.PatchVariant.TypeIndex;
      if ((1 < local_70.PatchVariant.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPatchInput *)(*pcVar1)();
        return pFVar3;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar4] ==
          UE::Core::Private::TDestructorCaller<Audio::FPatchInput>::Destruct) {
        Audio::FPatchInput::~FPatchInput((FPatchInput *)&local_70);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar4])();
      }
      Audio::FPatchInput::FPatchInput(__return_storage_ptr__,&local_88);
      Audio::FPatchInput::~FPatchInput(&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  *(undefined8 *)&__return_storage_ptr__->PushCallsCounter = 0;
  (__return_storage_ptr__->OutputHandle).Object = (FPatchOutput *)0x0;
  (__return_storage_ptr__->OutputHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// AddPatchOutputForAudioBus @ 1464ec930

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
UAudioBusSubsystem::AddPatchOutputForAudioBus
          (UAudioBusSubsystem *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__,
          FAudioBusKey param_1,int param_2,int param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  FMixerSourceManager *this_00;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar3;
  FMixerDevice *this_01;
  TSharedPtr<Audio::FPatchOutput,1> local_38;
  TSharedPtr<Audio::FPatchOutput,1> local_28 [2];
  
  this_00 = UAudioEngineSubsystem::GetMutableSourceManager((UAudioEngineSubsystem *)this);
  if (this_00 == (FMixerSourceManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioBusSubsystem.cpp"
                       ,0x8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<Audio::FPatchOutput,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_01 = UAudioEngineSubsystem::GetMutableMixerDevice((UAudioEngineSubsystem *)this);
  if (this_01 == (FMixerDevice *)0x0) {
    __return_storage_ptr__->Object = (FPatchOutput *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    Audio::FMixerDevice::MakePatch(this_01,&local_38,param_2,param_3,param_4);
    local_28[0].Object = local_38.Object;
    local_28[0].SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Audio::FMixerSourceManager::AddPendingAudioBusConnection
              (this_00,param_1,param_3,false,local_28,0xffffffffffffffff);
    __return_storage_ptr__->Object = local_38.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return __return_storage_ptr__;
}

// AddPatchOutputForSoundAndAudioBus @ 1464ecb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
UAudioBusSubsystem::AddPatchOutputForSoundAndAudioBus
          (UAudioBusSubsystem *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__,
          ulong64 param_1,FAudioBusKey param_2,int param_3,int param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  FMixerDevice *this_00;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar3;
  ulonglong uVar4;
  undefined1 auStackY_b8 [32];
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  FPendingConnection local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  this_00 = UAudioEngineSubsystem::GetMutableMixerDevice((UAudioEngineSubsystem *)this);
  if (this_00 == (FMixerDevice *)0x0) {
    __return_storage_ptr__->Object = (FPatchOutput *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    Audio::FMixerDevice::MakePatch(this_00,&local_88,param_3,param_4,param_5);
    if (local_88.Object == (FPatchOutput *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      __return_storage_ptr__->Object = (FPatchOutput *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_78.PatchVariant._padding_ = (longlong)local_88.Object;
      local_78.PatchVariant._padding_ = (longlong)local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.PatchVariant.TypeIndex = 1;
      local_78.BlockSizeFrames = param_3;
      local_78.NumChannels = param_4;
      local_78.bIsAutomatic = false;
      local_78.AudioBusKey = param_2;
      AddPendingConnection(this,param_1,&local_78);
      uVar4 = (ulonglong)local_78.PatchVariant.TypeIndex;
      if ((1 < local_78.PatchVariant.TypeIndex) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<Audio::FPatchOutput,1> *)(*pcVar1)();
        return pTVar3;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar4] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<Audio::FPatchOutput,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_78.PatchVariant._padding_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar4])();
      }
      __return_storage_ptr__->Object = local_88.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_88.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  return __return_storage_ptr__;
}

// AddPendingConnection @ 1464ed040

void __thiscall
UAudioBusSubsystem::AddPendingConnection
          (UAudioBusSubsystem *this,ulong64 param_1,FPendingConnection *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FPendingConnection *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSoundInstanceConnections *pFVar6;
  TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> *this_00;
  ulong64 local_res10;
  
  lpCriticalSection = &this->Mutex;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = TMapBase<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>_>
                       *)&this->SoundInstanceConnectionMap,
                      (int)(local_res10 >> 0x20) * 0x17 + (int)local_res10,&local_res10);
  pFVar2 = (FPendingConnection *)(pFVar6->PendingConnections).AllocatorInstance.Data;
  if ((pFVar2 <= param_2) && (param_2 < pFVar2 + (pFVar6->PendingConnections).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pFVar6->PendingConnections).ArrayNum;
  piVar1 = &(pFVar6->PendingConnections).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)pFVar6,piVar1);
  }
  (pFVar6->PendingConnections).ArrayNum = iVar5 + 1;
  this_00 = (TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_> *)
            ((pFVar6->PendingConnections).AllocatorInstance.Data + (longlong)iVar5 * 0x38);
  TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>::
  TVariant<Audio::FPatchInput,TSharedPtr<Audio::FPatchOutput,1>_>(this_00,&param_2->PatchVariant);
  this_00[1]._padding_ = (longlong)param_2->AudioBusKey;
  *(int *)&this_00[1]._padding_ = param_2->BlockSizeFrames;
  *(int *)((longlong)&this_00[1]._padding_ + 4) = param_2->NumChannels;
  *(bool *)&this_00[1]._padding_ = param_2->bIsAutomatic;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ConnectPatches @ 1464f7230

/* WARNING: Removing unreachable block (ram,0x0001464f73e6) */
/* WARNING: Removing unreachable block (ram,0x0001464f740b) */
/* WARNING: Removing unreachable block (ram,0x0001464f7457) */
/* WARNING: Removing unreachable block (ram,0x0001464f747c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioBusSubsystem::ConnectPatches(UAudioBusSubsystem *this,ulong64 param_1)

{
  int *piVar1;
  FPendingConnection *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  FPendingConnection *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMixerSourceManager *this_00;
  FPatchInput *pFVar7;
  ulong64 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  ForAnyElementType *pFVar11;
  TSharedPtr<Audio::FPatchOutput,1> local_48;
  FPatchInput local_38;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->SoundInstanceConnectionMap).field_0x8 !=
      *(int *)&(this->SoundInstanceConnectionMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SoundInstanceConnectionMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SoundInstanceConnectionMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->SoundInstanceConnectionMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar6 != -1) {
      do {
        puVar8 = (ulong64 *)
                 ((longlong)iVar6 * 0x20 + *(longlong *)&this->SoundInstanceConnectionMap);
        if (*puVar8 == param_1) {
          pFVar11 = (ForAnyElementType *)(puVar8 + 1);
          if (puVar8 == (ulong64 *)0x0) {
            pFVar11 = (ForAnyElementType *)0x0;
          }
          if (pFVar11 != (ForAnyElementType *)0x0) {
            pFVar3 = (FPendingConnection *)pFVar11->Data;
            pFVar11->Data = (FScriptContainerElement *)0x0;
            piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
            iVar6 = *(int *)&pFVar11[1].Data;
            *(undefined4 *)&pFVar11[1].Data = 0;
            *piVar1 = 0;
            DestructItems<UAudioBusSubsystem::FPendingConnection,int>((FPendingConnection *)0x0,0);
            *(undefined4 *)&pFVar11[1].Data = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,0,pFVar11,0,piVar1);
            }
            DestructItems<UAudioBusSubsystem::FPendingConnection,int>((FPendingConnection *)0x0,0);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            if (iVar6 == 0) goto LAB_1464f74b6;
            this_00 = UAudioEngineSubsystem::GetMutableSourceManager((UAudioEngineSubsystem *)this);
            if ((this_00 == (FMixerSourceManager *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("SourceManager",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioBusSubsystem.cpp"
                                   ,0xcb,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar10 = &(pFVar3->PatchVariant)._padding_;
            goto LAB_1464f73c0;
          }
          break;
        }
        iVar6 = (int)puVar8[3];
      } while (iVar6 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<UAudioBusSubsystem::FPendingConnection,int>((FPendingConnection *)0x0,0);
  return;
LAB_1464f73c0:
  pFVar2 = (FPendingConnection *)(plVar10 + -1);
  if (pFVar2 == pFVar3 + iVar6) {
LAB_1464f74b6:
    DestructItems<UAudioBusSubsystem::FPendingConnection,int>(pFVar3,iVar6);
    if (pFVar3 != (FPendingConnection *)0x0) {
      FMemory::Free(pFVar3);
    }
    return;
  }
  if (*(uchar *)(plVar10 + 2) == '\0') {
    pFVar7 = Audio::FPatchInput::FPatchInput(&local_38,(FPatchInput *)pFVar2);
    Audio::FMixerSourceManager::AddPendingAudioBusConnection
              (this_00,*(FAudioBusKey *)(plVar10 + 3),*(int *)((longlong)plVar10 + 0x24),
               *(bool *)(plVar10 + 5),pFVar7,0xffffffffffffffff);
  }
  else if (*(uchar *)(plVar10 + 2) == '\x01') {
    local_48.Object = (FPatchOutput *)(pFVar2->PatchVariant)._padding_;
    (pFVar2->PatchVariant)._padding_ = 0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)*plVar10;
    *plVar10 = 0;
    Audio::FMixerSourceManager::AddPendingAudioBusConnection
              (this_00,*(FAudioBusKey *)(plVar10 + 3),*(int *)((longlong)plVar10 + 0x24),
               *(bool *)(plVar10 + 5),&local_48,0xffffffffffffffff);
    plVar10 = plVar10 + 7;
    goto LAB_1464f73c0;
  }
  plVar10 = plVar10 + 7;
  goto LAB_1464f73c0;
}

// Deinitialize @ 1464f93a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioBusSubsystem::Deinitialize(UAudioBusSubsystem *this)

{
  FMixerDevice *pFVar1;
  
  if (4 < (byte)LogAudioMixer._0_1_) {
    pFVar1 = UAudioEngineSubsystem::GetMixerDevice((UAudioEngineSubsystem *)this);
    if (pFVar1 != (FMixerDevice *)0x0) {
      UAudioEngineSubsystem::GetMixerDevice((UAudioEngineSubsystem *)this);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  ShutdownDefaultAudioBuses(this);
  return;
}

// ExtractPendingConnectionsIfReady @ 1464fdfc0

TArray<UAudioBusSubsystem::FPendingConnection,TSizedDefaultAllocator<32>_> * __thiscall
UAudioBusSubsystem::ExtractPendingConnectionsIfReady
          (UAudioBusSubsystem *this,
          TArray<UAudioBusSubsystem::FPendingConnection,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,ulong64 param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ulong64 *puVar5;
  undefined1 *puVar6;
  ForAnyElementType *pFVar7;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->SoundInstanceConnectionMap).field_0x8 !=
      *(int *)&(this->SoundInstanceConnectionMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->SoundInstanceConnectionMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SoundInstanceConnectionMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->SoundInstanceConnectionMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar4 != -1) {
      do {
        puVar5 = (ulong64 *)
                 ((longlong)iVar4 * 0x20 + *(longlong *)&this->SoundInstanceConnectionMap);
        if (*puVar5 == param_1) {
          pFVar7 = (ForAnyElementType *)(puVar5 + 1);
          if (puVar5 == (ulong64 *)0x0) {
            pFVar7 = (ForAnyElementType *)0x0;
          }
          if (pFVar7 != (ForAnyElementType *)0x0) {
            pFVar3 = pFVar7->Data;
            pFVar7->Data = (FScriptContainerElement *)0x0;
            iVar4 = *(int *)((longlong)&pFVar7[1].Data + 4);
            piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
            iVar2 = *(int *)&pFVar7[1].Data;
            *piVar1 = 0;
            *(undefined4 *)&pFVar7[1].Data = 0;
            DestructItems<UAudioBusSubsystem::FPendingConnection,int>((FPendingConnection *)0x0,0);
            *(undefined4 *)&pFVar7[1].Data = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,0,pFVar7,0,piVar1);
            }
            (__return_storage_ptr__->AllocatorInstance).Data = pFVar3;
            __return_storage_ptr__->ArrayNum = iVar2;
            __return_storage_ptr__->ArrayMax = iVar4;
            DestructItems<UAudioBusSubsystem::FPendingConnection,int>((FPendingConnection *)0x0,0);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            return __return_storage_ptr__;
          }
          break;
        }
        iVar4 = (int)puVar5[3];
      } while (iVar4 != -1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146504f60

UClass * __cdecl UAudioBusSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioBusSubsystem",
               &Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioBusSubsystem,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioBusSubsystem>,
               InternalVTableHelperCtorCaller<UAudioBusSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioBusSubsystem.InnerSingleton;
}

// InitDefaultAudioBuses @ 146509800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioBusSubsystem::InitDefaultAudioBuses(UAudioBusSubsystem *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FAudioBusKey FVar4;
  FAudioBusKey FVar5;
  EObjectFlags EVar6;
  bool bVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  UObjectBase *this_00;
  UClass *pUVar10;
  FString *pFVar11;
  longlong lVar12;
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar13;
  longlong lVar14;
  FSoftObjectPath *pFVar15;
  ForAnyElementType FVar16;
  int iVar17;
  FSoftObjectPath *this_01;
  int iVar18;
  int iVar19;
  int iVar20;
  TArray<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
  *this_02;
  UObject *pUVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  local_a8;
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  uint local_90;
  undefined4 uStack_8c;
  TArray<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
  *local_88;
  FSoftObjectPath *local_80;
  FSoftObjectPath *local_78;
  uint local_70;
  undefined4 uStack_6c;
  UObject *local_68;
  FString local_60 [2];
  
  bVar7 = IsInGameThread();
  if (bVar7) {
    pUVar8 = Z_Construct_UClass_UAudioSettings_NoRegister();
    if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar8);
    }
    pUVar21 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
    local_68 = pUVar21;
    if (pUVar21 == (UObject *)0x0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    else {
      iVar20 = (this->DefaultAudioBuses).ArrayNum;
      pFVar2 = (this->DefaultAudioBuses).AllocatorInstance.Data;
      this_02 = &this->DefaultAudioBuses;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = iVar20;
      local_88 = this_02;
      if (iVar20 == 0) {
        local_94 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar20,0,&local_a0,iVar20,&local_94);
        ConstructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                  (local_a0.Data,
                   (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                    *)pFVar2,iVar20);
      }
      piVar1 = &(this->DefaultAudioBuses).ArrayMax;
      pFVar2 = (this_02->AllocatorInstance).Data;
      iVar20 = (this->DefaultAudioBuses).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                  ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                    *)pFVar2,iVar20);
        (this->DefaultAudioBuses).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&this_02->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                  ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                    *)pFVar2,iVar20);
        (this->DefaultAudioBuses).ArrayNum = 0;
      }
      local_res20 = *(uint *)&pUVar21[0xb].field_0x8;
      uVar9 = (ulonglong)(int)local_res20;
      this_01 = *(FSoftObjectPath **)(pUVar21 + 0xb);
      pFVar15 = this_01 + uVar9;
      local_80 = pFVar15;
      while( true ) {
        local_78 = this_01;
        if (*(int *)&pUVar21[0xb].field_0x8 != (int)uVar9) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FDefaultAudioBusSettings_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        iVar20 = local_98;
        if (this_01 == pFVar15) break;
        this_00 = (UObjectBase *)FSoftObjectPath::TryLoad(this_01,(FUObjectSerializeContext *)0x0);
        if (this_00 != (UObjectBase *)0x0) {
          pUVar10 = Z_Construct_UClass_UAudioBus_NoRegister();
          pUVar8 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar20 = (int)pUVar10->_padding_;
          if ((iVar20 <= (int)pUVar8->_padding_) &&
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar20 * 8) ==
              &pUVar10->_padding_)) {
            EVar6 = this_00[1].ObjectFlags;
            pFVar11 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)this_00,local_60,(UObject *)0x0);
            local_90 = this_00->InternalIndex;
            uStack_8c = 0xffffffff;
            FVar4.InstanceId = 0xffffffff;
            FVar4.ObjectId = local_90;
            StartAudioBus(this,FVar4,pFVar11,(byte)(char)EVar6 + 1,false);
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
            local_a8.Object = (UObject *)0x0;
            UObjectBase::AddRef(this_00);
            local_a8.Object = (UObject *)this_00;
            TArray<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TSizedDefaultAllocator<32>_>
            ::
            AddUniqueImpl<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_const_&>
                      (this_02,&local_a8);
            if (((local_a0.Data <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < local_a0.Data + (longlong)local_94 * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar16.Data = local_a0.Data;
            lVar12 = (longlong)local_98;
            TVar13.Object = local_a8.Object;
            iVar20 = local_98;
            if (local_98 != 0) {
              iVar20 = 0;
              lVar14 = 0;
              bVar7 = *(UObject **)local_a0.Data != local_a8.Object;
              iVar18 = 0;
              do {
                iVar19 = iVar18;
                do {
                  lVar14 = lVar14 + 1;
                  iVar19 = iVar19 + 1;
                  if (lVar12 <= lVar14) break;
                } while (bVar7 == (*(UObjectBase **)(FVar16.Data + lVar14 * 8) !=
                                  (UObjectBase *)TVar13.Object));
                iVar17 = iVar19 - iVar18;
                if (bVar7 == false) {
                  DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                            ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                              *)(FVar16.Data + (longlong)iVar18 * 8),iVar17);
                  TVar13.Object = local_a8.Object;
                }
                else {
                  if (iVar20 != iVar18) {
                    memmove(FVar16.Data + (longlong)iVar20 * 8,FVar16.Data + (longlong)iVar18 * 8,
                            (longlong)iVar17 << 3);
                    TVar13.Object = local_a8.Object;
                  }
                  iVar20 = iVar20 + iVar17;
                }
                bVar7 = (bool)(bVar7 ^ 1);
                this_01 = local_78;
                pUVar21 = local_68;
                iVar18 = iVar19;
              } while (lVar14 < lVar12);
            }
            local_98 = iVar20;
            pFVar15 = local_80;
            this_02 = local_88;
            if ((UObjectBase *)TVar13.Object != (UObjectBase *)0x0) {
              UEStrongObjectPtr_Private::ReleaseUObject(TVar13.Object);
              local_a8.Object = (UObject *)0x0;
              pFVar15 = local_80;
              this_02 = local_88;
            }
          }
        }
        uVar9 = (ulonglong)local_res20;
        this_01 = this_01 + 1;
      }
      pFVar2 = local_a0.Data + (longlong)local_98 * 8;
      FVar16.Data = local_a0.Data;
      while( true ) {
        if (local_98 != iVar20) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (FVar16.Data == pFVar2) break;
        if (*(UObject **)FVar16.Data != (UObject *)0x0) {
          uStack_6c = 0xffffffff;
          local_70 = *(uint *)&(*(UObject **)FVar16.Data)->field_0xc;
          FVar5.InstanceId = 0xffffffff;
          FVar5.ObjectId = local_70;
          StopAudioBus(this,FVar5);
        }
        FVar16.Data = FVar16.Data + 8;
      }
      DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  *)local_a0.Data,local_98);
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
    }
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6475054319916810001>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioBusSubsystem.cpp"
                       ,0xef,"IsInGameThread()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Initialize @ 14650cd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioBusSubsystem::Initialize(UAudioBusSubsystem *this,FSubsystemCollectionBase *param_1)

{
  if (4 < (byte)LogAudioMixer._0_1_) {
    UAudioEngineSubsystem::GetMixerDevice((UAudioEngineSubsystem *)this);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  InitDefaultAudioBuses(this);
  return;
}

// IsAudioBusActive @ 14650e530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UAudioBusSubsystem::IsAudioBusActive(UAudioBusSubsystem *this,FAudioBusKey param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FMixerSourceManager *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uStackX_14;
  
  bVar4 = IsInGameThread();
  uVar11 = param_1.ObjectId;
  uStackX_14 = param_1.InstanceId;
  if (!bVar4) {
    bVar4 = IsInAudioThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInAudioThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioBusSubsystem.cpp"
                           ,0x73,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar7 = UAudioEngineSubsystem::GetSourceManager((UAudioEngineSubsystem *)this);
    if (pFVar7 != (FMixerSourceManager *)0x0) {
      bVar4 = IsInAudioThread();
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1614237125757107665>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerDevice.cpp"
                             ,0x22f,"IsInAudioThread()"), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar9 = (pFVar7->AudioBusKeys_AudioThread).AllocatorInstance.Data;
      pFVar1 = pFVar9 + (longlong)(pFVar7->AudioBusKeys_AudioThread).ArrayNum * 8;
      for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
        if ((*(uint *)pFVar9 == uVar11) && (*(uint *)(pFVar9 + 4) == uStackX_14)) {
          return true;
        }
      }
    }
    return false;
  }
  if (*(int *)&(this->ActiveAudioBuses_GameThread).field_0x8 !=
      *(int *)&(this->ActiveAudioBuses_GameThread).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ActiveAudioBuses_GameThread).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ActiveAudioBuses_GameThread).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ActiveAudioBuses_GameThread).field_0x48 - 1U &
                    (uVar11 * 0x40 + uStackX_14 +
                     ((uint)((ulonglong)param_1 >> 2) & 0x3fffffff) + 0x9e3779b9 ^ uVar11)) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->ActiveAudioBuses_GameThread;
      do {
        lVar6 = (longlong)iVar8 * 0x20;
        if ((*(uint *)(lVar6 + lVar2) == uVar11) && (*(uint *)(lVar6 + 4 + lVar2) == uStackX_14))
        goto LAB_14650e5d1;
        iVar8 = *(int *)(lVar6 + 0x18 + lVar2);
      } while (iVar8 != -1);
    }
  }
  iVar8 = -1;
LAB_14650e5d1:
  return iVar8 != -1;
}

// RemoveSound @ 14651d4b0

void __thiscall UAudioBusSubsystem::RemoveSound(UAudioBusSubsystem *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulong64 local_res8;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = param_1;
    if (*(int *)&(this->SoundInstanceConnectionMap).field_0x8 !=
        *(int *)&(this->SoundInstanceConnectionMap).field_0x34) {
      TSet<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>,FDefaultSetAllocator>
                  *)&this->SoundInstanceConnectionMap,(int)(param_1 >> 0x20) * 0x17 + (int)param_1,
                 &local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x00014651d516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ShouldCreateSubsystem @ 146523000

bool __thiscall UAudioBusSubsystem::ShouldCreateSubsystem(UAudioBusSubsystem *this,UObject *param_1)

{
  return true;
}

// ShutdownDefaultAudioBuses @ 146523010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UAudioBusSubsystem::ShutdownDefaultAudioBuses(UAudioBusSubsystem *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FAudioBusKey FVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  UClass *pUVar9;
  longlong lVar10;
  TObjectIterator<UAudioBus> local_28;
  
  bVar6 = IsInGameThread();
  if (bVar6) {
    local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ObjectArray.ArrayNum = 0;
    local_28.ObjectArray.ArrayMax = 0;
    local_28.Index = 0xffffffff;
    EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar9 = Z_Construct_UClass_UAudioBus_NoRegister();
    GetObjectsOfClass(pUVar9,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                      EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UAudioBus>::Advance(&local_28);
      lVar10 = (longlong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) break;
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
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8) != 0) {
        FVar5.InstanceId = 0xffffffff;
        FVar5.ObjectId =
             *(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8) + 0xc
                      );
        StopAudioBus(this,FVar5);
      }
    }
    if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
    }
    pFVar3 = (this->DefaultAudioBuses).AllocatorInstance.Data;
    piVar1 = &(this->DefaultAudioBuses).ArrayMax;
    iVar2 = (this->DefaultAudioBuses).ArrayNum;
    if (-1 < *piVar1) {
      DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  *)pFVar3,iVar2);
      (this->DefaultAudioBuses).ArrayNum = 0;
      return;
    }
    DestructItems<TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
              ((TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                *)pFVar3,iVar2);
    (this->DefaultAudioBuses).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->DefaultAudioBuses).AllocatorInstance,0,piVar1);
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6475054319916809959>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioBusSubsystem.cpp"
                       ,0x119,"IsInGameThread()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// StartAudioBus @ 1465237e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioBusSubsystem::StartAudioBus
          (UAudioBusSubsystem *this,FAudioBusKey param_1,FString *param_2,int param_3,bool param_4)

{
  longlong lVar1;
  FAudioBusKey FVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  FMixerDevice *this_00;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  FAudioBusKey local_res10;
  FString local_88;
  int local_78;
  bool local_74;
  TPairInitializer<Audio::FAudioBusKey_const_&,UAudioBusSubsystem::FActiveBusData_const_&> local_70;
  int local_60;
  bool local_5c;
  FAudioBusKey *local_58;
  FActiveBusData **local_50;
  code *local_48 [5];
  undefined8 *local_20;
  
  local_res10 = param_1;
  bVar3 = IsInGameThread();
  local_78 = param_3;
  if (bVar3) {
    uVar4 = local_res10.ObjectId;
    if (*(int *)&(this->ActiveAudioBuses_GameThread).field_0x8 !=
        *(int *)&(this->ActiveAudioBuses_GameThread).field_0x34) {
      puVar7 = *(undefined1 **)&(this->ActiveAudioBuses_GameThread).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->ActiveAudioBuses_GameThread).field_0x38;
      }
      iVar8 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->ActiveAudioBuses_GameThread).field_0x48 - 1U &
                                (uVar4 * 0x40 + local_res10.InstanceId +
                                 ((uint)((ulonglong)local_res10 >> 2) & 0x3fffffff) + 0x9e3779b9 ^
                                uVar4)) * 4);
      if (iVar8 != -1) {
        lVar1 = *(longlong *)&this->ActiveAudioBuses_GameThread;
        do {
          lVar6 = (longlong)iVar8 * 0x20;
          if ((*(uint *)(lVar6 + lVar1) == uVar4) &&
             (*(uint *)(lVar6 + 4 + lVar1) == local_res10.InstanceId)) {
            if (iVar8 != -1) {
              return;
            }
            break;
          }
          iVar8 = *(int *)(lVar6 + 0x18 + lVar1);
        } while (iVar8 != -1);
      }
    }
    local_70.Value = (FActiveBusData *)local_res10;
    local_58 = &local_res10;
    local_50 = &local_70.Value;
    local_5c = param_4;
    local_60 = param_3;
    TSet<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<Audio::FAudioBusKey_const_&,UAudioBusSubsystem::FActiveBusData_const_&>_>
              ((TSet<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData,0>,FDefaultSetAllocator>
                *)&this->ActiveAudioBuses_GameThread,&local_70,(bool *)&local_58);
    FVar2 = local_res10;
    ::FString::FString(&local_88,param_2);
    local_74 = param_4;
    local_48[0] = (code *)0x0;
    puVar5 = FMemory::Malloc(0x30,8);
    *puVar5 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::`5'::<lambda_1>,1,1>::
               _vftable_;
    puVar5[1] = this;
    *(FAudioBusKey *)(puVar5 + 2) = FVar2;
    local_20 = puVar5;
    ::FString::FString((FString *)(puVar5 + 3),&local_88);
    *(int *)(puVar5 + 5) = local_78;
    *(bool *)((longlong)puVar5 + 0x2c) = local_74;
    if (puVar5 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioBusSubsystem::StartAudioBus'::__l5::<lambda_1>,void>::
                    Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = UAudioEngineSubsystem::GetMutableMixerDevice((UAudioEngineSubsystem *)this);
    FVar2 = local_res10;
    if (this_00 != (FMixerDevice *)0x0) {
      ::FString::FString(&local_88,param_2);
      local_74 = param_4;
      local_48[0] = (code *)0x0;
      puVar5 = FMemory::Malloc(0x30,8);
      *puVar5 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioBusSubsystem::StartAudioBus'::`13'::<lambda_2>,0,1>::
                 _vftable_;
      puVar5[1] = this;
      *(FAudioBusKey *)(puVar5 + 2) = FVar2;
      local_20 = puVar5;
      ::FString::FString((FString *)(puVar5 + 3),&local_88);
      *(int *)(puVar5 + 5) = local_78;
      *(bool *)((longlong)puVar5 + 0x2c) = local_74;
      if (puVar5 + 1 != (undefined8 *)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UAudioBusSubsystem::StartAudioBus'::__l13::<lambda_2>,void>
                      ::Call;
      }
      Audio::FMixerDevice::GameThreadMPSCCommand(this_00,(TFunction<void___cdecl(void)> *)local_48);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// StartAudioBus @ 146523a60

void __thiscall
UAudioBusSubsystem::StartAudioBus
          (UAudioBusSubsystem *this,FAudioBusKey param_1,int param_2,bool param_3)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  StartAudioBus(this,param_1,&local_18,param_2,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// StaticRegisterNativesUAudioBusSubsystem @ 146524d60

void __cdecl UAudioBusSubsystem::StaticRegisterNativesUAudioBusSubsystem(void)

{
  return;
}

// StopAudioBus @ 1465251d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioBusSubsystem::StopAudioBus(UAudioBusSubsystem *this,FAudioBusKey param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  FMixerDevice *this_00;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FAudioBusKey local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  UAudioBusSubsystem *local_20;
  FAudioBusKey local_18;
  undefined8 local_10;
  
  local_res10[0] = param_1;
  bVar2 = IsInGameThread();
  local_20 = this;
  local_18 = param_1;
  if (bVar2) {
    uVar5 = param_1.ObjectId;
    uVar7 = uVar5 * 0x40 + local_res10[0].InstanceId +
            ((uint)((ulonglong)param_1 >> 2) & 0x3fffffff) + 0x9e3779b9 ^ uVar5;
    if (*(int *)&(this->ActiveAudioBuses_GameThread).field_0x8 !=
        *(int *)&(this->ActiveAudioBuses_GameThread).field_0x34) {
      puVar4 = *(undefined1 **)&(this->ActiveAudioBuses_GameThread).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->ActiveAudioBuses_GameThread).field_0x38;
      }
      iVar6 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->ActiveAudioBuses_GameThread).field_0x48 - 1U &
                                uVar7) * 4);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&this->ActiveAudioBuses_GameThread;
        while ((lVar3 = (longlong)iVar6 * 0x20, *(uint *)(lVar3 + lVar1) != uVar5 ||
               (*(uint *)(lVar3 + 4 + lVar1) != local_res10[0].InstanceId))) {
          iVar6 = *(int *)(lVar3 + 0x18 + lVar1);
          if (iVar6 == -1) {
            return;
          }
        }
        if (iVar6 != -1) {
          TSet<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData,0>,FDefaultSetAllocator>
          ::RemoveImpl<Audio::FAudioBusKey>
                    ((TSet<TTuple<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData>,TDefaultMapHashableKeyFuncs<Audio::FAudioBusKey,UAudioBusSubsystem::FActiveBusData,0>,FDefaultSetAllocator>
                      *)&this->ActiveAudioBuses_GameThread,uVar7,local_res10);
          local_10 = 0;
          local_28 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::`5'::<lambda_1>,1,0>
                      ::_vftable_;
          local_38[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UAudioBusSubsystem::StopAudioBus'::__l5::<lambda_1>,void>
                        ::Call;
          FAudioThread::RunCommandOnAudioThread
                    ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
          return;
        }
      }
    }
  }
  else {
    this_00 = UAudioEngineSubsystem::GetMutableMixerDevice((UAudioEngineSubsystem *)this);
    if (this_00 != (FMixerDevice *)0x0) {
      local_10 = 0;
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioBusSubsystem::StopAudioBus'::`13'::<lambda_2>,0,0>::
                  _vftable_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioBusSubsystem::StopAudioBus'::__l13::<lambda_2>,void>::
                    Call;
      Audio::FMixerDevice::GameThreadMPSCCommand(this_00,(TFunction<void___cdecl(void)> *)local_38);
    }
  }
  return;
}

