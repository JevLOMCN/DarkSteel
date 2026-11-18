// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 2

// StartupModule @ 14d0c2240

void __thiscall Audio::FAudioCaptureRtAudioModule::StartupModule(FAudioCaptureRtAudioModule *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  FAudioCaptureRtAudioModule *pFVar2;
  
  pIVar1 = IModularFeatures::Get();
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  pFVar2 = this + 1;
  if (this == (FAudioCaptureRtAudioModule *)&DAT_fffffffffffffff8) {
    pFVar2 = (FAudioCaptureRtAudioModule *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x00014d0c22b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                    ::__l2::AudioCaptureFeatureName,pFVar2);
  return;
}

// ShutdownModule @ 14d0c2300

void __thiscall Audio::FAudioCaptureRtAudioModule::ShutdownModule(FAudioCaptureRtAudioModule *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  FAudioCaptureRtAudioModule *pFVar2;
  
  pIVar1 = IModularFeatures::Get();
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x30);
  pFVar2 = this + 1;
  if (this == (FAudioCaptureRtAudioModule *)&DAT_fffffffffffffff8) {
    pFVar2 = (FAudioCaptureRtAudioModule *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x00014d0c2374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_Audio::IAudioCaptureFactory::GetModularFeatureName(void)'
                    ::__l2::AudioCaptureFeatureName,pFVar2);
  return;
}

