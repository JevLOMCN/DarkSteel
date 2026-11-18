// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// CreateInternal @ 141aa2f00

bool __thiscall
FRunnableThreadWin::CreateInternal
          (FRunnableThreadWin *this,FRunnable *param_1,wchar_t *param_2,uint param_3,
          EThreadPriority param_4,ulong64 param_5,EThreadCreateFlags param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FEvent *pFVar4;
  FLowLevelMemTracker *pFVar5;
  HANDLE pvVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  void *pvVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FLLMScope local_res20 [2];
  
  if (param_1 == (FRunnable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRunnable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftRunnableThread.h"
                       ,0x83,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this->_padding_ = param_5;
  this->_padding_ = (longlong)param_1;
  pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->_padding_ = (longlong)pFVar4;
  pwVar7 = L"Unnamed UE";
  if (param_2 != (wchar_t *)0x0) {
    pwVar7 = param_2;
  }
  ::FString::operator=((FString *)&this->_padding_,pwVar7);
  *(EThreadPriority *)&this->_padding_ = param_4;
  FLLMScope::FLLMScope(local_res8,ThreadStack,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,ThreadStack,true);
  FLLMScope::FLLMScope(local_res20,ThreadStackPlatform,false,None,Platform,true);
  pvVar9 = (void *)((ulonglong)this | 0x800000000000);
  uVar8 = (ulonglong)param_3;
  if (param_3 == 0) {
    uVar8 = 0x100000;
  }
  MemoryTrace_Alloc((ulong64)pvVar9,uVar8,0x10000,0,0);
  MemoryTrace_MarkAllocAsHeap((ulong64)pvVar9,0,None,0);
  MemoryTrace_Alloc((ulong64)pvVar9,uVar8,0x10000,0,0);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar5 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar5 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc(pFVar5,Default,pvVar9,uVar8,Untagged,None,true);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar5 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar5 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelAlloc(pFVar5,Platform,pvVar9,uVar8,Untagged,None,true);
    }
  }
  pvVar6 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)param_3,_ThreadProc,this,0x10004,
                        (LPDWORD)((longlong)&this->_padding_ + 4));
  this->Thread = pvVar6;
  FLLMScope::~FLLMScope(local_res20);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  if (this->Thread == (void *)0x0) {
    MemoryTrace_Free((ulong64)pvVar9,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar5 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar5 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar5,Default,pvVar9,None,true);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar5 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar5 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar5,Platform,pvVar9,None,true);
      }
    }
    this->_padding_ = 0;
  }
  else {
    *(undefined4 *)&this->_padding_ = 0;
    (**(code **)this->_padding_)(this,param_4);
    ResumeThread(this->Thread);
    (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,0xffffffff,0);
  }
  FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
  this->_padding_ = 0;
  return this->Thread != (void *)0x0;
}

// Kill @ 141ab38c0

bool __thiscall FRunnableThreadWin::Kill(FRunnableThreadWin *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FLowLevelMemTracker *pFVar4;
  void *pvVar5;
  
  if (this->Thread == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread && \"Did you forget to call Create()?\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftRunnableThread.h"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  }
  if (param_1) {
    WaitForSingleObject(this->Thread,0xffffffff);
  }
  CloseHandle(this->Thread);
  this->Thread = (void *)0x0;
  pvVar5 = (void *)((ulonglong)this | 0x800000000000);
  MemoryTrace_Free((ulong64)pvVar5,0,0);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar4 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar4 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelFree(pFVar4,Default,pvVar5,None,true);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar4 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar4 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar4,Platform,pvVar5,None,true);
    }
  }
  return true;
}

// SetThreadPriority @ 141ac13c0

void __thiscall
FRunnableThreadWin::SetThreadPriority(FRunnableThreadWin *this,EThreadPriority param_1)

