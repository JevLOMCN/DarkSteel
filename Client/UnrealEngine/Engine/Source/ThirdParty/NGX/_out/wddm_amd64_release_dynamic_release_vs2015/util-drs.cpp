// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 3

// `dynamic_initializer_for_'g_mutex'' @ 14145a820

void __cdecl ngx::util::_dynamic_initializer_for__g_mutex__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&g_mutex);
  atexit(_dynamic_atexit_destructor_for__g_mutex__);
  return;
}

// drsShutdown @ 14ff40260

void __cdecl ngx::util::drsShutdown(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'g_mutex'' @ 1504766f0

void __cdecl ngx::util::_dynamic_atexit_destructor_for__g_mutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504766f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&g_mutex);
  return;
}

