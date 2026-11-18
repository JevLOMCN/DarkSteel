// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 41

// ApplyAttenuationInternal<short> @ 144525b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<short>
          (IAudioMixerPlatformInterface *this,TArrayView<short,int> *param_1)

{
  float fVar1;
  short sVar2;
  short *psVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FThreadSafeBool FVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  if ((ExtraAudioMixerDeviceLoggingCVar < 1) ||
     (this->CallCounterApplyAttenuationInternal = this->CallCounterApplyAttenuationInternal + 1,
     this->CallCounterApplyAttenuationInternal < 0x1f5)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<short>(TArrayView<short,int>&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    this->CallCounterApplyAttenuationInternal = 0;
  }
  if (this->bPerformingFade == (FThreadSafeBool)0x0) {
    if (((this->bFadedOut != (FThreadSafeBool)0x0) &&
        (memset(param_1->DataPtr,0,(longlong)param_1->ArrayNum * 2), bVar5)) &&
       (3 < (byte)LogAudioMixer._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<short>(TArrayView<short,int>&___ptr64)___ptr64'
                  ::__l42::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    fVar13 = this->FadeVolume;
    iVar9 = param_1->ArrayNum;
    (this->FadeParam).TargetValue = fVar13;
    if (((this->FadeParam).bIsInit == false) && (iVar9 != 0)) {
      fVar1 = (this->FadeParam).CurrentValue;
      fVar12 = (fVar13 - fVar1) / (float)iVar9;
      fVar13 = fVar1;
    }
    else {
      (this->FadeParam).CurrentValue = fVar13;
      fVar12 = 0.0;
      (this->FadeParam).bIsInit = false;
    }
    (this->FadeParam).DeltaValue = fVar12;
    uVar11 = 0;
    (this->FadeParam).StartingValue = fVar13;
    iVar9 = param_1->ArrayNum;
    if (0 < iVar9) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < iVar9) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        psVar3 = param_1->DataPtr;
        fVar13 = (this->FadeParam).DeltaValue + (this->FadeParam).CurrentValue;
        (this->FadeParam).CurrentValue = fVar13;
        sVar2 = psVar3[lVar10];
        uVar7 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = uVar11 + 1;
        param_1->DataPtr[lVar10] = (short)(int)((float)(int)sVar2 * fVar13);
        lVar10 = lVar10 + 1;
        iVar9 = param_1->ArrayNum;
      } while ((int)uVar11 < iVar9);
    }
    FVar8._1_3_ = 0;
    FVar8._0_1_ = this->FadeVolume == 0.0;
    LOCK();
    this->bFadedOut = FVar8;
    UNLOCK();
    LOCK();
    this->bPerformingFade = (FThreadSafeBool)0x0;
    UNLOCK();
    if (this->AudioFadeEvent != (FEvent *)0x0) {
      (**(code **)(this->AudioFadeEvent->_padding_ + 0x10))();
    }
    if ((bVar5) && (3 < (byte)LogAudioMixer._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<short>(TArrayView<short,int>&___ptr64)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  (this->FadeParam).CurrentValue = (this->FadeParam).TargetValue;
  (this->FadeParam).DeltaValue = 0.0;
  return;
}

// ApplyAttenuationInternal<float> @ 144525e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<float>
          (IAudioMixerPlatformInterface *this,TArrayView<float,int> *param_1)

{
  float fVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FThreadSafeBool FVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if ((ExtraAudioMixerDeviceLoggingCVar < 1) ||
     (this->CallCounterApplyAttenuationInternal = this->CallCounterApplyAttenuationInternal + 1,
     this->CallCounterApplyAttenuationInternal < 0x1f5)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<float>(TArrayView<float,int>&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    this->CallCounterApplyAttenuationInternal = 0;
  }
  if (this->bPerformingFade == (FThreadSafeBool)0x0) {
    if (((this->bFadedOut != (FThreadSafeBool)0x0) &&
        (memset(param_1->DataPtr,0,(longlong)param_1->ArrayNum << 2), bVar4)) &&
       (3 < (byte)LogAudioMixer._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<float>(TArrayView<float,int>&___ptr64)___ptr64'
                  ::__l42::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  else {
    fVar12 = this->FadeVolume;
    iVar8 = param_1->ArrayNum;
    (this->FadeParam).TargetValue = fVar12;
    if (((this->FadeParam).bIsInit == false) && (iVar8 != 0)) {
      fVar1 = (this->FadeParam).CurrentValue;
      fVar11 = (fVar12 - fVar1) / (float)iVar8;
      fVar12 = fVar1;
    }
    else {
      (this->FadeParam).CurrentValue = fVar12;
      fVar11 = 0.0;
      (this->FadeParam).bIsInit = false;
    }
    (this->FadeParam).DeltaValue = fVar11;
    uVar10 = 0;
    (this->FadeParam).StartingValue = fVar12;
    iVar8 = param_1->ArrayNum;
    if (0 < iVar8) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < iVar8) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pfVar2 = param_1->DataPtr;
        fVar11 = (this->FadeParam).CurrentValue + (this->FadeParam).DeltaValue;
        (this->FadeParam).CurrentValue = fVar11;
        fVar12 = pfVar2[lVar9];
        uVar6 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = uVar10 + 1;
        param_1->DataPtr[lVar9] = fVar11 * fVar12;
        lVar9 = lVar9 + 1;
        iVar8 = param_1->ArrayNum;
      } while ((int)uVar10 < iVar8);
    }
    FVar7._1_3_ = 0;
    FVar7._0_1_ = this->FadeVolume == 0.0;
    LOCK();
    this->bFadedOut = FVar7;
    UNLOCK();
    LOCK();
    this->bPerformingFade = (FThreadSafeBool)0x0;
    UNLOCK();
    if (this->AudioFadeEvent != (FEvent *)0x0) {
      (**(code **)(this->AudioFadeEvent->_padding_ + 0x10))();
    }
    if ((bVar4) && (3 < (byte)LogAudioMixer._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<float>(TArrayView<float,int>&___ptr64)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
  }
  (this->FadeParam).CurrentValue = (this->FadeParam).TargetValue;
  (this->FadeParam).DeltaValue = 0.0;
  return;
}

// IAudioMixerPlatformInterface @ 144526340

IAudioMixerPlatformInterface * __thiscall
Audio::IAudioMixerPlatformInterface::IAudioMixerPlatformInterface
          (IAudioMixerPlatformInterface *this)

{
  int *piVar1;
  int *piVar2;
  TCircularAudioBuffer<unsigned_char,16> *pTVar3;
  uint uVar4;
  int iVar5;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  (this->AudioStreamInfo).DeviceInfo.Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  (this->AudioStreamInfo).DeviceInfo.Name.Data.ArrayNum = 0;
  (this->AudioStreamInfo).DeviceInfo.Name.Data.ArrayMax = 0;
  (this->AudioStreamInfo).DeviceInfo.DeviceId.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AudioStreamInfo).DeviceInfo.DeviceId.Data.ArrayNum = 0;
  (this->AudioStreamInfo).DeviceInfo.DeviceId.Data.ArrayMax = 0;
  (this->AudioStreamInfo).DeviceInfo.OutputChannelArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AudioStreamInfo).DeviceInfo.OutputChannelArray.ArrayNum = 0;
  (this->AudioStreamInfo).DeviceInfo.OutputChannelArray.ArrayMax = 0;
  FAudioPlatformDeviceInfo::Reset(&(this->AudioStreamInfo).DeviceInfo);
  (this->AudioStreamInfo).StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x0;
  (this->AudioStreamInfo).OutputDeviceIndex = 0;
  FAudioPlatformDeviceInfo::Reset(&(this->AudioStreamInfo).DeviceInfo);
  pTVar3 = &(this->OutputBuffer).CircularBuffer;
  piVar1 = &(this->OutputBuffer).CircularBuffer.InternalBuffer.ArrayNum;
  LOCK();
  (this->AudioStreamInfo).StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x0;
  UNLOCK();
  (this->AudioStreamInfo).AudioMixer = (IAudioMixer *)0x0;
  piVar2 = &(this->OutputBuffer).CircularBuffer.InternalBuffer.ArrayMax;
  (this->AudioStreamInfo).NumBuffers = 2;
  (this->AudioStreamInfo).NumOutputFrames = 0;
  (this->OpenStreamParams).OutputDeviceIndex = 0xffffffff;
  (this->OpenStreamParams).NumFrames = 0x400;
  (this->OpenStreamParams).NumBuffers = 1;
  (this->OpenStreamParams).AudioMixer = (IAudioMixer *)0x0;
  (this->OpenStreamParams).SampleRate = 0xac44;
  (this->OpenStreamParams).MaxSources = 0;
  (this->OpenStreamParams).bRestoreIfRemoved = false;
  (this->OpenStreamParams).bUseSystemAudioDevice = true;
  (this->OpenStreamParams).AudioDeviceId.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OpenStreamParams).AudioDeviceId.Data.ArrayNum = 0;
  (this->OpenStreamParams).AudioDeviceId.Data.ArrayMax = 0;
  (this->OutputBuffer).AudioMixer = (IAudioMixer *)0x0;
  (pTVar3->InternalBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->OutputBuffer).CircularBuffer.ReadCounter.Counter = 0;
  (this->OutputBuffer).CircularBuffer.WriteCounter.Counter = 0;
  (this->OutputBuffer).CircularBuffer.Capacity = 1;
  LOCK();
  (this->OutputBuffer).CircularBuffer.ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->OutputBuffer).CircularBuffer.WriteCounter.Counter = 0;
  UNLOCK();
  iVar5 = *piVar2;
  *piVar1 = 0;
  if (iVar5 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)pTVar3,0,piVar2);
  }
  uVar4 = (this->OutputBuffer).CircularBuffer.Capacity;
  iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (1,1,uVar4,(ForAnyElementType *)pTVar3,piVar1,piVar2);
  memset((pTVar3->InternalBuffer).AllocatorInstance.Data + iVar5,0,(longlong)(int)uVar4);
  (this->OutputBuffer).RenderBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBuffer).RenderBuffer.ArrayNum = 0;
  (this->OutputBuffer).RenderBuffer.ArrayMax = 0;
  (this->OutputBuffer).PopBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBuffer).PopBuffer.ArrayNum = 0;
  (this->OutputBuffer).PopBuffer.ArrayMax = 0;
  (this->OutputBuffer).FormattedBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBuffer).FormattedBuffer.ArrayNum = 0;
  (this->OutputBuffer).FormattedBuffer.ArrayMax = 0;
  (this->OutputBuffer).DataFormat = Unknown;
  (this->OutputBuffer).CallCounterMixNextBuffer = 0;
  this->bWarnedBufferUnderrun = false;
  (this->AudioRenderThread).Ptr = (FRunnableThread *)0x0;
  this->AudioRenderEvent = (FEvent *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DeviceSwapCriticalSection,4000);
  this->bIsInDeviceSwap = (FThreadSafeBool)0x0;
  this->AudioFadeEvent = (FEvent *)0x0;
  this->NumOutputBuffers = 0;
  this->FadeVolume = 0.0;
  (this->FadeParam).CurrentValue = 0.0;
  (this->FadeParam).StartingValue = 0.0;
  (this->FadeParam).TargetValue = 0.0;
  (this->FadeParam).DeltaValue = 0.0;
  (this->FadeParam).bIsInit = true;
  (this->CurrentDeviceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentDeviceName).Data.ArrayNum = 0;
  (this->CurrentDeviceName).Data.ArrayMax = 0;
  ::FString::FString(&this->LastError,L"None");
  this->CallCounterApplyAttenuationInternal = 0;
  this->CallCounterReadNextBuffer = 0;
  this->bPerformingFade = (FThreadSafeBool)0x1;
  this->bFadedOut = (FThreadSafeBool)0x0;
  this->bIsDeviceInitialized = (FThreadSafeBool)0x0;
  this->bMoveAudioStreamToNewAudioDevice = (FThreadSafeBool)0x0;
  this->bIsUsingNullDevice = (FThreadSafeBool)0x0;
  this->bIsGeneratingAudio = (FThreadSafeBool)0x0;
  LOCK();
  UNLOCK();
  iVar5 = NextInstanceID.Counter + 1;
  NextInstanceID.Counter = NextInstanceID.Counter + 1;
  this->InstanceID = iVar5;
  (this->NullDeviceCallback).Ptr = (FMixerNullCallback *)0x0;
  this->bIsListeningForDeviceEvents = true;
  (this->FadeParam).StartingValue = 0.0;
  (this->FadeParam).TargetValue = 0.0;
  (this->FadeParam).bIsInit = false;
  (this->FadeParam).CurrentValue = 0.0;
  (this->FadeParam).DeltaValue = 0.0;
  return this;
}

