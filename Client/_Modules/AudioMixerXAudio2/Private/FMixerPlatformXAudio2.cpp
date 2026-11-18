// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 50

// <lambda_invoker_cdecl> @ 148d39a50

void __cdecl
`Audio::FMixerPlatformXAudio2::InitializeHardware'::__l53::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FMixerPlatformXAudio2 @ 148d3b640

FMixerPlatformXAudio2 * __thiscall
Audio::FMixerPlatformXAudio2::FMixerPlatformXAudio2(FMixerPlatformXAudio2 *this)

{
  undefined1 *puVar1;
  
  FAudioMixerPlatformSwappable::FAudioMixerPlatformSwappable((FAudioMixerPlatformSwappable *)this);
  this->bIsInitialized = 0;
  this->bIsDeviceOpen = 0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->XAudio2Dll = (HINSTANCE__ *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this->_padding_ = (longlong)&___7FMixerPlatformXAudio2_Audio__6B_;
  this->OutputVoiceCallback = (FXAudio2VoiceCallback)&___7FXAudio2VoiceCallback_Audio__6B_;
  this->bDeviceChanged = (FThreadSafeBool)0x0;
  this->XAudio2System = (IXAudio2 *)0x0;
  this->OutputAudioStreamMasteringVoice = (IXAudio2MasteringVoice *)0x0;
  this->OutputAudioStreamSourceVoice = (IXAudio2SourceVoice *)0x0;
  this->TimeSinceNullDeviceWasLastChecked = 0.0;
  this->FirstBufferSubmitted = false;
  (this->DeviceInfoCache).Ptr = (IAudioPlatformDeviceInfoCache *)0x0;
  (this->DeviceSwapContext).Ptr = (FXAudio2DeviceSwapContext *)0x0;
  FWindowsPlatformMisc::CoInitialize(Singlethreaded);
  return this;
}

// ~FMixerPlatformXAudio2 @ 148d3baa0

void __thiscall Audio::FMixerPlatformXAudio2::~FMixerPlatformXAudio2(FMixerPlatformXAudio2 *this)

{
  FXAudio2DeviceSwapContext *pFVar1;
  IAudioPlatformDeviceInfoCache *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  this->_padding_ = (longlong)&___7FMixerPlatformXAudio2_Audio__6B_;
  FWindowsPlatformMisc::CoUninitialize();
  pFVar1 = (this->DeviceSwapContext).Ptr;
  if (pFVar1 != (FXAudio2DeviceSwapContext *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pIVar2 = (this->DeviceInfoCache).Ptr;
  if (pIVar2 != (IAudioPlatformDeviceInfoCache *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->OutputVoiceCallback = (FXAudio2VoiceCallback)&___7FXAudio2VoiceCallback_Audio__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  return;
}

// operator() @ 148d3bd20

TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> __thiscall
`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 **ppuVar1;
  FDeviceSwapResult *in_RDX;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *local_18 [2];
  
  local_18[0] = (undefined8 *)0x0;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x130);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    if ((*(int *)(*(longlong *)this + 0x68) == 5) &&
       (ppuVar1 = (undefined8 **)(*(longlong *)this + 600), local_18 != ppuVar1)) {
      local_18[0] = *ppuVar1;
      *ppuVar1 = (undefined8 *)0x0;
    }
    LeaveCriticalSection(lpCriticalSection);
    Audio::FMixerPlatformXAudio2::PerformDeviceSwap
              ((TUniquePtr<Audio::FXAudio2DeviceSwapContext,TDefaultDelete<Audio::FXAudio2DeviceSwapContext>_>
                *)in_RDX);
    if (local_18[0] != (undefined8 *)0x0) {
      (**(code **)*local_18[0])(local_18[0],1);
    }
    return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CheckAudioDeviceChange @ 148d3c810

bool __thiscall Audio::FMixerPlatformXAudio2::CheckAudioDeviceChange(FMixerPlatformXAudio2 *this)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FAudioMixerPlatformSwappable_CheckAudioDeviceChange");
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId998,"FAudioMixerPlatformSwappable_CheckAudioDeviceChange",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0x3e6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId998);
  }
  if ((bUseThreadedDeviceSwapCVar == 0) ||
     (cVar1 = (**(code **)(this->_padding_ + 0x130))(this), cVar1 == '\0')) {
    if ((int)this->_padding_ == 5) {
      uVar2 = (**(code **)(this->_padding_ + 0xb0))(this);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (**(code **)(this->_padding_ + 0x160))(this);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return (bool)uVar2;
}

// CheckThreadedDeviceSwap @ 148d3c820

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerPlatformXAudio2::CheckThreadedDeviceSwap(FMixerPlatformXAudio2 *this)

{
  longlong *lpCriticalSection;
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar2 = false;
  bVar4 = false;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap");
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1055,"FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0x41f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1055);
  }
  if (((int)this->_padding_ != 5) && (this->_padding_ == 0)) goto LAB_14452726f;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((int)this->_padding_ == 5) && (this->_padding_ == 0)) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Blue,"FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap_StartAsyncSwap");
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1070,
                 "FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap_StartAsyncSwap",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                 ,0x42e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1070);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x168))(this);
    if (cVar1 == '\0') {
      if (3 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x170))(this);
    }
