// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// FGameThreadHitchHeartBeatThreaded @ 1416d4df0

FGameThreadHitchHeartBeatThreaded * __thiscall
FGameThreadHitchHeartBeatThreaded::FGameThreadHitchHeartBeatThreaded
          (FGameThreadHitchHeartBeatThreaded *this)

{
  longlong lVar1;
  double dVar2;
  LARGE_INTEGER local_res8 [4];
  
  this->_padding_ = (longlong)&___7FGameThreadHitchHeartBeatThreaded__6B_;
  this->Thread = (FRunnableThread *)0x0;
  (this->StopTaskCounter).Counter = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HeartBeatCritical,4000);
  lVar1 = 0;
  dVar2 = __real_3fa999999999999a / FGenericPlatformTime::SecondsPerCycle64;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  (this->Clock).MaxTimeStepCycles = (longlong)dVar2 + lVar1;
  QueryPerformanceCounter(local_res8);
  (this->Clock).CurrentCycles = (ulong64)local_res8[0];
  (this->Clock).LastRealTickCycles = (ulong64)local_res8[0];
  return this;
}

// ~FGameThreadHitchHeartBeatThreaded @ 1416d88e0

void __thiscall
FGameThreadHitchHeartBeatThreaded::~FGameThreadHitchHeartBeatThreaded
          (FGameThreadHitchHeartBeatThreaded *this)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&___7FGameThreadHitchHeartBeatThreaded__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    this->Thread = (FRunnableThread *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HeartBeatCritical);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// FrameStart @ 1416f08a0

void __thiscall
FGameThreadHitchHeartBeatThreaded::FrameStart(FGameThreadHitchHeartBeatThreaded *this,bool param_1)

{
  return;
}

// Get @ 1416f11a0

FGameThreadHitchHeartBeatThreaded * __cdecl FGameThreadHitchHeartBeatThreaded::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FGameThreadHitchHeartBeatThreaded *pFVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Singleton != (FGameThreadHitchHeartBeatThreaded *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadHeartBeat.cpp"
                           ,0x3a5,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FGameThreadHitchHeartBeatThreaded *)(*pcVar1)();
          return pFVar3;
        }
      }
      pFVar3 = ::operator_new(0x58);
      if (pFVar3 == (FGameThreadHitchHeartBeatThreaded *)0x0) {
        pFVar3 = (FGameThreadHitchHeartBeatThreaded *)0x0;
      }
      else {
        pFVar3->Thread = (FRunnableThread *)0x0;
        pFVar3->_padding_ = (longlong)&___7FGameThreadHitchHeartBeatThreaded__6B_;
        (pFVar3->StopTaskCounter).Counter = 0;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar3->HeartBeatCritical,4000);
        lVar4 = 0;
        dVar5 = __real_3fa999999999999a / FGenericPlatformTime::SecondsPerCycle64;
        if ((__real_43e0000000000000 <= dVar5) &&
           (dVar5 = dVar5 - __real_43e0000000000000, dVar5 < __real_43e0000000000000)) {
          lVar4 = -0x8000000000000000;
        }
        (pFVar3->Clock).MaxTimeStepCycles = (longlong)dVar5 + lVar4;
        QueryPerformanceCounter(local_res8);
        (pFVar3->Clock).CurrentCycles = (ulong64)local_res8[0];
        (pFVar3->Clock).LastRealTickCycles = (ulong64)local_res8[0];
      }
      Singleton = pFVar3;
      Helper.Instance = pFVar3;
      atexit(`FGameThreadHitchHeartBeatThreaded::Get'::__l2::
             _dynamic_atexit_destructor_for__Helper__);
      _Init_thread_footer(&::_TSS0);
      return Helper.Instance;
    }
  }
  return Helper.Instance;
}

// GetCurrentTime @ 1416f61c0

double __thiscall
FGameThreadHitchHeartBeatThreaded::GetCurrentTime(FGameThreadHitchHeartBeatThreaded *this)

{
  double dVar1;
  
  dVar1 = FThreadHeartBeatClock::Seconds(&this->Clock);
  return dVar1;
}

// GetFrameStartTime @ 1416f8650

double __thiscall
FGameThreadHitchHeartBeatThreaded::GetFrameStartTime(FGameThreadHitchHeartBeatThreaded *this)

{
  return 0.0;
}

// GetNoInit @ 1416f9670

FGameThreadHitchHeartBeatThreaded * __cdecl FGameThreadHitchHeartBeatThreaded::GetNoInit(void)

{
  return Singleton;
}

// Init @ 1416fe210

bool __thiscall FGameThreadHitchHeartBeatThreaded::Init(FGameThreadHitchHeartBeatThreaded *this)

{
  LOCK();
  (this->StopTaskCounter).Counter = 0;
  UNLOCK();
  return true;
}

// InitSettings @ 1416fe470

void __thiscall
FGameThreadHitchHeartBeatThreaded::InitSettings(FGameThreadHitchHeartBeatThreaded *this)

{
  return;
}

// InitSettingsInternal @ 1416fe4e0

void __thiscall
FGameThreadHitchHeartBeatThreaded::InitSettingsInternal(FGameThreadHitchHeartBeatThreaded *this)

{
  return;
}

// IsStartedSuspended @ 141702a30

bool __thiscall
FGameThreadHitchHeartBeatThreaded::IsStartedSuspended(FGameThreadHitchHeartBeatThreaded *this)

{
  return true;
}

// ResumeHeartBeat @ 14170e5c0

void __thiscall
FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(FGameThreadHitchHeartBeatThreaded *this)

{
  return;
}

// Run @ 14170f130

uint __thiscall FGameThreadHitchHeartBeatThreaded::Run(FGameThreadHitchHeartBeatThreaded *this)

{
  return 0;
}

// Stop @ 141712c80

void __thiscall FGameThreadHitchHeartBeatThreaded::Stop(FGameThreadHitchHeartBeatThreaded *this)

{
  LOCK();
  (this->StopTaskCounter).Counter = (this->StopTaskCounter).Counter + 1;
  UNLOCK();
  return;
}

// SuspendHeartBeat @ 141714220

void __thiscall
FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(FGameThreadHitchHeartBeatThreaded *this)

{
  return;
}

