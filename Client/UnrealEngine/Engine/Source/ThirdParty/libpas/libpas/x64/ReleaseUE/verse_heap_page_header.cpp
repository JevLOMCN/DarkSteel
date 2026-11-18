// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// verse_heap_page_header_construct @ 140da8d10

void __cdecl verse_heap_page_header_construct(verse_heap_page_header *param_1)

{
  param_1->version = verse_heap_latest_version;
  param_1->may_have_set_mark_bits_for_dead_objects = false;
  param_1->is_stashing_alloc_bits = false;
  param_1->stashed_alloc_bits = (uint *)0x0;
  param_1->client_data = (void *)0x0;
  InitializeSRWLock((PSRWLOCK)&param_1->client_data_lock);
  LOCK();
  UNLOCK();
  return;
}

// verse_heap_page_header_lock_client_data @ 140da8d50

void ** __cdecl verse_heap_page_header_lock_client_data(verse_heap_page_header *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&param_1->client_data_lock);
  return &param_1->client_data;
}

// verse_heap_page_header_unlock_client_data @ 140da8d80

void __cdecl verse_heap_page_header_unlock_client_data(verse_heap_page_header *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140da8d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&param_1->client_data_lock);
  return;
}