LAB_144527253:
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    bVar4 = bVar2;
  }
  else {
    bVar4 = bVar2;
    if ((this->_padding_ != 0) && (*(char *)(this->_padding_ + 0x68) != '\0')) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Blue,
                 "FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap_FinishedJobSwitchOver");
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1084,
                   "FAudioMixerPlatformSwappable_CheckThreadedDeviceSwap_FinishedJobSwitchOver",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                   ,0x43c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1084);
      }
      FAudioMixerPlatformSwappable::GetDeviceSwapResult((FAudioMixerPlatformSwappable *)this);
      if ((int)this->_padding_ != 0) {
        IAudioMixerPlatformInterface::StopRunningNullDevice((IAudioMixerPlatformInterface *)this);
      }
      IAudioMixerPlatformInterface::StopGeneratingAudio((IAudioMixerPlatformInterface *)this);
      bVar2 = true;
      cVar1 = (**(code **)(this->_padding_ + 0x180))(this);
      if ((cVar1 == '\0') && (2 < (byte)LogAudioMixer._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      goto LAB_144527253;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_14452726f:
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar4;
}

// CloseAudioStream @ 148d3c910

bool __thiscall Audio::FMixerPlatformXAudio2::CloseAudioStream(FMixerPlatformXAudio2 *this)

{
  longlong *lpCriticalSection;
  char cVar1;
  bool bVar2;
  
  if ((this->bIsInitialized == 0) || ((int)this->_padding_ == 0)) {
    return false;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FAudioMixerPlatformSwappable::ResetActiveDeviceSwapFuture((FAudioMixerPlatformSwappable *)this);
  if (this->bIsDeviceOpen != 0) {
    cVar1 = (**(code **)(this->_padding_ + 0xa8))(this);
    if (cVar1 == '\0') {
      bVar2 = false;
      goto LAB_148d3c9ea;
    }
  }
  if (this->XAudio2System != (IXAudio2 *)0x0) {
    (**(code **)((longlong)*this->XAudio2System + 0x48))();
  }
  if (this->OutputAudioStreamSourceVoice != (IXAudio2SourceVoice *)0x0) {
    (**(code **)((longlong)*this->OutputAudioStreamSourceVoice + 0x90))();
    this->OutputAudioStreamSourceVoice = (IXAudio2SourceVoice *)0x0;
  }
  if (this->OutputAudioStreamMasteringVoice != (IXAudio2MasteringVoice *)0x0) {
    (**(code **)((longlong)*this->OutputAudioStreamMasteringVoice + 0x90))();
    this->OutputAudioStreamMasteringVoice = (IXAudio2MasteringVoice *)0x0;
  }
  if ((int)this->_padding_ != 0) {
    IAudioMixerPlatformInterface::StopRunningNullDevice((IAudioMixerPlatformInterface *)this);
  }
  this->bIsDeviceOpen = 0;
  LOCK();
  *(undefined4 *)&this->_padding_ = 0;
  UNLOCK();
  bVar2 = true;
LAB_148d3c9ea:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// CreateMasteringVoice @ 148d3ca20

/* WARNING: Enum "Type": Some values do not have unique names */

IXAudio2MasteringVoice * __cdecl
Audio::FMixerPlatformXAudio2::CreateMasteringVoice
          (IXAudio2 *param_1,FAudioPlatformDeviceInfo *param_2,bool param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  IXAudio2MasteringVoice *local_res8;
  FString local_28;
  
  pwVar2 = (wchar_t *)0x0;
  local_res8 = (IXAudio2MasteringVoice *)0x0;
  if (!param_3) {
    if ((param_2->DeviceId).Data.ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_2->DeviceId).Data.AllocatorInstance.Data;
    }
  }
  iVar1 = (**(code **)((longlong)*param_1 + 0x38))
                    (param_1,&local_res8,param_2->NumChannels,param_2->SampleRate,0,pwVar2,0,6);
  if (-1 < iVar1) {
    return local_res8;
  }
  if (local_res8 != (IXAudio2MasteringVoice *)0x0) {
    (**(code **)((longlong)*local_res8 + 0x90))(local_res8);
    local_res8 = (IXAudio2MasteringVoice *)0x0;
  }
  if ((byte)LogAudioMixer._0_1_ < 2) {
    return local_res8;
  }
  if (iVar1 == -0x7769ffff) {
    pwVar2 = L"XAUDIO2_E_INVALID_CALL";
  }
  else if (iVar1 == -0x7769fffe) {
    pwVar2 = L"XAUDIO2_E_XMA_DECODER_ERROR";
  }
  else if (iVar1 == -0x7769fffd) {
    pwVar2 = L"XAUDIO2_E_XAPO_CREATION_FAILED";
  }
  else {
    if (iVar1 != -0x7769fffc) {
      AudioClientErrorToFString(&local_28,iVar1);
      goto LAB_148d3cb4d;
    }
    pwVar2 = L"XAUDIO2_E_DEVICE_INVALIDATED";
  }
  ::FString::FString(&local_28,pwVar2);
LAB_148d3cb4d:
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return local_res8;
}

// EnqueueAsyncDeviceSwap @ 148d3ccb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap(FMixerPlatformXAudio2 *this)

{
  longlong *lpCriticalSection;
  TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_> *pTVar1;
  undefined ***pppuVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  TUniqueFunction<void___cdecl(void)> local_78;
  code *local_48 [2];
  undefined **local_38;
  FMixerPlatformXAudio2 *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_78._0_8_ = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FMixerPlatformXAudio2::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                  ::Call;
    local_78._40_8_ = 0;
    local_30 = this;
    pTVar1 = Async<TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>_>
                       ((TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_>
                         *)local_88,TaskGraph,
                        (TFunction<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>___cdecl(void)>
                         *)local_48,&local_78);
    if ((TFuture<TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>_> *)
        &this->_padding_ != pTVar1) {
      this->_padding_ = *(longlong *)pTVar1;
      *(undefined8 *)pTVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,(FSharedReferencer<1> *)&pTVar1->field_0x8
                );
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_88._8_8_);
    if (local_48[0] != (code *)0x0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetCreateFlags @ 148d3d180

uint __thiscall Audio::FMixerPlatformXAudio2::GetCreateFlags(FMixerPlatformXAudio2 *this)

{
  return 0;
}

// GetCurrentDeviceName @ 148d3d190

FString * __thiscall
Audio::FMixerPlatformXAudio2::GetCurrentDeviceName
          (FMixerPlatformXAudio2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(FString *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetDefaultDeviceName @ 148d3d1c0

FString * __thiscall
Audio::FMixerPlatformXAudio2::GetDefaultDeviceName
          (FMixerPlatformXAudio2 *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDefaultOutputDeviceIndex @ 148d3d1e0

bool __thiscall
Audio::FMixerPlatformXAudio2::GetDefaultOutputDeviceIndex(FMixerPlatformXAudio2 *this,uint *param_1)

{
  *param_1 = 0xffffffff;
  return true;
}

// GetDeviceId @ 148d3d1f0

FString * __thiscall
Audio::FMixerPlatformXAudio2::GetDeviceId
          (FMixerPlatformXAudio2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,(FString *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetDeviceInfoCache @ 148d3d220

IAudioPlatformDeviceInfoCache * __thiscall
Audio::FMixerPlatformXAudio2::GetDeviceInfoCache(FMixerPlatformXAudio2 *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x130))();
  if (cVar1 != '\0') {
    return (this->DeviceInfoCache).Ptr;
  }
  return (IAudioPlatformDeviceInfoCache *)0x0;
}

// GetNumOutputDevices @ 148d3dc80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerPlatformXAudio2::GetNumOutputDevices(FMixerPlatformXAudio2 *this,uint *param_1)

{
  HRESULT HVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  FString *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  bool bVar7;
  bool bVar8;
  uint local_res8 [2];
  longlong *local_res18;
  longlong *local_res20;
  FString local_48;
  FString local_38;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FMixerPlatformXAudio2_GetNumOutputDevices");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId557,"FMixerPlatformXAudio2_GetNumOutputDevices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x22d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId557);
  }
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
    *param_1 = *(uint *)(lVar4 + 8);
    DestructItems<Audio::FAudioPlatformDeviceInfo,int>
              ((FAudioPlatformDeviceInfo *)local_48.Data.AllocatorInstance.Data,
               local_48.Data.ArrayNum);
    if ((FAudioPlatformDeviceInfo *)local_48.Data.AllocatorInstance.Data !=
        (FAudioPlatformDeviceInfo *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar7 = true;
    goto LAB_148d3df95;
  }
  *param_1 = 0;
  if (this->bIsInitialized == 0) {
    pFVar5 = ::FString::FString(&local_38,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               );
    ::FString::FString(&local_48,L"XAudio2 was not initialized.");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_48,pFVar5,0x23a,Error);
    if ((FAudioPlatformDeviceInfo *)local_48.Data.AllocatorInstance.Data !=
        (FAudioPlatformDeviceInfo *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar7 = false;
    goto LAB_148d3df95;
  }
  local_res20 = (longlong *)0x0;
  local_res18 = (longlong *)0x0;
  bVar7 = false;
  HVar1 = CoCreateInstance((IID *)&_GUID_bcde0395_e52f_467c_8e3d_c4579291692e,(LPUNKNOWN)0x0,1,
                           (IID *)&_GUID_a95664d2_9614_4f35_a746_de8db63617e6,&local_res20);
  if (HVar1 < 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      ToErrorFString(&local_38,HVar1);
      pFVar6 = &::LOG_Static;
LAB_148d3de50:
      UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogAudioMixer);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar2 = (**(code **)(*local_res20 + 0x18))(local_res20,0,1,&local_res18);
    if (iVar2 < 0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        ToErrorFString(&local_38,iVar2);
        pFVar6 = &::LOG_Static;
        goto LAB_148d3de50;
      }
    }
    else {
      iVar2 = (**(code **)(*local_res18 + 0x18))(local_res18,local_res8);
      if (iVar2 < 0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          ToErrorFString(&local_38,iVar2);
          pFVar6 = &::LOG_Static;
          goto LAB_148d3de50;
        }
      }
      else {
        bVar7 = true;
        *param_1 = local_res8[0];
      }
    }
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
    local_res18 = (longlong *)0x0;
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
    local_res20 = (longlong *)0x0;
  }
LAB_148d3df95:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar7;
}

// GetOutputDeviceInfo @ 148d3dfd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerPlatformXAudio2::GetOutputDeviceInfo
          (FMixerPlatformXAudio2 *this,uint param_1,FAudioPlatformDeviceInfo *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  HRESULT HVar6;
  int iVar7;
  longlong *plVar8;
  FString *pFVar9;
  uint uVar10;
  bool bVar11;
  uint local_res8;
  IMMDevice *local_res20;
  longlong *local_178;
  longlong *local_170;
  IMMDevice *local_168;
  FAudioPlatformDeviceInfo *local_160;
  int local_158;
  FAudioPlatformDeviceInfo local_148;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FAudioPlatformDeviceInfo local_88;
  char local_40;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FMixerPlatformXAudio2_GetOutputDeviceInfo");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId758,"FMixerPlatformXAudio2_GetOutputDeviceInfo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x2f6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId758);
  }
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
  if (plVar8 != (longlong *)0x0) {
    if (param_1 == 0xffffffff) {
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_88);
      if (local_40 == '\0') goto LAB_148d3e1cd;
      FAudioPlatformDeviceInfo::operator=(param_2,&local_88);
      if (local_40 != '\0') {
        if (local_88.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.OutputChannelArray.AllocatorInstance.Data);
        }
        local_160 = (FAudioPlatformDeviceInfo *)local_88.Name.Data.AllocatorInstance.Data;
        if (local_88.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.DeviceId.Data.AllocatorInstance.Data);
          local_160 = (FAudioPlatformDeviceInfo *)local_88.Name.Data.AllocatorInstance.Data;
        }
        goto LAB_148d3e0be;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_160);
      if (((int)param_1 < 0) || (local_158 <= (int)param_1)) {
        DestructItems<Audio::FAudioPlatformDeviceInfo,int>(local_160,local_158);
        goto LAB_148d3e1c3;
      }
      uVar10 = 0;
      if ((int)param_1 < local_158) {
        uVar10 = ~param_1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FAudioPlatformDeviceInfo::operator=(param_2,local_160 + (int)param_1);
      DestructItems<Audio::FAudioPlatformDeviceInfo,int>(local_160,local_158);
LAB_148d3e0be:
      if (local_160 != (FAudioPlatformDeviceInfo *)0x0) {
        FMemory::Free(local_160);
      }
    }
    bVar3 = true;
    goto LAB_148d3e6fb;
  }
  if (this->bIsInitialized == 0) {
    pFVar9 = ::FString::FString(&local_e8,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               );
    ::FString::FString(&local_f8,L"XAudio2 was not initialized.");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_f8,pFVar9,0x311,Error);
    local_160 = (FAudioPlatformDeviceInfo *)local_e8.Data.AllocatorInstance.Data;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      local_160 = (FAudioPlatformDeviceInfo *)local_e8.Data.AllocatorInstance.Data;
    }
LAB_148d3e1c3:
    if (local_160 != (FAudioPlatformDeviceInfo *)0x0) {
      FMemory::Free(local_160);
    }
LAB_148d3e1cd:
    bVar3 = false;
    goto LAB_148d3e6fb;
  }
  local_170 = (longlong *)0x0;
  local_178 = (longlong *)0x0;
  local_168 = (IMMDevice *)0x0;
  local_res20 = (IMMDevice *)0x0;
  bVar5 = false;
  bVar3 = false;
  HVar6 = CoCreateInstance((IID *)&_GUID_bcde0395_e52f_467c_8e3d_c4579291692e,(LPUNKNOWN)0x0,1,
                           (IID *)&_GUID_a95664d2_9614_4f35_a746_de8db63617e6,&local_170);
  if (HVar6 < 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      ToErrorFString(&local_d8,HVar6);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
LAB_148d3e69e:
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar7 = (**(code **)(*local_170 + 0x18))(local_170,0,1,&local_178);
    if (iVar7 < 0) {
      if (1 < (byte)LogAudioMixer._0_1_) {
        ToErrorFString(&local_c8,iVar7);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
        goto LAB_148d3e69e;
      }
    }
    else {
      iVar7 = (**(code **)(*local_178 + 0x18))();
      if (iVar7 < 0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          ToErrorFString(&local_b8,iVar7);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          local_d8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
          goto LAB_148d3e69e;
        }
      }
      else if (local_res8 == 0) {
        if (2 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
      }
      else {
        iVar7 = (**(code **)(*local_170 + 0x20))(local_170,0,1,&local_168);
        if (iVar7 < 0) {
          if (1 < (byte)LogAudioMixer._0_1_) {
            ToErrorFString(&local_a8,iVar7);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            local_d8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
            goto LAB_148d3e69e;
          }
        }
        else if (param_1 == 0xffffffff) {
          bVar5 = true;
          local_res20 = local_168;
LAB_148d3e569:
          if (local_res20 == (IMMDevice *)0x0) {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6538217543490863933>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               ,0x33d,"Device");
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
          }
          else {
            bVar3 = GetMMDeviceInfo(local_res20,param_2);
            if (bVar5) {
              param_2->bIsSystemDefault = '\x01';
            }
            else if (local_168 != (IMMDevice *)0x0) {
              local_148.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_148.Name.Data.ArrayNum = 0;
              local_148.Name.Data.ArrayMax = 0;
              local_148.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_148.DeviceId.Data.ArrayNum = 0;
              local_148.DeviceId.Data.ArrayMax = 0;
              local_148.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_148.OutputChannelArray.ArrayNum = 0;
              local_148.OutputChannelArray.ArrayMax = 0;
              ::FString::operator=(&local_148.Name,L"Unknown");
              ::FString::operator=(&local_148.DeviceId,L"Unknown");
              uVar2 = local_148.OutputChannelArray._8_8_;
              local_148.OutputChannelArray._8_8_ =
                   local_148.OutputChannelArray._8_8_ & 0xffffffff00000000;
              local_148.NumChannels = 0;
              local_148.NumDirectOutChannels = 0;
              local_148.SampleRate = 0;
              local_148.Format = Unknown;
              if ((longlong)uVar2 < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_148.OutputChannelArray.AllocatorInstance,0,
                           &local_148.OutputChannelArray.ArrayMax);
              }
              local_148.bIsSystemDefault = '\0';
              GetMMDeviceInfo(local_168,&local_148);
              iVar7 = (param_2->DeviceId).Data.ArrayNum;
              if (iVar7 == local_148.DeviceId.Data.ArrayNum) {
                if (iVar7 < 2) {
                  bVar5 = true;
                }
                else {
                  iVar7 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)(param_2->DeviceId).Data.AllocatorInstance.Data,
                                     (wchar_t *)local_148.DeviceId.Data.AllocatorInstance.Data);
                  bVar5 = iVar7 == 0;
                }
              }
              else {
                bVar5 = iVar7 + local_148.DeviceId.Data.ArrayNum == 1;
              }
              param_2->bIsSystemDefault = '\0';
              param_2->field_0x40 = param_2->field_0x40 | bVar5;
              if (local_148.OutputChannelArray.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.OutputChannelArray.AllocatorInstance.Data);
              }
              local_d8.Data.AllocatorInstance.Data = local_148.Name.Data.AllocatorInstance.Data;
              if (local_148.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_148.DeviceId.Data.AllocatorInstance.Data);
                local_d8.Data.AllocatorInstance.Data = local_148.Name.Data.AllocatorInstance.Data;
              }
              goto LAB_148d3e69e;
            }
          }
        }
        else if (param_1 < local_res8) {
          iVar7 = (**(code **)(*local_178 + 0x20))();
          if (-1 < iVar7) goto LAB_148d3e569;
          if (1 < (byte)LogAudioMixer._0_1_) {
            ToErrorFString(&local_98,iVar7);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            local_d8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
            goto LAB_148d3e69e;
          }
        }
        else if (1 < (byte)LogAudioMixer._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Requested_devic_151cd9020,
                     (FLogCategoryBase *)&LogAudioMixer);
        }
      }
    }
  }
  if (local_res20 != (IMMDevice *)0x0) {
    (**(code **)((longlong)*local_res20 + 0x10))();
  }
  if (local_178 != (longlong *)0x0) {
    (**(code **)(*local_178 + 0x10))();
    local_178 = (longlong *)0x0;
  }
  if (local_170 != (longlong *)0x0) {
    (**(code **)(*local_170 + 0x10))();
    local_170 = (longlong *)0x0;
  }
