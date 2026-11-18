// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 3

// FWN_ScopedTaskAccessor @ 14a6ac010

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_ScopedTaskAccessor * __thiscall
FWN_ScopedTaskAccessor::FWN_ScopedTaskAccessor(FWN_ScopedTaskAccessor *this,FWN_TaskHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  FWN_Task *pFVar3;
  
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
              ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                      *)&pFVar1->TaskMap,param_1);
    if (ppFVar2 == (FWN_Task **)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar3 = (FWN_Task *)0x0;
    }
    else {
      LOCK();
      (*ppFVar2)->NumAccessors = (*ppFVar2)->NumAccessors + 1;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar3 = *ppFVar2;
    }
    this->Task = pFVar3;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~FWN_ScopedTaskAccessor @ 14a6ac770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_ScopedTaskAccessor::~FWN_ScopedTaskAccessor(FWN_ScopedTaskAccessor *this)

{
  int *piVar1;
  FWN_Task *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->Task != (FWN_Task *)0x0) {
    FWN_TaskManager::Get();
    pFVar2 = this->Task;
    if (pFVar2 == (FWN_Task *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTask != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNTask\\Source\\WNTask\\Private\\WNTaskManager.cpp"
                         ,0x91,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    piVar1 = &pFVar2->NumAccessors;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

// IsValid @ 14a6ae720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_ScopedTaskAccessor::IsValid(FWN_ScopedTaskAccessor *this)

{
  if ((this->Task != (FWN_Task *)0x0) && (this->Task->Step < GCed)) {
    return true;
  }
  return false;
}

