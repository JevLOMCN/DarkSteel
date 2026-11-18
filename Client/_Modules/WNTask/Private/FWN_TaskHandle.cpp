// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 13

// AddPrerequisiteTask @ 14a6acca0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_TaskHandle::AddPrerequisiteTask(FWN_TaskHandle *this,FWN_TaskHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  bool bVar3;
  FWN_Task *pFVar4;
  FWN_ScopedTaskAccessor local_res10;
  
  if ((param_1->Identifier == 0xffffffffffffffff) || (this->Identifier == 0xffffffffffffffff)) {
    return false;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
  if (ppFVar2 == (FWN_Task **)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (FWN_Task *)0x0;
  }
  else {
    LOCK();
    (*ppFVar2)->NumAccessors = (*ppFVar2)->NumAccessors + 1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = *ppFVar2;
    if (((pFVar4 != (FWN_Task *)0x0) && (pFVar4->Step < GCed)) &&
       (FWN_ScopedTaskAccessor::FWN_ScopedTaskAccessor(&local_res10,param_1),
       local_res10.Task != (FWN_Task *)0x0)) {
      if ((local_res10.Task)->Step < GCed) {
        FWN_Task::AddSubsequentTask(local_res10.Task,pFVar4);
        FWN_TaskManager::Get();
        LOCK();
        (local_res10.Task)->NumAccessors = (local_res10.Task)->NumAccessors + -1;
        UNLOCK();
        bVar3 = true;
        goto LAB_14a6acd7b;
      }
      if (local_res10.Task != (FWN_Task *)0x0) {
        FWN_TaskManager::Get();
        LOCK();
        (local_res10.Task)->NumAccessors = (local_res10.Task)->NumAccessors + -1;
        UNLOCK();
      }
    }
  }
  bVar3 = false;
  if (pFVar4 == (FWN_Task *)0x0) {
    return false;
  }
LAB_14a6acd7b:
  FWN_TaskManager::Get();
  LOCK();
  pFVar4->NumAccessors = pFVar4->NumAccessors + -1;
  UNLOCK();
  return bVar3;
}