LAB_148d3e6fb:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar3;
}

// GetPlatformApi @ 148d3e740

FString * __thiscall
Audio::FMixerPlatformXAudio2::GetPlatformApi
          (FMixerPlatformXAudio2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"XAudio2");
  return __return_storage_ptr__;
}

// GetPlatformDeviceInfo @ 148d3e770

FAudioPlatformDeviceInfo * __thiscall
Audio::FMixerPlatformXAudio2::GetPlatformDeviceInfo
          (FMixerPlatformXAudio2 *this,FAudioPlatformDeviceInfo *__return_storage_ptr__)

{
  FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo
            (__return_storage_ptr__,(FAudioPlatformDeviceInfo *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetPlatformSettings @ 148d3e7a0

FAudioPlatformSettings * __thiscall
Audio::FMixerPlatformXAudio2::GetPlatformSettings
          (FMixerPlatformXAudio2 *this,FAudioPlatformSettings *__return_storage_ptr__)

{
  FAudioPlatformSettings::GetPlatformSettings
            (__return_storage_ptr__,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return __return_storage_ptr__;
}

// InitDeviceSwapContextInternal @ 148d3e7d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerPlatformXAudio2::InitDeviceSwapContextInternal
          (FMixerPlatformXAudio2 *this,FString *param_1,wchar_t *param_2,
          TOptional<Audio::FAudioPlatformDeviceInfo> *param_3)

{
  int *piVar1;
  longlong *lpCriticalSection;
  TUniquePtr<Audio::FXAudio2DeviceSwapContext,TDefaultDelete<Audio::FXAudio2DeviceSwapContext>_>
  *pTVar2;
  char cVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FXAudio2DeviceSwapContext *pFVar5;
  undefined8 *puVar6;
  FXAudio2DeviceSwapContext *pFVar7;
  bool bVar8;
  longlong *plVar9;
  FXAudio2DeviceSwapContext *pFVar10;
  longlong local_48;
  FString local_40;
  
  pFVar7 = (FXAudio2DeviceSwapContext *)0x0;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = &this->DeviceSwapContext;
  if (pTVar2->Ptr == (FXAudio2DeviceSwapContext *)0x0) {
    pFVar5 = ::operator_new(0xa8);
    pFVar10 = pFVar7;
    if (pFVar5 != (FXAudio2DeviceSwapContext *)0x0) {
      ::FString::FString(&local_40,param_2);
      pFVar5->_padding_ = (longlong)&___7FDeviceSwapContext_Audio__6B_;
      ::FString::FString((FString *)&pFVar5->_padding_,param_1);
      _Src.Data = local_40.Data.AllocatorInstance.Data;
      plVar9 = &pFVar5->_padding_;
      *plVar9 = 0;
      piVar1 = (int *)((longlong)&pFVar5->_padding_ + 4);
      *(int *)&pFVar5->_padding_ = local_40.Data.ArrayNum;
      if (local_40.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_40.Data.ArrayNum,0,(ForAnyElementType *)plVar9,local_40.Data.ArrayNum,
                   piVar1);
        memcpy((void *)*plVar9,_Src.Data,(longlong)local_40.Data.ArrayNum * 2);
      }
      *(undefined1 *)&pFVar5->_padding_ = 0;
      pFVar5->bUseDefaultDevice = false;
      pFVar5->PreviousSystem = (IXAudio2 *)0x0;
      pFVar5->PreviousMasteringVoice = (IXAudio2MasteringVoice *)0x0;
      pFVar5->PreviousSourceVoice = (IXAudio2SourceVoice *)0x0;
      pFVar5->Callbacks = (FXAudio2VoiceCallback *)0x0;
      pFVar5->RenderingSampleRate = 0;
      pFVar5->_padding_ = (longlong)&___7FXAudio2DeviceSwapContext_Audio__6B_;
      pFVar7 = pFVar5;
      pFVar10 = (FXAudio2DeviceSwapContext *)&DAT_00000001;
    }
    if ((pFVar10 != (FXAudio2DeviceSwapContext *)0x0) &&
       (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (pTVar2 == (TUniquePtr<Audio::FXAudio2DeviceSwapContext,TDefaultDelete<Audio::FXAudio2DeviceSwapContext>_>
                   *)&local_48) {
      if (pFVar7 != (FXAudio2DeviceSwapContext *)0x0) {
        puVar6 = (undefined8 *)pFVar7->_padding_;
        goto LAB_148d3e95f;
      }
    }
    else {
      pFVar10 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar7;
      if (pFVar10 != (FXAudio2DeviceSwapContext *)0x0) {
        puVar6 = (undefined8 *)pFVar10->_padding_;
        pFVar7 = pFVar10;
LAB_148d3e95f:
        (*(code *)*puVar6)(pFVar7,1);
      }
    }
    pFVar7 = pTVar2->Ptr;
    if (pFVar7 != (FXAudio2DeviceSwapContext *)0x0) {
      plVar9 = &pFVar7->_padding_;
      if (param_3 != (TOptional<Audio::FAudioPlatformDeviceInfo> *)plVar9) {
        cVar3 = (char)pFVar7->_padding_;
        if (param_3->bIsSet == false) {
          if (cVar3 != '\0') {
            if ((void *)pFVar7->_padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar7->_padding_);
            }
            if ((void *)pFVar7->_padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar7->_padding_);
            }
            if ((void *)*plVar9 != (void *)0x0) {
              FMemory::Free((void *)*plVar9);
            }
            *(undefined1 *)&pFVar7->_padding_ = 0;
          }
        }
        else {
          if (cVar3 != '\0') {
            if ((void *)pFVar7->_padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar7->_padding_);
            }
            if ((void *)pFVar7->_padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar7->_padding_);
            }
            if ((void *)*plVar9 != (void *)0x0) {
              FMemory::Free((void *)*plVar9);
            }
          }
          FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo
                    ((FAudioPlatformDeviceInfo *)plVar9,&param_3->TypedValue);
          *(undefined1 *)&pFVar7->_padding_ = 1;
        }
      }
      bVar4 = (bool)(**(code **)(this->_padding_ + 400))(this);
      bVar8 = true;
      pTVar2->Ptr->bUseDefaultDevice = bVar4;
      goto LAB_148d3ea27;
    }
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    bVar8 = false;
    goto LAB_148d3ea27;
  }
  bVar8 = false;
LAB_148d3ea27:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
}

// InitializeDeviceSwapContext @ 148d3ea70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerPlatformXAudio2::InitializeDeviceSwapContext
          (FMixerPlatformXAudio2 *this,FString *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FScriptContainerElement *local_b8;
  int local_b0;
  int local_ac;
  FScriptContainerElement *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  Type local_8c;
  FScriptContainerElement *local_88;
  int local_80;
  int local_7c;
  byte local_78;
  char local_70;
  TOptional<Audio::FAudioPlatformDeviceInfo> local_68;
  
  lVar5 = (**(code **)(this->_padding_ + 0x120))();
  if ((lVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetDeviceInfoCache()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                         ,0x472,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar7);
  local_68.bIsSet = false;
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x120))(this);
  (**(code **)(*plVar6 + 8))(plVar6,&local_b8,local_res8);
  if (local_70 != '\0') {
    cVar4 = (**(code **)(this->_padding_ + 0x128))(this,&local_b8);
    if (cVar4 == '\0') {
      if (2 < (byte)LogAudioMixer._0_1_) {
        if ((local_70 == '\0') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((local_70 == '\0') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((local_70 == '\0') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((local_70 == '\0') &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      if (local_70 != '\0') {
        if (local_88 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88);
        }
        if (local_a8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8);
        }
        if (local_b8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      bVar2 = false;
      goto LAB_148d3ebac;
    }
    if (local_70 != '\0') {
      local_68.TypedValue.Name.Data.AllocatorInstance.Data = local_b8;
      local_68.TypedValue.Name.Data.ArrayNum = local_b0;
      local_68.TypedValue.Name.Data.ArrayMax = local_ac;
      local_68.TypedValue.DeviceId.Data.AllocatorInstance.Data = local_a8;
      local_68.TypedValue.DeviceId.Data.ArrayNum = local_a0;
      local_68.TypedValue.DeviceId.Data.ArrayMax = local_9c;
      local_68.TypedValue.NumChannels = local_98;
      local_68.TypedValue.NumDirectOutChannels = local_94;
      local_68.TypedValue.SampleRate = local_90;
      local_68.TypedValue.Format = local_8c;
      local_68.TypedValue.OutputChannelArray.AllocatorInstance.Data = local_88;
      local_68.TypedValue.OutputChannelArray.ArrayNum = local_80;
      local_68.TypedValue.OutputChannelArray.ArrayMax = local_7c;
      local_68.bIsSet = true;
      local_68.TypedValue._64_1_ =
           local_68.TypedValue._64_1_ ^ (local_68.TypedValue._64_1_ ^ local_78) & 1;
    }
  }
  bVar2 = InitDeviceSwapContextInternal(this,param_1,param_2,&local_68);
LAB_148d3ebac:
  if (local_68.bIsSet != false) {
    if (local_68.TypedValue.OutputChannelArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.TypedValue.OutputChannelArray.AllocatorInstance.Data);
    }
    if (local_68.TypedValue.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_68.TypedValue.DeviceId.Data.AllocatorInstance.Data);
    }
    if (local_68.TypedValue.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.TypedValue.Name.Data.AllocatorInstance.Data);
    }
  }
  return bVar2;
}

// InitializeHardware @ 148d3ed30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerPlatformXAudio2::InitializeHardware(FMixerPlatformXAudio2 *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  FString *pFVar4;
  HMODULE pHVar5;
  FText *pFVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_58;
  FText local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  if (this->bIsInitialized == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pTVar7 = &FPaths::EngineDir((FString *)&local_48)->Data;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&XAudio2_9Redist.Data,pTVar7,0x3f - (uint)(pTVar7->ArrayNum != 0));
        ::FString::PathAppend
                  (&XAudio2_9Redist,L"Binaries/ThirdParty/Windows/XAudio2_9/x64/xaudio2_9redist.dll"
                   ,0x3d);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_48.TextData.Reference);
        }
        atexit(`GetDllName'::__l2::_dynamic_atexit_destructor_for__XAudio2_9Redist__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pFVar4 = FPaths::ConvertRelativePathToFull(&local_58,&XAudio2_9Redist);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pHVar5 = LoadLibraryW(pwVar9);
    this->XAudio2Dll = (HINSTANCE__ *)pHVar5;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (this->XAudio2Dll == (HINSTANCE__ *)0x0) {
      if (2 < (byte)LogInit._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      pwVar10 = 
      L"XAudio2.7 is not installed. Make sure you have XAudio 2.7 installed. XAudio 2.7 is available in the DirectX End-User Runtime (June 2010)."
      ;
      pwVar9 = L"XAudio2Missing";
    }
    else {
      uVar2 = (**(code **)(this->_padding_ + 0x188))(this);
      if (this->XAudio2System != (IXAudio2 *)0x0) {
LAB_148d3eed2:
        plVar8 = &this->_padding_;
        if (this == (FMixerPlatformXAudio2 *)0x0) {
          plVar8 = (longlong *)0x0;
        }
        iVar3 = (**(code **)((longlong)*this->XAudio2System + 0x18))(this->XAudio2System,plVar8);
        if ((iVar3 < 0) && (1 < (byte)LogAudioMixer._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        }
        bVar1 = IAudioMixer::ShouldRecycleThreads();
        if (bVar1) {
          local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
          local_10 = 0;
          local_20 = `Audio::FMixerPlatformXAudio2::InitializeHardware'::__l53::<lambda_1>::
                     <lambda_invoker_cdecl>;
          local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>
                        ::Call;
          IAudioMixerPlatformInterface::CreateNullDeviceThread
                    ((IAudioMixerPlatformInterface *)this,(TFunction<void___cdecl(void)> *)local_38,
                     __real_3f800000,true);
        }
        this->bIsInitialized = 1;
        return true;
      }
      iVar3 = Ordinal_1(&this->XAudio2System,uVar2,0);
      if (-1 < iVar3) goto LAB_148d3eed2;
      pwVar10 = 
      L"Failed to initialize audio. This may be an issue with your installation of XAudio 2.7. XAudio2 is available in the DirectX End-User Runtime (June 2010)."
      ;
      pwVar9 = L"XAudio2Error";
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText(&local_48,L"Audio",pwVar9,pwVar10);
    FMessageDialog::Open(Ok,pFVar6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar4 = ::FString::FString((FString *)&local_48,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               );
    ::FString::FString(&local_58,L"XAudio2 already initialized.");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_58,pFVar4,0x1cf,Warning);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
      return false;
    }
  }
  return false;
}

