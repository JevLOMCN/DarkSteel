// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_heap_config_kind_get_string @ 140d8c6f0

char * __cdecl pas_heap_config_kind_get_string(pas_heap_config_kind param_1)

{
  code *pcVar1;
  
  if (param_1 < 4) {
    return (&PTR_s_null_1531ec568)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_heap_config_kind_for_each @ 140d8c710

bool __cdecl
pas_heap_config_kind_for_each
          (_func___cdecl_bool_pas_heap_config_kind_pas_heap_config_ptr_void_ptr *param_1,
          void *param_2)

{
  bool bVar1;
  
  bVar1 = (*param_1)(pas_heap_config_kind_null,(pas_heap_config *)0x0,param_2);
  if (bVar1) {
    bVar1 = (*param_1)(pas_heap_config_kind_pas_utility,&pas_utility_heap_config,param_2);
    if (bVar1) {
      bVar1 = (*param_1)(pas_heap_config_kind_bmalloc,&bmalloc_heap_config,param_2);
      if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000140d8c76e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar1 = (*param_1)(pas_heap_config_kind_verse,&verse_heap_config,param_2);
        return bVar1;
      }
    }
  }
  return false;
}

// pas_heap_config_kind_set_active @ 140d8c780

bool __cdecl pas_heap_config_kind_set_active(pas_heap_config_kind param_1)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  uint uVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 == '\0') {
    uVar1 = pas_heap_config_kind_is_active_bitvector[(ulonglong)(longlong)(int)param_1 >> 5];
    uVar4 = 1 << ((byte)param_1 & 0x1f);
    if ((uVar1 >> (param_1 & 0x1f) & 1) == 0) {
      pas_heap_config_kind_is_active_bitvector[(ulonglong)(longlong)(int)param_1 >> 5] =
           uVar1 | uVar4;
    }
    return (uVar1 & uVar4) == 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

