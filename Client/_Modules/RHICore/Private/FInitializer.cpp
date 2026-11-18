// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 2

// CreateDefault @ 1446d64a0

FInitializer * __cdecl
FRHITransientHeapCache::FInitializer::CreateDefault(FInitializer *__return_storage_ptr__)

{
  __return_storage_ptr__->MinimumHeapSize =
       (longlong)(GRHITransientAllocatorMinimumHeapSize << 0x14);
  __return_storage_ptr__->BufferCacheSize = GRHITransientAllocatorBufferCacheSize;
  __return_storage_ptr__->TextureCacheSize = GRHITransientAllocatorTextureCacheSize;
  __return_storage_ptr__->GarbageCollectLatency = GRHITransientAllocatorGarbageCollectLatency;
  __return_storage_ptr__->MinimumFirstHeapSize = 0;
  __return_storage_ptr__->bSupportsAllHeapFlags = true;
  __return_storage_ptr__->bSupportsVirtualMapping = false;
  __return_storage_ptr__->HeapAlignment = 0x10000;
  return __return_storage_ptr__;
}

// CreateDefault @ 1446d64f0

FInitializer * __cdecl
FRHITransientPagePoolCache::FInitializer::CreateDefault(FInitializer *__return_storage_ptr__)

{
  __return_storage_ptr__->PoolSize = 0;
  __return_storage_ptr__->PoolSizeFirst = 0;
  __return_storage_ptr__->PageSize = 0;
  __return_storage_ptr__->BufferCacheSize = GRHITransientAllocatorBufferCacheSize;
  __return_storage_ptr__->TextureCacheSize = GRHITransientAllocatorTextureCacheSize;
  __return_storage_ptr__->GarbageCollectLatency = GRHITransientAllocatorGarbageCollectLatency;
  return __return_storage_ptr__;
}

