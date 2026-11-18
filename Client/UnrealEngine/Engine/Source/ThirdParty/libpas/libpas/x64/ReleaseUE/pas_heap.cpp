// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 10

// pas_heap_create @ 140d74820

pas_heap * __cdecl
pas_heap_create(pas_heap_ref *param_1,pas_heap_ref_kind param_2,pas_heap_config *param_3,
               pas_heap_runtime_config *param_4)

{
  ulonglong uVar1;
  pas_heap_config_kind pVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  pas_heap *ppVar6;
  
  uVar4 = (*param_3->get_type_size)(param_1->type);
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar4 = (*param_3->get_type_alignment)(param_1->type);
  if ((uVar4 ^ uVar4 - 1) <= uVar4 - 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar4 = (*param_3->get_type_alignment)(param_1->type);
  uVar5 = (*param_3->get_type_size)(param_1->type);
  uVar1 = uVar4 - 1;
  if ((uVar4 ^ uVar1) <= uVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((uVar5 & uVar1) == 0) {
    ppVar6 = pas_immortal_heap_allocate(0x50,"pas_heap",pas_object_allocation);
    (ppVar6->segregated_heap).runtime_config = (pas_heap_runtime_config *)0x0;
    (ppVar6->segregated_heap).index_to_small_allocator_index = (uint *)0x0;
    (ppVar6->segregated_heap).index_to_small_size_directory =
         (pas_compact_atomic_segregated_size_directory_ptr *)0x0;
    (ppVar6->segregated_heap).basic_size_directory_and_head = 0;
    (ppVar6->segregated_heap).rare_data = 0;
    (ppVar6->segregated_heap).bitfit_heap = 0;
    (ppVar6->segregated_heap).small_index_upper_bound = 0;
    *(undefined8 *)&(ppVar6->large_heap).free_heap = 0;
    (ppVar6->large_heap).free_heap.num_mapped_bytes = 0;
    ppVar6->type = (pas_heap_type *)0x0;
    ppVar6->heap_ref = (pas_heap_ref *)0x0;
    *(undefined8 *)&ppVar6->next_heap = 0;
    ppVar6->type = param_1->type;
    pas_segregated_heap_construct(&ppVar6->segregated_heap,ppVar6,param_3,param_4);
    pas_large_heap_construct(&ppVar6->large_heap);
    ppVar6->heap_ref = param_1;
    ppVar6->heap_ref_kind = param_2;
    ppVar6->config_kind = param_3->kind;
    pas_all_heaps_add_heap(ppVar6);
    return ppVar6;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

// pas_heap_get_type_size @ 140d74920

ulong64 __cdecl pas_heap_get_type_size(pas_heap *param_1)

{
  code *pcVar1;
  ulong64 uVar2;
  
  if (param_1 == (pas_heap *)0x0) {
    return 1;
  }
  if (ZPULL(*(undefined4 *)&param_1->field_0x4c,0,6) != pas_heap_config_kind_null) {
    if (pas_heap_config_kind_for_config_table
        [(int)(*(undefined4 *)&param_1->field_0x4c << 0x1a) >> 0x1a] != (pas_heap_config *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d74946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pas_heap_config_kind_for_config_table
                [(int)(*(undefined4 *)&param_1->field_0x4c << 0x1a) >> 0x1a]->get_type_size)
                        (param_1->type);
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

// pas_heap_get_type_alignment @ 140d74960

ulong64 __cdecl pas_heap_get_type_alignment(pas_heap *param_1)

{
  ulong64 uVar1;
  
  if (param_1 != (pas_heap *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d7497f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*pas_heap_config_kind_for_config_table
              [(longlong)((ulonglong)*(uint *)&param_1->field_0x4c << 0x3a) >> 0x3a]->
              get_type_alignment)(param_1->type);
    return uVar1;
  }
  return 1;
}

// pas_heap_get_num_free_bytes @ 140d74990

ulong64 __cdecl pas_heap_get_num_free_bytes(pas_heap *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = pas_segregated_heap_get_num_free_bytes(&param_1->segregated_heap);
  uVar2 = pas_large_heap_get_num_free_bytes(&param_1->large_heap);
  return uVar2 + uVar1;
}

// pas_heap_for_each_live_object @ 140d749c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
pas_heap_for_each_live_object
          (pas_heap *param_1,_func___cdecl_bool_pas_heap_ptr_ulong64_ulong64_void_ptr *param_2,
          void *param_3,pas_lock_hold_mode param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [40];
  pas_heap *local_30;
  _func___cdecl_bool_pas_heap_ptr_ulong64_ulong64_void_ptr *local_28;
  void *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_3;
  if (param_4 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  bVar2 = pas_segregated_heap_for_each_live_object
                    (&param_1->segregated_heap,pas_heap_for_each_live_object_small_object_callback,
                     &local_30);
  if (bVar2) {
    bVar2 = pas_large_heap_for_each_live_object
                      (&param_1->large_heap,for_each_live_object_large_object_callback,&local_30);
  }
  else {
    bVar2 = false;
  }
  if (param_4 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
      return bVar2;
    }
  }
  else if ((local_18 ^ (ulonglong)auStack_58) == __security_cookie.value) {
    return bVar2;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// pas_heap_for_each_live_object_small_object_callback @ 140d74a80

bool __cdecl
pas_heap_for_each_live_object_small_object_callback
          (pas_segregated_heap *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  
  if (*(pas_segregated_heap **)param_4 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x000140d74a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)param_4 + 8))();
    return (bool)uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// for_each_live_object_large_object_callback @ 140d74aa0

bool __cdecl
for_each_live_object_large_object_callback
          (pas_large_heap *param_1,ulong64 param_2,ulong64 param_3,void *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  
  if ((pas_large_heap *)(*(longlong *)param_4 + 0x28) == param_1) {
                    /* WARNING: Could not recover jumptable at 0x000140d74aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)param_4 + 8))
                      (*(longlong *)param_4,param_2,param_3 - param_2,
                       *(undefined8 *)((longlong)param_4 + 0x10));
    return (bool)uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

// pas_heap_compute_summary @ 140d74ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

pas_heap_summary * __cdecl
pas_heap_compute_summary
          (pas_heap_summary *__return_storage_ptr__,pas_heap *param_1,pas_lock_hold_mode param_2)

{
  code *pcVar1;
  pas_heap_summary *ppVar2;
  undefined1 auStack_f8 [32];
  pas_heap_summary local_d8;
  pas_heap_summary local_78;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_2 == pas_lock_is_not_held) {
    AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  }
  pas_large_heap_compute_summary(&local_78,&param_1->large_heap);
  pas_segregated_heap_compute_summary(&local_d8,&param_1->segregated_heap);
  __return_storage_ptr__->free = local_78.free + local_d8.free;
  __return_storage_ptr__->allocated = local_78.allocated + local_d8.allocated;
  __return_storage_ptr__->meta = local_78.meta + local_d8.meta;
  __return_storage_ptr__->committed = local_78.committed + local_d8.committed;
  __return_storage_ptr__->decommitted = local_78.decommitted + local_d8.decommitted;
  __return_storage_ptr__->free_ineligible_for_decommit =
       local_78.free_ineligible_for_decommit + local_d8.free_ineligible_for_decommit;
  __return_storage_ptr__->free_eligible_for_decommit =
       local_78.free_eligible_for_decommit + local_d8.free_eligible_for_decommit;
  __return_storage_ptr__->free_decommitted = local_78.free_decommitted + local_d8.free_decommitted;
  __return_storage_ptr__->meta_ineligible_for_decommit =
       local_78.meta_ineligible_for_decommit + local_d8.meta_ineligible_for_decommit;
  __return_storage_ptr__->meta_eligible_for_decommit =
       local_78.meta_eligible_for_decommit + local_d8.meta_eligible_for_decommit;
  __return_storage_ptr__->cached = local_78.cached + local_d8.cached;
  if (param_2 == pas_lock_is_not_held) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
    if ((local_20 ^ (ulonglong)auStack_f8) != __security_cookie.value) goto LAB_140d74be0;
  }
  else if ((local_20 ^ (ulonglong)auStack_f8) != __security_cookie.value) {
LAB_140d74be0:
    pcVar1 = (code *)swi(3);
    ppVar2 = (pas_heap_summary *)(*pcVar1)();
    return ppVar2;
  }
  return __return_storage_ptr__;
}

// pas_heap_reset_heap_ref @ 140d74bf0

void __cdecl pas_heap_reset_heap_ref(pas_heap *param_1)

{
  code *pcVar1;
  char cVar2;
  
  if (param_1->heap_ref != (pas_heap_ref *)0x0) {
    param_1->heap_ref->heap = (pas_heap *)0x0;
    param_1->heap_ref->allocator_index = 0;
    cVar2 = (char)param_1->field_0x4c >> 6;
    if (cVar2 != '\0') {
      if (cVar2 != '\x01') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(undefined4 *)&param_1->heap_ref[1].type = 0xffffffff;
    }
  }
  return;
}

// pas_heap_ensure_size_directory_for_size_slow @ 140d74c30

pas_segregated_size_directory * __cdecl
pas_heap_ensure_size_directory_for_size_slow
          (pas_heap *param_1,ulong64 param_2,ulong64 param_3,pas_size_lookup_mode param_4,
          pas_heap_config *param_5,uint *param_6)

{
  pas_segregated_size_directory *ppVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ppVar1 = pas_segregated_heap_ensure_size_directory_for_size
                     (&param_1->segregated_heap,param_2,param_3,param_4,param_5,param_6,
                      pas_segregated_size_directory_full_creation_mode);
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return ppVar1;
}

