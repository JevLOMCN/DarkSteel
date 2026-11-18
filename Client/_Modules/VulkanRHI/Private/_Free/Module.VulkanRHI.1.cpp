// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 135

// Pool'' @ 14104f210

void __cdecl `dynamic_initializer_for_'FVulkanUploadContext::Pool__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVulkanUploadContext::Pool__);
  return;
}

// `dynamic_initializer_for_'CVarMemoryMapChunkedPSOCache'' @ 14104f230

void __cdecl UE::Vulkan::_dynamic_initializer_for__CVarMemoryMapChunkedPSOCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMemoryMapChunkedPSOCache,L"r.Vulkan.MemoryMapChunkedPSOCache",
             &GMemoryMapChunkedPSOCache,
             L"If true enabled memory mapping of the chunked vulkan PSO cache. (default)\n\n",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMemoryMapChunkedPSOCache__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanAllowSplitBarriers'' @ 14104f280

void __cdecl _dynamic_initializer_for__CVarVulkanAllowSplitBarriers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanAllowSplitBarriers,L"r.Vulkan.AllowSplitBarriers",&GVulkanAllowSplitBarriers
             ,
             L"Will limit the number of barriers sent per batch\n 0: Disable split barriers\n 1: Allow split barriers using Synchronization2 events (default)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanAllowSplitBarriers__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessBlockSize'' @ 14104f2d0

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessBlockSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessBlockSize,L"r.Vulkan.Bindless.BlockSize",&GVulkanBindlessBlockSize,
             L"Block size to use for single use ub. (default: 1MB)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessBlockSize__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessMaxAccelerationStructureCount'' @ 14104f320

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessMaxAccelerationStructureCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessMaxAccelerationStructureCount,
             L"r.Vulkan.Bindless.MaxResourceAccelerationStructureCount",
             &GVulkanBindlessMaxAccelerationStructureDescriptorCount,
             L"Maximum bindless Acceleration Structure descriptor count",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessMaxAccelerationStructureCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessMaxSampledImageCount'' @ 14104f370

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessMaxSampledImageCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessMaxSampledImageCount,
             L"r.Vulkan.Bindless.MaxResourceSampledImageCount",
             &GVulkanBindlessMaxSampledImageDescriptorCount,
             L"Maximum bindless Sampled Image descriptor count",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessMaxSampledImageCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessMaxSamplerDescriptorCount'' @ 14104f3c0

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessMaxSamplerDescriptorCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessMaxSamplerDescriptorCount,
             L"r.Vulkan.Bindless.MaxSamplerDescriptorCount",
             &GVulkanBindlessMaxSamplerDescriptorCount,L"Maximum bindless sampler descriptor count",
             4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessMaxSamplerDescriptorCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessMaxStorageBufferCount'' @ 14104f410

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessMaxStorageBufferCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessMaxStorageBufferCount,
             L"r.Vulkan.Bindless.MaxResourceStorageBufferCount",
             &GVulkanBindlessMaxStorageBufferDescriptorCount,
             L"Maximum bindless Storage Buffer descriptor count",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessMaxStorageBufferCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessMaxStorageImageCount'' @ 14104f460

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessMaxStorageImageCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessMaxStorageImageCount,
             L"r.Vulkan.Bindless.MaxResourceStorageImageCount",
             &GVulkanBindlessMaxStorageImageDescriptorCount,
             L"Maximum bindless Storage Image descriptor count",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessMaxStorageImageCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessMaxStorageTexelBufferCount'' @ 14104f4b0

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessMaxStorageTexelBufferCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessMaxStorageTexelBufferCount,
             L"r.Vulkan.Bindless.MaxResourceStorageTexelBufferCount",
             &GVulkanBindlessMaxStorageTexelBufferDescriptorCount,
             L"Maximum bindless Storage Texel Buffer descriptor count",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessMaxStorageTexelBufferCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessMaxUniformBufferCount'' @ 14104f500

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessMaxUniformBufferCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessMaxUniformBufferCount,
             L"r.Vulkan.Bindless.MaxResourceUniformBufferCount",
             &GVulkanBindlessMaxUniformBufferDescriptorCount,
             L"Maximum bindless Uniform Buffer descriptor count",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessMaxUniformBufferCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanBindlessMaxUniformTexelBufferCount'' @ 14104f550

void __cdecl _dynamic_initializer_for__CVarVulkanBindlessMaxUniformTexelBufferCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanBindlessMaxUniformTexelBufferCount,
             L"r.Vulkan.Bindless.MaxResourceUniformTexelBufferCount",
             &GVulkanBindlessMaxUniformTexelBufferDescriptorCount,
             L"Maximum bindless Uniform Texel Buffer descriptor count",4);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanBindlessMaxUniformTexelBufferCount__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanForceStagingBufferOnLock'' @ 14104f5a0

void __cdecl _dynamic_initializer_for__CVarVulkanForceStagingBufferOnLock__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanForceStagingBufferOnLock,L"r.Vulkan.ForceStagingBufferOnLock",
             &GVulkanForceStagingBufferOnLock,
             L"When nonzero, non-volatile buffer locks will always use staging buffers. Useful for debugging.\ndefault: 0"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanForceStagingBufferOnLock__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanMaxBarriersPerBatch'' @ 14104f5f0

void __cdecl _dynamic_initializer_for__CVarVulkanMaxBarriersPerBatch__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanMaxBarriersPerBatch,L"r.Vulkan.MaxBarriersPerBatch",
             &GVulkanMaxBarriersPerBatch,
             L"Will limit the number of barriers sent per batch\n <=0: Do not limit (default)\n >0: Limit to the specified number\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanMaxBarriersPerBatch__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanSparseBufferAllocSizeMB'' @ 14104f640

void __cdecl _dynamic_initializer_for__CVarVulkanSparseBufferAllocSizeMB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarVulkanSparseBufferAllocSizeMB,L"r.Vulkan.SparseBufferAllocSizeMB",local_res8,
             L"Size of the backing memory blocks for sparse buffers in megabytes (default 16MB).",4)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarVulkanSparseBufferAllocSizeMB__);
  return;
}

// `dynamic_initializer_for_'CVarVulkanUseMemoryBarrierOpt'' @ 14104f690

void __cdecl _dynamic_initializer_for__CVarVulkanUseMemoryBarrierOpt__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVulkanUseMemoryBarrierOpt,L"r.Vulkan.UseMemoryBarrierOpt",
             &GVulkanUseMemoryBarrierOpt,
             L"Simplify buffer barriers and image barriers without layout transitions to a memory barrier.\n 0: Do not collapse to a single memory barrier, useful for tracking single resource transitions in external tools\n 1: Collapse to a memory barrier when appropriate (default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVulkanUseMemoryBarrierOpt__);
  return;
}

// `dynamic_initializer_for_'CacheVersionedFolderCriticalSection'' @ 14104f6e0

void __cdecl UE::Vulkan::_dynamic_initializer_for__CacheVersionedFolderCriticalSection__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&CacheVersionedFolderCriticalSection,4000);
  atexit(_dynamic_atexit_destructor_for__CacheVersionedFolderCriticalSection__);
  return;
}

// `dynamic_initializer_for_'GCVarUniqueValidationMessages'' @ 14104f710

void __cdecl _dynamic_initializer_for__GCVarUniqueValidationMessages__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&GCVarUniqueValidationMessages,L"r.Vulkan.UniqueValidationMessages",1,
             L"Filter out validation errors with the same code (only when r.Vulkan.EnableValidation is non zero)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GCVarUniqueValidationMessages__);
  return;
}

// `dynamic_initializer_for_'GChunkEvictTimeCVar'' @ 14104f760

void __cdecl UE::Vulkan::_dynamic_initializer_for__GChunkEvictTimeCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GChunkEvictTimeCVar,L"r.Vulkan.ChunkedPSOCache.ChunkEvictTime",
             &GUntouchedChunkEvictTimeSeconds,
             L"Time in seconds for a cache chunk to be unused before it can be evicted from ram.\n(default) 60"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GChunkEvictTimeCVar__);
  return;
}

// `dynamic_initializer_for_'GMaxSingleCachePSOCountCVar'' @ 14104f7b0

void __cdecl UE::Vulkan::_dynamic_initializer_for__GMaxSingleCachePSOCountCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GMaxSingleCachePSOCountCVar,L"r.Vulkan.ChunkedPSOCache.MaxSingleCachePSOCount",
             &GMaxPSOsPerChunk,
             L"The target PSO count for an individual PSO cache.\nexisting caches with different PSO counts are discarded at startup.\n(default) 20"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GMaxSingleCachePSOCountCVar__);
  return;
}

// `dynamic_initializer_for_'GMaxTotalCacheSizeMbCVar'' @ 14104f800

void __cdecl UE::Vulkan::_dynamic_initializer_for__GMaxTotalCacheSizeMbCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GMaxTotalCacheSizeMbCVar,L"r.Vulkan.ChunkedPSOCache.MaxTotalCacheSizeMb",
             &GMaxTotalCacheSizeMb,
             L"At startup, if the entire cache is above this threshold the cache will be deleted\nand rebuilt during the subsequent run.\n(default) 300\n0 to disable cache size limit, note that the cache will grow indefinitely."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GMaxTotalCacheSizeMbCVar__);
  return;
}

// `dynamic_initializer_for_'GPendingLockMutex'' @ 14104f850

void __cdecl _dynamic_initializer_for__GPendingLockMutex__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GPendingLockMutex,4000);
  atexit(_dynamic_atexit_destructor_for__GPendingLockMutex__);
  return;
}

// `dynamic_initializer_for_'GPendingLocks'' @ 14104f880

void __cdecl _dynamic_initializer_for__GPendingLocks__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPendingLocks__);
  return;
}

// `dynamic_initializer_for_'GTargetResidentCacheSizeCVar'' @ 14104f8a0

void __cdecl UE::Vulkan::_dynamic_initializer_for__GTargetResidentCacheSizeCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GTargetResidentCacheSizeCVar,L"r.Vulkan.ChunkedPSOCache.TargetResidentCacheSizeMb",
             &GTargetResidentCacheSizeMb,
             L"A target resident cache size in MB, if the combined memory usage of all the currently loaded cache chunks is above this threshold\nthe least recently used chunks will be considered for eviction.\n(default) 40"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GTargetResidentCacheSizeCVar__);
  return;
}

// `dynamic_initializer_for_'GVulkanGUseNewCacheCodeCVar'' @ 14104f8f0

void __cdecl UE::Vulkan::_dynamic_initializer_for__GVulkanGUseNewCacheCodeCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GVulkanGUseNewCacheCodeCVar,L"r.Vulkan.UseChunkedPSOCache",&GUseChunkedPSOCache,L"\n",
             0x24);
  atexit(_dynamic_atexit_destructor_for__GVulkanGUseNewCacheCodeCVar__);
  return;
}

