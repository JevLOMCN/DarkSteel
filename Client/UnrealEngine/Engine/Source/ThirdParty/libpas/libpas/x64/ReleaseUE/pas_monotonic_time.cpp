// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_get_current_monotonic_time_nanoseconds @ 140d92b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl pas_get_current_monotonic_time_nanoseconds(void)

{
  code *pcVar1;
  ulong64 uVar2;
  undefined1 auStack_38 [40];
  ULONGLONG local_10;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  QueryUnbiasedInterruptTime(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return local_10 * 100;
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

