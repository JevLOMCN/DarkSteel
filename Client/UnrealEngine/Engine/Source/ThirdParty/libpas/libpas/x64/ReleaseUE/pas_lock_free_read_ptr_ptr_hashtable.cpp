// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_lock_free_read_ptr_ptr_hashtable_set @ 140da5780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_lock_free_read_ptr_ptr_hashtable_set
          (pas_lock_free_read_ptr_ptr_hashtable *param_1,
          _func___cdecl_uint_void_ptr_void_ptr *param_2,void *param_3,void *param_4,void *param_5,
          pas_lock_free_read_ptr_ptr_hashtable_set_mode param_6)

{
  pas_pair pVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  pas_pair *ppVar8;
  ulonglong uVar9;
  pas_pair *ppVar10;
  void *pvVar11;
  ulong64 _Size;
  pas_lock_free_read_ptr_ptr_hashtable_table *ppVar12;
  uint uVar13;
  undefined1 local_b8 [32];
  pas_allocation_result local_68;
  pas_alignment local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_b8;
  if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  ppVar12 = param_1->table;
  if (ppVar12 == (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    uVar9 = 0x10;
  }
  else {
    if (ppVar12->key_count * 2 < ppVar12->table_size) goto LAB_140da5913;
    uVar5 = ppVar12->table_size * 2;
    uVar9 = (ulonglong)uVar5;
    if (uVar5 == 0) goto LAB_140da59f3;
  }
  uVar5 = (uint)uVar9;
  if ((uVar5 & uVar5 - 1) != 0) {
LAB_140da59f3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar13 = uVar5 - 1;
  _Size = uVar9 * 0x10 + 0x20;
  local_58.alignment = 0x10;
  local_58.alignment_begin = 0;
  uVar7 = _Size;
  pas_bootstrap_free_heap_allocate_with_alignment
            (&local_68,_Size,&local_58,"pas_lock_free_read_ptr_ptr_hashtable/table",
             pas_object_allocation);
  memset((void *)local_68.begin,(int)CONCAT71((int7)(uVar7 >> 8),0xff),_Size);
  *(pas_lock_free_read_ptr_ptr_hashtable_table **)local_68.begin = ppVar12;
  if (ppVar12 == (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
    *(uint *)(local_68.begin + 8) = uVar5;
    *(uint *)(local_68.begin + 0xc) = uVar13;
    uVar5 = 0;
  }
  else {
    uVar4 = ppVar12->table_size;
    if (uVar4 != 0) {
      uVar9 = 0;
      do {
        pvVar11 = (void *)ppVar12->array[uVar9].low;
        if (pvVar11 != (void *)0xffffffffffffffff) {
          uVar4 = (*param_2)(pvVar11,param_3);
          do {
            uVar6 = uVar4 & uVar13;
            uVar4 = uVar4 + 1;
          } while (((pas_pair *)(local_68.begin + 0x20))[uVar6].low != 0xffffffffffffffff);
          uVar7 = ppVar12->array[uVar9].high;
          ((pas_pair *)(local_68.begin + 0x20))[uVar6].low = ppVar12->array[uVar9].low;
          ((pas_pair *)(local_68.begin + 0x20))[uVar6].high = uVar7;
          uVar4 = ppVar12->table_size;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
    *(uint *)(local_68.begin + 8) = uVar5;
    *(uint *)(local_68.begin + 0xc) = uVar13;
    uVar5 = ppVar12->key_count;
  }
  *(uint *)(local_68.begin + 0x10) = uVar5;
  LOCK();
  UNLOCK();
  param_1->table = (pas_lock_free_read_ptr_ptr_hashtable_table *)local_68.begin;
  ppVar12 = (pas_lock_free_read_ptr_ptr_hashtable_table *)local_68.begin;
LAB_140da5913:
  uVar5 = (*param_2)(param_4,param_3);
  uVar9 = (ulonglong)(ppVar12->table_mask & uVar5);
  ppVar8 = (pas_pair *)(uVar9 * 0x10);
  ppVar10 = (pas_pair *)((longlong)&ppVar12->array[0].low + (longlong)&ppVar8->low);
  pvVar11 = (void *)ppVar12->array[uVar9].low;
  if (pvVar11 == (void *)0xffffffffffffffff) {
LAB_140da59b0:
    do {
      ppVar8 = (pas_pair *)ppVar10->high;
      LOCK();
      pVar1 = *ppVar10;
      if (*ppVar10 == pVar1) {
        ppVar10->low = (ulong64)param_4;
        ppVar10->high = (ulong64)param_5;
      }
      else {
        ppVar8 = (pas_pair *)pVar1.high;
      }
      UNLOCK();
    } while (*ppVar10 != pVar1);
    ppVar12->key_count = ppVar12->key_count + 1;
    uVar9 = local_48 ^ (ulonglong)local_b8;
    if (uVar9 == __security_cookie.value) {
      return;
    }
  }
  else {
    if (pvVar11 != param_4) {
      ppVar8 = ppVar12->array;
      do {
        uVar5 = uVar5 + 1;
        if (pvVar11 == param_4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar13 = ppVar12->table_mask & uVar5;
        ppVar10 = ppVar8 + uVar13;
        pvVar11 = (void *)ppVar8[uVar13].low;
        if (pvVar11 == (void *)0xffffffffffffffff) goto LAB_140da59b0;
      } while (pvVar11 != param_4);
    }
    if (param_6 != pas_lock_free_read_ptr_ptr_hashtable_set_maybe_existing) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar10->low = (ulong64)param_4;
    ppVar10->high = (ulong64)param_5;
    uVar9 = local_48 ^ (ulonglong)local_b8;
    if (uVar9 == __security_cookie.value) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)(uVar9,ppVar8);
  return;
}

