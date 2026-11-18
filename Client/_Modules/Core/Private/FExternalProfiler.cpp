// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// Register @ 14197d960

void __thiscall FExternalProfiler::Register(FExternalProfiler *this)

{
  return;
}

// OnEnableScopedEventsChanged @ 14197d970

void __thiscall FExternalProfiler::OnEnableScopedEventsChanged(FExternalProfiler *this,bool param_1)

{
  return;
}

// StartScopedEvent @ 14197d980

void __thiscall
FExternalProfiler::StartScopedEvent(FExternalProfiler *this,FColor *param_1,wchar_t *param_2)

{
  return;
}

// StartScopedEvent @ 14197d990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FExternalProfiler::StartScopedEvent(FExternalProfiler *this,FColor *param_1,char *param_2)

{
  code *pcVar1;
  TStringConversion<TStringConvert<char,wchar_t>,128> *pTVar2;
  undefined1 auStack_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  pcVar1 = *(code **)((longlong)*this + 0x40);
  pTVar2 = StringCast<wchar_t,128,char>(&local_148,param_2);
  (*pcVar1)(this,param_1,pTVar2->Ptr);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// EndScopedEvent @ 14197da10

void __thiscall FExternalProfiler::EndScopedEvent(FExternalProfiler *this)

{
  return;
}

// SetThreadName @ 14197da20

void __thiscall FExternalProfiler::SetThreadName(FExternalProfiler *this,wchar_t *param_1)

{
  return;
}

// FExternalProfiler @ 141986750

FExternalProfiler * __thiscall FExternalProfiler::FExternalProfiler(FExternalProfiler *this)

{
  *this = (FExternalProfiler)&___7FExternalProfiler__6B_;
  return this;
}

// ~FExternalProfiler @ 141987e90

void __thiscall FExternalProfiler::~FExternalProfiler(FExternalProfiler *this)

{
  *this = (FExternalProfiler)&___7FExternalProfiler__6B_;
  return;
}

// GetFeatureName @ 141995330

FName __cdecl FExternalProfiler::GetFeatureName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ProfilerFeatureName,"ExternalProfiler");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ProfilerFeatureName;
  return in_RCX;
}

// PauseProfiler @ 1419a67c0

void __thiscall FExternalProfiler::PauseProfiler(FExternalProfiler *this)

{
  atomic<bool> aVar1;
  
  aVar1 = FActiveExternalProfilerBase::bIsRecording;
  if (FActiveExternalProfilerBase::ActiveProfiler == this) {
    LOCK();
    FActiveExternalProfilerBase::bIsRecording = (atomic<bool>)0x0;
    UNLOCK();
    if ((FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0) &&
       (aVar1 != (atomic<bool>)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001419a67e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x18))();
      return;
    }
  }
  return;
}

// ResumeProfiler @ 1419a8e90

void __thiscall FExternalProfiler::ResumeProfiler(FExternalProfiler *this)

{
  atomic<bool> aVar1;
  
  aVar1 = FActiveExternalProfilerBase::bIsRecording;
  if (FActiveExternalProfilerBase::ActiveProfiler == this) {
    LOCK();
    FActiveExternalProfilerBase::bIsRecording = (atomic<bool>)0x1;
    UNLOCK();
    if ((FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0) &&
       (aVar1 == (atomic<bool>)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001419a8eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x20))();
      return;
    }
  }
  return;
}

