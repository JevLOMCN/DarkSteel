// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 2

// _RTC_Initialize @ 150167874

void __cdecl _RTC_Initialize(void)

{
  _func___cdecl_void **pp_Var1;
  
  for (pp_Var1 = __rtc_izz; pp_Var1 < __rtc_izz; pp_Var1 = pp_Var1 + 1) {
    if (*pp_Var1 != (_func___cdecl_void *)0x0) {
      (*__guard_dispatch_icall_fptr)();
    }
  }
  return;
}

// _RTC_Terminate @ 1501678b8

void __cdecl _RTC_Terminate(void)

{
  _func___cdecl_void **pp_Var1;
  
  for (pp_Var1 = __rtc_tzz; pp_Var1 < __rtc_tzz; pp_Var1 = pp_Var1 + 1) {
    if (*pp_Var1 != (_func___cdecl_void *)0x0) {
      (*__guard_dispatch_icall_fptr)();
    }
  }
  return;
}

