// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 5

// CreateThreadIdentity @ 1501f3020

/* WARNING: Removing unreachable block (ram,0x0001501f3040) */
/* WARNING: Removing unreachable block (ram,0x0001501f3048) */
/* struct absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 __cdecl
   absl::lts_20240722::synchronization_internal::CreateThreadIdentity(void) */

ThreadIdentity * __cdecl absl::lts_20240722::synchronization_internal::CreateThreadIdentity(void)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ThreadIdentity *pTVar5;
  
  uVar2 = DAT_155409868;
  if ((DAT_155409868 & 1) == 0) {
    DAT_155409868 = DAT_155409868 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar2 & 1) == 0) {
    base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155409868);
  }
  uVar2 = DAT_155409868;
  pTVar5 = (ThreadIdentity *)0x0;
  if (DAT_155409870 != (ThreadIdentity *)0x0) {
    pTVar5 = DAT_155409870;
    DAT_155409870 = DAT_155409870->next;
  }
  uVar4 = DAT_155409868 & 2;
  LOCK();
  UNLOCK();
  uVar1 = DAT_155409868 & 0xfffffff8;
  DAT_155409868 = uVar4;
  if (uVar1 != 0) {
    base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155409868,uVar2);
  }
  if (pTVar5 == (ThreadIdentity *)0x0) {
    pvVar3 = base_internal::LowLevelAlloc::Alloc(0x25f);
    pTVar5 = (ThreadIdentity *)((longlong)pvVar3 + 0xffU & 0xffffffffffffff00);
    AbslInternalPerThreadSemInit_lts_20240722(pTVar5);
    pTVar5->ticker = (atomic<int>)0x0;
    pTVar5->wait_start = (atomic<int>)0x0;
    pTVar5->is_idle = (atomic<bool>)0x0;
  }
  (pTVar5->per_thread_synch).next = (PerThreadSynch *)0x0;
  (pTVar5->per_thread_synch).skip = (PerThreadSynch *)0x0;
  (pTVar5->per_thread_synch).may_skip = false;
  (pTVar5->per_thread_synch).waitp = (SynchWaitParams *)0x0;
  (pTVar5->per_thread_synch).suppress_fatal_errors = false;
  (pTVar5->per_thread_synch).readers = 0;
  (pTVar5->per_thread_synch).priority = 0;
  (pTVar5->per_thread_synch).next_priority_read_cycles = 0;
  (pTVar5->per_thread_synch).state =
       (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x0;
  (pTVar5->per_thread_synch).cond_waiter = false;
  (pTVar5->per_thread_synch).maybe_unlocking = false;
  (pTVar5->per_thread_synch).wake = false;
  (pTVar5->per_thread_synch).all_locks = (SynchLocksHeld *)0x0;
  pTVar5->blocked_count_ptr = (atomic<int> *)0x0;
  pTVar5->ticker = (atomic<int>)0x0;
  pTVar5->wait_start = (atomic<int>)0x0;
  pTVar5->is_idle = (atomic<bool>)0x0;
  pTVar5->next = (ThreadIdentity *)0x0;
  base_internal::SetCurrentThreadIdentity(pTVar5,FUN_1501f32b0);
  return pTVar5;
}

// Init @ 1501f3150

/* private: static void __cdecl
   absl::lts_20240722::synchronization_internal::PerThreadSem::Init(struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64) */

void __cdecl
absl::lts_20240722::synchronization_internal::PerThreadSem::Init(ThreadIdentity *param_1)

{
  AbslInternalPerThreadSemInit_lts_20240722();
  return;
}

// FUN_1501f3160 @ 1501f3160

/* WARNING: Removing unreachable block (ram,0x0001501f3180) */
/* WARNING: Removing unreachable block (ram,0x0001501f3188) */

undefined8 * FUN_1501f3160(void)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  uVar2 = DAT_155409868;
  if ((DAT_155409868 & 1) == 0) {
    DAT_155409868 = DAT_155409868 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar2 & 1) == 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155409868);
  }
  uVar2 = DAT_155409868;
  puVar5 = (undefined8 *)0x0;
  if (DAT_155409870 != (undefined8 *)0x0) {
    puVar5 = DAT_155409870;
    DAT_155409870 = (undefined8 *)DAT_155409870[0x2b];
  }
  uVar4 = DAT_155409868 & 2;
  LOCK();
  UNLOCK();
  uVar1 = DAT_155409868 & 0xfffffff8;
  DAT_155409868 = uVar4;
  if (uVar1 != 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155409868,uVar2);
  }
  if (puVar5 == (undefined8 *)0x0) {
    pvVar3 = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(0x25f);
    puVar5 = (undefined8 *)((longlong)pvVar3 + 0xffU & 0xffffffffffffff00);
    AbslInternalPerThreadSemInit_lts_20240722(puVar5);
    *(undefined4 *)(puVar5 + 0x29) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x14c) = 0;
    *(undefined1 *)(puVar5 + 0x2a) = 0;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 2) = 0;
  puVar5[4] = 0;
  *(undefined1 *)((longlong)puVar5 + 0x14) = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 3) = 0;
  puVar5[6] = 0;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x12) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x11) = 0;
  puVar5[7] = 0;
  puVar5[0x28] = 0;
  *(undefined4 *)(puVar5 + 0x29) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14c) = 0;
  *(undefined1 *)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  return puVar5;
}

// OneTimeInitThreadIdentity @ 1501f3280

/* void __cdecl absl::lts_20240722::synchronization_internal::OneTimeInitThreadIdentity(struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64) */

void __cdecl
absl::lts_20240722::synchronization_internal::OneTimeInitThreadIdentity(ThreadIdentity *param_1)

{
  AbslInternalPerThreadSemInit_lts_20240722();
  param_1->ticker = (atomic<int>)0x0;
  param_1->wait_start = (atomic<int>)0x0;
  param_1->is_idle = (atomic<bool>)0x0;
  return;
}

// FUN_1501f32b0 @ 1501f32b0

/* WARNING: Removing unreachable block (ram,0x0001501f32de) */
/* WARNING: Removing unreachable block (ram,0x0001501f32e6) */

void FUN_1501f32b0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    absl::lts_20240722::base_internal::LowLevelAlloc::Free(*(void **)(param_1 + 0x38));
  }
  absl::lts_20240722::base_internal::ClearCurrentThreadIdentity();
  uVar1 = DAT_155409868;
  if ((DAT_155409868 & 1) == 0) {
    DAT_155409868 = DAT_155409868 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar1 & 1) == 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155409868);
  }
  *(longlong *)(param_1 + 0x158) = DAT_155409870;
  uVar2 = DAT_155409868;
  uVar3 = DAT_155409868 & 2;
  LOCK();
  UNLOCK();
  uVar1 = DAT_155409868 & 0xfffffff8;
  DAT_155409868 = uVar3;
  DAT_155409870 = param_1;
  if (uVar1 != 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155409868,uVar2);
  }
  return;
}

