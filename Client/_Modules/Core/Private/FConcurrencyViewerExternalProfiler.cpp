// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FrameSync @ 14197d080

void __thiscall
FConcurrencyViewerExternalProfiler::FrameSync(FConcurrencyViewerExternalProfiler *this)

{
  return;
}

// GetProfilerName @ 14197d090

wchar_t * __thiscall
FConcurrencyViewerExternalProfiler::GetProfilerName(FConcurrencyViewerExternalProfiler *this)

{
  return L"ConcurrencyViewer";
}

// ProfilerPauseFunction @ 14197d0a0

void __thiscall
FConcurrencyViewerExternalProfiler::ProfilerPauseFunction(FConcurrencyViewerExternalProfiler *this)

{
  return;
}

// ProfilerResumeFunction @ 14197d0b0

void __thiscall
FConcurrencyViewerExternalProfiler::ProfilerResumeFunction(FConcurrencyViewerExternalProfiler *this)

{
  return;
}

// StartScopedEvent @ 14197d0c0

void __thiscall
FConcurrencyViewerExternalProfiler::StartScopedEvent
          (FConcurrencyViewerExternalProfiler *this,FColor *param_1,wchar_t *param_2)

{
  ConcurrencyVisualizerStartScopedEvent(param_2);
  return;
}

// StartScopedEvent @ 14197d0d0

void __thiscall
FConcurrencyViewerExternalProfiler::StartScopedEvent
          (FConcurrencyViewerExternalProfiler *this,FColor *param_1,char *param_2)

{
  ConcurrencyVisualizerStartScopedEventA(param_2);
  return;
}

// EndScopedEvent @ 14197d0e0

void __thiscall
FConcurrencyViewerExternalProfiler::EndScopedEvent(FConcurrencyViewerExternalProfiler *this)

{
  return;
}

// SetThreadName @ 14197d0f0

void __thiscall
FConcurrencyViewerExternalProfiler::SetThreadName
          (FConcurrencyViewerExternalProfiler *this,wchar_t *param_1)

{
  return;
}

// FConcurrencyViewerExternalProfiler @ 141986440

FConcurrencyViewerExternalProfiler * __thiscall
FConcurrencyViewerExternalProfiler::FConcurrencyViewerExternalProfiler
          (FConcurrencyViewerExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  int *piVar3;
  
  this->MaxDepth = 99;
  this->_padding_ = (longlong)&___7FConcurrencyViewerExternalProfiler__6B_;
  pIVar2 = IModularFeatures::Get();
  piVar3 = &this->MaxDepth;
  if (this == (FConcurrencyViewerExternalProfiler *)0x0) {
    piVar3 = (int *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,piVar3);
  return this;
}

// ~FConcurrencyViewerExternalProfiler @ 141987dc0

void __thiscall
FConcurrencyViewerExternalProfiler::~FConcurrencyViewerExternalProfiler
          (FConcurrencyViewerExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  int *piVar3;
  
  this->_padding_ = (longlong)&___7FConcurrencyViewerExternalProfiler__6B_;
  pIVar2 = IModularFeatures::Get();
  piVar3 = &this->MaxDepth;
  if (this == (FConcurrencyViewerExternalProfiler *)0x0) {
    piVar3 = (int *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,piVar3);
  this->_padding_ = (longlong)&___7FExternalProfiler__6B_;
  return;
}