// ~IAudioMixerPlatformInterface @ 1445266a0

void __thiscall
Audio::IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface
          (IAudioMixerPlatformInterface *this)

{
  FMixerNullCallback *pFVar1;
  FScriptContainerElement *pFVar2;
  FRunnableThread *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  if ((this->AudioStreamInfo).StreamState != (atomic<Audio::EAudioOutputStreamState::Type>)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioStreamInfo.StreamState == EAudioOutputStreamState::Closed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                       ,0x180,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (this->NullDeviceCallback).Ptr;
  if (pFVar1 != (FMixerNullCallback *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
  }
  pFVar2 = (this->LastError).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurrentDeviceName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeviceSwapCriticalSection);
  pFVar3 = (this->AudioRenderThread).Ptr;
  if (pFVar3 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
  }
  pFVar2 = (this->OutputBuffer).FormattedBuffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputBuffer).PopBuffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputBuffer).RenderBuffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OutputBuffer).CircularBuffer.InternalBuffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OpenStreamParams).AudioDeviceId.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AudioStreamInfo).DeviceInfo.OutputChannelArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AudioStreamInfo).DeviceInfo.DeviceId.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AudioStreamInfo).DeviceInfo.Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// ApplyPrimaryAttenuation @ 144526b10

void __thiscall
Audio::IAudioMixerPlatformInterface::ApplyPrimaryAttenuation
          (IAudioMixerPlatformInterface *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  Type TVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> local_28;
  TArrayView<short,int> local_18;
  
  TVar1 = (this->OutputBuffer).DataFormat;
  if (TVar1 != Float) {
    if (TVar1 != Int16) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x23e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
    local_18.DataPtr = (short *)param_1->DataPtr;
    local_18.ArrayNum = (int)((ulonglong)(longlong)param_1->ArrayNum >> 1);
    if (local_18.ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ApplyAttenuationInternal<short>(this,&local_18);
    return;
  }
  local_28.DataPtr = (float *)param_1->DataPtr;
  local_28.ArrayNum = (int)((ulonglong)(longlong)param_1->ArrayNum >> 2);
  if (local_28.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ApplyAttenuationInternal<float>(this,&local_28);
  return;
}

// BeginGeneratingAudio @ 144526c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IAudioMixerPlatformInterface::BeginGeneratingAudio(IAudioMixerPlatformInterface *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FRunnableThread *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FEvent *pFVar8;
  ulong64 uVar9;
  FRunnableThread *pFVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  FString local_18;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"IAudioMixerPlatformInterface_BeginGeneratingAudio");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId663,"IAudioMixerPlatformInterface_BeginGeneratingAudio",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0x297);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId663);
  }
  if ((this->bIsGeneratingAudio != (FThreadSafeBool)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsGeneratingAudio",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x299,
                         L"BeginGeneratingAudio() is being run with StreamState = %i and bIsGeneratingAudio = %i"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  this->bIsGeneratingAudio = (FThreadSafeBool)0x1;
  UNLOCK();
  iVar1 = (this->OpenStreamParams).NumBuffers;
  iVar2 = (this->AudioStreamInfo).DeviceInfo.NumChannels;
  uVar3 = (this->OpenStreamParams).NumFrames;
  iVar7 = 2;
  if (2 < iVar1) {
    iVar7 = iVar1;
  }
  this->NumOutputBuffers = iVar7;
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  FOutputBuffer::Init(&this->OutputBuffer,(this->AudioStreamInfo).AudioMixer,iVar2 * uVar3,
                      this->NumOutputBuffers,(this->AudioStreamInfo).DeviceInfo.Format);
  LOCK();
  (this->AudioStreamInfo).StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x4;
  UNLOCK();
  if ((this->AudioRenderEvent != (FEvent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioRenderEvent == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x2ab,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->AudioRenderEvent = pFVar8;
  if ((pFVar8 == (FEvent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioRenderEvent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x2ad,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->AudioFadeEvent != (FEvent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioFadeEvent == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x2af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->AudioFadeEvent = pFVar8;
  if ((pFVar8 == (FEvent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioFadeEvent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x2b1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->AudioRenderThread).Ptr != (FRunnableThread *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AudioRenderThread.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x2b3,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = SetRenderThreadPriorityCVar;
  uVar9 = (ulong64)SetRenderThreadAffinityCVar;
  if (SetRenderThreadAffinityCVar < 1) {
    uVar9 = 0xffffffffffffffff;
  }
  LOCK();
  AudioMixerTaskCounter.Counter = AudioMixerTaskCounter.Counter + 1;
  UNLOCK();
  ::FString::PrintfImpl(&local_18,L"AudioMixerRenderThread(%d)");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar11.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar10 = FRunnableThread::Create((FRunnable *)this,(wchar_t *)FVar11.Data,0,iVar1,uVar9,None);
  pFVar4 = (this->AudioRenderThread).Ptr;
  if ((pFVar4 != pFVar10) &&
     ((this->AudioRenderThread).Ptr = pFVar10, pFVar4 != (FRunnableThread *)0x0)) {
    (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (((this->AudioRenderThread).Ptr == (FRunnableThread *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AudioRenderThread.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x2b6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// CheckAudioDeviceChange @ 144527020

bool __thiscall
Audio::IAudioMixerPlatformInterface::CheckAudioDeviceChange(IAudioMixerPlatformInterface *this)

{
  return false;
}

// CreateNullDeviceThread @ 1445272d0

void __thiscall
Audio::IAudioMixerPlatformInterface::CreateNullDeviceThread
          (IAudioMixerPlatformInterface *this,TFunction<void___cdecl(void)> *param_1,float param_2,
          bool param_3)

{
  FMixerNullCallback *pFVar1;
  FMixerNullCallback *pFVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  TFunction<void___cdecl(void)> local_58;
  
  pFVar1 = ::operator_new(0x70);
  pFVar2 = (FMixerNullCallback *)0x0;
  if (pFVar1 != (FMixerNullCallback *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_1;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar3 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar3)(puVar3,&local_58.field_0x10);
    }
    pFVar2 = FMixerNullCallback::FMixerNullCallback
                       (pFVar1,param_2,&local_58,TPri_TimeCritical,param_3);
  }
  pFVar1 = (this->NullDeviceCallback).Ptr;
  if ((pFVar1 != pFVar2) &&
     ((this->NullDeviceCallback).Ptr = pFVar2, pFVar1 != (FMixerNullCallback *)0x0)) {
    (**(code **)(*(longlong *)pFVar1 + 0x28))(pFVar1,1);
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// DisablePCMAudioCaching @ 1445273c0

bool __thiscall
Audio::IAudioMixerPlatformInterface::DisablePCMAudioCaching(IAudioMixerPlatformInterface *this)

{
  return true;
}

// FadeIn @ 144527520

void __thiscall Audio::IAudioMixerPlatformInterface::FadeIn(IAudioMixerPlatformInterface *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0xf8))();
  if (cVar1 != '\0') {
    (this->FadeParam).TargetValue = 1.0;
    (this->FadeParam).bIsInit = false;
    (this->FadeParam).StartingValue = 1.0;
    (this->FadeParam).CurrentValue = 1.0;
    (this->FadeParam).DeltaValue = 0.0;
  }
  LOCK();
  this->bPerformingFade = (FThreadSafeBool)0x1;
  UNLOCK();
  LOCK();
  this->bFadedOut = (FThreadSafeBool)0x0;
  UNLOCK();
  this->FadeVolume = 1.0;
  return;
}

// FadeOut @ 144527590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::IAudioMixerPlatformInterface::FadeOut(IAudioMixerPlatformInterface *this)

{
  FEvent *pFVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar2) && (cVar3 = (**(code **)(this->_padding_ + 0xf8))(this), cVar3 == '\0')) {
    if (this->bFadedOut != (FThreadSafeBool)0x0) {
      return;
    }
    if (this->FadeVolume == 0.0) {
      return;
    }
    LOCK();
    this->bPerformingFade = (FThreadSafeBool)0x1;
    UNLOCK();
    pFVar1 = this->AudioFadeEvent;
    if (((pFVar1 != (FEvent *)0x0) &&
        (cVar3 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,FadeoutTimeoutCVar,0), cVar3 == '\0'
        )) && (2 < (byte)LogAudioMixer._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      this->FadeVolume = 0.0;
      return;
    }
  }
  else {
    LOCK();
    this->bFadedOut = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  this->FadeVolume = 0.0;
  return;
}

// GetChannelTypeAtIndex @ 144527650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl Audio::IAudioMixerPlatformInterface::GetChannelTypeAtIndex(int param_1,Type *param_2)

{
  InitializeDefaultChannelOrder();
  if ((uint)param_1 < 8) {
    *param_2 = DefaultChannelOrder[param_1];
    return true;
  }
  return false;
}

// GetCurrentDeviceName @ 1445276a0

FString * __thiscall
Audio::IAudioMixerPlatformInterface::GetCurrentDeviceName
          (IAudioMixerPlatformInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->CurrentDeviceName);
  return __return_storage_ptr__;
}

// GetDefaultOutputDeviceIndex @ 1445276d0

bool __thiscall
Audio::IAudioMixerPlatformInterface::GetDefaultOutputDeviceIndex
          (IAudioMixerPlatformInterface *this,uint *param_1)

{
  *param_1 = 0;
  return true;
}

// GetDeviceInfoCache @ 144527700

IAudioPlatformDeviceInfoCache * __thiscall
Audio::IAudioMixerPlatformInterface::GetDeviceInfoCache(IAudioMixerPlatformInterface *this)

{
  return (IAudioPlatformDeviceInfoCache *)0x0;
}

// GetIndexForDevice @ 144527770

int __thiscall
Audio::IAudioMixerPlatformInterface::GetIndexForDevice
          (IAudioMixerPlatformInterface *this,FString *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str;
  uint uVar5;
  uint local_res8 [2];
  FString local_68;
  FString local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  byte local_28;
  
  uVar5 = 0;
  local_res8[0] = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x60))(this,local_res8);
  if ((cVar2 != '\0') && (local_res8[0] != 0)) {
    do {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = 0;
      ::FString::operator=(&local_68,L"Unknown");
      ::FString::operator=(&local_58,L"Unknown");
      uVar1 = local_30;
      local_30 = local_30 & 0xffffffff00000000;
      local_48 = 0;
      uStack_40 = 0;
      if ((longlong)uVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_38,0,(int *)((longlong)&local_30 + 4));
      }
      local_28 = local_28 & 0xfe;
      cVar2 = (**(code **)(this->_padding_ + 0x68))(this,uVar5);
      if (cVar2 != '\0') {
        if ((param_1->Data).ArrayNum == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) goto LAB_144527888;
        }
        sVar4 = wcslen(_Str);
        iVar3 = ::FString::Find(&local_68,_Str,(int)sVar4,IgnoreCase,FromStart,-1);
        if (iVar3 != -1) {
          if (local_38.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return uVar5;
          }
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          return uVar5;
        }
      }
LAB_144527888:
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  return -1;
}

// GetNumFrames @ 144527920

int __thiscall
Audio::IAudioMixerPlatformInterface::GetNumFrames(IAudioMixerPlatformInterface *this,int param_1)

{
  return param_1;
}

// GetNumOutputDevices @ 144527930

bool __thiscall
Audio::IAudioMixerPlatformInterface::GetNumOutputDevices
          (IAudioMixerPlatformInterface *this,uint *param_1)

{
  *param_1 = 1;
  return true;
}

// GetSingleThreadInterface @ 144527b20

FSingleThreadRunnable * __thiscall
Audio::IAudioMixerPlatformInterface::GetSingleThreadInterface(IAudioMixerPlatformInterface *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (IAudioMixerPlatformInterface *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// IsDeviceInfoValid @ 144528320

bool __thiscall
Audio::IAudioMixerPlatformInterface::IsDeviceInfoValid
          (IAudioMixerPlatformInterface *this,FAudioPlatformDeviceInfo *param_1)

{
  return false;
}

// IsNonRealtime @ 144528330

bool __thiscall
Audio::IAudioMixerPlatformInterface::IsNonRealtime(IAudioMixerPlatformInterface *this)

{
  return false;
}

// MainAudioDeviceRun @ 144528340

uint __thiscall
Audio::IAudioMixerPlatformInterface::MainAudioDeviceRun(IAudioMixerPlatformInterface *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144528343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x148))();
  return uVar1;
}

// MoveAudioStreamToNewAudioDevice @ 144528a10

bool __thiscall
Audio::IAudioMixerPlatformInterface::MoveAudioStreamToNewAudioDevice
          (IAudioMixerPlatformInterface *this,FString *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144528a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0xb0))();
  return (bool)uVar1;
}

// MoveAudioStreamToNewAudioDevice @ 144528a20

bool __thiscall
Audio::IAudioMixerPlatformInterface::MoveAudioStreamToNewAudioDevice
          (IAudioMixerPlatformInterface *this)

{
  return true;
}

// OnHardwareUpdate @ 144528a90

void __thiscall
Audio::IAudioMixerPlatformInterface::OnHardwareUpdate(IAudioMixerPlatformInterface *this)

{
  return;
}

// PostInitializeHardware @ 144528c40

void __thiscall
Audio::IAudioMixerPlatformInterface::PostInitializeHardware(IAudioMixerPlatformInterface *this)

{
  LOCK();
  this->bIsDeviceInitialized = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// ReadNextBuffer @ 144528c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IAudioMixerPlatformInterface::ReadNextBuffer(IAudioMixerPlatformInterface *this)

{
  Type TVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  FLLMScope local_res10 [2];
  int local_res18 [2];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_58;
  FMemScope local_50;
  TArrayView<unsigned_char_const_,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<short,int> local_28;
  
  FLLMScope::FLLMScope(local_res10,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_50,AudioMixer,true);
  if (AudioMixerDebugForceDroppedHardwareCallbackCVar == 0) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->DeviceSwapCriticalSection);
    if (BVar4 != 0) {
      if ((this->AudioStreamInfo).StreamState == (atomic<Audio::EAudioOutputStreamState::Type>)0x4)
      {
        local_res18[0] = 0;
        FOutputBuffer::PopBufferData(&this->OutputBuffer,&local_48,local_res18);
        if (local_res18[0] == local_48.ArrayNum) {
          if ((this->bWarnedBufferUnderrun != false) && (4 < (byte)LogAudioMixerDebug._0_1_)) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixerDebug)
            ;
          }
          CurrentUnderrunCount = 0;
          this->bWarnedBufferUnderrun = false;
        }
        else {
          UnderrunCount = UnderrunCount + 1;
          CurrentUnderrunCount = CurrentUnderrunCount + 1;
          if ((this->bWarnedBufferUnderrun == false) &&
             (QueryPerformanceCounter(&local_res20),
             MinTimeBetweenUnderrunWarningsMs <
             (float)((double)(local_res20.QuadPart - TimeLastWarningCycles) *
                     FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000))) {
            if (3 < (byte)LogAudioMixer._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
            }
            this->bWarnedBufferUnderrun = true;
            QueryPerformanceCounter(&local_58);
            TimeLastWarningCycles = local_58.QuadPart;
          }
        }
        TVar1 = (this->OutputBuffer).DataFormat;
        if (TVar1 == Float) {
          local_38.DataPtr = (float *)local_48.DataPtr;
          local_38.ArrayNum = (int)((ulonglong)(longlong)local_48.ArrayNum >> 2);
          if ((local_38.ArrayNum < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          ApplyAttenuationInternal<float>(this,&local_38);
        }
        else if (TVar1 == Int16) {
          local_28.DataPtr = (short *)local_48.DataPtr;
          local_28.ArrayNum = (int)((ulonglong)(longlong)local_48.ArrayNum >> 1);
          if ((local_28.ArrayNum < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          ApplyAttenuationInternal<short>(this,&local_28);
        }
        else {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                             ,0x23e,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (**(code **)(this->_padding_ + 0xd0))(this,local_48.DataPtr);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->DeviceSwapCriticalSection);
        if (this->AudioRenderEvent != (FEvent *)0x0) {
          (**(code **)(this->AudioRenderEvent->_padding_ + 0x10))();
        }
      }
      else {
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->DeviceSwapCriticalSection);
      }
    }
  }
  else if (0 < AudioMixerDebugForceDroppedHardwareCallbackCVar) {
    AudioMixerDebugForceDroppedHardwareCallbackCVar =
         AudioMixerDebugForceDroppedHardwareCallbackCVar + -1;
  }
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// RequestDeviceSwap @ 1445290e0

bool __thiscall
Audio::IAudioMixerPlatformInterface::RequestDeviceSwap
          (IAudioMixerPlatformInterface *this,FString *param_1,bool param_2,wchar_t *param_3)

{
  return false;
}

// ResumeContext @ 144529260

void __thiscall
Audio::IAudioMixerPlatformInterface::ResumeContext(IAudioMixerPlatformInterface *this)

{
  return;
}

// ResumePlaybackOnNewDevice @ 144529380

void __thiscall
Audio::IAudioMixerPlatformInterface::ResumePlaybackOnNewDevice(IAudioMixerPlatformInterface *this)

{
  return;
}

// Run @ 144529720

uint __thiscall Audio::IAudioMixerPlatformInterface::Run(IAudioMixerPlatformInterface *this)

{
  uint uVar1;
  uint uVar2;
  FLLMScope local_res8 [2];
  uint local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,AudioMixer,true);
  uVar1 = MXCSR;
  MXCSR = MXCSR | 0x8000;
  local_res10 = MXCSR;
  FMemory::SetupTLSCachesOnCurrentThread();
  uVar2 = (**(code **)(this->_padding_ + 0x148))(this);
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  local_res10 = uVar1;
  MXCSR = uVar1;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return uVar2;
}

// RunInternal @ 1445297c0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall Audio::IAudioMixerPlatformInterface::RunInternal(IAudioMixerPlatformInterface *this)

{
  atomic<Audio::EAudioOutputStreamState::Type> aVar1;
  FEvent *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  TArrayView<unsigned_char_const_,int> local_28 [2];
  
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  FOutputBuffer::PopBufferData(&this->OutputBuffer,local_28,(int *)&local_res8.QuadPart);
  (**(code **)(this->_padding_ + 0xd0))(this,local_28[0].DataPtr);
  FOutputBuffer::MixNextBuffer(&this->OutputBuffer);
  aVar1 = (this->AudioStreamInfo).StreamState;
  do {
    if (aVar1 == (atomic<Audio::EAudioOutputStreamState::Type>)0x3) {
      (**(code **)(((this->OpenStreamParams).AudioMixer)->_padding_ + 8))();
      LOCK();
      (this->AudioStreamInfo).StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x2;
      UNLOCK();
      return 0;
    }
    do {
      if (this->bIsDeviceInitialized == (FThreadSafeBool)0x0) break;
      bVar4 = FOutputBuffer::MixNextBuffer(&this->OutputBuffer);
    } while (bVar4);
    bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar4) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar6 = 5000;
      if ((uint)OverrunTimeoutCVar < 5000) {
        uVar6 = OverrunTimeoutCVar;
      }
      uVar7 = 500;
      if (500 < uVar6) {
        uVar7 = uVar6;
      }
    }
    QueryPerformanceCounter(&local_res8);
    pFVar2 = this->AudioRenderEvent;
    if ((pFVar2 != (FEvent *)0x0) &&
       (cVar5 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,uVar7,0), cVar5 == '\0')) {
      pcVar3 = *(code **)(this->_padding_ + 0xc0);
      ::FString::FString((FString *)local_28,L"");
      (*pcVar3)(this,local_28,1,L"AudioMixerPlatformInterface. Timeout waiting for h/w.");
      if (local_28[0].DataPtr != (uchar *)0x0) {
        FMemory::Free(local_28[0].DataPtr);
      }
      QueryPerformanceCounter(&local_res10);
      if (2 < (byte)LogAudioMixer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      }
    }
    aVar1 = (this->AudioStreamInfo).StreamState;
  } while( true );
}

// ShouldUseDeviceInfoCache @ 1445299e0

bool __thiscall
Audio::IAudioMixerPlatformInterface::ShouldUseDeviceInfoCache(IAudioMixerPlatformInterface *this)

{
  return false;
}

// StartRunningNullDevice @ 144529a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IAudioMixerPlatformInterface::StartRunningNullDevice(IAudioMixerPlatformInterface *this)

{
  code *pcVar1;
  FFunctionStorage *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  FMixerNullCallback *pFVar6;
  FMixerNullCallback *pFVar7;
  undefined ***pppuVar8;
  FFunctionStorage *pFVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  undefined **local_e8;
  IAudioMixerPlatformInterface *local_e0;
  undefined ***local_d0;
  code *local_c8 [2];
  undefined1 local_b8 [24];
  undefined8 local_a0;
  code *local_98;
  undefined8 uStack_90;
  FFunctionStorage local_88;
  code *local_68;
  undefined **local_58;
  IAudioMixerPlatformInterface *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"IAudioMixerPlatformInterface_StartRunningNullDevice");
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId508,"IAudioMixerPlatformInterface_StartRunningNullDevice",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0x1fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId508);
  }
  fVar11 = (float)(this->OpenStreamParams).SampleRate;
  if (fVar11 <= 0.0) {
    fVar11 = __real_473b8000;
  }
  fVar11 = (float)(this->OpenStreamParams).NumFrames / fVar11;
  if (this->AudioRenderEvent != (FEvent *)0x0) {
    (**(code **)(this->AudioRenderEvent->_padding_ + 0x10))();
  }
  pFVar6 = (this->NullDeviceCallback).Ptr;
  pFVar7 = (FMixerNullCallback *)0x0;
  if (pFVar6 == (FMixerNullCallback *)0x0) {
    local_e8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_d0 = (undefined ***)0x0;
    local_e0 = this;
    pFVar6 = ::operator_new(0x70);
    if (pFVar6 != (FMixerNullCallback *)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::__l2::<lambda_1>,void>
                    ::Call;
      local_a0 = 0;
      pppuVar8 = &local_e8;
      if (local_d0 != (undefined ***)0x0) {
        pppuVar8 = local_d0;
      }
      (*(code *)**pppuVar8)(pppuVar8,local_b8);
      pFVar7 = FMixerNullCallback::FMixerNullCallback
                         (pFVar6,fVar11,(TFunction<void___cdecl(void)> *)local_c8,TPri_TimeCritical,
                          false);
    }
    pFVar6 = (this->NullDeviceCallback).Ptr;
    if ((pFVar6 != pFVar7) &&
       ((this->NullDeviceCallback).Ptr = pFVar7, pFVar6 != (FMixerNullCallback *)0x0)) {
      (**(code **)(*(longlong *)pFVar6 + 0x28))(pFVar6,1);
    }
    pppuVar8 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar8 = local_d0;
    }
    (*(code *)(*pppuVar8)[2])();
    if (((this->NullDeviceCallback).Ptr == (FMixerNullCallback *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NullDeviceCallback.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                           ,0x20b,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::__l2::<lambda_1>,void>
               ::Call;
    local_40 = (undefined ***)0x0;
    local_50 = this;
    if (pFVar6->WakeupEvent != (FEvent *)0x0) {
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::__l2::<lambda_1>,void>
                 ::Call;
      local_88.HeapAllocation = (void *)0x0;
      UE::Core::Private::Function::
      TFunction_OwnedObject<`Audio::IAudioMixerPlatformInterface::StartRunningNullDevice'::__l2::<lambda_1>,0,0>
      ::CloneToEmptyStorage(&local_58,&local_88);
      lVar3 = *(longlong *)&pFVar6->Callback;
      uVar4 = *(undefined8 *)&(pFVar6->Callback).field_0x8;
      pFVar2 = *(FFunctionStorage **)&(pFVar6->Callback).field_0x28;
      *(code **)&pFVar6->Callback = local_98;
      *(undefined8 *)&(pFVar6->Callback).field_0x8 = uStack_90;
      (pFVar6->Callback).field_0x10 = local_88.InlineAllocation[0];
      (pFVar6->Callback).field_0x11 = local_88.InlineAllocation[1];
      (pFVar6->Callback).field_0x12 = local_88.InlineAllocation[2];
      (pFVar6->Callback).field_0x13 = local_88.InlineAllocation[3];
      (pFVar6->Callback).field_0x14 = local_88.InlineAllocation[4];
      (pFVar6->Callback).field_0x15 = local_88.InlineAllocation[5];
      (pFVar6->Callback).field_0x16 = local_88.InlineAllocation[6];
      (pFVar6->Callback).field_0x17 = local_88.InlineAllocation[7];
      (pFVar6->Callback).field_0x18 = local_88.InlineAllocation[8];
      (pFVar6->Callback).field_0x19 = local_88.InlineAllocation[9];
      (pFVar6->Callback).field_0x1a = local_88.InlineAllocation[10];
      (pFVar6->Callback).field_0x1b = local_88.InlineAllocation[0xb];
      (pFVar6->Callback).field_0x1c = local_88.InlineAllocation[0xc];
      (pFVar6->Callback).field_0x1d = local_88.InlineAllocation[0xd];
      (pFVar6->Callback).field_0x1e = local_88.InlineAllocation[0xe];
      (pFVar6->Callback).field_0x1f = local_88.InlineAllocation[0xf];
      (pFVar6->Callback).field_0x20 = local_88.InlineAllocation[0x10];
      (pFVar6->Callback).field_0x21 = local_88.InlineAllocation[0x11];
      (pFVar6->Callback).field_0x22 = local_88.InlineAllocation[0x12];
      (pFVar6->Callback).field_0x23 = local_88.InlineAllocation[0x13];
      (pFVar6->Callback).field_0x24 = local_88.InlineAllocation[0x14];
      (pFVar6->Callback).field_0x25 = local_88.InlineAllocation[0x15];
      (pFVar6->Callback).field_0x26 = local_88.InlineAllocation[0x16];
      (pFVar6->Callback).field_0x27 = local_88.InlineAllocation[0x17];
      *(undefined4 *)&(pFVar6->Callback).field_0x28 = local_88.HeapAllocation._0_4_;
      *(undefined4 *)&(pFVar6->Callback).field_0x2c = local_88.HeapAllocation._4_4_;
      local_98 = (code *)lVar3;
      uStack_90 = uVar4;
      local_88.InlineAllocation[0] = (pFVar6->Callback).field_0x10;
      local_88.InlineAllocation[1] = (pFVar6->Callback).field_0x11;
      local_88.InlineAllocation[2] = (pFVar6->Callback).field_0x12;
      local_88.InlineAllocation[3] = (pFVar6->Callback).field_0x13;
      local_88.InlineAllocation[4] = (pFVar6->Callback).field_0x14;
      local_88.InlineAllocation[5] = (pFVar6->Callback).field_0x15;
      local_88.InlineAllocation[6] = (pFVar6->Callback).field_0x16;
      local_88.InlineAllocation[7] = (pFVar6->Callback).field_0x17;
      local_88.InlineAllocation[8] = (pFVar6->Callback).field_0x18;
      local_88.InlineAllocation[9] = (pFVar6->Callback).field_0x19;
      local_88.InlineAllocation[10] = (pFVar6->Callback).field_0x1a;
      local_88.InlineAllocation[0xb] = (pFVar6->Callback).field_0x1b;
      local_88.InlineAllocation[0xc] = (pFVar6->Callback).field_0x1c;
      local_88.InlineAllocation[0xd] = (pFVar6->Callback).field_0x1d;
      local_88.InlineAllocation[0xe] = (pFVar6->Callback).field_0x1e;
      local_88.InlineAllocation[0xf] = (pFVar6->Callback).field_0x1f;
      local_88.InlineAllocation[0x10] = (pFVar6->Callback).field_0x20;
      local_88.InlineAllocation[0x11] = (pFVar6->Callback).field_0x21;
      local_88.InlineAllocation[0x12] = (pFVar6->Callback).field_0x22;
      local_88.InlineAllocation[0x13] = (pFVar6->Callback).field_0x23;
      local_88.InlineAllocation[0x14] = (pFVar6->Callback).field_0x24;
      local_88.InlineAllocation[0x15] = (pFVar6->Callback).field_0x25;
      local_88.InlineAllocation[0x16] = (pFVar6->Callback).field_0x26;
      local_88.InlineAllocation[0x17] = (pFVar6->Callback).field_0x27;
      local_88.HeapAllocation = pFVar2;
      if (lVar3 != 0) {
        pFVar9 = &local_88;
        if (pFVar2 != (FFunctionStorage *)0x0) {
          pFVar9 = pFVar2;
        }
        (**(code **)(*(longlong *)pFVar9->InlineAllocation + 0x10))();
      }
      pFVar6->CallbackTime = fVar11;
      LOCK();
      pFVar6->bShouldRecyle = (atomic<bool>)0x0;
      UNLOCK();
      (**(code **)(pFVar6->WakeupEvent->_padding_ + 0x10))();
    }
    if (local_68 != (code *)0x0) {
      pppuVar8 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar8 = local_40;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  LOCK();
  this->bIsUsingNullDevice = (FThreadSafeBool)0x1;
  UNLOCK();
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// StopGeneratingAudio @ 144529e60

void __thiscall
Audio::IAudioMixerPlatformInterface::StopGeneratingAudio(IAudioMixerPlatformInterface *this)

{
  FRunnableThread *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"IAudioMixerPlatformInterface_StopGeneratingAudio");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId699,"IAudioMixerPlatformInterface_StopGeneratingAudio",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,699);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId699);
  }
  if ((this->AudioStreamInfo).StreamState != (atomic<Audio::EAudioOutputStreamState::Type>)0x2) {
    LOCK();
    (this->AudioStreamInfo).StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x3;
    UNLOCK();
  }
  if (this->AudioRenderEvent != (FEvent *)0x0) {
    (**(code **)(this->AudioRenderEvent->_padding_ + 0x10))();
  }
  if ((this->AudioRenderThread).Ptr != (FRunnableThread *)0x0) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Blue,"IAudioMixerPlatformInterface_StopGeneratingAudio_KillRenderThread");
    if (CpuChannel->Enabled < 0) {
      pFVar1 = (this->AudioRenderThread).Ptr;
      (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId717,
                 "IAudioMixerPlatformInterface_StopGeneratingAudio_KillRenderThread",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                 ,0x2cd);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId717);
      pFVar1 = (this->AudioRenderThread).Ptr;
      (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    bVar3 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar3) {
      if (((this->AudioStreamInfo).StreamState != (atomic<Audio::EAudioOutputStreamState::Type>)0x2)
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("AudioStreamInfo.StreamState == EAudioOutputStreamState::Stopped",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                                ,0x2d4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      LOCK();
      (this->AudioStreamInfo).StreamState = (atomic<Audio::EAudioOutputStreamState::Type>)0x2;
      UNLOCK();
    }
    pFVar1 = (this->AudioRenderThread).Ptr;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (this->AudioRenderThread).Ptr = (FRunnableThread *)0x0;
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
  }
  if (this->AudioRenderEvent != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AudioRenderEvent);
    this->AudioRenderEvent = (FEvent *)0x0;
  }
  if (this->AudioFadeEvent != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AudioFadeEvent);
    this->AudioFadeEvent = (FEvent *)0x0;
  }
  LOCK();
  this->bIsGeneratingAudio = (FThreadSafeBool)0x0;
  UNLOCK();
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// StopRunningNullDevice @ 14452a030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IAudioMixerPlatformInterface::StopRunningNullDevice(IAudioMixerPlatformInterface *this)

{
  atomic<bool> aVar1;
  FMixerNullCallback *pFVar2;
  FEvent *pFVar3;
  bool bVar4;
  
  if (3 < (byte)LogAudioMixer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
  }
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"IAudioMixerPlatformInterface_StopRunningNullDevice");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId537,"IAudioMixerPlatformInterface_StopRunningNullDevice",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0x219);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId537);
  }
  pFVar2 = (this->NullDeviceCallback).Ptr;
  if (pFVar2 != (FMixerNullCallback *)0x0) {
    if (bRecycleThreadsCVar == 0) {
      (this->NullDeviceCallback).Ptr = (FMixerNullCallback *)0x0;
      (**(code **)(*(longlong *)pFVar2 + 0x28))();
    }
    else {
      LOCK();
      aVar1 = pFVar2->bShouldRecyle;
      pFVar2->bShouldRecyle = (atomic<bool>)0x1;
      UNLOCK();
      pFVar3 = pFVar2->SleepEvent;
      if (pFVar3 != (FEvent *)0x0) {
        (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,aVar1);
      }
    }
    LOCK();
    this->bIsUsingNullDevice = (FThreadSafeBool)0x0;
    UNLOCK();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// SubmitBuffer @ 14452a130

void __thiscall
Audio::IAudioMixerPlatformInterface::SubmitBuffer(IAudioMixerPlatformInterface *this,uchar *param_1)

{
  return;
}

// SubmitDirectOutBuffer @ 14452a140

void __thiscall
Audio::IAudioMixerPlatformInterface::SubmitDirectOutBuffer
          (IAudioMixerPlatformInterface *this,int param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  return;
}

// SupportsHardwareDecompression @ 14452a150

bool __thiscall
Audio::IAudioMixerPlatformInterface::SupportsHardwareDecompression
          (IAudioMixerPlatformInterface *this)

{
  return false;
}

// SuspendContext @ 14452a160

void __thiscall
Audio::IAudioMixerPlatformInterface::SuspendContext(IAudioMixerPlatformInterface *this)

{
  return;
}

// Tick @ 14452a170

void __thiscall Audio::IAudioMixerPlatformInterface::Tick(IAudioMixerPlatformInterface *this)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AudioMixer,true);
  if ((*(int *)&(this->AudioStreamInfo).DeviceInfo.field_0x40 == 4) &&
     (this->bPerformingFade != (FThreadSafeBool)0x0)) {
    do {
      bVar1 = FOutputBuffer::MixNextBuffer
                        ((FOutputBuffer *)&(this->OpenStreamParams).AudioDeviceId.Data.ArrayNum);
    } while (bVar1);
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

