// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// ~FTaskHandle @ 141becd90

void __thiscall UE::Tasks::Private::FTaskHandle::~FTaskHandle(FTaskHandle *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  pFVar3 = (this->Pimpl).Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000141becdaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

// FTaskHandle @ 141d6a490

FTaskHandle * __thiscall
UE::Tasks::Private::FTaskHandle::FTaskHandle(FTaskHandle *this,FTaskHandle *param_1)

{
  FTaskBase *pFVar1;
  
  (this->Pimpl).Reference = (FTaskBase *)0x0;
  pFVar1 = (param_1->Pimpl).Reference;
  (this->Pimpl).Reference = pFVar1;
  if (pFVar1 != (FTaskBase *)0x0) {
    LOCK();
    pFVar1->RefCount = (atomic<unsigned_int>)((int)pFVar1->RefCount + 1);
    UNLOCK();
  }
  return this;
}

// operator= @ 141d6d680

FTaskHandle * __thiscall
UE::Tasks::Private::FTaskHandle::operator=(FTaskHandle *this,FTaskHandle *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  if (this != param_1) {
    pFVar3 = (this->Pimpl).Reference;
    (this->Pimpl).Reference = (param_1->Pimpl).Reference;
    (param_1->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar3 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar3->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  return this;
}

// IsAwaitable @ 141d7a190

bool __thiscall UE::Tasks::Private::FTaskHandle::IsAwaitable(FTaskHandle *this)

{
  FTaskBase *pFVar1;
  atomic<unsigned_int> aVar2;
  
  pFVar1 = (this->Pimpl).Reference;
  if (pFVar1 != (FTaskBase *)0x0) {
    aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 != pFVar1->ExecutingThreadId) {
      return true;
    }
  }
  return false;
}

// IsCompleted @ 141d7a1d0

bool __thiscall UE::Tasks::Private::FTaskHandle::IsCompleted(FTaskHandle *this)

{
  FTaskBase *pFVar1;
  
  pFVar1 = (this->Pimpl).Reference;
  if ((pFVar1 != (FTaskBase *)0x0) && ((pFVar1->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    return false;
  }
  return true;
}

// Wait @ 141d8de80

bool __thiscall UE::Tasks::Private::FTaskHandle::Wait(FTaskHandle *this,FTimespan param_1)

{
  FTaskBase *this_00;
  bool bVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_18;
  longlong local_10;
  
  this_00 = (this->Pimpl).Reference;
  if (this_00 != (FTaskBase *)0x0) {
    QueryPerformanceCounter(&local_res8);
    if (param_1.Ticks == 0x7fffffffffffffff) {
      local_10 = -1;
    }
    else if (0.0 < (double)param_1.Ticks * __real_3e7ad7f29abcaf48) {
      dVar2 = ((double)param_1.Ticks * __real_3e7ad7f29abcaf48) /
              FGenericPlatformTime::SecondsPerCycle64;
      local_10 = 0;
      if ((__real_43e0000000000000 <= dVar2) &&
         (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
        local_10 = -0x8000000000000000;
      }
      local_10 = (longlong)dVar2 + local_10;
    }
    else {
      local_10 = 0;
    }
    local_18 = local_res8;
    bVar1 = FTaskBase::Wait(this_00,(FTimeout *)&local_18.s);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// Wait @ 141d8df50

bool __thiscall UE::Tasks::Private::FTaskHandle::Wait(FTaskHandle *this)

{
  FTaskBase *this_00;
  
  this_00 = (this->Pimpl).Reference;
  if (this_00 != (FTaskBase *)0x0) {
    FTaskBase::Wait(this_00);
  }
  return true;
}

