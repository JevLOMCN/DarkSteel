// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 14

// FAmbisonicsFactory @ 14f043a40

FAmbisonicsFactory * __thiscall
ResonanceAudio::FAmbisonicsFactory::FAmbisonicsFactory(FAmbisonicsFactory *this)

{
  this->_padding_ = (longlong)&___7FAmbisonicsFactory_ResonanceAudio__6B_;
  *(undefined8 *)&this->ResonanceAudioAPIMap = 0;
  *(undefined8 *)&(this->ResonanceAudioAPIMap).field_0x8 = 0;
  *(undefined8 *)&(this->ResonanceAudioAPIMap).field_0x20 = 0;
  *(undefined4 *)&(this->ResonanceAudioAPIMap).field_0x28 = 0;
  *(undefined4 *)&(this->ResonanceAudioAPIMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResonanceAudioAPIMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResonanceAudioAPIMap).field_0x34 = 0;
  *(undefined8 *)&(this->ResonanceAudioAPIMap).field_0x40 = 0;
  *(undefined4 *)&(this->ResonanceAudioAPIMap).field_0x48 = 0;
  ISoundfieldFactory::RegisterSoundfieldFormat((ISoundfieldFactory *)this);
  return this;
}

// ~FAmbisonicsFactory @ 14f044720

void __thiscall ResonanceAudio::FAmbisonicsFactory::~FAmbisonicsFactory(FAmbisonicsFactory *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FAmbisonicsFactory_ResonanceAudio__6B_;
  ISoundfieldFactory::UnregisterSoundfieldFormat((ISoundfieldFactory *)this);
  *(undefined4 *)&(this->ResonanceAudioAPIMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResonanceAudioAPIMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<vraudio::ResonanceAudioApi,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResonanceAudioAPIMap);
  this->_padding_ = (longlong)&___7ISoundfieldFactory__6B_;
  return;
}

// CanTranscodeFromSoundfieldFormat @ 14f045d80

bool __thiscall
ResonanceAudio::FAmbisonicsFactory::CanTranscodeFromSoundfieldFormat
          (FAmbisonicsFactory *this,FName param_1,ISoundfieldEncodingSettingsProxy *param_2)

{
  undefined8 local_res10;
  
  GetUnrealAmbisonicsFormatName();
  return param_1 == local_res10;
}

// CanTranscodeToSoundfieldFormat @ 14f045db0

bool __thiscall
ResonanceAudio::FAmbisonicsFactory::CanTranscodeToSoundfieldFormat
          (FAmbisonicsFactory *this,FName param_1,ISoundfieldEncodingSettingsProxy *param_2)

{
  return false;
}

// CreateDecoderStream @ 14f0462a0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> __thiscall
ResonanceAudio::FAmbisonicsFactory::CreateDecoderStream
          (FAmbisonicsFactory *this,FAudioPluginInitializationParams *param_1,
          ISoundfieldEncodingSettingsProxy *param_2)

