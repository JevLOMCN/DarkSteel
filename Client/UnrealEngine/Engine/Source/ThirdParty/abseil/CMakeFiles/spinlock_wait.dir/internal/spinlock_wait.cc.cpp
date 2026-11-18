// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 5

// SpinLockDelay @ 1501d8f40

/* void __cdecl absl::lts_20240722::base_internal::SpinLockDelay(struct std::atomic<unsigned int> *
   __ptr64,unsigned int,int,enum absl::lts_20240722::base_internal::SchedulingMode) */

void __cdecl
absl::lts_20240722::base_internal::SpinLockDelay
          (atomic<unsigned_int> *param_1,uint param_2,int param_3,SchedulingMode param_4)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001501d8f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(0);
    return;
  }
  DAT_155407750 = DAT_155407750 * 0x5deece66d + 0xb;
  if (0x20 < (uint)param_3) {
    param_3 = 0x20;
  }
  uVar1 = 0x20000 << ((byte)((uint)param_3 >> 3) & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x0001501d8fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep((int)(uVar1 - 1 & (uint)DAT_155407750 | uVar1) / 1000000);
  return;
}

// SpinLockSuggestedDelayNS @ 1501d8fc0

/* int __cdecl absl::lts_20240722::base_internal::SpinLockSuggestedDelayNS(int) */

int __cdecl absl::lts_20240722::base_internal::SpinLockSuggestedDelayNS(int param_1)

{
  uint uVar1;
  
  DAT_155407750 = DAT_155407750 * 0x5deece66d + 0xb;
  if (0x20 < (uint)param_1) {
    param_1 = 0x20;
  }
  uVar1 = 0x20000 << ((byte)((uint)param_1 >> 3) & 0x1f);
  return uVar1 - 1 & (uint)DAT_155407750 | uVar1;
}

// SpinLockWait @ 1501d9010

/* unsigned int __cdecl absl::lts_20240722::base_internal::SpinLockWait(struct std::atomic<unsigned
   int> * __ptr64,int,struct absl::lts_20240722::base_internal::SpinLockWaitTransition const *
   __ptr64 const,enum absl::lts_20240722::base_internal::SchedulingMode) */

uint __cdecl
absl::lts_20240722::base_internal::SpinLockWait
          (atomic<unsigned_int> *param_1,int param_2,SpinLockWaitTransition *param_3,
          SchedulingMode param_4)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  longlong lVar4;
  atomic<unsigned_int> *paVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = 0;
  lVar6 = (longlong)param_2;
LAB_1501d9041:
  do {
    aVar2 = *param_1;
    lVar4 = 0;
    paVar5 = (atomic<unsigned_int> *)param_3;
    if (lVar6 != 0) {
      do {
        if (aVar2 == *paVar5) {
          if (lVar4 != lVar6) {
            if (*(atomic<unsigned_int> *)(param_3 + lVar4 * 0xc + 4) != aVar2) {
              LOCK();
              aVar1 = *param_1;
              if (aVar2 == aVar1) {
                *param_1 = *(atomic<unsigned_int> *)(param_3 + lVar4 * 0xc + 4);
              }
              UNLOCK();
              if (aVar2 != aVar1) goto LAB_1501d9041;
            }
            if (param_3[lVar4 * 0xc + 8] != (SpinLockWaitTransition)0x0) {
              return (uint)aVar2;
            }
            goto LAB_1501d9041;
          }
          break;
        }
        lVar4 = lVar4 + 1;
        paVar5 = paVar5 + 3;
      } while (lVar4 != lVar6);
    }
    uVar7 = uVar7 + 1;
    if (uVar7 != 0) {
      if (uVar7 == 1) {
        Sleep(0);
      }
      else {
        DAT_155407750 = DAT_155407750 * 0x5deece66d + 0xb;
        uVar3 = uVar7;
        if (0x20 < uVar7) {
          uVar3 = 0x20;
        }
        uVar3 = 0x20000 << ((byte)((int)(((int)uVar3 >> 0x1f & 7U) + uVar3) >> 3) & 0x1f);
        Sleep((int)(uVar3 - 1 & (uint)DAT_155407750 | uVar3) / 1000000);
      }
    }
  } while( true );
}

// AbslInternalSpinLockDelay_lts_20240722 @ 1501d9110

void AbslInternalSpinLockDelay_lts_20240722(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001501d911d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(0);
    return;
  }
  DAT_155407750 = DAT_155407750 * 0x5deece66d + 0xb;
  if (0x20 < param_3) {
    param_3 = 0x20;
  }
  uVar1 = 0x20000 << ((byte)(param_3 >> 3) & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x0001501d9177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep((int)(uVar1 - 1 & (uint)DAT_155407750 | uVar1) / 1000000);
  return;
}

// AbslInternalSpinLockWake_lts_20240722 @ 1501d9190

void AbslInternalSpinLockWake_lts_20240722(void)

{
  return;
}

