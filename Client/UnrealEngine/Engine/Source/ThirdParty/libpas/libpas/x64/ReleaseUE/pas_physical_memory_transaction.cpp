// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 4

// pas_physical_memory_transaction_construct @ 140d810e0

void __cdecl pas_physical_memory_transaction_construct(pas_physical_memory_transaction *param_1)

{
  param_1->lock_to_acquire_next_time = (pas_lock *)0x0;
  param_1->lock_held = (pas_lock *)0x0;
  return;
}

// pas_physical_memory_transaction_begin @ 140d810f0

void __cdecl pas_physical_memory_transaction_begin(pas_physical_memory_transaction *param_1)

{
  code *pcVar1;
  
  if (param_1->lock_held == (pas_lock *)0x0) {
    if ((PSRWLOCK)param_1->lock_to_acquire_next_time != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)param_1->lock_to_acquire_next_time);
      param_1->lock_held = param_1->lock_to_acquire_next_time;
      param_1->lock_to_acquire_next_time = (pas_lock *)0x0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_physical_memory_transaction_end @ 140d81130

bool __cdecl pas_physical_memory_transaction_end(pas_physical_memory_transaction *param_1)

{
  if ((PSRWLOCK)param_1->lock_held != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)param_1->lock_held);
    param_1->lock_held = (pas_lock *)0x0;
  }
  return param_1->lock_to_acquire_next_time == (pas_lock *)0x0;
}

// pas_physical_memory_transaction_did_fail_to_acquire_lock @ 140d81170

void __cdecl
pas_physical_memory_transaction_did_fail_to_acquire_lock
          (pas_physical_memory_transaction *param_1,pas_lock *param_2)

{
  code *pcVar1;
  
  if (param_2 == (pas_lock *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1->lock_held != param_2) {
    if (param_1->lock_to_acquire_next_time != (pas_lock *)0x0) {
      return;
    }
    param_1->lock_to_acquire_next_time = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

