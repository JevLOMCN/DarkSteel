// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_ensure_heap_slow @ 140d69420

pas_heap * __cdecl
pas_ensure_heap_slow
          (pas_heap_ref *param_1,pas_heap_ref_kind param_2,pas_heap_config *param_3,
          pas_heap_runtime_config *param_4)

{
  code *pcVar1;
  pas_heap *ppVar2;
  
  if (param_2 != pas_fake_heap_ref_kind) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    ppVar2 = param_1->heap;
    if (ppVar2 == (pas_heap *)0x0) {
      ppVar2 = pas_heap_create(param_1,param_2,param_3,param_4);
      param_1->heap = ppVar2;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return ppVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

