// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 22

// pas_all_heaps_add_heap @ 140d8c7e0

void __cdecl pas_all_heaps_add_heap(pas_heap *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_all_heaps_first_heap == (pas_heap *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (longlong)pas_all_heaps_first_heap - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (undefined4)(uVar4 >> 3);
  }
  (param_1->next_heap).payload[0] = (uchar)uVar3;
  (param_1->next_heap).payload[1] = (uchar)((uint)uVar3 >> 8);
  (param_1->next_heap).payload[2] = (uchar)((uint)uVar3 >> 0x10);
  pas_all_heaps_first_heap = param_1;
  pas_all_heaps_count = pas_all_heaps_count + 1;
  return;
}

// pas_all_heaps_for_each_static_heap @ 140d8c860

bool __cdecl
pas_all_heaps_for_each_static_heap(_func___cdecl_bool_pas_heap_ptr_void_ptr *param_1,void *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d8c86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*param_1)(&bmalloc_common_primitive_heap,param_2);
  return bVar1;
}

// pas_all_heaps_for_each_dynamic_heap @ 140d8c880

bool __cdecl
pas_all_heaps_for_each_dynamic_heap(_func___cdecl_bool_pas_heap_ptr_void_ptr *param_1,void *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  BOOLEAN BVar3;
  bool bVar4;
  pas_heap *ppVar5;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ppVar5 = pas_all_heaps_first_heap;
  if (pas_all_heaps_first_heap == (pas_heap *)0x0) {
    bVar4 = true;
  }
  else {
    do {
      bVar4 = (*param_1)(ppVar5,param_2);
      if (!bVar4) {
        return bVar4;
      }
      uVar2 = *(uint3 *)(ppVar5->next_heap).payload;
      if (uVar2 == 0) {
        return bVar4;
      }
      ppVar5 = (pas_heap *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
    } while (ppVar5 != (pas_heap *)0x0);
  }
  return bVar4;
}

// pas_all_heaps_for_each_heap @ 140d8c8f0

bool __cdecl
pas_all_heaps_for_each_heap(_func___cdecl_bool_pas_heap_ptr_void_ptr *param_1,void *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  BOOLEAN BVar3;
  bool bVar4;
  pas_heap *ppVar5;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  bVar4 = (*param_1)(&bmalloc_common_primitive_heap,param_2);
  if (bVar4) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar3 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    ppVar5 = pas_all_heaps_first_heap;
    if (pas_all_heaps_first_heap == (pas_heap *)0x0) {
      bVar4 = true;
    }
    else {
      do {
        bVar4 = (*param_1)(ppVar5,param_2);
        if (!bVar4) {
          return bVar4;
        }
        uVar2 = *(uint3 *)(ppVar5->next_heap).payload;
        if (uVar2 == 0) {
          return bVar4;
        }
        ppVar5 = (pas_heap *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
      } while (ppVar5 != (pas_heap *)0x0);
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// pas_all_heaps_for_each_static_segregated_heap_not_part_of_a_heap @ 140d8c990

bool __cdecl
pas_all_heaps_for_each_static_segregated_heap_not_part_of_a_heap
          (_func___cdecl_bool_pas_segregated_heap_ptr_pas_heap_config_ptr_void_ptr *param_1,
          void *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d8c9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*param_1)(&pas_utility_segregated_heap,&pas_utility_heap_config,param_2);
  return bVar1;
}

// pas_all_heaps_for_each_static_segregated_heap @ 140d8c9b0

bool __cdecl
pas_all_heaps_for_each_static_segregated_heap
          (_func___cdecl_bool_pas_segregated_heap_ptr_pas_heap_config_ptr_void_ptr *param_1,
          void *param_2)

{
  bool bVar1;
  
  bVar1 = (*param_1)(&pas_utility_segregated_heap,&pas_utility_heap_config,param_2);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000140d8ca02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*param_1)(&bmalloc_common_primitive_heap.segregated_heap,
                       pas_heap_config_kind_for_config_table
                       [(longlong)((ulonglong)(uint)bmalloc_common_primitive_heap._76_4_ << 0x3a) >>
                        0x3a],param_2);
    return bVar1;
  }
  return false;
}

// pas_all_heaps_for_each_segregated_heap @ 140d8ca20

bool __cdecl
pas_all_heaps_for_each_segregated_heap
          (_func___cdecl_bool_pas_segregated_heap_ptr_pas_heap_config_ptr_void_ptr *param_1,
          void *param_2)

{
  code *pcVar1;
  uint3 uVar2;
  BOOLEAN BVar3;
  bool bVar4;
  pas_heap *ppVar5;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  bVar4 = (*param_1)(&pas_utility_segregated_heap,&pas_utility_heap_config,param_2);
  if (bVar4) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar3 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    bVar4 = (*param_1)(&bmalloc_common_primitive_heap.segregated_heap,
                       pas_heap_config_kind_for_config_table
                       [(longlong)((ulonglong)(uint)bmalloc_common_primitive_heap._76_4_ << 0x3a) >>
                        0x3a],param_2);
    if (bVar4) {
      BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      if (BVar3 != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      ppVar5 = pas_all_heaps_first_heap;
      if (pas_all_heaps_first_heap != (pas_heap *)0x0) {
        while( true ) {
          bVar4 = (*param_1)(&ppVar5->segregated_heap,
                             pas_heap_config_kind_for_config_table
                             [(longlong)((ulonglong)*(uint *)&ppVar5->field_0x4c << 0x3a) >> 0x3a],
                             param_2);
          if (!bVar4) {
            return bVar4;
          }
          uVar2 = *(uint3 *)(ppVar5->next_heap).payload;
          if (uVar2 == 0) break;
          ppVar5 = (pas_heap *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
          if (ppVar5 == (pas_heap *)0x0) {
            return bVar4;
          }
        }
        return bVar4;
      }
      return true;
    }
  }
  return false;
}

// pas_all_heaps_get_num_free_bytes @ 140d8cb20

ulong64 __cdecl pas_all_heaps_get_num_free_bytes(pas_lock_hold_mode param_1)

{
  code *pcVar1;
  uint3 uVar2;
  pas_heap *ppVar3;
  BOOLEAN BVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  
  if (param_1 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar5 = pas_heap_get_num_free_bytes(&bmalloc_common_primitive_heap);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ppVar3 = pas_all_heaps_first_heap;
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  while (ppVar3 != (pas_heap *)0x0) {
    uVar6 = pas_heap_get_num_free_bytes(ppVar3);
    uVar5 = uVar6 + uVar5;
    uVar2 = *(uint3 *)(ppVar3->next_heap).payload;
    if (uVar2 == 0) break;
    ppVar3 = (pas_heap *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
  }
  uVar6 = pas_utility_heap_get_num_free_bytes();
  if (param_1 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return uVar6 + uVar5;
}

// pas_all_heaps_reset_heap_ref @ 140d8cbe0

void __cdecl pas_all_heaps_reset_heap_ref(pas_lock_hold_mode param_1)

{
  code *pcVar1;
  uint3 uVar2;
  pas_heap *ppVar3;
  BOOLEAN BVar4;
  
  if (param_1 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_heap_reset_heap_ref(&bmalloc_common_primitive_heap);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ppVar3 = pas_all_heaps_first_heap;
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  while (ppVar3 != (pas_heap *)0x0) {
    pas_heap_reset_heap_ref(ppVar3);
    uVar2 = *(uint3 *)(ppVar3->next_heap).payload;
    if (uVar2 == 0) break;
    ppVar3 = (pas_heap *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
  }
  if (param_1 == pas_lock_is_not_held) {
                    /* WARNING: Could not recover jumptable at 0x000140d8cc7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return;
  }
  return;
}

// pas_all_heaps_for_each_segregated_directory @ 140d8cc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_all_heaps_for_each_segregated_directory
          (_func___cdecl_bool_pas_segregated_directory_ptr_void_ptr *param_1,void *param_2)

{
  pas_heap_config *ppVar1;
  code *pcVar2;
  uint3 uVar3;
  BOOLEAN BVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  pas_heap *ppVar8;
  undefined1 auStack_88 [32];
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  _func___cdecl_bool_pas_segregated_directory_ptr_void_ptr *local_50;
  void *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = param_1;
  local_48 = param_2;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar5 = pas_segregated_heap_for_each_size_directory
                    (&pas_utility_segregated_heap,
                     for_each_segregated_directory_size_directory_callback,&local_68);
  if ((bVar5) &&
     (bVar5 = (*pas_utility_heap_config.for_each_shared_page_directory)
                        (&pas_utility_segregated_heap,
                         for_each_segregated_directory_shared_page_directory_callback,&local_68),
     bVar5)) {
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar1 = pas_heap_config_kind_for_config_table
             [(longlong)((ulonglong)(uint)bmalloc_common_primitive_heap._76_4_ << 0x3a) >> 0x3a];
    bVar5 = pas_segregated_heap_for_each_size_directory
                      (&bmalloc_common_primitive_heap.segregated_heap,
                       for_each_segregated_directory_size_directory_callback,&local_68);
    if ((bVar5) &&
       (bVar5 = (*ppVar1->for_each_shared_page_directory)
                          (&bmalloc_common_primitive_heap.segregated_heap,
                           for_each_segregated_directory_shared_page_directory_callback,&local_68),
       bVar5)) {
      BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      if (BVar4 != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar5 = true;
      if (pas_all_heaps_first_heap != (pas_heap *)0x0) {
        ppVar8 = pas_all_heaps_first_heap;
        do {
          ppVar1 = pas_heap_config_kind_for_config_table
                   [(longlong)((ulonglong)*(uint *)&ppVar8->field_0x4c << 0x3a) >> 0x3a];
          bVar6 = pas_segregated_heap_for_each_size_directory
                            (&ppVar8->segregated_heap,
                             for_each_segregated_directory_size_directory_callback,&local_68);
          if ((!bVar6) ||
             (bVar6 = (*ppVar1->for_each_shared_page_directory)
                                (&ppVar8->segregated_heap,
                                 for_each_segregated_directory_shared_page_directory_callback,
                                 &local_68), !bVar6)) goto LAB_140d8ce34;
          uVar3 = *(uint3 *)(ppVar8->next_heap).payload;
        } while ((uVar3 != 0) &&
                (ppVar8 = (pas_heap *)((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base),
                ppVar8 != (pas_heap *)0x0));
      }
      goto LAB_140d8ce36;
    }
  }
LAB_140d8ce34:
  bVar5 = false;
LAB_140d8ce36:
  (*pas_large_utility_free_heap_allocation_config.deallocate)
            (local_68,(uStack_60 & 0xffffffff) << 3,pas_object_allocation,
             pas_large_utility_free_heap_allocation_config.arg);
  if ((local_40 ^ (ulonglong)auStack_88) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  return bVar5;
}

// pas_all_heaps_verify_in_steady_state @ 140d8ce90

void __cdecl pas_all_heaps_verify_in_steady_state(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    pas_all_heaps_for_each_segregated_directory
              (verify_in_steady_state_segregated_directory_callback,(void *)0x0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verify_in_steady_state_segregated_directory_callback @ 140d8cec0

bool __cdecl
verify_in_steady_state_segregated_directory_callback
          (pas_segregated_directory *param_1,void *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  pas_segregated_page_config *ppVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  pas_tri_state pVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  pas_segregated_view_opaque *ppVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  
  uVar18 = (ulonglong)(param_1->first_view).payload;
  uVar12 = 0;
  if (7 < uVar18) {
    uVar12 = pas_compact_heap_reservation_base;
  }
  if (uVar12 + uVar18 != 0) {
    ppVar7 = (pas_segregated_page_config *)
             pas_segregated_page_config_kind_for_config_table[(char)param_1->page_config_kind];
    uVar17 = (param_1->data).payload;
    lVar13 = (ulonglong)uVar17 * 8 + pas_compact_heap_reservation_base;
    uVar18 = 1;
    if ((lVar13 == 0 || uVar17 == 0) ||
       (uVar17 = *(int *)(lVar13 + 0x30) + 1, uVar18 = (ulonglong)uVar17, uVar17 != 0)) {
      do {
        uVar19 = uVar18 - 1;
        uVar14 = (ulonglong)(param_1->first_view).payload;
        uVar12 = pas_compact_heap_reservation_base;
        if (uVar14 < 8) {
          uVar12 = 0;
        }
        ppVar16 = (pas_segregated_view_opaque *)(uVar12 + uVar14);
        if (ppVar16 == (pas_segregated_view_opaque *)0x0) {
LAB_140d8d324:
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar17 = (param_1->data).payload;
        lVar13 = (ulonglong)uVar17 * 8 + pas_compact_heap_reservation_base;
        uVar14 = 1;
        if (lVar13 != 0 && uVar17 != 0) {
          uVar14 = (ulonglong)(*(int *)(lVar13 + 0x30) + 1);
        }
        if (uVar14 <= uVar19) goto LAB_140d8d324;
        if (uVar19 != 0) {
          lVar15 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar13 + 0x2c) * 8;
          if ((ulonglong)*(uint *)(lVar13 + 0x2c) == 0) {
            lVar15 = 0;
          }
          uVar14 = (ulonglong)*(uint *)(lVar15 + -4 + uVar19 * 4);
          uVar12 = 0;
          if (7 < uVar14) {
            uVar12 = pas_compact_heap_reservation_base;
          }
          ppVar16 = (pas_segregated_view_opaque *)(uVar12 + uVar14);
        }
        if (ppVar16 == (pas_segregated_view_opaque *)0x0) {
          dump_directory_nicely(param_1);
          pas_log(", index %zu: got null view %p.\n");
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (ppVar16 < (pas_segregated_view_opaque *)&DAT_00000008) {
          uVar3 = param_1->page_config_kind;
          uVar6 = param_1->directory_kind;
          if ((uVar6 != '\0') && (uVar6 != '\x01')) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          pas_segregated_page_config_kind_get_string((int)(char)uVar3);
          pas_log("Directory %p (%s, %s");
          if (param_1->directory_kind == 0) {
            pas_log(", %u");
          }
          pas_log(")");
          pas_log(", index %zu: got null view %p.\n");
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar12 = pas_segregated_view_get_index(ppVar16);
        uVar17 = (uint)ppVar16;
        if (uVar19 != uVar12) {
          uVar1 = param_1->page_config_kind;
          uVar4 = param_1->directory_kind;
          if ((uVar4 != '\0') && (uVar4 != '\x01')) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          pas_segregated_page_config_kind_get_string((int)(char)uVar1);
          pas_log("Directory %p (%s, %s");
          if (param_1->directory_kind == 0) {
            pas_log(", %u");
          }
          pas_log(")");
          pas_segregated_view_get_page_boundary(ppVar16);
          if ((~uVar17 & 6) == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          pas_log(", index %zu, view %p (%s, page boundary %p)");
          pas_segregated_view_get_index(ppVar16);
          pas_log(": expected index %zu but got %zu.\n");
          uVar12 = pas_segregated_view_get_index(ppVar16);
          if (uVar19 != uVar12) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
        }
        pVar11 = pas_segregated_view_should_be_eligible(ppVar16,ppVar7);
        if (uVar19 == 0) {
          uVar20 = param_1->bits & 1;
          if (pVar11 == pas_tri_state_no) goto LAB_140d8d14d;
LAB_140d8d117:
          if (pVar11 == pas_tri_state_maybe) goto LAB_140d8d240;
          if (pVar11 != pas_tri_state_yes) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (uVar20 != 0) goto LAB_140d8d240;
          uVar20 = 0;
LAB_140d8d156:
          uVar2 = param_1->page_config_kind;
          uVar5 = param_1->directory_kind;
          if ((uVar5 != '\0') && (uVar5 != '\x01')) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          pas_segregated_page_config_kind_get_string((int)(char)uVar2);
          pas_log("Directory %p (%s, %s");
          if (param_1->directory_kind == 0) {
            pas_log(", %u");
          }
          pas_log(")");
          pas_segregated_view_get_page_boundary(ppVar16);
          if ((~uVar17 & 6) == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          pas_log(", index %zu, view %p (%s, page boundary %p)");
          if (pVar11 == pas_tri_state_no) {
            pas_log(": expected eligibility to be %s, but got %s.\n");
            if (uVar20 != 0) {
LAB_140d8d322:
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            goto LAB_140d8d240;
          }
          if (pVar11 == pas_tri_state_yes) {
            pas_log(": expected eligibility to be %s, but got %s.\n");
            if (uVar20 == 0) goto LAB_140d8d322;
            goto LAB_140d8d240;
          }
          pas_log(": expected eligibility to be %s, but got %s.\n");
          if (uVar19 == 0) goto LAB_140d8d2c0;
LAB_140d8d245:
          uVar14 = (ulonglong)
                   *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                            (ulonglong)(param_1->data).payload * 8);
          lVar13 = pas_compact_heap_reservation_base + uVar14 * 8;
          if (uVar14 == 0) {
            lVar13 = 0;
          }
          uVar14 = (ulonglong)*(uint *)(lVar13 + (uVar18 - 2 >> 7) * 4);
          lVar13 = pas_compact_heap_reservation_base + uVar14 * 8;
          if (uVar14 == 0) {
            lVar13 = 0;
          }
          uVar20 = 1 << ((char)uVar19 - 1U & 0x1f) &
                   *(uint *)(lVar13 + 4 + (ulonglong)((uint)(uVar18 - 2 >> 2) & 0x18));
        }
        else {
          uVar14 = (ulonglong)
                   *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                            (ulonglong)(param_1->data).payload * 8);
          lVar13 = pas_compact_heap_reservation_base + uVar14 * 8;
          if (uVar14 == 0) {
            lVar13 = 0;
          }
          uVar14 = (ulonglong)*(uint *)(lVar13 + (uVar18 - 2 >> 7) * 4);
          lVar13 = pas_compact_heap_reservation_base + uVar14 * 8;
          if (uVar14 == 0) {
            lVar13 = 0;
          }
          uVar20 = 1 << ((char)uVar19 - 1U & 0x1f) &
                   *(uint *)(lVar13 + (ulonglong)((uint)(uVar18 - 2 >> 2) & 0x18));
          if (pVar11 != pas_tri_state_no) goto LAB_140d8d117;
LAB_140d8d14d:
          if (uVar20 != 0) goto LAB_140d8d156;
LAB_140d8d240:
          if (uVar19 != 0) goto LAB_140d8d245;
LAB_140d8d2c0:
          uVar20 = param_1->bits & 2;
        }
        if (uVar20 != 0) {
          dump_directory_nicely(param_1);
          dump_view_nicely(uVar19,ppVar16);
          pas_log(": didn\'t expect it to be empty.\n");
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        bVar9 = pas_segregated_view_is_payload_empty(ppVar16);
        bVar10 = pas_segregated_view_is_owned(ppVar16);
        if ((uVar17 & 7) == 4) {
          if (!bVar9 && !bVar10) {
            dump_directory_nicely(param_1);
            dump_view_nicely(uVar19,ppVar16);
            pas_log(": didn\'t expect a non-empty payload in a decommitted partial view.\n");
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
        }
        else if (bVar9 == bVar10) {
          dump_directory_nicely(param_1);
          dump_view_nicely(uVar19,ppVar16);
          pas_log(": bad combination of is_empty_payload (%s) and is_owned (%s).\n");
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar18 = uVar19;
      } while (uVar19 != 0);
    }
  }
  return true;
}

// pas_all_heaps_compute_total_non_utility_segregated_summary @ 140d8d440

pas_heap_summary * __cdecl
pas_all_heaps_compute_total_non_utility_segregated_summary(pas_heap_summary *__return_storage_ptr__)

{
  __return_storage_ptr__->meta_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta_eligible_for_decommit = 0;
  __return_storage_ptr__->free_eligible_for_decommit = 0;
  __return_storage_ptr__->free_decommitted = 0;
  __return_storage_ptr__->decommitted = 0;
  __return_storage_ptr__->free_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta = 0;
  __return_storage_ptr__->committed = 0;
  __return_storage_ptr__->free = 0;
  __return_storage_ptr__->allocated = 0;
  __return_storage_ptr__->cached = 0;
  pas_all_heaps_for_each_segregated_directory
            (compute_total_non_utility_segregated_summary_directory_callback,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// compute_total_non_utility_segregated_summary_directory_callback @ 140d8d490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
compute_total_non_utility_segregated_summary_directory_callback
          (pas_segregated_directory *param_1,void *param_2)

{
  int iVar1;
  pas_segregated_page_config *ppVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  longlong lVar6;
  pas_segregated_view_opaque *ppVar7;
  longlong lVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  pas_heap_summary local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar1._0_1_ = param_1->page_config_kind;
  iVar1._1_1_ = param_1->sharing_mode;
  iVar1._2_1_ = param_1->directory_kind;
  iVar1._3_1_ = param_1->field_0xf;
  if (iVar1 << 0x18 != 0x1000000) {
    uVar13 = (ulonglong)(param_1->first_view).payload;
    uVar5 = 0;
    if (7 < uVar13) {
      uVar5 = pas_compact_heap_reservation_base;
    }
    if (uVar5 + uVar13 != 0) {
      ppVar2 = (pas_segregated_page_config *)
               pas_segregated_page_config_kind_for_config_table[(iVar1 << 0x18) >> 0x18];
      uVar12 = (param_1->data).payload;
      lVar6 = (ulonglong)uVar12 * 8 + pas_compact_heap_reservation_base;
      uVar13 = 1;
      if ((lVar6 == 0 || uVar12 == 0) ||
         (uVar12 = *(int *)(lVar6 + 0x30) + 1, uVar13 = (ulonglong)uVar12, uVar12 != 0)) {
        uVar13 = uVar13 - 1;
        uVar5 = pas_compact_heap_reservation_base;
        do {
          uVar10 = (ulonglong)(param_1->first_view).payload;
          uVar9 = uVar5;
          if (uVar10 < 8) {
            uVar9 = 0;
          }
          ppVar7 = (pas_segregated_view_opaque *)(uVar9 + uVar10);
          if (ppVar7 == (pas_segregated_view_opaque *)0x0) {
LAB_140d8d65e:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar11 = (ulonglong)(param_1->data).payload;
          lVar6 = uVar5 + uVar11 * 8;
          uVar10 = 1;
          if ((uVar11 != 0) && (lVar6 != 0)) {
            uVar10 = (ulonglong)(*(int *)(lVar6 + 0x30) + 1);
          }
          if (uVar10 <= uVar13) goto LAB_140d8d65e;
          bVar14 = uVar13 == 0;
          uVar13 = uVar13 - 1;
          if (bVar14) {
            uVar12 = (uint)ppVar7;
          }
          else {
            lVar8 = uVar5 + (ulonglong)*(uint *)(lVar6 + 0x2c) * 8;
            if ((ulonglong)*(uint *)(lVar6 + 0x2c) == 0) {
              lVar8 = 0;
            }
            uVar10 = (ulonglong)*(uint *)(lVar8 + uVar13 * 4);
            uVar9 = 0;
            if (7 < uVar10) {
              uVar9 = uVar5;
            }
            ppVar7 = (pas_segregated_view_opaque *)(uVar9 + uVar10);
            uVar12 = (uint)ppVar7;
          }
          if ((uVar12 & 7) != 4) {
            pas_segregated_view_compute_summary(&local_98,ppVar7,ppVar2);
            *(ulong64 *)param_2 = *(longlong *)param_2 + local_98.free;
            *(ulong64 *)((longlong)param_2 + 8) =
                 *(longlong *)((longlong)param_2 + 8) + local_98.allocated;
            *(ulong64 *)((longlong)param_2 + 0x10) =
                 *(longlong *)((longlong)param_2 + 0x10) + local_98.meta;
            *(ulong64 *)((longlong)param_2 + 0x18) =
                 *(longlong *)((longlong)param_2 + 0x18) + local_98.committed;
            *(ulong64 *)((longlong)param_2 + 0x20) =
                 *(longlong *)((longlong)param_2 + 0x20) + local_98.decommitted;
            *(ulong64 *)((longlong)param_2 + 0x28) =
                 *(longlong *)((longlong)param_2 + 0x28) + local_98.free_ineligible_for_decommit;
            *(ulong64 *)((longlong)param_2 + 0x30) =
                 *(longlong *)((longlong)param_2 + 0x30) + local_98.free_eligible_for_decommit;
            *(ulong64 *)((longlong)param_2 + 0x38) =
                 *(longlong *)((longlong)param_2 + 0x38) + local_98.free_decommitted;
            *(ulong64 *)((longlong)param_2 + 0x40) =
                 *(longlong *)((longlong)param_2 + 0x40) + local_98.meta_ineligible_for_decommit;
            *(ulong64 *)((longlong)param_2 + 0x48) =
                 *(longlong *)((longlong)param_2 + 0x48) + local_98.meta_eligible_for_decommit;
            *(longlong *)((longlong)param_2 + 0x50) =
                 *(longlong *)((longlong)param_2 + 0x50) + local_98.cached;
            uVar5 = pas_compact_heap_reservation_base;
          }
        } while (uVar13 != 0xffffffffffffffff);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == __security_cookie.value) {
    return true;
  }
  pcVar3 = (code *)swi(3);
  uVar4 = (*pcVar3)();
  return (bool)uVar4;
}

// pas_all_heaps_compute_total_non_utility_bitfit_summary @ 140d8d670

pas_heap_summary * __cdecl
pas_all_heaps_compute_total_non_utility_bitfit_summary(pas_heap_summary *__return_storage_ptr__)

{
  code *pcVar1;
  uint3 uVar2;
  pas_heap *ppVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  __return_storage_ptr__->meta_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta_eligible_for_decommit = 0;
  __return_storage_ptr__->free_eligible_for_decommit = 0;
  __return_storage_ptr__->free_decommitted = 0;
  __return_storage_ptr__->decommitted = 0;
  __return_storage_ptr__->free_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta = 0;
  __return_storage_ptr__->committed = 0;
  __return_storage_ptr__->free = 0;
  __return_storage_ptr__->allocated = 0;
  __return_storage_ptr__->cached = 0;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  bVar5 = compute_total_non_utility_bitfit_summary_heap_callback
                    (&bmalloc_common_primitive_heap,__return_storage_ptr__);
  if (bVar5) {
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    ppVar3 = pas_all_heaps_first_heap;
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    while (((ppVar3 != (pas_heap *)0x0 &&
            (bVar5 = compute_total_non_utility_bitfit_summary_heap_callback
                               (ppVar3,__return_storage_ptr__), bVar5)) &&
           (uVar2 = *(uint3 *)(ppVar3->next_heap).payload, uVar2 != 0))) {
      ppVar3 = (pas_heap *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
    }
  }
  return __return_storage_ptr__;
}

// compute_total_non_utility_bitfit_summary_heap_callback @ 140d8d720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl compute_total_non_utility_bitfit_summary_heap_callback(pas_heap *param_1,void *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  pas_bitfit_heap *ppVar4;
  undefined1 auStack_88 [32];
  pas_heap_summary local_68;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar3 = (ulonglong)(param_1->segregated_heap).bitfit_heap.payload;
  ppVar4 = (pas_bitfit_heap *)(uVar3 * 8 + pas_compact_heap_reservation_base);
  if (ppVar4 != (pas_bitfit_heap *)0x0 && uVar3 != 0) {
    pas_bitfit_heap_compute_summary(&local_68,ppVar4);
    *(ulong64 *)param_2 = *(longlong *)param_2 + local_68.free;
    *(ulong64 *)((longlong)param_2 + 8) = *(longlong *)((longlong)param_2 + 8) + local_68.allocated;
    *(ulong64 *)((longlong)param_2 + 0x10) = *(longlong *)((longlong)param_2 + 0x10) + local_68.meta
    ;
    *(ulong64 *)((longlong)param_2 + 0x18) =
         *(longlong *)((longlong)param_2 + 0x18) + local_68.committed;
    *(ulong64 *)((longlong)param_2 + 0x20) =
         *(longlong *)((longlong)param_2 + 0x20) + local_68.decommitted;
    *(ulong64 *)((longlong)param_2 + 0x28) =
         *(longlong *)((longlong)param_2 + 0x28) + local_68.free_ineligible_for_decommit;
    *(ulong64 *)((longlong)param_2 + 0x30) =
         *(longlong *)((longlong)param_2 + 0x30) + local_68.free_eligible_for_decommit;
    *(ulong64 *)((longlong)param_2 + 0x38) =
         *(longlong *)((longlong)param_2 + 0x38) + local_68.free_decommitted;
    *(ulong64 *)((longlong)param_2 + 0x40) =
         *(longlong *)((longlong)param_2 + 0x40) + local_68.meta_ineligible_for_decommit;
    *(ulong64 *)((longlong)param_2 + 0x48) =
         *(longlong *)((longlong)param_2 + 0x48) + local_68.meta_eligible_for_decommit;
    *(longlong *)((longlong)param_2 + 0x50) =
         *(longlong *)((longlong)param_2 + 0x50) + local_68.cached;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == __security_cookie.value) {
    return true;
  }
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

// pas_all_heaps_compute_total_non_utility_large_summary @ 140d8d7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_all_heaps_compute_total_non_utility_large_summary(pas_heap_summary *__return_storage_ptr__)

{
  code *pcVar1;
  uint3 uVar2;
  BOOLEAN BVar3;
  pas_heap_summary *ppVar4;
  pas_heap *ppVar5;
  undefined1 auStack_98 [32];
  pas_heap_summary local_78;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  __return_storage_ptr__->meta_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta_eligible_for_decommit = 0;
  __return_storage_ptr__->free_eligible_for_decommit = 0;
  __return_storage_ptr__->free_decommitted = 0;
  __return_storage_ptr__->decommitted = 0;
  __return_storage_ptr__->free_ineligible_for_decommit = 0;
  __return_storage_ptr__->meta = 0;
  __return_storage_ptr__->committed = 0;
  __return_storage_ptr__->free = 0;
  __return_storage_ptr__->allocated = 0;
  __return_storage_ptr__->cached = 0;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_large_heap_compute_summary(&local_78,&bmalloc_common_primitive_heap.large_heap);
  __return_storage_ptr__->free = __return_storage_ptr__->free + local_78.free;
  __return_storage_ptr__->allocated = __return_storage_ptr__->allocated + local_78.allocated;
  __return_storage_ptr__->meta = __return_storage_ptr__->meta + local_78.meta;
  __return_storage_ptr__->committed = __return_storage_ptr__->committed + local_78.committed;
  __return_storage_ptr__->decommitted = __return_storage_ptr__->decommitted + local_78.decommitted;
  __return_storage_ptr__->free_ineligible_for_decommit =
       __return_storage_ptr__->free_ineligible_for_decommit + local_78.free_ineligible_for_decommit;
  __return_storage_ptr__->free_eligible_for_decommit =
       __return_storage_ptr__->free_eligible_for_decommit + local_78.free_eligible_for_decommit;
  __return_storage_ptr__->free_decommitted =
       __return_storage_ptr__->free_decommitted + local_78.free_decommitted;
  __return_storage_ptr__->meta_ineligible_for_decommit =
       __return_storage_ptr__->meta_ineligible_for_decommit + local_78.meta_ineligible_for_decommit;
  __return_storage_ptr__->meta_eligible_for_decommit =
       __return_storage_ptr__->meta_eligible_for_decommit + local_78.meta_eligible_for_decommit;
  __return_storage_ptr__->cached = __return_storage_ptr__->cached + local_78.cached;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_all_heaps_first_heap != (pas_heap *)0x0) {
    ppVar5 = pas_all_heaps_first_heap;
    do {
      pas_large_heap_compute_summary(&local_78,&ppVar5->large_heap);
      __return_storage_ptr__->free = __return_storage_ptr__->free + local_78.free;
      __return_storage_ptr__->allocated = __return_storage_ptr__->allocated + local_78.allocated;
      __return_storage_ptr__->meta = __return_storage_ptr__->meta + local_78.meta;
      __return_storage_ptr__->committed = __return_storage_ptr__->committed + local_78.committed;
      __return_storage_ptr__->decommitted =
           __return_storage_ptr__->decommitted + local_78.decommitted;
      __return_storage_ptr__->free_ineligible_for_decommit =
           __return_storage_ptr__->free_ineligible_for_decommit +
           local_78.free_ineligible_for_decommit;
      __return_storage_ptr__->free_eligible_for_decommit =
           __return_storage_ptr__->free_eligible_for_decommit + local_78.free_eligible_for_decommit;
      __return_storage_ptr__->free_decommitted =
           __return_storage_ptr__->free_decommitted + local_78.free_decommitted;
      __return_storage_ptr__->meta_ineligible_for_decommit =
           __return_storage_ptr__->meta_ineligible_for_decommit +
           local_78.meta_ineligible_for_decommit;
      __return_storage_ptr__->meta_eligible_for_decommit =
           __return_storage_ptr__->meta_eligible_for_decommit + local_78.meta_eligible_for_decommit;
      __return_storage_ptr__->cached = __return_storage_ptr__->cached + local_78.cached;
      uVar2 = *(uint3 *)(ppVar5->next_heap).payload;
      if (uVar2 == 0) break;
      ppVar5 = (pas_heap *)((ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base);
    } while (ppVar5 != (pas_heap *)0x0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  ppVar4 = (pas_heap_summary *)(*pcVar1)();
  return ppVar4;
}

// pas_all_heaps_compute_total_non_utility_summary @ 140d8d980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_all_heaps_compute_total_non_utility_summary(pas_heap_summary *__return_storage_ptr__)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulong64 uVar3;
  pas_heap_summary *ppVar4;
  uint uVar5;
  ulonglong uVar6;
  pas_bitfit_heap *ppVar7;
  ulong64 uVar8;
  pas_heap *ppVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  pas_heap_summary local_138;
  pas_heap_summary local_d8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pas_all_heaps_compute_total_non_utility_large_summary(&local_138);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ppVar7 = (pas_bitfit_heap *)
           ((ulonglong)bmalloc_common_primitive_heap.segregated_heap.bitfit_heap.payload * 8 +
           pas_compact_heap_reservation_base);
  if (ppVar7 == (pas_bitfit_heap *)0x0 ||
      (ulonglong)bmalloc_common_primitive_heap.segregated_heap.bitfit_heap.payload == 0) {
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    pas_bitfit_heap_compute_summary(&local_d8,ppVar7);
    uVar8 = local_d8.cached;
    uVar10 = local_d8.meta_ineligible_for_decommit;
    uVar11 = local_d8.meta_eligible_for_decommit;
    uVar12 = local_d8.free_eligible_for_decommit;
    uVar13 = local_d8.free_decommitted;
    uVar14 = local_d8.decommitted;
    uVar15 = local_d8.free_ineligible_for_decommit;
    uVar16 = local_d8.free;
    uVar17 = local_d8.allocated;
    uVar18 = local_d8.meta;
    uVar19 = local_d8.committed;
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 == '\0') {
    if (pas_all_heaps_first_heap != (pas_heap *)0x0) {
      uVar3 = pas_compact_heap_reservation_base;
      ppVar9 = pas_all_heaps_first_heap;
      do {
        uVar6 = (ulonglong)(ppVar9->segregated_heap).bitfit_heap.payload;
        if ((uVar6 != 0) &&
           (ppVar7 = (pas_bitfit_heap *)(uVar3 + uVar6 * 8), ppVar7 != (pas_bitfit_heap *)0x0)) {
          pas_bitfit_heap_compute_summary(&local_d8,ppVar7);
          uVar16 = uVar16 + local_d8.free;
          uVar17 = uVar17 + local_d8.allocated;
          uVar18 = uVar18 + local_d8.meta;
          uVar19 = uVar19 + local_d8.committed;
          uVar14 = uVar14 + local_d8.decommitted;
          uVar15 = uVar15 + local_d8.free_ineligible_for_decommit;
          uVar12 = uVar12 + local_d8.free_eligible_for_decommit;
          uVar13 = uVar13 + local_d8.free_decommitted;
          uVar10 = uVar10 + local_d8.meta_ineligible_for_decommit;
          uVar11 = uVar11 + local_d8.meta_eligible_for_decommit;
          uVar8 = uVar8 + local_d8.cached;
          uVar3 = pas_compact_heap_reservation_base;
        }
        uVar5 = (uint)*(uint3 *)(ppVar9->next_heap).payload;
      } while ((uVar5 != 0) &&
              (ppVar9 = (pas_heap *)(uVar3 + (ulonglong)uVar5 * 8), ppVar9 != (pas_heap *)0x0));
    }
    local_158 = 0;
    lStack_150 = 0;
    local_168 = 0;
    lStack_160 = 0;
    local_178 = 0;
    lStack_170 = 0;
    local_188 = 0;
    lStack_180 = 0;
    local_198 = 0;
    lStack_190 = 0;
    local_148 = 0;
    pas_all_heaps_for_each_segregated_directory
              (compute_total_non_utility_segregated_summary_directory_callback,&local_198);
    __return_storage_ptr__->free = uVar16 + local_198 + local_138.free;
    __return_storage_ptr__->allocated = uVar17 + lStack_190 + local_138.allocated;
    __return_storage_ptr__->meta = uVar18 + local_188 + local_138.meta;
    __return_storage_ptr__->committed = uVar19 + lStack_180 + local_138.committed;
    __return_storage_ptr__->decommitted = uVar14 + local_178 + local_138.decommitted;
    __return_storage_ptr__->free_ineligible_for_decommit =
         uVar15 + lStack_170 + local_138.free_ineligible_for_decommit;
    __return_storage_ptr__->free_eligible_for_decommit =
         uVar12 + local_168 + local_138.free_eligible_for_decommit;
    __return_storage_ptr__->free_decommitted = uVar13 + lStack_160 + local_138.free_decommitted;
    __return_storage_ptr__->meta_ineligible_for_decommit =
         uVar10 + local_158 + local_138.meta_ineligible_for_decommit;
    __return_storage_ptr__->meta_eligible_for_decommit =
         uVar11 + lStack_150 + local_138.meta_eligible_for_decommit;
    __return_storage_ptr__->cached = uVar8 + local_148 + local_138.cached;
    if ((local_80 ^ (ulonglong)auStack_1b8) == __security_cookie.value) {
      return __return_storage_ptr__;
    }
    pcVar1 = (code *)swi(3);
    ppVar4 = (pas_heap_summary *)(*pcVar1)();
    return ppVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// for_each_segregated_directory_size_directory_callback @ 140d8dc40

bool __cdecl
for_each_segregated_directory_size_directory_callback
          (pas_segregated_heap *param_1,pas_segregated_size_directory *param_2,void *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d8dc4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)param_3 + 0x18))(param_2,*(undefined8 *)((longlong)param_3 + 0x20))
  ;
  return (bool)uVar1;
}

// for_each_segregated_directory_shared_page_directory_callback @ 140d8dc60

bool __cdecl
for_each_segregated_directory_shared_page_directory_callback
          (pas_segregated_shared_page_directory *param_1,void *param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  pas_segregated_shared_page_directory *ppVar3;
  code *pcVar4;
  void *pvVar5;
  char cVar6;
  void *_Dst;
  undefined8 *puVar7;
  uint uVar8;
  char *pcVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  
  pvVar5 = pas_large_utility_free_heap_allocation_config.arg;
  uVar8 = *(uint *)((longlong)param_2 + 8);
  if (uVar8 <= (uint)((*(int *)((longlong)param_2 + 0x14) + *(int *)((longlong)param_2 + 0x10)) * 2)
     ) {
    uVar16 = uVar8 * 2;
    if ((uint)(*(int *)((longlong)param_2 + 0x10) * 6) < uVar8 * 2) {
      uVar16 = uVar8;
    }
    uVar15 = 0x10;
    if (uVar8 != 0) {
      uVar15 = (ulonglong)uVar16;
    }
    iVar14 = (int)uVar15;
    if ((iVar14 == 0) ||
       (uVar8 = iVar14 - ((uint)(uVar15 >> 1) & 0x55555555),
       uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
       1 < ((uVar8 >> 4) + uVar8 & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pcVar9 = "pas_ptr_hash_set/table";
    uVar10 = 0;
    _Dst = (*pas_large_utility_free_heap_allocation_config.allocate)
                     (uVar15 * 8,"pas_ptr_hash_set/table",pas_object_allocation,
                      pas_large_utility_free_heap_allocation_config.arg);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)pcVar9 >> 8),0xff),uVar15 * 8);
    pvVar1 = *(void **)param_2;
    uVar15 = (ulonglong)*(uint *)((longlong)param_2 + 8);
    if (uVar15 != 0) {
      uVar11 = 0;
      do {
        uVar2 = *(ulonglong *)((longlong)pvVar1 + uVar11 * 8);
        if (uVar2 < 0xfffffffffffffffe) {
          uVar8 = (uint)(uVar2 >> 4) & 0xfffffff ^ (uint)uVar2;
          uVar16 = (uint)(uVar2 >> 0x20);
          uVar16 = uVar16 >> 4 ^ uVar16;
          uVar8 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef) ^ uVar8 * 0x20 + (uVar8 ^ 0xdeadbeef);
          uVar8 = uVar8 >> 0xb ^ uVar8;
          do {
            uVar13 = (ulonglong)(uVar8 & iVar14 - 1U);
            uVar8 = uVar8 + 1;
          } while (*(ulonglong *)((longlong)_Dst + uVar13 * 8) < 0xfffffffffffffffe);
          *(ulonglong *)((longlong)_Dst + uVar13 * 8) = uVar2;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar15);
      uVar10 = uVar15 << 3;
    }
    *(void **)param_2 = _Dst;
    *(int *)((longlong)param_2 + 8) = iVar14;
    *(uint *)((longlong)param_2 + 0xc) = iVar14 - 1U;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    (*pas_large_utility_free_heap_allocation_config.deallocate)
              (pvVar1,uVar10,pas_object_allocation,pvVar5);
  }
  uVar8 = (uint)((ulonglong)param_1 >> 4) & 0xfffffff ^ (uint)param_1;
  uVar16 = (uint)((ulonglong)param_1 >> 0x20);
  uVar16 = uVar16 >> 4 ^ uVar16;
  uVar8 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef) ^ uVar8 * 0x20 + (uVar8 ^ 0xdeadbeef);
  uVar8 = uVar8 >> 0xb ^ uVar8;
  puVar7 = (undefined8 *)0x0;
  while( true ) {
    while( true ) {
      uVar15 = (ulonglong)(uVar8 & *(uint *)((longlong)param_2 + 0xc));
      puVar12 = (undefined8 *)(*(longlong *)param_2 + uVar15 * 8);
      ppVar3 = *(pas_segregated_shared_page_directory **)(*(longlong *)param_2 + uVar15 * 8);
      if (ppVar3 != (pas_segregated_shared_page_directory *)0xfffffffffffffffe) break;
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = puVar12;
      }
      uVar8 = uVar8 + 1;
    }
    if (ppVar3 == (pas_segregated_shared_page_directory *)0xffffffffffffffff) break;
    if (ppVar3 == param_1) {
      *puVar12 = param_1;
      return true;
    }
    uVar8 = uVar8 + 1;
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + -1;
    puVar12 = puVar7;
  }
  *(int *)((longlong)param_2 + 0x10) = *(int *)((longlong)param_2 + 0x10) + 1;
  *puVar12 = param_1;
  cVar6 = (**(code **)((longlong)param_2 + 0x18))(param_1,*(undefined8 *)((longlong)param_2 + 0x20))
  ;
  if (cVar6 != '\0') {
    return true;
  }
  return false;
}

// dump_directory_nicely @ 140d8deb0

void __cdecl dump_directory_nicely(pas_segregated_directory *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  
  uVar1 = param_1->page_config_kind;
  uVar2 = param_1->directory_kind;
  if ((uVar2 != '\0') && (uVar2 != '\x01')) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pas_segregated_page_config_kind_get_string((int)(char)uVar1);
  pas_log("Directory %p (%s, %s");
  if (param_1->directory_kind == 0) {
    pas_log(", %u");
  }
  pas_log(")");
  return;
}

// dump_view_nicely @ 140d8df30

void __cdecl dump_view_nicely(ulong64 param_1,pas_segregated_view_opaque *param_2)

{
  code *pcVar1;
  
  pas_segregated_view_get_page_boundary(param_2);
  if ((~(uint)param_2 & 6) != 0) {
    pas_log(", index %zu, view %p (%s, page boundary %p)");
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

