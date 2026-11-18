// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 114

// bmalloc_try_allocate_casual @ 140d3d9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_allocate_casual(ulong64 param_1)

{
  code *pcVar1;
  void *pvVar2;
  ulong64 in_R8;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_allocate_impl_casual_case(&local_18,param_1,in_R8);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_allocate_impl_casual_case @ 140d3da10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

pas_allocation_result * __cdecl
bmalloc_try_allocate_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  pas_thread_local_cache *ppVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  pas_allocation_result *ppVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  pas_zero_mode pVar9;
  ulonglong uVar10;
  pas_heap *ppVar11;
  longlong lVar12;
  undefined1 auVar13 [8];
  ulong64 uVar14;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  uint local_38;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar2 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if (ppVar2 < (pas_thread_local_cache *)&DAT_00000002) {
LAB_140d3da72:
    local_48 = (undefined1  [8])bmalloc_common_primitive_heap.type;
    local_40 = &bmalloc_common_primitive_heap;
    local_38 = 0;
    ppVar6 = bmalloc_try_allocate_impl_impl_slow
                       (__return_storage_ptr__,(pas_heap_ref *)local_48,param_1,1);
    if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
      return ppVar6;
    }
    goto LAB_140d3dbac;
  }
  uVar7 = param_1 + 0xf;
  uVar10 = uVar7 >> 4;
  if (uVar7 < 0x1b0) {
    uVar7 = uVar10 * 0x18 + 8;
    if (ppVar2->allocator_index_upper_bound <= uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
LAB_140d3db24:
    ppVar11 = (pas_heap *)(ppVar2->local_allocators + uVar7);
  }
  else {
    if (uVar7 < 0x2720) {
      uVar5 = bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar10];
    }
    else {
      uVar5 = pas_segregated_heap_medium_allocator_index_for_index
                        (&bmalloc_common_primitive_heap.segregated_heap,uVar10,
                         pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                         ,pas_lock_is_not_held);
    }
    if (uVar5 == 0) goto LAB_140d3da72;
    if (uVar5 < ppVar2->allocator_index_upper_bound) {
      uVar7 = (ulonglong)uVar5;
      goto LAB_140d3db24;
    }
    if ((uVar5 == 0xffffffff) ||
       (pas_thread_local_cache_get_local_allocator_slow
                  ((pas_local_allocator_result *)local_48,ppVar2,uVar5,pas_lock_is_not_held),
       ppVar11 = local_40, ((ulonglong)local_48 & 1) == 0)) goto LAB_140d3da72;
  }
  *(bool *)&(ppVar11->segregated_heap).runtime_config = true;
  uVar5 = (ppVar11->segregated_heap).basic_size_directory_and_head.payload;
  if ((ulonglong)uVar5 == 0) {
    uVar8._0_4_ = (ppVar11->segregated_heap).bitfit_heap;
    uVar8._4_4_ = (ppVar11->segregated_heap).small_index_upper_bound;
    uVar14 = (ppVar11->large_heap).free_heap.num_mapped_bytes;
    if (uVar14 != 0) {
LAB_140d3db62:
      uVar7 = 0;
      for (uVar10 = uVar14; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
        uVar7 = uVar7 + 1;
      }
      (ppVar11->large_heap).free_heap.num_mapped_bytes = uVar14 & ~(1L << (uVar7 & 0x3f));
      auVar13 = (undefined1  [8])((uint)((int)uVar7 << 4) + uVar8);
      goto LAB_140d3db76;
    }
    if (*(byte *)&(ppVar11->segregated_heap).index_to_small_allocator_index == 6) {
      uVar5 = *(uint *)((ppVar11->large_heap).free_heap.tree.minimum.payload + 1);
      uVar1 = *(uint *)&(ppVar11->large_heap).free_heap.tree;
      uVar7 = (ulonglong)uVar1;
      if (uVar1 < uVar5) {
        *(undefined8 *)((longlong)&ppVar11->next_heap + uVar7 * 8 + -8) = 0;
        lVar12 = 0;
        do {
          if ((uVar5 - 1) - uVar7 == lVar12) {
            (ppVar11->large_heap).free_heap.tree.root =
                 (pas_compact_cartesian_tree_node_ptr)(int3)uVar5;
            (ppVar11->large_heap).free_heap.tree.minimum.payload[0] = (char)(uVar5 >> 0x18);
            goto LAB_140d3dc7c;
          }
          uVar8 = uVar8 + 0x400;
          uVar14 = *(ulonglong *)((longlong)&ppVar11->next_heap + lVar12 * 8 + uVar7 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar14 == 0);
        *(uint *)&(ppVar11->large_heap).free_heap.tree = uVar1 + (int)lVar12;
        *(ulong64 *)&(ppVar11->segregated_heap).bitfit_heap = uVar8;
        goto LAB_140d3db62;
      }
LAB_140d3dc7c:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_48,(pas_local_allocator *)ppVar11,
                 &bmalloc_allocator_counts,pas_allocation_result_identity);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_48,(pas_local_allocator *)ppVar11,param_1,1,
                 &bmalloc_allocator_counts,pas_allocation_result_identity);
    }
    auVar13 = local_48;
    local_2a = local_40._3_1_;
    local_2c = local_40._1_2_;
    local_48._0_3_ = (undefined3)((ulonglong)local_40 >> 8);
    bVar4 = local_40._0_1_;
    pVar9 = local_40._4_4_;
  }
  else {
    (ppVar11->segregated_heap).basic_size_directory_and_head.payload =
         uVar5 - (ppVar11->segregated_heap).rare_data.payload;
    auVar13 = (undefined1  [8])
              ((longlong)(ppVar11->segregated_heap).index_to_small_size_directory - (ulonglong)uVar5
              );
LAB_140d3db76:
    *(bool *)&(ppVar11->segregated_heap).runtime_config = false;
    bVar4 = true;
    pVar9 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = (ulong64)auVar13;
  __return_storage_ptr__->did_succeed = bVar4;
  *(undefined2 *)&__return_storage_ptr__->field_0x9 = local_48._0_2_;
  __return_storage_ptr__->field_0xb = local_48[2];
  __return_storage_ptr__->zero_mode = pVar9;
  if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)local_48[2];
  }
LAB_140d3dbac:
  pcVar3 = (code *)swi(3);
  ppVar6 = (pas_allocation_result *)(*pcVar3)();
  return ppVar6;
}

// bmalloc_allocate_casual @ 140d3dd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_allocate_casual(ulong64 param_1)

{
  code *pcVar1;
  void *pvVar2;
  ulong64 in_R8;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_allocate_impl_casual_case(&local_18,param_1,in_R8);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_allocate_impl_casual_case @ 140d3dd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

pas_allocation_result * __cdecl
bmalloc_allocate_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  pas_thread_local_cache *ppVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  pas_allocation_result *ppVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  pas_zero_mode pVar9;
  ulonglong uVar10;
  pas_heap *ppVar11;
  longlong lVar12;
  undefined1 auVar13 [8];
  ulong64 uVar14;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  uint local_38;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar2 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if (ppVar2 < (pas_thread_local_cache *)&DAT_00000002) {
LAB_140d3ddb2:
    local_48 = (undefined1  [8])bmalloc_common_primitive_heap.type;
    local_40 = &bmalloc_common_primitive_heap;
    local_38 = 0;
    ppVar6 = bmalloc_allocate_impl_impl_slow
                       (__return_storage_ptr__,(pas_heap_ref *)local_48,param_1,1);
    if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
      return ppVar6;
    }
    goto LAB_140d3deec;
  }
  uVar7 = param_1 + 0xf;
  uVar10 = uVar7 >> 4;
  if (uVar7 < 0x1b0) {
    uVar7 = uVar10 * 0x18 + 8;
    if (ppVar2->allocator_index_upper_bound <= uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
LAB_140d3de64:
    ppVar11 = (pas_heap *)(ppVar2->local_allocators + uVar7);
  }
  else {
    if (uVar7 < 0x2720) {
      uVar5 = bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar10];
    }
    else {
      uVar5 = pas_segregated_heap_medium_allocator_index_for_index
                        (&bmalloc_common_primitive_heap.segregated_heap,uVar10,
                         pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                         ,pas_lock_is_not_held);
    }
    if (uVar5 == 0) goto LAB_140d3ddb2;
    if (uVar5 < ppVar2->allocator_index_upper_bound) {
      uVar7 = (ulonglong)uVar5;
      goto LAB_140d3de64;
    }
    if ((uVar5 == 0xffffffff) ||
       (pas_thread_local_cache_get_local_allocator_slow
                  ((pas_local_allocator_result *)local_48,ppVar2,uVar5,pas_lock_is_not_held),
       ppVar11 = local_40, ((ulonglong)local_48 & 1) == 0)) goto LAB_140d3ddb2;
  }
  *(bool *)&(ppVar11->segregated_heap).runtime_config = true;
  uVar5 = (ppVar11->segregated_heap).basic_size_directory_and_head.payload;
  if ((ulonglong)uVar5 == 0) {
    uVar8._0_4_ = (ppVar11->segregated_heap).bitfit_heap;
    uVar8._4_4_ = (ppVar11->segregated_heap).small_index_upper_bound;
    uVar14 = (ppVar11->large_heap).free_heap.num_mapped_bytes;
    if (uVar14 != 0) {
LAB_140d3dea2:
      uVar7 = 0;
      for (uVar10 = uVar14; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
        uVar7 = uVar7 + 1;
      }
      (ppVar11->large_heap).free_heap.num_mapped_bytes = uVar14 & ~(1L << (uVar7 & 0x3f));
      auVar13 = (undefined1  [8])((uint)((int)uVar7 << 4) + uVar8);
      goto LAB_140d3deb6;
    }
    if (*(byte *)&(ppVar11->segregated_heap).index_to_small_allocator_index == 6) {
      uVar5 = *(uint *)((ppVar11->large_heap).free_heap.tree.minimum.payload + 1);
      uVar1 = *(uint *)&(ppVar11->large_heap).free_heap.tree;
      uVar7 = (ulonglong)uVar1;
      if (uVar1 < uVar5) {
        *(undefined8 *)((longlong)&ppVar11->next_heap + uVar7 * 8 + -8) = 0;
        lVar12 = 0;
        do {
          if ((uVar5 - 1) - uVar7 == lVar12) {
            (ppVar11->large_heap).free_heap.tree.root =
                 (pas_compact_cartesian_tree_node_ptr)(int3)uVar5;
            (ppVar11->large_heap).free_heap.tree.minimum.payload[0] = (char)(uVar5 >> 0x18);
            goto LAB_140d3dfbc;
          }
          uVar8 = uVar8 + 0x400;
          uVar14 = *(ulonglong *)((longlong)&ppVar11->next_heap + lVar12 * 8 + uVar7 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar14 == 0);
        *(uint *)&(ppVar11->large_heap).free_heap.tree = uVar1 + (int)lVar12;
        *(ulong64 *)&(ppVar11->segregated_heap).bitfit_heap = uVar8;
        goto LAB_140d3dea2;
      }
LAB_140d3dfbc:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_48,(pas_local_allocator *)ppVar11,
                 &bmalloc_allocator_counts,pas_allocation_result_crash_on_error);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_48,(pas_local_allocator *)ppVar11,param_1,1,
                 &bmalloc_allocator_counts,pas_allocation_result_crash_on_error);
    }
    auVar13 = local_48;
    local_2a = local_40._3_1_;
    local_2c = local_40._1_2_;
    local_48._0_3_ = (undefined3)((ulonglong)local_40 >> 8);
    bVar4 = local_40._0_1_;
    pVar9 = local_40._4_4_;
  }
  else {
    (ppVar11->segregated_heap).basic_size_directory_and_head.payload =
         uVar5 - (ppVar11->segregated_heap).rare_data.payload;
    auVar13 = (undefined1  [8])
              ((longlong)(ppVar11->segregated_heap).index_to_small_size_directory - (ulonglong)uVar5
              );
LAB_140d3deb6:
    *(bool *)&(ppVar11->segregated_heap).runtime_config = false;
    bVar4 = true;
    pVar9 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = (ulong64)auVar13;
  __return_storage_ptr__->did_succeed = bVar4;
  *(undefined2 *)&__return_storage_ptr__->field_0x9 = local_48._0_2_;
  __return_storage_ptr__->field_0xb = local_48[2];
  __return_storage_ptr__->zero_mode = pVar9;
  if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)local_48[2];
  }
LAB_140d3deec:
  pcVar3 = (code *)swi(3);
  ppVar6 = (pas_allocation_result *)(*pcVar3)();
  return ppVar6;
}

// bmalloc_try_allocate_with_nontrivial_alignment @ 140d3e040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_allocate_with_nontrivial_alignment(ulong64 param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  code *pcVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((1 < uVar5) &&
     (uVar9 = param_2 - (param_2 >> 1 & 0x5555555555555555),
     uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
     (char)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) == '\x01')) {
    uVar10 = param_1;
    if ((param_2 != 1) && (uVar10 = param_2, param_2 <= param_1)) {
      uVar10 = -param_2 & (param_1 + param_2) - 1;
    }
    if ((uVar10 + 0xf < 0x2720) &&
       (uVar2 = bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar10 + 0xf >> 4],
       uVar2 < *(uint *)(uVar5 + 0x1f74))) {
      lVar1 = uVar5 + (ulonglong)uVar2 * 8;
      puVar12 = (undefined1 *)(lVar1 + 0x1f80);
      if ((param_2 == 1) || (param_2 <= (ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)))) {
        *puVar12 = 1;
        uVar3 = *(uint *)(lVar1 + 0x1f98);
        if ((ulonglong)uVar3 == 0) {
          lVar11 = *(longlong *)(lVar1 + 0x1fa0);
          uVar9 = *(ulonglong *)(lVar1 + 0x1fb0);
          if (uVar9 == 0) {
            if (*(char *)(lVar1 + 0x1f88) == '\x06') {
              uVar3 = *(uint *)(lVar1 + 0x1fac);
              uVar4 = *(uint *)(lVar1 + 0x1fa8);
              uVar13 = (ulonglong)uVar4;
              if (uVar4 < uVar3) {
                *(undefined8 *)(lVar1 + 0x1fc0 + uVar13 * 8) = 0;
                lVar8 = 0;
                do {
                  if ((uVar13 - (uVar3 - 1)) + lVar8 == 0) {
                    *(uint *)(lVar1 + 0x1fa8) = uVar3;
                    goto LAB_140d3e261;
                  }
                  lVar11 = lVar11 + 0x400;
                  uVar9 = *(ulonglong *)
                           ((ulonglong)uVar2 * 8 + uVar13 * 8 + uVar5 + 0x1fc8 + lVar8 * 8);
                  lVar8 = lVar8 + 1;
                } while (uVar9 == 0);
                *(uint *)(lVar1 + 0x1fa8) = uVar4 + (int)lVar8;
                *(longlong *)(lVar1 + 0x1fa0) = lVar11;
                goto LAB_140d3e1cb;
              }
            }
LAB_140d3e261:
            *puVar12 = 0;
            goto LAB_140d3e16f;
          }
LAB_140d3e1cb:
          uVar5 = 0;
          for (uVar13 = uVar9; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
            uVar5 = uVar5 + 1;
          }
          *(ulonglong *)(lVar1 + 0x1fb0) = uVar9 & ~(1L << (uVar5 & 0x3f));
          pvVar7 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar11);
        }
        else {
          *(uint *)(lVar1 + 0x1f98) = uVar3 - *(int *)(lVar1 + 0x1f9c);
          pvVar7 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar3);
        }
        *puVar12 = 0;
        if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
          return pvVar7;
        }
        goto LAB_140d3e1f2;
      }
    }
  }
LAB_140d3e16f:
  bmalloc_try_allocate_with_alignment_impl_casual_case(&local_30,param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return (void *)local_30.begin;
  }
LAB_140d3e1f2:
  pcVar6 = (code *)swi(3);
  pvVar7 = (void *)(*pcVar6)();
  return pvVar7;
}

// bmalloc_allocate_with_nontrivial_alignment @ 140d3e270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_allocate_with_nontrivial_alignment(ulong64 param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  code *pcVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((1 < uVar5) &&
     (uVar9 = param_2 - (param_2 >> 1 & 0x5555555555555555),
     uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
     (char)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) == '\x01')) {
    uVar10 = param_1;
    if ((param_2 != 1) && (uVar10 = param_2, param_2 <= param_1)) {
      uVar10 = -param_2 & (param_1 + param_2) - 1;
    }
    if ((uVar10 + 0xf < 0x2720) &&
       (uVar2 = bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar10 + 0xf >> 4],
       uVar2 < *(uint *)(uVar5 + 0x1f74))) {
      lVar1 = uVar5 + (ulonglong)uVar2 * 8;
      puVar12 = (undefined1 *)(lVar1 + 0x1f80);
      if ((param_2 == 1) || (param_2 <= (ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)))) {
        *puVar12 = 1;
        uVar3 = *(uint *)(lVar1 + 0x1f98);
        if ((ulonglong)uVar3 == 0) {
          lVar11 = *(longlong *)(lVar1 + 0x1fa0);
          uVar9 = *(ulonglong *)(lVar1 + 0x1fb0);
          if (uVar9 == 0) {
            if (*(char *)(lVar1 + 0x1f88) == '\x06') {
              uVar3 = *(uint *)(lVar1 + 0x1fac);
              uVar4 = *(uint *)(lVar1 + 0x1fa8);
              uVar13 = (ulonglong)uVar4;
              if (uVar4 < uVar3) {
                *(undefined8 *)(lVar1 + 0x1fc0 + uVar13 * 8) = 0;
                lVar8 = 0;
                do {
                  if ((uVar3 - 1) - uVar13 == lVar8) {
                    *(uint *)(lVar1 + 0x1fa8) = uVar3;
                    goto LAB_140d3e48b;
                  }
                  lVar11 = lVar11 + 0x400;
                  uVar9 = *(ulonglong *)
                           ((ulonglong)uVar2 * 8 + uVar13 * 8 + uVar5 + 0x1fc8 + lVar8 * 8);
                  lVar8 = lVar8 + 1;
                } while (uVar9 == 0);
                *(uint *)(lVar1 + 0x1fa8) = uVar4 + (int)lVar8;
                *(longlong *)(lVar1 + 0x1fa0) = lVar11;
                goto LAB_140d3e3fb;
              }
            }
LAB_140d3e48b:
            *puVar12 = 0;
            goto LAB_140d3e39f;
          }
LAB_140d3e3fb:
          uVar5 = 0;
          for (uVar13 = uVar9; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000) {
            uVar5 = uVar5 + 1;
          }
          *(ulonglong *)(lVar1 + 0x1fb0) = uVar9 & ~(1L << (uVar5 & 0x3f));
          pvVar7 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar11);
        }
        else {
          *(uint *)(lVar1 + 0x1f98) = uVar3 - *(int *)(lVar1 + 0x1f9c);
          pvVar7 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar3);
        }
        *puVar12 = 0;
        if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
          return pvVar7;
        }
        goto LAB_140d3e422;
      }
    }
  }
LAB_140d3e39f:
  bmalloc_allocate_with_alignment_impl_casual_case(&local_30,param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return (void *)local_30.begin;
  }
LAB_140d3e422:
  pcVar6 = (code *)swi(3);
  pvVar7 = (void *)(*pcVar6)();
  return pvVar7;
}

// bmalloc_try_reallocate_with_nontrivial_alignment @ 140d3e4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_try_reallocate_with_nontrivial_alignment
          (void *param_1,ulong64 param_2,ulong64 param_3,pas_reallocate_free_mode param_4)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  pas_segregated_view_opaque *ppVar9;
  PSRWLOCK pRVar10;
  pas_thread_local_cache *ppVar11;
  pas_segregated_partial_view *ppVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  pas_fast_megapage_kind pVar19;
  pas_bitfit_page *ppVar20;
  pas_segregated_page *ppVar21;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (param_1 == (void *)0x0) {
    pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    return pvVar6;
  }
  uVar16 = (uint)((ulonglong)param_1 >> 0x18);
  if (param_2 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar5 = (ulonglong)param_1 >> 0x18;
      if (((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) == 0
         )) {
        uVar18 = uVar5 - (bmalloc_megapage_table.instance)->index_begin;
        pVar19 = pas_not_a_fast_megapage_kind;
        if ((uVar5 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar19 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar5 ||
            (pVar19 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar18 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar18 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar19 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar11,(ulong64)param_1,pas_deallocate_mode,pVar19);
          goto LAB_140d3e6b0;
        }
      }
      uVar16 = ppVar11->deallocation_log_index;
      if ((ulonglong)uVar16 < 999) {
        ppVar11->deallocation_log[uVar16] = (longlong)param_1 << 6 | 5;
        ppVar11->deallocation_log_index = uVar16 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar11,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
    }
LAB_140d3e6b0:
    pvVar6 = (void *)0x0;
    goto LAB_140d3e6b2;
  }
  uVar5 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b == 0) &&
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) != 0)) {
switchD_140d3e71e_caseD_1:
    uVar5 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3e6b0;
    }
    else {
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      memcpy(pvVar6,param_1,uVar5);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar5 = (ulonglong)ppVar11->deallocation_log_index;
      if (0x3e6 < uVar5) {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar11,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
        goto LAB_140d3e6b2;
      }
      uVar17 = (longlong)param_1 << 6 | 5;
LAB_140d3e64a:
      ppVar11->deallocation_log[uVar5] = uVar17;
      ppVar11->deallocation_log_index = (int)uVar5 + 1;
      goto LAB_140d3e6b2;
    }
    goto LAB_140d3e616;
  }
  uVar18 = uVar5 - (bmalloc_megapage_table.instance)->index_begin;
  uVar16 = (uint)param_1;
  if (((bmalloc_megapage_table.instance)->index_begin <= uVar5) &&
     (uVar5 < (bmalloc_megapage_table.instance)->index_end)) {
    switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                    (uVar18 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar18 * '\x02' & 0x1fU) & 3) {
    case 1:
      goto switchD_140d3e71e_caseD_1;
    case 2:
      ppVar21 = (pas_segregated_page *)((ulonglong)param_1 & 0xffffffffffffc000);
      uVar1 = (ppVar21->base).page_kind;
      if (uVar1 == '\x05') {
        uVar17 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                           ((pas_bitfit_page *)ppVar21,(ulong64)param_1);
        pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment
                           (param_2,param_3);
        if (pvVar6 == (void *)0x0) {
          if (param_4 != pas_reallocate_free_always) goto LAB_140d3e6b0;
        }
        else {
          if (param_2 < uVar17) {
            uVar17 = param_2;
          }
          memcpy(pvVar6,param_1,uVar17);
        }
        bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                  ((pas_bitfit_page *)ppVar21,(ulong64)param_1);
        goto LAB_140d3e6b2;
      }
      if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (((uint)ppVar21->owner & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar18 = (ulonglong)((uint)((ulonglong)param_1 >> 8) & 0x3f);
      uVar5 = (ulonglong)
              *(uint *)(((ulonglong)ppVar21->owner & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
      lVar15 = pas_compact_heap_reservation_base + uVar5 * 8;
      if (uVar5 == 0) {
        lVar15 = 0;
      }
      lVar8 = 0;
      if (*(uint3 *)(lVar15 + 0xb) != 0) {
        lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
      }
      uVar13 = *(uint *)(lVar8 + 0x20);
      pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
      if (pvVar6 == (void *)0x0) {
        if (param_4 != pas_reallocate_free_always) goto LAB_140d3e6b0;
      }
      else {
        uVar5 = (ulonglong)(uVar13 & 0x7ffffff);
        if (param_2 < uVar5) {
          uVar5 = param_2;
        }
        memcpy(pvVar6,param_1,uVar5);
      }
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (1 < *(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08)) {
        if (ppVar21->lock_ptr == (pas_lock *)0x0) {
          pRVar10 = (PSRWLOCK)0x0;
        }
        else {
          pRVar10 = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow(ppVar21,(pas_lock *)0x0,ppVar21->lock_ptr);
        }
        uVar5 = (ulonglong)((uint)((ulonglong)param_1 >> 7) & 0x7c);
        uVar16 = *(uint *)((longlong)ppVar21->alloc_bits + uVar5) & ~(1 << (uVar16 >> 4 & 0x1f));
        *(uint *)((longlong)ppVar21->alloc_bits + uVar5) = uVar16;
        if (((uint)ppVar21->owner & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)
                *(uint *)(((ulonglong)ppVar21->owner & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
        ppVar12 = (pas_segregated_partial_view *)(uVar5 * 8 + pas_compact_heap_reservation_base);
        if (uVar5 == 0) {
          ppVar12 = (pas_segregated_partial_view *)0x0;
        }
        if (!ppVar12->eligibility_has_been_noted) {
          pas_segregated_partial_view_note_eligibility(ppVar12,ppVar21);
        }
        if (uVar16 == 0) {
          uVar17 = (ppVar21->emptiness).num_non_empty_words_or_live_bytes - 1;
          if (uVar17 == 0) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar21,pas_note_emptiness_clear_num_non_empty_words);
          }
          else {
            (ppVar21->emptiness).num_non_empty_words_or_live_bytes = uVar17;
          }
        }
        if (pRVar10 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar10);
        }
        goto LAB_140d3e6b2;
      }
      goto LAB_140d3e616;
    case 3:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  uVar5 = (ulonglong)param_1 & 0xfffffffffffe0000;
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d3e7a8:
    if (bmalloc_marge_page_header_table.hashtable.table !=
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
      uVar13 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x16);
      uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
      uVar13 = uVar13 >> 0xb ^ uVar13;
      uVar18 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar13);
      uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar18].low;
      while (uVar17 != ((ulonglong)param_1 & 0xffffffffffc00000)) {
        uVar13 = uVar13 + 1;
        if (uVar17 == 0xffffffffffffffff) goto LAB_140d3ea12;
        uVar18 = (ulonglong)(uVar13 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask)
        ;
        uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar18].low;
      }
      ppVar20 = (pas_bitfit_page *)
                (bmalloc_marge_page_header_table.hashtable.table)->array[uVar18].high;
      if (ppVar20 != (pas_bitfit_page *)0x0) goto LAB_140d3e841;
    }
LAB_140d3ea12:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_large_map_find(&local_60,(ulong64)param_1);
    if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      pas_reallocation_did_fail
                ("Source object not allocated",(void *)0x0,&bmalloc_common_primitive_heap,param_1,0,
                 param_2);
    }
    if ((void *)local_60.begin != param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = local_60.end - (longlong)param_1;
    if (local_60.end < param_1 || uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3e6b0;
    }
    else {
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      memcpy(pvVar6,param_1,uVar5);
    }
    pas_deallocate_known_large(param_1,&bmalloc_heap_config);
    goto LAB_140d3e6b2;
  }
  uVar13 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
  uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
  uVar13 = uVar13 >> 0xb ^ uVar13;
  uVar18 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar13);
  uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].low;
  while (uVar17 != uVar5) {
    uVar13 = uVar13 + 1;
    if (uVar17 == 0xffffffffffffffff) goto LAB_140d3e7a8;
    uVar18 = (ulonglong)(uVar13 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
    uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].low;
  }
  ppVar20 = (pas_bitfit_page *)
            (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].high;
  if (ppVar20 == (pas_bitfit_page *)0x0) goto LAB_140d3e7a8;
LAB_140d3e841:
  switch((ppVar20->base).page_kind) {
  case '\x01':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x02':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x03':
    if (((uint)ppVar20[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar13 = uVar16 & 0x1ffff;
    uVar18 = (ulonglong)(uVar13 >> 0xc);
    uVar7 = (ulonglong)*(uint *)((ppVar20[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
    lVar15 = pas_compact_heap_reservation_base + uVar7 * 8;
    if (uVar7 == 0) {
      lVar15 = 0;
    }
    lVar8 = 0;
    if (*(uint3 *)(lVar15 + 0xb) != 0) {
      lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
    }
    uVar14 = *(uint *)(lVar8 + 0x20);
    pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3e6b0;
    }
    else {
      uVar7 = (ulonglong)(uVar14 & 0x7ffffff);
      if (param_2 < uVar7) {
        uVar7 = param_2;
      }
      memcpy(pvVar6,param_1,uVar7);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (1 < *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08)) {
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        ppVar21 = (pas_segregated_page *)0x0;
      }
      else {
        uVar14 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11)
        ;
        uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
        uVar14 = uVar14 >> 0xb ^ uVar14;
        uVar7 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14)
        ;
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
        if (uVar17 != uVar5) {
          ppVar21 = (pas_segregated_page *)0x0;
          do {
            uVar14 = uVar14 + 1;
            if (uVar17 == 0xffffffffffffffff) goto LAB_140d3eed7;
            uVar7 = (ulonglong)
                    (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
          } while (uVar17 != uVar5);
        }
        ppVar21 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].high;
      }
LAB_140d3eed7:
      if (ppVar21->lock_ptr == (pas_lock *)0x0) {
        pRVar10 = (PSRWLOCK)0x0;
      }
      else {
        pRVar10 = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow(ppVar21,(pas_lock *)0x0,ppVar21->lock_ptr);
      }
      uVar5 = (ulonglong)((uint)((ulonglong)param_1 >> 0xc) & 0x1c);
      uVar16 = *(uint *)((longlong)ppVar21->alloc_bits + uVar5) & ~(1 << (uVar16 >> 9 & 0x1f));
      *(uint *)((longlong)ppVar21->alloc_bits + uVar5) = uVar16;
      ppVar9 = ppVar21->owner;
      if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
      ppVar12 = (pas_segregated_partial_view *)(uVar5 * 8 + pas_compact_heap_reservation_base);
      if (uVar5 == 0) {
        ppVar12 = (pas_segregated_partial_view *)0x0;
      }
      if (!ppVar12->eligibility_has_been_noted) {
        pas_segregated_partial_view_note_eligibility(ppVar12,ppVar21);
        ppVar9 = ppVar21->owner;
      }
      if (((ulonglong)ppVar9 & 6) == 0) {
        uVar14 = ppVar21->object_size;
      }
      else {
        if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
        lVar15 = pas_compact_heap_reservation_base + uVar5 * 8;
        if (uVar5 == 0) {
          lVar15 = 0;
        }
        uVar14 = *(uint *)((ulonglong)
                           ((uint)*(byte *)(lVar15 + 0xd) * 0x80000 +
                           (uint)*(ushort *)(lVar15 + 0xb) * 8) + 0x20 +
                          pas_compact_heap_reservation_base) & 0x7ffffff;
      }
      if (uVar14 == 0) {
LAB_140d3efb2:
        bVar4 = false;
      }
      else {
        if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = ((ulonglong)uVar14 + (ulonglong)uVar13) - 1 >> 0xc;
        if (uVar5 < uVar18) goto LAB_140d3efb2;
        bVar4 = false;
        do {
          cVar2 = *(char *)((longlong)ppVar21[1].alloc_bits + (uVar18 - 0x10));
          if (cVar2 == '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (cVar2 == -1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(char *)((longlong)ppVar21[1].alloc_bits + (uVar18 - 0x10)) = cVar2 + -1;
          bVar4 = (bool)(bVar4 | (char)(cVar2 + -1) == '\0');
          uVar18 = uVar18 + 1;
        } while (uVar5 + 1 != uVar18);
      }
      if (pas_segregated_page_deallocate_should_verify_granules == true) {
        pas_segregated_page_verify_granules(ppVar21);
      }
      if (bVar4) {
        pas_segregated_page_note_emptiness_impl(ppVar21,pas_note_emptiness_keep_num_non_empty_words)
        ;
      }
      if (uVar16 == 0) {
        uVar17 = (ppVar21->emptiness).num_non_empty_words_or_live_bytes - 1;
        if (uVar17 == 0) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar21,pas_note_emptiness_clear_num_non_empty_words);
        }
        else {
          (ppVar21->emptiness).num_non_empty_words_or_live_bytes = uVar17;
        }
      }
      if (pRVar10 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar10);
      }
      goto LAB_140d3e6b2;
    }
    break;
  case '\x04':
    uVar18 = (ulonglong)(ppVar20->owner).payload;
    pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3e6b0;
    }
    else {
      if (param_2 < uVar18) {
        uVar18 = param_2;
      }
      memcpy(pvVar6,param_1,uVar18);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar16 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
      uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
      uVar16 = uVar16 >> 0xb ^ uVar16;
      uVar18 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar16);
      uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].low;
      while (uVar17 != uVar5) {
        uVar16 = uVar16 + 1;
        uVar18 = (ulonglong)
                 (uVar16 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].low;
      }
      uVar5 = (ulonglong)
              *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].high + 4)
              + ppVar11->num_logged_bytes;
      if (uVar5 < 0xc351) {
        ppVar11->num_logged_bytes = uVar5;
        uVar5 = (ulonglong)ppVar11->deallocation_log_index;
        if (uVar5 < 999) {
          uVar17 = (longlong)param_1 << 6 | 7;
          goto LAB_140d3e64a;
        }
      }
      pas_thread_local_cache_append_deallocation_slow
                (ppVar11,(ulong64)param_1,
                 pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role);
      goto LAB_140d3e6b2;
    }
    break;
  case '\x05':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x06':
    uVar17 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar20,(ulong64)param_1);
    pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3e6b0;
    }
    else {
      if (param_2 < uVar17) {
        uVar17 = param_2;
      }
      memcpy(pvVar6,param_1,uVar17);
    }
    bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
              (ppVar20,(ulong64)param_1);
    goto LAB_140d3e6b2;
  case '\a':
    uVar17 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar20,(ulong64)param_1);
    pvVar6 = bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3e6b0;
    }
    else {
      if (param_2 < uVar17) {
        uVar17 = param_2;
      }
      memcpy(pvVar6,param_1,uVar17);
    }
    bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page(ppVar20,(ulong64)param_1)
    ;
    goto LAB_140d3e6b2;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_140d3e616:
  pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
LAB_140d3e6b2:
  if ((local_48 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return pvVar6;
  }
  pcVar3 = (code *)swi(3);
  pvVar6 = (void *)(*pcVar3)();
  return pvVar6;
}

// bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment @ 140d3f0e0

void * __cdecl
bmalloc_try_allocate_with_alignment_impl_for_realloc_with_alignment(ulong64 param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar5 < 2) ||
     (uVar8 = param_2 - (param_2 >> 1 & 0x5555555555555555),
     uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333),
     (char)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01'))
  goto LAB_140d3f205;
  uVar9 = param_1;
  if ((param_2 != 1) && (uVar9 = param_2, param_2 <= param_1)) {
    uVar9 = -param_2 & (param_1 + param_2) - 1;
  }
  if ((0x271f < uVar9 + 0xf) ||
     (uVar2 = bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar9 + 0xf >> 4],
     *(uint *)(uVar5 + 0x1f74) <= uVar2)) goto LAB_140d3f205;
  lVar1 = uVar5 + (ulonglong)uVar2 * 8;
  puVar11 = (undefined1 *)(lVar1 + 0x1f80);
  if ((param_2 != 1) && ((ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)) < param_2))
  goto LAB_140d3f205;
  *puVar11 = 1;
  uVar3 = *(uint *)(lVar1 + 0x1f98);
  if ((ulonglong)uVar3 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar3 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar3);
    goto LAB_140d3f256;
  }
  lVar10 = *(longlong *)(lVar1 + 0x1fa0);
  uVar8 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar8 != 0) {
LAB_140d3f243:
    uVar5 = 0;
    for (uVar12 = uVar8; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar8 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar10);
LAB_140d3f256:
    *puVar11 = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar3 = *(uint *)(lVar1 + 0x1fac);
    uVar4 = *(uint *)(lVar1 + 0x1fa8);
    uVar12 = (ulonglong)uVar4;
    if (uVar4 < uVar3) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar12 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar12 - (uVar3 - 1)) + lVar7 == 0) {
          *(uint *)(lVar1 + 0x1fa8) = uVar3;
          goto LAB_140d3f2cc;
        }
        lVar10 = lVar10 + 0x400;
        uVar8 = *(ulonglong *)((ulonglong)uVar2 * 8 + uVar12 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar8 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar4 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar10;
      goto LAB_140d3f243;
    }
  }
LAB_140d3f2cc:
  *puVar11 = 0;
LAB_140d3f205:
  pvVar6 = bmalloc_try_allocate_with_alignment_impl_casual_case_ptr(param_1,param_2);
  return pvVar6;
}

// bmalloc_reallocate_with_nontrivial_alignment @ 140d3f2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_reallocate_with_nontrivial_alignment
          (void *param_1,ulong64 param_2,ulong64 param_3,pas_reallocate_free_mode param_4)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  pas_segregated_view_opaque *ppVar9;
  PSRWLOCK pRVar10;
  pas_thread_local_cache *ppVar11;
  pas_segregated_partial_view *ppVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  pas_fast_megapage_kind pVar19;
  pas_bitfit_page *ppVar20;
  pas_segregated_page *ppVar21;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (param_1 == (void *)0x0) {
    pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    return pvVar6;
  }
  uVar16 = (uint)((ulonglong)param_1 >> 0x18);
  if (param_2 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar5 = (ulonglong)param_1 >> 0x18;
      if (((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) == 0
         )) {
        uVar18 = uVar5 - (bmalloc_megapage_table.instance)->index_begin;
        pVar19 = pas_not_a_fast_megapage_kind;
        if ((uVar5 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar19 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar5 ||
            (pVar19 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar18 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar18 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar19 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar11,(ulong64)param_1,pas_deallocate_mode,pVar19);
          goto LAB_140d3f4f0;
        }
      }
      uVar16 = ppVar11->deallocation_log_index;
      if ((ulonglong)uVar16 < 999) {
        ppVar11->deallocation_log[uVar16] = (longlong)param_1 << 6 | 5;
        ppVar11->deallocation_log_index = uVar16 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar11,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
    }
LAB_140d3f4f0:
    pvVar6 = (void *)0x0;
    goto LAB_140d3f4f2;
  }
  uVar5 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b == 0) &&
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) != 0)) {
switchD_140d3f55e_caseD_1:
    uVar5 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3f4f0;
    }
    else {
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      memcpy(pvVar6,param_1,uVar5);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar5 = (ulonglong)ppVar11->deallocation_log_index;
      if (0x3e6 < uVar5) {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar11,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
        goto LAB_140d3f4f2;
      }
      uVar17 = (longlong)param_1 << 6 | 5;
LAB_140d3f48a:
      ppVar11->deallocation_log[uVar5] = uVar17;
      ppVar11->deallocation_log_index = (int)uVar5 + 1;
      goto LAB_140d3f4f2;
    }
    goto LAB_140d3f456;
  }
  uVar18 = uVar5 - (bmalloc_megapage_table.instance)->index_begin;
  uVar16 = (uint)param_1;
  if (((bmalloc_megapage_table.instance)->index_begin <= uVar5) &&
     (uVar5 < (bmalloc_megapage_table.instance)->index_end)) {
    switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                    (uVar18 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar18 * '\x02' & 0x1fU) & 3) {
    case 1:
      goto switchD_140d3f55e_caseD_1;
    case 2:
      ppVar21 = (pas_segregated_page *)((ulonglong)param_1 & 0xffffffffffffc000);
      uVar1 = (ppVar21->base).page_kind;
      if (uVar1 == '\x05') {
        uVar17 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                           ((pas_bitfit_page *)ppVar21,(ulong64)param_1);
        pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
        if (pvVar6 == (void *)0x0) {
          if (param_4 != pas_reallocate_free_always) goto LAB_140d3f4f0;
        }
        else {
          if (param_2 < uVar17) {
            uVar17 = param_2;
          }
          memcpy(pvVar6,param_1,uVar17);
        }
        bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                  ((pas_bitfit_page *)ppVar21,(ulong64)param_1);
        goto LAB_140d3f4f2;
      }
      if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (((uint)ppVar21->owner & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar18 = (ulonglong)((uint)((ulonglong)param_1 >> 8) & 0x3f);
      uVar5 = (ulonglong)
              *(uint *)(((ulonglong)ppVar21->owner & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
      lVar15 = pas_compact_heap_reservation_base + uVar5 * 8;
      if (uVar5 == 0) {
        lVar15 = 0;
      }
      lVar8 = 0;
      if (*(uint3 *)(lVar15 + 0xb) != 0) {
        lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
      }
      uVar13 = *(uint *)(lVar8 + 0x20);
      pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
      if (pvVar6 == (void *)0x0) {
        if (param_4 != pas_reallocate_free_always) goto LAB_140d3f4f0;
      }
      else {
        uVar5 = (ulonglong)(uVar13 & 0x7ffffff);
        if (param_2 < uVar5) {
          uVar5 = param_2;
        }
        memcpy(pvVar6,param_1,uVar5);
      }
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (1 < *(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08)) {
        if (ppVar21->lock_ptr == (pas_lock *)0x0) {
          pRVar10 = (PSRWLOCK)0x0;
        }
        else {
          pRVar10 = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow(ppVar21,(pas_lock *)0x0,ppVar21->lock_ptr);
        }
        uVar5 = (ulonglong)((uint)((ulonglong)param_1 >> 7) & 0x7c);
        uVar16 = *(uint *)((longlong)ppVar21->alloc_bits + uVar5) & ~(1 << (uVar16 >> 4 & 0x1f));
        *(uint *)((longlong)ppVar21->alloc_bits + uVar5) = uVar16;
        if (((uint)ppVar21->owner & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)
                *(uint *)(((ulonglong)ppVar21->owner & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
        ppVar12 = (pas_segregated_partial_view *)(uVar5 * 8 + pas_compact_heap_reservation_base);
        if (uVar5 == 0) {
          ppVar12 = (pas_segregated_partial_view *)0x0;
        }
        if (!ppVar12->eligibility_has_been_noted) {
          pas_segregated_partial_view_note_eligibility(ppVar12,ppVar21);
        }
        if (uVar16 == 0) {
          uVar17 = (ppVar21->emptiness).num_non_empty_words_or_live_bytes - 1;
          if (uVar17 == 0) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar21,pas_note_emptiness_clear_num_non_empty_words);
          }
          else {
            (ppVar21->emptiness).num_non_empty_words_or_live_bytes = uVar17;
          }
        }
        if (pRVar10 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar10);
        }
        goto LAB_140d3f4f2;
      }
      goto LAB_140d3f456;
    case 3:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  uVar5 = (ulonglong)param_1 & 0xfffffffffffe0000;
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d3f5e8:
    if (bmalloc_marge_page_header_table.hashtable.table !=
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
      uVar13 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x16);
      uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
      uVar13 = uVar13 >> 0xb ^ uVar13;
      uVar18 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar13);
      uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar18].low;
      while (uVar17 != ((ulonglong)param_1 & 0xffffffffffc00000)) {
        uVar13 = uVar13 + 1;
        if (uVar17 == 0xffffffffffffffff) goto LAB_140d3f852;
        uVar18 = (ulonglong)(uVar13 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask)
        ;
        uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar18].low;
      }
      ppVar20 = (pas_bitfit_page *)
                (bmalloc_marge_page_header_table.hashtable.table)->array[uVar18].high;
      if (ppVar20 != (pas_bitfit_page *)0x0) goto LAB_140d3f681;
    }
LAB_140d3f852:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_large_map_find(&local_60,(ulong64)param_1);
    if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      pas_reallocation_did_fail
                ("Source object not allocated",(void *)0x0,&bmalloc_common_primitive_heap,param_1,0,
                 param_2);
    }
    if ((void *)local_60.begin != param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = local_60.end - (longlong)param_1;
    if (local_60.end < param_1 || uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3f4f0;
    }
    else {
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      memcpy(pvVar6,param_1,uVar5);
    }
    pas_deallocate_known_large(param_1,&bmalloc_heap_config);
    goto LAB_140d3f4f2;
  }
  uVar13 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
  uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
  uVar13 = uVar13 >> 0xb ^ uVar13;
  uVar18 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar13);
  uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].low;
  while (uVar17 != uVar5) {
    uVar13 = uVar13 + 1;
    if (uVar17 == 0xffffffffffffffff) goto LAB_140d3f5e8;
    uVar18 = (ulonglong)(uVar13 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
    uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].low;
  }
  ppVar20 = (pas_bitfit_page *)
            (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].high;
  if (ppVar20 == (pas_bitfit_page *)0x0) goto LAB_140d3f5e8;
LAB_140d3f681:
  switch((ppVar20->base).page_kind) {
  case '\x01':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x02':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x03':
    if (((uint)ppVar20[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar13 = uVar16 & 0x1ffff;
    uVar18 = (ulonglong)(uVar13 >> 0xc);
    uVar7 = (ulonglong)*(uint *)((ppVar20[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
    lVar15 = pas_compact_heap_reservation_base + uVar7 * 8;
    if (uVar7 == 0) {
      lVar15 = 0;
    }
    lVar8 = 0;
    if (*(uint3 *)(lVar15 + 0xb) != 0) {
      lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
    }
    uVar14 = *(uint *)(lVar8 + 0x20);
    pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3f4f0;
    }
    else {
      uVar7 = (ulonglong)(uVar14 & 0x7ffffff);
      if (param_2 < uVar7) {
        uVar7 = param_2;
      }
      memcpy(pvVar6,param_1,uVar7);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (1 < *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08)) {
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        ppVar21 = (pas_segregated_page *)0x0;
      }
      else {
        uVar14 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11)
        ;
        uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
        uVar14 = uVar14 >> 0xb ^ uVar14;
        uVar7 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14)
        ;
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
        if (uVar17 != uVar5) {
          ppVar21 = (pas_segregated_page *)0x0;
          do {
            uVar14 = uVar14 + 1;
            if (uVar17 == 0xffffffffffffffff) goto LAB_140d3fd17;
            uVar7 = (ulonglong)
                    (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
          } while (uVar17 != uVar5);
        }
        ppVar21 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].high;
      }
LAB_140d3fd17:
      if (ppVar21->lock_ptr == (pas_lock *)0x0) {
        pRVar10 = (PSRWLOCK)0x0;
      }
      else {
        pRVar10 = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow(ppVar21,(pas_lock *)0x0,ppVar21->lock_ptr);
      }
      uVar5 = (ulonglong)((uint)((ulonglong)param_1 >> 0xc) & 0x1c);
      uVar16 = *(uint *)((longlong)ppVar21->alloc_bits + uVar5) & ~(1 << (uVar16 >> 9 & 0x1f));
      *(uint *)((longlong)ppVar21->alloc_bits + uVar5) = uVar16;
      ppVar9 = ppVar21->owner;
      if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
      ppVar12 = (pas_segregated_partial_view *)(uVar5 * 8 + pas_compact_heap_reservation_base);
      if (uVar5 == 0) {
        ppVar12 = (pas_segregated_partial_view *)0x0;
      }
      if (!ppVar12->eligibility_has_been_noted) {
        pas_segregated_partial_view_note_eligibility(ppVar12,ppVar21);
        ppVar9 = ppVar21->owner;
      }
      if (((ulonglong)ppVar9 & 6) == 0) {
        uVar14 = ppVar21->object_size;
      }
      else {
        if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar18 * 4);
        lVar15 = pas_compact_heap_reservation_base + uVar5 * 8;
        if (uVar5 == 0) {
          lVar15 = 0;
        }
        uVar14 = *(uint *)((ulonglong)
                           ((uint)*(byte *)(lVar15 + 0xd) * 0x80000 +
                           (uint)*(ushort *)(lVar15 + 0xb) * 8) + 0x20 +
                          pas_compact_heap_reservation_base) & 0x7ffffff;
      }
      if (uVar14 == 0) {
LAB_140d3fdf2:
        bVar4 = false;
      }
      else {
        if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = ((ulonglong)uVar14 + (ulonglong)uVar13) - 1 >> 0xc;
        if (uVar5 < uVar18) goto LAB_140d3fdf2;
        bVar4 = false;
        do {
          cVar2 = *(char *)((longlong)ppVar21[1].alloc_bits + (uVar18 - 0x10));
          if (cVar2 == '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (cVar2 == -1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(char *)((longlong)ppVar21[1].alloc_bits + (uVar18 - 0x10)) = cVar2 + -1;
          bVar4 = (bool)(bVar4 | (char)(cVar2 + -1) == '\0');
          uVar18 = uVar18 + 1;
        } while (uVar5 + 1 != uVar18);
      }
      if (pas_segregated_page_deallocate_should_verify_granules == true) {
        pas_segregated_page_verify_granules(ppVar21);
      }
      if (bVar4) {
        pas_segregated_page_note_emptiness_impl(ppVar21,pas_note_emptiness_keep_num_non_empty_words)
        ;
      }
      if (uVar16 == 0) {
        uVar17 = (ppVar21->emptiness).num_non_empty_words_or_live_bytes - 1;
        if (uVar17 == 0) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar21,pas_note_emptiness_clear_num_non_empty_words);
        }
        else {
          (ppVar21->emptiness).num_non_empty_words_or_live_bytes = uVar17;
        }
      }
      if (pRVar10 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar10);
      }
      goto LAB_140d3f4f2;
    }
    break;
  case '\x04':
    uVar18 = (ulonglong)(ppVar20->owner).payload;
    pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3f4f0;
    }
    else {
      if (param_2 < uVar18) {
        uVar18 = param_2;
      }
      memcpy(pvVar6,param_1,uVar18);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar16 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
      uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
      uVar16 = uVar16 >> 0xb ^ uVar16;
      uVar18 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar16);
      uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].low;
      while (uVar17 != uVar5) {
        uVar16 = uVar16 + 1;
        uVar18 = (ulonglong)
                 (uVar16 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].low;
      }
      uVar5 = (ulonglong)
              *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar18].high + 4)
              + ppVar11->num_logged_bytes;
      if (uVar5 < 0xc351) {
        ppVar11->num_logged_bytes = uVar5;
        uVar5 = (ulonglong)ppVar11->deallocation_log_index;
        if (uVar5 < 999) {
          uVar17 = (longlong)param_1 << 6 | 7;
          goto LAB_140d3f48a;
        }
      }
      pas_thread_local_cache_append_deallocation_slow
                (ppVar11,(ulong64)param_1,
                 pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role);
      goto LAB_140d3f4f2;
    }
    break;
  case '\x05':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x06':
    uVar17 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar20,(ulong64)param_1);
    pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3f4f0;
    }
    else {
      if (param_2 < uVar17) {
        uVar17 = param_2;
      }
      memcpy(pvVar6,param_1,uVar17);
    }
    bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
              (ppVar20,(ulong64)param_1);
    goto LAB_140d3f4f2;
  case '\a':
    uVar17 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar20,(ulong64)param_1);
    pvVar6 = bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(param_2,param_3);
    if (pvVar6 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d3f4f0;
    }
    else {
      if (param_2 < uVar17) {
        uVar17 = param_2;
      }
      memcpy(pvVar6,param_1,uVar17);
    }
    bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page(ppVar20,(ulong64)param_1)
    ;
    goto LAB_140d3f4f2;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_140d3f456:
  pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
LAB_140d3f4f2:
  if ((local_48 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return pvVar6;
  }
  pcVar3 = (code *)swi(3);
  pvVar6 = (void *)(*pcVar3)();
  return pvVar6;
}

// bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment @ 140d3ff20

void * __cdecl
bmalloc_allocate_with_alignment_impl_for_realloc_with_alignment(ulong64 param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar5 < 2) ||
     (uVar8 = param_2 - (param_2 >> 1 & 0x5555555555555555),
     uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333),
     (char)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01'))
  goto LAB_140d40045;
  uVar9 = param_1;
  if ((param_2 != 1) && (uVar9 = param_2, param_2 <= param_1)) {
    uVar9 = -param_2 & (param_1 + param_2) - 1;
  }
  if ((0x271f < uVar9 + 0xf) ||
     (uVar2 = bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar9 + 0xf >> 4],
     *(uint *)(uVar5 + 0x1f74) <= uVar2)) goto LAB_140d40045;
  lVar1 = uVar5 + (ulonglong)uVar2 * 8;
  puVar11 = (undefined1 *)(lVar1 + 0x1f80);
  if ((param_2 != 1) && ((ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)) < param_2))
  goto LAB_140d40045;
  *puVar11 = 1;
  uVar3 = *(uint *)(lVar1 + 0x1f98);
  if ((ulonglong)uVar3 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar3 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar3);
    goto LAB_140d40096;
  }
  lVar10 = *(longlong *)(lVar1 + 0x1fa0);
  uVar8 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar8 != 0) {
LAB_140d40083:
    uVar5 = 0;
    for (uVar12 = uVar8; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar8 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar10);
LAB_140d40096:
    *puVar11 = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar3 = *(uint *)(lVar1 + 0x1fac);
    uVar4 = *(uint *)(lVar1 + 0x1fa8);
    uVar12 = (ulonglong)uVar4;
    if (uVar4 < uVar3) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar12 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar3 - 1) - uVar12 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar3;
          goto LAB_140d40103;
        }
        lVar10 = lVar10 + 0x400;
        uVar8 = *(ulonglong *)((ulonglong)uVar2 * 8 + uVar12 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar8 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar4 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar10;
      goto LAB_140d40083;
    }
  }
LAB_140d40103:
  *puVar11 = 0;
LAB_140d40045:
  pvVar6 = bmalloc_allocate_with_alignment_impl_casual_case_ptr(param_1,param_2);
  return pvVar6;
}

// bmalloc_try_reallocate_casual @ 140d40120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_try_reallocate_casual(void *param_1,ulong64 param_2,pas_reallocate_free_mode param_3)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  pas_segregated_view_opaque *ppVar9;
  PSRWLOCK pRVar10;
  pas_thread_local_cache *ppVar11;
  pas_segregated_partial_view *ppVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulong64 uVar17;
  pas_fast_megapage_kind pVar18;
  ulonglong uVar19;
  pas_bitfit_page *ppVar20;
  pas_segregated_page *ppVar21;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (param_1 == (void *)0x0) {
    pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
    return pvVar6;
  }
  uVar16 = (uint)((ulonglong)param_1 >> 0x18);
  if (param_2 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar5 = (ulonglong)param_1 >> 0x18;
      if (((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) == 0
         )) {
        uVar19 = uVar5 - (bmalloc_megapage_table.instance)->index_begin;
        pVar18 = pas_not_a_fast_megapage_kind;
        if ((uVar5 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar18 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar5 ||
            (pVar18 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar19 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar19 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar18 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar11,(ulong64)param_1,pas_deallocate_mode,pVar18);
          goto LAB_140d40327;
        }
      }
      uVar16 = ppVar11->deallocation_log_index;
      if ((ulonglong)uVar16 < 999) {
        ppVar11->deallocation_log[uVar16] = (longlong)param_1 << 6 | 5;
        ppVar11->deallocation_log_index = uVar16 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar11,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
    }
LAB_140d40327:
    pvVar6 = (void *)0x0;
    goto LAB_140d40329;
  }
  uVar5 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b == 0) &&
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) != 0)) {
switchD_140d40395_caseD_1:
    uVar5 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d40327;
    }
    else {
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      memcpy(pvVar6,param_1,uVar5);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar5 = (ulonglong)ppVar11->deallocation_log_index;
      if (0x3e6 < uVar5) {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar11,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
        goto LAB_140d40329;
      }
      uVar17 = (longlong)param_1 << 6 | 5;
LAB_140d402c1:
      ppVar11->deallocation_log[uVar5] = uVar17;
      ppVar11->deallocation_log_index = (int)uVar5 + 1;
      goto LAB_140d40329;
    }
    goto LAB_140d4028d;
  }
  uVar19 = uVar5 - (bmalloc_megapage_table.instance)->index_begin;
  uVar16 = (uint)param_1;
  if (((bmalloc_megapage_table.instance)->index_begin <= uVar5) &&
     (uVar5 < (bmalloc_megapage_table.instance)->index_end)) {
    switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                    (uVar19 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar19 * '\x02' & 0x1fU) & 3) {
    case 1:
      goto switchD_140d40395_caseD_1;
    case 2:
      ppVar21 = (pas_segregated_page *)((ulonglong)param_1 & 0xffffffffffffc000);
      uVar1 = (ppVar21->base).page_kind;
      if (uVar1 == '\x05') {
        uVar17 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                           ((pas_bitfit_page *)ppVar21,(ulong64)param_1);
        pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
        if (pvVar6 == (void *)0x0) {
          if (param_3 != pas_reallocate_free_always) goto LAB_140d40327;
        }
        else {
          if (param_2 < uVar17) {
            uVar17 = param_2;
          }
          memcpy(pvVar6,param_1,uVar17);
        }
        bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                  ((pas_bitfit_page *)ppVar21,(ulong64)param_1);
        goto LAB_140d40329;
      }
      if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (((uint)ppVar21->owner & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar19 = (ulonglong)((uint)((ulonglong)param_1 >> 8) & 0x3f);
      uVar5 = (ulonglong)
              *(uint *)(((ulonglong)ppVar21->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
      lVar15 = pas_compact_heap_reservation_base + uVar5 * 8;
      if (uVar5 == 0) {
        lVar15 = 0;
      }
      lVar8 = 0;
      if (*(uint3 *)(lVar15 + 0xb) != 0) {
        lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
      }
      uVar13 = *(uint *)(lVar8 + 0x20);
      pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
      if (pvVar6 == (void *)0x0) {
        if (param_3 != pas_reallocate_free_always) goto LAB_140d40327;
      }
      else {
        uVar5 = (ulonglong)(uVar13 & 0x7ffffff);
        if (param_2 < uVar5) {
          uVar5 = param_2;
        }
        memcpy(pvVar6,param_1,uVar5);
      }
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (1 < *(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08)) {
        if (ppVar21->lock_ptr == (pas_lock *)0x0) {
          pRVar10 = (PSRWLOCK)0x0;
        }
        else {
          pRVar10 = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow(ppVar21,(pas_lock *)0x0,ppVar21->lock_ptr);
        }
        uVar5 = (ulonglong)((uint)((ulonglong)param_1 >> 7) & 0x7c);
        uVar16 = *(uint *)((longlong)ppVar21->alloc_bits + uVar5) & ~(1 << (uVar16 >> 4 & 0x1f));
        *(uint *)((longlong)ppVar21->alloc_bits + uVar5) = uVar16;
        if (((uint)ppVar21->owner & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)
                *(uint *)(((ulonglong)ppVar21->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
        ppVar12 = (pas_segregated_partial_view *)(uVar5 * 8 + pas_compact_heap_reservation_base);
        if (uVar5 == 0) {
          ppVar12 = (pas_segregated_partial_view *)0x0;
        }
        if (!ppVar12->eligibility_has_been_noted) {
          pas_segregated_partial_view_note_eligibility(ppVar12,ppVar21);
        }
        if (uVar16 == 0) {
          uVar17 = (ppVar21->emptiness).num_non_empty_words_or_live_bytes - 1;
          if (uVar17 == 0) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar21,pas_note_emptiness_clear_num_non_empty_words);
          }
          else {
            (ppVar21->emptiness).num_non_empty_words_or_live_bytes = uVar17;
          }
        }
        if (pRVar10 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar10);
        }
        goto LAB_140d40329;
      }
      goto LAB_140d4028d;
    case 3:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  uVar5 = (ulonglong)param_1 & 0xfffffffffffe0000;
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4041f:
    if (bmalloc_marge_page_header_table.hashtable.table !=
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
      uVar13 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x16);
      uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
      uVar13 = uVar13 >> 0xb ^ uVar13;
      uVar19 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar13);
      uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
      while (uVar17 != ((ulonglong)param_1 & 0xffffffffffc00000)) {
        uVar13 = uVar13 + 1;
        if (uVar17 == 0xffffffffffffffff) goto LAB_140d40683;
        uVar19 = (ulonglong)(uVar13 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask)
        ;
        uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
      }
      ppVar20 = (pas_bitfit_page *)
                (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].high;
      if (ppVar20 != (pas_bitfit_page *)0x0) goto LAB_140d404b8;
    }
LAB_140d40683:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_large_map_find(&local_60,(ulong64)param_1);
    if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      pas_reallocation_did_fail
                ("Source object not allocated",(void *)0x0,&bmalloc_common_primitive_heap,param_1,0,
                 param_2);
    }
    if ((void *)local_60.begin != param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = local_60.end - (longlong)param_1;
    if (local_60.end < param_1 || uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d40327;
    }
    else {
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      memcpy(pvVar6,param_1,uVar5);
    }
    pas_deallocate_known_large(param_1,&bmalloc_heap_config);
    goto LAB_140d40329;
  }
  uVar13 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
  uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
  uVar13 = uVar13 >> 0xb ^ uVar13;
  uVar19 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar13);
  uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
  while (uVar17 != uVar5) {
    uVar13 = uVar13 + 1;
    if (uVar17 == 0xffffffffffffffff) goto LAB_140d4041f;
    uVar19 = (ulonglong)(uVar13 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
    uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
  }
  ppVar20 = (pas_bitfit_page *)
            (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
  if (ppVar20 == (pas_bitfit_page *)0x0) goto LAB_140d4041f;
LAB_140d404b8:
  switch((ppVar20->base).page_kind) {
  case '\x01':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x02':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x03':
    if (((uint)ppVar20[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar13 = uVar16 & 0x1ffff;
    uVar19 = (ulonglong)(uVar13 >> 0xc);
    uVar7 = (ulonglong)*(uint *)((ppVar20[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
    lVar15 = pas_compact_heap_reservation_base + uVar7 * 8;
    if (uVar7 == 0) {
      lVar15 = 0;
    }
    lVar8 = 0;
    if (*(uint3 *)(lVar15 + 0xb) != 0) {
      lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
    }
    uVar14 = *(uint *)(lVar8 + 0x20);
    pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d40327;
    }
    else {
      uVar7 = (ulonglong)(uVar14 & 0x7ffffff);
      if (param_2 < uVar7) {
        uVar7 = param_2;
      }
      memcpy(pvVar6,param_1,uVar7);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (1 < *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08)) {
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        ppVar21 = (pas_segregated_page *)0x0;
      }
      else {
        uVar14 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11)
        ;
        uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
        uVar14 = uVar14 >> 0xb ^ uVar14;
        uVar7 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14)
        ;
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
        if (uVar17 != uVar5) {
          ppVar21 = (pas_segregated_page *)0x0;
          do {
            uVar14 = uVar14 + 1;
            if (uVar17 == 0xffffffffffffffff) goto LAB_140d40b39;
            uVar7 = (ulonglong)
                    (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
          } while (uVar17 != uVar5);
        }
        ppVar21 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].high;
      }
LAB_140d40b39:
      if (ppVar21->lock_ptr == (pas_lock *)0x0) {
        pRVar10 = (PSRWLOCK)0x0;
      }
      else {
        pRVar10 = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow(ppVar21,(pas_lock *)0x0,ppVar21->lock_ptr);
      }
      uVar5 = (ulonglong)((uint)((ulonglong)param_1 >> 0xc) & 0x1c);
      uVar16 = *(uint *)((longlong)ppVar21->alloc_bits + uVar5) & ~(1 << (uVar16 >> 9 & 0x1f));
      *(uint *)((longlong)ppVar21->alloc_bits + uVar5) = uVar16;
      ppVar9 = ppVar21->owner;
      if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
      ppVar12 = (pas_segregated_partial_view *)(uVar5 * 8 + pas_compact_heap_reservation_base);
      if (uVar5 == 0) {
        ppVar12 = (pas_segregated_partial_view *)0x0;
      }
      if (!ppVar12->eligibility_has_been_noted) {
        pas_segregated_partial_view_note_eligibility(ppVar12,ppVar21);
        ppVar9 = ppVar21->owner;
      }
      if (((ulonglong)ppVar9 & 6) == 0) {
        uVar14 = ppVar21->object_size;
      }
      else {
        if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
        lVar15 = pas_compact_heap_reservation_base + uVar5 * 8;
        if (uVar5 == 0) {
          lVar15 = 0;
        }
        uVar14 = *(uint *)((ulonglong)
                           ((uint)*(byte *)(lVar15 + 0xd) * 0x80000 +
                           (uint)*(ushort *)(lVar15 + 0xb) * 8) + 0x20 +
                          pas_compact_heap_reservation_base) & 0x7ffffff;
      }
      if (uVar14 == 0) {
LAB_140d40c14:
        bVar4 = false;
      }
      else {
        if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = ((ulonglong)uVar14 + (ulonglong)uVar13) - 1 >> 0xc;
        if (uVar5 < uVar19) goto LAB_140d40c14;
        bVar4 = false;
        do {
          cVar2 = *(char *)((longlong)ppVar21[1].alloc_bits + (uVar19 - 0x10));
          if (cVar2 == '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (cVar2 == -1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(char *)((longlong)ppVar21[1].alloc_bits + (uVar19 - 0x10)) = cVar2 + -1;
          bVar4 = (bool)(bVar4 | (char)(cVar2 + -1) == '\0');
          uVar19 = uVar19 + 1;
        } while (uVar5 + 1 != uVar19);
      }
      if (pas_segregated_page_deallocate_should_verify_granules == true) {
        pas_segregated_page_verify_granules(ppVar21);
      }
      if (bVar4) {
        pas_segregated_page_note_emptiness_impl(ppVar21,pas_note_emptiness_keep_num_non_empty_words)
        ;
      }
      if (uVar16 == 0) {
        uVar17 = (ppVar21->emptiness).num_non_empty_words_or_live_bytes - 1;
        if (uVar17 == 0) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar21,pas_note_emptiness_clear_num_non_empty_words);
        }
        else {
          (ppVar21->emptiness).num_non_empty_words_or_live_bytes = uVar17;
        }
      }
      if (pRVar10 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar10);
      }
      goto LAB_140d40329;
    }
    break;
  case '\x04':
    uVar19 = (ulonglong)(ppVar20->owner).payload;
    pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d40327;
    }
    else {
      if (param_2 < uVar19) {
        uVar19 = param_2;
      }
      memcpy(pvVar6,param_1,uVar19);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar16 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
      uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
      uVar16 = uVar16 >> 0xb ^ uVar16;
      uVar19 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar16);
      uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
      while (uVar17 != uVar5) {
        uVar16 = uVar16 + 1;
        uVar19 = (ulonglong)
                 (uVar16 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
      }
      uVar5 = (ulonglong)
              *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high + 4)
              + ppVar11->num_logged_bytes;
      if (uVar5 < 0xc351) {
        ppVar11->num_logged_bytes = uVar5;
        uVar5 = (ulonglong)ppVar11->deallocation_log_index;
        if (uVar5 < 999) {
          uVar17 = (longlong)param_1 << 6 | 7;
          goto LAB_140d402c1;
        }
      }
      pas_thread_local_cache_append_deallocation_slow
                (ppVar11,(ulong64)param_1,
                 pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role);
      goto LAB_140d40329;
    }
    break;
  case '\x05':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x06':
    uVar17 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar20,(ulong64)param_1);
    pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d40327;
    }
    else {
      if (param_2 < uVar17) {
        uVar17 = param_2;
      }
      memcpy(pvVar6,param_1,uVar17);
    }
    bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
              (ppVar20,(ulong64)param_1);
    goto LAB_140d40329;
  case '\a':
    uVar17 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar20,(ulong64)param_1);
    pvVar6 = bmalloc_try_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d40327;
    }
    else {
      if (param_2 < uVar17) {
        uVar17 = param_2;
      }
      memcpy(pvVar6,param_1,uVar17);
    }
    bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page(ppVar20,(ulong64)param_1)
    ;
    goto LAB_140d40329;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_140d4028d:
  pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
LAB_140d40329:
  if ((local_48 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return pvVar6;
  }
  pcVar3 = (code *)swi(3);
  pvVar6 = (void *)(*pcVar3)();
  return pvVar6;
}

// bmalloc_try_allocate_impl_for_realloc @ 140d40d40

void * __cdecl bmalloc_try_allocate_impl_for_realloc(ulong64 param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar10 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  puVar7 = ThreadLocalStoragePointer;
  if (uVar10 < 2) goto LAB_140d40d8d;
  uVar6 = param_1 + 0xf;
  puVar7 = (undefined1 *)(uVar6 >> 4);
  if (uVar6 < 0x1b0) {
    puVar7 = (undefined1 *)((longlong)puVar7 * 0xc0 + uVar10 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar6) ||
       (puVar1 = bmalloc_common_primitive_heap_support.index_to_allocator_index + (longlong)puVar7,
       puVar7 = (undefined1 *)(ulonglong)*puVar1, *(uint *)(uVar10 + 0x1f74) <= *puVar1))
    goto LAB_140d40d8d;
    puVar7 = (undefined1 *)(uVar10 + (longlong)puVar7 * 8 + 0x1f80);
  }
  *puVar7 = 1;
  uVar2 = *(uint *)(puVar7 + 0x18);
  if ((ulonglong)uVar2 != 0) {
    *(uint *)(puVar7 + 0x18) = uVar2 - *(int *)(puVar7 + 0x1c);
    pvVar5 = (void *)(*(longlong *)(puVar7 + 0x10) - (ulonglong)uVar2);
    goto LAB_140d40e2b;
  }
  lVar9 = *(longlong *)(puVar7 + 0x20);
  uVar10 = *(ulonglong *)(puVar7 + 0x30);
  if (uVar10 != 0) {
LAB_140d40e18:
    uVar6 = 0;
    for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
      uVar6 = uVar6 + 1;
    }
    *(ulonglong *)(puVar7 + 0x30) = uVar10 & ~(1L << (uVar6 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar6 << 4) + lVar9);
LAB_140d40e2b:
    *puVar7 = 0;
    return pvVar5;
  }
  if (puVar7[8] == '\x06') {
    uVar2 = *(uint *)(puVar7 + 0x2c);
    uVar3 = *(uint *)(puVar7 + 0x28);
    uVar6 = (ulonglong)uVar3;
    if (uVar3 < uVar2) {
      *(undefined8 *)(puVar7 + uVar6 * 8 + 0x40) = 0;
      lVar8 = 0;
      do {
        if ((uVar2 - 1) - uVar6 == lVar8) {
          *(uint *)(puVar7 + 0x28) = uVar2;
          goto LAB_140d40e88;
        }
        lVar9 = lVar9 + 0x400;
        uVar10 = *(ulonglong *)(puVar7 + lVar8 * 8 + uVar6 * 8 + 0x48);
        lVar8 = lVar8 + 1;
      } while (uVar10 == 0);
      *(uint *)(puVar7 + 0x28) = uVar3 + (int)lVar8;
      *(longlong *)(puVar7 + 0x20) = lVar9;
      goto LAB_140d40e18;
    }
  }
LAB_140d40e88:
  *puVar7 = 0;
LAB_140d40d8d:
  pvVar5 = bmalloc_try_allocate_impl_casual_case_ptr(param_1,(ulong64)puVar7);
  return pvVar5;
}

// bmalloc_reallocate_casual @ 140d40ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_reallocate_casual(void *param_1,ulong64 param_2,pas_reallocate_free_mode param_3)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  pas_segregated_view_opaque *ppVar9;
  PSRWLOCK pRVar10;
  pas_thread_local_cache *ppVar11;
  pas_segregated_partial_view *ppVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulong64 uVar17;
  pas_fast_megapage_kind pVar18;
  ulonglong uVar19;
  pas_bitfit_page *ppVar20;
  pas_segregated_page *ppVar21;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (param_1 == (void *)0x0) {
    pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
    return pvVar6;
  }
  uVar16 = (uint)((ulonglong)param_1 >> 0x18);
  if (param_2 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar5 = (ulonglong)param_1 >> 0x18;
      if (((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) == 0
         )) {
        uVar19 = uVar5 - (bmalloc_megapage_table.instance)->index_begin;
        pVar18 = pas_not_a_fast_megapage_kind;
        if ((uVar5 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar18 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar5 ||
            (pVar18 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar19 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar19 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar18 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar11,(ulong64)param_1,pas_deallocate_mode,pVar18);
          goto LAB_140d410a7;
        }
      }
      uVar16 = ppVar11->deallocation_log_index;
      if ((ulonglong)uVar16 < 999) {
        ppVar11->deallocation_log[uVar16] = (longlong)param_1 << 6 | 5;
        ppVar11->deallocation_log_index = uVar16 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar11,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
    }
LAB_140d410a7:
    pvVar6 = (void *)0x0;
    goto LAB_140d410a9;
  }
  uVar5 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b == 0) &&
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) != 0)) {
switchD_140d41115_caseD_1:
    uVar5 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d410a7;
    }
    else {
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      memcpy(pvVar6,param_1,uVar5);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar5 = (ulonglong)ppVar11->deallocation_log_index;
      if (0x3e6 < uVar5) {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar11,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
        goto LAB_140d410a9;
      }
      uVar17 = (longlong)param_1 << 6 | 5;
LAB_140d41041:
      ppVar11->deallocation_log[uVar5] = uVar17;
      ppVar11->deallocation_log_index = (int)uVar5 + 1;
      goto LAB_140d410a9;
    }
    goto LAB_140d4100d;
  }
  uVar19 = uVar5 - (bmalloc_megapage_table.instance)->index_begin;
  uVar16 = (uint)param_1;
  if (((bmalloc_megapage_table.instance)->index_begin <= uVar5) &&
     (uVar5 < (bmalloc_megapage_table.instance)->index_end)) {
    switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                    (uVar19 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar19 * '\x02' & 0x1fU) & 3) {
    case 1:
      goto switchD_140d41115_caseD_1;
    case 2:
      ppVar21 = (pas_segregated_page *)((ulonglong)param_1 & 0xffffffffffffc000);
      uVar1 = (ppVar21->base).page_kind;
      if (uVar1 == '\x05') {
        uVar17 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                           ((pas_bitfit_page *)ppVar21,(ulong64)param_1);
        pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
        if (pvVar6 == (void *)0x0) {
          if (param_3 != pas_reallocate_free_always) goto LAB_140d410a7;
        }
        else {
          if (param_2 < uVar17) {
            uVar17 = param_2;
          }
          memcpy(pvVar6,param_1,uVar17);
        }
        bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                  ((pas_bitfit_page *)ppVar21,(ulong64)param_1);
        goto LAB_140d410a9;
      }
      if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (((uint)ppVar21->owner & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar19 = (ulonglong)((uint)((ulonglong)param_1 >> 8) & 0x3f);
      uVar5 = (ulonglong)
              *(uint *)(((ulonglong)ppVar21->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
      lVar15 = pas_compact_heap_reservation_base + uVar5 * 8;
      if (uVar5 == 0) {
        lVar15 = 0;
      }
      lVar8 = 0;
      if (*(uint3 *)(lVar15 + 0xb) != 0) {
        lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
      }
      uVar13 = *(uint *)(lVar8 + 0x20);
      pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
      if (pvVar6 == (void *)0x0) {
        if (param_3 != pas_reallocate_free_always) goto LAB_140d410a7;
      }
      else {
        uVar5 = (ulonglong)(uVar13 & 0x7ffffff);
        if (param_2 < uVar5) {
          uVar5 = param_2;
        }
        memcpy(pvVar6,param_1,uVar5);
      }
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (1 < *(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08)) {
        if (ppVar21->lock_ptr == (pas_lock *)0x0) {
          pRVar10 = (PSRWLOCK)0x0;
        }
        else {
          pRVar10 = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow(ppVar21,(pas_lock *)0x0,ppVar21->lock_ptr);
        }
        uVar5 = (ulonglong)((uint)((ulonglong)param_1 >> 7) & 0x7c);
        uVar16 = *(uint *)((longlong)ppVar21->alloc_bits + uVar5) & ~(1 << (uVar16 >> 4 & 0x1f));
        *(uint *)((longlong)ppVar21->alloc_bits + uVar5) = uVar16;
        if (((uint)ppVar21->owner & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)
                *(uint *)(((ulonglong)ppVar21->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
        ppVar12 = (pas_segregated_partial_view *)(uVar5 * 8 + pas_compact_heap_reservation_base);
        if (uVar5 == 0) {
          ppVar12 = (pas_segregated_partial_view *)0x0;
        }
        if (!ppVar12->eligibility_has_been_noted) {
          pas_segregated_partial_view_note_eligibility(ppVar12,ppVar21);
        }
        if (uVar16 == 0) {
          uVar17 = (ppVar21->emptiness).num_non_empty_words_or_live_bytes - 1;
          if (uVar17 == 0) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar21,pas_note_emptiness_clear_num_non_empty_words);
          }
          else {
            (ppVar21->emptiness).num_non_empty_words_or_live_bytes = uVar17;
          }
        }
        if (pRVar10 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar10);
        }
        goto LAB_140d410a9;
      }
      goto LAB_140d4100d;
    case 3:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  uVar5 = (ulonglong)param_1 & 0xfffffffffffe0000;
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4119f:
    if (bmalloc_marge_page_header_table.hashtable.table !=
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
      uVar13 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x16);
      uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
      uVar13 = uVar13 >> 0xb ^ uVar13;
      uVar19 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar13);
      uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
      while (uVar17 != ((ulonglong)param_1 & 0xffffffffffc00000)) {
        uVar13 = uVar13 + 1;
        if (uVar17 == 0xffffffffffffffff) goto LAB_140d41403;
        uVar19 = (ulonglong)(uVar13 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask)
        ;
        uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
      }
      ppVar20 = (pas_bitfit_page *)
                (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].high;
      if (ppVar20 != (pas_bitfit_page *)0x0) goto LAB_140d41238;
    }
LAB_140d41403:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_large_map_find(&local_60,(ulong64)param_1);
    if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      pas_reallocation_did_fail
                ("Source object not allocated",(void *)0x0,&bmalloc_common_primitive_heap,param_1,0,
                 param_2);
    }
    if ((void *)local_60.begin != param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = local_60.end - (longlong)param_1;
    if (local_60.end < param_1 || uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d410a7;
    }
    else {
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      memcpy(pvVar6,param_1,uVar5);
    }
    pas_deallocate_known_large(param_1,&bmalloc_heap_config);
    goto LAB_140d410a9;
  }
  uVar13 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
  uVar13 = uVar13 * 0x20 + (uVar13 ^ 0xdeadbeef);
  uVar13 = uVar13 >> 0xb ^ uVar13;
  uVar19 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar13);
  uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
  while (uVar17 != uVar5) {
    uVar13 = uVar13 + 1;
    if (uVar17 == 0xffffffffffffffff) goto LAB_140d4119f;
    uVar19 = (ulonglong)(uVar13 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
    uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
  }
  ppVar20 = (pas_bitfit_page *)
            (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
  if (ppVar20 == (pas_bitfit_page *)0x0) goto LAB_140d4119f;
LAB_140d41238:
  switch((ppVar20->base).page_kind) {
  case '\x01':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x02':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x03':
    if (((uint)ppVar20[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar13 = uVar16 & 0x1ffff;
    uVar19 = (ulonglong)(uVar13 >> 0xc);
    uVar7 = (ulonglong)*(uint *)((ppVar20[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
    lVar15 = pas_compact_heap_reservation_base + uVar7 * 8;
    if (uVar7 == 0) {
      lVar15 = 0;
    }
    lVar8 = 0;
    if (*(uint3 *)(lVar15 + 0xb) != 0) {
      lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
    }
    uVar14 = *(uint *)(lVar8 + 0x20);
    pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d410a7;
    }
    else {
      uVar7 = (ulonglong)(uVar14 & 0x7ffffff);
      if (param_2 < uVar7) {
        uVar7 = param_2;
      }
      memcpy(pvVar6,param_1,uVar7);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (1 < *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08)) {
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        ppVar21 = (pas_segregated_page *)0x0;
      }
      else {
        uVar14 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11)
        ;
        uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
        uVar14 = uVar14 >> 0xb ^ uVar14;
        uVar7 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14)
        ;
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
        if (uVar17 != uVar5) {
          ppVar21 = (pas_segregated_page *)0x0;
          do {
            uVar14 = uVar14 + 1;
            if (uVar17 == 0xffffffffffffffff) goto LAB_140d418b9;
            uVar7 = (ulonglong)
                    (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
          } while (uVar17 != uVar5);
        }
        ppVar21 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].high;
      }
LAB_140d418b9:
      if (ppVar21->lock_ptr == (pas_lock *)0x0) {
        pRVar10 = (PSRWLOCK)0x0;
      }
      else {
        pRVar10 = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow(ppVar21,(pas_lock *)0x0,ppVar21->lock_ptr);
      }
      uVar5 = (ulonglong)((uint)((ulonglong)param_1 >> 0xc) & 0x1c);
      uVar16 = *(uint *)((longlong)ppVar21->alloc_bits + uVar5) & ~(1 << (uVar16 >> 9 & 0x1f));
      *(uint *)((longlong)ppVar21->alloc_bits + uVar5) = uVar16;
      ppVar9 = ppVar21->owner;
      if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
      ppVar12 = (pas_segregated_partial_view *)(uVar5 * 8 + pas_compact_heap_reservation_base);
      if (uVar5 == 0) {
        ppVar12 = (pas_segregated_partial_view *)0x0;
      }
      if (!ppVar12->eligibility_has_been_noted) {
        pas_segregated_partial_view_note_eligibility(ppVar12,ppVar21);
        ppVar9 = ppVar21->owner;
      }
      if (((ulonglong)ppVar9 & 6) == 0) {
        uVar14 = ppVar21->object_size;
      }
      else {
        if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
        lVar15 = pas_compact_heap_reservation_base + uVar5 * 8;
        if (uVar5 == 0) {
          lVar15 = 0;
        }
        uVar14 = *(uint *)((ulonglong)
                           ((uint)*(byte *)(lVar15 + 0xd) * 0x80000 +
                           (uint)*(ushort *)(lVar15 + 0xb) * 8) + 0x20 +
                          pas_compact_heap_reservation_base) & 0x7ffffff;
      }
      if (uVar14 == 0) {
LAB_140d41994:
        bVar4 = false;
      }
      else {
        if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = ((ulonglong)uVar14 + (ulonglong)uVar13) - 1 >> 0xc;
        if (uVar5 < uVar19) goto LAB_140d41994;
        bVar4 = false;
        do {
          cVar2 = *(char *)((longlong)ppVar21[1].alloc_bits + (uVar19 - 0x10));
          if (cVar2 == '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (cVar2 == -1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(char *)((longlong)ppVar21[1].alloc_bits + (uVar19 - 0x10)) = cVar2 + -1;
          bVar4 = (bool)(bVar4 | (char)(cVar2 + -1) == '\0');
          uVar19 = uVar19 + 1;
        } while (uVar5 + 1 != uVar19);
      }
      if (pas_segregated_page_deallocate_should_verify_granules == true) {
        pas_segregated_page_verify_granules(ppVar21);
      }
      if (bVar4) {
        pas_segregated_page_note_emptiness_impl(ppVar21,pas_note_emptiness_keep_num_non_empty_words)
        ;
      }
      if (uVar16 == 0) {
        uVar17 = (ppVar21->emptiness).num_non_empty_words_or_live_bytes - 1;
        if (uVar17 == 0) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar21,pas_note_emptiness_clear_num_non_empty_words);
        }
        else {
          (ppVar21->emptiness).num_non_empty_words_or_live_bytes = uVar17;
        }
      }
      if (pRVar10 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar10);
      }
      goto LAB_140d410a9;
    }
    break;
  case '\x04':
    uVar19 = (ulonglong)(ppVar20->owner).payload;
    pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d410a7;
    }
    else {
      if (param_2 < uVar19) {
        uVar19 = param_2;
      }
      memcpy(pvVar6,param_1,uVar19);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar11 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar11) {
      uVar16 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
      uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
      uVar16 = uVar16 >> 0xb ^ uVar16;
      uVar19 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar16);
      uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
      while (uVar17 != uVar5) {
        uVar16 = uVar16 + 1;
        uVar19 = (ulonglong)
                 (uVar16 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
      }
      uVar5 = (ulonglong)
              *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high + 4)
              + ppVar11->num_logged_bytes;
      if (uVar5 < 0xc351) {
        ppVar11->num_logged_bytes = uVar5;
        uVar5 = (ulonglong)ppVar11->deallocation_log_index;
        if (uVar5 < 999) {
          uVar17 = (longlong)param_1 << 6 | 7;
          goto LAB_140d41041;
        }
      }
      pas_thread_local_cache_append_deallocation_slow
                (ppVar11,(ulong64)param_1,
                 pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role);
      goto LAB_140d410a9;
    }
    break;
  case '\x05':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x06':
    uVar17 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar20,(ulong64)param_1);
    pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d410a7;
    }
    else {
      if (param_2 < uVar17) {
        uVar17 = param_2;
      }
      memcpy(pvVar6,param_1,uVar17);
    }
    bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
              (ppVar20,(ulong64)param_1);
    goto LAB_140d410a9;
  case '\a':
    uVar17 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar20,(ulong64)param_1);
    pvVar6 = bmalloc_allocate_impl_for_realloc(param_2);
    if (pvVar6 == (void *)0x0) {
      if (param_3 != pas_reallocate_free_always) goto LAB_140d410a7;
    }
    else {
      if (param_2 < uVar17) {
        uVar17 = param_2;
      }
      memcpy(pvVar6,param_1,uVar17);
    }
    bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page(ppVar20,(ulong64)param_1)
    ;
    goto LAB_140d410a9;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_140d4100d:
  pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
LAB_140d410a9:
  if ((local_48 ^ (ulonglong)auStackY_98) == __security_cookie.value) {
    return pvVar6;
  }
  pcVar3 = (code *)swi(3);
  pvVar6 = (void *)(*pcVar3)();
  return pvVar6;
}

// bmalloc_allocate_impl_for_realloc @ 140d41ac0

void * __cdecl bmalloc_allocate_impl_for_realloc(ulong64 param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar10 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  puVar7 = ThreadLocalStoragePointer;
  if (uVar10 < 2) goto LAB_140d41b0d;
  uVar6 = param_1 + 0xf;
  puVar7 = (undefined1 *)(uVar6 >> 4);
  if (uVar6 < 0x1b0) {
    puVar7 = (undefined1 *)((longlong)puVar7 * 0xc0 + uVar10 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar6) ||
       (puVar1 = bmalloc_common_primitive_heap_support.index_to_allocator_index + (longlong)puVar7,
       puVar7 = (undefined1 *)(ulonglong)*puVar1, *(uint *)(uVar10 + 0x1f74) <= *puVar1))
    goto LAB_140d41b0d;
    puVar7 = (undefined1 *)(uVar10 + (longlong)puVar7 * 8 + 0x1f80);
  }
  *puVar7 = 1;
  uVar2 = *(uint *)(puVar7 + 0x18);
  if ((ulonglong)uVar2 != 0) {
    *(uint *)(puVar7 + 0x18) = uVar2 - *(int *)(puVar7 + 0x1c);
    pvVar5 = (void *)(*(longlong *)(puVar7 + 0x10) - (ulonglong)uVar2);
    goto LAB_140d41bab;
  }
  lVar9 = *(longlong *)(puVar7 + 0x20);
  uVar10 = *(ulonglong *)(puVar7 + 0x30);
  if (uVar10 != 0) {
LAB_140d41b98:
    uVar6 = 0;
    for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
      uVar6 = uVar6 + 1;
    }
    *(ulonglong *)(puVar7 + 0x30) = uVar10 & ~(1L << (uVar6 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar6 << 4) + lVar9);
LAB_140d41bab:
    *puVar7 = 0;
    return pvVar5;
  }
  if (puVar7[8] == '\x06') {
    uVar2 = *(uint *)(puVar7 + 0x2c);
    uVar3 = *(uint *)(puVar7 + 0x28);
    uVar6 = (ulonglong)uVar3;
    if (uVar3 < uVar2) {
      *(undefined8 *)(puVar7 + uVar6 * 8 + 0x40) = 0;
      lVar8 = 0;
      do {
        if ((uVar2 - 1) - uVar6 == lVar8) {
          *(uint *)(puVar7 + 0x28) = uVar2;
          goto LAB_140d41c08;
        }
        lVar9 = lVar9 + 0x400;
        uVar10 = *(ulonglong *)(puVar7 + lVar8 * 8 + uVar6 * 8 + 0x48);
        lVar8 = lVar8 + 1;
      } while (uVar10 == 0);
      *(uint *)(puVar7 + 0x28) = uVar3 + (int)lVar8;
      *(longlong *)(puVar7 + 0x20) = lVar9;
      goto LAB_140d41b98;
    }
  }
LAB_140d41c08:
  *puVar7 = 0;
LAB_140d41b0d:
  pvVar5 = bmalloc_allocate_impl_casual_case_ptr(param_1,(ulong64)puVar7);
  return pvVar5;
}

// bmalloc_try_allocate @ 140d41c20

void * __cdecl bmalloc_try_allocate(ulong64 param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar9 < 2) goto LAB_140d41c6d;
  uVar5 = param_1 + 0xf;
  if (uVar5 < 0x1b0) {
    puVar6 = (undefined1 *)((uVar5 >> 4) * 0xc0 + uVar9 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar5) ||
       (*(uint *)(uVar9 + 0x1f74) <=
        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar5 >> 4]))
    goto LAB_140d41c6d;
    puVar6 = (undefined1 *)
             (uVar9 + (ulonglong)
                      bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar5 >> 4] * 8
             + 0x1f80);
  }
  *puVar6 = 1;
  uVar1 = *(uint *)(puVar6 + 0x18);
  if ((ulonglong)uVar1 != 0) {
    *(uint *)(puVar6 + 0x18) = uVar1 - *(int *)(puVar6 + 0x1c);
    pvVar4 = (void *)(*(longlong *)(puVar6 + 0x10) - (ulonglong)uVar1);
    goto LAB_140d41d0b;
  }
  lVar8 = *(longlong *)(puVar6 + 0x20);
  uVar9 = *(ulonglong *)(puVar6 + 0x30);
  if (uVar9 != 0) {
LAB_140d41cf8:
    uVar5 = 0;
    for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(puVar6 + 0x30) = uVar9 & ~(1L << (uVar5 & 0x3f));
    pvVar4 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar8);
LAB_140d41d0b:
    *puVar6 = 0;
    return pvVar4;
  }
  if (puVar6[8] == '\x06') {
    uVar1 = *(uint *)(puVar6 + 0x2c);
    uVar2 = *(uint *)(puVar6 + 0x28);
    uVar5 = (ulonglong)uVar2;
    if (uVar2 < uVar1) {
      *(undefined8 *)(puVar6 + uVar5 * 8 + 0x40) = 0;
      lVar7 = 0;
      do {
        if ((uVar1 - 1) - uVar5 == lVar7) {
          *(uint *)(puVar6 + 0x28) = uVar1;
          goto LAB_140d41d68;
        }
        lVar8 = lVar8 + 0x400;
        uVar9 = *(ulonglong *)(puVar6 + lVar7 * 8 + uVar5 * 8 + 0x48);
        lVar7 = lVar7 + 1;
      } while (uVar9 == 0);
      *(uint *)(puVar6 + 0x28) = uVar2 + (int)lVar7;
      *(longlong *)(puVar6 + 0x20) = lVar8;
      goto LAB_140d41cf8;
    }
  }
LAB_140d41d68:
  *puVar6 = 0;
LAB_140d41c6d:
  pvVar4 = bmalloc_try_allocate_casual(param_1);
  return pvVar4;
}

// bmalloc_try_allocate_with_alignment @ 140d41d80

void * __cdecl bmalloc_try_allocate_with_alignment(ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0x10 < param_2) {
    pvVar4 = bmalloc_try_allocate_with_nontrivial_alignment(param_1,param_2);
    return pvVar4;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar9 < 2) goto LAB_140d41dd7;
  uVar5 = param_1 + 0xf;
  if (uVar5 < 0x1b0) {
    puVar6 = (undefined1 *)((uVar5 >> 4) * 0xc0 + uVar9 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar5) ||
       (*(uint *)(uVar9 + 0x1f74) <=
        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar5 >> 4]))
    goto LAB_140d41dd7;
    puVar6 = (undefined1 *)
             (uVar9 + (ulonglong)
                      bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar5 >> 4] * 8
             + 0x1f80);
  }
  *puVar6 = 1;
  uVar1 = *(uint *)(puVar6 + 0x18);
  if ((ulonglong)uVar1 != 0) {
    *(uint *)(puVar6 + 0x18) = uVar1 - *(int *)(puVar6 + 0x1c);
    pvVar4 = (void *)(*(longlong *)(puVar6 + 0x10) - (ulonglong)uVar1);
    goto LAB_140d41e75;
  }
  lVar8 = *(longlong *)(puVar6 + 0x20);
  uVar9 = *(ulonglong *)(puVar6 + 0x30);
  if (uVar9 != 0) {
LAB_140d41e62:
    uVar5 = 0;
    for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(puVar6 + 0x30) = uVar9 & ~(1L << (uVar5 & 0x3f));
    pvVar4 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar8);
LAB_140d41e75:
    *puVar6 = 0;
    return pvVar4;
  }
  if (puVar6[8] == '\x06') {
    uVar1 = *(uint *)(puVar6 + 0x2c);
    uVar2 = *(uint *)(puVar6 + 0x28);
    uVar5 = (ulonglong)uVar2;
    if (uVar2 < uVar1) {
      *(undefined8 *)(puVar6 + uVar5 * 8 + 0x40) = 0;
      lVar7 = 0;
      do {
        if ((uVar1 - 1) - uVar5 == lVar7) {
          *(uint *)(puVar6 + 0x28) = uVar1;
          goto LAB_140d41edd;
        }
        lVar8 = lVar8 + 0x400;
        uVar9 = *(ulonglong *)(puVar6 + lVar7 * 8 + uVar5 * 8 + 0x48);
        lVar7 = lVar7 + 1;
      } while (uVar9 == 0);
      *(uint *)(puVar6 + 0x28) = uVar2 + (int)lVar7;
      *(longlong *)(puVar6 + 0x20) = lVar8;
      goto LAB_140d41e62;
    }
  }
LAB_140d41edd:
  *puVar6 = 0;
LAB_140d41dd7:
  pvVar4 = bmalloc_try_allocate_casual(param_1);
  return pvVar4;
}

// bmalloc_try_allocate_zeroed @ 140d41ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_allocate_zeroed(ulong64 param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong64 in_R8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_48 [32];
  pas_allocation_result local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar9 < 2) {
LAB_140d41f49:
    bmalloc_try_allocate_impl_casual_case(&local_28,param_1,in_R8);
    if (((local_28.did_succeed & 1U) == 0) ||
       (local_28.zero_mode != pas_zero_mode_may_have_non_zero)) {
      if ((local_18 ^ (ulonglong)auStack_48) == __security_cookie.value) {
        return (void *)local_28.begin;
      }
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else {
    uVar8 = param_1 + 0xf;
    if (uVar8 < 0x1b0) {
      puVar5 = (undefined1 *)(uVar9 + (uVar8 >> 4) * 0xc0 + 0x1fc0);
    }
    else {
      if ((0x271f < uVar8) ||
         (*(uint *)(uVar9 + 0x1f74) <=
          bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar8 >> 4]))
      goto LAB_140d41f49;
      puVar5 = (undefined1 *)
               (uVar9 + (ulonglong)
                        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar8 >> 4] *
                        8 + 0x1f80);
    }
    *puVar5 = 1;
    uVar1 = *(uint *)(puVar5 + 0x18);
    if ((ulonglong)uVar1 == 0) {
      lVar7 = *(longlong *)(puVar5 + 0x20);
      uVar9 = *(ulonglong *)(puVar5 + 0x30);
      if (uVar9 == 0) {
        if (puVar5[8] == '\x06') {
          uVar1 = *(uint *)(puVar5 + 0x2c);
          in_R8 = (ulong64)uVar1;
          uVar2 = *(uint *)(puVar5 + 0x28);
          uVar8 = (ulonglong)uVar2;
          if (uVar2 < uVar1) {
            *(undefined8 *)(puVar5 + uVar8 * 8 + 0x40) = 0;
            lVar10 = 0;
            do {
              if ((uVar1 - 1) - uVar8 == lVar10) {
                *(uint *)(puVar5 + 0x28) = uVar1;
                goto LAB_140d420a5;
              }
              lVar7 = lVar7 + 0x400;
              uVar9 = *(ulonglong *)(puVar5 + lVar10 * 8 + uVar8 * 8 + 0x48);
              lVar10 = lVar10 + 1;
            } while (uVar9 == 0);
            *(uint *)(puVar5 + 0x28) = uVar2 + (int)lVar10;
            *(longlong *)(puVar5 + 0x20) = lVar7;
            goto LAB_140d42007;
          }
        }
LAB_140d420a5:
        *puVar5 = 0;
        goto LAB_140d41f49;
      }
LAB_140d42007:
      uVar8 = 0;
      for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
        uVar8 = uVar8 + 1;
      }
      *(ulonglong *)(puVar5 + 0x30) = uVar9 & ~(1L << (uVar8 & 0x3f));
      local_28.begin = (ulonglong)(uint)((int)uVar8 << 4) + lVar7;
    }
    else {
      *(uint *)(puVar5 + 0x18) = uVar1 - *(int *)(puVar5 + 0x1c);
      local_28.begin = *(longlong *)(puVar5 + 0x10) - (ulonglong)uVar1;
    }
    *puVar5 = 0;
  }
  pvVar6 = memset((void *)local_28.begin,0,param_1);
  return pvVar6;
}

// bmalloc_allocate @ 140d420c0

void * __cdecl bmalloc_allocate(ulong64 param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar9 < 2) goto LAB_140d4210d;
  uVar5 = param_1 + 0xf;
  if (uVar5 < 0x1b0) {
    puVar6 = (undefined1 *)((uVar5 >> 4) * 0xc0 + uVar9 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar5) ||
       (*(uint *)(uVar9 + 0x1f74) <=
        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar5 >> 4]))
    goto LAB_140d4210d;
    puVar6 = (undefined1 *)
             (uVar9 + (ulonglong)
                      bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar5 >> 4] * 8
             + 0x1f80);
  }
  *puVar6 = 1;
  uVar1 = *(uint *)(puVar6 + 0x18);
  if ((ulonglong)uVar1 != 0) {
    *(uint *)(puVar6 + 0x18) = uVar1 - *(int *)(puVar6 + 0x1c);
    pvVar4 = (void *)(*(longlong *)(puVar6 + 0x10) - (ulonglong)uVar1);
    goto LAB_140d421ab;
  }
  lVar8 = *(longlong *)(puVar6 + 0x20);
  uVar9 = *(ulonglong *)(puVar6 + 0x30);
  if (uVar9 != 0) {
LAB_140d42198:
    uVar5 = 0;
    for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(puVar6 + 0x30) = uVar9 & ~(1L << (uVar5 & 0x3f));
    pvVar4 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar8);
LAB_140d421ab:
    *puVar6 = 0;
    return pvVar4;
  }
  if (puVar6[8] == '\x06') {
    uVar1 = *(uint *)(puVar6 + 0x2c);
    uVar2 = *(uint *)(puVar6 + 0x28);
    uVar5 = (ulonglong)uVar2;
    if (uVar2 < uVar1) {
      *(undefined8 *)(puVar6 + uVar5 * 8 + 0x40) = 0;
      lVar7 = 0;
      do {
        if ((uVar1 - 1) - uVar5 == lVar7) {
          *(uint *)(puVar6 + 0x28) = uVar1;
          goto LAB_140d42208;
        }
        lVar8 = lVar8 + 0x400;
        uVar9 = *(ulonglong *)(puVar6 + lVar7 * 8 + uVar5 * 8 + 0x48);
        lVar7 = lVar7 + 1;
      } while (uVar9 == 0);
      *(uint *)(puVar6 + 0x28) = uVar2 + (int)lVar7;
      *(longlong *)(puVar6 + 0x20) = lVar8;
      goto LAB_140d42198;
    }
  }
LAB_140d42208:
  *puVar6 = 0;
LAB_140d4210d:
  pvVar4 = bmalloc_allocate_casual(param_1);
  return pvVar4;
}

// bmalloc_allocate_with_alignment @ 140d42220

void * __cdecl bmalloc_allocate_with_alignment(ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0x10 < param_2) {
    pvVar4 = bmalloc_allocate_with_nontrivial_alignment(param_1,param_2);
    return pvVar4;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar9 < 2) goto LAB_140d42277;
  uVar5 = param_1 + 0xf;
  if (uVar5 < 0x1b0) {
    puVar6 = (undefined1 *)((uVar5 >> 4) * 0xc0 + uVar9 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar5) ||
       (*(uint *)(uVar9 + 0x1f74) <=
        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar5 >> 4]))
    goto LAB_140d42277;
    puVar6 = (undefined1 *)
             (uVar9 + (ulonglong)
                      bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar5 >> 4] * 8
             + 0x1f80);
  }
  *puVar6 = 1;
  uVar1 = *(uint *)(puVar6 + 0x18);
  if ((ulonglong)uVar1 != 0) {
    *(uint *)(puVar6 + 0x18) = uVar1 - *(int *)(puVar6 + 0x1c);
    pvVar4 = (void *)(*(longlong *)(puVar6 + 0x10) - (ulonglong)uVar1);
    goto LAB_140d42315;
  }
  lVar8 = *(longlong *)(puVar6 + 0x20);
  uVar9 = *(ulonglong *)(puVar6 + 0x30);
  if (uVar9 != 0) {
LAB_140d42302:
    uVar5 = 0;
    for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(puVar6 + 0x30) = uVar9 & ~(1L << (uVar5 & 0x3f));
    pvVar4 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar8);
LAB_140d42315:
    *puVar6 = 0;
    return pvVar4;
  }
  if (puVar6[8] == '\x06') {
    uVar1 = *(uint *)(puVar6 + 0x2c);
    uVar2 = *(uint *)(puVar6 + 0x28);
    uVar5 = (ulonglong)uVar2;
    if (uVar2 < uVar1) {
      *(undefined8 *)(puVar6 + uVar5 * 8 + 0x40) = 0;
      lVar7 = 0;
      do {
        if ((uVar1 - 1) - uVar5 == lVar7) {
          *(uint *)(puVar6 + 0x28) = uVar1;
          goto LAB_140d4237d;
        }
        lVar8 = lVar8 + 0x400;
        uVar9 = *(ulonglong *)(puVar6 + lVar7 * 8 + uVar5 * 8 + 0x48);
        lVar7 = lVar7 + 1;
      } while (uVar9 == 0);
      *(uint *)(puVar6 + 0x28) = uVar2 + (int)lVar7;
      *(longlong *)(puVar6 + 0x20) = lVar8;
      goto LAB_140d42302;
    }
  }
LAB_140d4237d:
  *puVar6 = 0;
LAB_140d42277:
  pvVar4 = bmalloc_allocate_casual(param_1);
  return pvVar4;
}

// bmalloc_allocate_zeroed @ 140d42390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_allocate_zeroed(ulong64 param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong64 in_R8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_48 [32];
  pas_allocation_result local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar9 < 2) {
LAB_140d423e9:
    bmalloc_allocate_impl_casual_case(&local_28,param_1,in_R8);
    if (((local_28.did_succeed & 1U) == 0) ||
       (local_28.zero_mode != pas_zero_mode_may_have_non_zero)) {
      if ((local_18 ^ (ulonglong)auStack_48) == __security_cookie.value) {
        return (void *)local_28.begin;
      }
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else {
    uVar8 = param_1 + 0xf;
    if (uVar8 < 0x1b0) {
      puVar5 = (undefined1 *)(uVar9 + (uVar8 >> 4) * 0xc0 + 0x1fc0);
    }
    else {
      if ((0x271f < uVar8) ||
         (*(uint *)(uVar9 + 0x1f74) <=
          bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar8 >> 4]))
      goto LAB_140d423e9;
      puVar5 = (undefined1 *)
               (uVar9 + (ulonglong)
                        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar8 >> 4] *
                        8 + 0x1f80);
    }
    *puVar5 = 1;
    uVar1 = *(uint *)(puVar5 + 0x18);
    if ((ulonglong)uVar1 == 0) {
      lVar7 = *(longlong *)(puVar5 + 0x20);
      uVar9 = *(ulonglong *)(puVar5 + 0x30);
      if (uVar9 == 0) {
        if (puVar5[8] == '\x06') {
          uVar1 = *(uint *)(puVar5 + 0x2c);
          in_R8 = (ulong64)uVar1;
          uVar2 = *(uint *)(puVar5 + 0x28);
          uVar8 = (ulonglong)uVar2;
          if (uVar2 < uVar1) {
            *(undefined8 *)(puVar5 + uVar8 * 8 + 0x40) = 0;
            lVar10 = 0;
            do {
              if ((uVar1 - 1) - uVar8 == lVar10) {
                *(uint *)(puVar5 + 0x28) = uVar1;
                goto LAB_140d42545;
              }
              lVar7 = lVar7 + 0x400;
              uVar9 = *(ulonglong *)(puVar5 + lVar10 * 8 + uVar8 * 8 + 0x48);
              lVar10 = lVar10 + 1;
            } while (uVar9 == 0);
            *(uint *)(puVar5 + 0x28) = uVar2 + (int)lVar10;
            *(longlong *)(puVar5 + 0x20) = lVar7;
            goto LAB_140d424a7;
          }
        }
LAB_140d42545:
        *puVar5 = 0;
        goto LAB_140d423e9;
      }
LAB_140d424a7:
      uVar8 = 0;
      for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
        uVar8 = uVar8 + 1;
      }
      *(ulonglong *)(puVar5 + 0x30) = uVar9 & ~(1L << (uVar8 & 0x3f));
      local_28.begin = (ulonglong)(uint)((int)uVar8 << 4) + lVar7;
    }
    else {
      *(uint *)(puVar5 + 0x18) = uVar1 - *(int *)(puVar5 + 0x1c);
      local_28.begin = *(longlong *)(puVar5 + 0x10) - (ulonglong)uVar1;
    }
    *puVar5 = 0;
  }
  pvVar6 = memset((void *)local_28.begin,0,param_1);
  return pvVar6;
}

// bmalloc_try_reallocate @ 140d42560

void * __cdecl
bmalloc_try_reallocate(void *param_1,ulong64 param_2,pas_reallocate_free_mode param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar6 < 2) goto LAB_140d428e5;
  if (param_1 != (void *)0x0) {
    uVar4 = (ulonglong)param_1 >> 0x18;
    if (((((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >>
           ((uint)((ulonglong)param_1 >> 0x18) & 0x1f) & 1) == 0)) &&
        ((uVar8 = uVar4 - (bmalloc_megapage_table.instance)->index_begin,
         uVar4 < (bmalloc_megapage_table.instance)->index_begin ||
         (((bmalloc_megapage_table.instance)->index_end <= uVar4 ||
          ((*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                     (uVar8 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar8 * '\x02' & 0x1fU) & 3) != 1)
          ))))) || (uVar3 = *(uint *)(uVar6 + 8000), 0x3e6 < uVar3)) goto LAB_140d428e5;
    if (param_2 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_140d427a8;
    }
    uVar8 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    uVar4 = param_2 + 0xf;
    if (uVar4 < 0x1b0) {
      puVar7 = (undefined1 *)((uVar4 >> 4) * 0xc0 + uVar6 + 0x1fc0);
    }
    else {
      if ((0x271f < uVar4) ||
         (*(uint *)(uVar6 + 0x1f74) <=
          bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar4 >> 4]))
      goto LAB_140d428e5;
      puVar7 = (undefined1 *)
               (uVar6 + (ulonglong)
                        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar4 >> 4] *
                        8 + 0x1f80);
    }
    *puVar7 = 1;
    uVar3 = *(uint *)(puVar7 + 0x18);
    if ((ulonglong)uVar3 == 0) {
      lVar9 = *(longlong *)(puVar7 + 0x20);
      uVar4 = *(ulonglong *)(puVar7 + 0x30);
      if (uVar4 == 0) {
        if (puVar7[8] == '\x06') {
          uVar3 = *(uint *)(puVar7 + 0x2c);
          uVar1 = *(uint *)(puVar7 + 0x28);
          uVar10 = (ulonglong)uVar1;
          if (uVar1 < uVar3) {
            *(undefined8 *)(puVar7 + uVar10 * 8 + 0x40) = 0;
            lVar11 = 0;
            do {
              if ((uVar3 - 1) - uVar10 == lVar11) {
                *(uint *)(puVar7 + 0x28) = uVar3;
                goto LAB_140d428e1;
              }
              lVar9 = lVar9 + 0x400;
              uVar4 = *(ulonglong *)(puVar7 + lVar11 * 8 + uVar10 * 8 + 0x48);
              lVar11 = lVar11 + 1;
            } while (uVar4 == 0);
            *(uint *)(puVar7 + 0x28) = uVar1 + (int)lVar11;
            *(longlong *)(puVar7 + 0x20) = lVar9;
            goto LAB_140d42770;
          }
        }
        goto LAB_140d428e1;
      }
LAB_140d42770:
      uVar10 = 0;
      for (uVar2 = uVar4; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000000000000000) {
        uVar10 = uVar10 + 1;
      }
      *(ulonglong *)(puVar7 + 0x30) = uVar4 & ~(1L << (uVar10 & 0x3f));
      pvVar5 = (void *)((ulonglong)(uint)((int)uVar10 << 4) + lVar9);
    }
    else {
      *(uint *)(puVar7 + 0x18) = uVar3 - *(int *)(puVar7 + 0x1c);
      pvVar5 = (void *)(*(longlong *)(puVar7 + 0x10) - (ulonglong)uVar3);
    }
    *puVar7 = 0;
    if (param_2 < uVar8) {
      uVar8 = param_2;
    }
    memcpy(pvVar5,param_1,uVar8);
    uVar3 = *(uint *)(uVar6 + 8000);
LAB_140d427a8:
    *(ulonglong *)(uVar6 + (ulonglong)uVar3 * 8) = (longlong)param_1 << 6 | 5;
    *(uint *)(uVar6 + 8000) = uVar3 + 1;
    return pvVar5;
  }
  uVar4 = param_2 + 0xf;
  if (uVar4 < 0x1b0) {
    puVar7 = (undefined1 *)(uVar6 + (uVar4 >> 4) * 0xc0 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar4) ||
       (*(uint *)(uVar6 + 0x1f74) <=
        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar4 >> 4]))
    goto LAB_140d428e5;
    puVar7 = (undefined1 *)
             (uVar6 + (ulonglong)
                      bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar4 >> 4] * 8
             + 0x1f80);
  }
  *puVar7 = 1;
  uVar3 = *(uint *)(puVar7 + 0x18);
  if ((ulonglong)uVar3 != 0) {
    *(uint *)(puVar7 + 0x18) = uVar3 - *(int *)(puVar7 + 0x1c);
    pvVar5 = (void *)(*(longlong *)(puVar7 + 0x10) - (ulonglong)uVar3);
    goto LAB_140d42716;
  }
  lVar9 = *(longlong *)(puVar7 + 0x20);
  uVar6 = *(ulonglong *)(puVar7 + 0x30);
  if (uVar6 != 0) {
LAB_140d42703:
    uVar4 = 0;
    for (uVar8 = uVar6; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      uVar4 = uVar4 + 1;
    }
    *(ulonglong *)(puVar7 + 0x30) = uVar6 & ~(1L << (uVar4 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar4 << 4) + lVar9);
LAB_140d42716:
    *puVar7 = 0;
    return pvVar5;
  }
  if (puVar7[8] == '\x06') {
    uVar3 = *(uint *)(puVar7 + 0x2c);
    uVar1 = *(uint *)(puVar7 + 0x28);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 < uVar3) {
      *(undefined8 *)(puVar7 + uVar4 * 8 + 0x40) = 0;
      lVar11 = 0;
      do {
        if ((uVar3 - 1) - uVar4 == lVar11) {
          *(uint *)(puVar7 + 0x28) = uVar3;
          goto LAB_140d428e1;
        }
        lVar9 = lVar9 + 0x400;
        uVar6 = *(ulonglong *)(puVar7 + lVar11 * 8 + uVar4 * 8 + 0x48);
        lVar11 = lVar11 + 1;
      } while (uVar6 == 0);
      *(uint *)(puVar7 + 0x28) = uVar1 + (int)lVar11;
      *(longlong *)(puVar7 + 0x20) = lVar9;
      goto LAB_140d42703;
    }
  }
LAB_140d428e1:
  *puVar7 = 0;
LAB_140d428e5:
  pvVar5 = bmalloc_try_reallocate_casual(param_1,param_2,param_3);
  return pvVar5;
}

// bmalloc_reallocate @ 140d42900

void * __cdecl bmalloc_reallocate(void *param_1,ulong64 param_2,pas_reallocate_free_mode param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar6 < 2) goto LAB_140d42c85;
  if (param_1 != (void *)0x0) {
    uVar4 = (ulonglong)param_1 >> 0x18;
    if (((((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >>
           ((uint)((ulonglong)param_1 >> 0x18) & 0x1f) & 1) == 0)) &&
        ((uVar8 = uVar4 - (bmalloc_megapage_table.instance)->index_begin,
         uVar4 < (bmalloc_megapage_table.instance)->index_begin ||
         (((bmalloc_megapage_table.instance)->index_end <= uVar4 ||
          ((*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                     (uVar8 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar8 * '\x02' & 0x1fU) & 3) != 1)
          ))))) || (uVar3 = *(uint *)(uVar6 + 8000), 0x3e6 < uVar3)) goto LAB_140d42c85;
    if (param_2 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_140d42b48;
    }
    uVar8 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    uVar4 = param_2 + 0xf;
    if (uVar4 < 0x1b0) {
      puVar7 = (undefined1 *)((uVar4 >> 4) * 0xc0 + uVar6 + 0x1fc0);
    }
    else {
      if ((0x271f < uVar4) ||
         (*(uint *)(uVar6 + 0x1f74) <=
          bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar4 >> 4]))
      goto LAB_140d42c85;
      puVar7 = (undefined1 *)
               (uVar6 + (ulonglong)
                        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar4 >> 4] *
                        8 + 0x1f80);
    }
    *puVar7 = 1;
    uVar3 = *(uint *)(puVar7 + 0x18);
    if ((ulonglong)uVar3 == 0) {
      lVar9 = *(longlong *)(puVar7 + 0x20);
      uVar4 = *(ulonglong *)(puVar7 + 0x30);
      if (uVar4 == 0) {
        if (puVar7[8] == '\x06') {
          uVar3 = *(uint *)(puVar7 + 0x2c);
          uVar1 = *(uint *)(puVar7 + 0x28);
          uVar10 = (ulonglong)uVar1;
          if (uVar1 < uVar3) {
            *(undefined8 *)(puVar7 + uVar10 * 8 + 0x40) = 0;
            lVar11 = 0;
            do {
              if ((uVar3 - 1) - uVar10 == lVar11) {
                *(uint *)(puVar7 + 0x28) = uVar3;
                goto LAB_140d42c81;
              }
              lVar9 = lVar9 + 0x400;
              uVar4 = *(ulonglong *)(puVar7 + lVar11 * 8 + uVar10 * 8 + 0x48);
              lVar11 = lVar11 + 1;
            } while (uVar4 == 0);
            *(uint *)(puVar7 + 0x28) = uVar1 + (int)lVar11;
            *(longlong *)(puVar7 + 0x20) = lVar9;
            goto LAB_140d42b10;
          }
        }
        goto LAB_140d42c81;
      }
LAB_140d42b10:
      uVar10 = 0;
      for (uVar2 = uVar4; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000000000000000) {
        uVar10 = uVar10 + 1;
      }
      *(ulonglong *)(puVar7 + 0x30) = uVar4 & ~(1L << (uVar10 & 0x3f));
      pvVar5 = (void *)((ulonglong)(uint)((int)uVar10 << 4) + lVar9);
    }
    else {
      *(uint *)(puVar7 + 0x18) = uVar3 - *(int *)(puVar7 + 0x1c);
      pvVar5 = (void *)(*(longlong *)(puVar7 + 0x10) - (ulonglong)uVar3);
    }
    *puVar7 = 0;
    if (param_2 < uVar8) {
      uVar8 = param_2;
    }
    memcpy(pvVar5,param_1,uVar8);
    uVar3 = *(uint *)(uVar6 + 8000);
LAB_140d42b48:
    *(ulonglong *)(uVar6 + (ulonglong)uVar3 * 8) = (longlong)param_1 << 6 | 5;
    *(uint *)(uVar6 + 8000) = uVar3 + 1;
    return pvVar5;
  }
  uVar4 = param_2 + 0xf;
  if (uVar4 < 0x1b0) {
    puVar7 = (undefined1 *)(uVar6 + (uVar4 >> 4) * 0xc0 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar4) ||
       (*(uint *)(uVar6 + 0x1f74) <=
        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar4 >> 4]))
    goto LAB_140d42c85;
    puVar7 = (undefined1 *)
             (uVar6 + (ulonglong)
                      bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar4 >> 4] * 8
             + 0x1f80);
  }
  *puVar7 = 1;
  uVar3 = *(uint *)(puVar7 + 0x18);
  if ((ulonglong)uVar3 != 0) {
    *(uint *)(puVar7 + 0x18) = uVar3 - *(int *)(puVar7 + 0x1c);
    pvVar5 = (void *)(*(longlong *)(puVar7 + 0x10) - (ulonglong)uVar3);
    goto LAB_140d42ab6;
  }
  lVar9 = *(longlong *)(puVar7 + 0x20);
  uVar6 = *(ulonglong *)(puVar7 + 0x30);
  if (uVar6 != 0) {
LAB_140d42aa3:
    uVar4 = 0;
    for (uVar8 = uVar6; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
      uVar4 = uVar4 + 1;
    }
    *(ulonglong *)(puVar7 + 0x30) = uVar6 & ~(1L << (uVar4 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar4 << 4) + lVar9);
LAB_140d42ab6:
    *puVar7 = 0;
    return pvVar5;
  }
  if (puVar7[8] == '\x06') {
    uVar3 = *(uint *)(puVar7 + 0x2c);
    uVar1 = *(uint *)(puVar7 + 0x28);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 < uVar3) {
      *(undefined8 *)(puVar7 + uVar4 * 8 + 0x40) = 0;
      lVar11 = 0;
      do {
        if ((uVar3 - 1) - uVar4 == lVar11) {
          *(uint *)(puVar7 + 0x28) = uVar3;
          goto LAB_140d42c81;
        }
        lVar9 = lVar9 + 0x400;
        uVar6 = *(ulonglong *)(puVar7 + lVar11 * 8 + uVar4 * 8 + 0x48);
        lVar11 = lVar11 + 1;
      } while (uVar6 == 0);
      *(uint *)(puVar7 + 0x28) = uVar1 + (int)lVar11;
      *(longlong *)(puVar7 + 0x20) = lVar9;
      goto LAB_140d42aa3;
    }
  }
LAB_140d42c81:
  *puVar7 = 0;
LAB_140d42c85:
  pvVar5 = bmalloc_reallocate_casual(param_1,param_2,param_3);
  return pvVar5;
}

// bmalloc_try_reallocate_with_alignment @ 140d42ca0

void * __cdecl
bmalloc_try_reallocate_with_alignment
          (void *param_1,ulong64 param_2,ulong64 param_3,pas_reallocate_free_mode param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (0x10 < param_3) {
    pvVar5 = bmalloc_try_reallocate_with_nontrivial_alignment(param_1,param_2,param_3,param_4);
    return pvVar5;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar6 < 2) goto LAB_140d43047;
  if (param_1 != (void *)0x0) {
    uVar3 = (ulonglong)param_1 >> 0x18;
    if (((((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >>
           ((uint)((ulonglong)param_1 >> 0x18) & 0x1f) & 1) == 0)) &&
        ((uVar9 = uVar3 - (bmalloc_megapage_table.instance)->index_begin,
         uVar3 < (bmalloc_megapage_table.instance)->index_begin ||
         (((bmalloc_megapage_table.instance)->index_end <= uVar3 ||
          ((*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                     (uVar9 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar9 * '\x02' & 0x1fU) & 3) != 1)
          ))))) || (uVar7 = *(uint *)(uVar6 + 8000), 0x3e6 < uVar7)) goto LAB_140d43047;
    if (param_2 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_140d42ef8;
    }
    uVar9 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    uVar3 = param_2 + 0xf;
    if (uVar3 < 0x1b0) {
      puVar8 = (undefined1 *)(uVar6 + (uVar3 >> 4) * 0xc0 + 0x1fc0);
    }
    else {
      if ((0x271f < uVar3) ||
         (*(uint *)(uVar6 + 0x1f74) <=
          bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar3 >> 4]))
      goto LAB_140d43047;
      puVar8 = (undefined1 *)
               (uVar6 + (ulonglong)
                        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar3 >> 4] *
                        8 + 0x1f80);
    }
    *puVar8 = 1;
    uVar7 = *(uint *)(puVar8 + 0x18);
    if ((ulonglong)uVar7 == 0) {
      lVar4 = *(longlong *)(puVar8 + 0x20);
      uVar3 = *(ulonglong *)(puVar8 + 0x30);
      if (uVar3 == 0) {
        if (puVar8[8] == '\x06') {
          uVar7 = *(uint *)(puVar8 + 0x2c);
          uVar1 = *(uint *)(puVar8 + 0x28);
          uVar10 = (ulonglong)uVar1;
          if (uVar1 < uVar7) {
            *(undefined8 *)(puVar8 + uVar10 * 8 + 0x40) = 0;
            lVar11 = 0;
            do {
              if ((uVar7 - 1) - uVar10 == lVar11) {
                *(uint *)(puVar8 + 0x28) = uVar7;
                goto LAB_140d43043;
              }
              lVar4 = lVar4 + 0x400;
              uVar3 = *(ulonglong *)(puVar8 + lVar11 * 8 + uVar10 * 8 + 0x48);
              lVar11 = lVar11 + 1;
            } while (uVar3 == 0);
            *(uint *)(puVar8 + 0x28) = uVar1 + (int)lVar11;
            *(longlong *)(puVar8 + 0x20) = lVar4;
            goto LAB_140d42ebf;
          }
        }
        goto LAB_140d43043;
      }
LAB_140d42ebf:
      uVar10 = 0;
      for (uVar2 = uVar3; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000000000000000) {
        uVar10 = uVar10 + 1;
      }
      *(ulonglong *)(puVar8 + 0x30) = uVar3 & ~(1L << (uVar10 & 0x3f));
      pvVar5 = (void *)((ulonglong)(uint)((int)uVar10 << 4) + lVar4);
    }
    else {
      *(uint *)(puVar8 + 0x18) = uVar7 - *(int *)(puVar8 + 0x1c);
      pvVar5 = (void *)(*(longlong *)(puVar8 + 0x10) - (ulonglong)uVar7);
    }
    *puVar8 = 0;
    if (param_2 < uVar9) {
      uVar9 = param_2;
    }
    memcpy(pvVar5,param_1,uVar9);
    uVar7 = *(uint *)(uVar6 + 8000);
LAB_140d42ef8:
    *(ulonglong *)(uVar6 + (ulonglong)uVar7 * 8) = (longlong)param_1 << 6 | 5;
    *(uint *)(uVar6 + 8000) = uVar7 + 1;
    return pvVar5;
  }
  uVar3 = param_2 + 0xf;
  if (uVar3 < 0x1b0) {
    puVar8 = (undefined1 *)(uVar6 + (uVar3 >> 4) * 0xc0 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar3) ||
       (*(uint *)(uVar6 + 0x1f74) <=
        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar3 >> 4]))
    goto LAB_140d43047;
    puVar8 = (undefined1 *)
             (uVar6 + (ulonglong)
                      bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar3 >> 4] * 8
             + 0x1f80);
  }
  *puVar8 = 1;
  uVar7 = *(uint *)(puVar8 + 0x18);
  if ((ulonglong)uVar7 != 0) {
    *(uint *)(puVar8 + 0x18) = uVar7 - *(int *)(puVar8 + 0x1c);
    pvVar5 = (void *)(*(longlong *)(puVar8 + 0x10) - (ulonglong)uVar7);
    goto LAB_140d42e64;
  }
  lVar4 = *(longlong *)(puVar8 + 0x20);
  uVar6 = *(ulonglong *)(puVar8 + 0x30);
  if (uVar6 != 0) {
LAB_140d42e51:
    uVar3 = 0;
    for (uVar9 = uVar6; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar3 = uVar3 + 1;
    }
    *(ulonglong *)(puVar8 + 0x30) = uVar6 & ~(1L << (uVar3 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar3 << 4) + lVar4);
LAB_140d42e64:
    *puVar8 = 0;
    return pvVar5;
  }
  if (puVar8[8] == '\x06') {
    uVar7 = *(uint *)(puVar8 + 0x2c);
    uVar1 = *(uint *)(puVar8 + 0x28);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 < uVar7) {
      *(undefined8 *)(puVar8 + uVar3 * 8 + 0x40) = 0;
      lVar11 = 0;
      do {
        if ((uVar7 - 1) - uVar3 == lVar11) {
          *(uint *)(puVar8 + 0x28) = uVar7;
          goto LAB_140d43043;
        }
        lVar4 = lVar4 + 0x400;
        uVar6 = *(ulonglong *)(puVar8 + lVar11 * 8 + uVar3 * 8 + 0x48);
        lVar11 = lVar11 + 1;
      } while (uVar6 == 0);
      *(uint *)(puVar8 + 0x28) = uVar1 + (int)lVar11;
      *(longlong *)(puVar8 + 0x20) = lVar4;
      goto LAB_140d42e51;
    }
  }
LAB_140d43043:
  *puVar8 = 0;
LAB_140d43047:
  pvVar5 = bmalloc_try_reallocate_casual(param_1,param_2,param_4);
  return pvVar5;
}

// bmalloc_reallocate_with_alignment @ 140d43070

void * __cdecl
bmalloc_reallocate_with_alignment
          (void *param_1,ulong64 param_2,ulong64 param_3,pas_reallocate_free_mode param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (0x10 < param_3) {
    pvVar5 = bmalloc_reallocate_with_nontrivial_alignment(param_1,param_2,param_3,param_4);
    return pvVar5;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if (uVar6 < 2) goto LAB_140d43417;
  if (param_1 != (void *)0x0) {
    uVar3 = (ulonglong)param_1 >> 0x18;
    if (((((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >>
           ((uint)((ulonglong)param_1 >> 0x18) & 0x1f) & 1) == 0)) &&
        ((uVar9 = uVar3 - (bmalloc_megapage_table.instance)->index_begin,
         uVar3 < (bmalloc_megapage_table.instance)->index_begin ||
         (((bmalloc_megapage_table.instance)->index_end <= uVar3 ||
          ((*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                     (uVar9 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar9 * '\x02' & 0x1fU) & 3) != 1)
          ))))) || (uVar7 = *(uint *)(uVar6 + 8000), 0x3e6 < uVar7)) goto LAB_140d43417;
    if (param_2 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_140d432c8;
    }
    uVar9 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    uVar3 = param_2 + 0xf;
    if (uVar3 < 0x1b0) {
      puVar8 = (undefined1 *)(uVar6 + (uVar3 >> 4) * 0xc0 + 0x1fc0);
    }
    else {
      if ((0x271f < uVar3) ||
         (*(uint *)(uVar6 + 0x1f74) <=
          bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar3 >> 4]))
      goto LAB_140d43417;
      puVar8 = (undefined1 *)
               (uVar6 + (ulonglong)
                        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar3 >> 4] *
                        8 + 0x1f80);
    }
    *puVar8 = 1;
    uVar7 = *(uint *)(puVar8 + 0x18);
    if ((ulonglong)uVar7 == 0) {
      lVar4 = *(longlong *)(puVar8 + 0x20);
      uVar3 = *(ulonglong *)(puVar8 + 0x30);
      if (uVar3 == 0) {
        if (puVar8[8] == '\x06') {
          uVar7 = *(uint *)(puVar8 + 0x2c);
          uVar1 = *(uint *)(puVar8 + 0x28);
          uVar10 = (ulonglong)uVar1;
          if (uVar1 < uVar7) {
            *(undefined8 *)(puVar8 + uVar10 * 8 + 0x40) = 0;
            lVar11 = 0;
            do {
              if ((uVar7 - 1) - uVar10 == lVar11) {
                *(uint *)(puVar8 + 0x28) = uVar7;
                goto LAB_140d43413;
              }
              lVar4 = lVar4 + 0x400;
              uVar3 = *(ulonglong *)(puVar8 + lVar11 * 8 + uVar10 * 8 + 0x48);
              lVar11 = lVar11 + 1;
            } while (uVar3 == 0);
            *(uint *)(puVar8 + 0x28) = uVar1 + (int)lVar11;
            *(longlong *)(puVar8 + 0x20) = lVar4;
            goto LAB_140d4328f;
          }
        }
        goto LAB_140d43413;
      }
LAB_140d4328f:
      uVar10 = 0;
      for (uVar2 = uVar3; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000000000000000) {
        uVar10 = uVar10 + 1;
      }
      *(ulonglong *)(puVar8 + 0x30) = uVar3 & ~(1L << (uVar10 & 0x3f));
      pvVar5 = (void *)((ulonglong)(uint)((int)uVar10 << 4) + lVar4);
    }
    else {
      *(uint *)(puVar8 + 0x18) = uVar7 - *(int *)(puVar8 + 0x1c);
      pvVar5 = (void *)(*(longlong *)(puVar8 + 0x10) - (ulonglong)uVar7);
    }
    *puVar8 = 0;
    if (param_2 < uVar9) {
      uVar9 = param_2;
    }
    memcpy(pvVar5,param_1,uVar9);
    uVar7 = *(uint *)(uVar6 + 8000);
LAB_140d432c8:
    *(ulonglong *)(uVar6 + (ulonglong)uVar7 * 8) = (longlong)param_1 << 6 | 5;
    *(uint *)(uVar6 + 8000) = uVar7 + 1;
    return pvVar5;
  }
  uVar3 = param_2 + 0xf;
  if (uVar3 < 0x1b0) {
    puVar8 = (undefined1 *)(uVar6 + (uVar3 >> 4) * 0xc0 + 0x1fc0);
  }
  else {
    if ((0x271f < uVar3) ||
       (*(uint *)(uVar6 + 0x1f74) <=
        bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar3 >> 4]))
    goto LAB_140d43417;
    puVar8 = (undefined1 *)
             (uVar6 + (ulonglong)
                      bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar3 >> 4] * 8
             + 0x1f80);
  }
  *puVar8 = 1;
  uVar7 = *(uint *)(puVar8 + 0x18);
  if ((ulonglong)uVar7 != 0) {
    *(uint *)(puVar8 + 0x18) = uVar7 - *(int *)(puVar8 + 0x1c);
    pvVar5 = (void *)(*(longlong *)(puVar8 + 0x10) - (ulonglong)uVar7);
    goto LAB_140d43234;
  }
  lVar4 = *(longlong *)(puVar8 + 0x20);
  uVar6 = *(ulonglong *)(puVar8 + 0x30);
  if (uVar6 != 0) {
LAB_140d43221:
    uVar3 = 0;
    for (uVar9 = uVar6; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar3 = uVar3 + 1;
    }
    *(ulonglong *)(puVar8 + 0x30) = uVar6 & ~(1L << (uVar3 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar3 << 4) + lVar4);
LAB_140d43234:
    *puVar8 = 0;
    return pvVar5;
  }
  if (puVar8[8] == '\x06') {
    uVar7 = *(uint *)(puVar8 + 0x2c);
    uVar1 = *(uint *)(puVar8 + 0x28);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 < uVar7) {
      *(undefined8 *)(puVar8 + uVar3 * 8 + 0x40) = 0;
      lVar11 = 0;
      do {
        if ((uVar7 - 1) - uVar3 == lVar11) {
          *(uint *)(puVar8 + 0x28) = uVar7;
          goto LAB_140d43413;
        }
        lVar4 = lVar4 + 0x400;
        uVar6 = *(ulonglong *)(puVar8 + lVar11 * 8 + uVar3 * 8 + 0x48);
        lVar11 = lVar11 + 1;
      } while (uVar6 == 0);
      *(uint *)(puVar8 + 0x28) = uVar1 + (int)lVar11;
      *(longlong *)(puVar8 + 0x20) = lVar4;
      goto LAB_140d43221;
    }
  }
LAB_140d43413:
  *puVar8 = 0;
LAB_140d43417:
  pvVar5 = bmalloc_reallocate_casual(param_1,param_2,param_4);
  return pvVar5;
}

// bmalloc_try_iso_allocate_casual @ 140d43440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_iso_allocate_casual(pas_heap_ref *param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_iso_allocate_impl_casual_case(&local_18,param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_iso_allocate_impl_casual_case @ 140d43490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_iso_allocate_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1)

{
  uint uVar1;
  uint uVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  pas_allocation_result *ppVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  pas_zero_mode pVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStackY_78 [32];
  bool local_40 [2];
  byte bStack_3e;
  undefined5 uStack_3d;
  undefined8 local_38;
  undefined2 local_2c;
  byte local_2a;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  uVar1 = *(uint *)param_1->type;
  uVar2 = param_1->allocator_index;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if ((ulonglong)uVar2 == 0) {
LAB_140d4354a:
      local_40[0] = false;
      local_38 = (pas_local_allocator *)0x0;
    }
    else if (uVar2 < ppVar3->allocator_index_upper_bound) {
      local_38 = (pas_local_allocator *)(ppVar3->local_allocators + uVar2);
      local_40[0] = true;
    }
    else {
      if (uVar2 == 0xffffffff) goto LAB_140d4354a;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)local_40,ppVar3,uVar2,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)local_40,uVar2,&bmalloc_heap_config);
  }
  if ((local_40[0] & 1U) == 0) {
    ppVar7 = bmalloc_try_iso_allocate_impl_impl_slow
                       (__return_storage_ptr__,param_1,(ulonglong)uVar1,1);
    if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
      return ppVar7;
    }
    goto LAB_140d4360a;
  }
  (local_38->scavenger_data).is_in_use = true;
  uVar2 = local_38->remaining;
  if ((ulonglong)uVar2 == 0) {
    uVar8 = local_38->page_ish;
    uVar11 = local_38->current_word;
    if (uVar11 != 0) {
LAB_140d43596:
      uVar9 = 0;
      for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar9 = uVar9 + 1;
      }
      local_38->current_word = uVar11 & ~(1L << (uVar9 & 0x3f));
      uVar8 = (uint)((int)uVar9 << 4) + uVar8;
      goto LAB_140d435a9;
    }
    if (local_38->config_kind == 6) {
      uVar1 = local_38->end_offset;
      uVar2 = local_38->current_offset;
      uVar9 = (ulonglong)uVar2;
      if (uVar2 < uVar1) {
        local_38->bits[uVar9] = 0;
        lVar12 = 0;
        do {
          if ((uVar1 - 1) - uVar9 == lVar12) {
            local_38->current_offset = uVar1;
            goto LAB_140d43694;
          }
          uVar8 = uVar8 + 0x400;
          uVar11 = local_38[1].bits[uVar9 + lVar12 + -8];
          lVar12 = lVar12 + 1;
        } while (uVar11 == 0);
        local_38->current_offset = uVar2 + (int)lVar12;
        local_38->page_ish = uVar8;
        goto LAB_140d43596;
      }
LAB_140d43694:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_40,local_38,&bmalloc_allocator_counts,
                 pas_allocation_result_identity);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_40,local_38,(ulonglong)uVar1,1,
                 &bmalloc_allocator_counts,pas_allocation_result_identity);
    }
    uVar8 = CONCAT53(uStack_3d,CONCAT12(bStack_3e,CONCAT11(local_40[1],local_40[0])));
    bStack_3e = local_38._3_1_;
    local_2c = local_38._1_2_;
    local_40[0] = SUB81((ulonglong)local_38 >> 8,0);
    local_40[1] = SUB81((ulonglong)local_38 >> 0x10,0);
    bVar6 = local_38._0_1_;
    pVar10 = local_38._4_4_;
    local_2a = bStack_3e;
  }
  else {
    local_38->remaining = uVar2 - local_38->object_size;
    uVar8 = local_38->payload_end - (ulonglong)uVar2;
LAB_140d435a9:
    (local_38->scavenger_data).is_in_use = false;
    bVar6 = true;
    pVar10 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = uVar8;
  __return_storage_ptr__->did_succeed = bVar6;
  *(ushort *)&__return_storage_ptr__->field_0x9 = CONCAT11(local_40[1],local_40[0]);
  __return_storage_ptr__->field_0xb = bStack_3e;
  __return_storage_ptr__->zero_mode = pVar10;
  if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)bStack_3e;
  }
LAB_140d4360a:
  pcVar4 = (code *)swi(3);
  ppVar7 = (pas_allocation_result *)(*pcVar4)();
  return ppVar7;
}

// bmalloc_iso_allocate_casual @ 140d436f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_iso_allocate_casual(pas_heap_ref *param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_iso_allocate_impl_casual_case(&local_18,param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_iso_allocate_impl_casual_case @ 140d43740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_iso_allocate_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1)

{
  uint uVar1;
  uint uVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  pas_allocation_result *ppVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  pas_zero_mode pVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStackY_78 [32];
  bool local_40 [2];
  byte bStack_3e;
  undefined5 uStack_3d;
  undefined8 local_38;
  undefined2 local_2c;
  byte local_2a;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  uVar1 = *(uint *)param_1->type;
  uVar2 = param_1->allocator_index;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if ((ulonglong)uVar2 == 0) {
LAB_140d437fa:
      local_40[0] = false;
      local_38 = (pas_local_allocator *)0x0;
    }
    else if (uVar2 < ppVar3->allocator_index_upper_bound) {
      local_38 = (pas_local_allocator *)(ppVar3->local_allocators + uVar2);
      local_40[0] = true;
    }
    else {
      if (uVar2 == 0xffffffff) goto LAB_140d437fa;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)local_40,ppVar3,uVar2,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)local_40,uVar2,&bmalloc_heap_config);
  }
  if ((local_40[0] & 1U) == 0) {
    ppVar7 = bmalloc_iso_allocate_impl_impl_slow(__return_storage_ptr__,param_1,(ulonglong)uVar1,1);
    if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
      return ppVar7;
    }
    goto LAB_140d438ba;
  }
  (local_38->scavenger_data).is_in_use = true;
  uVar2 = local_38->remaining;
  if ((ulonglong)uVar2 == 0) {
    uVar8 = local_38->page_ish;
    uVar11 = local_38->current_word;
    if (uVar11 != 0) {
LAB_140d43846:
      uVar9 = 0;
      for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar9 = uVar9 + 1;
      }
      local_38->current_word = uVar11 & ~(1L << (uVar9 & 0x3f));
      uVar8 = (uint)((int)uVar9 << 4) + uVar8;
      goto LAB_140d43859;
    }
    if (local_38->config_kind == 6) {
      uVar1 = local_38->end_offset;
      uVar2 = local_38->current_offset;
      uVar9 = (ulonglong)uVar2;
      if (uVar2 < uVar1) {
        local_38->bits[uVar9] = 0;
        lVar12 = 0;
        do {
          if ((uVar1 - 1) - uVar9 == lVar12) {
            local_38->current_offset = uVar1;
            goto LAB_140d43944;
          }
          uVar8 = uVar8 + 0x400;
          uVar11 = local_38[1].bits[uVar9 + lVar12 + -8];
          lVar12 = lVar12 + 1;
        } while (uVar11 == 0);
        local_38->current_offset = uVar2 + (int)lVar12;
        local_38->page_ish = uVar8;
        goto LAB_140d43846;
      }
LAB_140d43944:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_40,local_38,&bmalloc_allocator_counts,
                 pas_allocation_result_crash_on_error);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_40,local_38,(ulonglong)uVar1,1,
                 &bmalloc_allocator_counts,pas_allocation_result_crash_on_error);
    }
    uVar8 = CONCAT53(uStack_3d,CONCAT12(bStack_3e,CONCAT11(local_40[1],local_40[0])));
    bStack_3e = local_38._3_1_;
    local_2c = local_38._1_2_;
    local_40[0] = SUB81((ulonglong)local_38 >> 8,0);
    local_40[1] = SUB81((ulonglong)local_38 >> 0x10,0);
    bVar6 = local_38._0_1_;
    pVar10 = local_38._4_4_;
    local_2a = bStack_3e;
  }
  else {
    local_38->remaining = uVar2 - local_38->object_size;
    uVar8 = local_38->payload_end - (ulonglong)uVar2;
LAB_140d43859:
    (local_38->scavenger_data).is_in_use = false;
    bVar6 = true;
    pVar10 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = uVar8;
  __return_storage_ptr__->did_succeed = bVar6;
  *(ushort *)&__return_storage_ptr__->field_0x9 = CONCAT11(local_40[1],local_40[0]);
  __return_storage_ptr__->field_0xb = bStack_3e;
  __return_storage_ptr__->zero_mode = pVar10;
  if ((local_28 ^ (ulonglong)auStackY_78) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)bStack_3e;
  }
LAB_140d438ba:
  pcVar4 = (code *)swi(3);
  ppVar7 = (pas_allocation_result *)(*pcVar4)();
  return ppVar7;
}

// bmalloc_try_iso_allocate @ 140d439a0

void * __cdecl bmalloc_try_iso_allocate(pas_heap_ref *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar2 = param_1->allocator_index;
  uVar7 = (ulonglong)uVar2;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar4 < 2) || (*(uint *)(uVar4 + 0x1f74) <= uVar2)) goto LAB_140d439f0;
  lVar1 = uVar4 + uVar7 * 8;
  *(undefined1 *)(uVar4 + 0x1f80 + uVar7 * 8) = 1;
  uVar2 = *(uint *)(uVar4 + 0x1f98 + uVar7 * 8);
  if ((ulonglong)uVar2 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
    pvVar5 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
    goto LAB_140d43a57;
  }
  lVar8 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d43a44:
    uVar7 = 0;
    for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
      uVar7 = uVar7 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar7 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar7 << 4) + lVar8);
LAB_140d43a57:
    *(undefined1 *)(lVar1 + 0x1f80) = 0;
    return pvVar5;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar2 = *(uint *)(lVar1 + 0x1fac);
    uVar3 = *(uint *)(lVar1 + 0x1fa8);
    uVar9 = (ulonglong)uVar3;
    if (uVar3 < uVar2) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar9 * 8) = 0;
      lVar6 = 0;
      do {
        if ((uVar2 - 1) - uVar9 == lVar6) {
          *(uint *)(lVar1 + 0x1fa8) = uVar2;
          goto LAB_140d43ac2;
        }
        lVar8 = lVar8 + 0x400;
        uVar10 = *(ulonglong *)(uVar4 + uVar7 * 8 + uVar9 * 8 + 0x1fc8 + lVar6 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar6;
      *(longlong *)(lVar1 + 0x1fa0) = lVar8;
      goto LAB_140d43a44;
    }
  }
LAB_140d43ac2:
  *(undefined1 *)(lVar1 + 0x1f80) = 0;
LAB_140d439f0:
  pvVar5 = bmalloc_try_iso_allocate_casual(param_1);
  return pvVar5;
}

// bmalloc_iso_allocate @ 140d43ad0

void * __cdecl bmalloc_iso_allocate(pas_heap_ref *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar2 = param_1->allocator_index;
  uVar7 = (ulonglong)uVar2;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar4 < 2) || (*(uint *)(uVar4 + 0x1f74) <= uVar2)) goto LAB_140d43b20;
  lVar1 = uVar4 + uVar7 * 8;
  *(undefined1 *)(uVar4 + 0x1f80 + uVar7 * 8) = 1;
  uVar2 = *(uint *)(uVar4 + 0x1f98 + uVar7 * 8);
  if ((ulonglong)uVar2 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
    pvVar5 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
    goto LAB_140d43b87;
  }
  lVar8 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d43b74:
    uVar7 = 0;
    for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
      uVar7 = uVar7 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar7 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar7 << 4) + lVar8);
LAB_140d43b87:
    *(undefined1 *)(lVar1 + 0x1f80) = 0;
    return pvVar5;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar2 = *(uint *)(lVar1 + 0x1fac);
    uVar3 = *(uint *)(lVar1 + 0x1fa8);
    uVar9 = (ulonglong)uVar3;
    if (uVar3 < uVar2) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar9 * 8) = 0;
      lVar6 = 0;
      do {
        if ((uVar2 - 1) - uVar9 == lVar6) {
          *(uint *)(lVar1 + 0x1fa8) = uVar2;
          goto LAB_140d43bf2;
        }
        lVar8 = lVar8 + 0x400;
        uVar10 = *(ulonglong *)(uVar4 + uVar7 * 8 + uVar9 * 8 + 0x1fc8 + lVar6 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar6;
      *(longlong *)(lVar1 + 0x1fa0) = lVar8;
      goto LAB_140d43b74;
    }
  }
LAB_140d43bf2:
  *(undefined1 *)(lVar1 + 0x1f80) = 0;
LAB_140d43b20:
  pvVar5 = bmalloc_iso_allocate_casual(param_1);
  return pvVar5;
}

// bmalloc_try_allocate_array_by_size_with_alignment_casual @ 140d43c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_allocate_array_by_size_with_alignment_casual
          (pas_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_iso_allocate_array_impl_casual_case(&local_18,param_1,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_iso_allocate_array_impl_casual_case @ 140d43c50

pas_allocation_result * __cdecl
bmalloc_try_iso_allocate_array_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  pas_allocation_result *ppVar1;
  pas_heap *ppVar2;
  
  ppVar2 = param_1->heap;
  if (ppVar2 == (pas_heap *)0x0) {
    ppVar2 = pas_ensure_heap_slow
                       (param_1,pas_normal_heap_ref_kind,&bmalloc_heap_config,
                        &bmalloc_typed_runtime_config.base);
  }
  ppVar1 = bmalloc_try_iso_allocate_array_impl_casual_case_with_heap
                     (__return_storage_ptr__,param_1,ppVar2,param_2,param_3);
  return ppVar1;
}

// bmalloc_allocate_array_by_size_with_alignment_casual @ 140d43cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_allocate_array_by_size_with_alignment_casual
          (pas_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_iso_allocate_array_impl_casual_case(&local_18,param_1,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_iso_allocate_array_impl_casual_case @ 140d43d10

pas_allocation_result * __cdecl
bmalloc_iso_allocate_array_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  pas_allocation_result *ppVar1;
  pas_heap *ppVar2;
  
  ppVar2 = param_1->heap;
  if (ppVar2 == (pas_heap *)0x0) {
    ppVar2 = pas_ensure_heap_slow
                       (param_1,pas_normal_heap_ref_kind,&bmalloc_heap_config,
                        &bmalloc_typed_runtime_config.base);
  }
  ppVar1 = bmalloc_iso_allocate_array_impl_casual_case_with_heap
                     (__return_storage_ptr__,param_1,ppVar2,param_2,param_3);
  return ppVar1;
}

// bmalloc_try_iso_allocate_array_by_size @ 140d43d80

void * __cdecl bmalloc_try_iso_allocate_array_by_size(pas_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  ppVar3 = param_1->heap;
  if (ppVar3 == (pas_heap *)0x0) goto LAB_140d43dfd;
  uVar5 = param_2 + 0xf >> 4;
  uVar8 = 0;
  if ((uVar5 < (ppVar3->segregated_heap).small_index_upper_bound) &&
     (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, uVar8 = 0,
     puVar4 != (uint *)0x0)) {
    uVar8 = puVar4[uVar5];
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar5 < 2) || (*(uint *)(uVar5 + 0x1f74) <= uVar8)) goto LAB_140d43dfd;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar5 + uVar9 * 8;
  *(undefined1 *)(uVar5 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar5 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d43e6f;
  }
  lVar11 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d43e5c:
    uVar5 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar11);
LAB_140d43e6f:
    *(undefined1 *)(lVar1 + 0x1f80) = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar12 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar12 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar12 - (uVar8 - 1)) + lVar7 == 0) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d43ee5;
        }
        lVar11 = lVar11 + 0x400;
        uVar10 = *(ulonglong *)(uVar9 * 8 + uVar12 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar11;
      goto LAB_140d43e5c;
    }
  }
LAB_140d43ee5:
  *(undefined1 *)(lVar1 + 0x1f80) = 0;
LAB_140d43dfd:
  pvVar6 = bmalloc_try_allocate_array_by_size_with_alignment_casual(param_1,param_2,1);
  return pvVar6;
}

// bmalloc_iso_allocate_array_by_size @ 140d43f00

void * __cdecl bmalloc_iso_allocate_array_by_size(pas_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  ppVar3 = param_1->heap;
  if (ppVar3 == (pas_heap *)0x0) goto LAB_140d43f7d;
  uVar5 = param_2 + 0xf >> 4;
  uVar8 = 0;
  if ((uVar5 < (ppVar3->segregated_heap).small_index_upper_bound) &&
     (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, uVar8 = 0,
     puVar4 != (uint *)0x0)) {
    uVar8 = puVar4[uVar5];
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar5 < 2) || (*(uint *)(uVar5 + 0x1f74) <= uVar8)) goto LAB_140d43f7d;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar5 + uVar9 * 8;
  *(undefined1 *)(uVar5 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar5 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d43fef;
  }
  lVar11 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d43fdc:
    uVar5 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar11);
LAB_140d43fef:
    *(undefined1 *)(lVar1 + 0x1f80) = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar12 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar12 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar8 - 1) - uVar12 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d4405c;
        }
        lVar11 = lVar11 + 0x400;
        uVar10 = *(ulonglong *)(uVar9 * 8 + uVar12 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar11;
      goto LAB_140d43fdc;
    }
  }
LAB_140d4405c:
  *(undefined1 *)(lVar1 + 0x1f80) = 0;
LAB_140d43f7d:
  pvVar6 = bmalloc_allocate_array_by_size_with_alignment_casual(param_1,param_2,1);
  return pvVar6;
}

// bmalloc_try_iso_allocate_zeroed_array_by_size @ 140d44070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_iso_allocate_zeroed_array_by_size(pas_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  ppVar3 = param_1->heap;
  if (ppVar3 != (pas_heap *)0x0) {
    uVar6 = param_2 + 0xf >> 4;
    uVar10 = 0;
    if ((uVar6 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, uVar10 = 0,
       puVar4 != (uint *)0x0)) {
      uVar10 = puVar4[uVar6];
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar6) && (uVar10 < *(uint *)(uVar6 + 0x1f74))) {
      uVar12 = (ulonglong)uVar10;
      lVar1 = uVar6 + uVar12 * 8;
      *(undefined1 *)(uVar6 + 0x1f80 + uVar12 * 8) = 1;
      uVar10 = *(uint *)(uVar6 + 0x1f98 + uVar12 * 8);
      if ((ulonglong)uVar10 == 0) {
        lVar8 = *(longlong *)(lVar1 + 0x1fa0);
        uVar13 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar13 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar10 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar11 = (ulonglong)uVar2;
            if (uVar2 < uVar10) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar11 * 8) = 0;
              lVar9 = 0;
              do {
                if ((uVar11 - (uVar10 - 1)) + lVar9 == 0) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar10;
                  goto LAB_140d4423c;
                }
                lVar8 = lVar8 + 0x400;
                uVar13 = *(ulonglong *)(uVar12 * 8 + uVar11 * 8 + uVar6 + 0x1fc8 + lVar9 * 8);
                lVar9 = lVar9 + 1;
              } while (uVar13 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar9;
              *(longlong *)(lVar1 + 0x1fa0) = lVar8;
              goto LAB_140d4418c;
            }
          }
LAB_140d4423c:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d440f4;
        }
LAB_140d4418c:
        uVar6 = 0;
        for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar13 & ~(1L << (uVar6 & 0x3f));
        local_30.begin = (ulonglong)(uint)((int)uVar6 << 4) + lVar8;
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar10 - *(int *)(lVar1 + 0x1f9c);
        local_30.begin = *(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar10;
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      goto LAB_140d441a7;
    }
  }
LAB_140d440f4:
  bmalloc_try_iso_allocate_array_impl_casual_case(&local_30,param_1,param_2,1);
  if (((local_30.did_succeed & 1U) == 0) || (local_30.zero_mode != pas_zero_mode_may_have_non_zero))
  {
    if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)local_30.begin;
    }
    pcVar5 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar5)();
    return pvVar7;
  }
LAB_140d441a7:
  pvVar7 = memset((void *)local_30.begin,0,param_2);
  return pvVar7;
}

// bmalloc_iso_allocate_zeroed_array_by_size @ 140d44250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_iso_allocate_zeroed_array_by_size(pas_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  ppVar3 = param_1->heap;
  if (ppVar3 != (pas_heap *)0x0) {
    uVar6 = param_2 + 0xf >> 4;
    uVar10 = 0;
    if ((uVar6 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, uVar10 = 0,
       puVar4 != (uint *)0x0)) {
      uVar10 = puVar4[uVar6];
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar6) && (uVar10 < *(uint *)(uVar6 + 0x1f74))) {
      uVar12 = (ulonglong)uVar10;
      lVar1 = uVar6 + uVar12 * 8;
      *(undefined1 *)(uVar6 + 0x1f80 + uVar12 * 8) = 1;
      uVar10 = *(uint *)(uVar6 + 0x1f98 + uVar12 * 8);
      if ((ulonglong)uVar10 == 0) {
        lVar8 = *(longlong *)(lVar1 + 0x1fa0);
        uVar13 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar13 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar10 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar11 = (ulonglong)uVar2;
            if (uVar2 < uVar10) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar11 * 8) = 0;
              lVar9 = 0;
              do {
                if ((uVar10 - 1) - uVar11 == lVar9) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar10;
                  goto LAB_140d44416;
                }
                lVar8 = lVar8 + 0x400;
                uVar13 = *(ulonglong *)(uVar12 * 8 + uVar11 * 8 + uVar6 + 0x1fc8 + lVar9 * 8);
                lVar9 = lVar9 + 1;
              } while (uVar13 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar9;
              *(longlong *)(lVar1 + 0x1fa0) = lVar8;
              goto LAB_140d4436c;
            }
          }
LAB_140d44416:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d442d4;
        }
LAB_140d4436c:
        uVar6 = 0;
        for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar13 & ~(1L << (uVar6 & 0x3f));
        local_30.begin = (ulonglong)(uint)((int)uVar6 << 4) + lVar8;
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar10 - *(int *)(lVar1 + 0x1f9c);
        local_30.begin = *(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar10;
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      goto LAB_140d44387;
    }
  }
LAB_140d442d4:
  bmalloc_iso_allocate_array_impl_casual_case(&local_30,param_1,param_2,1);
  if (((local_30.did_succeed & 1U) == 0) || (local_30.zero_mode != pas_zero_mode_may_have_non_zero))
  {
    if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)local_30.begin;
    }
    pcVar5 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar5)();
    return pvVar7;
  }
LAB_140d44387:
  pvVar7 = memset((void *)local_30.begin,0,param_2);
  return pvVar7;
}

// bmalloc_try_iso_allocate_array_by_size_with_alignment @ 140d44430

void * __cdecl
bmalloc_try_iso_allocate_array_by_size_with_alignment
          (pas_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  pas_heap *ppVar4;
  uint *puVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  
  ppVar4 = param_1->heap;
  if ((ppVar4 == (pas_heap *)0x0) ||
     (uVar8 = param_3 - (param_3 >> 1 & 0x5555555555555555),
     uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333),
     (char)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01'))
  goto LAB_140d4453c;
  uVar9 = param_2;
  if ((param_3 != 1) && (uVar9 = param_3, param_3 <= param_2)) {
    uVar9 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar8 = uVar9 + 0xf >> 4;
  uVar12 = 0;
  if ((uVar8 < (ppVar4->segregated_heap).small_index_upper_bound) &&
     (puVar5 = (ppVar4->segregated_heap).index_to_small_allocator_index, uVar12 = 0,
     puVar5 != (uint *)0x0)) {
    uVar12 = puVar5[uVar8];
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar8 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar8 < 2) || (*(uint *)(uVar8 + 0x1f74) <= uVar12)) goto LAB_140d4453c;
  lVar1 = uVar8 + (ulonglong)uVar12 * 8;
  puVar13 = (undefined1 *)(lVar1 + 0x1f80);
  if ((param_3 != 1) && ((ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)) < param_3))
  goto LAB_140d4453c;
  *puVar13 = 1;
  uVar2 = *(uint *)(lVar1 + 0x1f98);
  if ((ulonglong)uVar2 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
    goto LAB_140d445be;
  }
  lVar10 = *(longlong *)(lVar1 + 0x1fa0);
  uVar11 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar11 != 0) {
LAB_140d445ab:
    uVar8 = 0;
    for (uVar14 = uVar11; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
      uVar8 = uVar8 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar11 & ~(1L << (uVar8 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar8 << 4) + lVar10);
LAB_140d445be:
    *puVar13 = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar2 = *(uint *)(lVar1 + 0x1fac);
    uVar3 = *(uint *)(lVar1 + 0x1fa8);
    uVar14 = (ulonglong)uVar3;
    if (uVar3 < uVar2) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar14 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar14 - (uVar2 - 1)) + lVar7 == 0) {
          *(uint *)(lVar1 + 0x1fa8) = uVar2;
          goto LAB_140d44635;
        }
        lVar10 = lVar10 + 0x400;
        uVar11 = *(ulonglong *)((ulonglong)uVar12 * 8 + uVar14 * 8 + uVar8 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar10;
      goto LAB_140d445ab;
    }
  }
LAB_140d44635:
  *puVar13 = 0;
LAB_140d4453c:
  pvVar6 = bmalloc_try_allocate_array_by_size_with_alignment_casual(param_1,param_2,param_3);
  return pvVar6;
}

// bmalloc_iso_allocate_array_by_size_with_alignment @ 140d44650

void * __cdecl
bmalloc_iso_allocate_array_by_size_with_alignment
          (pas_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  pas_heap *ppVar4;
  uint *puVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  
  ppVar4 = param_1->heap;
  if ((ppVar4 == (pas_heap *)0x0) ||
     (uVar8 = param_3 - (param_3 >> 1 & 0x5555555555555555),
     uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333),
     (char)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01'))
  goto LAB_140d4475c;
  uVar9 = param_2;
  if ((param_3 != 1) && (uVar9 = param_3, param_3 <= param_2)) {
    uVar9 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar8 = uVar9 + 0xf >> 4;
  uVar12 = 0;
  if ((uVar8 < (ppVar4->segregated_heap).small_index_upper_bound) &&
     (puVar5 = (ppVar4->segregated_heap).index_to_small_allocator_index, uVar12 = 0,
     puVar5 != (uint *)0x0)) {
    uVar12 = puVar5[uVar8];
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar8 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar8 < 2) || (*(uint *)(uVar8 + 0x1f74) <= uVar12)) goto LAB_140d4475c;
  lVar1 = uVar8 + (ulonglong)uVar12 * 8;
  puVar13 = (undefined1 *)(lVar1 + 0x1f80);
  if ((param_3 != 1) && ((ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)) < param_3))
  goto LAB_140d4475c;
  *puVar13 = 1;
  uVar2 = *(uint *)(lVar1 + 0x1f98);
  if ((ulonglong)uVar2 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
    goto LAB_140d447de;
  }
  lVar10 = *(longlong *)(lVar1 + 0x1fa0);
  uVar11 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar11 != 0) {
LAB_140d447cb:
    uVar8 = 0;
    for (uVar14 = uVar11; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
      uVar8 = uVar8 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar11 & ~(1L << (uVar8 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar8 << 4) + lVar10);
LAB_140d447de:
    *puVar13 = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar2 = *(uint *)(lVar1 + 0x1fac);
    uVar3 = *(uint *)(lVar1 + 0x1fa8);
    uVar14 = (ulonglong)uVar3;
    if (uVar3 < uVar2) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar14 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar2 - 1) - uVar14 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar2;
          goto LAB_140d4484d;
        }
        lVar10 = lVar10 + 0x400;
        uVar11 = *(ulonglong *)((ulonglong)uVar12 * 8 + uVar14 * 8 + uVar8 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar10;
      goto LAB_140d447cb;
    }
  }
LAB_140d4484d:
  *puVar13 = 0;
LAB_140d4475c:
  pvVar6 = bmalloc_allocate_array_by_size_with_alignment_casual(param_1,param_2,param_3);
  return pvVar6;
}

// bmalloc_try_iso_reallocate_array_by_size @ 140d44860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_try_iso_reallocate_array_by_size(pas_heap_ref *param_1,void *param_2,ulong64 param_3)

{
  uchar uVar1;
  char cVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  pas_heap *ppVar8;
  ulong64 uVar9;
  pas_segregated_view_opaque *ppVar10;
  PSRWLOCK pRVar11;
  pas_heap *ppVar12;
  pas_segregated_partial_view *ppVar13;
  uint uVar14;
  pas_heap *ppVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  pas_fast_megapage_kind pVar20;
  ulong64 *puVar21;
  ulonglong uVar22;
  pas_segregated_page *ppVar23;
  pas_bitfit_page *ppVar24;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  ppVar8 = param_1->heap;
  if (ppVar8 == (pas_heap *)0x0) {
    ppVar8 = pas_ensure_heap_slow
                       (param_1,pas_normal_heap_ref_kind,&bmalloc_heap_config,
                        &bmalloc_typed_runtime_config.base);
  }
  if (param_2 == (void *)0x0) {
    pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
    return pvVar7;
  }
  uVar17 = (uint)((ulonglong)param_2 >> 0x18);
  if (param_3 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar3 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
      uVar6 = (ulonglong)param_2 >> 0x18;
      if (((ulonglong)param_2 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar17 & 0x1f) & 1) == 0
         )) {
        uVar19 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
        pVar20 = pas_not_a_fast_megapage_kind;
        if ((uVar6 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar20 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar6 ||
            (pVar20 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar19 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar19 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar20 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar3,(ulong64)param_2,pas_deallocate_mode,pVar20);
          goto LAB_140d44a89;
        }
      }
      uVar17 = ppVar3->deallocation_log_index;
      if ((ulonglong)uVar17 < 999) {
        ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 5;
        ppVar3->deallocation_log_index = uVar17 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar3,(ulong64)param_2,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
    }
  }
  else {
    uVar6 = (ulonglong)param_2 >> 0x18;
    if (((ulonglong)param_2 >> 0x2b == 0) &&
       ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar17 & 0x1f) & 1) != 0))
    {
switchD_140d44b55_caseD_1:
      uVar6 = *(ulonglong *)(((ulonglong)param_2 & 0xffffffffffffc000) + 0x20) & 0xfffffffffffffff8;
      uVar19 = (ulonglong)((uint)*(byte *)(uVar6 + 10) * 0x80000 + (uint)*(ushort *)(uVar6 + 8) * 8)
      ;
      uVar6 = (ulonglong)(*(uint *)(uVar19 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
      ppVar12 = *(pas_heap **)(uVar19 + 0x18 + pas_compact_heap_reservation_base);
      ppVar15 = (pas_heap *)0x0;
      if (((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
        ppVar15 = ppVar12;
      }
      if (ppVar15 != ppVar8) {
                    /* WARNING: Subroutine does not return */
        pas_reallocation_did_fail
                  ("Attempting to teleport heaps",ppVar15,ppVar8,param_2,uVar6,param_3);
      }
      pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
      if (pvVar7 != (void *)0x0) {
        if (param_3 < uVar6) {
          uVar6 = param_3;
        }
        memcpy(pvVar7,param_2,uVar6);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        ppVar3 = *(pas_thread_local_cache **)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9c08);
        if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
          uVar17 = ppVar3->deallocation_log_index;
          if ((ulonglong)uVar17 < 999) {
            ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 5;
            ppVar3->deallocation_log_index = uVar17 + 1;
          }
          else {
            pas_thread_local_cache_append_deallocation_slow
                      (ppVar3,(ulong64)param_2,
                       pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
          }
        }
        else {
          pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        }
        goto LAB_140d44a8b;
      }
    }
    else {
      uVar19 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
      uVar17 = (uint)param_2;
      if (((bmalloc_megapage_table.instance)->index_begin <= uVar6) &&
         (uVar6 < (bmalloc_megapage_table.instance)->index_end)) {
        switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                        (uVar19 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar19 * '\x02' & 0x1fU) & 3)
        {
        case 0:
          goto switchD_140d44b55_caseD_0;
        case 1:
          goto switchD_140d44b55_caseD_1;
        case 2:
          ppVar23 = (pas_segregated_page *)((ulonglong)param_2 & 0xffffffffffffc000);
          uVar1 = (ppVar23->base).page_kind;
          if (uVar1 == '\x05') {
            uVar6 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                              ((pas_bitfit_page *)ppVar23,(ulong64)param_2);
            ppVar15 = *(pas_heap **)
                       ((ulonglong)
                        ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 +
                                        (ulonglong)ppVar23->object_size * 8) * 0x80000 +
                        (uint)*(ushort *)
                               (pas_compact_heap_reservation_base + 8 +
                               (ulonglong)ppVar23->object_size * 8) * 8) + 0x30 +
                       pas_compact_heap_reservation_base);
            ppVar12 = (pas_heap *)0x0;
            if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
              ppVar12 = ppVar15;
            }
            if (ppVar12 != ppVar8) goto LAB_140d45636;
            pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
            if (pvVar7 != (void *)0x0) {
              if (param_3 < uVar6) {
                uVar6 = param_3;
              }
              memcpy(pvVar7,param_2,uVar6);
              bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                        ((pas_bitfit_page *)ppVar23,(ulong64)param_2);
              goto LAB_140d44a8b;
            }
            goto LAB_140d44a89;
          }
          if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (((uint)ppVar23->owner & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar19 = (ulonglong)((uint)((ulonglong)param_2 >> 8) & 0x3f);
          uVar6 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar23->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
          lVar16 = pas_compact_heap_reservation_base + uVar6 * 8;
          if (uVar6 == 0) {
            lVar16 = 0;
          }
          ppVar12 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar16 + 0xb) * 8);
          if (*(uint3 *)(lVar16 + 0xb) == 0) {
            ppVar12 = (pas_heap *)0x0;
          }
          uVar6 = (ulonglong)((ppVar12->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar12 = *(pas_heap **)&(ppVar12->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = (pas_heap *)0x0;
          }
          if (ppVar12 != ppVar8) goto LAB_140d45636;
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 == (void *)0x0) goto LAB_140d44a89;
          if (param_3 < uVar6) {
            uVar6 = param_3;
          }
          memcpy(pvVar7,param_2,uVar6);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (1 < *(ulonglong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9c08)) {
            if (ppVar23->lock_ptr == (pas_lock *)0x0) {
              pRVar11 = (PSRWLOCK)0x0;
            }
            else {
              pRVar11 = (PSRWLOCK)
                        pas_segregated_page_switch_lock_slow
                                  (ppVar23,(pas_lock *)0x0,ppVar23->lock_ptr);
            }
            uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 7) & 0x7c);
            uVar17 = *(uint *)((longlong)ppVar23->alloc_bits + uVar6) & ~(1 << (uVar17 >> 4 & 0x1f))
            ;
            *(uint *)((longlong)ppVar23->alloc_bits + uVar6) = uVar17;
            if (((uint)ppVar23->owner & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar23->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
            ppVar13 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base)
            ;
            if (uVar6 == 0) {
              ppVar13 = (pas_segregated_partial_view *)0x0;
            }
            if (!ppVar13->eligibility_has_been_noted) {
              pas_segregated_partial_view_note_eligibility(ppVar13,ppVar23);
            }
            if (uVar17 == 0) {
              uVar9 = (ppVar23->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar9 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (ppVar23,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (ppVar23->emptiness).num_non_empty_words_or_live_bytes = uVar9;
              }
            }
            if (pRVar11 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(pRVar11);
            }
            goto LAB_140d44a8b;
          }
          break;
        case 3:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
LAB_140d44f19:
        pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        goto LAB_140d44a8b;
      }
switchD_140d44b55_caseD_0:
      uVar6 = (ulonglong)param_2 & 0xfffffffffffe0000;
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d44be8:
        if (bmalloc_marge_page_header_table.hashtable.table !=
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
          uVar18 = (uint)((ulonglong)param_2 >> 0x1a) & 0xfffffff ^
                   (uint)((ulonglong)param_2 >> 0x16);
          uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
          uVar18 = uVar18 >> 0xb ^ uVar18;
          uVar19 = (ulonglong)
                   ((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar18);
          uVar9 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
          while (uVar9 != ((ulonglong)param_2 & 0xffffffffffc00000)) {
            uVar18 = uVar18 + 1;
            if (uVar9 == 0xffffffffffffffff) goto LAB_140d44f8f;
            uVar19 = (ulonglong)
                     (uVar18 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
            uVar9 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
          }
          ppVar24 = (pas_bitfit_page *)
                    (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].high;
          if (ppVar24 != (pas_bitfit_page *)0x0) goto LAB_140d44c85;
        }
LAB_140d44f8f:
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pas_large_map_find(&local_60,(ulong64)param_2);
        if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Source object not allocated",(void *)0x0,ppVar8,param_2,0,param_3);
        }
        if ((void *)local_60.begin != param_2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar6 = local_60.end - (longlong)param_2;
        if (local_60.end < param_2 || uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        puVar21 = &local_60.heap[-3].free_heap.num_mapped_bytes;
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (ppVar8 != (pas_heap *)puVar21) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Attempting to teleport heaps",puVar21,ppVar8,param_2,uVar6,param_3);
        }
        pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
        if (pvVar7 != (void *)0x0) {
          if (param_3 < uVar6) {
            uVar6 = param_3;
          }
          memcpy(pvVar7,param_2,uVar6);
          pas_deallocate_known_large(param_2,&bmalloc_heap_config);
          goto LAB_140d44a8b;
        }
      }
      else {
        uVar18 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_2 >> 0x11)
        ;
        uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
        uVar18 = uVar18 >> 0xb ^ uVar18;
        uVar19 = (ulonglong)
                 ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar18);
        uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
        while (uVar9 != uVar6) {
          uVar18 = uVar18 + 1;
          if (uVar9 == 0xffffffffffffffff) goto LAB_140d44be8;
          uVar19 = (ulonglong)
                   (uVar18 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
          uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
        }
        ppVar24 = (pas_bitfit_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
        if (ppVar24 == (pas_bitfit_page *)0x0) goto LAB_140d44be8;
LAB_140d44c85:
        switch((ppVar24->base).page_kind) {
        case '\x01':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x02':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x03':
          if (((uint)ppVar24[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar18 = uVar17 & 0x1ffff;
          uVar22 = (ulonglong)(uVar18 >> 0xc);
          uVar19 = (ulonglong)
                   *(uint *)((ppVar24[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
          lVar16 = pas_compact_heap_reservation_base + uVar19 * 8;
          if (uVar19 == 0) {
            lVar16 = 0;
          }
          ppVar12 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar16 + 0xb) * 8);
          if (*(uint3 *)(lVar16 + 0xb) == 0) {
            ppVar12 = (pas_heap *)0x0;
          }
          uVar19 = (ulonglong)((ppVar12->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar12 = *(pas_heap **)&(ppVar12->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = (pas_heap *)0x0;
          }
          if (ppVar12 != ppVar8) {
LAB_140d45697:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar12,ppVar8,param_2,uVar19,param_3);
          }
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 == (void *)0x0) break;
          if (param_3 < uVar19) {
            uVar19 = param_3;
          }
          memcpy(pvVar7,param_2,uVar19);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (*(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08) < 2) goto LAB_140d44f19;
          if (bmalloc_medium_page_header_table.hashtable.table ==
              (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
            ppVar23 = (pas_segregated_page *)0x0;
          }
          else {
            uVar14 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                     (uint)((ulonglong)param_2 >> 0x11);
            uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
            uVar14 = uVar14 >> 0xb ^ uVar14;
            uVar19 = (ulonglong)
                     ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14);
            uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
            if (uVar9 != uVar6) {
              ppVar23 = (pas_segregated_page *)0x0;
              do {
                uVar14 = uVar14 + 1;
                if (uVar9 == 0xffffffffffffffff) goto LAB_140d4544f;
                uVar19 = (ulonglong)
                         (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              } while (uVar9 != uVar6);
            }
            ppVar23 = (pas_segregated_page *)
                      (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
          }
LAB_140d4544f:
          if (ppVar23->lock_ptr == (pas_lock *)0x0) {
            pRVar11 = (PSRWLOCK)0x0;
          }
          else {
            pRVar11 = (PSRWLOCK)
                      pas_segregated_page_switch_lock_slow
                                (ppVar23,(pas_lock *)0x0,ppVar23->lock_ptr);
          }
          uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 0xc) & 0x1c);
          uVar17 = *(uint *)((longlong)ppVar23->alloc_bits + uVar6) & ~(1 << (uVar17 >> 9 & 0x1f));
          *(uint *)((longlong)ppVar23->alloc_bits + uVar6) = uVar17;
          ppVar10 = ppVar23->owner;
          if (((uint)ppVar10 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar6 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar10 & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
          ppVar13 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base);
          if (uVar6 == 0) {
            ppVar13 = (pas_segregated_partial_view *)0x0;
          }
          if (!ppVar13->eligibility_has_been_noted) {
            pas_segregated_partial_view_note_eligibility(ppVar13,ppVar23);
            ppVar10 = ppVar23->owner;
          }
          if (((ulonglong)ppVar10 & 6) == 0) {
            uVar14 = ppVar23->object_size;
          }
          else {
            if (((uint)ppVar10 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar10 & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
            lVar16 = pas_compact_heap_reservation_base + uVar6 * 8;
            if (uVar6 == 0) {
              lVar16 = 0;
            }
            uVar14 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar16 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar16 + 0xb) * 8) + 0x20 +
                              pas_compact_heap_reservation_base) & 0x7ffffff;
          }
          if (uVar14 == 0) {
LAB_140d4552d:
            bVar5 = false;
          }
          else {
            if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = ((ulonglong)uVar14 + (ulonglong)uVar18) - 1 >> 0xc;
            if (uVar6 < uVar22) goto LAB_140d4552d;
            bVar5 = false;
            do {
              cVar2 = *(char *)((longlong)ppVar23[1].alloc_bits + (uVar22 - 0x10));
              if (cVar2 == '\0') {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              if (cVar2 == -1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              *(char *)((longlong)ppVar23[1].alloc_bits + (uVar22 - 0x10)) = cVar2 + -1;
              bVar5 = (bool)(bVar5 | (char)(cVar2 + -1) == '\0');
              uVar22 = uVar22 + 1;
            } while (uVar6 + 1 != uVar22);
          }
          if (pas_segregated_page_deallocate_should_verify_granules == true) {
            pas_segregated_page_verify_granules(ppVar23);
          }
          if (bVar5) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar23,pas_note_emptiness_keep_num_non_empty_words);
          }
          if (uVar17 == 0) {
            uVar9 = (ppVar23->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar9 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (ppVar23,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (ppVar23->emptiness).num_non_empty_words_or_live_bytes = uVar9;
            }
          }
          if (pRVar11 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar11);
          }
          goto LAB_140d44a8b;
        case '\x04':
          uVar19 = ppVar24[1].use_epoch & 0xfffffffffffffff8;
          uVar22 = (ulonglong)
                   ((uint)*(byte *)(uVar19 + 10) * 0x80000 + (uint)*(ushort *)(uVar19 + 8) * 8);
          uVar19 = (ulonglong)
                   (*(uint *)(uVar22 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
          ppVar15 = *(pas_heap **)(uVar22 + 0x18 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) goto LAB_140d45697;
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar19) {
              uVar19 = param_3;
            }
            memcpy(pvVar7,param_2,uVar19);
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            ppVar3 = *(pas_thread_local_cache **)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08);
            if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
              uVar17 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                       (uint)((ulonglong)param_2 >> 0x11);
              uVar17 = uVar17 * 0x20 + (uVar17 ^ 0xdeadbeef);
              uVar17 = uVar17 >> 0xb ^ uVar17;
              uVar19 = (ulonglong)
                       ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar17);
              uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              while (uVar9 != uVar6) {
                uVar17 = uVar17 + 1;
                uVar19 = (ulonglong)
                         (uVar17 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              }
              uVar6 = (ulonglong)
                      *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].
                                high + 4) + ppVar3->num_logged_bytes;
              if (uVar6 < 0xc351) {
                ppVar3->num_logged_bytes = uVar6;
                uVar17 = ppVar3->deallocation_log_index;
                if ((ulonglong)uVar17 < 999) {
                  ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 7;
                  ppVar3->deallocation_log_index = uVar17 + 1;
                  goto LAB_140d44a8b;
                }
              }
              pas_thread_local_cache_append_deallocation_slow
                        (ppVar3,(ulong64)param_2,
                         pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role
                        );
              goto LAB_140d44a8b;
            }
            goto LAB_140d44f19;
          }
          break;
        case '\x05':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x06':
          uVar6 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                            (ppVar24,(ulong64)param_2);
          uVar19 = (ulonglong)(ppVar24->owner).payload;
          ppVar15 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar19 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar19 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) {
LAB_140d45636:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar12,ppVar8,param_2,uVar6,param_3);
          }
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar6) {
              uVar6 = param_3;
            }
            memcpy(pvVar7,param_2,uVar6);
            bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar24,(ulong64)param_2);
            goto LAB_140d44a8b;
          }
          break;
        case '\a':
          uVar6 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                            (ppVar24,(ulong64)param_2);
          uVar19 = (ulonglong)(ppVar24->owner).payload;
          ppVar15 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar19 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar19 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) goto LAB_140d45636;
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar6) {
              uVar6 = param_3;
            }
            memcpy(pvVar7,param_2,uVar6);
            bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar24,(ulong64)param_2);
            goto LAB_140d44a8b;
          }
          break;
        default:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
    }
  }
LAB_140d44a89:
  pvVar7 = (void *)0x0;
LAB_140d44a8b:
  if ((local_48 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  return pvVar7;
}

// bmalloc_iso_reallocate_array_by_size @ 140d456d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_iso_reallocate_array_by_size(pas_heap_ref *param_1,void *param_2,ulong64 param_3)

{
  uchar uVar1;
  char cVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  pas_heap *ppVar8;
  ulong64 uVar9;
  pas_segregated_view_opaque *ppVar10;
  PSRWLOCK pRVar11;
  pas_heap *ppVar12;
  pas_segregated_partial_view *ppVar13;
  uint uVar14;
  pas_heap *ppVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  pas_fast_megapage_kind pVar20;
  ulong64 *puVar21;
  ulonglong uVar22;
  pas_segregated_page *ppVar23;
  pas_bitfit_page *ppVar24;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  ppVar8 = param_1->heap;
  if (ppVar8 == (pas_heap *)0x0) {
    ppVar8 = pas_ensure_heap_slow
                       (param_1,pas_normal_heap_ref_kind,&bmalloc_heap_config,
                        &bmalloc_typed_runtime_config.base);
  }
  if (param_2 == (void *)0x0) {
    pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
    return pvVar7;
  }
  uVar17 = (uint)((ulonglong)param_2 >> 0x18);
  if (param_3 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar3 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
      uVar6 = (ulonglong)param_2 >> 0x18;
      if (((ulonglong)param_2 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar17 & 0x1f) & 1) == 0
         )) {
        uVar19 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
        pVar20 = pas_not_a_fast_megapage_kind;
        if ((uVar6 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar20 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar6 ||
            (pVar20 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar19 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar19 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar20 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar3,(ulong64)param_2,pas_deallocate_mode,pVar20);
          goto LAB_140d458f9;
        }
      }
      uVar17 = ppVar3->deallocation_log_index;
      if ((ulonglong)uVar17 < 999) {
        ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 5;
        ppVar3->deallocation_log_index = uVar17 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar3,(ulong64)param_2,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
    }
  }
  else {
    uVar6 = (ulonglong)param_2 >> 0x18;
    if (((ulonglong)param_2 >> 0x2b == 0) &&
       ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar17 & 0x1f) & 1) != 0))
    {
switchD_140d459c5_caseD_1:
      uVar6 = *(ulonglong *)(((ulonglong)param_2 & 0xffffffffffffc000) + 0x20) & 0xfffffffffffffff8;
      uVar19 = (ulonglong)((uint)*(byte *)(uVar6 + 10) * 0x80000 + (uint)*(ushort *)(uVar6 + 8) * 8)
      ;
      uVar6 = (ulonglong)(*(uint *)(uVar19 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
      ppVar12 = *(pas_heap **)(uVar19 + 0x18 + pas_compact_heap_reservation_base);
      ppVar15 = (pas_heap *)0x0;
      if (((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
        ppVar15 = ppVar12;
      }
      if (ppVar15 != ppVar8) {
                    /* WARNING: Subroutine does not return */
        pas_reallocation_did_fail
                  ("Attempting to teleport heaps",ppVar15,ppVar8,param_2,uVar6,param_3);
      }
      pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
      if (pvVar7 != (void *)0x0) {
        if (param_3 < uVar6) {
          uVar6 = param_3;
        }
        memcpy(pvVar7,param_2,uVar6);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        ppVar3 = *(pas_thread_local_cache **)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9c08);
        if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
          uVar17 = ppVar3->deallocation_log_index;
          if ((ulonglong)uVar17 < 999) {
            ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 5;
            ppVar3->deallocation_log_index = uVar17 + 1;
          }
          else {
            pas_thread_local_cache_append_deallocation_slow
                      (ppVar3,(ulong64)param_2,
                       pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
          }
        }
        else {
          pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        }
        goto LAB_140d458fb;
      }
    }
    else {
      uVar19 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
      uVar17 = (uint)param_2;
      if (((bmalloc_megapage_table.instance)->index_begin <= uVar6) &&
         (uVar6 < (bmalloc_megapage_table.instance)->index_end)) {
        switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                        (uVar19 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar19 * '\x02' & 0x1fU) & 3)
        {
        case 0:
          goto switchD_140d459c5_caseD_0;
        case 1:
          goto switchD_140d459c5_caseD_1;
        case 2:
          ppVar23 = (pas_segregated_page *)((ulonglong)param_2 & 0xffffffffffffc000);
          uVar1 = (ppVar23->base).page_kind;
          if (uVar1 == '\x05') {
            uVar6 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                              ((pas_bitfit_page *)ppVar23,(ulong64)param_2);
            ppVar15 = *(pas_heap **)
                       ((ulonglong)
                        ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 +
                                        (ulonglong)ppVar23->object_size * 8) * 0x80000 +
                        (uint)*(ushort *)
                               (pas_compact_heap_reservation_base + 8 +
                               (ulonglong)ppVar23->object_size * 8) * 8) + 0x30 +
                       pas_compact_heap_reservation_base);
            ppVar12 = (pas_heap *)0x0;
            if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
              ppVar12 = ppVar15;
            }
            if (ppVar12 != ppVar8) goto LAB_140d464a6;
            pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
            if (pvVar7 != (void *)0x0) {
              if (param_3 < uVar6) {
                uVar6 = param_3;
              }
              memcpy(pvVar7,param_2,uVar6);
              bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                        ((pas_bitfit_page *)ppVar23,(ulong64)param_2);
              goto LAB_140d458fb;
            }
            goto LAB_140d458f9;
          }
          if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (((uint)ppVar23->owner & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar19 = (ulonglong)((uint)((ulonglong)param_2 >> 8) & 0x3f);
          uVar6 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar23->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
          lVar16 = pas_compact_heap_reservation_base + uVar6 * 8;
          if (uVar6 == 0) {
            lVar16 = 0;
          }
          ppVar12 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar16 + 0xb) * 8);
          if (*(uint3 *)(lVar16 + 0xb) == 0) {
            ppVar12 = (pas_heap *)0x0;
          }
          uVar6 = (ulonglong)((ppVar12->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar12 = *(pas_heap **)&(ppVar12->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = (pas_heap *)0x0;
          }
          if (ppVar12 != ppVar8) goto LAB_140d464a6;
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 == (void *)0x0) goto LAB_140d458f9;
          if (param_3 < uVar6) {
            uVar6 = param_3;
          }
          memcpy(pvVar7,param_2,uVar6);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (1 < *(ulonglong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9c08)) {
            if (ppVar23->lock_ptr == (pas_lock *)0x0) {
              pRVar11 = (PSRWLOCK)0x0;
            }
            else {
              pRVar11 = (PSRWLOCK)
                        pas_segregated_page_switch_lock_slow
                                  (ppVar23,(pas_lock *)0x0,ppVar23->lock_ptr);
            }
            uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 7) & 0x7c);
            uVar17 = *(uint *)((longlong)ppVar23->alloc_bits + uVar6) & ~(1 << (uVar17 >> 4 & 0x1f))
            ;
            *(uint *)((longlong)ppVar23->alloc_bits + uVar6) = uVar17;
            if (((uint)ppVar23->owner & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar23->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
            ppVar13 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base)
            ;
            if (uVar6 == 0) {
              ppVar13 = (pas_segregated_partial_view *)0x0;
            }
            if (!ppVar13->eligibility_has_been_noted) {
              pas_segregated_partial_view_note_eligibility(ppVar13,ppVar23);
            }
            if (uVar17 == 0) {
              uVar9 = (ppVar23->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar9 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (ppVar23,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (ppVar23->emptiness).num_non_empty_words_or_live_bytes = uVar9;
              }
            }
            if (pRVar11 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(pRVar11);
            }
            goto LAB_140d458fb;
          }
          break;
        case 3:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
LAB_140d45d89:
        pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        goto LAB_140d458fb;
      }
switchD_140d459c5_caseD_0:
      uVar6 = (ulonglong)param_2 & 0xfffffffffffe0000;
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d45a58:
        if (bmalloc_marge_page_header_table.hashtable.table !=
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
          uVar18 = (uint)((ulonglong)param_2 >> 0x1a) & 0xfffffff ^
                   (uint)((ulonglong)param_2 >> 0x16);
          uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
          uVar18 = uVar18 >> 0xb ^ uVar18;
          uVar19 = (ulonglong)
                   ((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar18);
          uVar9 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
          while (uVar9 != ((ulonglong)param_2 & 0xffffffffffc00000)) {
            uVar18 = uVar18 + 1;
            if (uVar9 == 0xffffffffffffffff) goto LAB_140d45dff;
            uVar19 = (ulonglong)
                     (uVar18 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
            uVar9 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
          }
          ppVar24 = (pas_bitfit_page *)
                    (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].high;
          if (ppVar24 != (pas_bitfit_page *)0x0) goto LAB_140d45af5;
        }
LAB_140d45dff:
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pas_large_map_find(&local_60,(ulong64)param_2);
        if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Source object not allocated",(void *)0x0,ppVar8,param_2,0,param_3);
        }
        if ((void *)local_60.begin != param_2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar6 = local_60.end - (longlong)param_2;
        if (local_60.end < param_2 || uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        puVar21 = &local_60.heap[-3].free_heap.num_mapped_bytes;
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (ppVar8 != (pas_heap *)puVar21) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Attempting to teleport heaps",puVar21,ppVar8,param_2,uVar6,param_3);
        }
        pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
        if (pvVar7 != (void *)0x0) {
          if (param_3 < uVar6) {
            uVar6 = param_3;
          }
          memcpy(pvVar7,param_2,uVar6);
          pas_deallocate_known_large(param_2,&bmalloc_heap_config);
          goto LAB_140d458fb;
        }
      }
      else {
        uVar18 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_2 >> 0x11)
        ;
        uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
        uVar18 = uVar18 >> 0xb ^ uVar18;
        uVar19 = (ulonglong)
                 ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar18);
        uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
        while (uVar9 != uVar6) {
          uVar18 = uVar18 + 1;
          if (uVar9 == 0xffffffffffffffff) goto LAB_140d45a58;
          uVar19 = (ulonglong)
                   (uVar18 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
          uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
        }
        ppVar24 = (pas_bitfit_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
        if (ppVar24 == (pas_bitfit_page *)0x0) goto LAB_140d45a58;
LAB_140d45af5:
        switch((ppVar24->base).page_kind) {
        case '\x01':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x02':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x03':
          if (((uint)ppVar24[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar18 = uVar17 & 0x1ffff;
          uVar22 = (ulonglong)(uVar18 >> 0xc);
          uVar19 = (ulonglong)
                   *(uint *)((ppVar24[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
          lVar16 = pas_compact_heap_reservation_base + uVar19 * 8;
          if (uVar19 == 0) {
            lVar16 = 0;
          }
          ppVar12 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar16 + 0xb) * 8);
          if (*(uint3 *)(lVar16 + 0xb) == 0) {
            ppVar12 = (pas_heap *)0x0;
          }
          uVar19 = (ulonglong)((ppVar12->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar12 = *(pas_heap **)&(ppVar12->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = (pas_heap *)0x0;
          }
          if (ppVar12 != ppVar8) {
LAB_140d46507:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar12,ppVar8,param_2,uVar19,param_3);
          }
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 == (void *)0x0) break;
          if (param_3 < uVar19) {
            uVar19 = param_3;
          }
          memcpy(pvVar7,param_2,uVar19);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (*(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08) < 2) goto LAB_140d45d89;
          if (bmalloc_medium_page_header_table.hashtable.table ==
              (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
            ppVar23 = (pas_segregated_page *)0x0;
          }
          else {
            uVar14 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                     (uint)((ulonglong)param_2 >> 0x11);
            uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
            uVar14 = uVar14 >> 0xb ^ uVar14;
            uVar19 = (ulonglong)
                     ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14);
            uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
            if (uVar9 != uVar6) {
              ppVar23 = (pas_segregated_page *)0x0;
              do {
                uVar14 = uVar14 + 1;
                if (uVar9 == 0xffffffffffffffff) goto LAB_140d462bf;
                uVar19 = (ulonglong)
                         (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              } while (uVar9 != uVar6);
            }
            ppVar23 = (pas_segregated_page *)
                      (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
          }
LAB_140d462bf:
          if (ppVar23->lock_ptr == (pas_lock *)0x0) {
            pRVar11 = (PSRWLOCK)0x0;
          }
          else {
            pRVar11 = (PSRWLOCK)
                      pas_segregated_page_switch_lock_slow
                                (ppVar23,(pas_lock *)0x0,ppVar23->lock_ptr);
          }
          uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 0xc) & 0x1c);
          uVar17 = *(uint *)((longlong)ppVar23->alloc_bits + uVar6) & ~(1 << (uVar17 >> 9 & 0x1f));
          *(uint *)((longlong)ppVar23->alloc_bits + uVar6) = uVar17;
          ppVar10 = ppVar23->owner;
          if (((uint)ppVar10 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar6 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar10 & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
          ppVar13 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base);
          if (uVar6 == 0) {
            ppVar13 = (pas_segregated_partial_view *)0x0;
          }
          if (!ppVar13->eligibility_has_been_noted) {
            pas_segregated_partial_view_note_eligibility(ppVar13,ppVar23);
            ppVar10 = ppVar23->owner;
          }
          if (((ulonglong)ppVar10 & 6) == 0) {
            uVar14 = ppVar23->object_size;
          }
          else {
            if (((uint)ppVar10 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar10 & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
            lVar16 = pas_compact_heap_reservation_base + uVar6 * 8;
            if (uVar6 == 0) {
              lVar16 = 0;
            }
            uVar14 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar16 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar16 + 0xb) * 8) + 0x20 +
                              pas_compact_heap_reservation_base) & 0x7ffffff;
          }
          if (uVar14 == 0) {
LAB_140d4639d:
            bVar5 = false;
          }
          else {
            if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = ((ulonglong)uVar14 + (ulonglong)uVar18) - 1 >> 0xc;
            if (uVar6 < uVar22) goto LAB_140d4639d;
            bVar5 = false;
            do {
              cVar2 = *(char *)((longlong)ppVar23[1].alloc_bits + (uVar22 - 0x10));
              if (cVar2 == '\0') {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              if (cVar2 == -1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              *(char *)((longlong)ppVar23[1].alloc_bits + (uVar22 - 0x10)) = cVar2 + -1;
              bVar5 = (bool)(bVar5 | (char)(cVar2 + -1) == '\0');
              uVar22 = uVar22 + 1;
            } while (uVar6 + 1 != uVar22);
          }
          if (pas_segregated_page_deallocate_should_verify_granules == true) {
            pas_segregated_page_verify_granules(ppVar23);
          }
          if (bVar5) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar23,pas_note_emptiness_keep_num_non_empty_words);
          }
          if (uVar17 == 0) {
            uVar9 = (ppVar23->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar9 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (ppVar23,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (ppVar23->emptiness).num_non_empty_words_or_live_bytes = uVar9;
            }
          }
          if (pRVar11 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar11);
          }
          goto LAB_140d458fb;
        case '\x04':
          uVar19 = ppVar24[1].use_epoch & 0xfffffffffffffff8;
          uVar22 = (ulonglong)
                   ((uint)*(byte *)(uVar19 + 10) * 0x80000 + (uint)*(ushort *)(uVar19 + 8) * 8);
          uVar19 = (ulonglong)
                   (*(uint *)(uVar22 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
          ppVar15 = *(pas_heap **)(uVar22 + 0x18 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) goto LAB_140d46507;
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar19) {
              uVar19 = param_3;
            }
            memcpy(pvVar7,param_2,uVar19);
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            ppVar3 = *(pas_thread_local_cache **)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08);
            if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
              uVar17 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                       (uint)((ulonglong)param_2 >> 0x11);
              uVar17 = uVar17 * 0x20 + (uVar17 ^ 0xdeadbeef);
              uVar17 = uVar17 >> 0xb ^ uVar17;
              uVar19 = (ulonglong)
                       ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar17);
              uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              while (uVar9 != uVar6) {
                uVar17 = uVar17 + 1;
                uVar19 = (ulonglong)
                         (uVar17 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              }
              uVar6 = (ulonglong)
                      *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].
                                high + 4) + ppVar3->num_logged_bytes;
              if (uVar6 < 0xc351) {
                ppVar3->num_logged_bytes = uVar6;
                uVar17 = ppVar3->deallocation_log_index;
                if ((ulonglong)uVar17 < 999) {
                  ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 7;
                  ppVar3->deallocation_log_index = uVar17 + 1;
                  goto LAB_140d458fb;
                }
              }
              pas_thread_local_cache_append_deallocation_slow
                        (ppVar3,(ulong64)param_2,
                         pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role
                        );
              goto LAB_140d458fb;
            }
            goto LAB_140d45d89;
          }
          break;
        case '\x05':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x06':
          uVar6 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                            (ppVar24,(ulong64)param_2);
          uVar19 = (ulonglong)(ppVar24->owner).payload;
          ppVar15 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar19 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar19 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) {
LAB_140d464a6:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar12,ppVar8,param_2,uVar6,param_3);
          }
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar6) {
              uVar6 = param_3;
            }
            memcpy(pvVar7,param_2,uVar6);
            bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar24,(ulong64)param_2);
            goto LAB_140d458fb;
          }
          break;
        case '\a':
          uVar6 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                            (ppVar24,(ulong64)param_2);
          uVar19 = (ulonglong)(ppVar24->owner).payload;
          ppVar15 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar19 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar19 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) goto LAB_140d464a6;
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar6) {
              uVar6 = param_3;
            }
            memcpy(pvVar7,param_2,uVar6);
            bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar24,(ulong64)param_2);
            goto LAB_140d458fb;
          }
          break;
        default:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
    }
  }
LAB_140d458f9:
  pvVar7 = (void *)0x0;
LAB_140d458fb:
  if ((local_48 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  return pvVar7;
}

// bmalloc_try_iso_allocate_array_by_count @ 140d46540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_iso_allocate_array_by_count(pas_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  ulong64 uVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2;
  auVar6 = auVar6 * ZEXT416(*(uint *)param_1->type);
  uVar7 = auVar6._0_8_;
  if (auVar6._8_8_ != 0) {
    if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)0x0;
    }
    goto LAB_140d4669c;
  }
  ppVar3 = param_1->heap;
  if (ppVar3 != (pas_heap *)0x0) {
    uVar9 = uVar7 + 0xf >> 4;
    uVar11 = 0;
    if ((uVar9 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, uVar11 = 0,
       puVar4 != (uint *)0x0)) {
      uVar11 = puVar4[uVar9];
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar9 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar9) && (uVar11 < *(uint *)(uVar9 + 0x1f74))) {
      uVar15 = (ulonglong)uVar11;
      lVar1 = uVar9 + uVar15 * 8;
      *(undefined1 *)(uVar9 + 0x1f80 + uVar15 * 8) = 1;
      uVar11 = *(uint *)(uVar9 + 0x1f98 + uVar15 * 8);
      if ((ulonglong)uVar11 == 0) {
        lVar10 = *(longlong *)(lVar1 + 0x1fa0);
        uVar12 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar12 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar11 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar14 = (ulonglong)uVar2;
            if (uVar2 < uVar11) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar14 * 8) = 0;
              lVar13 = 0;
              do {
                if ((uVar14 - (uVar11 - 1)) + lVar13 == 0) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar11;
                  goto LAB_140d4670c;
                }
                lVar10 = lVar10 + 0x400;
                uVar12 = *(ulonglong *)(uVar15 * 8 + uVar14 * 8 + uVar9 + 0x1fc8 + lVar13 * 8);
                lVar13 = lVar13 + 1;
              } while (uVar12 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar13;
              *(longlong *)(lVar1 + 0x1fa0) = lVar10;
              goto LAB_140d46675;
            }
          }
LAB_140d4670c:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d465f1;
        }
LAB_140d46675:
        uVar9 = 0;
        for (uVar15 = uVar12; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
          uVar9 = uVar9 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar12 & ~(1L << (uVar9 & 0x3f));
        pvVar8 = (void *)((ulonglong)(uint)((int)uVar9 << 4) + lVar10);
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar11 - *(int *)(lVar1 + 0x1f9c);
        pvVar8 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar11);
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
        return pvVar8;
      }
      goto LAB_140d4669c;
    }
  }
LAB_140d465f1:
  bmalloc_try_iso_allocate_array_impl_casual_case(&local_30,param_1,uVar7,1);
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return (void *)local_30.begin;
  }
LAB_140d4669c:
  pcVar5 = (code *)swi(3);
  pvVar8 = (void *)(*pcVar5)();
  return pvVar8;
}

// bmalloc_iso_allocate_array_by_count @ 140d46720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_iso_allocate_array_by_count(pas_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  ulong64 uVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2;
  auVar6 = auVar6 * ZEXT416(*(uint *)param_1->type);
  uVar7 = auVar6._0_8_;
  if (auVar6._8_8_ != 0) {
    if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)0x0;
    }
    goto LAB_140d4687c;
  }
  ppVar3 = param_1->heap;
  if (ppVar3 != (pas_heap *)0x0) {
    uVar9 = uVar7 + 0xf >> 4;
    uVar11 = 0;
    if ((uVar9 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, uVar11 = 0,
       puVar4 != (uint *)0x0)) {
      uVar11 = puVar4[uVar9];
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar9 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar9) && (uVar11 < *(uint *)(uVar9 + 0x1f74))) {
      uVar15 = (ulonglong)uVar11;
      lVar1 = uVar9 + uVar15 * 8;
      *(undefined1 *)(uVar9 + 0x1f80 + uVar15 * 8) = 1;
      uVar11 = *(uint *)(uVar9 + 0x1f98 + uVar15 * 8);
      if ((ulonglong)uVar11 == 0) {
        lVar10 = *(longlong *)(lVar1 + 0x1fa0);
        uVar12 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar12 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar11 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar14 = (ulonglong)uVar2;
            if (uVar2 < uVar11) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar14 * 8) = 0;
              lVar13 = 0;
              do {
                if ((uVar11 - 1) - uVar14 == lVar13) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar11;
                  goto LAB_140d468e6;
                }
                lVar10 = lVar10 + 0x400;
                uVar12 = *(ulonglong *)(uVar15 * 8 + uVar14 * 8 + uVar9 + 0x1fc8 + lVar13 * 8);
                lVar13 = lVar13 + 1;
              } while (uVar12 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar13;
              *(longlong *)(lVar1 + 0x1fa0) = lVar10;
              goto LAB_140d46855;
            }
          }
LAB_140d468e6:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d467d1;
        }
LAB_140d46855:
        uVar9 = 0;
        for (uVar15 = uVar12; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
          uVar9 = uVar9 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar12 & ~(1L << (uVar9 & 0x3f));
        pvVar8 = (void *)((ulonglong)(uint)((int)uVar9 << 4) + lVar10);
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar11 - *(int *)(lVar1 + 0x1f9c);
        pvVar8 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar11);
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
        return pvVar8;
      }
      goto LAB_140d4687c;
    }
  }
LAB_140d467d1:
  bmalloc_iso_allocate_array_impl_casual_case(&local_30,param_1,uVar7,1);
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return (void *)local_30.begin;
  }
LAB_140d4687c:
  pcVar5 = (code *)swi(3);
  pvVar8 = (void *)(*pcVar5)();
  return pvVar8;
}

// bmalloc_try_iso_allocate_array_by_count_with_alignment @ 140d46900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_iso_allocate_array_by_count_with_alignment
          (pas_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  pas_heap *ppVar4;
  uint *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_58 [32];
  pas_allocation_result local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2;
  auVar7 = auVar7 * ZEXT416(*(uint *)param_1->type);
  uVar8 = auVar7._0_8_;
  if (auVar7._8_8_ != 0) {
    if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)0x0;
    }
    goto LAB_140d46b00;
  }
  ppVar4 = param_1->heap;
  if ((ppVar4 != (pas_heap *)0x0) &&
     (uVar11 = param_3 - (param_3 >> 1 & 0x5555555555555555),
     uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
     (char)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) == '\x01')) {
    uVar11 = uVar8;
    if ((param_3 != 1) && (uVar11 = param_3, param_3 <= uVar8)) {
      uVar11 = -param_3 & (param_3 + uVar8) - 1;
    }
    uVar11 = uVar11 + 0xf >> 4;
    uVar13 = 0;
    if ((uVar11 < (ppVar4->segregated_heap).small_index_upper_bound) &&
       (puVar5 = (ppVar4->segregated_heap).index_to_small_allocator_index, uVar13 = 0,
       puVar5 != (uint *)0x0)) {
      uVar13 = puVar5[uVar11];
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar11 = *(ulonglong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((1 < uVar11) && (uVar13 < *(uint *)(uVar11 + 0x1f74))) {
      lVar1 = uVar11 + (ulonglong)uVar13 * 8;
      puVar12 = (undefined1 *)(lVar1 + 0x1f80);
      if ((param_3 == 1) || (param_3 <= (ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)))) {
        *puVar12 = 1;
        uVar2 = *(uint *)(lVar1 + 0x1f98);
        if ((ulonglong)uVar2 == 0) {
          lVar10 = *(longlong *)(lVar1 + 0x1fa0);
          uVar14 = *(ulonglong *)(lVar1 + 0x1fb0);
          if (uVar14 == 0) {
            if (*(char *)(lVar1 + 0x1f88) == '\x06') {
              uVar2 = *(uint *)(lVar1 + 0x1fac);
              uVar3 = *(uint *)(lVar1 + 0x1fa8);
              uVar16 = (ulonglong)uVar3;
              if (uVar3 < uVar2) {
                *(undefined8 *)(lVar1 + 0x1fc0 + uVar16 * 8) = 0;
                lVar15 = 0;
                do {
                  if ((uVar16 - (uVar2 - 1)) + lVar15 == 0) {
                    *(uint *)(lVar1 + 0x1fa8) = uVar2;
                    goto LAB_140d46b70;
                  }
                  lVar10 = lVar10 + 0x400;
                  uVar14 = *(ulonglong *)
                            ((ulonglong)uVar13 * 8 + uVar16 * 8 + uVar11 + 0x1fc8 + lVar15 * 8);
                  lVar15 = lVar15 + 1;
                } while (uVar14 == 0);
                *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar15;
                *(longlong *)(lVar1 + 0x1fa0) = lVar10;
                goto LAB_140d46ad5;
              }
            }
LAB_140d46b70:
            *puVar12 = 0;
            goto LAB_140d46a41;
          }
LAB_140d46ad5:
          uVar8 = 0;
          for (uVar11 = uVar14; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
            uVar8 = uVar8 + 1;
          }
          *(ulonglong *)(lVar1 + 0x1fb0) = uVar14 & ~(1L << (uVar8 & 0x3f));
          pvVar9 = (void *)((ulonglong)(uint)((int)uVar8 << 4) + lVar10);
        }
        else {
          *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
          pvVar9 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
        }
        *puVar12 = 0;
        if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
          return pvVar9;
        }
        goto LAB_140d46b00;
      }
    }
  }
LAB_140d46a41:
  bmalloc_try_iso_allocate_array_impl_casual_case(&local_38,param_1,uVar8,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return (void *)local_38.begin;
  }
LAB_140d46b00:
  pcVar6 = (code *)swi(3);
  pvVar9 = (void *)(*pcVar6)();
  return pvVar9;
}

// bmalloc_iso_allocate_array_by_count_with_alignment @ 140d46b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_iso_allocate_array_by_count_with_alignment
          (pas_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  pas_heap *ppVar4;
  uint *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_58 [32];
  pas_allocation_result local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2;
  auVar7 = auVar7 * ZEXT416(*(uint *)param_1->type);
  uVar8 = auVar7._0_8_;
  if (auVar7._8_8_ != 0) {
    if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)0x0;
    }
    goto LAB_140d46d80;
  }
  ppVar4 = param_1->heap;
  if ((ppVar4 != (pas_heap *)0x0) &&
     (uVar11 = param_3 - (param_3 >> 1 & 0x5555555555555555),
     uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
     (char)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) == '\x01')) {
    uVar11 = uVar8;
    if ((param_3 != 1) && (uVar11 = param_3, param_3 <= uVar8)) {
      uVar11 = -param_3 & (param_3 + uVar8) - 1;
    }
    uVar11 = uVar11 + 0xf >> 4;
    uVar13 = 0;
    if ((uVar11 < (ppVar4->segregated_heap).small_index_upper_bound) &&
       (puVar5 = (ppVar4->segregated_heap).index_to_small_allocator_index, uVar13 = 0,
       puVar5 != (uint *)0x0)) {
      uVar13 = puVar5[uVar11];
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar11 = *(ulonglong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((1 < uVar11) && (uVar13 < *(uint *)(uVar11 + 0x1f74))) {
      lVar1 = uVar11 + (ulonglong)uVar13 * 8;
      puVar12 = (undefined1 *)(lVar1 + 0x1f80);
      if ((param_3 == 1) || (param_3 <= (ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)))) {
        *puVar12 = 1;
        uVar2 = *(uint *)(lVar1 + 0x1f98);
        if ((ulonglong)uVar2 == 0) {
          lVar10 = *(longlong *)(lVar1 + 0x1fa0);
          uVar14 = *(ulonglong *)(lVar1 + 0x1fb0);
          if (uVar14 == 0) {
            if (*(char *)(lVar1 + 0x1f88) == '\x06') {
              uVar2 = *(uint *)(lVar1 + 0x1fac);
              uVar3 = *(uint *)(lVar1 + 0x1fa8);
              uVar16 = (ulonglong)uVar3;
              if (uVar3 < uVar2) {
                *(undefined8 *)(lVar1 + 0x1fc0 + uVar16 * 8) = 0;
                lVar15 = 0;
                do {
                  if ((uVar2 - 1) - uVar16 == lVar15) {
                    *(uint *)(lVar1 + 0x1fa8) = uVar2;
                    goto LAB_140d46dea;
                  }
                  lVar10 = lVar10 + 0x400;
                  uVar14 = *(ulonglong *)
                            ((ulonglong)uVar13 * 8 + uVar16 * 8 + uVar11 + 0x1fc8 + lVar15 * 8);
                  lVar15 = lVar15 + 1;
                } while (uVar14 == 0);
                *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar15;
                *(longlong *)(lVar1 + 0x1fa0) = lVar10;
                goto LAB_140d46d55;
              }
            }
LAB_140d46dea:
            *puVar12 = 0;
            goto LAB_140d46cc1;
          }
LAB_140d46d55:
          uVar8 = 0;
          for (uVar11 = uVar14; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
            uVar8 = uVar8 + 1;
          }
          *(ulonglong *)(lVar1 + 0x1fb0) = uVar14 & ~(1L << (uVar8 & 0x3f));
          pvVar9 = (void *)((ulonglong)(uint)((int)uVar8 << 4) + lVar10);
        }
        else {
          *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
          pvVar9 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
        }
        *puVar12 = 0;
        if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
          return pvVar9;
        }
        goto LAB_140d46d80;
      }
    }
  }
LAB_140d46cc1:
  bmalloc_iso_allocate_array_impl_casual_case(&local_38,param_1,uVar8,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return (void *)local_38.begin;
  }
LAB_140d46d80:
  pcVar6 = (code *)swi(3);
  pvVar9 = (void *)(*pcVar6)();
  return pvVar9;
}

// bmalloc_try_iso_reallocate_array_by_count @ 140d46e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_try_iso_reallocate_array_by_count(pas_heap_ref *param_1,void *param_2,ulong64 param_3)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  pas_heap *ppVar8;
  pas_segregated_view_opaque *ppVar9;
  PSRWLOCK pRVar10;
  pas_heap *ppVar11;
  pas_segregated_partial_view *ppVar12;
  pas_thread_local_cache *ppVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  pas_heap *ppVar17;
  longlong lVar18;
  pas_segregated_page *ppVar19;
  uint uVar20;
  ulong64 uVar21;
  pas_segregated_page_config_kind_and_role pVar22;
  pas_fast_megapage_kind pVar23;
  ulonglong uVar24;
  ulong64 *puVar25;
  ulonglong uVar26;
  pas_bitfit_page *ppVar27;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar4 = auVar4 * ZEXT416(*(uint *)param_1->type);
  uVar6 = auVar4._0_8_;
  if (auVar4._8_8_ == 0) {
    ppVar8 = param_1->heap;
    if (ppVar8 == (pas_heap *)0x0) {
      ppVar8 = pas_ensure_heap_slow
                         (param_1,pas_normal_heap_ref_kind,&bmalloc_heap_config,
                          &bmalloc_typed_runtime_config.base);
    }
    if (param_2 == (void *)0x0) {
      pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
      return pvVar7;
    }
    uVar20 = (uint)((ulonglong)param_2 >> 0x18);
    if (uVar6 == 0) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      ppVar13 = *(pas_thread_local_cache **)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9c08);
      if ((pas_thread_local_cache *)&DAT_00000001 < ppVar13) {
        uVar6 = (ulonglong)param_2 >> 0x18;
        if (((ulonglong)param_2 >> 0x2b != 0) ||
           ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar20 & 0x1f) & 1) ==
            0)) {
          uVar16 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
          pVar23 = pas_not_a_fast_megapage_kind;
          if ((uVar6 < (bmalloc_megapage_table.instance)->index_begin) ||
             ((pVar23 = pas_not_a_fast_megapage_kind,
              (bmalloc_megapage_table.instance)->index_end <= uVar6 ||
              (pVar23 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                                 (uVar16 >> 2 & 0x1ffffffffffffffc)) >>
                        ((char)uVar16 * '\x02' & 0x1fU) &
                        (pas_small_other_fast_megapage_kind|
                        pas_small_exclusive_segregated_fast_megapage_kind),
              pVar23 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
            bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                      (ppVar13,(ulong64)param_2,pas_deallocate_mode,pVar23);
            goto LAB_140d46e2f;
          }
        }
        uVar20 = ppVar13->deallocation_log_index;
        if ((ulonglong)uVar20 < 999) {
          ppVar13->deallocation_log[uVar20] = (longlong)param_2 << 6 | 5;
          ppVar13->deallocation_log_index = uVar20 + 1;
        }
        else {
          pas_thread_local_cache_append_deallocation_slow
                    (ppVar13,(ulong64)param_2,
                     pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
        }
      }
      else {
        pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
      }
    }
    else {
      uVar16 = (ulonglong)param_2 >> 0x18;
      if (((ulonglong)param_2 >> 0x2b == 0) &&
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar20 & 0x1f) & 1) != 0
         )) {
switchD_140d4711d_caseD_1:
        uVar16 = *(ulonglong *)(((ulonglong)param_2 & 0xffffffffffffc000) + 0x20) &
                 0xfffffffffffffff8;
        uVar24 = (ulonglong)
                 ((uint)*(byte *)(uVar16 + 10) * 0x80000 + (uint)*(ushort *)(uVar16 + 8) * 8);
        uVar16 = (ulonglong)
                 (*(uint *)(uVar24 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
        ppVar11 = *(pas_heap **)(uVar24 + 0x18 + pas_compact_heap_reservation_base);
        ppVar17 = (pas_heap *)0x0;
        if (((ppVar11->segregated_heap).runtime_config)->is_part_of_heap) {
          ppVar17 = ppVar11;
        }
        if (ppVar17 != ppVar8) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Attempting to teleport heaps",ppVar17,ppVar8,param_2,uVar16,uVar6);
        }
        pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
        if (pvVar7 == (void *)0x0) goto LAB_140d46e2f;
        if (uVar6 < uVar16) {
          uVar16 = uVar6;
        }
        memcpy(pvVar7,param_2,uVar16);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        ppVar13 = *(pas_thread_local_cache **)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9c08);
        if ((pas_thread_local_cache *)&DAT_00000001 < ppVar13) {
          uVar6 = (ulonglong)ppVar13->deallocation_log_index;
          if (uVar6 < 999) {
            uVar21 = (longlong)param_2 << 6 | 5;
LAB_140d46fff:
            ppVar13->deallocation_log[uVar6] = uVar21;
            ppVar13->deallocation_log_index = (int)uVar6 + 1;
            goto LAB_140d46e31;
          }
          pVar22 = pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role;
LAB_140d47702:
          pas_thread_local_cache_append_deallocation_slow(ppVar13,(ulong64)param_2,pVar22);
          goto LAB_140d46e31;
        }
LAB_140d46f67:
        pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        goto LAB_140d46e31;
      }
      uVar24 = uVar16 - (bmalloc_megapage_table.instance)->index_begin;
      uVar20 = (uint)param_2;
      if (((bmalloc_megapage_table.instance)->index_begin <= uVar16) &&
         (uVar16 < (bmalloc_megapage_table.instance)->index_end)) {
        switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                        (uVar24 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar24 * '\x02' & 0x1fU) & 3)
        {
        case 1:
          goto switchD_140d4711d_caseD_1;
        case 2:
          ppVar19 = (pas_segregated_page *)((ulonglong)param_2 & 0xffffffffffffc000);
          uVar1 = (ppVar19->base).page_kind;
          if (uVar1 == '\x05') {
            uVar16 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                               ((pas_bitfit_page *)ppVar19,(ulong64)param_2);
            ppVar17 = *(pas_heap **)
                       ((ulonglong)
                        ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 +
                                        (ulonglong)ppVar19->object_size * 8) * 0x80000 +
                        (uint)*(ushort *)
                               (pas_compact_heap_reservation_base + 8 +
                               (ulonglong)ppVar19->object_size * 8) * 8) + 0x30 +
                       pas_compact_heap_reservation_base);
            ppVar11 = (pas_heap *)0x0;
            if (((ppVar17->segregated_heap).runtime_config)->is_part_of_heap) {
              ppVar11 = ppVar17;
            }
            if (ppVar11 != ppVar8) goto LAB_140d47bd4;
            pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
            if (pvVar7 != (void *)0x0) {
              if (uVar6 < uVar16) {
                uVar16 = uVar6;
              }
              memcpy(pvVar7,param_2,uVar16);
              bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                        ((pas_bitfit_page *)ppVar19,(ulong64)param_2);
              goto LAB_140d46e31;
            }
            goto LAB_140d46e2f;
          }
          if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (((uint)ppVar19->owner & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar24 = (ulonglong)((uint)((ulonglong)param_2 >> 8) & 0x3f);
          uVar16 = (ulonglong)
                   *(uint *)(((ulonglong)ppVar19->owner & 0xfffffffffffffff8) + 0x14 + uVar24 * 4);
          lVar18 = pas_compact_heap_reservation_base + uVar16 * 8;
          if (uVar16 == 0) {
            lVar18 = 0;
          }
          ppVar11 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar18 + 0xb) * 8);
          if (*(uint3 *)(lVar18 + 0xb) == 0) {
            ppVar11 = (pas_heap *)0x0;
          }
          uVar16 = (ulonglong)((ppVar11->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar11 = *(pas_heap **)&(ppVar11->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar11->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = (pas_heap *)0x0;
          }
          if (ppVar11 != ppVar8) goto LAB_140d47bd4;
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 == (void *)0x0) goto LAB_140d46e2f;
          if (uVar6 < uVar16) {
            uVar16 = uVar6;
          }
          memcpy(pvVar7,param_2,uVar16);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (1 < *(ulonglong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9c08)) {
            if (ppVar19->lock_ptr == (pas_lock *)0x0) {
              pRVar10 = (PSRWLOCK)0x0;
            }
            else {
              pRVar10 = (PSRWLOCK)
                        pas_segregated_page_switch_lock_slow
                                  (ppVar19,(pas_lock *)0x0,ppVar19->lock_ptr);
            }
            uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 7) & 0x7c);
            uVar20 = *(uint *)((longlong)ppVar19->alloc_bits + uVar6) & ~(1 << (uVar20 >> 4 & 0x1f))
            ;
            *(uint *)((longlong)ppVar19->alloc_bits + uVar6) = uVar20;
            if (((uint)ppVar19->owner & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar19->owner & 0xfffffffffffffff8) + 0x14 + uVar24 * 4);
            ppVar12 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base)
            ;
            if (uVar6 == 0) {
              ppVar12 = (pas_segregated_partial_view *)0x0;
            }
            if (!ppVar12->eligibility_has_been_noted) {
              pas_segregated_partial_view_note_eligibility(ppVar12,ppVar19);
            }
            if (uVar20 == 0) {
              uVar21 = (ppVar19->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar21 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (ppVar19,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (ppVar19->emptiness).num_non_empty_words_or_live_bytes = uVar21;
              }
            }
            if (pRVar10 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(pRVar10);
            }
            goto LAB_140d46e31;
          }
          goto LAB_140d46f67;
        case 3:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      uVar16 = (ulonglong)param_2 & 0xfffffffffffe0000;
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d471ae:
        if (bmalloc_marge_page_header_table.hashtable.table !=
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
          uVar14 = (uint)((ulonglong)param_2 >> 0x1a) & 0xfffffff ^
                   (uint)((ulonglong)param_2 >> 0x16);
          uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
          uVar14 = uVar14 >> 0xb ^ uVar14;
          uVar24 = (ulonglong)
                   ((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar14);
          uVar21 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar24].low;
          while (uVar21 != ((ulonglong)param_2 & 0xffffffffffc00000)) {
            uVar14 = uVar14 + 1;
            if (uVar21 == 0xffffffffffffffff) goto LAB_140d475c3;
            uVar24 = (ulonglong)
                     (uVar14 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
            uVar21 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar24].low;
          }
          ppVar27 = (pas_bitfit_page *)
                    (bmalloc_marge_page_header_table.hashtable.table)->array[uVar24].high;
          if (ppVar27 != (pas_bitfit_page *)0x0) goto LAB_140d47247;
        }
LAB_140d475c3:
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pas_large_map_find(&local_60,(ulong64)param_2);
        if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Source object not allocated",(void *)0x0,ppVar8,param_2,0,uVar6);
        }
        if ((void *)local_60.begin != param_2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar16 = local_60.end - (longlong)param_2;
        if (local_60.end < param_2 || uVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar25 = &local_60.heap[-3].free_heap.num_mapped_bytes;
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (ppVar8 != (pas_heap *)puVar25) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Attempting to teleport heaps",puVar25,ppVar8,param_2,uVar16,uVar6);
        }
        pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
        if (pvVar7 != (void *)0x0) {
          if (uVar6 < uVar16) {
            uVar16 = uVar6;
          }
          memcpy(pvVar7,param_2,uVar16);
          pas_deallocate_known_large(param_2,&bmalloc_heap_config);
          goto LAB_140d46e31;
        }
      }
      else {
        uVar14 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_2 >> 0x11)
        ;
        uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
        uVar14 = uVar14 >> 0xb ^ uVar14;
        uVar24 = (ulonglong)
                 ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14);
        uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar24].low;
        while (uVar21 != uVar16) {
          uVar14 = uVar14 + 1;
          if (uVar21 == 0xffffffffffffffff) goto LAB_140d471ae;
          uVar24 = (ulonglong)
                   (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
          uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar24].low;
        }
        ppVar27 = (pas_bitfit_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar24].high;
        if (ppVar27 == (pas_bitfit_page *)0x0) goto LAB_140d471ae;
LAB_140d47247:
        switch((ppVar27->base).page_kind) {
        case '\x01':
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        case '\x02':
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        case '\x03':
          if (((uint)ppVar27[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar14 = uVar20 & 0x1ffff;
          uVar26 = (ulonglong)(uVar14 >> 0xc);
          uVar24 = (ulonglong)
                   *(uint *)((ppVar27[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar26 * 4);
          lVar18 = pas_compact_heap_reservation_base + uVar24 * 8;
          if (uVar24 == 0) {
            lVar18 = 0;
          }
          ppVar11 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar18 + 0xb) * 8);
          if (*(uint3 *)(lVar18 + 0xb) == 0) {
            ppVar11 = (pas_heap *)0x0;
          }
          uVar24 = (ulonglong)((ppVar11->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar11 = *(pas_heap **)&(ppVar11->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar11->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = (pas_heap *)0x0;
          }
          if (ppVar11 != ppVar8) {
LAB_140d47c35:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar11,ppVar8,param_2,uVar24,uVar6);
          }
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 == (void *)0x0) break;
          if (uVar6 < uVar24) {
            uVar24 = uVar6;
          }
          memcpy(pvVar7,param_2,uVar24);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (*(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08) < 2) goto LAB_140d46f67;
          if (bmalloc_medium_page_header_table.hashtable.table ==
              (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
            ppVar19 = (pas_segregated_page *)0x0;
          }
          else {
            uVar15 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                     (uint)((ulonglong)param_2 >> 0x11);
            uVar15 = uVar15 * 0x20 + (uVar15 ^ 0xdeadbeef);
            uVar15 = uVar15 >> 0xb ^ uVar15;
            uVar6 = (ulonglong)
                    ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar15);
            uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].low;
            if (uVar21 != uVar16) {
              ppVar19 = (pas_segregated_page *)0x0;
              do {
                uVar15 = uVar15 + 1;
                if (uVar21 == 0xffffffffffffffff) goto LAB_140d479e6;
                uVar6 = (ulonglong)
                        (uVar15 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].low;
              } while (uVar21 != uVar16);
            }
            ppVar19 = (pas_segregated_page *)
                      (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].high;
          }
LAB_140d479e6:
          if (ppVar19->lock_ptr == (pas_lock *)0x0) {
            pRVar10 = (PSRWLOCK)0x0;
          }
          else {
            pRVar10 = (PSRWLOCK)
                      pas_segregated_page_switch_lock_slow
                                (ppVar19,(pas_lock *)0x0,ppVar19->lock_ptr);
          }
          uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 0xc) & 0x1c);
          uVar20 = *(uint *)((longlong)ppVar19->alloc_bits + uVar6) & ~(1 << (uVar20 >> 9 & 0x1f));
          *(uint *)((longlong)ppVar19->alloc_bits + uVar6) = uVar20;
          ppVar9 = ppVar19->owner;
          if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar6 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar26 * 4)
          ;
          ppVar12 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base);
          if (uVar6 == 0) {
            ppVar12 = (pas_segregated_partial_view *)0x0;
          }
          if (!ppVar12->eligibility_has_been_noted) {
            pas_segregated_partial_view_note_eligibility(ppVar12,ppVar19);
            ppVar9 = ppVar19->owner;
          }
          if (((ulonglong)ppVar9 & 6) == 0) {
            uVar15 = ppVar19->object_size;
          }
          else {
            if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar26 * 4);
            lVar18 = pas_compact_heap_reservation_base + uVar6 * 8;
            if (uVar6 == 0) {
              lVar18 = 0;
            }
            uVar15 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar18 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar18 + 0xb) * 8) + 0x20 +
                              pas_compact_heap_reservation_base) & 0x7ffffff;
          }
          if (uVar15 == 0) {
LAB_140d47ac4:
            bVar5 = false;
          }
          else {
            if (0x20000 < (ulonglong)uVar15 + (ulonglong)uVar14) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar6 = ((ulonglong)uVar15 + (ulonglong)uVar14) - 1 >> 0xc;
            if (uVar6 < uVar26) goto LAB_140d47ac4;
            bVar5 = false;
            do {
              cVar2 = *(char *)((longlong)ppVar19[1].alloc_bits + (uVar26 - 0x10));
              if (cVar2 == '\0') {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (cVar2 == -1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              *(char *)((longlong)ppVar19[1].alloc_bits + (uVar26 - 0x10)) = cVar2 + -1;
              bVar5 = (bool)(bVar5 | (char)(cVar2 + -1) == '\0');
              uVar26 = uVar26 + 1;
            } while (uVar6 + 1 != uVar26);
          }
          if (pas_segregated_page_deallocate_should_verify_granules == true) {
            pas_segregated_page_verify_granules(ppVar19);
          }
          if (bVar5) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar19,pas_note_emptiness_keep_num_non_empty_words);
          }
          if (uVar20 == 0) {
            uVar21 = (ppVar19->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar21 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (ppVar19,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (ppVar19->emptiness).num_non_empty_words_or_live_bytes = uVar21;
            }
          }
          if (pRVar10 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar10);
          }
          goto LAB_140d46e31;
        case '\x04':
          uVar24 = ppVar27[1].use_epoch & 0xfffffffffffffff8;
          uVar26 = (ulonglong)
                   ((uint)*(byte *)(uVar24 + 10) * 0x80000 + (uint)*(ushort *)(uVar24 + 8) * 8);
          uVar24 = (ulonglong)
                   (*(uint *)(uVar26 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
          ppVar17 = *(pas_heap **)(uVar26 + 0x18 + pas_compact_heap_reservation_base);
          ppVar11 = (pas_heap *)0x0;
          if (((ppVar17->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = ppVar17;
          }
          if (ppVar11 != ppVar8) goto LAB_140d47c35;
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 != (void *)0x0) {
            if (uVar6 < uVar24) {
              uVar24 = uVar6;
            }
            memcpy(pvVar7,param_2,uVar24);
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            ppVar13 = *(pas_thread_local_cache **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
            ;
            if ((pas_thread_local_cache *)&DAT_00000001 < ppVar13) {
              uVar20 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                       (uint)((ulonglong)param_2 >> 0x11);
              uVar20 = uVar20 * 0x20 + (uVar20 ^ 0xdeadbeef);
              uVar20 = uVar20 >> 0xb ^ uVar20;
              uVar6 = (ulonglong)
                      ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar20);
              uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].low;
              while (uVar21 != uVar16) {
                uVar20 = uVar20 + 1;
                uVar6 = (ulonglong)
                        (uVar20 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].low;
              }
              uVar6 = (ulonglong)
                      *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].
                                high + 4) + ppVar13->num_logged_bytes;
              if (uVar6 < 0xc351) {
                ppVar13->num_logged_bytes = uVar6;
                uVar6 = (ulonglong)ppVar13->deallocation_log_index;
                if (uVar6 < 999) {
                  uVar21 = (longlong)param_2 << 6 | 7;
                  goto LAB_140d46fff;
                }
              }
              pVar22 = pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role;
              goto LAB_140d47702;
            }
            goto LAB_140d46f67;
          }
          break;
        case '\x05':
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        case '\x06':
          uVar16 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                             (ppVar27,(ulong64)param_2);
          uVar24 = (ulonglong)(ppVar27->owner).payload;
          ppVar17 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar24 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar24 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar11 = (pas_heap *)0x0;
          if (((ppVar17->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = ppVar17;
          }
          if (ppVar11 != ppVar8) {
LAB_140d47bd4:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar11,ppVar8,param_2,uVar16,uVar6);
          }
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 != (void *)0x0) {
            if (uVar6 < uVar16) {
              uVar16 = uVar6;
            }
            memcpy(pvVar7,param_2,uVar16);
            bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar27,(ulong64)param_2);
            goto LAB_140d46e31;
          }
          break;
        case '\a':
          uVar16 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                             (ppVar27,(ulong64)param_2);
          uVar24 = (ulonglong)(ppVar27->owner).payload;
          ppVar17 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar24 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar24 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar11 = (pas_heap *)0x0;
          if (((ppVar17->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = ppVar17;
          }
          if (ppVar11 != ppVar8) goto LAB_140d47bd4;
          pvVar7 = bmalloc_try_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 != (void *)0x0) {
            if (uVar6 < uVar16) {
              uVar16 = uVar6;
            }
            memcpy(pvVar7,param_2,uVar16);
            bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar27,(ulong64)param_2);
            goto LAB_140d46e31;
          }
          break;
        default:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
    }
  }
LAB_140d46e2f:
  pvVar7 = (void *)0x0;
LAB_140d46e31:
  if ((local_48 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  return pvVar7;
}

// bmalloc_iso_reallocate_array_by_count @ 140d47c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_iso_reallocate_array_by_count(pas_heap_ref *param_1,void *param_2,ulong64 param_3)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  pas_heap *ppVar8;
  pas_segregated_view_opaque *ppVar9;
  PSRWLOCK pRVar10;
  pas_heap *ppVar11;
  pas_segregated_partial_view *ppVar12;
  pas_thread_local_cache *ppVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  pas_heap *ppVar17;
  longlong lVar18;
  pas_segregated_page *ppVar19;
  uint uVar20;
  ulong64 uVar21;
  pas_segregated_page_config_kind_and_role pVar22;
  pas_fast_megapage_kind pVar23;
  ulonglong uVar24;
  ulong64 *puVar25;
  ulonglong uVar26;
  pas_bitfit_page *ppVar27;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar4 = auVar4 * ZEXT416(*(uint *)param_1->type);
  uVar6 = auVar4._0_8_;
  if (auVar4._8_8_ == 0) {
    ppVar8 = param_1->heap;
    if (ppVar8 == (pas_heap *)0x0) {
      ppVar8 = pas_ensure_heap_slow
                         (param_1,pas_normal_heap_ref_kind,&bmalloc_heap_config,
                          &bmalloc_typed_runtime_config.base);
    }
    if (param_2 == (void *)0x0) {
      pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
      return pvVar7;
    }
    uVar20 = (uint)((ulonglong)param_2 >> 0x18);
    if (uVar6 == 0) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      ppVar13 = *(pas_thread_local_cache **)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9c08);
      if ((pas_thread_local_cache *)&DAT_00000001 < ppVar13) {
        uVar6 = (ulonglong)param_2 >> 0x18;
        if (((ulonglong)param_2 >> 0x2b != 0) ||
           ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar20 & 0x1f) & 1) ==
            0)) {
          uVar16 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
          pVar23 = pas_not_a_fast_megapage_kind;
          if ((uVar6 < (bmalloc_megapage_table.instance)->index_begin) ||
             ((pVar23 = pas_not_a_fast_megapage_kind,
              (bmalloc_megapage_table.instance)->index_end <= uVar6 ||
              (pVar23 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                                 (uVar16 >> 2 & 0x1ffffffffffffffc)) >>
                        ((char)uVar16 * '\x02' & 0x1fU) &
                        (pas_small_other_fast_megapage_kind|
                        pas_small_exclusive_segregated_fast_megapage_kind),
              pVar23 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
            bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                      (ppVar13,(ulong64)param_2,pas_deallocate_mode,pVar23);
            goto LAB_140d47c8f;
          }
        }
        uVar20 = ppVar13->deallocation_log_index;
        if ((ulonglong)uVar20 < 999) {
          ppVar13->deallocation_log[uVar20] = (longlong)param_2 << 6 | 5;
          ppVar13->deallocation_log_index = uVar20 + 1;
        }
        else {
          pas_thread_local_cache_append_deallocation_slow
                    (ppVar13,(ulong64)param_2,
                     pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
        }
      }
      else {
        pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
      }
    }
    else {
      uVar16 = (ulonglong)param_2 >> 0x18;
      if (((ulonglong)param_2 >> 0x2b == 0) &&
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar20 & 0x1f) & 1) != 0
         )) {
switchD_140d47f7d_caseD_1:
        uVar16 = *(ulonglong *)(((ulonglong)param_2 & 0xffffffffffffc000) + 0x20) &
                 0xfffffffffffffff8;
        uVar24 = (ulonglong)
                 ((uint)*(byte *)(uVar16 + 10) * 0x80000 + (uint)*(ushort *)(uVar16 + 8) * 8);
        uVar16 = (ulonglong)
                 (*(uint *)(uVar24 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
        ppVar11 = *(pas_heap **)(uVar24 + 0x18 + pas_compact_heap_reservation_base);
        ppVar17 = (pas_heap *)0x0;
        if (((ppVar11->segregated_heap).runtime_config)->is_part_of_heap) {
          ppVar17 = ppVar11;
        }
        if (ppVar17 != ppVar8) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Attempting to teleport heaps",ppVar17,ppVar8,param_2,uVar16,uVar6);
        }
        pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
        if (pvVar7 == (void *)0x0) goto LAB_140d47c8f;
        if (uVar6 < uVar16) {
          uVar16 = uVar6;
        }
        memcpy(pvVar7,param_2,uVar16);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        ppVar13 = *(pas_thread_local_cache **)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9c08);
        if ((pas_thread_local_cache *)&DAT_00000001 < ppVar13) {
          uVar6 = (ulonglong)ppVar13->deallocation_log_index;
          if (uVar6 < 999) {
            uVar21 = (longlong)param_2 << 6 | 5;
LAB_140d47e5f:
            ppVar13->deallocation_log[uVar6] = uVar21;
            ppVar13->deallocation_log_index = (int)uVar6 + 1;
            goto LAB_140d47c91;
          }
          pVar22 = pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role;
LAB_140d48562:
          pas_thread_local_cache_append_deallocation_slow(ppVar13,(ulong64)param_2,pVar22);
          goto LAB_140d47c91;
        }
LAB_140d47dc7:
        pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        goto LAB_140d47c91;
      }
      uVar24 = uVar16 - (bmalloc_megapage_table.instance)->index_begin;
      uVar20 = (uint)param_2;
      if (((bmalloc_megapage_table.instance)->index_begin <= uVar16) &&
         (uVar16 < (bmalloc_megapage_table.instance)->index_end)) {
        switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                        (uVar24 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar24 * '\x02' & 0x1fU) & 3)
        {
        case 1:
          goto switchD_140d47f7d_caseD_1;
        case 2:
          ppVar19 = (pas_segregated_page *)((ulonglong)param_2 & 0xffffffffffffc000);
          uVar1 = (ppVar19->base).page_kind;
          if (uVar1 == '\x05') {
            uVar16 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                               ((pas_bitfit_page *)ppVar19,(ulong64)param_2);
            ppVar17 = *(pas_heap **)
                       ((ulonglong)
                        ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 +
                                        (ulonglong)ppVar19->object_size * 8) * 0x80000 +
                        (uint)*(ushort *)
                               (pas_compact_heap_reservation_base + 8 +
                               (ulonglong)ppVar19->object_size * 8) * 8) + 0x30 +
                       pas_compact_heap_reservation_base);
            ppVar11 = (pas_heap *)0x0;
            if (((ppVar17->segregated_heap).runtime_config)->is_part_of_heap) {
              ppVar11 = ppVar17;
            }
            if (ppVar11 != ppVar8) goto LAB_140d48a34;
            pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
            if (pvVar7 != (void *)0x0) {
              if (uVar6 < uVar16) {
                uVar16 = uVar6;
              }
              memcpy(pvVar7,param_2,uVar16);
              bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                        ((pas_bitfit_page *)ppVar19,(ulong64)param_2);
              goto LAB_140d47c91;
            }
            goto LAB_140d47c8f;
          }
          if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (((uint)ppVar19->owner & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar24 = (ulonglong)((uint)((ulonglong)param_2 >> 8) & 0x3f);
          uVar16 = (ulonglong)
                   *(uint *)(((ulonglong)ppVar19->owner & 0xfffffffffffffff8) + 0x14 + uVar24 * 4);
          lVar18 = pas_compact_heap_reservation_base + uVar16 * 8;
          if (uVar16 == 0) {
            lVar18 = 0;
          }
          ppVar11 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar18 + 0xb) * 8);
          if (*(uint3 *)(lVar18 + 0xb) == 0) {
            ppVar11 = (pas_heap *)0x0;
          }
          uVar16 = (ulonglong)((ppVar11->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar11 = *(pas_heap **)&(ppVar11->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar11->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = (pas_heap *)0x0;
          }
          if (ppVar11 != ppVar8) goto LAB_140d48a34;
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 == (void *)0x0) goto LAB_140d47c8f;
          if (uVar6 < uVar16) {
            uVar16 = uVar6;
          }
          memcpy(pvVar7,param_2,uVar16);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (1 < *(ulonglong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9c08)) {
            if (ppVar19->lock_ptr == (pas_lock *)0x0) {
              pRVar10 = (PSRWLOCK)0x0;
            }
            else {
              pRVar10 = (PSRWLOCK)
                        pas_segregated_page_switch_lock_slow
                                  (ppVar19,(pas_lock *)0x0,ppVar19->lock_ptr);
            }
            uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 7) & 0x7c);
            uVar20 = *(uint *)((longlong)ppVar19->alloc_bits + uVar6) & ~(1 << (uVar20 >> 4 & 0x1f))
            ;
            *(uint *)((longlong)ppVar19->alloc_bits + uVar6) = uVar20;
            if (((uint)ppVar19->owner & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar19->owner & 0xfffffffffffffff8) + 0x14 + uVar24 * 4);
            ppVar12 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base)
            ;
            if (uVar6 == 0) {
              ppVar12 = (pas_segregated_partial_view *)0x0;
            }
            if (!ppVar12->eligibility_has_been_noted) {
              pas_segregated_partial_view_note_eligibility(ppVar12,ppVar19);
            }
            if (uVar20 == 0) {
              uVar21 = (ppVar19->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar21 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (ppVar19,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (ppVar19->emptiness).num_non_empty_words_or_live_bytes = uVar21;
              }
            }
            if (pRVar10 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(pRVar10);
            }
            goto LAB_140d47c91;
          }
          goto LAB_140d47dc7;
        case 3:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      uVar16 = (ulonglong)param_2 & 0xfffffffffffe0000;
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4800e:
        if (bmalloc_marge_page_header_table.hashtable.table !=
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
          uVar14 = (uint)((ulonglong)param_2 >> 0x1a) & 0xfffffff ^
                   (uint)((ulonglong)param_2 >> 0x16);
          uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
          uVar14 = uVar14 >> 0xb ^ uVar14;
          uVar24 = (ulonglong)
                   ((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar14);
          uVar21 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar24].low;
          while (uVar21 != ((ulonglong)param_2 & 0xffffffffffc00000)) {
            uVar14 = uVar14 + 1;
            if (uVar21 == 0xffffffffffffffff) goto LAB_140d48423;
            uVar24 = (ulonglong)
                     (uVar14 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
            uVar21 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar24].low;
          }
          ppVar27 = (pas_bitfit_page *)
                    (bmalloc_marge_page_header_table.hashtable.table)->array[uVar24].high;
          if (ppVar27 != (pas_bitfit_page *)0x0) goto LAB_140d480a7;
        }
LAB_140d48423:
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pas_large_map_find(&local_60,(ulong64)param_2);
        if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Source object not allocated",(void *)0x0,ppVar8,param_2,0,uVar6);
        }
        if ((void *)local_60.begin != param_2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar16 = local_60.end - (longlong)param_2;
        if (local_60.end < param_2 || uVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar25 = &local_60.heap[-3].free_heap.num_mapped_bytes;
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (ppVar8 != (pas_heap *)puVar25) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Attempting to teleport heaps",puVar25,ppVar8,param_2,uVar16,uVar6);
        }
        pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
        if (pvVar7 != (void *)0x0) {
          if (uVar6 < uVar16) {
            uVar16 = uVar6;
          }
          memcpy(pvVar7,param_2,uVar16);
          pas_deallocate_known_large(param_2,&bmalloc_heap_config);
          goto LAB_140d47c91;
        }
      }
      else {
        uVar14 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_2 >> 0x11)
        ;
        uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
        uVar14 = uVar14 >> 0xb ^ uVar14;
        uVar24 = (ulonglong)
                 ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14);
        uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar24].low;
        while (uVar21 != uVar16) {
          uVar14 = uVar14 + 1;
          if (uVar21 == 0xffffffffffffffff) goto LAB_140d4800e;
          uVar24 = (ulonglong)
                   (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
          uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar24].low;
        }
        ppVar27 = (pas_bitfit_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar24].high;
        if (ppVar27 == (pas_bitfit_page *)0x0) goto LAB_140d4800e;
LAB_140d480a7:
        switch((ppVar27->base).page_kind) {
        case '\x01':
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        case '\x02':
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        case '\x03':
          if (((uint)ppVar27[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar14 = uVar20 & 0x1ffff;
          uVar26 = (ulonglong)(uVar14 >> 0xc);
          uVar24 = (ulonglong)
                   *(uint *)((ppVar27[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar26 * 4);
          lVar18 = pas_compact_heap_reservation_base + uVar24 * 8;
          if (uVar24 == 0) {
            lVar18 = 0;
          }
          ppVar11 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar18 + 0xb) * 8);
          if (*(uint3 *)(lVar18 + 0xb) == 0) {
            ppVar11 = (pas_heap *)0x0;
          }
          uVar24 = (ulonglong)((ppVar11->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar11 = *(pas_heap **)&(ppVar11->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar11->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = (pas_heap *)0x0;
          }
          if (ppVar11 != ppVar8) {
LAB_140d48a95:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar11,ppVar8,param_2,uVar24,uVar6);
          }
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 == (void *)0x0) break;
          if (uVar6 < uVar24) {
            uVar24 = uVar6;
          }
          memcpy(pvVar7,param_2,uVar24);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (*(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08) < 2) goto LAB_140d47dc7;
          if (bmalloc_medium_page_header_table.hashtable.table ==
              (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
            ppVar19 = (pas_segregated_page *)0x0;
          }
          else {
            uVar15 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                     (uint)((ulonglong)param_2 >> 0x11);
            uVar15 = uVar15 * 0x20 + (uVar15 ^ 0xdeadbeef);
            uVar15 = uVar15 >> 0xb ^ uVar15;
            uVar6 = (ulonglong)
                    ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar15);
            uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].low;
            if (uVar21 != uVar16) {
              ppVar19 = (pas_segregated_page *)0x0;
              do {
                uVar15 = uVar15 + 1;
                if (uVar21 == 0xffffffffffffffff) goto LAB_140d48846;
                uVar6 = (ulonglong)
                        (uVar15 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].low;
              } while (uVar21 != uVar16);
            }
            ppVar19 = (pas_segregated_page *)
                      (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].high;
          }
LAB_140d48846:
          if (ppVar19->lock_ptr == (pas_lock *)0x0) {
            pRVar10 = (PSRWLOCK)0x0;
          }
          else {
            pRVar10 = (PSRWLOCK)
                      pas_segregated_page_switch_lock_slow
                                (ppVar19,(pas_lock *)0x0,ppVar19->lock_ptr);
          }
          uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 0xc) & 0x1c);
          uVar20 = *(uint *)((longlong)ppVar19->alloc_bits + uVar6) & ~(1 << (uVar20 >> 9 & 0x1f));
          *(uint *)((longlong)ppVar19->alloc_bits + uVar6) = uVar20;
          ppVar9 = ppVar19->owner;
          if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar6 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar26 * 4)
          ;
          ppVar12 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base);
          if (uVar6 == 0) {
            ppVar12 = (pas_segregated_partial_view *)0x0;
          }
          if (!ppVar12->eligibility_has_been_noted) {
            pas_segregated_partial_view_note_eligibility(ppVar12,ppVar19);
            ppVar9 = ppVar19->owner;
          }
          if (((ulonglong)ppVar9 & 6) == 0) {
            uVar15 = ppVar19->object_size;
          }
          else {
            if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar26 * 4);
            lVar18 = pas_compact_heap_reservation_base + uVar6 * 8;
            if (uVar6 == 0) {
              lVar18 = 0;
            }
            uVar15 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar18 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar18 + 0xb) * 8) + 0x20 +
                              pas_compact_heap_reservation_base) & 0x7ffffff;
          }
          if (uVar15 == 0) {
LAB_140d48924:
            bVar5 = false;
          }
          else {
            if (0x20000 < (ulonglong)uVar15 + (ulonglong)uVar14) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar6 = ((ulonglong)uVar15 + (ulonglong)uVar14) - 1 >> 0xc;
            if (uVar6 < uVar26) goto LAB_140d48924;
            bVar5 = false;
            do {
              cVar2 = *(char *)((longlong)ppVar19[1].alloc_bits + (uVar26 - 0x10));
              if (cVar2 == '\0') {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (cVar2 == -1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              *(char *)((longlong)ppVar19[1].alloc_bits + (uVar26 - 0x10)) = cVar2 + -1;
              bVar5 = (bool)(bVar5 | (char)(cVar2 + -1) == '\0');
              uVar26 = uVar26 + 1;
            } while (uVar6 + 1 != uVar26);
          }
          if (pas_segregated_page_deallocate_should_verify_granules == true) {
            pas_segregated_page_verify_granules(ppVar19);
          }
          if (bVar5) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar19,pas_note_emptiness_keep_num_non_empty_words);
          }
          if (uVar20 == 0) {
            uVar21 = (ppVar19->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar21 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (ppVar19,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (ppVar19->emptiness).num_non_empty_words_or_live_bytes = uVar21;
            }
          }
          if (pRVar10 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar10);
          }
          goto LAB_140d47c91;
        case '\x04':
          uVar24 = ppVar27[1].use_epoch & 0xfffffffffffffff8;
          uVar26 = (ulonglong)
                   ((uint)*(byte *)(uVar24 + 10) * 0x80000 + (uint)*(ushort *)(uVar24 + 8) * 8);
          uVar24 = (ulonglong)
                   (*(uint *)(uVar26 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
          ppVar17 = *(pas_heap **)(uVar26 + 0x18 + pas_compact_heap_reservation_base);
          ppVar11 = (pas_heap *)0x0;
          if (((ppVar17->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = ppVar17;
          }
          if (ppVar11 != ppVar8) goto LAB_140d48a95;
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 != (void *)0x0) {
            if (uVar6 < uVar24) {
              uVar24 = uVar6;
            }
            memcpy(pvVar7,param_2,uVar24);
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            ppVar13 = *(pas_thread_local_cache **)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
            ;
            if ((pas_thread_local_cache *)&DAT_00000001 < ppVar13) {
              uVar20 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                       (uint)((ulonglong)param_2 >> 0x11);
              uVar20 = uVar20 * 0x20 + (uVar20 ^ 0xdeadbeef);
              uVar20 = uVar20 >> 0xb ^ uVar20;
              uVar6 = (ulonglong)
                      ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar20);
              uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].low;
              while (uVar21 != uVar16) {
                uVar20 = uVar20 + 1;
                uVar6 = (ulonglong)
                        (uVar20 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar21 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].low;
              }
              uVar6 = (ulonglong)
                      *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar6].
                                high + 4) + ppVar13->num_logged_bytes;
              if (uVar6 < 0xc351) {
                ppVar13->num_logged_bytes = uVar6;
                uVar6 = (ulonglong)ppVar13->deallocation_log_index;
                if (uVar6 < 999) {
                  uVar21 = (longlong)param_2 << 6 | 7;
                  goto LAB_140d47e5f;
                }
              }
              pVar22 = pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role;
              goto LAB_140d48562;
            }
            goto LAB_140d47dc7;
          }
          break;
        case '\x05':
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        case '\x06':
          uVar16 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                             (ppVar27,(ulong64)param_2);
          uVar24 = (ulonglong)(ppVar27->owner).payload;
          ppVar17 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar24 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar24 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar11 = (pas_heap *)0x0;
          if (((ppVar17->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = ppVar17;
          }
          if (ppVar11 != ppVar8) {
LAB_140d48a34:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar11,ppVar8,param_2,uVar16,uVar6);
          }
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 != (void *)0x0) {
            if (uVar6 < uVar16) {
              uVar16 = uVar6;
            }
            memcpy(pvVar7,param_2,uVar16);
            bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar27,(ulong64)param_2);
            goto LAB_140d47c91;
          }
          break;
        case '\a':
          uVar16 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                             (ppVar27,(ulong64)param_2);
          uVar24 = (ulonglong)(ppVar27->owner).payload;
          ppVar17 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar24 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar24 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar11 = (pas_heap *)0x0;
          if (((ppVar17->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar11 = ppVar17;
          }
          if (ppVar11 != ppVar8) goto LAB_140d48a34;
          pvVar7 = bmalloc_iso_allocate_array_impl_for_realloc(param_1,ppVar8,uVar6);
          if (pvVar7 != (void *)0x0) {
            if (uVar6 < uVar16) {
              uVar16 = uVar6;
            }
            memcpy(pvVar7,param_2,uVar16);
            bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar27,(ulong64)param_2);
            goto LAB_140d47c91;
          }
          break;
        default:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
    }
  }
LAB_140d47c8f:
  pvVar7 = (void *)0x0;
LAB_140d47c91:
  if ((local_48 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  return pvVar7;
}

// bmalloc_heap_ref_get_heap @ 140d48ac0

pas_heap * __cdecl bmalloc_heap_ref_get_heap(pas_heap_ref *param_1)

{
  pas_heap *ppVar1;
  
  if (param_1->heap != (pas_heap *)0x0) {
    return param_1->heap;
  }
  ppVar1 = pas_ensure_heap_slow
                     (param_1,pas_normal_heap_ref_kind,&bmalloc_heap_config,
                      &bmalloc_typed_runtime_config.base);
  return ppVar1;
}

// bmalloc_try_allocate_flex_with_alignment_casual @ 140d48af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_allocate_flex_with_alignment_casual
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_allocate_flex_impl_casual_case(&local_18,param_1,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_allocate_flex_impl_casual_case @ 140d48b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_allocate_flex_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,pas_primitive_heap_ref *param_1,
          ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  pas_heap *ppVar9;
  pas_allocation_result *ppVar10;
  ulong64 uVar11;
  pas_zero_mode pVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStackY_88 [32];
  bool local_50 [2];
  byte bStack_4e;
  undefined5 uStack_4d;
  undefined8 local_48;
  undefined2 local_3c;
  byte local_3a;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  ppVar10 = (pas_allocation_result *)(param_3 - 1);
  if ((pas_allocation_result *)(param_3 ^ (ulonglong)ppVar10) <= ppVar10) {
    __return_storage_ptr__->begin = 0;
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar10;
    }
    goto LAB_140d48dba;
  }
  uVar13 = param_2;
  if ((param_3 != 1) && (uVar13 = param_3, param_3 <= param_2)) {
    uVar13 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar16 = uVar13 + 0xf >> 4;
  if (uVar16 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar9 = (param_1->base).heap;
    if (ppVar9 == (pas_heap *)0x0) {
      ppVar9 = pas_ensure_heap_slow
                         (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                          &bmalloc_flex_runtime_config.base);
      uVar8 = (ppVar9->segregated_heap).small_index_upper_bound;
    }
    else {
      uVar8 = (ppVar9->segregated_heap).small_index_upper_bound;
    }
    if (uVar16 < uVar8) {
      puVar2 = (ppVar9->segregated_heap).index_to_small_allocator_index;
      if (puVar2 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = puVar2[uVar16];
      }
    }
    else {
      uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                        (&ppVar9->segregated_heap,uVar16,
                         pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                         ,pas_lock_is_not_held);
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d48cd6:
      local_50[0] = false;
      local_48 = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_48 = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_50[0] = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d48cd6;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)local_50,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)local_50,uVar8,&bmalloc_heap_config);
  }
  bVar6 = local_50[0];
  if (((param_3 != 1) && ((local_50[0] & 1U) != 0)) &&
     ((ulonglong)(1L << (local_48->alignment_shift & 0x3f)) < param_3)) {
    bVar6 = 0;
  }
  if ((bVar6 & 1) == 0) {
    ppVar10 = bmalloc_try_allocate_flex_impl_impl_slow
                        (__return_storage_ptr__,&param_1->base,uVar13,param_3);
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar10;
    }
    goto LAB_140d48dba;
  }
  (local_48->scavenger_data).is_in_use = true;
  uVar8 = local_48->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar11 = local_48->page_ish;
    uVar16 = local_48->current_word;
    if (uVar16 != 0) {
LAB_140d48d46:
      uVar14 = 0;
      for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar14 = uVar14 + 1;
      }
      local_48->current_word = uVar16 & ~(1L << (uVar14 & 0x3f));
      uVar11 = (uint)((int)uVar14 << 4) + uVar11;
      goto LAB_140d48d59;
    }
    if (local_48->config_kind == 6) {
      uVar8 = local_48->end_offset;
      uVar1 = local_48->current_offset;
      uVar14 = (ulonglong)uVar1;
      if (uVar1 < uVar8) {
        local_48->bits[uVar14] = 0;
        lVar15 = 0;
        do {
          if ((uVar8 - 1) - uVar14 == lVar15) {
            local_48->current_offset = uVar8;
            goto LAB_140d48e21;
          }
          uVar11 = uVar11 + 0x400;
          uVar16 = local_48[1].bits[uVar14 + lVar15 + -8];
          lVar15 = lVar15 + 1;
        } while (uVar16 == 0);
        local_48->current_offset = uVar1 + (int)lVar15;
        local_48->page_ish = uVar11;
        goto LAB_140d48d46;
      }
LAB_140d48e21:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_50,local_48,&bmalloc_allocator_counts,
                 pas_allocation_result_identity);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_50,local_48,uVar13,param_3,&bmalloc_allocator_counts
                 ,pas_allocation_result_identity);
    }
    uVar11 = CONCAT53(uStack_4d,CONCAT12(bStack_4e,CONCAT11(local_50[1],local_50[0])));
    bStack_4e = local_48._3_1_;
    local_3c = local_48._1_2_;
    local_50[0] = SUB81((ulonglong)local_48 >> 8,0);
    local_50[1] = SUB81((ulonglong)local_48 >> 0x10,0);
    bVar7 = local_48._0_1_;
    pVar12 = local_48._4_4_;
    local_3a = bStack_4e;
  }
  else {
    local_48->remaining = uVar8 - local_48->object_size;
    uVar11 = local_48->payload_end - (ulonglong)uVar8;
LAB_140d48d59:
    (local_48->scavenger_data).is_in_use = false;
    bVar7 = true;
    pVar12 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = uVar11;
  __return_storage_ptr__->did_succeed = bVar7;
  *(ushort *)&__return_storage_ptr__->field_0x9 = CONCAT11(local_50[1],local_50[0]);
  __return_storage_ptr__->field_0xb = bStack_4e;
  __return_storage_ptr__->zero_mode = pVar12;
  if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)bStack_4e;
  }
LAB_140d48dba:
  pcVar4 = (code *)swi(3);
  ppVar10 = (pas_allocation_result *)(*pcVar4)();
  return ppVar10;
}

// bmalloc_allocate_flex_with_alignment_casual @ 140d48ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_allocate_flex_with_alignment_casual
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_allocate_flex_impl_casual_case(&local_18,param_1,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_allocate_flex_impl_casual_case @ 140d48ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_allocate_flex_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,pas_primitive_heap_ref *param_1,
          ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  pas_heap *ppVar9;
  pas_allocation_result *ppVar10;
  ulong64 uVar11;
  pas_zero_mode pVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStackY_88 [32];
  bool local_50 [2];
  byte bStack_4e;
  undefined5 uStack_4d;
  undefined8 local_48;
  undefined2 local_3c;
  byte local_3a;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  uVar13 = param_2;
  if ((param_3 != 1) && (uVar13 = param_3, param_3 <= param_2)) {
    uVar13 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar16 = uVar13 + 0xf >> 4;
  if (uVar16 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar9 = (param_1->base).heap;
    if (ppVar9 == (pas_heap *)0x0) {
      ppVar9 = pas_ensure_heap_slow
                         (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                          &bmalloc_flex_runtime_config.base);
      uVar8 = (ppVar9->segregated_heap).small_index_upper_bound;
    }
    else {
      uVar8 = (ppVar9->segregated_heap).small_index_upper_bound;
    }
    if (uVar16 < uVar8) {
      puVar2 = (ppVar9->segregated_heap).index_to_small_allocator_index;
      if (puVar2 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = puVar2[uVar16];
      }
    }
    else {
      uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                        (&ppVar9->segregated_heap,uVar16,
                         pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                         ,pas_lock_is_not_held);
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d4905e:
      local_50[0] = false;
      local_48 = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_48 = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_50[0] = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d4905e;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)local_50,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)local_50,uVar8,&bmalloc_heap_config);
  }
  bVar6 = local_50[0];
  if (((param_3 != 1) && ((local_50[0] & 1U) != 0)) &&
     ((ulonglong)(1L << (local_48->alignment_shift & 0x3f)) < param_3)) {
    bVar6 = 0;
  }
  if ((bVar6 & 1) == 0) {
    ppVar10 = bmalloc_allocate_flex_impl_impl_slow
                        (__return_storage_ptr__,&param_1->base,uVar13,param_3);
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar10;
    }
    goto LAB_140d49142;
  }
  (local_48->scavenger_data).is_in_use = true;
  uVar8 = local_48->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar11 = local_48->page_ish;
    uVar16 = local_48->current_word;
    if (uVar16 != 0) {
LAB_140d490ce:
      uVar14 = 0;
      for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar14 = uVar14 + 1;
      }
      local_48->current_word = uVar16 & ~(1L << (uVar14 & 0x3f));
      uVar11 = (uint)((int)uVar14 << 4) + uVar11;
      goto LAB_140d490e1;
    }
    if (local_48->config_kind == 6) {
      uVar8 = local_48->end_offset;
      uVar1 = local_48->current_offset;
      uVar14 = (ulonglong)uVar1;
      if (uVar1 < uVar8) {
        local_48->bits[uVar14] = 0;
        lVar15 = 0;
        do {
          if ((uVar8 - 1) - uVar14 == lVar15) {
            local_48->current_offset = uVar8;
            goto LAB_140d491a9;
          }
          uVar11 = uVar11 + 0x400;
          uVar16 = local_48[1].bits[uVar14 + lVar15 + -8];
          lVar15 = lVar15 + 1;
        } while (uVar16 == 0);
        local_48->current_offset = uVar1 + (int)lVar15;
        local_48->page_ish = uVar11;
        goto LAB_140d490ce;
      }
LAB_140d491a9:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_50,local_48,&bmalloc_allocator_counts,
                 pas_allocation_result_crash_on_error);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_50,local_48,uVar13,param_3,&bmalloc_allocator_counts
                 ,pas_allocation_result_crash_on_error);
    }
    uVar11 = CONCAT53(uStack_4d,CONCAT12(bStack_4e,CONCAT11(local_50[1],local_50[0])));
    bStack_4e = local_48._3_1_;
    local_3c = local_48._1_2_;
    local_50[0] = SUB81((ulonglong)local_48 >> 8,0);
    local_50[1] = SUB81((ulonglong)local_48 >> 0x10,0);
    bVar7 = local_48._0_1_;
    pVar12 = local_48._4_4_;
    local_3a = bStack_4e;
  }
  else {
    local_48->remaining = uVar8 - local_48->object_size;
    uVar11 = local_48->payload_end - (ulonglong)uVar8;
LAB_140d490e1:
    (local_48->scavenger_data).is_in_use = false;
    bVar7 = true;
    pVar12 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = uVar11;
  __return_storage_ptr__->did_succeed = bVar7;
  *(ushort *)&__return_storage_ptr__->field_0x9 = CONCAT11(local_50[1],local_50[0]);
  __return_storage_ptr__->field_0xb = bStack_4e;
  __return_storage_ptr__->zero_mode = pVar12;
  if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)bStack_4e;
  }
LAB_140d49142:
  pcVar4 = (code *)swi(3);
  ppVar10 = (pas_allocation_result *)(*pcVar4)();
  return ppVar10;
}

// bmalloc_try_allocate_flex @ 140d49230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_allocate_flex(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar6 = param_2 + 0xf >> 4;
  if (uVar6 == param_1->cached_index) {
    uVar10 = (param_1->base).allocator_index;
LAB_140d49280:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar6) && (uVar10 < *(uint *)(uVar6 + 0x1f74))) {
      uVar12 = (ulonglong)uVar10;
      lVar1 = uVar6 + uVar12 * 8;
      *(undefined1 *)(uVar6 + 0x1f80 + uVar12 * 8) = 1;
      uVar10 = *(uint *)(uVar6 + 0x1f98 + uVar12 * 8);
      if ((ulonglong)uVar10 == 0) {
        lVar9 = *(longlong *)(lVar1 + 0x1fa0);
        uVar13 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar13 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar10 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar11 = (ulonglong)uVar2;
            if (uVar2 < uVar10) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar11 * 8) = 0;
              lVar8 = 0;
              do {
                if ((uVar10 - 1) - uVar11 == lVar8) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar10;
                  goto LAB_140d493d4;
                }
                lVar9 = lVar9 + 0x400;
                uVar13 = *(ulonglong *)(uVar12 * 8 + uVar11 * 8 + uVar6 + 0x1fc8 + lVar8 * 8);
                lVar8 = lVar8 + 1;
              } while (uVar13 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar8;
              *(longlong *)(lVar1 + 0x1fa0) = lVar9;
              goto LAB_140d49344;
            }
          }
LAB_140d493d4:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d492c1;
        }
LAB_140d49344:
        uVar6 = 0;
        for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar13 & ~(1L << (uVar6 & 0x3f));
        pvVar7 = (void *)((ulonglong)(uint)((int)uVar6 << 4) + lVar9);
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar10 - *(int *)(lVar1 + 0x1f9c);
        pvVar7 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar10);
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
        return pvVar7;
      }
      goto LAB_140d4936b;
    }
  }
  else {
    ppVar3 = (param_1->base).heap;
    if (ppVar3 != (pas_heap *)0x0) {
      uVar10 = 0;
      if ((uVar6 < (ppVar3->segregated_heap).small_index_upper_bound) &&
         (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0))
      {
        uVar10 = puVar4[uVar6];
      }
      goto LAB_140d49280;
    }
  }
LAB_140d492c1:
  bmalloc_try_allocate_flex_impl_casual_case(&local_30,param_1,param_2,1);
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return (void *)local_30.begin;
  }
LAB_140d4936b:
  pcVar5 = (code *)swi(3);
  pvVar7 = (void *)(*pcVar5)();
  return pvVar7;
}

// bmalloc_allocate_flex @ 140d493f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_allocate_flex(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar6 = param_2 + 0xf >> 4;
  if (uVar6 == param_1->cached_index) {
    uVar10 = (param_1->base).allocator_index;
LAB_140d49440:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar6) && (uVar10 < *(uint *)(uVar6 + 0x1f74))) {
      uVar12 = (ulonglong)uVar10;
      lVar1 = uVar6 + uVar12 * 8;
      *(undefined1 *)(uVar6 + 0x1f80 + uVar12 * 8) = 1;
      uVar10 = *(uint *)(uVar6 + 0x1f98 + uVar12 * 8);
      if ((ulonglong)uVar10 == 0) {
        lVar9 = *(longlong *)(lVar1 + 0x1fa0);
        uVar13 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar13 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar10 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar11 = (ulonglong)uVar2;
            if (uVar2 < uVar10) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar11 * 8) = 0;
              lVar8 = 0;
              do {
                if ((uVar10 - 1) - uVar11 == lVar8) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar10;
                  goto LAB_140d49594;
                }
                lVar9 = lVar9 + 0x400;
                uVar13 = *(ulonglong *)(uVar12 * 8 + uVar11 * 8 + uVar6 + 0x1fc8 + lVar8 * 8);
                lVar8 = lVar8 + 1;
              } while (uVar13 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar8;
              *(longlong *)(lVar1 + 0x1fa0) = lVar9;
              goto LAB_140d49504;
            }
          }
LAB_140d49594:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d49481;
        }
LAB_140d49504:
        uVar6 = 0;
        for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar13 & ~(1L << (uVar6 & 0x3f));
        pvVar7 = (void *)((ulonglong)(uint)((int)uVar6 << 4) + lVar9);
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar10 - *(int *)(lVar1 + 0x1f9c);
        pvVar7 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar10);
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
        return pvVar7;
      }
      goto LAB_140d4952b;
    }
  }
  else {
    ppVar3 = (param_1->base).heap;
    if (ppVar3 != (pas_heap *)0x0) {
      uVar10 = 0;
      if ((uVar6 < (ppVar3->segregated_heap).small_index_upper_bound) &&
         (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0))
      {
        uVar10 = puVar4[uVar6];
      }
      goto LAB_140d49440;
    }
  }
LAB_140d49481:
  bmalloc_allocate_flex_impl_casual_case(&local_30,param_1,param_2,1);
  if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return (void *)local_30.begin;
  }
LAB_140d4952b:
  pcVar5 = (code *)swi(3);
  pvVar7 = (void *)(*pcVar5)();
  return pvVar7;
}

// bmalloc_try_allocate_zeroed_flex @ 140d495b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_allocate_zeroed_flex(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar6 = param_2 + 0xf >> 4;
  if (uVar6 == param_1->cached_index) {
    uVar10 = (param_1->base).allocator_index;
LAB_140d49600:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar6) && (uVar10 < *(uint *)(uVar6 + 0x1f74))) {
      uVar12 = (ulonglong)uVar10;
      lVar1 = uVar6 + uVar12 * 8;
      *(undefined1 *)(uVar6 + 0x1f80 + uVar12 * 8) = 1;
      uVar10 = *(uint *)(uVar6 + 0x1f98 + uVar12 * 8);
      if ((ulonglong)uVar10 == 0) {
        lVar8 = *(longlong *)(lVar1 + 0x1fa0);
        uVar13 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar13 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar10 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar11 = (ulonglong)uVar2;
            if (uVar2 < uVar10) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar11 * 8) = 0;
              lVar9 = 0;
              do {
                if ((uVar10 - 1) - uVar11 == lVar9) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar10;
                  goto LAB_140d49783;
                }
                lVar8 = lVar8 + 0x400;
                uVar13 = *(ulonglong *)(uVar12 * 8 + uVar11 * 8 + uVar6 + 0x1fc8 + lVar9 * 8);
                lVar9 = lVar9 + 1;
              } while (uVar13 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar9;
              *(longlong *)(lVar1 + 0x1fa0) = lVar8;
              goto LAB_140d496d9;
            }
          }
LAB_140d49783:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d49641;
        }
LAB_140d496d9:
        uVar6 = 0;
        for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar13 & ~(1L << (uVar6 & 0x3f));
        local_30.begin = (ulonglong)(uint)((int)uVar6 << 4) + lVar8;
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar10 - *(int *)(lVar1 + 0x1f9c);
        local_30.begin = *(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar10;
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      goto LAB_140d496f4;
    }
  }
  else {
    ppVar3 = (param_1->base).heap;
    if (ppVar3 != (pas_heap *)0x0) {
      uVar10 = 0;
      if ((uVar6 < (ppVar3->segregated_heap).small_index_upper_bound) &&
         (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0))
      {
        uVar10 = puVar4[uVar6];
      }
      goto LAB_140d49600;
    }
  }
LAB_140d49641:
  bmalloc_try_allocate_flex_impl_casual_case(&local_30,param_1,param_2,1);
  if (((local_30.did_succeed & 1U) == 0) || (local_30.zero_mode != pas_zero_mode_may_have_non_zero))
  {
    if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)local_30.begin;
    }
    pcVar5 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar5)();
    return pvVar7;
  }
LAB_140d496f4:
  pvVar7 = memset((void *)local_30.begin,0,param_2);
  return pvVar7;
}

// bmalloc_allocate_zeroed_flex @ 140d497a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_allocate_zeroed_flex(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar6 = param_2 + 0xf >> 4;
  if (uVar6 == param_1->cached_index) {
    uVar10 = (param_1->base).allocator_index;
LAB_140d497f0:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar6) && (uVar10 < *(uint *)(uVar6 + 0x1f74))) {
      uVar12 = (ulonglong)uVar10;
      lVar1 = uVar6 + uVar12 * 8;
      *(undefined1 *)(uVar6 + 0x1f80 + uVar12 * 8) = 1;
      uVar10 = *(uint *)(uVar6 + 0x1f98 + uVar12 * 8);
      if ((ulonglong)uVar10 == 0) {
        lVar8 = *(longlong *)(lVar1 + 0x1fa0);
        uVar13 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar13 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar10 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar11 = (ulonglong)uVar2;
            if (uVar2 < uVar10) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar11 * 8) = 0;
              lVar9 = 0;
              do {
                if ((uVar10 - 1) - uVar11 == lVar9) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar10;
                  goto LAB_140d49973;
                }
                lVar8 = lVar8 + 0x400;
                uVar13 = *(ulonglong *)(uVar12 * 8 + uVar11 * 8 + uVar6 + 0x1fc8 + lVar9 * 8);
                lVar9 = lVar9 + 1;
              } while (uVar13 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar9;
              *(longlong *)(lVar1 + 0x1fa0) = lVar8;
              goto LAB_140d498c9;
            }
          }
LAB_140d49973:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d49831;
        }
LAB_140d498c9:
        uVar6 = 0;
        for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar13 & ~(1L << (uVar6 & 0x3f));
        local_30.begin = (ulonglong)(uint)((int)uVar6 << 4) + lVar8;
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar10 - *(int *)(lVar1 + 0x1f9c);
        local_30.begin = *(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar10;
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      goto LAB_140d498e4;
    }
  }
  else {
    ppVar3 = (param_1->base).heap;
    if (ppVar3 != (pas_heap *)0x0) {
      uVar10 = 0;
      if ((uVar6 < (ppVar3->segregated_heap).small_index_upper_bound) &&
         (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0))
      {
        uVar10 = puVar4[uVar6];
      }
      goto LAB_140d497f0;
    }
  }
LAB_140d49831:
  bmalloc_allocate_flex_impl_casual_case(&local_30,param_1,param_2,1);
  if (((local_30.did_succeed & 1U) == 0) || (local_30.zero_mode != pas_zero_mode_may_have_non_zero))
  {
    if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)local_30.begin;
    }
    pcVar5 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar5)();
    return pvVar7;
  }
LAB_140d498e4:
  pvVar7 = memset((void *)local_30.begin,0,param_2);
  return pvVar7;
}

// bmalloc_try_allocate_flex_with_alignment @ 140d49990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_allocate_flex_with_alignment
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  pas_heap *ppVar4;
  uint *puVar5;
  code *pcVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_68 [40];
  pas_allocation_result local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_3 - 1 < (param_3 ^ param_3 - 1)) {
    uVar7 = param_2;
    if ((param_3 != 1) && (uVar7 = param_3, param_3 <= param_2)) {
      uVar7 = -param_3 & (param_2 + param_3) - 1;
    }
    uVar8 = uVar7 + 0xf >> 4;
    if (uVar8 == param_1->cached_index) {
      uVar13 = (param_1->base).allocator_index;
    }
    else {
      ppVar4 = (param_1->base).heap;
      if (ppVar4 == (pas_heap *)0x0) goto LAB_140d49a5b;
      uVar13 = 0;
      if ((uVar8 < (ppVar4->segregated_heap).small_index_upper_bound) &&
         (puVar5 = (ppVar4->segregated_heap).index_to_small_allocator_index, puVar5 != (uint *)0x0))
      {
        uVar13 = puVar5[uVar8];
      }
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar8 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar8) && (uVar13 < *(uint *)(uVar8 + 0x1f74))) {
      lVar1 = uVar8 + (ulonglong)uVar13 * 8;
      puVar12 = (undefined1 *)(lVar1 + 0x1f80);
      if ((param_3 == 1) || (param_3 <= (ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)))) {
        *puVar12 = 1;
        uVar2 = *(uint *)(lVar1 + 0x1f98);
        if ((ulonglong)uVar2 == 0) {
          lVar11 = *(longlong *)(lVar1 + 0x1fa0);
          uVar15 = *(ulonglong *)(lVar1 + 0x1fb0);
          if (uVar15 == 0) {
            if (*(char *)(lVar1 + 0x1f88) == '\x06') {
              uVar2 = *(uint *)(lVar1 + 0x1fac);
              uVar3 = *(uint *)(lVar1 + 0x1fa8);
              uVar14 = (ulonglong)uVar3;
              if (uVar3 < uVar2) {
                *(undefined8 *)(lVar1 + 0x1fc0 + uVar14 * 8) = 0;
                lVar10 = 0;
                do {
                  if ((uVar2 - 1) - uVar14 == lVar10) {
                    *(uint *)(lVar1 + 0x1fa8) = uVar2;
                    goto LAB_140d49b83;
                  }
                  lVar11 = lVar11 + 0x400;
                  uVar15 = *(ulonglong *)
                            ((ulonglong)uVar13 * 8 + uVar14 * 8 + uVar8 + 0x1fc8 + lVar10 * 8);
                  lVar10 = lVar10 + 1;
                } while (uVar15 == 0);
                *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar10;
                *(longlong *)(lVar1 + 0x1fa0) = lVar11;
                goto LAB_140d49aef;
              }
            }
LAB_140d49b83:
            *puVar12 = 0;
            goto LAB_140d49a5b;
          }
LAB_140d49aef:
          uVar8 = 0;
          for (uVar14 = uVar15; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
            uVar8 = uVar8 + 1;
          }
          *(ulonglong *)(lVar1 + 0x1fb0) = uVar15 & ~(1L << (uVar8 & 0x3f));
          pvVar9 = (void *)((ulonglong)(uint)((int)uVar8 << 4) + lVar11);
        }
        else {
          *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
          pvVar9 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
        }
        *puVar12 = 0;
        if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
          return pvVar9;
        }
        goto LAB_140d49b1a;
      }
    }
  }
LAB_140d49a5b:
  bmalloc_try_allocate_flex_impl_casual_case(&local_40,param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return (void *)local_40.begin;
  }
LAB_140d49b1a:
  pcVar6 = (code *)swi(3);
  pvVar9 = (void *)(*pcVar6)();
  return pvVar9;
}

// bmalloc_allocate_flex_with_alignment @ 140d49ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_allocate_flex_with_alignment
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  pas_heap *ppVar4;
  uint *puVar5;
  code *pcVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_68 [40];
  pas_allocation_result local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_3 - 1 < (param_3 ^ param_3 - 1)) {
    uVar7 = param_2;
    if ((param_3 != 1) && (uVar7 = param_3, param_3 <= param_2)) {
      uVar7 = -param_3 & (param_2 + param_3) - 1;
    }
    uVar8 = uVar7 + 0xf >> 4;
    if (uVar8 == param_1->cached_index) {
      uVar13 = (param_1->base).allocator_index;
    }
    else {
      ppVar4 = (param_1->base).heap;
      if (ppVar4 == (pas_heap *)0x0) goto LAB_140d49c6b;
      uVar13 = 0;
      if ((uVar8 < (ppVar4->segregated_heap).small_index_upper_bound) &&
         (puVar5 = (ppVar4->segregated_heap).index_to_small_allocator_index, puVar5 != (uint *)0x0))
      {
        uVar13 = puVar5[uVar8];
      }
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar8 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar8) && (uVar13 < *(uint *)(uVar8 + 0x1f74))) {
      lVar1 = uVar8 + (ulonglong)uVar13 * 8;
      puVar12 = (undefined1 *)(lVar1 + 0x1f80);
      if ((param_3 == 1) || (param_3 <= (ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)))) {
        *puVar12 = 1;
        uVar2 = *(uint *)(lVar1 + 0x1f98);
        if ((ulonglong)uVar2 == 0) {
          lVar11 = *(longlong *)(lVar1 + 0x1fa0);
          uVar15 = *(ulonglong *)(lVar1 + 0x1fb0);
          if (uVar15 == 0) {
            if (*(char *)(lVar1 + 0x1f88) == '\x06') {
              uVar2 = *(uint *)(lVar1 + 0x1fac);
              uVar3 = *(uint *)(lVar1 + 0x1fa8);
              uVar14 = (ulonglong)uVar3;
              if (uVar3 < uVar2) {
                *(undefined8 *)(lVar1 + 0x1fc0 + uVar14 * 8) = 0;
                lVar10 = 0;
                do {
                  if ((uVar2 - 1) - uVar14 == lVar10) {
                    *(uint *)(lVar1 + 0x1fa8) = uVar2;
                    goto LAB_140d49d93;
                  }
                  lVar11 = lVar11 + 0x400;
                  uVar15 = *(ulonglong *)
                            ((ulonglong)uVar13 * 8 + uVar14 * 8 + uVar8 + 0x1fc8 + lVar10 * 8);
                  lVar10 = lVar10 + 1;
                } while (uVar15 == 0);
                *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar10;
                *(longlong *)(lVar1 + 0x1fa0) = lVar11;
                goto LAB_140d49cff;
              }
            }
LAB_140d49d93:
            *puVar12 = 0;
            goto LAB_140d49c6b;
          }
LAB_140d49cff:
          uVar8 = 0;
          for (uVar14 = uVar15; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
            uVar8 = uVar8 + 1;
          }
          *(ulonglong *)(lVar1 + 0x1fb0) = uVar15 & ~(1L << (uVar8 & 0x3f));
          pvVar9 = (void *)((ulonglong)(uint)((int)uVar8 << 4) + lVar11);
        }
        else {
          *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
          pvVar9 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
        }
        *puVar12 = 0;
        if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
          return pvVar9;
        }
        goto LAB_140d49d2a;
      }
    }
  }
LAB_140d49c6b:
  bmalloc_allocate_flex_impl_casual_case(&local_40,param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == __security_cookie.value) {
    return (void *)local_40.begin;
  }
LAB_140d49d2a:
  pcVar6 = (code *)swi(3);
  pvVar9 = (void *)(*pcVar6)();
  return pvVar9;
}

// bmalloc_try_reallocate_flex @ 140d49db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_try_reallocate_flex(pas_primitive_heap_ref *param_1,void *param_2,ulong64 param_3)

{
  uchar uVar1;
  char cVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  pas_heap *ppVar8;
  ulong64 uVar9;
  pas_segregated_view_opaque *ppVar10;
  PSRWLOCK pRVar11;
  pas_heap *ppVar12;
  pas_segregated_partial_view *ppVar13;
  uint uVar14;
  pas_heap *ppVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  pas_fast_megapage_kind pVar20;
  ulong64 *puVar21;
  ulonglong uVar22;
  pas_segregated_page *ppVar23;
  pas_bitfit_page *ppVar24;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  ppVar8 = (param_1->base).heap;
  if (ppVar8 == (pas_heap *)0x0) {
    ppVar8 = pas_ensure_heap_slow
                       (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                        &bmalloc_flex_runtime_config.base);
  }
  if (param_2 == (void *)0x0) {
    pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
    return pvVar7;
  }
  uVar17 = (uint)((ulonglong)param_2 >> 0x18);
  if (param_3 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar3 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
      uVar6 = (ulonglong)param_2 >> 0x18;
      if (((ulonglong)param_2 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar17 & 0x1f) & 1) == 0
         )) {
        uVar19 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
        pVar20 = pas_not_a_fast_megapage_kind;
        if ((uVar6 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar20 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar6 ||
            (pVar20 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar19 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar19 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar20 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar3,(ulong64)param_2,pas_deallocate_mode,pVar20);
          goto LAB_140d49fd6;
        }
      }
      uVar17 = ppVar3->deallocation_log_index;
      if ((ulonglong)uVar17 < 999) {
        ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 5;
        ppVar3->deallocation_log_index = uVar17 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar3,(ulong64)param_2,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
    }
  }
  else {
    uVar6 = (ulonglong)param_2 >> 0x18;
    if (((ulonglong)param_2 >> 0x2b == 0) &&
       ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar17 & 0x1f) & 1) != 0))
    {
switchD_140d4a0a2_caseD_1:
      uVar6 = *(ulonglong *)(((ulonglong)param_2 & 0xffffffffffffc000) + 0x20) & 0xfffffffffffffff8;
      uVar19 = (ulonglong)((uint)*(byte *)(uVar6 + 10) * 0x80000 + (uint)*(ushort *)(uVar6 + 8) * 8)
      ;
      uVar6 = (ulonglong)(*(uint *)(uVar19 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
      ppVar12 = *(pas_heap **)(uVar19 + 0x18 + pas_compact_heap_reservation_base);
      ppVar15 = (pas_heap *)0x0;
      if (((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
        ppVar15 = ppVar12;
      }
      if (ppVar15 != ppVar8) {
                    /* WARNING: Subroutine does not return */
        pas_reallocation_did_fail
                  ("Attempting to teleport heaps",ppVar15,ppVar8,param_2,uVar6,param_3);
      }
      pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
      if (pvVar7 != (void *)0x0) {
        if (param_3 < uVar6) {
          uVar6 = param_3;
        }
        memcpy(pvVar7,param_2,uVar6);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        ppVar3 = *(pas_thread_local_cache **)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9c08);
        if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
          uVar17 = ppVar3->deallocation_log_index;
          if ((ulonglong)uVar17 < 999) {
            ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 5;
            ppVar3->deallocation_log_index = uVar17 + 1;
          }
          else {
            pas_thread_local_cache_append_deallocation_slow
                      (ppVar3,(ulong64)param_2,
                       pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
          }
        }
        else {
          pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        }
        goto LAB_140d49fd8;
      }
    }
    else {
      uVar19 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
      uVar17 = (uint)param_2;
      if (((bmalloc_megapage_table.instance)->index_begin <= uVar6) &&
         (uVar6 < (bmalloc_megapage_table.instance)->index_end)) {
        switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                        (uVar19 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar19 * '\x02' & 0x1fU) & 3)
        {
        case 0:
          goto switchD_140d4a0a2_caseD_0;
        case 1:
          goto switchD_140d4a0a2_caseD_1;
        case 2:
          ppVar23 = (pas_segregated_page *)((ulonglong)param_2 & 0xffffffffffffc000);
          uVar1 = (ppVar23->base).page_kind;
          if (uVar1 == '\x05') {
            uVar6 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                              ((pas_bitfit_page *)ppVar23,(ulong64)param_2);
            ppVar15 = *(pas_heap **)
                       ((ulonglong)
                        ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 +
                                        (ulonglong)ppVar23->object_size * 8) * 0x80000 +
                        (uint)*(ushort *)
                               (pas_compact_heap_reservation_base + 8 +
                               (ulonglong)ppVar23->object_size * 8) * 8) + 0x30 +
                       pas_compact_heap_reservation_base);
            ppVar12 = (pas_heap *)0x0;
            if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
              ppVar12 = ppVar15;
            }
            if (ppVar12 != ppVar8) goto LAB_140d4ab6e;
            pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
            if (pvVar7 != (void *)0x0) {
              if (param_3 < uVar6) {
                uVar6 = param_3;
              }
              memcpy(pvVar7,param_2,uVar6);
              bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                        ((pas_bitfit_page *)ppVar23,(ulong64)param_2);
              goto LAB_140d49fd8;
            }
            goto LAB_140d49fd6;
          }
          if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (((uint)ppVar23->owner & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar19 = (ulonglong)((uint)((ulonglong)param_2 >> 8) & 0x3f);
          uVar6 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar23->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
          lVar16 = pas_compact_heap_reservation_base + uVar6 * 8;
          if (uVar6 == 0) {
            lVar16 = 0;
          }
          ppVar12 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar16 + 0xb) * 8);
          if (*(uint3 *)(lVar16 + 0xb) == 0) {
            ppVar12 = (pas_heap *)0x0;
          }
          uVar6 = (ulonglong)((ppVar12->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar12 = *(pas_heap **)&(ppVar12->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = (pas_heap *)0x0;
          }
          if (ppVar12 != ppVar8) goto LAB_140d4ab6e;
          pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 == (void *)0x0) goto LAB_140d49fd6;
          if (param_3 < uVar6) {
            uVar6 = param_3;
          }
          memcpy(pvVar7,param_2,uVar6);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (1 < *(ulonglong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9c08)) {
            if (ppVar23->lock_ptr == (pas_lock *)0x0) {
              pRVar11 = (PSRWLOCK)0x0;
            }
            else {
              pRVar11 = (PSRWLOCK)
                        pas_segregated_page_switch_lock_slow
                                  (ppVar23,(pas_lock *)0x0,ppVar23->lock_ptr);
            }
            uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 7) & 0x7c);
            uVar17 = *(uint *)((longlong)ppVar23->alloc_bits + uVar6) & ~(1 << (uVar17 >> 4 & 0x1f))
            ;
            *(uint *)((longlong)ppVar23->alloc_bits + uVar6) = uVar17;
            if (((uint)ppVar23->owner & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar23->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
            ppVar13 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base)
            ;
            if (uVar6 == 0) {
              ppVar13 = (pas_segregated_partial_view *)0x0;
            }
            if (!ppVar13->eligibility_has_been_noted) {
              pas_segregated_partial_view_note_eligibility(ppVar13,ppVar23);
            }
            if (uVar17 == 0) {
              uVar9 = (ppVar23->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar9 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (ppVar23,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (ppVar23->emptiness).num_non_empty_words_or_live_bytes = uVar9;
              }
            }
            if (pRVar11 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(pRVar11);
            }
            goto LAB_140d49fd8;
          }
          break;
        case 3:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
LAB_140d4a460:
        pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        goto LAB_140d49fd8;
      }
switchD_140d4a0a2_caseD_0:
      uVar6 = (ulonglong)param_2 & 0xfffffffffffe0000;
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4a135:
        if (bmalloc_marge_page_header_table.hashtable.table !=
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
          uVar18 = (uint)((ulonglong)param_2 >> 0x1a) & 0xfffffff ^
                   (uint)((ulonglong)param_2 >> 0x16);
          uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
          uVar18 = uVar18 >> 0xb ^ uVar18;
          uVar19 = (ulonglong)
                   ((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar18);
          uVar9 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
          while (uVar9 != ((ulonglong)param_2 & 0xffffffffffc00000)) {
            uVar18 = uVar18 + 1;
            if (uVar9 == 0xffffffffffffffff) goto LAB_140d4a4d6;
            uVar19 = (ulonglong)
                     (uVar18 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
            uVar9 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
          }
          ppVar24 = (pas_bitfit_page *)
                    (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].high;
          if (ppVar24 != (pas_bitfit_page *)0x0) goto LAB_140d4a1d2;
        }
LAB_140d4a4d6:
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pas_large_map_find(&local_60,(ulong64)param_2);
        if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Source object not allocated",(void *)0x0,ppVar8,param_2,0,param_3);
        }
        if ((void *)local_60.begin != param_2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar6 = local_60.end - (longlong)param_2;
        if (local_60.end < param_2 || uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        puVar21 = &local_60.heap[-3].free_heap.num_mapped_bytes;
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (ppVar8 != (pas_heap *)puVar21) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Attempting to teleport heaps",puVar21,ppVar8,param_2,uVar6,param_3);
        }
        pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
        if (pvVar7 != (void *)0x0) {
          if (param_3 < uVar6) {
            uVar6 = param_3;
          }
          memcpy(pvVar7,param_2,uVar6);
          pas_deallocate_known_large(param_2,&bmalloc_heap_config);
          goto LAB_140d49fd8;
        }
      }
      else {
        uVar18 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_2 >> 0x11)
        ;
        uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
        uVar18 = uVar18 >> 0xb ^ uVar18;
        uVar19 = (ulonglong)
                 ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar18);
        uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
        while (uVar9 != uVar6) {
          uVar18 = uVar18 + 1;
          if (uVar9 == 0xffffffffffffffff) goto LAB_140d4a135;
          uVar19 = (ulonglong)
                   (uVar18 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
          uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
        }
        ppVar24 = (pas_bitfit_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
        if (ppVar24 == (pas_bitfit_page *)0x0) goto LAB_140d4a135;
LAB_140d4a1d2:
        switch((ppVar24->base).page_kind) {
        case '\x01':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x02':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x03':
          if (((uint)ppVar24[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar18 = uVar17 & 0x1ffff;
          uVar22 = (ulonglong)(uVar18 >> 0xc);
          uVar19 = (ulonglong)
                   *(uint *)((ppVar24[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
          lVar16 = pas_compact_heap_reservation_base + uVar19 * 8;
          if (uVar19 == 0) {
            lVar16 = 0;
          }
          ppVar12 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar16 + 0xb) * 8);
          if (*(uint3 *)(lVar16 + 0xb) == 0) {
            ppVar12 = (pas_heap *)0x0;
          }
          uVar19 = (ulonglong)((ppVar12->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar12 = *(pas_heap **)&(ppVar12->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = (pas_heap *)0x0;
          }
          if (ppVar12 != ppVar8) {
LAB_140d4abcf:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar12,ppVar8,param_2,uVar19,param_3);
          }
          pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 == (void *)0x0) break;
          if (param_3 < uVar19) {
            uVar19 = param_3;
          }
          memcpy(pvVar7,param_2,uVar19);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (*(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08) < 2) goto LAB_140d4a460;
          if (bmalloc_medium_page_header_table.hashtable.table ==
              (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
            ppVar23 = (pas_segregated_page *)0x0;
          }
          else {
            uVar14 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                     (uint)((ulonglong)param_2 >> 0x11);
            uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
            uVar14 = uVar14 >> 0xb ^ uVar14;
            uVar19 = (ulonglong)
                     ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14);
            uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
            if (uVar9 != uVar6) {
              ppVar23 = (pas_segregated_page *)0x0;
              do {
                uVar14 = uVar14 + 1;
                if (uVar9 == 0xffffffffffffffff) goto LAB_140d4a987;
                uVar19 = (ulonglong)
                         (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              } while (uVar9 != uVar6);
            }
            ppVar23 = (pas_segregated_page *)
                      (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
          }
LAB_140d4a987:
          if (ppVar23->lock_ptr == (pas_lock *)0x0) {
            pRVar11 = (PSRWLOCK)0x0;
          }
          else {
            pRVar11 = (PSRWLOCK)
                      pas_segregated_page_switch_lock_slow
                                (ppVar23,(pas_lock *)0x0,ppVar23->lock_ptr);
          }
          uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 0xc) & 0x1c);
          uVar17 = *(uint *)((longlong)ppVar23->alloc_bits + uVar6) & ~(1 << (uVar17 >> 9 & 0x1f));
          *(uint *)((longlong)ppVar23->alloc_bits + uVar6) = uVar17;
          ppVar10 = ppVar23->owner;
          if (((uint)ppVar10 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar6 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar10 & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
          ppVar13 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base);
          if (uVar6 == 0) {
            ppVar13 = (pas_segregated_partial_view *)0x0;
          }
          if (!ppVar13->eligibility_has_been_noted) {
            pas_segregated_partial_view_note_eligibility(ppVar13,ppVar23);
            ppVar10 = ppVar23->owner;
          }
          if (((ulonglong)ppVar10 & 6) == 0) {
            uVar14 = ppVar23->object_size;
          }
          else {
            if (((uint)ppVar10 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar10 & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
            lVar16 = pas_compact_heap_reservation_base + uVar6 * 8;
            if (uVar6 == 0) {
              lVar16 = 0;
            }
            uVar14 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar16 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar16 + 0xb) * 8) + 0x20 +
                              pas_compact_heap_reservation_base) & 0x7ffffff;
          }
          if (uVar14 == 0) {
LAB_140d4aa65:
            bVar5 = false;
          }
          else {
            if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = ((ulonglong)uVar14 + (ulonglong)uVar18) - 1 >> 0xc;
            if (uVar6 < uVar22) goto LAB_140d4aa65;
            bVar5 = false;
            do {
              cVar2 = *(char *)((longlong)ppVar23[1].alloc_bits + (uVar22 - 0x10));
              if (cVar2 == '\0') {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              if (cVar2 == -1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              *(char *)((longlong)ppVar23[1].alloc_bits + (uVar22 - 0x10)) = cVar2 + -1;
              bVar5 = (bool)(bVar5 | (char)(cVar2 + -1) == '\0');
              uVar22 = uVar22 + 1;
            } while (uVar6 + 1 != uVar22);
          }
          if (pas_segregated_page_deallocate_should_verify_granules == true) {
            pas_segregated_page_verify_granules(ppVar23);
          }
          if (bVar5) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar23,pas_note_emptiness_keep_num_non_empty_words);
          }
          if (uVar17 == 0) {
            uVar9 = (ppVar23->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar9 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (ppVar23,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (ppVar23->emptiness).num_non_empty_words_or_live_bytes = uVar9;
            }
          }
          if (pRVar11 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar11);
          }
          goto LAB_140d49fd8;
        case '\x04':
          uVar19 = ppVar24[1].use_epoch & 0xfffffffffffffff8;
          uVar22 = (ulonglong)
                   ((uint)*(byte *)(uVar19 + 10) * 0x80000 + (uint)*(ushort *)(uVar19 + 8) * 8);
          uVar19 = (ulonglong)
                   (*(uint *)(uVar22 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
          ppVar15 = *(pas_heap **)(uVar22 + 0x18 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) goto LAB_140d4abcf;
          pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar19) {
              uVar19 = param_3;
            }
            memcpy(pvVar7,param_2,uVar19);
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            ppVar3 = *(pas_thread_local_cache **)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08);
            if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
              uVar17 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                       (uint)((ulonglong)param_2 >> 0x11);
              uVar17 = uVar17 * 0x20 + (uVar17 ^ 0xdeadbeef);
              uVar17 = uVar17 >> 0xb ^ uVar17;
              uVar19 = (ulonglong)
                       ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar17);
              uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              while (uVar9 != uVar6) {
                uVar17 = uVar17 + 1;
                uVar19 = (ulonglong)
                         (uVar17 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              }
              uVar6 = (ulonglong)
                      *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].
                                high + 4) + ppVar3->num_logged_bytes;
              if (uVar6 < 0xc351) {
                ppVar3->num_logged_bytes = uVar6;
                uVar17 = ppVar3->deallocation_log_index;
                if ((ulonglong)uVar17 < 999) {
                  ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 7;
                  ppVar3->deallocation_log_index = uVar17 + 1;
                  goto LAB_140d49fd8;
                }
              }
              pas_thread_local_cache_append_deallocation_slow
                        (ppVar3,(ulong64)param_2,
                         pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role
                        );
              goto LAB_140d49fd8;
            }
            goto LAB_140d4a460;
          }
          break;
        case '\x05':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x06':
          uVar6 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                            (ppVar24,(ulong64)param_2);
          uVar19 = (ulonglong)(ppVar24->owner).payload;
          ppVar15 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar19 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar19 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) {
LAB_140d4ab6e:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar12,ppVar8,param_2,uVar6,param_3);
          }
          pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar6) {
              uVar6 = param_3;
            }
            memcpy(pvVar7,param_2,uVar6);
            bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar24,(ulong64)param_2);
            goto LAB_140d49fd8;
          }
          break;
        case '\a':
          uVar6 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                            (ppVar24,(ulong64)param_2);
          uVar19 = (ulonglong)(ppVar24->owner).payload;
          ppVar15 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar19 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar19 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) goto LAB_140d4ab6e;
          pvVar7 = bmalloc_try_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar6) {
              uVar6 = param_3;
            }
            memcpy(pvVar7,param_2,uVar6);
            bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar24,(ulong64)param_2);
            goto LAB_140d49fd8;
          }
          break;
        default:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
    }
  }
LAB_140d49fd6:
  pvVar7 = (void *)0x0;
LAB_140d49fd8:
  if ((local_48 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  return pvVar7;
}

// bmalloc_reallocate_flex @ 140d4ac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_reallocate_flex(pas_primitive_heap_ref *param_1,void *param_2,ulong64 param_3)

{
  uchar uVar1;
  char cVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  pas_heap *ppVar8;
  ulong64 uVar9;
  pas_segregated_view_opaque *ppVar10;
  PSRWLOCK pRVar11;
  pas_heap *ppVar12;
  pas_segregated_partial_view *ppVar13;
  uint uVar14;
  pas_heap *ppVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  pas_fast_megapage_kind pVar20;
  ulong64 *puVar21;
  ulonglong uVar22;
  pas_segregated_page *ppVar23;
  pas_bitfit_page *ppVar24;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  ppVar8 = (param_1->base).heap;
  if (ppVar8 == (pas_heap *)0x0) {
    ppVar8 = pas_ensure_heap_slow
                       (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                        &bmalloc_flex_runtime_config.base);
  }
  if (param_2 == (void *)0x0) {
    pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
    return pvVar7;
  }
  uVar17 = (uint)((ulonglong)param_2 >> 0x18);
  if (param_3 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar3 = *(pas_thread_local_cache **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
      uVar6 = (ulonglong)param_2 >> 0x18;
      if (((ulonglong)param_2 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar17 & 0x1f) & 1) == 0
         )) {
        uVar19 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
        pVar20 = pas_not_a_fast_megapage_kind;
        if ((uVar6 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar20 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar6 ||
            (pVar20 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar19 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar19 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar20 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar3,(ulong64)param_2,pas_deallocate_mode,pVar20);
          goto LAB_140d4ae26;
        }
      }
      uVar17 = ppVar3->deallocation_log_index;
      if ((ulonglong)uVar17 < 999) {
        ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 5;
        ppVar3->deallocation_log_index = uVar17 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar3,(ulong64)param_2,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
    }
  }
  else {
    uVar6 = (ulonglong)param_2 >> 0x18;
    if (((ulonglong)param_2 >> 0x2b == 0) &&
       ((bmalloc_megapage_table.fast_bits[(ulonglong)param_2 >> 0x1d] >> (uVar17 & 0x1f) & 1) != 0))
    {
switchD_140d4aef2_caseD_1:
      uVar6 = *(ulonglong *)(((ulonglong)param_2 & 0xffffffffffffc000) + 0x20) & 0xfffffffffffffff8;
      uVar19 = (ulonglong)((uint)*(byte *)(uVar6 + 10) * 0x80000 + (uint)*(ushort *)(uVar6 + 8) * 8)
      ;
      uVar6 = (ulonglong)(*(uint *)(uVar19 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
      ppVar12 = *(pas_heap **)(uVar19 + 0x18 + pas_compact_heap_reservation_base);
      ppVar15 = (pas_heap *)0x0;
      if (((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
        ppVar15 = ppVar12;
      }
      if (ppVar15 != ppVar8) {
                    /* WARNING: Subroutine does not return */
        pas_reallocation_did_fail
                  ("Attempting to teleport heaps",ppVar15,ppVar8,param_2,uVar6,param_3);
      }
      pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
      if (pvVar7 != (void *)0x0) {
        if (param_3 < uVar6) {
          uVar6 = param_3;
        }
        memcpy(pvVar7,param_2,uVar6);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        ppVar3 = *(pas_thread_local_cache **)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9c08);
        if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
          uVar17 = ppVar3->deallocation_log_index;
          if ((ulonglong)uVar17 < 999) {
            ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 5;
            ppVar3->deallocation_log_index = uVar17 + 1;
          }
          else {
            pas_thread_local_cache_append_deallocation_slow
                      (ppVar3,(ulong64)param_2,
                       pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
          }
        }
        else {
          pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        }
        goto LAB_140d4ae28;
      }
    }
    else {
      uVar19 = uVar6 - (bmalloc_megapage_table.instance)->index_begin;
      uVar17 = (uint)param_2;
      if (((bmalloc_megapage_table.instance)->index_begin <= uVar6) &&
         (uVar6 < (bmalloc_megapage_table.instance)->index_end)) {
        switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                        (uVar19 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar19 * '\x02' & 0x1fU) & 3)
        {
        case 0:
          goto switchD_140d4aef2_caseD_0;
        case 1:
          goto switchD_140d4aef2_caseD_1;
        case 2:
          ppVar23 = (pas_segregated_page *)((ulonglong)param_2 & 0xffffffffffffc000);
          uVar1 = (ppVar23->base).page_kind;
          if (uVar1 == '\x05') {
            uVar6 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                              ((pas_bitfit_page *)ppVar23,(ulong64)param_2);
            ppVar15 = *(pas_heap **)
                       ((ulonglong)
                        ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 +
                                        (ulonglong)ppVar23->object_size * 8) * 0x80000 +
                        (uint)*(ushort *)
                               (pas_compact_heap_reservation_base + 8 +
                               (ulonglong)ppVar23->object_size * 8) * 8) + 0x30 +
                       pas_compact_heap_reservation_base);
            ppVar12 = (pas_heap *)0x0;
            if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
              ppVar12 = ppVar15;
            }
            if (ppVar12 != ppVar8) goto LAB_140d4b9be;
            pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
            if (pvVar7 != (void *)0x0) {
              if (param_3 < uVar6) {
                uVar6 = param_3;
              }
              memcpy(pvVar7,param_2,uVar6);
              bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                        ((pas_bitfit_page *)ppVar23,(ulong64)param_2);
              goto LAB_140d4ae28;
            }
            goto LAB_140d4ae26;
          }
          if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (((uint)ppVar23->owner & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar19 = (ulonglong)((uint)((ulonglong)param_2 >> 8) & 0x3f);
          uVar6 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar23->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
          lVar16 = pas_compact_heap_reservation_base + uVar6 * 8;
          if (uVar6 == 0) {
            lVar16 = 0;
          }
          ppVar12 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar16 + 0xb) * 8);
          if (*(uint3 *)(lVar16 + 0xb) == 0) {
            ppVar12 = (pas_heap *)0x0;
          }
          uVar6 = (ulonglong)((ppVar12->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar12 = *(pas_heap **)&(ppVar12->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = (pas_heap *)0x0;
          }
          if (ppVar12 != ppVar8) goto LAB_140d4b9be;
          pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 == (void *)0x0) goto LAB_140d4ae26;
          if (param_3 < uVar6) {
            uVar6 = param_3;
          }
          memcpy(pvVar7,param_2,uVar6);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (1 < *(ulonglong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9c08)) {
            if (ppVar23->lock_ptr == (pas_lock *)0x0) {
              pRVar11 = (PSRWLOCK)0x0;
            }
            else {
              pRVar11 = (PSRWLOCK)
                        pas_segregated_page_switch_lock_slow
                                  (ppVar23,(pas_lock *)0x0,ppVar23->lock_ptr);
            }
            uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 7) & 0x7c);
            uVar17 = *(uint *)((longlong)ppVar23->alloc_bits + uVar6) & ~(1 << (uVar17 >> 4 & 0x1f))
            ;
            *(uint *)((longlong)ppVar23->alloc_bits + uVar6) = uVar17;
            if (((uint)ppVar23->owner & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar23->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
            ppVar13 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base)
            ;
            if (uVar6 == 0) {
              ppVar13 = (pas_segregated_partial_view *)0x0;
            }
            if (!ppVar13->eligibility_has_been_noted) {
              pas_segregated_partial_view_note_eligibility(ppVar13,ppVar23);
            }
            if (uVar17 == 0) {
              uVar9 = (ppVar23->emptiness).num_non_empty_words_or_live_bytes - 1;
              if (uVar9 == 0) {
                pas_segregated_page_note_emptiness_impl
                          (ppVar23,pas_note_emptiness_clear_num_non_empty_words);
              }
              else {
                (ppVar23->emptiness).num_non_empty_words_or_live_bytes = uVar9;
              }
            }
            if (pRVar11 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(pRVar11);
            }
            goto LAB_140d4ae28;
          }
          break;
        case 3:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
LAB_140d4b2b0:
        pas_try_deallocate_slow_no_cache(param_2,&bmalloc_heap_config,pas_deallocate_mode);
        goto LAB_140d4ae28;
      }
switchD_140d4aef2_caseD_0:
      uVar6 = (ulonglong)param_2 & 0xfffffffffffe0000;
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4af85:
        if (bmalloc_marge_page_header_table.hashtable.table !=
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
          uVar18 = (uint)((ulonglong)param_2 >> 0x1a) & 0xfffffff ^
                   (uint)((ulonglong)param_2 >> 0x16);
          uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
          uVar18 = uVar18 >> 0xb ^ uVar18;
          uVar19 = (ulonglong)
                   ((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar18);
          uVar9 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
          while (uVar9 != ((ulonglong)param_2 & 0xffffffffffc00000)) {
            uVar18 = uVar18 + 1;
            if (uVar9 == 0xffffffffffffffff) goto LAB_140d4b326;
            uVar19 = (ulonglong)
                     (uVar18 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
            uVar9 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
          }
          ppVar24 = (pas_bitfit_page *)
                    (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].high;
          if (ppVar24 != (pas_bitfit_page *)0x0) goto LAB_140d4b022;
        }
LAB_140d4b326:
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pas_large_map_find(&local_60,(ulong64)param_2);
        if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Source object not allocated",(void *)0x0,ppVar8,param_2,0,param_3);
        }
        if ((void *)local_60.begin != param_2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar6 = local_60.end - (longlong)param_2;
        if (local_60.end < param_2 || uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        puVar21 = &local_60.heap[-3].free_heap.num_mapped_bytes;
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        if (ppVar8 != (pas_heap *)puVar21) {
                    /* WARNING: Subroutine does not return */
          pas_reallocation_did_fail
                    ("Attempting to teleport heaps",puVar21,ppVar8,param_2,uVar6,param_3);
        }
        pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
        if (pvVar7 != (void *)0x0) {
          if (param_3 < uVar6) {
            uVar6 = param_3;
          }
          memcpy(pvVar7,param_2,uVar6);
          pas_deallocate_known_large(param_2,&bmalloc_heap_config);
          goto LAB_140d4ae28;
        }
      }
      else {
        uVar18 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_2 >> 0x11)
        ;
        uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
        uVar18 = uVar18 >> 0xb ^ uVar18;
        uVar19 = (ulonglong)
                 ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar18);
        uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
        while (uVar9 != uVar6) {
          uVar18 = uVar18 + 1;
          if (uVar9 == 0xffffffffffffffff) goto LAB_140d4af85;
          uVar19 = (ulonglong)
                   (uVar18 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
          uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
        }
        ppVar24 = (pas_bitfit_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
        if (ppVar24 == (pas_bitfit_page *)0x0) goto LAB_140d4af85;
LAB_140d4b022:
        switch((ppVar24->base).page_kind) {
        case '\x01':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x02':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x03':
          if (((uint)ppVar24[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar18 = uVar17 & 0x1ffff;
          uVar22 = (ulonglong)(uVar18 >> 0xc);
          uVar19 = (ulonglong)
                   *(uint *)((ppVar24[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
          lVar16 = pas_compact_heap_reservation_base + uVar19 * 8;
          if (uVar19 == 0) {
            lVar16 = 0;
          }
          ppVar12 = (pas_heap *)
                    (pas_compact_heap_reservation_base +
                    (ulonglong)(uint)*(uint3 *)(lVar16 + 0xb) * 8);
          if (*(uint3 *)(lVar16 + 0xb) == 0) {
            ppVar12 = (pas_heap *)0x0;
          }
          uVar19 = (ulonglong)((ppVar12->segregated_heap).bitfit_heap.payload & 0x7ffffff);
          ppVar12 = *(pas_heap **)&(ppVar12->segregated_heap).basic_size_directory_and_head;
          if (!((ppVar12->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = (pas_heap *)0x0;
          }
          if (ppVar12 != ppVar8) {
LAB_140d4ba1f:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar12,ppVar8,param_2,uVar19,param_3);
          }
          pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 == (void *)0x0) break;
          if (param_3 < uVar19) {
            uVar19 = param_3;
          }
          memcpy(pvVar7,param_2,uVar19);
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d48)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          if (*(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08) < 2) goto LAB_140d4b2b0;
          if (bmalloc_medium_page_header_table.hashtable.table ==
              (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
            ppVar23 = (pas_segregated_page *)0x0;
          }
          else {
            uVar14 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                     (uint)((ulonglong)param_2 >> 0x11);
            uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
            uVar14 = uVar14 >> 0xb ^ uVar14;
            uVar19 = (ulonglong)
                     ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14);
            uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
            if (uVar9 != uVar6) {
              ppVar23 = (pas_segregated_page *)0x0;
              do {
                uVar14 = uVar14 + 1;
                if (uVar9 == 0xffffffffffffffff) goto LAB_140d4b7d7;
                uVar19 = (ulonglong)
                         (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              } while (uVar9 != uVar6);
            }
            ppVar23 = (pas_segregated_page *)
                      (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
          }
LAB_140d4b7d7:
          if (ppVar23->lock_ptr == (pas_lock *)0x0) {
            pRVar11 = (PSRWLOCK)0x0;
          }
          else {
            pRVar11 = (PSRWLOCK)
                      pas_segregated_page_switch_lock_slow
                                (ppVar23,(pas_lock *)0x0,ppVar23->lock_ptr);
          }
          uVar6 = (ulonglong)((uint)((ulonglong)param_2 >> 0xc) & 0x1c);
          uVar17 = *(uint *)((longlong)ppVar23->alloc_bits + uVar6) & ~(1 << (uVar17 >> 9 & 0x1f));
          *(uint *)((longlong)ppVar23->alloc_bits + uVar6) = uVar17;
          ppVar10 = ppVar23->owner;
          if (((uint)ppVar10 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar6 = (ulonglong)
                  *(uint *)(((ulonglong)ppVar10 & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
          ppVar13 = (pas_segregated_partial_view *)(uVar6 * 8 + pas_compact_heap_reservation_base);
          if (uVar6 == 0) {
            ppVar13 = (pas_segregated_partial_view *)0x0;
          }
          if (!ppVar13->eligibility_has_been_noted) {
            pas_segregated_partial_view_note_eligibility(ppVar13,ppVar23);
            ppVar10 = ppVar23->owner;
          }
          if (((ulonglong)ppVar10 & 6) == 0) {
            uVar14 = ppVar23->object_size;
          }
          else {
            if (((uint)ppVar10 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = (ulonglong)
                    *(uint *)(((ulonglong)ppVar10 & 0xfffffffffffffff8) + 0x14 + uVar22 * 4);
            lVar16 = pas_compact_heap_reservation_base + uVar6 * 8;
            if (uVar6 == 0) {
              lVar16 = 0;
            }
            uVar14 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar16 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar16 + 0xb) * 8) + 0x20 +
                              pas_compact_heap_reservation_base) & 0x7ffffff;
          }
          if (uVar14 == 0) {
LAB_140d4b8b5:
            bVar5 = false;
          }
          else {
            if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = ((ulonglong)uVar14 + (ulonglong)uVar18) - 1 >> 0xc;
            if (uVar6 < uVar22) goto LAB_140d4b8b5;
            bVar5 = false;
            do {
              cVar2 = *(char *)((longlong)ppVar23[1].alloc_bits + (uVar22 - 0x10));
              if (cVar2 == '\0') {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              if (cVar2 == -1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              *(char *)((longlong)ppVar23[1].alloc_bits + (uVar22 - 0x10)) = cVar2 + -1;
              bVar5 = (bool)(bVar5 | (char)(cVar2 + -1) == '\0');
              uVar22 = uVar22 + 1;
            } while (uVar6 + 1 != uVar22);
          }
          if (pas_segregated_page_deallocate_should_verify_granules == true) {
            pas_segregated_page_verify_granules(ppVar23);
          }
          if (bVar5) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar23,pas_note_emptiness_keep_num_non_empty_words);
          }
          if (uVar17 == 0) {
            uVar9 = (ppVar23->emptiness).num_non_empty_words_or_live_bytes - 1;
            if (uVar9 == 0) {
              pas_segregated_page_note_emptiness_impl
                        (ppVar23,pas_note_emptiness_clear_num_non_empty_words);
            }
            else {
              (ppVar23->emptiness).num_non_empty_words_or_live_bytes = uVar9;
            }
          }
          if (pRVar11 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar11);
          }
          goto LAB_140d4ae28;
        case '\x04':
          uVar19 = ppVar24[1].use_epoch & 0xfffffffffffffff8;
          uVar22 = (ulonglong)
                   ((uint)*(byte *)(uVar19 + 10) * 0x80000 + (uint)*(ushort *)(uVar19 + 8) * 8);
          uVar19 = (ulonglong)
                   (*(uint *)(uVar22 + 0x20 + pas_compact_heap_reservation_base) & 0x7ffffff);
          ppVar15 = *(pas_heap **)(uVar22 + 0x18 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) goto LAB_140d4ba1f;
          pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar19) {
              uVar19 = param_3;
            }
            memcpy(pvVar7,param_2,uVar19);
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            ppVar3 = *(pas_thread_local_cache **)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08);
            if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
              uVar17 = (uint)((ulonglong)param_2 >> 0x15) & 0xfffffff ^
                       (uint)((ulonglong)param_2 >> 0x11);
              uVar17 = uVar17 * 0x20 + (uVar17 ^ 0xdeadbeef);
              uVar17 = uVar17 >> 0xb ^ uVar17;
              uVar19 = (ulonglong)
                       ((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar17);
              uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              while (uVar9 != uVar6) {
                uVar17 = uVar17 + 1;
                uVar19 = (ulonglong)
                         (uVar17 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
                uVar9 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
              }
              uVar6 = (ulonglong)
                      *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].
                                high + 4) + ppVar3->num_logged_bytes;
              if (uVar6 < 0xc351) {
                ppVar3->num_logged_bytes = uVar6;
                uVar17 = ppVar3->deallocation_log_index;
                if ((ulonglong)uVar17 < 999) {
                  ppVar3->deallocation_log[uVar17] = (longlong)param_2 << 6 | 7;
                  ppVar3->deallocation_log_index = uVar17 + 1;
                  goto LAB_140d4ae28;
                }
              }
              pas_thread_local_cache_append_deallocation_slow
                        (ppVar3,(ulong64)param_2,
                         pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role
                        );
              goto LAB_140d4ae28;
            }
            goto LAB_140d4b2b0;
          }
          break;
        case '\x05':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x06':
          uVar6 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                            (ppVar24,(ulong64)param_2);
          uVar19 = (ulonglong)(ppVar24->owner).payload;
          ppVar15 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar19 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar19 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) {
LAB_140d4b9be:
                    /* WARNING: Subroutine does not return */
            pas_reallocation_did_fail
                      ("Attempting to teleport heaps",ppVar12,ppVar8,param_2,uVar6,param_3);
          }
          pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar6) {
              uVar6 = param_3;
            }
            memcpy(pvVar7,param_2,uVar6);
            bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar24,(ulong64)param_2);
            goto LAB_140d4ae28;
          }
          break;
        case '\a':
          uVar6 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                            (ppVar24,(ulong64)param_2);
          uVar19 = (ulonglong)(ppVar24->owner).payload;
          ppVar15 = *(pas_heap **)
                     ((ulonglong)
                      ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 + uVar19 * 8) *
                       0x80000 +
                      (uint)*(ushort *)(pas_compact_heap_reservation_base + 8 + uVar19 * 8) * 8) +
                      0x30 + pas_compact_heap_reservation_base);
          ppVar12 = (pas_heap *)0x0;
          if (((ppVar15->segregated_heap).runtime_config)->is_part_of_heap) {
            ppVar12 = ppVar15;
          }
          if (ppVar12 != ppVar8) goto LAB_140d4b9be;
          pvVar7 = bmalloc_allocate_flex_impl_for_realloc(param_1,param_3);
          if (pvVar7 != (void *)0x0) {
            if (param_3 < uVar6) {
              uVar6 = param_3;
            }
            memcpy(pvVar7,param_2,uVar6);
            bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page
                      (ppVar24,(ulong64)param_2);
            goto LAB_140d4ae28;
          }
          break;
        default:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
    }
  }
LAB_140d4ae26:
  pvVar7 = (void *)0x0;
LAB_140d4ae28:
  if ((local_48 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar4 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar4)();
    return pvVar7;
  }
  return pvVar7;
}

// bmalloc_flex_heap_ref_get_heap @ 140d4ba50

pas_heap * __cdecl bmalloc_flex_heap_ref_get_heap(pas_primitive_heap_ref *param_1)

{
  pas_heap *ppVar1;
  
  ppVar1 = (param_1->base).heap;
  if (ppVar1 != (pas_heap *)0x0) {
    return ppVar1;
  }
  ppVar1 = pas_ensure_heap_slow
                     (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                      &bmalloc_flex_runtime_config.base);
  return ppVar1;
}

// bmalloc_try_allocate_auxiliary_with_alignment_casual @ 140d4ba80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_allocate_auxiliary_with_alignment_casual
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_allocate_auxiliary_impl_casual_case(&local_18,param_1,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_allocate_auxiliary_impl_casual_case @ 140d4bad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_allocate_auxiliary_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,pas_primitive_heap_ref *param_1,
          ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  pas_heap *ppVar9;
  pas_allocation_result *ppVar10;
  ulong64 uVar11;
  pas_zero_mode pVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStackY_88 [32];
  bool local_50 [2];
  byte bStack_4e;
  undefined5 uStack_4d;
  undefined8 local_48;
  undefined2 local_3c;
  byte local_3a;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  ppVar10 = (pas_allocation_result *)(param_3 - 1);
  if ((pas_allocation_result *)(param_3 ^ (ulonglong)ppVar10) <= ppVar10) {
    __return_storage_ptr__->begin = 0;
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar10;
    }
    goto LAB_140d4bd4a;
  }
  uVar13 = param_2;
  if ((param_3 != 1) && (uVar13 = param_3, param_3 <= param_2)) {
    uVar13 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar16 = uVar13 + 0xf >> 4;
  if (uVar16 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar9 = (param_1->base).heap;
    if (ppVar9 == (pas_heap *)0x0) {
      ppVar9 = pas_ensure_heap_slow
                         (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                          &bmalloc_primitive_runtime_config.base);
      uVar8 = (ppVar9->segregated_heap).small_index_upper_bound;
    }
    else {
      uVar8 = (ppVar9->segregated_heap).small_index_upper_bound;
    }
    if (uVar16 < uVar8) {
      puVar2 = (ppVar9->segregated_heap).index_to_small_allocator_index;
      if (puVar2 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = puVar2[uVar16];
      }
    }
    else {
      uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                        (&ppVar9->segregated_heap,uVar16,
                         pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                         ,pas_lock_is_not_held);
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d4bc66:
      local_50[0] = false;
      local_48 = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_48 = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_50[0] = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d4bc66;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)local_50,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)local_50,uVar8,&bmalloc_heap_config);
  }
  bVar6 = local_50[0];
  if (((param_3 != 1) && ((local_50[0] & 1U) != 0)) &&
     ((ulonglong)(1L << (local_48->alignment_shift & 0x3f)) < param_3)) {
    bVar6 = 0;
  }
  if ((bVar6 & 1) == 0) {
    ppVar10 = bmalloc_try_allocate_auxiliary_impl_impl_slow
                        (__return_storage_ptr__,&param_1->base,uVar13,param_3);
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar10;
    }
    goto LAB_140d4bd4a;
  }
  (local_48->scavenger_data).is_in_use = true;
  uVar8 = local_48->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar11 = local_48->page_ish;
    uVar16 = local_48->current_word;
    if (uVar16 != 0) {
LAB_140d4bcd6:
      uVar14 = 0;
      for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar14 = uVar14 + 1;
      }
      local_48->current_word = uVar16 & ~(1L << (uVar14 & 0x3f));
      uVar11 = (uint)((int)uVar14 << 4) + uVar11;
      goto LAB_140d4bce9;
    }
    if (local_48->config_kind == 6) {
      uVar8 = local_48->end_offset;
      uVar1 = local_48->current_offset;
      uVar14 = (ulonglong)uVar1;
      if (uVar1 < uVar8) {
        local_48->bits[uVar14] = 0;
        lVar15 = 0;
        do {
          if ((uVar8 - 1) - uVar14 == lVar15) {
            local_48->current_offset = uVar8;
            goto LAB_140d4bdb1;
          }
          uVar11 = uVar11 + 0x400;
          uVar16 = local_48[1].bits[uVar14 + lVar15 + -8];
          lVar15 = lVar15 + 1;
        } while (uVar16 == 0);
        local_48->current_offset = uVar1 + (int)lVar15;
        local_48->page_ish = uVar11;
        goto LAB_140d4bcd6;
      }
LAB_140d4bdb1:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_50,local_48,&bmalloc_allocator_counts,
                 pas_allocation_result_identity);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_50,local_48,uVar13,param_3,&bmalloc_allocator_counts
                 ,pas_allocation_result_identity);
    }
    uVar11 = CONCAT53(uStack_4d,CONCAT12(bStack_4e,CONCAT11(local_50[1],local_50[0])));
    bStack_4e = local_48._3_1_;
    local_3c = local_48._1_2_;
    local_50[0] = SUB81((ulonglong)local_48 >> 8,0);
    local_50[1] = SUB81((ulonglong)local_48 >> 0x10,0);
    bVar7 = local_48._0_1_;
    pVar12 = local_48._4_4_;
    local_3a = bStack_4e;
  }
  else {
    local_48->remaining = uVar8 - local_48->object_size;
    uVar11 = local_48->payload_end - (ulonglong)uVar8;
LAB_140d4bce9:
    (local_48->scavenger_data).is_in_use = false;
    bVar7 = true;
    pVar12 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = uVar11;
  __return_storage_ptr__->did_succeed = bVar7;
  *(ushort *)&__return_storage_ptr__->field_0x9 = CONCAT11(local_50[1],local_50[0]);
  __return_storage_ptr__->field_0xb = bStack_4e;
  __return_storage_ptr__->zero_mode = pVar12;
  if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)bStack_4e;
  }
LAB_140d4bd4a:
  pcVar4 = (code *)swi(3);
  ppVar10 = (pas_allocation_result *)(*pcVar4)();
  return ppVar10;
}

// bmalloc_allocate_auxiliary_with_alignment_casual @ 140d4be30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_allocate_auxiliary_with_alignment_casual
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_allocate_auxiliary_impl_casual_case(&local_18,param_1,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_allocate_auxiliary_impl_casual_case @ 140d4be80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_allocate_auxiliary_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,pas_primitive_heap_ref *param_1,
          ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  pas_heap *ppVar9;
  pas_allocation_result *ppVar10;
  ulong64 uVar11;
  pas_zero_mode pVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStackY_88 [32];
  bool local_50 [2];
  byte bStack_4e;
  undefined5 uStack_4d;
  undefined8 local_48;
  undefined2 local_3c;
  byte local_3a;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  uVar13 = param_2;
  if ((param_3 != 1) && (uVar13 = param_3, param_3 <= param_2)) {
    uVar13 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar16 = uVar13 + 0xf >> 4;
  if (uVar16 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar9 = (param_1->base).heap;
    if (ppVar9 == (pas_heap *)0x0) {
      ppVar9 = pas_ensure_heap_slow
                         (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                          &bmalloc_primitive_runtime_config.base);
      uVar8 = (ppVar9->segregated_heap).small_index_upper_bound;
    }
    else {
      uVar8 = (ppVar9->segregated_heap).small_index_upper_bound;
    }
    if (uVar16 < uVar8) {
      puVar2 = (ppVar9->segregated_heap).index_to_small_allocator_index;
      if (puVar2 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = puVar2[uVar16];
      }
    }
    else {
      uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                        (&ppVar9->segregated_heap,uVar16,
                         pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                         ,pas_lock_is_not_held);
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d4bfee:
      local_50[0] = false;
      local_48 = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_48 = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_50[0] = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d4bfee;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)local_50,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)local_50,uVar8,&bmalloc_heap_config);
  }
  bVar6 = local_50[0];
  if (((param_3 != 1) && ((local_50[0] & 1U) != 0)) &&
     ((ulonglong)(1L << (local_48->alignment_shift & 0x3f)) < param_3)) {
    bVar6 = 0;
  }
  if ((bVar6 & 1) == 0) {
    ppVar10 = bmalloc_allocate_auxiliary_impl_impl_slow
                        (__return_storage_ptr__,&param_1->base,uVar13,param_3);
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar10;
    }
    goto LAB_140d4c0d2;
  }
  (local_48->scavenger_data).is_in_use = true;
  uVar8 = local_48->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar11 = local_48->page_ish;
    uVar16 = local_48->current_word;
    if (uVar16 != 0) {
LAB_140d4c05e:
      uVar14 = 0;
      for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar14 = uVar14 + 1;
      }
      local_48->current_word = uVar16 & ~(1L << (uVar14 & 0x3f));
      uVar11 = (uint)((int)uVar14 << 4) + uVar11;
      goto LAB_140d4c071;
    }
    if (local_48->config_kind == 6) {
      uVar8 = local_48->end_offset;
      uVar1 = local_48->current_offset;
      uVar14 = (ulonglong)uVar1;
      if (uVar1 < uVar8) {
        local_48->bits[uVar14] = 0;
        lVar15 = 0;
        do {
          if ((uVar8 - 1) - uVar14 == lVar15) {
            local_48->current_offset = uVar8;
            goto LAB_140d4c139;
          }
          uVar11 = uVar11 + 0x400;
          uVar16 = local_48[1].bits[uVar14 + lVar15 + -8];
          lVar15 = lVar15 + 1;
        } while (uVar16 == 0);
        local_48->current_offset = uVar1 + (int)lVar15;
        local_48->page_ish = uVar11;
        goto LAB_140d4c05e;
      }
LAB_140d4c139:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_50,local_48,&bmalloc_allocator_counts,
                 pas_allocation_result_crash_on_error);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_50,local_48,uVar13,param_3,&bmalloc_allocator_counts
                 ,pas_allocation_result_crash_on_error);
    }
    uVar11 = CONCAT53(uStack_4d,CONCAT12(bStack_4e,CONCAT11(local_50[1],local_50[0])));
    bStack_4e = local_48._3_1_;
    local_3c = local_48._1_2_;
    local_50[0] = SUB81((ulonglong)local_48 >> 8,0);
    local_50[1] = SUB81((ulonglong)local_48 >> 0x10,0);
    bVar7 = local_48._0_1_;
    pVar12 = local_48._4_4_;
    local_3a = bStack_4e;
  }
  else {
    local_48->remaining = uVar8 - local_48->object_size;
    uVar11 = local_48->payload_end - (ulonglong)uVar8;
LAB_140d4c071:
    (local_48->scavenger_data).is_in_use = false;
    bVar7 = true;
    pVar12 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = uVar11;
  __return_storage_ptr__->did_succeed = bVar7;
  *(ushort *)&__return_storage_ptr__->field_0x9 = CONCAT11(local_50[1],local_50[0]);
  __return_storage_ptr__->field_0xb = bStack_4e;
  __return_storage_ptr__->zero_mode = pVar12;
  if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)bStack_4e;
  }
LAB_140d4c0d2:
  pcVar4 = (code *)swi(3);
  ppVar10 = (pas_allocation_result *)(*pcVar4)();
  return ppVar10;
}

// bmalloc_try_allocate_auxiliary @ 140d4c1c0

void * __cdecl bmalloc_try_allocate_auxiliary(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar5 = param_2 + 0xf >> 4;
  if (uVar5 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar3 = (param_1->base).heap;
    if (ppVar3 == (pas_heap *)0x0) goto LAB_140d4c24b;
    uVar8 = 0;
    if ((uVar5 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0)) {
      uVar8 = puVar4[uVar5];
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar5 < 2) || (*(uint *)(uVar5 + 0x1f74) <= uVar8)) goto LAB_140d4c24b;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar5 + uVar9 * 8;
  *(undefined1 *)(uVar5 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar5 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d4c2bd;
  }
  lVar11 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d4c2aa:
    uVar5 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar11);
LAB_140d4c2bd:
    *(undefined1 *)(lVar1 + 0x1f80) = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar12 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar12 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar8 - 1) - uVar12 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d4c32a;
        }
        lVar11 = lVar11 + 0x400;
        uVar10 = *(ulonglong *)(uVar9 * 8 + uVar12 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar11;
      goto LAB_140d4c2aa;
    }
  }
LAB_140d4c32a:
  *(undefined1 *)(lVar1 + 0x1f80) = 0;
LAB_140d4c24b:
  pvVar6 = bmalloc_try_allocate_auxiliary_with_alignment_casual(param_1,param_2,1);
  return pvVar6;
}

// bmalloc_allocate_auxiliary @ 140d4c340

void * __cdecl bmalloc_allocate_auxiliary(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar5 = param_2 + 0xf >> 4;
  if (uVar5 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar3 = (param_1->base).heap;
    if (ppVar3 == (pas_heap *)0x0) goto LAB_140d4c3cb;
    uVar8 = 0;
    if ((uVar5 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0)) {
      uVar8 = puVar4[uVar5];
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar5 < 2) || (*(uint *)(uVar5 + 0x1f74) <= uVar8)) goto LAB_140d4c3cb;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar5 + uVar9 * 8;
  *(undefined1 *)(uVar5 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar5 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d4c43d;
  }
  lVar11 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d4c42a:
    uVar5 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar11);
LAB_140d4c43d:
    *(undefined1 *)(lVar1 + 0x1f80) = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar12 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar12 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar8 - 1) - uVar12 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d4c4aa;
        }
        lVar11 = lVar11 + 0x400;
        uVar10 = *(ulonglong *)(uVar9 * 8 + uVar12 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar11;
      goto LAB_140d4c42a;
    }
  }
LAB_140d4c4aa:
  *(undefined1 *)(lVar1 + 0x1f80) = 0;
LAB_140d4c3cb:
  pvVar6 = bmalloc_allocate_auxiliary_with_alignment_casual(param_1,param_2,1);
  return pvVar6;
}

// bmalloc_try_allocate_auxiliary_zeroed @ 140d4c4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_allocate_auxiliary_zeroed(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar6 = param_2 + 0xf >> 4;
  if (uVar6 == param_1->cached_index) {
    uVar10 = (param_1->base).allocator_index;
LAB_140d4c510:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar6) && (uVar10 < *(uint *)(uVar6 + 0x1f74))) {
      uVar12 = (ulonglong)uVar10;
      lVar1 = uVar6 + uVar12 * 8;
      *(undefined1 *)(uVar6 + 0x1f80 + uVar12 * 8) = 1;
      uVar10 = *(uint *)(uVar6 + 0x1f98 + uVar12 * 8);
      if ((ulonglong)uVar10 == 0) {
        lVar8 = *(longlong *)(lVar1 + 0x1fa0);
        uVar13 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar13 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar10 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar11 = (ulonglong)uVar2;
            if (uVar2 < uVar10) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar11 * 8) = 0;
              lVar9 = 0;
              do {
                if ((uVar10 - 1) - uVar11 == lVar9) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar10;
                  goto LAB_140d4c693;
                }
                lVar8 = lVar8 + 0x400;
                uVar13 = *(ulonglong *)(uVar12 * 8 + uVar11 * 8 + uVar6 + 0x1fc8 + lVar9 * 8);
                lVar9 = lVar9 + 1;
              } while (uVar13 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar9;
              *(longlong *)(lVar1 + 0x1fa0) = lVar8;
              goto LAB_140d4c5e9;
            }
          }
LAB_140d4c693:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d4c551;
        }
LAB_140d4c5e9:
        uVar6 = 0;
        for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar13 & ~(1L << (uVar6 & 0x3f));
        local_30.begin = (ulonglong)(uint)((int)uVar6 << 4) + lVar8;
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar10 - *(int *)(lVar1 + 0x1f9c);
        local_30.begin = *(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar10;
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      goto LAB_140d4c604;
    }
  }
  else {
    ppVar3 = (param_1->base).heap;
    if (ppVar3 != (pas_heap *)0x0) {
      uVar10 = 0;
      if ((uVar6 < (ppVar3->segregated_heap).small_index_upper_bound) &&
         (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0))
      {
        uVar10 = puVar4[uVar6];
      }
      goto LAB_140d4c510;
    }
  }
LAB_140d4c551:
  bmalloc_try_allocate_auxiliary_impl_casual_case(&local_30,param_1,param_2,1);
  if (((local_30.did_succeed & 1U) == 0) || (local_30.zero_mode != pas_zero_mode_may_have_non_zero))
  {
    if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)local_30.begin;
    }
    pcVar5 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar5)();
    return pvVar7;
  }
LAB_140d4c604:
  pvVar7 = memset((void *)local_30.begin,0,param_2);
  return pvVar7;
}

// bmalloc_allocate_auxiliary_zeroed @ 140d4c6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_allocate_auxiliary_zeroed(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [40];
  pas_allocation_result local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar6 = param_2 + 0xf >> 4;
  if (uVar6 == param_1->cached_index) {
    uVar10 = (param_1->base).allocator_index;
LAB_140d4c700:
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar6 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08);
    if ((1 < uVar6) && (uVar10 < *(uint *)(uVar6 + 0x1f74))) {
      uVar12 = (ulonglong)uVar10;
      lVar1 = uVar6 + uVar12 * 8;
      *(undefined1 *)(uVar6 + 0x1f80 + uVar12 * 8) = 1;
      uVar10 = *(uint *)(uVar6 + 0x1f98 + uVar12 * 8);
      if ((ulonglong)uVar10 == 0) {
        lVar8 = *(longlong *)(lVar1 + 0x1fa0);
        uVar13 = *(ulonglong *)(lVar1 + 0x1fb0);
        if (uVar13 == 0) {
          if (*(char *)(lVar1 + 0x1f88) == '\x06') {
            uVar10 = *(uint *)(lVar1 + 0x1fac);
            uVar2 = *(uint *)(lVar1 + 0x1fa8);
            uVar11 = (ulonglong)uVar2;
            if (uVar2 < uVar10) {
              *(undefined8 *)(lVar1 + 0x1fc0 + uVar11 * 8) = 0;
              lVar9 = 0;
              do {
                if ((uVar10 - 1) - uVar11 == lVar9) {
                  *(uint *)(lVar1 + 0x1fa8) = uVar10;
                  goto LAB_140d4c883;
                }
                lVar8 = lVar8 + 0x400;
                uVar13 = *(ulonglong *)(uVar12 * 8 + uVar11 * 8 + uVar6 + 0x1fc8 + lVar9 * 8);
                lVar9 = lVar9 + 1;
              } while (uVar13 == 0);
              *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar9;
              *(longlong *)(lVar1 + 0x1fa0) = lVar8;
              goto LAB_140d4c7d9;
            }
          }
LAB_140d4c883:
          *(undefined1 *)(lVar1 + 0x1f80) = 0;
          goto LAB_140d4c741;
        }
LAB_140d4c7d9:
        uVar6 = 0;
        for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        *(ulonglong *)(lVar1 + 0x1fb0) = uVar13 & ~(1L << (uVar6 & 0x3f));
        local_30.begin = (ulonglong)(uint)((int)uVar6 << 4) + lVar8;
      }
      else {
        *(uint *)(lVar1 + 0x1f98) = uVar10 - *(int *)(lVar1 + 0x1f9c);
        local_30.begin = *(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar10;
      }
      *(undefined1 *)(lVar1 + 0x1f80) = 0;
      goto LAB_140d4c7f4;
    }
  }
  else {
    ppVar3 = (param_1->base).heap;
    if (ppVar3 != (pas_heap *)0x0) {
      uVar10 = 0;
      if ((uVar6 < (ppVar3->segregated_heap).small_index_upper_bound) &&
         (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0))
      {
        uVar10 = puVar4[uVar6];
      }
      goto LAB_140d4c700;
    }
  }
LAB_140d4c741:
  bmalloc_allocate_auxiliary_impl_casual_case(&local_30,param_1,param_2,1);
  if (((local_30.did_succeed & 1U) == 0) || (local_30.zero_mode != pas_zero_mode_may_have_non_zero))
  {
    if ((local_20 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return (void *)local_30.begin;
    }
    pcVar5 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar5)();
    return pvVar7;
  }
LAB_140d4c7f4:
  pvVar7 = memset((void *)local_30.begin,0,param_2);
  return pvVar7;
}

// bmalloc_try_allocate_auxiliary_with_alignment @ 140d4c8a0

void * __cdecl
bmalloc_try_allocate_auxiliary_with_alignment
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  pas_heap *ppVar4;
  uint *puVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) goto LAB_140d4c967;
  uVar6 = param_2;
  if ((param_3 != 1) && (uVar6 = param_3, param_3 <= param_2)) {
    uVar6 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar7 = uVar6 + 0xf >> 4;
  if (uVar7 == param_1->cached_index) {
    uVar11 = (param_1->base).allocator_index;
  }
  else {
    ppVar4 = (param_1->base).heap;
    if (ppVar4 == (pas_heap *)0x0) goto LAB_140d4c967;
    uVar11 = 0;
    if ((uVar7 < (ppVar4->segregated_heap).small_index_upper_bound) &&
       (puVar5 = (ppVar4->segregated_heap).index_to_small_allocator_index, puVar5 != (uint *)0x0)) {
      uVar11 = puVar5[uVar7];
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar7 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar7 < 2) || (*(uint *)(uVar7 + 0x1f74) <= uVar11)) goto LAB_140d4c967;
  lVar1 = uVar7 + (ulonglong)uVar11 * 8;
  puVar12 = (undefined1 *)(lVar1 + 0x1f80);
  if ((param_3 != 1) && ((ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)) < param_3))
  goto LAB_140d4c967;
  *puVar12 = 1;
  uVar2 = *(uint *)(lVar1 + 0x1f98);
  if ((ulonglong)uVar2 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
    pvVar8 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
    goto LAB_140d4c9ee;
  }
  lVar13 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d4c9db:
    uVar7 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar7 = uVar7 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar7 & 0x3f));
    pvVar8 = (void *)((ulonglong)(uint)((int)uVar7 << 4) + lVar13);
LAB_140d4c9ee:
    *puVar12 = 0;
    return pvVar8;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar2 = *(uint *)(lVar1 + 0x1fac);
    uVar3 = *(uint *)(lVar1 + 0x1fa8);
    uVar9 = (ulonglong)uVar3;
    if (uVar3 < uVar2) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar9 * 8) = 0;
      lVar14 = 0;
      do {
        if ((uVar2 - 1) - uVar9 == lVar14) {
          *(uint *)(lVar1 + 0x1fa8) = uVar2;
          goto LAB_140d4ca5d;
        }
        lVar13 = lVar13 + 0x400;
        uVar10 = *(ulonglong *)((ulonglong)uVar11 * 8 + uVar9 * 8 + uVar7 + 0x1fc8 + lVar14 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar14;
      *(longlong *)(lVar1 + 0x1fa0) = lVar13;
      goto LAB_140d4c9db;
    }
  }
LAB_140d4ca5d:
  *puVar12 = 0;
LAB_140d4c967:
  pvVar8 = bmalloc_try_allocate_auxiliary_with_alignment_casual(param_1,param_2,param_3);
  return pvVar8;
}

// bmalloc_allocate_auxiliary_with_alignment @ 140d4ca70

void * __cdecl
bmalloc_allocate_auxiliary_with_alignment
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  pas_heap *ppVar4;
  uint *puVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) goto LAB_140d4cb37;
  uVar6 = param_2;
  if ((param_3 != 1) && (uVar6 = param_3, param_3 <= param_2)) {
    uVar6 = -param_3 & (param_2 + param_3) - 1;
  }
  uVar7 = uVar6 + 0xf >> 4;
  if (uVar7 == param_1->cached_index) {
    uVar11 = (param_1->base).allocator_index;
  }
  else {
    ppVar4 = (param_1->base).heap;
    if (ppVar4 == (pas_heap *)0x0) goto LAB_140d4cb37;
    uVar11 = 0;
    if ((uVar7 < (ppVar4->segregated_heap).small_index_upper_bound) &&
       (puVar5 = (ppVar4->segregated_heap).index_to_small_allocator_index, puVar5 != (uint *)0x0)) {
      uVar11 = puVar5[uVar7];
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar7 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  if ((uVar7 < 2) || (*(uint *)(uVar7 + 0x1f74) <= uVar11)) goto LAB_140d4cb37;
  lVar1 = uVar7 + (ulonglong)uVar11 * 8;
  puVar12 = (undefined1 *)(lVar1 + 0x1f80);
  if ((param_3 != 1) && ((ulonglong)(1L << (*(byte *)(lVar1 + 0x1f84) & 0x3f)) < param_3))
  goto LAB_140d4cb37;
  *puVar12 = 1;
  uVar2 = *(uint *)(lVar1 + 0x1f98);
  if ((ulonglong)uVar2 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar2 - *(int *)(lVar1 + 0x1f9c);
    pvVar8 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar2);
    goto LAB_140d4cbbe;
  }
  lVar13 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d4cbab:
    uVar7 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar7 = uVar7 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar7 & 0x3f));
    pvVar8 = (void *)((ulonglong)(uint)((int)uVar7 << 4) + lVar13);
LAB_140d4cbbe:
    *puVar12 = 0;
    return pvVar8;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar2 = *(uint *)(lVar1 + 0x1fac);
    uVar3 = *(uint *)(lVar1 + 0x1fa8);
    uVar9 = (ulonglong)uVar3;
    if (uVar3 < uVar2) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar9 * 8) = 0;
      lVar14 = 0;
      do {
        if ((uVar2 - 1) - uVar9 == lVar14) {
          *(uint *)(lVar1 + 0x1fa8) = uVar2;
          goto LAB_140d4cc2d;
        }
        lVar13 = lVar13 + 0x400;
        uVar10 = *(ulonglong *)((ulonglong)uVar11 * 8 + uVar9 * 8 + uVar7 + 0x1fc8 + lVar14 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar3 + (int)lVar14;
      *(longlong *)(lVar1 + 0x1fa0) = lVar13;
      goto LAB_140d4cbab;
    }
  }
LAB_140d4cc2d:
  *puVar12 = 0;
LAB_140d4cb37:
  pvVar8 = bmalloc_allocate_auxiliary_with_alignment_casual(param_1,param_2,param_3);
  return pvVar8;
}

// bmalloc_try_reallocate_auxiliary @ 140d4cc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_try_reallocate_auxiliary
          (void *param_1,pas_primitive_heap_ref *param_2,ulong64 param_3,
          pas_reallocate_free_mode param_4)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  pas_heap *ppVar6;
  ulonglong uVar7;
  longlong lVar8;
  pas_segregated_view_opaque *ppVar9;
  PSRWLOCK pRVar10;
  ulonglong uVar11;
  pas_thread_local_cache *ppVar12;
  pas_segregated_partial_view *ppVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulong64 uVar17;
  uint uVar18;
  ulonglong uVar19;
  pas_fast_megapage_kind pVar20;
  pas_bitfit_page *ppVar21;
  pas_segregated_page *ppVar22;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  ppVar6 = (param_2->base).heap;
  if (ppVar6 == (pas_heap *)0x0) {
    ppVar6 = pas_ensure_heap_slow
                       (&param_2->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                        &bmalloc_primitive_runtime_config.base);
  }
  if (param_1 == (void *)0x0) {
    pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    return pvVar5;
  }
  uVar16 = (uint)((ulonglong)param_1 >> 0x18);
  if (param_3 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar12 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar12) {
      uVar11 = (ulonglong)param_1 >> 0x18;
      if (((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) == 0
         )) {
        uVar19 = uVar11 - (bmalloc_megapage_table.instance)->index_begin;
        pVar20 = pas_not_a_fast_megapage_kind;
        if ((uVar11 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar20 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar11 ||
            (pVar20 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar19 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar19 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar20 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar12,(ulong64)param_1,pas_deallocate_mode,pVar20);
          goto LAB_140d4ce2f;
        }
      }
      uVar16 = ppVar12->deallocation_log_index;
      if ((ulonglong)uVar16 < 999) {
        ppVar12->deallocation_log[uVar16] = (longlong)param_1 << 6 | 5;
        ppVar12->deallocation_log_index = uVar16 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar12,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
    }
LAB_140d4ce2f:
    pvVar5 = (void *)0x0;
    goto LAB_140d4ce31;
  }
  uVar11 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b == 0) &&
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) != 0)) {
switchD_140d4cef3_caseD_1:
    uVar11 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4ce2f;
    }
    else {
      if (param_3 < uVar11) {
        uVar11 = param_3;
      }
      memcpy(pvVar5,param_1,uVar11);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar12 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar12) {
      uVar11 = (ulonglong)ppVar12->deallocation_log_index;
      if (0x3e6 < uVar11) {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar12,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
        goto LAB_140d4ce31;
      }
      uVar17 = (longlong)param_1 << 6 | 5;
LAB_140d4cdc9:
      ppVar12->deallocation_log[uVar11] = uVar17;
      ppVar12->deallocation_log_index = (int)uVar11 + 1;
      goto LAB_140d4ce31;
    }
    goto LAB_140d4cd95;
  }
  uVar19 = uVar11 - (bmalloc_megapage_table.instance)->index_begin;
  uVar16 = (uint)param_1;
  if (((bmalloc_megapage_table.instance)->index_begin <= uVar11) &&
     (uVar11 < (bmalloc_megapage_table.instance)->index_end)) {
    switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                    (uVar19 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar19 * '\x02' & 0x1fU) & 3) {
    case 1:
      goto switchD_140d4cef3_caseD_1;
    case 2:
      ppVar22 = (pas_segregated_page *)((ulonglong)param_1 & 0xffffffffffffc000);
      uVar1 = (ppVar22->base).page_kind;
      if (uVar1 == '\x05') {
        uVar17 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                           ((pas_bitfit_page *)ppVar22,(ulong64)param_1);
        pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
        if (pvVar5 == (void *)0x0) {
          if (param_4 != pas_reallocate_free_always) goto LAB_140d4ce2f;
        }
        else {
          if (param_3 < uVar17) {
            uVar17 = param_3;
          }
          memcpy(pvVar5,param_1,uVar17);
        }
        bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                  ((pas_bitfit_page *)ppVar22,(ulong64)param_1);
        goto LAB_140d4ce31;
      }
      if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (((uint)ppVar22->owner & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar19 = (ulonglong)((uint)((ulonglong)param_1 >> 8) & 0x3f);
      uVar11 = (ulonglong)
               *(uint *)(((ulonglong)ppVar22->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
      lVar15 = pas_compact_heap_reservation_base + uVar11 * 8;
      if (uVar11 == 0) {
        lVar15 = 0;
      }
      lVar8 = 0;
      if (*(uint3 *)(lVar15 + 0xb) != 0) {
        lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
      }
      uVar18 = *(uint *)(lVar8 + 0x20);
      pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
      if (pvVar5 == (void *)0x0) {
        if (param_4 != pas_reallocate_free_always) goto LAB_140d4ce2f;
      }
      else {
        uVar11 = (ulonglong)(uVar18 & 0x7ffffff);
        if (param_3 < uVar11) {
          uVar11 = param_3;
        }
        memcpy(pvVar5,param_1,uVar11);
      }
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (1 < *(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08)) {
        if (ppVar22->lock_ptr == (pas_lock *)0x0) {
          pRVar10 = (PSRWLOCK)0x0;
        }
        else {
          pRVar10 = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow(ppVar22,(pas_lock *)0x0,ppVar22->lock_ptr);
        }
        uVar11 = (ulonglong)((uint)((ulonglong)param_1 >> 7) & 0x7c);
        uVar16 = *(uint *)((longlong)ppVar22->alloc_bits + uVar11) & ~(1 << (uVar16 >> 4 & 0x1f));
        *(uint *)((longlong)ppVar22->alloc_bits + uVar11) = uVar16;
        if (((uint)ppVar22->owner & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar11 = (ulonglong)
                 *(uint *)(((ulonglong)ppVar22->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
        ppVar13 = (pas_segregated_partial_view *)(uVar11 * 8 + pas_compact_heap_reservation_base);
        if (uVar11 == 0) {
          ppVar13 = (pas_segregated_partial_view *)0x0;
        }
        if (!ppVar13->eligibility_has_been_noted) {
          pas_segregated_partial_view_note_eligibility(ppVar13,ppVar22);
        }
        if (uVar16 == 0) {
          uVar17 = (ppVar22->emptiness).num_non_empty_words_or_live_bytes - 1;
          if (uVar17 == 0) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar22,pas_note_emptiness_clear_num_non_empty_words);
          }
          else {
            (ppVar22->emptiness).num_non_empty_words_or_live_bytes = uVar17;
          }
        }
        if (pRVar10 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar10);
        }
        goto LAB_140d4ce31;
      }
      goto LAB_140d4cd95;
    case 3:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  uVar11 = (ulonglong)param_1 & 0xfffffffffffe0000;
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4cf86:
    if (bmalloc_marge_page_header_table.hashtable.table !=
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
      uVar18 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x16);
      uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
      uVar18 = uVar18 >> 0xb ^ uVar18;
      uVar19 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar18);
      uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
      while (uVar17 != ((ulonglong)param_1 & 0xffffffffffc00000)) {
        uVar18 = uVar18 + 1;
        if (uVar17 == 0xffffffffffffffff) goto LAB_140d4d1f4;
        uVar19 = (ulonglong)(uVar18 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask)
        ;
        uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
      }
      ppVar21 = (pas_bitfit_page *)
                (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].high;
      if (ppVar21 != (pas_bitfit_page *)0x0) goto LAB_140d4d023;
    }
LAB_140d4d1f4:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_large_map_find(&local_60,(ulong64)param_1);
    if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      pas_reallocation_did_fail("Source object not allocated",(void *)0x0,ppVar6,param_1,0,param_3);
    }
    if ((void *)local_60.begin != param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar11 = local_60.end - (longlong)param_1;
    if (local_60.end < param_1 || uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4ce2f;
    }
    else {
      if (param_3 < uVar11) {
        uVar11 = param_3;
      }
      memcpy(pvVar5,param_1,uVar11);
    }
    pas_deallocate_known_large(param_1,&bmalloc_heap_config);
    goto LAB_140d4ce31;
  }
  uVar18 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
  uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
  uVar18 = uVar18 >> 0xb ^ uVar18;
  uVar19 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar18);
  uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
  while (uVar17 != uVar11) {
    uVar18 = uVar18 + 1;
    if (uVar17 == 0xffffffffffffffff) goto LAB_140d4cf86;
    uVar19 = (ulonglong)(uVar18 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
    uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
  }
  ppVar21 = (pas_bitfit_page *)
            (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
  if (ppVar21 == (pas_bitfit_page *)0x0) goto LAB_140d4cf86;
LAB_140d4d023:
  switch((ppVar21->base).page_kind) {
  case '\x01':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x02':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x03':
    if (((uint)ppVar21[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar18 = uVar16 & 0x1ffff;
    uVar19 = (ulonglong)(uVar18 >> 0xc);
    uVar7 = (ulonglong)*(uint *)((ppVar21[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
    lVar15 = pas_compact_heap_reservation_base + uVar7 * 8;
    if (uVar7 == 0) {
      lVar15 = 0;
    }
    lVar8 = 0;
    if (*(uint3 *)(lVar15 + 0xb) != 0) {
      lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
    }
    uVar14 = *(uint *)(lVar8 + 0x20);
    pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4ce2f;
    }
    else {
      uVar7 = (ulonglong)(uVar14 & 0x7ffffff);
      if (param_3 < uVar7) {
        uVar7 = param_3;
      }
      memcpy(pvVar5,param_1,uVar7);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (1 < *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08)) {
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        ppVar22 = (pas_segregated_page *)0x0;
      }
      else {
        uVar14 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11)
        ;
        uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
        uVar14 = uVar14 >> 0xb ^ uVar14;
        uVar7 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14)
        ;
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
        if (uVar17 != uVar11) {
          ppVar22 = (pas_segregated_page *)0x0;
          do {
            uVar14 = uVar14 + 1;
            if (uVar17 == 0xffffffffffffffff) goto LAB_140d4d6bc;
            uVar7 = (ulonglong)
                    (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
          } while (uVar17 != uVar11);
        }
        ppVar22 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].high;
      }
LAB_140d4d6bc:
      if (ppVar22->lock_ptr == (pas_lock *)0x0) {
        pRVar10 = (PSRWLOCK)0x0;
      }
      else {
        pRVar10 = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow(ppVar22,(pas_lock *)0x0,ppVar22->lock_ptr);
      }
      uVar11 = (ulonglong)((uint)((ulonglong)param_1 >> 0xc) & 0x1c);
      uVar16 = *(uint *)((longlong)ppVar22->alloc_bits + uVar11) & ~(1 << (uVar16 >> 9 & 0x1f));
      *(uint *)((longlong)ppVar22->alloc_bits + uVar11) = uVar16;
      ppVar9 = ppVar22->owner;
      if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar11 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
      ppVar13 = (pas_segregated_partial_view *)(uVar11 * 8 + pas_compact_heap_reservation_base);
      if (uVar11 == 0) {
        ppVar13 = (pas_segregated_partial_view *)0x0;
      }
      if (!ppVar13->eligibility_has_been_noted) {
        pas_segregated_partial_view_note_eligibility(ppVar13,ppVar22);
        ppVar9 = ppVar22->owner;
      }
      if (((ulonglong)ppVar9 & 6) == 0) {
        uVar14 = ppVar22->object_size;
      }
      else {
        if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar11 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
        lVar15 = pas_compact_heap_reservation_base + uVar11 * 8;
        if (uVar11 == 0) {
          lVar15 = 0;
        }
        uVar14 = *(uint *)((ulonglong)
                           ((uint)*(byte *)(lVar15 + 0xd) * 0x80000 +
                           (uint)*(ushort *)(lVar15 + 0xb) * 8) + 0x20 +
                          pas_compact_heap_reservation_base) & 0x7ffffff;
      }
      if (uVar14 == 0) {
LAB_140d4d797:
        bVar4 = false;
      }
      else {
        if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar11 = ((ulonglong)uVar14 + (ulonglong)uVar18) - 1 >> 0xc;
        if (uVar11 < uVar19) goto LAB_140d4d797;
        bVar4 = false;
        do {
          cVar2 = *(char *)((longlong)ppVar22[1].alloc_bits + (uVar19 - 0x10));
          if (cVar2 == '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (cVar2 == -1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(char *)((longlong)ppVar22[1].alloc_bits + (uVar19 - 0x10)) = cVar2 + -1;
          bVar4 = (bool)(bVar4 | (char)(cVar2 + -1) == '\0');
          uVar19 = uVar19 + 1;
        } while (uVar11 + 1 != uVar19);
      }
      if (pas_segregated_page_deallocate_should_verify_granules == true) {
        pas_segregated_page_verify_granules(ppVar22);
      }
      if (bVar4) {
        pas_segregated_page_note_emptiness_impl(ppVar22,pas_note_emptiness_keep_num_non_empty_words)
        ;
      }
      if (uVar16 == 0) {
        uVar17 = (ppVar22->emptiness).num_non_empty_words_or_live_bytes - 1;
        if (uVar17 == 0) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar22,pas_note_emptiness_clear_num_non_empty_words);
        }
        else {
          (ppVar22->emptiness).num_non_empty_words_or_live_bytes = uVar17;
        }
      }
      if (pRVar10 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar10);
      }
      goto LAB_140d4ce31;
    }
    break;
  case '\x04':
    uVar19 = (ulonglong)(ppVar21->owner).payload;
    pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4ce2f;
    }
    else {
      if (param_3 < uVar19) {
        uVar19 = param_3;
      }
      memcpy(pvVar5,param_1,uVar19);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar12 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar12) {
      uVar16 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
      uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
      uVar16 = uVar16 >> 0xb ^ uVar16;
      uVar19 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar16);
      uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
      while (uVar17 != uVar11) {
        uVar16 = uVar16 + 1;
        uVar19 = (ulonglong)
                 (uVar16 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
      }
      uVar11 = (ulonglong)
               *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high + 4)
               + ppVar12->num_logged_bytes;
      if (uVar11 < 0xc351) {
        ppVar12->num_logged_bytes = uVar11;
        uVar11 = (ulonglong)ppVar12->deallocation_log_index;
        if (uVar11 < 999) {
          uVar17 = (longlong)param_1 << 6 | 7;
          goto LAB_140d4cdc9;
        }
      }
      pas_thread_local_cache_append_deallocation_slow
                (ppVar12,(ulong64)param_1,
                 pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role);
      goto LAB_140d4ce31;
    }
    break;
  case '\x05':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x06':
    uVar17 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar21,(ulong64)param_1);
    pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4ce2f;
    }
    else {
      if (param_3 < uVar17) {
        uVar17 = param_3;
      }
      memcpy(pvVar5,param_1,uVar17);
    }
    bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
              (ppVar21,(ulong64)param_1);
    goto LAB_140d4ce31;
  case '\a':
    uVar17 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar21,(ulong64)param_1);
    pvVar5 = bmalloc_try_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4ce2f;
    }
    else {
      if (param_3 < uVar17) {
        uVar17 = param_3;
      }
      memcpy(pvVar5,param_1,uVar17);
    }
    bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page(ppVar21,(ulong64)param_1)
    ;
    goto LAB_140d4ce31;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_140d4cd95:
  pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
LAB_140d4ce31:
  if ((local_48 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar3)();
    return pvVar5;
  }
  return pvVar5;
}

// bmalloc_reallocate_auxiliary @ 140d4d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * __cdecl
bmalloc_reallocate_auxiliary
          (void *param_1,pas_primitive_heap_ref *param_2,ulong64 param_3,
          pas_reallocate_free_mode param_4)

{
  uchar uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  pas_heap *ppVar6;
  ulonglong uVar7;
  longlong lVar8;
  pas_segregated_view_opaque *ppVar9;
  PSRWLOCK pRVar10;
  ulonglong uVar11;
  pas_thread_local_cache *ppVar12;
  pas_segregated_partial_view *ppVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulong64 uVar17;
  uint uVar18;
  ulonglong uVar19;
  pas_fast_megapage_kind pVar20;
  pas_bitfit_page *ppVar21;
  pas_segregated_page *ppVar22;
  undefined1 auStackY_98 [32];
  pas_large_map_entry local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  ppVar6 = (param_2->base).heap;
  if (ppVar6 == (pas_heap *)0x0) {
    ppVar6 = pas_ensure_heap_slow
                       (&param_2->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                        &bmalloc_primitive_runtime_config.base);
  }
  if (param_1 == (void *)0x0) {
    pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    return pvVar5;
  }
  uVar16 = (uint)((ulonglong)param_1 >> 0x18);
  if (param_3 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar12 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar12) {
      uVar11 = (ulonglong)param_1 >> 0x18;
      if (((ulonglong)param_1 >> 0x2b != 0) ||
         ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) == 0
         )) {
        uVar19 = uVar11 - (bmalloc_megapage_table.instance)->index_begin;
        pVar20 = pas_not_a_fast_megapage_kind;
        if ((uVar11 < (bmalloc_megapage_table.instance)->index_begin) ||
           ((pVar20 = pas_not_a_fast_megapage_kind,
            (bmalloc_megapage_table.instance)->index_end <= uVar11 ||
            (pVar20 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                               (uVar19 >> 2 & 0x1ffffffffffffffc)) >>
                      ((char)uVar19 * '\x02' & 0x1fU) &
                      (pas_small_other_fast_megapage_kind|
                      pas_small_exclusive_segregated_fast_megapage_kind),
            pVar20 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
          bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                    (ppVar12,(ulong64)param_1,pas_deallocate_mode,pVar20);
          goto LAB_140d4daaf;
        }
      }
      uVar16 = ppVar12->deallocation_log_index;
      if ((ulonglong)uVar16 < 999) {
        ppVar12->deallocation_log[uVar16] = (longlong)param_1 << 6 | 5;
        ppVar12->deallocation_log_index = uVar16 + 1;
      }
      else {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar12,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
      }
    }
    else {
      pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
    }
LAB_140d4daaf:
    pvVar5 = (void *)0x0;
    goto LAB_140d4dab1;
  }
  uVar11 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b == 0) &&
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >> (uVar16 & 0x1f) & 1) != 0)) {
switchD_140d4db73_caseD_1:
    uVar11 = (ulonglong)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4daaf;
    }
    else {
      if (param_3 < uVar11) {
        uVar11 = param_3;
      }
      memcpy(pvVar5,param_1,uVar11);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar12 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar12) {
      uVar11 = (ulonglong)ppVar12->deallocation_log_index;
      if (0x3e6 < uVar11) {
        pas_thread_local_cache_append_deallocation_slow
                  (ppVar12,(ulong64)param_1,
                   pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
        goto LAB_140d4dab1;
      }
      uVar17 = (longlong)param_1 << 6 | 5;
LAB_140d4da49:
      ppVar12->deallocation_log[uVar11] = uVar17;
      ppVar12->deallocation_log_index = (int)uVar11 + 1;
      goto LAB_140d4dab1;
    }
    goto LAB_140d4da15;
  }
  uVar19 = uVar11 - (bmalloc_megapage_table.instance)->index_begin;
  uVar16 = (uint)param_1;
  if (((bmalloc_megapage_table.instance)->index_begin <= uVar11) &&
     (uVar11 < (bmalloc_megapage_table.instance)->index_end)) {
    switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                    (uVar19 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar19 * '\x02' & 0x1fU) & 3) {
    case 1:
      goto switchD_140d4db73_caseD_1;
    case 2:
      ppVar22 = (pas_segregated_page *)((ulonglong)param_1 & 0xffffffffffffc000);
      uVar1 = (ppVar22->base).page_kind;
      if (uVar1 == '\x05') {
        uVar17 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                           ((pas_bitfit_page *)ppVar22,(ulong64)param_1);
        pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
        if (pvVar5 == (void *)0x0) {
          if (param_4 != pas_reallocate_free_always) goto LAB_140d4daaf;
        }
        else {
          if (param_3 < uVar17) {
            uVar17 = param_3;
          }
          memcpy(pvVar5,param_1,uVar17);
        }
        bmalloc_small_bitfit_page_config_specialized_page_deallocate_with_page
                  ((pas_bitfit_page *)ppVar22,(ulong64)param_1);
        goto LAB_140d4dab1;
      }
      if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (((uint)ppVar22->owner & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar19 = (ulonglong)((uint)((ulonglong)param_1 >> 8) & 0x3f);
      uVar11 = (ulonglong)
               *(uint *)(((ulonglong)ppVar22->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
      lVar15 = pas_compact_heap_reservation_base + uVar11 * 8;
      if (uVar11 == 0) {
        lVar15 = 0;
      }
      lVar8 = 0;
      if (*(uint3 *)(lVar15 + 0xb) != 0) {
        lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
      }
      uVar18 = *(uint *)(lVar8 + 0x20);
      pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
      if (pvVar5 == (void *)0x0) {
        if (param_4 != pas_reallocate_free_always) goto LAB_140d4daaf;
      }
      else {
        uVar11 = (ulonglong)(uVar18 & 0x7ffffff);
        if (param_3 < uVar11) {
          uVar11 = param_3;
        }
        memcpy(pvVar5,param_1,uVar11);
      }
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (1 < *(ulonglong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08)) {
        if (ppVar22->lock_ptr == (pas_lock *)0x0) {
          pRVar10 = (PSRWLOCK)0x0;
        }
        else {
          pRVar10 = (PSRWLOCK)
                    pas_segregated_page_switch_lock_slow(ppVar22,(pas_lock *)0x0,ppVar22->lock_ptr);
        }
        uVar11 = (ulonglong)((uint)((ulonglong)param_1 >> 7) & 0x7c);
        uVar16 = *(uint *)((longlong)ppVar22->alloc_bits + uVar11) & ~(1 << (uVar16 >> 4 & 0x1f));
        *(uint *)((longlong)ppVar22->alloc_bits + uVar11) = uVar16;
        if (((uint)ppVar22->owner & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar11 = (ulonglong)
                 *(uint *)(((ulonglong)ppVar22->owner & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
        ppVar13 = (pas_segregated_partial_view *)(uVar11 * 8 + pas_compact_heap_reservation_base);
        if (uVar11 == 0) {
          ppVar13 = (pas_segregated_partial_view *)0x0;
        }
        if (!ppVar13->eligibility_has_been_noted) {
          pas_segregated_partial_view_note_eligibility(ppVar13,ppVar22);
        }
        if (uVar16 == 0) {
          uVar17 = (ppVar22->emptiness).num_non_empty_words_or_live_bytes - 1;
          if (uVar17 == 0) {
            pas_segregated_page_note_emptiness_impl
                      (ppVar22,pas_note_emptiness_clear_num_non_empty_words);
          }
          else {
            (ppVar22->emptiness).num_non_empty_words_or_live_bytes = uVar17;
          }
        }
        if (pRVar10 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar10);
        }
        goto LAB_140d4dab1;
      }
      goto LAB_140d4da15;
    case 3:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  uVar11 = (ulonglong)param_1 & 0xfffffffffffe0000;
  if (bmalloc_medium_page_header_table.hashtable.table ==
      (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4dc06:
    if (bmalloc_marge_page_header_table.hashtable.table !=
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
      uVar18 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x16);
      uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
      uVar18 = uVar18 >> 0xb ^ uVar18;
      uVar19 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar18);
      uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
      while (uVar17 != ((ulonglong)param_1 & 0xffffffffffc00000)) {
        uVar18 = uVar18 + 1;
        if (uVar17 == 0xffffffffffffffff) goto LAB_140d4de74;
        uVar19 = (ulonglong)(uVar18 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask)
        ;
        uVar17 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].low;
      }
      ppVar21 = (pas_bitfit_page *)
                (bmalloc_marge_page_header_table.hashtable.table)->array[uVar19].high;
      if (ppVar21 != (pas_bitfit_page *)0x0) goto LAB_140d4dca3;
    }
LAB_140d4de74:
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pas_large_map_find(&local_60,(ulong64)param_1);
    if ((void *)local_60.begin == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      pas_reallocation_did_fail("Source object not allocated",(void *)0x0,ppVar6,param_1,0,param_3);
    }
    if ((void *)local_60.begin != param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar11 = local_60.end - (longlong)param_1;
    if (local_60.end < param_1 || uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (local_60.heap == (pas_large_heap *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4daaf;
    }
    else {
      if (param_3 < uVar11) {
        uVar11 = param_3;
      }
      memcpy(pvVar5,param_1,uVar11);
    }
    pas_deallocate_known_large(param_1,&bmalloc_heap_config);
    goto LAB_140d4dab1;
  }
  uVar18 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
  uVar18 = uVar18 * 0x20 + (uVar18 ^ 0xdeadbeef);
  uVar18 = uVar18 >> 0xb ^ uVar18;
  uVar19 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar18);
  uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
  while (uVar17 != uVar11) {
    uVar18 = uVar18 + 1;
    if (uVar17 == 0xffffffffffffffff) goto LAB_140d4dc06;
    uVar19 = (ulonglong)(uVar18 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
    uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
  }
  ppVar21 = (pas_bitfit_page *)
            (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high;
  if (ppVar21 == (pas_bitfit_page *)0x0) goto LAB_140d4dc06;
LAB_140d4dca3:
  switch((ppVar21->base).page_kind) {
  case '\x01':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x02':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x03':
    if (((uint)ppVar21[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar18 = uVar16 & 0x1ffff;
    uVar19 = (ulonglong)(uVar18 >> 0xc);
    uVar7 = (ulonglong)*(uint *)((ppVar21[1].use_epoch & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
    lVar15 = pas_compact_heap_reservation_base + uVar7 * 8;
    if (uVar7 == 0) {
      lVar15 = 0;
    }
    lVar8 = 0;
    if (*(uint3 *)(lVar15 + 0xb) != 0) {
      lVar8 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
    }
    uVar14 = *(uint *)(lVar8 + 0x20);
    pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4daaf;
    }
    else {
      uVar7 = (ulonglong)(uVar14 & 0x7ffffff);
      if (param_3 < uVar7) {
        uVar7 = param_3;
      }
      memcpy(pvVar5,param_1,uVar7);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (1 < *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9c08)) {
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        ppVar22 = (pas_segregated_page *)0x0;
      }
      else {
        uVar14 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11)
        ;
        uVar14 = uVar14 * 0x20 + (uVar14 ^ 0xdeadbeef);
        uVar14 = uVar14 >> 0xb ^ uVar14;
        uVar7 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar14)
        ;
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
        if (uVar17 != uVar11) {
          ppVar22 = (pas_segregated_page *)0x0;
          do {
            uVar14 = uVar14 + 1;
            if (uVar17 == 0xffffffffffffffff) goto LAB_140d4e33c;
            uVar7 = (ulonglong)
                    (uVar14 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
            uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].low;
          } while (uVar17 != uVar11);
        }
        ppVar22 = (pas_segregated_page *)
                  (bmalloc_medium_page_header_table.hashtable.table)->array[uVar7].high;
      }
LAB_140d4e33c:
      if (ppVar22->lock_ptr == (pas_lock *)0x0) {
        pRVar10 = (PSRWLOCK)0x0;
      }
      else {
        pRVar10 = (PSRWLOCK)
                  pas_segregated_page_switch_lock_slow(ppVar22,(pas_lock *)0x0,ppVar22->lock_ptr);
      }
      uVar11 = (ulonglong)((uint)((ulonglong)param_1 >> 0xc) & 0x1c);
      uVar16 = *(uint *)((longlong)ppVar22->alloc_bits + uVar11) & ~(1 << (uVar16 >> 9 & 0x1f));
      *(uint *)((longlong)ppVar22->alloc_bits + uVar11) = uVar16;
      ppVar9 = ppVar22->owner;
      if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar11 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
      ppVar13 = (pas_segregated_partial_view *)(uVar11 * 8 + pas_compact_heap_reservation_base);
      if (uVar11 == 0) {
        ppVar13 = (pas_segregated_partial_view *)0x0;
      }
      if (!ppVar13->eligibility_has_been_noted) {
        pas_segregated_partial_view_note_eligibility(ppVar13,ppVar22);
        ppVar9 = ppVar22->owner;
      }
      if (((ulonglong)ppVar9 & 6) == 0) {
        uVar14 = ppVar22->object_size;
      }
      else {
        if (((uint)ppVar9 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar11 = (ulonglong)*(uint *)(((ulonglong)ppVar9 & 0xfffffffffffffff8) + 0x14 + uVar19 * 4);
        lVar15 = pas_compact_heap_reservation_base + uVar11 * 8;
        if (uVar11 == 0) {
          lVar15 = 0;
        }
        uVar14 = *(uint *)((ulonglong)
                           ((uint)*(byte *)(lVar15 + 0xd) * 0x80000 +
                           (uint)*(ushort *)(lVar15 + 0xb) * 8) + 0x20 +
                          pas_compact_heap_reservation_base) & 0x7ffffff;
      }
      if (uVar14 == 0) {
LAB_140d4e417:
        bVar4 = false;
      }
      else {
        if (0x20000 < (ulonglong)uVar14 + (ulonglong)uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar11 = ((ulonglong)uVar14 + (ulonglong)uVar18) - 1 >> 0xc;
        if (uVar11 < uVar19) goto LAB_140d4e417;
        bVar4 = false;
        do {
          cVar2 = *(char *)((longlong)ppVar22[1].alloc_bits + (uVar19 - 0x10));
          if (cVar2 == '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (cVar2 == -1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(char *)((longlong)ppVar22[1].alloc_bits + (uVar19 - 0x10)) = cVar2 + -1;
          bVar4 = (bool)(bVar4 | (char)(cVar2 + -1) == '\0');
          uVar19 = uVar19 + 1;
        } while (uVar11 + 1 != uVar19);
      }
      if (pas_segregated_page_deallocate_should_verify_granules == true) {
        pas_segregated_page_verify_granules(ppVar22);
      }
      if (bVar4) {
        pas_segregated_page_note_emptiness_impl(ppVar22,pas_note_emptiness_keep_num_non_empty_words)
        ;
      }
      if (uVar16 == 0) {
        uVar17 = (ppVar22->emptiness).num_non_empty_words_or_live_bytes - 1;
        if (uVar17 == 0) {
          pas_segregated_page_note_emptiness_impl
                    (ppVar22,pas_note_emptiness_clear_num_non_empty_words);
        }
        else {
          (ppVar22->emptiness).num_non_empty_words_or_live_bytes = uVar17;
        }
      }
      if (pRVar10 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar10);
      }
      goto LAB_140d4dab1;
    }
    break;
  case '\x04':
    uVar19 = (ulonglong)(ppVar21->owner).payload;
    pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4daaf;
    }
    else {
      if (param_3 < uVar19) {
        uVar19 = param_3;
      }
      memcpy(pvVar5,param_1,uVar19);
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppVar12 = *(pas_thread_local_cache **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9c08);
    if ((pas_thread_local_cache *)&DAT_00000001 < ppVar12) {
      uVar16 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
      uVar16 = uVar16 * 0x20 + (uVar16 ^ 0xdeadbeef);
      uVar16 = uVar16 >> 0xb ^ uVar16;
      uVar19 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar16);
      uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
      while (uVar17 != uVar11) {
        uVar16 = uVar16 + 1;
        uVar19 = (ulonglong)
                 (uVar16 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        uVar17 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].low;
      }
      uVar11 = (ulonglong)
               *(uint *)((bmalloc_medium_page_header_table.hashtable.table)->array[uVar19].high + 4)
               + ppVar12->num_logged_bytes;
      if (uVar11 < 0xc351) {
        ppVar12->num_logged_bytes = uVar11;
        uVar11 = (ulonglong)ppVar12->deallocation_log_index;
        if (uVar11 < 999) {
          uVar17 = (longlong)param_1 << 6 | 7;
          goto LAB_140d4da49;
        }
      }
      pas_thread_local_cache_append_deallocation_slow
                (ppVar12,(ulong64)param_1,
                 pas_segregated_page_config_kind_bmalloc_medium_segregated_and_exclusive_role);
      goto LAB_140d4dab1;
    }
    break;
  case '\x05':
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  case '\x06':
    uVar17 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar21,(ulong64)param_1);
    pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4daaf;
    }
    else {
      if (param_3 < uVar17) {
        uVar17 = param_3;
      }
      memcpy(pvVar5,param_1,uVar17);
    }
    bmalloc_medium_bitfit_page_config_specialized_page_deallocate_with_page
              (ppVar21,(ulong64)param_1);
    goto LAB_140d4dab1;
  case '\a':
    uVar17 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                       (ppVar21,(ulong64)param_1);
    pvVar5 = bmalloc_allocate_auxiliary_impl_for_realloc(param_2,param_3);
    if (pvVar5 == (void *)0x0) {
      if (param_4 != pas_reallocate_free_always) goto LAB_140d4daaf;
    }
    else {
      if (param_3 < uVar17) {
        uVar17 = param_3;
      }
      memcpy(pvVar5,param_1,uVar17);
    }
    bmalloc_marge_bitfit_page_config_specialized_page_deallocate_with_page(ppVar21,(ulong64)param_1)
    ;
    goto LAB_140d4dab1;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_140d4da15:
  pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
LAB_140d4dab1:
  if ((local_48 ^ (ulonglong)auStackY_98) != __security_cookie.value) {
    pcVar3 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar3)();
    return pvVar5;
  }
  return pvVar5;
}

// bmalloc_auxiliary_heap_ref_get_heap @ 140d4e540

pas_heap * __cdecl bmalloc_auxiliary_heap_ref_get_heap(pas_primitive_heap_ref *param_1)

{
  pas_heap *ppVar1;
  
  ppVar1 = (param_1->base).heap;
  if (ppVar1 != (pas_heap *)0x0) {
    return ppVar1;
  }
  ppVar1 = pas_ensure_heap_slow
                     (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                      &bmalloc_primitive_runtime_config.base);
  return ppVar1;
}

// bmalloc_deallocate @ 140d4e570

void __cdecl bmalloc_deallocate(void *param_1)

{
  uint uVar1;
  pas_thread_local_cache *ppVar2;
  ulonglong uVar3;
  pas_fast_megapage_kind pVar4;
  ulonglong uVar5;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar2 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if (ppVar2 < (pas_thread_local_cache *)&DAT_00000002) {
    pas_try_deallocate_slow_no_cache(param_1,&bmalloc_heap_config,pas_deallocate_mode);
    return;
  }
  uVar3 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b != 0) ||
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >>
       ((uint)((ulonglong)param_1 >> 0x18) & 0x1f) & 1) == 0)) {
    uVar5 = uVar3 - (bmalloc_megapage_table.instance)->index_begin;
    pVar4 = pas_not_a_fast_megapage_kind;
    if ((uVar3 < (bmalloc_megapage_table.instance)->index_begin) ||
       ((pVar4 = pas_not_a_fast_megapage_kind, (bmalloc_megapage_table.instance)->index_end <= uVar3
        || (pVar4 = *(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                             (uVar5 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar5 * '\x02' & 0x1fU) &
                    (pas_small_other_fast_megapage_kind|
                    pas_small_exclusive_segregated_fast_megapage_kind),
           pVar4 != pas_small_exclusive_segregated_fast_megapage_kind)))) {
      bmalloc_heap_config_specialized_try_deallocate_not_small_exclusive_segregated
                (ppVar2,(ulong64)param_1,pas_deallocate_mode,pVar4);
      return;
    }
  }
  uVar1 = ppVar2->deallocation_log_index;
  if ((ulonglong)uVar1 < 999) {
    ppVar2->deallocation_log[uVar1] = (longlong)param_1 << 6 | 5;
    ppVar2->deallocation_log_index = uVar1 + 1;
    return;
  }
  pas_thread_local_cache_append_deallocation_slow
            (ppVar2,(ulong64)param_1,
             pas_segregated_page_config_kind_bmalloc_small_segregated_and_exclusive_role);
  return;
}

// bmalloc_force_auxiliary_heap_into_reserved_memory @ 140d4e6a0

pas_heap * __cdecl
bmalloc_force_auxiliary_heap_into_reserved_memory
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  pas_heap *ppVar1;
  
  ppVar1 = pas_ensure_heap_forced_into_reserved_memory
                     (&param_1->base,pas_primitive_heap_ref_kind,&bmalloc_heap_config,
                      &bmalloc_primitive_runtime_config.base,param_2,param_3);
  return ppVar1;
}

// bmalloc_heap_ref_get_type_size @ 140d4e6e0

ulong64 __cdecl bmalloc_heap_ref_get_type_size(pas_heap_ref *param_1)

{
  return (ulonglong)*(uint *)param_1->type;
}

// bmalloc_get_allocation_size @ 140d4e6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl bmalloc_get_allocation_size(void *param_1)

{
  uchar uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  longlong lVar5;
  longlong lVar6;
  pas_bitfit_page *ppVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_58 [40];
  pas_large_map_entry local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar3 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b == 0) &&
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >>
       ((uint)((ulonglong)param_1 >> 0x18) & 0x1f) & 1) != 0)) {
switchD_140d4e79b_caseD_1:
    uVar4 = (ulong64)*(uint *)(((ulonglong)param_1 & 0xffffffffffffc000) + 4);
    goto LAB_140d4e736;
  }
  uVar8 = uVar3 - (bmalloc_megapage_table.instance)->index_begin;
  if ((uVar3 < (bmalloc_megapage_table.instance)->index_begin) ||
     ((bmalloc_megapage_table.instance)->index_end <= uVar3)) {
switchD_140d4e79b_caseD_0:
    if (bmalloc_medium_page_header_table.hashtable.table ==
        (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4e836:
      if (bmalloc_marge_page_header_table.hashtable.table !=
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
        uVar9 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x16);
        uVar9 = uVar9 * 0x20 + (uVar9 ^ 0xdeadbeef);
        uVar9 = uVar9 >> 0xb ^ uVar9;
        uVar3 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar9);
        uVar4 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].low;
        while (uVar4 != ((ulonglong)param_1 & 0xffffffffffc00000)) {
          uVar9 = uVar9 + 1;
          if (uVar4 == 0xffffffffffffffff) goto LAB_140d4e98d;
          uVar3 = (ulonglong)(uVar9 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask)
          ;
          uVar4 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].low;
        }
        ppVar7 = (pas_bitfit_page *)
                 (bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].high;
        if (ppVar7 != (pas_bitfit_page *)0x0) goto LAB_140d4e8d3;
      }
LAB_140d4e98d:
      AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      pas_large_map_find(&local_30,(ulong64)param_1);
      if ((void *)local_30.begin == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        if ((void *)local_30.begin != param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar4 = local_30.end - (longlong)param_1;
        if (local_30.end < param_1 || uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
      goto LAB_140d4e736;
    }
    uVar9 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
    uVar9 = uVar9 * 0x20 + (uVar9 ^ 0xdeadbeef);
    uVar9 = uVar9 >> 0xb ^ uVar9;
    uVar3 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar9);
    uVar4 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].low;
    while (uVar4 != ((ulonglong)param_1 & 0xfffffffffffe0000)) {
      uVar9 = uVar9 + 1;
      if (uVar4 == 0xffffffffffffffff) goto LAB_140d4e836;
      uVar3 = (ulonglong)(uVar9 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
      uVar4 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].low;
    }
    ppVar7 = (pas_bitfit_page *)
             (bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].high;
    if (ppVar7 == (pas_bitfit_page *)0x0) goto LAB_140d4e836;
LAB_140d4e8d3:
    switch((ppVar7->base).page_kind) {
    case '\x01':
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    case '\x02':
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    case '\x03':
      if (((uint)ppVar7[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar9 = *(uint *)((ppVar7[1].use_epoch & 0xfffffffffffffff8) + 0x14 +
                       (ulonglong)((uint)((ulonglong)param_1 >> 10) & 0x7c));
      break;
    case '\x04':
      uVar4 = (ulong64)(ppVar7->owner).payload;
      goto LAB_140d4e736;
    case '\x05':
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    case '\x06':
      uVar4 = bmalloc_medium_bitfit_page_config_specialized_page_get_allocation_size_with_page
                        (ppVar7,(ulong64)param_1);
      return uVar4;
    case '\a':
      uVar4 = bmalloc_marge_bitfit_page_config_specialized_page_get_allocation_size_with_page
                        (ppVar7,(ulong64)param_1);
      return uVar4;
    default:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                    (uVar8 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar8 * '\x02' & 0x1fU) & 3) {
    case 0:
      goto switchD_140d4e79b_caseD_0;
    case 1:
      goto switchD_140d4e79b_caseD_1;
    case 2:
      ppVar7 = (pas_bitfit_page *)((ulonglong)param_1 & 0xffffffffffffc000);
      uVar1 = (ppVar7->base).page_kind;
      if (uVar1 == '\x05') {
        uVar4 = bmalloc_small_bitfit_page_config_specialized_page_get_allocation_size_with_page
                          (ppVar7,(ulong64)param_1);
        return uVar4;
      }
      if (uVar1 != '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (((uint)ppVar7[1].use_epoch & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar9 = *(uint *)((ppVar7[1].use_epoch & 0xfffffffffffffff8) + 0x14 +
                       (ulonglong)((uint)((ulonglong)param_1 >> 6) & 0xfc));
      break;
    case 3:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  lVar6 = pas_compact_heap_reservation_base + (ulonglong)uVar9 * 8;
  if ((ulonglong)uVar9 == 0) {
    lVar6 = 0;
  }
  lVar5 = 0;
  if (*(uint3 *)(lVar6 + 0xb) != 0) {
    lVar5 = pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar6 + 0xb) * 8;
  }
  uVar4 = (ulong64)(*(uint *)(lVar5 + 0x20) & 0x7ffffff);
LAB_140d4e736:
  if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return uVar4;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

// bmalloc_get_heap @ 140d4ea70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap * __cdecl bmalloc_get_heap(void *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  pas_heap *ppVar4;
  char *pcVar5;
  pas_heap *ppVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_58 [40];
  pas_large_map_entry local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar3 = (ulonglong)param_1 >> 0x18;
  if (((ulonglong)param_1 >> 0x2b == 0) &&
     ((bmalloc_megapage_table.fast_bits[(ulonglong)param_1 >> 0x1d] >>
       ((uint)((ulonglong)param_1 >> 0x18) & 0x1f) & 1) != 0)) {
switchD_140d4eb47_caseD_1:
    uVar3 = *(ulonglong *)(((ulonglong)param_1 & 0xffffffffffffc000) + 0x20);
LAB_140d4eab7:
    ppVar6 = *(pas_heap **)
              ((ulonglong)
               ((uint)*(byte *)((uVar3 & 0xfffffffffffffff8) + 10) * 0x80000 +
               (uint)*(ushort *)((uVar3 & 0xfffffffffffffff8) + 8) * 8) + 0x18 +
              pas_compact_heap_reservation_base);
LAB_140d4ead5:
    ppVar4 = (pas_heap *)0x0;
    if (((ppVar6->segregated_heap).runtime_config)->is_part_of_heap) {
      ppVar4 = ppVar6;
    }
  }
  else {
    uVar8 = uVar3 - (bmalloc_megapage_table.instance)->index_begin;
    if ((uVar3 < (bmalloc_megapage_table.instance)->index_begin) ||
       ((bmalloc_megapage_table.instance)->index_end <= uVar3)) {
switchD_140d4eb47_caseD_0:
      if (bmalloc_medium_page_header_table.hashtable.table ==
          (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
LAB_140d4ebe2:
        if (bmalloc_marge_page_header_table.hashtable.table !=
            (pas_lock_free_read_ptr_ptr_hashtable_table *)0x0) {
          uVar9 = (uint)((ulonglong)param_1 >> 0x1a) & 0xfffffff ^
                  (uint)((ulonglong)param_1 >> 0x16);
          uVar9 = uVar9 * 0x20 + (uVar9 ^ 0xdeadbeef);
          uVar9 = uVar9 >> 0xb ^ uVar9;
          uVar3 = (ulonglong)((bmalloc_marge_page_header_table.hashtable.table)->table_mask & uVar9)
          ;
          uVar1 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].low;
          while (uVar1 != ((ulonglong)param_1 & 0xffffffffffc00000)) {
            uVar9 = uVar9 + 1;
            if (uVar1 == 0xffffffffffffffff) goto LAB_140d4ed60;
            uVar3 = (ulonglong)
                    (uVar9 & (bmalloc_marge_page_header_table.hashtable.table)->table_mask);
            uVar1 = (bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].low;
          }
          pcVar5 = (char *)(bmalloc_marge_page_header_table.hashtable.table)->array[uVar3].high;
          if (pcVar5 != (char *)0x0) goto LAB_140d4ec7f;
        }
LAB_140d4ed60:
        AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        pas_large_map_find(&local_30,(ulong64)param_1);
        if ((void *)local_30.begin == (void *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((void *)local_30.begin != param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (local_30.end <= param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
        ppVar4 = (pas_heap *)&local_30.heap[-3].free_heap.num_mapped_bytes;
        goto LAB_140d4eae2;
      }
      uVar9 = (uint)((ulonglong)param_1 >> 0x15) & 0xfffffff ^ (uint)((ulonglong)param_1 >> 0x11);
      uVar9 = uVar9 * 0x20 + (uVar9 ^ 0xdeadbeef);
      uVar9 = uVar9 >> 0xb ^ uVar9;
      uVar3 = (ulonglong)((bmalloc_medium_page_header_table.hashtable.table)->table_mask & uVar9);
      uVar1 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].low;
      while (uVar1 != ((ulonglong)param_1 & 0xfffffffffffe0000)) {
        uVar9 = uVar9 + 1;
        if (uVar1 == 0xffffffffffffffff) goto LAB_140d4ebe2;
        uVar3 = (ulonglong)(uVar9 & (bmalloc_medium_page_header_table.hashtable.table)->table_mask);
        uVar1 = (bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].low;
      }
      pcVar5 = (char *)(bmalloc_medium_page_header_table.hashtable.table)->array[uVar3].high;
      if (pcVar5 == (char *)0x0) goto LAB_140d4ebe2;
LAB_140d4ec7f:
      switch(*pcVar5) {
      case '\x01':
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      case '\x02':
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      case '\x03':
        if (((uint)*(ulonglong *)(pcVar5 + 0x20) & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar9 = *(uint *)((*(ulonglong *)(pcVar5 + 0x20) & 0xfffffffffffffff8) + 0x14 +
                         (ulonglong)((uint)((ulonglong)param_1 >> 10) & 0x7c));
        break;
      case '\x04':
        uVar3 = *(ulonglong *)(pcVar5 + 0x20);
        goto LAB_140d4eab7;
      case '\x05':
      case '\x06':
      case '\a':
switchD_140d4ec9b_caseD_5:
        ppVar6 = *(pas_heap **)
                  ((ulonglong)
                   ((uint)*(byte *)(pas_compact_heap_reservation_base + 10 +
                                   (ulonglong)*(uint *)(pcVar5 + 4) * 8) * 0x80000 +
                   (uint)*(ushort *)
                          (pas_compact_heap_reservation_base + 8 +
                          (ulonglong)*(uint *)(pcVar5 + 4) * 8) * 8) + 0x30 +
                  pas_compact_heap_reservation_base);
        goto LAB_140d4ead5;
      default:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      switch(*(uint *)((longlong)(bmalloc_megapage_table.instance)->bits +
                      (uVar8 >> 2 & 0x1ffffffffffffffc)) >> ((char)uVar8 * '\x02' & 0x1fU) & 3) {
      case 0:
        goto switchD_140d4eb47_caseD_0;
      case 1:
        goto switchD_140d4eb47_caseD_1;
      case 3:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pcVar5 = (char *)((ulonglong)param_1 & 0xffffffffffffc000);
      if (*pcVar5 == '\x05') goto switchD_140d4ec9b_caseD_5;
      if (*pcVar5 != '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (((uint)*(ulonglong *)(pcVar5 + 0x20) & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar9 = *(uint *)((*(ulonglong *)(pcVar5 + 0x20) & 0xfffffffffffffff8) + 0x14 +
                       (ulonglong)((uint)((ulonglong)param_1 >> 6) & 0xfc));
    }
    lVar7 = pas_compact_heap_reservation_base + (ulonglong)uVar9 * 8;
    if ((ulonglong)uVar9 == 0) {
      lVar7 = 0;
    }
    ppVar4 = (pas_heap *)
             (pas_compact_heap_reservation_base + (ulonglong)(uint)*(uint3 *)(lVar7 + 0xb) * 8);
    if (*(uint3 *)(lVar7 + 0xb) == 0) {
      ppVar4 = (pas_heap *)0x0;
    }
    ppVar4 = *(pas_heap **)&(ppVar4->segregated_heap).basic_size_directory_and_head;
    if (!((ppVar4->segregated_heap).runtime_config)->is_part_of_heap) {
      ppVar4 = (pas_heap *)0x0;
    }
  }
LAB_140d4eae2:
  if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return ppVar4;
  }
  pcVar2 = (code *)swi(3);
  ppVar4 = (pas_heap *)(*pcVar2)();
  return ppVar4;
}

// bmalloc_try_allocate_impl_impl_slow @ 140d4ede0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_allocate_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_fake_heap_ref_kind,param_2,param_3,
                      &bmalloc_intrinsic_runtime_config.base,&bmalloc_allocator_counts,
                      pas_force_size_lookup);
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// pas_allocation_result_identity @ 140d4ee60

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

// bmalloc_allocate_impl_impl_slow @ 140d4ee70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_allocate_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_fake_heap_ref_kind,param_2,param_3,
                      &bmalloc_intrinsic_runtime_config.base,&bmalloc_allocator_counts,
                      pas_force_size_lookup);
  if (local_20.did_succeed == false) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// pas_allocation_result_crash_on_error @ 140d4ef00

pas_allocation_result * __cdecl
pas_allocation_result_crash_on_error
          (pas_allocation_result *__return_storage_ptr__,pas_allocation_result *param_1)

{
  bool bVar1;
  undefined3 uVar2;
  pas_zero_mode pVar3;
  
  if (param_1->did_succeed != false) {
    bVar1 = param_1->did_succeed;
    uVar2 = *(undefined3 *)&param_1->field_0x9;
    pVar3 = param_1->zero_mode;
    __return_storage_ptr__->begin = param_1->begin;
    __return_storage_ptr__->did_succeed = bVar1;
    *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar2;
    __return_storage_ptr__->zero_mode = pVar3;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  pas_panic_on_out_of_memory_error();
}

// bmalloc_try_allocate_with_alignment_impl_casual_case @ 140d4ef30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

pas_allocation_result * __cdecl
bmalloc_try_allocate_with_alignment_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  pas_thread_local_cache *ppVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  pas_allocation_result *ppVar7;
  ulong64 uVar8;
  pas_zero_mode pVar9;
  ulonglong uVar10;
  pas_heap *ppVar11;
  ulong64 uVar12;
  undefined1 auVar13 [8];
  ulong64 uVar14;
  longlong lVar15;
  undefined1 auStackY_88 [32];
  undefined1 local_50 [8];
  undefined8 local_48;
  uint local_40;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  ppVar7 = (pas_allocation_result *)(param_2 - 1);
  if ((pas_allocation_result *)(param_2 ^ (ulonglong)ppVar7) <= ppVar7) {
    __return_storage_ptr__->begin = 0;
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    if ((local_30 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar7;
    }
    goto LAB_140d4f15c;
  }
  uVar12 = param_1;
  if ((param_2 != 1) && (uVar12 = param_2, param_2 <= param_1)) {
    uVar12 = -param_2 & (param_1 + param_2) - 1;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar2 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar2) {
    uVar10 = uVar12 + 0xf >> 4;
    if (uVar12 + 0xf < 0x2720) {
      uVar6 = bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar10];
      if (uVar6 == 0) goto LAB_140d4f0a2;
LAB_140d4f065:
      if (uVar6 < ppVar2->allocator_index_upper_bound) {
        uVar10 = 1;
        ppVar11 = (pas_heap *)(ppVar2->local_allocators + uVar6);
      }
      else if (uVar6 == 0xffffffff) {
        ppVar11 = (pas_heap *)0x0;
        uVar10 = 0;
      }
      else {
        pas_thread_local_cache_get_local_allocator_slow
                  ((pas_local_allocator_result *)local_50,ppVar2,uVar6,pas_lock_is_not_held);
        uVar10 = (ulonglong)local_50 & 0xff;
        ppVar11 = local_48;
      }
    }
    else {
      uVar6 = pas_segregated_heap_medium_allocator_index_for_index
                        (&bmalloc_common_primitive_heap.segregated_heap,uVar10,
                         pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                         ,pas_lock_is_not_held);
      if (uVar6 != 0) goto LAB_140d4f065;
LAB_140d4f0a2:
      ppVar11 = (pas_heap *)0x0;
      uVar10 = 0;
    }
    if (((param_2 != 1) && ((uVar10 & 1) != 0)) &&
       ((ulonglong)
        (1L << (*(byte *)((longlong)&(ppVar11->segregated_heap).runtime_config + 4) & 0x3f)) <
        param_2)) {
      uVar10 = 0;
    }
    if ((uVar10 & 1) != 0) {
      *(bool *)&(ppVar11->segregated_heap).runtime_config = true;
      uVar6 = (ppVar11->segregated_heap).basic_size_directory_and_head.payload;
      if ((ulonglong)uVar6 == 0) {
        uVar8._0_4_ = (ppVar11->segregated_heap).bitfit_heap;
        uVar8._4_4_ = (ppVar11->segregated_heap).small_index_upper_bound;
        uVar14 = (ppVar11->large_heap).free_heap.num_mapped_bytes;
        if (uVar14 != 0) {
LAB_140d4f112:
          uVar10 = 0;
          for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
            uVar10 = uVar10 + 1;
          }
          (ppVar11->large_heap).free_heap.num_mapped_bytes = uVar14 & ~(1L << (uVar10 & 0x3f));
          auVar13 = (undefined1  [8])((uint)((int)uVar10 << 4) + uVar8);
          goto LAB_140d4f126;
        }
        if (*(byte *)&(ppVar11->segregated_heap).index_to_small_allocator_index == 6) {
          uVar6 = *(uint *)((ppVar11->large_heap).free_heap.tree.minimum.payload + 1);
          uVar1 = *(uint *)&(ppVar11->large_heap).free_heap.tree;
          uVar10 = (ulonglong)uVar1;
          if (uVar1 < uVar6) {
            *(undefined8 *)((longlong)&ppVar11->next_heap + uVar10 * 8 + -8) = 0;
            lVar15 = 0;
            do {
              if ((uVar6 - 1) - uVar10 == lVar15) {
                (ppVar11->large_heap).free_heap.tree.root =
                     (pas_compact_cartesian_tree_node_ptr)(int3)uVar6;
                (ppVar11->large_heap).free_heap.tree.minimum.payload[0] = (char)(uVar6 >> 0x18);
                goto LAB_140d4f20c;
              }
              uVar8 = uVar8 + 0x400;
              uVar14 = *(ulonglong *)((longlong)&ppVar11->next_heap + lVar15 * 8 + uVar10 * 8);
              lVar15 = lVar15 + 1;
            } while (uVar14 == 0);
            *(uint *)&(ppVar11->large_heap).free_heap.tree = uVar1 + (int)lVar15;
            *(ulong64 *)&(ppVar11->segregated_heap).bitfit_heap = uVar8;
            goto LAB_140d4f112;
          }
LAB_140d4f20c:
          bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                    ((pas_allocation_result *)local_50,(pas_local_allocator *)ppVar11,
                     &bmalloc_allocator_counts,pas_allocation_result_identity);
        }
        else {
          bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                    ((pas_allocation_result *)local_50,(pas_local_allocator *)ppVar11,uVar12,param_2
                     ,&bmalloc_allocator_counts,pas_allocation_result_identity);
        }
        auVar13 = local_50;
        local_32 = local_48._3_1_;
        local_34 = local_48._1_2_;
        local_50._0_3_ = (undefined3)((ulonglong)local_48 >> 8);
        bVar5 = local_48._0_1_;
        pVar9 = local_48._4_4_;
      }
      else {
        (ppVar11->segregated_heap).basic_size_directory_and_head.payload =
             uVar6 - (ppVar11->segregated_heap).rare_data.payload;
        auVar13 = (undefined1  [8])
                  ((longlong)(ppVar11->segregated_heap).index_to_small_size_directory -
                  (ulonglong)uVar6);
LAB_140d4f126:
        *(bool *)&(ppVar11->segregated_heap).runtime_config = false;
        bVar5 = true;
        pVar9 = pas_zero_mode_may_have_non_zero;
      }
      __return_storage_ptr__->begin = (ulong64)auVar13;
      __return_storage_ptr__->did_succeed = bVar5;
      *(undefined2 *)&__return_storage_ptr__->field_0x9 = local_50._0_2_;
      __return_storage_ptr__->field_0xb = local_50[2];
      __return_storage_ptr__->zero_mode = pVar9;
      if ((local_30 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
        return (pas_allocation_result *)(ulonglong)local_50[2];
      }
      goto LAB_140d4f15c;
    }
  }
  local_50 = (undefined1  [8])bmalloc_common_primitive_heap.type;
  local_48 = &bmalloc_common_primitive_heap;
  local_40 = 0;
  ppVar7 = bmalloc_try_allocate_with_alignment_impl_impl_slow
                     (__return_storage_ptr__,(pas_heap_ref *)local_50,uVar12,param_2);
  if ((local_30 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return ppVar7;
  }
LAB_140d4f15c:
  pcVar3 = (code *)swi(3);
  ppVar7 = (pas_allocation_result *)(*pcVar3)();
  return ppVar7;
}

// bmalloc_try_allocate_with_alignment_impl_impl_slow @ 140d4f290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_allocate_with_alignment_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_fake_heap_ref_kind,param_2,param_3,
                      &bmalloc_intrinsic_runtime_config.base,&bmalloc_allocator_counts,
                      pas_force_size_lookup);
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_allocate_with_alignment_impl_casual_case @ 140d4f310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

pas_allocation_result * __cdecl
bmalloc_allocate_with_alignment_impl_casual_case
          (pas_allocation_result *__return_storage_ptr__,ulong64 param_1,ulong64 param_2)

{
  uint uVar1;
  pas_thread_local_cache *ppVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  pas_allocation_result *ppVar7;
  ulong64 uVar8;
  pas_zero_mode pVar9;
  ulonglong uVar10;
  pas_heap *ppVar11;
  ulong64 uVar12;
  undefined1 auVar13 [8];
  ulong64 uVar14;
  longlong lVar15;
  undefined1 auStackY_88 [32];
  undefined1 local_50 [8];
  undefined8 local_48;
  uint local_40;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((param_2 ^ param_2 - 1) <= param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  uVar12 = param_1;
  if ((param_2 != 1) && (uVar12 = param_2, param_2 <= param_1)) {
    uVar12 = -param_2 & (param_1 + param_2) - 1;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar2 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar2) {
    uVar10 = uVar12 + 0xf >> 4;
    if (uVar12 + 0xf < 0x2720) {
      uVar6 = bmalloc_common_primitive_heap_support.index_to_allocator_index[uVar10];
      if (uVar6 == 0) goto LAB_140d4f45a;
LAB_140d4f41d:
      if (uVar6 < ppVar2->allocator_index_upper_bound) {
        uVar10 = 1;
        ppVar11 = (pas_heap *)(ppVar2->local_allocators + uVar6);
      }
      else if (uVar6 == 0xffffffff) {
        ppVar11 = (pas_heap *)0x0;
        uVar10 = 0;
      }
      else {
        pas_thread_local_cache_get_local_allocator_slow
                  ((pas_local_allocator_result *)local_50,ppVar2,uVar6,pas_lock_is_not_held);
        uVar10 = (ulonglong)local_50 & 0xff;
        ppVar11 = local_48;
      }
    }
    else {
      uVar6 = pas_segregated_heap_medium_allocator_index_for_index
                        (&bmalloc_common_primitive_heap.segregated_heap,uVar10,
                         pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                         ,pas_lock_is_not_held);
      if (uVar6 != 0) goto LAB_140d4f41d;
LAB_140d4f45a:
      ppVar11 = (pas_heap *)0x0;
      uVar10 = 0;
    }
    if (((param_2 != 1) && ((uVar10 & 1) != 0)) &&
       ((ulonglong)
        (1L << (*(byte *)((longlong)&(ppVar11->segregated_heap).runtime_config + 4) & 0x3f)) <
        param_2)) {
      uVar10 = 0;
    }
    if ((uVar10 & 1) != 0) {
      *(bool *)&(ppVar11->segregated_heap).runtime_config = true;
      uVar6 = (ppVar11->segregated_heap).basic_size_directory_and_head.payload;
      if ((ulonglong)uVar6 == 0) {
        uVar8._0_4_ = (ppVar11->segregated_heap).bitfit_heap;
        uVar8._4_4_ = (ppVar11->segregated_heap).small_index_upper_bound;
        uVar14 = (ppVar11->large_heap).free_heap.num_mapped_bytes;
        if (uVar14 != 0) {
LAB_140d4f4ca:
          uVar10 = 0;
          for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
            uVar10 = uVar10 + 1;
          }
          (ppVar11->large_heap).free_heap.num_mapped_bytes = uVar14 & ~(1L << (uVar10 & 0x3f));
          auVar13 = (undefined1  [8])((uint)((int)uVar10 << 4) + uVar8);
          goto LAB_140d4f4de;
        }
        if (*(byte *)&(ppVar11->segregated_heap).index_to_small_allocator_index == 6) {
          uVar6 = *(uint *)((ppVar11->large_heap).free_heap.tree.minimum.payload + 1);
          uVar1 = *(uint *)&(ppVar11->large_heap).free_heap.tree;
          uVar10 = (ulonglong)uVar1;
          if (uVar1 < uVar6) {
            *(undefined8 *)((longlong)&ppVar11->next_heap + uVar10 * 8 + -8) = 0;
            lVar15 = 0;
            do {
              if ((uVar6 - 1) - uVar10 == lVar15) {
                (ppVar11->large_heap).free_heap.tree.root =
                     (pas_compact_cartesian_tree_node_ptr)(int3)uVar6;
                (ppVar11->large_heap).free_heap.tree.minimum.payload[0] = (char)(uVar6 >> 0x18);
                goto LAB_140d4f5c4;
              }
              uVar8 = uVar8 + 0x400;
              uVar14 = *(ulonglong *)((longlong)&ppVar11->next_heap + lVar15 * 8 + uVar10 * 8);
              lVar15 = lVar15 + 1;
            } while (uVar14 == 0);
            *(uint *)&(ppVar11->large_heap).free_heap.tree = uVar1 + (int)lVar15;
            *(ulong64 *)&(ppVar11->segregated_heap).bitfit_heap = uVar8;
            goto LAB_140d4f4ca;
          }
LAB_140d4f5c4:
          bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                    ((pas_allocation_result *)local_50,(pas_local_allocator *)ppVar11,
                     &bmalloc_allocator_counts,pas_allocation_result_crash_on_error);
        }
        else {
          bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                    ((pas_allocation_result *)local_50,(pas_local_allocator *)ppVar11,uVar12,param_2
                     ,&bmalloc_allocator_counts,pas_allocation_result_crash_on_error);
        }
        auVar13 = local_50;
        local_32 = local_48._3_1_;
        local_34 = local_48._1_2_;
        local_50._0_3_ = (undefined3)((ulonglong)local_48 >> 8);
        bVar5 = local_48._0_1_;
        pVar9 = local_48._4_4_;
      }
      else {
        (ppVar11->segregated_heap).basic_size_directory_and_head.payload =
             uVar6 - (ppVar11->segregated_heap).rare_data.payload;
        auVar13 = (undefined1  [8])
                  ((longlong)(ppVar11->segregated_heap).index_to_small_size_directory -
                  (ulonglong)uVar6);
LAB_140d4f4de:
        *(bool *)&(ppVar11->segregated_heap).runtime_config = false;
        bVar5 = true;
        pVar9 = pas_zero_mode_may_have_non_zero;
      }
      __return_storage_ptr__->begin = (ulong64)auVar13;
      __return_storage_ptr__->did_succeed = bVar5;
      *(undefined2 *)&__return_storage_ptr__->field_0x9 = local_50._0_2_;
      __return_storage_ptr__->field_0xb = local_50[2];
      __return_storage_ptr__->zero_mode = pVar9;
      if ((local_30 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
        return (pas_allocation_result *)(ulonglong)local_50[2];
      }
      goto LAB_140d4f514;
    }
  }
  local_50 = (undefined1  [8])bmalloc_common_primitive_heap.type;
  local_48 = &bmalloc_common_primitive_heap;
  local_40 = 0;
  ppVar7 = bmalloc_allocate_with_alignment_impl_impl_slow
                     (__return_storage_ptr__,(pas_heap_ref *)local_50,uVar12,param_2);
  if ((local_30 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return ppVar7;
  }
LAB_140d4f514:
  pcVar3 = (code *)swi(3);
  ppVar7 = (pas_allocation_result *)(*pcVar3)();
  return ppVar7;
}

// bmalloc_allocate_with_alignment_impl_impl_slow @ 140d4f650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_allocate_with_alignment_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_fake_heap_ref_kind,param_2,param_3,
                      &bmalloc_intrinsic_runtime_config.base,&bmalloc_allocator_counts,
                      pas_force_size_lookup);
  if (local_20.did_succeed == false) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_try_allocate_with_alignment_impl_casual_case_ptr @ 140d4f6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_allocate_with_alignment_impl_casual_case_ptr(ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_allocate_with_alignment_impl_casual_case(&local_18,param_1,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_allocate_with_alignment_impl_casual_case_ptr @ 140d4f730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_allocate_with_alignment_impl_casual_case_ptr(ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_allocate_with_alignment_impl_casual_case(&local_18,param_1,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_allocate_impl_casual_case_ptr @ 140d4f780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_try_allocate_impl_casual_case_ptr(ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  void *pvVar2;
  ulong64 in_R8;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_allocate_impl_casual_case(&local_18,param_1,in_R8);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_allocate_impl_casual_case_ptr @ 140d4f7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl bmalloc_allocate_impl_casual_case_ptr(ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  void *pvVar2;
  ulong64 in_R8;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_allocate_impl_casual_case(&local_18,param_1,in_R8);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_iso_allocate_impl_impl_slow @ 140d4f820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_iso_allocate_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_normal_heap_ref_kind,param_2,param_3,
                      &bmalloc_typed_runtime_config.base,&bmalloc_allocator_counts,
                      pas_avoid_size_lookup);
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_iso_allocate_impl_impl_slow @ 140d4f8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_iso_allocate_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_normal_heap_ref_kind,param_2,param_3,
                      &bmalloc_typed_runtime_config.base,&bmalloc_allocator_counts,
                      pas_avoid_size_lookup);
  if (local_20.did_succeed == false) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_try_iso_allocate_array_impl_casual_case_with_heap @ 140d4f930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_iso_allocate_array_impl_casual_case_with_heap
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,pas_heap *param_2,
          ulong64 param_3,ulong64 param_4)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  pas_allocation_result *ppVar9;
  ulong64 uVar10;
  pas_zero_mode pVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStackY_88 [32];
  bool local_50 [2];
  byte bStack_4e;
  undefined5 uStack_4d;
  undefined8 local_48;
  undefined2 local_3c;
  byte local_3a;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  ppVar9 = (pas_allocation_result *)(param_4 - 1);
  if ((pas_allocation_result *)(param_4 ^ (ulonglong)ppVar9) <= ppVar9) {
    __return_storage_ptr__->begin = 0;
    __return_storage_ptr__->did_succeed = false;
    __return_storage_ptr__->zero_mode = pas_zero_mode_may_have_non_zero;
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar9;
    }
    goto LAB_140d4fb66;
  }
  uVar13 = param_3;
  if ((param_4 != 1) && (uVar13 = param_4, param_4 <= param_3)) {
    uVar13 = -param_4 & (param_3 + param_4) - 1;
  }
  uVar12 = uVar13 + 0xf >> 4;
  if (uVar12 < (param_2->segregated_heap).small_index_upper_bound) {
    puVar2 = (param_2->segregated_heap).index_to_small_allocator_index;
    if (puVar2 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = puVar2[uVar12];
    }
  }
  else {
    uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                      (&param_2->segregated_heap,uVar12,
                       pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                       ,pas_lock_is_not_held);
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d4fa82:
      local_50[0] = false;
      local_48 = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_48 = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_50[0] = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d4fa82;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)local_50,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)local_50,uVar8,&bmalloc_heap_config);
  }
  bVar6 = local_50[0];
  if (((param_4 != 1) && ((local_50[0] & 1U) != 0)) &&
     ((ulonglong)(1L << (local_48->alignment_shift & 0x3f)) < param_4)) {
    bVar6 = 0;
  }
  if ((bVar6 & 1) == 0) {
    ppVar9 = bmalloc_try_iso_allocate_array_impl_impl_slow
                       (__return_storage_ptr__,param_1,uVar13,param_4);
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar9;
    }
    goto LAB_140d4fb66;
  }
  (local_48->scavenger_data).is_in_use = true;
  uVar8 = local_48->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar10 = local_48->page_ish;
    uVar12 = local_48->current_word;
    if (uVar12 != 0) {
LAB_140d4faf2:
      uVar14 = 0;
      for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar14 = uVar14 + 1;
      }
      local_48->current_word = uVar12 & ~(1L << (uVar14 & 0x3f));
      uVar10 = (uint)((int)uVar14 << 4) + uVar10;
      goto LAB_140d4fb05;
    }
    if (local_48->config_kind == 6) {
      uVar8 = local_48->end_offset;
      uVar1 = local_48->current_offset;
      uVar14 = (ulonglong)uVar1;
      if (uVar1 < uVar8) {
        local_48->bits[uVar14] = 0;
        lVar15 = 0;
        do {
          if ((uVar8 - 1) - uVar14 == lVar15) {
            local_48->current_offset = uVar8;
            goto LAB_140d4fbcd;
          }
          uVar10 = uVar10 + 0x400;
          uVar12 = local_48[1].bits[uVar14 + lVar15 + -8];
          lVar15 = lVar15 + 1;
        } while (uVar12 == 0);
        local_48->current_offset = uVar1 + (int)lVar15;
        local_48->page_ish = uVar10;
        goto LAB_140d4faf2;
      }
LAB_140d4fbcd:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_50,local_48,&bmalloc_allocator_counts,
                 pas_allocation_result_identity);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_50,local_48,uVar13,param_4,&bmalloc_allocator_counts
                 ,pas_allocation_result_identity);
    }
    uVar10 = CONCAT53(uStack_4d,CONCAT12(bStack_4e,CONCAT11(local_50[1],local_50[0])));
    bStack_4e = local_48._3_1_;
    local_3c = local_48._1_2_;
    local_50[0] = SUB81((ulonglong)local_48 >> 8,0);
    local_50[1] = SUB81((ulonglong)local_48 >> 0x10,0);
    bVar7 = local_48._0_1_;
    pVar11 = local_48._4_4_;
    local_3a = bStack_4e;
  }
  else {
    local_48->remaining = uVar8 - local_48->object_size;
    uVar10 = local_48->payload_end - (ulonglong)uVar8;
LAB_140d4fb05:
    (local_48->scavenger_data).is_in_use = false;
    bVar7 = true;
    pVar11 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = uVar10;
  __return_storage_ptr__->did_succeed = bVar7;
  *(ushort *)&__return_storage_ptr__->field_0x9 = CONCAT11(local_50[1],local_50[0]);
  __return_storage_ptr__->field_0xb = bStack_4e;
  __return_storage_ptr__->zero_mode = pVar11;
  if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)bStack_4e;
  }
LAB_140d4fb66:
  pcVar4 = (code *)swi(3);
  ppVar9 = (pas_allocation_result *)(*pcVar4)();
  return ppVar9;
}

// bmalloc_try_iso_allocate_array_impl_impl_slow @ 140d4fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_iso_allocate_array_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_normal_heap_ref_kind,param_2,param_3,
                      &bmalloc_typed_runtime_config.base,&bmalloc_allocator_counts,
                      pas_force_size_lookup);
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_iso_allocate_array_impl_casual_case_with_heap @ 140d4fcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_iso_allocate_array_impl_casual_case_with_heap
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,pas_heap *param_2,
          ulong64 param_3,ulong64 param_4)

{
  uint uVar1;
  uint *puVar2;
  pas_thread_local_cache *ppVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  pas_allocation_result *ppVar9;
  ulong64 uVar10;
  pas_zero_mode pVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStackY_88 [32];
  bool local_50 [2];
  byte bStack_4e;
  undefined5 uStack_4d;
  undefined8 local_48;
  undefined2 local_3c;
  byte local_3a;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((param_4 ^ param_4 - 1) <= param_4 - 1) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  uVar13 = param_3;
  if ((param_4 != 1) && (uVar13 = param_4, param_4 <= param_3)) {
    uVar13 = -param_4 & (param_3 + param_4) - 1;
  }
  uVar12 = uVar13 + 0xf >> 4;
  if (uVar12 < (param_2->segregated_heap).small_index_upper_bound) {
    puVar2 = (param_2->segregated_heap).index_to_small_allocator_index;
    if (puVar2 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = puVar2[uVar12];
    }
  }
  else {
    uVar8 = pas_segregated_heap_medium_allocator_index_for_index
                      (&param_2->segregated_heap,uVar12,
                       pas_segregated_heap_medium_size_directory_search_within_size_class_progression
                       ,pas_lock_is_not_held);
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar3 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar3) {
    if (uVar8 == 0) {
LAB_140d4fdfa:
      local_50[0] = false;
      local_48 = (pas_local_allocator *)0x0;
    }
    else if (uVar8 < ppVar3->allocator_index_upper_bound) {
      local_48 = (pas_local_allocator *)(ppVar3->local_allocators + uVar8);
      local_50[0] = true;
    }
    else {
      if (uVar8 == 0xffffffff) goto LAB_140d4fdfa;
      pas_thread_local_cache_get_local_allocator_slow
                ((pas_local_allocator_result *)local_50,ppVar3,uVar8,pas_lock_is_not_held);
    }
  }
  else {
    pas_thread_local_cache_get_local_allocator_if_can_set_cache_for_possibly_uninitialized_index_slow
              ((pas_local_allocator_result *)local_50,uVar8,&bmalloc_heap_config);
  }
  bVar6 = local_50[0];
  if (((param_4 != 1) && ((local_50[0] & 1U) != 0)) &&
     ((ulonglong)(1L << (local_48->alignment_shift & 0x3f)) < param_4)) {
    bVar6 = 0;
  }
  if ((bVar6 & 1) == 0) {
    ppVar9 = bmalloc_iso_allocate_array_impl_impl_slow
                       (__return_storage_ptr__,param_1,uVar13,param_4);
    if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
      return ppVar9;
    }
    goto LAB_140d4fede;
  }
  (local_48->scavenger_data).is_in_use = true;
  uVar8 = local_48->remaining;
  if ((ulonglong)uVar8 == 0) {
    uVar10 = local_48->page_ish;
    uVar12 = local_48->current_word;
    if (uVar12 != 0) {
LAB_140d4fe6a:
      uVar14 = 0;
      for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar14 = uVar14 + 1;
      }
      local_48->current_word = uVar12 & ~(1L << (uVar14 & 0x3f));
      uVar10 = (uint)((int)uVar14 << 4) + uVar10;
      goto LAB_140d4fe7d;
    }
    if (local_48->config_kind == 6) {
      uVar8 = local_48->end_offset;
      uVar1 = local_48->current_offset;
      uVar14 = (ulonglong)uVar1;
      if (uVar1 < uVar8) {
        local_48->bits[uVar14] = 0;
        lVar15 = 0;
        do {
          if ((uVar8 - 1) - uVar14 == lVar15) {
            local_48->current_offset = uVar8;
            goto LAB_140d4ff45;
          }
          uVar10 = uVar10 + 0x400;
          uVar12 = local_48[1].bits[uVar14 + lVar15 + -8];
          lVar15 = lVar15 + 1;
        } while (uVar12 == 0);
        local_48->current_offset = uVar1 + (int)lVar15;
        local_48->page_ish = uVar10;
        goto LAB_140d4fe6a;
      }
LAB_140d4ff45:
      bmalloc_heap_config_specialized_local_allocator_try_allocate_small_segregated_slow
                ((pas_allocation_result *)local_50,local_48,&bmalloc_allocator_counts,
                 pas_allocation_result_crash_on_error);
    }
    else {
      bmalloc_heap_config_specialized_local_allocator_try_allocate_slow
                ((pas_allocation_result *)local_50,local_48,uVar13,param_4,&bmalloc_allocator_counts
                 ,pas_allocation_result_crash_on_error);
    }
    uVar10 = CONCAT53(uStack_4d,CONCAT12(bStack_4e,CONCAT11(local_50[1],local_50[0])));
    bStack_4e = local_48._3_1_;
    local_3c = local_48._1_2_;
    local_50[0] = SUB81((ulonglong)local_48 >> 8,0);
    local_50[1] = SUB81((ulonglong)local_48 >> 0x10,0);
    bVar7 = local_48._0_1_;
    pVar11 = local_48._4_4_;
    local_3a = bStack_4e;
  }
  else {
    local_48->remaining = uVar8 - local_48->object_size;
    uVar10 = local_48->payload_end - (ulonglong)uVar8;
LAB_140d4fe7d:
    (local_48->scavenger_data).is_in_use = false;
    bVar7 = true;
    pVar11 = pas_zero_mode_may_have_non_zero;
  }
  __return_storage_ptr__->begin = uVar10;
  __return_storage_ptr__->did_succeed = bVar7;
  *(ushort *)&__return_storage_ptr__->field_0x9 = CONCAT11(local_50[1],local_50[0]);
  __return_storage_ptr__->field_0xb = bStack_4e;
  __return_storage_ptr__->zero_mode = pVar11;
  if ((local_38 ^ (ulonglong)auStackY_88) == __security_cookie.value) {
    return (pas_allocation_result *)(ulonglong)bStack_4e;
  }
LAB_140d4fede:
  pcVar4 = (code *)swi(3);
  ppVar9 = (pas_allocation_result *)(*pcVar4)();
  return ppVar9;
}

// bmalloc_iso_allocate_array_impl_impl_slow @ 140d4ffd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_iso_allocate_array_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_normal_heap_ref_kind,param_2,param_3,
                      &bmalloc_typed_runtime_config.base,&bmalloc_allocator_counts,
                      pas_force_size_lookup);
  if (local_20.did_succeed == false) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_try_iso_allocate_array_impl_for_realloc @ 140d50060

void * __cdecl
bmalloc_try_iso_allocate_array_impl_for_realloc
          (pas_heap_ref *param_1,pas_heap *param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar4 = param_3 + 0xf >> 4;
  uVar8 = 0;
  if ((uVar4 < (param_2->segregated_heap).small_index_upper_bound) &&
     (puVar3 = (param_2->segregated_heap).index_to_small_allocator_index, uVar8 = 0,
     puVar3 != (uint *)0x0)) {
    uVar8 = puVar3[uVar4];
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  puVar10 = ThreadLocalStoragePointer;
  if ((uVar4 < 2) || (*(uint *)(uVar4 + 0x1f74) <= uVar8)) goto LAB_140d500dc;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar4 + uVar9 * 8;
  puVar10 = (undefined1 *)(lVar1 + 0x1f80);
  *(undefined1 *)(uVar4 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar4 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar5 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d5014a;
  }
  lVar11 = *(longlong *)(lVar1 + 0x1fa0);
  uVar7 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar7 != 0) {
LAB_140d50137:
    uVar4 = 0;
    for (uVar9 = uVar7; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar4 = uVar4 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar7 & ~(1L << (uVar4 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar4 << 4) + lVar11);
LAB_140d5014a:
    *puVar10 = 0;
    return pvVar5;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar12 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar12 * 8) = 0;
      lVar6 = 0;
      do {
        if ((uVar12 - (uVar8 - 1)) + lVar6 == 0) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d501c1;
        }
        lVar11 = lVar11 + 0x400;
        uVar7 = *(ulonglong *)(uVar9 * 8 + uVar12 * 8 + uVar4 + 0x1fc8 + lVar6 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar7 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar6;
      *(longlong *)(lVar1 + 0x1fa0) = lVar11;
      goto LAB_140d50137;
    }
  }
LAB_140d501c1:
  *puVar10 = 0;
LAB_140d500dc:
  pvVar5 = bmalloc_try_iso_allocate_array_impl_casual_case_with_heap_ptr
                     (param_1,param_2,param_3,(ulong64)puVar10);
  return pvVar5;
}

// bmalloc_try_iso_allocate_array_impl_casual_case_with_heap_ptr @ 140d501d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_iso_allocate_array_impl_casual_case_with_heap_ptr
          (pas_heap_ref *param_1,pas_heap *param_2,ulong64 param_3,ulong64 param_4)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_48 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStackY_48;
  bmalloc_try_iso_allocate_array_impl_casual_case_with_heap(&local_18,param_1,param_2,param_3,1);
  if ((local_8 ^ (ulonglong)auStackY_48) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_iso_allocate_array_impl_for_realloc @ 140d50230

void * __cdecl
bmalloc_iso_allocate_array_impl_for_realloc(pas_heap_ref *param_1,pas_heap *param_2,ulong64 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar4 = param_3 + 0xf >> 4;
  uVar8 = 0;
  if ((uVar4 < (param_2->segregated_heap).small_index_upper_bound) &&
     (puVar3 = (param_2->segregated_heap).index_to_small_allocator_index, uVar8 = 0,
     puVar3 != (uint *)0x0)) {
    uVar8 = puVar3[uVar4];
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  puVar10 = ThreadLocalStoragePointer;
  if ((uVar4 < 2) || (*(uint *)(uVar4 + 0x1f74) <= uVar8)) goto LAB_140d502ac;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar4 + uVar9 * 8;
  puVar10 = (undefined1 *)(lVar1 + 0x1f80);
  *(undefined1 *)(uVar4 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar4 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar5 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d5031a;
  }
  lVar11 = *(longlong *)(lVar1 + 0x1fa0);
  uVar7 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar7 != 0) {
LAB_140d50307:
    uVar4 = 0;
    for (uVar9 = uVar7; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar4 = uVar4 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar7 & ~(1L << (uVar4 & 0x3f));
    pvVar5 = (void *)((ulonglong)(uint)((int)uVar4 << 4) + lVar11);
LAB_140d5031a:
    *puVar10 = 0;
    return pvVar5;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar12 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar12 * 8) = 0;
      lVar6 = 0;
      do {
        if ((uVar8 - 1) - uVar12 == lVar6) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d50389;
        }
        lVar11 = lVar11 + 0x400;
        uVar7 = *(ulonglong *)(uVar9 * 8 + uVar12 * 8 + uVar4 + 0x1fc8 + lVar6 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar7 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar6;
      *(longlong *)(lVar1 + 0x1fa0) = lVar11;
      goto LAB_140d50307;
    }
  }
LAB_140d50389:
  *puVar10 = 0;
LAB_140d502ac:
  pvVar5 = bmalloc_iso_allocate_array_impl_casual_case_with_heap_ptr
                     (param_1,param_2,param_3,(ulong64)puVar10);
  return pvVar5;
}

// bmalloc_iso_allocate_array_impl_casual_case_with_heap_ptr @ 140d503a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_iso_allocate_array_impl_casual_case_with_heap_ptr
          (pas_heap_ref *param_1,pas_heap *param_2,ulong64 param_3,ulong64 param_4)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStackY_48 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStackY_48;
  bmalloc_iso_allocate_array_impl_casual_case_with_heap(&local_18,param_1,param_2,param_3,1);
  if ((local_8 ^ (ulonglong)auStackY_48) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_allocate_flex_impl_impl_slow @ 140d50400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_allocate_flex_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_primitive_heap_ref_kind,param_2,param_3,
                      &bmalloc_flex_runtime_config.base,&bmalloc_allocator_counts,
                      pas_avoid_size_lookup);
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_allocate_flex_impl_impl_slow @ 140d50480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_allocate_flex_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_primitive_heap_ref_kind,param_2,param_3,
                      &bmalloc_flex_runtime_config.base,&bmalloc_allocator_counts,
                      pas_avoid_size_lookup);
  if (local_20.did_succeed == false) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_try_allocate_flex_impl_for_realloc @ 140d50510

void * __cdecl
bmalloc_try_allocate_flex_impl_for_realloc(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar5 = param_2 + 0xf >> 4;
  if (uVar5 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar3 = (param_1->base).heap;
    puVar11 = (undefined1 *)0x0;
    if (ppVar3 == (pas_heap *)0x0) goto LAB_140d5059b;
    uVar8 = 0;
    if ((uVar5 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0)) {
      uVar8 = puVar4[uVar5];
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  puVar11 = ThreadLocalStoragePointer;
  if ((uVar5 < 2) || (*(uint *)(uVar5 + 0x1f74) <= uVar8)) goto LAB_140d5059b;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar5 + uVar9 * 8;
  puVar11 = (undefined1 *)(lVar1 + 0x1f80);
  *(undefined1 *)(uVar5 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar5 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d50607;
  }
  lVar12 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d505f4:
    uVar5 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar12);
LAB_140d50607:
    *puVar11 = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar13 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar13 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar8 - 1) - uVar13 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d50674;
        }
        lVar12 = lVar12 + 0x400;
        uVar10 = *(ulonglong *)(uVar9 * 8 + uVar13 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar12;
      goto LAB_140d505f4;
    }
  }
LAB_140d50674:
  *puVar11 = 0;
LAB_140d5059b:
  pvVar6 = bmalloc_try_allocate_flex_impl_casual_case_ptr(param_1,param_2,(ulong64)puVar11);
  return pvVar6;
}

// bmalloc_try_allocate_flex_impl_casual_case_ptr @ 140d50690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_allocate_flex_impl_casual_case_ptr
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_allocate_flex_impl_casual_case(&local_18,param_1,param_2,1);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_allocate_flex_impl_for_realloc @ 140d506e0

void * __cdecl
bmalloc_allocate_flex_impl_for_realloc(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar5 = param_2 + 0xf >> 4;
  if (uVar5 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar3 = (param_1->base).heap;
    puVar11 = (undefined1 *)0x0;
    if (ppVar3 == (pas_heap *)0x0) goto LAB_140d5076b;
    uVar8 = 0;
    if ((uVar5 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0)) {
      uVar8 = puVar4[uVar5];
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  puVar11 = ThreadLocalStoragePointer;
  if ((uVar5 < 2) || (*(uint *)(uVar5 + 0x1f74) <= uVar8)) goto LAB_140d5076b;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar5 + uVar9 * 8;
  puVar11 = (undefined1 *)(lVar1 + 0x1f80);
  *(undefined1 *)(uVar5 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar5 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d507d7;
  }
  lVar12 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d507c4:
    uVar5 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar12);
LAB_140d507d7:
    *puVar11 = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar13 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar13 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar8 - 1) - uVar13 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d50844;
        }
        lVar12 = lVar12 + 0x400;
        uVar10 = *(ulonglong *)(uVar9 * 8 + uVar13 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar12;
      goto LAB_140d507c4;
    }
  }
LAB_140d50844:
  *puVar11 = 0;
LAB_140d5076b:
  pvVar6 = bmalloc_allocate_flex_impl_casual_case_ptr(param_1,param_2,(ulong64)puVar11);
  return pvVar6;
}

// bmalloc_allocate_flex_impl_casual_case_ptr @ 140d50860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_allocate_flex_impl_casual_case_ptr
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_allocate_flex_impl_casual_case(&local_18,param_1,param_2,1);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_try_allocate_auxiliary_impl_impl_slow @ 140d508b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_try_allocate_auxiliary_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_primitive_heap_ref_kind,param_2,param_3,
                      &bmalloc_primitive_runtime_config.base,&bmalloc_allocator_counts,
                      pas_avoid_size_lookup);
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_allocate_auxiliary_impl_impl_slow @ 140d50930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_allocation_result * __cdecl
bmalloc_allocate_auxiliary_impl_impl_slow
          (pas_allocation_result *__return_storage_ptr__,pas_heap_ref *param_1,ulong64 param_2,
          ulong64 param_3)

{
  code *pcVar1;
  pas_allocation_result *ppVar2;
  undefined1 auStackY_68 [32];
  pas_allocation_result local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  ppVar2 = bmalloc_heap_config_specialized_try_allocate_common_impl_slow
                     (&local_20,param_1,pas_primitive_heap_ref_kind,param_2,param_3,
                      &bmalloc_primitive_runtime_config.base,&bmalloc_allocator_counts,
                      pas_avoid_size_lookup);
  if (local_20.did_succeed == false) {
                    /* WARNING: Subroutine does not return */
    pas_panic_on_out_of_memory_error();
  }
  *(undefined4 *)&__return_storage_ptr__->begin = (undefined4)local_20.begin;
  *(undefined4 *)((longlong)&__return_storage_ptr__->begin + 4) = local_20.begin._4_4_;
  __return_storage_ptr__->did_succeed = local_20.did_succeed;
  *(undefined3 *)&__return_storage_ptr__->field_0x9 = local_20._9_3_;
  __return_storage_ptr__->zero_mode = local_20.zero_mode;
  if ((local_10 ^ (ulonglong)auStackY_68) == __security_cookie.value) {
    return ppVar2;
  }
  pcVar1 = (code *)swi(3);
  ppVar2 = (pas_allocation_result *)(*pcVar1)();
  return ppVar2;
}

// bmalloc_try_allocate_auxiliary_impl_for_realloc @ 140d509c0

void * __cdecl
bmalloc_try_allocate_auxiliary_impl_for_realloc(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar5 = param_2 + 0xf >> 4;
  if (uVar5 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar3 = (param_1->base).heap;
    puVar11 = (undefined1 *)0x0;
    if (ppVar3 == (pas_heap *)0x0) goto LAB_140d50a4b;
    uVar8 = 0;
    if ((uVar5 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0)) {
      uVar8 = puVar4[uVar5];
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  puVar11 = ThreadLocalStoragePointer;
  if ((uVar5 < 2) || (*(uint *)(uVar5 + 0x1f74) <= uVar8)) goto LAB_140d50a4b;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar5 + uVar9 * 8;
  puVar11 = (undefined1 *)(lVar1 + 0x1f80);
  *(undefined1 *)(uVar5 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar5 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d50ab7;
  }
  lVar12 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d50aa4:
    uVar5 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar12);
LAB_140d50ab7:
    *puVar11 = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar13 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar13 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar8 - 1) - uVar13 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d50b24;
        }
        lVar12 = lVar12 + 0x400;
        uVar10 = *(ulonglong *)(uVar9 * 8 + uVar13 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar12;
      goto LAB_140d50aa4;
    }
  }
LAB_140d50b24:
  *puVar11 = 0;
LAB_140d50a4b:
  pvVar6 = bmalloc_try_allocate_auxiliary_impl_casual_case_ptr(param_1,param_2,(ulong64)puVar11);
  return pvVar6;
}

// bmalloc_try_allocate_auxiliary_impl_casual_case_ptr @ 140d50b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_try_allocate_auxiliary_impl_casual_case_ptr
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_try_allocate_auxiliary_impl_casual_case(&local_18,param_1,param_2,1);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

// bmalloc_allocate_auxiliary_impl_for_realloc @ 140d50b90

void * __cdecl
bmalloc_allocate_auxiliary_impl_for_realloc(pas_primitive_heap_ref *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  pas_heap *ppVar3;
  uint *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar5 = param_2 + 0xf >> 4;
  if (uVar5 == param_1->cached_index) {
    uVar8 = (param_1->base).allocator_index;
  }
  else {
    ppVar3 = (param_1->base).heap;
    puVar11 = (undefined1 *)0x0;
    if (ppVar3 == (pas_heap *)0x0) goto LAB_140d50c1b;
    uVar8 = 0;
    if ((uVar5 < (ppVar3->segregated_heap).small_index_upper_bound) &&
       (puVar4 = (ppVar3->segregated_heap).index_to_small_allocator_index, puVar4 != (uint *)0x0)) {
      uVar8 = puVar4[uVar5];
    }
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar5 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08)
  ;
  puVar11 = ThreadLocalStoragePointer;
  if ((uVar5 < 2) || (*(uint *)(uVar5 + 0x1f74) <= uVar8)) goto LAB_140d50c1b;
  uVar9 = (ulonglong)uVar8;
  lVar1 = uVar5 + uVar9 * 8;
  puVar11 = (undefined1 *)(lVar1 + 0x1f80);
  *(undefined1 *)(uVar5 + 0x1f80 + uVar9 * 8) = 1;
  uVar8 = *(uint *)(uVar5 + 0x1f98 + uVar9 * 8);
  if ((ulonglong)uVar8 != 0) {
    *(uint *)(lVar1 + 0x1f98) = uVar8 - *(int *)(lVar1 + 0x1f9c);
    pvVar6 = (void *)(*(longlong *)(lVar1 + 0x1f90) - (ulonglong)uVar8);
    goto LAB_140d50c87;
  }
  lVar12 = *(longlong *)(lVar1 + 0x1fa0);
  uVar10 = *(ulonglong *)(lVar1 + 0x1fb0);
  if (uVar10 != 0) {
LAB_140d50c74:
    uVar5 = 0;
    for (uVar9 = uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      uVar5 = uVar5 + 1;
    }
    *(ulonglong *)(lVar1 + 0x1fb0) = uVar10 & ~(1L << (uVar5 & 0x3f));
    pvVar6 = (void *)((ulonglong)(uint)((int)uVar5 << 4) + lVar12);
LAB_140d50c87:
    *puVar11 = 0;
    return pvVar6;
  }
  if (*(char *)(lVar1 + 0x1f88) == '\x06') {
    uVar8 = *(uint *)(lVar1 + 0x1fac);
    uVar2 = *(uint *)(lVar1 + 0x1fa8);
    uVar13 = (ulonglong)uVar2;
    if (uVar2 < uVar8) {
      *(undefined8 *)(lVar1 + 0x1fc0 + uVar13 * 8) = 0;
      lVar7 = 0;
      do {
        if ((uVar8 - 1) - uVar13 == lVar7) {
          *(uint *)(lVar1 + 0x1fa8) = uVar8;
          goto LAB_140d50cf4;
        }
        lVar12 = lVar12 + 0x400;
        uVar10 = *(ulonglong *)(uVar9 * 8 + uVar13 * 8 + uVar5 + 0x1fc8 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      *(uint *)(lVar1 + 0x1fa8) = uVar2 + (int)lVar7;
      *(longlong *)(lVar1 + 0x1fa0) = lVar12;
      goto LAB_140d50c74;
    }
  }
LAB_140d50cf4:
  *puVar11 = 0;
LAB_140d50c1b:
  pvVar6 = bmalloc_allocate_auxiliary_impl_casual_case_ptr(param_1,param_2,(ulong64)puVar11);
  return pvVar6;
}

// bmalloc_allocate_auxiliary_impl_casual_case_ptr @ 140d50d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl
bmalloc_allocate_auxiliary_impl_casual_case_ptr
          (pas_primitive_heap_ref *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined1 auStack_38 [32];
  pas_allocation_result local_18;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  bmalloc_allocate_auxiliary_impl_casual_case(&local_18,param_1,param_2,1);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return (void *)local_18.begin;
  }
  pcVar1 = (code *)swi(3);
  pvVar2 = (void *)(*pcVar1)();
  return pvVar2;
}