{
  int nPriority;
  
  *(EThreadPriority *)&this->_padding_ = param_1;
  nPriority = TranslateThreadPriority(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141ac13de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::SetThreadPriority(this->Thread,nPriority);
  return;
}

// Suspend @ 141ac2950

void __thiscall FRunnableThreadWin::Suspend(FRunnableThreadWin *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Thread == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftRunnableThread.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x000141ac29a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SuspendThread(this->Thread);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141ac29b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResumeThread(this->Thread);
  return;
}

// WaitForCompletion @ 141ac5250

void __thiscall FRunnableThreadWin::WaitForCompletion(FRunnableThreadWin *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141ac5259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject(this->Thread,0xffffffff);
  return;
}

// _ThreadProc @ 141ac5f90

ulong __cdecl FRunnableThreadWin::_ThreadProc(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  FThreadManager *this;
  
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pThis",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftRunnableThread.h"
                       ,0x23,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  this = FThreadManager::Get();
  FThreadManager::AddThread(this,*(uint *)((longlong)param_1 + 0x34),param_1);
  uVar4 = GuardedRun(param_1);
  return uVar4;
}

// GuardedRun @ 141b445e0

uint __thiscall FRunnableThreadWin::GuardedRun(FRunnableThreadWin *this)

{
  bool bVar1;
  uint uVar2;
  LPWSTR pWVar3;
  wchar_t *pwVar4;
  
  FWindowsPlatformProcess::SetThreadAffinityMask(this->_padding_);
  if ((int)this->_padding_ == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)this->_padding_;
  }
  FWindowsPlatformProcess::SetThreadName(pwVar4);
  GetCommandLineW();
  pWVar3 = GetCommandLineW();
  bVar1 = FParse::Param(pWVar3,L"noexceptionhandler");
  if ((!bVar1) &&
     ((bVar1 = FWindowsPlatformMisc::IsDebuggerPresent(), !bVar1 || (GAlwaysReportCrash != false))))
  {
    uVar2 = Run(this);
    return uVar2;
  }
  uVar2 = Run(this);
  return uVar2;
}

// Run @ 141b4d250

uint __thiscall FRunnableThreadWin::Run(FRunnableThreadWin *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Runnable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsRunnableThread.cpp"
                         ,0x93,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  cVar3 = (*(code *)**(undefined8 **)this->_padding_)();
  if (cVar3 != '\x01') {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    return 1;
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  FRunnableThread::SetTls((FRunnableThread *)this);
  uVar4 = (**(code **)(*(longlong *)this->_padding_ + 8))();
  (**(code **)(*(longlong *)this->_padding_ + 0x18))();
  if ((FThreadStats::TlsSlot != 0xffffffff) &&
     (this_00 = TlsGetValue(FThreadStats::TlsSlot), this_00 != (FThreadStats *)0x0)) {
    FThreadStats::Flush(this_00,false,true);
    TlsSetValue(FThreadStats::TlsSlot,(LPVOID)0x0);
    this_01 = FThreadStatsPool::Get();
    FThreadStatsPool::ReturnToPool(this_01,this_00);
  }
  FRunnableThread::FreeTls((FRunnableThread *)this);
  return uVar4;
}

// SetThreadAffinity @ 141b4e190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRunnableThreadWin::SetThreadAffinity(FRunnableThreadWin *this,FThreadAffinity *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  FProcessorGroupDesc *pFVar5;
  undefined1 auStack_68 [32];
  GROUP_AFFINITY local_48;
  _GROUP_AFFINITY local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar2 = FWindowsPlatformProcess::IsProcessAffinitySet();
  if (!bVar2) {
    pFVar5 = FWindowsPlatformMisc::GetProcessorGroupDesc();
    if ((pFVar5->NumProcessorGroups <= param_1->ProcessorGroup) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Affinity.ProcessorGroup < CpuGroupCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsRunnableThread.cpp"
                           ,0x80,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_38.Mask = 0;
    local_38.Group = 0;
    local_38.Reserved[0] = 0;
    local_38.Reserved[1] = 0;
    local_38.Reserved[2] = 0;
    local_48.Mask = pFVar5->ThreadAffinities[param_1->ProcessorGroup] & param_1->ThreadAffinityMask;
    local_48.Reserved[0] = 0;
    local_48.Reserved[1] = 0;
    local_48.Reserved[2] = 0;
    local_48.Group = param_1->ProcessorGroup;
    BVar4 = SetThreadGroupAffinity(this->Thread,&local_48,&local_38);
    if (BVar4 != 0) {
      this->_padding_ = param_1->ThreadAffinityMask;
      if (local_38.Mask == local_48.Mask) {
        if (local_38.Group == local_48.Group) {
          return false;
        }
      }
      return true;
    }
    GetLastError();
    if (2 < (byte)LogThreadingWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogThreadingWindows);
    }
  }
  return false;
}

// TranslateThreadPriority @ 141bb9680

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl FRunnableThreadWin::TranslateThreadPriority(EThreadPriority param_1)

{
  switch(param_1) {
  case TPri_Normal:
  case TPri_SlightlyBelowNormal:
    break;
  case TPri_AboveNormal:
    return 1;
  case TPri_BelowNormal:
    return -1;
  case TPri_Highest:
  case TPri_TimeCritical:
    return 2;
  case TPri_Lowest:
    return -2;
  default:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  return 0;
}

