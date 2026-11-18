// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ~FZenaphoreWaiter @ 141f68f30

void __thiscall FZenaphoreWaiter::~FZenaphoreWaiter(FZenaphoreWaiter *this)

{
  FEvent *pFVar1;
  FZenaphore *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (this->SpinCount == 0) {
    return;
  }
  pFVar1 = this->Outer->Event;
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0x7fffffff,1);
  pFVar2 = this->Outer;
  while( true ) {
    lpCriticalSection = &pFVar2->Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->WaiterNode).bTriggered != false) break;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pFVar1 = this->Outer->Event;
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0x7fffffff,1);
    pFVar2 = this->Outer;
  }
  (**(code **)(this->Outer->Event->_padding_ + 0x18))();
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Wait @ 141fb0830

void __thiscall FZenaphoreWaiter::Wait(FZenaphoreWaiter *this)

{
  TAtomic<FZenaphoreWaiterNode_*> *pTVar1;
  TAtomic<FZenaphoreWaiterNode_*> TVar2;
  TAtomic<FZenaphoreWaiterNode_*> TVar3;
  bool bVar4;
  
  if (this->SpinCount != 0) {
    WaitInternal(this);
    this->SpinCount = 0;
    return;
  }
  (this->WaiterNode).bTriggered = false;
  TVar2 = (TAtomic<FZenaphoreWaiterNode_*>)0x0;
  do {
    (this->WaiterNode).Next = (FZenaphoreWaiterNode *)TVar2;
    pTVar1 = &this->Outer->HeadWaiter;
    LOCK();
    TVar3 = *pTVar1;
    bVar4 = TVar2 == TVar3;
    if (bVar4) {
      *pTVar1 = (TAtomic<FZenaphoreWaiterNode_*>)&this->WaiterNode;
      TVar3 = TVar2;
    }
    UNLOCK();
    TVar2 = TVar3;
  } while (!bVar4);
  this->SpinCount = this->SpinCount + 1;
  return;
}

// WaitInternal @ 141fb0880

void __thiscall FZenaphoreWaiter::WaitInternal(FZenaphoreWaiter *this)

{
  FEvent *pFVar1;
  FZenaphore *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  
  pFVar1 = this->Outer->Event;
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0x7fffffff,1);
  pFVar2 = this->Outer;
  while( true ) {
    lpCriticalSection = &pFVar2->Mutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->WaiterNode).bTriggered != false) break;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    pFVar1 = this->Outer->Event;
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0x7fffffff,1);
    pFVar2 = this->Outer;
  }
  (**(code **)(this->Outer->Event->_padding_ + 0x18))();
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

