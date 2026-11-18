// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FrameSync @ 14197d760

void __thiscall FVSPerfExternalProfiler::FrameSync(FVSPerfExternalProfiler *this)

{
  return;
}

// GetProfilerName @ 14197d770

wchar_t * __thiscall FVSPerfExternalProfiler::GetProfilerName(FVSPerfExternalProfiler *this)

{
  return L"VSPerf";
}

// ProfilerPauseFunction @ 14197d780

void __thiscall FVSPerfExternalProfiler::ProfilerPauseFunction(FVSPerfExternalProfiler *this)

{
  (*VsPerfStopProfileFunction)(1,0xffffffff);
  return;
}

// ProfilerResumeFunction @ 14197d790

void __thiscall FVSPerfExternalProfiler::ProfilerResumeFunction(FVSPerfExternalProfiler *this)

{
  (*VsPerfStartProfileFunction)(1,0xffffffff);
  return;
}

// FVSPerfExternalProfiler @ 141987320

FVSPerfExternalProfiler * __thiscall
FVSPerfExternalProfiler::FVSPerfExternalProfiler(FVSPerfExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  FVSPerfExternalProfiler *pFVar3;
  
  *this = (FVSPerfExternalProfiler)&___7FVSPerfExternalProfiler__6B_;
  pIVar2 = IModularFeatures::Get();
  pFVar3 = this + 1;
  if (this == (FVSPerfExternalProfiler *)0x0) {
    pFVar3 = (FVSPerfExternalProfiler *)0x0;
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
  (*pcVar1)(pIVar2,ProfilerFeatureName,pFVar3);
  return this;
}

// ~FVSPerfExternalProfiler @ 141988300

void __thiscall FVSPerfExternalProfiler::~FVSPerfExternalProfiler(FVSPerfExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  FVSPerfExternalProfiler *pFVar3;
  
  *this = (FVSPerfExternalProfiler)&___7FVSPerfExternalProfiler__6B_;
  VSPerfDeinitialize();
  pIVar2 = IModularFeatures::Get();
  pFVar3 = this + 1;
  if (this == (FVSPerfExternalProfiler *)0x0) {
    pFVar3 = (FVSPerfExternalProfiler *)0x0;
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
  (*pcVar1)(pIVar2,ProfilerFeatureName,pFVar3);
  *this = (FVSPerfExternalProfiler)&___7FExternalProfiler__6B_;
  return;
}

