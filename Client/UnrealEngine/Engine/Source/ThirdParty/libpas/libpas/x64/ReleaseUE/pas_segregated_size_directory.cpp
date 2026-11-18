// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 23

// pas_segregated_size_directory_create @ 140d75050

pas_segregated_size_directory * __cdecl
pas_segregated_size_directory_create
          (pas_segregated_heap *param_1,uint param_2,uint param_3,pas_heap_config *param_4,
          pas_segregated_page_config *param_5,pas_segregated_size_directory_creation_mode param_6)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  BOOLEAN BVar5;
  pas_segregated_size_directory *ppVar6;
  pas_bitfit_heap *ppVar7;
  uint uVar8;
  pas_segregated_page_config_kind pVar9;
  bool bVar10;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_5 == (pas_segregated_page_config *)0x0) {
    pas_heap_config_activate(param_4);
    pVar9 = pas_segregated_page_config_kind_null;
    ppVar6 = pas_immortal_heap_allocate_with_alignment
                       (0x60,0x10,"pas_segregated_size_directory+pas_bitfit_size_class",
                        pas_object_allocation);
  }
  else {
    if ((param_5->base).heap_config_ptr != param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVar9 = param_5->kind;
    pas_heap_config_activate(param_4);
    ppVar6 = pas_immortal_heap_allocate(0x38,"pas_segregated_size_directory",pas_object_allocation);
  }
  pas_segregated_directory_construct
            (&ppVar6->base,pVar9,(int)(char)param_1->runtime_config->sharing_mode,
             pas_segregated_size_directory_kind);
  ppVar6->heap = param_1;
  ppVar6->object_size = param_2;
  if ((param_3 == 0) ||
     (uVar8 = param_3 - (param_3 >> 1 & 0x55555555),
     uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
     uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f) * 0x1010101 >> 0x18, 1 < uVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar8 != 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((param_3 - 1 & param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_5 == (pas_segregated_page_config *)0x0) {
    *(uint *)&ppVar6->field_0x20 = param_2 | 0xf8000000;
    uVar4 = __xmm_0000000000000000ffffffffffffffc0._4_4_;
    ppVar6->encoded_stuff = (undefined4)__xmm_0000000000000000ffffffffffffffc0;
    ppVar6->view_cache_index = uVar4;
    ppVar6->allocator_index = 0;
    ppVar6->data = 0;
    ppVar7 = pas_segregated_heap_get_bitfit(param_1,param_4,pas_lock_is_held);
    if (ppVar7 == (pas_bitfit_heap *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pas_bitfit_heap_construct_and_insert_size_class
              (ppVar7,(pas_bitfit_size_class *)&ppVar6[1].base.bits,param_2,param_4,
               param_1->runtime_config);
  }
  else {
    iVar2 = 0x1f;
    if (param_3 != 0) {
      for (; param_3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    ppVar6->object_size = param_2;
    ppVar6->alignment_shift = iVar2;
    uVar4 = __xmm_0000000000000000ffffffffffffffc0._4_4_;
    ppVar6->encoded_stuff = (undefined4)__xmm_0000000000000000ffffffffffffffc0;
    ppVar6->view_cache_index = uVar4;
    ppVar6->allocator_index = 0;
    ppVar6->data = 0;
  }
  (ppVar6->next_for_heap).payload = 0;
  do {
    uVar8 = (ppVar6->base).bits;
    if ((uVar8 & 0xfffffffb) == uVar8) break;
    puVar1 = &(ppVar6->base).bits;
    LOCK();
    bVar10 = uVar8 == *puVar1;
    if (bVar10) {
      *puVar1 = uVar8 & 0xfffffffb;
    }
    UNLOCK();
  } while (!bVar10);
  if (param_6 == pas_segregated_size_directory_full_creation_mode) {
    pas_segregated_size_directory_finish_creation(ppVar6);
  }
  return ppVar6;
}

// pas_segregated_size_directory_finish_creation @ 140d75240

void __cdecl pas_segregated_size_directory_finish_creation(pas_segregated_size_directory *param_1)

{
  uint uVar1;
  pas_segregated_heap *ppVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  
  ppVar2 = param_1->heap;
  if (ppVar2->runtime_config->directory_size_bound_for_baseline_allocators == 0) {
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((param_1->base).page_config_kind != 1) {
      pas_segregated_size_directory_ensure_data(param_1,pas_lock_is_held);
      if (param_1->allocator_index == 0) {
        pas_thread_local_cache_layout_add(param_1);
        if (param_1->allocator_index == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (param_1->allocator_index == 0xffffffff) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else if (param_1->allocator_index == 0xffffffff) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
  }
  if (ppVar2->runtime_config->directory_size_bound_for_partial_views == 0) {
    pas_segregated_size_directory_enable_exclusive_views(param_1);
    uVar1 = ppVar2->runtime_config->directory_size_bound_for_no_view_cache;
  }
  else {
    uVar1 = ppVar2->runtime_config->directory_size_bound_for_no_view_cache;
  }
  if (uVar1 != 0) {
    return;
  }
  pas_segregated_size_directory_create_tlc_view_cache(param_1);
  return;
}

// pas_segregated_size_directory_create_tlc_allocator @ 140d752e0

void __cdecl
pas_segregated_size_directory_create_tlc_allocator(pas_segregated_size_directory *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_1->base).page_config_kind != 1) {
    pas_segregated_size_directory_ensure_data(param_1,pas_lock_is_held);
    if (param_1->allocator_index == 0) {
      pas_thread_local_cache_layout_add(param_1);
      if (param_1->allocator_index == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (param_1->allocator_index == 0xffffffff) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    else if (param_1->allocator_index == 0xffffffff) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}

// pas_segregated_size_directory_enable_exclusive_views @ 140d75340

void __cdecl
pas_segregated_size_directory_enable_exclusive_views(pas_segregated_size_directory *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  pas_page_base_config *ppVar6;
  pas_segregated_size_directory *ppVar7;
  ulonglong uVar8;
  code *pcVar9;
  BOOLEAN BVar10;
  uint uVar11;
  pas_segregated_size_directory_data *ppVar12;
  undefined1 *_Dst;
  undefined1 *puVar13;
  ulonglong uVar14;
  pas_segregated_size_directory **pppVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  char cVar20;
  uint uVar21;
  uint *puVar22;
  ulong64 uVar23;
  pas_segregated_size_directory **pppVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  
  BVar10 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar10 != '\0') {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  ppVar12 = pas_segregated_size_directory_ensure_data(param_1,pas_lock_is_held);
  if (ppVar12->full_num_non_empty_words_or_live_bytes != 0) {
    return;
  }
  iVar34._0_1_ = (param_1->base).page_config_kind;
  iVar34._1_1_ = (param_1->base).sharing_mode;
  iVar34._2_1_ = (param_1->base).directory_kind;
  iVar34._3_1_ = (param_1->base).field_0xf;
  if (iVar34 << 0x18 == 0) {
    return;
  }
  uVar16 = (iVar34 << 0x18) >> 0x18;
  ppVar6 = pas_segregated_page_config_kind_for_config_table[(int)uVar16];
  uVar21 = ZPULL(*(undefined4 *)&param_1->field_0x20,0,0x1b);
  uVar17 = (ulonglong)uVar21;
  if (pas_exclusive_view_template_memo_table_instance.table != (pas_segregated_size_directory **)0x0
     ) {
    uVar28 = uVar21 >> 4 ^ uVar21;
    uVar28 = uVar28 * 0x20 + (uVar28 ^ 0xdeadbeef);
    uVar28 = uVar28 >> 0xb ^ uVar16 ^ uVar28;
    do {
      ppVar7 = pas_exclusive_view_template_memo_table_instance.table
               [uVar28 & pas_exclusive_view_template_memo_table_instance.table_mask];
      if ((pas_segregated_size_directory *)&DAT_00000001 < ppVar7) {
        if ((longlong)
            (int5)(CONCAT14((ppVar7->base).page_config_kind,*(undefined4 *)&ppVar7->field_0x20) &
                  0xff07ffffff) ==
            (CONCAT44(uVar16,*(undefined4 *)&param_1->field_0x20) & 0xffffffff07ffffff)) {
          uVar17 = (ulonglong)(ppVar7->data).payload;
          puVar22 = (uint *)(uVar17 * 8 + pas_compact_heap_reservation_base);
          if (uVar17 == 0) {
            puVar22 = (uint *)0x0;
          }
          *(uint *)(ppVar12->full_alloc_bits).payload = puVar22[3];
          ppVar12->offset_from_page_boundary_to_first_object = *puVar22;
          ppVar12->offset_from_page_boundary_to_end_of_last_object = puVar22[1];
          if (ppVar6->granule_size < ppVar6->page_size) {
            ppVar6 = pas_segregated_page_config_kind_for_config_table
                     [(char)(param_1->base).page_config_kind];
            if (ppVar6 == (pas_page_base_config *)0x0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            if (ppVar6->page_size <= ppVar6->granule_size) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            uVar17 = (ulonglong)(param_1->data).payload;
            lVar18 = pas_compact_heap_reservation_base + uVar17 * 8;
            if (uVar17 == 0) {
              lVar18 = 0;
            }
            ppVar6 = pas_segregated_page_config_kind_for_config_table
                     [(char)(ppVar7->base).page_config_kind];
            if (ppVar6 == (pas_page_base_config *)0x0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            if (ppVar6->page_size <= ppVar6->granule_size) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            uVar17 = (ulonglong)(ppVar7->data).payload;
            lVar26 = pas_compact_heap_reservation_base + uVar17 * 8;
            if (uVar17 == 0) {
              lVar26 = 0;
            }
            *(undefined4 *)(lVar18 + 0x10) = *(undefined4 *)(lVar26 + 0x10);
          }
          LOCK();
          UNLOCK();
          ppVar12->full_num_non_empty_words_or_live_bytes = puVar22[2];
          return;
        }
      }
      else if (ppVar7 != (pas_segregated_size_directory *)&DAT_00000001) break;
      uVar28 = uVar28 + 1;
    } while( true );
  }
  bVar3 = ppVar6->is_enabled;
  bVar4 = ppVar6->min_align_shift;
  uVar27 = ppVar6->page_size;
  uVar8 = ppVar6->granule_size;
  uVar30 = ppVar6->max_object_size;
  uVar16 = *(uint *)&ppVar6[1].field_0x4;
  uVar14 = ppVar6[1].granule_size;
  uVar23 = ppVar6[1].max_object_size;
  uVar31 = *(longlong *)&ppVar6[1].page_config_kind + 0x1f;
  uVar32 = uVar31 >> 3 & 0xfffffffffffffffc;
  _Dst = pas_immortal_heap_allocate_with_manual_alignment
                   (uVar32,4,"pas_segregated_size_directory_data/full_alloc_bits",
                    pas_object_allocation);
  puVar13 = _Dst;
  if (&DAT_00000007 < _Dst) {
    puVar13 = _Dst + -pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= puVar13) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (puVar13 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
  }
  *(int *)(ppVar12->full_alloc_bits).payload = (int)puVar13;
  memset(_Dst,0,uVar32);
  if ((~(uint)(-1L << (bVar4 & 0x3f)) & uVar21) != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  if (uVar30 < uVar17) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  uVar30 = uVar23 + uVar14;
  if (uVar30 >> 0x20 == 0) {
    iVar34 = (int)((uVar30 & 0xffffffff) % (ulonglong)uVar21);
  }
  else {
    iVar34 = (int)(uVar30 % uVar17);
  }
  uVar28 = (int)uVar30 - iVar34;
  uVar32 = (uVar17 + uVar14) - 1;
  if (uVar32 >> 0x20 == 0) {
    iVar34 = (int)((uVar32 & 0xffffffff) % (ulonglong)uVar21);
  }
  else {
    iVar34 = (int)(uVar32 % uVar17);
  }
  uVar25 = (int)uVar32 - iVar34;
  uVar32 = ((uVar17 - 1) + uVar27) - uVar30;
  if (uVar32 >> 0x20 == 0) {
    iVar34 = (int)((uVar32 & 0xffffffff) % (ulonglong)uVar21);
  }
  else {
    iVar34 = (int)(uVar32 % uVar17);
  }
  uVar29 = (iVar34 - (int)uVar32) + (int)uVar27;
  uVar32 = uVar27 - uVar14;
  if (uVar32 >> 0x20 == 0) {
    iVar34 = (int)((uVar32 & 0xffffffff) % (ulonglong)uVar21);
  }
  else {
    iVar34 = (int)(uVar32 % uVar17);
  }
  uVar11 = (int)uVar27 + (iVar34 - (int)uVar32);
  if (uVar28 - uVar25 < uVar29 - uVar11) {
    uVar28 = uVar29;
    uVar25 = uVar11;
  }
  ppVar12->offset_from_page_boundary_to_first_object = uVar25;
  ppVar12->offset_from_page_boundary_to_end_of_last_object = uVar28;
  uVar29 = uVar28 - uVar25;
  if (uVar25 <= uVar28 && uVar29 != 0) {
    do {
      uVar11 = uVar25 >> (bVar4 & 0x3f);
      *(uint *)(_Dst + (ulonglong)(uVar11 >> 5) * 4) =
           *(uint *)(_Dst + (ulonglong)(uVar11 >> 5) * 4) | 1 << ((byte)uVar11 & 0x1f);
      uVar25 = uVar25 + uVar21;
    } while (uVar25 < uVar28);
  }
  if ((uVar16 & 0xfffffffe) != 4) {
    if (uVar31 < 0x20) goto LAB_140d75d00;
    uVar17 = uVar31 >> 5;
    uVar29 = 0;
    if (0xff < uVar31) {
      lVar18 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      do {
        piVar2 = (int *)(_Dst + lVar18 * 4 + uVar17 * 4 + -0x20);
        piVar1 = (int *)(_Dst + lVar18 * 4 + uVar17 * 4 + -0x10);
        iVar38 = (iVar38 - (uint)(piVar1[3] == 0)) + 1;
        iVar39 = (iVar39 - (uint)(piVar1[2] == 0)) + 1;
        iVar40 = (iVar40 - (uint)(piVar1[1] == 0)) + 1;
        iVar41 = (iVar41 - (uint)(*piVar1 == 0)) + 1;
        iVar34 = (iVar34 - (uint)(piVar2[3] == 0)) + 1;
        iVar35 = (iVar35 - (uint)(piVar2[2] == 0)) + 1;
        iVar36 = (iVar36 - (uint)(piVar2[1] == 0)) + 1;
        iVar37 = (iVar37 - (uint)(*piVar2 == 0)) + 1;
        lVar18 = lVar18 + -8;
      } while (-lVar18 != (uVar17 & 0xfffffffffffffff8));
      uVar29 = iVar37 + iVar41 + iVar35 + iVar39 + iVar36 + iVar40 + iVar34 + iVar38;
      bVar33 = uVar17 == (uVar17 & 0xfffffffffffffff8);
      uVar17 = (ulonglong)((uint)uVar17 & 7);
      if (bVar33) goto LAB_140d7579f;
    }
    do {
      uVar29 = (uVar29 + 1) - (uint)(*(int *)(_Dst + uVar17 * 4 + -4) == 0);
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
LAB_140d7579f:
  if (uVar29 == 0) {
LAB_140d75d00:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  if (uVar27 <= uVar8) {
LAB_140d75a9d:
    LOCK();
    UNLOCK();
    ppVar12->full_num_non_empty_words_or_live_bytes = uVar29;
    uVar16 = (uint)(char)(param_1->base).page_config_kind;
    uVar5 = *(undefined4 *)&param_1->field_0x20;
    if (pas_exclusive_view_template_memo_table_instance.table_size <=
        (pas_exclusive_view_template_memo_table_instance.deleted_count +
        pas_exclusive_view_template_memo_table_instance.key_count) * 2) {
      uVar21 = pas_exclusive_view_template_memo_table_instance.table_size * 2;
      if (pas_exclusive_view_template_memo_table_instance.key_count * 6 <
          pas_exclusive_view_template_memo_table_instance.table_size * 2) {
        uVar21 = pas_exclusive_view_template_memo_table_instance.table_size;
      }
      uVar17 = 0x10;
      if (pas_exclusive_view_template_memo_table_instance.table_size != 0) {
        uVar17 = (ulonglong)uVar21;
      }
      uVar21 = (uint)uVar17;
      if ((uVar21 == 0) ||
         (uVar28 = uVar21 - ((uint)(uVar17 >> 1) & 0x55555555),
         uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333),
         1 < ((uVar28 >> 4) + uVar28 & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar23 = 0;
      pppVar15 = pas_bootstrap_free_heap_allocate_simple_for_config
                           (uVar17 * 8,"pas_exclusive_view_template_memo_table/table",
                            pas_object_allocation,(void *)0x0);
      memset(pppVar15,0,uVar17 * 8);
      pppVar24 = pas_exclusive_view_template_memo_table_instance.table;
      pas_exclusive_view_template_memo_table_instance.table_mask = uVar21 - 1;
      uVar17 = (ulonglong)pas_exclusive_view_template_memo_table_instance.table_size;
      if (uVar17 != 0) {
        uVar27 = 0;
        do {
          ppVar7 = pas_exclusive_view_template_memo_table_instance.table[uVar27];
          if ((pas_segregated_size_directory *)&DAT_00000001 < ppVar7) {
            uVar28 = ppVar7->object_size;
            uVar28 = uVar28 >> 4 ^ uVar28;
            uVar28 = uVar28 * 0x20 + (uVar28 ^ 0xdeadbeef);
            uVar28 = uVar28 >> 0xb ^ (int)(char)(ppVar7->base).page_config_kind ^ uVar28;
            do {
              uVar25 = uVar28 & pas_exclusive_view_template_memo_table_instance.table_mask;
              uVar28 = uVar28 + 1;
            } while ((pas_segregated_size_directory *)&DAT_00000001 < pppVar15[uVar25]);
            pppVar15[uVar25] = ppVar7;
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar17);
        uVar23 = uVar17 << 3;
      }
      pas_exclusive_view_template_memo_table_instance.deleted_count = 0;
      pas_exclusive_view_template_memo_table_instance.table = pppVar15;
      pas_exclusive_view_template_memo_table_instance.table_size = uVar21;
      pas_bootstrap_free_heap_deallocate_for_config
                (pppVar24,uVar23,pas_object_allocation,(void *)0x0);
    }
    uVar21 = ZPULL(uVar5,0,0x1b);
    uVar21 = uVar21 >> 4 ^ uVar21;
    uVar21 = uVar21 * 0x20 + (uVar21 ^ 0xdeadbeef);
    uVar21 = uVar21 >> 0xb ^ uVar16 ^ uVar21;
    pppVar24 = (pas_segregated_size_directory **)0x0;
    while( true ) {
      while( true ) {
        ppVar7 = pas_exclusive_view_template_memo_table_instance.table
                 [uVar21 & pas_exclusive_view_template_memo_table_instance.table_mask];
        if (ppVar7 != (pas_segregated_size_directory *)&DAT_00000001) break;
        if (pppVar24 == (pas_segregated_size_directory **)0x0) {
          pppVar24 = pas_exclusive_view_template_memo_table_instance.table +
                     (uVar21 & pas_exclusive_view_template_memo_table_instance.table_mask);
        }
        uVar21 = uVar21 + 1;
      }
      if (ppVar7 == (pas_segregated_size_directory *)0x0) break;
      if ((longlong)
          (int5)(CONCAT14((ppVar7->base).page_config_kind,*(undefined4 *)&ppVar7->field_0x20) &
                0xff07ffffff) == (CONCAT44(uVar16,uVar5) & 0xffffffff07ffffff)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar21 = uVar21 + 1;
    }
    pppVar15 = pas_exclusive_view_template_memo_table_instance.table +
               (uVar21 & pas_exclusive_view_template_memo_table_instance.table_mask);
    if (pppVar24 != (pas_segregated_size_directory **)0x0) {
      pas_exclusive_view_template_memo_table_instance.deleted_count =
           pas_exclusive_view_template_memo_table_instance.deleted_count - 1;
      pppVar15 = pppVar24;
    }
    pas_exclusive_view_template_memo_table_instance.key_count =
         pas_exclusive_view_template_memo_table_instance.key_count + 1;
    *pppVar15 = param_1;
    return;
  }
  ppVar6 = pas_segregated_page_config_kind_for_config_table[(char)(param_1->base).page_config_kind];
  if (ppVar6 == (pas_page_base_config *)0x0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  if (ppVar6->page_size <= ppVar6->granule_size) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  uVar17 = (ulonglong)(param_1->data).payload;
  lVar18 = uVar17 * 8 + pas_compact_heap_reservation_base;
  if (uVar17 == 0) {
    lVar18 = 0;
  }
  if ((uVar27 | uVar8) >> 0x20 == 0) {
    uVar17 = (uVar27 & 0xffffffff) / (uVar8 & 0xffffffff);
  }
  else {
    uVar17 = uVar27 / uVar8;
  }
  puVar13 = pas_immortal_heap_allocate_with_manual_alignment
                      (uVar17,1,"pas_extended_segregated_size_directory_data/full_use_counts",
                       pas_object_allocation);
  if ((bVar3 & 1U) == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  uVar31 = uVar17 * uVar8;
  memset(puVar13,0,uVar17);
  if (uVar14 != 0) {
    if (uVar31 == 0) goto LAB_140d759c1;
    uVar32 = uVar31;
    if (uVar14 < uVar31) {
      uVar32 = uVar14;
    }
    uVar32 = uVar32 - 1;
    if ((uVar32 | uVar8) >> 0x20 == 0) {
      uVar32 = (uVar32 & 0xffffffff) / (uVar8 & 0xffffffff);
    }
    else {
      uVar32 = uVar32 / uVar8;
    }
    if (uVar17 <= uVar32) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar19 = 0;
    do {
      if (puVar13[uVar19] == -1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      cVar20 = puVar13[uVar19] + '\x01';
      if (cVar20 == -1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      puVar13[uVar19] = cVar20;
      uVar19 = uVar19 + 1;
    } while (uVar19 <= uVar32);
  }
  if (uVar14 <= uVar31) {
    uVar32 = (ulonglong)(param_1->data).payload;
    uVar16 = *(uint *)(pas_compact_heap_reservation_base + uVar32 * 8);
    uVar14 = (ulonglong)uVar16;
    uVar21 = *(uint *)(pas_compact_heap_reservation_base + 4 + uVar32 * 8);
    uVar28 = param_1->object_size;
    if (uVar28 == 0) {
      do {
        if (uVar21 <= uVar16) goto LAB_140d759da;
      } while (uVar14 <= uVar31 && uVar31 - uVar14 != 0);
    }
    else {
      do {
        if (uVar21 <= uVar14) goto LAB_140d759da;
        if (uVar31 <= uVar14) break;
        uVar32 = uVar14 + uVar28;
        uVar19 = uVar31;
        if (uVar32 < uVar31) {
          uVar19 = uVar32;
        }
        uVar19 = uVar19 - 1;
        if ((uVar19 | uVar8) >> 0x20 == 0) {
          uVar19 = (uVar19 & 0xffffffff) / (uVar8 & 0xffffffff);
        }
        else {
          uVar19 = uVar19 / uVar8;
        }
        if (uVar17 <= uVar19) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if ((uVar14 | uVar8) >> 0x20 == 0) {
          uVar14 = (uVar14 & 0xffffffff) / (uVar8 & 0xffffffff);
        }
        else {
          uVar14 = uVar14 / uVar8;
        }
        for (; uVar14 <= uVar19; uVar14 = uVar14 + 1) {
          if (puVar13[uVar14] == -1) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          cVar20 = puVar13[uVar14] + '\x01';
          if (cVar20 == -1) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          puVar13[uVar14] = cVar20;
        }
        uVar14 = uVar32;
      } while (uVar32 <= uVar31);
    }
  }
LAB_140d759c1:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
LAB_140d759da:
  if (uVar30 < uVar27) {
    if (uVar31 <= uVar30) goto LAB_140d759c1;
    uVar14 = uVar31;
    if (uVar27 < uVar31) {
      uVar14 = uVar27;
    }
    uVar14 = uVar14 - 1;
    if ((uVar14 | uVar8) >> 0x20 == 0) {
      uVar14 = (uVar14 & 0xffffffff) / (uVar8 & 0xffffffff);
    }
    else {
      uVar14 = uVar14 / uVar8;
    }
    if (uVar17 <= uVar14) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if ((uVar30 | uVar8) >> 0x20 == 0) {
      uVar30 = (uVar30 & 0xffffffff) / (uVar8 & 0xffffffff);
    }
    else {
      uVar30 = uVar30 / uVar8;
    }
    for (; uVar30 <= uVar14; uVar30 = uVar30 + 1) {
      if (puVar13[uVar30] == -1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      cVar20 = puVar13[uVar30] + '\x01';
      if (cVar20 == -1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      puVar13[uVar30] = cVar20;
    }
    if (uVar31 < uVar27) goto LAB_140d759c1;
  }
  if (&DAT_00000007 < puVar13) {
    puVar13 = puVar13 + -pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= puVar13) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (puVar13 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
  }
  *(int *)(lVar18 + 0x10) = (int)puVar13;
  goto LAB_140d75a9d;
}

// pas_segregated_size_directory_create_tlc_view_cache @ 140d75d10

void __cdecl
pas_segregated_size_directory_create_tlc_view_cache(pas_segregated_size_directory *param_1)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  uchar uVar5;
  pas_segregated_page *ppVar6;
  longlong lVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  pas_segregated_view_opaque *ppVar13;
  bool bVar14;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((param_1->base).page_config_kind != 1) {
    do {
      uVar11 = (param_1->base).bits;
      if ((uVar11 | 4) == uVar11) {
        return;
      }
      puVar1 = &(param_1->base).bits;
      LOCK();
      bVar14 = uVar11 == *puVar1;
      if (bVar14) {
        *puVar1 = uVar11 | 4;
      }
      UNLOCK();
    } while (!bVar14);
    iVar2._0_1_ = (param_1->base).page_config_kind;
    iVar2._1_1_ = (param_1->base).sharing_mode;
    iVar2._2_1_ = (param_1->base).directory_kind;
    iVar2._3_1_ = (param_1->base).field_0xf;
    if (((iVar2 << 0x18 != 0) &&
        (((pas_segregated_page_config *)
         pas_segregated_page_config_kind_for_config_table[(iVar2 << 0x18) >> 0x18])->
         enable_view_cache == true)) &&
       (uVar5 = pas_heap_runtime_config_view_cache_capacity_for_object_size
                          (param_1->heap->runtime_config,param_1->object_size,
                           (pas_segregated_page_config *)
                           pas_segregated_page_config_kind_for_config_table[(iVar2 << 0x18) >> 0x18]
                          ), uVar5 != '\0')) {
      if (param_1->view_cache_index != 0xffffffff) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pas_thread_local_cache_layout_add_view_cache(param_1);
      if (param_1->view_cache_index == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (param_1->view_cache_index == 0xffffffff) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar12 = (ulonglong)(param_1->base).first_view.payload;
      uVar8 = 0;
      if (7 < uVar12) {
        uVar8 = pas_compact_heap_reservation_base;
      }
      if (uVar8 + uVar12 != 0) {
        uVar11 = (param_1->base).data.payload;
        lVar7 = (ulonglong)uVar11 * 8 + pas_compact_heap_reservation_base;
        uVar12 = 1;
        if ((lVar7 == 0 || uVar11 == 0) ||
           (uVar11 = *(int *)(lVar7 + 0x30) + 1, uVar12 = (ulonglong)uVar11, uVar11 != 0)) {
          uVar12 = uVar12 - 1;
          do {
            uVar9 = (ulonglong)(param_1->base).first_view.payload;
            uVar8 = pas_compact_heap_reservation_base;
            if (uVar9 < 8) {
              uVar8 = 0;
            }
            ppVar13 = (pas_segregated_view_opaque *)(uVar8 + uVar9);
            if (ppVar13 == (pas_segregated_view_opaque *)0x0) {
LAB_140d75ec0:
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar11 = (param_1->base).data.payload;
            lVar7 = (ulonglong)uVar11 * 8 + pas_compact_heap_reservation_base;
            uVar9 = 1;
            if (lVar7 != 0 && uVar11 != 0) {
              uVar9 = (ulonglong)(*(int *)(lVar7 + 0x30) + 1);
            }
            if (uVar9 <= uVar12) goto LAB_140d75ec0;
            bVar14 = uVar12 != 0;
            uVar12 = uVar12 - 1;
            if (bVar14) {
              lVar10 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar7 + 0x2c) * 8;
              if ((ulonglong)*(uint *)(lVar7 + 0x2c) == 0) {
                lVar10 = 0;
              }
              uVar9 = (ulonglong)*(uint *)(lVar10 + uVar12 * 4);
              uVar8 = 0;
              if (7 < uVar9) {
                uVar8 = pas_compact_heap_reservation_base;
              }
              ppVar13 = (pas_segregated_view_opaque *)(uVar8 + uVar9);
            }
            if ((((ulonglong)ppVar13 & 6) == 0) &&
               (bVar14 = pas_segregated_view_lock_ownership_lock_if_owned(ppVar13), bVar14)) {
              uVar11 = param_1->view_cache_index;
              ppVar6 = pas_segregated_view_get_page(ppVar13);
              ppVar6->view_cache_index = uVar11;
              pas_segregated_view_unlock_ownership_lock(ppVar13);
            }
          } while (uVar12 != 0xffffffffffffffff);
        }
      }
    }
  }
  return;
}

// pas_segregated_size_directory_ensure_data @ 140d75ed0

pas_segregated_size_directory_data * __cdecl
pas_segregated_size_directory_ensure_data
          (pas_segregated_size_directory *param_1,pas_lock_hold_mode param_2)

{
  pas_page_base_config *ppVar1;
  code *pcVar2;
  pas_segregated_size_directory_data *ppVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(param_1->data).payload;
  ppVar3 = (pas_segregated_size_directory_data *)(uVar4 * 8 + pas_compact_heap_reservation_base);
  if (ppVar3 == (pas_segregated_size_directory_data *)0x0 || uVar4 == 0) {
    ppVar1 = pas_segregated_page_config_kind_for_config_table
             [(char)(param_1->base).page_config_kind];
    if (param_2 == pas_lock_is_not_held) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    uVar4 = (ulonglong)(param_1->data).payload;
    ppVar3 = (pas_segregated_size_directory_data *)(uVar4 * 8 + pas_compact_heap_reservation_base);
    if (ppVar3 == (pas_segregated_size_directory_data *)0x0 || uVar4 == 0) {
      if ((ppVar1 == (pas_page_base_config *)0x0) || (ppVar1->page_size <= ppVar1->granule_size)) {
        ppVar3 = pas_immortal_heap_allocate
                           (0x10,"pas_segregated_size_directory_data",pas_object_allocation);
      }
      else {
        ppVar3 = pas_immortal_heap_allocate
                           (0x14,"pas_extended_segregated_size_directory_data",pas_object_allocation
                           );
        ppVar3[1].offset_from_page_boundary_to_first_object = 0;
      }
      ppVar3->offset_from_page_boundary_to_first_object = 0;
      ppVar3->offset_from_page_boundary_to_end_of_last_object = 0;
      ppVar3->full_num_non_empty_words_or_live_bytes = 0;
      ppVar3->full_alloc_bits = (uchar  [4])0x0;
      LOCK();
      UNLOCK();
      uVar4 = (longlong)ppVar3 - pas_compact_heap_reservation_base;
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
      (param_1->data).payload = (uint)(uVar4 >> 3);
    }
    if (param_2 == pas_lock_is_not_held) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
  }
  return ppVar3;
}

// pas_segregated_size_directory_get_extended_data @ 140d75fe0

pas_extended_segregated_size_directory_data * __cdecl
pas_segregated_size_directory_get_extended_data(pas_segregated_size_directory *param_1)

{
  pas_page_base_config *ppVar1;
  code *pcVar2;
  pas_extended_segregated_size_directory_data *ppVar3;
  ulonglong uVar4;
  
  ppVar1 = pas_segregated_page_config_kind_for_config_table[(char)(param_1->base).page_config_kind];
  if (ppVar1 == (pas_page_base_config *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (ppVar1->granule_size < ppVar1->page_size) {
    uVar4 = (ulonglong)(param_1->data).payload;
    ppVar3 = (pas_extended_segregated_size_directory_data *)
             (uVar4 * 8 + pas_compact_heap_reservation_base);
    if (uVar4 == 0) {
      ppVar3 = (pas_extended_segregated_size_directory_data *)0x0;
    }
    return ppVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_segregated_size_directory_view_cache_capacity @ 140d76030

uchar __cdecl
pas_segregated_size_directory_view_cache_capacity(pas_segregated_size_directory *param_1)

{
  int iVar1;
  uchar uVar2;
  
  iVar1._0_1_ = (param_1->base).page_config_kind;
  iVar1._1_1_ = (param_1->base).sharing_mode;
  iVar1._2_1_ = (param_1->base).directory_kind;
  iVar1._3_1_ = (param_1->base).field_0xf;
  if ((iVar1 << 0x18 != 0) &&
     (((pas_segregated_page_config *)
      pas_segregated_page_config_kind_for_config_table[(iVar1 << 0x18) >> 0x18])->enable_view_cache
      == true)) {
    uVar2 = pas_heap_runtime_config_view_cache_capacity_for_object_size
                      (param_1->heap->runtime_config,param_1->object_size,
                       (pas_segregated_page_config *)
                       pas_segregated_page_config_kind_for_config_table[(iVar1 << 0x18) >> 0x18]);
    return uVar2;
  }
  return '\0';
}

// pas_segregated_size_directory_select_allocator_slow @ 140d76070

pas_baseline_allocator * __cdecl
pas_segregated_size_directory_select_allocator_slow(pas_segregated_size_directory *param_1)

{
  pas_segregated_view_opaque *ppVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  pas_baseline_allocator *SRWLock;
  uint uVar5;
  pas_segregated_size_directory *ppVar6;
  bool bVar7;
  
  pas_baseline_allocator_table_initialize_if_necessary();
  uVar5 = param_1->encoded_stuff & 0x7f;
  if (0x1f < uVar5) goto LAB_140d760e3;
LAB_140d760b0:
  SRWLock = pas_baseline_allocator_table + uVar5;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((param_1->encoded_stuff & 0x7f) == uVar5) {
    return SRWLock;
  }
  do {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    uVar5 = param_1->encoded_stuff;
    while( true ) {
      uVar5 = uVar5 & 0x7f;
      if (uVar5 < 0x20) goto LAB_140d760b0;
LAB_140d760e3:
      if (uVar5 < 0x40) break;
      if (uVar5 != 0x40) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar3 = pas_baseline_allocator_table_get_random_index();
      uVar4 = pas_baseline_allocator_table_get_random_index();
      uVar5 = uVar3;
      if (((pas_baseline_allocator_table[uVar3].u.allocator.page_ish != 0) &&
          (uVar5 = uVar4, pas_baseline_allocator_table[uVar4].u.allocator.page_ish != 0)) &&
         (pas_baseline_allocator_table[uVar3].u.allocator.view == (pas_segregated_view_opaque *)0x0)
         ) {
        uVar5 = uVar3;
      }
      if (uVar5 + 0x20 < 0x80) {
        while (uVar3 = param_1->encoded_stuff, (uVar3 & 0x7f) == 0x40) {
          uVar4 = uVar3 >> 7;
          bVar7 = uVar4 == 0x1ffffff;
          if (bVar7) {
            uVar4 = 0xffffffff;
          }
          if (bVar7 == ((~uVar4 & 0x1ffffff) != 0)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          LOCK();
          bVar7 = uVar3 == param_1->encoded_stuff;
          if (bVar7) {
            param_1->encoded_stuff = uVar4 << 7 | uVar5 + 0x20;
          }
          UNLOCK();
          if (bVar7) goto LAB_140d76199;
        }
      }
      else if ((param_1->encoded_stuff & 0x7f) == 0x40) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = param_1->encoded_stuff;
    }
    uVar5 = uVar5 - 0x20;
LAB_140d76199:
    SRWLock = pas_baseline_allocator_table + uVar5;
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    uVar3 = param_1->encoded_stuff & 0x7f;
    if (uVar3 == uVar5) {
      return SRWLock;
    }
    if (uVar3 == uVar5 + 0x20) {
      if ((SRWLock->u).allocator.view != (pas_segregated_view_opaque *)0x0) {
        pas_num_baseline_allocator_evictions = pas_num_baseline_allocator_evictions + 1;
        ppVar1 = (SRWLock->u).allocator.view;
        if (((uint)ppVar1 & 7) == 5) {
          ppVar6 = (pas_segregated_size_directory *)((ulonglong)ppVar1 & 0xfffffffffffffff8);
        }
        else {
          ppVar6 = pas_segregated_view_get_size_directory_slow(ppVar1);
        }
        pas_baseline_allocator_detach_directory(SRWLock);
        do {
          uVar3 = ppVar6->encoded_stuff;
          uVar4 = uVar3 >> 7;
          bVar7 = uVar4 == 0x1ffffff;
          if (bVar7) {
            uVar4 = 0xffffffff;
          }
          if (((~uVar4 & 0x1ffffff) != 0) == bVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          LOCK();
          bVar7 = uVar3 == ppVar6->encoded_stuff;
          if (bVar7) {
            ppVar6->encoded_stuff = uVar4 << 7 | 0x40;
          }
          UNLOCK();
        } while (!bVar7);
      }
      pas_baseline_allocator_attach_directory(SRWLock,param_1);
      if (0x7f < uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      do {
        uVar3 = param_1->encoded_stuff;
        uVar4 = uVar3 >> 7;
        bVar7 = uVar4 == 0x1ffffff;
        if (bVar7) {
          uVar4 = 0xffffffff;
        }
        if (((~uVar4 & 0x1ffffff) != 0) == bVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        LOCK();
        bVar7 = uVar3 == param_1->encoded_stuff;
        if (bVar7) {
          param_1->encoded_stuff = uVar4 << 7 | uVar5;
        }
        UNLOCK();
      } while (!bVar7);
      return SRWLock;
    }
  } while( true );
}

// pas_segregated_size_directory_take_first_eligible @ 140d762e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_segregated_view_opaque * __cdecl
pas_segregated_size_directory_take_first_eligible(pas_segregated_size_directory *param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  pas_heap_runtime_config *ppVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  pas_segregated_size_directory *ppVar7;
  char cVar8;
  BOOLEAN BVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  pas_segregated_view_opaque *ppVar14;
  pas_segregated_partial_view *ppVar15;
  ulong64 uVar16;
  pas_segregated_exclusive_view *ppVar17;
  uint uVar18;
  int iVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 local_148 [44];
  int local_11c;
  ulonglong local_118;
  ulonglong local_110;
  pas_segregated_size_directory *local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  uint *local_d8;
  pas_segregated_size_directory *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint *local_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  uint uStack_a0;
  byte bStack_9c;
  ulonglong local_98;
  code *local_90;
  code *local_88;
  undefined8 uStack_80;
  pas_versioned_field local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)local_148;
  local_11c = *(int *)&pas_segregated_page_config_kind_for_config_table
                       [(char)(param_1->base).page_config_kind][1].field_0x4;
  local_108 = param_1;
LAB_140d76340:
  do {
    local_90 = pas_segregated_size_directory_take_first_eligible_impl_should_consider_view_parallel;
    local_88 = (code *)0x0;
    uStack_80 = 0;
    uVar23 = (ulonglong)(param_1->base).first_view.payload;
    local_d0 = param_1;
    do {
      uVar16 = pas_compact_heap_reservation_base;
      if ((uint)uVar23 < 8) {
        uVar16 = 0;
      }
      uVar10 = (local_d0->base).data.payload;
      uVar22 = (ulonglong)uVar10;
      if (uVar16 + uVar23 == 0) {
        pauVar20 = (undefined1 (*) [16])(pas_compact_heap_reservation_base + uVar22 * 8);
        uVar13 = 0;
      }
      else {
        pauVar20 = (undefined1 (*) [16])(uVar22 * 8 + pas_compact_heap_reservation_base);
        uVar13 = 1;
        if (pauVar20 != (undefined1 (*) [16])0x0 && uVar10 != 0) {
          uVar13 = (ulonglong)(*(int *)pauVar20[3] + 1);
        }
      }
      if ((uVar22 == 0) || (pauVar20 == (undefined1 (*) [16])0x0)) {
        uVar22 = 0xffffffffffffffff;
        if (((local_d0->base).bits & 1) == 0) {
          local_c8 = (ulonglong)((uint)uVar23 != 0);
          goto joined_r0x000140d76444;
        }
        local_c8 = 0;
        if (uVar13 == 0) goto LAB_140d76951;
      }
      else {
        do {
          uVar23 = *(ulonglong *)(*pauVar20 + 8);
          do {
            uVar11 = uVar23;
            local_c8 = *(ulonglong *)*pauVar20;
            uVar23 = *(ulonglong *)(*pauVar20 + 8);
          } while (*(ulonglong *)(*pauVar20 + 8) != uVar11);
          uVar22 = uVar11;
          if ((uVar11 & 1) != 0) break;
          uVar22 = uVar11 | 1;
          LOCK();
          auVar2 = *pauVar20;
          auVar5._8_8_ = uVar11;
          auVar5._0_8_ = local_c8;
          if (auVar5 == auVar2) {
            *(ulonglong *)*pauVar20 = local_c8;
            *(ulonglong *)(*pauVar20 + 8) = uVar22;
          }
          UNLOCK();
        } while (auVar5 != auVar2);
joined_r0x000140d76444:
        if (local_c8 == uVar13) goto LAB_140d76951;
      }
      uVar11 = local_c8;
      LOCK();
      UNLOCK();
      local_b8 = 0xffffffffffffffff;
      local_98 = 0;
      local_b0 = (uint *)0x0;
      uStack_a8 = 0;
      uStack_a3 = 0;
      uStack_a0 = 0;
      bStack_9c = 0;
      local_f0 = uVar13;
      local_c0 = uVar13;
      if (local_c8 == 0) {
        uVar10 = (local_d0->base).bits;
        uVar23 = CONCAT44(uVar10 >> 1,uVar10) & 0x100000001;
        iVar19 = (*local_90)(uVar23,&local_d0);
        if (iVar19 == 0) goto LAB_140d764b1;
        local_c8 = 0;
        local_b0 = (uint *)0x0;
        uStack_a8 = 0;
        uStack_a3 = 0;
        uStack_a0 = 1;
        bStack_9c = 1;
        local_b8 = 0;
        local_98 = uVar23;
        if (local_c0 != 0) {
          bVar24 = true;
          if ((local_88 != (code *)0x0) && (cVar8 = (*local_88)(&local_d0), cVar8 == '\0'))
          goto LAB_140d764b1;
          goto LAB_140d766a3;
        }
        if (local_f0 != 0) goto LAB_140d76830;
      }
      else {
LAB_140d764b1:
        uVar23 = (ulonglong)(local_d0->base).data.payload;
        lVar12 = uVar23 * 8 + pas_compact_heap_reservation_base;
        if (lVar12 == 0 || uVar23 == 0) {
LAB_140d766a0:
          bVar24 = false;
        }
        else {
          uVar23 = (local_c8 - 1) + (ulonglong)(local_c8 == 0);
          local_118 = uVar23 >> 7;
          local_100 = (ulonglong)*(uint *)(lVar12 + 0x24);
          local_e0 = (ulonglong)*(uint *)(lVar12 + 0x20) * 8 + pas_compact_heap_reservation_base;
          if ((ulonglong)*(uint *)(lVar12 + 0x20) == 0) {
            local_e0 = 0;
          }
          local_110 = local_118 * 4;
          if (local_100 <= local_110) goto LAB_140d766a0;
          uVar23 = (ulonglong)((uint)(uVar23 >> 5) & 3);
          do {
            uVar13 = (ulonglong)*(uint *)(local_e0 + local_118 * 4);
            local_f8 = uVar13 * 8 + pas_compact_heap_reservation_base;
            if (uVar13 == 0) {
              local_f8 = 0;
            }
            uVar13 = local_100 - local_110;
            local_e8 = 4;
            if (uVar13 < 4) {
              local_e8 = uVar13;
            }
            if (uVar23 < uVar13) {
              do {
                uVar13 = *(ulonglong *)(local_f8 + uVar23 * 8);
                uVar10 = (*local_90)(uVar13,&local_d0);
                if (uVar10 != 0) {
                  local_d8 = (uint *)(local_f8 + uVar23 * 8);
                  lVar12 = uVar23 + local_110;
                  do {
                    uVar18 = 0;
                    for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                      uVar18 = uVar18 + 1;
                    }
                    local_c8 = lVar12 * 0x20 + 1 + (ulonglong)uVar18;
                    uVar18 = 1 << ((byte)uVar18 & 0x1f);
                    local_b0 = local_d8;
                    uStack_a8 = (undefined5)local_c8;
                    uStack_a3 = (undefined3)(local_c8 >> 0x28);
                    bStack_9c = 0;
                    if (local_b8 == 0xffffffffffffffff) {
                      local_b8 = local_c8;
                    }
                    bVar24 = true;
                    uStack_a0 = uVar18;
                    local_98 = uVar13;
                    if (((local_c0 <= local_c8) || (local_88 == (code *)0x0)) ||
                       (cVar8 = (*local_88)(&local_d0), cVar8 != '\0')) goto LAB_140d766a3;
                    uVar10 = uVar10 & ~uVar18;
                  } while (uVar10 != 0);
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 < local_e8);
            }
            local_110 = local_118 * 4 + 4;
            local_118 = local_118 + 1;
            uVar23 = 0;
            bVar24 = false;
          } while (local_110 < local_100);
        }
LAB_140d766a3:
        if (local_c8 < local_b8 && local_b8 != 0xffffffffffffffff) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((bVar24) && (local_c8 < local_f0)) {
LAB_140d76830:
          if (local_f0 < local_b8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          local_78.value = uVar11;
          local_78.version = uVar22;
          pas_segregated_directory_update_first_eligible_after_search
                    (&local_d0->base,&local_78,local_b8);
          uVar23 = (ulonglong)(local_108->base).first_view.payload;
          uVar16 = 0;
          if (7 < uVar23) {
            uVar16 = pas_compact_heap_reservation_base;
          }
          ppVar17 = (pas_segregated_exclusive_view *)(uVar16 + uVar23);
          if (ppVar17 != (pas_segregated_exclusive_view *)0x0) {
            uVar10 = (local_108->base).data.payload;
            lVar12 = (ulonglong)uVar10 * 8 + pas_compact_heap_reservation_base;
            uVar23 = 1;
            if (lVar12 != 0 && uVar10 != 0) {
              uVar23 = (ulonglong)(*(int *)(lVar12 + 0x30) + 1);
            }
            if (local_c8 < uVar23) {
              if (local_c8 != 0) {
                lVar21 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar12 + 0x2c) * 8
                ;
                if ((ulonglong)*(uint *)(lVar12 + 0x2c) == 0) {
                  lVar21 = 0;
                }
                uVar23 = (ulonglong)*(uint *)(lVar21 + -4 + local_c8 * 4);
                uVar16 = 0;
                if (7 < uVar23) {
                  uVar16 = pas_compact_heap_reservation_base;
                }
                ppVar17 = (pas_segregated_exclusive_view *)(uVar16 + uVar23);
              }
              param_1 = local_108;
              if ((bStack_9c & 1) != 0) goto LAB_140d768f0;
              goto LAB_140d769f0;
            }
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
      LOCK();
      UNLOCK();
      uVar23 = (ulonglong)(local_d0->base).first_view.payload;
      uVar16 = pas_compact_heap_reservation_base;
      if (uVar23 < 8) {
        uVar16 = 0;
      }
      iVar19 = 0;
      if (uVar16 + uVar23 != 0) {
        uVar10 = (local_d0->base).data.payload;
        lVar12 = (ulonglong)uVar10 * 8 + pas_compact_heap_reservation_base;
        iVar19 = 1;
        if (lVar12 != 0 && uVar10 != 0) {
          iVar19 = *(int *)(lVar12 + 0x30) + 1;
        }
      }
    } while (iVar19 != (int)local_f0);
    if (local_f0 < local_b8) {
      local_b8 = local_f0;
    }
    local_c8 = local_f0;
    local_78.value = uVar11;
    local_78.version = uVar22;
    pas_segregated_directory_update_first_eligible_after_search(&local_d0->base,&local_78,local_b8);
LAB_140d76951:
    if (local_11c != 1) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    ppVar7 = local_d0;
    param_1 = local_108;
    uVar23 = (ulonglong)(local_108->base).first_view.payload;
    uVar16 = pas_compact_heap_reservation_base;
    if (uVar23 < 8) {
      uVar16 = 0;
    }
    uVar22 = 0;
    if (uVar16 + uVar23 != 0) {
      uVar10 = (local_108->base).data.payload;
      lVar12 = (ulonglong)uVar10 * 8 + pas_compact_heap_reservation_base;
      uVar22 = 1;
      if (lVar12 != 0 && uVar10 != 0) {
        uVar22 = (ulonglong)(*(int *)(lVar12 + 0x30) + 1);
      }
    }
    if (uVar22 < local_c8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar22 == local_c8) {
      ppVar3 = local_d0->heap->runtime_config;
      if (ppVar3->directory_size_bound_for_partial_views <= (uint)uVar22) {
        pas_segregated_size_directory_enable_exclusive_views(local_d0);
        uVar22 = local_c8;
      }
      if (ppVar3->directory_size_bound_for_baseline_allocators <= uVar22) {
        BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (BVar9 != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((ppVar7->base).page_config_kind != 1) {
          pas_segregated_size_directory_ensure_data(ppVar7,pas_lock_is_held);
          if (ppVar7->allocator_index == 0) {
            pas_thread_local_cache_layout_add(ppVar7);
            if (ppVar7->allocator_index == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (ppVar7->allocator_index == 0xffffffff) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
          }
          else if (ppVar7->allocator_index == 0xffffffff) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
      }
      if (ppVar3->directory_size_bound_for_no_view_cache <= local_c8) {
        pas_segregated_size_directory_create_tlc_view_cache(ppVar7);
      }
      uVar23 = (ulonglong)(ppVar7->data).payload;
      lVar12 = uVar23 * 8 + pas_compact_heap_reservation_base;
      if ((lVar12 == 0 || uVar23 == 0) || (*(int *)(lVar12 + 8) == 0)) {
        ppVar15 = pas_segregated_partial_view_create(ppVar7,local_c8);
        ppVar17 = (pas_segregated_exclusive_view *)((ulonglong)ppVar15 | 4);
      }
      else {
        ppVar17 = pas_segregated_exclusive_view_create(ppVar7,local_c8);
      }
      pas_segregated_directory_append(&param_1->base,local_c8,(pas_segregated_view_opaque *)ppVar17)
      ;
      if (local_11c != 1) {
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      }
LAB_140d76a08:
      if ((local_60 ^ (ulonglong)local_148) != __security_cookie.value) {
        pcVar4 = (code *)swi(3);
        ppVar14 = (pas_segregated_view_opaque *)(*pcVar4)();
        return ppVar14;
      }
      return (pas_segregated_view_opaque *)ppVar17;
    }
    if (local_11c != 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
  } while( true );
LAB_140d768f0:
  uVar10 = (local_108->base).bits;
  if (uVar10 == (uVar10 & 0xfffffffe)) goto LAB_140d76340;
  puVar1 = &(local_108->base).bits;
  LOCK();
  bVar24 = uVar10 == *puVar1;
  if (bVar24) {
    *puVar1 = uVar10 & 0xfffffffe;
  }
  UNLOCK();
  if (bVar24) goto LAB_140d76a08;
  goto LAB_140d768f0;
LAB_140d769f0:
  uVar10 = *local_b0;
  if (uVar10 == (uVar10 & ~uStack_a0)) goto LAB_140d76340;
  LOCK();
  uVar18 = *local_b0;
  if (uVar10 == uVar18) {
    *local_b0 = uVar10 & ~uStack_a0;
  }
  UNLOCK();
  if (uVar10 == uVar18) goto LAB_140d76a08;
  goto LAB_140d769f0;
}

// pas_segregated_size_directory_take_last_empty @ 140d76b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_page_sharing_pool_take_result __cdecl
pas_segregated_size_directory_take_last_empty
          (pas_segregated_size_directory *param_1,pas_deferred_decommit_log *param_2,
          pas_lock_hold_mode param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  int iVar6;
  pas_page_sharing_pool_take_result pVar7;
  ulonglong uVar8;
  pas_page_sharing_participant_opaque *ppVar9;
  longlong lVar10;
  pas_page_sharing_participant_kind pVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  pas_segregated_size_directory *local_d8;
  pas_segregated_size_directory *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  uint uStack_a0;
  undefined1 uStack_9c;
  ulonglong local_98;
  code *local_90;
  code *local_88;
  pas_deferred_decommit_log **local_80;
  pas_deferred_decommit_log *local_78;
  pas_lock_hold_mode local_70;
  pas_page_base_config *local_68;
  pas_page_sharing_pool_take_result local_60;
  pas_versioned_field local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_60 = pas_page_sharing_pool_take_none_available;
  local_68 = pas_segregated_page_config_kind_for_config_table
             [(char)(param_1->base).page_config_kind];
  local_90 = take_last_empty_size_should_consider_view_parallel;
  local_88 = take_last_empty_size_consider_view;
  local_80 = &local_78;
  uVar14 = (ulonglong)(param_1->base).data.payload;
  lVar10 = pas_compact_heap_reservation_base + uVar14 * 8;
  local_d0 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  if (lVar10 == 0 || uVar14 == 0) {
    if (((param_1->base).bits & 2) != 0) {
      uVar14 = 0xffffffffffffffff;
      uVar12 = 1;
LAB_140d76ca2:
      local_c8 = uVar12 - 1;
      local_b8 = 0xffffffffffffffff;
      local_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      uStack_a3 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uVar8 = (ulonglong)(param_1->base).data.payload;
      lVar10 = pas_compact_heap_reservation_base + uVar8 * 8;
      if (uVar8 == 0) {
        lVar10 = 0;
      }
      local_d8 = param_1;
      local_c0 = uVar12;
      local_58.value = uVar12;
      local_58.version = uVar14;
      if (((lVar10 != 0) && (local_c8 != 0)) && ((ulonglong)*(uint *)(lVar10 + 0x24) != 0)) {
        uVar14 = uVar12 - 2 >> 7;
        local_f0 = (ulonglong)*(uint *)(lVar10 + 0x20) * 8 + pas_compact_heap_reservation_base;
        if ((ulonglong)*(uint *)(lVar10 + 0x20) == 0) {
          local_f0 = 0;
        }
        if (*(uint *)(lVar10 + 0x24) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar12 = (ulonglong)((uint)(uVar12 - 2 >> 5) & 3);
        do {
          uVar8 = (ulonglong)*(uint *)(local_f0 + uVar14 * 4);
          local_f8 = uVar8 * 8 + pas_compact_heap_reservation_base;
          if (uVar8 == 0) {
            local_f8 = 0;
          }
          local_e0 = uVar14 * 0x80 + 1;
          local_e8 = uVar14;
          do {
            uVar14 = *(ulonglong *)(local_f8 + uVar12 * 8);
            uVar5 = (*local_90)(uVar14,&local_d0);
            if (uVar5 != 0) {
              lVar10 = local_f8 + uVar12 * 8;
              lVar15 = uVar12 * 0x20 + local_e0;
              do {
                uVar13 = 0x1f;
                if (uVar5 != 0) {
                  for (; uVar5 >> uVar13 == 0; uVar13 = uVar13 - 1) {
                  }
                }
                local_c8 = (ulonglong)uVar13 + lVar15;
                uVar13 = 1 << ((byte)uVar13 & 0x1f);
                uStack_a8 = (undefined5)local_c8;
                uStack_a3 = (undefined3)(local_c8 >> 0x28);
                uStack_9c = 0;
                if (local_b8 == 0xffffffffffffffff) {
                  local_b8 = local_c8;
                }
                local_b0 = lVar10;
                uStack_a0 = uVar13;
                local_98 = uVar14;
                if (((local_c0 <= local_c8) || (local_88 == (code *)0x0)) ||
                   (cVar4 = (*local_88)(&local_d0), cVar4 != '\0')) goto LAB_140d76ede;
                uVar5 = uVar5 & ~uVar13;
              } while (uVar5 != 0);
            }
            bVar16 = uVar12 != 0;
            uVar12 = uVar12 - 1;
          } while (bVar16);
          uVar12 = 3;
          uVar14 = local_e8 - 1;
        } while (local_e8 != 0);
      }
      uVar5 = (local_d0->base).bits;
      uVar14 = CONCAT44(uVar5 >> 1,uVar5) & 0x100000001;
      iVar6 = (*local_90)(uVar14,&local_d0);
      if (iVar6 != 0) {
        local_c8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        uStack_a3 = 0;
        uStack_a0 = 1;
        uStack_9c = 1;
        if (local_b8 == 0xffffffffffffffff) {
          local_b8 = 0;
        }
        local_98 = uVar14;
        if ((local_88 == (code *)0x0) || (cVar4 = (*local_88)(&local_d0), cVar4 != '\0')) {
LAB_140d76ede:
          pas_segregated_directory_update_last_empty_plus_one_after_search
                    (&local_d0->base,&local_58,local_b8 + 1);
          uVar14 = (ulonglong)(local_d8->base).data.payload;
          if ((uVar14 == 0) ||
             (lVar10 = pas_compact_heap_reservation_base + uVar14 * 8, lVar10 == 0)) {
LAB_140d76ff2:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar5 = *(uint *)(lVar10 + 0x38);
          iVar6 = (int)pas_compact_heap_reservation_base;
          if (uVar5 < 8) {
            iVar6 = 0;
          }
          if ((iVar6 + uVar5 & 1) == 0) goto LAB_140d76ff2;
          bVar1 = (local_d8->base).directory_kind;
          pVar11 = pas_page_sharing_participant_segregated_size_directory;
          if (bVar1 != 0) {
            if (bVar1 != 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            pVar11 = pas_page_sharing_participant_segregated_shared_page_directory;
          }
          ppVar9 = pas_page_sharing_participant_create(local_d8,pVar11);
          pas_page_sharing_pool_did_create_delta(&pas_physical_page_sharing_pool,ppVar9);
          if ((local_48 ^ (ulonglong)auStack_118) == __security_cookie.value) {
            return local_60;
          }
          goto LAB_140d76f8f;
        }
      }
      local_c8 = 0;
      pas_segregated_directory_update_last_empty_plus_one_after_search
                (&local_d0->base,&local_58,local_b8 + 1);
    }
  }
  else {
    do {
      uVar14 = *(ulonglong *)(lVar10 + 0x18);
      do {
        uVar8 = uVar14;
        uVar12 = *(ulonglong *)(lVar10 + 0x10);
        uVar14 = *(ulonglong *)(lVar10 + 0x18);
      } while (*(ulonglong *)(lVar10 + 0x18) != uVar8);
      uVar14 = uVar8;
      if ((uVar8 & 1) != 0) break;
      uVar14 = uVar8 | 1;
      LOCK();
      auVar3._8_8_ = uVar8;
      auVar3._0_8_ = uVar12;
      bVar16 = auVar3 == *(undefined1 (*) [16])(lVar10 + 0x10);
      if (bVar16) {
        *(ulonglong *)*(undefined1 (*) [16])(lVar10 + 0x10) = uVar12;
        *(ulonglong *)(lVar10 + 0x18) = uVar14;
      }
      UNLOCK();
    } while (!bVar16);
    if (uVar12 != 0) goto LAB_140d76ca2;
  }
  if ((local_48 ^ (ulonglong)auStack_118) == __security_cookie.value) {
    return pas_page_sharing_pool_take_none_available;
  }
LAB_140d76f8f:
  pcVar2 = (code *)swi(3);
  pVar7 = (*pcVar2)();
  return pVar7;
}

// take_last_empty_size_should_consider_view_parallel @ 140d77000

uint __cdecl
take_last_empty_size_should_consider_view_parallel
          (pas_segregated_directory_bitvector_segment param_1,
          pas_segregated_directory_iterate_config *param_2)

{
  return param_1.empty_bits;
}

// take_last_empty_size_consider_view @ 140d77010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl take_last_empty_size_consider_view(pas_segregated_directory_iterate_config *param_1)

{
  PSRWLOCK SRWLock;
  uint *puVar1;
  uint uVar2;
  pas_lock_hold_mode pVar3;
  int iVar4;
  pas_mmap_capability pVar5;
  pas_segregated_directory *ppVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  pas_deferred_decommit_log *ppVar10;
  ulonglong uVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  byte bVar15;
  BOOLEAN BVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  pas_segregated_page *ppVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  void *pvVar23;
  ulong64 uVar24;
  uint uVar25;
  longlong lVar26;
  pas_lock *ppVar27;
  PSRWLOCK SRWLock_00;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined8 *puVar32;
  bool bVar33;
  undefined1 auStackY_b8 [32];
  PSRWLOCK local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  ppVar6 = param_1->directory;
  uVar7 = param_1->index;
  if (uVar7 == 0) {
    do {
      uVar2 = ppVar6->bits;
      if ((uVar2 & 0xfffffffd) == uVar2) goto LAB_140d77306;
      LOCK();
      bVar33 = uVar2 == ppVar6->bits;
      if (bVar33) {
        ppVar6->bits = uVar2 & 0xfffffffd;
      }
      UNLOCK();
    } while (!bVar33);
  }
  else {
    uVar30 = uVar7 - 1;
    uVar18 = (ulonglong)
             *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                      (ulonglong)(ppVar6->data).payload * 8);
    uVar29 = (ulonglong)((uint)(uVar30 >> 5) & 3);
    lVar26 = pas_compact_heap_reservation_base + uVar18 * 8;
    if (uVar18 == 0) {
      lVar26 = 0;
    }
    uVar18 = (ulonglong)*(uint *)(lVar26 + (uVar30 >> 7) * 4);
    lVar26 = pas_compact_heap_reservation_base + uVar18 * 8;
    if (uVar18 == 0) {
      lVar26 = 0;
    }
    bVar15 = (byte)uVar30 & 0x1f;
    do {
      uVar2 = *(uint *)(lVar26 + 4 + uVar29 * 8);
      uVar25 = uVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
      if (uVar2 == uVar25) goto LAB_140d77306;
      puVar1 = (uint *)(lVar26 + 4 + uVar29 * 8);
      LOCK();
      bVar33 = uVar2 == *puVar1;
      if (bVar33) {
        *puVar1 = uVar25;
      }
      UNLOCK();
    } while (!bVar33);
  }
  uVar30 = (ulonglong)(ppVar6->first_view).payload;
  uVar24 = 0;
  if (7 < uVar30) {
    uVar24 = pas_compact_heap_reservation_base;
  }
  puVar32 = (undefined8 *)(uVar24 + uVar30);
  if (puVar32 == (undefined8 *)0x0) {
LAB_140d776aa:
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  uVar2 = (ppVar6->data).payload;
  lVar26 = (ulonglong)uVar2 * 8 + pas_compact_heap_reservation_base;
  uVar30 = 1;
  if (lVar26 != 0 && uVar2 != 0) {
    uVar30 = (ulonglong)(*(int *)(lVar26 + 0x30) + 1);
  }
  if (uVar30 <= uVar7) goto LAB_140d776aa;
  if (uVar7 != 0) {
    lVar31 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar26 + 0x2c) * 8;
    if ((ulonglong)*(uint *)(lVar26 + 0x2c) == 0) {
      lVar31 = 0;
    }
    uVar30 = (ulonglong)*(uint *)(lVar31 + -4 + uVar7 * 4);
    uVar24 = 0;
    if (7 < uVar30) {
      uVar24 = pas_compact_heap_reservation_base;
    }
    puVar32 = (undefined8 *)(uVar24 + uVar30);
  }
  if ((puVar32 == (undefined8 *)0x0) || (((ulonglong)puVar32 & 7) != 0)) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  local_50 = (PSRWLOCK)0x0;
  puVar8 = param_1->arg;
  puVar9 = (ulonglong *)puVar8[2];
  pVar3 = *(pas_lock_hold_mode *)(puVar8 + 1);
  ppVar10 = (pas_deferred_decommit_log *)*puVar8;
  uVar30 = *puVar9;
  uVar18 = puVar9[1];
  uVar29 = puVar9[4];
  uVar11 = puVar9[5];
  pcVar12 = (code *)puVar9[8];
  pcVar13 = (code *)puVar9[9];
  pcVar14 = (code *)puVar9[0xc];
  iVar4 = *(int *)((longlong)puVar9 + 0x6c);
  uVar21 = puVar9[0x10];
  if (iVar4 == 1) {
    if (pVar3 == pas_lock_is_not_held) {
      ppVar27 = &pas_heap_lock;
      goto LAB_140d771e9;
    }
    if (pVar3 != pas_lock_is_held) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
LAB_140d771fd:
    BVar16 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if (BVar16 != '\0') {
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
  }
  else {
    ppVar27 = (pas_lock *)(puVar32 + 3);
LAB_140d771e9:
    AcquireSRWLockExclusive((PSRWLOCK)ppVar27);
    local_50 = (PSRWLOCK)ppVar27;
    if (iVar4 == 1) goto LAB_140d771fd;
  }
  if (*(char *)((longlong)puVar32 + 0xb) == '\x01') {
    ppVar19 = (pas_segregated_page *)(*pcVar12)(*puVar32);
    if (uVar7 == 0) {
      do {
        uVar2 = ppVar6->bits;
        if ((uVar2 & 0xfffffffe) == uVar2) goto LAB_140d772f8;
        LOCK();
        bVar33 = uVar2 == ppVar6->bits;
        if (bVar33) {
          ppVar6->bits = uVar2 & 0xfffffffe;
        }
        UNLOCK();
      } while (!bVar33);
    }
    else {
      uVar22 = uVar7 - 1;
      uVar20 = (ulonglong)
               *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                        (ulonglong)(ppVar6->data).payload * 8);
      uVar28 = (ulonglong)((uint)(uVar22 >> 5) & 3);
      lVar26 = pas_compact_heap_reservation_base + uVar20 * 8;
      if (uVar20 == 0) {
        lVar26 = 0;
      }
      uVar20 = (ulonglong)*(uint *)(lVar26 + (uVar22 >> 7) * 4);
      lVar26 = pas_compact_heap_reservation_base + uVar20 * 8;
      if (uVar20 == 0) {
        lVar26 = 0;
      }
      bVar15 = (byte)uVar22 & 0x1f;
      do {
        uVar2 = *(uint *)(lVar26 + uVar28 * 8);
        uVar25 = uVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
        if (uVar2 == uVar25) goto LAB_140d772f8;
        puVar1 = (uint *)(lVar26 + uVar28 * 8);
        LOCK();
        bVar33 = uVar2 == *puVar1;
        if (bVar33) {
          *puVar1 = uVar25;
        }
        UNLOCK();
      } while (!bVar33);
    }
    if (*(char *)((longlong)puVar32 + 0xb) != '\0') {
      if ((uVar30 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      if ((ppVar19->emptiness).num_non_empty_words_or_live_bytes != 0) {
        if (uVar29 == uVar11) {
LAB_140d772be:
          pas_segregated_directory_view_did_become_eligible_at_index(ppVar6,uVar7);
          goto LAB_140d772f8;
        }
        if (uVar29 <= uVar11) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if ((uVar29 | uVar11) >> 0x20 == 0) {
          uVar30 = (uVar29 & 0xffffffff) / (uVar11 & 0xffffffff);
        }
        else {
          uVar30 = uVar29 / uVar11;
        }
        do {
          bVar33 = uVar30 == 0;
          uVar30 = uVar30 - 1;
          if (bVar33) goto LAB_140d772be;
        } while (*(char *)((longlong)ppVar19->alloc_bits + uVar30 + (uVar21 + 0x1f >> 5) * 4) !=
                 '\0');
      }
      if (iVar4 == 1) {
        if (pVar3 == pas_lock_is_held) {
          ppVar27 = (pas_lock *)0x0;
        }
        else {
          if (pVar3 != pas_lock_is_not_held) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          ppVar27 = &pas_heap_lock;
        }
        if (local_50 != (PSRWLOCK)ppVar27) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        BVar16 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (BVar16 != '\0') {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
      }
      else if (local_50 != (PSRWLOCK)ppVar19->lock_ptr) {
        local_50 = (PSRWLOCK)
                   pas_segregated_page_switch_lock_slow
                             (ppVar19,(pas_lock *)local_50,ppVar19->lock_ptr);
      }
      if (uVar7 == 0) {
        if ((ppVar6->bits & 1) != 0) goto LAB_140d77653;
        do {
          uVar2 = ppVar6->bits;
          if ((uVar2 & 0xfffffffd) == uVar2) break;
          LOCK();
          bVar33 = uVar2 == ppVar6->bits;
          if (bVar33) {
            ppVar6->bits = uVar2 & 0xfffffffd;
          }
          UNLOCK();
        } while (!bVar33);
      }
      else {
        uVar30 = uVar7 - 1;
        uVar21 = (ulonglong)
                 *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                          (ulonglong)(ppVar6->data).payload * 8);
        lVar26 = pas_compact_heap_reservation_base + uVar21 * 8;
        if (uVar21 == 0) {
          lVar26 = 0;
        }
        uVar21 = (ulonglong)*(uint *)(lVar26 + (uVar30 >> 7) * 4);
        lVar26 = pas_compact_heap_reservation_base + uVar21 * 8;
        if (uVar21 == 0) {
          lVar26 = 0;
        }
        if ((*(uint *)(lVar26 + (ulonglong)((uint)(uVar30 >> 2) & 0x18)) >> ((uint)uVar30 & 0x1f) &
            1) != 0) {
LAB_140d77653:
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        uVar22 = (ulonglong)
                 *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                          (ulonglong)(ppVar6->data).payload * 8);
        uVar21 = (ulonglong)((uint)(uVar30 >> 5) & 3);
        lVar26 = pas_compact_heap_reservation_base + uVar22 * 8;
        if (uVar22 == 0) {
          lVar26 = 0;
        }
        uVar22 = (ulonglong)*(uint *)(lVar26 + (uVar30 >> 7) * 4);
        lVar26 = pas_compact_heap_reservation_base + uVar22 * 8;
        if (uVar22 == 0) {
          lVar26 = 0;
        }
        bVar15 = (byte)uVar30 & 0x1f;
        do {
          uVar2 = *(uint *)(lVar26 + 4 + uVar21 * 8);
          uVar25 = uVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
          if (uVar2 == uVar25) break;
          puVar1 = (uint *)(lVar26 + 4 + uVar21 * 8);
          LOCK();
          bVar33 = uVar2 == *puVar1;
          if (bVar33) {
            *puVar1 = uVar25;
          }
          UNLOCK();
        } while (!bVar33);
      }
      if (iVar4 == 1) {
        if (uVar29 != uVar11) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        BVar16 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (BVar16 != '\0') {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        *(undefined1 *)((longlong)puVar32 + 0xb) = 0;
        pVar5 = *(pas_mmap_capability *)(uVar18 + 0x438);
        pvVar23 = (void *)(*pcVar13)(ppVar19);
        pas_page_malloc_decommit(pvVar23,uVar29,pVar5);
        ppVar10->total = ppVar10->total + uVar29;
        (*pcVar14)(ppVar19,1);
        pas_segregated_directory_view_did_become_eligible_at_index(ppVar6,uVar7);
        if (local_50 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_50);
        }
LAB_140d775e3:
        *(undefined4 *)(puVar8 + 3) = 3;
        bVar33 = true;
      }
      else {
        if ((ppVar19->emptiness).num_non_empty_words_or_live_bytes == 0) {
          SRWLock = (PSRWLOCK)(puVar32 + 3);
          if (local_50 == SRWLock) {
            *(undefined1 *)((longlong)puVar32 + 0xb) = 0;
            SRWLock_00 = local_50;
            if (local_50 != (PSRWLOCK)0x0) goto LAB_140d7769d;
          }
          else {
            if (local_50 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(local_50);
            }
            AcquireSRWLockExclusive(SRWLock);
            *(undefined1 *)((longlong)puVar32 + 0xb) = 0;
            SRWLock_00 = SRWLock;
LAB_140d7769d:
            ReleaseSRWLockExclusive(SRWLock_00);
          }
          bVar33 = pas_segregated_page_take_physically
                             (ppVar19,ppVar10,pas_range_is_not_locked,pVar3);
          if (bVar33) {
            (*pcVar14)(ppVar19,pVar3);
            pas_segregated_directory_view_did_become_eligible_at_index(ppVar6,uVar7);
            goto LAB_140d775e3;
          }
          if (ppVar6->page_config_kind == 1) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          AcquireSRWLockExclusive(SRWLock);
          *(undefined1 *)((longlong)puVar32 + 0xb) = 1;
          ReleaseSRWLockExclusive(SRWLock);
          pas_segregated_directory_view_did_become_eligible_at_index(ppVar6,uVar7);
        }
        else {
          bVar33 = pas_segregated_page_take_empty_granules
                             (ppVar19,ppVar10,(pas_lock **)&local_50,pas_range_is_not_locked,pVar3);
          if (local_50 == (PSRWLOCK)0x0) {
            uVar24 = pas_segregated_page_get_num_committed_granules(ppVar19);
          }
          else {
            ReleaseSRWLockExclusive(local_50);
            local_50 = (PSRWLOCK)0x0;
            uVar24 = pas_segregated_page_get_num_committed_granules(ppVar19);
          }
          if (uVar24 == 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          pas_segregated_directory_view_did_become_eligible_at_index(ppVar6,uVar7);
          if (bVar33) goto LAB_140d775e3;
        }
        pas_segregated_directory_view_did_become_empty_at_index(ppVar6,uVar7);
        *(undefined4 *)(puVar8 + 3) = 2;
        bVar33 = true;
      }
      goto LAB_140d77308;
    }
    bVar33 = pas_segregated_directory_view_did_become_eligible_at_index(ppVar6,uVar7);
    if (!bVar33) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
  }
LAB_140d772f8:
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
  }
LAB_140d77306:
  bVar33 = false;
LAB_140d77308:
  if ((local_48 ^ (ulonglong)auStackY_b8) == __security_cookie.value) {
    return bVar33;
  }
  pcVar12 = (code *)swi(3);
  uVar17 = (*pcVar12)();
  return (bool)uVar17;
}

// pas_segregated_size_directory_for_object @ 140d776c0

pas_segregated_size_directory * __cdecl
pas_segregated_size_directory_for_object(ulong64 param_1,pas_heap_config *param_2)

{
  pas_segregated_view_opaque *ppVar1;
  pas_segregated_size_directory *ppVar2;
  
  ppVar1 = pas_segregated_view_for_object(param_1,param_2);
  if (ppVar1 == (pas_segregated_view_opaque *)0x0) {
    return (pas_segregated_size_directory *)0x0;
  }
  if (((uint)ppVar1 & 7) == 5) {
    return (pas_segregated_size_directory *)((ulonglong)ppVar1 & 0xfffffffffffffff8);
  }
  ppVar2 = pas_segregated_view_get_size_directory_slow(ppVar1);
  return ppVar2;
}

// pas_segregated_size_directory_get_allocator_from_tlc @ 140d77700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_baseline_allocator_result * __cdecl
pas_segregated_size_directory_get_allocator_from_tlc
          (pas_baseline_allocator_result *__return_storage_ptr__,
          pas_segregated_size_directory *param_1,ulong64 param_2,pas_size_lookup_mode param_3,
          pas_heap_config *param_4,uint *param_5)

{
  code *pcVar1;
  pas_thread_local_cache *ppVar2;
  pas_baseline_allocator_result *ppVar3;
  uint uVar4;
  pas_baseline_allocator *SRWLock;
  uint uVar5;
  bool bVar6;
  undefined1 auStackY_88 [32];
  pas_local_allocator_result local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (param_1->allocator_index == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 != &pas_utility_heap_config) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_segregated_heap_ensure_allocator_index
              (param_1->heap,param_1,param_2,param_3,param_4,param_5);
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    uVar5 = param_1->encoded_stuff & 0x7f;
    if (uVar5 < 0x20) {
      SRWLock = pas_baseline_allocator_table + uVar5;
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if ((param_1->encoded_stuff & 0x7f) == uVar5) {
        pas_baseline_allocator_detach_directory(SRWLock);
        do {
          uVar5 = param_1->encoded_stuff;
          uVar4 = uVar5 >> 7;
          bVar6 = uVar4 == 0x1ffffff;
          if (bVar6) {
            uVar4 = 0xffffffff;
          }
          if (((~uVar4 & 0x1ffffff) != 0) == bVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          LOCK();
          bVar6 = uVar5 == param_1->encoded_stuff;
          if (bVar6) {
            param_1->encoded_stuff = uVar4 << 7 | 0x40;
          }
          UNLOCK();
        } while (!bVar6);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    uVar5 = param_1->allocator_index;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar2 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if (ppVar2 < (pas_thread_local_cache *)&DAT_00000002) {
      ppVar2 = pas_thread_local_cache_get_slow(param_4,pas_lock_is_not_held);
    }
    if (uVar5 < ppVar2->allocator_index_upper_bound) {
      local_50.allocator = ppVar2->local_allocators + uVar5;
    }
    else if ((uVar5 == 0xffffffff) ||
            (pas_thread_local_cache_get_local_allocator_slow
                       (&local_50,ppVar2,uVar5,pas_lock_is_not_held),
            (local_50.did_succeed & 1U) == 0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    __return_storage_ptr__->did_succeed = true;
    __return_storage_ptr__->allocator = local_50.allocator;
    __return_storage_ptr__->lock = (pas_lock *)0x0;
    if ((local_40 ^ (ulonglong)auStackY_88) != __security_cookie.value) {
      pcVar1 = (code *)swi(3);
      ppVar3 = (pas_baseline_allocator_result *)(*pcVar1)();
      return ppVar3;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_size_directory_compute_summary_for_unowned_exclusive @ 140d778f0

pas_heap_summary * __cdecl
pas_segregated_size_directory_compute_summary_for_unowned_exclusive
          (pas_heap_summary *__return_storage_ptr__,pas_segregated_size_directory *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  int *piVar7;
  
  bVar1 = (param_1->base).page_config_kind;
  if (bVar1 != 0) {
    uVar6 = (ulonglong)(param_1->data).payload;
    piVar7 = (int *)(uVar6 * 8 + pas_compact_heap_reservation_base);
    if (uVar6 == 0) {
      piVar7 = (int *)0x0;
    }
    uVar4 = pas_segregated_page_config_kind_for_config_table[(char)bVar1]->page_size;
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
    iVar2 = piVar7[1];
    iVar3 = *piVar7;
    __return_storage_ptr__->decommitted = __return_storage_ptr__->decommitted + uVar4;
    __return_storage_ptr__->free = __return_storage_ptr__->free + (ulonglong)(uint)(iVar2 - iVar3);
    __return_storage_ptr__->free_decommitted =
         __return_storage_ptr__->free_decommitted + (ulonglong)(uint)(iVar2 - iVar3);
    return __return_storage_ptr__;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

// pas_segregated_size_directory_for_each_live_object @ 140d77960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_segregated_size_directory_for_each_live_object
          (pas_segregated_size_directory *param_1,
          _func___cdecl_bool_pas_segregated_size_directory_ptr_pas_segregated_view_opaque_ptr_ulong64_void_ptr
          *param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  pas_segregated_view_opaque *ppVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [40];
  pas_segregated_size_directory *local_50;
  _func___cdecl_bool_pas_segregated_size_directory_ptr_pas_segregated_view_opaque_ptr_ulong64_void_ptr
  *local_48;
  void *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar11 = (ulonglong)(param_1->base).first_view.payload;
  uVar7 = 0;
  if (7 < uVar11) {
    uVar7 = pas_compact_heap_reservation_base;
  }
  ppVar5 = (pas_segregated_view_opaque *)(uVar7 + uVar11);
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  if (ppVar5 != (pas_segregated_view_opaque *)0x0) {
    uVar1 = (param_1->base).data.payload;
    lVar8 = (ulonglong)uVar1 * 8 + pas_compact_heap_reservation_base;
    if (lVar8 != 0 && uVar1 != 0) {
      if (*(int *)(lVar8 + 0x30) == -1) goto LAB_140d779a6;
      if (*(int *)(lVar8 + 0x30) == -1) {
LAB_140d77aea:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    bVar10 = false;
    bVar3 = pas_segregated_view_for_each_live_object
                      (ppVar5,for_each_live_object_segregated_size_directory_callback,&local_50,
                       pas_lock_is_not_held);
    if (!bVar3) goto LAB_140d77ac2;
    uVar11 = (ulonglong)(param_1->base).first_view.payload;
    uVar7 = 0;
    if (7 < uVar11) {
      uVar7 = pas_compact_heap_reservation_base;
    }
    if (uVar7 + uVar11 != 0) {
      uVar11 = 1;
      do {
        uVar6 = (ulonglong)(param_1->base).data.payload;
        if (((uVar6 == 0) || (lVar8 = pas_compact_heap_reservation_base + uVar6 * 8, lVar8 == 0)) ||
           (*(int *)(lVar8 + 0x30) + 1 <= uVar11)) break;
        if (*(int *)(lVar8 + 0x30) + 1 <= uVar11) goto LAB_140d77aea;
        lVar9 = pas_compact_heap_reservation_base + (ulonglong)*(uint *)(lVar8 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar8 + 0x2c) == 0) {
          lVar9 = 0;
        }
        uVar6 = (ulonglong)*(uint *)(lVar9 + -4 + uVar11 * 4);
        bVar10 = false;
        uVar7 = 0;
        if (7 < uVar6) {
          uVar7 = pas_compact_heap_reservation_base;
        }
        bVar3 = pas_segregated_view_for_each_live_object
                          ((pas_segregated_view_opaque *)(uVar7 + uVar6),
                           for_each_live_object_segregated_size_directory_callback,&local_50,
                           pas_lock_is_not_held);
        if (!bVar3) goto LAB_140d77ac2;
        uVar11 = uVar11 + 1;
        uVar6 = (ulonglong)(param_1->base).first_view.payload;
        uVar7 = pas_compact_heap_reservation_base;
        if (uVar6 < 8) {
          uVar7 = 0;
        }
      } while (uVar7 + uVar6 != 0);
    }
  }
LAB_140d779a6:
  bVar10 = true;
LAB_140d77ac2:
  if ((local_38 ^ (ulonglong)auStack_78) != __security_cookie.value) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return bVar10;
}

// for_each_live_object_segregated_size_directory_callback @ 140d77b00

bool __cdecl
for_each_live_object_segregated_size_directory_callback
          (pas_segregated_view_opaque *param_1,pas_range *param_2,void *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  uVar1 = param_2->begin;
  if (param_2->end < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_2->end - uVar1 == (ulonglong)(*(uint *)(*(longlong *)param_3 + 0x20) & 0x7ffffff)) {
                    /* WARNING: Could not recover jumptable at 0x000140d77b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)((longlong)param_3 + 8))
                      (*(longlong *)param_3,param_1,uVar1,*(undefined8 *)((longlong)param_3 + 0x10))
    ;
    return (bool)uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_segregated_size_directory_local_allocator_size @ 140d77b40

ulong64 __cdecl
pas_segregated_size_directory_local_allocator_size(pas_segregated_size_directory *param_1)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  iVar1._0_1_ = (param_1->base).page_config_kind;
  iVar1._1_1_ = (param_1->base).sharing_mode;
  iVar1._2_1_ = (param_1->base).directory_kind;
  iVar1._3_1_ = (param_1->base).field_0xf;
  if (iVar1 << 0x18 == 0) {
    return 0x50;
  }
  if ((pas_segregated_page_config_kind_for_config_table[(iVar1 << 0x18) >> 0x18]->is_enabled & 1U)
      != 0) {
    uVar3 = *(longlong *)
             &pas_segregated_page_config_kind_for_config_table[(iVar1 << 0x18) >> 0x18][1].
              page_config_kind + 0x3fU >> 6;
    uVar4 = 0x50;
    if (0x10 < uVar3 * 8) {
      uVar4 = uVar3 * 8 + 0x40;
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_segregated_size_directory_num_allocator_indices @ 140d77ba0

uint __cdecl
pas_segregated_size_directory_num_allocator_indices(pas_segregated_size_directory *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1._0_1_ = (param_1->base).page_config_kind;
  iVar1._1_1_ = (param_1->base).sharing_mode;
  iVar1._2_1_ = (param_1->base).directory_kind;
  iVar1._3_1_ = (param_1->base).field_0xf;
  if (iVar1 << 0x18 == 0) {
    return 10;
  }
  if ((pas_segregated_page_config_kind_for_config_table[(iVar1 << 0x18) >> 0x18]->is_enabled & 1U)
      != 0) {
    uVar4 = *(longlong *)
             &pas_segregated_page_config_kind_for_config_table[(iVar1 << 0x18) >> 0x18][1].
              page_config_kind + 0x3f;
    uVar3 = 10;
    if (0x80 < (uVar4 & 0xffffffffffffffc0)) {
      uVar3 = (uint)((uVar4 >> 3) + 0x40 >> 3);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_segregated_size_directory_dump_reference @ 140d77c00

void __cdecl
pas_segregated_size_directory_dump_reference
          (pas_segregated_size_directory *param_1,pas_stream *param_2)

{
  if (param_1 == (pas_segregated_size_directory *)0x0) {
    pas_stream_printf(param_2,"null");
  }
  else {
    pas_segregated_page_config_kind_get_string((int)(char)(param_1->base).page_config_kind);
    pas_stream_printf(param_2,"%p(segregated_size_directory, %u, %p, %s)");
  }
  return;
}

// pas_segregated_size_directory_dump_for_spectrum @ 140d77c70

void __cdecl pas_segregated_size_directory_dump_for_spectrum(pas_stream *param_1,void *param_2)

{
  if (param_2 == (void *)0x0) {
    pas_stream_printf(param_1,"null");
  }
  else {
    pas_segregated_page_config_kind_get_string((int)*(char *)((longlong)param_2 + 0xc));
    pas_stream_printf(param_1,"%p(segregated_size_directory, %u, %p, %s)");
  }
  return;
}

// pas_segregated_size_directory_take_first_eligible_impl_should_consider_view_parallel @ 140d77ce0

uint __cdecl
pas_segregated_size_directory_take_first_eligible_impl_should_consider_view_parallel
          (pas_segregated_directory_bitvector_segment param_1,
          pas_segregated_directory_iterate_config *param_2)

{
  return param_1.eligible_bits;
}

