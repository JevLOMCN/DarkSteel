// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 23

// pas_large_sharing_pool_boot_free @ 140d8e040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_large_sharing_pool_boot_free
          (pas_range *param_1,pas_physical_memory_synchronization_style param_2,
          pas_mmap_capability param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined1 auStackY_78 [32];
  pas_range local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (pas_large_sharing_pool_enabled) {
    uVar3 = pas_get_epoch();
    local_38.begin = param_1->begin;
    local_38.end = param_1->end;
    bVar2 = try_splat(&local_38,splat_boot_free,uVar3,(pas_large_free_heap_deferred_commit_log *)0x0
                      ,(pas_deferred_decommit_log *)0x0,(pas_physical_memory_transaction *)0x0,
                      param_2,param_3);
    if (!bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if ((local_20 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_large_sharing_pool_boot_free_decommitted @ 140d8e0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_large_sharing_pool_boot_free_decommitted
          (pas_range *param_1,pas_physical_memory_synchronization_style param_2,
          pas_mmap_capability param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined1 auStackY_78 [32];
  pas_range local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (pas_large_sharing_pool_enabled) {
    uVar3 = pas_get_epoch();
    local_38.begin = param_1->begin;
    local_38.end = param_1->end;
    bVar2 = try_splat(&local_38,splat_boot_free_decommitted,uVar3,
                      (pas_large_free_heap_deferred_commit_log *)0x0,
                      (pas_deferred_decommit_log *)0x0,(pas_physical_memory_transaction *)0x0,
                      param_2,param_3);
    if (!bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if ((local_20 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_large_sharing_pool_boot_reservation @ 140d8e160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_large_sharing_pool_boot_reservation
          (pas_range *param_1,pas_physical_memory_synchronization_style param_2,
          pas_mmap_capability param_3)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  bool bVar4;
  ulong64 uVar5;
  undefined1 auStackY_78 [32];
  pas_range local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (pas_reservation_commit_mode == pas_decommitted) {
    uVar2 = param_1->begin;
    uVar3 = param_1->end;
    if (pas_large_sharing_pool_enabled) {
      uVar5 = pas_get_epoch();
      local_28.begin = uVar2;
      local_28.end = uVar3;
      bVar4 = try_splat(&local_28,splat_boot_free_decommitted,uVar5,
                        (pas_large_free_heap_deferred_commit_log *)0x0,
                        (pas_deferred_decommit_log *)0x0,(pas_physical_memory_transaction *)0x0,
                        param_2,param_3);
      if (!bVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  else {
    if (pas_reservation_commit_mode != pas_committed) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = param_1->begin;
    uVar3 = param_1->end;
    if (pas_large_sharing_pool_enabled) {
      uVar5 = pas_get_epoch();
      local_28.begin = uVar2;
      local_28.end = uVar3;
      bVar4 = try_splat(&local_28,splat_boot_free,uVar5,
                        (pas_large_free_heap_deferred_commit_log *)0x0,
                        (pas_deferred_decommit_log *)0x0,(pas_physical_memory_transaction *)0x0,
                        param_2,param_3);
      if (!bVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_large_sharing_pool_free @ 140d8e250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_large_sharing_pool_free
          (pas_range *param_1,pas_physical_memory_synchronization_style param_2,
          pas_mmap_capability param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined1 auStackY_78 [32];
  pas_range local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (pas_large_sharing_pool_enabled) {
    uVar3 = pas_get_epoch();
    local_38.begin = param_1->begin;
    local_38.end = param_1->end;
    bVar2 = try_splat(&local_38,splat_free,uVar3,(pas_large_free_heap_deferred_commit_log *)0x0,
                      (pas_deferred_decommit_log *)0x0,(pas_physical_memory_transaction *)0x0,
                      param_2,param_3);
    if (!bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if ((local_20 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_large_sharing_pool_allocate_and_commit @ 140d8e2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_large_sharing_pool_allocate_and_commit
          (pas_range *param_1,pas_physical_memory_transaction *param_2,
          pas_physical_memory_synchronization_style param_3,pas_mmap_capability param_4)

{
  pas_lock *ppVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong64 uVar5;
  pas_range *ppVar6;
  undefined1 auStackY_3a8 [32];
  undefined1 local_368 [16];
  pas_large_free_heap_deferred_commit_log local_358;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  bVar3 = true;
  if (!pas_large_sharing_pool_enabled) goto LAB_140d8e41f;
  uVar5 = pas_get_epoch();
  pas_large_free_heap_deferred_commit_log_construct(&local_358);
  local_368._0_8_ = param_1->begin;
  local_368._8_8_ = param_1->end;
  ppVar6 = (pas_range *)local_368;
  bVar3 = try_splat(ppVar6,splat_allocate_and_commit,uVar5,&local_358,
                    (pas_deferred_decommit_log *)0x0,param_2,param_3,param_4);
  if (bVar3) {
    if (param_3 == pas_physical_memory_is_locked_by_virtual_range_common_lock) {
      if ((local_358.total != 0) || (pas_physical_page_sharing_pool_balance < 0)) {
        ppVar1 = param_2->lock_held;
        if (ppVar1 == (pas_lock *)0x0) {
          uVar5 = 1;
          if (local_358.total != 0) goto LAB_140d8e3ea;
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
          local_368._0_8_ = ppVar1;
          if (ppVar1 != &pas_virtual_range_common_lock && local_358.total != 0) {
            ppVar6 = (pas_range *)(local_368 + 8);
            uVar5 = 2;
LAB_140d8e3ea:
            ppVar6->begin = (ulong64)&pas_virtual_range_common_lock;
          }
        }
        pas_physical_page_sharing_pool_take
                  (local_358.total,pas_lock_is_held,(pas_lock **)local_368,uVar5);
        pas_large_free_heap_deferred_commit_log_commit_all(&local_358,param_2);
      }
    }
    else if ((param_3 == pas_physical_memory_is_locked_by_heap_lock) && (local_358.total != 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  pas_large_free_heap_deferred_commit_log_destruct(&local_358);
LAB_140d8e41f:
  if ((local_38 ^ (ulonglong)auStackY_3a8) == __security_cookie.value) {
    return bVar3;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// try_splat @ 140d8e460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
try_splat(pas_range *param_1,splat_command param_2,ulong64 param_3,
         pas_large_free_heap_deferred_commit_log *param_4,pas_deferred_decommit_log *param_5,
         pas_physical_memory_transaction *param_6,pas_physical_memory_synchronization_style param_7,
         pas_mmap_capability param_8)

{
  undefined1 *puVar1;
  ulong64 *puVar2;
  code *pcVar3;
  pas_range *ppVar4;
  pas_large_sharing_node *ppVar5;
  BOOLEAN BVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  pas_large_sharing_node *ppVar10;
  void *pvVar11;
  void *pvVar12;
  pas_page_sharing_participant_opaque *ppVar13;
  void *pvVar14;
  void *pvVar15;
  ulong64 uVar16;
  pas_large_sharing_node *ppVar17;
  pas_large_sharing_node *ppVar18;
  ulonglong uVar19;
  bool bVar20;
  uint uVar21;
  pas_free_mode pVar22;
  pas_large_sharing_node *ppVar23;
  ulonglong uVar24;
  pas_large_sharing_node *ppVar25;
  ulong64 uVar26;
  pas_large_sharing_node *ppVar27;
  void *pvVar28;
  pas_large_sharing_node *ppVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined1 auStack_128 [40];
  void *local_100;
  ulonglong local_f8;
  void *local_f0;
  void *local_e8;
  ulonglong local_e0;
  ulong64 local_d8;
  ulong64 local_d0;
  ulonglong local_c8;
  ulong64 local_c0;
  pas_large_free_heap_deferred_commit_log *local_b8;
  ulonglong local_b0;
  pas_large_virtual_range local_a8;
  pas_virtual_range local_88;
  pas_range local_68;
  pas_range local_58;
  ulonglong local_48;
  
  uVar30 = (ulonglong)param_2;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pvVar11 = (void *)param_1->begin;
  pvVar12 = (void *)param_1->end;
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar24 = (longlong)pvVar12 - (longlong)pvVar11;
  if (pvVar12 < pvVar11) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar31 = true;
  local_d8 = param_3;
  if (uVar24 != 0) {
    BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar6 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((ulonglong)(uint)pas_large_sharing_tree.root.payload == 0) ||
       ((ulonglong)(uint)pas_large_sharing_tree.root.payload << 3 ==
        -pas_compact_heap_reservation_base)) {
      pas_page_sharing_participant_payload_with_use_epoch_construct
                (&pas_large_sharing_participant_payload);
      ppVar13 = pas_page_sharing_participant_create
                          ((void *)0x0,pas_page_sharing_participant_large_sharing_pool);
      pas_page_sharing_pool_add(&pas_physical_page_sharing_pool,ppVar13);
      ppVar10 = pas_utility_heap_allocate(0x30,"pas_large_sharing_node");
      (ppVar10->tree_node).left = 0;
      (ppVar10->tree_node).right = 0;
      *(undefined8 *)&(ppVar10->tree_node).parent = 0;
      (ppVar10->range).begin = 0;
      (ppVar10->range).end = 0x1000000000000;
      ppVar10->use_epoch = 0;
      ppVar10->num_live_bytes = 0x1000000000000;
      puVar1 = &ppVar10->field_0xc;
      ppVar10->is_booted = 0;
      ppVar10->index_in_min_heap = 0;
      ppVar10->mmap_capability = 1;
      ppVar10->synchronization_style = 1;
      ppVar10->is_committed = 1;
      if (pas_large_sharing_pool_aggressive_asserts == true) {
        validate_node(ppVar10);
      }
      pas_red_black_tree_insert
                (&pas_large_sharing_tree,&ppVar10->tree_node,node_compare_callback,
                 &pas_large_sharing_tree_jettisoned_nodes);
    }
    uVar26 = local_d8;
    local_b8 = param_4;
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
      uVar26 = local_d8;
    }
    uVar19 = (ulonglong)(uint)pas_large_sharing_tree.root.payload;
    local_f8 = pas_page_malloc_cached_alignment;
    local_d8 = uVar26;
    if (uVar19 != 0) {
      while (ppVar10 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar19 * 8),
            ppVar10 != (pas_large_sharing_node *)0x0) {
        pvVar15 = (void *)(ppVar10->range).begin;
        pvVar14 = (void *)(ppVar10->range).end;
        local_c0 = pas_large_sharing_min_heap_instance.size;
        if (pvVar15 <= pvVar11 && pvVar11 < pvVar14) {
          local_100 = pvVar12;
          local_e0 = uVar30;
          local_d0 = pas_large_sharing_participant_payload.use_epoch;
          if ((((param_2 != splat_free) &&
               ((param_2 != splat_allocate_and_commit || (ppVar10->is_committed == 0)))) ||
              (pas_page_malloc_cached_alignment <= uVar24)) ||
             ((longlong)pvVar14 - (longlong)pvVar15 != pas_page_malloc_cached_alignment))
          goto LAB_140d8e779;
          if (pvVar14 < pvVar12) {
            uVar9 = (ppVar10->tree_node).right.payload;
            ppVar18 = (pas_large_sharing_node *)
                      ((ulonglong)uVar9 * 8 + pas_compact_heap_reservation_base);
            if (ppVar18 != (pas_large_sharing_node *)0x0 && uVar9 != 0) goto LAB_140d8e730;
            uVar24 = (ulonglong)(ppVar10->tree_node).parent.payload;
            uVar16 = 0;
            if (7 < uVar24) {
              uVar16 = pas_compact_heap_reservation_base;
            }
            ppVar23 = (pas_large_sharing_node *)(uVar16 + uVar24 & 0xfffffffffffffffe);
            uVar24 = (ulonglong)(ppVar23->tree_node).right.payload;
            ppVar18 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar24 * 8);
            if (uVar24 == 0) {
              ppVar18 = (pas_large_sharing_node *)0x0;
            }
            if (ppVar18 == ppVar10) {
              ppVar18 = ppVar23;
              do {
                uVar24 = (ulonglong)(ppVar18->tree_node).parent.payload;
                uVar16 = pas_compact_heap_reservation_base;
                if (uVar24 < 8) {
                  uVar16 = 0;
                }
                ppVar23 = (pas_large_sharing_node *)(uVar16 + uVar24 & 0xfffffffffffffffe);
                uVar24 = (ulonglong)(ppVar23->tree_node).right.payload;
              } while ((uVar24 != 0) &&
                      (bVar31 = ppVar18 ==
                                (pas_large_sharing_node *)
                                (pas_compact_heap_reservation_base + uVar24 * 8), ppVar18 = ppVar23,
                      bVar31));
            }
            goto LAB_140d8e743;
          }
          remove_from_min_heap(ppVar10);
          uVar30 = ppVar10->use_epoch;
          if (ppVar10->use_epoch <= local_d8) {
            uVar30 = local_d8;
          }
          uVar19 = ppVar10->num_live_bytes;
          ppVar10->use_epoch = uVar30;
          if (param_2 == splat_free) {
            ppVar10->num_live_bytes = uVar19 - uVar24;
            if (uVar19 < uVar24) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          else {
            ppVar10->num_live_bytes = uVar19 + uVar24;
            if (CARRY8(uVar19,uVar24)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar30 = (ppVar10->range).end;
            if (uVar30 < (ppVar10->range).begin) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (uVar30 - (ppVar10->range).begin < uVar19 + uVar24) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          if (pas_large_sharing_pool_aggressive_asserts == true) {
            validate_node(ppVar10);
          }
          goto LAB_140d8f73f;
        }
        if (pvVar15 < pvVar11) {
          uVar9 = (ppVar10->tree_node).right.payload;
        }
        else {
          uVar9 = (ppVar10->tree_node).left.payload;
        }
        if (uVar9 == 0) break;
        uVar19 = (ulonglong)uVar9;
      }
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  goto LAB_140d8f7c0;
LAB_140d8ec30:
  if (ppVar17 == ppVar23) {
LAB_140d8f86b:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((ppVar17 != (pas_large_sharing_node *)0x0) && ((void *)(ppVar17->range).begin != pvVar11)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((local_c8 & (ulonglong)pvVar11) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar26 = (longlong)pvVar11 - (longlong)pvVar12;
  if (pvVar11 < pvVar12 || uVar26 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar20 = true;
  ppVar23 = ppVar17;
  if (param_7 == pas_physical_memory_is_locked_by_virtual_range_common_lock) {
    if ((local_e0 & 1) == 0) {
      local_88.lock_ptr = &pas_virtual_range_common_lock;
      local_88.mmap_capability = param_8;
      local_88.begin = (ulong64)pvVar12;
      local_88.end = (ulong64)pvVar11;
      bVar7 = pas_deferred_decommit_log_add(param_5,&local_88,pas_lock_is_held);
    }
    else {
      local_a8.mmap_capability = param_8;
      local_a8.begin = (ulong64)pvVar12;
      local_a8.end = (ulong64)pvVar11;
      bVar7 = pas_large_free_heap_deferred_commit_log_add(local_b8,&local_a8,param_6);
    }
    pvVar11 = local_f0;
    if (!bVar7) {
      if (bVar31) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      merge_if_possible(ppVar10);
      if (ppVar18 == ppVar10) {
        bVar31 = false;
      }
      else {
        merge_if_possible(ppVar18);
        bVar31 = false;
      }
      goto LAB_140d8f7c0;
    }
  }
  else {
    pvVar11 = local_f0;
    if (param_7 == pas_physical_memory_is_locked_by_heap_lock) {
      if ((local_e0 & 1) == 0) {
        pas_page_malloc_decommit(pvVar12,uVar26,param_8);
        param_5->total = param_5->total + uVar26;
        pvVar11 = local_f0;
      }
      else {
        pas_page_malloc_commit(pvVar12,uVar26,param_8);
        pas_physical_page_sharing_pool_take_later(uVar26);
        pvVar11 = local_f0;
      }
    }
  }
LAB_140d8e9ec:
  bVar31 = bVar20;
  uVar30 = local_e0;
  uVar26 = local_d8;
  if (ppVar23 == ppVar27) goto LAB_140d8ed8d;
  goto LAB_140d8ea05;
  while (ppVar18 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar24 * 8),
        ppVar18 != (pas_large_sharing_node *)0x0) {
LAB_140d8e730:
    ppVar23 = ppVar18;
    uVar24 = (ulonglong)(ppVar23->tree_node).left.payload;
    if (uVar24 == 0) break;
  }
LAB_140d8e743:
  pvVar14 = (void *)(ppVar23->range).begin;
  pvVar28 = (void *)(ppVar23->range).end;
  if (pvVar28 < pvVar14) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (((longlong)pvVar28 - (longlong)pvVar14 == pas_page_malloc_cached_alignment) &&
     (((param_2 & ~splat_allocate_and_commit) == splat_free || (ppVar23->is_committed != 0)))) {
    if (pvVar12 <= pvVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (pvVar28 < pvVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    remove_from_min_heap(ppVar10);
    remove_from_min_heap(ppVar23);
    uVar30 = ppVar10->use_epoch;
    if (ppVar10->use_epoch <= local_d8) {
      uVar30 = local_d8;
    }
    ppVar10->use_epoch = uVar30;
    uVar30 = ppVar23->use_epoch;
    if (ppVar23->use_epoch <= local_d8) {
      uVar30 = local_d8;
    }
    ppVar23->use_epoch = uVar30;
    if (param_2 - splat_free < 3) {
      pVar22 = pas_free;
    }
    else {
      pVar22 = pas_allocated;
      if (param_2 != splat_allocate_and_commit) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    local_a8.begin = (ppVar10->range).begin;
    local_a8.end = (ppVar10->range).end;
    local_58.begin = (ulong64)pvVar11;
    local_58.end = (ulong64)pvVar12;
    pas_range_create_intersection((pas_range *)&local_88,(pas_range *)&local_a8,&local_58);
    if (local_88.end < local_88.begin) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    splat_live_bytes(ppVar10,local_88.end - local_88.begin,pVar22);
    local_58.begin = (ppVar23->range).begin;
    local_58.end = (ppVar23->range).end;
    local_68.begin = (ulong64)pvVar11;
    local_68.end = (ulong64)pvVar12;
    pas_range_create_intersection((pas_range *)&local_a8,&local_58,&local_68);
    if (local_a8.end < local_a8.begin) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    splat_live_bytes(ppVar23,local_a8.end - local_a8.begin,(uint)(param_2 - splat_free < 3));
    update_min_heap(ppVar10);
    param_2 = (splat_command)local_e0;
    ppVar10 = ppVar23;
LAB_140d8f73f:
    update_min_heap(ppVar10);
    pvVar12 = local_100;
    pvVar15 = local_e8;
  }
  else {
LAB_140d8e779:
    if (pvVar15 < pvVar11) {
      uVar24 = pas_page_malloc_cached_alignment - 1;
      if ((pas_page_malloc_cached_alignment ^ uVar24) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar24 & (ulonglong)pvVar11) == 0) {
        ppVar10 = split_node_and_get_right(ppVar10,(ulong64)pvVar11);
      }
      else {
        uVar19 = -pas_page_malloc_cached_alignment;
        ppVar10 = split_node_and_get_right(ppVar10,uVar19 & (ulonglong)pvVar11);
        ppVar10 = split_node_and_get_left(ppVar10,uVar24 + (longlong)pvVar11 & uVar19);
      }
    }
    local_f0 = (void *)((longlong)pvVar12 - 1);
    uVar24 = (ulonglong)(uint)pas_large_sharing_tree.root.payload;
    ppVar18 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar24 * 8);
    pvVar14 = *(void **)(pas_compact_heap_reservation_base + 0x10 + uVar24 * 8);
    pvVar15 = *(void **)(pas_compact_heap_reservation_base + 0x18 + uVar24 * 8);
    if (local_f0 < pvVar14 || pvVar15 <= local_f0) {
      do {
        uVar24 = (ulonglong)(&(ppVar18->tree_node).left)[pvVar14 < local_f0].payload;
        ppVar18 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar24 * 8);
        pvVar14 = *(void **)(pas_compact_heap_reservation_base + 0x10 + uVar24 * 8);
        pvVar15 = *(void **)(pas_compact_heap_reservation_base + 0x18 + uVar24 * 8);
      } while (pvVar15 <= local_f0 || local_f0 < pvVar14);
    }
    if (pvVar12 < pvVar15) {
      uVar24 = local_f8 - 1;
      if ((local_f8 ^ uVar24) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar24 & (ulonglong)pvVar12) == 0) {
        ppVar18 = split_node_and_get_left(ppVar18,(ulong64)pvVar12);
      }
      else {
        uVar24 = -local_f8;
        ppVar18 = split_node_and_get_left(ppVar18,local_f8 + (longlong)local_f0 & uVar24);
        ppVar18 = split_node_and_get_right(ppVar18,(ulonglong)pvVar12 & uVar24);
      }
    }
    uVar24 = (ulonglong)(ppVar18->tree_node).right.payload;
    ppVar23 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar24 * 8);
    if (ppVar23 == (pas_large_sharing_node *)0x0 || uVar24 == 0) {
      uVar24 = (ulonglong)(ppVar18->tree_node).parent.payload;
      ppVar23 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
      if (uVar24 < 8) {
        ppVar23 = (pas_large_sharing_node *)0x0;
      }
      ppVar23 = (pas_large_sharing_node *)
                ((longlong)&(ppVar23->tree_node).left.payload + uVar24 & 0xfffffffffffffffe);
      ppVar27 = (pas_large_sharing_node *)0x0;
      if (ppVar23 != (pas_large_sharing_node *)0x0) {
        ppVar17 = ppVar18;
        do {
          ppVar27 = ppVar23;
          uVar24 = (ulonglong)(ppVar27->tree_node).right.payload;
          ppVar23 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar24 * 8);
          if (uVar24 == 0) {
            ppVar23 = (pas_large_sharing_node *)0x0;
          }
          if (ppVar17 != ppVar23) break;
          uVar24 = (ulonglong)(ppVar27->tree_node).parent.payload;
          ppVar23 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
          if (uVar24 < 8) {
            ppVar23 = (pas_large_sharing_node *)0x0;
          }
          ppVar23 = (pas_large_sharing_node *)
                    ((longlong)&(ppVar23->tree_node).left.payload + uVar24 & 0xfffffffffffffffe);
          ppVar17 = ppVar27;
          ppVar27 = (pas_large_sharing_node *)0x0;
        } while (ppVar23 != (pas_large_sharing_node *)0x0);
      }
    }
    else {
      do {
        ppVar27 = ppVar23;
        uVar24 = (ulonglong)(ppVar27->tree_node).left.payload;
        if (uVar24 == 0) break;
        ppVar23 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar24 * 8);
      } while (ppVar23 != (pas_large_sharing_node *)0x0);
    }
    local_e8 = pvVar11;
    if (pas_large_sharing_pool_validate_each_splat == true) {
      validate_min_heap();
    }
    pvVar11 = local_f0;
    if ((param_2 < splat_free) && (ppVar10 != ppVar27)) {
      uVar24 = local_f8 - (local_f8 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
      local_b0 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      local_c8 = local_f8 - 1;
      uVar16 = 0;
      bVar31 = false;
      ppVar23 = ppVar10;
LAB_140d8ea05:
      uVar9 = *(uint *)&ppVar23->field_0xc;
      uVar21 = (uint)uVar30;
      if ((ZPULL(uVar9,1,1) != uVar21) &&
         (((pvVar12 = (void *)(ppVar23->range).begin, uVar21 == 1 ||
           (pvVar15 = (void *)(ppVar23->range).end, pvVar12 == pvVar15)) ||
          (local_e8 <= pvVar12 && pvVar15 <= local_100)))) {
        if ((int)local_b0 != 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((local_c8 & (ulonglong)pvVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        ppVar17 = ppVar23;
        pvVar11 = pvVar12;
        if (ppVar23 != ppVar27) {
          do {
            if (uVar21 != 1) {
              pvVar15 = (void *)(ppVar17->range).begin;
              pvVar14 = (void *)(ppVar17->range).end;
              if ((pvVar15 != pvVar14) && ((pvVar15 < local_e8 || (local_100 < pvVar14))))
              goto LAB_140d8ec30;
            }
            if ((uVar9 >> 2 & pas_physical_memory_is_locked_by_virtual_range_common_lock) != param_7
               ) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if ((uVar9 >> 3 & pas_may_mmap) != param_8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar9 = (ppVar17->tree_node).right.payload;
            ppVar29 = (pas_large_sharing_node *)
                      ((ulonglong)uVar9 * 8 + pas_compact_heap_reservation_base);
            if (ppVar29 == (pas_large_sharing_node *)0x0 || uVar9 == 0) {
              uVar30 = (ulonglong)(ppVar17->tree_node).parent.payload;
              uVar26 = pas_compact_heap_reservation_base;
              if (uVar30 < 8) {
                uVar26 = uVar16;
              }
              uVar30 = uVar26 + uVar30;
              ppVar29 = ppVar17;
              while( true ) {
                ppVar5 = (pas_large_sharing_node *)(uVar30 & 0xfffffffffffffffe);
                ppVar25 = (pas_large_sharing_node *)0x0;
                if (ppVar5 == (pas_large_sharing_node *)0x0) break;
                uVar30 = (ulonglong)(ppVar5->tree_node).right.payload;
                ppVar25 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8)
                ;
                if (uVar30 == 0) {
                  ppVar25 = (pas_large_sharing_node *)0x0;
                }
                if (ppVar29 != ppVar25) {
                  pvVar11 = (void *)(ppVar17->range).end;
                  ppVar17 = ppVar5;
                  goto joined_r0x000140d8ebfb;
                }
                uVar30 = (ulonglong)(ppVar5->tree_node).parent.payload;
                uVar26 = pas_compact_heap_reservation_base;
                if (uVar30 < 8) {
                  uVar26 = uVar16;
                }
                uVar30 = uVar26 + uVar30;
                ppVar29 = ppVar5;
              }
            }
            else {
              do {
                ppVar25 = ppVar29;
                uVar30 = (ulonglong)(ppVar25->tree_node).left.payload;
                if (uVar30 == 0) break;
                ppVar29 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8)
                ;
              } while (ppVar29 != (pas_large_sharing_node *)0x0);
            }
            pvVar11 = (void *)(ppVar17->range).end;
            ppVar17 = ppVar25;
joined_r0x000140d8ebfb:
            if ((ppVar17 == ppVar27) ||
               (uVar9 = *(uint *)&ppVar17->field_0xc, ZPULL(uVar9,1,1) == uVar21))
            goto LAB_140d8ec30;
          } while( true );
        }
        goto LAB_140d8f86b;
      }
      uVar30 = (ulonglong)(ppVar23->tree_node).right.payload;
      ppVar17 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
      bVar20 = bVar31;
      if (ppVar17 == (pas_large_sharing_node *)0x0 || uVar30 == 0) {
        uVar9 = (ppVar23->tree_node).parent.payload;
        ppVar17 = ppVar23;
        while( true ) {
          uVar26 = pas_compact_heap_reservation_base;
          if ((ulonglong)uVar9 < 8) {
            uVar26 = uVar16;
          }
          ppVar23 = (pas_large_sharing_node *)(uVar26 + uVar9 & 0xfffffffffffffffe);
          if (ppVar23 == (pas_large_sharing_node *)0x0) break;
          uVar30 = (ulonglong)(ppVar23->tree_node).right.payload;
          ppVar29 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
          if (uVar30 == 0) {
            ppVar29 = (pas_large_sharing_node *)0x0;
          }
          if (ppVar17 != ppVar29) goto LAB_140d8e9ec;
          uVar9 = (ppVar23->tree_node).parent.payload;
          ppVar17 = ppVar23;
        }
        ppVar23 = (pas_large_sharing_node *)0x0;
      }
      else {
        do {
          ppVar23 = ppVar17;
          uVar30 = (ulonglong)(ppVar23->tree_node).left.payload;
          if (uVar30 == 0) break;
          ppVar17 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
        } while (ppVar17 != (pas_large_sharing_node *)0x0);
      }
      goto LAB_140d8e9ec;
    }
LAB_140d8ed8d:
    param_2 = (splat_command)uVar30;
    if (pas_large_sharing_pool_validate_each_splat == true) {
      uVar24 = local_f8 - (local_f8 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
      ppVar18 = ppVar10;
      while (param_2 = (splat_command)uVar30, ppVar18 != ppVar27) {
        uVar9 = (ppVar18->tree_node).right.payload;
        ppVar23 = (pas_large_sharing_node *)
                  ((ulonglong)uVar9 * 8 + pas_compact_heap_reservation_base);
        if (ppVar23 == (pas_large_sharing_node *)0x0 || uVar9 == 0) {
          uVar30 = (ulonglong)(ppVar18->tree_node).parent.payload;
          uVar16 = pas_compact_heap_reservation_base;
          if (uVar30 < 8) {
            uVar16 = 0;
          }
          uVar30 = uVar16 + uVar30;
          ppVar23 = ppVar18;
          while( true ) {
            ppVar29 = (pas_large_sharing_node *)(uVar30 & 0xfffffffffffffffe);
            ppVar17 = (pas_large_sharing_node *)0x0;
            if (ppVar29 == (pas_large_sharing_node *)0x0) break;
            uVar30 = (ulonglong)(ppVar29->tree_node).right.payload;
            ppVar17 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
            if (uVar30 == 0) {
              ppVar17 = (pas_large_sharing_node *)0x0;
            }
            if (ppVar23 != ppVar17) {
              uVar30 = (ppVar29->range).begin;
              ppVar17 = ppVar29;
              if (uVar30 <= (ppVar18->range).begin) goto LAB_140d8ef1a;
              goto LAB_140d8eede;
            }
            uVar30 = (ulonglong)(ppVar29->tree_node).parent.payload;
            uVar16 = pas_compact_heap_reservation_base;
            if (uVar30 < 8) {
              uVar16 = 0;
            }
            uVar30 = uVar16 + uVar30;
            ppVar23 = ppVar29;
          }
        }
        else {
          do {
            ppVar17 = ppVar23;
            uVar30 = (ulonglong)(ppVar17->tree_node).left.payload;
            if (uVar30 == 0) break;
            ppVar23 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
          } while (ppVar23 != (pas_large_sharing_node *)0x0);
          uVar30 = (ppVar17->range).begin;
          if (uVar30 <= (ppVar18->range).begin) {
LAB_140d8ef1a:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
LAB_140d8eede:
          if (uVar30 != (ppVar18->range).end) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        if ((char)(((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) !=
            '\x01') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((ppVar18->range).begin < ((ulonglong)local_e8 & -local_f8)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        ppVar4 = &ppVar18->range;
        uVar30 = local_e0;
        ppVar18 = ppVar17;
        if ((-local_f8 & (longlong)pvVar11 + local_f8) < ppVar4->end) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
    }
    pvVar12 = local_100;
    pvVar15 = local_e8;
    if (ppVar10 != ppVar27) {
      ppVar18 = ppVar10;
      do {
        remove_from_min_heap(ppVar18);
        uVar30 = ppVar18->use_epoch;
        if (ppVar18->use_epoch <= uVar26) {
          uVar30 = uVar26;
        }
        ppVar18->use_epoch = uVar30;
        if (param_2 - splat_free < 3) {
          pvVar11 = (void *)(ppVar18->range).begin;
          pvVar12 = (void *)(ppVar18->range).end;
          if (pvVar12 <= pvVar11 && pvVar11 != pvVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (pvVar11 == pvVar12) {
LAB_140d8eff0:
            pvVar11 = (void *)0x0;
            pvVar12 = (void *)0x0;
          }
          else {
            if (pvVar12 <= pvVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (local_100 <= local_e8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (local_100 <= pvVar11 || pvVar12 <= local_e8) goto LAB_140d8eff0;
            if (local_100 <= pvVar12) {
              pvVar12 = local_100;
            }
            if (pvVar11 <= local_e8) {
              pvVar11 = local_e8;
            }
            if (pvVar12 < pvVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          puVar2 = &ppVar18->num_live_bytes;
          uVar30 = *puVar2;
          *puVar2 = *puVar2 - ((longlong)pvVar12 - (longlong)pvVar11);
          if (uVar30 < (ulonglong)((longlong)pvVar12 - (longlong)pvVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (pas_large_sharing_pool_aggressive_asserts == true) {
            validate_node(ppVar18);
          }
          if (param_2 < splat_boot_free) goto LAB_140d8f120;
          puVar1 = &ppVar18->field_0xc;
          if (ZPULL(*(undefined4 *)puVar1,0,1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (ppVar18->is_committed == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (ppVar18->synchronization_style == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (ppVar18->mmap_capability == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar9 = (*(undefined4 *)puVar1 & 0xfffffff2) +
                  (param_8 * 8 & 8) +
                  (param_7 & pas_physical_memory_is_locked_by_virtual_range_common_lock) * 4 + 1;
          *(uint *)&ppVar18->field_0xc = uVar9;
          if (param_2 == splat_boot_free_decommitted) {
            *(uint *)&ppVar18->field_0xc = uVar9 & 0xfffffffd;
          }
        }
        else {
          if (param_2 == splat_allocate_and_commit) {
            ppVar18->is_committed = 1;
            pvVar11 = (void *)(ppVar18->range).begin;
            pvVar12 = (void *)(ppVar18->range).end;
            if (pvVar12 < pvVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (pvVar12 == pvVar11) {
LAB_140d8f0ec:
              pvVar14 = (void *)0x0;
              pvVar15 = (void *)0x0;
            }
            else {
              if (pvVar12 <= pvVar11) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (local_100 <= local_e8) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (local_100 <= pvVar11 || pvVar12 <= local_e8) goto LAB_140d8f0ec;
              pvVar15 = pvVar12;
              if (local_100 <= pvVar12) {
                pvVar15 = local_100;
              }
              pvVar14 = pvVar11;
              if (pvVar11 <= local_e8) {
                pvVar14 = local_e8;
              }
              if (pvVar15 < pvVar14) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
            }
            uVar30 = ppVar18->num_live_bytes;
            uVar24 = ((longlong)pvVar15 - (longlong)pvVar14) + ppVar18->num_live_bytes;
            ppVar18->num_live_bytes = uVar24;
            if (CARRY8((longlong)pvVar15 - (longlong)pvVar14,uVar30)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if ((ulonglong)((longlong)pvVar12 - (longlong)pvVar11) < uVar24) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (pas_large_sharing_pool_aggressive_asserts == true) {
              validate_node(ppVar18);
            }
          }
          else {
            pvVar11 = (void *)(ppVar18->range).begin;
            pvVar12 = (void *)(ppVar18->range).end;
            if ((pvVar11 == pvVar12) || (pvVar12 <= local_100 && local_e8 <= pvVar11)) {
              ppVar18->is_committed = 0;
            }
          }
LAB_140d8f120:
          if (ppVar18->is_booted == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (ppVar18->synchronization_style != param_7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (ppVar18->mmap_capability != param_8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        update_min_heap(ppVar18);
        uVar30 = (ulonglong)(ppVar18->tree_node).right.payload;
        ppVar23 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
        if (ppVar23 == (pas_large_sharing_node *)0x0 || uVar30 == 0) {
          uVar9 = (ppVar18->tree_node).parent.payload;
          ppVar23 = ppVar18;
          while( true ) {
            uVar16 = pas_compact_heap_reservation_base;
            if ((ulonglong)uVar9 < 8) {
              uVar16 = 0;
            }
            ppVar17 = (pas_large_sharing_node *)(uVar16 + uVar9 & 0xfffffffffffffffe);
            ppVar18 = (pas_large_sharing_node *)0x0;
            if (ppVar17 == (pas_large_sharing_node *)0x0) break;
            uVar30 = (ulonglong)(ppVar17->tree_node).right.payload;
            ppVar29 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
            if (uVar30 == 0) {
              ppVar29 = (pas_large_sharing_node *)0x0;
            }
            ppVar18 = ppVar17;
            if (ppVar23 != ppVar29) break;
            uVar9 = (ppVar17->tree_node).parent.payload;
            ppVar23 = ppVar17;
          }
        }
        else {
          do {
            ppVar18 = ppVar23;
            uVar30 = (ulonglong)(ppVar18->tree_node).left.payload;
            if (uVar30 == 0) break;
            ppVar23 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
          } while (ppVar23 != (pas_large_sharing_node *)0x0);
        }
        pvVar12 = local_100;
        pvVar15 = local_e8;
      } while (ppVar18 != ppVar27);
    }
    while ((pvVar11 = local_e8, pvVar14 = local_100, ppVar10 != (pas_large_sharing_node *)0x0 &&
           ((void *)(ppVar10->range).begin < local_100))) {
      local_100 = pvVar12;
      local_e8 = pvVar15;
      ppVar10 = merge_if_possible(ppVar10);
      pvVar12 = local_100;
      pvVar15 = local_e8;
      local_e8 = pvVar11;
      local_100 = pvVar14;
    }
  }
  local_e8 = pvVar15;
  local_100 = pvVar12;
  if (pas_large_sharing_pool_validate_each_splat == true) {
    ppVar10 = (pas_large_sharing_node *)
              (&(((pas_large_sharing_node *)pas_compact_heap_reservation_base)->tree_node).left +
              (ulonglong)(uint)pas_large_sharing_tree.root.payload * 2);
    ppVar18 = ppVar10;
    if (ppVar10 == (pas_large_sharing_node *)0x0 ||
        (ulonglong)(uint)pas_large_sharing_tree.root.payload == 0) {
      ppVar18 = (pas_large_sharing_node *)0x0;
    }
    else {
      do {
        pvVar12 = (void *)(ppVar18->range).begin;
        if ((pvVar12 <= pvVar11) && (pvVar11 < (void *)(ppVar18->range).end)) goto LAB_140d8f283;
        if (pvVar12 < pvVar11) {
          uVar9 = (ppVar18->tree_node).right.payload;
        }
        else {
          uVar9 = (ppVar18->tree_node).left.payload;
        }
      } while ((uVar9 != 0) &&
              (ppVar18 = (pas_large_sharing_node *)
                         (&(((pas_large_sharing_node *)pas_compact_heap_reservation_base)->tree_node
                           ).left + (ulonglong)uVar9 * 2), ppVar18 != (pas_large_sharing_node *)0x0)
              );
      ppVar18 = (pas_large_sharing_node *)0x0;
LAB_140d8f283:
      uVar30 = (longlong)local_100 - 1;
      do {
        uVar24 = (ppVar10->range).begin;
        if ((uVar24 <= uVar30) && (uVar30 < (ppVar10->range).end)) goto LAB_140d8f2c3;
        if (uVar24 < uVar30) {
          uVar9 = (ppVar10->tree_node).right.payload;
        }
        else {
          uVar9 = (ppVar10->tree_node).left.payload;
        }
      } while ((uVar9 != 0) &&
              (ppVar10 = (pas_large_sharing_node *)
                         (&(((pas_large_sharing_node *)pas_compact_heap_reservation_base)->tree_node
                           ).left + (ulonglong)uVar9 * 2), ppVar10 != (pas_large_sharing_node *)0x0)
              );
    }
    ppVar10 = (pas_large_sharing_node *)0x0;
LAB_140d8f2c3:
    uVar9 = (ppVar10->tree_node).right.payload;
    ppVar23 = (pas_large_sharing_node *)
              (&(((pas_large_sharing_node *)pas_compact_heap_reservation_base)->tree_node).left +
              (ulonglong)uVar9 * 2);
    if (ppVar23 == (pas_large_sharing_node *)0x0 || uVar9 == 0) {
      uVar30 = (ulonglong)(ppVar10->tree_node).parent.payload;
      ppVar23 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
      if (uVar30 < 8) {
        ppVar23 = (pas_large_sharing_node *)0x0;
      }
      ppVar23 = (pas_large_sharing_node *)
                ((longlong)&(ppVar23->tree_node).left.payload + uVar30 & 0xfffffffffffffffe);
      ppVar27 = (pas_large_sharing_node *)0x0;
      if (ppVar23 != (pas_large_sharing_node *)0x0) {
        do {
          uVar30 = (ulonglong)(ppVar23->tree_node).right.payload;
          ppVar17 = (pas_large_sharing_node *)
                    (&(((pas_large_sharing_node *)pas_compact_heap_reservation_base)->tree_node).
                      left + uVar30 * 2);
          if (uVar30 == 0) {
            ppVar17 = (pas_large_sharing_node *)0x0;
          }
          ppVar27 = ppVar23;
          if (ppVar10 != ppVar17) break;
          uVar30 = (ulonglong)(ppVar23->tree_node).parent.payload;
          ppVar10 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
          if (uVar30 < 8) {
            ppVar10 = (pas_large_sharing_node *)0x0;
          }
          ppVar17 = (pas_large_sharing_node *)
                    ((longlong)&(ppVar10->tree_node).left.payload + uVar30 & 0xfffffffffffffffe);
          ppVar10 = ppVar23;
          ppVar23 = ppVar17;
          ppVar27 = (pas_large_sharing_node *)0x0;
        } while (ppVar17 != (pas_large_sharing_node *)0x0);
      }
    }
    else {
      do {
        ppVar27 = ppVar23;
        uVar30 = (ulonglong)(ppVar27->tree_node).left.payload;
        if (uVar30 == 0) break;
        ppVar23 = (pas_large_sharing_node *)
                  (&(((pas_large_sharing_node *)pas_compact_heap_reservation_base)->tree_node).left
                  + uVar30 * 2);
      } while (ppVar23 != (pas_large_sharing_node *)0x0);
    }
    if (ppVar18 == (pas_large_sharing_node *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (ppVar18 != ppVar27) {
      do {
        validate_node(ppVar18);
        if (param_2 - splat_free < 3) {
          pvVar12 = (void *)(ppVar18->range).begin;
          pvVar15 = (void *)(ppVar18->range).end;
          if (pvVar15 < pvVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (pvVar12 == pvVar15) {
LAB_140d8f460:
            pvVar28 = (void *)0x0;
            pvVar14 = (void *)0x0;
          }
          else {
            if (pvVar15 <= pvVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (local_100 <= pvVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (local_100 <= pvVar12 || pvVar15 <= pvVar11) goto LAB_140d8f460;
            pvVar28 = local_100;
            if (pvVar15 < local_100) {
              pvVar28 = pvVar15;
            }
            pvVar14 = pvVar12;
            if (pvVar12 <= pvVar11) {
              pvVar14 = pvVar11;
            }
            if (pvVar28 < pvVar14) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          if ((longlong)pvVar15 - (ppVar18->num_live_bytes + (longlong)pvVar12) <
              (ulonglong)((longlong)pvVar28 - (longlong)pvVar14)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else if (param_2 == splat_allocate_and_commit) {
          if (ppVar18->is_committed == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pvVar12 = (void *)(ppVar18->range).begin;
          pvVar15 = (void *)(ppVar18->range).end;
          if (pvVar15 <= pvVar12 && pvVar12 != pvVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (pvVar12 == pvVar15) {
LAB_140d8f511:
            pvVar12 = (void *)0x0;
            pvVar15 = (void *)0x0;
          }
          else {
            if (pvVar15 <= pvVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (local_100 <= pvVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (local_100 <= pvVar12 || pvVar15 <= pvVar11) goto LAB_140d8f511;
            if (local_100 <= pvVar15) {
              pvVar15 = local_100;
            }
            if (pvVar12 <= pvVar11) {
              pvVar12 = pvVar11;
            }
            if (pvVar15 < pvVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          if (ppVar18->num_live_bytes < (ulonglong)((longlong)pvVar15 - (longlong)pvVar12)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else {
          pvVar12 = (void *)(ppVar18->range).begin;
          pvVar15 = (void *)(ppVar18->range).end;
          if (((pvVar12 == pvVar15) || (pvVar15 <= local_100 && pvVar11 <= pvVar12)) &&
             (ppVar18->is_committed != 0)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        uVar30 = (ulonglong)(ppVar18->tree_node).right.payload;
        ppVar10 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
        if (ppVar10 == (pas_large_sharing_node *)0x0 || uVar30 == 0) {
          uVar9 = (ppVar18->tree_node).parent.payload;
          ppVar10 = ppVar18;
          while( true ) {
            uVar26 = pas_compact_heap_reservation_base;
            if ((ulonglong)uVar9 < 8) {
              uVar26 = 0;
            }
            ppVar23 = (pas_large_sharing_node *)(uVar26 + uVar9 & 0xfffffffffffffffe);
            ppVar18 = (pas_large_sharing_node *)0x0;
            if (ppVar23 == (pas_large_sharing_node *)0x0) break;
            uVar30 = (ulonglong)(ppVar23->tree_node).right.payload;
            ppVar17 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
            if (uVar30 == 0) {
              ppVar17 = (pas_large_sharing_node *)0x0;
            }
            ppVar18 = ppVar23;
            if (ppVar10 != ppVar17) break;
            uVar9 = (ppVar23->tree_node).parent.payload;
            ppVar10 = ppVar23;
          }
        }
        else {
          do {
            ppVar18 = ppVar10;
            uVar30 = (ulonglong)(ppVar18->tree_node).left.payload;
            if (uVar30 == 0) break;
            ppVar10 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar30 * 8);
          } while (ppVar10 != (pas_large_sharing_node *)0x0);
        }
      } while (ppVar18 != ppVar27);
    }
  }
  bVar31 = true;
  if ((pas_large_sharing_pool_epoch_update_mode_setting == pas_large_sharing_pool_combined_use_epoch
      ) && (pas_large_sharing_participant_payload.use_epoch = local_d8, local_d8 < local_d0)) {
    pas_large_sharing_participant_payload.use_epoch = local_d0;
  }
  if ((local_d0 != pas_large_sharing_participant_payload.use_epoch) ||
     ((pas_large_sharing_min_heap_instance.size == 0) == (local_c0 != 0))) {
    ppVar13 = pas_page_sharing_participant_create
                        ((void *)0x0,pas_page_sharing_participant_large_sharing_pool);
    pas_page_sharing_pool_did_create_delta(&pas_physical_page_sharing_pool,ppVar13);
  }
LAB_140d8f7c0:
  if (pas_large_sharing_pool_validate_each_splat == true) {
    pas_large_sharing_pool_validate();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == __security_cookie.value) {
    return bVar31;
  }
  pcVar3 = (code *)swi(3);
  uVar8 = (*pcVar3)();
  return (bool)uVar8;
}

// pas_large_sharing_pool_decommit_least_recently_used @ 140d8f880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_page_sharing_pool_take_result __cdecl
pas_large_sharing_pool_decommit_least_recently_used(pas_deferred_decommit_log *param_1)

{
  code *pcVar1;
  pas_large_sharing_node *ppVar2;
  bool bVar3;
  pas_page_sharing_pool_take_result pVar4;
  undefined1 auStackY_68 [32];
  pas_range local_28;
  ulonglong local_18;
  
  ppVar2 = pas_large_sharing_min_heap_instance.inline_array[0];
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  pVar4 = pas_page_sharing_pool_take_none_available;
  if ((pas_large_sharing_pool_enabled) &&
     (pVar4 = pas_page_sharing_pool_take_none_available,
     pas_large_sharing_min_heap_instance.size != 0)) {
    if (pas_large_sharing_min_heap_instance.outline_capacity == 0xfffffffffffffffc) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pas_large_sharing_min_heap_instance.inline_array[0] != (pas_large_sharing_node *)0x0) {
      if (pas_large_sharing_min_heap_instance.inline_array[0]->num_live_bytes != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (pas_large_sharing_min_heap_instance.inline_array[0]->is_committed == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      validate_node(pas_large_sharing_min_heap_instance.inline_array[0]);
      local_28.begin = (ppVar2->range).begin;
      local_28.end = (ppVar2->range).end;
      bVar3 = try_splat(&local_28,splat_decommit,0,(pas_large_free_heap_deferred_commit_log *)0x0,
                        param_1,(pas_physical_memory_transaction *)0x0,ppVar2->synchronization_style
                        ,ppVar2->mmap_capability);
      pVar4 = bVar3 | pas_page_sharing_pool_take_locks_unavailable;
    }
  }
  if ((local_18 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return pVar4;
  }
  pcVar1 = (code *)swi(3);
  pVar4 = (*pcVar1)();
  return pVar4;
}

// validate_node @ 140d8f960

void __cdecl validate_node(pas_large_sharing_node *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar2 = (param_1->range).begin;
  uVar3 = (param_1->range).end;
  if (uVar3 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar3 - uVar2 < param_1->num_live_bytes) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar2 & uVar1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar1 & uVar3) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_1->num_live_bytes != 0) {
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    if (uVar3 - uVar2 != pas_page_malloc_cached_alignment) {
      uVar2 = (param_1->range).end;
      if (uVar2 < (param_1->range).begin) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (param_1->num_live_bytes != uVar2 - (param_1->range).begin) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
  }
  return;
}

// pas_large_sharing_pool_validate @ 140d8fa00

void __cdecl pas_large_sharing_pool_validate(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  uint uVar4;
  pas_large_sharing_node **pppVar6;
  pas_large_sharing_node *ppVar7;
  pas_large_sharing_node *ppVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  pas_large_sharing_node *ppVar12;
  pas_large_sharing_node *ppVar13;
  pas_large_sharing_node *ppVar14;
  ulonglong uVar5;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((pas_large_sharing_pool_enabled != true) ||
     (ppVar8 = (pas_large_sharing_node *)
               (pas_compact_heap_reservation_base +
               (ulonglong)(uint)pas_large_sharing_tree.root.payload * 8),
     ppVar8 == (pas_large_sharing_node *)0x0 ||
     (ulonglong)(uint)pas_large_sharing_tree.root.payload == 0)) {
    return;
  }
  do {
    ppVar7 = ppVar8;
    uVar5 = (ulonglong)(ppVar7->tree_node).left.payload;
    if (uVar5 == 0) break;
    ppVar8 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar5 * 8);
  } while (ppVar8 != (pas_large_sharing_node *)0x0);
  uVar11 = 0;
LAB_140d8fa6c:
  do {
    validate_node(ppVar7);
    puVar1 = &ppVar7->field_0xc;
    if ((ppVar7->is_committed == 0) || (ppVar7->num_live_bytes != 0)) {
      if (0xf < ppVar7->index_in_min_heap << 4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      if (ppVar7->index_in_min_heap << 4 < 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = ZPULL(*(undefined4 *)puVar1,4,0x1c);
      uVar5 = (ulonglong)uVar4;
      uVar10 = pas_large_sharing_min_heap_instance.outline_capacity + 4;
      if (uVar10 <= uVar5 - 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pppVar6 = pas_large_sharing_min_heap_instance.outline_array + (uVar5 - 5);
      if (ppVar7->index_in_min_heap << 4 < 0x50) {
        pppVar6 = pas_large_sharing_min_heap_instance.inline_array + (uVar5 - 1);
      }
      if (*pppVar6 != ppVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (0x1f < ppVar7->index_in_min_heap << 4) {
        uVar5 = (ulonglong)((uint)*(undefined4 *)puVar1 >> 5);
        if (uVar10 <= uVar5 - 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pppVar6 = pas_large_sharing_min_heap_instance.outline_array + (uVar5 - 5);
        if (ppVar7->index_in_min_heap << 4 < 0xa0) {
          pppVar6 = pas_large_sharing_min_heap_instance.inline_array + (uVar5 - 1);
        }
        if (ppVar7->use_epoch < (*pppVar6)->use_epoch) goto LAB_140d8fca7;
      }
      uVar5 = (ulonglong)(uVar4 * 2);
      if (uVar5 <= pas_large_sharing_min_heap_instance.size) {
        if (uVar10 <= uVar5 - 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pppVar6 = pas_large_sharing_min_heap_instance.outline_array + (uVar5 - 5);
        if (ppVar7->index_in_min_heap << 4 < 0x30) {
          pppVar6 = pas_large_sharing_min_heap_instance.inline_array + (uVar5 - 1);
        }
        if ((*pppVar6)->use_epoch < ppVar7->use_epoch) goto LAB_140d8fca7;
      }
      if (uVar5 < pas_large_sharing_min_heap_instance.size) {
        if (uVar10 <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pppVar6 = pas_large_sharing_min_heap_instance.outline_array + (uVar5 - 4);
        if ((uVar5 | 1) < 5) {
          pppVar6 = pas_large_sharing_min_heap_instance.inline_array + uVar5;
        }
        if ((*pppVar6)->use_epoch < ppVar7->use_epoch) {
LAB_140d8fca7:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
    }
    uVar5 = (ulonglong)(ppVar7->tree_node).right.payload;
    ppVar8 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar5 * 8);
    ppVar12 = ppVar8;
    if (ppVar8 == (pas_large_sharing_node *)0x0 || uVar5 == 0) {
      uVar10 = (ulonglong)(ppVar7->tree_node).parent.payload;
      uVar9 = pas_compact_heap_reservation_base;
      if (uVar10 < 8) {
        uVar9 = uVar11;
      }
      ppVar12 = (pas_large_sharing_node *)(uVar9 + uVar10 & 0xfffffffffffffffe);
      ppVar14 = ppVar7;
      if (ppVar12 != (pas_large_sharing_node *)0x0) {
        do {
          ppVar13 = ppVar12;
          uVar10 = (ulonglong)(ppVar13->tree_node).right.payload;
          if ((uVar10 == 0) ||
             (ppVar14 != (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar10 * 8))
             ) goto LAB_140d8fb24;
          uVar10 = (ulonglong)(ppVar13->tree_node).parent.payload;
          uVar9 = pas_compact_heap_reservation_base;
          if (uVar10 < 8) {
            uVar9 = uVar11;
          }
          ppVar12 = (pas_large_sharing_node *)(uVar9 + uVar10 & 0xfffffffffffffffe);
          ppVar14 = ppVar13;
        } while (ppVar12 != (pas_large_sharing_node *)0x0);
        goto LAB_140d8fb32;
      }
    }
    else {
      do {
        ppVar13 = ppVar12;
        uVar10 = (ulonglong)(ppVar13->tree_node).left.payload;
        if (uVar10 == 0) break;
        ppVar12 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar10 * 8);
      } while (ppVar12 != (pas_large_sharing_node *)0x0);
LAB_140d8fb24:
      if ((ppVar13->range).begin != (ppVar7->range).end) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_140d8fb32:
      if (ppVar8 != (pas_large_sharing_node *)0x0 && uVar5 != 0) {
        do {
          ppVar7 = ppVar8;
          uVar5 = (ulonglong)(ppVar7->tree_node).left.payload;
          ppVar8 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar5 * 8);
          if (uVar5 == 0) break;
        } while (ppVar8 != (pas_large_sharing_node *)0x0);
        goto LAB_140d8fa6c;
      }
      uVar10 = (ulonglong)(ppVar7->tree_node).parent.payload;
    }
    uVar9 = pas_compact_heap_reservation_base;
    if ((uint)uVar10 < 8) {
      uVar9 = uVar11;
    }
    ppVar8 = (pas_large_sharing_node *)(uVar9 + uVar10 & 0xfffffffffffffffe);
    ppVar12 = ppVar7;
    if (ppVar8 == (pas_large_sharing_node *)0x0) {
      return;
    }
    while ((ppVar7 = ppVar8, uVar5 = (ulonglong)(ppVar7->tree_node).right.payload, uVar5 != 0 &&
           (ppVar12 == (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar5 * 8))))
    {
      uVar5 = (ulonglong)(ppVar7->tree_node).parent.payload;
      uVar9 = pas_compact_heap_reservation_base;
      if (uVar5 < 8) {
        uVar9 = uVar11;
      }
      ppVar8 = (pas_large_sharing_node *)(uVar9 + uVar5 & 0xfffffffffffffffe);
      ppVar12 = ppVar7;
      if (ppVar8 == (pas_large_sharing_node *)0x0) {
        return;
      }
    }
  } while( true );
}

// pas_large_sharing_pool_assert_booted_and_free @ 140d8fcd0

void __cdecl
pas_large_sharing_pool_assert_booted_and_free
          (pas_range *param_1,pas_physical_memory_synchronization_style param_2,
          pas_mmap_capability param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((pas_large_sharing_pool_enabled != true) ||
     (puVar6 = (uint *)(pas_compact_heap_reservation_base +
                       (ulonglong)(uint)pas_large_sharing_tree.root.payload * 8),
     puVar6 == (uint *)0x0 || (ulonglong)(uint)pas_large_sharing_tree.root.payload == 0)) {
    return;
  }
  uVar2 = param_1->begin;
  while ((uVar2 < *(ulonglong *)(puVar6 + 4) || (*(ulonglong *)(puVar6 + 6) <= uVar2))) {
    if (*(ulonglong *)(puVar6 + 4) < uVar2) {
      uVar1 = puVar6[1];
    }
    else {
      uVar1 = *puVar6;
    }
    if (uVar1 == 0) {
      return;
    }
    puVar6 = (uint *)((ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base);
    if (puVar6 == (uint *)0x0) {
      return;
    }
  }
  uVar3 = param_1->end;
  if (uVar3 < uVar2) {
    if (*(ulonglong *)(puVar6 + 4) <= *(ulonglong *)(puVar6 + 6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else if (uVar2 == uVar3) {
    if (*(ulonglong *)(puVar6 + 4) <= *(ulonglong *)(puVar6 + 6)) {
      return;
    }
  }
  else {
    uVar9 = *(ulonglong *)(puVar6 + 4);
    uVar11 = *(ulonglong *)(puVar6 + 6);
    if (uVar2 < uVar3) {
      if (uVar9 <= uVar11) {
        do {
          if (uVar9 == uVar11) {
            return;
          }
          if (uVar11 <= uVar9) goto LAB_140d8fed6;
          if (uVar11 <= uVar2) {
            return;
          }
          if (uVar3 <= uVar9) {
            return;
          }
          uVar1 = puVar6[3];
          if ((uVar1 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar1 >> 2 & pas_physical_memory_is_locked_by_virtual_range_common_lock) != param_2)
          {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar1 >> 3 & pas_may_mmap) != param_3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar7 = uVar3;
          if (uVar11 < uVar3) {
            uVar7 = uVar11;
          }
          uVar12 = uVar2;
          if (uVar2 < uVar9) {
            uVar12 = uVar9;
          }
          if (uVar7 < uVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar11 - (uVar9 + *(longlong *)(puVar6 + 10)) < uVar7 - uVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          puVar10 = (uint *)((ulonglong)puVar6[1] * 8 + pas_compact_heap_reservation_base);
          if (puVar10 == (uint *)0x0 || puVar6[1] == 0) {
            uVar1 = puVar6[2];
            puVar10 = puVar6;
            while( true ) {
              uVar8 = pas_compact_heap_reservation_base;
              if ((ulonglong)uVar1 < 8) {
                uVar8 = 0;
              }
              puVar6 = (uint *)(uVar8 + uVar1 & 0xfffffffffffffffe);
              if (puVar6 == (uint *)0x0) {
                return;
              }
              if (((ulonglong)puVar6[1] == 0) ||
                 (puVar10 != (uint *)(pas_compact_heap_reservation_base + (ulonglong)puVar6[1] * 8))
                 ) break;
              uVar1 = puVar6[2];
              puVar10 = puVar6;
            }
          }
          else {
            do {
              puVar6 = puVar10;
              if ((ulonglong)*puVar6 == 0) break;
              puVar10 = (uint *)(pas_compact_heap_reservation_base + (ulonglong)*puVar6 * 8);
            } while (puVar10 != (uint *)0x0);
          }
          uVar9 = *(ulonglong *)(puVar6 + 4);
          uVar11 = *(ulonglong *)(puVar6 + 6);
        } while (uVar9 <= uVar11);
      }
    }
    else if (uVar9 <= uVar11) {
      if (uVar9 == uVar11) {
        return;
      }
      if (uVar9 < uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
LAB_140d8fed6:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

// pas_range_create_intersection @ 140d8fee0

pas_range * __cdecl
pas_range_create_intersection
          (pas_range *__return_storage_ptr__,pas_range *param_1,pas_range *param_2)

{
  pas_range *ppVar1;
  pas_range *ppVar2;
  code *pcVar3;
  pas_range *ppVar4;
  pas_range *ppVar5;
  
  ppVar1 = (pas_range *)param_1->begin;
  ppVar2 = (pas_range *)param_1->end;
  if (ppVar2 < ppVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  ppVar4 = (pas_range *)param_2->begin;
  ppVar5 = (pas_range *)param_2->end;
  if (ppVar5 < ppVar4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (ppVar4 != ppVar5 && ppVar1 != ppVar2) {
    if (ppVar2 <= ppVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (ppVar5 <= ppVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (ppVar4 < ppVar2 && ppVar1 < ppVar5) {
      if (ppVar2 < ppVar5) {
        ppVar5 = ppVar2;
      }
      if (ppVar4 < ppVar1) {
        ppVar4 = ppVar1;
      }
      if (ppVar4 <= ppVar5) {
        __return_storage_ptr__->begin = (ulong64)ppVar4;
        __return_storage_ptr__->end = (ulong64)ppVar5;
        return ppVar1;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  __return_storage_ptr__->begin = 0;
  __return_storage_ptr__->end = 0;
  return ppVar1;
}

// pas_large_sharing_pool_assert_allocated @ 140d8ff60

void __cdecl pas_large_sharing_pool_assert_allocated(pas_range *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((pas_large_sharing_pool_enabled != true) ||
     (puVar6 = (uint *)(pas_compact_heap_reservation_base +
                       (ulonglong)(uint)pas_large_sharing_tree.root.payload * 8),
     puVar6 == (uint *)0x0 || (ulonglong)(uint)pas_large_sharing_tree.root.payload == 0)) {
    return;
  }
  uVar2 = param_1->begin;
  while ((uVar2 < *(ulonglong *)(puVar6 + 4) || (*(ulonglong *)(puVar6 + 6) <= uVar2))) {
    if (*(ulonglong *)(puVar6 + 4) < uVar2) {
      uVar1 = puVar6[1];
    }
    else {
      uVar1 = *puVar6;
    }
    if (uVar1 == 0) {
      return;
    }
    puVar6 = (uint *)((ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base);
    if (puVar6 == (uint *)0x0) {
      return;
    }
  }
  uVar3 = param_1->end;
  if (uVar3 < uVar2) {
    if (*(ulonglong *)(puVar6 + 4) <= *(ulonglong *)(puVar6 + 6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else if (uVar2 == uVar3) {
    if (*(ulonglong *)(puVar6 + 4) <= *(ulonglong *)(puVar6 + 6)) {
      return;
    }
  }
  else {
    uVar7 = *(ulonglong *)(puVar6 + 4);
    uVar9 = *(ulonglong *)(puVar6 + 6);
    if (uVar2 < uVar3) {
      if (uVar7 <= uVar9) {
        do {
          if (uVar7 == uVar9) {
            return;
          }
          if (uVar9 <= uVar7) goto LAB_140d90122;
          if (uVar9 <= uVar2) {
            return;
          }
          if (uVar3 <= uVar7) {
            return;
          }
          if ((puVar6[3] & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar3 <= uVar9) {
            uVar9 = uVar3;
          }
          if (uVar7 <= uVar2) {
            uVar7 = uVar2;
          }
          if (uVar9 < uVar7) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (*(ulonglong *)(puVar6 + 10) < uVar9 - uVar7) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          puVar10 = (uint *)((ulonglong)puVar6[1] * 8 + pas_compact_heap_reservation_base);
          if (puVar10 == (uint *)0x0 || puVar6[1] == 0) {
            uVar1 = puVar6[2];
            puVar10 = puVar6;
            while( true ) {
              uVar8 = pas_compact_heap_reservation_base;
              if ((ulonglong)uVar1 < 8) {
                uVar8 = 0;
              }
              puVar6 = (uint *)(uVar8 + uVar1 & 0xfffffffffffffffe);
              if (puVar6 == (uint *)0x0) {
                return;
              }
              if (((ulonglong)puVar6[1] == 0) ||
                 (puVar10 != (uint *)(pas_compact_heap_reservation_base + (ulonglong)puVar6[1] * 8))
                 ) break;
              uVar1 = puVar6[2];
              puVar10 = puVar6;
            }
          }
          else {
            do {
              puVar6 = puVar10;
              if ((ulonglong)*puVar6 == 0) break;
              puVar10 = (uint *)(pas_compact_heap_reservation_base + (ulonglong)*puVar6 * 8);
            } while (puVar10 != (uint *)0x0);
          }
          uVar7 = *(ulonglong *)(puVar6 + 4);
          uVar9 = *(ulonglong *)(puVar6 + 6);
        } while (uVar7 <= uVar9);
      }
    }
    else if (uVar7 <= uVar9) {
      if (uVar7 == uVar9) {
        return;
      }
      if (uVar7 < uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
LAB_140d90122:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

// pas_large_sharing_pool_compute_summary @ 140d90130

pas_heap_summary * __cdecl
pas_large_sharing_pool_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_range *param_1,
          <unnamed_tag_00B5F557> param_2,pas_lock_hold_mode param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  ulong64 uVar7;
  uint uVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulong64 uVar18;
  ulong64 local_60;
  ulong64 local_58;
  ulong64 local_50;
  ulong64 local_48;
  
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
  if (pas_large_sharing_pool_enabled == false) {
    uVar7 = param_1->end - param_1->begin;
    if (param_1->begin <= param_1->end) {
      __return_storage_ptr__->allocated = uVar7;
      __return_storage_ptr__->committed = uVar7;
      return __return_storage_ptr__;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (param_3 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  uVar7 = pas_compact_heap_reservation_base;
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (((ulonglong)(uint)pas_large_sharing_tree.root.payload != 0) &&
     (puVar11 = (uint *)(pas_compact_heap_reservation_base +
                        (ulonglong)(uint)pas_large_sharing_tree.root.payload * 8),
     puVar11 != (uint *)0x0)) {
    uVar1 = param_1->begin;
    do {
      uVar10 = *(ulonglong *)(puVar11 + 4);
      if (uVar1 < *(ulonglong *)(puVar11 + 6) && uVar10 <= uVar1) {
        uVar2 = param_1->end;
        if (uVar1 <= uVar2) {
          uVar10 = *(ulonglong *)(puVar11 + 4);
          if (uVar2 <= uVar10) goto LAB_140d9048e;
          uVar12 = 0;
          local_48 = 0;
          local_50 = 0;
          uVar18 = 0;
          uVar15 = 0;
          local_58 = 0;
          local_60 = 0;
          goto LAB_140d90294;
        }
        if (uVar2 <= uVar10) goto LAB_140d9048e;
        if (uVar10 <= *(ulonglong *)(puVar11 + 6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        goto LAB_140d904c5;
      }
      if (uVar10 < uVar1) {
        uVar8 = puVar11[1];
      }
      else {
        uVar8 = *puVar11;
      }
    } while ((uVar8 != 0) &&
            (puVar11 = (uint *)((ulonglong)uVar8 * 8 + pas_compact_heap_reservation_base),
            puVar11 != (uint *)0x0));
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_140d90294:
  uVar3 = *(ulonglong *)(puVar11 + 6);
  if (uVar3 < uVar10) {
LAB_140d904c5:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar1 == uVar2) {
LAB_140d902f0:
    uVar17 = 0;
    uVar16 = 0;
  }
  else {
    uVar17 = 0;
    uVar16 = 0;
    if (uVar10 != uVar3) {
      if (uVar3 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar2 <= uVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar3 <= uVar1) goto LAB_140d902f0;
      uVar16 = uVar3;
      if (uVar2 <= uVar3) {
        uVar16 = uVar2;
      }
      uVar17 = uVar10;
      if (uVar10 <= uVar1) {
        uVar17 = uVar1;
      }
      if (uVar16 < uVar17) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
  }
  uVar16 = uVar16 - uVar17;
  if (uVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((puVar11[3] & 2) == 0) {
    local_50 = local_50 + uVar16;
    __return_storage_ptr__->decommitted = local_50;
    uVar10 = *(ulonglong *)(puVar11 + 10);
    if (uVar10 != 0) goto LAB_140d90320;
LAB_140d9038a:
    uVar12 = uVar12 + uVar16;
    __return_storage_ptr__->free = uVar12;
    if ((puVar11[3] & 2) == 0) {
      local_60 = local_60 + uVar16;
      __return_storage_ptr__->free_decommitted = local_60;
    }
    else {
      local_58 = local_58 + uVar16;
      __return_storage_ptr__->free_eligible_for_decommit = local_58;
    }
  }
  else {
    local_48 = local_48 + uVar16;
    __return_storage_ptr__->committed = local_48;
    uVar10 = *(ulonglong *)(puVar11 + 10);
    if (uVar10 == 0) goto LAB_140d9038a;
LAB_140d90320:
    uVar3 = *(ulonglong *)(puVar11 + 4);
    uVar17 = *(ulonglong *)(puVar11 + 6);
    if (uVar17 < uVar3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar13 = (uVar17 - uVar3) - uVar10;
    if (param_2 == pas_large_sharing_pool_compute_summary_known_free) {
      bVar4 = uVar13 < uVar16;
      uVar13 = uVar16;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
LAB_140d903df:
      uVar16 = 0;
    }
    else if (param_2 == pas_large_sharing_pool_compute_summary_known_allocated) {
      if (uVar10 < uVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar13 = 0;
    }
    else {
      if (param_2 != pas_large_sharing_pool_compute_summary_unknown_allocation_state) {
        uVar13 = 0;
        goto LAB_140d903df;
      }
      uVar16 = uVar10;
      if ((uVar3 != uVar17) && ((uVar3 < uVar1 || (uVar2 < uVar17)))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
    }
    uVar18 = uVar18 + uVar16;
    __return_storage_ptr__->allocated = uVar18;
    uVar12 = uVar12 + uVar13;
    __return_storage_ptr__->free = uVar12;
    uVar15 = uVar15 + uVar13;
    __return_storage_ptr__->free_ineligible_for_decommit = uVar15;
  }
  puVar14 = (uint *)((ulonglong)puVar11[1] * 8 + uVar7);
  if (puVar14 == (uint *)0x0 || puVar11[1] == 0) {
    uVar8 = puVar11[2];
    puVar14 = puVar11;
    while( true ) {
      uVar9 = uVar7;
      if ((ulonglong)uVar8 < 8) {
        uVar9 = 0;
      }
      puVar11 = (uint *)(uVar9 + uVar8 & 0xfffffffffffffffe);
      if (puVar11 == (uint *)0x0) goto LAB_140d9048e;
      if (((ulonglong)puVar11[1] == 0) || (puVar14 != (uint *)(uVar7 + (ulonglong)puVar11[1] * 8)))
      break;
      uVar8 = puVar11[2];
      puVar14 = puVar11;
    }
  }
  else {
    do {
      puVar11 = puVar14;
      if ((ulonglong)*puVar11 == 0) break;
      puVar14 = (uint *)(uVar7 + (ulonglong)*puVar11 * 8);
    } while (puVar14 != (uint *)0x0);
  }
  uVar10 = *(ulonglong *)(puVar11 + 4);
  if (uVar2 <= uVar10) {
LAB_140d9048e:
    if (param_3 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    return __return_storage_ptr__;
  }
  goto LAB_140d90294;
}

// pas_large_sharing_pool_for_each @ 140d904d0

bool __cdecl
pas_large_sharing_pool_for_each
          (_func___cdecl_bool_pas_large_sharing_node_ptr_void_ptr *param_1,void *param_2,
          pas_lock_hold_mode param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  bool bVar6;
  pas_large_sharing_node *ppVar7;
  pas_large_sharing_node *ppVar8;
  pas_large_sharing_node *ppVar9;
  ulong64 uVar10;
  
  bVar6 = true;
  if (pas_large_sharing_pool_enabled) {
    if (param_3 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar2 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    ppVar8 = (pas_large_sharing_node *)
             (pas_compact_heap_reservation_base +
             (ulonglong)(uint)pas_large_sharing_tree.root.payload * 8);
    if (ppVar8 == (pas_large_sharing_node *)0x0 ||
        (ulonglong)(uint)pas_large_sharing_tree.root.payload == 0) {
      bVar6 = true;
    }
    else {
      do {
        ppVar7 = ppVar8;
        uVar5 = (ulonglong)(ppVar7->tree_node).left.payload;
        if (uVar5 == 0) break;
        ppVar8 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar5 * 8);
      } while (ppVar8 != (pas_large_sharing_node *)0x0);
      bVar3 = (*param_1)(ppVar7,param_2);
      if (bVar3) {
        do {
          uVar5 = (ulonglong)(ppVar7->tree_node).right.payload;
          ppVar8 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar5 * 8);
          if (ppVar8 == (pas_large_sharing_node *)0x0 || uVar5 == 0) {
            uVar5 = (ulonglong)(ppVar7->tree_node).parent.payload;
            uVar10 = pas_compact_heap_reservation_base;
            if (uVar5 < 8) {
              uVar10 = 0;
            }
            ppVar9 = (pas_large_sharing_node *)(uVar10 + uVar5 & 0xfffffffffffffffe);
            ppVar8 = ppVar7;
            ppVar7 = ppVar9;
            if (ppVar9 == (pas_large_sharing_node *)0x0) {
              bVar6 = true;
              break;
            }
            while ((uVar5 = (ulonglong)(ppVar7->tree_node).right.payload, uVar5 != 0 &&
                   (ppVar8 == (pas_large_sharing_node *)
                              (pas_compact_heap_reservation_base + uVar5 * 8)))) {
              uVar5 = (ulonglong)(ppVar7->tree_node).parent.payload;
              uVar10 = pas_compact_heap_reservation_base;
              if (uVar5 < 8) {
                uVar10 = 0;
              }
              ppVar9 = (pas_large_sharing_node *)(uVar10 + uVar5 & 0xfffffffffffffffe);
              ppVar8 = ppVar7;
              ppVar7 = ppVar9;
              bVar6 = bVar3;
              if (ppVar9 == (pas_large_sharing_node *)0x0) goto joined_r0x000140d90661;
            }
          }
          else {
            do {
              ppVar7 = ppVar8;
              uVar5 = (ulonglong)(ppVar7->tree_node).left.payload;
              if (uVar5 == 0) break;
              ppVar8 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar5 * 8);
            } while (ppVar8 != (pas_large_sharing_node *)0x0);
          }
          bVar4 = (*param_1)(ppVar7,param_2);
          bVar3 = true;
          bVar6 = false;
        } while (bVar4);
      }
      else {
        bVar6 = false;
      }
    }
joined_r0x000140d90661:
    if (param_3 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
  }
  return bVar6;
}

// remove_from_min_heap @ 140d90670

void __cdecl remove_from_min_heap(pas_large_sharing_node *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  pas_large_sharing_node *ppVar4;
  pas_large_sharing_node *ppVar5;
  pas_large_sharing_node *ppVar6;
  ulonglong uVar7;
  bool bVar8;
  code *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong64 uVar13;
  pas_large_sharing_node **pppVar14;
  pas_large_sharing_node *ppVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar13 = pas_large_sharing_min_heap_instance.size;
  puVar1 = &param_1->field_0xc;
  uVar3 = *(undefined4 *)puVar1;
  if (0xf < param_1->index_in_min_heap << 4) {
    uVar10 = ZPULL(uVar3,4,0x1c);
    uVar16 = (ulonglong)uVar10;
    if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar16 - 1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    pppVar14 = pas_large_sharing_min_heap_instance.outline_array + (uVar16 - 5);
    if (param_1->index_in_min_heap << 4 < 0x50) {
      pppVar14 = pas_large_sharing_min_heap_instance.inline_array + (uVar16 - 1);
    }
    if (*pppVar14 != param_1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (pas_large_sharing_min_heap_instance.size < uVar16) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar2 = pas_large_sharing_min_heap_instance.size - 1;
    if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    ppVar4 = *pppVar14;
    pppVar14 = pas_large_sharing_min_heap_instance.outline_array +
               (pas_large_sharing_min_heap_instance.size - 5);
    if (pas_large_sharing_min_heap_instance.size < 5) {
      pppVar14 = pas_large_sharing_min_heap_instance.inline_array +
                 (pas_large_sharing_min_heap_instance.size - 1);
    }
    ppVar5 = *pppVar14;
    *pppVar14 = (pas_large_sharing_node *)0x0;
    if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar16 - 1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    pppVar14 = pas_large_sharing_min_heap_instance.outline_array + (uVar16 - 5);
    if (param_1->index_in_min_heap << 4 < 0x50) {
      pppVar14 = pas_large_sharing_min_heap_instance.inline_array + (uVar16 - 1);
    }
    *pppVar14 = (pas_large_sharing_node *)0x0;
    pas_large_sharing_min_heap_instance.size = uVar2;
    if (uVar13 != uVar16) {
      uVar17 = uVar16;
      if (uVar10 == 1) {
LAB_140d9087e:
        do {
          uVar18 = uVar17 * 2;
          uVar16 = uVar17 * 2 + 1;
          if (uVar18 < uVar2) {
            if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar18) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            pppVar14 = pas_large_sharing_min_heap_instance.outline_array + uVar17 * 2 + -4;
            if (uVar16 < 5) {
              pppVar14 = pas_large_sharing_min_heap_instance.inline_array + uVar17 * 2;
            }
            ppVar15 = *pppVar14;
            bVar8 = ppVar5->use_epoch <= ppVar15->use_epoch;
          }
          else {
            if (uVar2 < uVar18) goto LAB_140d909d5;
            bVar8 = true;
            ppVar15 = (pas_large_sharing_node *)0x0;
          }
          if (uVar18 == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar18 - 1) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          pppVar14 = pas_large_sharing_min_heap_instance.outline_array + (uVar18 - 5);
          if (uVar18 < 5) {
            pppVar14 = pas_large_sharing_min_heap_instance.inline_array + uVar17 * 2 + -1;
          }
          ppVar6 = *pppVar14;
          uVar7 = ppVar6->use_epoch;
          if (bVar8) {
            if (ppVar5->use_epoch <= uVar7) goto LAB_140d909d5;
LAB_140d90990:
            ppVar6->index_in_min_heap = uVar17;
            if (0xfffffff < uVar17) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            ppVar15 = ppVar6;
            uVar16 = uVar18;
            if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar17 - 1) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
          }
          else {
            if ((uVar7 < ppVar5->use_epoch) && (uVar7 <= ppVar15->use_epoch)) goto LAB_140d90990;
            ppVar15->index_in_min_heap = uVar17;
            if (0xfffffff < uVar17) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar17 - 1) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
          }
          pppVar14 = pas_large_sharing_min_heap_instance.outline_array + (uVar17 - 5);
          if (uVar17 < 5) {
            pppVar14 = pas_large_sharing_min_heap_instance.inline_array + (uVar17 - 1);
          }
          *pppVar14 = ppVar15;
          uVar17 = uVar16;
        } while( true );
      }
      uVar18 = (ulonglong)((uint)uVar3 >> 5);
      if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar18 - 1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pppVar14 = pas_large_sharing_min_heap_instance.outline_array + (uVar18 - 5);
      if (param_1->index_in_min_heap << 4 < 0xa0) {
        pppVar14 = pas_large_sharing_min_heap_instance.inline_array + (uVar18 - 1);
      }
      ppVar15 = *pppVar14;
      if (ppVar15->use_epoch <= ppVar5->use_epoch) goto LAB_140d9087e;
      do {
        uVar17 = uVar18;
        ppVar15->index_in_min_heap = uVar16;
        if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar16 - 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        pppVar14 = pas_large_sharing_min_heap_instance.outline_array + (uVar16 - 5);
        if (uVar16 < 5) {
          pppVar14 = pas_large_sharing_min_heap_instance.inline_array + (uVar16 - 1);
        }
        *pppVar14 = ppVar15;
        if (uVar17 == 1) {
          uVar17 = 1;
          break;
        }
        uVar18 = uVar17 >> 1;
        if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar18 - 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        pppVar14 = pas_large_sharing_min_heap_instance.outline_array + (uVar18 - 5);
        if (uVar17 < 10) {
          pppVar14 = pas_large_sharing_min_heap_instance.inline_array + (uVar18 - 1);
        }
        ppVar15 = *pppVar14;
        uVar16 = uVar17;
      } while (ppVar5->use_epoch < ppVar15->use_epoch);
LAB_140d909d5:
      if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar17 - 1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      pppVar14 = pas_large_sharing_min_heap_instance.outline_array + (uVar17 - 5);
      if (uVar17 < 5) {
        pppVar14 = pas_large_sharing_min_heap_instance.inline_array + (uVar17 - 1);
      }
      *pppVar14 = ppVar5;
      ppVar5->index_in_min_heap = uVar17;
      if (0xfffffff < uVar17) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
    uVar13 = pas_large_sharing_min_heap_instance.size;
    ppVar4->index_in_min_heap = 0;
    if (uVar13 != 0) {
      if (pas_large_sharing_min_heap_instance.outline_capacity == 0xfffffffffffffffc) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (pas_large_sharing_min_heap_instance.inline_array[0] != (pas_large_sharing_node *)0x0 &&
          pas_large_sharing_pool_epoch_update_mode_setting ==
          pas_large_sharing_pool_forward_min_epoch) {
        pas_large_sharing_participant_payload.use_epoch =
             pas_large_sharing_min_heap_instance.inline_array[0]->use_epoch;
      }
    }
    if (pas_large_sharing_pool_validate_each_splat == true) {
      validate_min_heap();
      return;
    }
  }
  return;
}

// splat_live_bytes @ 140d90ad0

void __cdecl splat_live_bytes(pas_large_sharing_node *param_1,ulong64 param_2,pas_free_mode param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  
  uVar3 = param_1->num_live_bytes;
  if (param_3 == pas_free) {
    param_1->num_live_bytes = uVar3 - param_2;
    if (uVar3 < param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    param_1->num_live_bytes = uVar3 + param_2;
    if (CARRY8(uVar3,param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar2 = (param_1->range).end;
    if (uVar2 < (param_1->range).begin) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar2 - (param_1->range).begin < uVar3 + param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  if (pas_large_sharing_pool_aggressive_asserts != true) {
    return;
  }
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar3 = (param_1->range).begin;
  uVar2 = (param_1->range).end;
  if (uVar2 <= uVar3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar2 - uVar3 < param_1->num_live_bytes) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar3 & uVar1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar1 & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_1->num_live_bytes != 0) {
    if (pas_page_malloc_cached_alignment == 0) {
      pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
    }
    if (uVar2 - uVar3 != pas_page_malloc_cached_alignment) {
      uVar3 = (param_1->range).end;
      if (uVar3 < (param_1->range).begin) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (param_1->num_live_bytes != uVar3 - (param_1->range).begin) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
  }
  return;
}

// update_min_heap @ 140d90b20

void __cdecl update_min_heap(pas_large_sharing_node *param_1)

{
  pas_large_sharing_node *ppVar1;
  bool bVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  pas_large_sharing_node **pppVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  pas_large_sharing_node **pppVar9;
  
  uVar5 = pas_large_sharing_min_heap_instance.outline_capacity;
  uVar4 = pas_large_sharing_min_heap_instance.size;
  if (0xf < param_1->index_in_min_heap << 4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((param_1->is_committed != 0) && (param_1->num_live_bytes == 0)) {
    uVar7 = pas_large_sharing_min_heap_instance.outline_capacity + 4;
    if (uVar7 <= pas_large_sharing_min_heap_instance.size) {
      if (pas_large_sharing_min_heap_instance.size != uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar8 = 4;
      if (4 < pas_large_sharing_min_heap_instance.outline_capacity * 2) {
        uVar8 = pas_large_sharing_min_heap_instance.outline_capacity * 2;
      }
      if (uVar8 <= pas_large_sharing_min_heap_instance.outline_capacity) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pppVar6 = pas_bootstrap_free_heap_allocate_simple_for_config
                          (uVar8 * 8,"pas_large_sharing_min_heap/outline_array",
                           pas_object_allocation,(void *)0x0);
      uVar7 = uVar8 + 4;
      if (uVar7 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memset(pppVar6,0,uVar8 * 8);
      pppVar9 = (pas_large_sharing_node **)0x0;
      if (pas_large_sharing_min_heap_instance.outline_array != (pas_large_sharing_node **)0x0) {
        memcpy(pppVar6,pas_large_sharing_min_heap_instance.outline_array,uVar4 * 8 - 0x20);
        pppVar9 = pas_large_sharing_min_heap_instance.outline_array;
      }
      pas_bootstrap_free_heap_deallocate_for_config
                (pppVar9,uVar5 << 3,pas_object_allocation,(void *)0x0);
      pas_large_sharing_min_heap_instance.outline_array = pppVar6;
      pas_large_sharing_min_heap_instance.outline_capacity = uVar8;
    }
    if (uVar7 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pas_large_sharing_min_heap_instance.size = uVar4 + 1;
    pppVar6 = pas_large_sharing_min_heap_instance.outline_array + (uVar4 - 4);
    if (uVar4 < 4) {
      pppVar6 = pas_large_sharing_min_heap_instance.inline_array + uVar4;
    }
    *pppVar6 = (pas_large_sharing_node *)0x0;
    uVar7 = pas_large_sharing_min_heap_instance.size;
    if (uVar4 == 0) {
      uVar7 = 1;
    }
    else {
      do {
        uVar8 = uVar7 >> 1;
        if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar8 - 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pppVar6 = pas_large_sharing_min_heap_instance.outline_array + (uVar8 - 5);
        if (uVar7 < 10) {
          pppVar6 = pas_large_sharing_min_heap_instance.inline_array + (uVar8 - 1);
        }
        ppVar1 = *pppVar6;
        if (ppVar1->use_epoch <= param_1->use_epoch) {
          param_1->index_in_min_heap = uVar7;
          if (0xfffffff < uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          goto LAB_140d90d4a;
        }
        ppVar1->index_in_min_heap = uVar7;
        if (0xfffffff < uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar7 - 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pppVar6 = pas_large_sharing_min_heap_instance.outline_array + (uVar7 - 5);
        if (uVar7 < 5) {
          pppVar6 = pas_large_sharing_min_heap_instance.inline_array + (uVar7 - 1);
        }
        *pppVar6 = ppVar1;
        bVar2 = 3 < uVar7;
        uVar7 = uVar8;
      } while (bVar2);
    }
    param_1->index_in_min_heap = uVar7;
LAB_140d90d4a:
    if (pas_large_sharing_min_heap_instance.outline_capacity + 4 <= uVar7 - 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pppVar6 = pas_large_sharing_min_heap_instance.outline_array + (uVar7 - 5);
    if (uVar7 < 5) {
      pppVar6 = pas_large_sharing_min_heap_instance.inline_array + (uVar7 - 1);
    }
    *pppVar6 = param_1;
    if (pas_large_sharing_min_heap_instance.size != 0) {
      if (pas_large_sharing_min_heap_instance.outline_capacity == 0xfffffffffffffffc) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (pas_large_sharing_min_heap_instance.inline_array[0] != (pas_large_sharing_node *)0x0 &&
          pas_large_sharing_pool_epoch_update_mode_setting ==
          pas_large_sharing_pool_forward_min_epoch) {
        pas_large_sharing_participant_payload.use_epoch =
             pas_large_sharing_min_heap_instance.inline_array[0]->use_epoch;
      }
    }
    if (pas_large_sharing_pool_validate_each_splat == true) {
      validate_min_heap();
      return;
    }
  }
  return;
}

// split_node_and_get_right @ 140d90e10

pas_large_sharing_node * __cdecl
split_node_and_get_right(pas_large_sharing_node *param_1,ulong64 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  pas_large_sharing_node *ppVar10;
  pas_large_sharing_node *ppVar11;
  pas_large_sharing_node *ppVar12;
  ulong64 uVar13;
  
  uVar9 = (param_1->range).begin;
  if (uVar9 < param_2) {
    uVar9 = (param_1->range).end;
    if (param_2 < uVar9) {
      if (pas_page_malloc_cached_alignment == 0) {
        pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
      }
      uVar9 = pas_page_malloc_cached_alignment - 1;
      if ((pas_page_malloc_cached_alignment ^ uVar9) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar9 & param_2) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (pas_large_sharing_pool_aggressive_asserts == true) {
        validate_node(param_1);
      }
      remove_from_min_heap(param_1);
      uVar9 = (param_1->range).end;
      uVar13 = uVar9 - param_2;
      if (param_1->num_live_bytes == 0) {
        uVar13 = 0;
      }
      if (uVar9 < param_2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar1 = &param_1->field_0xc;
      uVar2 = *(undefined4 *)puVar1;
      uVar4 = (param_1->range).end;
      uVar5 = param_1->use_epoch;
      ppVar10 = pas_utility_heap_allocate(0x30,"pas_large_sharing_node");
      (ppVar10->tree_node).left = 0;
      (ppVar10->tree_node).right = 0;
      *(undefined8 *)&(ppVar10->tree_node).parent = 0;
      (ppVar10->range).begin = 0;
      (ppVar10->range).end = 0;
      ppVar10->use_epoch = 0;
      ppVar10->num_live_bytes = 0;
      if (ZPULL(uVar2,0,1) == 0) {
        if (param_1->is_committed == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar9 - param_2 != uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (param_1->synchronization_style == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (param_1->mmap_capability == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      (ppVar10->range).begin = param_2;
      (ppVar10->range).end = uVar4;
      ppVar10->use_epoch = uVar5;
      ppVar10->num_live_bytes = uVar13;
      *(uint *)&ppVar10->field_0xc = uVar2 & 0xf;
      if (pas_large_sharing_pool_aggressive_asserts == true) {
        validate_node(ppVar10);
      }
      pas_red_black_tree_insert
                (&pas_large_sharing_tree,&ppVar10->tree_node,node_compare_callback,
                 &pas_large_sharing_tree_jettisoned_nodes);
      (param_1->range).end = param_2;
      if (param_1->num_live_bytes == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = param_2 - (param_1->range).begin;
      }
      param_1->num_live_bytes = uVar13;
      update_min_heap(param_1);
      update_min_heap(ppVar10);
      if (pas_large_sharing_pool_aggressive_asserts == true) {
        validate_node(param_1);
      }
      if (pas_large_sharing_pool_aggressive_asserts != false) {
        validate_node(ppVar10);
      }
      return ppVar10;
    }
    if (uVar9 != param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar9 = (ulonglong)(param_1->tree_node).right.payload;
    ppVar11 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar9 * 8);
    if (ppVar11 == (pas_large_sharing_node *)0x0 || uVar9 == 0) {
      uVar9 = (ulonglong)(param_1->tree_node).parent.payload;
      ppVar10 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
      if (uVar9 < 8) {
        ppVar10 = (pas_large_sharing_node *)0x0;
      }
      ppVar11 = (pas_large_sharing_node *)
                ((longlong)&(ppVar10->tree_node).left.payload + uVar9 & 0xfffffffffffffffe);
      ppVar10 = (pas_large_sharing_node *)0x0;
      if (ppVar11 != (pas_large_sharing_node *)0x0) {
        ppVar10 = (pas_large_sharing_node *)0x0;
        do {
          uVar9 = (ulonglong)(ppVar11->tree_node).right.payload;
          ppVar12 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar9 * 8);
          if (uVar9 == 0) {
            ppVar12 = (pas_large_sharing_node *)0x0;
          }
          if (param_1 != ppVar12) {
            return ppVar11;
          }
          uVar9 = (ulonglong)(ppVar11->tree_node).parent.payload;
          ppVar12 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
          if (uVar9 < 8) {
            ppVar12 = ppVar10;
          }
          ppVar12 = (pas_large_sharing_node *)
                    ((longlong)&(ppVar12->tree_node).left.payload + uVar9 & 0xfffffffffffffffe);
          param_1 = ppVar11;
          ppVar11 = ppVar12;
        } while (ppVar12 != (pas_large_sharing_node *)0x0);
      }
    }
    else {
      do {
        ppVar10 = ppVar11;
        uVar9 = (ulonglong)(ppVar10->tree_node).left.payload;
        if (uVar9 == 0) {
          return ppVar10;
        }
        ppVar11 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar9 * 8);
      } while (ppVar11 != (pas_large_sharing_node *)0x0);
    }
  }
  else {
    ppVar10 = param_1;
    if (uVar9 != param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  return ppVar10;
}

// split_node_and_get_left @ 140d90ee0

pas_large_sharing_node * __cdecl
split_node_and_get_left(pas_large_sharing_node *param_1,ulong64 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  pas_large_sharing_node *ppVar3;
  pas_large_sharing_node *ppVar4;
  ulong64 uVar5;
  pas_large_sharing_node *ppVar6;
  
  uVar2 = (param_1->range).begin;
  if (uVar2 < param_2) {
    uVar2 = (param_1->range).end;
    ppVar3 = param_1;
    if (param_2 < uVar2) {
      split_node_and_get_right_impl(param_1,param_2);
    }
    else if (uVar2 != param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    if (uVar2 != param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = (ulonglong)(param_1->tree_node).left.payload;
    ppVar4 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar2 * 8);
    if (ppVar4 == (pas_large_sharing_node *)0x0 || uVar2 == 0) {
      uVar2 = (ulonglong)(param_1->tree_node).parent.payload;
      ppVar3 = (pas_large_sharing_node *)0x0;
      ppVar4 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
      if (uVar2 < 8) {
        ppVar4 = ppVar3;
      }
      ppVar4 = (pas_large_sharing_node *)
               ((longlong)&(ppVar4->tree_node).left.payload + uVar2 & 0xfffffffffffffffe);
      if (ppVar4 != (pas_large_sharing_node *)0x0) {
        do {
          uVar2 = (ulonglong)(ppVar4->tree_node).left.payload;
          if (uVar2 == 0) {
            return ppVar4;
          }
          if (param_1 != (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar2 * 8))
          {
            return ppVar4;
          }
          uVar2 = (ulonglong)(ppVar4->tree_node).parent.payload;
          uVar5 = pas_compact_heap_reservation_base;
          if (uVar2 < 8) {
            uVar5 = 0;
          }
          ppVar3 = (pas_large_sharing_node *)0x0;
          ppVar6 = (pas_large_sharing_node *)(uVar5 + uVar2 & 0xfffffffffffffffe);
          param_1 = ppVar4;
          ppVar4 = ppVar6;
        } while (ppVar6 != (pas_large_sharing_node *)0x0);
      }
    }
    else {
      do {
        ppVar3 = ppVar4;
        uVar2 = (ulonglong)(ppVar3->tree_node).right.payload;
        if (uVar2 == 0) {
          return ppVar3;
        }
        ppVar4 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar2 * 8);
      } while (ppVar4 != (pas_large_sharing_node *)0x0);
    }
  }
  return ppVar3;
}

// validate_min_heap @ 140d90fd0

void __cdecl validate_min_heap(void)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  pas_large_sharing_node **pppVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  
  if (pas_large_sharing_min_heap_instance.size == 0) {
    return;
  }
  uVar3 = 1;
  do {
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((-4 - pas_large_sharing_min_heap_instance.outline_capacity) + uVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 <= pas_large_sharing_min_heap_instance.size);
  if (pas_large_sharing_min_heap_instance.size == 0) {
    return;
  }
  if (pas_large_sharing_min_heap_instance.outline_capacity == 0xfffffffffffffffc) {
LAB_140d91326:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_large_sharing_min_heap_instance.inline_array[0]->index_in_min_heap != 1) {
LAB_140d91328:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_large_sharing_min_heap_instance.size == 1) {
    return;
  }
  uVar3 = pas_large_sharing_min_heap_instance.outline_capacity + 4;
  if (uVar3 < 2) {
LAB_140d9132c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (pas_large_sharing_min_heap_instance.inline_array[0]->use_epoch <=
      pas_large_sharing_min_heap_instance.inline_array[1]->use_epoch) {
    if (2 < pas_large_sharing_min_heap_instance.size) {
      if (uVar3 == 2) goto LAB_140d9132e;
      if (pas_large_sharing_min_heap_instance.inline_array[2]->use_epoch <
          pas_large_sharing_min_heap_instance.inline_array[0]->use_epoch) goto LAB_140d91320;
    }
    if (pas_large_sharing_min_heap_instance.outline_capacity == 0xfffffffffffffffd)
    goto LAB_140d91326;
    if (pas_large_sharing_min_heap_instance.inline_array[1]->index_in_min_heap != 2)
    goto LAB_140d91328;
    if (pas_large_sharing_min_heap_instance.inline_array[1]->use_epoch <
        pas_large_sharing_min_heap_instance.inline_array[0]->use_epoch) goto LAB_140d91320;
    if (pas_large_sharing_min_heap_instance.size < 4) {
      if (pas_large_sharing_min_heap_instance.size == 2) {
        return;
      }
      if (pas_large_sharing_min_heap_instance.outline_capacity == 0xfffffffffffffffe)
      goto LAB_140d91326;
    }
    else {
      if (0xfffffffffffffffb < pas_large_sharing_min_heap_instance.outline_capacity)
      goto LAB_140d9132c;
      if (pas_large_sharing_min_heap_instance.inline_array[3]->use_epoch <
          pas_large_sharing_min_heap_instance.inline_array[1]->use_epoch) goto LAB_140d91320;
      if (pas_large_sharing_min_heap_instance.size != 4) {
        if (uVar3 < 5) goto LAB_140d9132e;
        if ((*pas_large_sharing_min_heap_instance.outline_array)->use_epoch <
            pas_large_sharing_min_heap_instance.inline_array[1]->use_epoch) goto LAB_140d91320;
      }
    }
    if (pas_large_sharing_min_heap_instance.inline_array[2]->index_in_min_heap != 3)
    goto LAB_140d91328;
    if (pas_large_sharing_min_heap_instance.inline_array[2]->use_epoch <
        pas_large_sharing_min_heap_instance.inline_array[0]->use_epoch) goto LAB_140d91320;
    if (pas_large_sharing_min_heap_instance.size < 6) {
      if (pas_large_sharing_min_heap_instance.size == 3) {
        return;
      }
    }
    else {
      if (uVar3 < 6) goto LAB_140d9132c;
      if (pas_large_sharing_min_heap_instance.outline_array[1]->use_epoch <
          pas_large_sharing_min_heap_instance.inline_array[2]->use_epoch) goto LAB_140d91320;
      if (pas_large_sharing_min_heap_instance.size != 6) {
        if (uVar3 == 6) goto LAB_140d9132e;
        if (pas_large_sharing_min_heap_instance.outline_array[2]->use_epoch <
            pas_large_sharing_min_heap_instance.inline_array[2]->use_epoch) goto LAB_140d91320;
      }
    }
    if (pas_large_sharing_min_heap_instance.outline_capacity == 0xffffffffffffffff)
    goto LAB_140d91326;
    if (pas_large_sharing_min_heap_instance.inline_array[3]->index_in_min_heap != 4)
    goto LAB_140d91328;
    if (pas_large_sharing_min_heap_instance.inline_array[1]->use_epoch <=
        pas_large_sharing_min_heap_instance.inline_array[3]->use_epoch) {
      if (pas_large_sharing_min_heap_instance.size < 8) {
        if (pas_large_sharing_min_heap_instance.size == 4) {
          return;
        }
      }
      else {
        if (uVar3 < 8) goto LAB_140d9132c;
        if (pas_large_sharing_min_heap_instance.outline_array[3]->use_epoch <
            pas_large_sharing_min_heap_instance.inline_array[3]->use_epoch) goto LAB_140d91320;
        if (pas_large_sharing_min_heap_instance.size != 8) {
          if (uVar3 == 8) {
LAB_140d9132e:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (pas_large_sharing_min_heap_instance.outline_array[4]->use_epoch <
              pas_large_sharing_min_heap_instance.inline_array[3]->use_epoch) goto LAB_140d91320;
        }
      }
      uVar4 = 0xb;
      lVar5 = 0x30;
      uVar6 = 5;
      while (uVar6 - pas_large_sharing_min_heap_instance.outline_capacity != 5) {
        lVar1 = *(longlong *)
                 ((longlong)pas_large_sharing_min_heap_instance.outline_array + uVar4 * 4 + -0x2c);
        if (uVar6 != *(uint *)(lVar1 + 0xc) >> 4) goto LAB_140d91328;
        uVar9 = uVar6 >> 1;
        if (uVar3 <= uVar9 - 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pppVar7 = pas_large_sharing_min_heap_instance.outline_array + (uVar9 - 5);
        if (uVar6 < 10) {
          pppVar7 = pas_large_sharing_min_heap_instance.inline_array + (uVar9 - 1);
        }
        if (*(ulonglong *)(lVar1 + 0x20) < (*pppVar7)->use_epoch) goto LAB_140d91320;
        uVar9 = uVar4 - 1;
        if (uVar9 <= pas_large_sharing_min_heap_instance.size) {
          if (uVar3 <= uVar4 - 2) goto LAB_140d9132c;
          if (pas_large_sharing_min_heap_instance.outline_array[uVar4 - 6]->use_epoch <
              *(ulonglong *)(lVar1 + 0x20)) goto LAB_140d91320;
        }
        if (uVar9 < pas_large_sharing_min_heap_instance.size) {
          if (uVar3 <= uVar9) goto LAB_140d9132e;
          plVar8 = (longlong *)
                   ((longlong)pas_large_sharing_min_heap_instance.inline_array + lVar5 + 0x20);
          if (4 < uVar4) {
            plVar8 = (longlong *)
                     ((longlong)pas_large_sharing_min_heap_instance.outline_array + lVar5);
          }
          if (*(ulonglong *)(*plVar8 + 0x20) < *(ulonglong *)(lVar1 + 0x20)) goto LAB_140d91320;
        }
        uVar4 = uVar4 + 2;
        lVar5 = lVar5 + 0x10;
        bVar10 = uVar6 == pas_large_sharing_min_heap_instance.size;
        uVar6 = uVar6 + 1;
        if (bVar10) {
          return;
        }
      }
      goto LAB_140d91326;
    }
  }
LAB_140d91320:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// merge_if_possible @ 140d91340

pas_large_sharing_node * __cdecl merge_if_possible(pas_large_sharing_node *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  pas_large_sharing_node *ppVar4;
  pas_large_sharing_node *ppVar5;
  ulong64 uVar6;
  pas_large_sharing_node *ppVar7;
  pas_large_sharing_node *ppVar8;
  pas_large_sharing_node *ppVar9;
  ulong64 uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar3 = (ulonglong)(param_1->tree_node).left.payload;
  ppVar4 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar3 * 8);
  if (ppVar4 == (pas_large_sharing_node *)0x0 || uVar3 == 0) {
    uVar3 = (ulonglong)(param_1->tree_node).parent.payload;
    ppVar4 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
    if (uVar3 < 8) {
      ppVar4 = (pas_large_sharing_node *)0x0;
    }
    ppVar4 = (pas_large_sharing_node *)
             ((longlong)&(ppVar4->tree_node).left.payload + uVar3 & 0xfffffffffffffffe);
    ppVar7 = (pas_large_sharing_node *)0x0;
    if (ppVar4 != (pas_large_sharing_node *)0x0) {
      ppVar8 = param_1;
      do {
        ppVar9 = ppVar4;
        uVar3 = (ulonglong)(ppVar9->tree_node).left.payload;
        ppVar7 = ppVar9;
        if ((uVar3 == 0) ||
           (ppVar8 != (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar3 * 8)))
        break;
        uVar3 = (ulonglong)(ppVar9->tree_node).parent.payload;
        uVar10 = pas_compact_heap_reservation_base;
        if (uVar3 < 8) {
          uVar10 = 0;
        }
        ppVar7 = (pas_large_sharing_node *)0x0;
        ppVar4 = (pas_large_sharing_node *)(uVar10 + uVar3 & 0xfffffffffffffffe);
        ppVar8 = ppVar9;
      } while (ppVar4 != (pas_large_sharing_node *)0x0);
    }
  }
  else {
    do {
      ppVar7 = ppVar4;
      uVar3 = (ulonglong)(ppVar7->tree_node).right.payload;
      if (uVar3 == 0) break;
      ppVar4 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar3 * 8);
    } while (ppVar4 != (pas_large_sharing_node *)0x0);
  }
  uVar1 = (param_1->tree_node).right.payload;
  ppVar4 = (pas_large_sharing_node *)((ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base);
  if (ppVar4 == (pas_large_sharing_node *)0x0 || uVar1 == 0) {
    uVar3 = (ulonglong)(param_1->tree_node).parent.payload;
    ppVar4 = (pas_large_sharing_node *)pas_compact_heap_reservation_base;
    if (uVar3 < 8) {
      ppVar4 = (pas_large_sharing_node *)0x0;
    }
    ppVar4 = (pas_large_sharing_node *)
             ((longlong)&(ppVar4->tree_node).left.payload + uVar3 & 0xfffffffffffffffe);
    ppVar8 = (pas_large_sharing_node *)0x0;
    if (ppVar4 != (pas_large_sharing_node *)0x0) {
      ppVar9 = param_1;
      do {
        ppVar5 = ppVar4;
        uVar3 = (ulonglong)(ppVar5->tree_node).right.payload;
        ppVar8 = ppVar5;
        if ((uVar3 == 0) ||
           (ppVar9 != (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar3 * 8)))
        break;
        uVar3 = (ulonglong)(ppVar5->tree_node).parent.payload;
        uVar10 = pas_compact_heap_reservation_base;
        if (uVar3 < 8) {
          uVar10 = 0;
        }
        ppVar8 = (pas_large_sharing_node *)0x0;
        ppVar4 = (pas_large_sharing_node *)(uVar10 + uVar3 & 0xfffffffffffffffe);
        ppVar9 = ppVar5;
      } while (ppVar4 != (pas_large_sharing_node *)0x0);
    }
  }
  else {
    do {
      ppVar8 = ppVar4;
      uVar3 = (ulonglong)(ppVar8->tree_node).left.payload;
      if (uVar3 == 0) break;
      ppVar4 = (pas_large_sharing_node *)(pas_compact_heap_reservation_base + uVar3 * 8);
    } while (ppVar4 != (pas_large_sharing_node *)0x0);
  }
  if (ppVar7 != (pas_large_sharing_node *)0x0) {
    uVar3 = (ppVar7->range).end;
    if (uVar3 <= (ppVar7->range).begin) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar3 != (param_1->range).begin) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  if (ppVar8 != (pas_large_sharing_node *)0x0) {
    uVar3 = (ppVar8->range).begin;
    if ((ppVar8->range).end <= uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar3 != (param_1->range).end) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  if ((ppVar7 != (pas_large_sharing_node *)0x0) &&
     (((*(uint *)&ppVar7->field_0xc ^ *(undefined4 *)&param_1->field_0xc) & 0xf) == 0)) {
    if (param_1->num_live_bytes == 0) {
      bVar12 = ppVar7->num_live_bytes == 0;
      uVar3 = (param_1->range).end;
      uVar10 = uVar3 - (param_1->range).begin;
      if (uVar3 < (param_1->range).begin) goto LAB_140d91736;
    }
    else {
      bVar12 = false;
      uVar3 = (param_1->range).end;
      uVar10 = uVar3 - (param_1->range).begin;
      if (uVar3 < (param_1->range).begin) {
LAB_140d91736:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if (uVar10 == param_1->num_live_bytes) {
      uVar3 = (ppVar7->range).end;
      if (uVar3 < (ppVar7->range).begin) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar11 = uVar3 - (ppVar7->range).begin == ppVar7->num_live_bytes;
      if (bVar12 || bVar11) {
LAB_140d91527:
        if (((bool)(ZPULL(*(undefined4 *)&param_1->field_0xc,1,1) == 0 | bVar11)) ||
           (param_1->use_epoch == ppVar7->use_epoch)) {
          remove_from_min_heap(ppVar7);
          remove_from_min_heap(param_1);
          uVar10 = ppVar7->num_live_bytes;
          if (uVar10 != 0) {
            uVar3 = (ppVar7->range).end;
            if (uVar3 < (ppVar7->range).begin) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar3 - (ppVar7->range).begin != uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar3 = (param_1->range).end;
            uVar6 = uVar3 - (param_1->range).begin;
            if (uVar3 < (param_1->range).begin) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar6 != param_1->num_live_bytes) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            param_1->num_live_bytes = uVar6 + uVar10;
          }
          (param_1->range).begin = (ppVar7->range).begin;
          uVar3 = ppVar7->use_epoch;
          if (ppVar7->use_epoch < param_1->use_epoch) {
            uVar3 = param_1->use_epoch;
          }
          param_1->use_epoch = uVar3;
          remove_from_min_heap(ppVar7);
          pas_red_black_tree_remove
                    (&pas_large_sharing_tree,&ppVar7->tree_node,
                     &pas_large_sharing_tree_jettisoned_nodes);
          pas_utility_heap_deallocate(ppVar7);
          update_min_heap(param_1);
          if (pas_large_sharing_pool_aggressive_asserts == true) {
            validate_node(param_1);
          }
        }
      }
    }
    else {
      bVar11 = false;
      if (bVar12) goto LAB_140d91527;
    }
  }
  if ((ppVar8 != (pas_large_sharing_node *)0x0) &&
     (((*(uint *)&ppVar8->field_0xc ^ *(undefined4 *)&param_1->field_0xc) & 0xf) == 0)) {
    if (param_1->num_live_bytes == 0) {
      bVar12 = ppVar8->num_live_bytes == 0;
      uVar3 = (param_1->range).end;
      uVar10 = uVar3 - (param_1->range).begin;
      if (uVar3 < (param_1->range).begin) goto LAB_140d9174e;
    }
    else {
      bVar12 = false;
      uVar3 = (param_1->range).end;
      uVar10 = uVar3 - (param_1->range).begin;
      if (uVar3 < (param_1->range).begin) {
LAB_140d9174e:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if (uVar10 == param_1->num_live_bytes) {
      uVar3 = (ppVar8->range).end;
      if (uVar3 < (ppVar8->range).begin) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar11 = uVar3 - (ppVar8->range).begin == ppVar8->num_live_bytes;
      if (!bVar12 && !bVar11) {
        return ppVar8;
      }
    }
    else {
      bVar11 = false;
      if (!bVar12) {
        return ppVar8;
      }
    }
    if (((bool)(ZPULL(*(undefined4 *)&param_1->field_0xc,1,1) == 0 | bVar11)) ||
       (param_1->use_epoch == ppVar8->use_epoch)) {
      remove_from_min_heap(param_1);
      remove_from_min_heap(ppVar8);
      uVar10 = ppVar8->num_live_bytes;
      if (uVar10 != 0) {
        uVar3 = (ppVar8->range).end;
        if (uVar3 < (ppVar8->range).begin) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar3 - (ppVar8->range).begin != uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar3 = (param_1->range).end;
        uVar6 = uVar3 - (param_1->range).begin;
        if (uVar3 < (param_1->range).begin) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar6 != param_1->num_live_bytes) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        ppVar8->num_live_bytes = uVar6 + uVar10;
      }
      (ppVar8->range).begin = (param_1->range).begin;
      uVar3 = ppVar8->use_epoch;
      if (ppVar8->use_epoch < param_1->use_epoch) {
        uVar3 = param_1->use_epoch;
      }
      ppVar8->use_epoch = uVar3;
      remove_from_min_heap(param_1);
      pas_red_black_tree_remove
                (&pas_large_sharing_tree,&param_1->tree_node,
                 &pas_large_sharing_tree_jettisoned_nodes);
      pas_utility_heap_deallocate(param_1);
      update_min_heap(ppVar8);
      if (pas_large_sharing_pool_aggressive_asserts == true) {
        validate_node(ppVar8);
      }
    }
  }
  return ppVar8;
}

// node_compare_callback @ 140d91790

int __cdecl node_compare_callback(pas_red_black_tree_node *param_1,pas_red_black_tree_node *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1._0_4_ = param_1[1].right;
  uVar1._4_4_ = param_1[1].parent;
  uVar2._0_4_ = param_2[1].right;
  uVar2._4_4_ = param_2[1].parent;
  uVar3 = 0xffffffff;
  if (uVar2 <= uVar1) {
    uVar3 = (uint)(uVar1 != uVar2);
  }
  return uVar3;
}

// split_node_and_get_right_impl @ 140d917b0

pas_large_sharing_node * __cdecl
split_node_and_get_right_impl(pas_large_sharing_node *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  pas_large_sharing_node *ppVar10;
  ulong64 uVar11;
  
  if (pas_page_malloc_cached_alignment == 0) {
    pas_page_malloc_cached_alignment = pas_page_malloc_alignment_slow();
  }
  uVar1 = pas_page_malloc_cached_alignment - 1;
  if ((pas_page_malloc_cached_alignment ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar1 & param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (pas_large_sharing_pool_aggressive_asserts == true) {
    validate_node(param_1);
  }
  remove_from_min_heap(param_1);
  uVar1 = (param_1->range).end;
  uVar11 = uVar1 - param_2;
  if (param_1->num_live_bytes == 0) {
    uVar11 = 0;
  }
  if (uVar1 < param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  puVar2 = &param_1->field_0xc;
  uVar3 = *(undefined4 *)puVar2;
  uVar5 = (param_1->range).end;
  uVar6 = param_1->use_epoch;
  ppVar10 = pas_utility_heap_allocate(0x30,"pas_large_sharing_node");
  (ppVar10->tree_node).left = 0;
  (ppVar10->tree_node).right = 0;
  *(undefined8 *)&(ppVar10->tree_node).parent = 0;
  (ppVar10->range).begin = 0;
  (ppVar10->range).end = 0;
  ppVar10->use_epoch = 0;
  ppVar10->num_live_bytes = 0;
  if (ZPULL(uVar3,0,1) == 0) {
    if (param_1->is_committed == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar1 - param_2 != uVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (param_1->synchronization_style == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (param_1->mmap_capability == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  (ppVar10->range).begin = param_2;
  (ppVar10->range).end = uVar5;
  ppVar10->use_epoch = uVar6;
  ppVar10->num_live_bytes = uVar11;
  *(uint *)&ppVar10->field_0xc = uVar3 & 0xf;
  if (pas_large_sharing_pool_aggressive_asserts == true) {
    validate_node(ppVar10);
  }
  pas_red_black_tree_insert
            (&pas_large_sharing_tree,&ppVar10->tree_node,node_compare_callback,
             &pas_large_sharing_tree_jettisoned_nodes);
  (param_1->range).end = param_2;
  if (param_1->num_live_bytes == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = param_2 - (param_1->range).begin;
  }
  param_1->num_live_bytes = uVar11;
  update_min_heap(param_1);
  update_min_heap(ppVar10);
  if (pas_large_sharing_pool_aggressive_asserts == true) {
    validate_node(param_1);
  }
  if (pas_large_sharing_pool_aggressive_asserts != false) {
    validate_node(ppVar10);
  }
  return ppVar10;
}

