// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_thread_local_cache_node_allocate @ 140d7a7e0

pas_thread_local_cache_node * __cdecl pas_thread_local_cache_node_allocate(void)

{
  code *pcVar1;
  pas_thread_local_cache_node **pppVar2;
  BOOLEAN BVar3;
  pas_thread_local_cache_node *ppVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ppVar4 = pas_thread_local_cache_node_first_free;
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_thread_local_cache_node_first_free == (pas_thread_local_cache_node *)0x0) {
    ppVar4 = pas_immortal_heap_allocate_with_alignment
                       (0x40,0x40,"pas_thread_local_cache_node",pas_object_allocation);
    ppVar4->version = 1;
    ppVar4->next_free = (pas_thread_local_cache_node *)0x0;
    ppVar4->next = pas_thread_local_cache_node_first;
    InitializeSRWLock((PSRWLOCK)&ppVar4->page_lock);
    InitializeSRWLock((PSRWLOCK)&ppVar4->scavenger_lock);
    ppVar4->cache = (pas_thread_local_cache *)0x0;
    LOCK();
    UNLOCK();
    pas_thread_local_cache_node_first = ppVar4;
  }
  else {
    pppVar2 = &pas_thread_local_cache_node_first_free->next_free;
    pas_thread_local_cache_node_first_free = pas_thread_local_cache_node_first_free->next_free;
    *pppVar2 = (pas_thread_local_cache_node *)0x0;
    if (ppVar4->cache != (pas_thread_local_cache *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return ppVar4;
}

// pas_thread_local_cache_node_deallocate @ 140d7a890

void __cdecl pas_thread_local_cache_node_deallocate(pas_thread_local_cache_node *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  if (param_1->next_free != (pas_thread_local_cache_node *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->scavenger_lock);
    if (BVar2 == '\0') {
      param_1->version = param_1->version + 1;
      param_1->cache = (pas_thread_local_cache *)0x0;
      param_1->next_free = pas_thread_local_cache_node_first_free;
      pas_thread_local_cache_node_first_free = param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_node_version @ 140d7a8f0

ulong64 __cdecl pas_thread_local_cache_node_version(pas_thread_local_cache_node *param_1)

{
  return param_1->version;
}

