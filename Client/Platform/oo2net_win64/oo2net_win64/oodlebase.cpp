// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 3

// Oodle_PlatformDesc @ 14ff4ce80

char * __cdecl oo2net::Oodle_PlatformDesc(void)

{
  return "Win-x64 msvc-1929";
}

// ooLogErrorPost @ 14ff4cea0

void __cdecl oo2net::ooLogErrorPost(void)

{
  if (fp_ooLogErrorPost != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff4ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ooLogErrorPost)();
    return;
  }
  return;
}

// ooLogErrorPre @ 14ff4cec0

void __cdecl oo2net::ooLogErrorPre(void)

{
  if (fp_ooLogErrorPre != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ff4cecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ooLogErrorPre)();
    return;
  }
  return;
}

