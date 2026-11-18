// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_heap_config_activate @ 140d74cb0

bool __cdecl pas_heap_config_activate(pas_heap_config *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    bVar3 = pas_heap_config_kind_set_active(param_1->kind);
    if ((bVar3) && (param_1->activate_callback != (_func___cdecl_void *)0x0)) {
      (*param_1->activate_callback)();
    }
    return bVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

