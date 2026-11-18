// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_thread_local_cache_layout_add_node @ 140d7a900

uint __cdecl
pas_thread_local_cache_layout_add_node(pas_thread_local_cache_layout_node_opaque *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  pas_thread_local_cache_layout_segment *_Dst;
  pas_thread_local_cache_layout_segment **pppVar6;
  pas_compact_thread_local_cache_layout_node *ppVar7;
  ulonglong uVar8;
  pas_segregated_size_directory *ppVar9;
  void *_Dst_00;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  pas_compact_thread_local_cache_layout_node *ppVar16;
  ulong64 uVar17;
  pas_compact_thread_local_cache_layout_node *ppVar18;
  void *pvVar19;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar15 = (ulonglong)param_1 & 0xffffffff;
  uVar3 = (uint)param_1 & 3;
  if (uVar3 < 2) {
    uVar3 = pas_thread_local_cache_layout_node_get_allocator_index_generic(param_1);
    if (uVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else if ((uVar3 == 2) &&
          (uVar3 = pas_thread_local_cache_layout_node_get_allocator_index_generic(param_1),
          uVar3 != 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = pas_thread_local_cache_layout_next_allocator_index;
  if (pas_thread_local_cache_layout_next_allocator_index == 0xffffffff) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pas_thread_local_cache_layout_node_set_allocator_index
            (param_1,pas_thread_local_cache_layout_next_allocator_index);
  uVar5 = pas_thread_local_cache_layout_next_allocator_index;
  uVar4 = pas_thread_local_cache_layout_node_num_allocator_indices(param_1);
  pas_thread_local_cache_layout_next_allocator_index = uVar4 + uVar5;
  if (!CARRY4(uVar4,uVar5)) {
    if ((pas_thread_local_cache_layout_last_segment == (pas_thread_local_cache_layout_segment *)0x0)
       || (pas_thread_local_cache_layout_last_segment_size == 0x101)) {
      _Dst = pas_utility_heap_allocate(0x410,"pas_thread_local_cache_layout_segment");
      memset(_Dst,0,0x410);
      uVar12 = uVar15;
      if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000007 < param_1) {
        uVar12 = (longlong)param_1 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((pas_thread_local_cache_layout_node_opaque *)pas_compact_heap_reservation_base ==
            param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      _Dst->nodes[0].payload = (uint)uVar12;
      pas_thread_local_cache_layout_last_segment_size = 1;
      LOCK();
      UNLOCK();
      if (pas_thread_local_cache_layout_last_segment == (pas_thread_local_cache_layout_segment *)0x0
         ) {
        if (pas_thread_local_cache_layout_first_segment !=
            (pas_thread_local_cache_layout_segment *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar3 != 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        pppVar6 = &pas_thread_local_cache_layout_first_segment;
      }
      else {
        pppVar6 = &pas_thread_local_cache_layout_last_segment->next;
      }
      *pppVar6 = _Dst;
      pas_thread_local_cache_layout_last_segment = _Dst;
      AcquireSRWLockExclusive((PSRWLOCK)&pas_thread_local_cache_layout_hashtable_lock);
    }
    else {
      if (uVar3 < 9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      LOCK();
      UNLOCK();
      uVar14 = (ulonglong)pas_thread_local_cache_layout_last_segment_size;
      pas_thread_local_cache_layout_last_segment_size =
           pas_thread_local_cache_layout_last_segment_size + 1;
      uVar12 = uVar15;
      if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000007 < param_1) {
        uVar12 = (longlong)param_1 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((pas_thread_local_cache_layout_node_opaque *)pas_compact_heap_reservation_base ==
            param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      pas_thread_local_cache_layout_last_segment->nodes[uVar14].payload = (uint)uVar12;
      AcquireSRWLockExclusive((PSRWLOCK)&pas_thread_local_cache_layout_hashtable_lock);
    }
    if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000008 <= param_1) {
      uVar15 = (longlong)param_1 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((pas_thread_local_cache_layout_node_opaque *)pas_compact_heap_reservation_base == param_1)
      {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    if ((uint)uVar15 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar5 = pas_thread_local_cache_layout_node_get_allocator_index_generic
                      ((pas_thread_local_cache_layout_node_opaque *)
                       (pas_compact_heap_reservation_base + (uVar15 & 0xffffffff)));
    pvVar19 = pas_large_utility_free_heap_allocation_config.arg;
    if (pas_thread_local_cache_layout_hashtable_instance.table_size <=
        (pas_thread_local_cache_layout_hashtable_instance.deleted_count +
        pas_thread_local_cache_layout_hashtable_instance.key_count) * 2) {
      uVar4 = pas_thread_local_cache_layout_hashtable_instance.table_size * 2;
      if (pas_thread_local_cache_layout_hashtable_instance.key_count * 6 <
          pas_thread_local_cache_layout_hashtable_instance.table_size * 2) {
        uVar4 = pas_thread_local_cache_layout_hashtable_instance.table_size;
      }
      uVar12 = 0x10;
      if (pas_thread_local_cache_layout_hashtable_instance.table_size != 0) {
        uVar12 = (ulonglong)uVar4;
      }
      uVar4 = (uint)uVar12;
      if ((uVar4 == 0) ||
         (uVar10 = uVar4 - ((uint)(uVar12 >> 1) & 0x55555555),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         1 < ((uVar10 >> 4) + uVar10 & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar17 = 0;
      ppVar7 = (*pas_large_utility_free_heap_allocation_config.allocate)
                         (uVar12 * 4,"pas_thread_local_cache_layout_hashtable/table",
                          pas_object_allocation,pas_large_utility_free_heap_allocation_config.arg);
      memset(ppVar7,0,uVar12 * 4);
      ppVar16 = pas_thread_local_cache_layout_hashtable_instance.table;
      uVar12 = (ulonglong)pas_thread_local_cache_layout_hashtable_instance.table_size;
      if (uVar12 != 0) {
        uVar14 = 0;
        uVar17 = pas_compact_heap_reservation_base;
        do {
          uVar8 = (ulonglong)*(uint *)ppVar16[uVar14].payload;
          uVar13 = 0;
          if (7 < uVar8) {
            uVar13 = uVar17;
          }
          if (1 < uVar13 + uVar8) {
            if (*(uint *)ppVar16[uVar14].payload < 8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar10 = pas_thread_local_cache_layout_node_get_allocator_index_generic
                               ((pas_thread_local_cache_layout_node_opaque *)(uVar17 + uVar8));
            uVar10 = uVar10 >> 4 ^ uVar10;
            uVar10 = uVar10 * 0x20 + (uVar10 ^ 0xdeadbeef);
            uVar10 = uVar10 >> 0xb ^ uVar10;
            do {
              uVar11 = uVar10 & uVar4 - 1;
              uVar17 = pas_compact_heap_reservation_base;
              if ((ulonglong)*(uint *)ppVar7[uVar11].payload < 8) {
                uVar17 = 0;
              }
              uVar10 = uVar10 + 1;
            } while (1 < uVar17 + *(uint *)ppVar7[uVar11].payload);
            *(undefined4 *)ppVar7[uVar11].payload = *(undefined4 *)ppVar16[uVar14].payload;
            uVar17 = pas_compact_heap_reservation_base;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar12);
        uVar17 = uVar12 << 2;
        pvVar19 = pas_large_utility_free_heap_allocation_config.arg;
      }
      pas_thread_local_cache_layout_hashtable_instance.deleted_count = 0;
      pas_thread_local_cache_layout_hashtable_instance.table = ppVar7;
      pas_thread_local_cache_layout_hashtable_instance.table_size = uVar4;
      pas_thread_local_cache_layout_hashtable_instance.table_mask = uVar4 - 1;
      (*pas_large_utility_free_heap_allocation_config.deallocate)
                (ppVar16,uVar17,pas_object_allocation,pvVar19);
    }
    uVar4 = uVar5 >> 4 ^ uVar5;
    uVar10 = uVar4 * 0x20 + (uVar4 ^ 0xdeadbeef);
    uVar10 = uVar10 >> 0xb ^ uVar10;
    ppVar16 = pas_thread_local_cache_layout_hashtable_instance.table +
              (pas_thread_local_cache_layout_hashtable_instance.table_mask & uVar10);
    uVar4 = *(uint *)pas_thread_local_cache_layout_hashtable_instance.table
                     [pas_thread_local_cache_layout_hashtable_instance.table_mask & uVar10].payload;
    if (uVar4 != 0) {
      ppVar18 = (pas_compact_thread_local_cache_layout_node *)0x0;
      uVar17 = pas_compact_heap_reservation_base;
      ppVar7 = pas_thread_local_cache_layout_hashtable_instance.table;
      uVar11 = pas_thread_local_cache_layout_hashtable_instance.table_mask;
      do {
        uVar10 = uVar10 + 1;
        uVar13 = 0;
        if (7 < uVar4) {
          uVar13 = uVar17;
        }
        if (uVar13 + uVar4 == 1) {
          if (ppVar18 == (pas_compact_thread_local_cache_layout_node *)0x0) {
            ppVar18 = ppVar16;
          }
        }
        else {
          if (uVar4 < 8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar4 = pas_thread_local_cache_layout_node_get_allocator_index_generic
                            ((pas_thread_local_cache_layout_node_opaque *)(uVar17 + uVar4));
          uVar17 = pas_compact_heap_reservation_base;
          ppVar7 = pas_thread_local_cache_layout_hashtable_instance.table;
          uVar11 = pas_thread_local_cache_layout_hashtable_instance.table_mask;
          if (uVar4 == uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        ppVar16 = ppVar7 + (uVar11 & uVar10);
        uVar4 = *(uint *)ppVar7[uVar11 & uVar10].payload;
      } while (uVar4 != 0);
      if (ppVar18 != (pas_compact_thread_local_cache_layout_node *)0x0) {
        pas_thread_local_cache_layout_hashtable_instance.deleted_count =
             pas_thread_local_cache_layout_hashtable_instance.deleted_count - 1;
        ppVar16 = ppVar18;
      }
    }
    pas_thread_local_cache_layout_hashtable_instance.key_count =
         pas_thread_local_cache_layout_hashtable_instance.key_count + 1;
    *(uint *)ppVar16->payload = (uint)uVar15;
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_thread_local_cache_layout_hashtable_lock);
    ppVar9 = pas_thread_local_cache_layout_node_get_directory(param_1);
    uVar5._0_1_ = (ppVar9->base).page_config_kind;
    uVar5._1_1_ = (ppVar9->base).sharing_mode;
    uVar5._2_1_ = (ppVar9->base).directory_kind;
    uVar5._3_1_ = (ppVar9->base).field_0xf;
    if ((uVar5 & 0xfe) == 4) {
      pvVar19 = (void *)((ulonglong)
                         verse_heap_thread_local_cache_layout_node_vector_instance.array.payload * 8
                        + pas_compact_heap_reservation_base);
      if ((ulonglong)verse_heap_thread_local_cache_layout_node_vector_instance.array.payload == 0) {
        pvVar19 = (void *)0x0;
      }
      if (verse_heap_thread_local_cache_layout_node_vector_instance.capacity <=
          verse_heap_thread_local_cache_layout_node_vector_instance.size) {
        if (verse_heap_thread_local_cache_layout_node_vector_instance.size !=
            verse_heap_thread_local_cache_layout_node_vector_instance.capacity) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar5 = verse_heap_thread_local_cache_layout_node_vector_instance.size * 2 + 2;
        if (uVar5 <= verse_heap_thread_local_cache_layout_node_vector_instance.size) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar15 = 0;
        _Dst_00 = pas_immortal_heap_allocate
                            ((ulonglong)uVar5 * 8,
                             "verse_heap_thread_local_cache_layout_node_vector/array",
                             pas_object_allocation);
        if ((ulonglong)verse_heap_thread_local_cache_layout_node_vector_instance.size != 0) {
          memcpy(_Dst_00,pvVar19,
                 (ulonglong)verse_heap_thread_local_cache_layout_node_vector_instance.size << 3);
          uVar15 = (ulonglong)verse_heap_thread_local_cache_layout_node_vector_instance.size;
        }
        uVar4 = 0;
        memset((void *)((longlong)_Dst_00 + uVar15 * 8),0,(uVar5 - uVar15) * 8);
        LOCK();
        UNLOCK();
        if (_Dst_00 != (void *)0x0) {
          uVar15 = (longlong)_Dst_00 - pas_compact_heap_reservation_base;
          if (pas_compact_heap_reservation_size <= uVar15) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((uVar15 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar15 < 8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar4 = (uint)(uVar15 >> 3);
        }
        LOCK();
        UNLOCK();
        pvVar19 = _Dst_00;
        verse_heap_thread_local_cache_layout_node_vector_instance.array.payload = uVar4;
        verse_heap_thread_local_cache_layout_node_vector_instance.capacity = uVar5;
      }
      *(pas_thread_local_cache_layout_node_opaque **)
       ((longlong)pvVar19 +
       (ulonglong)verse_heap_thread_local_cache_layout_node_vector_instance.size * 8) = param_1;
      LOCK();
      UNLOCK();
      verse_heap_thread_local_cache_layout_node_vector_instance.size =
           verse_heap_thread_local_cache_layout_node_vector_instance.size + 1;
      if (verse_heap_thread_local_cache_layout_node_vector_instance.size == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_layout_add @ 140d7af10

uint __cdecl pas_thread_local_cache_layout_add(pas_segregated_size_directory *param_1)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_1 == (pas_segregated_size_directory *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((ulonglong)param_1 & 3) == 0) {
    if (((ulonglong)param_1 & 3) == 0) {
      uVar2 = pas_thread_local_cache_layout_add_node
                        ((pas_thread_local_cache_layout_node_opaque *)param_1);
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_layout_duplicate @ 140d7af30

uint __cdecl pas_thread_local_cache_layout_duplicate(pas_segregated_size_directory *param_1)

{
  code *pcVar1;
  uint uVar2;
  pas_redundant_local_allocator_node *ppVar3;
  
  ppVar3 = pas_redundant_local_allocator_node_create(param_1);
  if (ppVar3 == (pas_redundant_local_allocator_node *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((ulonglong)ppVar3 & 3) == 0) {
    if (((uint)ppVar3 & 3 | 1) == 1) {
      uVar2 = pas_thread_local_cache_layout_add_node
                        ((pas_thread_local_cache_layout_node_opaque *)((ulonglong)ppVar3 | 1));
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_layout_add_view_cache @ 140d7af70

uint __cdecl pas_thread_local_cache_layout_add_view_cache(pas_segregated_size_directory *param_1)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_1 == (pas_segregated_size_directory *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((ulonglong)param_1 & 3) == 0) {
    if (((uint)param_1 & 3 | 2) == 2) {
      uVar2 = pas_thread_local_cache_layout_add_node
                        ((pas_thread_local_cache_layout_node_opaque *)((ulonglong)param_1 | 2));
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_thread_local_cache_layout_get_node_for_index @ 140d7afa0

pas_thread_local_cache_layout_node_opaque * __cdecl
pas_thread_local_cache_layout_get_node_for_index(uint param_1)

{
  code *pcVar1;
  pas_compact_thread_local_cache_layout_node *ppVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  uint uVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_thread_local_cache_layout_hashtable_lock);
  ppVar2 = pas_thread_local_cache_layout_hashtable_instance.table;
  if (pas_thread_local_cache_layout_hashtable_instance.table !=
      (pas_compact_thread_local_cache_layout_node *)0x0) {
    uVar3 = param_1 >> 4 ^ param_1;
    uVar4 = uVar3 * 0x20 + (uVar3 ^ 0xdeadbeef);
    uVar4 = uVar4 >> 0xb ^ uVar4;
    uVar6 = pas_compact_heap_reservation_base;
    uVar3 = pas_thread_local_cache_layout_hashtable_instance.table_mask;
    do {
      uVar9 = uVar4 & uVar3;
      uVar5 = *(uint *)ppVar2[uVar9].payload;
      uVar7 = (ulonglong)uVar5;
      uVar8 = uVar6;
      if (uVar7 < 8) {
        uVar8 = 0;
      }
      if (uVar8 + uVar7 < 2) {
        if (uVar8 + uVar7 != 1) break;
      }
      else {
        if (uVar5 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar5 = pas_thread_local_cache_layout_node_get_allocator_index_generic
                          ((pas_thread_local_cache_layout_node_opaque *)(uVar6 + uVar7));
        uVar6 = pas_compact_heap_reservation_base;
        uVar3 = pas_thread_local_cache_layout_hashtable_instance.table_mask;
        if (uVar5 == param_1) {
          uVar3 = *(uint *)ppVar2[uVar9].payload;
          ReleaseSRWLockExclusive((PSRWLOCK)&pas_thread_local_cache_layout_hashtable_lock);
          uVar6 = pas_compact_heap_reservation_base;
          if (uVar3 < 8) {
            uVar6 = 0;
          }
          return (pas_thread_local_cache_layout_node_opaque *)(uVar6 + uVar3);
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_thread_local_cache_layout_hashtable_lock);
  return (pas_thread_local_cache_layout_node_opaque *)0x0;
}

// pas_thread_local_cache_layout_get_last_node @ 140d7b090

pas_thread_local_cache_layout_node_opaque * __cdecl
pas_thread_local_cache_layout_get_last_node(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  pas_thread_local_cache_layout_node_opaque *ppVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pas_thread_local_cache_layout_last_segment == (pas_thread_local_cache_layout_segment *)0x0) {
    return (pas_thread_local_cache_layout_node_opaque *)0x0;
  }
  if (pas_thread_local_cache_layout_last_segment_size == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  ppVar3 = (pas_thread_local_cache_layout_node_opaque *)
           (ulonglong)
           pas_thread_local_cache_layout_last_segment->nodes
           [pas_thread_local_cache_layout_last_segment_size - 1].payload;
  if ((pas_thread_local_cache_layout_node_opaque *)&DAT_00000007 < ppVar3) {
    return ppVar3 + pas_compact_heap_reservation_base;
  }
  return ppVar3;
}