// IsDeviceInfoValid @ 148d3f040

bool __thiscall
Audio::FMixerPlatformXAudio2::IsDeviceInfoValid
          (FMixerPlatformXAudio2 *this,FAudioPlatformDeviceInfo *param_1)

{
  if (param_1->NumChannels < 0x41) {
    return param_1->SampleRate - 1000U < 0x30959;
  }
  return false;
}

// IsInitialized @ 148d3f060

bool __thiscall Audio::FMixerPlatformXAudio2::IsInitialized(FMixerPlatformXAudio2 *this)

{
  return this->bIsInitialized;
}

// MoveAudioStreamToNewAudioDevice @ 148d3f0b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerPlatformXAudio2::MoveAudioStreamToNewAudioDevice(FMixerPlatformXAudio2 *this)

{
  longlong *lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FAudioMixerPlatformSwappable_MoveAudioStreamToNewAudioDevice");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1109,
               "FAudioMixerPlatformSwappable_MoveAudioStreamToNewAudioDevice",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0x455);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1109);
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  cVar3 = (**(code **)(this->_padding_ + 0x168))(this);
  if (cVar3 == '\0') {
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    bVar4 = false;
  }
  else {
    (**(code **)(this->_padding_ + 0x178))(this);
    if (this->_padding_ != 0) {
      lVar1 = this->_padding_;
      while (*(char *)(lVar1 + 0x68) == '\0') {
        plVar2 = *(longlong **)(lVar1 + 0x60);
        (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
      }
    }
    if ((int)this->_padding_ != 0) {
      IAudioMixerPlatformInterface::StopRunningNullDevice((IAudioMixerPlatformInterface *)this);
    }
    IAudioMixerPlatformInterface::StopGeneratingAudio((IAudioMixerPlatformInterface *)this);
    cVar3 = (**(code **)(this->_padding_ + 0x180))(this);
    if ((cVar3 == '\0') && (2 < (byte)LogAudioMixer._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    bVar4 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar4;
}

// OnCriticalError @ 148d3f190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerPlatformXAudio2::OnCriticalError(FMixerPlatformXAudio2 *this,int param_1)

{
  wchar_t *pwVar1;
  FString local_18;
  
  if ((byte)LogAudioMixer._0_1_ < 3) {
    return;
  }
  if (param_1 == -0x7769ffff) {
    pwVar1 = L"XAUDIO2_E_INVALID_CALL";
  }
  else if (param_1 == -0x7769fffe) {
    pwVar1 = L"XAUDIO2_E_XMA_DECODER_ERROR";
  }
  else if (param_1 == -0x7769fffd) {
    pwVar1 = L"XAUDIO2_E_XAPO_CREATION_FAILED";
  }
  else {
    if (param_1 != -0x7769fffc) {
      AudioClientErrorToFString(&local_18,param_1);
      goto LAB_148d3f1f8;
    }
    pwVar1 = L"XAUDIO2_E_DEVICE_INVALIDATED";
  }
  ::FString::FString(&local_18,pwVar1);
LAB_148d3f1f8:
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDefaultCaptureDeviceChanged @ 148d3f240

void __thiscall
Audio::FMixerPlatformXAudio2::OnDefaultCaptureDeviceChanged
          (FMixerPlatformXAudio2 *this,EAudioDeviceRole param_1,FString *param_2)

{
  UAudioDeviceNotificationSubsystem *pUVar1;
  
  pUVar1 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar1 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x18))(&pUVar1->_padding_,param_1,param_2);
  }
  return;
}

// OnDefaultRenderDeviceChanged @ 148d3f280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerPlatformXAudio2::OnDefaultRenderDeviceChanged
          (FMixerPlatformXAudio2 *this,EAudioDeviceRole param_1,FString *param_2)

{
  code *pcVar1;
  FWindowsMMNotificationClient *this_00;
  bool bVar2;
  FString *pFVar3;
  UAudioDeviceNotificationSubsystem *pUVar4;
  FString local_38;
  FString local_28;
  
  if (param_1 == Console) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      if ((WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = WindowsNotificationClient.Object;
      pFVar3 = ::FString::FString(&local_28,param_2);
      FWindowsMMNotificationClient::GetFriendlyName(this_00,&local_38,pFVar3);
      Audio::ToString(Console);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((char)this->_padding_ != '\0') {
      (**(code **)(*(longlong *)&this[-1].field_0x250 + 0xc0))
                (&this[-1].field_0x250,param_2,1,
                 L"FMixerPlatformXAudio2::OnDefaultRenderDeviceChanged");
    }
  }
  pUVar4 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar4 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar4->_padding_ + 0x20))(&pUVar4->_padding_,param_1,param_2);
  }
  return;
}

// OnDeviceAdded @ 148d3f3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerPlatformXAudio2::OnDeviceAdded
          (FMixerPlatformXAudio2 *this,FString *param_1,bool param_2)

{
  void *_Src;
  int iVar1;
  FWindowsMMNotificationClient *this_00;
  FString *pFVar2;
  UAudioDeviceNotificationSubsystem *pUVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  bool bVar6;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  FString local_28;
  
  if (!param_2) {
    return;
  }
  local_40 = (int)this->_padding_;
  lVar5 = (longlong)local_40;
  _Src = (void *)this->_padding_;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar5 * 2);
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 == local_40) {
    if (iVar1 < 2) goto LAB_148d3f568;
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)this->_padding_,(wchar_t *)local_48.Data);
    bVar6 = iVar1 == 0;
  }
  else {
    bVar6 = iVar1 + local_40 == 1;
  }
  if (bVar6) goto LAB_148d3f568;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_40) {
    if (1 < iVar1) {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,(wchar_t *)local_48.Data)
      ;
      bVar6 = iVar1 == 0;
      goto LAB_148d3f4a0;
    }
  }
  else {
    bVar6 = iVar1 + local_40 == 1;
LAB_148d3f4a0:
    if (!bVar6) goto LAB_148d3f568;
  }
  if (3 < (byte)LogAudioMixer._0_1_) {
    this_00 = TSharedPtr<Audio::FWindowsMMNotificationClient,1>::operator->
                        (&WindowsNotificationClient);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar4.Data = local_48.Data;
    }
    pFVar2 = ::FString::FString(&local_28,(wchar_t *)FVar4.Data);
    FWindowsMMNotificationClient::GetFriendlyName(this_00,&local_38,pFVar2);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((char)this->_padding_ != '\0') {
    (**(code **)(*(longlong *)&this[-1].field_0x250 + 0xc0))
              (&this[-1].field_0x250,&local_48,1,L"FMixerPlatformXAudio2::OnDeviceAdded");
  }
