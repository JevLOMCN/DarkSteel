// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_compact_expendable_memory_allocate @ 140d6ec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl pas_compact_expendable_memory_allocate(ulong64 param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  void *pvVar3;
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
  if ((pas_compact_expendable_memory_payload == (void *)0x0) ==
      (pas_compact_expendable_memory_header.header.size != 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_compact_expendable_memory_payload == (void *)0x0) {
    local_48.alignment = 0x4000;
    local_48.alignment_begin = 0;
    pas_compact_reservation_free_heap_allocate_with_alignment
              (&local_38,0x1400000,&local_48,"pas_large_expendable_memory",pas_delegate_allocation);
    if ((local_38.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((void *)local_38.begin == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_reservation_commit((void *)local_38.begin,0x1400000);
    pas_compact_expendable_memory_payload = (void *)local_38.begin;
    pas_expendable_memory_construct(&pas_compact_expendable_memory_header.header,0x1400000);
  }
  if (pas_compact_expendable_memory_header.header.size == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_compact_expendable_memory_payload != (void *)0x0) {
    pvVar3 = pas_expendable_memory_allocate
                       (&pas_compact_expendable_memory_header.header,
                        pas_compact_expendable_memory_payload,param_1,param_2,
                        pas_compact_expendable_heap_kind,param_3);
    if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
      return pvVar3;
    }
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_compact_expendable_memory_commit_if_necessary @ 140d6ed90

bool __cdecl pas_compact_expendable_memory_commit_if_necessary(void *param_1,ulong64 param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_compact_expendable_memory_header.header.size != 0) {
    if (pas_compact_expendable_memory_payload != (void *)0x0) {
      bVar3 = pas_expendable_memory_commit_if_necessary
                        (&pas_compact_expendable_memory_header.header,
                         pas_compact_expendable_memory_payload,param_1,param_2);
      return bVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_compact_expendable_memory_scavenge @ 140d6edf0

bool __cdecl pas_compact_expendable_memory_scavenge(pas_expendable_memory_scavenge_kind param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((pas_compact_expendable_memory_payload == (void *)0x0) !=
      (pas_compact_expendable_memory_header.header.size != 0)) {
    if (pas_compact_expendable_memory_payload != (void *)0x0) {
      bVar3 = pas_expendable_memory_scavenge
                        (&pas_compact_expendable_memory_header.header,
                         pas_compact_expendable_memory_payload,param_1);
      return bVar3;
    }
    return false;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

