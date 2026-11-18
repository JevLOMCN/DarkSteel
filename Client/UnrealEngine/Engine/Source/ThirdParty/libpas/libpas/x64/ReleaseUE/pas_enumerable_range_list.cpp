// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_enumerable_range_list_append @ 140d919d0

void __cdecl pas_enumerable_range_list_append(pas_enumerable_range_list *param_1,pas_range *param_2)

{
  code *pcVar1;
  ulong64 uVar2;
  BOOLEAN BVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2->begin == param_2->end) {
    return;
  }
  uVar6 = (ulonglong)(param_1->head).payload;
  puVar7 = (undefined4 *)(uVar6 * 8 + pas_compact_heap_reservation_base);
  if (puVar7 == (undefined4 *)0x0 || uVar6 == 0) {
    uVar8 = 0;
    puVar5 = pas_immortal_heap_allocate
                       (0xa8,"pas_enumerable_range_list_chunk",pas_object_allocation);
  }
  else {
    uVar4 = puVar7[1];
    if (uVar4 < 10) goto LAB_140d91abc;
    if (uVar4 != 10) {
                    /* WARNING: Subroutine does not return */
      pas_assertion_failed_no_inline
                ("src\\libpas\\pas_enumerable_range_list.c",0x32,
                 "void __cdecl pas_enumerable_range_list_append(pas_enumerable_range_list *, pas_range)"
                 ,"!chunk || chunk->num_entries == PAS_ENUMERABLE_RANGE_LIST_CHUNK_SIZE");
    }
    puVar5 = pas_immortal_heap_allocate
                       (0xa8,"pas_enumerable_range_list_chunk",pas_object_allocation);
    uVar6 = (longlong)puVar7 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar6 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar8 = (undefined4)(uVar6 >> 3);
  }
  *puVar5 = uVar8;
  puVar5[1] = 0;
  uVar6 = (longlong)puVar5 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar6 < 8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  (param_1->head).payload = (uint)(uVar6 >> 3);
  uVar4 = puVar5[1];
  puVar7 = puVar5;
  if (9 < uVar4) {
                    /* WARNING: Subroutine does not return */
    pas_assertion_failed_no_inline
              ("src\\libpas\\pas_enumerable_range_list.c",0x3e,
               "void __cdecl pas_enumerable_range_list_append(pas_enumerable_range_list *, pas_range)"
               ,"chunk->num_entries < PAS_ENUMERABLE_RANGE_LIST_CHUNK_SIZE");
  }
LAB_140d91abc:
  uVar2 = param_2->end;
  *(ulong64 *)(puVar7 + (ulonglong)uVar4 * 4 + 2) = param_2->begin;
  *(ulong64 *)((longlong)(puVar7 + (ulonglong)uVar4 * 4 + 2) + 8) = uVar2;
  puVar7[1] = puVar7[1] + 1;
  return;
}

// pas_enumerable_range_list_iterate @ 140d91b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_enumerable_range_list_iterate
          (pas_enumerable_range_list *param_1,_func___cdecl_bool_pas_range_void_ptr *param_2,
          void *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined1 auStack_78 [32];
  pas_range local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar7 = (ulonglong)(param_1->head).payload;
  puVar8 = (uint *)(uVar7 * 8 + pas_compact_heap_reservation_base);
  bVar6 = true;
  if (puVar8 != (uint *)0x0 && uVar7 != 0) {
    do {
      if (10 < (ulonglong)puVar8[1]) {
                    /* WARNING: Subroutine does not return */
        pas_assertion_failed_no_inline
                  ("src\\libpas\\pas_enumerable_range_list.c",0x51,
                   "_Bool __cdecl pas_enumerable_range_list_iterate(pas_enumerable_range_list *, pas_enumerable_range_list_iterate_callback, void *)"
                   ,"chunk->num_entries <= PAS_ENUMERABLE_RANGE_LIST_CHUNK_SIZE");
      }
      lVar5 = (ulonglong)puVar8[1] << 4;
      while (lVar5 + -0x10 != -0x10) {
        puVar1 = (undefined4 *)((longlong)puVar8 + lVar5 + -8);
        local_58.begin._0_4_ = *puVar1;
        local_58.begin._4_4_ = puVar1[1];
        local_58.end._0_4_ = puVar1[2];
        local_58.end._4_4_ = puVar1[3];
        local_48 = (undefined4)local_58.begin;
        uStack_44 = local_58.begin._4_4_;
        uStack_40 = (undefined4)local_58.end;
        uStack_3c = local_58.end._4_4_;
        bVar3 = (*param_2)(&local_58,param_3);
        lVar5 = lVar5 + -0x10;
        if (!bVar3) {
          bVar6 = false;
          goto LAB_140d91bd9;
        }
      }
    } while (((ulonglong)*puVar8 != 0) &&
            (puVar8 = (uint *)((ulonglong)*puVar8 * 8 + pas_compact_heap_reservation_base),
            puVar8 != (uint *)0x0));
  }
LAB_140d91bd9:
  if ((local_38 ^ (ulonglong)auStack_78) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return bVar6;
}

// pas_enumerable_range_list_iterate_remote @ 140d91c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_enumerable_range_list_iterate_remote
          (pas_enumerable_range_list *param_1,pas_enumerator *param_2,
          _func___cdecl_bool_pas_enumerator_ptr_pas_range_void_ptr *param_3,void *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  pas_range local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar5 = pas_enumerator_read(param_2,param_1,4);
  if (puVar5 == (uint *)0x0) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    if (((ulonglong)*puVar5 != 0) &&
       (puVar5 = (uint *)((ulonglong)*puVar5 * 8 + (longlong)param_2->compact_heap_copy_base),
       puVar5 != (uint *)0x0)) {
      do {
        if (10 < (ulonglong)puVar5[1]) {
                    /* WARNING: Subroutine does not return */
          pas_assertion_failed_no_inline
                    ("src\\libpas\\pas_enumerable_range_list.c",0x74,
                     "_Bool __cdecl pas_enumerable_range_list_iterate_remote(pas_enumerable_range_list *, pas_enumerator *, pas_enumerable_range_list_iterate_remote_callback, void *)"
                     ,"chunk->num_entries <= PAS_ENUMERABLE_RANGE_LIST_CHUNK_SIZE");
        }
        lVar6 = (ulonglong)puVar5[1] << 4;
        while (lVar6 + -0x10 != -0x10) {
          puVar1 = (undefined4 *)((longlong)puVar5 + lVar6 + -8);
          local_68.begin._0_4_ = *puVar1;
          local_68.begin._4_4_ = puVar1[1];
          local_68.end._0_4_ = puVar1[2];
          local_68.end._4_4_ = puVar1[3];
          local_58 = (undefined4)local_68.begin;
          uStack_54 = local_68.begin._4_4_;
          uStack_50 = (undefined4)local_68.end;
          uStack_4c = local_68.end._4_4_;
          bVar3 = (*param_3)(param_2,&local_68,param_4);
          lVar6 = lVar6 + -0x10;
          if (!bVar3) {
            if ((local_40 ^ (ulonglong)auStack_88) == __security_cookie.value) {
              return false;
            }
            goto LAB_140d91d1d;
          }
        }
      } while (((ulonglong)*puVar5 != 0) &&
              (puVar5 = (uint *)((ulonglong)*puVar5 * 8 + (longlong)param_2->compact_heap_copy_base)
              , puVar5 != (uint *)0x0));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return bVar7;
  }
LAB_140d91d1d:
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

