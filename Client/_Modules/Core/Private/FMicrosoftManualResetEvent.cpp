// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Notify @ 14182cb80

void __thiscall
UE::HAL::Private::FMicrosoftManualResetEvent::Notify(FMicrosoftManualResetEvent *this)

{
  this->bWait = (atomic<bool>)0x0;
  WakeByAddressSingle();
  return;
}

// WaitForSlow @ 14183ad70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::HAL::Private::FMicrosoftManualResetEvent::WaitForSlow
          (FMicrosoftManualResetEvent *this,FMonotonicTimeSpan param_1)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  FMonotonicTimePoint FVar4;
  double dVar5;
  atomic<bool> local_res8 [16];
  FOversubscriptionScope local_res18 [8];
  
  local_res8[0] = this->bWait;
  if ((local_res8[0] != (atomic<bool>)0x0) && (0.0 < param_1.Time)) {
    local_res18[0].bIncrementOversubscriptionEmitted = false;
    local_res18[0].bCpuBeginEventEmitted = false;
    LowLevelTasks::FOversubscriptionScope::TryIncrementOversubscription(local_res18);
    dVar5 = param_1.Time * __real_408f400000000000;
    if (dVar5 <= ___real_41efffffffc00000) {
      iVar2 = -(int)((longlong)ROUND(__real_bfe0000000000000 - (dVar5 + dVar5)) >> 1);
    }
    else {
      iVar2 = -1;
    }
    iVar2 = WaitOnAddress(this,local_res8,1,iVar2);
    if ((iVar2 == 0) && (DVar3 = GetLastError(), DVar3 == 0x5b4)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    local_res8[0] = this->bWait;
    if ((local_res8[0] == (atomic<bool>)0x0) || (bVar1)) {
      bVar1 = local_res8[0] == (atomic<bool>)0x0;
    }
    else {
      FVar4 = FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
      bVar1 = WaitUntilSlow(this,(FMonotonicTimePoint)(param_1.Time + *FVar4.Time));
    }
    if (local_res18[0].bIncrementOversubscriptionEmitted != false) {
      LowLevelTasks::FOversubscriptionScope::DecrementOversubscription(local_res18);
    }
    return bVar1;
  }
  return local_res8[0] == (atomic<bool>)0x0;
}

// WaitSlow @ 14183ae80

void __thiscall
UE::HAL::Private::FMicrosoftManualResetEvent::WaitSlow(FMicrosoftManualResetEvent *this)

{
  atomic<bool> local_res8 [8];
  FOversubscriptionScope local_res10 [12];
  
  local_res10[0].bIncrementOversubscriptionEmitted = false;
  local_res10[0].bCpuBeginEventEmitted = false;
  LowLevelTasks::FOversubscriptionScope::TryIncrementOversubscription(local_res10);
  local_res8[0] = this->bWait;
  while (local_res8[0] != (atomic<bool>)0x0) {
    WaitOnAddress(this,local_res8,1,0xffffffff);
    local_res8[0] = this->bWait;
  }
  if (local_res10[0].bIncrementOversubscriptionEmitted != false) {
    LowLevelTasks::FOversubscriptionScope::DecrementOversubscription(local_res10);
  }
  return;
}

// WaitUntilSlow @ 14183af00

bool __thiscall
UE::HAL::Private::FMicrosoftManualResetEvent::WaitUntilSlow
          (FMicrosoftManualResetEvent *this,FMonotonicTimePoint param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FMonotonicTimePoint FVar5;
  int iVar6;
  bool bVar7;
  atomic<bool> local_res8 [16];
  FOversubscriptionScope local_res18 [8];
  
  FVar5 = FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
  dVar1 = param_1.Time - *FVar5.Time;
  local_res18[0].bIncrementOversubscriptionEmitted = false;
  local_res18[0].bCpuBeginEventEmitted = false;
  if (0.0 < dVar1) {
    LowLevelTasks::FOversubscriptionScope::TryIncrementOversubscription(local_res18);
  }
  dVar4 = __real_409f400000000000;
  dVar3 = __real_bfe0000000000000;
  dVar2 = __real_7ff0000000000000;
  local_res8[0] = this->bWait;
  bVar7 = local_res8[0] == (atomic<bool>)0x0;
  if (!bVar7) {
    do {
      if (dVar1 <= 0.0) break;
      if (param_1.Time == dVar2) {
        iVar6 = -1;
      }
      else {
        iVar6 = -(int)((longlong)ROUND(dVar3 - dVar1 * dVar4) >> 1);
      }
      WaitOnAddress(this,local_res8,1,iVar6);
      FVar5 = FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
      dVar1 = param_1.Time - *FVar5.Time;
      local_res8[0] = this->bWait;
    } while (local_res8[0] != (atomic<bool>)0x0);
    bVar7 = local_res8[0] == (atomic<bool>)0x0;
  }
  if (local_res18[0].bIncrementOversubscriptionEmitted != false) {
    LowLevelTasks::FOversubscriptionScope::DecrementOversubscription(local_res18);
  }
  return bVar7;
}

