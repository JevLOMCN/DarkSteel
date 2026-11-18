// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 10

// pas_utility_heap_try_allocate_with_alignment @ 140d6e5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_utility_heap_try_allocate_with_alignment(ulong64 param_1,ulong64 param_2,char *param_3)

{
  pas_utility_heap_allocator *ppVar1;
  char *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  pas_utility_heap_allocator *ppVar7;
  BOOLEAN BVar8;
  longlong lVar9;
  pas_segregated_size_directory *ppVar10;
  ulong64 uVar11;
  void *pvVar12;
  ulong64 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_88 [32];
  pas_allocation_result local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_88;
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar8 != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if ((param_2 ^ param_2 - 1) <= param_2 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar15 = -param_2 & (param_1 + param_2) - 1;
  uVar16 = uVar15 + 7 >> 3;
  if (0x57f < uVar15 + 7) {
    pas_log(
           "Cannot allocate size = %zu (alignment = %zu, aligned_size = %zu, index = %zu) with utility heap.\n"
           );
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (pas_utility_heap_support_instance.allocators == (pas_utility_heap_allocator *)0x0) {
    pas_utility_heap_support_instance.allocators =
         pas_immortal_heap_allocate(0xdc00,"pas_utility_heap_allocators",pas_object_allocation);
    lVar9 = 0xd700;
    do {
      *(undefined4 *)((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x3c0) =
           0x82000000;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x3c4);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x3d4);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x3e4);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x3f4);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x404) = 0;
      *(undefined4 *)((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x280) =
           0x82000000;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x284);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x294);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x2a4);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x2b4);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x2c4) = 0;
      *(undefined4 *)((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x140) =
           0x82000000;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x174);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x164);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x154);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)
               ((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x144);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x184) = 0;
      *(undefined4 *)((longlong)pas_utility_heap_support_instance.allocators + lVar9) = 0x82000000;
      pcVar2 = (pas_utility_heap_support_instance.allocators)->fake_field_to_force_size + lVar9 + 4;
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      pcVar2 = (pas_utility_heap_support_instance.allocators)->fake_field_to_force_size +
               lVar9 + 0x14;
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      pcVar2 = (pas_utility_heap_support_instance.allocators)->fake_field_to_force_size +
               lVar9 + 0x24;
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      pcVar2 = (pas_utility_heap_support_instance.allocators)->fake_field_to_force_size +
               lVar9 + 0x34;
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      *(undefined4 *)((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x44) = 0;
      lVar9 = lVar9 + -0x500;
    } while (lVar9 != -0x500);
  }
  ppVar7 = pas_utility_heap_support_instance.allocators;
  lVar9 = uVar16 * 0x140;
  ppVar1 = pas_utility_heap_support_instance.allocators + uVar16;
  if ((*(longlong *)((longlong)pas_utility_heap_support_instance.allocators + lVar9 + 0x38) == 0) ||
     ((ulonglong)(1L << ((ppVar1->allocator).alignment_shift & 0x3f)) < param_2)) {
    pas_utility_heap_support_instance.slow_path_count =
         pas_utility_heap_support_instance.slow_path_count + 1;
    ppVar10 = pas_segregated_heap_ensure_size_directory_for_size
                        (&pas_utility_segregated_heap,uVar15,param_2,pas_force_size_lookup,
                         &pas_utility_heap_config,(uint *)0x0,
                         pas_segregated_size_directory_full_creation_mode);
    if (ppVar10 == (pas_segregated_size_directory *)0x0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    pas_local_allocator_construct
              (&ppVar1->allocator,ppVar10,pas_local_allocator_not_in_thread_local_cache);
  }
  (ppVar1->allocator).scavenger_data.is_in_use = true;
  uVar4 = (ppVar1->allocator).remaining;
  if ((ulonglong)uVar4 == 0) {
    uVar11 = (ppVar1->allocator).page_ish;
    uVar13 = (ppVar1->allocator).current_word;
    if (uVar13 == 0) {
      if ((ppVar1->allocator).config_kind != 4) {
        pas_utility_heap_config_specialized_local_allocator_try_allocate_slow
                  (&local_50,&ppVar1->allocator,uVar15,param_2,&pas_utility_allocator_counts,
                   pas_allocation_result_identity);
        pvVar12 = (void *)local_50.begin;
        goto LAB_140d6e846;
      }
      uVar4 = (ppVar1->allocator).end_offset;
      uVar5 = (ppVar1->allocator).current_offset;
      uVar15 = (ulonglong)uVar5;
      if (uVar4 <= uVar5) {
LAB_140d6e912:
        pas_utility_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                  (&local_50,&ppVar1->allocator,&pas_utility_allocator_counts,
                   pas_allocation_result_identity);
        pvVar12 = (void *)local_50.begin;
        goto LAB_140d6e846;
      }
      *(undefined8 *)((longlong)ppVar1 + uVar15 * 8 + 0x40) = 0;
      lVar14 = 0;
      do {
        if ((uVar4 - 1) - uVar15 == lVar14) {
          (ppVar1->allocator).current_offset = uVar4;
          goto LAB_140d6e912;
        }
        uVar11 = uVar11 + 0x200;
        uVar13 = *(ulonglong *)((longlong)ppVar7 + lVar14 * 8 + uVar15 * 8 + lVar9 + 0x48);
        lVar14 = lVar14 + 1;
      } while (uVar13 == 0);
      (ppVar1->allocator).current_offset = uVar5 + (int)lVar14;
      (ppVar1->allocator).page_ish = uVar11;
    }
    uVar15 = 0;
    for (uVar16 = uVar13; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
      uVar15 = uVar15 + 1;
    }
    (ppVar1->allocator).current_word = uVar13 & ~(1L << (uVar15 & 0x3f));
    pvVar12 = (void *)(uVar11 + uVar15 * 8);
  }
  else {
    (ppVar1->allocator).remaining = uVar4 - (ppVar1->allocator).object_size;
    pvVar12 = (void *)((ppVar1->allocator).payload_end - (ulonglong)uVar4);
  }
  (ppVar1->allocator).scavenger_data.is_in_use = false;
LAB_140d6e846:
  if (pvVar12 != (void *)0x0 &&
      pas_allocation_callback !=
      (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_char_ptr_pas_allocation_kind *)0x0) {
    (*pas_allocation_callback)(pvVar12,param_1,pas_utility_heap_kind,param_3,pas_object_allocation);
  }
  if ((local_40 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return pvVar12;
  }
  pcVar6 = (code *)swi(3);
  pvVar12 = (void *)(*pcVar6)();
  return pvVar12;
}

// pas_allocation_result_identity @ 140d6e990

pas_allocation_result * __cdecl
pas_allocation_result_identity
          (pas_allocation_result *__return_storage_ptr__,pas_allocation_result *param_1)

{
  bool bVar1;
  undefined3 uVar2;
  pas_zero_mode pVar3;
  
  bVar1 = param_1->did_succeed;
  uVar2 = *(undefined3 *)&param_1->field_0x9;
  pVar3 = param_1->zero_mode;
  __return_storage_ptr__->begin = param_1->begin;
  __return_storage_ptr__->did_succeed = bVar1;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar2;
  __return_storage_ptr__->zero_mode = pVar3;
  return __return_storage_ptr__;
}

// pas_utility_heap_allocate_with_alignment @ 140d6e9a0

void * __cdecl
pas_utility_heap_allocate_with_alignment(ulong64 param_1,ulong64 param_2,char *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  pvVar2 = pas_utility_heap_try_allocate_with_alignment(param_1,param_2,param_3);
  if (pvVar2 != (void *)0x0) {
    return pvVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_try_allocate @ 140d6e9c0

void * __cdecl pas_utility_heap_try_allocate(ulong64 param_1,char *param_2)

{
  void *pvVar1;
  
  pvVar1 = pas_utility_heap_try_allocate_with_alignment(param_1,1,param_2);
  return pvVar1;
}

// pas_utility_heap_allocate @ 140d6e9e0

void * __cdecl pas_utility_heap_allocate(ulong64 param_1,char *param_2)

{
  code *pcVar1;
  void *pvVar2;
  
  pvVar2 = pas_utility_heap_try_allocate_with_alignment(param_1,1,param_2);
  if (pvVar2 != (void *)0x0) {
    return pvVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_utility_heap_deallocate @ 140d6ea10

void __cdecl pas_utility_heap_deallocate(void *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  uint uVar5;
  pas_segregated_page *ppVar6;
  pas_segregated_view_opaque *ppVar7;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1 != (void *)0x0) {
    if (pas_deallocation_callback !=
        (_func___cdecl_void_void_ptr_ulong64_pas_heap_kind_pas_allocation_kind *)0x0) {
      (*pas_deallocation_callback)(param_1,0,pas_utility_heap_kind,pas_object_allocation);
    }
    ppVar6 = (pas_segregated_page *)((ulonglong)param_1 & 0xffffffffffffc000);
    uVar3 = (ulonglong)((uint)((ulonglong)param_1 >> 6) & 0xfc);
    uVar5 = *(uint *)((longlong)ppVar6->alloc_bits + uVar3) &
            ~(1 << ((uint)((ulonglong)param_1 >> 3) & 0x1f));
    *(uint *)((longlong)ppVar6->alloc_bits + uVar3) = uVar5;
    if (((ulonglong)ppVar6->owner & 7) != 0) {
      ppVar7 = (pas_segregated_view_opaque *)((ulonglong)ppVar6->owner & 0xfffffffffffffff8);
      if (ppVar6->is_in_use_for_allocation == true) {
        ppVar6->eligibility_notification_has_been_deferred = true;
      }
      else {
        pas_segregated_directory_view_did_become_eligible_at_index
                  ((pas_segregated_directory *)
                   (((uint)(byte)ppVar7[10] * 0x80000 + (uint)*(ushort *)(ppVar7 + 8) * 8) +
                   pas_compact_heap_reservation_base),(ulonglong)*(uint *)(ppVar7 + 0xc));
      }
      ppVar6->owner = ppVar7;
    }
    if (uVar5 == 0) {
      uVar4 = (ppVar6->emptiness).num_non_empty_words_or_live_bytes - 1;
      if (uVar4 == 0) {
        pas_segregated_page_note_emptiness_impl(ppVar6,pas_note_emptiness_clear_num_non_empty_words)
        ;
        return;
      }
      (ppVar6->emptiness).num_non_empty_words_or_live_bytes = uVar4;
    }
  }
  return;
}

// pas_utility_heap_get_num_free_bytes @ 140d6eaf0

ulong64 __cdecl pas_utility_heap_get_num_free_bytes(void)

{
  ulong64 uVar1;
  
  uVar1 = pas_segregated_heap_get_num_free_bytes(&pas_utility_segregated_heap);
  return uVar1;
}

// pas_utility_heap_for_each_live_object @ 140d6eb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_utility_heap_for_each_live_object
          (_func___cdecl_bool_ulong64_ulong64_void_ptr *param_1,void *param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 auStack_48 [32];
  _func___cdecl_bool_ulong64_ulong64_void_ptr *local_28;
  void *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_28 = param_1;
  local_20 = param_2;
  bVar3 = pas_segregated_heap_for_each_live_object
                    (&pas_utility_segregated_heap,
                     pas_utility_for_each_live_object_small_object_callback,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == __security_cookie.value) {
    return bVar3;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// pas_utility_for_each_live_object_small_object_callback @ 140d6eb90

bool __cdecl
pas_utility_for_each_live_object_small_object_callback
          (pas_segregated_heap *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140d6eba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_4)(param_2,param_3,*(undefined8 *)((longlong)param_4 + 8));
  return (bool)uVar1;
}

// pas_utility_heap_for_all_allocators @ 140d6ebb0

bool __cdecl
pas_utility_heap_for_all_allocators
          (pas_allocator_scavenge_action param_1,pas_lock_hold_mode param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  if (pas_utility_heap_support_instance.allocators == (pas_utility_heap_allocator *)0x0) {
    bVar2 = false;
  }
  else {
    lVar3 = 56000;
    bVar2 = false;
    do {
      bVar1 = pas_local_allocator_scavenge
                        ((pas_local_allocator *)
                         ((longlong)pas_utility_heap_support_instance.allocators + lVar3),param_1);
      bVar2 = (bool)(bVar2 | bVar1);
      lVar3 = lVar3 + -0x140;
    } while (lVar3 != -0x140);
  }
  if (param_2 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  return bVar2;
}

