// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 1

// pas_create_basic_heap_page_caches_with_reserved_memory @ 140d86160

pas_basic_heap_page_caches * __cdecl
pas_create_basic_heap_page_caches_with_reserved_memory
          (pas_basic_heap_runtime_config *param_1,ulong64 param_2,ulong64 param_3)

{
  pas_reserved_memory_provider *ppVar1;
  pas_basic_heap_page_caches *ppVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  ppVar1 = pas_reserved_memory_provider_create(param_2,param_3);
  ppVar2 = pas_immortal_heap_allocate(0x170,"pas_basic_heap_page_caches",pas_object_allocation);
  pas_large_heap_physical_page_sharing_cache_construct
            (&ppVar2->large_heap_cache,pas_reserved_memory_provider_try_allocate,ppVar1);
  pas_megapage_cache_construct
            (&ppVar2->small_exclusive_segregated_megapage_cache,
             pas_reserved_memory_provider_try_allocate,ppVar1);
  pas_megapage_cache_construct
            (&ppVar2->small_other_megapage_cache,pas_reserved_memory_provider_try_allocate,ppVar1);
  pas_megapage_cache_construct
            (&ppVar2->medium_megapage_cache,pas_reserved_memory_provider_try_allocate,ppVar1);
  (ppVar2->small_shared_page_directories).log_shift =
       (param_1->page_caches->small_shared_page_directories).log_shift;
  (ppVar2->small_shared_page_directories).sharing_mode = pas_share_pages;
  (ppVar2->small_shared_page_directories).data = (pas_shared_page_directory_by_size_data *)0x0;
  (ppVar2->medium_shared_page_directories).log_shift =
       (param_1->page_caches->medium_shared_page_directories).log_shift;
  (ppVar2->medium_shared_page_directories).sharing_mode = pas_share_pages;
  (ppVar2->medium_shared_page_directories).data = (pas_shared_page_directory_by_size_data *)0x0;
  ReleaseSRWLockExclusive((PSRWLOCK)&pas_heap_lock);
  return ppVar2;
}

