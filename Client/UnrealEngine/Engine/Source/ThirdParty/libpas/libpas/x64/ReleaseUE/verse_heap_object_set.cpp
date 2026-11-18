// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 7

// verse_heap_object_set_create @ 140da8dd0

verse_heap_object_set * __cdecl verse_heap_object_set_create(void)

{
  code *pcVar1;
  verse_heap_object_set *pvVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (verse_heap_is_ready_for_allocation != true) {
    pvVar2 = pas_immortal_heap_allocate(0x28,"verse_heap_object_set",pas_object_allocation);
    pvVar2->large_entries = (verse_heap_compact_large_entry_ptr *)0x0;
    pvVar2->num_large_entries = 0;
    pvVar2->large_entries_capacity = 0;
    (pvVar2->views).spine = 0;
    (pvVar2->views).size = 0;
    *(undefined8 *)&(pvVar2->views).spine_size = 0;
    verse_heap_object_set_set_add_set(&verse_heap_all_sets,pvVar2);
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    return pvVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_object_set_add_view @ 140da8e50

void __cdecl
verse_heap_object_set_add_view
          (verse_heap_object_set *param_1,pas_segregated_exclusive_view *param_2)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  void *pvVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  void *_Src;
  ulonglong uVar13;
  ulonglong uVar10;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_2 == (pas_segregated_exclusive_view *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar8 = (longlong)param_2 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar8 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar8 < 8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = (undefined4)(uVar8 >> 3);
  }
  uVar2 = (param_1->views).size;
  uVar12 = (param_1->views).spine_size;
  uVar11 = uVar2 + 0x7f >> 7;
  if (uVar12 < uVar11) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar9 = uVar2 >> 7;
  uVar10 = (ulonglong)uVar9;
  uVar8 = (ulonglong)(param_1->views).spine.payload;
  _Src = (void *)(pas_compact_heap_reservation_base + uVar8 * 8);
  if (uVar8 == 0) {
    _Src = (void *)0x0;
  }
  if (uVar9 < uVar12) {
    uVar12 = *(uint *)((longlong)_Src + uVar10 * 4);
  }
  else {
    lVar6 = (ulonglong)uVar12 * 2 + 2;
    pvVar5 = pas_immortal_heap_allocate
                       ((ulonglong)uVar12 * 8 + 8,"verse_heap_view_vector/spine",
                        pas_object_allocation);
    if (0x7f < uVar2 + 0x7f) {
      memcpy(pvVar5,_Src,(ulonglong)(uVar11 * 4));
    }
    uVar12 = 0;
    memset((void *)((longlong)pvVar5 + (ulonglong)uVar11 * 4),0,(lVar6 - (ulonglong)uVar11) * 4);
    LOCK();
    UNLOCK();
    if (pvVar5 != (void *)0x0) {
      uVar8 = (longlong)pvVar5 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar8 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar8 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar12 = (uint)(uVar8 >> 3);
    }
    (param_1->views).spine.payload = uVar12;
    LOCK();
    UNLOCK();
    (param_1->views).spine_size = (uint)lVar6;
    uVar12 = *(uint *)((longlong)pvVar5 + uVar10 * 4);
    _Src = pvVar5;
  }
  uVar8 = (ulonglong)(uVar2 & 0x7f);
  uVar13 = (ulonglong)uVar12;
  if (uVar9 == uVar11) {
    if ((uVar12 != 0) && (pas_compact_heap_reservation_base != uVar13 * -8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pvVar5 = pas_immortal_heap_allocate_with_alignment
                       (0x200,4,"verse_heap_view_vector/segment",pas_object_allocation);
    memset(pvVar5,0,0x200);
    LOCK();
    UNLOCK();
    uVar13 = (longlong)pvVar5 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar13 < 8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar13 = uVar13 >> 3;
    *(int *)((longlong)_Src + uVar10 * 4) = (int)uVar13;
    uVar8 = 0;
  }
  lVar6 = 0;
  if ((int)uVar13 != 0) {
    lVar6 = pas_compact_heap_reservation_base + (uVar13 & 0xffffffff) * 8;
  }
  *(undefined4 *)(lVar6 + uVar8 * 4) = uVar7;
  LOCK();
  UNLOCK();
  puVar1 = &(param_1->views).size;
  *puVar1 = *puVar1 + 1;
  if (*puVar1 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

// verse_heap_object_set_add_large_entry @ 140da9090

void __cdecl
verse_heap_object_set_add_large_entry
          (verse_heap_object_set *param_1,verse_heap_large_entry *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  verse_heap_compact_large_entry_ptr *_Dst;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar1 = param_1->num_large_entries;
  if (uVar1 < param_1->large_entries_capacity) {
    _Dst = param_1->large_entries;
    param_1->num_large_entries = uVar1 + 1;
  }
  else {
    if (uVar1 != param_1->large_entries_capacity) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar4 = 100;
    if (100 < uVar1 * 2) {
      uVar4 = uVar1 * 2;
    }
    _Dst = pas_large_utility_free_heap_allocate(uVar4 * 3,"verse_heap_object_set/large_entries");
    if (param_1->num_large_entries != 0) {
      memcpy(_Dst,param_1->large_entries,param_1->num_large_entries * 3);
    }
    pas_large_utility_free_heap_deallocate
              (param_1->large_entries,param_1->large_entries_capacity * 3);
    param_1->large_entries_capacity = uVar4;
    param_1->large_entries = _Dst;
    uVar1 = param_1->num_large_entries;
    param_1->num_large_entries = uVar1 + 1;
  }
  if (param_2 == (verse_heap_large_entry *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (longlong)param_2 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar4 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar3 = (undefined4)(uVar4 >> 3);
  }
  _Dst[uVar1].payload[0] = (uchar)uVar3;
  _Dst[uVar1].payload[1] = (uchar)((uint)uVar3 >> 8);
  _Dst[uVar1].payload[2] = (uchar)((uint)uVar3 >> 0x10);
  return;
}

// verse_heap_object_set_start_iterate_before_handshake @ 140da9190

void __cdecl verse_heap_object_set_start_iterate_before_handshake(verse_heap_object_set *param_1)

{
  code *pcVar1;
  
  if (verse_heap_current_iteration_state.version != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_is_sweeping) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (!verse_heap_mark_bits_page_commit_controller_is_locked) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_num_large_entries_for_iteration == 0xffffffffffffffff) {
    verse_heap_num_large_entries_for_iteration = param_1->num_large_entries;
    verse_heap_current_iteration_state.set_being_iterated = param_1;
    verse_heap_latest_version = verse_heap_latest_version + 1;
    verse_heap_current_iteration_state.version = verse_heap_latest_version;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_object_set_start_iterate_after_handshake @ 140da91f0

ulong64 __cdecl verse_heap_object_set_start_iterate_after_handshake(verse_heap_object_set *param_1)

{
  code *pcVar1;
  
  if (verse_heap_current_iteration_state.version != verse_heap_latest_version) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (!verse_heap_is_sweeping) {
    if (verse_heap_mark_bits_page_commit_controller_is_locked) {
      return (ulonglong)((param_1->views).size + 1);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// verse_heap_object_set_iterate_range @ 140da9230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
verse_heap_object_set_iterate_range
          (verse_heap_object_set *param_1,ulong64 param_2,ulong64 param_3,
          verse_heap_iterate_filter param_4,_func___cdecl_void_void_ptr_void_ptr *param_5,
          void *param_6)

{
  PSRWLOCK SRWLock;
  ulonglong *puVar1;
  char cVar2;
  ushort uVar3;
  ulong64 *puVar4;
  ulong64 uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  code *pcVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  ulong64 uVar29;
  ulong64 uVar30;
  ulong64 uVar31;
  ulong64 uVar32;
  ulong64 uVar33;
  ulong64 uVar34;
  ulong64 uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  ulonglong uVar46;
  longlong lVar47;
  ulonglong uVar48;
  uint uVar49;
  ulonglong uVar50;
  undefined1 auStack_c8 [8];
  longlong local_c0;
  undefined1 *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  uint local_94;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined1 *local_78;
  ulong64 local_70;
  ulong64 local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  puVar44 = auStack_c8;
  local_48 = __security_cookie.value ^ (ulonglong)&local_48;
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  if (verse_heap_is_sweeping) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  if (verse_heap_current_iteration_state.version != verse_heap_latest_version) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  if (verse_heap_current_iteration_state.set_being_iterated != param_1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  if (!verse_heap_mark_bits_page_commit_controller_is_locked) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  local_58 = (ulonglong)param_4;
  if (param_2 == 0) {
    if (param_3 == 0) goto LAB_140da9a18;
    if (param_1->num_large_entries < verse_heap_num_large_entries_for_iteration) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    param_2 = 1;
    if (verse_heap_num_large_entries_for_iteration != 0) {
      local_60 = param_3;
      if (param_4 == verse_heap_iterate_unmarked) {
        lVar47 = 0;
        uVar46 = 0;
        do {
          AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
          uVar29 = pas_compact_heap_reservation_base;
          bVar9 = param_1->large_entries->payload[lVar47 + 2];
          uVar3 = *(ushort *)(param_1->large_entries->payload + lVar47);
          ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
          pvVar7 = *(void **)(((uint)bVar9 * 0x80000 + (uint)uVar3 * 8) + uVar29);
          if ((*(uint *)(((ulonglong)pvVar7 & 0xfffffffffff80000) +
                        (ulonglong)((uint)((ulonglong)pvVar7 >> 7) & 0xffc)) >>
               ((uint)((ulonglong)pvVar7 >> 4) & 0x1f) & 1) == 0) {
            (*param_5)(pvVar7,param_6);
          }
          uVar46 = uVar46 + 1;
          lVar47 = lVar47 + 3;
        } while (uVar46 < verse_heap_num_large_entries_for_iteration);
      }
      else {
        lVar47 = 0;
        uVar46 = 0;
        if (param_4 == verse_heap_iterate_marked) {
          do {
            AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            uVar29 = pas_compact_heap_reservation_base;
            bVar9 = param_1->large_entries->payload[lVar47 + 2];
            uVar3 = *(ushort *)(param_1->large_entries->payload + lVar47);
            ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            pvVar7 = *(void **)(((uint)bVar9 * 0x80000 + (uint)uVar3 * 8) + uVar29);
            if ((*(uint *)(((ulonglong)pvVar7 & 0xfffffffffff80000) +
                          (ulonglong)((uint)((ulonglong)pvVar7 >> 7) & 0xffc)) >>
                 ((uint)((ulonglong)pvVar7 >> 4) & 0x1f) & 1) != 0) {
              (*param_5)(pvVar7,param_6);
            }
            uVar46 = uVar46 + 1;
            lVar47 = lVar47 + 3;
          } while (uVar46 < verse_heap_num_large_entries_for_iteration);
        }
        else {
          do {
            AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            uVar29 = pas_compact_heap_reservation_base;
            bVar9 = param_1->large_entries->payload[lVar47 + 2];
            uVar3 = *(ushort *)(param_1->large_entries->payload + lVar47);
            ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
            (*param_5)(*(void **)(((uint)bVar9 * 0x80000 + (uint)uVar3 * 8) + uVar29),param_6);
            uVar46 = uVar46 + 1;
            lVar47 = lVar47 + 3;
          } while (uVar46 < verse_heap_num_large_entries_for_iteration);
        }
      }
      param_2 = 1;
      param_3 = local_60;
    }
  }
  local_a8 = (ulonglong)(param_1->views).size;
  uVar50 = (ulonglong)(param_1->views).spine.payload;
  local_c0 = uVar50 * 8 + pas_compact_heap_reservation_base;
  uVar46 = param_2 - 1;
  if (uVar50 == 0) {
    local_c0 = 0;
  }
  uVar50 = uVar46 & 0xffffffffffffff80;
  puVar44 = auStack_c8;
  if (uVar50 < local_a8) {
    uVar43 = param_3 - 1;
    uVar42 = (ulonglong)((uint)uVar46 & 0x7f);
    uVar46 = uVar46 >> 7;
    local_94 = (int)local_58 - 1;
    puVar44 = auStack_c8;
    uVar48 = local_58;
    local_60 = uVar43;
    do {
      uVar40 = (ulonglong)*(uint *)(local_c0 + uVar46 * 4);
      lVar47 = uVar40 * 8 + pas_compact_heap_reservation_base;
      if (uVar40 == 0) {
        lVar47 = 0;
      }
      uVar41 = local_a8 - uVar50;
      uVar40 = 0x80;
      if (uVar41 < 0x80) {
        uVar40 = uVar41;
      }
      puVar45 = puVar44;
      uVar36 = uVar46;
      uVar37 = uVar50;
      lVar38 = lVar47;
      uVar39 = uVar40;
      if (uVar42 < uVar41) {
        do {
          local_80 = uVar39;
          local_88 = lVar38;
          local_a0 = uVar37;
          local_b0 = uVar36;
          puVar44 = puVar45;
          if (uVar43 <= uVar42 + uVar50) goto LAB_140da9a18;
          uVar41 = (ulonglong)*(uint *)(lVar47 + uVar42 * 4);
          if (*(char *)(pas_compact_heap_reservation_base + 0xb + uVar41 * 8) == '\x01') {
            puVar1 = (ulonglong *)(pas_compact_heap_reservation_base + uVar41 * 8);
            SRWLock = (PSRWLOCK)(puVar1 + 3);
            local_90 = uVar42;
            *(undefined8 *)(puVar45 + -0x28) = 0x140da93e1;
            AcquireSRWLockExclusive(SRWLock);
            uVar29 = verse_heap_current_iteration_state.version;
            if (*(char *)((longlong)puVar1 + 0xb) == '\x01') {
              puVar4 = (ulong64 *)*puVar1;
              cVar2 = *(char *)((ulonglong)
                                ((uint)*(byte *)((longlong)puVar1 + 10) * 0x80000 +
                                (uint)(ushort)puVar1[1] * 8) + 0xc +
                               pas_compact_heap_reservation_base);
              if (cVar2 == '\x05') {
                *(undefined8 *)(puVar45 + -8) = 0x140da9485;
                local_50 = puVar45 + -0x80;
                uVar49 = 0;
                if (((ulonglong)puVar4 >> 0x30 == 0) &&
                   (uVar49 = 0,
                   verse_heap_first_level_chunk_map[(ulonglong)puVar4 >> 0x22] !=
                   (verse_heap_chunk_map_entry *)0x0)) {
                  uVar49 = verse_heap_first_level_chunk_map[(ulonglong)puVar4 >> 0x22]
                           [(uint)((ulonglong)puVar4 >> 0x13) & 0x7fff].encoded_value[0];
                }
                lVar47 = pas_compact_heap_reservation_base + (uVar49 & 0xfffffff9);
                uVar5 = *(ulong64 *)
                         (pas_compact_heap_reservation_base + 0x10 +
                         (ulonglong)(uVar49 & 0xfffffff9));
                local_78 = puVar45;
                if (uVar5 == verse_heap_current_iteration_state.version) {
                  local_70 = verse_heap_current_iteration_state.version;
                  puVar6 = *(undefined1 **)(lVar47 + 0x18);
                  *(undefined8 *)(lVar47 + 0x18) = 0;
                  local_68 = uVar5;
                  local_50 = puVar45 + -0x80;
                  *(undefined8 *)(puVar45 + -0xa8) = 0x140da9505;
                  ReleaseSRWLockExclusive(SRWLock);
                  uVar42 = local_90;
                  puVar44 = local_78;
                  uVar46 = local_b0;
                  lVar47 = local_88;
                  uVar40 = local_80;
                  local_50 = puVar6;
                  if (puVar6 != (undefined1 *)0x0) {
LAB_140da95ad:
                    uVar46 = (ulonglong)((uint)((ulonglong)puVar4 >> 7) & 0xffc) |
                             (ulonglong)puVar4 & 0xfffffffffff80000;
                    if ((int)uVar48 == 0) {
                      lVar47 = 0;
                      do {
                        uVar49 = *(uint *)(local_50 + lVar47 * 4);
                        if (uVar49 != 0) {
                          do {
                            uVar12 = 0;
                            for (uVar11 = uVar49; (uVar11 & 1) == 0;
                                uVar11 = uVar11 >> 1 | 0x80000000) {
                              uVar12 = uVar12 + 1;
                            }
                            uVar50 = lVar47 << 5 | (ulonglong)uVar12;
                            if ((*(byte *)(uVar46 + uVar50 * 4) & 1) == 0) {
                              *(undefined8 *)(puVar45 + -0xa8) = 0x140da97f0;
                              (*param_5)(puVar4 + uVar50 * 0x40,param_6);
                            }
                            bVar9 = (byte)uVar12 & 0x1f;
                            uVar49 = uVar49 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
                          } while (uVar49 != 0);
                        }
                        lVar47 = lVar47 + 1;
                      } while (lVar47 != 0x20);
                    }
                    else if ((int)uVar48 == 1) {
                      lVar47 = 0;
                      do {
                        uVar49 = *(uint *)(local_50 + lVar47 * 4);
                        if (uVar49 != 0) {
                          do {
                            uVar12 = 0;
                            for (uVar11 = uVar49; (uVar11 & 1) == 0;
                                uVar11 = uVar11 >> 1 | 0x80000000) {
                              uVar12 = uVar12 + 1;
                            }
                            uVar50 = lVar47 << 5 | (ulonglong)uVar12;
                            if ((*(byte *)(uVar46 + uVar50 * 4) & 1) != 0) {
                              *(undefined8 *)(puVar45 + -0xa8) = 0x140da9640;
                              (*param_5)(puVar4 + uVar50 * 0x40,param_6);
                            }
                            bVar9 = (byte)uVar12 & 0x1f;
                            uVar49 = uVar49 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
                          } while (uVar49 != 0);
                        }
                        lVar47 = lVar47 + 1;
                      } while (lVar47 != 0x20);
                    }
                    else {
                      lVar47 = 0;
                      do {
                        uVar49 = *(uint *)(local_50 + lVar47 * 4);
                        if (uVar49 != 0) {
                          do {
                            iVar10 = 0;
                            for (uVar12 = uVar49; (uVar12 & 1) == 0;
                                uVar12 = uVar12 >> 1 | 0x80000000) {
                              iVar10 = iVar10 + 1;
                            }
                            *(undefined8 *)(puVar45 + -0xa8) = 0x140da983b;
                            (*param_5)((void *)(((ulonglong)(uint)(iVar10 << 9) | lVar47 << 0xe) +
                                               (longlong)puVar4),param_6);
                            bVar9 = (byte)iVar10 & 0x1f;
                            uVar49 = uVar49 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
                          } while (uVar49 != 0);
                        }
                        lVar47 = lVar47 + 1;
                      } while (lVar47 != 0x20);
                    }
                    uVar42 = local_90;
                    uVar43 = local_60;
                    puVar44 = local_78;
                    uVar46 = local_b0;
                    lVar47 = local_88;
                    uVar40 = local_80;
                    uVar48 = local_58;
                    uVar50 = local_a0;
                    if (local_68 == local_70) goto LAB_140da9869;
                  }
                }
                else {
                  *(ulong64 *)(lVar47 + 0x10) = verse_heap_current_iteration_state.version;
                  if (*(longlong *)(lVar47 + 0x18) != 0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                  if (*(longlong *)(lVar47 + 0x58) != 0) {
                    local_70 = uVar29;
                    uVar28 = *(undefined8 *)(lVar47 + 0xe4);
                    local_68 = uVar5;
                    local_50 = puVar45 + -0x80;
                    *(undefined8 *)(puVar45 + -0x10) = *(undefined8 *)(lVar47 + 0xdc);
                    *(undefined8 *)(puVar45 + -8) = uVar28;
                    uVar28 = *(undefined8 *)(lVar47 + 0xd4);
                    *(undefined8 *)(puVar45 + -0x20) = *(undefined8 *)(lVar47 + 0xcc);
                    *(undefined8 *)(puVar45 + -0x18) = uVar28;
                    uVar28 = *(undefined8 *)(lVar47 + 0xc4);
                    *(undefined8 *)(puVar45 + -0x30) = *(undefined8 *)(lVar47 + 0xbc);
                    *(undefined8 *)(puVar45 + -0x28) = uVar28;
                    uVar28 = *(undefined8 *)(lVar47 + 0xb4);
                    *(undefined8 *)(puVar45 + -0x40) = *(undefined8 *)(lVar47 + 0xac);
                    *(undefined8 *)(puVar45 + -0x38) = uVar28;
                    uVar13 = *(undefined4 *)(lVar47 + 0x6c);
                    uVar14 = *(undefined4 *)(lVar47 + 0x70);
                    uVar15 = *(undefined4 *)(lVar47 + 0x74);
                    uVar16 = *(undefined4 *)(lVar47 + 0x78);
                    uVar17 = *(undefined4 *)(lVar47 + 0x7c);
                    uVar18 = *(undefined4 *)(lVar47 + 0x80);
                    uVar19 = *(undefined4 *)(lVar47 + 0x84);
                    uVar20 = *(undefined4 *)(lVar47 + 0x88);
                    uVar21 = *(undefined4 *)(lVar47 + 0x8c);
                    uVar22 = *(undefined4 *)(lVar47 + 0x90);
                    uVar23 = *(undefined4 *)(lVar47 + 0x94);
                    uVar24 = *(undefined4 *)(lVar47 + 0x98);
                    uVar25 = *(undefined4 *)(lVar47 + 0xa0);
                    uVar26 = *(undefined4 *)(lVar47 + 0xa4);
                    uVar27 = *(undefined4 *)(lVar47 + 0xa8);
                    *(undefined4 *)(puVar45 + -0x50) = *(undefined4 *)(lVar47 + 0x9c);
                    *(undefined4 *)(puVar45 + -0x4c) = uVar25;
                    *(undefined4 *)(puVar45 + -0x48) = uVar26;
                    *(undefined4 *)(puVar45 + -0x44) = uVar27;
                    *(undefined4 *)(puVar45 + -0x60) = uVar21;
                    *(undefined4 *)(puVar45 + -0x5c) = uVar22;
                    *(undefined4 *)(puVar45 + -0x58) = uVar23;
                    *(undefined4 *)(puVar45 + -0x54) = uVar24;
                    *(undefined4 *)(puVar45 + -0x70) = uVar17;
                    *(undefined4 *)(puVar45 + -0x6c) = uVar18;
                    *(undefined4 *)(puVar45 + -0x68) = uVar19;
                    *(undefined4 *)(puVar45 + -100) = uVar20;
                    *(undefined4 *)(puVar45 + -0x80) = uVar13;
                    *(undefined4 *)(puVar45 + -0x7c) = uVar14;
                    *(undefined4 *)(puVar45 + -0x78) = uVar15;
                    *(undefined4 *)(puVar45 + -0x74) = uVar16;
                    *(undefined8 *)(puVar45 + -0xa8) = 0x140da95a6;
                    ReleaseSRWLockExclusive(SRWLock);
                    goto LAB_140da95ad;
                  }
                  local_50 = puVar45 + -0x80;
                  *(undefined8 *)(puVar45 + -0xa8) = 0x140da9889;
                  ReleaseSRWLockExclusive(SRWLock);
                  uVar42 = local_90;
                  puVar44 = local_78;
                  uVar46 = local_b0;
                  lVar47 = local_88;
                  uVar40 = local_80;
                }
              }
              else {
                if (cVar2 != '\x04') {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                *(undefined8 *)(puVar45 + -8) = 0x140da9423;
                local_50 = puVar45 + -0x80;
                uVar5 = *puVar4;
                if (uVar5 == verse_heap_current_iteration_state.version) {
                  local_70 = verse_heap_current_iteration_state.version;
                  puVar6 = (undefined1 *)puVar4[1];
                  puVar4[1] = 0;
                  local_68 = uVar5;
                  local_50 = puVar45 + -0x80;
                  *(undefined8 *)(puVar45 + -0xa8) = 0x140da945e;
                  ReleaseSRWLockExclusive(SRWLock);
                  uVar49 = (uint)local_58;
                  uVar42 = local_90;
                  uVar46 = local_b0;
                  lVar47 = local_88;
                  uVar40 = local_80;
                  uVar48 = local_58;
                  local_50 = puVar6;
                  if (puVar6 != (undefined1 *)0x0) {
LAB_140da96ce:
                    local_b8 = puVar45;
                    if (1 < uVar49) {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)invalidInstructionException();
                      (*pcVar8)();
                    }
                    local_78 = (undefined1 *)
                               ((ulonglong)((uint)((ulonglong)puVar4 >> 7) & 0xffc) |
                               (ulonglong)puVar4 & 0xfffffffffff80000);
                    lVar47 = 0;
                    do {
                      uVar49 = (*(uint *)(local_78 + lVar47 * 4) ^ local_94) &
                               *(uint *)(local_50 + lVar47 * 4);
                      if (uVar49 != 0) {
                        do {
                          iVar10 = 0;
                          for (uVar12 = uVar49; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000
                              ) {
                            iVar10 = iVar10 + 1;
                          }
                          *(undefined8 *)(puVar45 + -0xa8) = 0x140da974a;
                          (*param_5)((void *)(((ulonglong)(uint)(iVar10 << 4) | lVar47 << 9) +
                                             (longlong)puVar4),param_6);
                          bVar9 = (byte)iVar10 & 0x1f;
                          uVar49 = uVar49 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
                        } while (uVar49 != 0);
                      }
                      lVar47 = lVar47 + 1;
                    } while (lVar47 != 0x20);
                    uVar42 = local_90;
                    uVar43 = local_60;
                    puVar44 = local_b8;
                    uVar46 = local_b0;
                    lVar47 = local_88;
                    uVar40 = local_80;
                    uVar48 = local_58;
                    uVar50 = local_a0;
                    if (local_68 == local_70) {
LAB_140da9869:
                      puVar6 = local_50;
                      uVar48 = local_58;
                      uVar43 = local_60;
                      uVar50 = local_a0;
                      *(undefined8 *)(puVar45 + -0xa8) = 0x140da9876;
                      bmalloc_deallocate(puVar6);
                      uVar42 = local_90;
                      uVar46 = local_b0;
                      lVar47 = local_88;
                      uVar40 = local_80;
                    }
                  }
                }
                else {
                  *puVar4 = verse_heap_current_iteration_state.version;
                  if (puVar4[1] != 0) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)invalidInstructionException();
                    (*pcVar8)();
                  }
                  if (puVar4[9] != 0) {
                    local_70 = uVar29;
                    uVar28 = *(undefined8 *)((longlong)puVar4 + 0xd4);
                    local_68 = uVar5;
                    local_50 = puVar45 + -0x80;
                    *(undefined8 *)(puVar45 + -0x10) = *(undefined8 *)((longlong)puVar4 + 0xcc);
                    *(undefined8 *)(puVar45 + -8) = uVar28;
                    uVar28 = *(undefined8 *)((longlong)puVar4 + 0xc4);
                    *(undefined8 *)(puVar45 + -0x20) = *(undefined8 *)((longlong)puVar4 + 0xbc);
                    *(undefined8 *)(puVar45 + -0x18) = uVar28;
                    uVar28 = *(undefined8 *)((longlong)puVar4 + 0xb4);
                    *(undefined8 *)(puVar45 + -0x30) = *(undefined8 *)((longlong)puVar4 + 0xac);
                    *(undefined8 *)(puVar45 + -0x28) = uVar28;
                    uVar28 = *(undefined8 *)((longlong)puVar4 + 0xa4);
                    *(undefined8 *)(puVar45 + -0x40) = *(undefined8 *)((longlong)puVar4 + 0x9c);
                    *(undefined8 *)(puVar45 + -0x38) = uVar28;
                    uVar13 = *(undefined4 *)((longlong)puVar4 + 0x5c);
                    uVar29 = puVar4[0xc];
                    uVar14 = *(undefined4 *)((longlong)puVar4 + 100);
                    uVar5 = puVar4[0xd];
                    uVar15 = *(undefined4 *)((longlong)puVar4 + 0x6c);
                    uVar30 = puVar4[0xe];
                    uVar16 = *(undefined4 *)((longlong)puVar4 + 0x74);
                    uVar31 = puVar4[0xf];
                    uVar17 = *(undefined4 *)((longlong)puVar4 + 0x7c);
                    uVar32 = puVar4[0x10];
                    uVar18 = *(undefined4 *)((longlong)puVar4 + 0x84);
                    uVar33 = puVar4[0x11];
                    uVar34 = puVar4[0x12];
                    uVar19 = *(undefined4 *)((longlong)puVar4 + 0x94);
                    uVar35 = puVar4[0x13];
                    *(undefined4 *)(puVar45 + -0x50) = *(undefined4 *)((longlong)puVar4 + 0x8c);
                    *(int *)(puVar45 + -0x4c) = (int)uVar34;
                    *(undefined4 *)(puVar45 + -0x48) = uVar19;
                    *(int *)(puVar45 + -0x44) = (int)uVar35;
                    *(undefined4 *)(puVar45 + -0x60) = uVar17;
                    *(int *)(puVar45 + -0x5c) = (int)uVar32;
                    *(undefined4 *)(puVar45 + -0x58) = uVar18;
                    *(int *)(puVar45 + -0x54) = (int)uVar33;
                    *(undefined4 *)(puVar45 + -0x70) = uVar15;
                    *(int *)(puVar45 + -0x6c) = (int)uVar30;
                    *(undefined4 *)(puVar45 + -0x68) = uVar16;
                    *(int *)(puVar45 + -100) = (int)uVar31;
                    *(undefined4 *)(puVar45 + -0x80) = uVar13;
                    *(int *)(puVar45 + -0x7c) = (int)uVar29;
                    *(undefined4 *)(puVar45 + -0x78) = uVar14;
                    *(int *)(puVar45 + -0x74) = (int)uVar5;
                    *(undefined8 *)(puVar45 + -0xa8) = 0x140da96c6;
                    ReleaseSRWLockExclusive(SRWLock);
                    uVar49 = (uint)local_58;
                    goto LAB_140da96ce;
                  }
                  local_50 = puVar45 + -0x80;
                  *(undefined8 *)(puVar45 + -0xa8) = 0x140da98a3;
                  ReleaseSRWLockExclusive(SRWLock);
                  uVar42 = local_90;
                  uVar46 = local_b0;
                  lVar47 = local_88;
                  uVar40 = local_80;
                  uVar48 = local_58;
                }
              }
            }
            else {
              *(undefined8 *)(puVar45 + -0x28) = 0x140da938d;
              ReleaseSRWLockExclusive(SRWLock);
              uVar42 = local_90;
              lVar47 = local_88;
              uVar40 = local_80;
            }
          }
          uVar42 = uVar42 + 1;
          puVar45 = puVar44;
          uVar36 = local_b0;
          uVar37 = local_a0;
          lVar38 = local_88;
          uVar39 = local_80;
        } while (uVar42 < uVar40);
      }
      uVar46 = uVar46 + 1;
      uVar50 = uVar46 * 0x80;
      uVar42 = 0;
    } while (uVar50 < local_a8);
  }
LAB_140da9a18:
  if ((local_48 ^ (ulonglong)&local_48) != __security_cookie.value) {
    *(undefined8 *)(puVar44 + -0x28) = 0x140da9a42;
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}

// verse_heap_object_set_end_iterate @ 140da9b10

void __cdecl verse_heap_object_set_end_iterate(verse_heap_object_set *param_1)

{
  code *pcVar1;
  
  if (verse_heap_current_iteration_state.version != verse_heap_latest_version) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (verse_heap_is_sweeping) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (!verse_heap_mark_bits_page_commit_controller_is_locked) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  verse_heap_current_iteration_state.version = 0;
  verse_heap_current_iteration_state.set_being_iterated = (verse_heap_object_set *)0x0;
  if (verse_heap_num_large_entries_for_iteration <= param_1->num_large_entries) {
    verse_heap_num_large_entries_for_iteration = 0xffffffffffffffff;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

