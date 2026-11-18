// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 3

// Oodle_PlatformDesc @ 14f32ef20

char * __cdecl oo2::Oodle_PlatformDesc(void)

{
  return "Win-x64 msvc-1929";
}

// ooLogErrorPost @ 14f32ef40

void __cdecl oo2::ooLogErrorPost(void)

{
  if (fp_ooLogErrorPost != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f32ef4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ooLogErrorPost)();
    return;
  }
  return;
}

// ooLogErrorPre @ 14f32ef60

void __cdecl oo2::ooLogErrorPre(void)

{
  if (fp_ooLogErrorPre != (_func___cdecl_void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f32ef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ooLogErrorPre)();
    return;
  }
  return;
}

