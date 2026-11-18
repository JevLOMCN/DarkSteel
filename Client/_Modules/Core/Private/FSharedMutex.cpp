// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// LockSharedSlow @ 1414a29e0

void __thiscall UE::FSharedMutex::LockSharedSlow(FSharedMutex *this)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  bool *pbVar5;
  FBucket *pFVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  int iVar9;
  bool bVar10;
  FThread *local_res8;
  TDynamicUniqueLock<UE::FWordMutex> local_48;
  FSharedMutex *local_38;
  atomic<unsigned_int> local_30;
  
  aVar8 = this->State;
  iVar9 = 0;
LAB_1414a2a07:
  while( true ) {
    while (((uint)aVar8 & 3) == 0) {
      LOCK();
      aVar7 = this->State;
      bVar10 = aVar8 == aVar7;
      if (bVar10) {
        this->State = (atomic<unsigned_int>)((int)aVar8 + 8);
        aVar7 = aVar8;
      }
      aVar8 = aVar7;
      UNLOCK();
      if (bVar10) {
        return;
      }
    }
    if ((((uint)aVar8 & 2) != 0) || (0x27 < iVar9)) break;
    aVar8 = this->State;
    iVar9 = iVar9 + 1;
  }
  aVar7 = aVar8;
  if (((uint)aVar8 & 4) == 0) goto code_r0x0001414a2a54;
  goto LAB_1414a2a65;
code_r0x0001414a2a54:
  aVar7 = (atomic<unsigned_int>)((uint)aVar8 | 4);
  LOCK();
  aVar3 = this->State;
  bVar10 = aVar8 == aVar3;
  if (bVar10) {
    this->State = aVar7;
    aVar3 = aVar8;
  }
  aVar8 = aVar3;
  UNLOCK();
  if (!bVar10) goto LAB_1414a2a07;
LAB_1414a2a65:
  pbVar5 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
  puVar1 = &(this->State).field_0x1;
  bVar10 = *pbVar5;
  *pbVar5 = false;
  local_38 = this;
  local_30 = aVar7;
  ParkingLot::Private::FThreadLocalData::Get();
  local_48.Mutex = (FWordMutex *)0x0;
  local_48.bLocked = false;
  pFVar6 = ParkingLot::Private::FTable::FindOrCreateBucket(puVar1,&local_48);
  bVar4 = TFunctionWithContext<bool___cdecl(void)>::
          Call<_UE::FSharedMutex::LockSharedSlow_::__l4::<lambda_1>_>(&local_38);
  if (bVar4) {
    local_res8->WaitAddress = (atomic<void_const_*>)puVar1;
    (local_res8->Event).bWait = (atomic<bool>)0x1;
    if (pFVar6->Tail == (FThread *)0x0) {
      pFVar6->Head = local_res8;
    }
    else {
      pFVar6->Tail->Next = local_res8;
    }
    pFVar6->Tail = local_res8;
    if (local_48.bLocked != false) {
      FWordMutex::Unlock(local_48.Mutex);
    }
    if ((local_res8->Event).bWait != (atomic<bool>)0x0) {
      HAL::Private::FMicrosoftManualResetEvent::WaitSlow(&local_res8->Event);
    }
    local_res8->WakeToken = 0;
    LOCK();
    paVar2 = &local_res8->ReferenceCount;
    aVar8 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
  }
  else {
    if (local_48.bLocked != false) {
      FWordMutex::Unlock(local_48.Mutex);
    }
    if (local_res8 == (FThread *)0x0) goto LAB_1414a2b4c;
    LOCK();
    paVar2 = &local_res8->ReferenceCount;
    aVar8 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
  }
  if (aVar8 == (atomic<unsigned_int>)0x1) {
    ::operator_delete(local_res8,0x40,0x40);
  }
LAB_1414a2b4c:
  aVar8 = this->State;
  *pbVar5 = bVar10;
  goto LAB_1414a2a07;
}

// LockSlow @ 1414a3010

