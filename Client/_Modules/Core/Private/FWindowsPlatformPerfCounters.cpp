// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Init @ 141ab2100

void __cdecl FWindowsPlatformPerfCounters::Init(void)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FPerfCountersThread *pFVar4;
  FRunnableThread *pFVar5;
  float local_res8 [8];
  
  pFVar4 = WindowsPlatformPerfCountersImpl::PerfCountersThread;
  if (WindowsPlatformPerfCountersImpl::PerfCountersThread == (FPerfCountersThread *)0x0) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar3,L"perfcounters");
    pFVar4 = WindowsPlatformPerfCountersImpl::PerfCountersThread;
    if (bVar2) {
      local_res8[0] = 0.0;
      pwVar3 = FCommandLine::Get();
      FParse::Value(pwVar3,L"perfcountersinterval=",local_res8);
      if (local_res8[0] <= 0.0) {
        local_res8[0] = 0.25;
      }
      pFVar4 = ::operator_new(0x20);
      if (pFVar4 == (FPerfCountersThread *)0x0) {
        pFVar4 = (FPerfCountersThread *)0x0;
      }
      else {
        pFVar4->bContinue = (atomic<bool>)0x1;
        pFVar4->SampleIntervalInSeconds = local_res8[0];
        pFVar4->_padding_ = (longlong)&___7FPerfCountersThread_WindowsPlatformPerfCountersImpl__6B_;
        pFVar4->Thread = (FRunnableThread *)0x0;
        pFVar5 = FRunnableThread::Create
                           ((FRunnable *)pFVar4,L"PerfCountersThread",0x80000,TPri_AboveNormal,
                            0xffffffffffffffff,None);
        pFVar4->Thread = pFVar5;
        if ((pFVar5 == (FRunnableThread *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Thread",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformPerfCounters.cpp"
                               ,0x42,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  WindowsPlatformPerfCountersImpl::PerfCountersThread = pFVar4;
  return;
}

// Shutdown @ 141ac2140

void __cdecl FWindowsPlatformPerfCounters::Shutdown(void)

{
  if (WindowsPlatformPerfCountersImpl::PerfCountersThread != (FPerfCountersThread *)0x0) {
    (**(code **)(WindowsPlatformPerfCountersImpl::PerfCountersThread->_padding_ + 0x28))
              (WindowsPlatformPerfCountersImpl::PerfCountersThread,1);
  }
  WindowsPlatformPerfCountersImpl::PerfCountersThread = (FPerfCountersThread *)0x0;
  return;
}

