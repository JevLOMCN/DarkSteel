// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureCore
// Functions: 18

// FAudioCapture @ 14d0bbcd0

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioCapture * __thiscall Audio::FAudioCapture::FAudioCapture(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  code *pcVar2;
  bool bVar3;
  IModularFeatures *pIVar4;
  FAudioCapture *pFVar5;
  wchar_t *pwVar6;
  int *piVar7;
  FAudioCapture local_28;
  TArray<Audio::IAudioCaptureFactory_*,TSizedDefaultAllocator<32>_> local_20;
  
  (this->Impl).Ptr = (IAudioCaptureStream *)0x0;
  pIVar4 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4);
  pIVar4 = IModularFeatures::Get();
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < `public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                    ::__l2::AudioCaptureFeatureName,L"AudioCaptureStream");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<Audio::IAudioCaptureFactory>
            (pIVar4,&local_20,
             `public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
             ::__l2::AudioCaptureFeatureName);
  pIVar4 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  if ((0 < local_20.ArrayNum) && (*(longlong *)local_20.AllocatorInstance.Data != 0)) {
    if ((*piVar7 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                   _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      pwVar6 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar6,L"nosound");
      if (bVar3) {
        pwVar6 = FCommandLine::Get();
        bVar3 = FParse::Param(pwVar6,L"enablesound");
        if (bVar3) goto LAB_14d0bbf36;
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
             = true;
      }
      else {
LAB_14d0bbf36:
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
             = false;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if ((*piVar7 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                   _thread_safe_static_guard_1__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                             _thread_safe_static_guard_1__),
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__ == -1)) {
      if ((FApp::bIsBenchmarking == false) &&
         ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = false;
      }
      else {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = true;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__);
    }
    if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
         bApplicationTypeDoesNotRenderAudio == false) &&
       (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
        == false)) {
      if ((local_20.ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FAudioCapture *)(*pcVar2)();
        return pFVar5;
      }
      (**(code **)(**(longlong **)local_20.AllocatorInstance.Data + 8))
                (*(longlong **)local_20.AllocatorInstance.Data,&local_28);
      goto joined_r0x00014d0bbe35;
    }
  }
  if (3 < (byte)LogAudioCaptureCore._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`private:_class_TUniquePtr<Audio::IAudioCaptureStream,TDefaultDelete<Audio::IAudioCaptureStream>_>___cdecl_Audio::FAudioCapture::CreateImpl(void)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAudioCaptureCore);
  }
  local_28.Impl.Ptr =
       (TUniquePtr<Audio::IAudioCaptureStream,TDefaultDelete<Audio::IAudioCaptureStream>_>)
       ::operator_new(8);
  if (local_28.Impl.Ptr != (IAudioCaptureStream *)0x0) {
    *(undefined ***)local_28.Impl.Ptr = &___7FNullAudioCaptureDevice_Audio__6B_;
  }
joined_r0x00014d0bbe35:
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  if (this != &local_28) {
    pIVar1 = (this->Impl).Ptr;
    (this->Impl).Ptr = (IAudioCaptureStream *)local_28;
    local_28.Impl.Ptr =
         (TUniquePtr<Audio::IAudioCaptureStream,TDefaultDelete<Audio::IAudioCaptureStream>_>)
         (IAudioCaptureStream *)0x0;
    if (pIVar1 != (IAudioCaptureStream *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
  }
  if (local_28.Impl.Ptr != (IAudioCaptureStream *)0x0) {
    (**(code **)*(IAudioCaptureStream *)local_28.Impl.Ptr)(local_28.Impl.Ptr,1);
  }
  return this;
}

// ~FAudioCapture @ 14d0bc060

void __thiscall Audio::FAudioCapture::~FAudioCapture(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// AbortStream @ 14d0bc490

bool __thiscall Audio::FAudioCapture::AbortStream(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc49b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x48))();
    return (bool)uVar2;
  }
  return false;
}

// CloseStream @ 14d0bc5e0

bool __thiscall Audio::FAudioCapture::CloseStream(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x30))();
    return (bool)uVar2;
  }
  return false;
}

// GetCaptureDeviceInfo @ 14d0bc770

bool __thiscall
Audio::FAudioCapture::GetCaptureDeviceInfo
          (FAudioCapture *this,FCaptureDeviceInfo *param_1,int param_2)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc77b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x18))();
    return (bool)uVar2;
  }
  return false;
}

// GetCaptureDevicesAvailable @ 14d0bc7a0

int __thiscall
Audio::FAudioCapture::GetCaptureDevicesAvailable
          (FAudioCapture *this,
          TArray<Audio::FCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  IAudioCaptureStream *pIVar1;
  byte bVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
    bVar2 = (**(code **)((longlong)*pIVar1 + 0x78))();
    return (int)bVar2;
  }
  return 0;
}

// GetIfHardwareFeatureIsSupported @ 14d0bc7f0

bool __thiscall
Audio::FAudioCapture::GetIfHardwareFeatureIsSupported
          (FAudioCapture *this,EHardwareInputFeature param_1)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc7fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x80))();
    return (bool)uVar2;
  }
  return false;
}

// GetSampleRate @ 14d0bc880

int __thiscall Audio::FAudioCapture::GetSampleRate(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  int iVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc88b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x58))();
    return iVar2;
  }
  return 0;
}

// GetStreamTime @ 14d0bc8b0

bool __thiscall Audio::FAudioCapture::GetStreamTime(FAudioCapture *this,double *param_1)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x50))();
    return (bool)uVar2;
  }
  return false;
}

// IsCapturing @ 14d0bc910

bool __thiscall Audio::FAudioCapture::IsCapturing(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc91b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x68))();
    return (bool)uVar2;
  }
  return false;
}

// IsStreamOpen @ 14d0bc950

bool __thiscall Audio::FAudioCapture::IsStreamOpen(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bc95b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x60))();
    return (bool)uVar2;
  }
  return false;
}

// OpenAudioCaptureStream @ 14d0bc9b0

bool __thiscall
Audio::FAudioCapture::OpenAudioCaptureStream
          (FAudioCapture *this,FAudioCaptureDeviceParams *param_1,
          TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *param_2,uint param_3)

{
  IAudioCaptureStream *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
    local_48[0] = *(longlong *)param_2;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
    local_20 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_28 = *(undefined8 *)&param_2->field_0x20;
    local_38 = *(undefined4 *)&param_2->field_0x10;
    uStack_34 = *(undefined4 *)&param_2->field_0x14;
    uStack_30 = *(undefined4 *)&param_2->field_0x18;
    uStack_2c = *(undefined4 *)&param_2->field_0x1c;
    if (local_48[0] != 0) {
      *(undefined8 *)param_2 = 0;
    }
    uVar3 = (*pcVar2)(pIVar1,local_28,local_48);
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    return (bool)uVar3;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return false;
}

// OpenCaptureStream @ 14d0bcaa0

bool __thiscall
Audio::FAudioCapture::OpenCaptureStream
          (FAudioCapture *this,FAudioCaptureDeviceParams *param_1,
          TFunction<void___cdecl(float_const_*,int,int,int,double,bool)> *param_2,uint param_3)

{
  IAudioCaptureStream *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
    local_48[0] = *(longlong *)param_2;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
    local_20 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_28 = *(undefined8 *)&param_2->field_0x20;
    local_38 = *(undefined4 *)&param_2->field_0x10;
    uStack_34 = *(undefined4 *)&param_2->field_0x14;
    uStack_30 = *(undefined4 *)&param_2->field_0x18;
    uStack_2c = *(undefined4 *)&param_2->field_0x1c;
    if (local_48[0] != 0) {
      *(undefined8 *)param_2 = 0;
    }
    uVar3 = (*pcVar2)(pIVar1,local_28,local_48);
    if (*(longlong *)param_2 != 0) {
      plVar4 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    return (bool)uVar3;
  }
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return false;
}

// RegisterUser @ 14d0bcec0

bool __thiscall Audio::FAudioCapture::RegisterUser(FAudioCapture *this,wchar_t *param_1)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bcecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 8))();
    return (bool)uVar2;
  }
  return false;
}

// SetHardwareFeatureEnabled @ 14d0bcef0

void __thiscall
Audio::FAudioCapture::SetHardwareFeatureEnabled
          (FAudioCapture *this,EHardwareInputFeature param_1,bool param_2)

{
  IAudioCaptureStream *pIVar1;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bcefb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x88))();
    return;
  }
  return;
}

// StartStream @ 14d0bcfe0

bool __thiscall Audio::FAudioCapture::StartStream(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bcfeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x38))();
    return (bool)uVar2;
  }
  return false;
}

// StopStream @ 14d0bd0d0

bool __thiscall Audio::FAudioCapture::StopStream(FAudioCapture *this)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bd0db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x40))();
    return (bool)uVar2;
  }
  return false;
}

// UnregisterUser @ 14d0bd100

bool __thiscall Audio::FAudioCapture::UnregisterUser(FAudioCapture *this,wchar_t *param_1)

{
  IAudioCaptureStream *pIVar1;
  undefined1 uVar2;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (IAudioCaptureStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0bd10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x10))();
    return (bool)uVar2;
  }
  return false;
}