LAB_148d3f568:
  pUVar3 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar3 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x28))(&pUVar3->_padding_,param_1,param_2);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// OnDeviceRemoved @ 148d3f5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerPlatformXAudio2::OnDeviceRemoved
          (FMixerPlatformXAudio2 *this,FString *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  FWindowsMMNotificationClient *this_00;
  int iVar3;
  FString *pFVar4;
  UAudioDeviceNotificationSubsystem *pUVar5;
  bool bVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (!param_2) {
    return;
  }
  iVar3 = (int)this->_padding_;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)this->_padding_,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_148d3f606;
    }
  }
  else {
    bVar6 = iVar3 + iVar1 == 1;
LAB_148d3f606:
    if (!bVar6) goto LAB_148d3f712;
  }
  if (3 < (byte)LogAudioMixer._0_1_) {
    if ((WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = WindowsNotificationClient.Object;
    pFVar4 = ::FString::FString(&local_18,param_1);
    FWindowsMMNotificationClient::GetFriendlyName(this_00,&local_28,pFVar4);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((char)this->_padding_ != '\0') {
    pcVar2 = *(code **)(*(longlong *)&this[-1].field_0x250 + 0xc0);
    ::FString::FString(&local_38,L"");
    (*pcVar2)(&this[-1].field_0x250,&local_38,1,L"FMixerPlatformXAudio2::OnDeviceRemoved");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_148d3f712:
  pUVar5 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar5 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar5->_padding_ + 0x30))(&pUVar5->_padding_,param_1,param_2);
  }
  return;
}

// OnDeviceStateChanged @ 148d3f750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerPlatformXAudio2::OnDeviceStateChanged
          (FMixerPlatformXAudio2 *this,FString *param_1,EAudioDeviceState param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  FWindowsMMNotificationClient *this_00;
  FString *pFVar4;
  UAudioDeviceNotificationSubsystem *pUVar5;
  bool bVar6;
  FString local_38;
  FString local_28;
  
  if (!param_3) {
    return;
  }
  iVar3 = (int)this->_padding_;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)this->_padding_,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_148d3f797;
    }
  }
  else {
    bVar6 = iVar3 + iVar1 == 1;
LAB_148d3f797:
    if (!bVar6) goto LAB_148d3f8a2;
  }
  if (((this->_padding_ & 1) == 0) && (param_2 - Disabled < 3)) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      this_00 = TSharedPtr<Audio::FWindowsMMNotificationClient,1>::operator->
                          (&WindowsNotificationClient);
      pFVar4 = ::FString::FString(&local_28,param_1);
      FWindowsMMNotificationClient::GetFriendlyName(this_00,&local_38,pFVar4);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((char)this->_padding_ != '\0') {
      pcVar2 = *(code **)(*(longlong *)&this[-1].field_0x250 + 0xc0);
      ::FString::FString(&local_38,L"");
      (*pcVar2)(&this[-1].field_0x250,&local_38,1,L"FMixerPlatformXAudio2::OnDeviceStateChanged");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_148d3f8a2:
  pUVar5 = UAudioDeviceNotificationSubsystem::Get();
  if (pUVar5 != (UAudioDeviceNotificationSubsystem *)0x0) {
    (**(code **)(pUVar5->_padding_ + 0x38))(&pUVar5->_padding_,param_1,param_2,param_3);
  }
  return;
}

// OnHardwareUpdate @ 148d3f8e0

void __thiscall Audio::FMixerPlatformXAudio2::OnHardwareUpdate(FMixerPlatformXAudio2 *this)

{
  return;
}

// OnProcessingPassEnd @ 148d3f900

void __thiscall Audio::FMixerPlatformXAudio2::OnProcessingPassEnd(FMixerPlatformXAudio2 *this)

{
  return;
}

// OnProcessingPassStart @ 148d3f910

void __thiscall Audio::FMixerPlatformXAudio2::OnProcessingPassStart(FMixerPlatformXAudio2 *this)

{
  return;
}

// OnSessionDisconnect @ 148d3f920

void __thiscall
Audio::FMixerPlatformXAudio2::OnSessionDisconnect
          (FMixerPlatformXAudio2 *this,EDisconnectReason param_1)

