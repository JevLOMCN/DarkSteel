// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 19

// pas_scavenger_did_create_eligible @ 140d50d70

bool __cdecl pas_scavenger_did_create_eligible(void)

{
  if ((pas_scavenger_current_state != pas_scavenger_state_polling) && (pas_scavenger_is_enabled)) {
    if (!pas_scavenger_eligibility_notification_has_been_deferred) {
      LOCK();
      UNLOCK();
      pas_scavenger_eligibility_notification_has_been_deferred = true;
    }
    return true;
  }
  return false;
}

// pas_scavenger_notify_eligibility_if_needed @ 140d50db0

void __cdecl pas_scavenger_notify_eligibility_if_needed(void)

{
  bool bVar1;
  pas_scavenger_data *ppVar2;
  
  if (((pas_scavenger_is_enabled) && (pas_scavenger_eligibility_notification_has_been_deferred)) &&
     (pas_scavenger_should_suspend_count == 0)) {
    bVar1 = pas_dyld_is_libsystem_initialized();
    if (bVar1) {
      LOCK();
      UNLOCK();
      pas_scavenger_eligibility_notification_has_been_deferred = false;
      LOCK();
      UNLOCK();
      if (pas_scavenger_current_state != pas_scavenger_state_polling) {
        ppVar2 = pas_scavenger_data_instance;
        if (pas_scavenger_data_instance == (pas_scavenger_data *)0x0) {
          AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
          if (pas_scavenger_data_instance == (pas_scavenger_data *)0x0) {
            ppVar2 = pas_immortal_heap_allocate(0x30,"pas_scavenger_data",pas_object_allocation);
            pas_system_mutex_construct((LPCRITICAL_SECTION)ppVar2);
            pas_system_condition_construct((PCONDITION_VARIABLE)&ppVar2->cond);
            LOCK();
            UNLOCK();
            pas_scavenger_data_instance = ppVar2;
          }
          ppVar2 = pas_scavenger_data_instance;
          ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        }
        pas_system_mutex_lock((LPCRITICAL_SECTION)ppVar2);
        if (pas_scavenger_should_suspend_count == 0) {
          if (pas_scavenger_current_state == pas_scavenger_state_no_thread) {
            pas_scavenger_current_state = pas_scavenger_state_polling;
            pas_create_detached_thread(scavenger_thread_main,(void *)0x0);
          }
          if (pas_scavenger_current_state == pas_scavenger_state_deep_sleep) {
            pas_scavenger_current_state = pas_scavenger_state_polling;
            pas_system_condition_broadcast((PCONDITION_VARIABLE)&ppVar2->cond);
          }
        }
        pas_system_mutex_unlock((LPCRITICAL_SECTION)ppVar2);
        pas_status_reporter_start_if_necessary();
        return;
      }
    }
  }
  return;
}

// scavenger_thread_main @ 140d50ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong __cdecl scavenger_thread_main(void *param_1)