// `dynamic_initializer_for_'LogVulkanRHI'' @ 14104f940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVulkanRHI__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogVulkanRHI,L"LogVulkanRHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVulkanRHI__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated'' @ 14104f980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated__
          (void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated")
    ;
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated,*pFVar1,
               L"AccelerationStructure Descriptors Allocated","STATGROUP_VulkanBindless",
               "STATCAT_Advanced",L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessDescriptorsAllocated'' @ 14104fa10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanBindlessDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanBindlessDescriptorsAllocated,*pFVar1
               ,L"Descriptors Allocated","STATGROUP_VulkanBindless","STATCAT_Advanced",
               L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessSampledImageDescriptorsAllocated'' @ 14104faa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_VulkanBindlessSampledImageDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessSampledImageDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessSampledImageDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessSampledImageDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_VulkanBindlessSampledImageDescriptorsAllocated,*pFVar1,
               L"SampledImage Descriptors Allocated","STATGROUP_VulkanBindless","STATCAT_Advanced",
               L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessSamplerDescriptorsAllocated'' @ 14104fb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_VulkanBindlessSamplerDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessSamplerDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessSamplerDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessSamplerDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanBindlessSamplerDescriptorsAllocated,
               *pFVar1,L"Sampler Descriptors Allocated","STATGROUP_VulkanBindless",
               "STATCAT_Advanced",L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessStorageBufferDescriptorsAllocated'' @ 14104fbc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_VulkanBindlessStorageBufferDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessStorageBufferDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessStorageBufferDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessStorageBufferDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_VulkanBindlessStorageBufferDescriptorsAllocated,*pFVar1,
               L"StorageBuffer Descriptors Allocated","STATGROUP_VulkanBindless","STATCAT_Advanced",
               L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessStorageImageDescriptorsAllocated'' @ 14104fc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_VulkanBindlessStorageImageDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessStorageImageDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessStorageImageDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessStorageImageDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_VulkanBindlessStorageImageDescriptorsAllocated,*pFVar1,
               L"StorageImage Descriptors Allocated","STATGROUP_VulkanBindless","STATCAT_Advanced",
               L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated'' @ 14104fce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated,*pFVar1,
               L"StorageTexelBuffer Descriptors Allocated","STATGROUP_VulkanBindless",
               "STATCAT_Advanced",L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessUniformBufferDescriptorsAllocated'' @ 14104fd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_VulkanBindlessUniformBufferDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessUniformBufferDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessUniformBufferDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessUniformBufferDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_VulkanBindlessUniformBufferDescriptorsAllocated,*pFVar1,
               L"UniformBuffer Descriptors Allocated","STATGROUP_VulkanBindless","STATCAT_Advanced",
               L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated'' @ 14104fe00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated,*pFVar1,
               L"UniformTexelBuffer Descriptors Allocated","STATGROUP_VulkanBindless",
               "STATCAT_Advanced",L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VulkanBindlessWritePerFrame'' @ 14104fe90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VulkanBindlessWritePerFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VulkanBindlessWritePerFrame ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessWritePerFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VulkanBindlessWritePerFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanBindlessWritePerFrame,*pFVar1,
               L"Write Per Frame","STATGROUP_VulkanBindless","STATCAT_Advanced",L"Vulkan Bindless",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'VulkanPipelineCacheManager'' @ 14104ff20

void __cdecl _dynamic_initializer_for__VulkanPipelineCacheManager__(void)

{
  atexit(_dynamic_atexit_destructor_for__VulkanPipelineCacheManager__);
  return;
}

// ConstructItems<FVulkanCommitReservedResourceDesc,FVulkanCommitReservedResourceDesc,int> @ 145ad1e70

void __cdecl
ConstructItems<FVulkanCommitReservedResourceDesc,FVulkanCommitReservedResourceDesc,int>
          (void *param_1,FVulkanCommitReservedResourceDesc *param_2,int param_3)

{
  FRHIResource *this;
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = 0;
      this = *(FRHIResource **)(lVar1 + (longlong)param_1);
      *(FRHIResource **)param_1 = this;
      if (this != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)(lVar1 + 8 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TRefCountPtr<FVulkanSyncPoint>,TRefCountPtr<FVulkanSyncPoint>,int> @ 145ad1ef0

void __cdecl
ConstructItems<TRefCountPtr<FVulkanSyncPoint>,TRefCountPtr<FVulkanSyncPoint>,int>
          (void *param_1,TRefCountPtr<FVulkanSyncPoint> *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      lVar1 = *(longlong *)(lVar2 + (longlong)param_1);
      *(longlong *)param_1 = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConvertTransitionToBarriers<FLegacyBarrierArrays> @ 145ad1f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ConvertTransitionToBarriers<FLegacyBarrierArrays>
          (FVulkanCommandListContext *param_1,FVulkanTransitionData *param_2,
          FLegacyBarrierArrays *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  FRHITexture *pFVar7;
  ForElementType<VkMemoryBarrier> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FRHIViewableResource *pFVar14;
  VkBuffer_T *pVVar15;
  uint uVar16;
  ulonglong uVar17;
  ForElementType<VkMemoryBarrier> FVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  FRHITransitionInfo *pFVar21;
  int iVar22;
  ERHIAccess EVar23;
  EType EVar24;
  int iVar25;
  undefined4 uVar26;
  longlong *plVar27;
  FScriptContainerElement *pFVar28;
  FRHITransitionInfo *pFVar29;
  ERHIAccess EVar30;
  undefined1 local_78;
  undefined1 local_77 [3];
  uint local_74;
  uint local_70;
  uint local_6c;
  FRHITransitionInfo *local_68;
  uint local_60;
  VkImageLayout local_5c;
  VkImageLayout local_58 [2];
  FRHITransitionInfo *local_50;
  uint local_48;
  FRHITexture *local_40;
  
  iVar11 = (param_2->TransitionInfos).ArrayNum;
  pFVar19 = (param_2->TransitionInfos).AllocatorInstance.Data;
  iVar25 = 0;
  iVar22 = 0;
  pFVar28 = pFVar19 + (longlong)iVar11 * 0x30;
  while( true ) {
    if ((param_2->TransitionInfos).ArrayNum != iVar11) {
      local_78 = 0;
      `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_78);
    }
    if (pFVar19 == pFVar28) break;
    plVar20 = *(longlong **)(pFVar19 + 8);
    if ((plVar20 == (longlong *)0x0) || ((*(uint *)(pFVar19 + 0x18) & 0x40000) != 0)) {
LAB_145ad1fe1:
      pFVar19 = pFVar19 + 0x30;
    }
    else if (pFVar19[0x10] == (FScriptContainerElement)0x1) {
      lVar13 = (**(code **)(*plVar20 + 0x48))();
      if (*(longlong *)(lVar13 + 0x1e8) != 0) goto LAB_145ad1fe1;
      iVar25 = iVar25 + 1;
      pFVar19 = pFVar19 + 0x30;
    }
    else {
      if (((pFVar19[0x10] != (FScriptContainerElement)0x3) || ((char)plVar20[4] == '\0')) ||
         ((char)plVar20[4] == '\x01')) {
        if (param_2->SrcPipelines != param_2->DstPipelines) {
          iVar22 = iVar22 + 1;
        }
        goto LAB_145ad1fe1;
      }
      iVar25 = iVar25 + 1;
      pFVar19 = pFVar19 + 0x30;
    }
  }
  if (GVulkanUseMemoryBarrierOpt == 0) {
    iVar11 = (param_3->BufferBarriers).ArrayNum;
    uVar12 = iVar11 + iVar22;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((param_3->BufferBarriers).ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar12,&(param_3->BufferBarriers).AllocatorInstance,iVar11,
                 &(param_3->BufferBarriers).ArrayMax);
    }
  }
  iVar11 = (param_3->ImageBarriers).ArrayNum;
  uVar12 = iVar11 + iVar25;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if ((param_3->ImageBarriers).ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar12,&(param_3->ImageBarriers).AllocatorInstance,iVar11,
               &(param_3->ImageBarriers).ArrayMax);
  }
  local_48 = (param_2->TransitionInfos).ArrayNum;
  uVar17 = (ulonglong)(int)local_48;
  pFVar29 = (FRHITransitionInfo *)(param_2->TransitionInfos).AllocatorInstance.Data;
  local_68 = pFVar29 + uVar17;
  pFVar21 = local_68;
LAB_145ad207a:
  local_50 = pFVar29;
  if ((param_2->TransitionInfos).ArrayNum != (int)uVar17) {
    local_77[0] = 0;
    `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_77);
  }
  if (pFVar29 == pFVar21) {
    return;
  }
  if (((pFVar29->field1_0x8).Resource != (FRHIResource *)0x0) &&
     (EVar23 = pFVar29->AccessAfter, EVar23 != Discard)) {
    EVar30 = pFVar29->AccessBefore;
    pFVar14 = GetViewableResource(pFVar29);
    if (pFVar14 != (FRHIViewableResource *)0x0) {
      if ((EVar30 == None) ||
         ((EVar30 == Discard && (GRHIGlobals.NeedsTransientDiscardStateTracking != false)))) {
        EVar30 = (pFVar14->TrackedAccess).Access;
      }
      if (EVar23 == None) {
        EVar23 = (pFVar14->TrackedAccess).Access;
      }
      if ((EVar30 == None) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("AccessBefore != ERHIAccess::Unknown",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                              ,0x20,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((EVar23 == None) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("AccessAfter != ERHIAccess::Unknown",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                              ,0x21,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    EVar24 = pFVar29->Type;
    local_40 = (FRHITexture *)0x0;
    plVar20 = (longlong *)0x0;
    plVar27 = (longlong *)0x0;
    if (EVar24 != Texture) {
      if (EVar24 == Buffer) {
        local_40 = (pFVar29->field1_0x8).Texture;
LAB_145ad2200:
        plVar27 = (longlong *)(ulonglong)(local_40->TextureDesc).ExtData;
        goto LAB_145ad2207;
      }
      if (EVar24 == UAV) {
        pFVar7 = (pFVar29->field1_0x8).Texture;
        cVar4 = (char)pFVar7->_padding_;
        if ((cVar4 != '\0') && (cVar4 != '\x01')) {
          plVar20 = (longlong *)(**(code **)(*(longlong *)pFVar7->_padding_ + 0x48))();
          EVar24 = Texture;
          goto LAB_145ad21cd;
        }
        local_40 = (FRHITexture *)pFVar7->_padding_;
        EVar24 = Buffer;
        goto LAB_145ad2200;
      }
      plVar20 = (longlong *)0x0;
      plVar27 = (longlong *)0x0;
      if (EVar24 == BVH) goto LAB_145ad2207;
      bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                          ,0x34d,L"");
      if (bVar10) goto code_r0x000145ad26ff;
      pFVar29 = pFVar29 + 1;
      uVar17 = (ulonglong)local_48;
      pFVar21 = local_68;
      goto LAB_145ad207a;
    }
    plVar20 = (longlong *)(**(code **)(((pFVar29->field1_0x8).Resource)->_padding_ + 0x48))();
    if (plVar20[0x3d] == 0) {
LAB_145ad21cd:
      if ((plVar20 == (longlong *)0x0) || ((*(byte *)(plVar20 + 0x3c) & 6) == 0))
      goto LAB_145ad2207;
      bVar10 = true;
      if (EVar30 == None) {
        local_5c = VK_IMAGE_LAYOUT_UNDEFINED;
      }
      else if (EVar30 == Discard) {
        local_5c = VK_IMAGE_LAYOUT_UNDEFINED;
      }
      else if ((char)EVar30 < '\0') {
        local_5c = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
      }
      else {
        local_5c = EVar30 >> 0xf & VK_IMAGE_LAYOUT_GENERAL | VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
        if ((EVar30 >> 0xd & 1) != 0) {
          local_5c = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        }
      }
      if (EVar23 == None) {
        local_58[0] = VK_IMAGE_LAYOUT_UNDEFINED;
      }
      else if (EVar23 == Discard) {
        local_58[0] = VK_IMAGE_LAYOUT_UNDEFINED;
      }
      else if ((char)EVar23 < '\0') {
        local_58[0] = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
      }
      else {
        local_58[0] = EVar23 >> 0xf & VK_IMAGE_LAYOUT_GENERAL | VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
        if ((EVar23 >> 0xd & 1) != 0) {
          local_58[0] = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        }
      }
      GetDepthOrStencilStageAndAccessFlags(EVar30,&local_60,&local_70);
      GetDepthOrStencilStageAndAccessFlags(EVar23,&local_74,&local_6c);
    }
    else {
      plVar20 = (longlong *)0x0;
LAB_145ad2207:
      if ((plVar20 == (longlong *)0x0) ||
         ((lVar13 = (**(code **)(*plVar20 + 0x20))(plVar20),
          (GPixelFormats[*(byte *)(lVar13 + 0x33)].Capabilities & TextureSample) != None &&
          ((*(byte *)(plVar20 + 0x2f) & 4) != 0)))) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      GetVkStageAndAccessFlags
                (EVar30,EVar24,(uint)plVar27,false,bVar10,&local_60,&local_70,&local_5c,true);
      GetVkStageAndAccessFlags
                (EVar23,EVar24,(uint)plVar27,false,bVar10,&local_74,&local_6c,local_58,false);
      pFVar29 = local_50;
      if (((plVar20 == (longlong *)0x0) || ((EVar23 & SRVGraphicsNonPixel) == None)) ||
         ((EVar23 & SRVGraphicsPixel) != None)) {
        bVar10 = false;
        if ((local_60 & 0x800) == 0) {
          local_74 = local_74 & 0xffffffb7;
        }
      }
      else {
        bVar10 = false;
      }
    }
    pFVar7 = local_40;
    param_3->SrcStageMask = param_3->SrcStageMask | local_60;
    param_3->DstStageMask = param_3->DstStageMask | local_74;
    if (((param_2->SrcPipelines == param_2->DstPipelines) &&
        ((plVar20 == (longlong *)0x0 || (local_5c == local_58[0])))) &&
       (GVulkanUseMemoryBarrierOpt != 0)) {
      iVar11 = 0;
      if ((param_3->MemoryBarriers).ArrayNum == 0) {
        piVar1 = &(param_3->MemoryBarriers).ArrayMax;
        if (*piVar1 == 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier>_>
                             (0x818,(ForElementType<VkMemoryBarrier> *)param_3,piVar1);
        }
        (param_3->MemoryBarriers).ArrayNum = iVar11 + 1;
        FVar8 = (param_3->MemoryBarriers).AllocatorInstance.SecondaryData;
        lVar13 = (longlong)iVar11;
        FVar18 = (ForElementType<VkMemoryBarrier>)param_3;
        if (FVar8 != (ForElementType<VkMemoryBarrier>)0x0) {
          FVar18 = FVar8;
        }
        puVar2 = (undefined8 *)((longlong)FVar18 + lVar13 * 0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar3 = (uchar *)((longlong)FVar18 + 0x10) + lVar13 * 0x18;
        puVar3[0] = '\0';
        puVar3[1] = '\0';
        puVar3[2] = '\0';
        puVar3[3] = '\0';
        puVar3[4] = '\0';
        puVar3[5] = '\0';
        puVar3[6] = '\0';
        puVar3[7] = '\0';
        *(undefined4 *)((longlong)FVar18 + lVar13 * 0x18) = 0x2e;
      }
      if (((param_3->MemoryBarriers).ArrayNum < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (param_3->MemoryBarriers).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<VkMemoryBarrier>)param_3;
      if (FVar8 != (ForElementType<VkMemoryBarrier>)0x0) {
        FVar18 = FVar8;
      }
      pFVar21 = local_68;
      if ((local_70 & 0xffff7540) == 0) goto LAB_145ad2708;
      *(uint *)((longlong)FVar18 + 0x10) = *(uint *)((longlong)FVar18 + 0x10) | local_70;
      *(uint *)((longlong)FVar18 + 0x14) = *(uint *)((longlong)FVar18 + 0x14) | local_6c;
      pFVar29 = pFVar29 + 1;
      uVar17 = (ulonglong)local_48;
      goto LAB_145ad207a;
    }
    if (local_40 != (FRHITexture *)0x0) {
      iVar11 = (param_3->BufferBarriers).ArrayNum;
      piVar1 = &(param_3->BufferBarriers).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(param_3->BufferBarriers).AllocatorInstance,piVar1);
      }
      (param_3->BufferBarriers).ArrayNum = iVar11 + 1;
      pFVar19 = (param_3->BufferBarriers).AllocatorInstance.Data + (longlong)iVar11 * 0x38;
      *(undefined8 *)(pFVar19 + 4) = 0;
      *(undefined4 *)(pFVar19 + 0xc) = 0;
      *(undefined8 *)(pFVar19 + 0x20) = 0;
      *(undefined8 *)(pFVar19 + 0x28) = 0;
      *(undefined8 *)(pFVar19 + 0x30) = 0;
      *(uint *)(pFVar19 + 0x10) = local_70;
      *(uint *)(pFVar19 + 0x14) = local_6c;
      *(undefined4 *)pFVar19 = 0x2c;
      *(undefined8 *)(pFVar19 + 0x18) = 0xffffffffffffffff;
      pVVar15 = VulkanRHI::FVulkanAllocation::GetBufferHandle
                          ((FVulkanAllocation *)
                           ((longlong)&(pFVar7->TextureDesc).Extent.field0_0x0 + 4));
      pFVar29 = pFVar29 + 1;
      uVar17 = (ulonglong)local_48;
      *(VkBuffer_T **)(pFVar19 + 0x20) = pVVar15;
      *(ulonglong *)(pFVar19 + 0x28) =
           (ulonglong)*(uint *)&(pFVar7->TextureDesc).AliasableFormats.AllocatorInstance;
      uVar12._0_1_ = (pFVar7->TextureDesc).UAVFormat;
      uVar12._1_1_ = (pFVar7->TextureDesc).FastVRAMPercentage;
      uVar12._2_2_ = *(undefined2 *)&(pFVar7->TextureDesc).field_0x36;
      *(ulonglong *)(pFVar19 + 0x30) = (ulonglong)uVar12;
      pFVar21 = local_68;
      goto LAB_145ad207a;
    }
    if (plVar20 == (longlong *)0x0) {
      bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                          ,0x3cd,L"Transition with no resource!");
      pFVar21 = local_68;
      if (bVar10) {
code_r0x000145ad26ff:
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      if (bVar10) {
        sVar5 = *(short *)((longlong)&pFVar29->_padding_ + 4);
        uVar26 = 6;
        if (sVar5 != -1) {
          uVar26 = 0;
        }
        if (sVar5 == 0) {
          uVar26 = 2;
        }
        else if (sVar5 == 1) {
          uVar26 = 4;
        }
      }
      else {
        uVar26 = (int)plVar20[0x3c];
      }
      iVar11 = (param_3->ImageBarriers).ArrayNum;
      if (iVar11 == (param_3->ImageBarriers).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,&(param_3->ImageBarriers).AllocatorInstance,
                            &(param_3->ImageBarriers).ArrayMax);
      }
      (param_3->ImageBarriers).ArrayNum = iVar11 + 1;
      lVar13 = (longlong)iVar11;
      pFVar19 = (param_3->ImageBarriers).AllocatorInstance.Data;
      *(undefined8 *)(pFVar19 + lVar13 * 0x48 + 4) = 0;
      *(undefined4 *)(pFVar19 + lVar13 * 0x48 + 0xc) = 0;
      *(undefined8 *)(pFVar19 + lVar13 * 0x48 + 0x28) = 0;
      pFVar19 = pFVar19 + lVar13 * 0x48;
      *(undefined8 *)(pFVar19 + 0x30) = 0;
      *(undefined8 *)(pFVar19 + 0x38) = 0;
      *(undefined8 *)(pFVar19 + 0x40) = 0;
      *(uint *)(pFVar19 + 0x10) = local_70;
      *(uint *)(pFVar19 + 0x14) = local_6c;
      *(VkImageLayout *)(pFVar19 + 0x18) = local_5c;
      *(VkImageLayout *)(pFVar19 + 0x1c) = local_58[0];
      *(undefined4 *)pFVar19 = 0x2d;
      *(undefined8 *)(pFVar19 + 0x20) = 0xffffffffffffffff;
      *(longlong *)(pFVar19 + 0x28) = plVar20[0x2e];
      *(undefined4 *)(pFVar19 + 0x30) = uVar26;
      uVar6 = (ushort)pFVar29->_padding_;
      uVar12 = 0;
      if (uVar6 != 0xffff) {
        uVar12 = (uint)uVar6;
      }
      *(uint *)(pFVar19 + 0x34) = uVar12;
      uVar26 = 0xffffffff;
      if (uVar6 != 0xffff) {
        uVar26 = 1;
      }
      *(undefined4 *)(pFVar19 + 0x38) = uVar26;
      uVar16 = (uint)*(ushort *)((longlong)&pFVar29->_padding_ + 2);
      uVar12 = uVar16;
      if (uVar16 == 0xffff) {
        uVar12 = 0;
      }
      piVar1 = &(param_3->ImageExtraData).ArrayMax;
      *(uint *)(pFVar19 + 0x3c) = uVar12;
      uVar26 = 0xffffffff;
      if (uVar16 != 0xffff) {
        uVar26 = 1;
      }
      *(undefined4 *)(pFVar19 + 0x40) = uVar26;
      iVar11 = (param_3->ImageExtraData).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(param_3->ImageExtraData).AllocatorInstance,piVar1);
      }
      pFVar19 = (param_3->ImageExtraData).AllocatorInstance.Data;
      (param_3->ImageExtraData).ArrayNum = iVar11 + 1;
      pFVar19 = pFVar19 + (longlong)iVar11 * 0x10;
      DefaultConstructItems<FImageBarrierExtraData,int>(pFVar19,1);
      *(longlong **)pFVar19 = plVar20;
      pFVar19[8] = (FScriptContainerElement)(EVar30 == Discard);
      pFVar21 = local_68;
      if ((*(byte *)(plVar20 + 0x3c) & 6) != 0) {
        uVar17 = (ulonglong)local_48;
        *(ERHIAccess *)(pFVar19 + 0xc) = EVar23;
        plVar20 = &pFVar29->_padding_;
        pFVar29 = pFVar29 + 1;
        pFVar19[9] = *(FScriptContainerElement *)((longlong)plVar20 + 4);
        goto LAB_145ad207a;
      }
    }
  }
LAB_145ad2708:
  uVar17 = (ulonglong)local_48;
  pFVar29 = pFVar29 + 1;
  goto LAB_145ad207a;
}

// ConvertTransitionToBarriers<FSync2BarrierArrays> @ 145ad2750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ConvertTransitionToBarriers<FSync2BarrierArrays>
          (FVulkanCommandListContext *param_1,FVulkanTransitionData *param_2,
          FSync2BarrierArrays *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  FRHITexture *pFVar7;
  ForElementType<VkMemoryBarrier2> FVar8;
  code *pcVar9;
  TArray<VkImageMemoryBarrier2,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar17;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  FRHIViewableResource *pFVar14;
  longlong *plVar15;
  VkBuffer_T *pVVar16;
  ulonglong uVar18;
  ForElementType<VkMemoryBarrier2> FVar19;
  ERHIAccess EVar20;
  undefined4 uVar21;
  FScriptContainerElement *pFVar22;
  FRHITransitionInfo *pFVar23;
  int iVar24;
  ERHIAccess EVar25;
  int iVar26;
  uint uVar27;
  FRHITexture *pFVar28;
  FRHITexture *pFVar29;
  EType EVar30;
  FScriptContainerElement *pFVar31;
  FRHITransitionInfo *pFVar32;
  undefined1 local_78;
  undefined1 local_77 [3];
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  VkImageLayout local_64;
  VkImageLayout local_60 [2];
  FRHITransitionInfo *local_58;
  FRHITransitionInfo *local_50;
  uint local_48;
  TArray<VkImageMemoryBarrier2,TSizedDefaultAllocator<32>_> *local_40;
  
  iVar12 = (param_2->TransitionInfos).ArrayNum;
  iVar26 = 0;
  pFVar22 = (param_2->TransitionInfos).AllocatorInstance.Data;
  iVar24 = 0;
  pFVar31 = pFVar22 + (longlong)iVar12 * 0x30;
  while( true ) {
    if ((param_2->TransitionInfos).ArrayNum != iVar12) {
      local_78 = 0;
      `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_78);
    }
    if (pFVar22 == pFVar31) break;
    plVar15 = *(longlong **)(pFVar22 + 8);
    if ((plVar15 == (longlong *)0x0) || ((*(uint *)(pFVar22 + 0x18) & 0x40000) != 0)) {
LAB_145ad2804:
      pFVar22 = pFVar22 + 0x30;
    }
    else if (pFVar22[0x10] == (FScriptContainerElement)0x1) {
      lVar13 = (**(code **)(*plVar15 + 0x48))();
      if (*(longlong *)(lVar13 + 0x1e8) != 0) goto LAB_145ad2804;
      iVar26 = iVar26 + 1;
      pFVar22 = pFVar22 + 0x30;
    }
    else {
      if (((pFVar22[0x10] != (FScriptContainerElement)0x3) || ((char)plVar15[4] == '\0')) ||
         ((char)plVar15[4] == '\x01')) {
        if (param_2->SrcPipelines != param_2->DstPipelines) {
          iVar24 = iVar24 + 1;
        }
        goto LAB_145ad2804;
      }
      iVar26 = iVar26 + 1;
      pFVar22 = pFVar22 + 0x30;
    }
  }
  if (GVulkanUseMemoryBarrierOpt == 0) {
    iVar12 = (param_3->BufferBarriers).ArrayNum;
    uVar17 = iVar12 + iVar24;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((param_3->BufferBarriers).ArrayMax < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar17,&(param_3->BufferBarriers).AllocatorInstance,iVar12,
                 &(param_3->BufferBarriers).ArrayMax);
    }
  }
  iVar12 = (param_3->ImageBarriers).ArrayNum;
  local_40 = &param_3->ImageBarriers;
  uVar17 = iVar12 + iVar26;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((param_3->ImageBarriers).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,uVar17,&local_40->AllocatorInstance,iVar12,&(param_3->ImageBarriers).ArrayMax)
    ;
  }
  local_48 = (param_2->TransitionInfos).ArrayNum;
  uVar18 = (ulonglong)(int)local_48;
  pFVar32 = (FRHITransitionInfo *)(param_2->TransitionInfos).AllocatorInstance.Data;
  local_58 = pFVar32 + uVar18;
  pFVar23 = local_58;
LAB_145ad28a4:
  do {
    while( true ) {
      local_50 = pFVar32;
      if ((param_2->TransitionInfos).ArrayNum != (int)uVar18) {
        local_77[0] = 0;
        `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_77);
      }
      if (pFVar32 == pFVar23) {
        return;
      }
      if (((pFVar32->field1_0x8).Resource != (FRHIResource *)0x0) &&
         (EVar20 = pFVar32->AccessAfter, pFVar23 = local_58, EVar20 != Discard)) break;
LAB_145ad2ed8:
      uVar18 = (ulonglong)local_48;
      pFVar32 = pFVar32 + 1;
    }
    EVar25 = pFVar32->AccessBefore;
    pFVar14 = GetViewableResource(pFVar32);
    if (pFVar14 != (FRHIViewableResource *)0x0) {
      if ((EVar25 == None) ||
         ((EVar25 == Discard && (GRHIGlobals.NeedsTransientDiscardStateTracking != false)))) {
        EVar25 = (pFVar14->TrackedAccess).Access;
      }
      if (EVar20 == None) {
        EVar20 = (pFVar14->TrackedAccess).Access;
      }
      if ((EVar25 == None) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("AccessBefore != ERHIAccess::Unknown",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                              ,0x20,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((EVar20 == None) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("AccessAfter != ERHIAccess::Unknown",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Internal\\RHICoreTransitions.h"
                              ,0x21,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    EVar30 = pFVar32->Type;
    pFVar28 = (FRHITexture *)0x0;
    plVar15 = (longlong *)0x0;
    uVar27 = 0;
    uVar17 = 0;
    pFVar29 = pFVar28;
    if (EVar30 == Texture) {
      plVar15 = (longlong *)(**(code **)(((pFVar32->field1_0x8).Resource)->_padding_ + 0x48))();
      if (plVar15[0x3d] == 0) {
LAB_145ad29f3:
        uVar17 = uVar27;
        if ((plVar15 == (longlong *)0x0) ||
           (pFVar29 = (FRHITexture *)0x0, (*(byte *)(plVar15 + 0x3c) & 6) == 0)) goto LAB_145ad2a22;
        bVar11 = true;
        if (EVar25 == None) {
          local_64 = VK_IMAGE_LAYOUT_UNDEFINED;
        }
        else if (EVar25 == Discard) {
          local_64 = VK_IMAGE_LAYOUT_UNDEFINED;
        }
        else if ((char)EVar25 < '\0') {
          local_64 = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
        }
        else {
          local_64 = EVar25 >> 0xf & VK_IMAGE_LAYOUT_GENERAL | VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
          if ((EVar25 >> 0xd & 1) != 0) {
            local_64 = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
          }
        }
        if (EVar20 == None) {
          local_60[0] = VK_IMAGE_LAYOUT_UNDEFINED;
        }
        else if (EVar20 == Discard) {
          local_60[0] = VK_IMAGE_LAYOUT_UNDEFINED;
        }
        else if ((char)EVar20 < '\0') {
          local_60[0] = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
        }
        else {
          local_60[0] = EVar20 >> 0xf & VK_IMAGE_LAYOUT_GENERAL | VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
          if ((EVar20 >> 0xd & 1) != 0) {
            local_60[0] = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
          }
        }
        GetDepthOrStencilStageAndAccessFlags(EVar25,&local_70,&local_6c);
        GetDepthOrStencilStageAndAccessFlags(EVar20,&local_74,&local_68);
      }
      else {
        plVar15 = (longlong *)0x0;
        pFVar29 = (FRHITexture *)0x0;
LAB_145ad2a22:
        if ((plVar15 == (longlong *)0x0) ||
           ((lVar13 = (**(code **)(*plVar15 + 0x20))(plVar15),
            (GPixelFormats[*(byte *)(lVar13 + 0x33)].Capabilities & TextureSample) != None &&
            ((*(byte *)(plVar15 + 0x2f) & 4) != 0)))) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        GetVkStageAndAccessFlags
                  (EVar25,EVar30,uVar17,false,bVar11,&local_70,&local_6c,&local_64,true);
        GetVkStageAndAccessFlags
                  (EVar20,EVar30,uVar17,false,bVar11,&local_74,&local_68,local_60,false);
        pFVar28 = pFVar29;
        pFVar32 = local_50;
        if (((plVar15 == (longlong *)0x0) || ((EVar20 & SRVGraphicsNonPixel) == None)) ||
           ((EVar20 & SRVGraphicsPixel) != None)) {
          bVar11 = false;
          if ((local_70 & 0x800) == 0) {
            local_74 = local_74 & 0xffffffb7;
            bVar11 = false;
          }
        }
        else {
          bVar11 = false;
        }
      }
      pTVar10 = local_40;
      if (((param_2->SrcPipelines == param_2->DstPipelines) &&
          ((plVar15 == (longlong *)0x0 || (local_64 == local_60[0])))) &&
         (GVulkanUseMemoryBarrierOpt != 0)) {
        if ((param_3->MemoryBarriers).ArrayNum == 0) {
          piVar1 = &(param_3->MemoryBarriers).ArrayMax;
          iVar12 = 0;
          if (*piVar1 == 0) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryBarrier2>_>
                               (0x830,(ForElementType<VkMemoryBarrier2> *)param_3,piVar1);
          }
          (param_3->MemoryBarriers).ArrayNum = iVar12 + 1;
          FVar8 = (param_3->MemoryBarriers).AllocatorInstance.SecondaryData;
          lVar13 = (longlong)iVar12;
          FVar19 = (ForElementType<VkMemoryBarrier2>)param_3;
          if (FVar8 != (ForElementType<VkMemoryBarrier2>)0x0) {
            FVar19 = FVar8;
          }
          puVar2 = (undefined8 *)((longlong)FVar19 + lVar13 * 0x30);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar3 = (uchar *)((longlong)FVar19 + 0x10) + lVar13 * 0x30;
          puVar3[0] = '\0';
          puVar3[1] = '\0';
          puVar3[2] = '\0';
          puVar3[3] = '\0';
          puVar3[4] = '\0';
          puVar3[5] = '\0';
          puVar3[6] = '\0';
          puVar3[7] = '\0';
          puVar3[8] = '\0';
          puVar3[9] = '\0';
          puVar3[10] = '\0';
          puVar3[0xb] = '\0';
          puVar3[0xc] = '\0';
          puVar3[0xd] = '\0';
          puVar3[0xe] = '\0';
          puVar3[0xf] = '\0';
          puVar3 = (uchar *)((longlong)FVar19 + 0x20) + lVar13 * 0x30;
          puVar3[0] = '\0';
          puVar3[1] = '\0';
          puVar3[2] = '\0';
          puVar3[3] = '\0';
          puVar3[4] = '\0';
          puVar3[5] = '\0';
          puVar3[6] = '\0';
          puVar3[7] = '\0';
          puVar3[8] = '\0';
          puVar3[9] = '\0';
          puVar3[10] = '\0';
          puVar3[0xb] = '\0';
          puVar3[0xc] = '\0';
          puVar3[0xd] = '\0';
          puVar3[0xe] = '\0';
          puVar3[0xf] = '\0';
          *(undefined4 *)((longlong)FVar19 + lVar13 * 0x30) = 0x3b9f9490;
        }
        if (((param_3->MemoryBarriers).ArrayNum < 1) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (param_3->MemoryBarriers).AllocatorInstance.SecondaryData;
        FVar19 = (ForElementType<VkMemoryBarrier2>)param_3;
        if (FVar8 != (ForElementType<VkMemoryBarrier2>)0x0) {
          FVar19 = FVar8;
        }
        if ((local_6c & 0xffff7540) != 0) {
          *(ulonglong *)((longlong)FVar19 + 0x18) =
               *(ulonglong *)((longlong)FVar19 + 0x18) | (ulonglong)local_6c;
          *(ulonglong *)((longlong)FVar19 + 0x28) =
               *(ulonglong *)((longlong)FVar19 + 0x28) | (ulonglong)local_68;
        }
        *(ulonglong *)((longlong)FVar19 + 0x10) =
             *(ulonglong *)((longlong)FVar19 + 0x10) | (ulonglong)local_70;
        *(ulonglong *)((longlong)FVar19 + 0x20) =
             *(ulonglong *)((longlong)FVar19 + 0x20) | (ulonglong)local_74;
        pFVar32 = pFVar32 + 1;
        uVar18 = (ulonglong)local_48;
        pFVar23 = local_58;
      }
      else if (pFVar28 == (FRHITexture *)0x0) {
        if (plVar15 == (longlong *)0x0) {
          bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                              ,0x3cd,L"Transition with no resource!");
          pFVar23 = local_58;
          if (!bVar11) goto LAB_145ad2ed8;
code_r0x000145ad2ed3:
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (bVar11) {
          sVar5 = *(short *)((longlong)&pFVar32->_padding_ + 4);
          uVar21 = 6;
          if (sVar5 != -1) {
            uVar21 = 0;
          }
          if (sVar5 == 0) {
            uVar21 = 2;
          }
          else if (sVar5 == 1) {
            uVar21 = 4;
          }
        }
        else {
          uVar21 = (undefined4)plVar15[0x3c];
        }
        iVar12 = local_40->ArrayNum;
        if (iVar12 == local_40->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x860,&local_40->AllocatorInstance,&local_40->ArrayMax);
        }
        pTVar10->ArrayNum = iVar12 + 1;
        pFVar22 = (pTVar10->AllocatorInstance).Data + (longlong)iVar12 * 0x60;
        *(undefined8 *)pFVar22 = 0;
        *(undefined8 *)(pFVar22 + 8) = 0;
        *(undefined8 *)(pFVar22 + 0x10) = 0;
        *(undefined8 *)(pFVar22 + 0x18) = 0;
        *(undefined8 *)(pFVar22 + 0x20) = 0;
        *(undefined8 *)(pFVar22 + 0x28) = 0;
        *(undefined8 *)(pFVar22 + 0x30) = 0;
        *(undefined8 *)(pFVar22 + 0x38) = 0;
        *(undefined8 *)(pFVar22 + 0x40) = 0;
        *(undefined8 *)(pFVar22 + 0x48) = 0;
        *(undefined8 *)(pFVar22 + 0x50) = 0;
        *(undefined8 *)(pFVar22 + 0x58) = 0;
        *(ulonglong *)(pFVar22 + 0x18) = (ulonglong)local_6c;
        *(ulonglong *)(pFVar22 + 0x28) = (ulonglong)local_68;
        *(VkImageLayout *)(pFVar22 + 0x30) = local_64;
        *(VkImageLayout *)(pFVar22 + 0x34) = local_60[0];
        *(undefined4 *)pFVar22 = 0x3b9f9492;
        *(undefined8 *)(pFVar22 + 0x38) = 0xffffffffffffffff;
        *(longlong *)(pFVar22 + 0x40) = plVar15[0x2e];
        *(undefined4 *)(pFVar22 + 0x48) = uVar21;
        uVar6 = (ushort)pFVar32->_padding_;
        uVar17 = 0;
        if (uVar6 != 0xffff) {
          uVar17 = (uint)uVar6;
        }
        *(uint *)(pFVar22 + 0x4c) = uVar17;
        uVar21 = 0xffffffff;
        if (uVar6 != 0xffff) {
          uVar21 = 1;
        }
        *(undefined4 *)(pFVar22 + 0x50) = uVar21;
        uVar17 = (uint)*(ushort *)((longlong)&pFVar32->_padding_ + 2);
        bVar11 = uVar17 == 0xffff;
        uVar18 = (ulonglong)local_48;
        if (bVar11) {
          uVar17 = 0;
        }
        *(uint *)(pFVar22 + 0x54) = uVar17;
        uVar21 = 0xffffffff;
        if (!bVar11) {
          uVar21 = 1;
        }
        pFVar32 = pFVar32 + 1;
        *(undefined4 *)(pFVar22 + 0x58) = uVar21;
        *(ulonglong *)(pFVar22 + 0x10) = (ulonglong)local_70;
        *(ulonglong *)(pFVar22 + 0x20) = (ulonglong)local_74;
        pFVar23 = local_58;
      }
      else {
        piVar1 = &(param_3->BufferBarriers).ArrayMax;
        iVar12 = (param_3->BufferBarriers).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&(param_3->BufferBarriers).AllocatorInstance,piVar1);
        }
        (param_3->BufferBarriers).ArrayNum = iVar12 + 1;
        pFVar22 = (param_3->BufferBarriers).AllocatorInstance.Data + (longlong)iVar12 * 0x50;
        *(undefined8 *)(pFVar22 + 4) = 0;
        *(undefined8 *)(pFVar22 + 0xc) = 0;
        *(undefined4 *)(pFVar22 + 0x14) = 0;
        *(undefined8 *)(pFVar22 + 0x20) = 0;
        *(undefined8 *)(pFVar22 + 0x38) = 0;
        *(undefined8 *)(pFVar22 + 0x40) = 0;
        *(undefined8 *)(pFVar22 + 0x48) = 0;
        *(ulonglong *)(pFVar22 + 0x18) = (ulonglong)local_6c;
        *(ulonglong *)(pFVar22 + 0x28) = (ulonglong)local_68;
        *(undefined4 *)pFVar22 = 0x3b9f9491;
        *(undefined8 *)(pFVar22 + 0x30) = 0xffffffffffffffff;
        pVVar16 = VulkanRHI::FVulkanAllocation::GetBufferHandle
                            ((FVulkanAllocation *)
                             ((longlong)&(pFVar28->TextureDesc).Extent.field0_0x0 + 4));
        pFVar32 = pFVar32 + 1;
        uVar18 = (ulonglong)local_48;
        *(VkBuffer_T **)(pFVar22 + 0x38) = pVVar16;
        *(ulonglong *)(pFVar22 + 0x40) =
             (ulonglong)*(uint *)&(pFVar28->TextureDesc).AliasableFormats.AllocatorInstance;
        uVar17._0_1_ = (pFVar28->TextureDesc).UAVFormat;
        uVar17._1_1_ = (pFVar28->TextureDesc).FastVRAMPercentage;
        uVar17._2_2_ = *(undefined2 *)&(pFVar28->TextureDesc).field_0x36;
        *(ulonglong *)(pFVar22 + 0x48) = (ulonglong)uVar17;
        *(ulonglong *)(pFVar22 + 0x10) = (ulonglong)local_70;
        *(ulonglong *)(pFVar22 + 0x20) = (ulonglong)local_74;
        pFVar23 = local_58;
      }
      goto LAB_145ad28a4;
    }
    if (EVar30 == Buffer) {
      pFVar29 = (pFVar32->field1_0x8).Texture;
LAB_145ad2a1b:
      uVar17 = (pFVar29->TextureDesc).ExtData;
      goto LAB_145ad2a22;
    }
    if (EVar30 == UAV) {
      pFVar7 = (pFVar32->field1_0x8).Texture;
      cVar4 = (char)pFVar7->_padding_;
      if ((cVar4 != '\0') && (cVar4 != '\x01')) {
        plVar15 = (longlong *)(**(code **)(*(longlong *)pFVar7->_padding_ + 0x48))();
        EVar30 = Texture;
        goto LAB_145ad29f3;
      }
      pFVar29 = (FRHITexture *)pFVar7->_padding_;
      EVar30 = Buffer;
      goto LAB_145ad2a1b;
    }
    uVar17 = uVar27;
    if (EVar30 == BVH) goto LAB_145ad2a22;
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                        ,0x34d,L"");
    if (bVar11) goto code_r0x000145ad2ed3;
    pFVar32 = pFVar32 + 1;
    uVar18 = (ulonglong)local_48;
    pFVar23 = local_58;
  } while( true );
}

// DefaultConstructItems<FImageBarrierExtraData,int> @ 145ad4540

void __cdecl DefaultConstructItems<FImageBarrierExtraData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 9;
    do {
      *(undefined8 *)(lVar1 + -9) = 0;
      *(undefined2 *)(lVar1 + -1) = 0;
      *(undefined4 *)(lVar1 + 3) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FVulkanReservedResourceData::FSparseAllocation,int> @ 145ad4570

void __cdecl
DefaultConstructItems<FVulkanReservedResourceData::FSparseAllocation,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    VulkanRHI::FVulkanAllocation::FVulkanAllocation(param_1);
    ((FVulkanAllocation *)((longlong)param_1 + 0x20))->VulkanHandle = 0;
    param_1 = &((FVulkanAllocation *)((longlong)param_1 + 0x20))->HandleId;
  }
  return;
}

// DefaultConstructItems<VkBufferMemoryBarrier,int> @ 145ad45c0

void __cdecl DefaultConstructItems<VkBufferMemoryBarrier,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<VkImageMemoryBarrier2,int> @ 145ad45d0

void __cdecl DefaultConstructItems<VkImageMemoryBarrier2,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<VkImageMemoryBarrier,int> @ 145ad45e0

void __cdecl DefaultConstructItems<VkImageMemoryBarrier,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<VkMemoryBarrier2,int> @ 145ad45f0

void __cdecl DefaultConstructItems<VkMemoryBarrier2,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<VkMemoryBarrier,int> @ 145ad4600

void __cdecl DefaultConstructItems<VkMemoryBarrier,int>(void *param_1,int param_2)

{
  return;
}

// DestructItems<FVulkanReservedResourceData::FSparseAllocation,int> @ 145ad4610

void __cdecl
DestructItems<FVulkanReservedResourceData::FSparseAllocation,int>
          (FSparseAllocation *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&param_1->Allocation);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FVulkanCommitReservedResourceDesc,int> @ 145ad4650

void __cdecl
DestructItems<FVulkanCommitReservedResourceDesc,int>
          (FVulkanCommitReservedResourceDesc *param_1,int param_2)

{
  FRHIResource *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = (param_1->Resource).Reference;
    if (this != (FRHIResource *)0x0) {
      FRHIResource::Release(this);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int> @ 145ad4690

void __cdecl
DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
          (TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FVulkanSyncPoint>,int> @ 145ad46d0

void __cdecl
DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
          (TRefCountPtr<FVulkanSyncPoint> *param_1,int param_2)

{
  longlong *plVar1;
  FVulkanSyncPoint *pFVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = param_1->Reference;
    if (pFVar2 != (FVulkanSyncPoint *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// EnqueueLambdaMultiPipe<`FVulkanBuffer::Lock'::__l56::<lambda_2>_> @ 145ad5110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FRHICommandListBase::EnqueueLambdaMultiPipe<_FVulkanBuffer::Lock_::__l56::<lambda_2>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_2> *param_4)

{
  int *piVar1;
  int iVar2;
  ERHIPipeline EVar3;
  FVulkanBuffer *pFVar4;
  code *pcVar5;
  ERHIPipeline EVar6;
  byte bVar7;
  ulong64 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  EVulkanAllocationMetaType EVar15;
  undefined5 uVar16;
  bool bVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  byte bVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined8 *local_res8;
  longlong local_38 [2];
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsTopOfPipe() || Bypass()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    puVar18 = AllocCommand(this,0x58,8);
    *puVar18 = &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FVulkanBuffer::Lock'::`56'::<lambda_2>_>
                ::_vftable_;
    puVar18[1] = 0;
    uVar8 = (param_4->NewAlloc).Alloc.VulkanHandle;
    puVar18[2] = param_4->Buffer;
    puVar18[3] = uVar8;
    uVar9 = *(undefined8 *)&(param_4->NewAlloc).Alloc.Offset;
    puVar18[4] = *(undefined8 *)&(param_4->NewAlloc).Alloc.HandleId;
    puVar18[5] = uVar9;
    pvVar10 = (param_4->NewAlloc).HostPtr;
    puVar18[6] = *(undefined8 *)&(param_4->NewAlloc).Alloc.AllocatorIndex;
    puVar18[7] = pvVar10;
    puVar18[8] = (param_4->NewAlloc).DeviceAddress;
    puVar18[9] = param_3;
    *(ERHIPipeline *)(puVar18 + 10) = param_1;
  }
  else {
    plVar23 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar6 = -param_1 & param_1;
      if ((EVar6 == Graphics) || (EVar6 != AsyncCompute)) {
        plVar24 = *(longlong **)&this->Contexts;
        plVar20 = plVar24;
        if (((EVar6 == Graphics) || (EVar6 != AsyncCompute)) &&
           ((plVar23 = plVar24, plVar24 = plVar11, EVar6 != Graphics && (EVar6 == AsyncCompute)))) {
          plVar20 = plVar11;
        }
      }
      else {
        plVar20 = *(longlong **)&(this->Contexts).field_0x8;
        plVar24 = plVar20;
      }
      if ((plVar20 == (longlong *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("LocalContexts[Pipeline]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x26f,L""), bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar11 = plVar24;
    }
    bVar22 = 3;
    local_38[0] = 0;
    local_38[1] = 0;
    do {
      bVar7 = -bVar22 & bVar22;
      if ((bVar7 == 1) || (plVar20 = plVar11, bVar7 != 2)) {
        plVar20 = plVar23;
      }
      lVar21 = 0;
      if (plVar20 != (longlong *)0x0) {
        lVar19 = (**(code **)(*plVar20 + 0x148))();
        lVar21 = lVar19 + -0x50;
        if (lVar19 == 0) {
          lVar21 = 0;
        }
      }
      if ((bVar7 == 1) || (plVar20 = local_38 + 1, bVar7 != 2)) {
        plVar20 = local_38;
      }
      *plVar20 = lVar21;
      bVar22 = bVar22 & bVar22 - 1;
    } while (bVar22 != 0);
    UE::RHICore::UpdateGlobalBufferStats
              ((FRHIBufferDesc *)&param_4->Buffer->_padding_,
               -(ulonglong)(param_4->Buffer->CurrentBufferAlloc).Alloc.Size);
    VulkanRHI::FVulkanAllocation::Free
              (&(param_4->Buffer->CurrentBufferAlloc).Alloc,param_4->Buffer->Device);
    uVar12 = (param_4->NewAlloc).Alloc.HandleId;
    uVar13 = (param_4->NewAlloc).Alloc.Size;
    pFVar4 = param_4->Buffer;
    (pFVar4->CurrentBufferAlloc).Alloc.VulkanHandle = (param_4->NewAlloc).Alloc.VulkanHandle;
    (pFVar4->CurrentBufferAlloc).Alloc.HandleId = uVar12;
    (pFVar4->CurrentBufferAlloc).Alloc.Size = uVar13;
    uVar12 = (param_4->NewAlloc).Alloc.AllocationIndex;
    uVar14 = (param_4->NewAlloc).Alloc.AllocatorIndex;
    EVar15 = (param_4->NewAlloc).Alloc.MetaType;
    uVar16 = *(undefined5 *)&(param_4->NewAlloc).Alloc.field_0x1b;
    (pFVar4->CurrentBufferAlloc).Alloc.Offset = (param_4->NewAlloc).Alloc.Offset;
    (pFVar4->CurrentBufferAlloc).Alloc.AllocationIndex = uVar12;
    (pFVar4->CurrentBufferAlloc).Alloc.AllocatorIndex = uVar14;
    (pFVar4->CurrentBufferAlloc).Alloc.MetaType = EVar15;
    *(undefined5 *)&(pFVar4->CurrentBufferAlloc).Alloc.field_0x1b = uVar16;
    uVar8 = (param_4->NewAlloc).DeviceAddress;
    (pFVar4->CurrentBufferAlloc).HostPtr = (param_4->NewAlloc).HostPtr;
    (pFVar4->CurrentBufferAlloc).DeviceAddress = uVar8;
    VulkanRHI::FVulkanAllocation::Own(&(param_4->Buffer->CurrentBufferAlloc).Alloc);
    plVar23 = &param_4->Buffer->_padding_;
    (**(code **)(*plVar23 + 8))(plVar23,local_38);
  }
  ActivatePipelines(this,EVar3);
  if ((param_2 == Enabled) &&
     (RHIThreadFence(this,SUB81(&local_res8,0)), local_res8 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>'::__l4::<lambda_2>_> @ 145ad5440

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FVulkanShaderResourceView *pFVar5;
  FTracker *this;
  FVulkanResourceBinder<FVulkanPendingComputeState> *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ERHIAccess EVar10;
  uint *puVar11;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_10c;
  undefined4 uStack_e4;
  FOperation local_a8;
  FViewIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar3 = param_3[param_2];
  if (uVar3 != 0) {
    uVar9 = param_3[uVar3];
    puVar11 = param_3 + (ulonglong)uVar3 + 1;
    do {
      pFVar5 = *(FVulkanShaderResourceView **)(pFVar4 + (ulonglong)(uVar9 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FVulkanShaderResourceView *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar10 = SRVCompute;
        }
        else {
          EVar10 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar10 = SRVGraphicsPixel;
          }
        }
        RHIValidation::FViewIdentity::FViewIdentity
                  (&local_60,*(FRHIViewableResource **)&pFVar5->field_0x18,
                   (FRHIViewDesc *)&pFVar5->field_0x20);
        EVar2 = this->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        uStack_e4 = CONCAT13(local_res1f,CONCAT21(local_res1d,EVar2));
        local_a8._4_4_ = uStack_10c;
        local_a8.Type = Assert;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_60._padding_;
        local_a8.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_60._padding_._4_1_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_60._padding_._5_3_;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_60._padding_
        ;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_60._padding_._4_4_;
        local_a8.field1_0x8._36_4_ = uStack_e4;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar10;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView
                  (param_4->Shader,uVar9 & 0xff,(FRHIShaderResourceView *)pFVar5);
      }
      pFVar6 = param_4->Binder;
      if (pFVar6->bBindless == false) {
        FVulkanPendingComputeState::SetSRVForUBResource
                  (pFVar6->PendingState,pFVar6->Stage,uVar9 & 0xff,pFVar5);
      }
      uVar9 = *puVar11;
      puVar11 = puVar11 + 1;
    } while (uVar9 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>'::__l4::<lambda_2>_> @ 145ad56a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FVulkanShaderResourceView *pFVar5;
  FTracker *this;
  FVulkanResourceBinder<FVulkanPendingGfxState> *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ERHIAccess EVar10;
  uint *puVar11;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_10c;
  undefined4 uStack_e4;
  FOperation local_a8;
  FViewIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar3 = param_3[param_2];
  if (uVar3 != 0) {
    uVar9 = param_3[uVar3];
    puVar11 = param_3 + (ulonglong)uVar3 + 1;
    do {
      pFVar5 = *(FVulkanShaderResourceView **)(pFVar4 + (ulonglong)(uVar9 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FVulkanShaderResourceView *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar10 = SRVCompute;
        }
        else {
          EVar10 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar10 = SRVGraphicsPixel;
          }
        }
        RHIValidation::FViewIdentity::FViewIdentity
                  (&local_60,*(FRHIViewableResource **)&pFVar5->field_0x18,
                   (FRHIViewDesc *)&pFVar5->field_0x20);
        EVar2 = this->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        uStack_e4 = CONCAT13(local_res1f,CONCAT21(local_res1d,EVar2));
        local_a8._4_4_ = uStack_10c;
        local_a8.Type = Assert;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_60._padding_;
        local_a8.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_60._padding_._4_1_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_60._padding_._5_3_;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_60._padding_
        ;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_60._padding_._4_4_;
        local_a8.field1_0x8._36_4_ = uStack_e4;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar10;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView
                  (param_4->Shader,uVar9 & 0xff,(FRHIShaderResourceView *)pFVar5);
      }
      pFVar6 = param_4->Binder;
      if (pFVar6->bBindless == false) {
        FVulkanPendingGfxState::SetSRVForUBResource
                  (pFVar6->PendingState,(char)pFVar6->Stage,uVar9 & 0xff,pFVar5);
      }
      uVar9 = *puVar11;
      puVar11 = puVar11 + 1;
    } while (uVar9 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>'::__l4::<lambda_1>_> @ 145ad5900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  FTracker *this;
  FVulkanResourceBinder<FVulkanPendingComputeState> *pFVar6;
  code *pcVar7;
  bool bVar8;
  VkImageLayout VVar9;
  FResourceIdentity *pFVar10;
  FVulkanTexture *pFVar11;
  ERHIAccess EVar12;
  uint uVar13;
  uint *puVar14;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  FOperation local_a8;
  FResourceIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar3 = param_3[param_2];
  if (uVar3 != 0) {
    uVar13 = param_3[uVar3];
    puVar14 = param_3 + (ulonglong)uVar3 + 1;
    do {
      plVar5 = *(longlong **)(pFVar4 + (ulonglong)(uVar13 >> 8 & 0xffff) * 8);
      if ((plVar5 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar12 = SRVCompute;
        }
        else {
          EVar12 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar12 = SRVGraphicsPixel;
          }
        }
        pFVar10 = RHIValidation::FTextureResource::GetViewIdentity
                            ((FTextureResource *)(plVar5 + 5),&local_60,0,0,0,0,0,1);
        EVar2 = this->Pipeline;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = pFVar10->Resource;
        local_a8.field1_0x8.Data_SetTrackedAccess.State =
             (FState)*(undefined8 *)&pFVar10->SubresourceRange;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)*(undefined8 *)&(pFVar10->SubresourceRange).ArraySlice;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (pFVar10->SubresourceRange).PlaneIndex;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             (pFVar10->SubresourceRange).NumPlanes;
        LOCK();
        ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        uStack_ec = CONCAT13(local_resf,CONCAT21(local_resd,EVar2));
        local_a8._4_4_ = uStack_114;
        local_a8.Type = Assert;
        local_a8.field1_0x8._36_4_ = uStack_ec;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar12;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (double)plVar5[0x26]) {
        plVar5[0x26] = (longlong)(double)*param_4->CurrentTimeForTextureTimes;
      }
      pFVar6 = param_4->Binder;
      if (pFVar6->bBindless == false) {
        pFVar11 = (FVulkanTexture *)(**(code **)(*plVar5 + 0x48))(plVar5);
        EVar12 = SRVGraphics;
        if (pFVar6->Frequency == SF_Compute) {
          EVar12 = SRVCompute;
        }
        VVar9 = FVulkanPipelineBarrier::GetDefaultLayout(pFVar11,EVar12);
        FVulkanCommonPipelineDescriptorState::SetTexture
                  ((FVulkanCommonPipelineDescriptorState *)pFVar6->PendingState->CurrentState,
                   (char)pFVar6->Stage,uVar13 & 0xff,pFVar11,VVar9);
      }
      uVar13 = *puVar14;
      puVar14 = puVar14 + 1;
    } while (uVar13 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>'::__l4::<lambda_1>_> @ 145ad5bf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  FTracker *this;
  FVulkanResourceBinder<FVulkanPendingGfxState> *pFVar6;
  code *pcVar7;
  bool bVar8;
  VkImageLayout VVar9;
  FResourceIdentity *pFVar10;
  FVulkanTexture *pFVar11;
  ERHIAccess EVar12;
  uint uVar13;
  uint *puVar14;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  FOperation local_a8;
  FResourceIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar3 = param_3[param_2];
  if (uVar3 != 0) {
    uVar13 = param_3[uVar3];
    puVar14 = param_3 + (ulonglong)uVar3 + 1;
    do {
      plVar5 = *(longlong **)(pFVar4 + (ulonglong)(uVar13 >> 8 & 0xffff) * 8);
      if ((plVar5 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar12 = SRVCompute;
        }
        else {
          EVar12 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar12 = SRVGraphicsPixel;
          }
        }
        pFVar10 = RHIValidation::FTextureResource::GetViewIdentity
                            ((FTextureResource *)(plVar5 + 5),&local_60,0,0,0,0,0,1);
        EVar2 = this->Pipeline;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = pFVar10->Resource;
        local_a8.field1_0x8.Data_SetTrackedAccess.State =
             (FState)*(undefined8 *)&pFVar10->SubresourceRange;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)*(undefined8 *)&(pFVar10->SubresourceRange).ArraySlice;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (pFVar10->SubresourceRange).PlaneIndex;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             (pFVar10->SubresourceRange).NumPlanes;
        LOCK();
        ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        uStack_ec = CONCAT13(local_resf,CONCAT21(local_resd,EVar2));
        local_a8._4_4_ = uStack_114;
        local_a8.Type = Assert;
        local_a8.field1_0x8._36_4_ = uStack_ec;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar12;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (double)plVar5[0x26]) {
        plVar5[0x26] = (longlong)(double)*param_4->CurrentTimeForTextureTimes;
      }
      pFVar6 = param_4->Binder;
      if (pFVar6->bBindless == false) {
        pFVar11 = (FVulkanTexture *)(**(code **)(*plVar5 + 0x48))(plVar5);
        EVar12 = SRVGraphics;
        if (pFVar6->Frequency == SF_Compute) {
          EVar12 = SRVCompute;
        }
        VVar9 = FVulkanPipelineBarrier::GetDefaultLayout(pFVar11,EVar12);
        FVulkanCommonPipelineDescriptorState::SetTexture
                  ((FVulkanCommonPipelineDescriptorState *)pFVar6->PendingState->CurrentState,
                   (char)pFVar6->Stage,uVar13 & 0xff,pFVar11,VVar9);
      }
      uVar13 = *puVar14;
      puVar14 = puVar14 + 1;
    } while (uVar13 >> 0x18 == param_2);
  }
  return;
}

// HeapSortInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TDereferenceWrapper<FVulkanCommandBuffer_*,`FVulkanCommandListContext::RHIEndParallelRenderPass'::__l12::<lambda_1>_>_> @ 145ad60f0

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TDereferenceWrapper<FVulkanCommandBuffer_*,_FVulkanCommandListContext::RHIEndParallelRenderPass_::__l12::<lambda_1>_>_>
          (FVulkanCommandBuffer **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FVulkanCommandBuffer_*,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHIEndParallelRenderPass(void)_::_12_::<lambda_1>_>
          param_4)

{
  uint uVar1;
  uint uVar2;
  FVulkanCommandBuffer *pFVar3;
  FVulkanCommandBuffer *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FVulkanCommandBuffer_*,_FVulkanCommandListContext::RHIEndParallelRenderPass_::__l12::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FVulkanCommandBuffer_*,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHIEndParallelRenderPass(void)_::_12_::<lambda_1>_>
              *)&local_res20);
  iVar9 = param_2 + -1;
  lVar10 = (longlong)iVar9;
  if (0 < iVar9) {
    do {
      pFVar3 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = pFVar3;
      iVar11 = 0;
      if (1 < iVar9) {
        do {
          iVar6 = iVar11 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < iVar9) {
            uVar1 = param_1[(longlong)iVar6 + 2]->LastDynamicRenderingFlags;
            if ((uVar1 & 4) == 0) {
              bVar7 = true;
            }
            else {
              uVar2 = param_1[iVar8]->LastDynamicRenderingFlags;
              if ((uVar2 & 4) == 0) {
                bVar7 = false;
              }
              else if ((uVar1 & 2) == 0) {
                bVar7 = false;
              }
              else if ((uVar2 & 2) == 0) {
                bVar7 = true;
              }
              else {
                bVar7 = param_1[(longlong)iVar6 + 2]->CommandBufferHandle <
                        param_1[iVar8]->CommandBufferHandle;
              }
            }
            if (bVar7) {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          pFVar3 = param_1[iVar8];
          pFVar4 = param_1[iVar11];
          if (((pFVar4->LastDynamicRenderingFlags & 4) != 0) &&
             ((((pFVar3->LastDynamicRenderingFlags & 4) == 0 ||
               ((pFVar4->LastDynamicRenderingFlags & 2) == 0)) ||
              (((pFVar3->LastDynamicRenderingFlags & 2) != 0 &&
               (pFVar3->CommandBufferHandle <= pFVar4->CommandBufferHandle)))))) break;
          param_1[iVar11] = pFVar3;
          param_1[iVar8] = pFVar4;
          iVar11 = iVar8;
        } while (iVar8 * 2 + 1 < iVar9);
      }
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}

// HeapifyInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FVulkanCommandBuffer_*,`FVulkanCommandListContext::RHIEndParallelRenderPass'::__l12::<lambda_1>_>_>_> @ 145ad6280

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapifyInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FVulkanCommandBuffer_*,_FVulkanCommandListContext::RHIEndParallelRenderPass_::__l12::<lambda_1>_>_>_>
          (FVulkanCommandBuffer **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FVulkanCommandBuffer_*,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHIEndParallelRenderPass(void)_::_12_::<lambda_1>_>_>
          param_4)

{
  uint uVar1;
  uint uVar2;
  FVulkanCommandBuffer *pFVar3;
  FVulkanCommandBuffer *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar10 = iVar8 * 2 + 1;
  iVar6 = iVar10;
  iVar11 = iVar8;
  do {
    while (param_2 <= iVar10) {
LAB_145ad63c2:
      if (iVar11 == 0) {
        return;
      }
      iVar8 = iVar11 + -1;
      iVar10 = iVar6 + -2;
      iVar6 = iVar10;
      iVar11 = iVar8;
    }
    iVar10 = iVar8 * 2;
    iVar9 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      uVar1 = param_1[(longlong)iVar10 + 2]->LastDynamicRenderingFlags;
      if ((uVar1 & 4) == 0) {
        bVar7 = true;
      }
      else {
        uVar2 = param_1[iVar9]->LastDynamicRenderingFlags;
        if ((uVar2 & 4) == 0) {
          bVar7 = false;
        }
        else if ((uVar1 & 2) == 0) {
          bVar7 = false;
        }
        else if ((uVar2 & 2) == 0) {
          bVar7 = true;
        }
        else {
          bVar7 = param_1[(longlong)iVar10 + 2]->CommandBufferHandle <
                  param_1[iVar9]->CommandBufferHandle;
        }
      }
      if (bVar7) {
        iVar9 = iVar10;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar3 = param_1[iVar9];
    pFVar4 = param_1[iVar8];
    if (((pFVar4->LastDynamicRenderingFlags & 4) != 0) &&
       ((((pFVar3->LastDynamicRenderingFlags & 4) == 0 ||
         ((pFVar4->LastDynamicRenderingFlags & 2) == 0)) ||
        (((pFVar3->LastDynamicRenderingFlags & 2) != 0 &&
         (pFVar3->CommandBufferHandle <= pFVar4->CommandBufferHandle)))))) goto LAB_145ad63c2;
    param_1[iVar8] = pFVar3;
    iVar10 = iVar9 * 2 + 1;
    param_1[iVar9] = pFVar4;
    iVar8 = iVar9;
  } while( true );
}

// IntroSortInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TDereferenceWrapper<FVulkanCommandBuffer_*,`FVulkanCommandListContext::RHIEndParallelRenderPass'::__l12::<lambda_1>_>_> @ 145ad63f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TDereferenceWrapper<FVulkanCommandBuffer_*,_FVulkanCommandListContext::RHIEndParallelRenderPass_::__l12::<lambda_1>_>_>
          (FVulkanCommandBuffer **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FVulkanCommandBuffer_*,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHIEndParallelRenderPass(void)_::_12_::<lambda_1>_>
          param_4)

{
  FVulkanCommandBuffer **ppFVar1;
  uint uVar2;
  uint uVar3;
  FVulkanCommandBuffer *pFVar4;
  int iVar5;
  FVulkanCommandBuffer **ppFVar6;
  FVulkanCommandBuffer **ppFVar7;
  FVulkanCommandBuffer **ppFVar8;
  FVulkanCommandBuffer **ppFVar9;
  FVulkanCommandBuffer **ppFVar10;
  FVulkanCommandBuffer ***pppFVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  FVulkanCommandBuffer **local_348;
  FVulkanCommandBuffer **local_338;
  FVulkanCommandBuffer **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    pppFVar11 = &local_338;
    do {
      ppFVar8 = pppFVar11[1];
      ppFVar9 = *pppFVar11;
      ppFVar1 = pppFVar11[2];
      iVar5 = (int)((longlong)ppFVar8 - (longlong)ppFVar9 >> 3) + 1;
      local_348._0_4_ = (int)ppFVar1;
      ppFVar10 = ppFVar9;
      if ((int)local_348 != 0) {
LAB_145ad64a0:
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          pFVar4 = ppFVar10[iVar5 >> 1];
          ppFVar10[iVar5 >> 1] = *ppFVar10;
          ppFVar6 = ppFVar8 + 1;
          *ppFVar10 = pFVar4;
          ppFVar9 = ppFVar10;
LAB_145ad64d0:
          ppFVar9 = ppFVar9 + 1;
          if (ppFVar9 <= ppFVar8) goto code_r0x000145ad64d9;
          goto LAB_145ad6510;
        }
        for (; ppFVar9 = ppFVar10, ppFVar1 = ppFVar10, ppFVar10 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            uVar2 = (*ppFVar9)->LastDynamicRenderingFlags;
            if (((uVar2 & 4) == 0) ||
               (((uVar3 = (*ppFVar1)->LastDynamicRenderingFlags, (uVar3 & 4) != 0 &&
                 ((uVar2 & 2) != 0)) &&
                (((uVar3 & 2) == 0 ||
                 ((*ppFVar9)->CommandBufferHandle < (*ppFVar1)->CommandBufferHandle)))))) {
              ppFVar9 = ppFVar1;
            }
          }
          pFVar4 = *ppFVar9;
          *ppFVar9 = *ppFVar8;
          *ppFVar8 = pFVar4;
        }
        goto LAB_145ad65fa;
      }
LAB_145ad65e9:
      local_348 = ppFVar1;
      HeapSortInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TDereferenceWrapper<FVulkanCommandBuffer_*,_FVulkanCommandListContext::RHIEndParallelRenderPass_::__l12::<lambda_1>_>_>
                (ppFVar9,iVar5,param_3,param_4);
LAB_145ad65fa:
      pppFVar11 = pppFVar11 + -3;
    } while (&local_338 <= pppFVar11);
  }
  return;
code_r0x000145ad64d9:
  uVar2 = (*ppFVar10)->LastDynamicRenderingFlags;
  if (((uVar2 & 4) != 0) &&
     (((uVar3 = (*ppFVar9)->LastDynamicRenderingFlags, (uVar3 & 4) == 0 || ((uVar2 & 2) == 0)) ||
      (((uVar3 & 2) != 0 && ((*ppFVar9)->CommandBufferHandle <= (*ppFVar10)->CommandBufferHandle))))
     )) goto LAB_145ad64d0;
LAB_145ad6510:
  while (ppFVar7 = ppFVar6, ppFVar6 = ppFVar7 + -1, ppFVar10 < ppFVar6) {
    uVar2 = (*ppFVar6)->LastDynamicRenderingFlags;
    if (((uVar2 & 4) == 0) ||
       (((uVar3 = (*ppFVar10)->LastDynamicRenderingFlags, (uVar3 & 4) != 0 && ((uVar2 & 2) != 0)) &&
        (((uVar3 & 2) == 0 || ((*ppFVar6)->CommandBufferHandle < (*ppFVar10)->CommandBufferHandle)))
        ))) break;
  }
  if (ppFVar9 <= ppFVar6) {
    pFVar4 = *ppFVar9;
    *ppFVar9 = *ppFVar6;
    *ppFVar6 = pFVar4;
    goto LAB_145ad64d0;
  }
  pFVar4 = *ppFVar10;
  local_348._0_4_ = (int)local_348 + -1;
  *ppFVar10 = *ppFVar6;
  *ppFVar6 = pFVar4;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar9 & 0xfffffffffffffff8U)) {
    if (ppFVar9 < ppFVar8) {
      *pppFVar11 = ppFVar9;
      pppFVar11[1] = ppFVar8;
      *(int *)(pppFVar11 + 2) = (int)local_348;
      pppFVar11 = pppFVar11 + 3;
    }
    if (ppFVar6 <= ppFVar10 + 1) goto LAB_145ad65fa;
    ppFVar8 = ppFVar7 + -2;
    ppFVar9 = ppFVar10;
  }
  else {
    if (ppFVar10 + 1 < ppFVar6) {
      *pppFVar11 = ppFVar10;
      pppFVar11[1] = ppFVar7 + -2;
      *(int *)(pppFVar11 + 2) = (int)local_348;
      pppFVar11 = pppFVar11 + 3;
    }
    if (ppFVar8 <= ppFVar9) goto LAB_145ad65fa;
  }
  iVar5 = (int)((longlong)ppFVar8 - (longlong)ppFVar9 >> 3) + 1;
  ppFVar10 = ppFVar9;
  if ((int)local_348 == 0) goto LAB_145ad65e9;
  goto LAB_145ad64a0;
}

// MaskSupportedAsyncFlags<VkBufferMemoryBarrier2> @ 145ad66d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
MaskSupportedAsyncFlags<VkBufferMemoryBarrier2>
          (FVulkanDevice *param_1,
          TArray<VkBufferMemoryBarrier2,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  FVulkanQueue *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  
  pFVar2 = (param_1->Queues).Elements[1];
  iVar1 = param_2->ArrayNum;
  pFVar3 = (param_2->AllocatorInstance).Data;
  uVar6 = (ulonglong)pFVar2->SupportedStages;
  uVar5 = (ulonglong)pFVar2->SupportedAccess;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x50;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<VkBufferMemoryBarrier2,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (param_3) {
      *(ulonglong *)(pFVar3 + 0x10) = *(ulonglong *)(pFVar3 + 0x10) & uVar6;
      *(ulonglong *)(pFVar3 + 0x18) = *(ulonglong *)(pFVar3 + 0x18) & uVar5;
    }
    if (param_4) {
      *(ulonglong *)(pFVar3 + 0x20) = *(ulonglong *)(pFVar3 + 0x20) & uVar6;
      *(ulonglong *)(pFVar3 + 0x28) = *(ulonglong *)(pFVar3 + 0x28) & uVar5;
    }
    pFVar3 = pFVar3 + 0x50;
  }
  return;
}

// MaskSupportedAsyncFlags<VkImageMemoryBarrier2> @ 145ad6780

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
MaskSupportedAsyncFlags<VkImageMemoryBarrier2>
          (FVulkanDevice *param_1,TArray<VkImageMemoryBarrier2,TSizedDefaultAllocator<32>_> *param_2
          ,bool param_3,bool param_4)

{
  int iVar1;
  FVulkanQueue *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  
  pFVar2 = (param_1->Queues).Elements[1];
  iVar1 = param_2->ArrayNum;
  pFVar3 = (param_2->AllocatorInstance).Data;
  uVar6 = (ulonglong)pFVar2->SupportedStages;
  uVar5 = (ulonglong)pFVar2->SupportedAccess;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x60;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<VkImageMemoryBarrier2,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (param_3) {
      *(ulonglong *)(pFVar3 + 0x10) = *(ulonglong *)(pFVar3 + 0x10) & uVar6;
      *(ulonglong *)(pFVar3 + 0x18) = *(ulonglong *)(pFVar3 + 0x18) & uVar5;
    }
    if (param_4) {
      *(ulonglong *)(pFVar3 + 0x20) = *(ulonglong *)(pFVar3 + 0x20) & uVar6;
      *(ulonglong *)(pFVar3 + 0x28) = *(ulonglong *)(pFVar3 + 0x28) & uVar5;
    }
    pFVar3 = pFVar3 + 0x60;
  }
  return;
}

// PatchCrossPipeTransitions<VkBufferMemoryBarrier2> @ 145ad6830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
PatchCrossPipeTransitions<VkBufferMemoryBarrier2>
          (TArray<VkBufferMemoryBarrier2,TSizedDefaultAllocator<32>_> *param_1,
          FVulkanCommandListContext *param_2,ERHIPipeline param_3,ERHIPipeline param_4,bool param_5)

{
  FVulkanDevice *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  ERHIPipeline EVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  EVar5 = (**(code **)(param_2->_padding_ + 8))(&param_2->_padding_);
  pFVar1 = (FVulkanDevice *)param_2->_padding_;
  uVar7 = (pFVar1->Queues).Elements[0]->FamilyIndex;
  uVar11 = (pFVar1->Queues).Elements[1]->FamilyIndex;
  if (param_3 == None) {
LAB_145ad69f6:
    if (param_4 != AsyncCompute) {
      bVar6 = false;
      goto LAB_145ad6a02;
    }
  }
  else {
    if ((((param_3 & param_3 - Graphics) == None) && (param_4 != None)) &&
       ((param_4 & param_4 - Graphics) == None)) {
      iVar8 = param_1->ArrayNum;
      uVar9 = 0;
      if (iVar8 < 1) {
        return;
      }
      uVar4 = uVar11;
      if (param_3 == Graphics) {
        uVar4 = uVar7;
      }
      uVar12 = uVar9;
      if (param_4 == Graphics) {
        uVar11 = uVar7;
      }
      while( true ) {
        uVar10 = (uint)uVar9;
        uVar7 = 0;
        if ((int)uVar10 < iVar8) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) break;
        pFVar2 = (param_1->AllocatorInstance).Data;
        *(uint *)(pFVar2 + uVar12 + 0x30) = uVar4;
        *(uint *)(pFVar2 + uVar12 + 0x34) = uVar11;
        if (param_5) {
          if ((param_3 != EVar5) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("SrcPipelines == ExecutingPipeline",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                                 ,0x504,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)(pFVar2 + uVar12 + 0x28) = 0;
        }
        else {
          if ((param_4 != EVar5) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("DstPipelines == ExecutingPipeline",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                                 ,0x50a,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)(pFVar2 + uVar12 + 0x18) = 0;
        }
        iVar8 = param_1->ArrayNum;
        uVar9 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 0x50;
        if (iVar8 <= (int)(uVar10 + 1)) {
          return;
        }
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_3 != Graphics) goto LAB_145ad69f6;
  }
  bVar6 = true;
LAB_145ad6a02:
  MaskSupportedAsyncFlags<VkBufferMemoryBarrier2>(pFVar1,param_1,(bool)(bVar6 ^ 1),bVar6);
  iVar8 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    uVar12 = uVar9;
    uVar4 = uVar7;
    if (bVar6 == false) {
      uVar4 = uVar11;
      uVar11 = uVar7;
    }
    do {
      uVar10 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      *(uint *)(pFVar2 + uVar12 + 0x30) = uVar4;
      *(uint *)(pFVar2 + uVar12 + 0x34) = uVar11;
      if (param_5) {
        if (((param_3 & EVar5) != EVar5) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("EnumHasAllFlags(SrcPipelines, ExecutingPipeline)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                               ,0x537,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)(pFVar2 + uVar12 + 0x28) = 0;
      }
      else {
        if (((param_4 & EVar5) != EVar5) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("EnumHasAllFlags(DstPipelines, ExecutingPipeline)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                               ,0x53d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)(pFVar2 + uVar12 + 0x18) = 0;
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0x50;
    } while ((int)(uVar10 + 1) < iVar8);
  }
  return;
}

// PatchCrossPipeTransitions<VkImageMemoryBarrier2> @ 145ad6b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
PatchCrossPipeTransitions<VkImageMemoryBarrier2>
          (TArray<VkImageMemoryBarrier2,TSizedDefaultAllocator<32>_> *param_1,
          FVulkanCommandListContext *param_2,ERHIPipeline param_3,ERHIPipeline param_4,bool param_5)

{
  FVulkanDevice *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ERHIPipeline EVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  EVar4 = (**(code **)(param_2->_padding_ + 8))(&param_2->_padding_);
  pFVar1 = (FVulkanDevice *)param_2->_padding_;
  uVar7 = (pFVar1->Queues).Elements[0]->FamilyIndex;
  uVar11 = (pFVar1->Queues).Elements[1]->FamilyIndex;
  if (param_3 == None) {
LAB_145ad6df8:
    if (param_4 != AsyncCompute) {
      bVar5 = false;
      goto LAB_145ad6d39;
    }
  }
  else {
    if ((((param_3 & param_3 - Graphics) == None) && (param_4 != None)) &&
       ((param_4 & param_4 - Graphics) == None)) {
      iVar10 = param_1->ArrayNum;
      uVar13 = 0;
      if (iVar10 < 1) {
        return;
      }
      uVar8 = uVar11;
      if (param_3 == Graphics) {
        uVar8 = uVar7;
      }
      uVar12 = uVar13;
      if (param_4 == Graphics) {
        uVar11 = uVar7;
      }
      while( true ) {
        uVar14 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar14 < iVar10) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        pFVar2 = (param_1->AllocatorInstance).Data;
        *(uint *)(pFVar2 + uVar13 + 0x38) = uVar8;
        *(uint *)(pFVar2 + uVar13 + 0x3c) = uVar11;
        if (param_5) {
          if ((param_3 != EVar4) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("SrcPipelines == ExecutingPipeline",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                                 ,0x504,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)(pFVar2 + uVar13 + 0x28) = 0;
        }
        else {
          if ((param_4 != EVar4) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("DstPipelines == ExecutingPipeline",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                                 ,0x50a,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined8 *)(pFVar2 + uVar13 + 0x18) = 0;
        }
        iVar10 = param_1->ArrayNum;
        uVar13 = uVar13 + 0x60;
        uVar12 = (ulonglong)(uVar14 + 1);
        if (iVar10 <= (int)(uVar14 + 1)) {
          return;
        }
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_3 != Graphics) goto LAB_145ad6df8;
  }
  bVar5 = true;
LAB_145ad6d39:
  MaskSupportedAsyncFlags<VkImageMemoryBarrier2>(pFVar1,param_1,(bool)(bVar5 ^ 1),bVar5);
  iVar10 = param_1->ArrayNum;
  uVar12 = 0;
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar14 = (uint)uVar12;
      uVar8 = 0;
      if ((int)uVar14 < iVar10) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar8 = uVar7;
      uVar9 = uVar11;
      if (bVar5 != false) {
        uVar8 = uVar11;
        uVar9 = uVar7;
      }
      *(uint *)(pFVar2 + uVar13 + 0x38) = uVar9;
      *(uint *)(pFVar2 + uVar13 + 0x3c) = uVar8;
      if ((param_3 == None) || ((param_3 & param_3 - Graphics) != None)) {
        if ((param_4 != None) && ((param_4 & param_4 - Graphics) == None)) {
          *(undefined4 *)(pFVar2 + uVar13 + 0x34) = *(undefined4 *)(pFVar2 + uVar13 + 0x30);
        }
      }
      else {
        *(undefined4 *)(pFVar2 + uVar13 + 0x30) = *(undefined4 *)(pFVar2 + uVar13 + 0x34);
      }
      if (param_5) {
        if (((param_3 & EVar4) != EVar4) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("EnumHasAllFlags(SrcPipelines, ExecutingPipeline)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                               ,0x537,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)(pFVar2 + uVar13 + 0x28) = 0;
      }
      else {
        if (((param_4 & EVar4) != EVar4) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("EnumHasAllFlags(DstPipelines, ExecutingPipeline)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                               ,0x53d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)(pFVar2 + uVar13 + 0x18) = 0;
      }
      iVar10 = param_1->ArrayNum;
      uVar12 = (ulonglong)(uVar14 + 1);
      uVar13 = uVar13 + 0x60;
    } while ((int)(uVar14 + 1) < iVar10);
  }
  return;
}

// ~TFunction_OwnedObject<`FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches'::__l2::<lambda_1>,1,0> @ 145adbe60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__LoadAllCaches_FVulkanChunkedPipelineCacheManagerImpl__AEAA_NXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l14::<lambda_1>,1,0> @ 145adbe80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l14::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHICreateBufferInitializer_::__l14::<lambda_1>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::`14'::<lambda_1>,1,0>
        ::_vftable_;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l38::<lambda_2>,1,0> @ 145adbea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l38::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHICreateBufferInitializer_::__l38::<lambda_2>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::`38'::<lambda_2>,1,0>
        ::_vftable_;
  this_00 = *(FRHIResource **)((longlong)this + 8);
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// operator() @ 145adcea0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
`ProcessTransitionSync2'::__l2::<lambda_1>::operator()
          (void *this,TArrayView<VkMemoryBarrier2_const_,int> *param_1,
          TArrayView<VkBufferMemoryBarrier2_const_,int> *param_2,
          TArrayView<VkImageMemoryBarrier2_const_,int> *param_3,VkEvent_T *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  VkCommandBuffer_T *pVVar3;
  code *pcVar4;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkDependencyInfo_ptr *p_Var5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FVulkanCommandBuffer *pFVar12;
  TArray<VkEvent_T_*,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  VkEvent_T *local_98 [2];
  VkDependencyInfo local_88;
  VkDependencyInfo local_48;
  
  p_Var5 = VulkanDynamicAPI::vkCmdPipelineBarrier2KHR;
  local_48.memoryBarrierCount = param_1->ArrayNum;
  if (((local_48.memoryBarrierCount != 0) || (param_2->ArrayNum != 0)) || (param_3->ArrayNum != 0))
  {
    local_88.pMemoryBarriers = param_1->DataPtr;
    local_48.bufferMemoryBarrierCount = param_2->ArrayNum;
    local_88.pBufferMemoryBarriers = param_2->DataPtr;
    local_48.imageMemoryBarrierCount = param_3->ArrayNum;
    iVar8 = 0;
    local_88.pImageMemoryBarriers = param_3->DataPtr;
    local_48.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
    local_48.pNext = (void *)0x0;
    local_48.dependencyFlags = 0;
    local_48.pMemoryBarriers = local_88.pMemoryBarriers;
    local_48.pBufferMemoryBarriers = local_88.pBufferMemoryBarriers;
    local_48.pImageMemoryBarriers = local_88.pImageMemoryBarriers;
    if (param_4 == (VkEvent_T *)0x0) {
      if ((GVulkanMaxBarriersPerBatch < 1) ||
         ((int)(local_48.memoryBarrierCount + local_48.bufferMemoryBarrierCount +
               local_48.imageMemoryBarrierCount) < GVulkanMaxBarriersPerBatch)) {
        pFVar12 = FVulkanContextCommon::GetCommandBuffer
                            (*(FVulkanContextCommon **)((longlong)this + 8));
        (*p_Var5)(pFVar12->CommandBufferHandle,&local_48);
      }
      else {
        local_88._4_4_ = local_48._4_4_;
        local_88.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
        local_88.dependencyFlags = 0;
        local_88.pNext = (void *)0x0;
        local_88._32_8_ = (ulonglong)(uint)local_48._36_4_ << 0x20;
        local_88._48_8_ = (ulonglong)(uint)local_48._52_4_ << 0x20;
        local_88.memoryBarrierCount = local_48.memoryBarrierCount;
        pFVar12 = FVulkanContextCommon::GetCommandBuffer
                            (*(FVulkanContextCommon **)((longlong)this + 8));
        uVar6 = local_48.memoryBarrierCount;
        pVVar3 = pFVar12->CommandBufferHandle;
        iVar14 = iVar8;
        if (0 < (int)local_48.memoryBarrierCount) {
          do {
            uVar9 = uVar6 - iVar14;
            local_88.memoryBarrierCount = GVulkanMaxBarriersPerBatch;
            if ((int)uVar9 < GVulkanMaxBarriersPerBatch) {
              local_88.memoryBarrierCount = uVar9;
            }
            (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_88);
            local_88.pMemoryBarriers = local_88.pMemoryBarriers + local_88.memoryBarrierCount;
            iVar14 = iVar14 + GVulkanMaxBarriersPerBatch;
          } while (iVar14 < (int)uVar6);
        }
        uVar6 = local_48.bufferMemoryBarrierCount;
        local_88.pMemoryBarriers = (VkMemoryBarrier2 *)0x0;
        local_88.memoryBarrierCount = 0;
        iVar14 = iVar8;
        if (0 < (int)local_48.bufferMemoryBarrierCount) {
          do {
            iVar10 = uVar6 - iVar14;
            iVar11 = GVulkanMaxBarriersPerBatch;
            if (iVar10 < GVulkanMaxBarriersPerBatch) {
              iVar11 = iVar10;
            }
            local_88.bufferMemoryBarrierCount = iVar11;
            (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_88);
            local_88.pBufferMemoryBarriers =
                 local_88.pBufferMemoryBarriers + (local_88._32_8_ & 0xffffffff);
            iVar14 = iVar14 + GVulkanMaxBarriersPerBatch;
          } while (iVar14 < (int)uVar6);
        }
        uVar6 = local_48.imageMemoryBarrierCount;
        local_88.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)0x0;
        local_88._32_8_ = local_88._32_8_ & 0xffffffff00000000;
        if (0 < (int)local_48.imageMemoryBarrierCount) {
          do {
            iVar11 = uVar6 - iVar8;
            iVar14 = GVulkanMaxBarriersPerBatch;
            if (iVar11 < GVulkanMaxBarriersPerBatch) {
              iVar14 = iVar11;
            }
            local_88.imageMemoryBarrierCount = iVar14;
            (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_88);
            local_88.pImageMemoryBarriers =
                 local_88.pImageMemoryBarriers + (local_88._48_8_ & 0xffffffff);
            iVar8 = iVar8 + GVulkanMaxBarriersPerBatch;
          } while (iVar8 < (int)uVar6);
        }
      }
    }
    else if (*(char *)this == '\0') {
      pFVar12 = FVulkanContextCommon::GetCommandBuffer
                          (*(FVulkanContextCommon **)((longlong)this + 8));
      local_98[0] = param_4;
      (*VulkanDynamicAPI::vkCmdWaitEvents2KHR)(pFVar12->CommandBufferHandle,1,local_98,&local_48);
      pTVar13 = &pFVar12->EndedBarrierEvents;
      pFVar2 = (pTVar13->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_98) &&
          ((FScriptContainerElement *)local_98 <
           pFVar2 + (longlong)(pFVar12->EndedBarrierEvents).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (pFVar12->EndedBarrierEvents).ArrayNum;
      piVar1 = &(pFVar12->EndedBarrierEvents).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar13->AllocatorInstance,piVar1);
      }
      (pFVar12->EndedBarrierEvents).ArrayNum = iVar8 + 1;
      *(VkEvent_T **)((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_98[0];
    }
    else {
      pFVar12 = FVulkanContextCommon::GetCommandBuffer
                          (*(FVulkanContextCommon **)((longlong)this + 8));
      (*VulkanDynamicAPI::vkCmdSetEvent2KHR)(pFVar12->CommandBufferHandle,param_4,&local_48);
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{232}' @ 145adea5c

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanBuffer::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanBuffer::_vector_deleting_destructor__adjustor_232__(FVulkanBuffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVulkanBuffer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{80}' @ 145adea70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanCommandListContext::`vector deleting
   destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanCommandListContext::_vector_deleting_destructor__adjustor_80__
          (FVulkanCommandListContext *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145adea80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanChunkedPipelineCacheManagerImpl::LoadAllCaches'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__LoadAllCaches_FVulkanChunkedPipelineCacheManagerImpl__AEAA_NXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145adeac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l14::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::`14'::<lambda_1>,1,0>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145adeb10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::__l38::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHICreateBufferInitializer'::`38'::<lambda_2>,1,0>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145adeb60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall FVulkanBuffer::_scalar_deleting_destructor_(FVulkanBuffer *this,uint param_1)

{
  FVulkanReservedResourceData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar1 = (this->ReservedResourceData).Ptr;
  this->_padding_ = (longlong)&_vftable__for__FRHIBuffer__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  if (pFVar1 != (FVulkanReservedResourceData *)0x0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,Buffer,
               (this->CurrentBufferAlloc).Alloc.VulkanHandle);
    CommitReservedResource(this,&local_18,0);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  ReleaseOwnership(this);
  pFVar1 = (this->ReservedResourceData).Ptr;
  if (pFVar1 != (FVulkanReservedResourceData *)0x0) {
    DestructItems<FVulkanReservedResourceData::FSparseAllocation,int>
              ((FSparseAllocation *)(pFVar1->Allocations).AllocatorInstance.Data,
               (pFVar1->Allocations).ArrayNum);
    pFVar2 = (pFVar1->Allocations).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x38);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&(this->CurrentBufferAlloc).Alloc);
  this->_padding_ = (longlong)&___7FVulkanViewableResource__6B_;
  if (this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,0x232,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  FRHIBuffer::~FRHIBuffer((FRHIBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145adec90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall
FVulkanCommandListContext::_scalar_deleting_destructor_
          (FVulkanCommandListContext *this,uint param_1)

{
  FVulkanPendingGfxState *this_00;
  FVulkanPendingComputeState *this_01;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this_00 = this->PendingGfxState;
  this->_padding_ = (longlong)&_vftable__for__FVulkanContextCommon__;
  this->_padding_ = (longlong)&_vftable__for__IRHICommandContext__;
  if (this_00 != (FVulkanPendingGfxState *)0x0) {
    FVulkanPendingGfxState::~FVulkanPendingGfxState(this_00);
    ::operator_delete(this_00,0x200);
  }
  this_01 = this->PendingComputeState;
  this->PendingGfxState = (FVulkanPendingGfxState *)0x0;
  if (this_01 != (FVulkanPendingComputeState *)0x0) {
    FVulkanPendingComputeState::~FVulkanPendingComputeState(this_01);
    ::operator_delete(this_01,0x68);
  }
  this->PendingComputeState = (FVulkanPendingComputeState *)0x0;
  pFVar1 = (this->GlobalUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TypedDescriptorPoolSets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TypedDescriptorPoolSets);
  DestructItems<FString,int>
            ((FString *)(this->EventStack).AllocatorInstance.Data,(this->EventStack).ArrayNum);
  pFVar1 = (this->EventStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  FVulkanContextCommon::~FVulkanContextCommon((FVulkanContextCommon *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x548);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145adedd0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanContextCommon::_scalar_deleting_destructor_(FVulkanContextCommon *this,uint param_1)

{
  ~FVulkanContextCommon(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145adee10

void * __thiscall
FVulkanSyncPoint::_scalar_deleting_destructor_(FVulkanSyncPoint *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  FIndexedLockFreeLink *pFVar8;
  
  pFVar3 = (this->GraphEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar4)();
      return pvVar7;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar6 == 0) {
        pFVar8 = (FIndexedLockFreeLink *)0x0;
      }
      else {
        pFVar8 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe] + (uVar6 & 0x3fff);
      }
      pFVar8->Payload = (atomic<void_*>)this;
      FLockFreePointerListLIFORoot<64,1>::Push
                ((FLockFreePointerListLIFORoot<64,1> *)&MemoryPool,uVar6);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145adef00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void * __thiscall
FVulkanUploadContext::_scalar_deleting_destructor_(FVulkanUploadContext *this,uint param_1)

{
  *(undefined ***)this = &___7FVulkanUploadContext__6B_;
  FVulkanContextCommon::~FVulkanContextCommon((FVulkanContextCommon *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145adef50

void * __thiscall
FVulkanViewableResource::_scalar_deleting_destructor_(FVulkanViewableResource *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FVulkanViewableResource__6B_;
  if (this->LinkedViews != (FVulkanLinkedView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,0x232,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// DebugHeavyWeightBarrier @ 145ae2270

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __cdecl VulkanRHI::DebugHeavyWeightBarrier(VkCommandBuffer_T *param_1,int param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  VkMemoryBarrier local_28;
  
  pTVar1 = CVarVulkanDebugBarrier.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_145ae22ac;
  }
  lVar3 = 0;
LAB_145ae22ac:
  if ((*(uint *)((longlong)pTVar1->ShadowedValue + lVar3) & param_2) != 0) {
    local_28._4_8_ = 0;
    local_28.pNext._4_4_ = 0;
    local_28.srcAccessMask = 0x1e07fff;
    local_28.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    local_28.dstAccessMask = 0x1e07fff;
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (param_1,0x10000,0x10000,0,1,&local_28,0,(VkBufferMemoryBarrier *)0x0,0,
               (VkImageMemoryBarrier *)0x0);
  }
  return;
}

// DebugUtilsCallback @ 145ae2330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __cdecl
DebugUtilsCallback(VkDebugUtilsMessageSeverityFlagBitsEXT param_1,uint param_2,
                  VkDebugUtilsMessengerCallbackDataEXT *param_3,void *param_4)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStackY_738 [32];
  uint local_708;
  int local_704;
  uint local_700 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_738;
  if ((param_1 >> 0xc & 1) == 0) {
    if ((param_1 & VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT) == 0) {
      if ((param_1 & VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT) == 0) {
        if ((((param_1 & VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT) != 0) &&
            ((param_1 & ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT) != 0)) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1534033189939445700>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                               ,0x3c,
                               "(MsgSeverity & ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT) == 0"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      else if (((param_1 & ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT) != 0) &&
              (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1534033189939445705>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                                  ,0x37,
                                  "(MsgSeverity & ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT) == 0"
                                 ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    else if (((param_1 & ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT) != 0) &&
            (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_1534033189939445710>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                                ,0x32,
                                "(MsgSeverity & ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT) == 0"
                               ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  else if (((param_1 & ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT) != 0) &&
          (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1534033189939445715>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                              ,0x2d,
                              "(MsgSeverity & ~VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT) == 0")
          , bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  lVar12 = 0;
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) == 0) {
      lVar12 = 5;
      if ((param_2 & 4) != 0) {
        if (((param_2 & 0xfffffffb) != 0) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1534033189939445653>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                               ,0x6b,
                               "(MsgType & ~VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT) == 0"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
        lVar12 = 4;
      }
    }
    else if ((param_2 & 4) == 0) {
      if (((param_2 & 0xfffffffd) != 0) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1534033189939445660>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                             ,100,"(MsgType & ~VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT) == 0"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      lVar12 = 3;
    }
    else {
      if (((param_2 & 0xfffffff9) != 0) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1534033189939445666>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                             ,0x5e,
                             "(MsgType & ~(VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT | VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT)) == 0"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      lVar12 = 2;
    }
  }
  else if ((param_2 & 2) == 0) {
    if (((param_2 & 0xfffffffe) != 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1534033189939445675>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                           ,0x55,"(MsgType & ~VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT) == 0"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  else {
    if (((param_2 & 0xfffffffc) != 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1534033189939445681>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                           ,0x4f,
                           "(MsgType & ~(VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT | VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT)) == 0"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    lVar12 = 1;
  }
  pcVar9 = param_3->pMessageIdName;
  if (pcVar9 == (char *)0x0) {
    bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar4) {
      pcVar9 = param_3->pMessage;
      local_6f8._padding_ = 0;
      if (pcVar9 == (char *)0x0) {
        local_6f8.Ptr = (wchar_t *)0x0;
        local_6f8.StringLength = 0;
      }
      else {
        sVar8 = strlen(pcVar9);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_6f8,pcVar9,(int)sVar8,Yes);
      }
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"*** [%s:%s(NULL)%d] %s");
      if ((void *)local_6f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_6f8._padding_);
      }
      FGenericPlatformMisc::LowLevelOutputDebugString(L"\n");
    }
    if (2 < (byte)LogVulkanRHI._0_1_) {
      pcVar9 = param_3->pMessage;
      local_5d8._padding_ = 0;
      if (pcVar9 == (char *)0x0) {
        local_5d8.Ptr = (wchar_t *)0x0;
        local_5d8.StringLength = 0;
      }
      else {
        sVar8 = strlen(pcVar9);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_5d8,pcVar9,(int)sVar8,Yes);
      }
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_5d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5d8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1534033189939445645>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDebug.cpp"
                       ,0x73,"0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  else {
    iVar6 = strcmp(pcVar9,"UNASSIGNED-CoreValidation-Shader-OutputNotConsumed");
    if (((((((iVar6 != 0) &&
            (iVar6 = strcmp(pcVar9,"Undefined-Value-ShaderOutputNotConsumed"), iVar6 != 0)) &&
           (iVar6 = strcmp(pcVar9,"Undefined-Value-ShaderOutputNotConsumed-DynamicRendering"),
           iVar6 != 0)) &&
          ((iVar6 = strcmp(pcVar9,"VUID-VkSwapchainCreateInfoKHR-imageExtent-01274"), iVar6 != 0 &&
           (iVar6 = strcmp(pcVar9,"VUID-VkSwapchainCreateInfoKHR-pNext-07781"), iVar6 != 0)))) &&
         ((iVar6 = strcmp(pcVar9,"UNASSIGNED-GPU-Assisted Validation Setup Error."), iVar6 != 0 &&
          ((iVar6 = strcmp(pcVar9,"VUID-RuntimeSpirv-Fragment-06427"), iVar6 != 0 &&
           (iVar6 = strcmp(pcVar9,"UNASSIGNED-BestPractices-vkCreateDevice-deprecated-extension"),
           iVar6 != 0)))))) &&
        (pcVar9 = strstr(param_3->pMessage,"SPV_GOOGLE_hlsl_functionality1"), pcVar9 == (char *)0x0)
        ) && ((pcVar9 = strstr(param_3->pMessage,"SPV_GOOGLE_user_type"), pcVar9 == (char *)0x0 &&
              (pcVar9 = strstr(param_3->pMessage,
                               "Cannot store to OpTypeImage, OpTypeSampler, OpTypeSampledImage, or OpTypeAccelerationStructure"
                              ), pcVar9 == (char *)0x0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
        atexit(`DebugUtilsCallback'::__l2::_dynamic_atexit_destructor_for__SeenCodes__);
        _Init_thread_footer(&_TSS0);
      }
      iVar6 = (**(code **)(*(longlong *)GCVarUniqueValidationMessages._8_8_ + 200))();
      local_708 = 0;
      if (iVar6 != 0) {
        pcVar9 = param_3->pMessageIdName;
        uVar11 = 0xffffffff;
        local_708 = 0xffffffff;
        cVar1 = *pcVar9;
        while (cVar1 != '\0') {
          pcVar9 = pcVar9 + 1;
          uVar11 = (uint)(int)cVar1 ^ uVar11;
          local_708 = FCrc::CRCTablesSB8[1][uVar11 >> 0x10 & 0xff] ^
                      FCrc::CRCTablesSB8[2][uVar11 >> 8 & 0xff] ^
                      FCrc::CRCTablesSB8[0][uVar11 >> 0x18] ^ FCrc::CRCTablesSB8[3][uVar11 & 0xff];
          uVar11 = (ulonglong)local_708;
          cVar1 = *pcVar9;
        }
        local_708 = ~local_708;
        if (*(int *)&SeenCodes.Elements[lVar12].Elements.field_0x8 !=
            *(int *)&SeenCodes.Elements[lVar12].Elements.field_0x34) {
          FVar10 = SeenCodes.Elements[lVar12].Hash.SecondaryData;
          if (FVar10 == (ForElementType<FSetElementId>)0x0) {
            FVar10 = (ForElementType<FSetElementId>)(lVar12 * 0x50 + 0x154bdc218);
          }
          iVar7 = *(int *)((longlong)FVar10 +
                          (ulonglong)(SeenCodes.Elements[lVar12].HashSize - 1U & local_708) * 4);
          if (iVar7 != -1) {
            lVar2 = *(longlong *)&SeenCodes.Elements[lVar12].Elements;
            do {
              if (*(uint *)(lVar2 + (longlong)iVar7 * 0xc) == local_708) {
                return 0;
              }
              iVar7 = *(int *)(lVar2 + 4 + (longlong)iVar7 * 0xc);
            } while (iVar7 != -1);
          }
        }
      }
      local_704 = iVar6;
      bVar4 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar4) {
        pcVar9 = param_3->pMessage;
        local_398._padding_ = 0;
        if (pcVar9 == (char *)0x0) {
          local_398.Ptr = (wchar_t *)0x0;
          local_398.StringLength = 0;
        }
        else {
          sVar8 = strlen(pcVar9);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_398,pcVar9,(int)sVar8,Yes);
        }
        pcVar9 = param_3->pMessageIdName;
        local_4b8._padding_ = 0;
        if (pcVar9 == (char *)0x0) {
          local_4b8.Ptr = (wchar_t *)0x0;
          local_4b8.StringLength = 0;
        }
        else {
          sVar8 = strlen(pcVar9);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4b8,pcVar9,(int)sVar8,Yes);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf(L"*** [%s:%s(%s)] %s");
        if ((void *)local_4b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4b8._padding_);
        }
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
        FGenericPlatformMisc::LowLevelOutputDebugString(L"\n");
        iVar6 = local_704;
      }
      if (2 < (byte)LogVulkanRHI._0_1_) {
        pcVar9 = param_3->pMessage;
        local_158._padding_ = 0;
        if (pcVar9 == (char *)0x0) {
          local_158.Ptr = (wchar_t *)0x0;
          local_158.StringLength = 0;
        }
        else {
          sVar8 = strlen(pcVar9);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,pcVar9,(int)sVar8,Yes);
        }
        pcVar9 = param_3->pMessageIdName;
        local_278._padding_ = 0;
        if (pcVar9 == (char *)0x0) {
          local_278.Ptr = (wchar_t *)0x0;
          local_278.StringLength = 0;
        }
        else {
          sVar8 = strlen(pcVar9);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,pcVar9,(int)sVar8,Yes);
        }
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      if (iVar6 != 0) {
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int_const_&>(SeenCodes.Elements + lVar12,local_700,(bool *)&local_708);
      }
    }
  }
  return 0;
}

// GetBufferDeviceAddress @ 145ae6130

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

ulong64 __cdecl GetBufferDeviceAddress(FVulkanDevice *param_1,VkBuffer_T *param_2)

{
  ulong64 uVar1;
  VkBufferDeviceAddressInfo local_28;
  
  if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x1000000000) != 0) {
    local_28._4_8_ = 0;
    local_28.pNext._4_4_ = 0;
    local_28.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    local_28.buffer = param_2;
    uVar1 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(param_1->Device,&local_28);
    return uVar1;
  }
  return 0;
}

// GetDepthOrStencilStageAndAccessFlags @ 145ae64c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl GetDepthOrStencilStageAndAccessFlags(ERHIAccess param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ERHIAccess local_res8 [6];
  uint local_res20 [2];
  ERHIAccess local_28 [2];
  ERHIAccess *local_20;
  uint *local_18;
  ERHIAccess *local_10;
  
  if ((param_1 & ~Discard) == None) {
    *param_2 = 0x10000;
    *param_3 = 0x18000;
  }
  else {
    uVar1 = 0;
    *param_2 = 0;
    uVar2 = 0;
    *param_3 = 0;
    local_res20[0] = 0;
    if ((param_1 >> 0xe & 1) != 0) {
      *param_2 = *param_2 | 0x400;
      uVar1 = 0x4000;
      *param_3 = *param_3 | 0x100;
      uVar2 = 0x4000;
      local_res20[0] = 0x4000;
    }
    if ((param_1 >> 0xf & 1) != 0) {
      *param_2 = *param_2 | 0x300;
      *param_3 = *param_3 | 0x600;
      uVar1 = uVar2 | 0x8000;
      uVar2 = uVar1;
      local_res20[0] = uVar1;
    }
    if ((param_1 >> 9 & 1) != 0) {
      *param_2 = *param_2 | 0x300;
      *param_3 = *param_3 | 0x200;
      uVar1 = uVar2 | 0x200;
      uVar2 = uVar1;
      local_res20[0] = uVar1;
    }
    if ((param_1 & SRVGraphics) != None) {
      *param_2 = *param_2 | 0x80;
      *param_3 = *param_3 | 0x20;
      uVar1 = uVar2 | 0x60;
      uVar2 = uVar1;
      local_res20[0] = uVar1;
    }
    if ((param_1 >> 0xb & 1) != 0) {
      *param_2 = *param_2 | 0x80;
      *param_3 = *param_3 | 0x60;
      uVar1 = uVar2 | 0x800;
      local_res20[0] = uVar1;
    }
    if ((param_1 & SRVCompute) != None) {
      *param_2 = *param_2 | 0x800;
      *param_3 = *param_3 | 0x20;
      uVar1 = uVar1 | 0x10;
      local_res20[0] = uVar1;
    }
    if ((param_1 >> 10 & 1) != 0) {
      *param_2 = *param_2 | 0x800;
      *param_3 = *param_3 | 0x60;
      uVar1 = uVar1 | 0x400;
      local_res20[0] = uVar1;
    }
    if ((char)param_1 < '\0') {
      *param_2 = *param_2 | 0x1000;
      *param_3 = *param_3 | 0x800;
      uVar1 = uVar1 | 0x80;
      local_res20[0] = uVar1;
    }
    if ((param_1 >> 0xd & 1) != 0) {
      *param_2 = *param_2 | 0x1000;
      *param_3 = *param_3 | 0x1000;
      uVar1 = uVar1 | 0x2000;
      local_res20[0] = uVar1;
    }
    local_28[0] = ~uVar1 & param_1;
    if (local_28[0] != None) {
      local_20 = local_res8;
      local_18 = local_res20;
      local_10 = local_28;
      local_res8[0] = param_1;
      `GetDepthOrStencilStageAndAccessFlags'::__l2::<lambda_1>::operator()(&local_20);
      return;
    }
  }
  return;
}

// GetDescriptorTypeSize @ 145ae6790

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

uint __cdecl GetDescriptorTypeSize(FVulkanDevice *param_1,VkDescriptorType param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  pTVar3 = GCVarRobustBufferAccess.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar6);
  if ((int)param_2 < 0x3b9d13f1) {
    if (param_2 == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) {
      return (uint)(param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
                   accelerationStructureDescriptorSize;
    }
    switch(param_2) {
    case VK_DESCRIPTOR_TYPE_SAMPLER:
      return (uint)(param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
                   samplerDescriptorSize;
    case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
      return (uint)(param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
                   sampledImageDescriptorSize;
    case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
      return (uint)(param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
                   storageImageDescriptorSize;
    case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
      lVar6 = 0x24c0;
      if (iVar1 < 1) {
        lVar6 = 0x24b8;
      }
      return *(uint *)((longlong)(param_1->GlobalSamplers).Elements + lVar6);
    case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
      lVar6 = 0x24d0;
      if (iVar1 < 1) {
        lVar6 = 0x24c8;
      }
      return *(uint *)((longlong)(param_1->GlobalSamplers).Elements + lVar6);
    case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
      lVar6 = 0x24e0;
      if (iVar1 < 1) {
        lVar6 = 0x24d8;
      }
      return *(uint *)((longlong)(param_1->GlobalSamplers).Elements + lVar6);
    case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
      lVar6 = 0x24f0;
      if (iVar1 < 1) {
        lVar6 = 0x24e8;
      }
      return *(uint *)((longlong)(param_1->GlobalSamplers).Elements + lVar6);
    }
  }
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                     ,0xc5,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return 0;
}

// GetMergedDepthStencilLayout @ 145ae6ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

VkImageLayout __cdecl
VulkanRHI::GetMergedDepthStencilLayout(VkImageLayout param_1,VkImageLayout param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  VkImageLayout VVar4;
  char *pcVar5;
  size_t sVar6;
  undefined1 auStack_718 [32];
  wchar_t *local_6f8;
  wchar_t *local_6f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_718;
  if (param_1 == VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL) {
    if (param_2 == VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL) {
      return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    }
LAB_145ae6e33:
    pcVar5 = string_VkImageLayout(param_2);
    local_148._padding_ = 0;
    if (pcVar5 == (char *)0x0) {
      local_148.Ptr = (wchar_t *)0x0;
      local_148.StringLength = 0;
    }
    else {
      sVar6 = strlen(pcVar5);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,pcVar5,(int)sVar6,Yes);
    }
    pwVar2 = local_148.Ptr;
    pcVar5 = string_VkImageLayout(param_1);
    local_268._padding_ = 0;
    if (pcVar5 == (char *)0x0) {
      local_268.Ptr = (wchar_t *)0x0;
      local_268.StringLength = 0;
    }
    else {
      sVar6 = strlen(pcVar5);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_268,pcVar5,(int)sVar6,Yes);
    }
    local_6f8 = local_268.Ptr;
    local_6f0 = pwVar2;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StencilLayout == DepthLayout",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                       ,0x205,
                       L"You can\'t merge transfer src layout without anything else than transfer src (%s != %s).  You need either VK_KHR_separate_depth_stencil_layouts or GRHISupportsSeparateDepthStencilCopyAccess enabled."
                      );
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (!bVar3) {
      return VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    }
    pcVar1 = (code *)swi(3);
    VVar4 = (*pcVar1)();
    return VVar4;
  }
  if (param_2 == VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL) goto LAB_145ae6e33;
  if (param_1 == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) {
    if (param_2 == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) {
      return VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    }
LAB_145ae6d2f:
    pcVar5 = string_VkImageLayout(param_2);
    local_388._padding_ = 0;
    if (pcVar5 == (char *)0x0) {
      local_388.Ptr = (wchar_t *)0x0;
      local_388.StringLength = 0;
    }
    else {
      sVar6 = strlen(pcVar5);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_388,pcVar5,(int)sVar6,Yes);
    }
    pwVar2 = local_388.Ptr;
    pcVar5 = string_VkImageLayout(param_1);
    local_4a8._padding_ = 0;
    if (pcVar5 == (char *)0x0) {
      local_4a8.Ptr = (wchar_t *)0x0;
      local_4a8.StringLength = 0;
    }
    else {
      sVar6 = strlen(pcVar5);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4a8,pcVar5,(int)sVar6,Yes);
    }
    local_6f8 = local_4a8.Ptr;
    local_6f0 = pwVar2;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StencilLayout == DepthLayout",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                       ,0x20e,
                       L"You can\'t merge transfer dst layout without anything else than transfer dst (%s != %s).  You need either VK_KHR_separate_depth_stencil_layouts or GRHISupportsSeparateDepthStencilCopyAccess enabled."
                      );
    if ((void *)local_4a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._padding_);
    }
    if ((void *)local_388._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_388._padding_);
    }
    if (!bVar3) {
      return VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    }
    pcVar1 = (code *)swi(3);
    VVar4 = (*pcVar1)();
    return VVar4;
  }
  if (param_2 == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) goto LAB_145ae6d2f;
  if (param_1 == VK_IMAGE_LAYOUT_UNDEFINED) {
    if (param_2 == VK_IMAGE_LAYOUT_UNDEFINED) {
      return VK_IMAGE_LAYOUT_UNDEFINED;
    }
  }
  else if (param_1 == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
    if (param_2 == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
      return VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    }
  }
  else if ((param_1 - VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL < 2) ||
          (param_1 + 0xc4636cf8 < 2)) goto LAB_145ae6c2a;
  if ((1 < param_2 - VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) && (1 < param_2 + 0xc4636cf8)
     ) {
    if (param_1 != VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL) {
      if (param_1 != VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) {
        return (param_2 != VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL) +
               VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
      }
      if ((param_2 != VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) && (param_2 != VK_IMAGE_LAYOUT_UNDEFINED))
      {
        if ((param_2 != VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("StencilLayout == VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                               ,0x241,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          VVar4 = (*pcVar1)();
          return VVar4;
        }
        return VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL;
      }
      return VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL;
    }
    if ((param_2 == VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL) || (param_2 == VK_IMAGE_LAYOUT_UNDEFINED)) {
      return VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    }
    if ((param_2 != VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StencilLayout == VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                           ,0x235,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      VVar4 = (*pcVar1)();
      return VVar4;
    }
    return VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL;
  }
LAB_145ae6c2a:
  if (param_2 == param_1) {
    return param_1;
  }
  pcVar5 = string_VkImageLayout(param_2);
  local_5c8._padding_ = 0;
  if (pcVar5 == (char *)0x0) {
    local_5c8.Ptr = (wchar_t *)0x0;
    local_5c8.StringLength = 0;
  }
  else {
    sVar6 = strlen(pcVar5);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_5c8,pcVar5,(int)sVar6,Yes);
  }
  pwVar2 = local_5c8.Ptr;
  pcVar5 = string_VkImageLayout(param_1);
  local_6e8._padding_ = 0;
  if (pcVar5 == (char *)0x0) {
    local_6e8.Ptr = (wchar_t *)0x0;
    local_6e8.StringLength = 0;
  }
  else {
    sVar6 = strlen(pcVar5);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_6e8,pcVar5,(int)sVar6,Yes);
  }
  local_6f8 = local_6e8.Ptr;
  local_6f0 = pwVar2;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("StencilLayout == DepthLayout",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                     ,0x229,L"Layouts were already merged but they are mismatched (%s != %s).");
  if ((void *)local_6e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_6e8._padding_);
  }
  if ((void *)local_5c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_5c8._padding_);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    VVar4 = (*pcVar1)();
    return VVar4;
  }
  return param_1;
}

// GetStageForFrequency @ 145ae7670

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

EStage __cdecl ShaderStage::GetStageForFrequency(EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  EStage EVar3;
  
  switch(param_1) {
  case SF_Vertex:
  case SF_Compute:
  case SF_NumStandardFrequencies:
    return Compute;
  case SF_Mesh:
  case SF_RayCallable:
    return Mesh;
  case SF_Amplification:
    return NumRayTracingStages;
  case SF_Pixel:
  case SF_RayMiss:
    return NumComputeStages;
  case SF_Geometry:
  case SF_RayHitGroup:
    return Geometry;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanCommon.h"
                     ,0x4d,L"Invalid shader Stage %d");
  if (!bVar2) {
    return Invalid;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

// GetUEDescriptorTypeFromVkDescriptorType @ 145ae7830

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

ERHIDescriptorType __cdecl GetUEDescriptorTypeFromVkDescriptorType(VkDescriptorType param_1)

{
  code *pcVar1;
  bool bVar2;
  ERHIDescriptorType EVar3;
  
  if ((int)param_1 < 0x3b9d13f1) {
    if (param_1 == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) {
      return AccelerationStructure;
    }
    switch(param_1) {
    case VK_DESCRIPTOR_TYPE_SAMPLER:
      return Sampler;
    case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
      return TextureSRV;
    case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
      return TextureUAV;
    case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
      return TypedBufferSRV;
    case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
      return TypedBufferUAV;
    case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
      return BufferSRV;
    case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
      return BufferUAV;
    }
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                     ,0xa3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Invalid;
}

// GetVkAccessMaskForLayout @ 145ae78f0

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

uint __cdecl GetVkAccessMaskForLayout(VkImageLayout param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1 < 0x3b9acdeb) {
    if (param_1 == VK_IMAGE_LAYOUT_PRESENT_SRC_KHR) {
      return 0;
    }
    switch(param_1) {
    case VK_IMAGE_LAYOUT_UNDEFINED:
    case VK_IMAGE_LAYOUT_GENERAL:
      goto switchD_145ae7923_caseD_0;
    case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
      return 0x100;
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
      goto switchD_145ae7923_caseD_3;
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
      return 0x220;
    case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
      return 0x20;
    case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
      return 0x800;
    case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
      return 0x1000;
    default:
switchD_145ae7923_default:
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x76,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      goto switchD_145ae7923_caseD_0;
    }
  }
  if ((int)param_1 < 0x3b9e776a) {
    if (param_1 == VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL) {
      return 0x220;
    }
    if ((param_1 == VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL) ||
       (param_1 == VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL)) {
      return 0x620;
    }
    if (param_1 == VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR) {
      return 0x800000;
    }
    if (param_1 == VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT) {
      return 0x1000000;
    }
    bVar2 = param_1 == VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL;
  }
  else {
    if (param_1 == VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL) goto switchD_145ae7923_caseD_3;
    if (param_1 == VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL) {
      return 0x220;
    }
    if (param_1 == VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) {
      return 0x20;
    }
    bVar2 = param_1 == VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
  }
  if (!bVar2) goto switchD_145ae7923_default;
switchD_145ae7923_caseD_3:
  uVar3 = 0x600;
switchD_145ae7923_caseD_0:
  return uVar3;
}

// GetVkStageAndAccessFlags @ 145ae7a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
GetVkStageAndAccessFlags
          (ERHIAccess param_1,EType param_2,uint param_3,bool param_4,bool param_5,uint *param_6,
          uint *param_7,VkImageLayout *param_8,bool param_9)

{
  code *pcVar1;
  VkImageLayout *pVVar2;
  VkImageLayout *pVVar3;
  bool bVar4;
  uint uVar5;
  VkImageLayout VVar6;
  ERHIAccess local_res8 [2];
  uint local_res20 [2];
  ERHIAccess *local_58;
  uint *local_50;
  VkImageLayout **local_48;
  
  pVVar3 = param_8;
  local_res8[0] = param_1;
  if (param_1 == (ResolveDst|RTV)) {
    local_res8[0] = RTV;
  }
  if ((local_res8[0] >> 0x10 & 1) != 0) {
    local_res8[0] = local_res8[0] & ~SRVMask;
  }
  *param_8 = VK_IMAGE_LAYOUT_UNDEFINED;
  if (param_4) {
    VVar6 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
  }
  else {
    VVar6 = (uint)param_5 * 4 + VK_IMAGE_LAYOUT_GENERAL;
  }
  if (local_res8[0] < (CopyDest|CPURead)) {
    if (local_res8[0] == CopyDest) {
LAB_145ae7f01:
      *param_6 = 0x1000;
      *param_7 = 0x1000;
      *param_8 = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
      return;
    }
    if (local_res8[0] == None) {
      *param_6 = 0x10000;
      *param_7 = 0x18000;
      return;
    }
    if (local_res8[0] == CPURead) {
      *param_6 = 0x4000;
      *param_7 = 0x2000;
      *param_8 = VK_IMAGE_LAYOUT_GENERAL;
      return;
    }
    if (local_res8[0] == Present) {
      uVar5 = 0x2000;
      if (param_9) {
        uVar5 = 0x400;
      }
      *param_6 = uVar5;
      *param_7 = 0;
      *param_8 = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
      return;
    }
    if (local_res8[0] == RTV) {
      *param_6 = 0x400;
      *param_7 = 0x180;
      *param_8 = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
      return;
    }
  }
  else {
    if (local_res8[0] == ResolveDst) goto LAB_145ae7f01;
    if (local_res8[0] == BVHRead) {
      *param_6 = 0x2000800;
      if (GRHIGlobals.RayTracing.SupportsShaders != false) {
        *param_6 = 0x2200800;
      }
      *param_7 = 0x200000;
      return;
    }
    if (local_res8[0] == BVHWrite) {
      *param_6 = 0x2000800;
      if (GRHIGlobals.RayTracing.SupportsShaders != false) {
        *param_6 = 0x2200800;
      }
      *param_7 = 0x400000;
      return;
    }
    if (local_res8[0] == Discard) {
      *param_6 = 0x10000;
      if (param_9) {
        VVar6 = VK_IMAGE_LAYOUT_UNDEFINED;
      }
      *param_7 = 0x18000;
      *param_8 = VVar6;
      return;
    }
  }
  if ((local_res8[0] >> 0xf & 1) != 0) {
    if (!param_4) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("bIsDepthStencil",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x127,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *param_6 = 0x300;
    *param_7 = 0x600;
    *pVVar3 = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
    return;
  }
  *param_6 = 0;
  local_res20[0] = 0;
  *param_7 = 0;
  if ((local_res8[0] & IndirectArgs) != None) {
    uVar5 = 0;
    if (param_2 == Texture) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("ResourceType != FRHITransitionInfo::EType::Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x135,L"");
      uVar5 = local_res20[0];
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *param_6 = *param_6 | 2;
    *param_7 = *param_7 | 1;
    local_res20[0] = uVar5 | 4;
  }
  if ((local_res8[0] & VertexOrIndexBuffer) != None) {
    if (param_2 == Texture) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("ResourceType != FRHITransitionInfo::EType::Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x13e,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *param_6 = *param_6 | 4;
    if (param_2 == Buffer) {
      if ((param_3 & 0x40) != 0) {
        *param_7 = *param_7 | 2;
      }
      if ((char)param_3 < '\0') {
        *param_7 = *param_7 | 4;
      }
    }
    else {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x14d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res20[0] = local_res20[0] | 8;
  }
  pVVar2 = param_8;
  if ((local_res8[0] >> 9 & 1) != 0) {
    if (!param_4) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("bIsDepthStencil",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x156,L"");
      pVVar2 = param_8;
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *param_6 = *param_6 | 0x300;
    *param_7 = *param_7 | 0x200;
    local_res20[0] = local_res20[0] | 0x200;
    *pVVar3 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
  }
  param_8._4_4_ = (undefined4)((ulonglong)pVVar2 >> 0x20);
  if ((local_res8[0] & SRVGraphics) != None) {
    *param_6 = *param_6 | GVulkanDevicePipelineStageBits & 0xfffff7ff;
    uVar5 = *param_7;
    *param_7 = uVar5 | 0x20;
    if ((param_3 & 0x10) != 0) {
      *param_7 = uVar5 | 0x28;
    }
    local_res20[0] = local_res20[0] | 0x60;
    *pVVar3 = VVar6;
  }
  if ((local_res8[0] & SRVCompute) != None) {
    *param_6 = *param_6 | 0x800;
    *param_7 = *param_7 | 0x20;
    local_res20[0] = local_res20[0] | 0x10;
    *pVVar3 = VVar6;
  }
  if ((local_res8[0] >> 0xb & 1) != 0) {
    *param_6 = *param_6 | GVulkanDevicePipelineStageBits & 0xfffff7ff;
    *param_7 = *param_7 | 0x60;
    local_res20[0] = local_res20[0] | 0x800;
    *pVVar3 = VK_IMAGE_LAYOUT_GENERAL;
  }
  if ((local_res8[0] & UAVCompute) != None) {
    *param_6 = *param_6 | 0x800;
    *param_7 = *param_7 | 0x60;
    local_res20[0] = local_res20[0] | 0x400;
    *pVVar3 = VK_IMAGE_LAYOUT_GENERAL;
  }
  if ((local_res8[0] & (ResolveSrc|CopySrc)) == None) goto LAB_145ae7dc4;
  if (param_2 == Texture) {
    if (*pVVar3 == VK_IMAGE_LAYOUT_UNDEFINED) {
      *pVVar3 = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
      goto LAB_145ae7daf;
    }
    *pVVar3 = VK_IMAGE_LAYOUT_GENERAL;
    *param_6 = *param_6 | 0x1000;
    *param_7 = *param_7 | 0x800;
  }
  else {
LAB_145ae7daf:
    *param_6 = 0x1000;
    *param_7 = 0x800;
  }
  local_res20[0] = local_res20[0] | 0x180;
LAB_145ae7dc4:
  if ((local_res8[0] >> 0x13 & 1) != 0) {
    param_8 = pVVar2;
    bVar4 = ValidateShadingRateDataType();
    if (bVar4) {
      if (param_2 != Texture) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ResourceType == FRHITransitionInfo::EType::Texture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                           ,0x1ac,
                           L"A non-texture resource was tagged as a shading rate source; only textures (Texture2D and Texture2DArray) can be used for this purpose."
                          );
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
        *param_6 = 0x400000;
        *param_7 = 0x800000;
        *pVVar3 = VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR;
      }
      if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Fractional) {
        *param_6 = 0x800000;
        *param_7 = 0x1000000;
        *pVVar3 = VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;
      }
      local_res20[0] = local_res20[0] | 0x80000;
    }
  }
  param_8._0_4_ = ~local_res20[0] & local_res8[0];
  if ((ERHIAccess)param_8 != None) {
    local_58 = local_res8;
    local_50 = local_res20;
    local_48 = &param_8;
    `GetVkStageAndAccessFlags'::__l2::<lambda_1>::operator()(&local_58);
  }
  return;
}

// GetVkStageFlagsForLayout @ 145ae7f30

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

uint __cdecl GetVkStageFlagsForLayout(VkImageLayout param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((int)param_1 < 0x3b9acdeb) {
    if (param_1 == VK_IMAGE_LAYOUT_PRESENT_SRC_KHR) {
      return 0x2000;
    }
    switch(param_1) {
    case VK_IMAGE_LAYOUT_UNDEFINED:
    case VK_IMAGE_LAYOUT_GENERAL:
      return 1;
    case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
      return 0x400;
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
      goto LAB_145ae8049;
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
      return 0x380;
    case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
      return 0x80;
    case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
    case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
      return 0x1000;
    }
  }
  else {
    if ((int)param_1 < 0x3b9e776a) {
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL) {
        return 0x380;
      }
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL) {
        return 0x380;
      }
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL) {
        return 0x380;
      }
      if (param_1 == VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR) {
        return 0x400000;
      }
      if (param_1 == VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT) {
        return 0x800000;
      }
      bVar2 = param_1 == VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL;
    }
    else {
      if (param_1 == VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL) {
        return 0x300;
      }
      if (param_1 == VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL) {
        return 0x380;
      }
      if (param_1 == VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) {
        return 0x380;
      }
      bVar2 = param_1 == VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
    }
    if (bVar2) {
LAB_145ae8049:
      return 0x300;
    }
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                     ,0xbd,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// MergePlanes @ 145aeb060

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl MergePlanes(VkImageMemoryBarrier *param_1,FImageBarrierExtraData *param_2,int param_3)

{
  VkImageLayout *pVVar1;
  uint uVar2;
  FVulkanTexture *pFVar3;
  code *pcVar4;
  bool bVar5;
  VkImageLayout VVar6;
  VkImageLayout VVar7;
  longlong lVar8;
  VkImageMemoryBarrier *pVVar9;
  uint uVar10;
  VkImageLayout VVar11;
  
  pFVar3 = param_2->BaseTexture;
  if ((pFVar3->Image != param_1->image) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Texture->Image == ImageBarrier.image",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x446,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->newLayout == VK_IMAGE_LAYOUT_UNDEFINED) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("ImageBarrier.newLayout != VK_IMAGE_LAYOUT_UNDEFINED",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x447,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pVVar1 = &param_1->oldLayout;
  if (((param_1->oldLayout == VK_IMAGE_LAYOUT_UNDEFINED) && (param_2->IsAliasingBarrier == false))
     && (bVar5 = FDebug::CheckVerifyFailedImpl2
                           ("(ImageBarrier.oldLayout != VK_IMAGE_LAYOUT_UNDEFINED) || RemainingExtras->IsAliasingBarrier"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                            ,0x448,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar3->FullAspectMask & 6) != 0) {
    uVar2 = (param_1->subresourceRange).aspectMask;
    if (pFVar3->FullAspectMask == uVar2) {
      VVar7 = VulkanRHI::GetMergedDepthStencilLayout(*pVVar1,*pVVar1);
      *pVVar1 = VVar7;
      VVar7 = VulkanRHI::GetMergedDepthStencilLayout(param_1->newLayout,param_1->newLayout);
      param_1->newLayout = VVar7;
    }
    else {
      if (((uVar2 & 6) == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("VKHasAnyFlags(ImageBarrier.subresourceRange.aspectMask, VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                             ,0x44f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = (param_1->subresourceRange).aspectMask;
      uVar10 = uVar2 ^ pFVar3->FullAspectMask;
      if (0 < param_3) {
        lVar8 = 0;
        pVVar9 = param_1;
        do {
          if ((param_2->BaseTexture->Image == param_1->image) &&
             ((pVVar9->subresourceRange).aspectMask == uVar10)) {
            if (((param_1->subresourceRange).baseArrayLayer !=
                 (pVVar9->subresourceRange).baseArrayLayer) &&
               (bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("ImageBarrier.subresourceRange.baseArrayLayer == OtherImageBarrier.subresourceRange.baseArrayLayer"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                                   ,0x459,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((param_1->subresourceRange).baseMipLevel != (pVVar9->subresourceRange).baseMipLevel
                ) && (bVar5 = FDebug::CheckVerifyFailedImpl2
                                        ("ImageBarrier.subresourceRange.baseMipLevel == OtherImageBarrier.subresourceRange.baseMipLevel"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                                         ,0x45a,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            VVar7 = pVVar9->oldLayout;
            VVar11 = pVVar9->newLayout;
            (pVVar9->subresourceRange).aspectMask = 0;
            goto LAB_145aeb27d;
          }
          lVar8 = lVar8 + 1;
          pVVar9 = pVVar9 + 1;
          param_2 = param_2 + 1;
        } while (lVar8 < param_3);
      }
      lVar8 = 0x1b0;
      if (uVar2 != 2) {
        lVar8 = 0x1b4;
      }
      uVar2 = *(uint *)((longlong)&pFVar3->_padding_ + lVar8);
      if (uVar2 == 0) {
        VVar7 = VK_IMAGE_LAYOUT_UNDEFINED;
        VVar11 = VVar7;
      }
      else if (uVar2 == 0x40000) {
        VVar7 = VK_IMAGE_LAYOUT_UNDEFINED;
        VVar11 = VVar7;
      }
      else if ((char)uVar2 < '\0') {
        VVar7 = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
        VVar11 = VVar7;
      }
      else {
        VVar7 = uVar2 >> 0xf & VK_IMAGE_LAYOUT_GENERAL | VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
        VVar11 = VVar7;
        if ((uVar2 >> 0xd & 1) != 0) {
          VVar7 = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
          VVar11 = VVar7;
        }
      }
LAB_145aeb27d:
      if (uVar10 == 4) {
        VVar6 = VulkanRHI::GetMergedDepthStencilLayout(*pVVar1,VVar7);
        VVar7 = VVar11;
        VVar11 = param_1->newLayout;
      }
      else {
        VVar6 = VulkanRHI::GetMergedDepthStencilLayout(VVar7,*pVVar1);
        VVar7 = param_1->newLayout;
      }
      *pVVar1 = VVar6;
      VVar7 = VulkanRHI::GetMergedDepthStencilLayout(VVar11,VVar7);
      param_1->newLayout = VVar7;
      (param_1->subresourceRange).aspectMask = (param_1->subresourceRange).aspectMask | uVar10;
    }
  }
  if (((param_1->oldLayout == VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) ||
      (param_1->oldLayout == VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(ImageBarrier.oldLayout != VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) && (ImageBarrier.oldLayout != VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x489,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->newLayout == VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) ||
      (param_1->newLayout == VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(ImageBarrier.newLayout != VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) && (ImageBarrier.newLayout != VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                         ,0x48a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// ProcessCrossQueueSemaphores @ 145aeb9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
ProcessCrossQueueSemaphores
          (FVulkanCommandListContext *param_1,TArrayView<FRHITransition_const_*,int> *param_2,
          bool param_3)

{
  FRHITransition **ppFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  FVulkanPayload *pFVar8;
  byte *pbVar9;
  FRHITransition **ppFVar10;
  FVulkanSemaphore *local_res20;
  undefined4 uStack_3c;
  TArrayView<FVulkanSemaphore_*,int> local_38;
  
  ppFVar10 = param_2->DataPtr;
  ppFVar1 = ppFVar10 + param_2->ArrayNum;
  do {
    if (ppFVar10 == ppFVar1) {
      return;
    }
    pbVar9 = (byte *)((ulonglong)(&(*ppFVar10)->field_0x8f + GRHITransitionPrivateData_AlignInBytes)
                     & ~(GRHITransitionPrivateData_AlignInBytes - 1));
    if (*(longlong *)(pbVar9 + 8) != 0) {
      if ((*pbVar9 == pbVar9[1]) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Data->SrcPipelines != Data->DstPipelines",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                             ,0x62f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_3) {
        bVar5 = *pbVar9;
        if (((bVar5 == 0) || ((bVar5 & bVar5 - 1) != 0)) ||
           (bVar5 = (**(code **)(param_1->_padding_ + 8))(&param_1->_padding_), *pbVar9 != bVar5)) {
          bVar5 = pbVar9[1];
          if (((bVar5 == 0) || ((bVar5 & bVar5 - 1) != 0)) ||
             (bVar5 = pbVar9[1], bVar6 = (**(code **)(param_1->_padding_ + 8))(&param_1->_padding_),
             bVar5 == bVar6)) goto LAB_145aebbb3;
        }
        uVar2 = *(undefined8 *)(pbVar9 + 8);
        pFVar8 = FVulkanContextCommon::GetPayload((FVulkanContextCommon *)param_1,Signal);
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,1,&(pFVar8->SignalSemaphores).AllocatorInstance,
                           &(pFVar8->SignalSemaphores).ArrayNum,&(pFVar8->SignalSemaphores).ArrayMax
                          );
        *(undefined8 *)((pFVar8->SignalSemaphores).AllocatorInstance.Data + (longlong)iVar7 * 8) =
             uVar2;
      }
      else {
        bVar5 = pbVar9[1];
        if (((bVar5 == 0) || ((bVar5 & bVar5 - 1) != 0)) ||
           (bVar5 = (**(code **)(param_1->_padding_ + 8))(&param_1->_padding_), pbVar9[1] != bVar5))
        {
          bVar5 = *pbVar9;
          if (((bVar5 == 0) || ((bVar5 & bVar5 - 1) != 0)) ||
             (bVar5 = *pbVar9, bVar6 = (**(code **)(param_1->_padding_ + 8))(&param_1->_padding_),
             bVar5 == bVar6)) goto LAB_145aebbb3;
        }
        local_res20 = *(FVulkanSemaphore **)(pbVar9 + 8);
        local_38.DataPtr = &local_res20;
        local_38._12_4_ = uStack_3c;
        local_38.ArrayNum = 1;
        FVulkanContextCommon::AddWaitSemaphores((FVulkanContextCommon *)param_1,0x10000,&local_38);
      }
    }
LAB_145aebbb3:
    ppFVar10 = ppFVar10 + 1;
  } while( true );
}

// ProcessTransitionLegacy @ 145aebbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
ProcessTransitionLegacy
          (FVulkanCommandListContext *param_1,TArrayView<FRHITransition_const_*,int> *param_2)

{
  ERHIPipeline EVar1;
  int iVar2;
  code *pcVar3;
  _func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint_VkMemoryBarrier_ptr_uint_VkBufferMemoryBarrier_ptr_uint_VkImageMemoryBarrier_ptr
  *p_Var4;
  ForAnyElementType FVar5;
  int iVar6;
  ForAnyElementType FVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  FRHITransition **ppFVar11;
  FVulkanPayload *pFVar12;
  int iVar13;
  VkImageMemoryBarrier *pVVar14;
  uint uVar15;
  FVulkanTransitionData *pFVar16;
  ulonglong uVar17;
  FImageBarrierExtraData *pFVar18;
  ulonglong uVar19;
  uint uVar20;
  FRHITransition **ppFVar21;
  ForElementType<VkMemoryBarrier> FVar22;
  ulonglong uVar23;
  undefined1 auStackY_118 [32];
  FLegacyBarrierArrays local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  ppFVar21 = param_2->DataPtr;
  ppFVar11 = ppFVar21 + param_2->ArrayNum;
  do {
    if (ppFVar21 == ppFVar11) {
      return;
    }
    uVar19 = 0;
    pFVar16 = (FVulkanTransitionData *)
              ((ulonglong)(&(*ppFVar21)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
              ~(GRHITransitionPrivateData_AlignInBytes - 1));
    EVar1 = pFVar16->SrcPipelines;
    if ((((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) ||
        (EVar1 != pFVar16->DstPipelines)) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("bIsSingleQueue",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                           ,0x495,
                           L"Devices without support for Sync2 should not be using async compute."),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_a8.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier>)0x0;
    local_a8.MemoryBarriers.ArrayNum = 0;
    local_a8.MemoryBarriers.ArrayMax = 1;
    local_a8.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.BufferBarriers.ArrayNum = 0;
    local_a8.BufferBarriers.ArrayMax = 0;
    local_a8.ImageBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ImageBarriers.ArrayNum = 0;
    local_a8.ImageBarriers.ArrayMax = 0;
    local_a8.ImageExtraData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ImageExtraData.ArrayNum = 0;
    local_a8.ImageExtraData.ArrayMax = 0;
    local_a8.SrcStageMask = 0;
    local_a8.DstStageMask = 0;
    ConvertTransitionToBarriers<FLegacyBarrierArrays>(param_1,pFVar16,&local_a8);
    uVar17 = uVar19;
    uVar23 = uVar19;
    if (0 < local_a8.ImageExtraData.ArrayNum) {
      do {
        uVar15 = (uint)uVar19;
        uVar10 = 0;
        if ((int)uVar15 < local_a8.ImageExtraData.ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar18 = (FImageBarrierExtraData *)
                  (local_a8.ImageExtraData.AllocatorInstance.Data + uVar23);
        uVar10 = 0;
        if ((int)uVar15 < local_a8.ImageBarriers.ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pVVar14 = (VkImageMemoryBarrier *)(local_a8.ImageBarriers.AllocatorInstance.Data + uVar17);
        if ((pFVar18->BaseTexture->FullAspectMask & 6) != 0) {
          (pFVar18->BaseTexture->AllPlanesTrackedAccess).Elements[pFVar18->PlaneSlice] =
               pFVar18->PlaneAccess;
        }
        if ((pVVar14->image != (VkImage_T *)0x0) && ((pVVar14->subresourceRange).aspectMask != 0)) {
          MergePlanes(pVVar14,pFVar18,local_a8.ImageExtraData.ArrayNum - uVar15);
        }
        uVar19 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 0x48;
        uVar23 = uVar23 + 0x10;
      } while ((int)(uVar15 + 1) < local_a8.ImageExtraData.ArrayNum);
    }
    uVar17 = 0;
    uVar19 = uVar17;
    if (0 < local_a8.ImageBarriers.ArrayNum) {
      do {
        uVar15 = (uint)uVar17;
        uVar20 = ~uVar15 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar15 < local_a8.ImageBarriers.ArrayNum) {
          uVar10 = uVar20;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(local_a8.ImageBarriers.AllocatorInstance.Data + uVar19 + 0x28) == 0) {
LAB_145aebec2:
          uVar10 = 0;
          if ((int)uVar15 < local_a8.ImageBarriers.ArrayNum) {
            uVar10 = uVar20;
          }
          if ((uVar10 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar13 = (local_a8.ImageBarriers.ArrayNum - uVar15) + -1;
          if (1 < iVar13) {
            iVar13 = 1;
          }
          if (iVar13 != 0) {
            memmove(local_a8.ImageBarriers.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x48,
                    local_a8.ImageBarriers.AllocatorInstance.Data +
                    (longlong)(local_a8.ImageBarriers.ArrayNum - iVar13) * 0x48,
                    (longlong)iVar13 * 0x48);
          }
          iVar13 = local_a8.ImageBarriers.ArrayNum + -1;
          local_a8.ImageBarriers.ArrayNum = iVar13;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,&local_a8.ImageBarriers.AllocatorInstance,iVar13,
                     &local_a8.ImageBarriers.ArrayMax);
        }
        else {
          uVar10 = 0;
          if ((int)uVar15 < local_a8.ImageBarriers.ArrayNum) {
            uVar10 = uVar20;
          }
          if ((uVar10 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(local_a8.ImageBarriers.AllocatorInstance.Data + uVar19 + 0x30) == 0)
          goto LAB_145aebec2;
          uVar17 = (ulonglong)(uVar15 + 1);
          uVar19 = uVar19 + 0x48;
        }
      } while ((int)uVar17 < local_a8.ImageBarriers.ArrayNum);
    }
    FVar7.Data = local_a8.ImageBarriers.AllocatorInstance.Data;
    FVar5.Data = local_a8.BufferBarriers.AllocatorInstance.Data;
    iVar13 = local_a8.MemoryBarriers.ArrayNum;
    p_Var4 = VulkanDynamicAPI::vkCmdPipelineBarrier;
    iVar6 = local_a8.BufferBarriers.ArrayNum;
    iVar8 = local_a8.ImageBarriers.ArrayNum;
    if (((local_a8.MemoryBarriers.ArrayNum != 0) || (local_a8.BufferBarriers.ArrayNum != 0)) ||
       (local_a8.ImageBarriers.ArrayNum != 0)) {
      FVar22 = (ForElementType<VkMemoryBarrier>)&local_a8;
      if (local_a8.MemoryBarriers.AllocatorInstance.SecondaryData !=
          (ForElementType<VkMemoryBarrier>)0x0) {
        FVar22 = local_a8.MemoryBarriers.AllocatorInstance.SecondaryData;
      }
      pFVar12 = FVulkanContextCommon::GetPayload((FVulkanContextCommon *)param_1,Execute);
      if ((pFVar12->CommandBuffers).ArrayNum == 0) {
        FVulkanContextCommon::PrepareNewCommandBuffer((FVulkanContextCommon *)param_1,pFVar12);
      }
      iVar2 = (pFVar12->CommandBuffers).ArrayNum;
      uVar15 = iVar2 - 1;
      uVar10 = 0;
      if ((int)uVar15 < iVar2) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*p_Var4)(*(VkCommandBuffer_T **)
                 (*(longlong *)
                   ((pFVar12->CommandBuffers).AllocatorInstance.Data +
                   (longlong)(pFVar12->CommandBuffers).ArrayNum * 8 + -8) + 0xa8),
                local_a8.SrcStageMask,local_a8.DstStageMask,0,iVar13,(VkMemoryBarrier *)FVar22,iVar6
                ,(VkBufferMemoryBarrier *)FVar5.Data,iVar8,(VkImageMemoryBarrier *)FVar7.Data);
    }
    if (local_a8.ImageExtraData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ImageExtraData.AllocatorInstance.Data);
    }
    if ((VkImageMemoryBarrier *)local_a8.ImageBarriers.AllocatorInstance.Data !=
        (VkImageMemoryBarrier *)0x0) {
      FMemory::Free(local_a8.ImageBarriers.AllocatorInstance.Data);
    }
    if ((VkBufferMemoryBarrier *)local_a8.BufferBarriers.AllocatorInstance.Data !=
        (VkBufferMemoryBarrier *)0x0) {
      FMemory::Free(local_a8.BufferBarriers.AllocatorInstance.Data);
    }
    if (local_a8.MemoryBarriers.AllocatorInstance.SecondaryData !=
        (ForElementType<VkMemoryBarrier>)0x0) {
      FMemory::Free((void *)local_a8.MemoryBarriers.AllocatorInstance.SecondaryData);
    }
    ppFVar21 = ppFVar21 + 1;
  } while( true );
}

// ProcessTransitionSync2 @ 145aec110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
ProcessTransitionSync2
          (FVulkanCommandListContext *param_1,TArrayView<FRHITransition_const_*,int> *param_2,
          bool param_3)

{
  int *piVar1;
  uint uVar2;
  VkCommandBuffer_T *pVVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkDependencyInfo_ptr *p_Var7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  undefined8 uVar10;
  bool bVar11;
  ERHIPipeline EVar12;
  ERHIPipeline EVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  FVulkanCommandBuffer *pFVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ERHIPipeline EVar24;
  int iVar25;
  TArray<VkEvent_T_*,TSizedDefaultAllocator<32>_> *pTVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  ForElementType<VkMemoryBarrier2> FVar29;
  FVulkanCommandListContext *pFVar30;
  FVulkanTransitionData *pFVar31;
  FScriptContainerElement *pFVar32;
  VkDependencyInfo *pVVar33;
  VkEvent_T *pVVar34;
  undefined1 auStackY_3c8 [32];
  undefined1 local_376;
  undefined1 local_375;
  undefined1 local_374;
  undefined1 local_373;
  bool local_372;
  TArray<VkBufferMemoryBarrier2,TSizedDefaultAllocator<32>_> local_370;
  TArray<VkImageMemoryBarrier2,TSizedDefaultAllocator<32>_> local_360;
  FVulkanCommandListContext *local_350;
  char local_348 [8];
  FVulkanCommandListContext *local_340;
  VkEvent_T *local_338;
  VkEvent_T *local_330;
  VkDependencyInfo local_328;
  VkDependencyInfo local_2e8;
  VkDependencyInfo local_2a8;
  FRHITransition **local_268;
  VkDependencyInfo local_258;
  VkDependencyInfo local_218;
  VkDependencyInfo local_1d8;
  longlong *local_198;
  FRHITransition **local_190;
  VkImageMemoryBarrier2 *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  VkBufferMemoryBarrier2 *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  ForElementType<VkMemoryBarrier2> local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  VkImageMemoryBarrier2 *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  VkBufferMemoryBarrier2 *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  ForElementType<VkMemoryBarrier2> local_138;
  uint uStack_130;
  undefined4 uStack_12c;
  TArrayView<VkBufferMemoryBarrier2_const_,int> local_128;
  TArrayView<VkMemoryBarrier2_const_,int> local_118;
  FString local_108;
  FString local_f8;
  TArrayView<VkImageMemoryBarrier2_const_,int> local_e8;
  TArrayView<VkBufferMemoryBarrier2_const_,int> local_d8;
  TArrayView<VkMemoryBarrier2_const_,int> local_c8;
  TArrayView<VkImageMemoryBarrier2_const_,int> local_b8;
  FSync2BarrierArrays local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.ArrayNum = 0;
  local_370.ArrayMax = 0;
  local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.ArrayNum = 0;
  local_360.ArrayMax = 0;
  if ((*(longlong *)(param_1->_padding_ + 0x1b68) == 0) ||
     ((GVulkanAllowConcurrentBuffer != 0 && (GVulkanAllowConcurrentImage != 0)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  local_268 = param_2->DataPtr;
  local_190 = local_268 + param_2->ArrayNum;
  local_372 = param_3;
  local_350 = param_1;
  local_348[0] = param_3;
  local_340 = param_1;
  if (local_268 != local_190) {
    plVar23 = &param_1->_padding_;
    local_198 = plVar23;
    do {
      pFVar30 = local_350;
      bVar16 = local_372;
      pFVar31 = (FVulkanTransitionData *)
                ((ulonglong)(&(*local_268)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
                ~(GRHITransitionPrivateData_AlignInBytes - 1));
      EVar24 = pFVar31->SrcPipelines;
      if (((EVar24 == None) || ((EVar24 & EVar24 - Graphics) != None)) ||
         (EVar24 != pFVar31->DstPipelines)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (local_372 == false) {
        EVar24 = pFVar31->DstPipelines;
      }
      EVar12 = (**(code **)(*plVar23 + 8))(plVar23);
      EVar13 = (**(code **)(pFVar30->_padding_ + 8))(&pFVar30->_padding_);
      if ((EVar24 & EVar13) == None) {
        EVar13 = (**(code **)(*local_198 + 8))(local_198);
        GetRHIPipelineName(&local_f8,EVar13);
        GetRHIPipelineName(&local_108,EVar24);
        bVar14 = FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAnyFlags(TargetPipeline, Context.GetPipeline())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                            ,0x599,
                            L"The %s pipelines for this transition are [%s], but it\'s submitted on the [%s] queue."
                           );
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        pFVar30 = local_350;
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (((!bVar15) || (bVar16 == false)) || (pFVar31->EventHandle != (VkEvent_T *)0x0)) {
        local_a8.MemoryBarriers.ArrayMax = 1;
        local_a8.MemoryBarriers.AllocatorInstance.SecondaryData =
             (ForElementType<VkMemoryBarrier2>)0x0;
        local_a8.MemoryBarriers.ArrayNum = 0;
        local_a8.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.BufferBarriers.ArrayNum = 0;
        local_a8.BufferBarriers.ArrayMax = 0;
        local_a8.ImageBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.ImageBarriers.ArrayNum = 0;
        local_a8.ImageBarriers.ArrayMax = 0;
        ConvertTransitionToBarriers<FSync2BarrierArrays>(pFVar30,pFVar31,&local_a8);
        FVar9.Data = local_a8.BufferBarriers.AllocatorInstance.Data;
        if (pFVar31->EventHandle == (VkEvent_T *)0x0) {
          EVar24 = pFVar31->SrcPipelines;
          if (((EVar24 == None) || ((EVar24 & EVar24 - Graphics) != None)) ||
             ((EVar13 = pFVar31->DstPipelines, EVar13 == None ||
              ((EVar13 & EVar13 - Graphics) != None)))) {
            if (((((bVar16 == false) || (EVar24 == None)) || ((EVar24 & EVar24 - Graphics) != None))
                || ((EVar24 = pFVar31->DstPipelines, EVar24 != None &&
                    ((EVar24 & EVar24 - Graphics) == None)))) || (pFVar31->SrcPipelines != EVar12))
            {
              bVar15 = false;
              if (((bVar16 != false) && (EVar24 = pFVar31->DstPipelines, EVar24 != None)) &&
                 (((EVar24 & EVar24 - Graphics) == None &&
                  (((EVar13 = pFVar31->SrcPipelines, EVar13 == None ||
                    ((EVar13 & EVar13 - Graphics) != None)) && (EVar24 != EVar12))))))
              goto LAB_145aecbbf;
              bVar11 = false;
              bVar14 = false;
              if (bVar16 != false) {
LAB_145aecc64:
                if (bVar16 == false) {
LAB_145aecc70:
                  EVar24 = pFVar31->SrcPipelines;
                  if ((EVar24 != None) && ((EVar24 & EVar24 - Graphics) == None)) {
LAB_145aecc8a:
                    bVar5 = false;
                    EVar13 = pFVar31->DstPipelines;
                    if (((EVar13 == None) || ((EVar13 & EVar13 - Graphics) != None)) &&
                       (EVar24 != EVar12)) {
                      bVar11 = true;
                      goto LAB_145aecbc6;
                    }
                  }
                }
                goto LAB_145aecbc4;
              }
              EVar24 = pFVar31->DstPipelines;
              if ((EVar24 == None) || ((EVar24 & EVar24 - Graphics) != None)) goto LAB_145aecc70;
              EVar13 = pFVar31->SrcPipelines;
              if ((EVar13 != None) && ((EVar13 & EVar13 - Graphics) == None)) {
                EVar24 = pFVar31->SrcPipelines;
                goto LAB_145aecc8a;
              }
              if (EVar24 != EVar12) goto LAB_145aecc64;
              bVar5 = true;
              bVar11 = true;
            }
            else {
              bVar15 = true;
LAB_145aecbbf:
              bVar11 = true;
LAB_145aecbc4:
              bVar14 = bVar11;
              bVar5 = false;
              bVar11 = false;
            }
LAB_145aecbc6:
            if ((bVar6) && ((bVar14 || (bVar11)))) {
              if (GVulkanAllowConcurrentBuffer == 0) {
                iVar17 = local_a8.BufferBarriers.ArrayNum;
                lVar27 = (longlong)local_a8.BufferBarriers.ArrayNum;
                local_370.ArrayNum = local_a8.BufferBarriers.ArrayNum;
                if ((local_a8.BufferBarriers.ArrayNum == 0) && (local_370.ArrayMax == 0)) {
                  local_370.ArrayNum = 0;
                  local_370.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x50,8,local_a8.BufferBarriers.ArrayNum,local_370.ArrayMax,
                             &local_370.AllocatorInstance,local_a8.BufferBarriers.ArrayNum,
                             &local_370.ArrayMax);
                  if (iVar17 != 0) {
                    memcpy(local_370.AllocatorInstance.Data,FVar9.Data,lVar27 * 0x50);
                  }
                }
                pFVar30 = local_350;
                PatchCrossPipeTransitions<VkBufferMemoryBarrier2>
                          (&local_370,local_350,pFVar31->SrcPipelines,pFVar31->DstPipelines,bVar16);
              }
              FVar9.Data = local_a8.ImageBarriers.AllocatorInstance.Data;
              if (GVulkanAllowConcurrentImage == 0) {
                iVar17 = local_a8.ImageBarriers.ArrayNum;
                lVar27 = (longlong)local_a8.ImageBarriers.ArrayNum;
                local_360.ArrayNum = local_a8.ImageBarriers.ArrayNum;
                if ((local_a8.ImageBarriers.ArrayNum == 0) && (local_360.ArrayMax == 0)) {
                  local_360.ArrayNum = 0;
                  local_360.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x60,8,local_a8.ImageBarriers.ArrayNum,local_360.ArrayMax,
                             &local_360.AllocatorInstance,local_a8.ImageBarriers.ArrayNum,
                             &local_360.ArrayMax);
                  if (iVar17 != 0) {
                    memcpy(local_360.AllocatorInstance.Data,FVar9.Data,lVar27 * 0x60);
                  }
                }
                pFVar30 = local_350;
                PatchCrossPipeTransitions<VkImageMemoryBarrier2>
                          (&local_360,local_350,pFVar31->SrcPipelines,pFVar31->DstPipelines,bVar16);
              }
            }
            if (bVar15) {
              if (EVar12 == AsyncCompute) {
                lVar27 = *(longlong *)(pFVar30->_padding_ + 0x1b68);
                uVar2 = *(uint *)(lVar27 + 0xa0);
                uVar18 = *(uint *)(lVar27 + 0xa4);
                pFVar28 = local_a8.BufferBarriers.AllocatorInstance.Data + 0x28;
                iVar17 = local_a8.BufferBarriers.ArrayNum;
                uVar22 = (ulonglong)local_a8.BufferBarriers.ArrayNum;
                pFVar32 = local_a8.BufferBarriers.AllocatorInstance.Data + uVar22 * 0x50;
                while( true ) {
                  if ((int)uVar22 != iVar17) {
                    local_376 = 0;
                    `TCheckedPointerIterator<VkBufferMemoryBarrier2,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_376);
                  }
                  if (pFVar28 + -0x28 == pFVar32) break;
                  *(ulonglong *)(pFVar28 + -8) = *(ulonglong *)(pFVar28 + -8) & (ulonglong)uVar2;
                  *(ulonglong *)pFVar28 = *(ulonglong *)pFVar28 & (ulonglong)uVar18;
                  uVar22 = local_a8.BufferBarriers._8_8_ & 0xffffffff;
                  pFVar28 = pFVar28 + 0x50;
                }
                iVar17 = local_a8.ImageBarriers.ArrayNum;
                lVar27 = *(longlong *)(local_350->_padding_ + 0x1b68);
                pFVar32 = local_a8.ImageBarriers.AllocatorInstance.Data +
                          (longlong)local_a8.ImageBarriers.ArrayNum * 0x60;
                uVar2 = *(uint *)(lVar27 + 0xa0);
                uVar18 = *(uint *)(lVar27 + 0xa4);
                pFVar28 = local_a8.ImageBarriers.AllocatorInstance.Data + 0x28;
                while( true ) {
                  if (local_a8.ImageBarriers.ArrayNum != iVar17) {
                    local_375 = 0;
                    `TCheckedPointerIterator<VkImageMemoryBarrier2,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_375);
                  }
                  if (pFVar28 + -0x28 == pFVar32) break;
                  *(ulonglong *)(pFVar28 + -8) = *(ulonglong *)(pFVar28 + -8) & (ulonglong)uVar2;
                  *(ulonglong *)pFVar28 = *(ulonglong *)pFVar28 & (ulonglong)uVar18;
                  pFVar28 = pFVar28 + 0x60;
                }
              }
              FVar9.Data = local_a8.ImageBarriers.AllocatorInstance.Data;
              iVar17 = local_a8.ImageBarriers.ArrayNum;
              if ((local_a8.ImageBarriers.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar8.Data = local_a8.BufferBarriers.AllocatorInstance.Data;
              iStack_180 = iVar17;
              iVar17 = local_a8.BufferBarriers.ArrayNum;
              local_188 = (VkImageMemoryBarrier2 *)FVar9.Data;
              if ((local_a8.BufferBarriers.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar25 = local_a8.MemoryBarriers.ArrayNum;
              iStack_170 = iVar17;
              local_178 = (VkBufferMemoryBarrier2 *)FVar8.Data;
              FVar29 = (ForElementType<VkMemoryBarrier2>)&local_a8;
              if (local_a8.MemoryBarriers.AllocatorInstance.SecondaryData !=
                  (ForElementType<VkMemoryBarrier2>)0x0) {
                FVar29 = local_a8.MemoryBarriers.AllocatorInstance.SecondaryData;
              }
              if ((local_a8.MemoryBarriers.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_e8._12_4_ = uStack_17c;
              local_e8.ArrayNum = iStack_180;
              local_d8._12_4_ = uStack_16c;
              local_d8.ArrayNum = iStack_170;
              local_e8.DataPtr = local_188;
              uStack_160 = iVar25;
              local_c8._12_4_ = uStack_15c;
              local_c8.ArrayNum = iVar25;
              local_d8.DataPtr = local_178;
              local_168 = FVar29;
              local_c8.DataPtr = (VkMemoryBarrier2 *)FVar29;
              `ProcessTransitionSync2'::__l2::<lambda_1>::operator()
                        (local_348,&local_c8,&local_d8,&local_e8,(VkEvent_T *)0x0);
            }
            FVar9.Data = local_360.AllocatorInstance.Data;
            iVar17 = local_360.ArrayNum;
            if ((local_370.ArrayNum != 0) || (local_360.ArrayNum != 0)) {
              if ((local_360.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar8.Data = local_370.AllocatorInstance.Data;
              iVar25 = local_370.ArrayNum;
              if ((local_370.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar20 = local_a8.MemoryBarriers.ArrayNum;
              FVar29 = (ForElementType<VkMemoryBarrier2>)&local_a8;
              if (local_a8.MemoryBarriers.AllocatorInstance.SecondaryData !=
                  (ForElementType<VkMemoryBarrier2>)0x0) {
                FVar29 = local_a8.MemoryBarriers.AllocatorInstance.SecondaryData;
              }
              if ((local_a8.MemoryBarriers.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              p_Var7 = VulkanDynamicAPI::vkCmdPipelineBarrier2KHR;
              if (((iVar20 == 0) && (iVar25 == 0)) && (iVar17 == 0)) {
LAB_145aed24e:
              }
              else {
                local_1d8.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
                local_1d8.pNext = (void *)0x0;
                local_1d8.dependencyFlags = 0;
                local_1d8.memoryBarrierCount = iVar20;
                local_1d8.bufferMemoryBarrierCount = iVar25;
                local_1d8.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)FVar8.Data;
                local_1d8.imageMemoryBarrierCount = iVar17;
                local_1d8.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)FVar9.Data;
                local_1d8.pMemoryBarriers = (VkMemoryBarrier2 *)FVar29;
                if ((GVulkanMaxBarriersPerBatch < 1) ||
                   (iVar20 + iVar25 + iVar17 < GVulkanMaxBarriersPerBatch)) {
                  pFVar21 = FVulkanContextCommon::GetCommandBuffer
                                      ((FVulkanContextCommon *)local_340);
                  (*p_Var7)(pFVar21->CommandBufferHandle,&local_1d8);
                  goto LAB_145aed24e;
                }
                local_2a8._4_4_ = local_1d8._4_4_;
                local_2a8.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
                iVar25 = 0;
                iVar20 = 0;
                local_2a8.pNext = (void *)0x0;
                local_2a8.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)FVar8.Data;
                local_2a8.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)FVar9.Data;
                local_2a8._32_8_ = (ulonglong)(uint)local_1d8._36_4_ << 0x20;
                local_2a8._48_8_ = (ulonglong)(uint)local_1d8._52_4_ << 0x20;
                local_2a8.dependencyFlags = 0;
                local_2a8.memoryBarrierCount = 0;
                local_2a8.pMemoryBarriers = (VkMemoryBarrier2 *)FVar29;
                pFVar21 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)local_340);
                uVar2 = local_1d8.memoryBarrierCount;
                pVVar3 = pFVar21->CommandBufferHandle;
                iVar17 = iVar25;
                if (0 < (int)local_1d8.memoryBarrierCount) {
                  do {
                    uVar18 = uVar2 - iVar17;
                    local_2a8.memoryBarrierCount = GVulkanMaxBarriersPerBatch;
                    if ((int)uVar18 < GVulkanMaxBarriersPerBatch) {
                      local_2a8.memoryBarrierCount = uVar18;
                    }
                    (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_2a8);
                    local_2a8.pMemoryBarriers =
                         (VkMemoryBarrier2 *)
                         ((longlong)local_2a8.pMemoryBarriers +
                         (ulonglong)local_2a8.memoryBarrierCount * 0x30);
                    iVar17 = iVar17 + GVulkanMaxBarriersPerBatch;
                  } while (iVar17 < (int)uVar2);
                }
                uVar2 = local_1d8.bufferMemoryBarrierCount;
                local_2a8.pMemoryBarriers = (VkMemoryBarrier2 *)0x0;
                local_2a8.memoryBarrierCount = 0;
                if (0 < (int)local_1d8.bufferMemoryBarrierCount) {
                  do {
                    iVar19 = uVar2 - iVar25;
                    iVar17 = GVulkanMaxBarriersPerBatch;
                    if (iVar19 < GVulkanMaxBarriersPerBatch) {
                      iVar17 = iVar19;
                    }
                    local_2a8.bufferMemoryBarrierCount = iVar17;
                    (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_2a8);
                    local_2a8.pBufferMemoryBarriers =
                         local_2a8.pBufferMemoryBarriers + (local_2a8._32_8_ & 0xffffffff);
                    iVar25 = iVar25 + GVulkanMaxBarriersPerBatch;
                  } while (iVar25 < (int)uVar2);
                }
                uVar2 = local_1d8.imageMemoryBarrierCount;
                local_2a8.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)0x0;
                local_2a8._32_8_ = local_2a8._32_8_ & 0xffffffff00000000;
                if (0 < (int)local_1d8.imageMemoryBarrierCount) {
                  do {
                    iVar25 = uVar2 - iVar20;
                    iVar17 = GVulkanMaxBarriersPerBatch;
                    if (iVar25 < GVulkanMaxBarriersPerBatch) {
                      iVar17 = iVar25;
                    }
                    local_2a8.imageMemoryBarrierCount = iVar17;
                    (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_2a8);
                    local_2a8.pImageMemoryBarriers =
                         local_2a8.pImageMemoryBarriers + (local_2a8._48_8_ & 0xffffffff);
                    iVar20 = iVar20 + GVulkanMaxBarriersPerBatch;
                  } while (iVar20 < (int)uVar2);
                }
                local_2a8.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)0x0;
                local_2a8._48_8_ = local_2a8._48_8_ & 0xffffffff00000000;
              }
              iVar17 = local_370.ArrayMax;
              local_370._8_8_ = (ulonglong)(uint)local_370.ArrayMax << 0x20;
              if ((iVar17 < 0) && (iVar17 != 0)) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x50,8,0,&local_370.AllocatorInstance,0,&local_370.ArrayMax);
              }
              uVar10 = local_360._8_8_;
              iVar17 = local_360.ArrayMax;
              local_360._8_8_ = (ulonglong)(uint)local_360.ArrayMax << 0x20;
              if (((longlong)uVar10 < 0) && (iVar17 != 0)) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,8,0,&local_360.AllocatorInstance,0,&local_360.ArrayMax);
              }
            }
            pFVar30 = local_350;
            if (bVar5) {
              if (EVar12 == AsyncCompute) {
                lVar27 = *(longlong *)(local_350->_padding_ + 0x1b68);
                uVar2 = *(uint *)(lVar27 + 0xa0);
                uVar18 = *(uint *)(lVar27 + 0xa4);
                pFVar28 = local_a8.BufferBarriers.AllocatorInstance.Data + 0x18;
                iVar17 = local_a8.BufferBarriers.ArrayNum;
                uVar22 = (ulonglong)local_a8.BufferBarriers.ArrayNum;
                pFVar32 = local_a8.BufferBarriers.AllocatorInstance.Data + uVar22 * 0x50;
                while( true ) {
                  if ((int)uVar22 != iVar17) {
                    local_374 = 0;
                    `TCheckedPointerIterator<VkBufferMemoryBarrier2,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_374);
                  }
                  if (pFVar28 + -0x18 == pFVar32) break;
                  *(ulonglong *)(pFVar28 + -8) = *(ulonglong *)(pFVar28 + -8) & (ulonglong)uVar2;
                  *(ulonglong *)pFVar28 = *(ulonglong *)pFVar28 & (ulonglong)uVar18;
                  uVar22 = local_a8.BufferBarriers._8_8_ & 0xffffffff;
                  pFVar28 = pFVar28 + 0x50;
                }
                iVar17 = local_a8.ImageBarriers.ArrayNum;
                lVar27 = *(longlong *)(pFVar30->_padding_ + 0x1b68);
                pFVar32 = local_a8.ImageBarriers.AllocatorInstance.Data +
                          (longlong)local_a8.ImageBarriers.ArrayNum * 0x60;
                uVar2 = *(uint *)(lVar27 + 0xa0);
                uVar18 = *(uint *)(lVar27 + 0xa4);
                pFVar28 = local_a8.ImageBarriers.AllocatorInstance.Data + 0x18;
                while( true ) {
                  if (local_a8.ImageBarriers.ArrayNum != iVar17) {
                    local_373 = 0;
                    `TCheckedPointerIterator<VkImageMemoryBarrier2,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_373);
                  }
                  if (pFVar28 + -0x18 == pFVar32) break;
                  *(ulonglong *)(pFVar28 + -8) = *(ulonglong *)(pFVar28 + -8) & (ulonglong)uVar2;
                  *(ulonglong *)pFVar28 = *(ulonglong *)pFVar28 & (ulonglong)uVar18;
                  pFVar28 = pFVar28 + 0x60;
                }
              }
              FVar9.Data = local_a8.ImageBarriers.AllocatorInstance.Data;
              iVar17 = local_a8.ImageBarriers.ArrayNum;
              if ((local_a8.ImageBarriers.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar8.Data = local_a8.BufferBarriers.AllocatorInstance.Data;
              iStack_150 = iVar17;
              iVar17 = local_a8.BufferBarriers.ArrayNum;
              local_158 = (VkImageMemoryBarrier2 *)FVar9.Data;
              if ((local_a8.BufferBarriers.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar25 = local_a8.MemoryBarriers.ArrayNum;
              iStack_140 = iVar17;
              local_148 = (VkBufferMemoryBarrier2 *)FVar8.Data;
              FVar29 = (ForElementType<VkMemoryBarrier2>)&local_a8;
              if (local_a8.MemoryBarriers.AllocatorInstance.SecondaryData !=
                  (ForElementType<VkMemoryBarrier2>)0x0) {
                FVar29 = local_a8.MemoryBarriers.AllocatorInstance.SecondaryData;
              }
              if ((local_a8.MemoryBarriers.ArrayNum < 0) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar16)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_b8._12_4_ = uStack_14c;
              local_b8.ArrayNum = iStack_150;
              local_128._12_4_ = uStack_13c;
              local_128.ArrayNum = iStack_140;
              local_b8.DataPtr = local_158;
              uStack_130 = iVar25;
              local_118._12_4_ = uStack_12c;
              local_118.ArrayNum = iVar25;
              local_128.DataPtr = local_148;
              local_138 = FVar29;
              local_118.DataPtr = (VkMemoryBarrier2 *)FVar29;
              `ProcessTransitionSync2'::__l2::<lambda_1>::operator()
                        (local_348,&local_118,&local_128,&local_b8,(VkEvent_T *)0x0);
            }
          }
          else {
            if ((bVar6) && (EVar24 != EVar13)) {
              if (GVulkanAllowConcurrentBuffer == 0) {
                PatchCrossPipeTransitions<VkBufferMemoryBarrier2>
                          (&local_a8.BufferBarriers,pFVar30,EVar24,EVar13,bVar16);
              }
              if (GVulkanAllowConcurrentImage == 0) {
                PatchCrossPipeTransitions<VkImageMemoryBarrier2>
                          (&local_a8.ImageBarriers,pFVar30,pFVar31->SrcPipelines,
                           pFVar31->DstPipelines,bVar16);
              }
            }
            FVar9.Data = local_a8.ImageBarriers.AllocatorInstance.Data;
            iVar17 = local_a8.ImageBarriers.ArrayNum;
            pVVar34 = pFVar31->EventHandle;
            if ((local_a8.ImageBarriers.ArrayNum < 0) &&
               (bVar16 = FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar16)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar8.Data = local_a8.BufferBarriers.AllocatorInstance.Data;
            iVar25 = local_a8.BufferBarriers.ArrayNum;
            if ((local_a8.BufferBarriers.ArrayNum < 0) &&
               (bVar16 = FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar16)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar20 = local_a8.MemoryBarriers.ArrayNum;
            FVar29 = (ForElementType<VkMemoryBarrier2>)&local_a8;
            if (local_a8.MemoryBarriers.AllocatorInstance.SecondaryData !=
                (ForElementType<VkMemoryBarrier2>)0x0) {
              FVar29 = local_a8.MemoryBarriers.AllocatorInstance.SecondaryData;
            }
            if ((local_a8.MemoryBarriers.ArrayNum < 0) &&
               (bVar16 = FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar16)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            p_Var7 = VulkanDynamicAPI::vkCmdPipelineBarrier2KHR;
            if (((iVar20 != 0) || (iVar25 != 0)) || (iVar17 != 0)) {
              local_218.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
              local_218.pNext = (void *)0x0;
              local_218.dependencyFlags = 0;
              local_218.memoryBarrierCount = iVar20;
              local_218.bufferMemoryBarrierCount = iVar25;
              local_218.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)FVar8.Data;
              local_218.imageMemoryBarrierCount = iVar17;
              local_218.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)FVar9.Data;
              local_218.pMemoryBarriers = (VkMemoryBarrier2 *)FVar29;
              if (pVVar34 == (VkEvent_T *)0x0) {
                if ((GVulkanMaxBarriersPerBatch < 1) ||
                   (iVar17 + iVar20 + iVar25 < GVulkanMaxBarriersPerBatch)) {
                  pFVar21 = FVulkanContextCommon::GetCommandBuffer
                                      ((FVulkanContextCommon *)local_340);
                  (*p_Var7)(pFVar21->CommandBufferHandle,&local_218);
                }
                else {
                  local_2e8._4_4_ = local_218._4_4_;
                  local_2e8.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
                  iVar25 = 0;
                  local_2e8.pNext = (void *)0x0;
                  local_2e8.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)FVar8.Data;
                  local_2e8.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)FVar9.Data;
                  local_2e8._32_8_ = (ulonglong)(uint)local_218._36_4_ << 0x20;
                  local_2e8._48_8_ = (ulonglong)(uint)local_218._52_4_ << 0x20;
                  local_2e8.dependencyFlags = 0;
                  local_2e8.memoryBarrierCount = 0;
                  local_2e8.pMemoryBarriers = (VkMemoryBarrier2 *)FVar29;
                  pFVar21 = FVulkanContextCommon::GetCommandBuffer
                                      ((FVulkanContextCommon *)local_340);
                  uVar2 = local_218.memoryBarrierCount;
                  pVVar3 = pFVar21->CommandBufferHandle;
                  iVar17 = iVar25;
                  if (0 < (int)local_218.memoryBarrierCount) {
                    do {
                      uVar18 = uVar2 - iVar17;
                      local_2e8.memoryBarrierCount = GVulkanMaxBarriersPerBatch;
                      if ((int)uVar18 < GVulkanMaxBarriersPerBatch) {
                        local_2e8.memoryBarrierCount = uVar18;
                      }
                      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_2e8);
                      iVar17 = iVar17 + GVulkanMaxBarriersPerBatch;
                      local_2e8.pMemoryBarriers =
                           (VkMemoryBarrier2 *)
                           ((longlong)local_2e8.pMemoryBarriers +
                           (ulonglong)local_2e8.memoryBarrierCount * 0x30);
                    } while (iVar17 < (int)uVar2);
                  }
                  uVar2 = local_218.bufferMemoryBarrierCount;
                  local_2e8.pMemoryBarriers = (VkMemoryBarrier2 *)0x0;
                  local_2e8.memoryBarrierCount = 0;
                  iVar17 = iVar25;
                  if (0 < (int)local_218.bufferMemoryBarrierCount) {
                    do {
                      iVar19 = uVar2 - iVar17;
                      iVar20 = GVulkanMaxBarriersPerBatch;
                      if (iVar19 < GVulkanMaxBarriersPerBatch) {
                        iVar20 = iVar19;
                      }
                      local_2e8.bufferMemoryBarrierCount = iVar20;
                      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_2e8);
                      iVar17 = iVar17 + GVulkanMaxBarriersPerBatch;
                      local_2e8.pBufferMemoryBarriers =
                           local_2e8.pBufferMemoryBarriers + (local_2e8._32_8_ & 0xffffffff);
                    } while (iVar17 < (int)uVar2);
                  }
                  uVar2 = local_218.imageMemoryBarrierCount;
                  local_2e8.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)0x0;
                  local_2e8._32_8_ = local_2e8._32_8_ & 0xffffffff00000000;
                  if (0 < (int)local_218.imageMemoryBarrierCount) {
                    do {
                      iVar20 = uVar2 - iVar25;
                      iVar17 = GVulkanMaxBarriersPerBatch;
                      if (iVar20 < GVulkanMaxBarriersPerBatch) {
                        iVar17 = iVar20;
                      }
                      local_2e8.imageMemoryBarrierCount = iVar17;
                      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_2e8);
                      iVar25 = iVar25 + GVulkanMaxBarriersPerBatch;
                      local_2e8.pImageMemoryBarriers =
                           local_2e8.pImageMemoryBarriers + (local_2e8._48_8_ & 0xffffffff);
                    } while (iVar25 < (int)uVar2);
                  }
                  local_2e8.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)0x0;
                  local_2e8._48_8_ = local_2e8._48_8_ & 0xffffffff00000000;
                }
              }
              else {
                if (local_348[0] != '\0') {
                  pFVar21 = FVulkanContextCommon::GetCommandBuffer
                                      ((FVulkanContextCommon *)local_340);
                  pVVar33 = &local_218;
                  goto LAB_145aec506;
                }
                pFVar21 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)local_340);
                local_330 = pVVar34;
                (*VulkanDynamicAPI::vkCmdWaitEvents2KHR)
                          (pFVar21->CommandBufferHandle,1,&local_330,&local_218);
                pTVar26 = &pFVar21->EndedBarrierEvents;
                pFVar28 = (pTVar26->AllocatorInstance).Data;
                if (((pFVar28 <= (FScriptContainerElement *)&local_330) &&
                    ((FScriptContainerElement *)&local_330 <
                     pFVar28 + (longlong)(pFVar21->EndedBarrierEvents).ArrayMax * 8)) &&
                   (bVar16 = FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar17 = (pFVar21->EndedBarrierEvents).ArrayNum;
                piVar1 = &(pFVar21->EndedBarrierEvents).ArrayMax;
                if (iVar17 == *piVar1) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar26->AllocatorInstance,piVar1);
                }
                (pFVar21->EndedBarrierEvents).ArrayNum = iVar17 + 1;
                *(VkEvent_T **)((pTVar26->AllocatorInstance).Data + (longlong)iVar17 * 8) =
                     local_330;
              }
            }
          }
        }
        else {
          if ((!bVar15) &&
             (bVar15 = FDebug::CheckVerifyFailedImpl2
                                 ("bIsSingleQueue",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBarriers.cpp"
                                  ,0x5a7,L"Split barriers must remain on same queue!"), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar9.Data = local_a8.ImageBarriers.AllocatorInstance.Data;
          iVar17 = local_a8.ImageBarriers.ArrayNum;
          if (((local_a8.MemoryBarriers.ArrayNum == 0) && (local_a8.BufferBarriers.ArrayNum == 0))
             && (local_a8.ImageBarriers.ArrayNum == 0)) {
            if (bVar16 == false) {
              FVulkanDevice::ReleaseBarrierEvent
                        ((FVulkanDevice *)pFVar30->_padding_,pFVar31->EventHandle);
            }
          }
          else {
            pVVar34 = pFVar31->EventHandle;
            if ((local_a8.ImageBarriers.ArrayNum < 0) &&
               (bVar16 = FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar16)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar8.Data = local_a8.BufferBarriers.AllocatorInstance.Data;
            iVar25 = local_a8.BufferBarriers.ArrayNum;
            if ((local_a8.BufferBarriers.ArrayNum < 0) &&
               (bVar16 = FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar16)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar20 = local_a8.MemoryBarriers.ArrayNum;
            FVar29 = (ForElementType<VkMemoryBarrier2>)&local_a8;
            if (local_a8.MemoryBarriers.AllocatorInstance.SecondaryData !=
                (ForElementType<VkMemoryBarrier2>)0x0) {
              FVar29 = local_a8.MemoryBarriers.AllocatorInstance.SecondaryData;
            }
            if ((local_a8.MemoryBarriers.ArrayNum < 0) &&
               (bVar16 = FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar16)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            p_Var7 = VulkanDynamicAPI::vkCmdPipelineBarrier2KHR;
            if (((iVar20 != 0) || (iVar25 != 0)) || (iVar17 != 0)) {
              local_258.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
              local_258.pNext = (void *)0x0;
              local_258.dependencyFlags = 0;
              local_258.memoryBarrierCount = iVar20;
              local_258.bufferMemoryBarrierCount = iVar25;
              local_258.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)FVar8.Data;
              local_258.imageMemoryBarrierCount = iVar17;
              local_258.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)FVar9.Data;
              local_258.pMemoryBarriers = (VkMemoryBarrier2 *)FVar29;
              if (pVVar34 == (VkEvent_T *)0x0) {
                if ((GVulkanMaxBarriersPerBatch < 1) ||
                   (iVar17 + iVar20 + iVar25 < GVulkanMaxBarriersPerBatch)) {
                  pFVar21 = FVulkanContextCommon::GetCommandBuffer
                                      ((FVulkanContextCommon *)local_340);
                  (*p_Var7)(pFVar21->CommandBufferHandle,&local_258);
                }
                else {
                  local_328._4_4_ = local_258._4_4_;
                  local_328.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
                  iVar25 = 0;
                  local_328.pNext = (void *)0x0;
                  local_328.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)FVar8.Data;
                  local_328.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)FVar9.Data;
                  local_328._32_8_ = (ulonglong)(uint)local_258._36_4_ << 0x20;
                  local_328._48_8_ = (ulonglong)(uint)local_258._52_4_ << 0x20;
                  local_328.dependencyFlags = 0;
                  local_328.memoryBarrierCount = 0;
                  local_328.pMemoryBarriers = (VkMemoryBarrier2 *)FVar29;
                  pFVar21 = FVulkanContextCommon::GetCommandBuffer
                                      ((FVulkanContextCommon *)local_340);
                  uVar2 = local_258.memoryBarrierCount;
                  pVVar3 = pFVar21->CommandBufferHandle;
                  iVar17 = iVar25;
                  if (0 < (int)local_258.memoryBarrierCount) {
                    do {
                      uVar18 = uVar2 - iVar17;
                      local_328.memoryBarrierCount = GVulkanMaxBarriersPerBatch;
                      if ((int)uVar18 < GVulkanMaxBarriersPerBatch) {
                        local_328.memoryBarrierCount = uVar18;
                      }
                      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_328);
                      local_328.pMemoryBarriers =
                           (VkMemoryBarrier2 *)
                           ((longlong)local_328.pMemoryBarriers +
                           (ulonglong)local_328.memoryBarrierCount * 0x30);
                      iVar17 = iVar17 + GVulkanMaxBarriersPerBatch;
                    } while (iVar17 < (int)uVar2);
                  }
                  uVar2 = local_258.bufferMemoryBarrierCount;
                  local_328.pMemoryBarriers = (VkMemoryBarrier2 *)0x0;
                  local_328.memoryBarrierCount = 0;
                  iVar17 = iVar25;
                  if (0 < (int)local_258.bufferMemoryBarrierCount) {
                    do {
                      iVar19 = uVar2 - iVar17;
                      iVar20 = GVulkanMaxBarriersPerBatch;
                      if (iVar19 < GVulkanMaxBarriersPerBatch) {
                        iVar20 = iVar19;
                      }
                      local_328.bufferMemoryBarrierCount = iVar20;
                      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_328);
                      local_328.pBufferMemoryBarriers =
                           local_328.pBufferMemoryBarriers + (local_328._32_8_ & 0xffffffff);
                      iVar17 = iVar17 + GVulkanMaxBarriersPerBatch;
                    } while (iVar17 < (int)uVar2);
                  }
                  uVar2 = local_258.imageMemoryBarrierCount;
                  local_328.pBufferMemoryBarriers = (VkBufferMemoryBarrier2 *)0x0;
                  local_328._32_8_ = local_328._32_8_ & 0xffffffff00000000;
                  if (0 < (int)local_258.imageMemoryBarrierCount) {
                    do {
                      iVar20 = uVar2 - iVar25;
                      iVar17 = GVulkanMaxBarriersPerBatch;
                      if (iVar20 < GVulkanMaxBarriersPerBatch) {
                        iVar17 = iVar20;
                      }
                      local_328.imageMemoryBarrierCount = iVar17;
                      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pVVar3,&local_328);
                      local_328.pImageMemoryBarriers =
                           local_328.pImageMemoryBarriers + (local_328._48_8_ & 0xffffffff);
                      iVar25 = iVar25 + GVulkanMaxBarriersPerBatch;
                    } while (iVar25 < (int)uVar2);
                  }
                  local_328.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)0x0;
                  local_328._48_8_ = local_328._48_8_ & 0xffffffff00000000;
                }
              }
              else if (local_348[0] == '\0') {
                pFVar21 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)local_340);
                local_338 = pVVar34;
                (*VulkanDynamicAPI::vkCmdWaitEvents2KHR)
                          (pFVar21->CommandBufferHandle,1,&local_338,&local_258);
                pTVar26 = &pFVar21->EndedBarrierEvents;
                pFVar28 = (pTVar26->AllocatorInstance).Data;
                if (((pFVar28 <= (FScriptContainerElement *)&local_338) &&
                    ((FScriptContainerElement *)&local_338 <
                     pFVar28 + (longlong)(pFVar21->EndedBarrierEvents).ArrayMax * 8)) &&
                   (bVar16 = FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar17 = (pFVar21->EndedBarrierEvents).ArrayNum;
                piVar1 = &(pFVar21->EndedBarrierEvents).ArrayMax;
                if (iVar17 == *piVar1) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar26->AllocatorInstance,piVar1);
                }
                (pFVar21->EndedBarrierEvents).ArrayNum = iVar17 + 1;
                *(VkEvent_T **)((pTVar26->AllocatorInstance).Data + (longlong)iVar17 * 8) =
                     local_338;
              }
              else {
                pFVar21 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)local_340);
                pVVar33 = &local_258;
LAB_145aec506:
                (*VulkanDynamicAPI::vkCmdSetEvent2KHR)(pFVar21->CommandBufferHandle,pVVar34,pVVar33)
                ;
              }
            }
          }
        }
        if (local_a8.ImageBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.ImageBarriers.AllocatorInstance.Data);
        }
        if (local_a8.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.BufferBarriers.AllocatorInstance.Data);
        }
        if (local_a8.MemoryBarriers.AllocatorInstance.SecondaryData !=
            (ForElementType<VkMemoryBarrier2>)0x0) {
          FMemory::Free((void *)local_a8.MemoryBarriers.AllocatorInstance.SecondaryData);
        }
      }
      local_268 = local_268 + 1;
      plVar23 = &local_350->_padding_;
    } while (local_268 != local_190);
  }
  if (local_360.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.AllocatorInstance.Data);
  }
  if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.AllocatorInstance.Data);
  }
  return;
}

// RenderTargetLoadActionToVulkan @ 145af31c0

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */

VkAttachmentLoadOp __cdecl RenderTargetLoadActionToVulkan(ERenderTargetLoadAction param_1)

{
  code *pcVar1;
  bool bVar2;
  VkAttachmentLoadOp VVar3;
  
  if (param_1 == ENoAction) {
    return VK_ATTACHMENT_LOAD_OP_DONT_CARE;
  }
  if (param_1 == ELoad) {
    return VK_ATTACHMENT_LOAD_OP_LOAD;
  }
  if (param_1 == EClear) {
    return VK_ATTACHMENT_LOAD_OP_CLEAR;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("OutLoadAction != VK_ATTACHMENT_LOAD_OP_MAX_ENUM",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                     ,0x169,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    VVar3 = (*pcVar1)();
    return VVar3;
  }
  return VK_ATTACHMENT_LOAD_OP_MAX_ENUM;
}

// RenderTargetStoreActionToVulkan @ 145af3230

/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

VkAttachmentStoreOp __cdecl RenderTargetStoreActionToVulkan(ERenderTargetStoreAction param_1)

{
  code *pcVar1;
  bool bVar2;
  VkAttachmentStoreOp VVar3;
  
  if (param_1 != ENoAction) {
    if (param_1 == EStore) {
      return VK_ATTACHMENT_STORE_OP_STORE;
    }
    if (param_1 != EMultisampleResolve) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                         ,0x17f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        VVar3 = (*pcVar1)();
        return VVar3;
      }
      return VK_ATTACHMENT_STORE_OP_MAX_ENUM;
    }
  }
  return VK_ATTACHMENT_STORE_OP_DONT_CARE;
}

// ValidateShadingRateDataType @ 145af6af0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl ValidateShadingRateDataType(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_NotSupported) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                       ,0x294,
                       L"A texture was marked as a shading rate source but attachment VRS is not supported on this device. Ensure GRHISupportsAttachmentVariableRateShading and GRHIAttachmentVariableRateShadingEnabled are true before specifying a shading rate attachment."
                      );
    if (!bVar2) {
      return false;
    }
  }
  else {
    if ((GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) ||
       (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Fractional)) {
      return true;
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                       ,0x298,L"Unrecognized shading rate image data type. Specified type was %d");
    if (!bVar2) {
      return false;
    }
  }
  pcVar1 = (code *)swi(3);
  bVar2 = (bool)(*pcVar1)();
  return bVar2;
}

// VulkanSetImageLayout @ 145af6d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __cdecl
VulkanSetImageLayout
          (FVulkanCommandBuffer *param_1,VkImage_T *param_2,VkImageLayout param_3,
          VkImageLayout param_4,VkImageSubresourceRange *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ForElementType<VkImageMemoryBarrier2> FVar6;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  VkDependencyInfo local_198;
  FVulkanPipelineBarrier local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_158.MemoryBarriers.ArrayMax = 1;
  local_158.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_158.MemoryBarriers.ArrayNum = 0;
  local_158.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_158.ImageBarriers.ArrayNum = 0;
  local_158.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.BufferBarriers.ArrayNum = 0;
  local_158.BufferBarriers.ArrayMax = 0;
  local_158.ImageBarriers.ArrayMax = 2;
  uVar2 = GetVkStageFlagsForLayout(param_3);
  uVar3 = GetVkStageFlagsForLayout(param_4);
  uVar4 = GetVkAccessMaskForLayout(param_3);
  local_1a8 = GetVkAccessMaskForLayout(param_4);
  if (local_158.ImageBarriers.ArrayNum == local_158.ImageBarriers.ArrayMax) {
    local_158.ImageBarriers.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkImageMemoryBarrier2>_>
                   (0x860,&local_158.ImageBarriers.AllocatorInstance,
                    &local_158.ImageBarriers.ArrayMax);
  }
  FVar6 = (ForElementType<VkImageMemoryBarrier2>)&local_158.ImageBarriers;
  if (local_158.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FVar6 = local_158.ImageBarriers.AllocatorInstance.SecondaryData;
  }
  lVar5 = (longlong)local_158.ImageBarriers.ArrayNum * 0x60;
  local_158.ImageBarriers.ArrayNum = local_158.ImageBarriers.ArrayNum + 1;
  *(ulonglong *)(lVar5 + 0x28 + (longlong)FVar6) = (ulonglong)local_1a8;
  *(undefined4 *)(lVar5 + (longlong)FVar6) = 0x3b9f9492;
  *(undefined8 *)(lVar5 + 8 + (longlong)FVar6) = 0;
  *(ulonglong *)(lVar5 + 0x10 + (longlong)FVar6) = (ulonglong)uVar2;
  *(ulonglong *)(lVar5 + 0x20 + (longlong)FVar6) = (ulonglong)uVar3;
  *(ulonglong *)(lVar5 + 0x18 + (longlong)FVar6) = (ulonglong)uVar4;
  *(VkImageLayout *)(lVar5 + 0x30 + (longlong)FVar6) = param_3;
  *(VkImageLayout *)(lVar5 + 0x34 + (longlong)FVar6) = param_4;
  *(undefined8 *)(lVar5 + 0x38 + (longlong)FVar6) = 0xffffffffffffffff;
  *(VkImage_T **)(lVar5 + 0x40 + (longlong)FVar6) = param_2;
  uVar2 = param_5->baseMipLevel;
  uVar3 = param_5->levelCount;
  uVar4 = param_5->baseArrayLayer;
  puVar1 = (uint *)(lVar5 + 0x48 + (longlong)FVar6);
  *puVar1 = param_5->aspectMask;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *(uint *)(lVar5 + 0x58 + (longlong)FVar6) = param_5->layerCount;
  if (((local_158.MemoryBarriers.ArrayNum != 0) || (local_158.BufferBarriers.ArrayNum != 0)) ||
     (local_158.ImageBarriers.ArrayNum != 0)) {
    if (((param_1->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
        0x2020100000000) {
      local_198.memoryBarrierCount = local_158.MemoryBarriers.ArrayNum;
      local_198.pMemoryBarriers = (VkMemoryBarrier2 *)&local_158;
      if (local_158.MemoryBarriers.AllocatorInstance.SecondaryData !=
          (ForElementType<VkMemoryBarrier2>)0x0) {
        local_198.pMemoryBarriers =
             (VkMemoryBarrier2 *)local_158.MemoryBarriers.AllocatorInstance.SecondaryData;
      }
      local_198.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
      local_198.pBufferMemoryBarriers =
           (VkBufferMemoryBarrier2 *)local_158.BufferBarriers.AllocatorInstance.Data;
      local_198.pNext = (void *)0x0;
      local_198.dependencyFlags = 0;
      local_198.pImageMemoryBarriers = (VkImageMemoryBarrier2 *)&local_158.ImageBarriers;
      if (local_158.ImageBarriers.AllocatorInstance.SecondaryData !=
          (ForElementType<VkImageMemoryBarrier2>)0x0) {
        local_198.pImageMemoryBarriers =
             (VkImageMemoryBarrier2 *)local_158.ImageBarriers.AllocatorInstance.SecondaryData;
      }
      local_198.bufferMemoryBarrierCount = local_158.BufferBarriers.ArrayNum;
      local_198.imageMemoryBarrierCount = local_158.ImageBarriers.ArrayNum;
      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(param_1->CommandBufferHandle,&local_198);
    }
    else {
      FVulkanPipelineBarrier::Execute(&local_158,param_1->CommandBufferHandle);
    }
  }
  if (local_158.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_158.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_158.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_158.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_158.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// string_VkDescriptorType @ 145af70b0

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

char * __cdecl string_VkDescriptorType(VkDescriptorType param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x3b9ce511) {
    if (param_1 != VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK) {
      switch(param_1) {
      case VK_DESCRIPTOR_TYPE_SAMPLER:
        return "VK_DESCRIPTOR_TYPE_SAMPLER";
      case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER:
        return "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER";
      case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
        return "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE";
      case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
        return "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE";
      case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER";
      case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
        return "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER";
      case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER";
      case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
        return "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER";
      case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC";
      case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC:
        return "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC";
      case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT:
        return "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT";
      default:
        return "Unhandled VkDescriptorType";
      }
    }
    return "VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK";
  }
  if (0x3ba180c0 < (int)param_1) {
    if (param_1 == VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM) {
      return "VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM";
    }
    if (param_1 == VK_DESCRIPTOR_TYPE_TENSOR_ARM) {
      return "VK_DESCRIPTOR_TYPE_TENSOR_ARM";
    }
    pcVar1 = "VK_DESCRIPTOR_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_NV";
    if (param_1 != VK_DESCRIPTOR_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_NV) {
      pcVar1 = "Unhandled VkDescriptorType";
    }
    return pcVar1;
  }
  if (param_1 == VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM) {
    return "VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM";
  }
  if (param_1 == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) {
    return "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR";
  }
  if (param_1 == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV) {
    return "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV";
  }
  pcVar1 = "Unhandled VkDescriptorType";
  if (param_1 == VK_DESCRIPTOR_TYPE_MUTABLE_EXT) {
    pcVar1 = "VK_DESCRIPTOR_TYPE_MUTABLE_EXT";
  }
  return pcVar1;
}

// string_VkImageLayout @ 145af7200

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

char * __cdecl string_VkImageLayout(VkImageLayout param_1)

{
  char *pcVar1;
  
  if ((int)param_1 < 0x3b9acdeb) {
    if (param_1 == VK_IMAGE_LAYOUT_PRESENT_SRC_KHR) {
      return "VK_IMAGE_LAYOUT_PRESENT_SRC_KHR";
    }
    switch(param_1) {
    case VK_IMAGE_LAYOUT_UNDEFINED:
      return "VK_IMAGE_LAYOUT_UNDEFINED";
    case VK_IMAGE_LAYOUT_GENERAL:
      return "VK_IMAGE_LAYOUT_GENERAL";
    case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
      return "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
      return "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL";
    case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
      return "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
      return "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL";
    case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
      return "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL";
    case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
      return "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL";
    case VK_IMAGE_LAYOUT_PREINITIALIZED:
      return "VK_IMAGE_LAYOUT_PREINITIALIZED";
    }
  }
  else if ((int)param_1 < 0x3b9e776b) {
    if (param_1 == VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL) {
      return "VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL";
    }
    if ((int)param_1 < 0x3b9c930a) {
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL) {
        return "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL";
      }
      if (param_1 == VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR) {
        return "VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR) {
        return "VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR) {
        return "VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR) {
        return "VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL) {
        return "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL";
      }
    }
    else {
      if (param_1 == VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR) {
        return "VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR";
      }
      if (param_1 == VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT) {
        return "VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT";
      }
      if (param_1 == VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ) {
        return "VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ";
      }
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL) {
        return "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL";
      }
      if (param_1 == VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL) {
        return "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL";
      }
    }
  }
  else {
    if (0x3b9f9491 < (int)param_1) {
      if (param_1 == VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT) {
        return "VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT";
      }
      if (param_1 == VK_IMAGE_LAYOUT_TENSOR_ALIASING_ARM) {
        return "VK_IMAGE_LAYOUT_TENSOR_ALIASING_ARM";
      }
      if (param_1 == VK_IMAGE_LAYOUT_VIDEO_ENCODE_QUANTIZATION_MAP_KHR) {
        return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_QUANTIZATION_MAP_KHR";
      }
      pcVar1 = "VK_IMAGE_LAYOUT_ZERO_INITIALIZED_EXT";
      if (param_1 != VK_IMAGE_LAYOUT_ZERO_INITIALIZED_EXT) {
        pcVar1 = "Unhandled VkImageLayout";
      }
      return pcVar1;
    }
    if (param_1 == VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL) {
      return "VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL";
    }
    if (param_1 == VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL) {
      return "VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL";
    }
    if (param_1 == VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR) {
      return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR";
    }
    if (param_1 == VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR) {
      return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR";
    }
    if (param_1 == VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR) {
      return "VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR";
    }
    if (param_1 == VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL) {
      return "VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL";
    }
  }
  return "Unhandled VkImageLayout";
}

// Pool'' @ 1503c90a0

void __cdecl `dynamic_atexit_destructor_for_'FVulkanUploadContext::Pool__(void)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FVulkanUploadContext::Pool);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// `dynamic_atexit_destructor_for_'ArchiveMutex'' @ 1503c9100

void __cdecl
`FVulkanPipelineCacheChunk::SavePSOCacheInternal'::__l2::
_dynamic_atexit_destructor_for__ArchiveMutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c9107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(void)___ptr64'
              ::__l2::ArchiveMutex);
  return;
}

// `dynamic_atexit_destructor_for_'BinaryCacheVersionKey'' @ 1503c9120

void __cdecl
`UE::Vulkan::GetPSOBinaryCacheVersionedFolder'::__l2::
_dynamic_atexit_destructor_for__BinaryCacheVersionKey__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BinaryCacheVersionKey.Data.AllocatorInstance.Data;
  if (BinaryCacheVersionKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BinaryCacheVersionKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarMemoryMapChunkedPSOCache'' @ 1503c9140

void __cdecl UE::Vulkan::_dynamic_atexit_destructor_for__CVarMemoryMapChunkedPSOCache__(void)

{
  CVarMemoryMapChunkedPSOCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMemoryMapChunkedPSOCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanAllowSplitBarriers'' @ 1503c9160

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanAllowSplitBarriers__(void)

{
  CVarVulkanAllowSplitBarriers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanAllowSplitBarriers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessBlockSize'' @ 1503c9180

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessBlockSize__(void)

{
  CVarVulkanBindlessBlockSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanBindlessBlockSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessMaxAccelerationStructureCount'' @ 1503c91a0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessMaxAccelerationStructureCount__(void)

{
  CVarVulkanBindlessMaxAccelerationStructureCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanBindlessMaxAccelerationStructureCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessMaxSampledImageCount'' @ 1503c91c0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessMaxSampledImageCount__(void)

{
  CVarVulkanBindlessMaxSampledImageCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanBindlessMaxSampledImageCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessMaxSamplerDescriptorCount'' @ 1503c91e0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessMaxSamplerDescriptorCount__(void)

{
  CVarVulkanBindlessMaxSamplerDescriptorCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanBindlessMaxSamplerDescriptorCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessMaxStorageBufferCount'' @ 1503c9200

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessMaxStorageBufferCount__(void)

{
  CVarVulkanBindlessMaxStorageBufferCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanBindlessMaxStorageBufferCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessMaxStorageImageCount'' @ 1503c9220

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessMaxStorageImageCount__(void)

{
  CVarVulkanBindlessMaxStorageImageCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanBindlessMaxStorageImageCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessMaxStorageTexelBufferCount'' @ 1503c9240

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessMaxStorageTexelBufferCount__(void)

{
  CVarVulkanBindlessMaxStorageTexelBufferCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanBindlessMaxStorageTexelBufferCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessMaxUniformBufferCount'' @ 1503c9260

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessMaxUniformBufferCount__(void)

{
  CVarVulkanBindlessMaxUniformBufferCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanBindlessMaxUniformBufferCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanBindlessMaxUniformTexelBufferCount'' @ 1503c9280

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanBindlessMaxUniformTexelBufferCount__(void)

{
  CVarVulkanBindlessMaxUniformTexelBufferCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVulkanBindlessMaxUniformTexelBufferCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanForceStagingBufferOnLock'' @ 1503c92a0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanForceStagingBufferOnLock__(void)

{
  CVarVulkanForceStagingBufferOnLock._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanForceStagingBufferOnLock)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanMaxBarriersPerBatch'' @ 1503c92c0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanMaxBarriersPerBatch__(void)

{
  CVarVulkanMaxBarriersPerBatch._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanMaxBarriersPerBatch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanSparseBufferAllocSizeMB'' @ 1503c92e0

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanSparseBufferAllocSizeMB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanSparseBufferAllocSizeMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVulkanUseMemoryBarrierOpt'' @ 1503c9300

void __cdecl _dynamic_atexit_destructor_for__CVarVulkanUseMemoryBarrierOpt__(void)

{
  CVarVulkanUseMemoryBarrierOpt._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVulkanUseMemoryBarrierOpt);
  return;
}

// `dynamic_atexit_destructor_for_'CacheVersionedFolderCriticalSection'' @ 1503c9320

void __cdecl UE::Vulkan::_dynamic_atexit_destructor_for__CacheVersionedFolderCriticalSection__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c9327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CacheVersionedFolderCriticalSection);
  return;
}

// `dynamic_atexit_destructor_for_'FullCachePath'' @ 1503c9340

void __cdecl
`FVulkanCombinedChunkCacheFile::GetFullCachePath'::__l2::
_dynamic_atexit_destructor_for__FullCachePath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
               ::__l2::FullCachePath.Data.AllocatorInstance.Data;
  if (`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
      ::__l2::FullCachePath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_class_FString_const&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::GetFullCachePath(void)___ptr64'
      ::__l2::FullCachePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCVarUniqueValidationMessages'' @ 1503c9360

void __cdecl _dynamic_atexit_destructor_for__GCVarUniqueValidationMessages__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCVarUniqueValidationMessages);
  return;
}

// `dynamic_atexit_destructor_for_'GChunkEvictTimeCVar'' @ 1503c9380

void __cdecl UE::Vulkan::_dynamic_atexit_destructor_for__GChunkEvictTimeCVar__(void)

{
  GChunkEvictTimeCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GChunkEvictTimeCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GMaxSingleCachePSOCountCVar'' @ 1503c93a0

void __cdecl UE::Vulkan::_dynamic_atexit_destructor_for__GMaxSingleCachePSOCountCVar__(void)

{
  GMaxSingleCachePSOCountCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GMaxSingleCachePSOCountCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GMaxTotalCacheSizeMbCVar'' @ 1503c93c0

void __cdecl UE::Vulkan::_dynamic_atexit_destructor_for__GMaxTotalCacheSizeMbCVar__(void)

{
  GMaxTotalCacheSizeMbCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GMaxTotalCacheSizeMbCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GPendingLockMutex'' @ 1503c93e0

void __cdecl _dynamic_atexit_destructor_for__GPendingLockMutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c93e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GPendingLockMutex);
  return;
}

// `dynamic_atexit_destructor_for_'GPendingLocks'' @ 1503c9400

void __cdecl _dynamic_atexit_destructor_for__GPendingLocks__(void)

{
  GPendingLocks._72_4_ = 0;
  if (GPendingLocks._64_8_ != 0) {
    FMemory::Free((void *)GPendingLocks._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanBuffer_*,FVulkanPendingBufferLock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanBuffer_*,FVulkanPendingBufferLock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanBuffer_*,FVulkanPendingBufferLock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPendingLocks);
  return;
}

// `dynamic_atexit_destructor_for_'GTargetResidentCacheSizeCVar'' @ 1503c9440

void __cdecl UE::Vulkan::_dynamic_atexit_destructor_for__GTargetResidentCacheSizeCVar__(void)

{
  GTargetResidentCacheSizeCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GTargetResidentCacheSizeCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GVulkanGUseNewCacheCodeCVar'' @ 1503c9460

void __cdecl UE::Vulkan::_dynamic_atexit_destructor_for__GVulkanGUseNewCacheCodeCVar__(void)

{
  GVulkanGUseNewCacheCodeCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GVulkanGUseNewCacheCodeCVar);
  return;
}

// `dynamic_atexit_destructor_for_'Impl'' @ 1503c9480

void __cdecl
`FVulkanCombinedChunkCacheFile::Get'::__l2::_dynamic_atexit_destructor_for__Impl__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  if (`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
      ::__l2::Impl.PSOFileWriter.Ptr != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)
                `public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                ::__l2::Impl.PSOFileWriter.Ptr)
              (`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
               ::__l2::Impl.PSOFileWriter.Ptr,1);
  }
  if (`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
      ::__l2::Impl.MappedRegion.Ptr != (IMappedFileRegion *)0x0) {
    (**(code **)(`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                 ::__l2::Impl.MappedRegion.Ptr)->_padding_)
              (`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
               ::__l2::Impl.MappedRegion.Ptr,1);
  }
  BVar2 = TryAcquireSRWLockExclusive
                    ((PSRWLOCK)
                     &`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                      ::__l2::Impl.MappingLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive
              ((PSRWLOCK)
               &`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                ::__l2::Impl.MappingLock);
  }
  if (`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
      ::__l2::Impl.MappedCacheFile.Ptr != (IMappedFileHandle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c950e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
                 ::__l2::Impl.MappedCacheFile.Ptr)->_padding_)
              (`public:_static_class_FVulkanCombinedChunkCacheFile&___ptr64___cdecl_FVulkanCombinedChunkCacheFile::Get(void)'
               ::__l2::Impl.MappedCacheFile.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogVulkanRHI'' @ 1503c9520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVulkanRHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVulkanRHI);
  return;
}

// `dynamic_atexit_destructor_for_'RHICacheTopFolderPath'' @ 1503c9540

void __cdecl
`UE::Vulkan::GetRHICacheRootFolder'::__l2::_dynamic_atexit_destructor_for__RHICacheTopFolderPath__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RHICacheTopFolderPath.Data.AllocatorInstance.Data;
  if (RHICacheTopFolderPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RHICacheTopFolderPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SeenCodes'' @ 1503c9560

void __cdecl `DebugUtilsCallback'::__l2::_dynamic_atexit_destructor_for__SeenCodes__(void)

{
  SeenCodes.Elements[4].HashSize = 0;
  if (SeenCodes.Elements[4].Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)SeenCodes.Elements[4].Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&SeenCodes.Elements[4].Elements);
  SeenCodes.Elements[3].HashSize = 0;
  if (SeenCodes.Elements[3].Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)SeenCodes.Elements[3].Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&SeenCodes.Elements[3].Elements);
  SeenCodes.Elements[2].HashSize = 0;
  if (SeenCodes.Elements[2].Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)SeenCodes.Elements[2].Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&SeenCodes.Elements[2].Elements);
  SeenCodes.Elements[1].HashSize = 0;
  if (SeenCodes.Elements[1].Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)SeenCodes.Elements[1].Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&SeenCodes.Elements[1].Elements);
  SeenCodes.Elements[0].HashSize = 0;
  if (SeenCodes.Elements[0].Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)SeenCodes.Elements[0].Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&SeenCodes);
  return;
}

// `dynamic_atexit_destructor_for_'VulkanPipelineCacheManager'' @ 1503c9630

void __cdecl _dynamic_atexit_destructor_for__VulkanPipelineCacheManager__(void)

{
  FVulkanChunkedPipelineCacheManager FVar1;
  
  FVar1.VulkanPipelineCacheManagerImpl.Ptr =
       VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr;
  if (VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr !=
      (FVulkanChunkedPipelineCacheManagerImpl *)0x0) {
    FVulkanChunkedPipelineCacheManagerImpl::~FVulkanChunkedPipelineCacheManagerImpl
              ((FVulkanChunkedPipelineCacheManagerImpl *)
               VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr);
    operator_delete((void *)FVar1.VulkanPipelineCacheManagerImpl.Ptr,0x100);
    return;
  }
  return;
}

// operator() @ 1504d7d00

bool __thiscall `GetDepthOrStencilStageAndAccessFlags'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7700521786407912008>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7700521786407912008>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d7d60

bool __thiscall `GetVkStageAndAccessFlags'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7700521786407911872>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7700521786407911872>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

