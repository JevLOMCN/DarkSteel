// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 1

// AudioMixerPlatformLogOnce @ 148d3c3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce
          (IAudioMixerPlatformInterface *this,FString *param_1,FString *param_2,int param_3,
          Type param_4)

{
  ForAnyElementType FVar1;
  undefined **ppuVar2;
  int *piVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint local_38;
  uint local_34;
  FString local_30;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                ::__l2::Cs,4000);
    atexit(`Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce'::__l2::
           _dynamic_atexit_destructor_for__Cs__);
    _Init_thread_footer(&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    atexit(`Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce'::__l2::
           _dynamic_atexit_destructor_for__LogHistory__);
    _Init_thread_footer(&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
              ::__l2::Cs);
  ::FString::PrintfImpl(&local_30,L"Audio Platform Device: %s (File %s, Line %d)");
  if ((byte)(param_4 - Fatal) < 2) {
    iVar4 = local_30.Data.ArrayNum + -1;
    if (local_30.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&this->LastError,(wchar_t *)local_30.Data.AllocatorInstance.Data,iVar4);
  }
  iVar4 = local_30.Data.ArrayNum + -1;
  FVar1.Data = local_30.Data.AllocatorInstance.Data;
  if (local_30.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  local_38 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
  if (`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
      ::__l2::LogHistory.Elements._8_4_ !=
      `protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
      ::__l2::LogHistory.Elements._52_4_) {
    FVar5 = (ForElementType<FSetElementId>)0x154c76028;
    if (`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
        ::__l2::LogHistory.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar5 = `protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
              ::__l2::LogHistory.Hash.SecondaryData;
    }
    for (iVar4 = *(int *)((longlong)FVar5 +
                         (ulonglong)
                         (`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                          ::__l2::LogHistory.HashSize - 1U & local_38) * 4); iVar4 != -1;
        iVar4 = *(int *)(`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                         ::__l2::LogHistory.Elements._0_8_ + 4 + (longlong)iVar4 * 0xc)) {
      if (*(uint *)(`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                    ::__l2::LogHistory.Elements._0_8_ + (longlong)iVar4 * 0xc) == local_38)
      goto LAB_148d3c673;
    }
  }
  switch(param_4) {
  case Fatal:
    UE::Logging::Private::BasicFatalLog
              (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                ::__l11::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    break;
  case Error:
    if ((byte)LogAudioMixer._0_1_ < 2) break;
    ppuVar2 = (undefined **)
              &`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
               ::__l29::LOG_Static;
    goto LAB_148d3c645;
  case Warning:
    if (2 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                  ::__l47::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    break;
  case Display:
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                  ::__l65::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    break;
  case Log:
    if (4 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                  ::__l83::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    break;
  case Verbose:
    if (5 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                  ::__l101::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    break;
  case All:
    if (6 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
                  ::__l119::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    break;
  default:
    if ((byte)LogAudioMixer._0_1_ < 2) break;
    ppuVar2 = &`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
               ::J::LOG_Static;
LAB_148d3c645:
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)ppuVar2,(FLogCategoryBase *)&LogAudioMixer);
  }
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>
            (&`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
              ::__l2::LogHistory,&local_34,(bool *)&local_38);
LAB_148d3c673:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &`protected:_void___cdecl_Audio::IAudioMixerPlatformInterface::AudioMixerPlatformLogOnce(FString_const&___ptr64,FString_const&___ptr64,int,ELogVerbosity::Type)___ptr64'
              ::__l2::Cs);
  return;
}

