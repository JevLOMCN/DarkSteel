// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// Lock @ 1414a2810

void __thiscall UE::FSharedRecursiveMutex::Lock(FSharedRecursiveMutex *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  
  aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
  aVar3 = this->State;
  if (((uint)aVar3 & 0xfffffffc) == 0) {
    LOCK();
    aVar1 = this->State;
    bVar4 = aVar3 == aVar1;
    if (bVar4) {
      this->State = (atomic<unsigned_int>)((uint)aVar3 | 4);
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
  this->State = (atomic<unsigned_int>)((int)this->State + 4);
  UNLOCK();
  return;
}

// LockShared @ 1414a2940

void __thiscall
UE::FSharedRecursiveMutex::LockShared
          (FSharedRecursiveMutex *this,FSharedRecursiveMutexLink *param_1)

{
  atomic<unsigned_int> aVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  ulonglong uVar5;
  bool bVar6;
  
  aVar1 = this->State;
  uVar5 = (ulonglong)_tls_index;
  if (((uint)aVar1 & 0xfffff000) != 0) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8);
    for (plVar3 = *(longlong **)(lVar2 + 0x48); plVar3 != (longlong *)0x0;
        plVar3 = (longlong *)plVar3[1]) {
      if ((FSharedRecursiveMutex *)*plVar3 == this) {
        LOCK();
        this->State = (atomic<unsigned_int>)((int)this->State + 0x1000);
        UNLOCK();
        param_1->OwnedMutex = this;
        param_1->Next = *(FSharedRecursiveMutexLink **)(lVar2 + 0x48);
        *(FSharedRecursiveMutexLink **)(lVar2 + 0x48) = param_1;
        return;
      }
    }
  }
  if (((uint)aVar1 & 0xffd) == 0) {
    LOCK();
    bVar6 = aVar1 == this->State;
    if (bVar6) {
      this->State = (atomic<unsigned_int>)((int)aVar1 + 0x1000);
    }
    pvVar4 = ThreadLocalStoragePointer;
    UNLOCK();
    if (bVar6) {
      param_1->OwnedMutex = this;
      lVar2 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
      param_1->Next = *(FSharedRecursiveMutexLink **)(lVar2 + 0x48);
      *(FSharedRecursiveMutexLink **)(lVar2 + 0x48) = param_1;
      return;
    }
  }
  LockSharedSlow(this,param_1);
  return;
}

// LockSharedSlow @ 1414a2b60

void __thiscall
UE::FSharedRecursiveMutex::LockSharedSlow
          (FSharedRecursiveMutex *this,FSharedRecursiveMutexLink *param_1)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  longlong lVar4;
  bool bVar5;
  bool *pbVar6;
  FBucket *pFVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  int iVar10;
  bool bVar11;
  FThread *local_res8;
  TDynamicUniqueLock<UE::FWordMutex> local_48;
  FSharedRecursiveMutex *local_38;
  atomic<unsigned_int> local_30;
  
  aVar9 = this->State;
  iVar10 = 0;
LAB_1414a2b86:
  while( true ) {
    while (((uint)aVar9 & 0xffd) == 0) {
      LOCK();
      aVar8 = this->State;
      bVar11 = aVar9 == aVar8;
      if (bVar11) {
        this->State = (atomic<unsigned_int>)((int)aVar9 + 0x1000);
        aVar8 = aVar9;
      }
      aVar9 = aVar8;
      UNLOCK();
      if (bVar11) {
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        param_1->OwnedMutex = this;
        param_1->Next = *(FSharedRecursiveMutexLink **)(lVar4 + 0x48);
        *(FSharedRecursiveMutexLink **)(lVar4 + 0x48) = param_1;
        return;
      }
    }
    if ((((uint)aVar9 & 1) != 0) || (0x27 < iVar10)) break;
    aVar9 = this->State;
    iVar10 = iVar10 + 1;
  }
  aVar8 = aVar9;
  if (((uint)aVar9 & 2) == 0) goto code_r0x0001414a2c01;
  goto LAB_1414a2c16;
code_r0x0001414a2c01:
  aVar8 = (atomic<unsigned_int>)((uint)aVar9 | 2);
  LOCK();
  aVar3 = this->State;
  bVar11 = aVar9 == aVar3;
  if (bVar11) {
    this->State = aVar8;
    aVar3 = aVar9;
  }
  aVar9 = aVar3;
  UNLOCK();
  if (!bVar11) goto LAB_1414a2b86;