{
  int iVar1;
  FString *pFVar2;
  undefined8 *puVar3;
  bool bVar4;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ResonanceDisplayName,L"Resonance Audio");
      atexit(`ResonanceAudioUtils::IsResonanceAudioTheCurrentSpatializationPlugin'::__l2::
             _dynamic_atexit_destructor_for__ResonanceDisplayName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (bCheckedSpatializationPlugin == false) {
    pFVar2 = AudioPluginUtilities::GetDesiredPluginName(&local_18,REVERB);
    iVar1 = (pFVar2->Data).ArrayNum;
    if (iVar1 == ResonanceDisplayName.Data.ArrayNum) {
      if (iVar1 < 2) {
        bIsResonanceCurrentSpatiatizationPlugin = true;
      }
      else {
        iVar1 = wcscmp((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                       (wchar_t *)ResonanceDisplayName.Data.AllocatorInstance.Data);
        bIsResonanceCurrentSpatiatizationPlugin = iVar1 == 0;
      }
    }
    else {
      bIsResonanceCurrentSpatiatizationPlugin = ResonanceDisplayName.Data.ArrayNum + iVar1 == 1;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bCheckedSpatializationPlugin = true;
  }
  bVar4 = bIsResonanceCurrentSpatiatizationPlugin == false;
  if ((3 < (byte)LogAudio._0_1_) && (bIsResonanceCurrentSpatiatizationPlugin != false)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  puVar3 = ::operator_new(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    *(bool *)(puVar3 + 1) = bVar4;
    *puVar3 = &___7FDecoder_ResonanceAudio__6B_;
    *(undefined8 **)param_1 = puVar3;
    return (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_>)
           (ISoundfieldDecoderStream *)param_1;
  }
  param_1->NumSources = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_>)
         (ISoundfieldDecoderStream *)param_1;
}

// CreateEmptyPacket @ 14f046400

TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> __thiscall
ResonanceAudio::FAmbisonicsFactory::CreateEmptyPacket(FAmbisonicsFactory *this)

{
  ISoundfieldAudioPacket IVar1;
  ISoundfieldAudioPacket *in_RDX;
  
  IVar1 = (ISoundfieldAudioPacket)::operator_new(0x10);
  if (IVar1 != (ISoundfieldAudioPacket)0x0) {
    *(undefined8 *)((longlong)IVar1 + 8) = 0;
    *(undefined ***)IVar1 = &___7FResonancePacket_ResonanceAudio__6B_;
    *in_RDX = IVar1;
    return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
  }
  *in_RDX = (ISoundfieldAudioPacket)0x0;
  return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
}

// CreateEncoderStream @ 14f046450

TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_> __thiscall
ResonanceAudio::FAmbisonicsFactory::CreateEncoderStream
          (FAmbisonicsFactory *this,FAudioPluginInitializationParams *param_1,
          ISoundfieldEncodingSettingsProxy *param_2)

{
  RenderingMode RVar1;
  int iVar2;
  ISoundfieldEncodingSettingsProxy IVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_> TVar6;
  TSharedPtr<vraudio::ResonanceAudioApi,1> *pTVar7;
  FEncoder *this_00;
  FEncoder *pFVar8;
  longlong in_R9;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_48;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_38;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_28;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_18;
  
  if (in_R9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.Ptr = (ISoundfieldEncoderStream *)(*pcVar4)();
      return (TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_>)
             TVar6.Ptr;
    }
  }
  IVar3 = param_2[2];
  if (IVar3 == (ISoundfieldEncodingSettingsProxy)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioDevice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0x11f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.Ptr = (ISoundfieldEncoderStream *)(*pcVar4)();
      return (TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_>)
             TVar6.Ptr;
    }
  }
  FResonanceAudioPluginListener::GetResonanceAPIForAudioDevice(&local_48,(FAudioDevice *)IVar3);
  if (local_48.Object == (ResonanceAudioApi *)0x0) {
    pTVar7 = CreateNewResonanceApiInstance
                       (this,&local_38,(FAudioDevice *)IVar3,
                        (FAudioPluginInitializationParams *)param_2);
    pFVar8 = (FEncoder *)0x0;
    if (&local_48 != pTVar7) {
      local_48.Object = pTVar7->Object;
      pTVar7->Object = (ResonanceAudioApi *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_48.SharedReferenceCount,&pTVar7->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    this_00 = ::operator_new(0x40);
    if (this_00 != (FEncoder *)0x0) {
      RVar1 = *(RenderingMode *)(in_R9 + 8);
      iVar2 = *(int *)&param_2->field_0x4;
      local_28.Object = local_48.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8 = FEncoder::FEncoder(this_00,&local_28,iVar2,RVar1);
    }
  }
  else {
    pFVar8 = ::operator_new(0x40);
    if (pFVar8 == (FEncoder *)0x0) {
      pFVar8 = (FEncoder *)0x0;
    }
    else {
      RVar1 = *(RenderingMode *)(in_R9 + 8);
      iVar2 = *(int *)&param_2->field_0x4;
      local_18.Object = local_48.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8 = FEncoder::FEncoder(pFVar8,&local_18,iVar2,RVar1);
    }
  }
  *(FEncoder **)param_1 = pFVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return (TUniquePtr<ISoundfieldEncoderStream,TDefaultDelete<ISoundfieldEncoderStream>_>)
         (ISoundfieldEncoderStream *)param_1;
}

// CreateMixerStream @ 14f0465e0

TUniquePtr<ISoundfieldMixerStream,TDefaultDelete<ISoundfieldMixerStream>_> __thiscall
ResonanceAudio::FAmbisonicsFactory::CreateMixerStream
          (FAmbisonicsFactory *this,ISoundfieldEncodingSettingsProxy *param_1)

{
  ISoundfieldEncodingSettingsProxy IVar1;
  
  IVar1 = (ISoundfieldEncodingSettingsProxy)::operator_new(8);
  if (IVar1 != (ISoundfieldEncodingSettingsProxy)0x0) {
    *param_1 = IVar1;
    *(undefined ***)IVar1 = &___7FResonanceMixer_ResonanceAudio__6B_;
    return (TUniquePtr<ISoundfieldMixerStream,TDefaultDelete<ISoundfieldMixerStream>_>)
           (ISoundfieldMixerStream *)param_1;
  }
  *param_1 = (ISoundfieldEncodingSettingsProxy)0x0;
  return (TUniquePtr<ISoundfieldMixerStream,TDefaultDelete<ISoundfieldMixerStream>_>)
         (ISoundfieldMixerStream *)param_1;
}

// CreateNewResonanceApiInstance @ 14f0467a0

TSharedPtr<vraudio::ResonanceAudioApi,1> * __thiscall
ResonanceAudio::FAmbisonicsFactory::CreateNewResonanceApiInstance
          (FAmbisonicsFactory *this,TSharedPtr<vraudio::ResonanceAudioApi,1> *__return_storage_ptr__
          ,FAudioDevice *param_1,FAudioPluginInitializationParams *param_2)

{
  ResonanceAudioApi *pRVar1;
  FAudioDevice *local_res10;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_18;
  
  pRVar1 = ::CreateResonanceAudioApi
                     (2,(longlong)(param_1->PlatformSettings).CallbackBufferFrameSize,
                      (int)(float)param_1->SampleRate);
  __return_storage_ptr__->Object = pRVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_18.Object = __return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VResonanceAudioApi_vraudio__U__DefaultDeleter_VResonanceAudioApi_vraudio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pRVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    local_18.Object = __return_storage_ptr__->Object;
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = param_1;
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FResonanceAudioPluginListener::ResonanceApiMapCriticalSection);
  TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
  ::Emplace<FAudioDevice_const_*_const_&,TSharedPtr<vraudio::ResonanceAudioApi,1>_const_&>
            ((TMapBase<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioDevice_const_*,TSharedPtr<vraudio::ResonanceAudioApi,1>,0>_>
              *)&FResonanceAudioPluginListener::ResonanceApiMap,&local_res10,&local_18);
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FResonanceAudioPluginListener::ResonanceApiMapCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateTranscoderStream @ 14f046c50

TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> __thiscall
ResonanceAudio::FAmbisonicsFactory::CreateTranscoderStream
          (FAmbisonicsFactory *this,FName param_1,ISoundfieldEncodingSettingsProxy *param_2,
          FName param_3,ISoundfieldEncodingSettingsProxy *param_4,
          FAudioPluginInitializationParams *param_5)

{
  FAudioDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_> TVar5;
  longlong *plVar6;
  TSharedPtr<vraudio::ResonanceAudioApi,1> *pTVar7;
  FAmbisonicsTranscoder *this_00;
  FAmbisonicsTranscoder *pFVar8;
  int iVar9;
  undefined1 local_res18 [8];
  FAudioPluginInitializationParams *in_stack_00000038;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_58;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_48;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_38;
  TSharedPtr<vraudio::ResonanceAudioApi,1> local_28;
  
  FVar4 = GetUnrealAmbisonicsFormatName();
  if (param_2 != *(ISoundfieldEncodingSettingsProxy **)FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceFormat == GetUnrealAmbisonicsFormatName()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0x138,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.Ptr = (ISoundfieldTranscodeStream *)(*pcVar2)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar5.Ptr;
    }
  }
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 8))(this,local_res18);
  if (param_4 != (ISoundfieldEncodingSettingsProxy *)*plVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestinationFormat == GetSoundfieldFormatName()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioAmbisonics.cpp"
                       ,0x139,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.Ptr = (ISoundfieldTranscodeStream *)(*pcVar2)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar5.Ptr;
    }
  }
  if (param_3 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.Ptr = (ISoundfieldTranscodeStream *)(*pcVar2)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar5.Ptr;
    }
  }
  if (param_5 == (FAudioPluginInitializationParams *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&InRef != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Public\\ISoundfieldFormat.h"
                       ,0x5c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.Ptr = (ISoundfieldTranscodeStream *)(*pcVar2)();
      return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)
             TVar5.Ptr;
    }
  }
  iVar9 = *(int *)((longlong)param_3 + 8) + 1;
  iVar9 = iVar9 * iVar9;
  pFVar1 = in_stack_00000038->AudioDevicePtr;
  FResonanceAudioPluginListener::GetResonanceAPIForAudioDevice(&local_58,pFVar1);
  if (local_58.Object == (ResonanceAudioApi *)0x0) {
    pTVar7 = CreateNewResonanceApiInstance(this,&local_48,pFVar1,in_stack_00000038);
    pFVar8 = (FAmbisonicsTranscoder *)0x0;
    if (&local_58 != pTVar7) {
      local_58.Object = pTVar7->Object;
      pTVar7->Object = (ResonanceAudioApi *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_58.SharedReferenceCount,&pTVar7->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    this_00 = ::operator_new(0x20);
    if (this_00 != (FAmbisonicsTranscoder *)0x0) {
      local_38.Object = local_58.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8 = FAmbisonicsTranscoder::FAmbisonicsTranscoder(this_00,&local_38,iVar9,true);
    }
  }
  else {
    pFVar8 = ::operator_new(0x20);
    if (pFVar8 == (FAmbisonicsTranscoder *)0x0) {
      pFVar8 = (FAmbisonicsTranscoder *)0x0;
    }
    else {
      local_28.Object = local_58.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8 = FAmbisonicsTranscoder::FAmbisonicsTranscoder(pFVar8,&local_28,iVar9,false);
    }
  }
  *(FAmbisonicsTranscoder **)param_1 = pFVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return (TUniquePtr<ISoundfieldTranscodeStream,TDefaultDelete<ISoundfieldTranscodeStream>_>)param_1
  ;
}

// GetCustomEncodingSettingsClass @ 14f0484b0

UClass * __thiscall
ResonanceAudio::FAmbisonicsFactory::GetCustomEncodingSettingsClass(FAmbisonicsFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSoundfieldSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton,
               UResonanceAudioSoundfieldSettings::
               StaticRegisterNativesUResonanceAudioSoundfieldSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioSoundfieldSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSoundfieldSettings>,aFStackX_8,
               USoundfieldEncodingSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioSoundfieldSettings.InnerSingleton;
}

// GetDefaultEncodingSettings @ 14f048500

USoundfieldEncodingSettingsBase * __thiscall
ResonanceAudio::FAmbisonicsFactory::GetDefaultEncodingSettings(FAmbisonicsFactory *this)

{
  UClass *this_00;
  
  this_00 = UResonanceAudioSoundfieldSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (USoundfieldEncodingSettingsBase *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (USoundfieldEncodingSettingsBase *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetSoundfieldFormatName @ 14f049260

FName __thiscall
ResonanceAudio::FAmbisonicsFactory::GetSoundfieldFormatName(FAmbisonicsFactory *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ResonanceSoundfieldFormat,L"Resonance Binaural Spatialization");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ResonanceSoundfieldFormat;
  return in_RDX;
}

// IsTranscodeRequiredBetweenSettings @ 14f049c50

bool __thiscall
ResonanceAudio::FAmbisonicsFactory::IsTranscodeRequiredBetweenSettings
          (FAmbisonicsFactory *this,ISoundfieldEncodingSettingsProxy *param_1,
          ISoundfieldEncodingSettingsProxy *param_2)

{
  return false;
}

