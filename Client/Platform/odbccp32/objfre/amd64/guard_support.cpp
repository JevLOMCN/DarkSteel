// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: odbccp32
// Functions: 15

// ReadNoFence64 @ 15015a6e4

long64 __cdecl ReadNoFence64(long64 *param_1)

{
  return *param_1;
}

// ReadPointerNoFence @ 15015a6f0

void * __cdecl ReadPointerNoFence(void **param_1)

{
  return *param_1;
}

// __castguard_check_failure_debugbreak @ 15015a6fc

void __cdecl __castguard_check_failure_debugbreak(void *param_1)

{
  code *pcVar1;
  
  if (param_1 == &__CastGuardVftablesEnd) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// __castguard_check_failure_fastfail @ 15015a720

void __cdecl __castguard_check_failure_fastfail(void *param_1)

{
  code *pcVar1;
  
  if (param_1 == &__CastGuardVftablesEnd) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x41);
  }
  return;
}

// __castguard_check_failure_nop @ 15015a748

void __cdecl __castguard_check_failure_nop(void *param_1)

{
  return;
}

// __castguard_check_failure_os_handled @ 15015a754

void __cdecl __castguard_check_failure_os_handled(void *param_1)

{
  if ((param_1 == &__CastGuardVftablesEnd) &&
     (__castguard_check_failure_os_handled_fptr != (_func___cdecl_void_void_ptr *)0x0)) {
    (*__castguard_check_failure_os_handled_fptr)(&__CastGuardVftablesEnd);
  }
  return;
}

// __castguard_check_failure_os_handled_wrapper @ 15015a798

void __cdecl __castguard_check_failure_os_handled_wrapper(void *param_1)

{
  if (__castguard_check_failure_os_handled_fptr != (_func___cdecl_void_void_ptr *)0x0) {
    (*__castguard_check_failure_os_handled_fptr)(param_1);
  }
  return;
}

// __castguard_compat_check @ 15015a7c0

int __cdecl __castguard_compat_check(void *param_1)

{
  return (int)(param_1 == &__CastGuardVftablesEnd);
}

// __castguard_slow_path_check_debugbreak @ 15015a7e4

void __cdecl __castguard_slow_path_check_debugbreak(void *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  
  if ((param_3 < (longlong)param_1 + (-0x1536fa780 - param_2)) &&
     (param_1 == &__CastGuardVftablesEnd)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// __castguard_slow_path_check_fastfail @ 15015a820

void __cdecl __castguard_slow_path_check_fastfail(void *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  
  if ((param_3 < (longlong)param_1 + (-0x1536fa780 - param_2)) &&
     (param_1 == &__CastGuardVftablesEnd)) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x41);
  }
  return;
}

// __castguard_slow_path_check_nop @ 15015a864

void __cdecl __castguard_slow_path_check_nop(void *param_1,ulong64 param_2,ulong64 param_3)

{
  return;
}

// __castguard_slow_path_check_os_handled @ 15015a870

void __cdecl __castguard_slow_path_check_os_handled(void *param_1,ulong64 param_2,ulong64 param_3)

{
  if (((param_3 < (longlong)param_1 + (-0x1536fa780 - param_2)) &&
      (param_1 == &__CastGuardVftablesEnd)) &&
     (__castguard_check_failure_os_handled_fptr != (_func___cdecl_void_void_ptr *)0x0)) {
    (*__castguard_check_failure_os_handled_fptr)(&__CastGuardVftablesEnd);
  }
  return;
}

// __castguard_slow_path_compat_check @ 15015a8d0

int __cdecl __castguard_slow_path_compat_check(void *param_1,ulong64 param_2,ulong64 param_3)

{
  return (int)(param_3 < (longlong)param_1 + (-0x1536fa780 - param_2));
}

// _guard_icall_checks_enforced @ 15015a8f4

int __cdecl _guard_icall_checks_enforced(void)

{
  return (int)(__guard_check_icall_fptr != _guard_check_icall_nop);
}

// _guard_rf_checks_enforced @ 15015a914

int __cdecl _guard_rf_checks_enforced(void)

{
  return 0;
}

