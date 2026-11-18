// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 7

// GetThreadBlockedCounter @ 1501f33d0

/* public: static struct std::atomic<int> * __ptr64 __cdecl
   absl::lts_20240722::synchronization_internal::PerThreadSem::GetThreadBlockedCounter(void) */

atomic<int> * __cdecl
absl::lts_20240722::synchronization_internal::PerThreadSem::GetThreadBlockedCounter(void)

{
  longlong lVar1;
  ThreadIdentity *pTVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pTVar2 = *(ThreadIdentity **)(lVar1 + 0x9e78);
  if (pTVar2 == (ThreadIdentity *)0x0) {
    pTVar2 = CreateThreadIdentity();
  }
  return pTVar2->blocked_count_ptr;
}

// GetWaiter @ 1501f3420

/* public: static class absl::lts_20240722::synchronization_internal::Win32Waiter * __ptr64 __cdecl
   absl::lts_20240722::synchronization_internal::WaiterCrtp<class
   absl::lts_20240722::synchronization_internal::Win32Waiter>::GetWaiter(struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64) */

Win32Waiter * __cdecl
absl::lts_20240722::synchronization_internal::
WaiterCrtp<absl::lts_20240722::synchronization_internal::Win32Waiter>::GetWaiter
          (ThreadIdentity *param_1)

{
  return (Win32Waiter *)&param_1->waiter_state;
}

// SetThreadBlockedCounter @ 1501f3430

/* public: static void __cdecl
   absl::lts_20240722::synchronization_internal::PerThreadSem::SetThreadBlockedCounter(struct
   std::atomic<int> * __ptr64) */

void __cdecl
absl::lts_20240722::synchronization_internal::PerThreadSem::SetThreadBlockedCounter
          (atomic<int> *param_1)

{
  longlong lVar1;
  ThreadIdentity *pTVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pTVar2 = *(ThreadIdentity **)(lVar1 + 0x9e78);
  if (pTVar2 == (ThreadIdentity *)0x0) {
    pTVar2 = CreateThreadIdentity();
  }
  pTVar2->blocked_count_ptr = param_1;
  return;
}

// Tick @ 1501f3490

/* public: static void __cdecl
   absl::lts_20240722::synchronization_internal::PerThreadSem::Tick(struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64) */

void __cdecl
absl::lts_20240722::synchronization_internal::PerThreadSem::Tick(ThreadIdentity *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  
  LOCK();
  paVar1 = &param_1->ticker;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (((param_1->wait_start != (atomic<int>)0x0) &&
      (0x3c < ((int)aVar2 - (int)param_1->wait_start) + 1)) &&
     (param_1->is_idle == (atomic<bool>)0x0)) {
    Win32Waiter::Poke((Win32Waiter *)&param_1->waiter_state);
    return;
  }
  return;
}

// AbslInternalPerThreadSemInit_lts_20240722 @ 1501f34d0

void AbslInternalPerThreadSemInit_lts_20240722(longlong param_1)

{
  absl::lts_20240722::synchronization_internal::Win32Waiter::Win32Waiter
            ((Win32Waiter *)(param_1 + 0x40));
  return;
}

// AbslInternalPerThreadSemPost_lts_20240722 @ 1501f34f0

void AbslInternalPerThreadSemPost_lts_20240722(longlong param_1)

{
  absl::lts_20240722::synchronization_internal::Win32Waiter::Post((Win32Waiter *)(param_1 + 0x40));
  return;
}

// AbslInternalPerThreadSemWait_lts_20240722 @ 1501f3500

void AbslInternalPerThreadSemWait_lts_20240722(KernelTimeout param_1)

{
  longlong lVar1;
  atomic<int> *paVar2;
  ThreadIdentity *pTVar3;
  atomic<int> aVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pTVar3 = *(ThreadIdentity **)(lVar1 + 0x9e78);
  if (pTVar3 == (ThreadIdentity *)0x0) {
    pTVar3 = absl::lts_20240722::synchronization_internal::CreateThreadIdentity();
  }
  aVar4 = (atomic<int>)0x1;
  if (pTVar3->ticker != (atomic<int>)0x0) {
    aVar4 = pTVar3->ticker;
  }
  pTVar3->wait_start = aVar4;
  pTVar3->is_idle = (atomic<bool>)0x0;
  paVar2 = pTVar3->blocked_count_ptr;
  if (paVar2 != (atomic<int> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  absl::lts_20240722::synchronization_internal::Win32Waiter::Wait
            ((Win32Waiter *)&pTVar3->waiter_state,param_1);
  paVar2 = pTVar3->blocked_count_ptr;
  if (paVar2 != (atomic<int> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
  }
  pTVar3->is_idle = (atomic<bool>)0x0;
  pTVar3->wait_start = (atomic<int>)0x0;
  return;
}

