// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 7

// _Init_thread_abort @ 15015b4b0

void __cdecl _Init_thread_abort(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&g_tss_srw);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&g_tss_srw);
                    /* WARNING: Could not recover jumptable at 0x00015015b4e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&g_tss_cv);
  return;
}

// _Init_thread_footer @ 15015b4f4

void __cdecl _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&g_tss_srw);
  uVar1 = (ulonglong)_tls_index;
  _Init_global_epoch = _Init_global_epoch + 1;
  *param_1 = _Init_global_epoch;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) =
       _Init_global_epoch;
  ReleaseSRWLockExclusive((PSRWLOCK)&g_tss_srw);
                    /* WARNING: Could not recover jumptable at 0x00015015b556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&g_tss_cv);
  return;
}

// _Init_thread_header @ 15015b564

void __cdecl _Init_thread_header(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&g_tss_srw);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_15015b5cc:
                    /* WARNING: Could not recover jumptable at 0x00015015b5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&g_tss_srw);
      return;
    }
    if (*param_1 != -1) {
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) = _Init_global_epoch;
      goto LAB_15015b5cc;
    }
    SleepConditionVariableSRW((PCONDITION_VARIABLE)&g_tss_cv,(PSRWLOCK)&g_tss_srw,0xffffffff,0);
  } while( true );
}

// _Init_thread_lock @ 15015b5e8

void __cdecl _Init_thread_lock(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015b5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockExclusive((PSRWLOCK)&g_tss_srw);
  return;
}

// _Init_thread_notify @ 15015b5fc

void __cdecl _Init_thread_notify(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015b603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&g_tss_cv);
  return;
}

// _Init_thread_unlock @ 15015b610

void __cdecl _Init_thread_unlock(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015b617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&g_tss_srw);
  return;
}

// _Init_thread_wait_v2 @ 15015b624

void __cdecl _Init_thread_wait_v2(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015b639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SleepConditionVariableSRW((PCONDITION_VARIABLE)&g_tss_cv,(PSRWLOCK)&g_tss_srw,0xffffffff,0);
  return;
}

