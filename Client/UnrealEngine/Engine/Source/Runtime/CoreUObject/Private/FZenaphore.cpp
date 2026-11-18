// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FZenaphore @ 141f66c50

FZenaphore * __thiscall FZenaphore::FZenaphore(FZenaphore *this)

{
  FEvent *pFVar1;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Mutex,4000);
  this->HeadWaiter = (TAtomic<FZenaphoreWaiterNode_*>)0x0;
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->Event = pFVar1;
  return this;
}

// ~FZenaphore @ 141f68f00

void __thiscall FZenaphore::~FZenaphore(FZenaphore *this)

{
  FGenericPlatformProcess::ReturnSynchEventToPool(this->Event);
                    /* WARNING: Could not recover jumptable at 0x000141f68f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  return;
}

// NotifyAll @ 141f93e50

void __thiscall FZenaphore::NotifyAll(FZenaphore *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<FZenaphoreWaiterNode_*> TVar1;
  bool bVar2;
  
  while( true ) {
    do {
      TVar1 = this->HeadWaiter;
      if (TVar1 == (TAtomic<FZenaphoreWaiterNode_*>)0x0) {
        return;
      }
      LOCK();
      bVar2 = TVar1 == this->HeadWaiter;
      if (bVar2) {
        this->HeadWaiter = *(TAtomic<FZenaphoreWaiterNode_*> *)TVar1;
      }
      UNLOCK();
    } while (!bVar2);
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId20,"ZenaphoreTrigger",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\Zenaphore.cpp"
                 ,0x14);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId20);
    }
    lpCriticalSection = &this->Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) break;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(undefined1 *)((longlong)TVar1 + 8) = 1;
    (**(code **)(this->Event->_padding_ + 0x10))();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// NotifyInternal @ 141f93f30

void __thiscall FZenaphore::NotifyInternal(FZenaphore *this,FZenaphoreWaiterNode *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId20,"ZenaphoreTrigger",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\Zenaphore.cpp"
               ,0x14);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId20);
  }
  if ((param_1 == (FZenaphoreWaiterNode *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Waiter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\Zenaphore.cpp"
                         ,0x15,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  param_1->bTriggered = true;
  (**(code **)(this->Event->_padding_ + 0x10))();
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// NotifyOne @ 141f94010

void __thiscall FZenaphore::NotifyOne(FZenaphore *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<FZenaphoreWaiterNode_*> TVar1;
  bool bVar2;
  
  do {
    TVar1 = this->HeadWaiter;
    if (TVar1 == (TAtomic<FZenaphoreWaiterNode_*>)0x0) {
      return;
    }
    LOCK();
    bVar2 = TVar1 == this->HeadWaiter;
    if (bVar2) {
      this->HeadWaiter = *(TAtomic<FZenaphoreWaiterNode_*> *)TVar1;
    }
    UNLOCK();
  } while (!bVar2);
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId20,"ZenaphoreTrigger",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\Zenaphore.cpp"
               ,0x14);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId20);
  }
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(undefined1 *)((longlong)TVar1 + 8) = 1;
    (**(code **)(this->Event->_padding_ + 0x10))();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

