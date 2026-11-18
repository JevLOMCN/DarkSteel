// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 5

// pas_large_map_find @ 140d66590

pas_large_map_entry * __cdecl
pas_large_map_find(pas_large_map_entry *__return_storage_ptr__,ulong64 param_1)

{
  pas_large_map_entry *ppVar1;
  code *pcVar2;
  ulong64 uVar3;
  BOOLEAN BVar4;
  uint uVar5;
  uint uVar6;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_large_map_hashtable_instance.table == (pas_large_map_entry *)0x0) {
LAB_140d66647:
    __return_storage_ptr__->begin = 0;
    __return_storage_ptr__->end = 0;
    __return_storage_ptr__->heap = (pas_large_heap *)0x0;
    return __return_storage_ptr__;
  }
  uVar5 = (uint)(param_1 >> 4) & 0xfffffff ^ (uint)param_1;
  uVar6 = (uint)(param_1 >> 0x20);
  uVar6 = uVar6 >> 4 ^ uVar6;
  uVar5 = uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef) ^ uVar5 * 0x20 + (uVar5 ^ 0xdeadbeef);
  uVar5 = uVar5 >> 0xb ^ uVar5;
  do {
    uVar6 = uVar5 & pas_large_map_hashtable_instance.table_mask;
    if (pas_large_map_hashtable_instance.table[uVar6].end == 0) {
      if (pas_large_map_hashtable_instance.table[uVar6].begin != 1) goto LAB_140d66647;
    }
    else if (pas_large_map_hashtable_instance.table[uVar6].begin == param_1) {
      ppVar1 = pas_large_map_hashtable_instance.table + uVar6;
      __return_storage_ptr__->heap = ppVar1->heap;
      uVar3 = ppVar1->end;
      __return_storage_ptr__->begin = ppVar1->begin;
      __return_storage_ptr__->end = uVar3;
      return __return_storage_ptr__;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

// pas_large_map_add @ 140d66670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_large_map_add(pas_large_map_entry *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  uint uVar5;
  pas_large_map_entry *ppVar6;
  pas_large_map_hashtable *ppVar7;
  uint uVar8;
  pas_large_map_hashtable_in_flux_stash *in_R8;
  pas_allocation_config *in_R9;
  pas_large_map_entry *ppVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = param_1->begin;
  local_28 = param_1->end;
  uStack_20 = param_1->heap;
  if (pas_large_map_hashtable_instance.table_size <=
      (pas_large_map_hashtable_instance.deleted_count + pas_large_map_hashtable_instance.key_count)
      * 2) {
    uVar5 = pas_large_map_hashtable_instance.table_size * 2;
    if (pas_large_map_hashtable_instance.key_count * 6 <
        pas_large_map_hashtable_instance.table_size * 2) {
      uVar5 = pas_large_map_hashtable_instance.table_size;
    }
    ppVar7 = (pas_large_map_hashtable *)&DAT_00000010;
    if (pas_large_map_hashtable_instance.table_size != 0) {
      ppVar7 = (pas_large_map_hashtable *)(ulonglong)uVar5;
    }
    pas_large_map_hashtable_rehash(ppVar7,uVar5,in_R8,in_R9);
  }
  uVar5 = (uint)(uVar1 >> 4) & 0xfffffff ^ (uint)uVar1;
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar8 >> 4 ^ uVar8;
  uVar5 = uVar8 * 0x20 + (uVar8 ^ 0xdeadbeef) ^ uVar5 * 0x20 + (uVar5 ^ 0xdeadbeef);
  uVar5 = uVar5 >> 0xb ^ uVar5;
  ppVar6 = (pas_large_map_entry *)0x0;
  while( true ) {
    while( true ) {
      uVar2 = pas_large_map_hashtable_instance.table
              [uVar5 & pas_large_map_hashtable_instance.table_mask].begin;
      if (uVar2 != 1) break;
      if (ppVar6 == (pas_large_map_entry *)0x0) {
        ppVar6 = pas_large_map_hashtable_instance.table +
                 (uVar5 & pas_large_map_hashtable_instance.table_mask);
      }
      uVar5 = uVar5 + 1;
    }
    if (uVar2 == 0) break;
    if (uVar2 == uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = uVar5 + 1;
  }
  ppVar9 = pas_large_map_hashtable_instance.table +
           (uVar5 & pas_large_map_hashtable_instance.table_mask);
  if (ppVar6 != (pas_large_map_entry *)0x0) {
    pas_large_map_hashtable_instance.deleted_count =
         pas_large_map_hashtable_instance.deleted_count - 1;
    ppVar9 = ppVar6;
  }
  pas_large_map_hashtable_instance.key_count = pas_large_map_hashtable_instance.key_count + 1;
  ppVar9->begin = uVar1;
  *(undefined4 *)&ppVar9->end = (undefined4)local_28;
  *(undefined4 *)((longlong)&ppVar9->end + 4) = local_28._4_4_;
  *(undefined4 *)&ppVar9->heap = (undefined4)uStack_20;
  *(undefined4 *)((longlong)&ppVar9->heap + 4) = uStack_20._4_4_;
  pas_large_map_hashtable_instance_in_flux_stash.in_flux_entry = (pas_large_map_entry *)0x0;
  if ((local_18 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// pas_large_map_take @ 140d667c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

pas_large_map_entry * __cdecl
pas_large_map_take(pas_large_map_entry *__return_storage_ptr__,ulong64 param_1)

{
  pas_allocation_config *ppVar1;
  code *pcVar2;
  uint uVar3;
  BOOLEAN BVar4;
  pas_large_map_entry *ppVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  ulong64 local_38;
  ulong64 uStack_30;
  pas_large_heap *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  uVar3 = pas_large_map_hashtable_instance.table_mask;
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_large_map_hashtable_instance.table != (pas_large_map_entry *)0x0) {
    uVar6 = (uint)(param_1 >> 4) & 0xfffffff ^ (uint)param_1;
    uVar7 = (uint)(param_1 >> 0x20);
    uVar7 = uVar7 >> 4 ^ uVar7;
    uVar6 = uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef) ^ uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef);
    uVar6 = uVar6 >> 0xb ^ uVar6;
    do {
      uVar8 = (ulonglong)(uVar6 & pas_large_map_hashtable_instance.table_mask);
      ppVar1 = (pas_allocation_config *)pas_large_map_hashtable_instance.table[uVar8].begin;
      if (pas_large_map_hashtable_instance.table[uVar8].end == 0) {
        if (ppVar1 != (pas_allocation_config *)&DAT_00000001) break;
      }
      else if (ppVar1 == (pas_allocation_config *)param_1) goto code_r0x000140d66877;
      uVar6 = uVar6 + 1;
    } while( true );
  }
  if (__return_storage_ptr__ != (pas_large_map_entry *)0x0) {
    __return_storage_ptr__->begin = 0;
    __return_storage_ptr__->end = 0;
    __return_storage_ptr__->heap = (pas_large_heap *)0x0;
    return __return_storage_ptr__;
  }
LAB_140d6691c:
  if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar2 = (code *)swi(3);
  ppVar5 = (pas_large_map_entry *)(*pcVar2)();
  return ppVar5;
code_r0x000140d66877:
  ppVar5 = pas_large_map_hashtable_instance.table + uVar8;
  local_28 = ppVar5->heap;
  local_38 = ppVar5->begin;
  uStack_30 = ppVar5->end;
  ppVar5->begin = 1;
  ppVar5->end = 0;
  ppVar5->heap = (pas_large_heap *)0x0;
  pas_large_map_hashtable_instance_in_flux_stash.in_flux_entry = (pas_large_map_entry *)0x0;
  pas_large_map_hashtable_instance.key_count =
       pas_large_map_hashtable_instance.key_count + ___xmm_000000000000000000000001ffffffff;
  pas_large_map_hashtable_instance.deleted_count =
       pas_large_map_hashtable_instance.deleted_count + _UNK_1531e9d14;
  bVar9 = pas_large_map_hashtable_instance.table_size <=
          pas_large_map_hashtable_instance.key_count * 6;
  if (pas_large_map_hashtable_instance.table_size >= 0x11 && !bVar9) {
    pas_large_map_hashtable_rehash
              ((pas_large_map_hashtable *)
               (ulonglong)(pas_large_map_hashtable_instance.table_size >> 1),
               CONCAT31((int3)(uVar3 >> 8),
                        pas_large_map_hashtable_instance.table_size < 0x11 || bVar9),
               (pas_large_map_hashtable_in_flux_stash *)(uVar8 * 3),ppVar1);
  }
  if (__return_storage_ptr__ != (pas_large_map_entry *)0x0) {
    __return_storage_ptr__->heap = local_28;
    __return_storage_ptr__->begin = local_38;
    __return_storage_ptr__->end = uStack_30;
  }
  goto LAB_140d6691c;
}

// pas_large_map_for_each_entry @ 140d66950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_large_map_for_each_entry(_func___cdecl_bool_pas_large_map_entry_void_ptr *param_1,void *param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  pas_large_map_entry *ppVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  pas_large_map_entry local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  bVar6 = true;
  if ((ulonglong)pas_large_map_hashtable_instance.table_size != 0) {
    lVar7 = (ulonglong)pas_large_map_hashtable_instance.table_size * 0x18;
    ppVar5 = pas_large_map_hashtable_instance.table;
    do {
      uVar1 = *(ulong64 *)((longlong)ppVar5 + lVar7 + -0x10);
      if (uVar1 != 0) {
        local_48.begin = *(ulong64 *)((longlong)&ppVar5[-1].begin + lVar7);
        local_48.heap = *(pas_large_heap **)((longlong)ppVar5 + lVar7 + -8);
        local_48.end = uVar1;
        bVar3 = (*param_1)(&local_48,param_2);
        ppVar5 = pas_large_map_hashtable_instance.table;
        if (!bVar3) {
          bVar6 = false;
          break;
        }
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return bVar6;
}

// pas_large_map_hashtable_rehash @ 140d66a10

void __cdecl
pas_large_map_hashtable_rehash
          (pas_large_map_hashtable *param_1,uint param_2,
          pas_large_map_hashtable_in_flux_stash *param_3,pas_allocation_config *param_4)

{
  pas_large_map_entry *ppVar1;
  pas_large_map_entry *ppVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong64 uVar7;
  void *pvVar8;
  pas_large_map_entry *ppVar9;
  uint uVar10;
  uint uVar11;
  pas_large_map_entry *ppVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  pvVar8 = pas_large_utility_free_heap_allocation_config.arg;
  uVar10 = (uint)param_1;
  if ((uVar10 != 0) &&
     (uVar15 = (ulonglong)param_1 & 0xffffffff,
     uVar11 = uVar10 - ((uint)((ulonglong)param_1 >> 1) & 0x55555555),
     uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333),
     ((uVar11 >> 4) + uVar11 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)) {
    ppVar9 = (*pas_large_utility_free_heap_allocation_config.allocate)
                       (uVar15 * 0x18,"pas_large_map_hashtable/table",pas_object_allocation,
                        pas_large_utility_free_heap_allocation_config.arg);
    if (((ulonglong)param_1 & 7) != 0) {
      uVar13 = 0;
      ppVar12 = ppVar9 + uVar15;
      do {
        ppVar12[-1].begin = 0;
        ppVar12[-1].end = 0;
        ppVar12[-1].heap = (pas_large_heap *)0x0;
        uVar13 = uVar13 + 1;
        ppVar12 = ppVar12 + -1;
      } while (((ulonglong)param_1 & 7) != uVar13);
      uVar15 = uVar15 - uVar13;
    }
    if (7 < uVar10) {
      ppVar12 = ppVar9 + (uVar15 - 1);
      do {
        ppVar12->begin = 0;
        ppVar12->end = 0;
        ppVar12->heap = (pas_large_heap *)0x0;
        ppVar12[-1].begin = 0;
        ppVar12[-1].end = 0;
        ppVar12[-1].heap = (pas_large_heap *)0x0;
        ppVar12[-2].begin = 0;
        ppVar12[-2].end = 0;
        ppVar12[-2].heap = (pas_large_heap *)0x0;
        ppVar12[-3].begin = 0;
        ppVar12[-3].end = 0;
        ppVar12[-3].heap = (pas_large_heap *)0x0;
        ppVar12[-4].begin = 0;
        ppVar12[-4].end = 0;
        ppVar12[-4].heap = (pas_large_heap *)0x0;
        ppVar12[-5].begin = 0;
        ppVar12[-5].end = 0;
        ppVar12[-5].heap = (pas_large_heap *)0x0;
        ppVar12[-6].begin = 0;
        ppVar12[-6].end = 0;
        ppVar12[-6].heap = (pas_large_heap *)0x0;
        ppVar12[-7].begin = 0;
        ppVar12[-7].end = 0;
        ppVar12[-7].heap = (pas_large_heap *)0x0;
        ppVar12 = ppVar12 + -8;
        uVar15 = uVar15 - 8;
      } while (uVar15 != 0);
    }
    ppVar12 = pas_large_map_hashtable_instance.table;
    pas_large_map_hashtable_instance.table_mask = uVar10 - 1;
    uVar15 = (ulonglong)pas_large_map_hashtable_instance.table_size;
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      uVar13 = 0;
      do {
        if (pas_large_map_hashtable_instance.table[uVar13].end != 0) {
          ppVar1 = pas_large_map_hashtable_instance.table + uVar13;
          uVar3 = ppVar1->begin;
          uVar14 = (uint)(uVar3 >> 4) & 0xfffffff ^ (uint)uVar3;
          uVar11 = (uint)(uVar3 >> 0x20);
          uVar11 = uVar11 >> 4 ^ uVar11;
          uVar11 = uVar11 * 0x20 + (uVar11 ^ 0xdeadbeef) ^ uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
          uVar11 = uVar11 >> 0xb ^ uVar11;
          do {
            uVar14 = uVar11 & pas_large_map_hashtable_instance.table_mask;
            uVar11 = uVar11 + 1;
          } while (ppVar9[uVar14].end != 0);
          ppVar2 = ppVar9 + uVar14;
          ppVar2->heap = ppVar1->heap;
          uVar5 = *(undefined4 *)((longlong)&ppVar1->begin + 4);
          uVar7 = ppVar1->end;
          uVar6 = *(undefined4 *)((longlong)&ppVar1->end + 4);
          *(int *)&ppVar2->begin = (int)ppVar1->begin;
          *(undefined4 *)((longlong)&ppVar2->begin + 4) = uVar5;
          *(int *)&ppVar2->end = (int)uVar7;
          *(undefined4 *)((longlong)&ppVar2->end + 4) = uVar6;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar15);
    }
    pas_large_map_hashtable_instance.deleted_count = 0;
    pas_large_map_hashtable_instance_in_flux_stash.hashtable_being_resized =
         (pas_large_map_hashtable *)0x0;
    pas_large_map_hashtable_instance_in_flux_stash.table_before_resize = (pas_large_map_entry *)0x0;
    pas_large_map_hashtable_instance_in_flux_stash.table_size_before_resize = 0;
    pas_large_map_hashtable_instance.table = ppVar9;
    pas_large_map_hashtable_instance.table_size = uVar10;
    (*pas_large_utility_free_heap_allocation_config.deallocate)
              (ppVar12,uVar15 * 0x18,pas_object_allocation,pvVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

