// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// LockSlow @ 1414a2d20

void __thiscall UE::FMutex::LockSlow(FMutex *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_char> aVar4;
  bool bVar5;
  bool *pbVar6;
  FBucket *pFVar7;
  int iVar8;
  bool bVar9;
  FThread *local_res8;
  FMutex *local_res10;
  TDynamicUniqueLock<UE::FWordMutex> local_38;
  
  aVar4 = this->State;
  iVar8 = 0;
  do {
    while( true ) {
      while (((byte)aVar4 & 1) == 0) {
        LOCK();
        aVar2 = this->State;
        bVar9 = aVar4 == aVar2;
        if (bVar9) {
          this->State = (atomic<unsigned_char>)((byte)aVar4 | 1);
          aVar2 = aVar4;
        }
        aVar4 = aVar2;
        UNLOCK();
        if (bVar9) {
          return;
        }
      }
      if (((byte)aVar4 & 2) != 0) break;
      if (iVar8 < 0x28) {
        aVar4 = this->State;
        iVar8 = iVar8 + 1;
      }
      else {
        LOCK();
        aVar2 = this->State;
        bVar9 = aVar4 == aVar2;
        if (bVar9) {
          this->State = (atomic<unsigned_char>)((byte)aVar4 | 2);
          aVar2 = aVar4;
        }
        aVar4 = aVar2;
        UNLOCK();
        if (bVar9) break;
      }
    }
    pbVar6 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
    bVar9 = *pbVar6;
    *pbVar6 = false;
    local_res10 = this;
    ParkingLot::Private::FThreadLocalData::Get();
    local_38.Mutex = (FWordMutex *)0x0;
    local_38.bLocked = false;
    pFVar7 = ParkingLot::Private::FTable::FindOrCreateBucket(this,&local_38);
    bVar5 = TFunctionWithContext<bool___cdecl(void)>::
            Call<_UE::TIntrusiveMutex<UE::FMutex::FParams>::LockLoop_::__l4::<lambda_1>_>
                      (&local_res10);
    if (bVar5) {
      local_res8->WaitAddress = (atomic<void_const_*>)this;
      (local_res8->Event).bWait = (atomic<bool>)0x1;
      if (pFVar7->Tail == (FThread *)0x0) {
        pFVar7->Head = local_res8;
      }
      else {
        pFVar7->Tail->Next = local_res8;
      }
      pFVar7->Tail = local_res8;
      if (local_38.bLocked != false) {
        FWordMutex::Unlock(local_38.Mutex);
      }
      if ((local_res8->Event).bWait != (atomic<bool>)0x0) {
        HAL::Private::FMicrosoftManualResetEvent::WaitSlow(&local_res8->Event);
      }
      local_res8->WakeToken = 0;
      LOCK();
      paVar1 = &local_res8->ReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
joined_r0x0001414a2e68:
      if (aVar3 == (atomic<unsigned_int>)0x1) {
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
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        goto joined_r0x0001414a2e68;
      }
    }
    aVar4 = this->State;
    *pbVar6 = bVar9;
  } while( true );
}

// WakeWaitingThread @ 1414b9e60

void __thiscall UE::FMutex::WakeWaitingThread(FMutex *this)

{
  FMutex *local_res8 [4];
  
  local_res8[0] = this;
  ParkingLot::Private::WakeOne
            (this,TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
                  Call<_UE::TIntrusiveMutex<UE::FMutex::FParams>::WakeWaitingThread_::__l2::<lambda_1>_>
             ,local_res8);
  return;
}

