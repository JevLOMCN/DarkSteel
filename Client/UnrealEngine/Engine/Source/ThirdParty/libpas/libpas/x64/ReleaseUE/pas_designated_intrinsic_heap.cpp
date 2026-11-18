// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 2

// pas_designated_intrinsic_heap_initialize @ 140d7c520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
pas_designated_intrinsic_heap_initialize(pas_segregated_heap *param_1,pas_heap_config *param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  ulong64 uVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  uint uVar7;
  longlong lVar8;
  pas_segregated_size_directory *ppVar9;
  pas_thread_local_cache_layout_segment *ppVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  initialize_data local_58;
  ulonglong local_40;
  ulong64 uVar10;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar1 = (param_2->small_segregated_config).base.is_enabled;
  bVar2 = (param_2->small_segregated_config).base.min_align_shift;
  uVar10 = (param_2->small_segregated_config).num_alloc_bits;
  bVar3 = (param_2->medium_segregated_config).base.is_enabled;
  uVar4 = (param_2->medium_segregated_config).num_alloc_bits;
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (pas_thread_local_cache_node_first != (pas_thread_local_cache_node *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (pas_thread_local_cache_layout_next_allocator_index != 8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((param_1->basic_size_directory_and_head).payload != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_58.heap = param_1;
  local_58.config_ptr = param_2;
  if ((bVar3 & 1U) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((bVar1 & 1U) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar12 = uVar4 + 0x3f;
  uVar7 = (uint)((uVar12 >> 3) + 0x40 >> 3);
  if ((uVar12 & 0xffffffffffffffc0) < 0x81) {
    uVar7 = 10;
  }
  uVar12 = uVar10 + 0x3f;
  local_58.num_allocator_indices = (uint)((uVar12 >> 3) + 0x40 >> 3);
  if ((uVar12 & 0xffffffffffffffc0) < 0x81) {
    local_58.num_allocator_indices = 10;
  }
  if (local_58.num_allocator_indices <= uVar7) {
    local_58.num_allocator_indices = uVar7;
  }
  local_58.next_index_to_set = 0;
  lVar8 = 1L << (bVar2 & 0x3f);
  if (lVar8 == 0x20) {
    set_up_range(&local_58,0,1,0x20);
    set_up_range(&local_58,2,2,0x40);
    set_up_range(&local_58,3,3,0x60);
    set_up_range(&local_58,4,4,0x80);
    set_up_range(&local_58,5,5,0xa0);
    set_up_range(&local_58,6,6,0xc0);
    set_up_range(&local_58,7,7,0xe0);
    set_up_range(&local_58,8,8,0x100);
    set_up_range(&local_58,9,10,0x140);
    set_up_range(&local_58,0xb,0xc,0x180);
    set_up_range(&local_58,0xd,0xe,0x1c0);
    ppVar11 = pas_thread_local_cache_layout_first_segment;
  }
  else if (lVar8 == 0x10) {
    set_up_range(&local_58,0,1,0x10);
    set_up_range(&local_58,2,2,0x20);
    set_up_range(&local_58,3,3,0x30);
    set_up_range(&local_58,4,4,0x40);
    set_up_range(&local_58,5,5,0x50);
    set_up_range(&local_58,6,6,0x60);
    set_up_range(&local_58,7,8,0x80);
    set_up_range(&local_58,9,10,0xa0);
    set_up_range(&local_58,0xb,0xc,0xc0);
    set_up_range(&local_58,0xd,0xe,0xe0);
    set_up_range(&local_58,0xf,0x10,0x100);
    set_up_range(&local_58,0x11,0x13,0x130);
    set_up_range(&local_58,0x14,0x16,0x160);
    set_up_range(&local_58,0x17,0x1a,0x1a0);
    ppVar11 = pas_thread_local_cache_layout_first_segment;
  }
  else {
    if (lVar8 != 8) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    set_up_range(&local_58,0,1,8);
    set_up_range(&local_58,2,2,0x10);
    set_up_range(&local_58,3,3,0x18);
    set_up_range(&local_58,4,4,0x20);
    set_up_range(&local_58,5,5,0x28);
    set_up_range(&local_58,6,6,0x30);
    set_up_range(&local_58,7,8,0x40);
    set_up_range(&local_58,9,10,0x50);
    set_up_range(&local_58,0xb,0xc,0x60);
    set_up_range(&local_58,0xd,0x10,0x80);
    set_up_range(&local_58,0x11,0x14,0xa0);
    set_up_range(&local_58,0x15,0x18,0xc0);
    set_up_range(&local_58,0x19,0x1c,0xe0);
    set_up_range(&local_58,0x1d,0x20,0x100);
    set_up_range(&local_58,0x21,0x26,0x130);
    ppVar11 = pas_thread_local_cache_layout_first_segment;
  }
  pas_thread_local_cache_layout_first_segment = ppVar11;
  if (ppVar11 != (pas_thread_local_cache_layout_segment *)0x0) {
    ppVar9 = (pas_segregated_size_directory *)(ulonglong)ppVar11->nodes[0].payload;
    if ((pas_segregated_size_directory *)&DAT_00000008 <= ppVar9) {
      ppVar9 = (pas_segregated_size_directory *)
               ((longlong)&(ppVar9->base).first_view.payload + pas_compact_heap_reservation_base);
    }
    if (ppVar9 != (pas_segregated_size_directory *)0x0) {
      lVar8 = 0;
      do {
        while (((ulonglong)ppVar9 & 3) != 0) {
          ppVar9 = (pas_segregated_size_directory *)(ulonglong)ppVar11->nodes[lVar8 + 1].payload;
          if ((pas_segregated_size_directory *)&DAT_00000007 < ppVar9) goto LAB_140d7caa7;
LAB_140d7cacf:
          if (ppVar9 != (pas_segregated_size_directory *)0x0) goto LAB_140d7ca90;
LAB_140d7cad6:
          ppVar11 = ppVar11->next;
          if (ppVar11 == (pas_thread_local_cache_layout_segment *)0x0) goto LAB_140d7cb00;
          uVar12 = (ulonglong)ppVar11->nodes[0].payload;
          uVar10 = 0;
          if (7 < uVar12) {
            uVar10 = pas_compact_heap_reservation_base;
          }
          ppVar9 = (pas_segregated_size_directory *)(uVar10 + uVar12);
          lVar8 = 0;
          if (ppVar9 == (pas_segregated_size_directory *)0x0) goto LAB_140d7cb00;
        }
        pas_segregated_size_directory_finish_creation(ppVar9);
        ppVar9 = (pas_segregated_size_directory *)(ulonglong)ppVar11->nodes[lVar8 + 1].payload;
        if (ppVar9 < (pas_segregated_size_directory *)&DAT_00000008) goto LAB_140d7cacf;
LAB_140d7caa7:
        ppVar9 = (pas_segregated_size_directory *)
                 ((longlong)&(ppVar9->base).first_view.payload + pas_compact_heap_reservation_base);
        if (ppVar9 == (pas_segregated_size_directory *)0x0) goto LAB_140d7cad6;
LAB_140d7ca90:
        lVar8 = lVar8 + 1;
      } while (ppVar9 != (pas_segregated_size_directory *)0x0);
    }
  }
LAB_140d7cb00:
  if ((local_40 ^ (ulonglong)auStack_78) == __security_cookie.value) {
    return;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// set_up_range @ 140d7cb40

void __cdecl set_up_range(initialize_data *param_1,uint param_2,uint param_3,ulong64 param_4)

{
  pas_heap_config *ppVar1;
  longlong lVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  uint uVar5;
  pas_thread_local_cache_layout_node_opaque *ppVar6;
  pas_segregated_size_directory *ppVar7;
  pas_segregated_size_directory *ppVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  if ((ulonglong)param_3 <<
      ((param_1->config_ptr->small_segregated_config).base.min_align_shift & 0x3f) != param_4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_3 + 1 <= param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_1->next_index_to_set != param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  ppVar6 = pas_thread_local_cache_layout_get_last_node();
  if (ppVar6 == (pas_thread_local_cache_layout_node_opaque *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    ppVar6 = pas_thread_local_cache_layout_get_last_node();
    ppVar7 = pas_thread_local_cache_layout_node_get_directory(ppVar6);
    if (param_4 <= ppVar7->object_size) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  lVar2 = (ulonglong)param_2 * (ulonglong)param_1->num_allocator_indices;
  uVar5 = (uint)lVar2;
  if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
    uVar10 = uVar5 + 8;
    if (0xfffffff7 < uVar5) {
LAB_140d7cd8a:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar10 < pas_thread_local_cache_layout_next_allocator_index) {
LAB_140d7cd8c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pas_thread_local_cache_layout_next_allocator_index = uVar10;
    ppVar7 = pas_segregated_heap_ensure_size_directory_for_size
                       (param_1->heap,param_4,1,pas_force_size_lookup,param_1->config_ptr,
                        (uint *)0x0,pas_segregated_size_directory_initial_creation_mode);
    if (ppVar7 == (pas_segregated_size_directory *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = pas_segregated_size_directory_num_allocator_indices(ppVar7);
    ppVar1 = param_1->config_ptr;
    if (((ppVar1->medium_segregated_config).base.is_enabled & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((ppVar1->small_segregated_config).base.is_enabled & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar9 = (ppVar1->medium_segregated_config).num_alloc_bits + 0x3f;
    uVar11 = (uint)((uVar9 >> 3) + 0x40 >> 3);
    if ((uVar9 & 0xffffffffffffffc0) < 0x81) {
      uVar11 = 10;
    }
    uVar9 = (ppVar1->small_segregated_config).num_alloc_bits + 0x3f;
    uVar12 = (uint)((uVar9 >> 3) + 0x40 >> 3);
    if ((uVar9 & 0xffffffffffffffc0) < 0x81) {
      uVar12 = 10;
    }
    if (uVar12 <= uVar11) {
      uVar12 = uVar11;
    }
    if (uVar12 < uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (ppVar7->object_size != param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pas_segregated_size_directory_create_tlc_allocator(ppVar7);
    if (ppVar7->allocator_index != uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (param_3 != param_2) {
      iVar13 = 0;
      do {
        lVar2 = (ulonglong)(iVar13 + param_2 + 1) * (ulonglong)param_1->num_allocator_indices;
        uVar5 = (uint)lVar2;
        if ((int)((ulonglong)lVar2 >> 0x20) != 0) goto LAB_140d7cd88;
        uVar10 = uVar5 + 8;
        if (0xfffffff7 < uVar5) goto LAB_140d7cd8a;
        if (uVar10 < pas_thread_local_cache_layout_next_allocator_index) goto LAB_140d7cd8c;
        pas_thread_local_cache_layout_next_allocator_index = uVar10;
        if (iVar13 == -1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = pas_thread_local_cache_layout_duplicate(ppVar7);
        if (uVar5 != uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        ppVar6 = pas_thread_local_cache_layout_get_last_node();
        ppVar8 = pas_thread_local_cache_layout_node_get_directory(ppVar6);
        if (ppVar8 != ppVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = pas_thread_local_cache_layout_node_get_allocator_index_for_allocator(ppVar6);
        if (uVar5 != uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((ulonglong)(param_1->num_allocator_indices * param_2) + 8 !=
            (ulonglong)ppVar7->allocator_index) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        iVar13 = iVar13 + 1;
      } while (param_3 - param_2 != iVar13);
    }
    param_1->next_index_to_set = param_3 + 1;
    return;
  }
LAB_140d7cd88:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

