// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FrameSync @ 14197cf30

void __thiscall FAQtimeExternalProfiler::FrameSync(FAQtimeExternalProfiler *this)

{
  return;
}

// GetProfilerName @ 14197cf40

wchar_t * __thiscall FAQtimeExternalProfiler::GetProfilerName(FAQtimeExternalProfiler *this)

{
  return L"AQtime";
}

// ProfilerPauseFunction @ 14197cf50

void __thiscall FAQtimeExternalProfiler::ProfilerPauseFunction(FAQtimeExternalProfiler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014197cf56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->EnableProfiling)(0);
  return;
}

// ProfilerResumeFunction @ 14197cf60

void __thiscall FAQtimeExternalProfiler::ProfilerResumeFunction(FAQtimeExternalProfiler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014197cf69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->EnableProfiling)(-1);
  return;
}

// FAQtimeExternalProfiler @ 141985cc0

FAQtimeExternalProfiler * __thiscall
FAQtimeExternalProfiler::FAQtimeExternalProfiler(FAQtimeExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  void **ppvVar3;
  
  this->_padding_ = (longlong)&___7FAQtimeExternalProfiler__6B_;
  this->DLLHandle = (void *)0x0;
  this->EnableProfiling = (_func___cdecl_void_short *)0x0;
  pIVar2 = IModularFeatures::Get();
  ppvVar3 = &this->DLLHandle;
  if (this == (FAQtimeExternalProfiler *)0x0) {
    ppvVar3 = (void **)0x0;
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
  (*pcVar1)(pIVar2,ProfilerFeatureName,ppvVar3);
  return this;
}

// ~FAQtimeExternalProfiler @ 141987ab0

void __thiscall FAQtimeExternalProfiler::~FAQtimeExternalProfiler(FAQtimeExternalProfiler *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  
  this->_padding_ = (longlong)&___7FAQtimeExternalProfiler__6B_;
  if (this->DLLHandle != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->DLLHandle);
    this->DLLHandle = (void *)0x0;
  }
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar1)(pIVar2,ProfilerFeatureName,&this->DLLHandle);
  this->_padding_ = (longlong)&___7FExternalProfiler__6B_;
  return;
}