LAB_1414a2c16:
  pbVar6 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
  puVar1 = &(this->State).field_0x1;
  bVar11 = *pbVar6;
  *pbVar6 = false;
  local_38 = this;
  local_30 = aVar8;
  ParkingLot::Private::FThreadLocalData::Get();
  local_48.Mutex = (FWordMutex *)0x0;
  local_48.bLocked = false;
  pFVar7 = ParkingLot::Private::FTable::FindOrCreateBucket(puVar1,&local_48);
  bVar5 = TFunctionWithContext<bool___cdecl(void)>::
          Call<_UE::FSharedRecursiveMutex::LockSharedSlow_::__l4::<lambda_1>_>(&local_38);
  if (bVar5) {
    local_res8->WaitAddress = (atomic<void_const_*>)puVar1;
    (local_res8->Event).bWait = (atomic<bool>)0x1;
    if (pFVar7->Tail == (FThread *)0x0) {
      pFVar7->Head = local_res8;
    }
    else {
      pFVar7->Tail->Next = local_res8;
    }
    pFVar7->Tail = local_res8;
    if (local_48.bLocked != false) {
      FWordMutex::Unlock(local_48.Mutex);
    }
    if ((local_res8->Event).bWait != (atomic<bool>)0x0) {
      HAL::Private::FMicrosoftManualResetEvent::WaitSlow(&local_res8->Event);
    }
    local_res8->WakeToken = 0;
    LOCK();
    paVar2 = &local_res8->ReferenceCount;
    aVar9 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
  }
  else {
    if (local_48.bLocked != false) {
      FWordMutex::Unlock(local_48.Mutex);
    }
    if (local_res8 == (FThread *)0x0) goto LAB_1414a2d08;
    LOCK();
    paVar2 = &local_res8->ReferenceCount;
    aVar9 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
  }
  if (aVar9 == (atomic<unsigned_int>)0x1) {
    ::operator_delete(local_res8,0x40,0x40);
  }
LAB_1414a2d08:
  aVar9 = this->State;
  *pbVar6 = bVar11;
  goto LAB_1414a2b86;
}

// LockSlow @ 1414a3180

void __thiscall
UE::FSharedRecursiveMutex::LockSlow(FSharedRecursiveMutex *this,uint param_1,uint param_2)

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
  FSharedRecursiveMutex *local_38;
  atomic<unsigned_int> local_30;
  
  iVar7 = 0;
  do {
    while( true ) {
      while ((param_1 & 0xfffffffc) == 0) {
        LOCK();
        aVar6 = this->State;
        bVar8 = (atomic<unsigned_int>)param_1 == aVar6;
        if (bVar8) {
          this->State = (atomic<unsigned_int>)(param_1 | 4);
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
            Call<_UE::FSharedRecursiveMutex::LockSlow_::__l4::<lambda_1>_>(&local_38);
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
joined_r0x0001414a32d8:
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
        goto joined_r0x0001414a32d8;
      }
    }
    param_1 = *(uint *)&this->State;
    *pbVar4 = bVar8;
  } while( true );
}

// TryLock @ 1414b7020

bool __thiscall UE::FSharedRecursiveMutex::TryLock(FSharedRecursiveMutex *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  
  aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
  aVar1 = this->State;
  if (((uint)aVar1 & 0xfffffffc) == 0) {
    LOCK();
    bVar3 = aVar1 == this->State;
    if (bVar3) {
      this->State = (atomic<unsigned_int>)((uint)aVar1 | 4);
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
  this->State = (atomic<unsigned_int>)((int)this->State + 4);
  UNLOCK();
  return true;
}

// TryLockShared @ 1414b7300

bool __thiscall
UE::FSharedRecursiveMutex::TryLockShared
          (FSharedRecursiveMutex *this,FSharedRecursiveMutexLink *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  ulonglong uVar6;
  bool bVar7;
  
  aVar2 = this->State;
  uVar6 = (ulonglong)_tls_index;
  if (((uint)aVar2 & 0xfffff000) != 0) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8);
    for (plVar4 = *(longlong **)(lVar3 + 0x48); plVar4 != (longlong *)0x0;
        plVar4 = (longlong *)plVar4[1]) {
      if ((FSharedRecursiveMutex *)*plVar4 == this) {
        LOCK();
        this->State = (atomic<unsigned_int>)((int)this->State + 0x1000);
        UNLOCK();
        param_1->OwnedMutex = this;
        param_1->Next = *(FSharedRecursiveMutexLink **)(lVar3 + 0x48);
        *(FSharedRecursiveMutexLink **)(lVar3 + 0x48) = param_1;
        return true;
      }
    }
  }
  do {
    if (((uint)aVar2 & 0xffd) != 0) {
      return false;
    }
    LOCK();
    aVar1 = this->State;
    bVar7 = aVar2 == aVar1;
    if (bVar7) {
      this->State = (atomic<unsigned_int>)((int)aVar2 + 0x1000);
      aVar1 = aVar2;
    }
    pvVar5 = ThreadLocalStoragePointer;
    UNLOCK();
    aVar2 = aVar1;
  } while (!bVar7);
  param_1->OwnedMutex = this;
  lVar3 = *(longlong *)((longlong)pvVar5 + uVar6 * 8);
  param_1->Next = *(FSharedRecursiveMutexLink **)(lVar3 + 0x48);
  *(FSharedRecursiveMutexLink **)(lVar3 + 0x48) = param_1;
  return true;
}

