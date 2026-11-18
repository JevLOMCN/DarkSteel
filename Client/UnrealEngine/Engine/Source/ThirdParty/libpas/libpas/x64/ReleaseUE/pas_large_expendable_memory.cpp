// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_large_expendable_memory_allocate @ 140d6ee50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl pas_large_expendable_memory_allocate(ulong64 param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  ulong64 uVar2;
  BOOLEAN BVar3;
  void *pvVar4;
  undefined1 auStackY_88 [32];
  pas_alignment local_50;
  pas_allocation_result local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_large_expendable_memory_head == (pas_large_expendable_memory *)0x0) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar3 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_50.alignment = 0x2000000;
    local_50.alignment_begin = 0;
    pas_reservation_free_heap_allocate_with_alignment
              (&local_40,0x1ff8000,&local_50,"pas_large_expendable_memory",pas_delegate_allocation);
    uVar2 = local_40.begin;
    if ((local_40.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((pas_large_expendable_memory *)local_40.begin == (pas_large_expendable_memory *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_reservation_commit((void *)local_40.begin,0x1ff8000);
    *(pas_large_expendable_memory **)uVar2 = pas_large_expendable_memory_head;
    pas_expendable_memory_construct((pas_expendable_memory *)(uVar2 + 8),0x1ff4000);
    pas_large_expendable_memory_head = (pas_large_expendable_memory *)uVar2;
  }
  pvVar4 = pas_expendable_memory_try_allocate
                     (&pas_large_expendable_memory_head->header,
                      pas_large_expendable_memory_head + 0x200,param_1,param_2,
                      pas_large_expendable_heap_kind,param_3);
  if (pvVar4 == (void *)0x0) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar3 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_50.alignment = 0x2000000;
    local_50.alignment_begin = 0;
    pas_reservation_free_heap_allocate_with_alignment
              (&local_40,0x1ff8000,&local_50,"pas_large_expendable_memory",pas_delegate_allocation);
    if ((local_40.did_succeed & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((pas_large_expendable_memory *)local_40.begin == (pas_large_expendable_memory *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    pas_reservation_commit((void *)local_40.begin,0x1ff8000);
    *(pas_large_expendable_memory **)local_40.begin = pas_large_expendable_memory_head;
    pas_expendable_memory_construct((pas_expendable_memory *)(local_40.begin + 8),0x1ff4000);
    pas_large_expendable_memory_head = (pas_large_expendable_memory *)local_40.begin;
    pvVar4 = pas_expendable_memory_allocate
                       ((pas_expendable_memory *)(local_40.begin + 8),
                        (pas_large_expendable_memory *)(local_40.begin + 0x4000),param_1,param_2,
                        pas_large_expendable_heap_kind,param_3);
    if ((local_30 ^ (ulonglong)auStackY_88) != __security_cookie.value) goto LAB_140d6f03b;
  }
  else if ((local_30 ^ (ulonglong)auStackY_88) != __security_cookie.value) {
LAB_140d6f03b:
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  return pvVar4;
}

// pas_large_expendable_memory_commit_if_necessary @ 140d6f060

bool __cdecl pas_large_expendable_memory_commit_if_necessary(void *param_1,ulong64 param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    bVar3 = pas_expendable_memory_commit_if_necessary
                      ((pas_expendable_memory *)((ulonglong)param_1 & 0xfffffffffe000000 | 8),
                       (void *)(((ulonglong)param_1 & 0xfffffffffe000000) + 0x4000),param_1,param_2)
    ;
    return bVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_large_expendable_memory_scavenge @ 140d6f0b0

bool __cdecl pas_large_expendable_memory_scavenge(pas_expendable_memory_scavenge_kind param_1)

{
  pas_large_expendable_memory *ppVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  bool bVar5;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 == '\0') {
    bVar5 = false;
    for (ppVar1 = pas_large_expendable_memory_head; ppVar1 != (pas_large_expendable_memory *)0x0;
        ppVar1 = ppVar1->next) {
      bVar4 = pas_expendable_memory_scavenge(&ppVar1->header,ppVar1 + 0x200,param_1);
      bVar5 = (bool)(bVar5 | bVar4);
    }
    return bVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

