// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FMallocLibpas @ 1416d6330

FMallocLibpas * __thiscall FMallocLibpas::FMallocLibpas(FMallocLibpas *this)

{
  bool bVar1;
  
  *this = (FMallocLibpas)&___7FMallocLibpas__6B_;
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar1) {
    pas_scavenger_suspend();
  }
  return this;
}

// Free @ 1416f0a20

void __thiscall FMallocLibpas::Free(FMallocLibpas *this,void *param_1)

{
  bmalloc_deallocate(param_1);
  return;
}

// GetAllocationSize @ 1416f1e30

bool __thiscall FMallocLibpas::GetAllocationSize(FMallocLibpas *this,void *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = bmalloc_get_allocation_size(param_1);
  *param_2 = uVar1;
  return true;
}

// GetDescriptiveName @ 1416f7d30

wchar_t * __thiscall FMallocLibpas::GetDescriptiveName(FMallocLibpas *this)

{
  return L"Libpas";
}

// IsInternallyThreadSafe @ 1417024f0

bool __thiscall FMallocLibpas::IsInternallyThreadSafe(FMallocLibpas *this)

{
  return true;
}

// Malloc @ 1417045d0

void * __thiscall FMallocLibpas::Malloc(FMallocLibpas *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = bmalloc_allocate_with_alignment(param_1,(ulonglong)param_2);
  return pvVar1;
}

// OnPostFork @ 141706200

void __thiscall FMallocLibpas::OnPostFork(FMallocLibpas *this)

{
  bool bVar1;
  
  bVar1 = FForkProcessHelper::IsForkedMultithreadInstance();
  if (bVar1) {
    pas_scavenger_resume();
    return;
  }
  return;
}

// OnPreFork @ 141706350

void __thiscall FMallocLibpas::OnPreFork(FMallocLibpas *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FGenericPlatformProcess::SupportsMultithreading();
  if ((!bVar2) && (pas_scavenger_should_suspend_count == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("pas_scavenger_should_suspend_count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocLibpas.cpp"
                       ,0x45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Realloc @ 141708cb0

void * __thiscall
FMallocLibpas::Realloc(FMallocLibpas *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = bmalloc_reallocate_with_alignment
                     (param_1,param_2,(ulonglong)param_3,pas_reallocate_free_if_successful);
  return pvVar1;
}

// Trim @ 141716f40

void __thiscall FMallocLibpas::Trim(FMallocLibpas *this,bool param_1)

{
  pas_thread_local_cache *ppVar1;
  
  if (!param_1) {
    pas_scavenger_do_everything_except_remote_tlcs();
    return;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  ppVar1 = *(pas_thread_local_cache **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9c08
            );
  if ((pas_thread_local_cache *)&DAT_00000001 < ppVar1) {
    pas_thread_local_cache_shrink(ppVar1,pas_lock_is_not_held);
  }
  pas_baseline_allocator_table_for_all(pas_allocator_scavenge_force_stop_action);
  pas_utility_heap_for_all_allocators(pas_allocator_scavenge_force_stop_action,pas_lock_is_not_held)
  ;
  pas_thread_local_cache_for_all
            (pas_allocator_scavenge_force_stop_action,pas_deallocator_scavenge_flush_log_action,
             pas_thread_local_cache_decommit_if_possible_action);
  pas_scavenger_decommit_everything();
  return;
}

// TryMalloc @ 1417179e0

void * __thiscall FMallocLibpas::TryMalloc(FMallocLibpas *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = bmalloc_try_allocate_with_alignment(param_1,(ulonglong)param_2);
  return pvVar1;
}

// TryRealloc @ 141717dd0

void * __thiscall
FMallocLibpas::TryRealloc(FMallocLibpas *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = bmalloc_try_reallocate_with_alignment
                     (param_1,param_2,(ulonglong)param_3,pas_reallocate_free_if_successful);
  return pvVar1;
}

