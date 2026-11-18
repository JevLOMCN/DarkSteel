// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// ~FRenderingThread @ 145df17a0

void __thiscall FRenderingThread::~FRenderingThread(FRenderingThread *this)

{
  this->_padding_ = (longlong)&___7FRenderingThread__6B_;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->TaskGraphBoundSyncEvent);
  this->TaskGraphBoundSyncEvent = (FEvent *)0x0;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Exit @ 145e08b00

void __thiscall FRenderingThread::Exit(FRenderingThread *this)

{
  GRenderThreadId = 0;
  return;
}

// FlushRHILogsAndReportCrash @ 145e0ae20

int __cdecl FRenderingThread::FlushRHILogsAndReportCrash(_EXCEPTION_POINTERS *param_1)

{
  int iVar1;
  
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x98))();
  }
  iVar1 = ReportCrash(param_1);
  return iVar1;
}

// Init @ 145e168f0

bool __thiscall FRenderingThread::Init(FRenderingThread *this)

{
  GRenderThreadId = GetCurrentThreadId();
  FTaskTagScope::SetTagNone();
  return true;
}

// Run @ 145e232b0

uint __thiscall FRenderingThread::Run(FRenderingThread *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  FMemory::SetupTLSCachesOnCurrentThread();
  SetupRenderThread(this);
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"noexceptionhandler");
  if (!bVar1) {
    bVar1 = FWindowsPlatformMisc::IsDebuggerPresent();
    if ((!bVar1) || (GAlwaysReportCrash != false)) {
      RenderingThreadMain(this->TaskGraphBoundSyncEvent);
      goto LAB_145e23361;
    }
  }
  RenderingThreadMain(this->TaskGraphBoundSyncEvent);
LAB_145e23361:
  FMemory::ClearAndDisableTLSCachesOnCurrentThread();
  return 0;
}

// SetupRenderThread @ 145e26760

void __thiscall FRenderingThread::SetupRenderThread(FRenderingThread *this)

{
  FTaskTagScope local_18 [2];
  
  FTaskTagScope::FTaskTagScope(local_18,ERenderingThread);
  FTaskTagScope::~FTaskTagScope(local_18);
  return;
}

