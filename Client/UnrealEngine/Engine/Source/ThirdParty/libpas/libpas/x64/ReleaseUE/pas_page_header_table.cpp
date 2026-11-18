// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_page_header_table_add @ 140d811a0

pas_page_base * __cdecl
pas_page_header_table_add
          (pas_page_header_table *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  pas_lock_free_read_ptr_ptr_hashtable_table *ppVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = param_2 - 1;
  if ((param_2 ^ uVar6) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((uVar6 & (ulonglong)param_4) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_1->page_size != param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  ppVar1 = (param_1->hashtable).table;
  if (ppVar1 != (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    if (((ulonglong)param_4 | param_2) >> 0x20 == 0) {
      uVar5 = (uint)(((ulonglong)param_4 & 0xffffffff) / (param_2 & 0xffffffff));
    }
    else {
      uVar5 = (uint)((ulonglong)param_4 / param_2);
    }
    uVar5 = uVar5 >> 4 ^ uVar5;
    uVar5 = uVar5 * 0x20 + (uVar5 ^ 0xdeadbeef);
    uVar5 = uVar5 >> 0xb ^ uVar5;
    uVar6 = (ulonglong)(ppVar1->table_mask & uVar5);
    pvVar2 = (void *)ppVar1->array[uVar6].low;
    while (pvVar2 != param_4) {
      uVar5 = uVar5 + 1;
      if (pvVar2 == (void *)0xffffffffffffffff) goto LAB_140d8126a;
      uVar6 = (ulonglong)(ppVar1->table_mask & uVar5);
      pvVar2 = (void *)ppVar1->array[uVar6].low;
    }
    if (ppVar1->array[uVar6].high != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
LAB_140d8126a:
  puVar4 = pas_utility_heap_allocate_with_alignment
                     (param_3 + 0x10,0x10,"pas_page_header_table/header");
  *puVar4 = param_4;
  pas_lock_free_read_ptr_ptr_hashtable_set
            (&param_1->hashtable,pas_page_header_table_hash,(void *)param_2,param_4,
             (pas_page_base *)(puVar4 + 2),pas_lock_free_read_ptr_ptr_hashtable_set_maybe_existing);
  return (pas_page_base *)(puVar4 + 2);
}

// pas_page_header_table_hash @ 140d812e0

uint __cdecl pas_page_header_table_hash(void *param_1,void *param_2)

{
  uint uVar1;
  
  if (((ulonglong)param_1 | (ulonglong)param_2) >> 0x20 == 0) {
    uVar1 = (uint)(((ulonglong)param_1 & 0xffffffff) / ((ulonglong)param_2 & 0xffffffff));
  }
  else {
    uVar1 = (uint)((ulonglong)param_1 / (ulonglong)param_2);
  }
  uVar1 = uVar1 >> 4 ^ uVar1;
  uVar1 = uVar1 * 0x20 + (uVar1 ^ 0xdeadbeef);
  return uVar1 >> 0xb ^ uVar1;
}

// pas_page_header_table_remove @ 140d81320

void __cdecl
pas_page_header_table_remove(pas_page_header_table *param_1,ulong64 param_2,pas_page_base *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  
  if (param_1->page_size != param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = param_2 - 1;
  if (uVar1 < (param_2 ^ uVar1)) {
    if ((uVar1 & (ulonglong)*(void **)(param_3 + -0x10)) == 0) {
      pas_lock_free_read_ptr_ptr_hashtable_set
                (&param_1->hashtable,pas_page_header_table_hash,(void *)param_2,
                 *(void **)(param_3 + -0x10),(void *)0x0,
                 pas_lock_free_read_ptr_ptr_hashtable_set_maybe_existing);
      pas_utility_heap_deallocate(param_3 + -0x10);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

