// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Lock @ 1414a2870

void __thiscall UE::FWordMutex::Lock(FWordMutex *this)

{
  atomic<unsigned___int64> aVar1;
  bool *pbVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  ulonglong local_28;
  ulonglong *puStack_20;
  FMicrosoftManualResetEvent local_18 [16];
  
  LOCK();
  bVar5 = this->State == (atomic<unsigned___int64>)0x0;
  if (bVar5) {
    this->State = (atomic<unsigned___int64>)0x1;
  }
  UNLOCK();
  if (bVar5) {
    return;
  }
  do {
    iVar4 = 0;
    do {
      while( true ) {
        while (aVar1 = this->State, ((ulonglong)aVar1 & 1) == 0) {
          LOCK();
          bVar5 = aVar1 == this->State;
          if (bVar5) {
            this->State = (atomic<unsigned___int64>)((ulonglong)aVar1 | 1);
          }
          UNLOCK();
          if (bVar5) {
            return;
          }
        }
        uVar3 = (ulonglong)aVar1 & 0xfffffffffffffffc;
        if ((uVar3 != 0) || (0x27 < iVar4)) break;
        iVar4 = iVar4 + 1;
      }
      local_28 = 0;
      puStack_20 = (ulonglong *)0x0;
      local_18[0].bWait = (atomic<bool>)0x1;
      if (uVar3 == 0) {
        puStack_20 = &local_28;
        uVar3 = local_28;
      }
      local_28 = uVar3;
      LOCK();
      bVar5 = aVar1 == this->State;
      if (bVar5) {
        this->State = (atomic<unsigned___int64>)
                      ((ulonglong)(aVar1._0_4_ & 3) | (ulonglong)&local_28);
      }
      UNLOCK();
    } while (!bVar5);
    pbVar2 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
    bVar5 = *pbVar2;
    *pbVar2 = false;
    if (local_18[0].bWait != (atomic<bool>)0x0) {
      HAL::Private::FMicrosoftManualResetEvent::WaitSlow(local_18);
    }
    *pbVar2 = bVar5;
  } while( true );
}

// LockSlow @ 1414a3300

void __thiscall UE::FWordMutex::LockSlow(FWordMutex *this)

{
  atomic<unsigned___int64> aVar1;
  bool *pbVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  ulonglong local_28;
  ulonglong *puStack_20;
  FMicrosoftManualResetEvent local_18 [16];
  
  do {
    iVar4 = 0;
    do {
      while( true ) {
        while (aVar1 = this->State, ((ulonglong)aVar1 & 1) == 0) {
          LOCK();
          bVar5 = aVar1 == this->State;
          if (bVar5) {
            this->State = (atomic<unsigned___int64>)((ulonglong)aVar1 | 1);
          }
          UNLOCK();
          if (bVar5) {
            return;
          }
        }
        uVar3 = (ulonglong)aVar1 & 0xfffffffffffffffc;
        if ((uVar3 != 0) || (0x27 < iVar4)) break;
        iVar4 = iVar4 + 1;
      }
      local_28 = 0;
      puStack_20 = (ulonglong *)0x0;
      local_18[0].bWait = (atomic<bool>)0x1;
      if (uVar3 == 0) {
        puStack_20 = &local_28;
        uVar3 = local_28;
      }
      local_28 = uVar3;
      LOCK();
      bVar5 = aVar1 == this->State;
      if (bVar5) {
        this->State = (atomic<unsigned___int64>)
                      ((ulonglong)(aVar1._0_4_ & 3) | (ulonglong)&local_28);
      }
      UNLOCK();
    } while (!bVar5);
    pbVar2 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
    bVar5 = *pbVar2;
    *pbVar2 = false;
    if (local_18[0].bWait != (atomic<bool>)0x0) {
      HAL::Private::FMicrosoftManualResetEvent::WaitSlow(local_18);
    }
    *pbVar2 = bVar5;
  } while( true );
}

// Unlock @ 1414b8540