{
  FString *pFVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  FString local_18;
  
  if (param_1 == FormatChanged) {
    pcVar2 = *(code **)(*(longlong *)&this[-1].field_0x250 + 0xc0);
    pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x50))(this,&local_18);
    pwVar3 = L"FMixerPlatformXAudio2::OnSessionDisconnect() - FormatChanged";
  }
  else {
    if (param_1 == DeviceRemoval) {
      return;
    }
    pcVar2 = *(code **)(*(longlong *)&this[-1].field_0x250 + 0xc0);
    ::FString::FString(&local_18,L"");
    pwVar3 = L"FMixerPlatformXAudio2::OnSessionDisconnect() - Other";
    pFVar1 = &local_18;
  }
  (*pcVar2)(&this[-1].field_0x250,pFVar1,1,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OpenAudioStream @ 148d3f9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FMixerPlatformXAudio2::OpenAudioStream
          (FMixerPlatformXAudio2 *this,FAudioMixerOpenStreamParams *param_1)

{
  ushort uVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  FString *pFVar8;
  IXAudio2MasteringVoice *pIVar9;
  undefined1 auStack_f8 [32];
  int local_b8 [2];
  Type local_b0 [2];
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (this->bIsInitialized == 0) {
    pFVar8 = ::FString::FString(&local_88,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               );
    ::FString::FString(&local_a8,L"XAudio2 was not initialized.");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_a8,pFVar8,0x361,Error);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
    return false;
  }
  if (this->bIsDeviceOpen != 0) {
    pFVar8 = ::FString::FString(&local_78,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               );
    ::FString::FString(&local_98,L"XAudio2 audio stream already opened.");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_98,pFVar8,0x367,Warning);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    return false;
  }
  if ((this->XAudio2System == (IXAudio2 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("XAudio2System",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                         ,0x36b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((this->OutputAudioStreamMasteringVoice != (IXAudio2MasteringVoice *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputAudioStreamMasteringVoice == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                         ,0x36c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_38 = 0;
  *(uint *)&this->_padding_ = param_1->OutputDeviceIndex;
  *(uint *)((longlong)&this->_padding_ + 4) = param_1->NumFrames;
  *(int *)&this->_padding_ = param_1->NumBuffers;
  this->_padding_ = (longlong)param_1->AudioMixer;
  *(uint *)&this->_padding_ = param_1->SampleRate;
  *(int *)((longlong)&this->_padding_ + 4) = param_1->MaxSources;
  *(bool *)&this->_padding_ = param_1->bRestoreIfRemoved;
  *(bool *)((longlong)&this->_padding_ + 1) = param_1->bUseSystemAudioDevice;
  local_48 = 0;
  uStack_40 = 0;
  ::FString::operator=((FString *)&this->_padding_,&param_1->AudioDeviceId);
  *(undefined4 *)&this->_padding_ = 0;
  FAudioPlatformDeviceInfo::Reset((FAudioPlatformDeviceInfo *)&this->_padding_);
  LOCK();
  *(undefined4 *)&this->_padding_ = 0;
  UNLOCK();
  lVar3 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)&this->_padding_ = (int)this->_padding_;
  this->_padding_ = this->_padding_;
  *(int *)&this->_padding_ = (int)lVar3;
  local_b8[0] = 0;
  cVar6 = (**(code **)(this->_padding_ + 0x60))(this,local_b8);
  if ((cVar6 != '\0') && (local_b8[0] != 0)) {
    cVar6 = (**(code **)(this->_padding_ + 0x68))(this,(int)this->_padding_,&this->_padding_);
    if (cVar6 == '\0') {
      return false;
    }
    if (param_1->bRestoreIfRemoved != false) {
      ::FString::operator=((FString *)&this->_padding_,(FString *)&this->_padding_);
    }
    bVar4 = (bool)(**(code **)(this->_padding_ + 400))(this);
    pIVar9 = CreateMasteringVoice
                       (this->XAudio2System,(FAudioPlatformDeviceInfo *)&this->_padding_,bVar4);
    this->OutputAudioStreamMasteringVoice = pIVar9;
    if (pIVar9 != (IXAudio2MasteringVoice *)0x0) {
      iVar7 = (**(code **)((longlong)*this->XAudio2System + 0x40))();
      if (iVar7 < 0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          ToErrorFString(&local_68,iVar7);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
LAB_148d3fdde:
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        uVar1 = (ushort)this->_padding_;
        local_48 = CONCAT44(param_1->SampleRate,CONCAT22(uVar1,3));
        uStack_40 = CONCAT26(0x20,CONCAT24(uVar1 << 2,(uint)uVar1 * param_1->SampleRate * 4));
        iVar7 = (**(code **)((longlong)*this->XAudio2System + 0x28))
                          (this->XAudio2System,&this->OutputAudioStreamSourceVoice,&local_48,2);
        if ((iVar7 < 0) && (1 < (byte)LogAudioMixer._0_1_)) {
          ToErrorFString(&local_58,iVar7);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          goto LAB_148d3fdde;
        }
      }
    }
  }
  if (this->OutputAudioStreamSourceVoice != (IXAudio2SourceVoice *)0x0) {
    if (this->OutputAudioStreamMasteringVoice != (IXAudio2MasteringVoice *)0x0) goto LAB_148d3fe68;
    (**(code **)((longlong)*this->OutputAudioStreamSourceVoice + 0x90))();
    this->OutputAudioStreamSourceVoice = (IXAudio2SourceVoice *)0x0;
  }
  if (this->OutputAudioStreamMasteringVoice != (IXAudio2MasteringVoice *)0x0) {
    (**(code **)((longlong)*this->OutputAudioStreamMasteringVoice + 0x90))();
    this->OutputAudioStreamMasteringVoice = (IXAudio2MasteringVoice *)0x0;
  }
  *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_b0[0] = DefaultChannel;
  local_b0[1] = 1;
  TArray<enum_EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<enum_EAudioMixerChannel::Type,int>
            (&this->_padding_,local_b0,2,*(int *)((longlong)&this->_padding_ + 4));
  *(int *)&this->_padding_ = (int)this->_padding_;
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
LAB_148d3fe68:
  LOCK();
  *(undefined4 *)&this->_padding_ = 1;
  UNLOCK();
  this->bIsDeviceOpen = 1;
  return true;
}

// PerformDeviceSwap @ 148d3fea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> __cdecl
Audio::FMixerPlatformXAudio2::PerformDeviceSwap
          (TUniquePtr<Audio::FXAudio2DeviceSwapContext,TDefaultDelete<Audio::FXAudio2DeviceSwapContext>_>
           *param_1)

{
  bool bVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FXAudio2DeviceSwapResult *this;
  FXAudio2DeviceSwapContext *pFVar7;
  FAudioPlatformDeviceInfo *pFVar8;
  TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_> TVar9;
  IXAudio2MasteringVoice *pIVar10;
  longlong *in_RDX;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStackY_138 [32];
  FAudioPlatformDeviceInfo local_e8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined2 local_58;
  ushort local_56;
  int local_54;
  int local_50;
  short local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FMixerPlatformXAudio2_PerformDeviceSwap");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId304,"FMixerPlatformXAudio2_PerformDeviceSwap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x130);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId304);
  }
  QueryPerformanceCounter(&local_a0);
  local_90 = local_a0;
  bVar5 = FWindowsPlatformMisc::CoInitialize(Multithreaded);
  if (*in_RDX == 0) {
    if (1 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    param_1->Ptr = (FXAudio2DeviceSwapContext *)0x0;
  }
  else {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (*(longlong *)(*in_RDX + 0x80) != 0) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Blue,"FMixerPlatformXAudio2_AsyncDeleteCreate_StopEngine");
      if (CpuChannel->Enabled < 0) {
        (**(code **)(**(longlong **)(*in_RDX + 0x80) + 0x48))();
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId323,"FMixerPlatformXAudio2_AsyncDeleteCreate_StopEngine"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                   ,0x143);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId323);
        (**(code **)(**(longlong **)(*in_RDX + 0x80) + 0x48))();
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    pFVar7 = (FXAudio2DeviceSwapContext *)0x0;
    if (*(longlong *)(*in_RDX + 0x90) != 0) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Blue,"FMixerPlatformXAudio2_AsyncDeleteCreate_FlushSourceBuffers");
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId331,
                   "FMixerPlatformXAudio2_AsyncDeleteCreate_FlushSourceBuffers",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                   ,0x14b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId331);
      }
      iVar6 = (**(code **)(**(longlong **)(*in_RDX + 0x90) + 0xb0))();
      if ((iVar6 < 0) && (1 < (byte)LogAudioMixer._0_1_)) {
        ToErrorFString(&local_88,iVar6);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Blue,"FMixerPlatformXAudio2_AsyncDeleteCreate_DestroySourceVoice");
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId334,
                   "FMixerPlatformXAudio2_AsyncDeleteCreate_DestroySourceVoice",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                   ,0x14e);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId334);
      }
      (**(code **)(**(longlong **)(*in_RDX + 0x90) + 0x90))();
      *(undefined8 *)(*in_RDX + 0x90) = 0;
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (*(longlong *)(*in_RDX + 0x88) != 0) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Blue,"FMixerPlatformXAudio2_AsyncDeleteCreate_DestroyMasterVoice");
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId342,
                   "FMixerPlatformXAudio2_AsyncDeleteCreate_DestroyMasterVoice",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                   ,0x156);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId342);
      }
      (**(code **)(**(longlong **)(*in_RDX + 0x88) + 0x90))();
      *(undefined8 *)(*in_RDX + 0x88) = 0;
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Blue,"FMixerPlatformXAudio2_AsyncDeleteCreate_DestroySystem");
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId349,
                 "FMixerPlatformXAudio2_AsyncDeleteCreate_DestroySystem",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                 ,0x15d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId349);
    }
    if (*(longlong **)(*in_RDX + 0x80) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(*in_RDX + 0x80) + 0x10))();
      *(undefined8 *)(*in_RDX + 0x80) = 0;
    }
    *(undefined8 *)(*in_RDX + 0x80) = 0;
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    if (*(char *)(*in_RDX + 0x70) == '\0') {
      param_1->Ptr = (FXAudio2DeviceSwapContext *)0x0;
    }
    else {
      this = ::operator_new(0x80);
      if (this != (FXAudio2DeviceSwapResult *)0x0) {
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->_padding_ = 0;
        this->NewSystem = (IXAudio2 *)0x0;
        this->NewMasteringVoice = (IXAudio2MasteringVoice *)0x0;
        this->NewSourceVoice = (IXAudio2SourceVoice *)0x0;
        pFVar7 = (FXAudio2DeviceSwapContext *)
                 FXAudio2DeviceSwapResult::FXAudio2DeviceSwapResult(this);
      }
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Blue,"FMixerPlatformXAudio2_AsyncDeleteCreate_CreateSystem");
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId364,
                   "FMixerPlatformXAudio2_AsyncDeleteCreate_CreateSystem",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                   ,0x16c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId364);
      }
      iVar6 = Ordinal_1(&pFVar7->_padding_,0,0);
      if (iVar6 < 0) {
        if (1 < (byte)LogAudioMixer._0_1_) {
          ToErrorFString(&local_78,iVar6);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        param_1->Ptr = (FXAudio2DeviceSwapContext *)0x0;
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FGenericPlatformMisc::EndNamedEvent();
        if (pFVar7 != (FXAudio2DeviceSwapContext *)0x0) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
      else {
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FGenericPlatformMisc::EndNamedEvent();
        pFVar8 = TOptional<Audio::FAudioPlatformDeviceInfo>::operator->
                           ((TOptional<Audio::FAudioPlatformDeviceInfo> *)(*in_RDX + 0x28));
        if ((0x40 < pFVar8->NumChannels) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InDeviceContext->NewDevice->NumChannels <= 64",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                                ,0x172,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (FDeviceSwapResult *)(*pcVar3)();
          return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)
                 TVar9.Ptr;
        }
        pFVar8 = TOptional<Audio::FAudioPlatformDeviceInfo>::operator->
                           ((TOptional<Audio::FAudioPlatformDeviceInfo> *)(*in_RDX + 0x28));
        if ((pFVar8->SampleRate < 1000) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InDeviceContext->NewDevice->SampleRate >= 1000",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                                ,0x173,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (FDeviceSwapResult *)(*pcVar3)();
          return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)
                 TVar9.Ptr;
        }
        pFVar8 = TOptional<Audio::FAudioPlatformDeviceInfo>::operator->
                           ((TOptional<Audio::FAudioPlatformDeviceInfo> *)(*in_RDX + 0x28));
        if ((200000 < pFVar8->SampleRate) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InDeviceContext->NewDevice->SampleRate <= 200000",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                                ,0x174,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (FDeviceSwapResult *)(*pcVar3)();
          return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)
                 TVar9.Ptr;
        }
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Blue,"FMixerPlatformXAudio2_AsyncDeleteCreate_CreateMasterVoice");
        bVar13 = -1 < CpuChannel->Enabled;
        if (bVar13) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId374,
                     "FMixerPlatformXAudio2_AsyncDeleteCreate_CreateMasterVoice",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                     ,0x176);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId374);
        }
        bVar1 = *(bool *)(*in_RDX + 0x78);
        pFVar8 = TOptional<Audio::FAudioPlatformDeviceInfo>::operator*
                           ((TOptional<Audio::FAudioPlatformDeviceInfo> *)(*in_RDX + 0x28));
        pIVar10 = CreateMasteringVoice((IXAudio2 *)pFVar7->_padding_,pFVar8,bVar1);
        pFVar7->_padding_ = (longlong)pIVar10;
        if (pIVar10 == (IXAudio2MasteringVoice *)0x0) {
          if ((IXAudio2 *)pFVar7->_padding_ != (IXAudio2 *)0x0) {
            (**(code **)((longlong)*(IXAudio2 *)pFVar7->_padding_ + 0x10))();
            pFVar7->_padding_ = 0;
          }
        }
        else {
          if (bVar13) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          FGenericPlatformMisc::EndNamedEvent();
          FGenericPlatformMisc::BeginNamedEvent
                    (&FColor::Blue,"FMixerPlatformXAudio2_AsyncDeleteCreate_CreateSourceVoice");
          bVar13 = -1 < CpuChannel->Enabled;
          if (bVar13) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&DAT_155263718,"FMixerPlatformXAudio2_AsyncDeleteCreate_CreateSourceVoice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                       ,0x181);
            FCpuProfilerTrace::OutputBeginEvent(DAT_155263718);
          }
          local_48 = 0;
          pFVar8 = TOptional<Audio::FAudioPlatformDeviceInfo>::operator->
                             ((TOptional<Audio::FAudioPlatformDeviceInfo> *)(*in_RDX + 0x28));
          local_56 = (ushort)pFVar8->NumChannels;
          local_54 = *(int *)(*in_RDX + 0xa0);
          local_58 = 3;
          local_4c = local_56 << 2;
          local_50 = (uint)local_56 * local_54 * 4;
          local_4a = 0x20;
          iVar6 = (**(code **)((longlong)*(IXAudio2 *)pFVar7->_padding_ + 0x28))
                            ((IXAudio2 *)pFVar7->_padding_,&pFVar7->bUseDefaultDevice,&local_58,2);
          if (-1 < iVar6) {
            if (bVar13) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            FGenericPlatformMisc::EndNamedEvent();
            if (0.0 < GThreadedSwapDebugExtraTimeMs) {
              FWindowsPlatformProcess::Sleep(GThreadedSwapDebugExtraTimeMs * __real_3a83126f);
            }
            lVar2 = *in_RDX;
            if (WindowsNotificationClient.Object != (FWindowsMMNotificationClient *)0x0) {
              if ((WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar3 = (code *)swi(3);
                TVar9.Ptr = (FDeviceSwapResult *)(*pcVar3)();
                return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>
                        )TVar9.Ptr;
              }
              FWindowsMMNotificationClient::RegisterForSessionNotifications
                        (WindowsNotificationClient.Object,(FString *)(lVar2 + 8));
            }
            QueryPerformanceCounter(&local_98);
            local_e8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Name.Data.ArrayNum = 0;
            local_e8.Name.Data.ArrayMax = 0;
            local_e8.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.DeviceId.Data.ArrayNum = 0;
            local_e8.DeviceId.Data.ArrayMax = 0;
            local_e8.OutputChannelArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.OutputChannelArray.ArrayNum = 0;
            local_e8.OutputChannelArray.ArrayMax = 0;
            pFVar7->_padding_ =
                 (longlong)
                 ((double)(ulonglong)(local_98.QuadPart - (longlong)local_90) *
                  FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
            lVar2 = *in_RDX;
            ::FString::operator=(&local_e8.Name,L"Unknown");
            ::FString::operator=(&local_e8.DeviceId,L"Unknown");
            uVar4 = local_e8.OutputChannelArray._8_8_;
            local_e8.OutputChannelArray._8_8_ =
                 local_e8.OutputChannelArray._8_8_ & 0xffffffff00000000;
            local_e8.NumChannels = 0;
            local_e8.NumDirectOutChannels = 0;
            local_e8.SampleRate = 0;
            local_e8.Format = Unknown;
            if ((longlong)uVar4 < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_e8.OutputChannelArray.AllocatorInstance,0,
                         &local_e8.OutputChannelArray.ArrayMax);
            }
            local_e8.bIsSystemDefault = '\0';
            pFVar8 = &local_e8;
            if (*(char *)(lVar2 + 0x70) != '\0') {
              pFVar8 = (FAudioPlatformDeviceInfo *)(lVar2 + 0x28);
            }
            FAudioPlatformDeviceInfo::operator=
                      ((FAudioPlatformDeviceInfo *)&pFVar7->_padding_,pFVar8);
            if (local_e8.OutputChannelArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_e8.OutputChannelArray.AllocatorInstance.Data);
            }
            if (local_e8.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.DeviceId.Data.AllocatorInstance.Data);
            }
            if (local_e8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Name.Data.AllocatorInstance.Data);
            }
            iVar6 = *(int *)(*in_RDX + 0x20);
            iVar11 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar11 = 0;
            }
            ::FString::AssignRange
                      ((FString *)&pFVar7->_padding_,*(wchar_t **)(*in_RDX + 0x18),iVar11);
            param_1->Ptr = pFVar7;
            goto LAB_148d4093b;
          }
          if (*(IXAudio2SourceVoice **)&pFVar7->bUseDefaultDevice != (IXAudio2SourceVoice *)0x0) {
            (**(code **)((longlong)**(IXAudio2SourceVoice **)&pFVar7->bUseDefaultDevice + 0x90))();
            *(IXAudio2SourceVoice **)&pFVar7->bUseDefaultDevice = (IXAudio2SourceVoice *)0x0;
          }
          if ((IXAudio2MasteringVoice *)pFVar7->_padding_ != (IXAudio2MasteringVoice *)0x0) {
            (**(code **)((longlong)*(IXAudio2MasteringVoice *)pFVar7->_padding_ + 0x90))();
            pFVar7->_padding_ = 0;
          }
          if ((IXAudio2 *)pFVar7->_padding_ != (IXAudio2 *)0x0) {
            (**(code **)((longlong)*(IXAudio2 *)pFVar7->_padding_ + 0x10))();
            pFVar7->_padding_ = 0;
          }
          if (1 < (byte)LogAudioMixer._0_1_) {
            ToErrorFString(&local_68,iVar6);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
        }
        param_1->Ptr = (FXAudio2DeviceSwapContext *)0x0;
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FGenericPlatformMisc::EndNamedEvent();
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
  }
