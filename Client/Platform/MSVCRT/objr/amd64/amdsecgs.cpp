// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __security_check_cookie @ 15015b910

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(void)

{
  ulong64 in_RCX;
  
  if ((in_RCX == __security_cookie.value) && ((short)(in_RCX >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(in_RCX);
}