// Cancel @ 14a6ad120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskHandle::Cancel(FWN_TaskHandle *this,bool param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  ulong64 uVar2;
  FWN_Task *this_00;
  FWN_TaskManager *pFVar3;
  FWN_Task **ppFVar4;
  FWN_Task *pFVar5;
  FWN_Task *local_res8;
  FWN_Task **local_res18 [2];
  
  if (this->Identifier == 0xffffffffffffffff) {
    return;
  }
  pFVar3 = FWN_TaskManager::Get();
  pFVar1 = &pFVar3->TaskMapCS;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  ppFVar4 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar3->TaskMap,this);
  if (ppFVar4 == (FWN_Task **)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar5 = (FWN_Task *)0x0;
  }
  else {
    LOCK();
    (*ppFVar4)->NumAccessors = (*ppFVar4)->NumAccessors + 1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar5 = *ppFVar4;
    if (pFVar5 == (FWN_Task *)0x0) {
      return;
    }
    if (pFVar5->Step < GCed) {
      pFVar5->bIsCanceled = true;
      pFVar5->bInvokeRemainCallbacks = param_1;
      local_res8 = pFVar5;
      if (pFVar5->Step == Initialized) {
        local_res18[0] = &local_res8;
        `FWN_TaskHandle::Cancel'::__l11::<lambda_1>::operator()(local_res18);
        pFVar3 = FWN_TaskManager::Get();
        this_00 = local_res8;
        pFVar1 = &pFVar3->TaskMapCS;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        if (*(int *)&(pFVar3->TaskMap).field_0x8 != *(int *)&(pFVar3->TaskMap).field_0x34) {
          uVar2 = (this_00->Handle).Identifier;
          TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FWN_TaskHandle>
                    ((TSet<TTuple<FWN_TaskHandle,FWN_Task_*>,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>,FDefaultSetAllocator>
                      *)&pFVar3->TaskMap,(int)(uVar2 >> 0x20) * 0x17 + (int)uVar2,&this_00->Handle);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        FWN_Task::SetStep(this_00,GCed);
        FWN_Task::Reset(this_00);
      }
      goto LAB_14a6ad240;
    }
  }
  if (pFVar5 == (FWN_Task *)0x0) {
    return;
  }
LAB_14a6ad240:
  FWN_TaskManager::Get();
  LOCK();
  pFVar5->NumAccessors = pFVar5->NumAccessors + -1;
  UNLOCK();
  return;
}

// GetLastCallbackResult @ 14a6ade30

/* WARNING: Enum "Type": Some values do not have unique names */

EWN_TaskCallbackResult __thiscall FWN_TaskHandle::GetLastCallbackResult(FWN_TaskHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  FWN_Task *pFVar3;
  EWN_TaskCallbackResult EVar4;
  
  if (this->Identifier == 0xffffffffffffffff) {
    return Undefined;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
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
    if ((pFVar3 != (FWN_Task *)0x0) && (pFVar3->Step < GCed)) {
      EVar4 = pFVar3->LastCallbackResult;
      goto LAB_14a6adeb6;
    }
  }
  EVar4 = Undefined;
  if (pFVar3 == (FWN_Task *)0x0) {
    return Undefined;
  }
LAB_14a6adeb6:
  FWN_TaskManager::Get();
  LOCK();
  pFVar3->NumAccessors = pFVar3->NumAccessors + -1;
  UNLOCK();
  return EVar4;
}

// GetName @ 14a6adef0

/* WARNING: Enum "Type": Some values do not have unique names */

FName * __thiscall FWN_TaskHandle::GetName(FWN_TaskHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  FWN_Task *pFVar3;
  FName *pFVar4;
  
  if (this->Identifier == 0xffffffffffffffff) {
    return &sNoName;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
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
    if ((pFVar3 != (FWN_Task *)0x0) && (pFVar3->Step < GCed)) {
      pFVar4 = &pFVar3->Name;
      goto LAB_14a6adf7f;
    }
  }
  pFVar4 = &sNoName;
  if (pFVar3 == (FWN_Task *)0x0) {
    return &sNoName;
  }
LAB_14a6adf7f:
  FWN_TaskManager::Get();
  LOCK();
  pFVar3->NumAccessors = pFVar3->NumAccessors + -1;
  UNLOCK();
  return pFVar4;
}

// GetResult @ 14a6adfb0

/* WARNING: Enum "Type": Some values do not have unique names */

EWN_TaskResult __thiscall FWN_TaskHandle::GetResult(FWN_TaskHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  FWN_Task *pFVar3;
  EWN_TaskResult EVar4;
  
  if (this->Identifier == 0xffffffffffffffff) {
    return Undefined;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
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
    if ((pFVar3 != (FWN_Task *)0x0) && (pFVar3->Step < GCed)) {
      EVar4 = pFVar3->Result;
      goto LAB_14a6ae036;
    }
  }
  EVar4 = Undefined;
  if (pFVar3 == (FWN_Task *)0x0) {
    return Undefined;
  }
LAB_14a6ae036:
  FWN_TaskManager::Get();
  LOCK();
  pFVar3->NumAccessors = pFVar3->NumAccessors + -1;
  UNLOCK();
  return EVar4;
}

// GetStep @ 14a6ae090

/* WARNING: Enum "Type": Some values do not have unique names */

EWN_TaskStep __thiscall FWN_TaskHandle::GetStep(FWN_TaskHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  FWN_Task *pFVar3;
  EWN_TaskStep EVar4;
  
  if (this->Identifier == 0xffffffffffffffff) {
    return Undefined;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
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
    if ((pFVar3 != (FWN_Task *)0x0) && (EVar4 = pFVar3->Step, EVar4 < GCed)) goto LAB_14a6ae116;
  }
  EVar4 = Undefined;
  if (pFVar3 == (FWN_Task *)0x0) {
    return Undefined;
  }
LAB_14a6ae116:
  FWN_TaskManager::Get();
  LOCK();
  pFVar3->NumAccessors = pFVar3->NumAccessors + -1;
  UNLOCK();
  return EVar4;
}

// GetTaskPriority @ 14a6ae150

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_TaskPriority __thiscall FWN_TaskHandle::GetTaskPriority(FWN_TaskHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  ulong64 *in_RDX;
  FWN_Task *pFVar3;
  
  if (this->Identifier == 0xffffffffffffffff) {
    *in_RDX = 0x380000000000000;
    return (FWN_TaskPriority)(ulong64)in_RDX;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
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
    if ((pFVar3 != (FWN_Task *)0x0) && (pFVar3->Step < GCed)) {
      *in_RDX = (pFVar3->Priority).PriorityBits;
      goto LAB_14a6ae201;
    }
  }
  *in_RDX = 0x380000000000000;
  if (pFVar3 == (FWN_Task *)0x0) {
    return (FWN_TaskPriority)(ulong64)in_RDX;
  }
LAB_14a6ae201:
  FWN_TaskManager::Get();
  LOCK();
  pFVar3->NumAccessors = pFVar3->NumAccessors + -1;
  UNLOCK();
  return (FWN_TaskPriority)(ulong64)in_RDX;
}

// IsValid @ 14a6ae740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_TaskHandle::IsValid(FWN_TaskHandle *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  FWN_Task *pFVar3;
  bool bVar4;
  
  if (this->Identifier == 0xffffffffffffffff) {
    return false;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
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
    if ((pFVar3 != (FWN_Task *)0x0) && (pFVar3->Step < GCed)) {
      bVar4 = true;
      goto LAB_14a6ae7c5;
    }
  }
  bVar4 = false;
  if (pFVar3 == (FWN_Task *)0x0) {
    return false;
  }
LAB_14a6ae7c5:
  FWN_TaskManager::Get();
  LOCK();
  pFVar3->NumAccessors = pFVar3->NumAccessors + -1;
  UNLOCK();
  return bVar4;
}

// ReallocateIdentifier @ 14a6b0fe0

void __thiscall FWN_TaskHandle::ReallocateIdentifier(FWN_TaskHandle *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&sLock,4000);
      atexit(`FWN_TaskHandle::ReallocateIdentifier'::__l2::_dynamic_atexit_destructor_for__sLock__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&sLock);
  this->Identifier = S_NextTaskHandleIdentifier;
  S_NextTaskHandleIdentifier = S_NextTaskHandleIdentifier + 1;
  if (S_NextTaskHandleIdentifier == 0xffffffffffffffff) {
    S_NextTaskHandleIdentifier = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6b104b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&sLock);
  return;
}

// RemovePrerequisiteTask @ 14a6b12a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_TaskHandle::RemovePrerequisiteTask(FWN_TaskHandle *this,FWN_TaskHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  bool bVar3;
  FWN_Task *pFVar4;
  FWN_ScopedTaskAccessor local_res10;
  
  if ((param_1->Identifier == 0xffffffffffffffff) || (this->Identifier == 0xffffffffffffffff)) {
    return false;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
  if (ppFVar2 == (FWN_Task **)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (FWN_Task *)0x0;
  }
  else {
    LOCK();
    (*ppFVar2)->NumAccessors = (*ppFVar2)->NumAccessors + 1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = *ppFVar2;
    if (((pFVar4 != (FWN_Task *)0x0) && (pFVar4->Step < GCed)) &&
       (FWN_ScopedTaskAccessor::FWN_ScopedTaskAccessor(&local_res10,param_1),
       local_res10.Task != (FWN_Task *)0x0)) {
      if ((local_res10.Task)->Step < GCed) {
        FWN_Task::RemoveSubsequentTask(local_res10.Task,pFVar4);
        FWN_TaskManager::Get();
        LOCK();
        (local_res10.Task)->NumAccessors = (local_res10.Task)->NumAccessors + -1;
        UNLOCK();
        bVar3 = true;
        goto LAB_14a6b137b;
      }
      if (local_res10.Task != (FWN_Task *)0x0) {
        FWN_TaskManager::Get();
        LOCK();
        (local_res10.Task)->NumAccessors = (local_res10.Task)->NumAccessors + -1;
        UNLOCK();
      }
    }
  }
  bVar3 = false;
  if (pFVar4 == (FWN_Task *)0x0) {
    return false;
  }
LAB_14a6b137b:
  FWN_TaskManager::Get();
  LOCK();
  pFVar4->NumAccessors = pFVar4->NumAccessors + -1;
  UNLOCK();
  return bVar3;
}

// Reset @ 14a6b1960

void __thiscall FWN_TaskHandle::Reset(FWN_TaskHandle *this)

{
  this->Identifier = 0xffffffffffffffff;
  return;
}

// SetTaskPriority @ 14a6b20a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskHandle::SetTaskPriority(FWN_TaskHandle *this,FWN_TaskPriority param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWN_TaskManager *pFVar1;
  FWN_Task **ppFVar2;
  FWN_Task *pFVar3;
  
  if (this->Identifier == 0xffffffffffffffff) {
    return;
  }
  pFVar1 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar1->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar2 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar1->TaskMap,this);
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
    if (pFVar3 == (FWN_Task *)0x0) {
      return;
    }
    if (pFVar3->Step < GCed) {
      (pFVar3->Priority).PriorityBits = param_1.PriorityBits;
      goto LAB_14a6b2126;
    }
  }
  if (pFVar3 == (FWN_Task *)0x0) {
    return;
  }
LAB_14a6b2126:
  FWN_TaskManager::Get();
  LOCK();
  pFVar3->NumAccessors = pFVar3->NumAccessors + -1;
  UNLOCK();
  return;
}

// operator() @ 150550a90

bool __thiscall `FWN_TaskHandle::Cancel'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5656623244824805160>);
  if (bVar2) {
    ::FName::ToString((FName *)(**(longlong **)this + 4),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5656623244824805160>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150550afe;
    }
  }
  bVar2 = false;
LAB_150550afe:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

