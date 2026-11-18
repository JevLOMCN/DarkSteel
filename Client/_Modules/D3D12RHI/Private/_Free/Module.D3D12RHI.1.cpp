// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 235

// Barriers'' @ 141045660

void __cdecl `dynamic_initializer_for_'FD3D12Adapter::Barriers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FD3D12Adapter::Barriers__);
  return;
}

// `dynamic_initializer_for_'CTrackedReleasedAllocationFrameRetention'' @ 141045680

void __cdecl _dynamic_initializer_for__CTrackedReleasedAllocationFrameRetention__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CTrackedReleasedAllocationFrameRetention,
             L"D3D12.TrackedReleasedAllocationFrameRetention",
             &GTrackedReleasedAllocationFrameRetention,
             L"Amount of frames for which we keep freed allocation data around when resource tracking is enabled"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CTrackedReleasedAllocationFrameRetention__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAsyncCompute'' @ 1410456d0

void __cdecl _dynamic_initializer_for__CVarAllowAsyncCompute__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowAsyncCompute,L"r.D3D12.AllowAsyncCompute",&GAllowAsyncCompute,
             L"Allow usage of async compute",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAsyncCompute__);
  return;
}

// `dynamic_initializer_for_'CVarBindlessResourceDescriptorGarbageCollectLatency'' @ 141045720

void __cdecl _dynamic_initializer_for__CVarBindlessResourceDescriptorGarbageCollectLatency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBindlessResourceDescriptorGarbageCollectLatency,
             L"D3D12.Bindless.GarbageCollectLatency",
             &GBindlessResourceDescriptorGarbageCollectLatency,
             L"Amount of update cycles before heap is freed",4);
  atexit(_dynamic_atexit_destructor_for__CVarBindlessResourceDescriptorGarbageCollectLatency__);
  return;
}

// `dynamic_initializer_for_'CVarBindlessResourceDescriptorHeapSize'' @ 141045770

void __cdecl _dynamic_initializer_for__CVarBindlessResourceDescriptorHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBindlessResourceDescriptorHeapSize,L"D3D12.Bindless.ResourceDescriptorHeapSize",
             &GBindlessResourceDescriptorHeapSize,L"Bindless resource descriptor heap size",4);
  atexit(_dynamic_atexit_destructor_for__CVarBindlessResourceDescriptorHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarBindlessSamplerDescriptorHeapSize'' @ 1410457c0

void __cdecl _dynamic_initializer_for__CVarBindlessSamplerDescriptorHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBindlessSamplerDescriptorHeapSize,L"D3D12.Bindless.SamplerDescriptorHeapSize",
             &GBindlessSamplerDescriptorHeapSize,L"Bindless sampler descriptor heap size",4);
  atexit(_dynamic_atexit_destructor_for__CVarBindlessSamplerDescriptorHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12AllowDiscardResources'' @ 141045810

void __cdecl _dynamic_initializer_for__CVarD3D12AllowDiscardResources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12AllowDiscardResources,L"d3d12.AllowDiscardResources",
             &GD3D12AllowDiscardResources,
             L"Whether to call DiscardResources after transient aliasing acquire. This is not needed on some platforms if newly acquired resources are cleared before use."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12AllowDiscardResources__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12AllowPoolAllocateIndirectArgBuffers'' @ 141045860

void __cdecl _dynamic_initializer_for__CVarD3D12AllowPoolAllocateIndirectArgBuffers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12AllowPoolAllocateIndirectArgBuffers,
             L"d3d12.AllowPoolAllocateIndirectArgBuffers",&GD3D12AllowPoolAllocateIndirectArgBuffers
             ,
             L"Allow indirect args to be pool allocated (otherwise they will be committed resources) (default: 0)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12AllowPoolAllocateIndirectArgBuffers__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12BatchResourceBarriers'' @ 1410458b0

void __cdecl _dynamic_initializer_for__CVarD3D12BatchResourceBarriers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12BatchResourceBarriers,L"d3d12.BatchResourceBarriers",
             &GD3D12BatchResourceBarriers,L"Whether to allow batching resource barriers",0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12BatchResourceBarriers__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12EnableDRED'' @ 141045900

void __cdecl _dynamic_initializer_for__CVarD3D12EnableDRED__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D12EnableDRED,L"r.D3D12.DRED",local_res8,
             L"Enable DRED GPU Crash debugging mode to track the current GPU state and logs information what operations the GPU executed last.Has GPU overhead but gives the most information on the current GPU state when it crashes or hangs.\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12EnableDRED__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12EnableLightweightDRED'' @ 141045950

void __cdecl _dynamic_initializer_for__CVarD3D12EnableLightweightDRED__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D12EnableLightweightDRED,L"r.D3D12.LightweightDRED",local_res8,
             L"Enable Lightweight DRED GPU Crash debugging mode to track the current GPU state and logs information what operations the GPU executed last.Gives the basic information on the current GPU state when it crashes or hangs on all PC hardware.\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12EnableLightweightDRED__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12EvictAllResidentResourcesInBackground'' @ 1410459a0

void __cdecl _dynamic_initializer_for__CVarD3D12EvictAllResidentResourcesInBackground__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12EvictAllResidentResourcesInBackground,
             L"D3D12.EvictAllResidentResourcesInBackground",
             &GD3D12EvictAllResidentResourcesInBackground,
             L"Force D3D12 resource residency manager to evict all tracked unused resources when the application is not focused\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12EvictAllResidentResourcesInBackground__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12FastAllocatorMinPagesToRetain'' @ 1410459f0

void __cdecl _dynamic_initializer_for__CVarD3D12FastAllocatorMinPagesToRetain__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12FastAllocatorMinPagesToRetain,L"d3d12.FastAllocator.MinPagesToRetain",
             &GD3D12FastAllocatorMinPagesToRetain,
             L"Minimum number of pages to retain. Pages below this limit will never be released. Pages above can be released after being unused for a certain number of frames."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12FastAllocatorMinPagesToRetain__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12FastConstantAllocatorPageSize'' @ 141045a40

void __cdecl _dynamic_initializer_for__CVarD3D12FastConstantAllocatorPageSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12FastConstantAllocatorPageSize,L"d3d12.FastConstantAllocatorPageSize",
             &GD3D12FastConstantAllocatorPageSize,L"Page size for the fast constant allocator",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12FastConstantAllocatorPageSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12PoolAllocatorRTUAVTextureMaxAllocationSize'' @ 141045a90

void __cdecl _dynamic_initializer_for__CVarD3D12PoolAllocatorRTUAVTextureMaxAllocationSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12PoolAllocatorRTUAVTextureMaxAllocationSize,
             L"d3d12.PoolAllocator.RTUAVTextureMaxAllocationSize",
             &GD3D12PoolAllocatorRTUAVTextureVRAMMaxAllocationSize,
             L"Maximum size of a single allocation in the VRAM RTUAV Texture pool allocator (default 0MB - disabled)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12PoolAllocatorRTUAVTextureMaxAllocationSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12PoolAllocatorRTUAVTextureVRAMPoolSize'' @ 141045ae0

void __cdecl _dynamic_initializer_for__CVarD3D12PoolAllocatorRTUAVTextureVRAMPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12PoolAllocatorRTUAVTextureVRAMPoolSize,
             L"d3d12.PoolAllocator.RTUAVTextureVRAMPoolSize",
             &GD3D12PoolAllocatorRTUAVTextureVRAMPoolSize,
             L"Pool size of a single VRAM RTUAV Texture memory pool (default 0MB - disabled)",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12PoolAllocatorRTUAVTextureVRAMPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12PoolAllocatorReadOnlyTextureMaxAllocationSize'' @ 141045b30

void __cdecl
_dynamic_initializer_for__CVarD3D12PoolAllocatorReadOnlyTextureMaxAllocationSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12PoolAllocatorReadOnlyTextureMaxAllocationSize,
             L"d3d12.PoolAllocator.ReadOnlyTextureMaxAllocationSize",
             &GD3D12PoolAllocatorReadOnlyTextureVRAMMaxAllocationSize,
             L"Maximum size of a single allocation in the VRAM ReadOnly Texture pool allocator (default 64MB)"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12PoolAllocatorReadOnlyTextureMaxAllocationSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize'' @ 141045b80

void __cdecl _dynamic_initializer_for__CVarD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize,
             L"d3d12.PoolAllocator.ReadOnlyTextureVRAMPoolSize",
             &GD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize,
             L"Pool size of a single VRAM ReadOnly Texture memory pool (default 64MB)",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12ReadOnlyTextureAllocatorMaxPoolSize'' @ 141045bd0

void __cdecl _dynamic_initializer_for__CVarD3D12ReadOnlyTextureAllocatorMaxPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12ReadOnlyTextureAllocatorMaxPoolSize,
             L"d3d12.ReadOnlyTextureAllocator.MaxPoolSize",
             &GD3D12ReadOnlyTextureAllocatorMaxPoolSize,
             L"Maximum allocation granularity (in bytes) of each size list",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12ReadOnlyTextureAllocatorMaxPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12ReadOnlyTextureAllocatorMinNumToPool'' @ 141045c20

void __cdecl _dynamic_initializer_for__CVarD3D12ReadOnlyTextureAllocatorMinNumToPool__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12ReadOnlyTextureAllocatorMinNumToPool,
             L"d3d12.ReadOnlyTextureAllocator.MinNumToPool",
             &GD3D12ReadOnlyTextureAllocatorMinNumToPool,
             L"Texture pool of each size list must be large enough to store thismany textures unless constrained by maximum allocation granularity"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12ReadOnlyTextureAllocatorMinNumToPool__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12ReadOnlyTextureAllocatorMinPoolSize'' @ 141045c70

void __cdecl _dynamic_initializer_for__CVarD3D12ReadOnlyTextureAllocatorMinPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12ReadOnlyTextureAllocatorMinPoolSize,
             L"d3d12.ReadOnlyTextureAllocator.MinPoolSize",
             &GD3D12ReadOnlyTextureAllocatorMinPoolSize,
             L"Minimum allocation granularity (in bytes) of each size list",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12ReadOnlyTextureAllocatorMinPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12SegListTrackLeaks'' @ 141045cc0

void __cdecl _dynamic_initializer_for__CVarD3D12SegListTrackLeaks__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12SegListTrackLeaks,L"d3d12.SegListTrackLeaks",&GD3D12SegListTrackLeaks,
             L"1: Enable leak tracking in d3d12 seglist\'s",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12SegListTrackLeaks__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12TrackAllAllocations'' @ 141045d10

void __cdecl _dynamic_initializer_for__CVarD3D12TrackAllAllocations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12TrackAllAllocations,L"D3D12.TrackAllAllocations",&GD3D12TrackAllAllocations,
             L"Controls whether D3D12 RHI should track all allocation information (default = off).",
             4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12TrackAllAllocations__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12UnsafeCrossGPUTransfers'' @ 141045d60

void __cdecl _dynamic_initializer_for__CVarD3D12UnsafeCrossGPUTransfers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12UnsafeCrossGPUTransfers,L"D3D12.UnsafeCrossGPUTransfers",
             &GD3D12UnsafeCrossGPUTransfers,
             L"Disables cross GPU synchronization correctness, for a gain in performance (Default: true)."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12UnsafeCrossGPUTransfers__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12UploadHeapBigBlockMaxAllocationSize'' @ 141045db0

void __cdecl _dynamic_initializer_for__CVarD3D12UploadHeapBigBlockMaxAllocationSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12UploadHeapBigBlockMaxAllocationSize,
             L"d3d12.UploadHeap.BigBlock.MaxAllocationSize",
             &GD3D12UploadHeapBigBlockMaxAllocationSize,
             L"Maximum allocation size on the big block allocator for upload memory",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12UploadHeapBigBlockMaxAllocationSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12UploadHeapBigBlockPoolSize'' @ 141045e00

void __cdecl _dynamic_initializer_for__CVarD3D12UploadHeapBigBlockPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12UploadHeapBigBlockPoolSize,L"d3d12.UploadHeap.BigBlock.PoolSize",
             &GD3D12UploadHeapBigBlockPoolSize,
             L"Pool size for the upload memory big block allocator",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12UploadHeapBigBlockPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12UploadHeapSmallBlockMaxAllocationSize'' @ 141045e50

void __cdecl _dynamic_initializer_for__CVarD3D12UploadHeapSmallBlockMaxAllocationSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12UploadHeapSmallBlockMaxAllocationSize,
             L"d3d12.UploadHeap.SmallBlock.MaxAllocationSize",
             &GD3D12UploadHeapSmallBlockMaxAllocationSize,
             L"Maximum allocation size on the small block allocator for upload memory",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12UploadHeapSmallBlockMaxAllocationSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12UploadHeapSmallBlockPoolSize'' @ 141045ea0

void __cdecl _dynamic_initializer_for__CVarD3D12UploadHeapSmallBlockPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12UploadHeapSmallBlockPoolSize,L"d3d12.UploadHeap.SmallBlock.PoolSize",
             &GD3D12UploadHeapSmallBlockPoolSize,
             L"Pool size for the upload memory small block allocator",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12UploadHeapSmallBlockPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12VRAMBufferPoolDefrag'' @ 141045ef0

void __cdecl _dynamic_initializer_for__CVarD3D12VRAMBufferPoolDefrag__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12VRAMBufferPoolDefrag,L"d3d12.VRAMBufferPoolDefrag",
             &GD3D12VRAMBufferPoolDefrag,L"Defrag the VRAM buffer pool",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12VRAMBufferPoolDefrag__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12VRAMBufferPoolDefragMaxCopySizePerFrame'' @ 141045f40

void __cdecl _dynamic_initializer_for__CVarD3D12VRAMBufferPoolDefragMaxCopySizePerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12VRAMBufferPoolDefragMaxCopySizePerFrame,
             L"d3d12.VRAMBufferPoolDefrag.MaxCopySizePerFrame",
             &GD3D12VRAMBufferPoolDefragMaxCopySizePerFrame,
             L"Max amount of data to copy during defragmentation in a single frame (default 32MB)",4
            );
  atexit(_dynamic_atexit_destructor_for__CVarD3D12VRAMBufferPoolDefragMaxCopySizePerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12VRAMTexturePoolDefrag'' @ 141045f90

void __cdecl _dynamic_initializer_for__CVarD3D12VRAMTexturePoolDefrag__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12VRAMTexturePoolDefrag,L"d3d12.VRAMTexturePoolDefrag",
             &GD3D12VRAMTexturePoolDefrag,L"Defrag the VRAM Texture pool (enabled by default)",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12VRAMTexturePoolDefrag__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12VRAMTexturePoolDefragMaxCopySizePerFrame'' @ 141045fe0

void __cdecl _dynamic_initializer_for__CVarD3D12VRAMTexturePoolDefragMaxCopySizePerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12VRAMTexturePoolDefragMaxCopySizePerFrame,
             L"d3d12.VRAMTexturePoolDefrag.MaxCopySizePerFrame",
             &GD3D12VRAMTexturePoolDefragMaxCopySizePerFrame,
             L"Max amount of data to copy during defragmentation in a single frame (default 32MB)",4
            );
  atexit(_dynamic_atexit_destructor_for__CVarD3D12VRAMTexturePoolDefragMaxCopySizePerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarDisableDiscardOfDepthResources'' @ 141046030

void __cdecl _dynamic_initializer_for__CVarDisableDiscardOfDepthResources__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableDiscardOfDepthResources,L"d3d12.DisableDiscardOfDepthResources",
             &GD3D12DisableDiscardOfDepthResources,
             L"Whether to skip discarding depth resources after transient aliasing acquire. This is not needed on some platforms if the whole (sub)resource is written before it\'s read."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableDiscardOfDepthResources__);
  return;
}

// `dynamic_initializer_for_'CVarEmitRgpFrameMarkers'' @ 141046080

void __cdecl _dynamic_initializer_for__CVarEmitRgpFrameMarkers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEmitRgpFrameMarkers,L"D3D12.EmitRgpFrameMarkers",&GEmitRgpFrameMarkers,
             L"Enables/Disables frame markers for AMD\'s RGP tool.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarEmitRgpFrameMarkers__);
  return;
}

// `dynamic_initializer_for_'CVarMaxCommandsPerCommandList'' @ 1410460d0

void __cdecl _dynamic_initializer_for__CVarMaxCommandsPerCommandList__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxCommandsPerCommandList,L"D3D12.MaxCommandsPerCommandList",
             &GD3D12MaxCommandsPerCommandList,
             L"Flush command list to GPU after certain amount of enqueued commands (draw, dispatch, copy, ...) (default value 10000)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMaxCommandsPerCommandList__);
  return;
}

// `dynamic_initializer_for_'CVarPreferredBarrierImplementation'' @ 141046120

void __cdecl _dynamic_initializer_for__CVarPreferredBarrierImplementation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPreferredBarrierImplementation,L"r.D3D12.PreferredBarrierImplementation",
             &GPreferredBarrierImplementation,
             L"The preferred barrier implementation to use\n0 Default\n1 Legacy Barriers\n2 Enhanced Barriers\nAll other values treated as Default"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPreferredBarrierImplementation__);
  return;
}

// `dynamic_initializer_for_'CVarResidencyManagement'' @ 141046170

void __cdecl _dynamic_initializer_for__CVarResidencyManagement__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarResidencyManagement,L"D3D12.ResidencyManagement",local_res8,
             L"Controls whether D3D12 resource residency management is active (default = on).",4);
  atexit(_dynamic_atexit_destructor_for__CVarResidencyManagement__);
  return;
}

// `dynamic_initializer_for_'GD3D12DebugCvar'' @ 1410461c0

void __cdecl _dynamic_initializer_for__GD3D12DebugCvar__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&GD3D12DebugCvar,L"r.D3D12.EnableD3DDebug",local_res8,
             L"0 to disable d3ddebug layer (default)\n1 to enable error logging (-d3ddebug) \n2 to enable error & warning logging (-d3dlogwarnings)\n3 to enable breaking on errors & warnings (-d3dbreakonwarning)\n4 to enable CONTINUING on errors (-d3dcontinueonerrors)\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__GD3D12DebugCvar__);
  return;
}

// `dynamic_initializer_for_'GDumpTrackedD3D12AllocationCallstacksCmd'' @ 141046210

void __cdecl _dynamic_initializer_for__GDumpTrackedD3D12AllocationCallstacksCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_25>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"D3D12.DumpTrackedAllocationCallstacks",
                      L"Dump all tracked d3d12 resource allocation callstacks.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GDumpTrackedD3D12AllocationCallstacksCmd,pIVar5);
  GDumpTrackedD3D12AllocationCallstacksCmd._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GDumpTrackedD3D12AllocationCallstacksCmd__);
  return;
}

// `dynamic_initializer_for_'GDumpTrackedD3D12AllocationsCmd'' @ 1410463b0

void __cdecl _dynamic_initializer_for__GDumpTrackedD3D12AllocationsCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_24>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"D3D12.DumpTrackedAllocations",
                      L"Dump all tracked d3d12 resource allocations.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GDumpTrackedD3D12AllocationsCmd,pIVar5);
  GDumpTrackedD3D12AllocationsCmd._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GDumpTrackedD3D12AllocationsCmd__);
  return;
}

// `dynamic_initializer_for_'GDumpTrackedD3D12ResidentAllocationCallstacksCmd'' @ 141046550

void __cdecl _dynamic_initializer_for__GDumpTrackedD3D12ResidentAllocationCallstacksCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_27>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"D3D12.DumpTrackedResidentAllocationCallstacks",
                      L"Dump all tracked resident d3d12 resource allocation callstacks.",&local_58,0
                     );
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GDumpTrackedD3D12ResidentAllocationCallstacksCmd,pIVar5);
  GDumpTrackedD3D12ResidentAllocationCallstacksCmd._0_8_ =
       &___7FAutoConsoleCommandWithOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GDumpTrackedD3D12ResidentAllocationCallstacksCmd__);
  return;
}

// `dynamic_initializer_for_'GDumpTrackedD3D12ResidentAllocationsCmd'' @ 1410466f0

void __cdecl _dynamic_initializer_for__GDumpTrackedD3D12ResidentAllocationsCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_26>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"D3D12.DumpTrackedResidentAllocations",
                      L"Dump all tracked resisdent d3d12 resource allocations.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GDumpTrackedD3D12ResidentAllocationsCmd,pIVar5);
  GDumpTrackedD3D12ResidentAllocationsCmd._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GDumpTrackedD3D12ResidentAllocationsCmd__);
  return;
}

// `dynamic_initializer_for_'GIgnoreD3D12MessageArray'' @ 141046890

void __cdecl _dynamic_initializer_for__GIgnoreD3D12MessageArray__(void)

