// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 26

// pas_set_panic_callback @ 140d68e60

void __cdecl pas_set_panic_callback(_func___cdecl_void_char_ptr_char_ptr *param_1)

{
  panic_callback = param_1;
  return;
}

// pas_panic @ 140d68e70

void __cdecl pas_panic(char *param_1)

{
  char local_res10 [24];
  
  if (panic_callback != (_func___cdecl_void_char_ptr_char_ptr *)0x0) {
    (*panic_callback)(param_1,local_res10);
  }
  pas_start_crash_logging();
  pas_getpid();
  pas_log("[%d] pas panic: ");
  pas_vlog(param_1,local_res10);
                    /* WARNING: Subroutine does not return */
  pas_crash_with_info_impl((ulong64)param_1,0,0,0,0,0,0);
}

// pas_getpid @ 140d68f00

int __cdecl pas_getpid(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d68f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _getpid();
  return iVar1;
}

// pas_crash_with_info_impl @ 140d68f10

void __cdecl
pas_crash_with_info_impl
          (ulong64 param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,ulong64 param_7)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,param_2,param_4,param_3);
  return;
}

// pas_set_assertion_failure_callback @ 140d68f40

void __cdecl
pas_set_assertion_failure_callback
          (_func___cdecl_void_char_ptr_int_char_ptr_char_ptr_ulong64_ptr *param_1)

{
  assertion_failure_callback = param_1;
  return;
}

// pas_assertion_failed_no_inline @ 140d68f50

void __cdecl pas_assertion_failed_no_inline(char *param_1,int param_2,char *param_3,char *param_4)

{
  if (assertion_failure_callback !=
      (_func___cdecl_void_char_ptr_int_char_ptr_char_ptr_ulong64_ptr *)0x0) {
    (*assertion_failure_callback)(param_1,param_2,param_3,param_4,(ulong64 *)0x0);
  }
  pas_getpid();
  pas_log("[%d] pas assertion failed: ");
  pas_log("%s:%d: %s: assertion %s failed.\n");
                    /* WARNING: Subroutine does not return */
  pas_crash_with_info_impl
            ((ulong64)param_1,(longlong)param_2,(ulong64)param_3,(ulong64)param_4,0xbeefbff0,0x2a,
             0x539);
}

// pas_assertion_failed_no_inline_with_extra_detail @ 140d68ff0

void __cdecl
pas_assertion_failed_no_inline_with_extra_detail
          (char *param_1,int param_2,char *param_3,char *param_4,ulong64 param_5)

{
  if (assertion_failure_callback !=
      (_func___cdecl_void_char_ptr_int_char_ptr_char_ptr_ulong64_ptr *)0x0) {
    (*assertion_failure_callback)(param_1,param_2,param_3,param_4,&param_5);
  }
  pas_getpid();
  pas_log("[%d] pas assertion failed (with extra detail): ");
  pas_log("%s:%d: %s: assertion %s failed. Extra data: %llu.\n");
                    /* WARNING: Subroutine does not return */
  pas_crash_with_info_impl
            ((ulong64)param_1,(longlong)param_2,(ulong64)param_3,(ulong64)param_4,param_5,0x539,
             0xbeef0bff);
}

// pas_set_oom_callback @ 140d690a0

void __cdecl pas_set_oom_callback(_func___cdecl_void *param_1)

{
  oom_callback = param_1;
  return;
}

// pas_panic_on_out_of_memory_error @ 140d690b0

void __cdecl pas_panic_on_out_of_memory_error(void)

