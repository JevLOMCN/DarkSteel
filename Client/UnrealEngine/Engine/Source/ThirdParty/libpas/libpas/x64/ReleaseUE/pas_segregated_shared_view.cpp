// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 5

// pas_segregated_shared_view_create @ 140d7e9b0

pas_segregated_shared_view * __cdecl pas_segregated_shared_view_create(ulong64 param_1)

{
  code *pcVar1;
  pas_segregated_shared_view *ppVar2;
  
  ppVar2 = pas_immortal_heap_allocate(0x28,"pas_segregated_shared_view",pas_object_allocation);
  pas_segregated_shared_view_count = pas_segregated_shared_view_count + 1;
  ppVar2->shared_handle_or_page_boundary = (pas_shared_handle_or_page_boundary_opaque *)0x0;
  InitializeSRWLock((PSRWLOCK)&ppVar2->commit_lock);
  InitializeSRWLock((PSRWLOCK)&ppVar2->ownership_lock);
  ppVar2->bump_offset = 0;
  ppVar2->is_in_use_for_allocation_count = 0;
  ppVar2->index = param_1;
  if ((param_1 & 0xffffffff80000000) == 0) {
    ppVar2->is_owned = false;
    return ppVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_segregated_shared_view_commit_page @ 140d7ea30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_segregated_shared_handle * __cdecl
pas_segregated_shared_view_commit_page
          (pas_segregated_shared_view *param_1,pas_segregated_heap *param_2,
          pas_segregated_shared_page_directory *param_3,pas_segregated_partial_view *param_4,
          pas_segregated_page_config *param_5)

{
  byte bVar1;
  byte bVar2;
  pas_segregated_page_config_variant pVar3;
  pas_segregated_page_config_kind pVar4;
  _func___cdecl_pas_page_base_ptr_void_ptr *p_Var5;
  _func___cdecl_void_ptr_pas_page_base_ptr *p_Var6;
  _func___cdecl_pas_page_base_ptr_void_ptr_pas_page_kind_pas_lock_hold_mode *p_Var7;
  ulong64 uVar8;
  _func___cdecl_void_ptr_pas_segregated_heap_ptr_pas_physical_memory_transaction_ptr_pas_segregated_page_role
  *p_Var9;
  ulong64 uVar10;
  code *pcVar11;
  BOOLEAN BVar12;
  bool bVar13;
  int iVar14;
  pas_segregated_shared_handle *ppVar15;
  void *pvVar16;
  pas_page_base *ppVar17;
  pas_segregated_page *ppVar18;
  pas_page_kind pVar19;
  pas_lock *SRWLock;
  undefined1 auStackY_c8 [32];
  pas_physical_memory_transaction local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (((ulonglong)param_1->shared_handle_or_page_boundary & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  bVar1 = (param_5->base).min_align_shift;
  p_Var5 = (param_5->base).page_header_for_boundary;
  p_Var6 = (param_5->base).boundary_for_page_header;
  p_Var7 = (param_5->base).create_page_header;
  pVar3 = param_5->variant;
  pVar4 = param_5->kind;
  uVar8 = param_5->shared_payload_offset;
  p_Var9 = param_5->page_allocator;
  bVar2 = (param_3->base).sharing_mode;
  if (bVar2 != 1) {
    if (bVar2 != 2) {
      if (bVar2 != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    uVar10 = (param_5->base).page_size;
    if (pVar4 == pas_segregated_page_config_kind_pas_utility_small) {
      local_58.lock_to_acquire_next_time = (pas_lock *)0x0;
    }
    else {
      local_58.lock_to_acquire_next_time = &param_1->commit_lock;
      BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)local_58.lock_to_acquire_next_time);
      if (BVar12 != '\0') {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
    }
    pas_physical_page_sharing_pool_take_for_page_config
              (uVar10,&param_5->base,
               (uint)(pVar4 == pas_segregated_page_config_kind_pas_utility_small),
               &local_58.lock_to_acquire_next_time,
               (ulonglong)(pVar4 != pas_segregated_page_config_kind_pas_utility_small));
  }
  if (pVar4 != pas_segregated_page_config_kind_pas_utility_small) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  ppVar15 = pas_segregated_shared_handle_create(param_1,param_3,param_5);
  if (ppVar15->page_boundary == (void *)0x0) {
    if (pVar4 == pas_segregated_page_config_kind_pas_utility_small) {
      pas_physical_memory_transaction_construct(&local_58);
      pvVar16 = (void *)0x0;
      do {
        if (pvVar16 != (void *)0x0) {
LAB_140d7ed72:
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        pas_physical_memory_transaction_begin(&local_58);
        pvVar16 = (*p_Var9)(param_2,(pas_physical_memory_transaction *)0x0,
                            pas_segregated_page_shared_role);
        bVar13 = pas_physical_memory_transaction_end(&local_58);
      } while (!bVar13);
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      pas_physical_memory_transaction_construct(&local_58);
      pvVar16 = (void *)0x0;
      do {
        if (pvVar16 != (void *)0x0) goto LAB_140d7ed72;
        pas_physical_memory_transaction_begin(&local_58);
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pvVar16 = (*p_Var9)(param_2,&local_58,pas_segregated_page_shared_role);
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        bVar13 = pas_physical_memory_transaction_end(&local_58);
      } while (!bVar13);
    }
    if (pVar4 != pas_segregated_page_config_kind_pas_utility_small) {
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    if (pvVar16 != (void *)0x0) {
      pVar19 = pas_small_shared_segregated_page_kind;
      if (pVar3 != pas_small_segregated_page_config_variant) {
        if (pVar3 != pas_medium_segregated_page_config_variant) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        pVar19 = pas_medium_shared_segregated_page_kind;
      }
      ppVar17 = (*p_Var7)(pvVar16,pVar19,pas_lock_is_held);
      if (pVar4 != pas_segregated_page_config_kind_pas_utility_small) {
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      }
      pvVar16 = (*p_Var6)(ppVar17);
      ppVar15->page_boundary = pvVar16;
      iVar14 = (int)(1L << (bVar1 & 0x3f));
      param_1->bump_offset = -iVar14 & ((int)uVar8 + iVar14) - 1U;
      goto LAB_140d7ecef;
    }
    pas_segregated_shared_handle_destroy(ppVar15);
    ppVar15 = (pas_segregated_shared_handle *)0x0;
    if (pVar4 == pas_segregated_page_config_kind_pas_utility_small) goto LAB_140d7ed27;
    SRWLock = &pas_heap_lock;
  }
  else {
    if (pVar4 != pas_segregated_page_config_kind_pas_utility_small) {
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    }
    pas_page_base_commit_with_boundary(ppVar15->page_boundary,&param_5->base);
    pVar19 = pas_small_shared_segregated_page_kind;
    if (pVar3 != pas_small_segregated_page_config_variant) {
      if (pVar3 != pas_medium_segregated_page_config_variant) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      pVar19 = pas_medium_shared_segregated_page_kind;
    }
    (*p_Var7)(ppVar15->page_boundary,pVar19,pas_lock_is_not_held);
LAB_140d7ecef:
    ppVar18 = (pas_segregated_page *)(*p_Var5)(ppVar15->page_boundary);
    pas_segregated_page_construct
              (ppVar18,(pas_segregated_view_opaque *)((ulonglong)ppVar15 | 3),false,param_5);
    SRWLock = &param_1->ownership_lock;
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    param_1->is_owned = true;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
LAB_140d7ed27:
  if ((local_48 ^ (ulonglong)auStackY_c8) != __security_cookie.value) {
    pcVar11 = (code *)swi(3);
    ppVar15 = (pas_segregated_shared_handle *)(*pcVar11)();
    return ppVar15;
  }
  return ppVar15;
}

// pas_segregated_shared_view_compute_summary @ 140d7ed90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_segregated_shared_view_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_segregated_shared_view *param_1,
          pas_segregated_page_config *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  _func___cdecl_void_ptr_pas_page_base_ptr *p_Var3;
  code *pcVar4;
  ulonglong uVar5;
  pas_segregated_page *ppVar6;
  pas_heap_summary *ppVar7;
  pas_shared_handle_or_page_boundary_opaque *ppVar8;
  ulong64 *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  pas_lock *SRWLock;
  ulonglong uVar14;
  undefined1 auStack_2158 [40];
  ulonglong local_2130;
  ulonglong local_2128;
  pas_segregated_shared_view *local_2120;
  pas_lock *local_2118;
  pas_heap_summary *local_2110;
  pas_heap_summary local_2108;
  pas_range local_20b0;
  pas_range local_20a0;
  pas_range local_2090;
  pas_range local_2080;
  pas_range local_2070;
  void *local_2060;
  ulonglong local_2058;
  ushort auStack_2050 [4096];
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2158;
  SRWLock = &param_1->ownership_lock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar1 = (param_2->base).min_align_shift;
  lVar11 = 1L << (bVar1 & 0x3f);
  uVar12 = -lVar11 & (param_2->shared_payload_offset + lVar11) - 1;
  uVar14 = (ulonglong)param_1->bump_offset;
  uVar5 = uVar14 - uVar12;
  if (uVar14 < uVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar2 = (param_2->base).page_size;
  if (uVar2 < uVar14) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  p_Var3 = (param_2->base).boundary_for_page_header;
  local_2108.meta_ineligible_for_decommit = 0;
  local_2108.meta_eligible_for_decommit = 0;
  local_2108.free_eligible_for_decommit = 0;
  local_2108.free_decommitted = 0;
  local_2108.decommitted = 0;
  local_2108.free_ineligible_for_decommit = 0;
  local_2108.meta = 0;
  local_2108.committed = 0;
  local_2108.free = 0;
  local_2108.allocated = 0;
  local_2108.cached = 0;
  if (param_1->is_owned) {
    ppVar8 = param_1->shared_handle_or_page_boundary;
    if (((ulonglong)ppVar8 & 1) != 0) {
      ppVar8 = *(pas_shared_handle_or_page_boundary_opaque **)
                ((ulonglong)ppVar8 & 0xfffffffffffffffe);
    }
    local_2130 = uVar14;
    local_2118 = SRWLock;
    local_2110 = __return_storage_ptr__;
    ppVar6 = (pas_segregated_page *)(*(param_2->base).page_header_for_boundary)(ppVar8);
    local_2070.begin = 0;
    local_2070.end = uVar2;
    pas_segregated_page_add_commit_range(ppVar6,&local_2108,&local_2070);
    local_2080.begin = 0;
    local_2080.end = uVar12;
    pas_page_base_add_free_range
              ((pas_page_base *)ppVar6,&local_2108,&local_2080,pas_free_meta_range);
    local_2090.begin = local_2130;
    local_2128 = uVar2;
    local_2090.end = uVar2;
    pas_page_base_add_free_range
              ((pas_page_base *)ppVar6,&local_2108,&local_2090,pas_free_meta_range);
    local_2060 = (*p_Var3)((pas_page_base *)ppVar6);
    local_50 = 0;
    local_2120 = param_1;
    local_2058 = (ulonglong)bVar1;
    pas_segregated_view_for_each_live_object
              ((pas_segregated_view_opaque *)((ulonglong)param_1 | 2),
               compute_summary_for_each_live_object_callback,&local_2060,pas_lock_is_held);
    if (local_50 == 0) {
      uVar10 = (uint)uVar12;
      if ((uint)local_2130 < uVar10) goto LAB_140d7f0d5;
    }
    else {
      uVar5 = 0;
      do {
        uVar13 = (uint)auStack_2050[uVar5 * 2] << (bVar1 & 0x1f);
        if (uVar13 < (uint)uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar10 = (uint)auStack_2050[uVar5 * 2 + 1] << (bVar1 & 0x1f);
        local_20a0.begin = uVar12 & 0xffffffff;
        local_20a0.end = (ulong64)uVar13;
        pas_page_base_add_free_range
                  ((pas_page_base *)ppVar6,&local_2108,&local_20a0,pas_free_object_range);
        local_2108.allocated = local_2108.allocated + (uVar10 - uVar13);
        uVar5 = uVar5 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar5 < local_50);
      if ((uint)local_2130 < uVar10) {
LAB_140d7f0d5:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    local_20b0.begin = (ulong64)uVar10;
    local_20b0.end = local_2130;
    pas_page_base_add_free_range
              ((pas_page_base *)ppVar6,&local_2108,&local_20b0,pas_free_object_range);
    __return_storage_ptr__ = local_2110;
    SRWLock = local_2118;
    if (local_2120->is_in_use_for_allocation_count == 0) goto LAB_140d7f04e;
    puVar9 = &local_2108.cached;
    uVar5 = local_2128;
  }
  else {
    puVar9 = &local_2108.free_decommitted;
    local_2108.free = uVar5;
    local_2108.decommitted = uVar2;
  }
  *puVar9 = local_2108.cached + uVar5;
LAB_140d7f04e:
  __return_storage_ptr__->cached = local_2108.cached;
  __return_storage_ptr__->meta_ineligible_for_decommit = local_2108.meta_ineligible_for_decommit;
  __return_storage_ptr__->meta_eligible_for_decommit = local_2108.meta_eligible_for_decommit;
  *(undefined4 *)&__return_storage_ptr__->free_eligible_for_decommit =
       (undefined4)local_2108.free_eligible_for_decommit;
  *(undefined4 *)((longlong)&__return_storage_ptr__->free_eligible_for_decommit + 4) =
       local_2108.free_eligible_for_decommit._4_4_;
  *(undefined4 *)&__return_storage_ptr__->free_decommitted = (undefined4)local_2108.free_decommitted
  ;
  *(undefined4 *)((longlong)&__return_storage_ptr__->free_decommitted + 4) =
       local_2108.free_decommitted._4_4_;
  *(undefined4 *)&__return_storage_ptr__->decommitted = (undefined4)local_2108.decommitted;
  *(undefined4 *)((longlong)&__return_storage_ptr__->decommitted + 4) = local_2108.decommitted._4_4_
  ;
  *(undefined4 *)&__return_storage_ptr__->free_ineligible_for_decommit =
       (undefined4)local_2108.free_ineligible_for_decommit;
  *(undefined4 *)((longlong)&__return_storage_ptr__->free_ineligible_for_decommit + 4) =
       local_2108.free_ineligible_for_decommit._4_4_;
  *(undefined4 *)&__return_storage_ptr__->meta = (undefined4)local_2108.meta;
  *(undefined4 *)((longlong)&__return_storage_ptr__->meta + 4) = local_2108.meta._4_4_;
  *(undefined4 *)&__return_storage_ptr__->committed = (undefined4)local_2108.committed;
  *(undefined4 *)((longlong)&__return_storage_ptr__->committed + 4) = local_2108.committed._4_4_;
  *(undefined4 *)&__return_storage_ptr__->free = (undefined4)local_2108.free;
  *(undefined4 *)((longlong)&__return_storage_ptr__->free + 4) = local_2108.free._4_4_;
  *(undefined4 *)&__return_storage_ptr__->allocated = (undefined4)local_2108.allocated;
  *(undefined4 *)((longlong)&__return_storage_ptr__->allocated + 4) = local_2108.allocated._4_4_;
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if ((local_48 ^ (ulonglong)auStack_2158) == __security_cookie.value) {
    return __return_storage_ptr__;
  }
  pcVar4 = (code *)swi(3);
  ppVar7 = (pas_heap_summary *)(*pcVar4)();
  return ppVar7;
}

// pas_segregated_shared_view_is_empty @ 140d7f0f0

bool __cdecl pas_segregated_shared_view_is_empty(pas_segregated_shared_view *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = true;
  if (((ulonglong)param_1->shared_handle_or_page_boundary & 1) != 0) {
    lVar4 = *(longlong *)
             (((ulonglong)param_1->shared_handle_or_page_boundary & 0xfffffffffffffffe) + 8);
    if (param_1->index == 0) {
      uVar1 = *(uint *)(lVar4 + 8) & 2;
    }
    else {
      uVar3 = param_1->index - 1;
      uVar2 = (ulonglong)
              *(uint *)(pas_compact_heap_reservation_base + 0x20 +
                       (ulonglong)*(uint *)(lVar4 + 4) * 8);
      lVar4 = pas_compact_heap_reservation_base + uVar2 * 8;
      if (uVar2 == 0) {
        lVar4 = 0;
      }
      uVar2 = (ulonglong)*(uint *)(lVar4 + (uVar3 >> 7) * 4);
      lVar4 = pas_compact_heap_reservation_base + uVar2 * 8;
      if (uVar2 == 0) {
        lVar4 = 0;
      }
      uVar1 = 1 << ((byte)uVar3 & 0x1f) &
              *(uint *)(lVar4 + 4 + (ulonglong)((uint)(uVar3 >> 2) & 0x18));
    }
    bVar5 = uVar1 != 0;
  }
  return bVar5;
}

// compute_summary_for_each_live_object_callback @ 140d7f170

bool __cdecl
compute_summary_for_each_live_object_callback
          (pas_segregated_view_opaque *param_1,pas_range *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort *puVar16;
  ulonglong uVar17;
  
  uVar3 = *(uint *)((longlong)param_3 + 0x2010);
  uVar9 = (ulonglong)uVar3;
  if (0x7ff < uVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar13 = param_2->end - *(longlong *)param_3 >> (*(byte *)((longlong)param_3 + 8) & 0x3f);
  uVar11 = param_2->begin - *(longlong *)param_3 >> (*(byte *)((longlong)param_3 + 8) & 0x3f);
  if (uVar13 < uVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (0xffff < uVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (0xffff < uVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar14 = 0;
  uVar10 = 0;
  puVar8 = (ushort *)((longlong)param_3 + uVar9 * 4 + 0xc);
  do {
    puVar16 = puVar8;
    if (uVar9 == uVar10) goto LAB_140d7f20a;
    uVar10 = uVar10 + 1;
    puVar8 = puVar16 + -2;
  } while ((ushort)uVar11 <= *puVar16);
  if (uVar11 < puVar16[1]) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar14 = (uVar3 + 1) - uVar10;
LAB_140d7f20a:
  uVar10 = uVar14 & 0xffffffff;
  if ((uint)uVar14 < uVar3) {
    uVar15 = uVar9 - uVar10;
    uVar14 = uVar9;
    if (7 < uVar15) {
      uVar17 = uVar15 & 0xfffffffffffffff8;
      uVar14 = uVar9 - uVar17;
      lVar12 = 0;
      do {
        puVar1 = (undefined8 *)((longlong)param_3 + lVar12 * 4 + uVar9 * 4 + -0x10);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        puVar1 = (undefined8 *)((longlong)param_3 + lVar12 * 4 + uVar9 * 4);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)param_3 + lVar12 * 4 + uVar9 * 4 + 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)((longlong)param_3 + lVar12 * 4 + uVar9 * 4 + -0xc);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        lVar12 = lVar12 + -8;
      } while (-lVar12 != uVar17);
      if (uVar15 == uVar17) goto LAB_140d7f286;
    }
    do {
      *(undefined4 *)((longlong)param_3 + uVar14 * 4 + 0x10) =
           *(undefined4 *)((longlong)param_3 + uVar14 * 4 + 0xc);
      uVar14 = uVar14 - 1;
    } while (uVar10 < uVar14);
  }
LAB_140d7f286:
  *(ushort *)((longlong)param_3 + uVar10 * 4 + 0x10) = (ushort)uVar11;
  *(short *)((longlong)param_3 + uVar10 * 4 + 0x12) = (short)uVar13;
  *(int *)((longlong)param_3 + 0x2010) = *(int *)((longlong)param_3 + 0x2010) + 1;
  return true;
}