// Unlock @ 1414b84b0

void __thiscall UE::FSharedRecursiveMutex::Unlock(FSharedRecursiveMutex *this)

{
  atomic<unsigned_int> aVar1;
  
  if (((uint)this->State & 0xffc) == 4) {
    this->ThreadId = (atomic<unsigned_int>)0x0;
    LOCK();
    aVar1 = this->State;
    this->State = (atomic<unsigned_int>)((int)this->State + -4);
    UNLOCK();
    if (((uint)aVar1 & 3) != 0) {
      WakeWaitingThreads(this,(uint)aVar1);
      return;
    }
  }
  else {
    LOCK();
    this->State = (atomic<unsigned_int>)((int)this->State + -4);
    UNLOCK();
  }
  return;
}

// UnlockShared @ 1414b8630

void __thiscall
UE::FSharedRecursiveMutex::UnlockShared
          (FSharedRecursiveMutex *this,FSharedRecursiveMutexLink *param_1)

{
  atomic<unsigned_int> aVar1;
  FSharedRecursiveMutexLink *pFVar2;
  FSharedRecursiveMutexLink **ppFVar3;
  FSharedRecursiveMutex *local_res8 [4];
  
  ppFVar3 = (FSharedRecursiveMutexLink **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x48);
  pFVar2 = *ppFVar3;
  do {
    if (pFVar2 == (FSharedRecursiveMutexLink *)0x0) {
LAB_1414b867a:
      LOCK();
      aVar1 = this->State;
      this->State = (atomic<unsigned_int>)((int)this->State + -0x1000);
      UNLOCK();
      if (((uint)aVar1 & 0xfffffffd) == 0x1001) {
        local_res8[0] = this;
        ParkingLot::Private::WakeOne
                  (this,TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
                        Call<_UE::FSharedRecursiveMutex::UnlockShared_::__l6::<lambda_1>_>,
                   local_res8);
      }
      return;
    }
    if (pFVar2 == param_1) {
      *ppFVar3 = param_1->Next;
      param_1->OwnedMutex = (FSharedRecursiveMutex *)0x0;
      param_1->Next = (FSharedRecursiveMutexLink *)0x0;
      goto LAB_1414b867a;
    }
    ppFVar3 = &pFVar2->Next;
    pFVar2 = pFVar2->Next;
  } while( true );
}

// WakeWaitingThreads @ 1414b9f70

void __thiscall
UE::FSharedRecursiveMutex::WakeWaitingThreads(FSharedRecursiveMutex *this,uint param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  char local_res10 [24];
  FSharedRecursiveMutex *local_18;
  char *local_10;
  
  if ((param_1 & 1) != 0) {
    local_10 = local_res10;
    local_res10[0] = '\0';
    local_18 = this;
    ParkingLot::Private::WakeOne
              (this,TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
                    Call<_UE::FSharedRecursiveMutex::WakeWaitingThreads_::__l5::<lambda_1>_>,
               &local_18);
    if (local_res10[0] != '\0') {
      return;
    }
    if ((param_1 & 2) != 0) goto code_r0x0001414b9fc1;
    param_1 = *(uint *)&this->State;
  }
  if ((param_1 & 2) == 0) {
    return;
  }
code_r0x0001414b9fc1:
  aVar2 = this->State;
  do {
    LOCK();
    aVar1 = this->State;
    bVar3 = aVar2 == aVar1;
    if (bVar3) {
      this->State = (atomic<unsigned_int>)((uint)aVar2 & 0xfffffffd);
      aVar1 = aVar2;
    }
    aVar2 = aVar1;
    UNLOCK();
  } while (!bVar3);
  if (((uint)aVar2 & 2) != 0) {
    ParkingLot::WakeAll(&(this->State).field_0x1);
  }
  return;
}