void __thiscall UE::FWordMutex::Unlock(FWordMutex *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  atomic<unsigned___int64> aVar5;
  atomic<unsigned___int64> aVar6;
  longlong *plVar7;
  atomic<unsigned___int64> aVar8;
  bool bVar9;
  
  LOCK();
  aVar6 = this->State;
  this->State = (atomic<unsigned___int64>)((longlong)this->State + -1);
  UNLOCK();
  if ((((ulonglong)aVar6 & 0xfffffffffffffffc) != 0) && (((ulonglong)aVar6 & 2) == 0)) {
    aVar6 = (atomic<unsigned___int64>)((ulonglong)aVar6 & 0xfffffffffffffffe);
    while( true ) {
      aVar8 = (atomic<unsigned___int64>)((ulonglong)aVar6 | 2);
      LOCK();
      aVar5 = this->State;
      bVar9 = aVar6 == aVar5;
      if (bVar9) {
        this->State = aVar8;
        aVar5 = aVar6;
      }
      UNLOCK();
      if (bVar9) {
        do {
          while( true ) {
            plVar7 = (longlong *)((ulonglong)aVar8 & 0xfffffffffffffffc);
            plVar1 = plVar7 + 1;
            puVar2 = (undefined8 *)plVar7[1];
            while (puVar2 == (undefined8 *)0x0) {
              plVar3 = (longlong *)*plVar7;
              *plVar1 = plVar3[1];
              plVar3[1] = (longlong)plVar7;
              plVar7 = plVar3;
              puVar2 = (undefined8 *)*plVar1;
            }
            if (((ulonglong)aVar8 & 1) == 0) break;
            LOCK();
            aVar6 = this->State;
            bVar9 = aVar8 == aVar6;
            if (bVar9) {
              this->State = (atomic<unsigned___int64>)((ulonglong)aVar8 & 0xfffffffffffffffd);
              aVar6 = aVar8;
            }
            UNLOCK();
            aVar8 = aVar6;
            if (bVar9) {
              return;
            }
          }
          puVar4 = (undefined8 *)puVar2[1];
          if (puVar4 != puVar2) {
            *puVar4 = 0;
            *plVar1 = (longlong)puVar4;
            LOCK();
            this->State = (atomic<unsigned___int64>)((ulonglong)this->State & 0xfffffffffffffffd);
            UNLOCK();
            HAL::Private::FMicrosoftManualResetEvent::Notify
                      ((FMicrosoftManualResetEvent *)(puVar2 + 2));
            return;
          }
          LOCK();
          aVar6 = this->State;
          bVar9 = aVar8 == aVar6;
          if (bVar9) {
            this->State = (atomic<unsigned___int64>)0x0;
            aVar6 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar6;
        } while (!bVar9);
        HAL::Private::FMicrosoftManualResetEvent::Notify((FMicrosoftManualResetEvent *)(puVar2 + 2))
        ;
        return;
      }
      if (((ulonglong)aVar5 & 2) != 0) break;
      aVar6 = aVar5;
      if (((ulonglong)aVar5 & 0xfffffffffffffffc) == 0) {
        return;
      }
    }
  }
  return;
}

// UnlockSlow @ 1414b86b0

void __thiscall UE::FWordMutex::UnlockSlow(FWordMutex *this,ulong64 param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  atomic<unsigned___int64> aVar5;
  atomic<unsigned___int64> aVar6;
  longlong *plVar7;
  atomic<unsigned___int64> aVar8;
  bool bVar9;
  
  aVar6 = (atomic<unsigned___int64>)(param_1 & 0xfffffffffffffffe);
  do {
    aVar8 = (atomic<unsigned___int64>)((ulonglong)aVar6 | 2);
    LOCK();
    aVar5 = this->State;
    bVar9 = aVar6 == aVar5;
    if (bVar9) {
      this->State = aVar8;
      aVar5 = aVar6;
    }
    UNLOCK();
    if (bVar9) {
      do {
        while( true ) {
          plVar7 = (longlong *)((ulonglong)aVar8 & 0xfffffffffffffffc);
          plVar1 = plVar7 + 1;
          puVar2 = (undefined8 *)plVar7[1];
          while (puVar2 == (undefined8 *)0x0) {
            plVar3 = (longlong *)*plVar7;
            *plVar1 = plVar3[1];
            plVar3[1] = (longlong)plVar7;
            plVar7 = plVar3;
            puVar2 = (undefined8 *)*plVar1;
          }
          if (((ulonglong)aVar8 & 1) == 0) break;
          LOCK();
          aVar6 = this->State;
          bVar9 = aVar8 == aVar6;
          if (bVar9) {
            this->State = (atomic<unsigned___int64>)((ulonglong)aVar8 & 0xfffffffffffffffd);
            aVar6 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar6;
          if (bVar9) {
            return;
          }
        }
        puVar4 = (undefined8 *)puVar2[1];
        if (puVar4 != puVar2) {
          *puVar4 = 0;
          *plVar1 = (longlong)puVar4;
          LOCK();
          this->State = (atomic<unsigned___int64>)((ulonglong)this->State & 0xfffffffffffffffd);
          UNLOCK();
          HAL::Private::FMicrosoftManualResetEvent::Notify
                    ((FMicrosoftManualResetEvent *)(puVar2 + 2));
          return;
        }
        LOCK();
        aVar6 = this->State;
        bVar9 = aVar8 == aVar6;
        if (bVar9) {
          this->State = (atomic<unsigned___int64>)0x0;
          aVar6 = aVar8;
        }
        UNLOCK();
        aVar8 = aVar6;
      } while (!bVar9);
      HAL::Private::FMicrosoftManualResetEvent::Notify((FMicrosoftManualResetEvent *)(puVar2 + 2));
      return;
    }
    if (((ulonglong)aVar5 & 2) != 0) {
      return;
    }
    aVar6 = aVar5;
  } while (((ulonglong)aVar5 & 0xfffffffffffffffc) != 0);
  return;
}

