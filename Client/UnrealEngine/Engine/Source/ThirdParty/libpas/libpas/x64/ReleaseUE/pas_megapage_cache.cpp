// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 3

// pas_megapage_cache_construct @ 140da3fa0

void __cdecl
pas_megapage_cache_construct
          (pas_megapage_cache *param_1,
          _func___cdecl_pas_allocation_result_ulong64_pas_alignment_char_ptr_pas_heap_ptr_pas_physical_memory_transaction_ptr_pas_primordial_page_state_void_ptr
          *param_2,void *param_3)

{
  pas_reserve_commit_cache_large_free_heap_construct(&param_1->free_heap);
  param_1->provider = param_2;
  param_1->provider_arg = param_3;
  return;
}

// pas_megapage_cache_try_allocate @ 140da3fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
pas_megapage_cache_try_allocate
          (pas_megapage_cache *param_1,pas_megapage_cache_config *param_2,pas_heap *param_3,
          pas_physical_memory_transaction *param_4)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_b8 [32];
  pas_alignment local_88;
  pas_allocation_result local_70;
  pas_large_free_heap_config local_60;
  pas_megapage_cache *local_30;
  pas_megapage_cache_config *local_28;
  pas_heap *local_20;
  pas_physical_memory_transaction *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_60.type_size = 1;
  local_60.min_alignment = 1;
  local_60.aligned_allocator = megapage_cache_allocate_aligned;
  local_60.aligned_allocator_arg = &local_30;
  local_60.deallocator = (_func___cdecl_void_void_ptr_ulong64_void_ptr *)0x0;
  local_60.deallocator_arg = (void *)0x0;
  local_88.alignment = (param_2->allocation_alignment).alignment;
  local_88.alignment_begin = (param_2->allocation_alignment).alignment_begin;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  pas_reserve_commit_cache_large_free_heap_try_allocate
            (&local_70,&param_1->free_heap,param_2->allocation_size,&local_88,&local_60);
  if ((local_70.did_succeed & 1U) == 0) {
    local_70.begin = 0;
  }
  else {
    if ((void *)local_70.begin == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((param_2->should_zero == true) && (local_70.zero_mode != pas_zero_mode_is_all_zero)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if ((local_10 ^ (ulonglong)auStackY_b8) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    pvVar2 = (void *)(*pcVar1)();
    return pvVar2;
  }
  return (void *)local_70.begin;
}

// megapage_cache_allocate_aligned @ 140da40d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_aligned_allocation_result * __cdecl
megapage_cache_allocate_aligned
          (pas_aligned_allocation_result *__return_storage_ptr__,ulong64 param_1,
          pas_alignment *param_2,void *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  pas_aligned_allocation_result *ppVar7;
  ulonglong _Size;
  ulonglong uVar8;
  pas_zero_mode pVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *pvVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  pas_aligned_allocation_result *local_88;
  ulong64 local_80;
  pas_range local_78;
  ulonglong local_68;
  longlong local_60;
  void *local_58;
  byte local_50;
  pas_zero_mode local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  puVar1 = *(ulonglong **)((longlong)param_3 + 8);
  uVar8 = puVar1[1];
  if ((uVar8 ^ uVar8 - 1) <= uVar8 - 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar11 = puVar1[2];
  if ((uVar11 ^ uVar11 - 1) <= uVar11 - 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar2 = puVar1[3];
  if (uVar11 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar8 != param_1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((param_2->alignment != uVar11) || (param_2->alignment_begin != uVar2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(longlong *)param_3;
  uVar8 = uVar11;
  if (uVar2 == 0) {
    _Size = *puVar1;
    if (*puVar1 <= param_1) {
      _Size = param_1;
    }
    if (uVar11 < _Size) {
      uVar8 = _Size;
    }
LAB_140da41ab:
    if ((uVar8 ^ uVar8 - 1) <= uVar8 - 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar11 = 0;
    lVar10 = 0;
  }
  else {
    _Size = *puVar1;
    if (*puVar1 <= param_1) {
      _Size = param_1;
    }
    if (uVar11 < _Size) {
      uVar8 = _Size;
    }
    uVar11 = uVar11 - uVar2;
    if (uVar11 == 0) goto LAB_140da41ab;
    if ((uVar8 ^ uVar8 - 1) <= uVar8 - 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar10 = uVar8 - uVar11;
    if (uVar8 < uVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  __return_storage_ptr__->right_padding = (void *)0x0;
  __return_storage_ptr__->right_padding_size = 0;
  __return_storage_ptr__->left_padding = (void *)0x0;
  __return_storage_ptr__->left_padding_size = 0;
  __return_storage_ptr__->result = (void *)0x0;
  __return_storage_ptr__->result_size = 0;
  *(undefined8 *)&__return_storage_ptr__->zero_mode = 0;
  local_90 = *(undefined8 *)(lVar3 + 0x58);
  local_a8 = *(undefined4 *)((longlong)param_3 + 0x10);
  uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_a0 = *(undefined4 *)((longlong)param_3 + 0x18);
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_98 = 2;
  local_68 = uVar8;
  local_60 = lVar10;
  (**(code **)(lVar3 + 0x50))(&local_58,_Size,&local_68,"pas_megapage_cache/chunk");
  if ((local_50 & 1) == 0) goto LAB_140da43e1;
  pvVar12 = (void *)((longlong)local_58 + _Size);
  local_88 = __return_storage_ptr__;
  local_80 = param_1;
  if (CARRY8((ulonglong)local_58,_Size)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_78.begin = (ulong64)local_58;
  local_78.end = (ulong64)pvVar12;
  pas_payload_reservation_page_list_append(&local_78);
  if (local_58 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  pVar9 = local_4c;
  if ((local_4c == pas_zero_mode_may_have_non_zero & (byte)puVar1[6]) == 1) {
    memset(local_58,0,_Size);
    pVar9 = pas_zero_mode_is_all_zero;
  }
  uVar2 = puVar1[2] - 1;
  if ((puVar1[2] ^ uVar2) <= uVar2) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (((longlong)local_58 - puVar1[3] & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (((longlong)pvVar12 - puVar1[3] & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar2 = uVar8 - 1;
  if ((uVar8 ^ uVar2) <= uVar2) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (((longlong)local_58 - lVar10 & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (((longlong)pvVar12 - lVar10 & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (pvVar12 <= local_58) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar4 = *puVar1;
  uVar8 = uVar4 - 1;
  if ((uVar4 ^ uVar8) <= uVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar6 = (longlong)local_58 + uVar11;
  if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar11 = (longlong)pvVar12 + uVar11;
  if ((uVar8 & uVar11) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((uVar6 & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((uVar11 & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar11 <= uVar6) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (puVar1[4] == 0) {
    if (puVar1[5] != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else {
    if ((uVar6 | uVar4) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) / (uVar4 & 0xffffffff);
      if ((uVar11 | uVar4) >> 0x20 != 0) goto LAB_140da4360;
LAB_140da4389:
      uVar11 = (uVar11 & 0xffffffff) / (uVar4 & 0xffffffff);
    }
    else {
      uVar6 = uVar6 / uVar4;
      if ((uVar11 | uVar4) >> 0x20 == 0) goto LAB_140da4389;
LAB_140da4360:
      uVar11 = uVar11 / uVar4;
    }
    while (uVar6 < uVar11) {
      uVar11 = uVar11 - 1;
      (*(code *)puVar1[4])(uVar11,puVar1[5]);
    }
  }
  local_88->result = local_58;
  local_88->result_size = local_80;
  local_88->left_padding = local_58;
  local_88->left_padding_size = 0;
  local_88->right_padding = (void *)((longlong)local_58 + local_80);
  local_88->right_padding_size = _Size - local_80;
  local_88->zero_mode = pVar9;
  __return_storage_ptr__ = local_88;
LAB_140da43e1:
  if ((local_48 ^ (ulonglong)auStack_c8) != __security_cookie.value) {
    pcVar5 = (code *)swi(3);
    ppVar7 = (pas_aligned_allocation_result *)(*pcVar5)();
    return ppVar7;
  }
  return __return_storage_ptr__;
}

