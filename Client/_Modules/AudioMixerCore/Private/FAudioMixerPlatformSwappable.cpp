// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 11

// FAudioMixerPlatformSwappable @ 144526130

FAudioMixerPlatformSwappable * __thiscall
Audio::FAudioMixerPlatformSwappable::FAudioMixerPlatformSwappable
          (FAudioMixerPlatformSwappable *this)

{
  IAudioMixerPlatformInterface::IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  (this->OriginalAudioDeviceId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalAudioDeviceId).Data.ArrayNum = 0;
  (this->OriginalAudioDeviceId).Data.ArrayMax = 0;
  *(undefined8 *)&this->ActiveDeviceSwap = 0;
  *(undefined8 *)&(this->ActiveDeviceSwap).field_0x8 = 0;
  this->LastDeviceSwapTime = 0.0;
  return this;
}

// ~FAudioMixerPlatformSwappable @ 144526600

void __thiscall
Audio::FAudioMixerPlatformSwappable::~FAudioMixerPlatformSwappable
          (FAudioMixerPlatformSwappable *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ActiveDeviceSwap).field_0x8);
  pFVar1 = (this->OriginalAudioDeviceId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  return;
}

// AllowDeviceSwap @ 1445269c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerPlatformSwappable::AllowDeviceSwap
          (FAudioMixerPlatformSwappable *this,bool param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar1 = this->LastDeviceSwapTime;
  this->LastDeviceSwapTime = dVar2;
  cVar3 = (**(code **)(this->_padding_ + 0x58))(this);
  if (cVar3 == '\0') {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return false;
    }
  }
  else if (*(longlong *)&this->ActiveDeviceSwap == 0) {
    if ((int)this->_padding_ == 4) {
      if ((__real_3f847ae147ae147b < dVar2 - dVar1) || (param_1)) {
        return true;
      }
      if (3 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    else if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      return false;
    }
  }
  else if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    return false;
  }
  return false;
}

// CheckAudioDeviceChange @ 144526f50

bool __thiscall
Audio::FAudioMixerPlatformSwappable::CheckAudioDeviceChange(FAudioMixerPlatformSwappable *this)

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

// CheckThreadedDeviceSwap @ 144527030

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerPlatformSwappable::CheckThreadedDeviceSwap(FAudioMixerPlatformSwappable *this)

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
  if (((int)this->_padding_ != 5) && (*(longlong *)&this->ActiveDeviceSwap == 0))
  goto LAB_14452726f;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((int)this->_padding_ == 5) && (*(longlong *)&this->ActiveDeviceSwap == 0)) {
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
    if ((*(longlong *)&this->ActiveDeviceSwap != 0) &&
       (*(char *)(*(longlong *)&this->ActiveDeviceSwap + 0x68) != '\0')) {
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
      GetDeviceSwapResult(this);
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

// GetDeviceSwapResult @ 144527710

FDeviceSwapResult * __thiscall
Audio::FAudioMixerPlatformSwappable::GetDeviceSwapResult(FAudioMixerPlatformSwappable *this)

{
  longlong lVar1;
  
  if (*(longlong *)&this->ActiveDeviceSwap != 0) {
    lVar1 = *(longlong *)&this->ActiveDeviceSwap;
    while (*(char *)(lVar1 + 0x68) == '\0') {
      (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0)
      ;
    }
    return *(FDeviceSwapResult **)(lVar1 + 0x70);
  }
  return (FDeviceSwapResult *)0x0;
}

// MoveAudioStreamToNewAudioDevice @ 144528880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerPlatformSwappable::MoveAudioStreamToNewAudioDevice
          (FAudioMixerPlatformSwappable *this)

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
    if (*(longlong *)&this->ActiveDeviceSwap != 0) {
      lVar1 = *(longlong *)&this->ActiveDeviceSwap;
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

// PostDeviceSwap @ 144528c30

bool __thiscall
Audio::FAudioMixerPlatformSwappable::PostDeviceSwap(FAudioMixerPlatformSwappable *this)

{
  return true;
}

// PreDeviceSwap @ 144528c60

bool __thiscall
Audio::FAudioMixerPlatformSwappable::PreDeviceSwap(FAudioMixerPlatformSwappable *this)

{
  return true;
}

// RequestDeviceSwap @ 144528f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FAudioMixerPlatformSwappable::RequestDeviceSwap
          (FAudioMixerPlatformSwappable *this,FString *param_1,bool param_2,wchar_t *param_3)

{
  char cVar1;
  BOOL BVar2;
  FStaticBasicLogRecord *pFVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x150))(this,param_2);
  if (cVar1 == '\0') {
    if ((byte)LogAudioMixer._0_1_ < 4) {
      return false;
    }
    if ((param_1->Data).ArrayNum < 2) {
      pFVar3 = &::LOG_Static;
    }
    else {
      pFVar3 = &::LOG_Static;
    }
  }
  else {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
    if (BVar2 != 0) {
      if (3 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
      cVar1 = (**(code **)(this->_padding_ + 0x158))(this,param_1,param_3);
      if (cVar1 != '\0') {
        LOCK();
        *(undefined4 *)&this->_padding_ = 5;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      return true;
    }
    if ((byte)LogAudioMixer._0_1_ < 4) {
      return false;
    }
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar3,(FLogCategoryBase *)&LogAudioMixer);
  return false;
}

// ResumePlaybackOnNewDevice @ 144529270

void __thiscall
Audio::FAudioMixerPlatformSwappable::ResumePlaybackOnNewDevice(FAudioMixerPlatformSwappable *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int local_res8 [2];
  TArrayView<unsigned_char_const_,int> local_18;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"FAudioMixerPlatformSwappable_ResumePlaybackOnNewDevice");
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1148,
               "FAudioMixerPlatformSwappable_ResumePlaybackOnNewDevice",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0x47c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1148);
  }
  local_res8[0] = 0;
  FOutputBuffer::PopBufferData((FOutputBuffer *)&this->_padding_,&local_18,local_res8);
  (**(code **)(this->_padding_ + 0xd0))(this,local_18.DataPtr);
  if ((*(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_ != (int)this->_padding_) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpenStreamParams.NumFrames * AudioStreamInfo.DeviceInfo.NumChannels == OutputBuffer.GetNumSamples()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x482,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this->_padding_ + 0xa0))(this);
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