{
  code *pcVar1;
  
  if (oom_callback != (_func___cdecl_void *)0x0) {
    (*oom_callback)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_deallocation_did_fail @ 140d690d0

void __cdecl pas_deallocation_did_fail(char *param_1,ulong64 param_2)

{
  if (deallocation_did_fail_callback != (_func___cdecl_void_char_ptr_void_ptr *)0x0) {
    (*deallocation_did_fail_callback)(param_1,(void *)param_2);
  }
                    /* WARNING: Subroutine does not return */
  pas_panic("deallocation did fail at %p: %s\n");
}

// pas_set_deallocation_did_fail_callback @ 140d69110

void __cdecl pas_set_deallocation_did_fail_callback(_func___cdecl_void_char_ptr_void_ptr *param_1)

{
  deallocation_did_fail_callback = param_1;
  return;
}

// pas_reallocation_did_fail @ 140d69120

void __cdecl
pas_reallocation_did_fail
          (char *param_1,void *param_2,void *param_3,void *param_4,ulong64 param_5,ulong64 param_6)

{
  if (reallocation_did_fail_callback !=
      (_func___cdecl_void_char_ptr_void_ptr_void_ptr_void_ptr_ulong64_ulong64 *)0x0) {
    (*reallocation_did_fail_callback)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
                    /* WARNING: Subroutine does not return */
  pas_panic(
           "reallocation did fail with source_heap = %p, target_heap = %p, old_ptr = %p, old_size = %zu, new_size = %zu: %s\n"
           );
}

// pas_set_reallocation_did_fail_callback @ 140d69190

void __cdecl
pas_set_reallocation_did_fail_callback
          (_func___cdecl_void_char_ptr_void_ptr_void_ptr_void_ptr_ulong64_ulong64 *param_1)

{
  reallocation_did_fail_callback = param_1;
  return;
}

// pas_get_time_in_milliseconds_for_system_condition @ 140d691a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl pas_get_time_in_milliseconds_for_system_condition(void)

{
  code *pcVar1;
  double dVar2;
  undefined1 auStack_38 [40];
  ULONGLONG local_10;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  QueryUnbiasedInterruptTime(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return ((((double)CONCAT44(__xmm_00000000000000004530000043300000._4_4_,(int)(local_10 >> 0x20))
             - _UNK_1531e94a8) +
            ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,(int)local_10) -
            ___xmm_45300000000000004330000000000000)) / __real_4024000000000000) /
           __real_408f400000000000;
  }
  pcVar1 = (code *)swi(3);
  dVar2 = (double)(*pcVar1)();
  return dVar2;
}

// pas_create_detached_thread @ 140d69220

void __cdecl pas_create_detached_thread(_func___cdecl_ulong_void_ptr *param_1,void *param_2)

{
  code *pcVar1;
  HANDLE hObject;
  
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)param_1,param_2,0,
                         (LPDWORD)0x0);
  if (hObject != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d69251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle(hObject);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_system_mutex_construct @ 140d69260

void __stdcall pas_system_mutex_construct(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000140d69260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}

// pas_system_mutex_lock @ 140d69270

void __stdcall pas_system_mutex_lock(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000140d69270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}

// pas_system_mutex_unlock @ 140d69280

void __stdcall pas_system_mutex_unlock(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000140d69280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// pas_system_mutex_destruct @ 140d69290

void __stdcall pas_system_mutex_destruct(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000140d69290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

// pas_system_condition_construct @ 140d692a0

void __stdcall pas_system_condition_construct(PCONDITION_VARIABLE ConditionVariable)

{
                    /* WARNING: Could not recover jumptable at 0x000140d692a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeConditionVariable(ConditionVariable);
  return;
}

// pas_system_condition_wait @ 140d692b0

void __cdecl
pas_system_condition_wait(_RTL_CONDITION_VARIABLE *param_1,_RTL_CRITICAL_SECTION *param_2)

{
  code *pcVar1;
  BOOL BVar2;
  
  BVar2 = SleepConditionVariableCS
                    ((PCONDITION_VARIABLE)param_1,(PCRITICAL_SECTION)param_2,0xffffffff);
  if (BVar2 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_system_condition_timed_wait @ 140d692e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
pas_system_condition_timed_wait
          (_RTL_CONDITION_VARIABLE *param_1,_RTL_CRITICAL_SECTION *param_2,double param_3)

{
  code *pcVar1;
  DWORD dwMilliseconds;
  double dVar2;
  double dVar3;
  undefined1 auStack_58 [32];
  ULONGLONG local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_58;
  QueryUnbiasedInterruptTime(&local_38);
  dVar2 = floor(((((double)CONCAT44(__xmm_00000000000000004530000043300000._4_4_,
                                    (int)(local_38 >> 0x20)) - _UNK_1531e94a8) +
                 ((double)CONCAT44((undefined4)__xmm_00000000000000004530000043300000,(int)local_38)
                 - ___xmm_45300000000000004330000000000000)) / __real_c024000000000000) /
                __real_408f400000000000 + param_3);
  dwMilliseconds = 0;
  if ((0.0 <= dVar2) && (dwMilliseconds = 0xfffffffe, dVar2 < __real_41efffffffe00000)) {
    dwMilliseconds = (DWORD)(longlong)dVar2;
    if (dwMilliseconds == 0xffffffff) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar3 = (double)((longlong)dVar2 & 0xffffffff);
    if ((dVar2 != dVar3) || (NAN(dVar2) || NAN(dVar3))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  SleepConditionVariableCS((PCONDITION_VARIABLE)param_1,(PCRITICAL_SECTION)param_2,dwMilliseconds);
  if ((local_30 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_system_condition_broadcast @ 140d693c0

void __stdcall pas_system_condition_broadcast(PCONDITION_VARIABLE ConditionVariable)

{
                    /* WARNING: Could not recover jumptable at 0x000140d693c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(ConditionVariable);
  return;
}

// pas_system_condition_destruct @ 140d693d0

void __cdecl pas_system_condition_destruct(_RTL_CONDITION_VARIABLE *param_1)

{
  return;
}

// pas_system_once_run @ 140d693e0

void __cdecl pas_system_once_run(_RTL_RUN_ONCE *param_1,_func___cdecl_void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140d693ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitOnceExecuteOnce((PINIT_ONCE)param_1,call_once_callback,param_2,(LPVOID *)0x0);
  return;
}

// call_once_callback @ 140d69400

int __cdecl call_once_callback(_RTL_RUN_ONCE *param_1,void *param_2,void **param_3)

{
  (*param_2)();
  return 1;
}