void __thiscall UE::FSharedMutex::LockSlow(FSharedMutex *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  bool *pbVar5;
  FBucket *pFVar6;
  int iVar7;
  bool bVar8;
  FThread *local_res8;
  FSharedMutex *local_res10;
  TDynamicUniqueLock<UE::FWordMutex> local_38;
  
  aVar4 = this->State;
  iVar7 = 0;
  do {
    while( true ) {
      while (((uint)aVar4 & 0xfffffff9) == 0) {
        LOCK();
        aVar2 = this->State;
        bVar8 = aVar4 == aVar2;
        if (bVar8) {
          this->State = (atomic<unsigned_int>)((uint)aVar4 | 1);
          aVar2 = aVar4;
        }
        aVar4 = aVar2;
        UNLOCK();
        if (bVar8) {
          return;
        }
      }
      if (((uint)aVar4 & 2) != 0) break;
      if (iVar7 < 0x28) {
        aVar4 = this->State;
        iVar7 = iVar7 + 1;
      }
      else {
        LOCK();
        aVar2 = this->State;
        bVar8 = aVar4 == aVar2;
        if (bVar8) {
          this->State = (atomic<unsigned_int>)((uint)aVar4 | 2);
          aVar2 = aVar4;
        }
        aVar4 = aVar2;
        UNLOCK();
        if (bVar8) break;
      }
    }
    pbVar5 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
    bVar8 = *pbVar5;
    *pbVar5 = false;
    local_res10 = this;
    ParkingLot::Private::FThreadLocalData::Get();
    local_38.Mutex = (FWordMutex *)0x0;
    local_38.bLocked = false;
    pFVar6 = ParkingLot::Private::FTable::FindOrCreateBucket(this,&local_38);
    bVar3 = TFunctionWithContext<bool___cdecl(void)>::
            Call<_UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::LockLoop_::__l4::<lambda_1>_>
                      (&local_res10);
    if (bVar3) {
      local_res8->WaitAddress = (atomic<void_const_*>)this;
      (local_res8->Event).bWait = (atomic<bool>)0x1;
      if (pFVar6->Tail == (FThread *)0x0) {
        pFVar6->Head = local_res8;
      }
      else {
        pFVar6->Tail->Next = local_res8;
      }
      pFVar6->Tail = local_res8;
      if (local_38.bLocked != false) {
        FWordMutex::Unlock(local_38.Mutex);
      }
      if ((local_res8->Event).bWait != (atomic<bool>)0x0) {
        HAL::Private::FMicrosoftManualResetEvent::WaitSlow(&local_res8->Event);
      }
      local_res8->WakeToken = 0;
      LOCK();
      paVar1 = &local_res8->ReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
joined_r0x0001414a3150:
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        ::operator_delete(local_res8,0x40,0x40);
      }
    }
    else {
      if (local_38.bLocked != false) {
        FWordMutex::Unlock(local_38.Mutex);
      }
      if (local_res8 != (FThread *)0x0) {
        LOCK();
        paVar1 = &local_res8->ReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        goto joined_r0x0001414a3150;
      }
    }
    aVar4 = this->State;
    *pbVar5 = bVar8;
  } while( true );
}

// WakeWaitingThread @ 1414b9ec0

void __thiscall UE::FSharedMutex::WakeWaitingThread(FSharedMutex *this)

{
  FSharedMutex *local_res8 [4];
  
  local_res8[0] = this;
  ParkingLot::Private::WakeOne
            (this,TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
                  Call<_UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::WakeWaitingThread_::__l2::<lambda_1>_>
             ,local_res8);
  return;
}

// WakeWaitingThreads @ 1414b9ef0

void __thiscall UE::FSharedMutex::WakeWaitingThreads(FSharedMutex *this,uint param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  char local_res10 [24];
  FSharedMutex *local_18;
  char *local_10;
  
  if ((param_1 & 2) != 0) {
    local_10 = local_res10;
    local_res10[0] = '\0';
    local_18 = this;
    ParkingLot::Private::WakeOne
              (this,TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
                    Call<_UE::TIntrusiveMutex<UE::FSharedMutex::FParams>::TryWakeWaitingThread_::__l2::<lambda_1>_>
               ,&local_18);
    if (local_res10[0] != '\0') {
      return;
    }
    if ((param_1 & 4) != 0) goto code_r0x0001414b9f41;
    param_1 = *(uint *)&this->State;
  }
  if ((param_1 & 4) == 0) {
    return;
  }
code_r0x0001414b9f41:
  aVar2 = this->State;
  do {
    LOCK();
    aVar1 = this->State;
    bVar3 = aVar2 == aVar1;
    if (bVar3) {
      this->State = (atomic<unsigned_int>)((uint)aVar2 & 0xfffffffb);
      aVar1 = aVar2;
    }
    aVar2 = aVar1;
    UNLOCK();
  } while (!bVar3);
  if (((uint)aVar2 & 4) != 0) {
    ParkingLot::WakeAll(&(this->State).field_0x1);
  }
  return;
}