{
  _RTL_CONDITION_VARIABLE *ConditionVariable;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  pas_scavenger_data *ppVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  double dVar12;
  double dVar13;
  undefined1 local_a8 [40];
  pas_page_sharing_pool_scavenge_result local_80;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)local_a8;
  if (pas_scavenger_current_state != pas_scavenger_state_polling) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_scavenger_did_start_callback != (_func___cdecl_void *)0x0) {
    (*pas_scavenger_did_start_callback)();
  }
  ppVar9 = pas_scavenger_data_instance;
  if (pas_scavenger_data_instance == (pas_scavenger_data *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (pas_scavenger_data_instance == (pas_scavenger_data *)0x0) {
      ppVar9 = pas_immortal_heap_allocate(0x30,"pas_scavenger_data",pas_object_allocation);
      pas_system_mutex_construct((LPCRITICAL_SECTION)ppVar9);
      pas_system_condition_construct((PCONDITION_VARIABLE)&ppVar9->cond);
      LOCK();
      UNLOCK();
      pas_scavenger_data_instance = ppVar9;
    }
    ppVar9 = pas_scavenger_data_instance;
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  ConditionVariable = &ppVar9->cond;
  do {
    bVar3 = pas_baseline_allocator_table_for_all(pas_allocator_scavenge_request_stop_action);
    bVar4 = pas_utility_heap_for_all_allocators
                      (pas_allocator_scavenge_request_stop_action,pas_lock_is_not_held);
    bVar5 = pas_thread_local_cache_for_all
                      (pas_allocator_scavenge_request_stop_action,
                       pas_deallocator_scavenge_flush_log_if_clean_action,
                       pas_thread_local_cache_decommit_if_possible_action);
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    bVar6 = pas_compact_expendable_memory_scavenge(pas_expendable_memory_scavenge_periodic);
    bVar7 = pas_large_expendable_memory_scavenge(pas_expendable_memory_scavenge_periodic);
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    uVar10 = pas_get_epoch();
    uVar11 = uVar10 - pas_scavenger_max_epoch_delta;
    if (uVar10 < pas_scavenger_max_epoch_delta) {
      uVar11 = 1;
    }
    pas_physical_page_sharing_pool_scavenge(&local_80,uVar11);
    if (local_80.take_result == pas_page_sharing_pool_take_none_within_max_epoch) {
      bVar3 = true;
    }
    else {
      if (local_80.take_result == pas_page_sharing_pool_take_locks_unavailable) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (local_80.take_result == pas_page_sharing_pool_take_success) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      bVar3 = (bVar6 || bVar7) || ((bVar3 || bVar4) || bVar5);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    bVar4 = pas_bootstrap_free_heap_scavenge_periodic();
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    bVar5 = pas_immortal_heap_scavenge_periodic();
    bVar6 = verse_heap_mark_bits_page_commit_controller_scavenge_periodic();
    if (pas_scavenger_completion_callback != (_func___cdecl_void *)0x0) {
      (*pas_scavenger_completion_callback)();
    }
    pas_system_mutex_lock((LPCRITICAL_SECTION)ppVar9);
    if (1 < pas_scavenger_current_state - pas_scavenger_state_polling) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar12 = pas_get_time_in_milliseconds_for_system_condition();
    dVar2 = pas_scavenger_period_in_milliseconds + dVar12;
    if ((bVar5 || bVar6) || (bVar3 || bVar4)) {
      bVar3 = false;
      if (pas_scavenger_current_state != pas_scavenger_state_polling) {
        pas_scavenger_current_state = pas_scavenger_state_polling;
        bVar3 = false;
      }
    }
    else if (pas_scavenger_current_state == pas_scavenger_state_polling) {
      pas_scavenger_current_state = pas_scavenger_state_deep_sleep;
      bVar3 = false;
    }
    else {
      if (pas_scavenger_current_state != pas_scavenger_state_deep_sleep) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      dVar12 = dVar12 + pas_scavenger_deep_sleep_timeout_in_milliseconds;
      dVar13 = pas_get_time_in_milliseconds_for_system_condition();
      bVar3 = pas_scavenger_current_state == pas_scavenger_state_deep_sleep;
      if ((pas_scavenger_should_suspend_count == 0 && bVar3) && dVar13 < dVar12) {
        do {
          pas_system_condition_timed_wait(ConditionVariable,&ppVar9->lock,dVar12);
          dVar13 = pas_get_time_in_milliseconds_for_system_condition();
          bVar3 = pas_scavenger_current_state == pas_scavenger_state_deep_sleep;
          if ((dVar12 <= dVar13) || (pas_scavenger_should_suspend_count != 0)) break;
        } while (pas_scavenger_current_state == pas_scavenger_state_deep_sleep);
      }
    }
    dVar12 = pas_get_time_in_milliseconds_for_system_condition();
    bVar4 = pas_scavenger_should_suspend_count != 0;
    if (dVar12 < dVar2 && !bVar4) {
      do {
        pas_system_condition_timed_wait(ConditionVariable,&ppVar9->lock,dVar2);
        dVar12 = pas_get_time_in_milliseconds_for_system_condition();
        bVar4 = pas_scavenger_should_suspend_count != 0;
        if (dVar2 <= dVar12) break;
      } while (pas_scavenger_should_suspend_count == 0);
    }
    if (bVar3 || bVar4) {
      pas_scavenger_current_state = pas_scavenger_state_no_thread;
      pas_system_condition_broadcast((PCONDITION_VARIABLE)ConditionVariable);
      pas_system_mutex_unlock((LPCRITICAL_SECTION)ppVar9);
      if (pas_scavenger_will_shut_down_callback != (_func___cdecl_void *)0x0) {
        (*pas_scavenger_will_shut_down_callback)();
      }
      if ((local_70 ^ (ulonglong)local_a8) != __security_cookie.value) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return uVar8;
      }
      return 0;
    }
    pas_system_mutex_unlock((LPCRITICAL_SECTION)ppVar9);
  } while( true );
}

// pas_scavenger_suspend @ 140d51250

void __cdecl pas_scavenger_suspend(void)

{
  code *pcVar1;
  pas_scavenger_data *ppVar2;
  
  ppVar2 = pas_scavenger_data_instance;
  if (pas_scavenger_data_instance == (pas_scavenger_data *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (pas_scavenger_data_instance == (pas_scavenger_data *)0x0) {
      ppVar2 = pas_immortal_heap_allocate(0x30,"pas_scavenger_data",pas_object_allocation);
      pas_system_mutex_construct((LPCRITICAL_SECTION)ppVar2);
      pas_system_condition_construct((PCONDITION_VARIABLE)&ppVar2->cond);
      LOCK();
      UNLOCK();
      pas_scavenger_data_instance = ppVar2;
    }
    ppVar2 = pas_scavenger_data_instance;
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  pas_system_mutex_lock((LPCRITICAL_SECTION)ppVar2);
  pas_scavenger_should_suspend_count = pas_scavenger_should_suspend_count + 1;
  if (pas_scavenger_should_suspend_count != 0) {
    if (pas_scavenger_current_state != pas_scavenger_state_no_thread) {
      do {
        pas_system_condition_wait(&ppVar2->cond,&ppVar2->lock);
      } while (pas_scavenger_current_state != pas_scavenger_state_no_thread);
    }
    pas_system_mutex_unlock((LPCRITICAL_SECTION)ppVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_scavenger_resume @ 140d51310

void __cdecl pas_scavenger_resume(void)

{
  code *pcVar1;
  pas_scavenger_data *ppVar2;
  
  ppVar2 = pas_scavenger_data_instance;
  if (pas_scavenger_data_instance == (pas_scavenger_data *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (pas_scavenger_data_instance == (pas_scavenger_data *)0x0) {
      ppVar2 = pas_immortal_heap_allocate(0x30,"pas_scavenger_data",pas_object_allocation);
      pas_system_mutex_construct((LPCRITICAL_SECTION)ppVar2);
      pas_system_condition_construct((PCONDITION_VARIABLE)&ppVar2->cond);
      LOCK();
      UNLOCK();
      pas_scavenger_data_instance = ppVar2;
    }
    ppVar2 = pas_scavenger_data_instance;
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  pas_system_mutex_lock((LPCRITICAL_SECTION)ppVar2);
  if (pas_scavenger_should_suspend_count != 0) {
    pas_scavenger_should_suspend_count = pas_scavenger_should_suspend_count - 1;
    pas_system_mutex_unlock((LPCRITICAL_SECTION)ppVar2);
    if (((pas_scavenger_current_state != pas_scavenger_state_polling) &&
        (pas_scavenger_is_enabled == true)) &&
       (pas_scavenger_eligibility_notification_has_been_deferred == false)) {
      LOCK();
      UNLOCK();
      pas_scavenger_eligibility_notification_has_been_deferred = true;
    }
    pas_scavenger_notify_eligibility_if_needed();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_scavenger_clear_local_tlcs @ 140d513e0

void __cdecl pas_scavenger_clear_local_tlcs(void)

{
  pas_thread_local_cache *ppVar1;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar1 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if (ppVar1 < (pas_thread_local_cache *)&DAT_00000002) {
    return;
  }
  pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
  return;
}

// pas_scavenger_clear_all_non_tlc_caches @ 140d51440

void __cdecl pas_scavenger_clear_all_non_tlc_caches(void)

{
  pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
  pas_utility_heap_for_all_allocators(pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held)
  ;
  return;
}

// pas_scavenger_clear_all_caches_except_remote_tlcs @ 140d51470

void __cdecl pas_scavenger_clear_all_caches_except_remote_tlcs(void)

{
  pas_thread_local_cache *ppVar1;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar1 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
    pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
  }
  pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
  pas_utility_heap_for_all_allocators(pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held)
  ;
  return;
}

// pas_scavenger_clear_all_caches @ 140d514e0

void __cdecl pas_scavenger_clear_all_caches(void)

{
  pas_thread_local_cache *ppVar1;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar1 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
    pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
  }
  pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
  pas_utility_heap_for_all_allocators(pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held)
  ;
  pas_thread_local_cache_for_all
            (pas_allocator_scavenge_force_stop_action,pas_deallocator_scavenge_flush_log_action,
             pas_thread_local_cache_decommit_if_possible_action);
  return;
}

// pas_scavenger_decommit_expendable_memory @ 140d51570

void __cdecl pas_scavenger_decommit_expendable_memory(void)

{
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_compact_expendable_memory_scavenge(pas_expendable_memory_scavenge_forced);
  pas_large_expendable_memory_scavenge(pas_expendable_memory_scavenge_forced);
                    /* WARNING: Could not recover jumptable at 0x000140d515a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return;
}

// pas_scavenger_fake_decommit_expendable_memory @ 140d515b0

void __cdecl pas_scavenger_fake_decommit_expendable_memory(void)

{
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_compact_expendable_memory_scavenge(pas_expendable_memory_scavenge_forced_fake);
  pas_large_expendable_memory_scavenge(pas_expendable_memory_scavenge_forced_fake);
                    /* WARNING: Could not recover jumptable at 0x000140d515e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return;
}

// pas_scavenger_decommit_bootstrap_free_heap @ 140d515f0

ulong64 __cdecl pas_scavenger_decommit_bootstrap_free_heap(void)

{
  ulong64 uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  uVar1 = pas_bootstrap_free_heap_decommit();
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return uVar1;
}

// pas_scavenger_decommit_immortal_heap @ 140d51630

ulong64 __cdecl pas_scavenger_decommit_immortal_heap(void)

{
  ulong64 uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  if (pas_immortal_heap_is_committed == true) {
    uVar1 = decommit_slack();
    pas_immortal_heap_is_committed = false;
  }
  else {
    uVar1 = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_immortal_heap_lock);
  return uVar1;
}

// pas_scavenger_decommit_verse_heap_mark_bits @ 140d51640

bool __cdecl pas_scavenger_decommit_verse_heap_mark_bits(void)

{
  bool bVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  bVar1 = try_decommit();
  ReleaseSRWLockExclusive((PSRWLOCK)&verse_heap_mark_bits_page_commit_controller_commit_lock);
  return bVar1;
}

// pas_scavenger_decommit_free_memory @ 140d51650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl pas_scavenger_decommit_free_memory(void)

{
  code *pcVar1;
  ulong64 uVar2;
  undefined1 auStack_38 [32];
  pas_page_sharing_pool_scavenge_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  pas_physical_page_sharing_pool_scavenge(&local_18,0xffffffffffffffff);
  if (local_18.take_result != pas_page_sharing_pool_take_none_available) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return local_18.total_bytes;
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

// pas_scavenger_decommit_everything @ 140d516b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_scavenger_decommit_everything(void)

{
  code *pcVar1;
  undefined1 auStack_48 [40];
  pas_page_sharing_pool_scavenge_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_compact_expendable_memory_scavenge(pas_expendable_memory_scavenge_forced);
  pas_large_expendable_memory_scavenge(pas_expendable_memory_scavenge_forced);
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_physical_page_sharing_pool_scavenge(&local_20,0xffffffffffffffff);
  if (local_20.take_result != pas_page_sharing_pool_take_none_available) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_bootstrap_free_heap_decommit();
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  pas_immortal_heap_decommit();
  verse_heap_mark_bits_page_commit_controller_decommit_if_possible();
  if ((local_10 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_scavenger_run_synchronously_now @ 140d51760

void __cdecl pas_scavenger_run_synchronously_now(void)

{
  pas_thread_local_cache *ppVar1;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar1 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
    pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
  }
  pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
  pas_utility_heap_for_all_allocators(pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held)
  ;
  pas_thread_local_cache_for_all
            (pas_allocator_scavenge_force_stop_action,pas_deallocator_scavenge_flush_log_action,
             pas_thread_local_cache_decommit_if_possible_action);
  pas_scavenger_decommit_everything();
  return;
}

// pas_scavenger_do_everything_except_remote_tlcs @ 140d517f0

void __cdecl pas_scavenger_do_everything_except_remote_tlcs(void)

{
  pas_thread_local_cache *ppVar1;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar1 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
    pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
  }
  pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
  pas_utility_heap_for_all_allocators(pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held)
  ;
  pas_scavenger_decommit_everything();
  return;
}

// pas_scavenger_perform_synchronous_operation @ 140d51870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_scavenger_perform_synchronous_operation(<unnamed_tag_00B5EA12> param_1)

{
  pas_thread_local_cache *ppVar1;
  code *pcVar2;
  undefined1 auStack_48 [40];
  pas_page_sharing_pool_scavenge_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  switch(param_1) {
  case pas_scavenger_invalid_synchronous_operation_kind:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  case pas_scavenger_clear_local_tlcs_kind:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar1 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
      pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
      return;
    }
    goto LAB_140d51a52;
  case pas_scavenger_clear_all_caches_except_remote_tlcs_kind:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar1 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
      pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
    }
  case pas_scavenger_clear_all_non_tlc_caches_kind:
    pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
    pas_utility_heap_for_all_allocators
              (pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held);
    return;
  case pas_scavenger_clear_all_caches_kind:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar1 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
      pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
    }
    pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
    pas_utility_heap_for_all_allocators
              (pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held);
    pas_thread_local_cache_for_all
              (pas_allocator_scavenge_force_stop_action,pas_deallocator_scavenge_flush_log_action,
               pas_thread_local_cache_decommit_if_possible_action);
    return;
  case pas_scavenger_decommit_expendable_memory_kind:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_compact_expendable_memory_scavenge(pas_expendable_memory_scavenge_forced);
    pas_large_expendable_memory_scavenge(pas_expendable_memory_scavenge_forced);
    goto LAB_140d51a82;
  case pas_scavenger_decommit_bootstrap_free_heap_kind:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_bootstrap_free_heap_decommit();
LAB_140d51a82:
                    /* WARNING: Could not recover jumptable at 0x000140d51a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return;
  case pas_scavenger_decommit_immortal_heap_kind:
    pas_immortal_heap_decommit();
    return;
  case pas_scavenger_decommit_free_memory_kind:
    pas_physical_page_sharing_pool_scavenge(&local_20,0xffffffffffffffff);
    if (local_20.take_result != pas_page_sharing_pool_take_none_available) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
LAB_140d51a52:
    if ((local_10 ^ (ulonglong)auStack_48) != __security_cookie.value) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  case pas_scavenger_decommit_verse_heap_mark_bits_kind:
    verse_heap_mark_bits_page_commit_controller_decommit_if_possible();
    return;
  case pas_scavenger_decommit_everything_kind:
    break;
  case pas_scavenger_do_everything_except_remote_tlcs_kind:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar1 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
      pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
    }
    pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
    pas_utility_heap_for_all_allocators
              (pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held);
    break;
  case pas_scavenger_run_synchronously_now_kind:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar1 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
      pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
    }
    pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
    pas_utility_heap_for_all_allocators
              (pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held);
    pas_thread_local_cache_for_all
              (pas_allocator_scavenge_force_stop_action,pas_deallocator_scavenge_flush_log_action,
               pas_thread_local_cache_decommit_if_possible_action);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pas_scavenger_decommit_everything();
  return;
}

