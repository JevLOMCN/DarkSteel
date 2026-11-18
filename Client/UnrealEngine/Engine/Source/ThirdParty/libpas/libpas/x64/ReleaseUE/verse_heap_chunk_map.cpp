// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// verse_heap_initialize_chunk_map_entry_ptr @ 140d84b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

verse_heap_chunk_map_entry * __cdecl verse_heap_initialize_chunk_map_entry_ptr(ulong64 param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  verse_heap_chunk_map_entry *pvVar3;
  undefined1 auStackY_78 [32];
  pas_alignment local_48;
  pas_allocation_result local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1 >> 0x30 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pvVar3 = verse_heap_first_level_chunk_map[param_1 >> 0x22];
  if (verse_heap_first_level_chunk_map[param_1 >> 0x22] == (verse_heap_chunk_map_entry *)0x0) {
    local_48.alignment = 4;
    local_48.alignment_begin = 0;
    pas_reservation_free_heap_allocate_with_alignment
              (&local_38,0x20000,&local_48,"verse_heap_chunk_map/second_level",pas_object_allocation
              );
    if ((local_38.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_38.zero_mode != pas_zero_mode_is_all_zero) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_reservation_commit((void *)local_38.begin,0x20000);
    verse_heap_first_level_chunk_map[param_1 >> 0x22] = (verse_heap_chunk_map_entry *)local_38.begin
    ;
    pvVar3 = (verse_heap_chunk_map_entry *)local_38.begin;
  }
  if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return pvVar3 + ((uint)(param_1 >> 0x13) & 0x7fff);
  }
  pcVar1 = (code *)swi(3);
  pvVar3 = (verse_heap_chunk_map_entry *)(*pcVar1)();
  return pvVar3;
}

