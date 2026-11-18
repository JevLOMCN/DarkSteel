// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 2

// StartupModule @ 14d0bd230

void __thiscall Audio::FAudioCaptureWasapiModule::StartupModule(FAudioCaptureWasapiModule *this)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  IModularFeatures *pIVar2;
  FAudioCaptureWasapiModule *pFVar3;
  
  bVar1 = FWindowsPlatformMisc::CoInitialize(Singlethreaded);
  this->bCoInitialized = bVar1;
  pIVar2 = IModularFeatures::Get();
  pFVar3 = this + 1;
  if (this == (FAudioCaptureWasapiModule *)0xfffffffffffffff0) {
    pFVar3 = (FAudioCaptureWasapiModule *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar2 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                      ::__l2::AudioCaptureFeatureName,L"AudioCaptureStream");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d0bd2ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar2,`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                    ::__l2::AudioCaptureFeatureName,pFVar3);
  return;
}

// ShutdownModule @ 14d0bd2f0

void __thiscall Audio::FAudioCaptureWasapiModule::ShutdownModule(FAudioCaptureWasapiModule *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  FAudioCaptureWasapiModule *pFVar3;
  
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  pFVar3 = this + 1;
  if (this == (FAudioCaptureWasapiModule *)0xfffffffffffffff0) {
    pFVar3 = (FAudioCaptureWasapiModule *)0x0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                      ::__l2::AudioCaptureFeatureName,L"AudioCaptureStream");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                   ::__l2::AudioCaptureFeatureName,pFVar3);
  if (this->bCoInitialized != false) {
    FWindowsPlatformMisc::CoUninitialize();
  }
  return;
}