LAB_148d4093b:
  if (bVar5) {
    FWindowsPlatformMisc::CoUninitialize();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return (TUniquePtr<Audio::FDeviceSwapResult,TDefaultDelete<Audio::FDeviceSwapResult>_>)
         (FDeviceSwapResult *)param_1;
}

// PostDeviceSwap @ 148d409a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerPlatformXAudio2::PostDeviceSwap(FMixerPlatformXAudio2 *this)

{
  longlong *lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  IXAudio2 *pIVar3;
  IXAudio2MasteringVoice *pIVar4;
  IXAudio2SourceVoice *pIVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  bool bVar11;
  FString local_28;
  
  if (((this->DeviceSwapContext).Ptr != (FXAudio2DeviceSwapContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!DeviceSwapContext.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                         ,0xe7,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  bVar11 = false;
  bVar7 = false;
  if (this->_padding_ != 0) {
    lVar1 = this->_padding_;
    while (*(char *)(lVar1 + 0x68) == '\0') {
      (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0)
      ;
    }
    plVar2 = *(longlong **)(lVar1 + 0x70);
    if ((plVar2 != (longlong *)0x0) && (cVar9 = (**(code **)(*plVar2 + 8))(plVar2), cVar9 != '\0'))
    {
      lpCriticalSection = &this->_padding_;
      if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pIVar3 = (IXAudio2 *)plVar2[0xd];
      this->XAudio2System = pIVar3;
      pIVar4 = (IXAudio2MasteringVoice *)plVar2[0xe];
      this->OutputAudioStreamMasteringVoice = pIVar4;
      pIVar5 = (IXAudio2SourceVoice *)plVar2[0xf];
      this->OutputAudioStreamSourceVoice = pIVar5;
      bVar7 = bVar11;
      if (((pIVar3 != (IXAudio2 *)0x0) && (pIVar5 != (IXAudio2SourceVoice *)0x0)) &&
         (pIVar4 != (IXAudio2MasteringVoice *)0x0)) {
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Blue,"FMixerPlatformXAudio2_PostDeviceSwap_StartEngine");
        if (CpuChannel->Enabled < 0) {
          iVar10 = (**(code **)((longlong)*this->XAudio2System + 0x40))();
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId248,"FMixerPlatformXAudio2_PostDeviceSwap_StartEngine"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                     ,0xf8);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId248);
          iVar10 = (**(code **)((longlong)*this->XAudio2System + 0x40))();
          FCpuProfilerTrace::OutputEndEvent();
        }
        FGenericPlatformMisc::EndNamedEvent();
        if (iVar10 < 0) {
          if (1 < (byte)LogAudioMixer._0_1_) {
            ToErrorFString(&local_28,iVar10);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          FAudioPlatformDeviceInfo::operator=
                    ((FAudioPlatformDeviceInfo *)&this->_padding_,
                     (FAudioPlatformDeviceInfo *)(plVar2 + 1));
          if (3 < (byte)LogAudioMixer._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
          }
          iVar10 = *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
          if (iVar10 < 1) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6538217543490863367>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               ,0x107,"NumOutputSamples > 0");
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
          }
          else {
            FOutputBuffer::Init((FOutputBuffer *)&this->_padding_,(IAudioMixer *)this->_padding_,
                                iVar10,(int)this->_padding_,
                                *(Type *)((longlong)&this->_padding_ + 4));
          }
          bVar7 = true;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  FAudioMixerPlatformSwappable::ResetActiveDeviceSwapFuture((FAudioMixerPlatformSwappable *)this);
  return bVar7;
}

// PreDeviceSwap @ 148d40cc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerPlatformXAudio2::PreDeviceSwap(FMixerPlatformXAudio2 *this)

{
  longlong *lpCriticalSection;
  FXAudio2DeviceSwapContext *pFVar1;
  bool bVar2;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->DeviceSwapContext).Ptr;
    if (pFVar1 == (FXAudio2DeviceSwapContext *)0x0) {
      if (2 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      bVar2 = false;
    }
    else {
      pFVar1->PreviousSystem = this->XAudio2System;
      ((this->DeviceSwapContext).Ptr)->PreviousMasteringVoice =
           this->OutputAudioStreamMasteringVoice;
      ((this->DeviceSwapContext).Ptr)->PreviousSourceVoice = this->OutputAudioStreamSourceVoice;
      ((this->DeviceSwapContext).Ptr)->Callbacks = &this->OutputVoiceCallback;
      ((this->DeviceSwapContext).Ptr)->RenderingSampleRate = (uint)this->_padding_;
      this->XAudio2System = (IXAudio2 *)0x0;
      this->OutputAudioStreamMasteringVoice = (IXAudio2MasteringVoice *)0x0;
      this->OutputAudioStreamSourceVoice = (IXAudio2SourceVoice *)0x0;
      if (3 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      bVar2 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterDeviceChangedListener @ 148d40df0

void __thiscall
Audio::FMixerPlatformXAudio2::RegisterDeviceChangedListener(FMixerPlatformXAudio2 *this)

{
  code *pcVar1;
  bool bVar2;
  FWindowsMMNotificationClient *this_00;
  FXAudio2VoiceCallback FVar3;
  FXAudio2VoiceCallback FVar4;
  FWindowsMMDeviceCache *this_01;
  FXAudio2VoiceCallback FVar5;
  FXAudio2VoiceCallback FVar6;
  FSharedReferencer<1> local_10;
  
  FVar6 = (FXAudio2VoiceCallback)0x0;
  if (WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
    this_00 = ::operator_new(0xb8);
    FVar3 = FVar6;
    if (this_00 != (FWindowsMMNotificationClient *)0x0) {
      FVar3 = (FXAudio2VoiceCallback)
              FWindowsMMNotificationClient::FWindowsMMNotificationClient(this_00);
    }
    FVar4 = (FXAudio2VoiceCallback)::operator_new(0x18);
    local_10.ReferenceController = (TReferenceControllerBase<1> *)FVar6;
    if (FVar4 != (FXAudio2VoiceCallback)0x0) {
      *(undefined4 *)((longlong)FVar4 + 8) = 1;
      *(undefined ***)FVar4 =
           &SharedPointerInternals::
            TReferenceControllerWithDeleter<Audio::FWindowsMMNotificationClient,`Audio::FMixerPlatformXAudio2::RegisterDeviceChangedListener'::`5'::<lambda_1>,1>
            ::_vftable_;
      *(undefined4 *)((longlong)FVar4 + 0xc) = 1;
      *(FXAudio2VoiceCallback *)((longlong)FVar4 + 0x10) = FVar3;
      local_10.ReferenceController = (TReferenceControllerBase<1> *)FVar4;
    }
    WindowsNotificationClient.Object = (FWindowsMMNotificationClient *)FVar3;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&WindowsNotificationClient.SharedReferenceCount,&local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
  }
  if (this->OutputVoiceCallback == (FXAudio2VoiceCallback)0x0) {
    this_01 = ::operator_new(0xa8);
    FVar3 = FVar6;
    if (this_01 != (FWindowsMMDeviceCache *)0x0) {
      FVar3 = (FXAudio2VoiceCallback)FWindowsMMDeviceCache::FWindowsMMDeviceCache(this_01);
    }
    FVar4 = this->OutputVoiceCallback;
    FVar5 = (FXAudio2VoiceCallback)((longlong)FVar3 + 8);
    if (FVar3 == (FXAudio2VoiceCallback)0x0) {
      FVar5 = FVar6;
    }
    this->OutputVoiceCallback = FVar5;
    if (FVar4 != (FXAudio2VoiceCallback)0x0) {
      (*(code *)**(undefined8 **)FVar4)(FVar4,1);
    }
    if ((WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar3 = (FXAudio2VoiceCallback)((longlong)this->OutputVoiceCallback + -8);
    if (this->OutputVoiceCallback == (FXAudio2VoiceCallback)0x0) {
      FVar3 = FVar6;
    }
    FWindowsMMNotificationClient::RegisterDeviceChangedListener
              (WindowsNotificationClient.Object,(IAudioMixerDeviceChangedListener *)FVar3);
  }
  if ((WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this == (FMixerPlatformXAudio2 *)&DAT_00000010) {
    this = (FMixerPlatformXAudio2 *)FVar6;
  }
  FWindowsMMNotificationClient::RegisterDeviceChangedListener
            (WindowsNotificationClient.Object,(IAudioMixerDeviceChangedListener *)this);
  return;
}

// ResetXAudio2System @ 148d41150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerPlatformXAudio2::ResetXAudio2System(FMixerPlatformXAudio2 *this)

{
  undefined4 uVar1;
  int iVar2;
  FStaticBasicLogRecord *pFVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  FString local_18;
  
  if (this->XAudio2System != (IXAudio2 *)0x0) {
    (**(code **)((longlong)*this->XAudio2System + 0x10))();
  }
  this->XAudio2System = (IXAudio2 *)0x0;
  uVar1 = (**(code **)(this->_padding_ + 0x188))(this);
  iVar2 = Ordinal_1(&this->XAudio2System,uVar1,0);
  if (-1 < iVar2) {
    plVar5 = &this->_padding_;
    if (this == (FMixerPlatformXAudio2 *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    iVar2 = (**(code **)((longlong)*this->XAudio2System + 0x18))(this->XAudio2System,plVar5);
    if (-1 < iVar2) {
      return true;
    }
    if ((byte)LogAudioMixer._0_1_ < 2) {
      return false;
    }
    ToErrorFString(&local_18,iVar2);
    pFVar3 = &::LOG_Static;
    goto LAB_148d412c3;
  }
  if ((byte)LogAudioMixer._0_1_ < 2) {
    return false;
  }
  if (iVar2 == -0x7769ffff) {
    pwVar4 = L"XAUDIO2_E_INVALID_CALL";
LAB_148d41208:
    ::FString::FString(&local_18,pwVar4);
  }
  else {
    if (iVar2 == -0x7769fffe) {
      pwVar4 = L"XAUDIO2_E_XMA_DECODER_ERROR";
      goto LAB_148d41208;
    }
    if (iVar2 == -0x7769fffd) {
      pwVar4 = L"XAUDIO2_E_XAPO_CREATION_FAILED";
      goto LAB_148d41208;
    }
    if (iVar2 == -0x7769fffc) {
      pwVar4 = L"XAUDIO2_E_DEVICE_INVALIDATED";
      goto LAB_148d41208;
    }
    AudioClientErrorToFString(&local_18,iVar2);
  }
  pFVar3 = &::LOG_Static;
LAB_148d412c3:
  UE::Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogAudioMixer);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// ShouldUseDefaultDevice @ 148d41440

bool __thiscall Audio::FMixerPlatformXAudio2::ShouldUseDefaultDevice(FMixerPlatformXAudio2 *this)

{
  return false;
}

// ShouldUseDeviceInfoCache @ 148d41450

bool __thiscall Audio::FMixerPlatformXAudio2::ShouldUseDeviceInfoCache(FMixerPlatformXAudio2 *this)

{
  return true;
}

// StartAudioStream @ 148d41460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerPlatformXAudio2::StartAudioStream(FMixerPlatformXAudio2 *this)

{
  IXAudio2SourceVoice *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (4 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  pIVar1 = this->OutputAudioStreamSourceVoice;
  if (pIVar1 == (IXAudio2SourceVoice *)0x0) {
    if ((int)this->_padding_ != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsUsingNullDevice",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                         ,0x411,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    IAudioMixerPlatformInterface::StartRunningNullDevice((IAudioMixerPlatformInterface *)this);
  }
  else {
    (**(code **)((longlong)*pIVar1 + 0x98))(pIVar1,0,0);
  }
  if (this->_padding_ == 0) {
    IAudioMixerPlatformInterface::BeginGeneratingAudio((IAudioMixerPlatformInterface *)this);
    return true;
  }
  LOCK();
  *(undefined4 *)&this->_padding_ = 4;
  UNLOCK();
  return true;
}

// StopAudioStream @ 148d41520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerPlatformXAudio2::StopAudioStream(FMixerPlatformXAudio2 *this)

{
  longlong *lpCriticalSection;
  IXAudio2SourceVoice *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if (this->bIsInitialized == 0) {
    pFVar5 = ::FString::FString(&local_18,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               );
    ::FString::FString(&local_28,L"XAudio2 was not initialized.");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_28,pFVar5,0x428,Warning);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    if (((int)this->_padding_ != 2) && ((int)this->_padding_ != 0)) {
      if (((int)this->_padding_ == 4) || ((int)this->_padding_ == 5)) {
        IAudioMixerPlatformInterface::StopGeneratingAudio((IAudioMixerPlatformInterface *)this);
      }
      pIVar1 = this->OutputAudioStreamSourceVoice;
      if (pIVar1 != (IXAudio2SourceVoice *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,0,0);
      }
      if ((int)this->_padding_ != 2) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioStreamInfo.StreamState == EAudioOutputStreamState::Stopped",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                           ,0x441,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SubmitBuffer @ 148d41680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerPlatformXAudio2::SubmitBuffer(FMixerPlatformXAudio2 *this,uchar *param_1)

{
  IXAudio2SourceVoice *pIVar1;
  bool bVar2;
  undefined4 local_38;
  int local_34;
  uchar *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  FMixerPlatformXAudio2 *local_14;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FMixerPlatformXAudio2_SubmitBuffer");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1115,"FMixerPlatformXAudio2_SubmitBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
               ,0x45b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1115);
  }
  pIVar1 = this->OutputAudioStreamSourceVoice;
  if (pIVar1 != (IXAudio2SourceVoice *)0x0) {
    local_38 = 0;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_34 = *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_ * 4;
    local_30 = param_1;
    local_14 = this;
    (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,&local_38,0);
    if (this->FirstBufferSubmitted == false) {
      if (3 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      this->FirstBufferSubmitted = true;
    }
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// SynchronousDeviceSwap @ 148d41790

/* WARNING: Removing unreachable block (ram,0x000148d419fc) */

void __thiscall Audio::FMixerPlatformXAudio2::SynchronousDeviceSwap(FMixerPlatformXAudio2 *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  FFutureState *this_00;
  TUniquePtr<Audio::FXAudio2DeviceSwapContext,TDefaultDelete<Audio::FXAudio2DeviceSwapContext>_>
  local_res8;
  FXAudio2DeviceSwapContext *local_res10;
  FFutureState *local_38;
  FSharedReferencer<1> local_30;
  
  local_res10 = (this->DeviceSwapContext).Ptr;
  (this->DeviceSwapContext).Ptr = (FXAudio2DeviceSwapContext *)0x0;
  PerformDeviceSwap(&local_res8);
  if (local_res10 != (FXAudio2DeviceSwapContext *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (FFutureState *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TUniquePtr_UFDeviceSwapResult_Audio__U__TDefaultDelete_UFDeviceSwapResult_Audio_________00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_00 = (FFutureState *)(pTVar3 + 1);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if ((this_00 == (FFutureState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (this_00 == (FFutureState *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((this_00->bComplete != (TAtomic<bool>)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0xcd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00[1].Mutex.CriticalSection.Opaque1[0] = local_res8.Ptr;
  local_res8.Ptr = (FXAudio2DeviceSwapContext *)0x0;
  FFutureState::MarkComplete(this_00);
  if ((this_00 == (FFutureState *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = this_00;
  local_30.ReferenceController = pTVar3;
  if ((FFutureState **)&this->_padding_ != &local_38) {
    this->_padding_ = (longlong)this_00;
    local_38 = (FFutureState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  if (((this_00 != (FFutureState *)0x0) && (this_00->bComplete == (TAtomic<bool>)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// TeardownHardware @ 148d41a20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerPlatformXAudio2::TeardownHardware(FMixerPlatformXAudio2 *this)

{
  longlong *lpCriticalSection;
  IXAudio2 *pIVar1;
  BOOL BVar2;
  FString *pFVar3;
  longlong *plVar4;
  FString local_28;
  FString local_18;
  
  if (this->bIsInitialized == 0) {
    pFVar3 = ::FString::FString(&local_18,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\AudioMixerXAudio2\\Private\\AudioMixerPlatformXAudio2.cpp"
                               );
    ::FString::FString(&local_28,L"XAudio2 was already tore down.");
    IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
              ((IAudioMixerPlatformInterface *)this,&local_28,pFVar3,0x209,Warning);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = this->XAudio2System;
    if (pIVar1 != (IXAudio2 *)0x0) {
      plVar4 = &this->_padding_;
      if (this == (FMixerPlatformXAudio2 *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,plVar4);
    }
    if (this->XAudio2System != (IXAudio2 *)0x0) {
      (**(code **)((longlong)*this->XAudio2System + 0x10))();
      this->XAudio2System = (IXAudio2 *)0x0;
    }
    if (((HMODULE)this->XAudio2Dll != (HMODULE)0x0) && (GIsRequestingExit != false)) {
      BVar2 = FreeLibrary((HMODULE)this->XAudio2Dll);
      if ((BVar2 == 0) && (2 < (byte)LogAudio._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      this->XAudio2Dll = (HINSTANCE__ *)0x0;
    }
    this->bIsInitialized = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UnregisterDeviceChangedListener @ 148d41c10

void __thiscall
Audio::FMixerPlatformXAudio2::UnregisterDeviceChangedListener(FMixerPlatformXAudio2 *this)

{
  FXAudio2VoiceCallback FVar1;
  code *pcVar2;
  bool bVar3;
  FMixerPlatformXAudio2 *pFVar4;
  
  if (WindowsNotificationClient.Object != (FWindowsMMNotificationClient *)0x0) {
    if (this->OutputVoiceCallback != (FXAudio2VoiceCallback)0x0) {
      if (WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = (FMixerPlatformXAudio2 *)((longlong)this->OutputVoiceCallback + -8);
      if (this->OutputVoiceCallback == (FXAudio2VoiceCallback)0x0) {
        pFVar4 = (FMixerPlatformXAudio2 *)0x0;
      }
      FWindowsMMNotificationClient::UnRegisterDeviceDeviceChangedListener
                (WindowsNotificationClient.Object,(IAudioMixerDeviceChangedListener *)pFVar4);
      FVar1 = this->OutputVoiceCallback;
      if (FVar1 != (FXAudio2VoiceCallback)0x0) {
        this->OutputVoiceCallback = (FXAudio2VoiceCallback)0x0;
        (*(code *)**(undefined8 **)FVar1)(FVar1,1);
      }
    }
    if (WindowsNotificationClient.Object == (FWindowsMMNotificationClient *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (this == (FMixerPlatformXAudio2 *)&DAT_00000010) {
      this = (FMixerPlatformXAudio2 *)0x0;
    }
    FWindowsMMNotificationClient::UnRegisterDeviceDeviceChangedListener
              (WindowsNotificationClient.Object,(IAudioMixerDeviceChangedListener *)this);
  }
  return;
}

