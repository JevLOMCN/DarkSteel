// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Lock @ 1414a2760

void __thiscall UE::FRecursiveMutex::Lock(FRecursiveMutex *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  
  aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
  aVar3 = this->State;
  if (((uint)aVar3 & 0xfffffffe) == 0) {
    LOCK();
    aVar1 = this->State;
    bVar4 = aVar3 == aVar1;
    if (bVar4) {
      this->State = (atomic<unsigned_int>)((uint)aVar3 | 2);
      aVar1 = aVar3;
    }
    aVar3 = aVar1;
    UNLOCK();
    if (bVar4) {
      this->ThreadId = aVar2;
      return;
    }
  }
  if (this->ThreadId != aVar2) {
    LockSlow(this,(uint)aVar3,(uint)aVar2);
    return;
  }
  LOCK();
  this->State = (atomic<unsigned_int>)((int)this->State + 2);
  UNLOCK();
  return;
}

// LockSlow @ 1414a2e90

void __thiscall UE::FRecursiveMutex::LockSlow(FRecursiveMutex *this,uint param_1,uint param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  bool *pbVar4;
  FBucket *pFVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  bool bVar8;
  FThread *local_res8;
  TDynamicUniqueLock<UE::FWordMutex> local_48;
  FRecursiveMutex *local_38;
  atomic<unsigned_int> local_30;
  
  iVar7 = 0;
  do {
    while( true ) {
      while ((param_1 & 0xfffffffe) == 0) {
        LOCK();
        aVar6 = this->State;
        bVar8 = (atomic<unsigned_int>)param_1 == aVar6;
        if (bVar8) {
          this->State = (atomic<unsigned_int>)(param_1 | 2);
          aVar6 = (atomic<unsigned_int>)param_1;
        }
        param_1 = (uint)aVar6;
        UNLOCK();
        if (bVar8) {
          this->ThreadId = (atomic<unsigned_int>)param_2;
          return;
        }
      }
      aVar6 = (atomic<unsigned_int>)param_1;
      if ((param_1 & 1) != 0) break;
      if (iVar7 < 0x28) {
        param_1 = *(uint *)&this->State;
        iVar7 = iVar7 + 1;
      }
      else {
        aVar6 = (atomic<unsigned_int>)(param_1 | 1);
        LOCK();
        aVar2 = this->State;
        bVar8 = (atomic<unsigned_int>)param_1 == aVar2;
        if (bVar8) {
          this->State = aVar6;
          aVar2 = (atomic<unsigned_int>)param_1;
        }
        param_1 = (uint)aVar2;
        UNLOCK();
        if (bVar8) break;
      }
    }
    pbVar4 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
    bVar8 = *pbVar4;
    *pbVar4 = false;
    local_38 = this;
    local_30 = aVar6;
    ParkingLot::Private::FThreadLocalData::Get();
    local_48.Mutex = (FWordMutex *)0x0;
    local_48.bLocked = false;
    pFVar5 = ParkingLot::Private::FTable::FindOrCreateBucket(this,&local_48);
    bVar3 = TFunctionWithContext<bool___cdecl(void)>::
            Call<_UE::FRecursiveMutex::LockSlow_::__l4::<lambda_1>_>(&local_38);
    if (bVar3) {
      local_res8->WaitAddress = (atomic<void_const_*>)this;
      (local_res8->Event).bWait = (atomic<bool>)0x1;
      if (pFVar5->Tail == (FThread *)0x0) {
        pFVar5->Head = local_res8;
      }
      else {
        pFVar5->Tail->Next = local_res8;
      }
      pFVar5->Tail = local_res8;
      if (local_48.bLocked != false) {
        FWordMutex::Unlock(local_48.Mutex);
      }
      if ((local_res8->Event).bWait != (atomic<bool>)0x0) {
        HAL::Private::FMicrosoftManualResetEvent::WaitSlow(&local_res8->Event);
      }
      local_res8->WakeToken = 0;
      LOCK();
      paVar1 = &local_res8->ReferenceCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
joined_r0x0001414a2fe8:
      if (aVar6 == (atomic<unsigned_int>)0x1) {
        ::operator_delete(local_res8,0x40,0x40);
      }
    }
    else {
      if (local_48.bLocked != false) {
        FWordMutex::Unlock(local_48.Mutex);
      }
      if (local_res8 != (FThread *)0x0) {
        LOCK();
        paVar1 = &local_res8->ReferenceCount;
        aVar6 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        goto joined_r0x0001414a2fe8;
      }
    }
    param_1 = *(uint *)&this->State;
    *pbVar4 = bVar8;
  } while( true );
}

// TryLock @ 1414b6f70

bool __thiscall UE::FRecursiveMutex::TryLock(FRecursiveMutex *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  
  aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
  aVar1 = this->State;
  if (((uint)aVar1 & 0xfffffffe) == 0) {
    LOCK();
    bVar3 = aVar1 == this->State;
    if (bVar3) {
      this->State = (atomic<unsigned_int>)((uint)aVar1 | 2);
    }
    UNLOCK();
    if (bVar3) {
      this->ThreadId = aVar2;
      return true;
    }
  }
  if (this->ThreadId != aVar2) {
    return false;
  }
  LOCK();
  this->State = (atomic<unsigned_int>)((int)this->State + 2);
  UNLOCK();
  return true;
}

// Unlock @ 1414b8460

void __thiscall UE::FRecursiveMutex::Unlock(FRecursiveMutex *this)

{
  atomic<unsigned_int> aVar1;
  
  if (((uint)this->State & 0xfffffffe) == 2) {
    this->ThreadId = (atomic<unsigned_int>)0x0;
    LOCK();
    aVar1 = this->State;
    this->State = (atomic<unsigned_int>)((int)this->State + -2);
    UNLOCK();
    if (((uint)aVar1 & 1) != 0) {
      WakeWaitingThread(this);
      return;
    }
  }
  else {
    LOCK();
    this->State = (atomic<unsigned_int>)((int)this->State + -2);
    UNLOCK();
  }
  return;
}

// WakeWaitingThread @ 1414b9e90

void __thiscall UE::FRecursiveMutex::WakeWaitingThread(FRecursiveMutex *this)

{
  FRecursiveMutex *local_res8 [4];
  
  local_res8[0] = this;
  ParkingLot::Private::WakeOne
            (this,TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
                  Call<_UE::FRecursiveMutex::WakeWaitingThread_::__l2::<lambda_1>_>,local_res8);
  return;
}