{
  atexit(_dynamic_atexit_destructor_for__GIgnoreD3D12MessageArray__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_D3D12AllocatorUnused'' @ 1410468b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_D3D12AllocatorUnused__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_D3D12AllocatorUnusedLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  FVar4 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar3,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_D3D12AllocatorUnusedLLM;
  if (StatPtr_STAT_D3D12AllocatorUnusedLLM ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12AllocatorUnusedLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_D3D12AllocatorUnusedLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_D3D12AllocatorUnusedLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12AllocatorUnusedLLM,*pFVar3,
                       L"D3D12AllocatorUnused","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",
                       true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  FVar1 = *(FName *)FVar5;
  local_res10.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res10.Number = FVar1.Number;
  local_res18 = 0;
  local_res20 = 0;
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_D3D12AllocatorUnused,L"D3D12AllocatorUnused",(FName)0x0,(FName)0x0,
             FVar1,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_D3D12AllocatorWasted'' @ 141046a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_D3D12AllocatorWasted__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_D3D12AllocatorWastedLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  FVar4 = StatPtr_STAT_EngineSummaryLLM;
  if (StatPtr_STAT_EngineSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_EngineSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_EngineSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EngineSummaryLLM,*pFVar3,L"Engine"
                       ,"STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_D3D12AllocatorWastedLLM;
  if (StatPtr_STAT_D3D12AllocatorWastedLLM ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12AllocatorWastedLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_D3D12AllocatorWastedLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_D3D12AllocatorWastedLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12AllocatorWastedLLM,*pFVar3,
                       L"D3D12AllocatorWasted","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",
                       true,false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  FVar1 = *(FName *)FVar5;
  local_res10.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res10.Number = FVar1.Number;
  local_res18 = 0;
  local_res20 = 0;
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_D3D12AllocatorWasted,L"D3D12AllocatorWasted",(FName)0x0,(FName)0x0,
             FVar1,FVar2,None);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12AllocatorUnusedLLM'' @ 141046b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12AllocatorUnusedLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12AllocatorUnusedLLM ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12AllocatorUnusedLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12AllocatorUnusedLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12AllocatorUnusedLLM,*pFVar1,
               L"D3D12AllocatorUnused","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false
               ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12AllocatorWastedLLM'' @ 141046c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12AllocatorWastedLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12AllocatorWastedLLM ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12AllocatorWastedLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12AllocatorWastedLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12AllocatorWastedLLM,*pFVar1,
               L"D3D12AllocatorWasted","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false
               ,ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12GlobalConstantBufferUpdateTime'' @ 141046cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12GlobalConstantBufferUpdateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12GlobalConstantBufferUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12GlobalConstantBufferUpdateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12GlobalConstantBufferUpdateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12GlobalConstantBufferUpdateTime,
               *pFVar1,L"Global Constant buffer update time","STATGROUP_D3D12RHI","STATCAT_Advanced"
               ,L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeLowlevelCacheHit'' @ 141046d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOComputeLowlevelCacheHit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOComputeLowlevelCacheHit ==
      (FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheHit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOComputeLowlevelCacheHit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeLowlevelCacheHit,*pFVar1,
               L"Compute: Low-level cache hit","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeLowlevelCacheMiss'' @ 141046dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOComputeLowlevelCacheMiss__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOComputeLowlevelCacheMiss ==
      (FThreadSafeStaticStat<FStat_STAT_PSOComputeLowlevelCacheMiss>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOComputeLowlevelCacheMiss");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeLowlevelCacheMiss,*pFVar1,
               L"Compute: Low-level cache miss","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeNumLowlevelCacheEntries'' @ 141046e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOComputeNumLowlevelCacheEntries__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOComputeNumLowlevelCacheEntries ==
      (FThreadSafeStaticStat<FStat_STAT_PSOComputeNumLowlevelCacheEntries>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOComputeNumLowlevelCacheEntries");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOComputeNumLowlevelCacheEntries,*pFVar1,
               L"Compute: Num low-level cache entries","STATGROUP_D3D12PipelineState",
               "STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsLowlevelCacheHit'' @ 141046ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOGraphicsLowlevelCacheHit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOGraphicsLowlevelCacheHit ==
      (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheHit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOGraphicsLowlevelCacheHit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsLowlevelCacheHit,*pFVar1,
               L"Graphics: Low-level cache hit","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsLowlevelCacheMiss'' @ 141046f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOGraphicsLowlevelCacheMiss__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOGraphicsLowlevelCacheMiss ==
      (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsLowlevelCacheMiss>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOGraphicsLowlevelCacheMiss");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsLowlevelCacheMiss,*pFVar1,
               L"Graphics: Low-level cache miss","STATGROUP_D3D12PipelineState","STATCAT_Advanced",
               L"D3D12RHI: Pipeline State (PSO)",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries'' @ 141047010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries ==
      (FThreadSafeStaticStat<FStat_STAT_PSOGraphicsNumLowlevelCacheEntries>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PSOGraphicsNumLowlevelCacheEntries");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries,*pFVar1
               ,L"Graphics: Num low-level cache entries","STATGROUP_D3D12PipelineState",
               "STATCAT_Advanced",L"D3D12RHI: Pipeline State (PSO)",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// <lambda_invoker_cdecl> @ 1459a1400

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl <lambda_24>::<lambda_invoker_cdecl>(FOutputDevice *param_1)

{
  FD3D12Adapter *this;
  
  this = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
  FD3D12Adapter::DumpTrackedAllocationData(this,param_1,false,false);
  return;
}

// <lambda_invoker_cdecl> @ 1459a1440

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(FOutputDevice *param_1)

{
  FD3D12Adapter *this;
  
  this = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
  FD3D12Adapter::DumpTrackedAllocationData(this,param_1,false,true);
  return;
}

// <lambda_invoker_cdecl> @ 1459a1480

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl <lambda_26>::<lambda_invoker_cdecl>(FOutputDevice *param_1)

{
  FD3D12Adapter *this;
  
  this = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
  FD3D12Adapter::DumpTrackedAllocationData(this,param_1,true,false);
  return;
}

// <lambda_invoker_cdecl> @ 1459a14c0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl <lambda_27>::<lambda_invoker_cdecl>(FOutputDevice *param_1)

{
  FD3D12Adapter *this;
  
  this = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
  FD3D12Adapter::DumpTrackedAllocationData(this,param_1,true,true);
  return;
}

// ApplyStaticUniformBuffers<`ApplyStaticUniformBuffersOnContext'::__l5::<lambda_1>_> @ 1459a15a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::RHICore::ApplyStaticUniformBuffers<_ApplyStaticUniformBuffersOnContext_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)param_1->_padding_;
  uVar9 = uVar8;
  if (0 < iVar6) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar1 = *(byte *)(uVar9 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar5 = 0;
        if ((int)uVar7 < (int)param_1->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar2,bVar1,*(uint *)(param_1->_padding_ + uVar9 * 4));
        if (pFVar2 != (FRHIUniformBuffer *)0x0) {
          BindUniformBuffer(*(FD3D12CommandContext **)param_3,*(FRHIShader **)(param_3 + 8),
                            (EShaderFrequency)param_3[0x10],uVar7,
                            (FD3D12UniformBuffer *)(&pFVar2[1]._padding_)[*(uint *)(param_3 + 0x14)]
                           );
        }
      }
      iVar6 = (int)param_1->_padding_;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 1;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  return;
}

// ConstructItems<TRefCountPtr<FD3D12SyncPoint>,TRefCountPtr<FD3D12SyncPoint>,int> @ 1459a17b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
ConstructItems<TRefCountPtr<FD3D12SyncPoint>,TRefCountPtr<FD3D12SyncPoint>,int>
          (void *param_1,TRefCountPtr<FD3D12SyncPoint> *param_2,int param_3)

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

// CreateLinkedObjects<FD3D12Buffer,`FD3D12Adapter::CreateRHIBuffer'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12Buffer,`FD3D12Adapter::CreateRHIBuffer'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 1459a17f0

/* WARNING: Removing unreachable block (ram,0x0001459a182c) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Buffer * __cdecl
FD3D12LinkedAdapterObject<FD3D12Buffer>::
CreateLinkedObjects<FD3D12Buffer,_FD3D12Adapter::CreateRHIBuffer_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Buffer,_FD3D12Adapter::CreateRHIBuffer_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  FD3D12Device *pFVar2;
  FRHIBufferCreateDesc *pFVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  FD3D12Buffer *pFVar16;
  FD3D12Buffer *pFVar17;
  byte bVar18;
  FD3D12Buffer *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  FRHIGPUMask FVar22;
  undefined1 local_50 [4];
  uint local_4c;
  
  pFVar16 = (FD3D12Buffer *)0x0;
  uVar5 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  pFVar19 = pFVar16;
  FVar22.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      pFVar17 = (FD3D12Buffer *)0x0;
      lVar1 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar5) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        pFVar16 = (FD3D12Buffer *)(*pcVar7)();
        return pFVar16;
      }
      pFVar2 = *(FD3D12Device **)(lVar1 + 0x800 + (ulonglong)uVar5 * 8);
      pFVar16 = ::operator_new(0x298);
      if (pFVar16 != (FD3D12Buffer *)0x0) {
        pFVar17 = FD3D12Buffer::FD3D12Buffer(pFVar16,pFVar2,param_3->CreateDesc);
      }
      pFVar17->BufferAlignment = *param_3->Alignment;
      if (((*param_3->bDynamic == false) || (*(uint *)&pFVar2->field_0x8 == *param_3->FirstGPUIndex)
          ) || ((param_3->CreateDesc->_padding_ & 0x20000) != 0)) {
        pFVar3 = param_3->CreateDesc;
        (**(code **)(param_3->__this->_padding_ + 0x10))
                  (param_3->__this,pFVar2,param_3->InDesc,(int)pFVar3->_padding_,
                   (int)pFVar3->_padding_,*param_3->InResourceStateMode,
                   *param_3->InCreateD3D12Access,*param_3->Alignment,pFVar17,&pFVar17->_padding_,
                   *param_3->ResourceAllocator,pFVar3->DebugName,&pFVar3->OwnerName);
        *param_3->NewBuffer0 = pFVar17;
      }
      else {
        if ((*param_3->NewBuffer0 == (FD3D12Buffer *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewBuffer0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                                ,0x127,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          pFVar16 = (FD3D12Buffer *)(*pcVar7)();
          return pFVar16;
        }
        FD3D12ResourceLocation::ReferenceNode
                  (pFVar2,(FD3D12ResourceLocation *)&pFVar17->_padding_,
                   (FD3D12ResourceLocation *)&(*param_3->NewBuffer0)->_padding_);
      }
      if ((*param_3->bDynamic == false) && (*param_3->bKeepUnlocked == false)) {
        FD3D12ResourceLocation::UnlockPoolData((FD3D12ResourceLocation *)&pFVar17->_padding_);
      }
      pFVar16 = pFVar17;
      if (pFVar19 != (FD3D12Buffer *)0x0) {
        (**(code **)(pFVar17->_padding_ + 8))(&pFVar17->_padding_,local_50);
        pFVar16 = pFVar19;
      }
      (&pFVar16->_padding_)[uVar5] = (longlong)pFVar17;
      FVar22.GPUMask = FVar22.GPUMask & ~(1 << ((byte)uVar5 & 0x1f));
      local_4c = 0;
      if (FVar22.GPUMask != 0) {
        for (; (FVar22.GPUMask >> local_4c & 1) == 0; local_4c = local_4c + 1) {
        }
      }
      pFVar19 = pFVar16;
      uVar5 = local_4c;
    } while (FVar22.GPUMask != 0);
    if (pFVar16 != (FD3D12Buffer *)0x0) {
      iVar6 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      *(uint *)&pFVar16->_padding_ = param_1.GPUMask;
      bVar18 = 0;
      if (param_1.GPUMask != 0) {
        bVar18 = (byte)iVar6;
      }
      uVar20 = ~(1 << (bVar18 & 0x1f)) & param_1.GPUMask;
      uVar5 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (uVar20 != 0) {
        uVar21 = (ulonglong)uVar5;
        do {
          lVar8 = pFVar16->_padding_;
          lVar9 = pFVar16->_padding_;
          lVar10 = pFVar16->_padding_;
          lVar11 = pFVar16->_padding_;
          lVar12 = pFVar16->_padding_;
          lVar4 = (&pFVar16->_padding_)[uVar21];
          lVar13 = pFVar16->_padding_;
          lVar14 = pFVar16->_padding_;
          lVar1 = pFVar16->_padding_;
          *(longlong *)(lVar4 + 0x1a8) = pFVar16->_padding_;
          *(longlong *)(lVar4 + 0x1b0) = lVar8;
          uVar20 = uVar20 & ~(1 << ((byte)uVar21 & 0x1f));
          *(longlong *)(lVar4 + 0x1b8) = lVar9;
          *(longlong *)(lVar4 + 0x1c0) = lVar10;
          uVar5 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          *(longlong *)(lVar4 + 0x1c8) = lVar11;
          *(longlong *)(lVar4 + 0x1d0) = lVar12;
          uVar21 = 0x20;
          if (uVar20 != 0) {
            uVar21 = (ulonglong)uVar5;
          }
          *(longlong *)(lVar4 + 0x1d8) = lVar13;
          *(longlong *)(lVar4 + 0x1e0) = lVar14;
          *(longlong *)(lVar4 + 0x1e8) = lVar1;
        } while (uVar20 != 0);
      }
    }
  }
  return pFVar16;
}

// CreateLinkedObjects<FD3D12Buffer,`FD3D12DynamicRHI::RHICreateBufferInitializer'::__l11::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12Buffer,`FD3D12DynamicRHI::RHICreateBufferInitializer'::__l11::<lambda_1>_>'::__l2::<lambda_1>_> @ 1459a1b40

/* WARNING: Removing unreachable block (ram,0x0001459a1b72) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Buffer * __cdecl
FD3D12LinkedAdapterObject<FD3D12Buffer>::
CreateLinkedObjects<FD3D12Buffer,_FD3D12DynamicRHI::RHICreateBufferInitializer_::__l11::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12Buffer,_FD3D12DynamicRHI::RHICreateBufferInitializer_::__l11::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  FD3D12Device *pFVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  FD3D12Buffer *pFVar15;
  FD3D12Buffer *pFVar16;
  byte bVar17;
  ulonglong uVar18;
  FD3D12Buffer *pFVar19;
  uint uVar20;
  FRHIGPUMask FVar21;
  undefined1 local_44 [4];
  uint local_40;
  
  uVar4 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  pFVar15 = (FD3D12Buffer *)0x0;
  pFVar19 = pFVar15;
  FVar21.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar1 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar4) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FD3D12Buffer *)(*pcVar6)();
        return pFVar15;
      }
      pFVar2 = *(FD3D12Device **)(lVar1 + 0x800 + (ulonglong)uVar4 * 8);
      pFVar15 = ::operator_new(0x298);
      if (pFVar15 == (FD3D12Buffer *)0x0) {
        pFVar16 = (FD3D12Buffer *)0x0;
      }
      else {
        pFVar16 = FD3D12Buffer::FD3D12Buffer(pFVar15,pFVar2,&param_3->CreateDesc);
      }
      pFVar15 = pFVar16;
      if (pFVar19 != (FD3D12Buffer *)0x0) {
        (**(code **)(pFVar16->_padding_ + 8))(&pFVar16->_padding_,local_44);
        pFVar15 = pFVar19;
      }
      (&pFVar15->_padding_)[uVar4] = (longlong)pFVar16;
      FVar21.GPUMask = FVar21.GPUMask & ~(1 << ((byte)uVar4 & 0x1f));
      local_40 = 0;
      if (FVar21.GPUMask != 0) {
        for (; (FVar21.GPUMask >> local_40 & 1) == 0; local_40 = local_40 + 1) {
        }
      }
      pFVar19 = pFVar15;
      uVar4 = local_40;
    } while (FVar21.GPUMask != 0);
    if (pFVar15 != (FD3D12Buffer *)0x0) {
      iVar5 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
      *(uint *)&pFVar15->_padding_ = param_1.GPUMask;
      bVar17 = 0;
      if (param_1.GPUMask != 0) {
        bVar17 = (byte)iVar5;
      }
      uVar20 = ~(1 << (bVar17 & 0x1f)) & param_1.GPUMask;
      uVar4 = 0;
      if (uVar20 != 0) {
        for (; (uVar20 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if (uVar20 != 0) {
        uVar18 = (ulonglong)uVar4;
        do {
          lVar7 = pFVar15->_padding_;
          lVar8 = pFVar15->_padding_;
          lVar9 = pFVar15->_padding_;
          lVar10 = pFVar15->_padding_;
          lVar11 = pFVar15->_padding_;
          lVar3 = (&pFVar15->_padding_)[uVar18];
          lVar12 = pFVar15->_padding_;
          lVar13 = pFVar15->_padding_;
          lVar1 = pFVar15->_padding_;
          *(longlong *)(lVar3 + 0x1a8) = pFVar15->_padding_;
          *(longlong *)(lVar3 + 0x1b0) = lVar7;
          uVar20 = uVar20 & ~(1 << ((byte)uVar18 & 0x1f));
          uVar4 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          *(longlong *)(lVar3 + 0x1b8) = lVar8;
          *(longlong *)(lVar3 + 0x1c0) = lVar9;
          uVar18 = 0x20;
          if (uVar20 != 0) {
            uVar18 = (ulonglong)uVar4;
          }
          *(longlong *)(lVar3 + 0x1c8) = lVar10;
          *(longlong *)(lVar3 + 0x1d0) = lVar11;
          *(longlong *)(lVar3 + 0x1d8) = lVar12;
          *(longlong *)(lVar3 + 0x1e0) = lVar13;
          *(longlong *)(lVar3 + 0x1e8) = lVar1;
        } while (uVar20 != 0);
      }
    }
  }
  return pFVar15;
}

// DefaultConstructItems<FD3D12BindlessResourceManager::FGpuHeapData,int> @ 1459a1d30

void __cdecl
DefaultConstructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int> @ 1459a1d70

void __cdecl
DefaultConstructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int> @ 1459a1dc0

void __cdecl
DestructItems<FD3D12BindlessResourceManager::FGpuHeapData,int>(FGpuHeapData *param_1,int param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FD3D12DescriptorHeap *pFVar3;
  longlong lVar4;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = (param_1->UpdatedHandles).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar3 = (param_1->GpuHeap).Reference;
    if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<MessageFilter,int> @ 1459a1e30

/* WARNING: Enum "D3D12_MESSAGE_ID.conflict": Some values do not have unique names */

void __cdecl DestructItems<MessageFilter,int>(MessageFilter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SubString;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,int> @ 1459a1e70

void __cdecl
DestructItems<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,int>
          (TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

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

// DestructItems<TRefCountPtr<FD3D12SegHeap>,int> @ 1459a1eb0

void __cdecl
DestructItems<TRefCountPtr<FD3D12SegHeap>,int>(TRefCountPtr<FD3D12SegHeap> *param_1,int param_2)

{
  longlong *plVar1;
  FD3D12SegHeap *pFVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = param_1->Reference;
    if (pFVar2 != (FD3D12SegHeap *)0x0) {
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

// DestructItems<TRefCountPtr<FD3D12SyncPoint>,int> @ 1459a1f10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>(TRefCountPtr<FD3D12SyncPoint> *param_1,int param_2)

{
  longlong *plVar1;
  FD3D12SyncPoint *pFVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = param_1->Reference;
    if (pFVar2 != (FD3D12SyncPoint *)0x0) {
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

// DestructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int> @ 1459a1f70

void __cdecl
DestructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int>
          (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_1,
          int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Hash).SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EncodeBeginEventForContext<64,wchar_t_const_*,wchar_t_const_*> @ 1459a2f30

ulong64 * __cdecl
PixEventsLegacy::EncodeBeginEventForContext<64,wchar_t_const_*,wchar_t_const_*>
          (ulong64 (*param_1) [64],ulong64 param_2,wchar_t *param_3,wchar_t *param_4)

{
  ulong64 *local_res8;
  
  (*param_1)[0] = 0x400;
  (*param_1)[1] = param_2;
  local_res8 = *param_1 + 2;
  PIXCopyEventArgument<wchar_t_const_*>(&local_res8,*param_1 + 0x3e,param_3);
  PIXCopyEventArgument<wchar_t_const_*>(&local_res8,*param_1 + 0x3e,param_4);
  *local_res8 = 0;
  return local_res8;
}

// EnqueueLambdaMultiPipe<`FD3D12DynamicRHI::LockBuffer'::__l46::<lambda_1>_> @ 1459a2fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FRHICommandListBase::EnqueueLambdaMultiPipe<_FD3D12DynamicRHI::LockBuffer_::__l46::<lambda_1>_>
          (FRHICommandListBase *this,ERHIPipeline param_1,EThreadFence param_2,wchar_t *param_3,
          <lambda_1> *param_4)

{
  FD3D12ResourceLocation *pFVar1;
  int *piVar2;
  int iVar3;
  ERHIPipeline EVar4;
  code *pcVar5;
  ERHIPipeline EVar6;
  longlong *plVar7;
  bool bVar8;
  FRHICommandBase *pFVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *local_res8;
  FD3D12ContextArray local_38;
  
  if (((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
       (this->bExecuting != false)) &&
      ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTopOfPipe() || Bypass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x264,L"Cannot enqueue a multi-pipe lambda from the bottom of pipe."),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar4 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar9 = FMemStackBase::Alloc(&this->MemManager,0xa0,8);
    this->NumCommands = this->NumCommands + 1;
    pFVar1 = &param_4->NewLocation;
    *this->CommandLink = pFVar9;
    this->CommandLink = &pFVar9->Next;
    pFVar9->Next = (FRHICommandBase *)0x0;
    pFVar9->_padding_ =
         (longlong)
         &TRHILambdaCommandMultiPipe<FRHICommandListBase,`FD3D12DynamicRHI::LockBuffer'::`46'::<lambda_1>_>
          ::_vftable_;
    pFVar9[1]._padding_ = (longlong)param_4->Resource;
    if ((pFVar1->_padding_ == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FD3D12ResourceLocation::FD3D12ResourceLocation
              ((FD3D12ResourceLocation *)&pFVar9[1].Next,(FD3D12Device *)pFVar1->_padding_);
    FD3D12ResourceLocation::TransferOwnership((FD3D12ResourceLocation *)&pFVar9[1].Next,pFVar1);
    pFVar9[9]._padding_ = (longlong)param_3;
    *(ERHIPipeline *)&pFVar9[9].Next = param_1;
  }
  else {
    plVar12 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    for (; param_1 != None; param_1 = param_1 & param_1 - Graphics) {
      EVar6 = -param_1 & param_1;
      if ((EVar6 == Graphics) || (EVar6 != AsyncCompute)) {
        plVar13 = *(longlong **)&this->Contexts;
        plVar10 = plVar13;
        if (((EVar6 == Graphics) || (EVar6 != AsyncCompute)) &&
           ((plVar12 = plVar13, plVar13 = plVar7, EVar6 != Graphics && (EVar6 == AsyncCompute)))) {
          plVar10 = plVar7;
        }
      }
      else {
        plVar10 = *(longlong **)&(this->Contexts).field_0x8;
        plVar13 = plVar10;
      }
      if ((plVar10 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalContexts[Pipeline]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x26f,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar7 = plVar13;
    }
    uVar11 = 0;
    local_38._0_8_ = uVar11;
    if (plVar12 != (longlong *)0x0) {
      local_38._0_8_ = (**(code **)(*plVar12 + 0x148))(plVar12);
    }
    if (plVar7 != (longlong *)0x0) {
      uVar11 = (**(code **)(*plVar7 + 0x148))(plVar7);
    }
    local_38._8_8_ = uVar11;
    `FD3D12DynamicRHI::LockBuffer'::__l46::<lambda_1>::operator()(param_4,&local_38);
  }
  ActivatePipelines(this,EVar4);
  if ((param_2 == Enabled) &&
     (RHIThreadFence(this,SUB81(&local_res8,0)), local_res8 != (undefined8 *)0x0)) {
    LOCK();
    piVar2 = (int *)(local_res8 + 6);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>'::__l4::<lambda_2>_> @ 1459a3280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FTracker *this;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  ERHIAccess EVar10;
  ulonglong uVar11;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_10c;
  undefined4 uStack_e4;
  FOperation local_a8;
  FViewIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar11 = (ulonglong)param_2;
  uVar3 = param_3[uVar11];
  if (uVar3 != 0) {
    uVar8 = param_3[uVar3];
    puVar9 = param_3 + (ulonglong)uVar3 + 1;
    do {
      pFVar5 = *(FRHIShaderResourceView **)(pFVar4 + (ulonglong)(uVar8 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FRHIShaderResourceView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
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
        uVar11 = (ulonglong)(uint)param_2;
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView(param_4->Shader,uVar8 & 0xff,pFVar5);
      }
      FD3D12ResourceBinder::SetSRV(param_4->Binder,pFVar5,uVar8 & 0xff);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>'::__l4::<lambda_1>_> @ 1459a34f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  FScriptContainerElement *pFVar3;
  FRHITexture *pFVar4;
  FTracker *this;
  code *pcVar5;
  bool bVar6;
  FResourceIdentity *pFVar7;
  ERHIAccess EVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  FOperation local_a8;
  FResourceIdentity local_60;
  
  pFVar3 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar10 = param_3[param_2];
  if (uVar10 != 0) {
    puVar9 = param_3 + (ulonglong)uVar10 + 1;
    uVar10 = param_3[uVar10];
    do {
      pFVar4 = *(FRHITexture **)(pFVar3 + (ulonglong)(uVar10 >> 8 & 0xffff) * 8);
      if ((pFVar4 == (FRHITexture *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar8 = SRVCompute;
        }
        else {
          EVar8 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar8 = SRVGraphicsPixel;
          }
        }
        pFVar7 = RHIValidation::FTextureResource::GetViewIdentity
                           ((FTextureResource *)&pFVar4->_padding_,&local_60,0,0,0,0,0,1);
        EVar2 = this->Pipeline;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = pFVar7->Resource;
        local_a8.field1_0x8.Data_SetTrackedAccess.State =
             (FState)*(undefined8 *)&pFVar7->SubresourceRange;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)*(undefined8 *)&(pFVar7->SubresourceRange).ArraySlice;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (pFVar7->SubresourceRange).PlaneIndex;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             (pFVar7->SubresourceRange).NumPlanes;
        LOCK();
        ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        uStack_ec = CONCAT13(local_resf,CONCAT21(local_resd,EVar2));
        local_a8._4_4_ = uStack_114;
        local_a8.Type = Assert;
        local_a8.field1_0x8._36_4_ = uStack_ec;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar8;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (pFVar4->LastRenderTime).LastRenderTime) {
        (pFVar4->LastRenderTime).LastRenderTime = (double)*param_4->CurrentTimeForTextureTimes;
      }
      FD3D12ResourceBinder::SetTexture(param_4->Binder,pFVar4,uVar10 & 0xff);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// HeapSortInternal<FD3D12Adapter::FAllocatedResourceResult,int,FIdentityFunctor,`FD3D12Adapter::FindResourcesNearGPUAddress'::__l2::<lambda_1>_> @ 1459a40f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FD3D12Adapter::FAllocatedResourceResult,int,FIdentityFunctor,_FD3D12Adapter::FindResourcesNearGPUAddress_::__l2::<lambda_1>_>
          (FAllocatedResourceResult *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4
          )

{
  code *pcVar1;
  ulong64 uVar2;
  FD3D12ResourceLocation *pFVar3;
  ulong64 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FAllocatedResourceResult *pFVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1459a41e3:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar12 = param_1 + lVar9;
          do {
            uVar2 = pFVar12->Distance;
            iVar10 = 0;
            pFVar3 = param_1->Allocation;
            uVar4 = param_1->Distance;
            param_1->Allocation = pFVar12->Allocation;
            param_1->Distance = uVar2;
            pFVar12->Allocation = pFVar3;
            pFVar12->Distance = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if (param_1[(longlong)iVar11 + 2].Distance < param_1[iVar6].Distance) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (param_1[iVar6].Distance <= param_1[iVar10].Distance) break;
                uVar2 = param_1[iVar6].Distance;
                pFVar3 = param_1[iVar10].Allocation;
                uVar4 = param_1[iVar10].Distance;
                param_1[iVar10].Allocation = param_1[iVar6].Allocation;
                param_1[iVar10].Distance = uVar2;
                param_1[iVar6].Allocation = pFVar3;
                param_1[iVar6].Distance = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].Distance < param_1[iVar8].Distance) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (param_1[iVar8].Distance <= param_1[iVar6].Distance) goto LAB_1459a41e3;
    uVar2 = param_1[iVar8].Distance;
    iVar7 = iVar8 * 2 + 1;
    pFVar3 = param_1[iVar6].Allocation;
    uVar4 = param_1[iVar6].Distance;
    param_1[iVar6].Allocation = param_1[iVar8].Allocation;
    param_1[iVar6].Distance = uVar2;
    param_1[iVar8].Allocation = pFVar3;
    param_1[iVar8].Distance = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<FD3D12Adapter::FTrackedAllocationData,int,FIdentityFunctor,TDereferenceWrapper<FD3D12Adapter::FTrackedAllocationData,`FD3D12Adapter::DumpTrackedAllocationData'::__l2::<lambda_1>_>_> @ 1459a42c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FD3D12Adapter::FTrackedAllocationData,int,FIdentityFunctor,TDereferenceWrapper<FD3D12Adapter::FTrackedAllocationData,_FD3D12Adapter::DumpTrackedAllocationData_::__l2::<lambda_1>_>_>
          (FTrackedAllocationData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FD3D12Adapter::FTrackedAllocationData,_public:_void___cdecl_FD3D12Adapter::DumpTrackedAllocationData(FOutputDevice_&,bool,bool)_::_2_::<lambda_1>_>
          param_4)

{
  ulong64 *puVar1;
  code *pcVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FTrackedAllocationData *pFVar12;
  FTrackedAllocationData *pFVar13;
  FTrackedAllocationData *pFVar14;
  ulong64 *puVar15;
  FTrackedAllocationData *pFVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulong64 local_118 [34];
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar19 = iVar11;
  iVar21 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_1459a450c:
      if (iVar21 == 0) {
        iVar11 = param_2 + -1;
        lVar20 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar16 = param_1 + lVar20;
          do {
            lVar17 = 2;
            pFVar13 = param_1;
            puVar15 = local_118;
            do {
              puVar1 = puVar15 + 0x10;
              uVar3 = pFVar13->AllocationSize;
              uVar4 = *(ulong64 *)&pFVar13->StackDepth;
              uVar5 = pFVar13->Stack[0];
              puVar7 = pFVar13->Stack;
              *puVar15 = (ulong64)pFVar13->ResourceAllocation;
              puVar15[1] = uVar3;
              uVar3 = pFVar13->Stack[1];
              uVar6 = pFVar13->Stack[2];
              puVar15[2] = uVar4;
              puVar15[3] = uVar5;
              uVar4 = pFVar13->Stack[3];
              uVar5 = pFVar13->Stack[4];
              puVar15[4] = uVar3;
              puVar15[5] = uVar6;
              uVar3 = pFVar13->Stack[5];
              uVar6 = pFVar13->Stack[6];
              puVar15[6] = uVar4;
              puVar15[7] = uVar5;
              uVar4 = pFVar13->Stack[7];
              uVar5 = pFVar13->Stack[8];
              puVar15[8] = uVar3;
              puVar15[9] = uVar6;
              uVar3 = pFVar13->Stack[9];
              uVar6 = pFVar13->Stack[10];
              puVar15[10] = uVar4;
              puVar15[0xb] = uVar5;
              uVar4 = pFVar13->Stack[0xb];
              uVar5 = pFVar13->Stack[0xc];
              puVar15[0xc] = uVar3;
              puVar15[0xd] = uVar6;
              puVar15[0xe] = uVar4;
              puVar15[0xf] = uVar5;
              lVar17 = lVar17 + -1;
              pFVar13 = (FTrackedAllocationData *)(puVar7 + 0xd);
              puVar15 = puVar1;
            } while (lVar17 != 0);
            lVar17 = 2;
            *puVar1 = (ulong64)((FTrackedAllocationData *)(puVar7 + 0xd))->ResourceAllocation;
            pFVar13 = pFVar16;
            pFVar12 = param_1;
            do {
              puVar15 = pFVar12->Stack;
              uVar3 = pFVar13->AllocationSize;
              puVar1 = pFVar13->Stack;
              pFVar12->ResourceAllocation = pFVar13->ResourceAllocation;
              pFVar12->AllocationSize = uVar3;
              uVar8 = *(undefined4 *)&pFVar13->field_0x14;
              uVar3 = pFVar13->Stack[0];
              pFVar12->StackDepth = pFVar13->StackDepth;
              *(undefined4 *)&pFVar12->field_0x14 = uVar8;
              pFVar12->Stack[0] = uVar3;
              uVar3 = pFVar13->Stack[2];
              pFVar12->Stack[1] = pFVar13->Stack[1];
              pFVar12->Stack[2] = uVar3;
              uVar3 = pFVar13->Stack[4];
              pFVar12->Stack[3] = pFVar13->Stack[3];
              pFVar12->Stack[4] = uVar3;
              uVar3 = pFVar13->Stack[6];
              pFVar12->Stack[5] = pFVar13->Stack[5];
              pFVar12->Stack[6] = uVar3;
              uVar3 = pFVar13->Stack[8];
              pFVar12->Stack[7] = pFVar13->Stack[7];
              pFVar12->Stack[8] = uVar3;
              uVar3 = pFVar13->Stack[10];
              pFVar12->Stack[9] = pFVar13->Stack[9];
              pFVar12->Stack[10] = uVar3;
              uVar3 = pFVar13->Stack[0xc];
              pFVar12->Stack[0xb] = pFVar13->Stack[0xb];
              pFVar12->Stack[0xc] = uVar3;
              lVar17 = lVar17 + -1;
              pFVar13 = (FTrackedAllocationData *)(puVar1 + 0xd);
              pFVar12 = (FTrackedAllocationData *)(puVar15 + 0xd);
            } while (lVar17 != 0);
            lVar17 = 2;
            ((FTrackedAllocationData *)(puVar15 + 0xd))->ResourceAllocation =
                 ((FTrackedAllocationData *)(puVar1 + 0xd))->ResourceAllocation;
            puVar15 = local_118;
            pFVar13 = pFVar16;
            do {
              puVar7 = pFVar13->Stack;
              uVar3 = puVar15[1];
              uVar4 = puVar15[2];
              uVar5 = puVar15[3];
              puVar1 = puVar15 + 0x10;
              pFVar13->ResourceAllocation = (FD3D12ResourceLocation *)*puVar15;
              pFVar13->AllocationSize = uVar3;
              uVar3 = puVar15[4];
              uVar6 = puVar15[5];
              *(ulong64 *)&pFVar13->StackDepth = uVar4;
              pFVar13->Stack[0] = uVar5;
              uVar4 = puVar15[6];
              uVar5 = puVar15[7];
              pFVar13->Stack[1] = uVar3;
              pFVar13->Stack[2] = uVar6;
              uVar3 = puVar15[8];
              uVar6 = puVar15[9];
              pFVar13->Stack[3] = uVar4;
              pFVar13->Stack[4] = uVar5;
              uVar4 = puVar15[10];
              uVar5 = puVar15[0xb];
              pFVar13->Stack[5] = uVar3;
              pFVar13->Stack[6] = uVar6;
              uVar3 = puVar15[0xc];
              uVar6 = puVar15[0xd];
              pFVar13->Stack[7] = uVar4;
              pFVar13->Stack[8] = uVar5;
              uVar4 = puVar15[0xe];
              uVar5 = puVar15[0xf];
              pFVar13->Stack[9] = uVar3;
              pFVar13->Stack[10] = uVar6;
              pFVar13->Stack[0xb] = uVar4;
              pFVar13->Stack[0xc] = uVar5;
              lVar17 = lVar17 + -1;
              puVar15 = puVar1;
              pFVar13 = (FTrackedAllocationData *)(puVar7 + 0xd);
            } while (lVar17 != 0);
            iVar19 = 0;
            ((FTrackedAllocationData *)(puVar7 + 0xd))->ResourceAllocation =
                 (FD3D12ResourceLocation *)*puVar1;
            if (1 < iVar11) {
              do {
                iVar21 = iVar19 * 2;
                iVar10 = iVar21 + 1;
                if (iVar21 + 2 < iVar11) {
                  if (param_1[iVar10].AllocationSize < param_1[(longlong)iVar21 + 2].AllocationSize)
                  {
                    iVar10 = iVar21;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar13 = param_1 + iVar10;
                pFVar12 = param_1 + iVar19;
                if (pFVar12->AllocationSize <= pFVar13->AllocationSize) break;
                lVar17 = 2;
                pFVar14 = pFVar12;
                puVar15 = local_118;
                do {
                  puVar1 = puVar15 + 0x10;
                  uVar3 = pFVar14->AllocationSize;
                  uVar4 = *(ulong64 *)&pFVar14->StackDepth;
                  uVar5 = pFVar14->Stack[0];
                  puVar7 = pFVar14->Stack;
                  *puVar15 = (ulong64)pFVar14->ResourceAllocation;
                  puVar15[1] = uVar3;
                  uVar3 = pFVar14->Stack[1];
                  uVar6 = pFVar14->Stack[2];
                  puVar15[2] = uVar4;
                  puVar15[3] = uVar5;
                  uVar4 = pFVar14->Stack[3];
                  uVar5 = pFVar14->Stack[4];
                  puVar15[4] = uVar3;
                  puVar15[5] = uVar6;
                  uVar3 = pFVar14->Stack[5];
                  uVar6 = pFVar14->Stack[6];
                  puVar15[6] = uVar4;
                  puVar15[7] = uVar5;
                  uVar4 = pFVar14->Stack[7];
                  uVar5 = pFVar14->Stack[8];
                  puVar15[8] = uVar3;
                  puVar15[9] = uVar6;
                  uVar3 = pFVar14->Stack[9];
                  uVar6 = pFVar14->Stack[10];
                  puVar15[10] = uVar4;
                  puVar15[0xb] = uVar5;
                  uVar4 = pFVar14->Stack[0xb];
                  uVar5 = pFVar14->Stack[0xc];
                  puVar15[0xc] = uVar3;
                  puVar15[0xd] = uVar6;
                  puVar15[0xe] = uVar4;
                  puVar15[0xf] = uVar5;
                  lVar17 = lVar17 + -1;
                  pFVar14 = (FTrackedAllocationData *)(puVar7 + 0xd);
                  puVar15 = puVar1;
                } while (lVar17 != 0);
                *puVar1 = (ulong64)((FTrackedAllocationData *)(puVar7 + 0xd))->ResourceAllocation;
                lVar17 = 2;
                pFVar14 = pFVar13;
                do {
                  puVar15 = pFVar12->Stack;
                  uVar3 = pFVar14->AllocationSize;
                  puVar1 = pFVar14->Stack;
                  pFVar12->ResourceAllocation = pFVar14->ResourceAllocation;
                  pFVar12->AllocationSize = uVar3;
                  uVar8 = *(undefined4 *)&pFVar14->field_0x14;
                  uVar3 = pFVar14->Stack[0];
                  pFVar12->StackDepth = pFVar14->StackDepth;
                  *(undefined4 *)&pFVar12->field_0x14 = uVar8;
                  pFVar12->Stack[0] = uVar3;
                  uVar3 = pFVar14->Stack[2];
                  pFVar12->Stack[1] = pFVar14->Stack[1];
                  pFVar12->Stack[2] = uVar3;
                  uVar3 = pFVar14->Stack[4];
                  pFVar12->Stack[3] = pFVar14->Stack[3];
                  pFVar12->Stack[4] = uVar3;
                  uVar3 = pFVar14->Stack[6];
                  pFVar12->Stack[5] = pFVar14->Stack[5];
                  pFVar12->Stack[6] = uVar3;
                  uVar3 = pFVar14->Stack[8];
                  pFVar12->Stack[7] = pFVar14->Stack[7];
                  pFVar12->Stack[8] = uVar3;
                  uVar3 = pFVar14->Stack[10];
                  pFVar12->Stack[9] = pFVar14->Stack[9];
                  pFVar12->Stack[10] = uVar3;
                  uVar3 = pFVar14->Stack[0xc];
                  pFVar12->Stack[0xb] = pFVar14->Stack[0xb];
                  pFVar12->Stack[0xc] = uVar3;
                  lVar17 = lVar17 + -1;
                  pFVar14 = (FTrackedAllocationData *)(puVar1 + 0xd);
                  pFVar12 = (FTrackedAllocationData *)(puVar15 + 0xd);
                } while (lVar17 != 0);
                lVar17 = 2;
                ((FTrackedAllocationData *)(puVar15 + 0xd))->ResourceAllocation =
                     ((FTrackedAllocationData *)(puVar1 + 0xd))->ResourceAllocation;
                puVar15 = local_118;
                do {
                  puVar7 = pFVar13->Stack;
                  uVar3 = puVar15[1];
                  uVar4 = puVar15[2];
                  uVar5 = puVar15[3];
                  puVar1 = puVar15 + 0x10;
                  pFVar13->ResourceAllocation = (FD3D12ResourceLocation *)*puVar15;
                  pFVar13->AllocationSize = uVar3;
                  uVar3 = puVar15[4];
                  uVar6 = puVar15[5];
                  *(ulong64 *)&pFVar13->StackDepth = uVar4;
                  pFVar13->Stack[0] = uVar5;
                  uVar4 = puVar15[6];
                  uVar5 = puVar15[7];
                  pFVar13->Stack[1] = uVar3;
                  pFVar13->Stack[2] = uVar6;
                  uVar3 = puVar15[8];
                  uVar6 = puVar15[9];
                  pFVar13->Stack[3] = uVar4;
                  pFVar13->Stack[4] = uVar5;
                  uVar4 = puVar15[10];
                  uVar5 = puVar15[0xb];
                  pFVar13->Stack[5] = uVar3;
                  pFVar13->Stack[6] = uVar6;
                  uVar3 = puVar15[0xc];
                  uVar6 = puVar15[0xd];
                  pFVar13->Stack[7] = uVar4;
                  pFVar13->Stack[8] = uVar5;
                  uVar4 = puVar15[0xe];
                  uVar5 = puVar15[0xf];
                  pFVar13->Stack[9] = uVar3;
                  pFVar13->Stack[10] = uVar6;
                  pFVar13->Stack[0xb] = uVar4;
                  pFVar13->Stack[0xc] = uVar5;
                  lVar17 = lVar17 + -1;
                  puVar15 = puVar1;
                  pFVar13 = (FTrackedAllocationData *)(puVar7 + 0xd);
                } while (lVar17 != 0);
                ((FTrackedAllocationData *)(puVar7 + 0xd))->ResourceAllocation =
                     (FD3D12ResourceLocation *)*puVar1;
                iVar19 = iVar10;
              } while (iVar10 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar20 = lVar20 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar20);
        }
        return;
      }
      iVar10 = iVar21 + -1;
      iVar11 = iVar19 + -2;
      iVar19 = iVar11;
      iVar21 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar18 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[iVar18].AllocationSize < param_1[(longlong)iVar11 + 2].AllocationSize) {
        iVar18 = iVar11;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar16 = param_1 + iVar18;
    pFVar13 = param_1 + iVar10;
    if (pFVar13->AllocationSize <= pFVar16->AllocationSize) goto LAB_1459a450c;
    lVar20 = 2;
    pFVar12 = pFVar13;
    puVar15 = local_118;
    do {
      puVar1 = puVar15 + 0x10;
      uVar3 = pFVar12->AllocationSize;
      uVar4 = *(ulong64 *)&pFVar12->StackDepth;
      uVar5 = pFVar12->Stack[0];
      puVar7 = pFVar12->Stack;
      *puVar15 = (ulong64)pFVar12->ResourceAllocation;
      puVar15[1] = uVar3;
      uVar3 = pFVar12->Stack[1];
      uVar6 = pFVar12->Stack[2];
      puVar15[2] = uVar4;
      puVar15[3] = uVar5;
      uVar4 = pFVar12->Stack[3];
      uVar5 = pFVar12->Stack[4];
      puVar15[4] = uVar3;
      puVar15[5] = uVar6;
      uVar3 = pFVar12->Stack[5];
      uVar6 = pFVar12->Stack[6];
      puVar15[6] = uVar4;
      puVar15[7] = uVar5;
      uVar4 = pFVar12->Stack[7];
      uVar5 = pFVar12->Stack[8];
      puVar15[8] = uVar3;
      puVar15[9] = uVar6;
      uVar3 = pFVar12->Stack[9];
      uVar6 = pFVar12->Stack[10];
      puVar15[10] = uVar4;
      puVar15[0xb] = uVar5;
      uVar4 = pFVar12->Stack[0xb];
      uVar5 = pFVar12->Stack[0xc];
      puVar15[0xc] = uVar3;
      puVar15[0xd] = uVar6;
      puVar15[0xe] = uVar4;
      puVar15[0xf] = uVar5;
      lVar20 = lVar20 + -1;
      pFVar12 = (FTrackedAllocationData *)(puVar7 + 0xd);
      puVar15 = puVar1;
    } while (lVar20 != 0);
    *puVar1 = (ulong64)((FTrackedAllocationData *)(puVar7 + 0xd))->ResourceAllocation;
    lVar20 = 2;
    pFVar12 = pFVar16;
    do {
      puVar15 = pFVar13->Stack;
      uVar3 = pFVar12->AllocationSize;
      puVar1 = pFVar12->Stack;
      pFVar13->ResourceAllocation = pFVar12->ResourceAllocation;
      pFVar13->AllocationSize = uVar3;
      uVar8 = *(undefined4 *)&pFVar12->field_0x14;
      uVar3 = pFVar12->Stack[0];
      pFVar13->StackDepth = pFVar12->StackDepth;
      *(undefined4 *)&pFVar13->field_0x14 = uVar8;
      pFVar13->Stack[0] = uVar3;
      uVar3 = pFVar12->Stack[2];
      pFVar13->Stack[1] = pFVar12->Stack[1];
      pFVar13->Stack[2] = uVar3;
      uVar3 = pFVar12->Stack[4];
      pFVar13->Stack[3] = pFVar12->Stack[3];
      pFVar13->Stack[4] = uVar3;
      uVar3 = pFVar12->Stack[6];
      pFVar13->Stack[5] = pFVar12->Stack[5];
      pFVar13->Stack[6] = uVar3;
      uVar3 = pFVar12->Stack[8];
      pFVar13->Stack[7] = pFVar12->Stack[7];
      pFVar13->Stack[8] = uVar3;
      uVar3 = pFVar12->Stack[10];
      pFVar13->Stack[9] = pFVar12->Stack[9];
      pFVar13->Stack[10] = uVar3;
      uVar3 = pFVar12->Stack[0xc];
      pFVar13->Stack[0xb] = pFVar12->Stack[0xb];
      pFVar13->Stack[0xc] = uVar3;
      lVar20 = lVar20 + -1;
      pFVar12 = (FTrackedAllocationData *)(puVar1 + 0xd);
      pFVar13 = (FTrackedAllocationData *)(puVar15 + 0xd);
    } while (lVar20 != 0);
    lVar20 = 2;
    ((FTrackedAllocationData *)(puVar15 + 0xd))->ResourceAllocation =
         ((FTrackedAllocationData *)(puVar1 + 0xd))->ResourceAllocation;
    puVar15 = local_118;
    do {
      puVar7 = pFVar16->Stack;
      uVar3 = puVar15[1];
      uVar4 = puVar15[2];
      uVar5 = puVar15[3];
      puVar1 = puVar15 + 0x10;
      pFVar16->ResourceAllocation = (FD3D12ResourceLocation *)*puVar15;
      pFVar16->AllocationSize = uVar3;
      uVar3 = puVar15[4];
      uVar6 = puVar15[5];
      *(ulong64 *)&pFVar16->StackDepth = uVar4;
      pFVar16->Stack[0] = uVar5;
      uVar4 = puVar15[6];
      uVar5 = puVar15[7];
      pFVar16->Stack[1] = uVar3;
      pFVar16->Stack[2] = uVar6;
      uVar3 = puVar15[8];
      uVar6 = puVar15[9];
      pFVar16->Stack[3] = uVar4;
      pFVar16->Stack[4] = uVar5;
      uVar4 = puVar15[10];
      uVar5 = puVar15[0xb];
      pFVar16->Stack[5] = uVar3;
      pFVar16->Stack[6] = uVar6;
      uVar3 = puVar15[0xc];
      uVar6 = puVar15[0xd];
      pFVar16->Stack[7] = uVar4;
      pFVar16->Stack[8] = uVar5;
      uVar4 = puVar15[0xe];
      uVar5 = puVar15[0xf];
      pFVar16->Stack[9] = uVar3;
      pFVar16->Stack[10] = uVar6;
      pFVar16->Stack[0xb] = uVar4;
      pFVar16->Stack[0xc] = uVar5;
      lVar20 = lVar20 + -1;
      puVar15 = puVar1;
      pFVar16 = (FTrackedAllocationData *)(puVar7 + 0xd);
    } while (lVar20 != 0);
    ((FTrackedAllocationData *)(puVar7 + 0xd))->ResourceAllocation =
         (FD3D12ResourceLocation *)*puVar1;
    iVar11 = iVar18 * 2 + 1;
    iVar10 = iVar18;
  } while( true );
}

// IID_PPV_ARGS_Helper<ID3D12CommandAllocator> @ 1459a4860

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12CommandAllocator>(ID3D12CommandAllocator **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12CommandSignature> @ 1459a4870

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12CommandSignature>(ID3D12CommandSignature **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Debug1> @ 1459a4880

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Debug1>(ID3D12Debug1 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Debug> @ 1459a4890

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Debug>(ID3D12Debug **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12DebugCommandList> @ 1459a48a0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12DebugCommandList>(ID3D12DebugCommandList **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12DebugDevice> @ 1459a48b0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12DebugDevice>(ID3D12DebugDevice **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device10> @ 1459a48c0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device10>(ID3D12Device10 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device11> @ 1459a48d0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device11>(ID3D12Device11 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device12> @ 1459a48e0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device12>(ID3D12Device12 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device1> @ 1459a48f0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device1>(ID3D12Device1 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device2> @ 1459a4900

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device2>(ID3D12Device2 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device3> @ 1459a4910

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device3>(ID3D12Device3 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device4> @ 1459a4920

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device4>(ID3D12Device4 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device5> @ 1459a4930

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device5>(ID3D12Device5 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device6> @ 1459a4940

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device6>(ID3D12Device6 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device7> @ 1459a4950

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device7>(ID3D12Device7 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device8> @ 1459a4960

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device8>(ID3D12Device8 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device9> @ 1459a4970

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device9>(ID3D12Device9 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Device> @ 1459a4980

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Device>(ID3D12Device **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedDataSettings1> @ 1459a4990

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedDataSettings1>
          (ID3D12DeviceRemovedExtendedDataSettings1 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedDataSettings2> @ 1459a49a0

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedDataSettings2>
          (ID3D12DeviceRemovedExtendedDataSettings2 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedDataSettings> @ 1459a49b0

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12DeviceRemovedExtendedDataSettings>
          (ID3D12DeviceRemovedExtendedDataSettings **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList10> @ 1459a49c0

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList10>(ID3D12GraphicsCommandList10 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList1> @ 1459a49d0

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList1>(ID3D12GraphicsCommandList1 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList2> @ 1459a49e0

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList2>(ID3D12GraphicsCommandList2 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList3> @ 1459a49f0

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList3>(ID3D12GraphicsCommandList3 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList4> @ 1459a4a00

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList4>(ID3D12GraphicsCommandList4 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList5> @ 1459a4a10

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList5>(ID3D12GraphicsCommandList5 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList6> @ 1459a4a20

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList6>(ID3D12GraphicsCommandList6 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList7> @ 1459a4a30

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList7>(ID3D12GraphicsCommandList7 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList8> @ 1459a4a40

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList8>(ID3D12GraphicsCommandList8 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList9> @ 1459a4a50

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList9>(ID3D12GraphicsCommandList9 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList> @ 1459a4a60

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12GraphicsCommandList>(ID3D12GraphicsCommandList **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Heap> @ 1459a4a70

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Heap>(ID3D12Heap **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIAdapter> @ 1459a4a80

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIAdapter>(IDXGIAdapter **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIDebug> @ 1459a4a90

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIDebug>(IDXGIDebug **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIFactory2> @ 1459a4aa0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIFactory2>(IDXGIFactory2 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIFactory3> @ 1459a4ab0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIFactory3>(IDXGIFactory3 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIFactory4> @ 1459a4ac0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIFactory4>(IDXGIFactory4 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIFactory6> @ 1459a4ad0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIFactory6>(IDXGIFactory6 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IDXGIFactory7> @ 1459a4ae0

void ** __cdecl IID_PPV_ARGS_Helper<IDXGIFactory7>(IDXGIFactory7 **param_1)

{
  return param_1;
}

// IntroSortInternal<FD3D12Adapter::FAllocatedResourceResult,int,FIdentityFunctor,`FD3D12Adapter::FindResourcesNearGPUAddress'::__l2::<lambda_1>_> @ 1459a4af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FD3D12Adapter::FAllocatedResourceResult,int,FIdentityFunctor,_FD3D12Adapter::FindResourcesNearGPUAddress_::__l2::<lambda_1>_>
          (FAllocatedResourceResult *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4
          )

{
  FAllocatedResourceResult *pFVar1;
  ulong64 uVar2;
  FD3D12ResourceLocation *pFVar3;
  ulong64 uVar4;
  int iVar5;
  FAllocatedResourceResult *pFVar6;
  FAllocatedResourceResult **ppFVar7;
  FAllocatedResourceResult *pFVar8;
  FAllocatedResourceResult *pFVar9;
  FAllocatedResourceResult *pFVar10;
  FAllocatedResourceResult *pFVar11;
  FAllocatedResourceResult *pFVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  FAllocatedResourceResult *local_338;
  FAllocatedResourceResult *local_328;
  FAllocatedResourceResult *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppFVar7 = &local_328;
    do {
      pFVar10 = ppFVar7[1];
      pFVar12 = *ppFVar7;
      pFVar1 = ppFVar7[2];
      iVar5 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar11 = pFVar12;
      if ((int)local_338 != 0) {
LAB_1459a4ba0:
        if (8 < iVar5) {
          uVar2 = pFVar11->Distance;
          pFVar8 = pFVar10 + 1;
          pFVar3 = pFVar11[iVar5 / 2].Allocation;
          uVar4 = pFVar11[iVar5 / 2].Distance;
          pFVar11[iVar5 / 2].Allocation = pFVar11->Allocation;
          pFVar11[iVar5 / 2].Distance = uVar2;
          pFVar11->Allocation = pFVar3;
          pFVar11->Distance = uVar4;
          pFVar12 = pFVar11;
LAB_1459a4bd0:
          pFVar6 = pFVar12;
          pFVar12 = pFVar6 + 1;
          if (pFVar12 <= pFVar10) goto code_r0x0001459a4bd9;
          goto LAB_1459a4be3;
        }
        for (; pFVar1 = pFVar11, pFVar12 = pFVar11, pFVar11 < pFVar10; pFVar10 = pFVar10 + -1) {
          while (pFVar8 = pFVar12 + 1, pFVar8 <= pFVar10) {
            pFVar6 = pFVar12 + 1;
            pFVar12 = pFVar8;
            if (pFVar1->Distance < pFVar6->Distance) {
              pFVar1 = pFVar8;
            }
          }
          pFVar3 = pFVar1->Allocation;
          uVar2 = pFVar1->Distance;
          uVar4 = pFVar10->Distance;
          pFVar1->Allocation = pFVar10->Allocation;
          pFVar1->Distance = uVar4;
          pFVar10->Allocation = pFVar3;
          pFVar10->Distance = uVar2;
        }
        goto LAB_1459a4ca4;
      }
LAB_1459a4c93:
      local_338 = pFVar1;
      HeapSortInternal<FD3D12Adapter::FAllocatedResourceResult,int,FIdentityFunctor,_FD3D12Adapter::FindResourcesNearGPUAddress_::__l2::<lambda_1>_>
                (pFVar12,iVar5,param_3,param_4);
LAB_1459a4ca4:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_328 <= ppFVar7);
  }
  return;
code_r0x0001459a4bd9:
  if (pFVar6[1].Distance <= pFVar11->Distance) goto LAB_1459a4bd0;
LAB_1459a4be3:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar11) break;
  } while (pFVar11->Distance <= pFVar9[-1].Distance);
  uVar2 = pFVar9[-1].Distance;
  if (pFVar12 <= pFVar8) {
    pFVar3 = pFVar12->Allocation;
    uVar4 = pFVar6[1].Distance;
    pFVar12->Allocation = pFVar8->Allocation;
    pFVar6[1].Distance = uVar2;
    pFVar8->Allocation = pFVar3;
    pFVar9[-1].Distance = uVar4;
    goto LAB_1459a4bd0;
  }
  pFVar3 = pFVar11->Allocation;
  uVar4 = pFVar11->Distance;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar11->Allocation = pFVar8->Allocation;
  pFVar11->Distance = uVar2;
  pFVar8->Allocation = pFVar3;
  pFVar9[-1].Distance = uVar4;
  if ((longlong)((longlong)pFVar8 + (-0x10 - (longlong)pFVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar10 - (longlong)pFVar12 & 0xfffffffffffffff0U)) {
    if (pFVar12 < pFVar10) {
      *ppFVar7 = pFVar12;
      ppFVar7[1] = pFVar10;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar11 + 1) goto LAB_1459a4ca4;
    pFVar10 = pFVar9 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar8) {
      *ppFVar7 = pFVar11;
      ppFVar7[1] = pFVar9 + -2;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar10 <= pFVar12) goto LAB_1459a4ca4;
  }
  iVar5 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4) + 1;
  pFVar11 = pFVar12;
  if ((int)local_338 == 0) goto LAB_1459a4c93;
  goto LAB_1459a4ba0;
}

// IntroSortInternal<FD3D12Adapter::FTrackedAllocationData,int,FIdentityFunctor,TDereferenceWrapper<FD3D12Adapter::FTrackedAllocationData,`FD3D12Adapter::DumpTrackedAllocationData'::__l2::<lambda_1>_>_> @ 1459a4d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FD3D12Adapter::FTrackedAllocationData,int,FIdentityFunctor,TDereferenceWrapper<FD3D12Adapter::FTrackedAllocationData,_FD3D12Adapter::DumpTrackedAllocationData_::__l2::<lambda_1>_>_>
          (FTrackedAllocationData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FD3D12Adapter::FTrackedAllocationData,_public:_void___cdecl_FD3D12Adapter::DumpTrackedAllocationData(FOutputDevice_&,bool,bool)_::_2_::<lambda_1>_>
          param_4)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  undefined4 uVar6;
  FTrackedAllocationData *pFVar7;
  ulong64 *puVar8;
  FTrackedAllocationData *pFVar9;
  FTrackedAllocationData *pFVar10;
  FTrackedAllocationData *pFVar11;
  ulong64 *puVar12;
  FTrackedAllocationData *pFVar13;
  int iVar14;
  FTrackedAllocationData *pFVar15;
  longlong lVar16;
  FTrackedAllocationData *pFVar17;
  FTrackedAllocationData *pFVar18;
  FTrackedAllocationData **ppFVar19;
  float fVar20;
  undefined1 auStack_478 [48];
  FTrackedAllocationData *local_448;
  ulong64 local_440 [33];
  FTrackedAllocationData *local_338;
  FTrackedAllocationData *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_478;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar15 = ppFVar19[1];
      pFVar7 = *ppFVar19;
      pFVar13 = ppFVar19[2];
      local_448._0_4_ = (int)pFVar13;
      iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar7) / 0x108) + 1;
      pFVar18 = pFVar7;
      if ((int)local_448 != 0) {
LAB_1459a4e20:
        if (8 < iVar14) {
          lVar16 = 2;
          pFVar7 = pFVar18 + iVar14 / 2;
          puVar12 = local_440;
          do {
            puVar8 = puVar12 + 0x10;
            uVar1 = pFVar7->AllocationSize;
            uVar2 = *(ulong64 *)&pFVar7->StackDepth;
            uVar3 = pFVar7->Stack[0];
            puVar5 = pFVar7->Stack;
            *puVar12 = (ulong64)pFVar7->ResourceAllocation;
            puVar12[1] = uVar1;
            uVar1 = pFVar7->Stack[1];
            uVar4 = pFVar7->Stack[2];
            puVar12[2] = uVar2;
            puVar12[3] = uVar3;
            uVar2 = pFVar7->Stack[3];
            uVar3 = pFVar7->Stack[4];
            puVar12[4] = uVar1;
            puVar12[5] = uVar4;
            uVar1 = pFVar7->Stack[5];
            uVar4 = pFVar7->Stack[6];
            puVar12[6] = uVar2;
            puVar12[7] = uVar3;
            uVar2 = pFVar7->Stack[7];
            uVar3 = pFVar7->Stack[8];
            puVar12[8] = uVar1;
            puVar12[9] = uVar4;
            uVar1 = pFVar7->Stack[9];
            uVar4 = pFVar7->Stack[10];
            puVar12[10] = uVar2;
            puVar12[0xb] = uVar3;
            uVar2 = pFVar7->Stack[0xb];
            uVar3 = pFVar7->Stack[0xc];
            puVar12[0xc] = uVar1;
            puVar12[0xd] = uVar4;
            puVar12[0xe] = uVar2;
            puVar12[0xf] = uVar3;
            lVar16 = lVar16 + -1;
            pFVar7 = (FTrackedAllocationData *)(puVar5 + 0xd);
            puVar12 = puVar8;
          } while (lVar16 != 0);
          *puVar8 = (ulong64)((FTrackedAllocationData *)(puVar5 + 0xd))->ResourceAllocation;
          lVar16 = 2;
          pFVar7 = pFVar18;
          pFVar10 = pFVar18 + iVar14 / 2;
          do {
            puVar12 = pFVar10->Stack;
            uVar1 = pFVar7->AllocationSize;
            puVar8 = pFVar7->Stack;
            pFVar10->ResourceAllocation = pFVar7->ResourceAllocation;
            pFVar10->AllocationSize = uVar1;
            uVar6 = *(undefined4 *)&pFVar7->field_0x14;
            uVar1 = pFVar7->Stack[0];
            pFVar10->StackDepth = pFVar7->StackDepth;
            *(undefined4 *)&pFVar10->field_0x14 = uVar6;
            pFVar10->Stack[0] = uVar1;
            uVar1 = pFVar7->Stack[2];
            pFVar10->Stack[1] = pFVar7->Stack[1];
            pFVar10->Stack[2] = uVar1;
            uVar1 = pFVar7->Stack[4];
            pFVar10->Stack[3] = pFVar7->Stack[3];
            pFVar10->Stack[4] = uVar1;
            uVar1 = pFVar7->Stack[6];
            pFVar10->Stack[5] = pFVar7->Stack[5];
            pFVar10->Stack[6] = uVar1;
            uVar1 = pFVar7->Stack[8];
            pFVar10->Stack[7] = pFVar7->Stack[7];
            pFVar10->Stack[8] = uVar1;
            uVar1 = pFVar7->Stack[10];
            pFVar10->Stack[9] = pFVar7->Stack[9];
            pFVar10->Stack[10] = uVar1;
            uVar1 = pFVar7->Stack[0xc];
            pFVar10->Stack[0xb] = pFVar7->Stack[0xb];
            pFVar10->Stack[0xc] = uVar1;
            lVar16 = lVar16 + -1;
            pFVar7 = (FTrackedAllocationData *)(puVar8 + 0xd);
            pFVar10 = (FTrackedAllocationData *)(puVar12 + 0xd);
          } while (lVar16 != 0);
          ((FTrackedAllocationData *)(puVar12 + 0xd))->ResourceAllocation =
               ((FTrackedAllocationData *)(puVar8 + 0xd))->ResourceAllocation;
          lVar16 = 2;
          puVar12 = local_440;
          pFVar7 = pFVar18;
          do {
            pFVar10 = (FTrackedAllocationData *)(pFVar7->Stack + 0xd);
            uVar1 = puVar12[1];
            uVar2 = puVar12[2];
            uVar3 = puVar12[3];
            puVar8 = puVar12 + 0x10;
            pFVar7->ResourceAllocation = (FD3D12ResourceLocation *)*puVar12;
            pFVar7->AllocationSize = uVar1;
            uVar1 = puVar12[4];
            uVar4 = puVar12[5];
            *(ulong64 *)&pFVar7->StackDepth = uVar2;
            pFVar7->Stack[0] = uVar3;
            uVar2 = puVar12[6];
            uVar3 = puVar12[7];
            pFVar7->Stack[1] = uVar1;
            pFVar7->Stack[2] = uVar4;
            uVar1 = puVar12[8];
            uVar4 = puVar12[9];
            pFVar7->Stack[3] = uVar2;
            pFVar7->Stack[4] = uVar3;
            uVar2 = puVar12[10];
            uVar3 = puVar12[0xb];
            pFVar7->Stack[5] = uVar1;
            pFVar7->Stack[6] = uVar4;
            uVar1 = puVar12[0xc];
            uVar4 = puVar12[0xd];
            pFVar7->Stack[7] = uVar2;
            pFVar7->Stack[8] = uVar3;
            uVar2 = puVar12[0xe];
            uVar3 = puVar12[0xf];
            pFVar7->Stack[9] = uVar1;
            pFVar7->Stack[10] = uVar4;
            pFVar7->Stack[0xb] = uVar2;
            pFVar7->Stack[0xc] = uVar3;
            lVar16 = lVar16 + -1;
            puVar12 = puVar8;
            pFVar7 = pFVar10;
          } while (lVar16 != 0);
          pFVar17 = pFVar15 + 1;
          pFVar7 = pFVar18;
          do {
            pFVar10->ResourceAllocation = (FD3D12ResourceLocation *)*puVar8;
            pFVar10 = pFVar7;
            do {
              pFVar7 = pFVar10 + 1;
              if (pFVar15 < pFVar7) break;
              pFVar11 = pFVar10 + 1;
              pFVar10 = pFVar7;
            } while (pFVar18->AllocationSize <= pFVar11->AllocationSize);
            do {
              pFVar10 = pFVar17;
              pFVar17 = pFVar10 + -1;
              if (pFVar17 <= pFVar18) break;
            } while (pFVar10[-1].AllocationSize <= pFVar18->AllocationSize);
            puVar12 = local_440;
            lVar16 = 2;
            pFVar11 = pFVar18;
            pFVar9 = pFVar7;
            if (pFVar17 < pFVar7) goto LAB_1459a5100;
            do {
              puVar8 = puVar12 + 0x10;
              uVar1 = pFVar9->AllocationSize;
              uVar2 = *(ulong64 *)&pFVar9->StackDepth;
              uVar3 = pFVar9->Stack[0];
              puVar5 = pFVar9->Stack;
              *puVar12 = (ulong64)pFVar9->ResourceAllocation;
              puVar12[1] = uVar1;
              uVar1 = pFVar9->Stack[1];
              uVar4 = pFVar9->Stack[2];
              puVar12[2] = uVar2;
              puVar12[3] = uVar3;
              uVar2 = pFVar9->Stack[3];
              uVar3 = pFVar9->Stack[4];
              puVar12[4] = uVar1;
              puVar12[5] = uVar4;
              uVar1 = pFVar9->Stack[5];
              uVar4 = pFVar9->Stack[6];
              puVar12[6] = uVar2;
              puVar12[7] = uVar3;
              uVar2 = pFVar9->Stack[7];
              uVar3 = pFVar9->Stack[8];
              puVar12[8] = uVar1;
              puVar12[9] = uVar4;
              uVar1 = pFVar9->Stack[9];
              uVar4 = pFVar9->Stack[10];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar3;
              uVar2 = pFVar9->Stack[0xb];
              uVar3 = pFVar9->Stack[0xc];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar4;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar3;
              lVar16 = lVar16 + -1;
              pFVar9 = (FTrackedAllocationData *)(puVar5 + 0xd);
              puVar12 = puVar8;
            } while (lVar16 != 0);
            lVar16 = 2;
            *puVar8 = (ulong64)((FTrackedAllocationData *)(puVar5 + 0xd))->ResourceAllocation;
            pFVar10 = pFVar17;
            pFVar11 = pFVar7;
            do {
              puVar12 = pFVar11->Stack;
              uVar1 = pFVar10->AllocationSize;
              puVar8 = pFVar10->Stack;
              pFVar11->ResourceAllocation = pFVar10->ResourceAllocation;
              pFVar11->AllocationSize = uVar1;
              uVar6 = *(undefined4 *)&pFVar10->field_0x14;
              uVar1 = pFVar10->Stack[0];
              pFVar11->StackDepth = pFVar10->StackDepth;
              *(undefined4 *)&pFVar11->field_0x14 = uVar6;
              pFVar11->Stack[0] = uVar1;
              uVar1 = pFVar10->Stack[2];
              pFVar11->Stack[1] = pFVar10->Stack[1];
              pFVar11->Stack[2] = uVar1;
              uVar1 = pFVar10->Stack[4];
              pFVar11->Stack[3] = pFVar10->Stack[3];
              pFVar11->Stack[4] = uVar1;
              uVar1 = pFVar10->Stack[6];
              pFVar11->Stack[5] = pFVar10->Stack[5];
              pFVar11->Stack[6] = uVar1;
              uVar1 = pFVar10->Stack[8];
              pFVar11->Stack[7] = pFVar10->Stack[7];
              pFVar11->Stack[8] = uVar1;
              uVar1 = pFVar10->Stack[10];
              pFVar11->Stack[9] = pFVar10->Stack[9];
              pFVar11->Stack[10] = uVar1;
              uVar1 = pFVar10->Stack[0xc];
              pFVar11->Stack[0xb] = pFVar10->Stack[0xb];
              pFVar11->Stack[0xc] = uVar1;
              lVar16 = lVar16 + -1;
              pFVar10 = (FTrackedAllocationData *)(puVar8 + 0xd);
              pFVar11 = (FTrackedAllocationData *)(puVar12 + 0xd);
            } while (lVar16 != 0);
            lVar16 = 2;
            ((FTrackedAllocationData *)(puVar12 + 0xd))->ResourceAllocation =
                 ((FTrackedAllocationData *)(puVar8 + 0xd))->ResourceAllocation;
            puVar12 = local_440;
            pFVar11 = pFVar17;
            do {
              pFVar10 = (FTrackedAllocationData *)(pFVar11->Stack + 0xd);
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar3 = puVar12[3];
              puVar8 = puVar12 + 0x10;
              pFVar11->ResourceAllocation = (FD3D12ResourceLocation *)*puVar12;
              pFVar11->AllocationSize = uVar1;
              uVar1 = puVar12[4];
              uVar4 = puVar12[5];
              *(ulong64 *)&pFVar11->StackDepth = uVar2;
              pFVar11->Stack[0] = uVar3;
              uVar2 = puVar12[6];
              uVar3 = puVar12[7];
              pFVar11->Stack[1] = uVar1;
              pFVar11->Stack[2] = uVar4;
              uVar1 = puVar12[8];
              uVar4 = puVar12[9];
              pFVar11->Stack[3] = uVar2;
              pFVar11->Stack[4] = uVar3;
              uVar2 = puVar12[10];
              uVar3 = puVar12[0xb];
              pFVar11->Stack[5] = uVar1;
              pFVar11->Stack[6] = uVar4;
              uVar1 = puVar12[0xc];
              uVar4 = puVar12[0xd];
              pFVar11->Stack[7] = uVar2;
              pFVar11->Stack[8] = uVar3;
              uVar2 = puVar12[0xe];
              uVar3 = puVar12[0xf];
              pFVar11->Stack[9] = uVar1;
              pFVar11->Stack[10] = uVar4;
              pFVar11->Stack[0xb] = uVar2;
              pFVar11->Stack[0xc] = uVar3;
              lVar16 = lVar16 + -1;
              puVar12 = puVar8;
              pFVar11 = pFVar10;
            } while (lVar16 != 0);
          } while( true );
        }
        while (pFVar7 = pFVar18, pFVar13 = pFVar18, pFVar18 < pFVar15) {
          while (pFVar13 = pFVar13 + 1, pFVar13 <= pFVar15) {
            if (pFVar13->AllocationSize < pFVar7->AllocationSize) {
              pFVar7 = pFVar13;
            }
          }
          lVar16 = 2;
          pFVar13 = pFVar7;
          puVar12 = local_440;
          do {
            puVar8 = puVar12 + 0x10;
            uVar1 = pFVar13->AllocationSize;
            uVar2 = *(ulong64 *)&pFVar13->StackDepth;
            uVar3 = pFVar13->Stack[0];
            puVar5 = pFVar13->Stack;
            *puVar12 = (ulong64)pFVar13->ResourceAllocation;
            puVar12[1] = uVar1;
            uVar1 = pFVar13->Stack[1];
            uVar4 = pFVar13->Stack[2];
            puVar12[2] = uVar2;
            puVar12[3] = uVar3;
            uVar2 = pFVar13->Stack[3];
            uVar3 = pFVar13->Stack[4];
            puVar12[4] = uVar1;
            puVar12[5] = uVar4;
            uVar1 = pFVar13->Stack[5];
            uVar4 = pFVar13->Stack[6];
            puVar12[6] = uVar2;
            puVar12[7] = uVar3;
            uVar2 = pFVar13->Stack[7];
            uVar3 = pFVar13->Stack[8];
            puVar12[8] = uVar1;
            puVar12[9] = uVar4;
            uVar1 = pFVar13->Stack[9];
            uVar4 = pFVar13->Stack[10];
            puVar12[10] = uVar2;
            puVar12[0xb] = uVar3;
            uVar2 = pFVar13->Stack[0xb];
            uVar3 = pFVar13->Stack[0xc];
            puVar12[0xc] = uVar1;
            puVar12[0xd] = uVar4;
            puVar12[0xe] = uVar2;
            puVar12[0xf] = uVar3;
            lVar16 = lVar16 + -1;
            pFVar13 = (FTrackedAllocationData *)(puVar5 + 0xd);
            puVar12 = puVar8;
          } while (lVar16 != 0);
          *puVar8 = (ulong64)((FTrackedAllocationData *)(puVar5 + 0xd))->ResourceAllocation;
          lVar16 = 2;
          pFVar13 = pFVar15;
          do {
            puVar12 = pFVar7->Stack;
            uVar1 = pFVar13->AllocationSize;
            puVar8 = pFVar13->Stack;
            pFVar7->ResourceAllocation = pFVar13->ResourceAllocation;
            pFVar7->AllocationSize = uVar1;
            uVar6 = *(undefined4 *)&pFVar13->field_0x14;
            uVar1 = pFVar13->Stack[0];
            pFVar7->StackDepth = pFVar13->StackDepth;
            *(undefined4 *)&pFVar7->field_0x14 = uVar6;
            pFVar7->Stack[0] = uVar1;
            uVar1 = pFVar13->Stack[2];
            pFVar7->Stack[1] = pFVar13->Stack[1];
            pFVar7->Stack[2] = uVar1;
            uVar1 = pFVar13->Stack[4];
            pFVar7->Stack[3] = pFVar13->Stack[3];
            pFVar7->Stack[4] = uVar1;
            uVar1 = pFVar13->Stack[6];
            pFVar7->Stack[5] = pFVar13->Stack[5];
            pFVar7->Stack[6] = uVar1;
            uVar1 = pFVar13->Stack[8];
            pFVar7->Stack[7] = pFVar13->Stack[7];
            pFVar7->Stack[8] = uVar1;
            uVar1 = pFVar13->Stack[10];
            pFVar7->Stack[9] = pFVar13->Stack[9];
            pFVar7->Stack[10] = uVar1;
            uVar1 = pFVar13->Stack[0xc];
            pFVar7->Stack[0xb] = pFVar13->Stack[0xb];
            pFVar7->Stack[0xc] = uVar1;
            lVar16 = lVar16 + -1;
            pFVar13 = (FTrackedAllocationData *)(puVar8 + 0xd);
            pFVar7 = (FTrackedAllocationData *)(puVar12 + 0xd);
          } while (lVar16 != 0);
          ((FTrackedAllocationData *)(puVar12 + 0xd))->ResourceAllocation =
               ((FTrackedAllocationData *)(puVar8 + 0xd))->ResourceAllocation;
          lVar16 = 2;
          puVar12 = local_440;
          pFVar13 = pFVar15;
          do {
            puVar5 = pFVar13->Stack;
            uVar1 = puVar12[1];
            uVar2 = puVar12[2];
            uVar3 = puVar12[3];
            puVar8 = puVar12 + 0x10;
            pFVar13->ResourceAllocation = (FD3D12ResourceLocation *)*puVar12;
            pFVar13->AllocationSize = uVar1;
            uVar1 = puVar12[4];
            uVar4 = puVar12[5];
            *(ulong64 *)&pFVar13->StackDepth = uVar2;
            pFVar13->Stack[0] = uVar3;
            uVar2 = puVar12[6];
            uVar3 = puVar12[7];
            pFVar13->Stack[1] = uVar1;
            pFVar13->Stack[2] = uVar4;
            uVar1 = puVar12[8];
            uVar4 = puVar12[9];
            pFVar13->Stack[3] = uVar2;
            pFVar13->Stack[4] = uVar3;
            uVar2 = puVar12[10];
            uVar3 = puVar12[0xb];
            pFVar13->Stack[5] = uVar1;
            pFVar13->Stack[6] = uVar4;
            uVar1 = puVar12[0xc];
            uVar4 = puVar12[0xd];
            pFVar13->Stack[7] = uVar2;
            pFVar13->Stack[8] = uVar3;
            uVar2 = puVar12[0xe];
            uVar3 = puVar12[0xf];
            pFVar13->Stack[9] = uVar1;
            pFVar13->Stack[10] = uVar4;
            pFVar13->Stack[0xb] = uVar2;
            pFVar13->Stack[0xc] = uVar3;
            lVar16 = lVar16 + -1;
            puVar12 = puVar8;
            pFVar13 = (FTrackedAllocationData *)(puVar5 + 0xd);
          } while (lVar16 != 0);
          ((FTrackedAllocationData *)(puVar5 + 0xd))->ResourceAllocation =
               (FD3D12ResourceLocation *)*puVar8;
          pFVar15 = pFVar15 + -1;
        }
        goto LAB_1459a52f4;
      }
LAB_1459a52e5:
      local_448 = pFVar13;
      HeapSortInternal<FD3D12Adapter::FTrackedAllocationData,int,FIdentityFunctor,TDereferenceWrapper<FD3D12Adapter::FTrackedAllocationData,_FD3D12Adapter::DumpTrackedAllocationData_::__l2::<lambda_1>_>_>
                (pFVar7,iVar14,param_3,param_4);
LAB_1459a52f4:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
LAB_1459a5100:
  do {
    puVar8 = puVar12 + 0x10;
    uVar1 = pFVar11->AllocationSize;
    uVar2 = *(ulong64 *)&pFVar11->StackDepth;
    uVar3 = pFVar11->Stack[0];
    puVar5 = pFVar11->Stack;
    *puVar12 = (ulong64)pFVar11->ResourceAllocation;
    puVar12[1] = uVar1;
    uVar1 = pFVar11->Stack[1];
    uVar4 = pFVar11->Stack[2];
    puVar12[2] = uVar2;
    puVar12[3] = uVar3;
    uVar2 = pFVar11->Stack[3];
    uVar3 = pFVar11->Stack[4];
    puVar12[4] = uVar1;
    puVar12[5] = uVar4;
    uVar1 = pFVar11->Stack[5];
    uVar4 = pFVar11->Stack[6];
    puVar12[6] = uVar2;
    puVar12[7] = uVar3;
    uVar2 = pFVar11->Stack[7];
    uVar3 = pFVar11->Stack[8];
    puVar12[8] = uVar1;
    puVar12[9] = uVar4;
    uVar1 = pFVar11->Stack[9];
    uVar4 = pFVar11->Stack[10];
    puVar12[10] = uVar2;
    puVar12[0xb] = uVar3;
    uVar2 = pFVar11->Stack[0xb];
    uVar3 = pFVar11->Stack[0xc];
    puVar12[0xc] = uVar1;
    puVar12[0xd] = uVar4;
    puVar12[0xe] = uVar2;
    puVar12[0xf] = uVar3;
    lVar16 = lVar16 + -1;
    pFVar11 = (FTrackedAllocationData *)(puVar5 + 0xd);
    puVar12 = puVar8;
  } while (lVar16 != 0);
  lVar16 = 2;
  *puVar8 = (ulong64)((FTrackedAllocationData *)(puVar5 + 0xd))->ResourceAllocation;
  pFVar11 = pFVar17;
  pFVar9 = pFVar18;
  do {
    puVar12 = pFVar9->Stack;
    uVar1 = pFVar11->AllocationSize;
    puVar8 = pFVar11->Stack;
    pFVar9->ResourceAllocation = pFVar11->ResourceAllocation;
    pFVar9->AllocationSize = uVar1;
    uVar6 = *(undefined4 *)&pFVar11->field_0x14;
    uVar1 = pFVar11->Stack[0];
    pFVar9->StackDepth = pFVar11->StackDepth;
    *(undefined4 *)&pFVar9->field_0x14 = uVar6;
    pFVar9->Stack[0] = uVar1;
    uVar1 = pFVar11->Stack[2];
    pFVar9->Stack[1] = pFVar11->Stack[1];
    pFVar9->Stack[2] = uVar1;
    uVar1 = pFVar11->Stack[4];
    pFVar9->Stack[3] = pFVar11->Stack[3];
    pFVar9->Stack[4] = uVar1;
    uVar1 = pFVar11->Stack[6];
    pFVar9->Stack[5] = pFVar11->Stack[5];
    pFVar9->Stack[6] = uVar1;
    uVar1 = pFVar11->Stack[8];
    pFVar9->Stack[7] = pFVar11->Stack[7];
    pFVar9->Stack[8] = uVar1;
    uVar1 = pFVar11->Stack[10];
    pFVar9->Stack[9] = pFVar11->Stack[9];
    pFVar9->Stack[10] = uVar1;
    uVar1 = pFVar11->Stack[0xc];
    pFVar9->Stack[0xb] = pFVar11->Stack[0xb];
    pFVar9->Stack[0xc] = uVar1;
    lVar16 = lVar16 + -1;
    pFVar11 = (FTrackedAllocationData *)(puVar8 + 0xd);
    pFVar9 = (FTrackedAllocationData *)(puVar12 + 0xd);
  } while (lVar16 != 0);
  lVar16 = 2;
  ((FTrackedAllocationData *)(puVar12 + 0xd))->ResourceAllocation =
       ((FTrackedAllocationData *)(puVar8 + 0xd))->ResourceAllocation;
  puVar12 = local_440;
  pFVar11 = pFVar17;
  do {
    puVar5 = pFVar11->Stack;
    uVar1 = puVar12[1];
    uVar2 = puVar12[2];
    uVar3 = puVar12[3];
    puVar8 = puVar12 + 0x10;
    pFVar11->ResourceAllocation = (FD3D12ResourceLocation *)*puVar12;
    pFVar11->AllocationSize = uVar1;
    uVar1 = puVar12[4];
    uVar4 = puVar12[5];
    *(ulong64 *)&pFVar11->StackDepth = uVar2;
    pFVar11->Stack[0] = uVar3;
    uVar2 = puVar12[6];
    uVar3 = puVar12[7];
    pFVar11->Stack[1] = uVar1;
    pFVar11->Stack[2] = uVar4;
    uVar1 = puVar12[8];
    uVar4 = puVar12[9];
    pFVar11->Stack[3] = uVar2;
    pFVar11->Stack[4] = uVar3;
    uVar2 = puVar12[10];
    uVar3 = puVar12[0xb];
    pFVar11->Stack[5] = uVar1;
    pFVar11->Stack[6] = uVar4;
    uVar1 = puVar12[0xc];
    uVar4 = puVar12[0xd];
    pFVar11->Stack[7] = uVar2;
    pFVar11->Stack[8] = uVar3;
    uVar2 = puVar12[0xe];
    uVar3 = puVar12[0xf];
    pFVar11->Stack[9] = uVar1;
    pFVar11->Stack[10] = uVar4;
    pFVar11->Stack[0xb] = uVar2;
    pFVar11->Stack[0xc] = uVar3;
    lVar16 = lVar16 + -1;
    puVar12 = puVar8;
    pFVar11 = (FTrackedAllocationData *)(puVar5 + 0xd);
  } while (lVar16 != 0);
  local_448._0_4_ = (int)local_448 + -1;
  ((FTrackedAllocationData *)(puVar5 + 0xd))->ResourceAllocation = (FD3D12ResourceLocation *)*puVar8
  ;
  if (((longlong)pFVar17 + (-0x108 - (longlong)pFVar18)) / 0x108 <
      ((longlong)pFVar15 - (longlong)pFVar7) / 0x108) {
    if (pFVar7 < pFVar15) {
      *ppFVar19 = pFVar7;
      ppFVar19[1] = pFVar15;
      *(int *)(ppFVar19 + 2) = (int)local_448;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar17 <= pFVar18 + 1) goto LAB_1459a52f4;
    pFVar15 = pFVar10 + -2;
    pFVar7 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar17) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar10 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_448;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar15 <= pFVar7) goto LAB_1459a52f4;
  }
  iVar14 = (int)(((longlong)pFVar15 - (longlong)pFVar7) / 0x108) + 1;
  pFVar18 = pFVar7;
  if ((int)local_448 == 0) goto LAB_1459a52e5;
  goto LAB_1459a4e20;
}

// PIXBeginEvent<ID3D12GraphicsCommandList,wchar_t_const_*> @ 1459a54e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
PIXBeginEvent<ID3D12GraphicsCommandList,wchar_t_const_*>
          (ID3D12GraphicsCommandList *param_1,uint param_2,wchar_t *param_3,wchar_t *param_4)

{
  ulong64 *puVar1;
  undefined1 auStackY_268 [32];
  uchar local_238 [8];
  ulong64 *local_230;
  undefined8 local_228;
  ulonglong local_220;
  ulong64 local_218 [60];
  ulong64 local_38 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_230 = (ulong64 *)0x0;
  local_238[0] = '\0';
  PIXEventsDetail::PIXBeginEventOnContextCpu<wchar_t_const_*,wchar_t_const_*>
            (&local_230,local_238,param_1,(ulonglong)param_2,param_3,param_4);
  local_230 = local_218;
  local_228 = 0x400;
  local_220 = (ulonglong)param_2;
  PixEventsLegacy::PIXCopyEventArgument<wchar_t_const_*>(&local_230,local_38,param_3);
  PixEventsLegacy::PIXCopyEventArgument<wchar_t_const_*>(&local_230,local_38,param_4);
  puVar1 = local_230;
  *local_230 = 0;
  (**(code **)((longlong)*param_1 + 0x1c8))(param_1,2,&local_228,(int)puVar1 - (int)&local_228);
  return;
}

// PIXBeginEvent<ID3D12GraphicsCommandList,wchar_t_const_*,wchar_t_const_*> @ 1459a55d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
PIXEventsDetail::PIXBeginEvent<ID3D12GraphicsCommandList,wchar_t_const_*,wchar_t_const_*>
          (ID3D12GraphicsCommandList *param_1,ulong64 param_2,wchar_t *param_3,wchar_t *param_4)

{
  ulong64 *puVar1;
  undefined1 auStackY_268 [32];
  uchar local_238 [8];
  ulong64 *local_230;
  undefined8 local_228;
  ulong64 local_220;
  ulong64 local_218 [60];
  ulong64 local_38 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_230 = (ulong64 *)0x0;
  local_238[0] = '\0';
  PIXBeginEventOnContextCpu<wchar_t_const_*,wchar_t_const_*>
            (&local_230,local_238,param_1,param_2,param_3,param_4);
  local_230 = local_218;
  local_228 = 0x400;
  local_220 = param_2;
  PixEventsLegacy::PIXCopyEventArgument<wchar_t_const_*>(&local_230,local_38,param_3);
  PixEventsLegacy::PIXCopyEventArgument<wchar_t_const_*>(&local_230,local_38,param_4);
  puVar1 = local_230;
  *local_230 = 0;
  (**(code **)((longlong)*param_1 + 0x1c8))(param_1,2,&local_228,(int)puVar1 - (int)&local_228);
  return;
}

// PIXBeginEventOnContextCpu<wchar_t_const_*,wchar_t_const_*> @ 1459a56d0

void __cdecl
PIXEventsDetail::PIXBeginEventOnContextCpu<wchar_t_const_*,wchar_t_const_*>
          (ulong64 **param_1,uchar *param_2,void *param_3,ulong64 param_4,wchar_t *param_5,
          wchar_t *param_6)

{
  ulong64 *puVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  ulong64 *puVar4;
  uint uVar5;
  uint6 uVar6;
  byte bVar7;
  PIXEventsThreadInfo *pPVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulong64 *puVar11;
  wchar_t *pwVar12;
  ulong64 *local_38;
  LARGE_INTEGER local_30;
  
  pPVar8 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
  puVar11 = pPVar8->biasedLimit;
  if (puVar11 == (ulong64 *)0x0) {
    *param_1 = (ulong64 *)0x0;
  }
  else {
    puVar4 = pPVar8->destination;
    if (puVar4 < puVar11) {
      local_30.QuadPart = 0;
      puVar11 = puVar11 + 0x3e;
      QueryPerformanceCounter(&local_30);
      puVar1 = puVar4 + 2;
      *param_1 = puVar4;
      puVar4[1] = param_4;
      local_38 = puVar1;
      if (puVar1 < puVar11) {
        local_38 = puVar4 + 3;
        *puVar1 = (ulong64)param_3;
      }
      if (param_5 == (wchar_t *)0x0) {
        *local_38 = 0;
        local_38 = local_38 + 1;
      }
      else if (((ulonglong)param_5 & 7) == 0) {
        PIXCopyEventStringArgumentFast(&local_38,puVar11,param_5);
      }
      else if (local_38 < puVar11) {
        pwVar12 = param_5 + 2;
        do {
          uVar9 = (ulong64)(ushort)pwVar12[-2];
          if (uVar9 == 0) {
            *local_38 = 0;
            local_38 = local_38 + 1;
            break;
          }
          if (pwVar12[-1] == L'\0') {
LAB_1459a57ee:
            *local_38 = uVar9;
            local_38 = local_38 + 1;
            break;
          }
          uVar5 = CONCAT22(pwVar12[-1],pwVar12[-2]);
          uVar9 = (ulong64)uVar5;
          if (*pwVar12 == L'\0') goto LAB_1459a57ee;
          uVar6 = CONCAT24(*pwVar12,uVar5);
          uVar9 = (ulong64)uVar6;
          pwVar2 = pwVar12 + 1;
          if (*pwVar2 == L'\0') goto LAB_1459a57ee;
          pwVar12 = pwVar12 + 4;
          *local_38 = CONCAT26(*pwVar2,uVar6);
          local_38 = local_38 + 1;
        } while (local_38 < puVar11);
      }
      if (local_38 < puVar11) {
        if (param_6 == (wchar_t *)0x0) {
          *local_38 = 0;
LAB_1459a58ea:
          local_38 = local_38 + 1;
        }
        else {
          *local_38 = 0x400000000000000;
          local_38 = local_38 + 1;
          if (((ulonglong)param_6 & 7) == 0) {
            PIXCopyEventStringArgumentFast(&local_38,puVar11,param_6);
          }
          else if (local_38 < puVar11) {
            pwVar12 = param_6 + 2;
            do {
              wVar3 = pwVar12[-2];
              if ((ulonglong)(ushort)wVar3 == 0) {
                *local_38 = 0;
                local_38 = local_38 + 1;
                break;
              }
              if (pwVar12[-1] == L'\0') {
                *local_38 = (ulonglong)(ushort)wVar3;
                local_38 = local_38 + 1;
                break;
              }
              uVar5 = CONCAT22(pwVar12[-1],wVar3);
              if (*pwVar12 == L'\0') {
                *local_38 = (ulonglong)uVar5;
                local_38 = local_38 + 1;
                break;
              }
              uVar6 = CONCAT24(*pwVar12,uVar5);
              pwVar2 = pwVar12 + 1;
              if (*pwVar2 == L'\0') {
                *local_38 = (ulonglong)uVar6;
                goto LAB_1459a58ea;
              }
              pwVar12 = pwVar12 + 4;
              *local_38 = CONCAT26(*pwVar2,uVar6);
              local_38 = local_38 + 1;
            } while (local_38 < puVar11);
          }
        }
      }
      *local_38 = 0xfff80;
      uVar10 = (longlong)local_38 - (longlong)pPVar8->destination >> 3;
      bVar7 = (byte)uVar10;
      if (0x7f < uVar10) {
        bVar7 = 0x7f;
      }
      *param_2 = bVar7;
      **param_1 = (ulonglong)(bVar7 & 0x7f) | local_30.QuadPart << 0x14 | 0xf1080;
      pPVar8->destination = local_38;
    }
    else {
      PIXBeginEventOnContextCpuAllocate<wchar_t_const_*,wchar_t_const_*>
                (param_1,param_2,pPVar8,param_3,param_4,param_5,param_6);
    }
  }
  return;
}

// PIXBeginEventOnContextCpuAllocate<wchar_t_const_*,wchar_t_const_*> @ 1459a59a0

void __cdecl
PIXEventsDetail::PIXBeginEventOnContextCpuAllocate<wchar_t_const_*,wchar_t_const_*>
          (ulong64 **param_1,uchar *param_2,PIXEventsThreadInfo *param_3,void *param_4,
          ulong64 param_5,wchar_t *param_6,wchar_t *param_7)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ulong64 *puVar3;
  uint uVar4;
  uint6 uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulong64 *puVar10;
  wchar_t *pwVar11;
  ulonglong *local_28 [2];
  
  lVar7 = PIXEventsReplaceBlock(param_3,0);
  if (lVar7 != 0) {
    puVar3 = param_3->destination;
    if (puVar3 < param_3->biasedLimit) {
      puVar10 = param_3->biasedLimit + 0x3e;
      *param_1 = puVar3;
      puVar3[1] = param_5;
      puVar9 = puVar3 + 2;
      local_28[0] = puVar9;
      if (puVar9 < puVar10) {
        local_28[0] = puVar3 + 3;
        *puVar9 = (ulonglong)param_4;
      }
      if (param_6 == (wchar_t *)0x0) {
        *local_28[0] = 0;
        local_28[0] = local_28[0] + 1;
      }
      else if (((ulonglong)param_6 & 7) == 0) {
        PIXCopyEventStringArgumentFast(local_28,puVar10,param_6);
      }
      else if (local_28[0] < puVar10) {
        pwVar11 = param_6 + 2;
        do {
          uVar8 = (ulonglong)(ushort)pwVar11[-2];
          if (uVar8 == 0) {
            *local_28[0] = 0;
            local_28[0] = local_28[0] + 1;
            break;
          }
          if (pwVar11[-1] == L'\0') {
LAB_1459a5a9f:
            *local_28[0] = uVar8;
            local_28[0] = local_28[0] + 1;
            break;
          }
          uVar4 = CONCAT22(pwVar11[-1],pwVar11[-2]);
          uVar8 = (ulonglong)uVar4;
          if (*pwVar11 == L'\0') goto LAB_1459a5a9f;
          uVar5 = CONCAT24(*pwVar11,uVar4);
          uVar8 = (ulonglong)uVar5;
          pwVar1 = pwVar11 + 1;
          if (*pwVar1 == L'\0') goto LAB_1459a5a9f;
          pwVar11 = pwVar11 + 4;
          *local_28[0] = CONCAT26(*pwVar1,uVar5);
          local_28[0] = local_28[0] + 1;
        } while (local_28[0] < puVar10);
      }
      if (local_28[0] < puVar10) {
        if (param_7 == (wchar_t *)0x0) {
          *local_28[0] = 0;
LAB_1459a5b9a:
          local_28[0] = local_28[0] + 1;
        }
        else {
          *local_28[0] = 0x400000000000000;
          local_28[0] = local_28[0] + 1;
          if (((ulonglong)param_7 & 7) == 0) {
            PIXCopyEventStringArgumentFast(local_28,puVar10,param_7);
          }
          else if (local_28[0] < puVar10) {
            pwVar11 = param_7 + 2;
            do {
              wVar2 = pwVar11[-2];
              if ((ulonglong)(ushort)wVar2 == 0) {
                *local_28[0] = 0;
                local_28[0] = local_28[0] + 1;
                break;
              }
              if (pwVar11[-1] == L'\0') {
                *local_28[0] = (ulonglong)(ushort)wVar2;
                local_28[0] = local_28[0] + 1;
                break;
              }
              uVar4 = CONCAT22(pwVar11[-1],wVar2);
              if (*pwVar11 == L'\0') {
                *local_28[0] = (ulonglong)uVar4;
                local_28[0] = local_28[0] + 1;
                break;
              }
              uVar5 = CONCAT24(*pwVar11,uVar4);
              pwVar1 = pwVar11 + 1;
              if (*pwVar1 == L'\0') {
                *local_28[0] = (ulonglong)uVar5;
                goto LAB_1459a5b9a;
              }
              pwVar11 = pwVar11 + 4;
              *local_28[0] = CONCAT26(*pwVar1,uVar5);
              local_28[0] = local_28[0] + 1;
            } while (local_28[0] < puVar10);
          }
        }
      }
      *local_28[0] = 0xfff80;
      uVar8 = (longlong)local_28[0] - (longlong)param_3->destination >> 3;
      bVar6 = (byte)uVar8;
      if (0x7f < uVar8) {
        bVar6 = 0x7f;
      }
      *param_2 = bVar6;
      **param_1 = (ulonglong)(bVar6 & 0x7f) | lVar7 << 0x14 | 0xf1080;
      param_3->destination = local_28[0];
      return;
    }
  }
  *param_1 = (ulong64 *)0x0;
  return;
}

// PIXCopyEventArgument<wchar_t_const_*> @ 1459a5c10

void __cdecl
PixEventsLegacy::PIXCopyEventArgument<wchar_t_const_*>
          (ulong64 **param_1,ulong64 *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  ulong64 *puVar2;
  uint uVar3;
  uint6 uVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  wchar_t wVar8;
  wchar_t wVar9;
  wchar_t wVar10;
  wchar_t wVar11;
  wchar_t wVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  ulonglong *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  puVar2 = *param_1;
  if (puVar2 < param_2) {
    if (param_3 == (wchar_t *)0x0) {
      *puVar2 = 0;
      *param_1 = *param_1 + 1;
      return;
    }
    if (((ulonglong)param_3 & 0xf) == 0) {
      *puVar2 = 0x800000000000000;
      pwVar14 = (wchar_t *)(*param_1 + 1);
      *param_1 = (ulong64 *)pwVar14;
      if (pwVar14 < param_2) {
        if (((ulonglong)pwVar14 & 0xf) == 0) {
          while( true ) {
            wVar5 = *param_3;
            wVar6 = param_3[1];
            wVar7 = param_3[2];
            wVar8 = param_3[3];
            wVar9 = param_3[4];
            wVar10 = param_3[5];
            wVar11 = param_3[6];
            wVar12 = param_3[7];
            *pwVar14 = wVar5;
            pwVar14[1] = wVar6;
            pwVar14[2] = wVar7;
            pwVar14[3] = wVar8;
            pwVar14[4] = wVar9;
            pwVar14[5] = wVar10;
            pwVar14[6] = wVar11;
            pwVar14[7] = wVar12;
            auVar16._0_2_ = -(ushort)(wVar5 == L'\0');
            auVar16._2_2_ = -(ushort)(wVar6 == L'\0');
            auVar16._4_2_ = -(ushort)(wVar7 == L'\0');
            auVar16._6_2_ = -(ushort)(wVar8 == L'\0');
            auVar16._8_2_ = -(ushort)(wVar9 == L'\0');
            auVar16._10_2_ = -(ushort)(wVar10 == L'\0');
            auVar16._12_2_ = -(ushort)(wVar11 == L'\0');
            auVar16._14_2_ = -(ushort)(wVar12 == L'\0');
            pwVar14 = (wchar_t *)(*param_1 + 2);
            *param_1 = (ulong64 *)pwVar14;
            if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar16 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar16 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0)
                || (auVar16._14_2_ >> 7 & 1) != 0) || (auVar16._14_2_ & 0x8000) != 0) break;
            param_3 = param_3 + 8;
            if (param_2 <= pwVar14) {
              return;
            }
          }
        }
        else {
          while( true ) {
            wVar5 = *param_3;
            wVar6 = param_3[1];
            wVar7 = param_3[2];
            wVar8 = param_3[3];
            wVar9 = param_3[4];
            wVar10 = param_3[5];
            wVar11 = param_3[6];
            wVar12 = param_3[7];
            *pwVar14 = wVar5;
            pwVar14[1] = wVar6;
            pwVar14[2] = wVar7;
            pwVar14[3] = wVar8;
            pwVar14[4] = wVar9;
            pwVar14[5] = wVar10;
            pwVar14[6] = wVar11;
            pwVar14[7] = wVar12;
            pwVar14 = (wchar_t *)(*param_1 + 2);
            auVar17._0_2_ = -(ushort)(wVar5 == L'\0');
            auVar17._2_2_ = -(ushort)(wVar6 == L'\0');
            auVar17._4_2_ = -(ushort)(wVar7 == L'\0');
            auVar17._6_2_ = -(ushort)(wVar8 == L'\0');
            auVar17._8_2_ = -(ushort)(wVar9 == L'\0');
            auVar17._10_2_ = -(ushort)(wVar10 == L'\0');
            auVar17._12_2_ = -(ushort)(wVar11 == L'\0');
            auVar17._14_2_ = -(ushort)(wVar12 == L'\0');
            *param_1 = (ulong64 *)pwVar14;
            if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0)
                || (auVar17._14_2_ >> 7 & 1) != 0) || (auVar17._14_2_ & 0x8000) != 0) break;
            param_3 = param_3 + 8;
            if (param_2 <= pwVar14) {
              return;
            }
          }
        }
      }
    }
    else {
      *puVar2 = 0x400000000000000;
      puVar15 = *param_1 + 1;
      *param_1 = puVar15;
      if (((ulonglong)param_3 & 7) == 0) {
        do {
          if (param_2 <= puVar15) {
            return;
          }
          uVar13 = *(ulonglong *)param_3;
          param_3 = param_3 + 4;
          *puVar15 = uVar13;
          puVar15 = *param_1 + 1;
          *param_1 = puVar15;
        } while ((short)uVar13 != 0 &&
                 ((uVar13 & 0xffff0000) != 0 &&
                 ((uVar13 & 0xffff00000000) != 0 && (uVar13 & 0xffff000000000000) != 0)));
      }
      else if (puVar15 < param_2) {
        pwVar14 = param_3 + 2;
        while( true ) {
          uVar13 = (ulonglong)(ushort)pwVar14[-2];
          if (uVar13 == 0) {
            *puVar15 = 0;
            *param_1 = *param_1 + 1;
            return;
          }
          if (pwVar14[-1] == L'\0') break;
          uVar3 = CONCAT22(pwVar14[-1],pwVar14[-2]);
          uVar13 = (ulonglong)uVar3;
          if (*pwVar14 == L'\0') break;
          uVar4 = CONCAT24(*pwVar14,uVar3);
          uVar13 = (ulonglong)uVar4;
          pwVar1 = pwVar14 + 1;
          if (*pwVar1 == L'\0') break;
          pwVar14 = pwVar14 + 4;
          *puVar15 = CONCAT26(*pwVar1,uVar4);
          *param_1 = *param_1 + 1;
          puVar15 = *param_1;
          if (param_2 <= puVar15) {
            return;
          }
        }
        *puVar15 = uVar13;
        *param_1 = *param_1 + 1;
        return;
      }
    }
  }
  return;
}

// PIXCopyEventArguments<wchar_t_const_*> @ 1459a5e10

void __cdecl
PIXEventsDetail::PIXCopyEventArguments<wchar_t_const_*>
          (ulong64 **param_1,ulong64 *param_2,wchar_t **param_3)

{
  ulonglong uVar1;
  ulong64 *puVar2;
  wchar_t *pwVar3;
  ulonglong *puVar4;
  
  puVar2 = *param_1;
  pwVar3 = *param_3;
  if (puVar2 < param_2) {
    if (pwVar3 != (wchar_t *)0x0) {
      *puVar2 = 0x400000000000000;
      *param_1 = *param_1 + 1;
      if (((ulonglong)pwVar3 & 7) != 0) {
        PIXCopyEventStringArgumentSlow(param_1,param_2,pwVar3);
        return;
      }
      puVar4 = *param_1;
      do {
        if (param_2 <= puVar4) {
          return;
        }
        uVar1 = *(ulonglong *)pwVar3;
        pwVar3 = pwVar3 + 4;
        *puVar4 = uVar1;
        puVar4 = *param_1 + 1;
        *param_1 = puVar4;
      } while ((short)uVar1 != 0 &&
               ((uVar1 & 0xffff0000) != 0 &&
               ((uVar1 & 0xffff00000000) != 0 && (uVar1 & 0xffff000000000000) != 0)));
      return;
    }
    *puVar2 = 0;
    *param_1 = *param_1 + 1;
  }
  return;
}

// PIXCopyEventArguments<wchar_t_const_*> @ 1459a5e60

void __cdecl
PixEventsLegacy::PIXCopyEventArguments<wchar_t_const_*>
          (ulong64 **param_1,ulong64 *param_2,wchar_t **param_3)

{
  PIXCopyEventArgument<wchar_t_const_*>(param_1,param_2,*param_3);
  return;
}

// PIXCopyEventArguments<wchar_t_const_*,wchar_t_const_*> @ 1459a5e70

void __cdecl
PixEventsLegacy::PIXCopyEventArguments<wchar_t_const_*,wchar_t_const_*>
          (ulong64 **param_1,ulong64 *param_2,wchar_t **param_3,wchar_t **param_4)

{
  PIXCopyEventArgument<wchar_t_const_*>(param_1,param_2,*param_3);
  PIXCopyEventArgument<wchar_t_const_*>(param_1,param_2,*param_4);
  return;
}

// PIXCopyStringArgumentsWithContext<wchar_t_const_*,wchar_t_const_*> @ 1459a5ec0

void __cdecl
PIXEventsDetail::PIXCopyStringArgumentsWithContext<wchar_t_const_*,wchar_t_const_*>
          (ulong64 **param_1,ulong64 *param_2,void *param_3,wchar_t **param_4,wchar_t **param_5)

{
  wchar_t *pwVar1;
  ulong64 *puVar2;
  
  puVar2 = *param_1;
  if (puVar2 < param_2) {
    *puVar2 = 0;
    **param_1 = (ulong64)param_3;
    *param_1 = *param_1 + 1;
    puVar2 = *param_1;
  }
  pwVar1 = *param_4;
  if (pwVar1 == (wchar_t *)0x0) {
    *puVar2 = 0;
    *param_1 = *param_1 + 1;
  }
  else if (((ulonglong)pwVar1 & 7) == 0) {
    PIXCopyEventStringArgumentFast(param_1,param_2,pwVar1);
  }
  else {
    PIXCopyEventStringArgumentSlow(param_1,param_2,pwVar1);
  }
  pwVar1 = *param_5;
  puVar2 = *param_1;
  if (puVar2 < param_2) {
    if (pwVar1 != (wchar_t *)0x0) {
      *puVar2 = 0x400000000000000;
      *param_1 = *param_1 + 1;
      if (((ulonglong)pwVar1 & 7) == 0) {
        PIXCopyEventStringArgumentFast(param_1,param_2,pwVar1);
        return;
      }
      PIXCopyEventStringArgumentSlow(param_1,param_2,pwVar1);
      return;
    }
    *puVar2 = 0;
    *param_1 = *param_1 + 1;
  }
  return;
}

// PIXEndEvent<ID3D12GraphicsCommandList> @ 1459a5f80

void __cdecl PIXEndEvent<ID3D12GraphicsCommandList>(ID3D12GraphicsCommandList *param_1)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  PIXEventsThreadInfo *pPVar3;
  ulonglong uVar4;
  uint uVar5;
  ulong64 *puVar6;
  LARGE_INTEGER local_res8;
  
  pPVar3 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
  puVar1 = pPVar3->biasedLimit;
  if (puVar1 != (ulong64 *)0x0) {
    puVar2 = pPVar3->destination;
    if (puVar2 < puVar1) {
      local_res8.QuadPart = 0;
      QueryPerformanceCounter(&local_res8);
      puVar6 = puVar2 + 1;
      if (puVar6 < puVar1 + 0x3e) {
        *puVar6 = (ulong64)param_1;
        puVar6 = puVar2 + 2;
      }
      *puVar6 = 0xfff80;
      uVar4 = (longlong)puVar6 - (longlong)pPVar3->destination >> 3;
      uVar5 = (uint)uVar4 & 0xff;
      if (0x7f < uVar4) {
        uVar5 = 0x7f;
      }
      *puVar2 = (ulonglong)(uVar5 & 0x7f) | local_res8.QuadPart << 0x14 | 0x1000;
      pPVar3->destination = puVar6;
    }
    else {
      PIXEventsDetail::PIXEndEventOnContextCpuAllocate(pPVar3,param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001459a6047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x1d0))(param_1);
  return;
}

// PIXEndEvent<ID3D12GraphicsCommandList> @ 1459a6060

void __cdecl
PIXEventsDetail::PIXEndEvent<ID3D12GraphicsCommandList>(ID3D12GraphicsCommandList *param_1)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  PIXEventsThreadInfo *pPVar3;
  ulonglong uVar4;
  uint uVar5;
  ulong64 *puVar6;
  LARGE_INTEGER local_res8;
  
  pPVar3 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
  puVar1 = pPVar3->biasedLimit;
  if (puVar1 != (ulong64 *)0x0) {
    puVar2 = pPVar3->destination;
    if (puVar2 < puVar1) {
      local_res8.QuadPart = 0;
      QueryPerformanceCounter(&local_res8);
      puVar6 = puVar2 + 1;
      if (puVar6 < puVar1 + 0x3e) {
        *puVar6 = (ulong64)param_1;
        puVar6 = puVar2 + 2;
      }
      *puVar6 = 0xfff80;
      uVar4 = (longlong)puVar6 - (longlong)pPVar3->destination >> 3;
      uVar5 = (uint)uVar4 & 0xff;
      if (0x7f < uVar4) {
        uVar5 = 0x7f;
      }
      *puVar2 = (ulonglong)(uVar5 & 0x7f) | local_res8.QuadPart << 0x14 | 0x1000;
      pPVar3->destination = puVar6;
    }
    else {
      PIXEndEventOnContextCpuAllocate(pPVar3,param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001459a6127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x1d0))(param_1);
  return;
}

// ~TFunction_OwnedObject<`CreateBufferInitializerForWriting'::__l2::<lambda_1>,1,1> @ 1459aafa0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateBufferInitializerForWriting'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_CreateBufferInitializerForWriting_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CreateBufferInitializerForWriting'::`2'::<lambda_1>,1,1>::_vftable_;
  FD3D12ResourceLocation::~FD3D12ResourceLocation((FD3D12ResourceLocation *)((longlong)this + 0x18))
  ;
  if (*(longlong *)((longlong)this + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459aafd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0xe8) + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D12CommandContext::RHIEndRenderPass'::__l2::<lambda_1>,0,0> @ 1459aaff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12CommandContext::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FD3D12CommandContext::RHIEndRenderPass_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__RHIEndRenderPass_FD3D12CommandContext__UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_28_>,1,0> @ 1459ab010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_28_>,1,0>
::
~TFunction_OwnedObject<_UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer_::__l1::<lambda_28_>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_28_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
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

// operator() @ 1459ad370

/* WARNING: Removing unreachable block (ram,0x0001459ad39a) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
``CreateBufferInitializerForWriting'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  FD3D12CommandContext *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar8 = (param_1->PersistentState).CurrentGPUMask.GPUMask;
  uVar3 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar9 = 0x20;
  if (uVar8 != 0) {
    uVar9 = (ulonglong)uVar3;
  }
  if (uVar8 != 0) {
    while( true ) {
      EVar1 = param_1->ActivePipelines;
      if (((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSingleRHIPipeline(ActivePipelines)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b7,
                             L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_1->ComputeContext == (IRHIComputeContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ComputeContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b8,
                             L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar6 = (longlong *)(**(code **)(param_1->ComputeContext->_padding_ + 0x148))();
      pFVar7 = (FD3D12CommandContext *)(**(code **)(*plVar6 + 0x290))(plVar6,uVar9);
      lVar2 = *(longlong *)this;
      lVar10 = 0;
      if (lVar2 != 0) {
        lVar10 = *(longlong *)(lVar2 + 0x1b0 + uVar9 * 8);
      }
      FD3D12Buffer::UploadResourceData
                (pFVar7,*(ED3D12Access *)((longlong)this + 8),
                 (FD3D12ResourceLocation *)(lVar10 + 0x130),
                 (FD3D12ResourceLocation *)((longlong)this + 0x10),*(uint *)(lVar2 + 0xd8));
      uVar8 = uVar8 & ~(1 << ((byte)uVar9 & 0x1f));
      uVar3 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (uVar8 == 0) break;
      uVar9 = (ulonglong)uVar3;
    }
  }
  return;
}

// operator() @ 1459ad4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
`CreateBufferInitializerForWriting'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  FRHICommandBase *pFVar4;
  FRHICommandListBase *in_R8;
  longlong local_98;
  undefined4 local_90;
  FD3D12ResourceLocation local_88;
  
  local_98 = *(longlong *)this;
  local_90 = *(undefined4 *)((longlong)this + 8);
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIBuffer *)(*pcVar1)();
      return (TRefCountPtr<FRHIBuffer>)TVar3.Reference;
    }
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation
            (&local_88,*(FD3D12Device **)((longlong)this + 0x10));
  FD3D12ResourceLocation::TransferOwnership
            (&local_88,(FD3D12ResourceLocation *)((longlong)this + 0x10));
  if (((GRHICommandList.bLatchedBypass == false) || ((in_R8->PersistentState).bImmediate == '\0'))
     && (in_R8->bExecuting == false)) {
    pFVar4 = FMemStackBase::Alloc(&in_R8->MemManager,0xa0,8);
    in_R8->NumCommands = in_R8->NumCommands + 1;
    *in_R8->CommandLink = pFVar4;
    in_R8->CommandLink = &pFVar4->Next;
    pFVar4->Next = (FRHICommandBase *)0x0;
    pFVar4->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,``CreateBufferInitializerForWriting'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar4[1]._padding_ = local_98;
    *(undefined4 *)&pFVar4[1].Next = local_90;
    if ((FD3D12Device *)local_88._padding_ == (FD3D12Device *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.Reference = (FRHIBuffer *)(*pcVar1)();
        return (TRefCountPtr<FRHIBuffer>)TVar3.Reference;
      }
    }
    FD3D12ResourceLocation::FD3D12ResourceLocation
              ((FD3D12ResourceLocation *)(pFVar4 + 2),(FD3D12Device *)local_88._padding_);
    FD3D12ResourceLocation::TransferOwnership((FD3D12ResourceLocation *)(pFVar4 + 2),&local_88);
    pFVar4[9].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    ``CreateBufferInitializerForWriting'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
    operator()(&local_98,in_R8);
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_88);
  (param_1->MemManager).Top = *(uchar **)this;
  *(undefined8 *)this = 0;
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// operator() @ 1459ad630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
`GetPipelineShaderHashList'::__l2::<lambda_1>::operator()(void *this,FRHIShader *param_1)

{
  FString *pFVar1;
  undefined1 auStack_68 [32];
  FString local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (param_1 != (FRHIShader *)0x0) {
    local_28 = *(undefined4 *)((param_1->Hash).Hash + 0x10);
    local_38 = *(undefined8 *)(param_1->Hash).Hash;
    uStack_30 = *(undefined8 *)((param_1->Hash).Hash + 8);
    pFVar1 = *(FString **)((longlong)this + 8);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    BytesToHex((uchar *)&local_38,0x14,&local_48);
    GetShaderFrequencyString(param_1->Frequency,false);
    ::FString::AppendfImpl(pFVar1,L"%s: %s, ");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FSHA1::Update(*(FSHA1 **)this,(uchar *)&local_38,0x14);
  return;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1459ae86c

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12Buffer::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12Buffer::_vector_deleting_destructor__adjustor_232__(FD3D12Buffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FD3D12Buffer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{448}' @ 1459ae880

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FD3D12CommandContext::`vector deleting
   destructor'`adjustor{448}' (unsigned int) __ptr64 */

void * __thiscall
FD3D12CommandContext::_vector_deleting_destructor__adjustor_448__
          (FD3D12CommandContext *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1459ae8a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(float,unsigned_int),1,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXMI_Z_00_0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459ae8e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateBufferInitializerForWriting'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CreateBufferInitializerForWriting'::`2'::<lambda_1>,1,1>::_vftable_;
  FD3D12ResourceLocation::~FD3D12ResourceLocation((FD3D12ResourceLocation *)((longlong)this + 0x18))
  ;
  if (*(longlong *)((longlong)this + 8) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0xe8) + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459ae940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12CommandContext::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__RHIEndRenderPass_FD3D12CommandContext__UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459ae980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_28_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_28_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459ae9d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aea10

void * __thiscall
TThreadSingleton<FTransientUniformBufferAllocator>::_scalar_deleting_destructor_
          (TThreadSingleton<FTransientUniformBufferAllocator> *this,uint param_1)

{
  ~TThreadSingleton<FTransientUniformBufferAllocator>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aea50

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall FD3D12Adapter::_scalar_deleting_destructor_(FD3D12Adapter *this,uint param_1)

{
  ~FD3D12Adapter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x898);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aea90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12BaseShaderResource::_scalar_deleting_destructor_(FD3D12BaseShaderResource *this,uint param_1)

{
  ~FD3D12BaseShaderResource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aead0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall FD3D12Buffer::_scalar_deleting_destructor_(FD3D12Buffer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIBuffer__;
  this->_padding_ = (longlong)&_vftable__for__FD3D12BaseShaderResource__;
  if ((this->_padding_ & 0x4000) != 0) {
    lVar4 = this->_padding_;
    if (lVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pvVar3 = (void *)(*pcVar1)();
        return pvVar3;
      }
      lVar4 = this->_padding_;
      if (lVar4 == 0) goto LAB_1459aeb86;
    }
    lVar4 = *(longlong *)(lVar4 + 0xb40);
    iVar6 = 0;
    if (-1 < *(int *)(lVar4 + 0x988)) {
      plVar5 = (longlong *)(lVar4 + 0x788);
      do {
        if ((longlong *)*plVar5 == &this->_padding_) {
          *plVar5 = 0;
        }
        iVar6 = iVar6 + 1;
        plVar5 = plVar5 + 1;
      } while (iVar6 <= *(int *)(lVar4 + 0x988));
    }
  }
LAB_1459aeb86:
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    D3D12BufferStats::UpdateBufferStats(this,false);
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&(this->LockedData).ResourceLocation);
  FD3D12LinkedAdapterObject<FD3D12Buffer>::~FD3D12LinkedAdapterObject<FD3D12Buffer>
            ((FD3D12LinkedAdapterObject<FD3D12Buffer> *)&this->_padding_);
  FD3D12BaseShaderResource::~FD3D12BaseShaderResource((FD3D12BaseShaderResource *)&this->_padding_);
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x298);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aec00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12CommandContext::_scalar_deleting_destructor_(FD3D12CommandContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FRHIResource *this_00;
  TRobinHoodHashSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  
  *(undefined ***)this = &_vftable__for__FD3D12ContextCommon__;
  *(undefined ***)&this->field_0x1c0 = &_vftable__for__FD3D12CommandContextBase__;
  FD3D12StateCache::ClearState(&this->StateCache);
  this->bDiscardSharedGraphicsConstants = false;
  this->bDiscardSharedComputeConstants = false;
  memset(this->BoundUniformBuffers,0,0x300);
  this->DirtyUniformBuffers[0] = 0;
  this->DirtyUniformBuffers[1] = 0;
  this->DirtyUniformBuffers[2] = 0;
  this->DirtyUniformBuffers[3] = 0;
  this->DirtyUniformBuffers[4] = 0;
  this->DirtyUniformBuffers[5] = 0;
  memset((this->StaticUniformBuffers).AllocatorInstance.Data,0,
         (longlong)(this->StaticUniformBuffers).ArrayNum << 3);
  FD3D12ContextBindlessState::~FD3D12ContextBindlessState(&this->BindlessState);
  pFVar1 = (this->StaticUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
              *)&this->RayTracingShaderTables);
  lVar3 = 6;
  pTVar2 = &this->RayTracingShaderTables;
  do {
    lVar3 = lVar3 + -1;
    *(undefined ***)((longlong)(pTVar2 + -1) + 0x40) = &___7FD3D12ConstantBuffer__6B_;
    if (*(void **)((longlong)(pTVar2 + -1) + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(pTVar2 + -1) + 0x50));
    }
    pTVar2 = (TRobinHoodHashSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
              *)((longlong)(pTVar2 + -1) + 0x40);
  } while (lVar3 != 0);
  this_00 = (FRHIResource *)(this->OuterOcclusionQuery).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FD3D12StateCache::~FD3D12StateCache(&this->StateCache);
  pFVar1 = (this->GPUEventStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&(this->ConstantsAllocator).UnderlyingResource);
  *(undefined ***)&this->field_0x1c0 = &___7IRHICommandContext__6B_;
  if (*(FRHIResource **)&this->field_0x2d8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x2d8);
  }
  *(undefined ***)&this->field_0x1c0 = &___7IRHIComputeContext__6B_;
  FD3D12ContextCommon::~FD3D12ContextCommon((FD3D12ContextCommon *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3de0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aed90

void * __thiscall
FD3D12CommandContextBase::_scalar_deleting_destructor_(FD3D12CommandContextBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aedf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12CommandContextRedirector::_scalar_deleting_destructor_
          (FD3D12CommandContextRedirector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aee50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12ConstantBuffer::_scalar_deleting_destructor_(FD3D12ConstantBuffer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  pFVar1 = (this->ShadowData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aeea0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12ContextCommon::_scalar_deleting_destructor_(FD3D12ContextCommon *this,uint param_1)

{
  ~FD3D12ContextCommon(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aeee0

void * __thiscall
FD3D12EnhancedBarriersForAdapter::_scalar_deleting_destructor_
          (FD3D12EnhancedBarriersForAdapter *this,uint param_1)

{
  ~FD3D12EnhancedBarriersForAdapter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aef20

void * __thiscall
FD3D12GlobalOnlineSamplerHeap::_scalar_deleting_destructor_
          (FD3D12GlobalOnlineSamplerHeap *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  void *pvVar7;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Mutex);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar4)();
      return pvVar7;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Mutex);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UniqueDescriptorTables).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FD3D12OnlineHeap__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459aefe0

void * __thiscall
FD3D12LegacyBarriersForAdapter::_scalar_deleting_destructor_
          (FD3D12LegacyBarriersForAdapter *this,uint param_1)

{
  ~FD3D12LegacyBarriersForAdapter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af020

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12LocalOnlineHeap::_scalar_deleting_destructor_(FD3D12LocalOnlineHeap *this,uint param_1)

{
  ~FD3D12LocalOnlineHeap(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af060

void * __thiscall
FD3D12OnlineHeap::_scalar_deleting_destructor_(FD3D12OnlineHeap *this,uint param_1)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FD3D12OnlineHeap__6B_;
  pFVar2 = (this->Heap).Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af0d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall FD3D12Payload::_scalar_deleting_destructor_(FD3D12Payload *this,uint param_1)

{
  FD3D12PayloadBase::~FD3D12PayloadBase((FD3D12PayloadBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af110

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void * __thiscall FD3D12SegHeap::_scalar_deleting_destructor_(FD3D12SegHeap *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeBlockOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FD3D12Heap::~FD3D12Heap((FD3D12Heap *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af160

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12SubAllocatedOnlineHeap::_scalar_deleting_destructor_
          (FD3D12SubAllocatedOnlineHeap *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7FD3D12OnlineHeap__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af1d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall FD3D12SyncPoint::_scalar_deleting_destructor_(FD3D12SyncPoint *this,uint param_1)

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
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af2c0

void * __thiscall
FD3D12TransientHeapCache::_scalar_deleting_destructor_(FD3D12TransientHeapCache *this,uint param_1)

{
  FRHITransientHeapCache::~FRHITransientHeapCache((FRHITransientHeapCache *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af300

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FTransientUniformBufferAllocator::_scalar_deleting_destructor_
          (FTransientUniformBufferAllocator *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable_;
  if (this->Adapter != (FD3D12Adapter *)0x0) {
    FD3D12Adapter::ReleaseTransientUniformBufferAllocator(this->Adapter,this);
  }
  TThreadSingleton<FTransientUniformBufferAllocator>::
  ~TThreadSingleton<FTransientUniformBufferAllocator>
            ((TThreadSingleton<FTransientUniformBufferAllocator> *)this);
  FD3D12ResourceLocation::~FD3D12ResourceLocation((FD3D12ResourceLocation *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459af370

void * __thiscall
ID3D12BarriersForAdapter::_scalar_deleting_destructor_(ID3D12BarriersForAdapter *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// BindUniformBuffer @ 1459b3170

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
BindUniformBuffer(FD3D12CommandContext *param_1,FRHIShader *param_2,EShaderFrequency param_3,
                 uint param_4,FD3D12UniformBuffer *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  code *pcVar5;
  FD3D12UniformBuffer *pFVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  FRHIShader *local_res8;
  uint local_res18 [4];
  FD3D12UniformBuffer **local_48;
  FRHIShader **local_40;
  uint *local_38;
  
  pFVar6 = param_5;
  uVar1 = (uint)param_2->_padding_;
  uVar9 = (ulonglong)param_3;
  local_res8 = param_2;
  local_res18[0] = param_4;
  if (param_4 < uVar1) {
    iVar2 = *(int *)(param_5->_padding_ + 0x88);
    uVar8 = 0;
    if ((int)param_4 < (int)uVar1) {
      uVar8 = ~param_4 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = *(int *)(param_2->_padding_ + (longlong)(int)param_4 * 4);
    if ((iVar3 != 0) && (iVar2 != iVar3)) {
      local_48 = &param_5;
      local_40 = &local_res8;
      local_38 = local_res18;
      `ValidateBoundUniformBuffer'::__l5::<lambda_1>::operator()(&local_48);
    }
  }
  if ((0xf < param_4) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("SlotIndex < 16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                         ,0x218,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar6 == (FD3D12UniformBuffer *)0x0) ||
     (uVar4 = (pFVar6->ResourceLocation).GPUVirtualAddress, uVar4 == 0)) {
    if ((param_1->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress[uVar9][param_4]
        == 0) goto LAB_1459b32fa;
    (param_1->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress[uVar9][param_4] = 0
    ;
    (param_1->StateCache).PipelineState.Common.CBVCache.Resources[uVar9][param_4] =
         (FD3D12Resource *)0x0;
  }
  else {
    if (uVar4 == (param_1->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress[uVar9]
                 [param_4]) goto LAB_1459b32fa;
    (param_1->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress[uVar9][param_4] =
         uVar4;
    (param_1->StateCache).PipelineState.Common.CBVCache.Resources[uVar9][param_4] =
         (pFVar6->ResourceLocation).UnderlyingResource;
  }
  *(ushort *)
   ((longlong)((param_1->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress + -1) +
    0x70U + uVar9 * 2) =
       *(ushort *)
        ((longlong)
         ((param_1->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress + -1) + 0x70U
        + uVar9 * 2) | (ushort)(1 << (param_4 & 0x1f));
LAB_1459b32fa:
  param_1->BoundUniformBuffers[uVar9][param_4] = pFVar6;
  param_1->DirtyUniformBuffers[uVar9] =
       param_1->DirtyUniformBuffers[uVar9] | (ushort)(1 << (param_4 & 0x1f));
  return;
}

// CheckD3DStoredMessages @ 1459b43b0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_MESSAGE_ID.conflict": Some values do not have unique names */

bool __cdecl CheckD3DStoredMessages(void)

{
  ID3D12Device *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FD3D12Adapter *pFVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  void *pvVar10;
  longlong *local_res8;
  void *local_res10;
  longlong *local_res18;
  
  pvVar7 = (void *)0x0;
  local_res18 = (longlong *)0x0;
  bVar3 = false;
  iVar4 = D3D12GetDebugInterface(&_GUID_344488b7_6846_474b_b989_f027448245e0);
  if (-1 < iVar4) {
    local_res8 = (longlong *)0x0;
    pFVar6 = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
    pIVar1 = (pFVar6->RootDevice).Reference;
    pcVar2 = *(code **)*pIVar1;
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
    iVar4 = (*pcVar2)(pIVar1,&_GUID_0742a90b_c387_483f_b946_30a7e4e61458,&local_res8);
    if (-1 < iVar4) {
      uVar5 = (**(code **)(*local_res8 + 0x48))();
      pvVar8 = pvVar7;
      if (0 < (int)uVar5) {
        uVar9 = (ulonglong)uVar5;
        pvVar10 = pvVar7;
        do {
          local_res10 = (void *)0x0;
          (**(code **)(*local_res8 + 0x28))(local_res8,pvVar10,0,&local_res10);
          if (pvVar8 < local_res10) {
            if (pvVar7 != (void *)0x0) {
              FMemory::Free(pvVar7);
            }
            pvVar7 = FMemory::Malloc((ulong64)local_res10,0);
            pvVar8 = local_res10;
          }
          if (pvVar7 != (void *)0x0) {
            (**(code **)(*local_res8 + 0x28))(local_res8,pvVar10,pvVar7,&local_res10);
            bVar3 = LogD3D12Message(*(D3D12_MESSAGE_SEVERITY *)((longlong)pvVar7 + 4),
                                    *(D3D12_MESSAGE_ID_conflict *)((longlong)pvVar7 + 8),
                                    *(char **)((longlong)pvVar7 + 0x10));
          }
          pvVar10 = (void *)((longlong)pvVar10 + 1);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      (**(code **)(*local_res8 + 0x20))();
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
    }
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)(*local_res18 + 0x10))();
  }
  return bVar3;
}

// Close @ 1459b6850

undefined4 __thiscall D3DX12Residency::ResidencySet::Close(ResidencySet *this)

{
  SyncManager *lpCriticalSection;
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (this->IsOpen == false) {
    return 0x80070057;
  }
  if (this->OutOfMemory != true) {
    uVar2 = 0;
    uVar3 = uVar2;
    if (0 < this->CurrentSetSize) {
      do {
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
        *(undefined1 *)
         (*(longlong *)(uVar3 + (longlong)this->ppSet) + 0x28 + (ulonglong)this->CommandListIndex) =
             0;
        uVar3 = uVar3 + 8;
      } while ((int)uVar1 < this->CurrentSetSize);
    }
    lpCriticalSection = this->pSyncManager;
    if (lpCriticalSection == (SyncManager *)0x0) {
      *(undefined1 *)((ulonglong)this->CommandListIndex + 0x28) = 0;
      this->IsOpen = false;
      this->IsOpen = false;
      this->CommandListIndex = 0xffffffff;
      return 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->pSyncManager->AvailableCommandLists[this->CommandListIndex] = false;
    this->CommandListIndex = 0xffffffff;
    this->IsOpen = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->IsOpen = false;
    return 0;
  }
  return 0x8007000e;
}

// CreateBufferInitializerForWriting @ 1459b9340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FRHIBufferInitializer * __cdecl
CreateBufferInitializerForWriting
          (FRHIBufferInitializer *__return_storage_ptr__,FRHICommandListBase *param_1,
          FCreateBufferInternalResult *param_2,FRHIBufferCreateDesc *param_3)

{
  ED3D12Access EVar1;
  uint uVar2;
  uint uVar3;
  FD3D12Buffer *this;
  ulong64 uVar4;
  void *pvVar5;
  FD3D12Device *pFVar6;
  code *pcVar7;
  bool bVar8;
  FRHIBufferInitializer *pFVar9;
  code **ppcVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  undefined1 auStackY_2a8 [32];
  undefined1 local_274 [4];
  FRHICommandListBase *local_270;
  FD3D12Buffer *local_268;
  ED3D12Access local_260;
  FD3D12ResourceLocation local_258;
  FD3D12ResourceLocation local_1d8;
  code *local_158 [2];
  undefined **local_148;
  FD3D12Buffer *local_140;
  undefined ***local_130;
  code *local_128 [2];
  code *local_118 [3];
  code **local_100;
  undefined1 local_f8 [48];
  FRHICommandListBase *local_c8;
  FRHIBuffer *local_c0;
  undefined1 local_a8 [48];
  FRHICommandListBase *local_78;
  FRHIBuffer *local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  EVar1 = param_2->DesiredD3D12Access;
  this = param_2->Buffer;
  local_270 = param_1;
  if ((param_3->_padding_ & 6) != 0) {
    uVar4 = this->_padding_;
    pvVar5 = (void *)this->_padding_;
    FRHIResource::AddRef((FRHIResource *)this);
    local_148 = &
                ___7__TFunction_OwnedObject_V<lambda_28_>__0___0FDefaultBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer__PEAX_K_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_158[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_28_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                   ::Call;
    local_130 = (undefined ***)0x0;
    local_140 = this;
    FRHIBufferInitializer::FRHIBufferInitializer
              ((FRHIBufferInitializer *)local_f8,param_1,(FRHIBuffer *)this,pvVar5,uVar4,
               (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)local_158
              );
    if (local_158[0] != (code *)0x0) {
      pppuVar11 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar11 = local_130;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    FRHIBufferInitializer::FRHIBufferInitializer
              (__return_storage_ptr__,(FRHIBufferInitializer *)local_f8);
    if ((local_c8 != (FRHICommandListBase *)0x0) && (local_c0 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_f8);
    }
    if (local_f8._0_8_ == 0) {
      return __return_storage_ptr__;
    }
    plVar12 = (longlong *)(local_f8 + 0x10);
    if ((longlong *)local_f8._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_f8._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
    return __return_storage_ptr__;
  }
  uVar2 = this->BufferAlignment;
  uVar3 = (uint)param_3->_padding_;
  if ((this->_padding_ == 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FRHIBufferInitializer *)(*pcVar7)();
    return pFVar9;
  }
  pFVar6 = (FD3D12Device *)this->_padding_;
  FD3D12ResourceLocation::FD3D12ResourceLocation(&local_1d8,pFVar6);
  bVar8 = IsInRHIThread();
  if ((bVar8) || (bVar8 = IsInRenderingThread(), bVar8)) {
    FD3D12FastAllocator::Allocate(&pFVar6->DefaultFastAllocator,uVar3,uVar2,&local_1d8);
  }
  else {
    if ((*(longlong *)&pFVar6->field_0x10 == 0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("ParentAdapter != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x41,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FRHIBufferInitializer *)(*pcVar7)();
      return pFVar9;
    }
    FD3D12UploadHeapAllocator::AllocUploadResource
              (*(FD3D12UploadHeapAllocator **)
                (*(longlong *)&pFVar6->field_0x10 + 0x4f8 +
                (ulonglong)*(uint *)&pFVar6->field_0x8 * 8),uVar3,uVar2,&local_1d8);
  }
  (**(code **)(this->_padding_ + 8))(&this->_padding_,local_274);
  local_268 = this;
  local_260 = EVar1;
  if (((FD3D12Device *)local_1d8._padding_ == (FD3D12Device *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FRHIBufferInitializer *)(*pcVar7)();
    return pFVar9;
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation(&local_258,(FD3D12Device *)local_1d8._padding_);
  FD3D12ResourceLocation::TransferOwnership(&local_258,&local_1d8);
  local_128[0] = (code *)0x0;
  ppcVar10 = FMemory::Malloc(0x90,8);
  ppcVar10[1] = (code *)0x0;
  *ppcVar10 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`CreateBufferInitializerForWriting'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  ppcVar10[1] = (code *)local_268;
  local_268 = (FD3D12Buffer *)0x0;
  *(ED3D12Access *)(ppcVar10 + 2) = local_260;
  local_100 = ppcVar10;
  if (((FD3D12Device *)local_258._padding_ == (FD3D12Device *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FRHIBufferInitializer *)(*pcVar7)();
    return pFVar9;
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation
            ((FD3D12ResourceLocation *)(ppcVar10 + 3),(FD3D12Device *)local_258._padding_);
  FD3D12ResourceLocation::TransferOwnership((FD3D12ResourceLocation *)(ppcVar10 + 3),&local_258);
  if (ppcVar10 + 1 != (code **)0x0) {
    local_128[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`CreateBufferInitializerForWriting'::__l2::<lambda_1>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
                   ::Call;
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_a8,local_270,(FRHIBuffer *)this,
             local_1d8.MappedBaseAddress,(ulonglong)(uint)param_3->_padding_,
             (TUniqueFunction<TRefCountPtr<FRHIBuffer>___cdecl(FRHICommandListBase_&)> *)local_128);
  FRHIBufferInitializer::FRHIBufferInitializer
            (__return_storage_ptr__,(FRHIBufferInitializer *)local_a8);
  if ((local_78 != (FRHICommandListBase *)0x0) && (local_70 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_a8);
  }
  if (local_a8._0_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x10);
    if ((longlong *)local_a8._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_128[0] != (code *)0x0) {
    ppcVar10 = local_128 + 2;
    if (local_100 != (code **)0x0) {
      ppcVar10 = local_100;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_258);
  if (local_268 != (FD3D12Buffer *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_268 + 0xe8) + 0x10))();
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_1d8);
  return __return_storage_ptr__;
}

// D3D12MessageCallBack @ 1459bc170

/* WARNING: Enum "D3D12_MESSAGE_ID.conflict": Some values do not have unique names */

void __cdecl
D3D12MessageCallBack
          (D3D12_MESSAGE_CATEGORY param_1,D3D12_MESSAGE_SEVERITY param_2,
          D3D12_MESSAGE_ID_conflict param_3,char *param_4,void *param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = LogD3D12Message(param_2,param_3,param_4);
  bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
  if ((bVar3) && (bVar2)) {
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// D3D12_GetDredMode @ 1459bc1b0

ED3D12DredMode __cdecl D3D12_GetDredMode(void)

{
  bool bVar1;
  
  bVar1 = UE::RHI::ShouldEnableGPUCrashFeature
                    ((IConsoleVariable *)CVarD3D12EnableDRED._padding_,L"dred");
  if (bVar1) {
    return Full;
  }
  bVar1 = UE::RHI::ShouldEnableGPUCrashFeature
                    ((IConsoleVariable *)CVarD3D12EnableLightweightDRED._padding_,L"lightdred");
  if (bVar1) {
    bVar1 = IsRHIDeviceIntel();
    return bVar1 ^ Lightweight;
  }
  return Disabled;
}

// D3D12_ShouldBreakOnD3DDebugErrors @ 1459bc210

bool __cdecl D3D12_ShouldBreakOnD3DDebugErrors(void)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  pTVar1 = GD3D12DebugCvar.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar2 = GD3D12DebugCvar.Ref;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) < 1) {
    return false;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 4) {
    return false;
  }
  return true;
}

// D3D12_ShouldBreakOnD3DDebugWarnings @ 1459bc290

bool __cdecl D3D12_ShouldBreakOnD3DDebugWarnings(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = GD3D12DebugCvar.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] == 3;
    }
  }
  return pTVar1->ShadowedValue[0] == 3;
}

// D3D12_ShouldLogD3DDebugWarnings @ 1459bc2e0

bool __cdecl D3D12_ShouldLogD3DDebugWarnings(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = GD3D12DebugCvar.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return 1 < pTVar1->ShadowedValue[1];
    }
  }
  return 1 < pTVar1->ShadowedValue[0];
}

// D3DVectoredExceptionHandler @ 1459bc330

long __cdecl D3DVectoredExceptionHandler(_EXCEPTION_POINTERS *param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  
  if (param_1->ExceptionRecord->ExceptionCode != 0x87a) {
    return 0;
  }
  if (GD3D12CallBackCookie == 0) {
    bVar2 = CheckD3DStoredMessages();
    if (bVar2) {
      bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar2) {
        bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          lVar3 = (*pcVar1)();
          return lVar3;
        }
      }
    }
  }
  return -1;
}

// DetermineInitialBufferD3D12Access @ 1459bdd50

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

ED3D12Access __cdecl
DetermineInitialBufferD3D12Access(D3D12_HEAP_TYPE param_1,D3D12_HEAP_PROPERTIES *param_2)

{
  code *pcVar1;
  bool bVar2;
  ED3D12Access EVar3;
  
  if (param_1 == D3D12_HEAP_TYPE_DEFAULT) {
    return GenericRead;
  }
  if (param_1 == D3D12_HEAP_TYPE_CUSTOM) {
    if ((param_2 == (D3D12_HEAP_PROPERTIES *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x16e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if (param_2->CPUPageProperty == D3D12_CPU_PAGE_PROPERTY_WRITE_COMBINE) {
      return GenericRead;
    }
    if (param_2->CPUPageProperty == D3D12_CPU_PAGE_PROPERTY_WRITE_BACK) {
      return GenericRead;
    }
  }
  else {
    if (param_1 == D3D12_HEAP_TYPE_UPLOAD) {
      return GenericRead;
    }
    if (param_1 == D3D12_HEAP_TYPE_READBACK) {
      return CopyDest;
    }
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("HeapType == D3D12_HEAP_TYPE_READBACK",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                     ,0x189,L"");
  if (!bVar2) {
    return CopyDest;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

// GetD3DCommandListType @ 1459c1f00

D3D12_COMMAND_LIST_TYPE __cdecl GetD3DCommandListType(ED3D12QueueType param_1)

{
  code *pcVar1;
  bool bVar2;
  D3D12_COMMAND_LIST_TYPE DVar3;
  
  if (param_1 != Direct) {
    if (param_1 == Copy) {
      return D3D12_COMMAND_LIST_TYPE_COPY;
    }
    if (param_1 == Async) {
      return D3D12_COMMAND_LIST_TYPE_COMPUTE;
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      DVar3 = (*pcVar1)();
      return DVar3;
    }
  }
  return D3D12_COMMAND_LIST_TYPE_DIRECT;
}

// GetGfxCommandListAndQueue @ 1459c23f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
D3D12RHI::GetGfxCommandListAndQueue(FRHICommandList *param_1,void **param_2,void **param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FD3D12Queue *pFVar6;
  longlong *plVar7;
  
  bVar2 = param_1->field_0x6a;
  if ((bVar2 == 0) || ((bVar2 & bVar2 - 1) != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSingleRHIPipeline(ActivePipelines)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b0,
                       L"Exactly one pipeline must be active to call GetContext(). Current pipeline mask is \'0x%02x\'."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(longlong *)&param_1->field_0x38 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphicsContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b1,
                       L"There is no active graphics context on this command list. There may be a missing call to SwitchPipeline()."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar7 = (longlong *)(*(longlong *)&param_1->field_0x38 + -0x1c0);
  if (*(longlong *)&param_1->field_0x38 == 0) {
    plVar7 = (longlong *)0x0;
  }
  if (*(char *)((longlong)plVar7 + 0x14) == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CmdContext.IsDefaultContext()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0x1a6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (plVar7[0x31] == 0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  lVar3 = plVar7[0x31];
  piVar1 = (int *)(lVar3 + 0x168);
  *piVar1 = *piVar1 + 1;
  *param_2 = *(void **)(lVar3 + 0x28);
  pFVar6 = FD3D12Device::GetQueue((FD3D12Device *)plVar7[1],*(ED3D12QueueType *)(plVar7 + 2));
  *param_3 = (pFVar6->D3DCommandQueue).Reference;
  return;
}

// GetRenderTargetViewDesc @ 1459c2960

FRTVDesc * __cdecl
GetRenderTargetViewDesc(FRTVDesc *__return_storage_ptr__,FD3D12RenderTargetView *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRTVDesc *pFVar5;
  byte bVar6;
  
  if (*(longlong *)&param_1->field_0x18 == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRTVDesc *)(*pcVar3)();
      return pFVar5;
    }
  }
  iVar1 = *(int *)&param_1->field_0x5c;
  bVar6 = 0;
  lVar2 = *(longlong *)&param_1->field_0x20;
  __return_storage_ptr__->Width = 0;
  __return_storage_ptr__->Height = 0;
  (__return_storage_ptr__->SampleDesc).Count = 0;
  (__return_storage_ptr__->SampleDesc).Quality = 0;
  if ((((iVar1 == 4) || (iVar1 == 5)) || (iVar1 == 6)) || (iVar1 == 7)) {
    __return_storage_ptr__->Width = *(uint *)(lVar2 + 0x60);
    __return_storage_ptr__->Height = *(uint *)(lVar2 + 0x68);
    __return_storage_ptr__->SampleDesc = *(DXGI_SAMPLE_DESC *)(lVar2 + 0x74);
    if (1 < iVar1 - 4U) goto LAB_1459c2a29;
  }
  else {
    if (iVar1 != 8) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x356,L"");
      bVar6 = 0;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRTVDesc *)(*pcVar3)();
        return pFVar5;
      }
      goto LAB_1459c2a29;
    }
    __return_storage_ptr__->Width = *(uint *)(lVar2 + 0x60);
    __return_storage_ptr__->Height = *(uint *)(lVar2 + 0x68);
    (__return_storage_ptr__->SampleDesc).Count = 1;
  }
  bVar6 = (byte)*(undefined4 *)&param_1->field_0x60;
LAB_1459c2a29:
  __return_storage_ptr__->Width = __return_storage_ptr__->Width >> (bVar6 & 0x1f);
  __return_storage_ptr__->Height = __return_storage_ptr__->Height >> (bVar6 & 0x1f);
  return __return_storage_ptr__;
}

// GetShaderFrequencyString @ 1459c2fa0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

wchar_t * __cdecl GetShaderFrequencyString(EShaderFrequency param_1,bool param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  
  pwVar2 = L"SF_NumFrequencies";
  switch(param_1) {
  case SF_Vertex:
    pwVar2 = L"SF_Vertex";
    break;
  case SF_Mesh:
    pwVar2 = L"SF_Mesh";
    break;
  case SF_Amplification:
    pwVar2 = L"SF_Amplification";
    break;
  case SF_Pixel:
    pwVar2 = L"SF_Pixel";
    break;
  case SF_Geometry:
    pwVar2 = L"SF_Geometry";
    break;
  case SF_Compute:
    pwVar2 = L"SF_Compute";
    break;
  case SF_NumStandardFrequencies:
    pwVar2 = L"SF_RayGen";
    break;
  case SF_RayMiss:
    pwVar2 = L"SF_RayMiss";
    break;
  case SF_RayHitGroup:
    pwVar2 = L"SF_RayHitGroup";
    break;
  case SF_RayCallable:
    pwVar2 = L"SF_RayCallable";
    break;
  case SF_WorkGraphRoot:
    pwVar2 = L"SF_WorkGraphRoot";
    break;
  case SF_WorkGraphComputeNode:
    pwVar2 = L"SF_WorkGraphComputeNode";
  }
  lVar1 = 6;
  if (param_2) {
    lVar1 = 0;
  }
  return (wchar_t *)(lVar1 + (longlong)pwVar2);
}

// GetTypeHash @ 1459c3680

uint __cdecl GetTypeHash(FD3D12SamplerArrayDesc *param_1)

{
  ulong64 uVar1;
  
  uVar1 = FD3D12PipelineStateCacheBase::HashData(param_1->SamplerID,param_1->Count * 2);
  return (uint)uVar1;
}

// GetTypeHash @ 1459c36a0

uint __cdecl GetTypeHash(FD3D12UniqueSamplerTable *param_1)

{
  ulong64 uVar1;
  
  uVar1 = FD3D12PipelineStateCacheBase::HashData((param_1->Key).SamplerID,(param_1->Key).Count * 2);
  return (uint)uVar1;
}

// Insert @ 1459c7210

bool __thiscall D3DX12Residency::ResidencySet::Insert(ResidencySet *this,ManagedObject *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong64 uVar3;
  ManagedObject **_Dst;
  int *piVar4;
  
  if (param_1->CommandListsUsedOn[this->CommandListIndex] != false) {
    return false;
  }
  param_1->CommandListsUsedOn[this->CommandListIndex] = true;
  _Dst = this->ppSet;
  if ((_Dst == (ManagedObject **)0x0) || (this->MaxResidencySetSize <= this->CurrentSetSize)) {
    if (this->MaxResidencySetSize == 0) {
      iVar2 = 0x1000;
    }
    else {
      iVar2 = (int)((float)this->MaxResidencySetSize * __real_3fc00000);
    }
    this->MaxResidencySetSize = iVar2;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (longlong)iVar2;
    uVar3 = SUB168(ZEXT816(8) * auVar1,0);
    if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(uVar3);
    if ((this->ppSet != (ManagedObject **)0x0) && (_Dst != (ManagedObject **)0x0)) {
      memcpy(_Dst,this->ppSet,(longlong)this->CurrentSetSize << 3);
      operator_delete__(this->ppSet);
    }
    this->ppSet = _Dst;
  }
  piVar4 = &this->CurrentSetSize;
  if (_Dst == (ManagedObject **)0x0) {
    this->OutOfMemory = true;
    return false;
  }
  _Dst[*piVar4] = param_1;
  *piVar4 = *piVar4 + 1;
  return true;
}

// LogD3D12Message @ 1459c7dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_MESSAGE_ID.conflict": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
LogD3D12Message(D3D12_MESSAGE_SEVERITY param_1,D3D12_MESSAGE_ID_conflict param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar4;
  char *pcVar5;
  size_t sVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  FScriptContainerElement *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  iVar2 = GIgnoreD3D12MessageArray.ArrayNum;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar3 = false;
  if ((param_3 == (char *)0x0) || ((int)GDebugLayerMinimumSeverity < (int)param_1)) {
    return false;
  }
  pFVar8 = GIgnoreD3D12MessageArray.AllocatorInstance.Data +
           (longlong)GIgnoreD3D12MessageArray.ArrayNum * 0x18;
  FVar7.Data = GIgnoreD3D12MessageArray.AllocatorInstance.Data;
  local_160 = pFVar8;
  do {
    if (GIgnoreD3D12MessageArray.ArrayNum != iVar2) {
      `TCheckedPointerIterator<MessageFilter,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_168);
    }
    if (FVar7.Data == pFVar8) {
      if ((param_1 == D3D12_MESSAGE_SEVERITY_CORRUPTION) ||
         (param_1 == D3D12_MESSAGE_SEVERITY_ERROR)) {
        if (1 < (byte)LogD3D12RHI._0_1_) {
          local_158._padding_ = 0;
          sVar6 = strlen(param_3);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,param_3,(int)sVar6,Yes);
          UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar3 = D3D12_ShouldBreakOnD3DDebugErrors();
        return bVar3;
      }
      if (param_1 == D3D12_MESSAGE_SEVERITY_WARNING) {
        if (2 < (byte)LogD3D12RHI._0_1_) {
          local_158._padding_ = 0;
          sVar6 = strlen(param_3);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,param_3,(int)sVar6,Yes);
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar3 = D3D12_ShouldBreakOnD3DDebugWarnings();
        return bVar3;
      }
      if ((byte)LogD3D12RHI._0_1_ < 5) {
        return false;
      }
      local_158._padding_ = 0;
      sVar6 = strlen(param_3);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,param_3,(int)sVar6,Yes);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      if ((void *)local_158._padding_ == (void *)0x0) {
        return false;
      }
      FMemory::Free((void *)local_158._padding_);
      return false;
    }
    if (param_2 == *(D3D12_MESSAGE_ID_conflict *)FVar7.Data) {
      if (*(int *)(FVar7.Data + 0x10) < 2) {
LAB_1459c7e8f:
        bVar1 = true;
      }
      else {
        bVar3 = true;
        pTVar4 = StringCast<char,128,wchar_t>
                           ((TStringConversion<TStringConvert<wchar_t,char>,128> *)&local_158,
                            *(wchar_t **)(FVar7.Data + 8));
        pcVar5 = strstr(param_3,pTVar4->Ptr);
        if (pcVar5 != (char *)0x0) goto LAB_1459c7e8f;
        bVar1 = false;
      }
      if ((bVar3) && (bVar3 = false, (void *)local_158._padding_ != (void *)0x0)) {
        FMemory::Free((void *)local_158._padding_);
      }
      pFVar8 = local_160;
      if (bVar1) {
        return false;
      }
    }
    FVar7.Data = FVar7.Data + 0x18;
  } while( true );
}

// Open @ 1459c87c0

undefined4 __thiscall D3DX12Residency::ResidencySet::Open(ResidencySet *this)

{
  SyncManager *lpCriticalSection;
  uint uVar1;
  undefined4 uVar2;
  
  lpCriticalSection = this->pSyncManager;
  if (lpCriticalSection != (SyncManager *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (this->IsOpen == false) {
    uVar2 = 0;
    uVar1 = 0;
    do {
      if (this->pSyncManager->AvailableCommandLists[uVar1] == false) {
        this->CommandListIndex = uVar1;
        this->pSyncManager->AvailableCommandLists[uVar1] = true;
        this->CurrentSetSize = 0;
        this->IsOpen = true;
        this->OutOfMemory = false;
        goto LAB_1459c882b;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x400);
    uVar2 = 0x8007000e;
  }
  else {
    uVar2 = 0x80070057;
  }
LAB_1459c882b:
  if (lpCriticalSection != (SyncManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return uVar2;
}

// PIXEndEventOnContextCpuAllocate @ 1459c9070

ulong64 * __cdecl
PIXEventsDetail::PIXEndEventOnContextCpuAllocate(PIXEventsThreadInfo *param_1,void *param_2)

{
  ulong64 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulong64 *puVar5;
  
  lVar2 = PIXEventsReplaceBlock(param_1,1);
  if (lVar2 != 0) {
    puVar1 = param_1->destination;
    if (puVar1 < param_1->biasedLimit) {
      puVar5 = puVar1 + 1;
      if (puVar5 < param_1->biasedLimit + 0x3e) {
        *puVar5 = (ulong64)param_2;
        puVar5 = puVar1 + 2;
      }
      *puVar5 = 0xfff80;
      uVar3 = (longlong)puVar5 - (longlong)param_1->destination >> 3;
      uVar4 = (uint)uVar3 & 0xff;
      if (0x7f < uVar3) {
        uVar4 = 0x7f;
      }
      *puVar1 = (ulonglong)(uVar4 & 0x7f) | lVar2 << 0x14 | 0x1000;
      param_1->destination = puVar5;
      return puVar1;
    }
  }
  return (ulong64 *)0x0;
}

// SetShaderParametersOnContext @ 1459d9f40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
SetShaderParametersOnContext
          (FD3D12CommandContext *param_1,FRHIShader *param_2,EShaderFrequency param_3,
          TArrayView<unsigned_char_const_,int> *param_4,
          TArrayView<FRHIShaderParameter_const_,int> *param_5,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_6,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_7)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this;
  int *piVar1;
  FRHIShaderParameter *pFVar2;
  longlong *plVar3;
  EType EVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  FRHIResource *pFVar8;
  void *pvVar9;
  undefined8 uVar10;
  code *pcVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  FRHIShader *pFVar23;
  FName FVar24;
  FD3D12UnorderedAccessView *pFVar25;
  FD3D12UniformBuffer *pFVar26;
  FRHIShaderParameter *pFVar27;
  longlong *plVar28;
  FD3D12UnorderedAccessView *pFVar29;
  FName FVar30;
  uint uVar31;
  FD3D12ShaderResourceView *pFVar32;
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar33;
  FName FVar34;
  ulonglong uVar35;
  FRHIShaderParameterResource *pFVar36;
  FRHIShaderParameterResource *pFVar37;
  undefined1 local_94;
  undefined1 local_93 [3];
  uint local_90;
  undefined1 *local_88;
  ulonglong local_80;
  FRHIShaderParameterResource *local_78;
  uint local_70;
  uint local_6c;
  FRHIShaderParameterResource *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  local_80 = (ulonglong)param_3;
  uVar31 = *(uint *)&param_1->field_0x2f8;
  local_88 = &param_1->field_0x0 + local_80 * 0x38;
  local_70 = 0;
  if (uVar31 != 0) {
    for (; (uVar31 >> local_70 & 1) == 0; local_70 = local_70 + 1) {
    }
  }
  local_90 = 0x20;
  if (uVar31 != 0) {
    local_90 = local_70;
  }
  pFVar27 = param_5->DataPtr;
  pFVar2 = pFVar27 + param_5->ArrayNum;
  if (pFVar27 != pFVar2) {
    this = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(local_88 + 0x3bf8);
    do {
      uVar5 = pFVar27->ByteOffset;
      uVar6 = pFVar27->ByteSize;
      uVar7 = pFVar27->BaseIndex;
      if ((param_4->ArrayNum <= (int)(uint)uVar5) &&
         (bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar31 = (uint)uVar7 + (uint)uVar6;
      if (*(uint *)(local_88 + 0x3c00) < uVar31) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (this,uVar31 + 0x1ff & 0xfffffe00,Default);
      }
      memcpy((this->AllocatorInstance).Data + uVar7,param_4->DataPtr + uVar5,(ulonglong)uVar6);
      local_88[0x3c10] = true;
      uVar17 = *(uint *)(local_88 + 0x3c08);
      if (*(uint *)(local_88 + 0x3c08) < uVar31) {
        uVar17 = uVar31;
      }
      pFVar27 = pFVar27 + 1;
      *(uint *)(local_88 + 0x3c08) = uVar17;
    } while (pFVar27 != pFVar2);
    uVar31 = *(uint *)&param_1->field_0x2f8;
  }
  switch(param_2->Frequency) {
  case SF_Vertex:
  case SF_Mesh:
  case SF_Amplification:
  case SF_Pixel:
  case SF_Geometry:
    pFVar23 = param_2 + 1;
    if (param_2 == (FRHIShader *)0x0) {
      pFVar23 = (FRHIShader *)0x0;
    }
    break;
  case SF_Compute:
    pFVar23 = (FRHIShader *)&param_2[1]._padding_;
    if (param_2 == (FRHIShader *)0x0) {
      pFVar23 = (FRHIShader *)0x0;
    }
    break;
  default:
    pFVar23 = (FRHIShader *)0x0;
  }
  local_6c = 0;
  if (uVar31 != 0) {
    for (; (uVar31 >> local_6c & 1) == 0; local_6c = local_6c + 1) {
    }
  }
  uVar17 = 0x20;
  if (uVar31 != 0) {
    uVar17 = local_6c;
  }
  lVar13 = pFVar23->_padding_;
  pFVar37 = param_7->DataPtr;
  pFVar36 = pFVar37 + param_7->ArrayNum;
  local_78 = pFVar37;
  local_68 = pFVar36;
  if (pFVar37 != pFVar36) {
    do {
      uVar35 = local_80;
      pFVar8 = pFVar37->Resource;
      if (pFVar8 != (FRHIResource *)0x0) {
        EVar4 = pFVar37->Type;
        param_7._0_4_ = -1;
        param_7._4_1_ = '\t';
        local_78 = pFVar37;
        if (EVar4 == Texture) {
          puVar20 = (undefined8 *)(**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,local_40);
          uVar5 = pFVar37->Index;
          param_7 = (TArrayView<FRHIShaderParameterResource_const_,int> *)*puVar20;
          lVar22 = (**(code **)(pFVar8->_padding_ + 0x48))(pFVar8);
          if ((lVar22 == 0) ||
             (lVar22 = *(longlong *)(lVar22 + 0x200 + (ulonglong)uVar17 * 8), lVar22 == 0)) {
            pFVar32 = (FD3D12ShaderResourceView *)0x0;
          }
          else {
            pFVar32 = *(FD3D12ShaderResourceView **)(lVar22 + 0x240);
          }
          if ((lVar13 & 2) == 0) {
            FD3D12StateCache::SetShaderResourceView
                      (&param_1->StateCache,param_3,pFVar32,(uint)uVar5);
          }
          else {
LAB_1459da597:
            iVar19 = (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayNum;
            piVar1 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayMax
            ;
            if (iVar19 == *piVar1) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(param_1->StateCache).PipelineState.Common.
                                         QueuedBindlessSRVs[uVar35].AllocatorInstance,piVar1);
            }
            (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayNum =
                 iVar19 + 1;
            *(FD3D12ShaderResourceView **)
             ((param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].
              AllocatorInstance.Data + (longlong)iVar19 * 8) = pFVar32;
          }
LAB_1459da603:
          if (((int)param_7 == -1) || (param_7._4_1_ == '\t')) goto LAB_1459da61d;
        }
        else {
          if (EVar4 == ResourceView) {
            puVar20 = (undefined8 *)(**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,local_48);
            param_7 = (TArrayView<FRHIShaderParameterResource_const_,int> *)*puVar20;
            FVar24 = (&pFVar8[8].OwnerName)[uVar17];
            if ((lVar13 & 2) != 0) {
              pFVar32 = (FD3D12ShaderResourceView *)((longlong)FVar24 + 0x30);
              if (FVar24 == (FName)0x0) {
                pFVar32 = (FD3D12ShaderResourceView *)0x0;
              }
              goto LAB_1459da597;
            }
            pFVar32 = (FD3D12ShaderResourceView *)((longlong)FVar24 + 0x30);
            if (FVar24 == (FName)0x0) {
              pFVar32 = (FD3D12ShaderResourceView *)0x0;
            }
            FD3D12StateCache::SetShaderResourceView
                      (&param_1->StateCache,param_3,pFVar32,(uint)pFVar37->Index);
            goto LAB_1459da603;
          }
          if (EVar4 == UnorderedAccessView) {
            puVar20 = (undefined8 *)(**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,local_50);
            uVar5 = pFVar37->Index;
            param_7 = (TArrayView<FRHIShaderParameterResource_const_,int> *)*puVar20;
            FVar24 = (&pFVar8[8].OwnerName)[uVar17];
            pFVar29 = (FD3D12UnorderedAccessView *)((longlong)FVar24 + 0x30);
            pFVar25 = pFVar29;
            if (FVar24 == (FName)0x0) {
              pFVar25 = (FD3D12UnorderedAccessView *)0x0;
            }
            FD3D12CommandContext::ClearShaderResources(param_1,pFVar25,SRVMask);
            if ((lVar13 & 2) == 0) {
              if (FVar24 == (FName)0x0) {
                pFVar29 = (FD3D12UnorderedAccessView *)0x0;
              }
              FD3D12StateCache::SetUAV(&param_1->StateCache,param_3,(uint)uVar5,pFVar29,0xffffffff);
            }
            else {
              if (FVar24 == (FName)0x0) {
                pFVar29 = (FD3D12UnorderedAccessView *)0x0;
              }
              iVar19 = (param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[uVar35].
                       ArrayNum;
              piVar1 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[uVar35].
                        ArrayMax;
              if (iVar19 == *piVar1) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(param_1->StateCache).PipelineState.Common.
                                           QueuedBindlessUAVs[uVar35].AllocatorInstance,piVar1);
              }
              (param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[uVar35].ArrayNum =
                   iVar19 + 1;
              *(FD3D12UnorderedAccessView **)
               ((param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[uVar35].
                AllocatorInstance.Data + (longlong)iVar19 * 8) = pFVar29;
            }
            goto LAB_1459da603;
          }
          if (EVar4 == Sampler) {
            puVar20 = (undefined8 *)(**(code **)(pFVar8->_padding_ + 0x18))(pFVar8,local_58);
            uVar5 = pFVar37->Index;
            param_7 = (TArrayView<FRHIShaderParameterResource_const_,int> *)*puVar20;
            FVar24 = (&pFVar8[1].OwnerName)[uVar17];
            if ((lVar13 & 4) == 0) {
              if ((0x1f < uVar5) &&
                 (bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("SamplerIndex < 32",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                                      ,0x20d,L""), bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              if (*(FName *)((param_1->StateCache).PipelineState.Common.SamplerCache.States[uVar35]
                            + uVar5) != FVar24) {
                *(FName *)((param_1->StateCache).PipelineState.Common.SamplerCache.States[uVar35] +
                          uVar5) = FVar24;
                *(uint *)((longlong)
                          (((FD3D12SamplerStateCache *)
                           (&(param_1->StateCache).PipelineState.Common.UAVCache + 1))->States +
                          0xffffffffffffffff) + 0xe8U + uVar35 * 4) =
                     *(uint *)((longlong)
                               (((FD3D12SamplerStateCache *)
                                (&(param_1->StateCache).PipelineState.Common.UAVCache + 1))->States
                               + 0xffffffffffffffff) + 0xe8U + uVar35 * 4) | 1 << (uVar5 & 0x1f);
              }
            }
            goto LAB_1459da603;
          }
          if (EVar4 == ResourceCollection) {
            puVar20 = (undefined8 *)(**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,local_60);
            param_7 = (TArrayView<FRHIShaderParameterResource_const_,int> *)*puVar20;
            if ((lVar13 & 2) == 0) {
              bVar16 = FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                                  ,0x256,L"");
              if (bVar16) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            else {
              lVar22 = *(longlong *)(&pFVar8[2].AtomicFlags + (ulonglong)uVar17 * 2);
              if (lVar22 != 0) {
                FD3D12StateCache::QueueBindlessSRV
                          (&param_1->StateCache,param_3,
                           *(FD3D12ShaderResourceView **)(lVar22 + 0x80));
                iVar19 = *(int *)(lVar22 + 0x98);
                pvVar9 = *(void **)(lVar22 + 0x90);
                if ((iVar19 < 0) &&
                   (bVar16 = FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar16)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar15 = local_80;
                pTVar33 = (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs + local_80;
                if (iVar19 < 0) {
                  bVar16 = FDebug::CheckVerifyFailedImpl2
                                     ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x9a9,L"Invalid range size: %lld");
                  if (bVar16) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
LAB_1459da26a:
                  iVar18 = UE::Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (8,8,iVar19,&pTVar33->AllocatorInstance,
                                      &(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs
                                       [uVar15].ArrayNum,
                                      &(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs
                                       [uVar15].ArrayMax);
                  memcpy((pTVar33->AllocatorInstance).Data + (longlong)iVar18 * 8,pvVar9,
                         (longlong)iVar19 << 3);
                }
                else if (iVar19 != 0) goto LAB_1459da26a;
                plVar28 = *(longlong **)(lVar22 + 0xa0);
                iVar19 = *(int *)(lVar22 + 0xa8);
                plVar3 = plVar28 + iVar19;
                while( true ) {
                  if (*(int *)(lVar22 + 0xa8) != iVar19) {
                    local_94 = 0;
                    `TCheckedPointerIterator<FD3D12RHITextureReference_*,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_94);
                  }
                  pFVar36 = local_68;
                  pFVar37 = local_78;
                  if (plVar28 == plVar3) break;
                  if (((longlong *)*plVar28 != (longlong *)0x0) &&
                     (lVar21 = (**(code **)(*(longlong *)*plVar28 + 0x48))(), lVar21 != 0)) {
                    uVar10 = *(undefined8 *)(lVar21 + 0x240);
                    piVar1 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar15].
                              ArrayMax;
                    iVar18 = (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].
                             ArrayNum;
                    if (iVar18 == *piVar1) {
                      iVar18 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&pTVar33->AllocatorInstance,piVar1);
                    }
                    (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar15].ArrayNum =
                         iVar18 + 1;
                    *(undefined8 *)((pTVar33->AllocatorInstance).Data + (longlong)iVar18 * 8) =
                         uVar10;
                  }
                  plVar28 = plVar28 + 1;
                }
              }
            }
            goto LAB_1459da603;
          }
LAB_1459da61d:
          bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("Handle.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                              ,0x290,
                              L"D3D12 resource did not provide a valid descriptor handle. Please validate that all D3D12 types can provide this or that the resource is still valid."
                             );
          if (bVar16) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        puVar14 = local_88;
        uVar5 = pFVar37->Index;
        if (((int)param_7 != -1) && (param_7._4_1_ != '\t')) {
          uVar31 = uVar5 + 4;
          if (*(uint *)(local_88 + 0x3c00) < uVar31) {
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                      ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(local_88 + 0x3bf8),
                       uVar5 + 0x203 & 0xfffffe00,Default);
          }
          *(int *)((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar14 + 0x3bf8))->
                   AllocatorInstance).Data + uVar5) = (int)param_7;
          puVar14[0x3c10] = true;
          uVar12 = *(uint *)(puVar14 + 0x3c08);
          if (*(uint *)(puVar14 + 0x3c08) < uVar31) {
            uVar12 = uVar31;
          }
          *(uint *)(puVar14 + 0x3c08) = uVar12;
        }
      }
      pFVar37 = pFVar37 + 1;
      local_78 = pFVar37;
    } while (pFVar37 != pFVar36);
  }
  pFVar37 = param_6->DataPtr;
  pFVar36 = pFVar37 + param_6->ArrayNum;
  for (; pFVar37 != pFVar36; pFVar37 = (FRHIShaderParameterResource *)((longlong)pFVar37 + 0x10)) {
    if (*(EType *)((longlong)pFVar37 + 10) == UnorderedAccessView) {
      if ((param_3 < SF_NumStandardFrequencies) && ((0x29U >> (param_3 & 0x1f) & 1) != 0)) {
        uVar5 = *(ushort *)((longlong)pFVar37 + 8);
        if (pFVar37->Resource == (FRHIResource *)0x0) {
          FVar24.ComparisonIndex.Value = 0;
          FVar24.Number = 0;
        }
        else {
          FVar24 = (&pFVar37->Resource[8].OwnerName)[uVar17];
        }
        pFVar29 = (FD3D12UnorderedAccessView *)((longlong)FVar24 + 0x30);
        if (FVar24 == (FName)0x0) {
          pFVar29 = (FD3D12UnorderedAccessView *)0x0;
        }
        FD3D12CommandContext::ClearShaderResources(param_1,pFVar29,SRVMask);
        if ((lVar13 & 2) == 0) {
          FD3D12StateCache::SetUAV(&param_1->StateCache,param_3,(uint)uVar5,pFVar29,0xffffffff);
        }
        else {
          iVar19 = (param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[param_3].ArrayNum;
          piVar1 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[param_3].ArrayMax;
          if (iVar19 == *piVar1) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs
                                       [param_3].AllocatorInstance,piVar1);
          }
          (param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[param_3].ArrayNum =
               iVar19 + 1;
          *(FD3D12UnorderedAccessView **)
           ((param_1->StateCache).PipelineState.Common.QueuedBindlessUAVs[param_3].AllocatorInstance
            .Data + (longlong)iVar19 * 8) = pFVar29;
        }
      }
      else {
        bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                            ,0x2a0,
                            L"TShaderRHI Can\'t have compute shader to be set. UAVs are not supported tessellation and geometry shaders."
                           );
        if (bVar16) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
  pFVar37 = param_6->DataPtr;
  pFVar36 = pFVar37 + param_6->ArrayNum;
  do {
    if (pFVar37 == pFVar36) {
      return;
    }
    uVar35 = (ulonglong)param_3;
    switch(pFVar37->Type) {
    case Texture:
      uVar5 = pFVar37->Index;
      if (((pFVar37->Resource == (FRHIResource *)0x0) ||
          (lVar22 = (**(code **)(pFVar37->Resource->_padding_ + 0x48))(), lVar22 == 0)) ||
         (lVar22 = *(longlong *)(lVar22 + 0x200 + (ulonglong)uVar17 * 8), lVar22 == 0)) {
        pFVar32 = (FD3D12ShaderResourceView *)0x0;
      }
      else {
        pFVar32 = *(FD3D12ShaderResourceView **)(lVar22 + 0x240);
      }
      if ((lVar13 & 2) == 0) {
        FD3D12StateCache::SetShaderResourceView(&param_1->StateCache,param_3,pFVar32,(uint)uVar5);
      }
      else {
        iVar19 = (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayNum;
        piVar1 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayMax;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs
                                     [uVar35].AllocatorInstance,piVar1);
        }
        (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayNum = iVar19 + 1;
        *(FD3D12ShaderResourceView **)
         ((param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].AllocatorInstance.
          Data + (longlong)iVar19 * 8) = pFVar32;
      }
      break;
    case ResourceView:
      FVar34.ComparisonIndex.Value = 0;
      FVar34.Number = 0;
      FVar24 = FVar34;
      if (pFVar37->Resource != (FRHIResource *)0x0) {
        FVar24 = (&pFVar37->Resource[8].OwnerName)[uVar17];
      }
      if ((lVar13 & 2) == 0) {
        FVar30 = (FName)((longlong)FVar24 + 0x30);
        if (FVar24 == (FName)0x0) {
          FVar30 = FVar34;
        }
        FD3D12StateCache::SetShaderResourceView
                  (&param_1->StateCache,param_3,(FD3D12ShaderResourceView *)FVar30,
                   (uint)pFVar37->Index);
      }
      else {
        FVar30 = (FName)((longlong)FVar24 + 0x30);
        if (FVar24 == (FName)0x0) {
          FVar30 = FVar34;
        }
        iVar19 = (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayNum;
        piVar1 = &(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayMax;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs
                                     [uVar35].AllocatorInstance,piVar1);
        }
        (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].ArrayNum = iVar19 + 1;
        *(FName *)((param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs[uVar35].
                   AllocatorInstance.Data + (longlong)iVar19 * 8) = FVar30;
      }
      break;
    case UnorderedAccessView:
      break;
    case Sampler:
      uVar5 = pFVar37->Index;
      FVar30.ComparisonIndex.Value = 0;
      FVar30.Number = 0;
      if (pFVar37->Resource != (FRHIResource *)0x0) {
        FVar30 = (&pFVar37->Resource[1].OwnerName)[uVar17];
      }
      if ((lVar13 & 4) == 0) {
        if ((0x1f < uVar5) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("SamplerIndex < 32",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                                ,0x20d,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(FName *)((param_1->StateCache).PipelineState.Common.SamplerCache.States[uVar35] +
                      uVar5) != FVar30) {
          *(FName *)((param_1->StateCache).PipelineState.Common.SamplerCache.States[uVar35] + uVar5)
               = FVar30;
          *(uint *)((longlong)
                    (((FD3D12SamplerStateCache *)
                     (&(param_1->StateCache).PipelineState.Common.UAVCache + 1))->States +
                    0xffffffffffffffff) + 0xe8U + uVar35 * 4) =
               *(uint *)((longlong)
                         (((FD3D12SamplerStateCache *)
                          (&(param_1->StateCache).PipelineState.Common.UAVCache + 1))->States +
                         0xffffffffffffffff) + 0xe8U + uVar35 * 4) | 1 << (uVar5 & 0x1f);
        }
      }
      break;
    case UniformBuffer:
      if (pFVar37->Resource == (FRHIResource *)0x0) {
        pFVar26 = (FD3D12UniformBuffer *)0x0;
      }
      else {
        pFVar26 = (FD3D12UniformBuffer *)(&pFVar37->Resource[4]._padding_)[local_90];
      }
      BindUniformBuffer(param_1,param_2,param_3,(uint)pFVar37->Index,pFVar26);
      break;
    case ResourceCollection:
      if ((lVar13 & 2) == 0) {
        bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                            ,0x256,L"");
        if (bVar16) goto code_r0x0001459dac5e;
      }
      else if ((pFVar37->Resource != (FRHIResource *)0x0) &&
              (lVar22 = *(longlong *)(&pFVar37->Resource[2].AtomicFlags + (ulonglong)uVar17 * 2),
              lVar22 != 0)) {
        FD3D12StateCache::QueueBindlessSRV
                  (&param_1->StateCache,param_3,*(FD3D12ShaderResourceView **)(lVar22 + 0x80));
        iVar19 = *(int *)(lVar22 + 0x98);
        pvVar9 = *(void **)(lVar22 + 0x90);
        if ((iVar19 < 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar33 = (param_1->StateCache).PipelineState.Common.QueuedBindlessSRVs + uVar35;
        if (iVar19 < 0) {
          bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x9a9,L"Invalid range size: %lld");
          if (bVar16) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
LAB_1459dab57:
          iVar18 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar19,&pTVar33->AllocatorInstance,&pTVar33->ArrayNum,
                              &pTVar33->ArrayMax);
          memcpy((pTVar33->AllocatorInstance).Data + (longlong)iVar18 * 8,pvVar9,
                 (longlong)iVar19 << 3);
        }
        else if (iVar19 != 0) goto LAB_1459dab57;
        plVar28 = *(longlong **)(lVar22 + 0xa0);
        iVar19 = *(int *)(lVar22 + 0xa8);
        plVar3 = plVar28 + iVar19;
        while( true ) {
          if (*(int *)(lVar22 + 0xa8) != iVar19) {
            local_93[0] = 0;
            `TCheckedPointerIterator<FD3D12RHITextureReference_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_93);
          }
          if (plVar28 == plVar3) break;
          if (((longlong *)*plVar28 != (longlong *)0x0) &&
             (lVar21 = (**(code **)(*(longlong *)*plVar28 + 0x48))(), lVar21 != 0)) {
            uVar10 = *(undefined8 *)(lVar21 + 0x240);
            iVar18 = pTVar33->ArrayNum;
            if (iVar18 == pTVar33->ArrayMax) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar33->AllocatorInstance,&pTVar33->ArrayMax);
              pTVar33->ArrayNum = iVar18;
            }
            pTVar33->ArrayNum = iVar18 + 1;
            *(undefined8 *)((pTVar33->AllocatorInstance).Data + (longlong)iVar18 * 8) = uVar10;
          }
          plVar28 = plVar28 + 1;
        }
      }
      break;
    default:
      bVar16 = FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                          ,699,L"Unhandled resource type?");
      if (bVar16) {
code_r0x0001459dac5e:
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar37 = pFVar37 + 1;
  } while( true );
}

// SetShaderUnbindsOnContext @ 1459dace0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
SetShaderUnbindsOnContext
          (FD3D12CommandContext *param_1,FRHIShader *param_2,EShaderFrequency param_3,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_4)

{
  FRHIShaderParameterUnbind *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIShaderParameterUnbind *pFVar4;
  
  pFVar4 = param_4->DataPtr;
  pFVar1 = pFVar4 + param_4->ArrayNum;
  do {
    if (pFVar4 == pFVar1) {
      return;
    }
    if (pFVar4->Type == ResourceView) {
      FD3D12StateCache::SetShaderResourceView
                (&param_1->StateCache,param_3,(FD3D12ShaderResourceView *)0x0,(uint)pFVar4->Index);
    }
    else if (pFVar4->Type == UnorderedAccessView) {
      if ((param_3 < SF_NumStandardFrequencies) && ((0x29U >> (param_3 & 0x1f) & 1) != 0)) {
        FD3D12StateCache::SetUAV
                  (&param_1->StateCache,param_3,(uint)pFVar4->Index,(FD3D12UnorderedAccessView *)0x0
                   ,0xffffffff);
      }
      else {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                           ,0x2fb,
                           L"TShaderRHI Can\'t have compute shader to be set. UAVs are not supported tessellation and geometry shaders."
                          );
        if (bVar3) goto code_r0x0001459dada9;
      }
    }
    else {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x2ff,L"Unhandled resource type?");
      if (bVar3) {
code_r0x0001459dada9:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// ValidateBoundShader @ 1459e0b30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl ValidateBoundShader(FD3D12StateCache *param_1,FRHIShader *param_2)

{
  FRHIShader *pFVar1;
  EShaderFrequency local_res10 [8];
  EShaderFrequency *local_res18 [2];
  
  local_res10[0] = param_2->Frequency;
  switch(local_res10[0]) {
  case SF_Vertex:
    pFVar1 = (FRHIShader *)
             (((param_1->PipelineState).Graphics.CurrentPipelineStateObject.Reference)->
             PipelineStateInitializer).BoundShaderState.VertexShaderRHI;
    break;
  case SF_Mesh:
    pFVar1 = (FRHIShader *)
             (((param_1->PipelineState).Graphics.CurrentPipelineStateObject.Reference)->
             PipelineStateInitializer).BoundShaderState.MeshShaderRHI;
    break;
  case SF_Amplification:
    pFVar1 = (FRHIShader *)
             (((param_1->PipelineState).Graphics.CurrentPipelineStateObject.Reference)->
             PipelineStateInitializer).BoundShaderState.AmplificationShaderRHI;
    break;
  case SF_Pixel:
    pFVar1 = (FRHIShader *)
             (((param_1->PipelineState).Graphics.CurrentPipelineStateObject.Reference)->
             PipelineStateInitializer).BoundShaderState.PixelShaderRHI;
    break;
  case SF_Geometry:
    pFVar1 = (FRHIShader *)
             (((param_1->PipelineState).Graphics.CurrentPipelineStateObject.Reference)->
             PipelineStateInitializer).BoundShaderState.GeometryShaderRHI;
    break;
  case SF_Compute:
    pFVar1 = (FRHIShader *)
             ((param_1->PipelineState).Compute.CurrentPipelineStateObject.Reference)->_padding_;
    break;
  default:
    pFVar1 = (FRHIShader *)0x0;
  }
  if (pFVar1 != param_2) {
    local_res18[0] = local_res10;
    `ValidateBoundShader'::__l2::<lambda_1>::operator()(local_res18);
  }
  return;
}

// Barriers'' @ 1503c7b60

void __cdecl `dynamic_atexit_destructor_for_'FD3D12Adapter::Barriers__(void)

{
  if (FD3D12Adapter::Barriers.Ptr != (ID3D12BarriersForAdapter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503c7b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*FD3D12Adapter::Barriers.Ptr)(FD3D12Adapter::Barriers.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CTrackedReleasedAllocationFrameRetention'' @ 1503c7b80

void __cdecl _dynamic_atexit_destructor_for__CTrackedReleasedAllocationFrameRetention__(void)

{
  CTrackedReleasedAllocationFrameRetention._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CTrackedReleasedAllocationFrameRetention);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAsyncCompute'' @ 1503c7ba0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAsyncCompute__(void)

{
  CVarAllowAsyncCompute._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAsyncCompute);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBindlessResourceDescriptorGarbageCollectLatency'' @ 1503c7bc0

void __cdecl
_dynamic_atexit_destructor_for__CVarBindlessResourceDescriptorGarbageCollectLatency__(void)

{
  CVarBindlessResourceDescriptorGarbageCollectLatency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBindlessResourceDescriptorGarbageCollectLatency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBindlessResourceDescriptorHeapSize'' @ 1503c7be0

void __cdecl _dynamic_atexit_destructor_for__CVarBindlessResourceDescriptorHeapSize__(void)

{
  CVarBindlessResourceDescriptorHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBindlessResourceDescriptorHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBindlessSamplerDescriptorHeapSize'' @ 1503c7c00

void __cdecl _dynamic_atexit_destructor_for__CVarBindlessSamplerDescriptorHeapSize__(void)

{
  CVarBindlessSamplerDescriptorHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBindlessSamplerDescriptorHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12AllowDiscardResources'' @ 1503c7c20

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12AllowDiscardResources__(void)

{
  CVarD3D12AllowDiscardResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12AllowDiscardResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12AllowPoolAllocateIndirectArgBuffers'' @ 1503c7c40

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12AllowPoolAllocateIndirectArgBuffers__(void)

{
  CVarD3D12AllowPoolAllocateIndirectArgBuffers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12AllowPoolAllocateIndirectArgBuffers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12BatchResourceBarriers'' @ 1503c7c60

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12BatchResourceBarriers__(void)

{
  CVarD3D12BatchResourceBarriers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12BatchResourceBarriers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12EnableDRED'' @ 1503c7c80

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12EnableDRED__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12EnableDRED);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12EnableLightweightDRED'' @ 1503c7ca0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12EnableLightweightDRED__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12EnableLightweightDRED);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12EvictAllResidentResourcesInBackground'' @ 1503c7cc0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12EvictAllResidentResourcesInBackground__(void)

{
  CVarD3D12EvictAllResidentResourcesInBackground._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12EvictAllResidentResourcesInBackground);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12FastAllocatorMinPagesToRetain'' @ 1503c7ce0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12FastAllocatorMinPagesToRetain__(void)

{
  CVarD3D12FastAllocatorMinPagesToRetain._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12FastAllocatorMinPagesToRetain);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12FastConstantAllocatorPageSize'' @ 1503c7d00

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12FastConstantAllocatorPageSize__(void)

{
  CVarD3D12FastConstantAllocatorPageSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12FastConstantAllocatorPageSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12PoolAllocatorRTUAVTextureMaxAllocationSize'' @ 1503c7d20

void __cdecl
_dynamic_atexit_destructor_for__CVarD3D12PoolAllocatorRTUAVTextureMaxAllocationSize__(void)

{
  CVarD3D12PoolAllocatorRTUAVTextureMaxAllocationSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12PoolAllocatorRTUAVTextureMaxAllocationSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12PoolAllocatorRTUAVTextureVRAMPoolSize'' @ 1503c7d40

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12PoolAllocatorRTUAVTextureVRAMPoolSize__(void)

{
  CVarD3D12PoolAllocatorRTUAVTextureVRAMPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12PoolAllocatorRTUAVTextureVRAMPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12PoolAllocatorReadOnlyTextureMaxAllocationSize'' @ 1503c7d60

void __cdecl
_dynamic_atexit_destructor_for__CVarD3D12PoolAllocatorReadOnlyTextureMaxAllocationSize__(void)

{
  CVarD3D12PoolAllocatorReadOnlyTextureMaxAllocationSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12PoolAllocatorReadOnlyTextureMaxAllocationSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize'' @ 1503c7d80

void __cdecl
_dynamic_atexit_destructor_for__CVarD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize__(void)

{
  CVarD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12ReadOnlyTextureAllocatorMaxPoolSize'' @ 1503c7da0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12ReadOnlyTextureAllocatorMaxPoolSize__(void)

{
  CVarD3D12ReadOnlyTextureAllocatorMaxPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12ReadOnlyTextureAllocatorMaxPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12ReadOnlyTextureAllocatorMinNumToPool'' @ 1503c7dc0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12ReadOnlyTextureAllocatorMinNumToPool__(void)

{
  CVarD3D12ReadOnlyTextureAllocatorMinNumToPool._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12ReadOnlyTextureAllocatorMinNumToPool);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12ReadOnlyTextureAllocatorMinPoolSize'' @ 1503c7de0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12ReadOnlyTextureAllocatorMinPoolSize__(void)

{
  CVarD3D12ReadOnlyTextureAllocatorMinPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12ReadOnlyTextureAllocatorMinPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12SegListTrackLeaks'' @ 1503c7e00

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12SegListTrackLeaks__(void)

{
  CVarD3D12SegListTrackLeaks._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12SegListTrackLeaks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12TrackAllAllocations'' @ 1503c7e20

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12TrackAllAllocations__(void)

{
  CVarD3D12TrackAllAllocations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12TrackAllAllocations);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12UnsafeCrossGPUTransfers'' @ 1503c7e40

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12UnsafeCrossGPUTransfers__(void)

{
  CVarD3D12UnsafeCrossGPUTransfers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12UnsafeCrossGPUTransfers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12UploadHeapBigBlockMaxAllocationSize'' @ 1503c7e60

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12UploadHeapBigBlockMaxAllocationSize__(void)

{
  CVarD3D12UploadHeapBigBlockMaxAllocationSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12UploadHeapBigBlockMaxAllocationSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12UploadHeapBigBlockPoolSize'' @ 1503c7e80

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12UploadHeapBigBlockPoolSize__(void)

{
  CVarD3D12UploadHeapBigBlockPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12UploadHeapBigBlockPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12UploadHeapSmallBlockMaxAllocationSize'' @ 1503c7ea0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12UploadHeapSmallBlockMaxAllocationSize__(void)

{
  CVarD3D12UploadHeapSmallBlockMaxAllocationSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12UploadHeapSmallBlockMaxAllocationSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12UploadHeapSmallBlockPoolSize'' @ 1503c7ec0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12UploadHeapSmallBlockPoolSize__(void)

{
  CVarD3D12UploadHeapSmallBlockPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12UploadHeapSmallBlockPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12VRAMBufferPoolDefrag'' @ 1503c7ee0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12VRAMBufferPoolDefrag__(void)

{
  CVarD3D12VRAMBufferPoolDefrag._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12VRAMBufferPoolDefrag);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12VRAMBufferPoolDefragMaxCopySizePerFrame'' @ 1503c7f00

void __cdecl
_dynamic_atexit_destructor_for__CVarD3D12VRAMBufferPoolDefragMaxCopySizePerFrame__(void)

{
  CVarD3D12VRAMBufferPoolDefragMaxCopySizePerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12VRAMBufferPoolDefragMaxCopySizePerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12VRAMTexturePoolDefrag'' @ 1503c7f20

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12VRAMTexturePoolDefrag__(void)

{
  CVarD3D12VRAMTexturePoolDefrag._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12VRAMTexturePoolDefrag);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12VRAMTexturePoolDefragMaxCopySizePerFrame'' @ 1503c7f40

void __cdecl
_dynamic_atexit_destructor_for__CVarD3D12VRAMTexturePoolDefragMaxCopySizePerFrame__(void)

{
  CVarD3D12VRAMTexturePoolDefragMaxCopySizePerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12VRAMTexturePoolDefragMaxCopySizePerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableDiscardOfDepthResources'' @ 1503c7f60

void __cdecl _dynamic_atexit_destructor_for__CVarDisableDiscardOfDepthResources__(void)

{
  CVarDisableDiscardOfDepthResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableDiscardOfDepthResources)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarEmitRgpFrameMarkers'' @ 1503c7f80

void __cdecl _dynamic_atexit_destructor_for__CVarEmitRgpFrameMarkers__(void)

{
  CVarEmitRgpFrameMarkers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEmitRgpFrameMarkers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxCommandsPerCommandList'' @ 1503c7fa0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxCommandsPerCommandList__(void)

{
  CVarMaxCommandsPerCommandList._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxCommandsPerCommandList);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPreferredBarrierImplementation'' @ 1503c7fc0

void __cdecl _dynamic_atexit_destructor_for__CVarPreferredBarrierImplementation__(void)

{
  CVarPreferredBarrierImplementation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPreferredBarrierImplementation)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarResidencyManagement'' @ 1503c7fe0

void __cdecl _dynamic_atexit_destructor_for__CVarResidencyManagement__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResidencyManagement);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503c8000

void __cdecl
``FD3D12DefaultBufferAllocator::BeginFrame'::__l21::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503c8020

void __cdecl
``FD3D12TextureAllocatorPool::BeginFrame'::__l13::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c8027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GD3D12DebugCvar'' @ 1503c8040

void __cdecl _dynamic_atexit_destructor_for__GD3D12DebugCvar__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GD3D12DebugCvar);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpTrackedD3D12AllocationCallstacksCmd'' @ 1503c8060

void __cdecl _dynamic_atexit_destructor_for__GDumpTrackedD3D12AllocationCallstacksCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GDumpTrackedD3D12AllocationCallstacksCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpTrackedD3D12AllocationsCmd'' @ 1503c8080

void __cdecl _dynamic_atexit_destructor_for__GDumpTrackedD3D12AllocationsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpTrackedD3D12AllocationsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpTrackedD3D12ResidentAllocationCallstacksCmd'' @ 1503c80a0

void __cdecl
_dynamic_atexit_destructor_for__GDumpTrackedD3D12ResidentAllocationCallstacksCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GDumpTrackedD3D12ResidentAllocationCallstacksCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpTrackedD3D12ResidentAllocationsCmd'' @ 1503c80c0

void __cdecl _dynamic_atexit_destructor_for__GDumpTrackedD3D12ResidentAllocationsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GDumpTrackedD3D12ResidentAllocationsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GIgnoreD3D12MessageArray'' @ 1503c80e0

/* WARNING: Enum "D3D12_MESSAGE_ID.conflict": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GIgnoreD3D12MessageArray__(void)

{
  DestructItems<MessageFilter,int>
            ((MessageFilter *)GIgnoreD3D12MessageArray.AllocatorInstance.Data,
             GIgnoreD3D12MessageArray.ArrayNum);
  if (GIgnoreD3D12MessageArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GIgnoreD3D12MessageArray.AllocatorInstance.Data);
    return;
  }
  return;
}

// operator() @ 1504d54c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall `ValidateBoundShader'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8776608671141462038>);
  if (bVar2) {
    GetShaderFrequencyString(**(EShaderFrequency **)this,false);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8776608671141462038>,
                       &`public:___cdecl_`void___cdecl_ValidateBoundShader(FD3D12StateCache&___ptr64,FRHIShader*___ptr64)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d5570

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall `ValidateBoundUniformBuffer'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8776608671141462071>);
  if (bVar2) {
    GetShaderFrequencyString
              (*(EShaderFrequency *)(**(longlong **)((longlong)this + 8) + 0x104),false);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8776608671141462071>,
                       &`public:___cdecl_`void___cdecl_ValidateBoundUniformBuffer(FD3D12UniformBuffer*___ptr64,FRHIShader*___ptr64,unsigned_int)'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

