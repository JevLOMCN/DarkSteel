// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 2

// StartupModule @ 14d7ec1d0

void __thiscall Audio::FAudioSynesthesiaCoreModule::StartupModule(FAudioSynesthesiaCoreModule *this)

{
  code *pcVar1;
  FModuleManager *this_00;
  FName *pFVar2;
  IModularFeatures *pIVar3;
  FAudioSynesthesiaCoreModule *pFVar4;
  int *piVar5;
  FAudioSynesthesiaCoreModule *pFVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FName local_res18;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::StartupModule(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::StartupModule(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::StartupModule(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::StartupModule(void)___ptr64'
                      ::__l2::LLMScope_Name27,L"Audio/AudioAnalysis");
      _Init_thread_footer(&`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::StartupModule(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::StartupModule(void)___ptr64'
             ::__l2::LLMScope_Name27,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::StartupModule(void)___ptr64'
              ::__l2::LLMScope_Name27,true);
  this_00 = FModuleManager::Get();
  pFVar2 = ::FName::FName(&local_res18,L"SignalProcessing");
  FModuleManager::LoadModuleChecked(this_00,*pFVar2);
  pIVar3 = IModularFeatures::Get();
  pFVar6 = (FAudioSynesthesiaCoreModule *)0x0;
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->LKFSNRTFactory;
  if (this == (FAudioSynesthesiaCoreModule *)&DAT_fffffffffffffff8) {
    pFVar4 = pFVar6;
  }
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar3 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->ConstantQNRTFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xfffffffffffffff0) {
    pFVar4 = pFVar6;
  }
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar3 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->OnsetNRTFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffe8) {
    pFVar4 = pFVar6;
  }
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar3 = IModularFeatures::Get();
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->LoudnessFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffe0) {
    pFVar4 = pFVar6;
  }
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar3 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->ConstantQFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffd8) {
    pFVar4 = pFVar6;
  }
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar3 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->MeterFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffd0) {
    pFVar4 = pFVar6;
  }
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar3 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->LKFSFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffc8) {
    pFVar4 = pFVar6;
  }
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar3 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->SpectralAnalysisFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffc0) {
    pFVar4 = pFVar6;
  }
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar3 = IModularFeatures::Get();
  pFVar4 = this + 1;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffb8) {
    pFVar4 = pFVar6;
  }
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x28);
  if (*piVar5 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar3,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ShutdownModule @ 14d7ec710

void __thiscall
Audio::FAudioSynesthesiaCoreModule::ShutdownModule(FAudioSynesthesiaCoreModule *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  int *piVar3;
  FAudioSynesthesiaCoreModule *pFVar4;
  FAudioSynesthesiaCoreModule *pFVar5;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < `public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::ShutdownModule(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::ShutdownModule(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::ShutdownModule(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::ShutdownModule(void)___ptr64'
                      ::__l2::LLMScope_Name45,L"Audio/AudioAnalysis");
      _Init_thread_footer(&`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::ShutdownModule(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::ShutdownModule(void)___ptr64'
             ::__l2::LLMScope_Name45,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_virtual_void___cdecl_Audio::FAudioSynesthesiaCoreModule::ShutdownModule(void)___ptr64'
              ::__l2::LLMScope_Name45,true);
  pIVar2 = IModularFeatures::Get();
  pFVar5 = (FAudioSynesthesiaCoreModule *)0x0;
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->LKFSNRTFactory;
  if (this == (FAudioSynesthesiaCoreModule *)&DAT_fffffffffffffff8) {
    pFVar4 = pFVar5;
  }
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->ConstantQNRTFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xfffffffffffffff0) {
    pFVar4 = pFVar5;
  }
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->OnsetNRTFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffe8) {
    pFVar4 = pFVar5;
  }
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->LoudnessFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffe0) {
    pFVar4 = pFVar5;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->ConstantQFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffd8) {
    pFVar4 = pFVar5;
  }
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->MeterFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffd0) {
    pFVar4 = pFVar5;
  }
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->LKFSFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffc8) {
    pFVar4 = pFVar5;
  }
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  pFVar4 = (FAudioSynesthesiaCoreModule *)&this->SpectralAnalysisFactory;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffc0) {
    pFVar4 = pFVar5;
  }
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pFVar4 = this + 1;
  if (this == (FAudioSynesthesiaCoreModule *)0xffffffffffffffb8) {
    pFVar4 = pFVar5;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*piVar3 < `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                      ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                   ::__l2::AudioExtFeatureName,pFVar4);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

