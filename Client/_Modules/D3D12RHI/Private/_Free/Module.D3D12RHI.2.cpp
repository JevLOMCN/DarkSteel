// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 251

// MemoryPool'' @ 1410470a0

void __cdecl `dynamic_initializer_for_'FD3D12SyncPoint::MemoryPool__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FD3D12SyncPoint::MemoryPool__);
  return;
}

// NullTransformBuffer'' @ 1410470c0

void __cdecl `dynamic_initializer_for_'FD3D12RayTracingGeometry::NullTransformBuffer__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FD3D12RayTracingGeometry::NullTransformBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12AllowDiscardResources'' @ 1410470e0

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

// `dynamic_initializer_for_'CVarD3D12BatchResourceBarriers'' @ 141047130

void __cdecl _dynamic_initializer_for__CVarD3D12BatchResourceBarriers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12BatchResourceBarriers,L"d3d12.BatchResourceBarriers",
             &GD3D12BatchResourceBarriers,L"Whether to allow batching resource barriers",0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12BatchResourceBarriers__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12ExplicitDeduplicateSamplers'' @ 141047180

void __cdecl _dynamic_initializer_for__CVarD3D12ExplicitDeduplicateSamplers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12ExplicitDeduplicateSamplers,
             L"r.D3D12.ExplicitDescriptorHeap.DeduplicateSamplers",
             &GD3D12ExplicitDeduplicateSamplers,
             L"Use an exhaustive search to deduplicate sampler descriptors when generating shader binding tables. Reduces sampler heap usage at the cost of some CPU time. (default = 1)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12ExplicitDeduplicateSamplers__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12ExplicitViewDescriptorHeapSize'' @ 1410471d0

void __cdecl _dynamic_initializer_for__CVarD3D12ExplicitViewDescriptorHeapSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12ExplicitViewDescriptorHeapSize,
             L"r.D3D12.ExplicitDescriptorHeap.ViewDescriptorHeapSize",
             &GD3D12ExplicitViewDescriptorHeapSize,
             L"Maximum number of descriptors per explicit view descriptor heap. (default = 250k, ~8MB per heap)\nTypical measured descriptor heap usage in large scenes is ~50k. An error is reported when this limit is reached and shader bindings for subsequent objects are skipped.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12ExplicitViewDescriptorHeapSize__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12ExtraDiagnosticBufferMemory'' @ 141047220

void __cdecl _dynamic_initializer_for__CVarD3D12ExtraDiagnosticBufferMemory__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D12ExtraDiagnosticBufferMemory,L"r.D3D12.DiagnosticBufferExtraMemory",local_res8
             ,L"Extra allocated memory for diagnostic buffer",4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12ExtraDiagnosticBufferMemory__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12GPUTimeout'' @ 141047270

void __cdecl _dynamic_initializer_for__CVarD3D12GPUTimeout__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarD3D12GPUTimeout,L"r.D3D12.GPUTimeout",local_res8,
             L"0: Disable GPU Timeout; use with care as it could freeze your PC!\n1: Enable GPU Timeout; operation taking long on the GPU will fail(default)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12GPUTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12RHIStablePowerState'' @ 1410472c0

void __cdecl _dynamic_initializer_for__CVarD3D12RHIStablePowerState__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12RHIStablePowerState,L"D3D12.StablePowerState",&GD3D12RHIStablePowerState,
             L"Enable stable power state. This increases GPU timing measurement accuracy but may decrease overall GPU clock rate.\n    0 (default): off\n    1          : set during profiling\n    2          : set on startup\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12RHIStablePowerState__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12RayTracingAllowCompaction'' @ 141047310

void __cdecl _dynamic_initializer_for__CVarD3D12RayTracingAllowCompaction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12RayTracingAllowCompaction,L"r.D3D12.RayTracing.AllowCompaction",
             &GD3D12RayTracingAllowCompaction,
             L"Whether to automatically perform compaction for static acceleration structures to save GPU memory. (default = 1)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12RayTracingAllowCompaction__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12RayTracingCompactionMinPrimitiveCount'' @ 141047360

void __cdecl _dynamic_initializer_for__CVarD3D12RayTracingCompactionMinPrimitiveCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12RayTracingCompactionMinPrimitiveCount,
             L"r.D3D12.RayTracing.Compaction.MinPrimitiveCount",
             &GD3D12RayTracingCompactionMinPrimitiveCount,
             L"Sets the minimum primitive count threshold below which geometry skips the compaction. (default = 128)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12RayTracingCompactionMinPrimitiveCount__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12RayTracingGPUValidation'' @ 1410473b0

void __cdecl _dynamic_initializer_for__CVarD3D12RayTracingGPUValidation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12RayTracingGPUValidation,L"r.D3D12.RayTracing.GPUValidation",
             &GD3D12RayTracingGPUValidation,
             L"Whether to perform validation of ray tracing geometry and other structures on the GPU. Requires Shader Model 6. (default = 0)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarD3D12RayTracingGPUValidation__);
  return;
}

// `dynamic_initializer_for_'CVarD3D12RayTracingMaxBatchedCompaction'' @ 141047400

void __cdecl _dynamic_initializer_for__CVarD3D12RayTracingMaxBatchedCompaction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarD3D12RayTracingMaxBatchedCompaction,L"r.D3D12.RayTracing.MaxBatchedCompaction",
             &GD3D12RayTracingMaxBatchedCompaction,
             L"Maximum of amount of compaction requests and rebuilds per frame. (default = 64)\n",4)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarD3D12RayTracingMaxBatchedCompaction__);
  return;
}

// `dynamic_initializer_for_'CVarDisableDiscardOfDepthResources'' @ 141047450

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

// `dynamic_initializer_for_'CVarInsertOuterOcclusionQuery'' @ 1410474a0

void __cdecl
D3D12RHI::RHIConsoleVariables::_dynamic_initializer_for__CVarInsertOuterOcclusionQuery__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInsertOuterOcclusionQuery,L"D3D12.InsertOuterOcclusionQuery",
             &GInsertOuterOcclusionQuery,
             L"If true, enable a dummy outer occlusion query around occlusion query batches. Can help performance on some GPU architectures"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarInsertOuterOcclusionQuery__);
  return;
}

// `dynamic_initializer_for_'CVarLowLevelCacheKeepUsedPSOs'' @ 1410474f0

void __cdecl _dynamic_initializer_for__CVarLowLevelCacheKeepUsedPSOs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLowLevelCacheKeepUsedPSOs,L"D3D12.PSO.KeepUsedPSOsInLowLevelCache",
             &GLowLevelCacheKeepUsedPSOs,
             L"Keep in memory the d3d12 PSO blob for used PSOs. Consumes more memory but reduces potential stalls.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarLowLevelCacheKeepUsedPSOs__);
  return;
}

// `dynamic_initializer_for_'CVarPSOPrecacheKeepLowLevel'' @ 141047540

void __cdecl _dynamic_initializer_for__CVarPSOPrecacheKeepLowLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPSOPrecacheKeepLowLevel,L"D3D12.PSOPrecache.KeepLowLevel",
             &GLowLevelCacheKeepPrecachedPSOs,
             L"Keep in memory the d3d12 PSO blob for precached PSOs. Consumes more memory but reduces stalls.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPSOPrecacheKeepLowLevel__);
  return;
}

// `dynamic_initializer_for_'CVarPSOStallWarningThresholdInMs'' @ 141047590

void __cdecl _dynamic_initializer_for__CVarPSOStallWarningThresholdInMs__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 100.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarPSOStallWarningThresholdInMs,L"D3D12.PSO.StallWarningThresholdInMs",local_res8,
             L"Sets a threshold of when to logs messages about stalls due to PSO creation.\nValue is in milliseconds. (100 is the default)\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarPSOStallWarningThresholdInMs__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingAllowSpecializedStateObjects'' @ 1410475e0

void __cdecl _dynamic_initializer_for__CVarRayTracingAllowSpecializedStateObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingAllowSpecializedStateObjects,
             L"r.D3D12.RayTracing.AllowSpecializedStateObjects",
             &GRayTracingAllowSpecializedStateObjects,
             L"Whether to use specialized RTPSOs if they have been created. This is intended for performance testingand has no effect if r.D3D12.RayTracing.SpecializeStateObjects is 0. (default = 1)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingAllowSpecializedStateObjects__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingDebugForceFastTrace'' @ 141047630

void __cdecl _dynamic_initializer_for__CVarRayTracingDebugForceFastTrace__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingDebugForceFastTrace,L"r.D3D12.RayTracing.DebugForceBuildMode",
             &GRayTracingDebugForceBuildMode,
             L"Forces specific acceleration structure build mode (not runtime-tweakable).\n0: Use build mode requested by high-level code (Default)\n1: Force fast build mode\n2: Force fast trace mode\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingDebugForceFastTrace__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingShaderRecordCache'' @ 141047680

void __cdecl _dynamic_initializer_for__CVarRayTracingShaderRecordCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingShaderRecordCache,L"r.D3D12.RayTracing.CacheShaderRecords",
             &GRayTracingCacheShaderRecords,
             L"Automatically cache and re-use SBT hit group records. This significantly improves CPU performance in large scenes with many identical mesh instances. (default = 1)\nThis mode assumes that contents of uniform buffers does not change during ray tracing resource binding."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingShaderRecordCache__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingSpecializeStateObjects'' @ 1410476d0

void __cdecl _dynamic_initializer_for__CVarRayTracingSpecializeStateObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRayTracingSpecializeStateObjects,L"r.D3D12.RayTracing.SpecializeStateObjects",
             &GRayTracingSpecializeStateObjects,
             L"Whether to create specialized unique ray tracing pipeline state objects for each ray generation shader. (default = 0)\nThis option can produce more more efficient PSOs for the GPU at the cost of longer creation times and more memory. Requires DXR 1.1.\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingSpecializeStateObjects__);
  return;
}

// `dynamic_initializer_for_'GD3D12DumpRayTracingGeometriesCmd'' @ 141047720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GD3D12DumpRayTracingGeometriesCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_112>::<lambda_invoker_cdecl>;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"D3D12.DumpRayTracingGeometries",
                      L"Dump memory allocations for ray tracing resources.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GD3D12DumpRayTracingGeometriesCmd,pIVar5);
  GD3D12DumpRayTracingGeometriesCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GD3D12DumpRayTracingGeometriesCmd__);
  return;
}

// `dynamic_initializer_for_'GD3D12DumpRayTracingGeometriesToCSVCmd'' @ 1410478c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GD3D12DumpRayTracingGeometriesToCSVCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_113>::<lambda_invoker_cdecl>;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"D3D12.DumpRayTracingGeometriesToCSV",
                      L"Dump all memory allocations for ray tracing resources to a CSV file on disc."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GD3D12DumpRayTracingGeometriesToCSVCmd,pIVar5);
  GD3D12DumpRayTracingGeometriesToCSVCmd._0_8_ =
       &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GD3D12DumpRayTracingGeometriesToCSVCmd__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BuildBLAS'' @ 141047a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BuildBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BuildBLAS == (FThreadSafeStaticStat<FStat_STAT_D3D12BuildBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BuildBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BuildBLAS,*pFVar1,L"BuildBottomLevel"
               ,"STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12BuildTLAS'' @ 141047af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12BuildTLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12BuildTLAS == (FThreadSafeStaticStat<FStat_STAT_D3D12BuildTLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12BuildTLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BuildTLAS,*pFVar1,L"BuildTopLevel",
               "STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12ClusterOperation'' @ 141047b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12ClusterOperation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12ClusterOperation ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ClusterOperation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12ClusterOperation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ClusterOperation,*pFVar1,
               L"ClusterOperation","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12CreateShaderTable'' @ 141047c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12CreateShaderTable__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12CreateShaderTable ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CreateShaderTable>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12CreateShaderTable");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CreateShaderTable,*pFVar1,
               L"CreateShaderTable","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12DispatchRays'' @ 141047ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12DispatchRays__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12DispatchRays == (FThreadSafeStaticStat<FStat_STAT_D3D12DispatchRays>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12DispatchRays");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12DispatchRays,*pFVar1,L"DispatchRays",
               "STATGROUP_D3D12RayTracing","STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingAllocatedBLAS'' @ 141047d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingAllocatedBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingAllocatedBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingAllocatedBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingAllocatedBLAS,*pFVar1,
               L"Allocated bottom level acceleration structures","STATGROUP_D3D12RayTracing",
               "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingAllocatedSBT'' @ 141047dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingAllocatedSBT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingAllocatedSBT ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedSBT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingAllocatedSBT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingAllocatedSBT,*pFVar1,
               L"Allocated shader binding tables","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingAllocatedTLAS'' @ 141047e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingAllocatedTLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingAllocatedTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedTLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingAllocatedTLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingAllocatedTLAS,*pFVar1,
               L"Allocated top level acceleration structures","STATGROUP_D3D12RayTracing",
               "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingBLASMemory'' @ 141047ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingBLASMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingBLASMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBLASMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingBLASMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBLASMemory,*pFVar1,
               L"Total BL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingBuiltBLAS'' @ 141047f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingBuiltBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingBuiltBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBuiltBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingBuiltBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBuiltBLAS,*pFVar1,
               L"Built BL AS (per frame)","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingBuiltTLAS'' @ 141048000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingBuiltTLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingBuiltTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBuiltTLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingBuiltTLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBuiltTLAS,*pFVar1,
               L"Built TL AS (per frame)","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingCompiledShaders'' @ 141048090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingCompiledShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingCompiledShaders ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingCompiledShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingCompiledShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingCompiledShaders,*pFVar1,
               L"Compiled shaders (total)","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingCreatedPipelines'' @ 141048120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingCreatedPipelines__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingCreatedPipelines ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingCreatedPipelines>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingCreatedPipelines");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingCreatedPipelines,*pFVar1,
               L"Created pipelines (total)","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingDynamicBLASMemory'' @ 1410481b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingDynamicBLASMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingDynamicBLASMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingDynamicBLASMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingDynamicBLASMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingDynamicBLASMemory,*pFVar1,
               L"Dynamic BL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingStaticBLASMemory'' @ 141048240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingStaticBLASMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingStaticBLASMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingStaticBLASMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingStaticBLASMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingStaticBLASMemory,*pFVar1,
               L"Static BL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingTLASMemory'' @ 1410482d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingTLASMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingTLASMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTLASMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingTLASMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingTLASMemory,*pFVar1,
               L"TL AS Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingTrianglesBLAS'' @ 141048360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingTrianglesBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingTrianglesBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingTrianglesBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingTrianglesBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingTrianglesBLAS,*pFVar1,
               L"Triangles in all BL acceleration structures","STATGROUP_D3D12RayTracing",
               "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingUBRecordUpdate'' @ 1410483f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingUBRecordUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingUBRecordUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUBRecordUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingUBRecordUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingUBRecordUpdate,*pFVar1,
               L"UniformBuffer Record Updates (per frame)","STATGROUP_D3D12RayTracing",
               "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingUpdatedBLAS'' @ 141048480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingUpdatedBLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingUpdatedBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUpdatedBLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingUpdatedBLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingUpdatedBLAS,*pFVar1,
               L"Updated BL AS (per frame)","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingUpdatedTLAS'' @ 141048510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingUpdatedTLAS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingUpdatedTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUpdatedTLAS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingUpdatedTLAS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingUpdatedTLAS,*pFVar1,
               L"Updated TL AS (per frame)","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12RayTracingUsedVideoMemory'' @ 1410485a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12RayTracingUsedVideoMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12RayTracingUsedVideoMemory ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUsedVideoMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12RayTracingUsedVideoMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingUsedVideoMemory,*pFVar1,
               L"Total Used Video Memory","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_D3D12SetBindingsOnShaderBindingTable'' @ 141048630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_D3D12SetBindingsOnShaderBindingTable__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_D3D12SetBindingsOnShaderBindingTable ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12SetBindingsOnShaderBindingTable>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_D3D12SetBindingsOnShaderBindingTable");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12SetBindingsOnShaderBindingTable,
               *pFVar1,L"SetBindingsOnShaderBindingTable","STATGROUP_D3D12RayTracing",
               "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeLowlevelCacheHit'' @ 1410486c0

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeLowlevelCacheMiss'' @ 141048750

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOComputeNumLowlevelCacheEntries'' @ 1410487e0

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsLowlevelCacheHit'' @ 141048870

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsLowlevelCacheMiss'' @ 141048900

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

// `dynamic_initializer_for_'StatPtr_STAT_PSOGraphicsNumLowlevelCacheEntries'' @ 141048990

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

// `dynamic_initializer_for_'StatPtr_STAT_RTPSO_CompileShader'' @ 141048a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RTPSO_CompileShader__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RTPSO_CompileShader == (FThreadSafeStaticStat<FStat_STAT_RTPSO_CompileShader>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_RTPSO_CompileShader");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RTPSO_CompileShader,*pFVar1,
               L"RTPSO Compile Shader","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_RTPSO_CreatePipeline'' @ 141048ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_RTPSO_CreatePipeline__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_RTPSO_CreatePipeline ==
      (FThreadSafeStaticStat<FStat_STAT_RTPSO_CreatePipeline>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_RTPSO_CreatePipeline");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RTPSO_CreatePipeline,*pFVar1,
               L"RTPSO Create Pipeline","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
               L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'SupportedExtensionsVersion'' @ 141048b40

void __cdecl _dynamic_initializer_for__SupportedExtensionsVersion__(void)

{
  SupportedExtensionsVersion[1].CVar =
       (IConsoleVariable *)UE::RHICore::Intel::GPUCrashDumps::CVarIntelCrashDumps._padding_;
  return;
}

// <lambda_invoker_cdecl> @ 1459e1200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
<lambda_112>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  <lambda_112> local_res20 [8];
  
  operator()(local_res20,param_1,param_2,param_3);
  return;
}

// <lambda_invoker_cdecl> @ 1459e1220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
<lambda_113>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  undefined1 auStackY_a8 [32];
  FString local_78;
  FBufferedOutputDevice local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FBufferedOutputDevice::FBufferedOutputDevice(&local_68);
  DumpRayTracingGeometries(All,-1,&local_78,true,&local_68);
  FBufferedOutputDevice::RedirectTo(&local_68,param_3);
  FBufferedOutputDevice::~FBufferedOutputDevice(&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// ConstructItems<FD3D12Resource_*,TRefCountPtr<FD3D12Resource>,int> @ 1459e2bc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
ConstructItems<FD3D12Resource_*,TRefCountPtr<FD3D12Resource>,int>
          (void *param_1,TRefCountPtr<FD3D12Resource> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FD3D12Resource **)(lVar1 + (longlong)param_2) = param_2->Reference;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRHITransitionInfo,FRHITransitionInfo,int> @ 1459e2bf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
ConstructItems<FRHITransitionInfo,FRHITransitionInfo,int>
          (void *param_1,FRHITransitionInfo *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  FRHITransitionInfo_u_8 *pFVar3;
  FRHITransitionInfo_u_8 *pFVar4;
  
  if (param_3 != 0) {
    pFVar4 = &param_2->field1_0x8;
    pFVar3 = (FRHITransitionInfo_u_8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)(pFVar3 + -1) =
           *(undefined4 *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)pFVar3);
      *(undefined2 *)((longlong)pFVar3 + -4) =
           *(undefined2 *)((longlong)param_2 + (-4 - (longlong)param_1) + (longlong)pFVar3);
      *pFVar3 = *pFVar4;
      *pFVar3 = *pFVar4;
      *pFVar3 = *pFVar4;
      *pFVar3 = *pFVar4;
      *pFVar3 = *pFVar4;
      *pFVar3 = *pFVar4;
      *(undefined1 *)(pFVar3 + 1) = *(undefined1 *)(pFVar4 + 1);
      *(undefined4 *)((longlong)pFVar3 + 0xc) = *(undefined4 *)((longlong)pFVar4 + 0xc);
      *(undefined4 *)(pFVar3 + 2) = *(undefined4 *)(pFVar4 + 2);
      uVar1 = *(undefined1 *)((longlong)pFVar4 + 0x14);
      *(undefined1 *)(pFVar3 + 4) = 0;
      *(undefined1 *)((longlong)pFVar3 + 0x14) = uVar1;
      cVar2 = *(char *)(pFVar4 + 4);
      *(char *)(pFVar3 + 4) = cVar2;
      if (cVar2 != '\0') {
        pFVar3[3] = pFVar4[3];
      }
      pFVar4 = pFVar4 + 6;
      pFVar3 = pFVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateLinkedObjects<FD3D12RenderQuery,`FD3D12DynamicRHI::RHICreateRenderQuery'::__l2::<lambda_1>,`FD3D12Adapter::CreateLinkedObject<FD3D12RenderQuery,`FD3D12DynamicRHI::RHICreateRenderQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 1459e2c90

/* WARNING: Removing unreachable block (ram,0x0001459e2cc7) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RenderQuery * __cdecl
FD3D12LinkedAdapterObject<FD3D12RenderQuery>::
CreateLinkedObjects<FD3D12RenderQuery,_FD3D12DynamicRHI::RHICreateRenderQuery_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12RenderQuery,_FD3D12DynamicRHI::RHICreateRenderQuery_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FRHIGPUMask param_1,<lambda_1> *param_2,<lambda_1> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FAtomicFlags FVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  FName FVar10;
  longlong lVar11;
  undefined8 uVar12;
  FName FVar13;
  bool bVar14;
  FD3D12RenderQuery *pFVar15;
  FName FVar16;
  void *pvVar17;
  byte bVar18;
  FName FVar19;
  FName FVar20;
  uint uVar21;
  ulonglong uVar22;
  FRHIGPUMask FVar23;
  
  uVar5 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  FVar20.ComparisonIndex.Value = 0;
  FVar20.Number = 0;
  FVar19 = FVar20;
  FVar23.GPUMask = param_1.GPUMask;
  if (param_1.GPUMask != 0) {
    do {
      lVar4 = *(longlong *)param_2;
      if ((GNumExplicitGPUsForRendering <= uVar5) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("GPUIndex < GNumExplicitGPUsForRendering",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                              ,0x103,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        pFVar15 = (FD3D12RenderQuery *)(*pcVar7)();
        return pFVar15;
      }
      lVar4 = *(longlong *)(lVar4 + 0x800 + (ulonglong)uVar5 * 8);
      FVar16 = (FName)::operator_new(0x98);
      if (FVar16 == (FName)0x0) {
        FVar16.ComparisonIndex.Value = 0;
        FVar16.Number = 0;
      }
      else {
        FVar3.Packed = (atomic<unsigned_int>)param_3->QueryType;
        FRHIResource::FRHIResource((FRHIResource *)FVar16,RRT_RenderQuery);
        ((FRHIResource *)((longlong)FVar16 + 0x18))->_padding_ = lVar4;
        *(atomic<unsigned_int> *)((longlong)FVar16 + 0x20) = (atomic<unsigned_int>)0x1;
        ((FName *)((longlong)FVar16 + 0x28))->ComparisonIndex = 0;
        ((FName *)((longlong)FVar16 + 0x28))->Number = 0;
        ((FRHIResource *)((longlong)FVar16 + 0x30))->_padding_ = 0;
        *(undefined8 *)((longlong)FVar16 + 0x38) = 0;
        ((FName *)((longlong)FVar16 + 0x40))->ComparisonIndex = 0;
        ((FName *)((longlong)FVar16 + 0x40))->Number = 0;
        ((FRHIResource *)((longlong)FVar16 + 0x48))->_padding_ = 0;
        *(undefined8 *)((longlong)FVar16 + 0x50) = 0;
        ((FName *)((longlong)FVar16 + 0x58))->ComparisonIndex = 0;
        ((FName *)((longlong)FVar16 + 0x58))->Number = 0;
        ((FRHIResource *)((longlong)FVar16 + 0x60))->_padding_ = 0;
        *(undefined ***)FVar16 = &___7FD3D12RenderQuery__6B_;
        ((FName *)((longlong)FVar16 + 0x70))->ComparisonIndex = 0;
        ((FName *)((longlong)FVar16 + 0x70))->Number = 0;
        *(atomic<unsigned_int> *)((longlong)FVar16 + 0x68) = FVar3.Packed;
        pvVar17 = FMemory::Malloc(8,8);
        ((FRHIResource *)((longlong)FVar16 + 0x78))->_padding_ = (longlong)pvVar17;
        *(undefined8 *)((longlong)FVar16 + 0x80) = 0;
        ((FName *)((longlong)FVar16 + 0x88))->ComparisonIndex = 0;
        ((FName *)((longlong)FVar16 + 0x88))->Number = 0;
        ((FRHIResource *)((longlong)FVar16 + 0x90))->_padding_ = 0;
      }
      FVar20 = FVar16;
      if (FVar19 != (FName)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned_int> *)((longlong)FVar16 + 8);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
        UNLOCK();
        if (((int)aVar2 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(OldPacked & DeletingBit) == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x99,L"Resource is being deleted."), bVar14)) {
          pcVar7 = (code *)swi(3);
          pFVar15 = (FD3D12RenderQuery *)(*pcVar7)();
          return pFVar15;
        }
        FVar20 = FVar19;
        if ((0x3ffffffe < ((uint)aVar2 & 0x3fffffff) + 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs < NumRefsMask",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0x9b,L"Reference count has overflowed."), bVar14)) {
          pcVar7 = (code *)swi(3);
          pFVar15 = (FD3D12RenderQuery *)(*pcVar7)();
          return pFVar15;
        }
      }
      ((FName *)((longlong)FVar20 + 0x28))[uVar5] = FVar16;
      FVar23.GPUMask = FVar23.GPUMask & ~(1 << ((byte)uVar5 & 0x1f));
      uVar5 = 0;
      if (FVar23.GPUMask != 0) {
        for (; (FVar23.GPUMask >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      FVar19 = FVar20;
    } while (FVar23.GPUMask != 0);
    if (FVar20 != (FName)0x0) {
      iVar6 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      ((FAtomicFlags *)((longlong)FVar20 + 0x20))->Packed = (atomic<unsigned_int>)param_1.GPUMask;
      bVar18 = 0;
      if (param_1.GPUMask != 0) {
        bVar18 = (byte)iVar6;
      }
      uVar21 = ~(1 << (bVar18 & 0x1f)) & param_1.GPUMask;
      uVar5 = 0;
      if (uVar21 != 0) {
        for (; (uVar21 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (uVar21 != 0) {
        uVar22 = (ulonglong)uVar5;
        do {
          FVar16 = *(FName *)((longlong)FVar20 + 0x28);
          lVar8 = ((FRHIResource *)((longlong)FVar20 + 0x30))->_padding_;
          uVar9 = *(undefined8 *)((longlong)FVar20 + 0x38);
          FVar10 = *(FName *)((longlong)FVar20 + 0x40);
          lVar11 = ((FRHIResource *)((longlong)FVar20 + 0x48))->_padding_;
          FVar19 = ((FName *)((longlong)FVar20 + 0x28))[uVar22];
          uVar12 = *(undefined8 *)((longlong)FVar20 + 0x50);
          FVar13 = *(FName *)((longlong)FVar20 + 0x58);
          lVar4 = ((FRHIResource *)((longlong)FVar20 + 0x60))->_padding_;
          *(undefined8 *)((longlong)FVar19 + 0x20) = *(undefined8 *)((longlong)FVar20 + 0x20);
          *(FName *)((longlong)FVar19 + 0x28) = FVar16;
          uVar21 = uVar21 & ~(1 << ((byte)uVar22 & 0x1f));
          *(longlong *)((longlong)FVar19 + 0x30) = lVar8;
          *(undefined8 *)((longlong)FVar19 + 0x38) = uVar9;
          uVar5 = 0;
          if (uVar21 != 0) {
            for (; (uVar21 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          *(FName *)((longlong)FVar19 + 0x40) = FVar10;
          *(longlong *)((longlong)FVar19 + 0x48) = lVar11;
          uVar22 = 0x20;
          if (uVar21 != 0) {
            uVar22 = (ulonglong)uVar5;
          }
          *(undefined8 *)((longlong)FVar19 + 0x50) = uVar12;
          *(FName *)((longlong)FVar19 + 0x58) = FVar13;
          *(longlong *)((longlong)FVar19 + 0x60) = lVar4;
        } while (uVar21 != 0);
      }
    }
  }
  return (FD3D12RenderQuery *)FVar20;
}

// DefaultConstructItems<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC,int> @ 1459e2f30

void __cdecl
DefaultConstructItems<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC,int>
          (void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<D3D12_EXISTING_COLLECTION_DESC,int> @ 1459e2f40

void __cdecl DefaultConstructItems<D3D12_EXISTING_COLLECTION_DESC,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<D3D12_EXPORT_DESC,int> @ 1459e2f50

void __cdecl DefaultConstructItems<D3D12_EXPORT_DESC,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FD3D12RayTracingShaderBindingTableInternal::FRecordData,int> @ 1459e2f60

void __cdecl
DefaultConstructItems<FD3D12RayTracingShaderBindingTableInternal::FRecordData,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = &
                  ___7FRecordUpdateRayTracingGeometryListener_FD3D12RayTracingShaderBindingTableInternal__6B_
      ;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FTracedTask,int> @ 1459e2fc0

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int> @ 1459e3010

void __cdecl
DefaultConstructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x44) = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[10] = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TRefCountPtr<FD3D12SyncPoint>,int> @ 1459e3070

void __cdecl DefaultConstructItems<TRefCountPtr<FD3D12SyncPoint>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<FD3D12OfflineHeapEntry,int> @ 1459e3090

void __cdecl DestructItems<FD3D12OfflineHeapEntry,int>(FD3D12OfflineHeapEntry *param_1,int param_2)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDoubleLinkedList<FD3D12OfflineHeapFreeRange>::~TDoubleLinkedList<FD3D12OfflineHeapFreeRange>
              (&param_1->FreeList);
    pFVar2 = (param_1->Heap).Reference;
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
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FD3D12DescriptorHeapManager::FPooledHeap,int> @ 1459e30f0

void __cdecl
DestructItems<FD3D12DescriptorHeapManager::FPooledHeap,int>(FPooledHeap *param_1,int param_2)

{
  ID3D12DescriptorHeap *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->Heap).Reference;
    if (pIVar1 != (ID3D12DescriptorHeap *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FD3D12RayTracingShaderBindingTableInternal::FRecordData,int> @ 1459e3130

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
DestructItems<FD3D12RayTracingShaderBindingTableInternal::FRecordData,int>
          (FRecordData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ReferencedTextureReferenceListeners;
    do {
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateShaderResourceRenameListener_*,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateUniformBufferListener_*,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + -5))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener_*,TSizedDefaultAllocator<32>_>
                *)((longlong)(pTVar2 + 7) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FTracedTask,int> @ 1459e31a0

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask,int>
          (FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int> @ 1459e3220

void __cdecl
DestructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
          (FWorkerThreadData *param_1,int param_2)

{
  ulong64 **ppuVar1;
  
  if (param_2 != 0) {
    ppuVar1 = &(param_1->SamplerDescriptorTableCache).Table.CurrentData.Keys;
    do {
      if (ppuVar1[-1] != (ulong64 *)0x0) {
        FMemory::Free(ppuVar1[-1]);
        FMemory::Free(*ppuVar1);
        FMemory::Free(ppuVar1[1]);
      }
      *(undefined4 *)(ppuVar1 + 2) = 0;
      *(undefined1 *)((longlong)ppuVar1 + 0x14) = 0;
      *(undefined8 *)(ppuVar1 + -2) = 0;
      ppuVar1[-1] = (ulong64 *)0x0;
      *(undefined4 *)(ppuVar1 + 3) = 0;
      *ppuVar1 = (ulong64 *)0x0;
      ppuVar1[1] = (ulong64 *)0x0;
      if (ppuVar1[-7] != (void *)0x0) {
        FMemory::Free(ppuVar1[-7]);
        FMemory::Free(ppuVar1[-6]);
        FMemory::Free(ppuVar1[-5]);
      }
      *(undefined4 *)(ppuVar1 + -4) = 0;
      *(undefined1 *)((longlong)ppuVar1 + -0x1c) = 0;
      ppuVar1[-8] = (ulong64 *)0x0;
      ppuVar1[-7] = (ulong64 *)0x0;
      *(undefined4 *)(ppuVar1 + -3) = 0;
      ppuVar1[-6] = (ulong64 *)0x0;
      ppuVar1[-5] = (ulong64 *)0x0;
      ppuVar1 = ppuVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>,int> @ 1459e3300

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
DestructItems<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>,int>
          (TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TStaticArray<TRefCountPtr<FD3D12SyncPoint>,2,4294967295>::
    ~TStaticArray<TRefCountPtr<FD3D12SyncPoint>,2,4294967295>
              ((TStaticArray<TRefCountPtr<FD3D12SyncPoint>,2,4294967295> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<ID3D12StateObject>,int> @ 1459e3340

void __cdecl
DestructItems<TRefCountPtr<ID3D12StateObject>,int>
          (TRefCountPtr<ID3D12StateObject> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (ID3D12StateObject *)0x0) {
      (**(code **)((longlong)*param_1->Reference + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FD3D12RayTracingShader>,int> @ 1459e3380

void __cdecl
DestructItems<TRefCountPtr<FD3D12RayTracingShader>,int>
          (TRefCountPtr<FD3D12RayTracingShader> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FD3D12RayTracingShader *)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FD3D12Resource>,int> @ 1459e33c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
DestructItems<TRefCountPtr<FD3D12Resource>,int>(TRefCountPtr<FD3D12Resource> *param_1,int param_2)

{
  longlong *plVar1;
  FD3D12Resource *pFVar2;
  longlong lVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = param_1->Reference;
    if (pFVar2 != (FD3D12Resource *)0x0) {
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

// DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int> @ 1459e3420

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
          (TSharedPtr<FD3D12ShaderResourceView,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FD3D12DescriptorManager,int> @ 1459e3460

void __cdecl
DestructItems<FD3D12DescriptorManager,int>(FD3D12DescriptorManager *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FRHIDescriptorAllocator *this;
  
  if (param_2 != 0) {
    this = (FRHIDescriptorAllocator *)&param_1->_padding_;
    do {
      puVar3 = *(undefined8 **)&this[1].Ranges.ArrayNum;
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
      FRHIDescriptorAllocator::~FRHIDescriptorAllocator(this);
      this = (FRHIDescriptorAllocator *)&this[1].CriticalSection;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FD3D12OfflineDescriptorManager,int> @ 1459e34c0

void __cdecl
DestructItems<FD3D12OfflineDescriptorManager,int>
          (FD3D12OfflineDescriptorManager *param_1,int param_2)

{
  TDoubleLinkedList<unsigned_int> *this;
  
  if (param_2 != 0) {
    this = &param_1->FreeHeaps;
    do {
      DeleteCriticalSection((LPCRITICAL_SECTION)&this[1].TailNode);
      TDoubleLinkedList<unsigned_int>::~TDoubleLinkedList<unsigned_int>(this);
      DestructItems<FD3D12OfflineHeapEntry,int>
                ((FD3D12OfflineHeapEntry *)this[-1].TailNode,this[-1].ListSize);
      if (this[-1].TailNode != (TDoubleLinkedListNode *)0x0) {
        FMemory::Free(this[-1].TailNode);
      }
      this = (TDoubleLinkedList<unsigned_int> *)&this[3].TailNode;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FD3D12Queue,int> @ 1459e3520

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl DestructItems<FD3D12Queue,int>(FD3D12Queue *param_1,int param_2)

{
  FD3D12DiagnosticBuffer *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TD3D12ObjectPool<FD3D12CommandAllocator> *this_00;
  
  if (param_2 != 0) {
    this_00 = &(param_1->ObjectPool).Allocators;
    do {
      if ((**(longlong **)&this_00[-6].field_0x8 != 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("PendingSubmission.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                             ,0x53,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)&this_00[-6].field_0x30 != 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("PendingInterrupt.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                             ,0x54,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong **)&this_00[2].field_0x28 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&this_00[2].field_0x28 + 0x10))();
      }
      this = *(FD3D12DiagnosticBuffer **)&this_00[2].field_0x8;
      if (this != (FD3D12DiagnosticBuffer *)0x0) {
        FD3D12DiagnosticBuffer::~FD3D12DiagnosticBuffer(this);
        operator_delete(this,0x20);
      }
      TD3D12ObjectPool<FD3D12CommandList>::CleanupResources
                ((TD3D12ObjectPool<FD3D12CommandList> *)(this_00 + 1));
      FLockFreePointerListLIFOBase<FD3D12CommandList,64,1>::
      ~FLockFreePointerListLIFOBase<FD3D12CommandList,64,1>
                ((FLockFreePointerListLIFOBase<FD3D12CommandList,64,1> *)(this_00 + 1));
      TD3D12ObjectPool<FD3D12CommandAllocator>::CleanupResources(this_00);
      FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1>::
      ~FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1>
                ((FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1> *)this_00);
      TD3D12ObjectPool<FD3D12ContextCommon>::CleanupResources
                ((TD3D12ObjectPool<FD3D12ContextCommon> *)(this_00 + -1));
      FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1>::
      ~FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1>
                ((FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1> *)(this_00 + -1));
      *(undefined4 *)&this_00[-2].field_0x38 = 0;
      if (*(void **)&this_00[-2].field_0x30 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[-2].field_0x30);
      }
      TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00[-3].field_0x30);
      if (*(void **)&this_00[-3].field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[-3].field_0x20);
      }
      if (*(void **)&this_00[-3].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[-3].field_0x10);
      }
      if (*(void **)(this_00 + -3) != (void *)0x0) {
        FMemory::Free(*(void **)(this_00 + -3));
      }
      *(undefined4 *)&this_00[-4].field_0x20 = 0;
      if (*(void **)&this_00[-4].field_0x18 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[-4].field_0x18);
      }
      TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00[-5].field_0x18);
      puVar1 = *(undefined8 **)&this_00[-6].field_0x10;
      puVar5 = *(undefined8 **)&this_00[-6].field_0x20;
      do {
        puVar2 = (undefined8 *)*puVar5;
        FMemory::Free(puVar5);
        bVar4 = puVar5 != puVar1;
        puVar5 = puVar2;
      } while (bVar4);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar2;
        FMemory::Free(puVar2);
        puVar2 = puVar1;
      }
      puVar1 = (undefined8 *)**(undefined8 **)&this_00[-6].field_0x8;
      FMemory::Free(*(void **)&this_00[-6].field_0x8);
      while (puVar1 != (undefined8 *)0x0) {
        *(undefined8 **)&this_00[-6].field_0x8 = puVar1;
        puVar1 = (undefined8 *)*puVar1;
        FMemory::Free(*(void **)&this_00[-6].field_0x8);
      }
      if (*(longlong **)&this_00[-7].field_0x20 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&this_00[-7].field_0x20 + 0x10))();
      }
      if (*(longlong **)&this_00[-7].field_0x10 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&this_00[-7].field_0x10 + 0x10))();
      }
      this_00 = this_00 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EnumerateSubresources<``FD3D12LegacyBarriersForContext::HandleResourceDiscardTransitions'::__l6::<lambda_1>::operator()'::__l18::<lambda_1>_> @ 1459e4d20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
EnumerateSubresources<__FD3D12LegacyBarriersForContext::HandleResourceDiscardTransitions_::__l6::<lambda_1>::operator()_::__l18::<lambda_1>_>
          (FD3D12Resource *param_1,FRHITransitionInfo *param_2,FD3D12Texture *param_3,
          <lambda_1> *param_4)

{
  FScriptContainerElement FVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  FD3D12Resource **ppFVar5;
  FD3D12CommandContext *pFVar6;
  TArray<FD3D12LegacyBarriersForContext::FD3D12DiscardResource,TSizedDefaultAllocator<32>_> *pTVar7;
  FRHITransitionInfo *pFVar8;
  FD3D12Resource *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  uint local_res8;
  
  uVar2 = *(ushort *)((longlong)&(param_1->Desc)._padding_ + 6);
  local_res8 = 0;
  uVar21 = 1;
  if ((int)(param_1->Desc)._padding_ != 4) {
    uVar21 = *(ushort *)((longlong)&(param_1->Desc)._padding_ + 4);
  }
  uVar3 = (ushort)param_2->_padding_;
  uVar20 = (uint)uVar3;
  uVar16 = (ulonglong)param_1->PlaneCount;
  uVar4 = *(ushort *)((longlong)&param_2->_padding_ + 2);
  uVar17 = (uint)uVar21;
  uVar18 = (ulonglong)uVar2;
  if (uVar3 == 0xffff) {
    uVar20 = 0;
  }
  else {
    uVar18 = 1;
  }
  uVar22 = 0;
  if (uVar4 != 0xffff) {
    local_res8 = (uint)uVar4;
    uVar17 = 1;
    uVar22 = (uint)uVar4;
  }
  uVar12 = (uint)*(ushort *)((longlong)&param_2->_padding_ + 4);
  uVar23 = 0;
  if (uVar12 != 0xffff) {
    uVar16 = 1;
    uVar23 = uVar12;
  }
  if (uVar23 < (int)uVar16 + uVar23) {
    iVar13 = uVar21 * uVar23;
    uVar17 = uVar17 + uVar22;
    do {
      if (uVar22 < uVar17) {
        uVar23 = uVar22;
        do {
          if (uVar20 < (int)uVar18 + uVar20) {
            uVar22 = (iVar13 + uVar23) * (uint)uVar2 + uVar20;
            uVar19 = uVar18;
            do {
              ppFVar5 = param_4->Resource;
              if (*param_4->bTransition == false) {
                pFVar9 = *ppFVar5;
                pFVar6 = param_4->Context;
                if ((pFVar9 == (FD3D12Resource *)0x0) &&
                   (bVar11 = FDebug::CheckVerifyFailedImpl2
                                       ("Resource",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                        ,0x1a5,L""), bVar11)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if (*(longlong *)&pFVar6->field_0x188 == 0) {
                  (**(code **)(*(longlong *)pFVar6 + 8))(pFVar6);
                }
                FD3D12CommandList::UpdateResidency
                          (*(FD3D12CommandList **)&pFVar6->field_0x188,pFVar9);
              }
              else {
                FD3D12LegacyBarriersForContext::TransitionResource
                          (param_4->__this,(FD3D12ContextCommon *)param_4->Context,*ppFVar5,
                           *param_4->StateBefore,*param_4->StateAfter,uVar22);
              }
              pTVar7 = param_4->ResourcesToDiscard;
              pFVar8 = param_4->Info;
              iVar14 = pTVar7->ArrayNum;
              if (iVar14 == pTVar7->ArrayMax) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
              }
              pTVar7->ArrayNum = iVar14 + 1;
              FVar1 = (FScriptContainerElement)pFVar8->Flags;
              pFVar9 = *ppFVar5;
              pFVar15 = (pTVar7->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
              *(uint *)(pFVar15 + 0xc) = uVar22;
              uVar22 = uVar22 + 1;
              *(FD3D12Resource **)pFVar15 = pFVar9;
              pFVar15[8] = FVar1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          uVar23 = uVar23 + 1;
          uVar22 = local_res8;
        } while (uVar23 < uVar17);
      }
      iVar13 = iVar13 + (uint)uVar21;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIResourceCollection,`UE::RHI::Private::SetUniformBufferResourcesFromTables<`SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>'::__l4::<lambda_3>_> @ 1459e4f60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIResourceCollection,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_3>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_3> *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FD3D12RayTracingGlobalResourceBinder *this;
  FBindings *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  
  pFVar2 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar1 = param_3[param_2];
  if (uVar1 != 0) {
    uVar6 = param_3[uVar1];
    puVar8 = param_3 + (ulonglong)uVar1 + 1;
    do {
      lVar7 = *(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 8 & 0xffff) * 8);
      if ((lVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = param_4->Binder;
      if ((lVar7 == 0) ||
         (lVar7 = *(longlong *)(lVar7 + 0x38 + (ulonglong)pFVar3->GPUIndex * 8), lVar7 == 0)) {
        lVar7 = 0;
LAB_1459e5030:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SRV != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0x145e,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0x80);
        if (lVar7 == 0) goto LAB_1459e5030;
      }
      if (pFVar3->bBindlessResources == false) {
        if ((*(longlong *)(lVar7 + 0x18) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0x103,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = *(uint *)(lVar7 + 0x44);
        pFVar3->LocalSRVs[uVar6 & 0xff].ptr = *(ulong64 *)(lVar7 + 0x38);
        pFVar3->SRVVersions[uVar6 & 0xff] = uVar1;
      }
      pFVar3->BoundSRVMask = pFVar3->BoundSRVMask | 1L << ((ulonglong)(uVar6 & 0xff) & 0x3f);
      this = pFVar3->Binder;
      if ((*(longlong *)(lVar7 + 0x18) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xff,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FD3D12RayTracingGlobalResourceBinder::AddReferencedShaderResource
                (this,*(FD3D12BaseShaderResource **)(lVar7 + 0x10));
      uVar6 = *puVar8;
      puVar8 = puVar8 + 1;
    } while (uVar6 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIResourceCollection,`UE::RHI::Private::SetUniformBufferResourcesFromTables<`SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>'::__l4::<lambda_3>_> @ 1459e51a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIResourceCollection,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_3>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_3> *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FD3D12RayTracingLocalResourceBinder *pFVar3;
  FBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  
  pFVar2 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar1 = param_3[param_2];
  if (uVar1 != 0) {
    uVar7 = param_3[uVar1];
    puVar9 = param_3 + (ulonglong)uVar1 + 1;
    do {
      lVar8 = *(longlong *)(pFVar2 + (ulonglong)(uVar7 >> 8 & 0xffff) * 8);
      if ((lVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = param_4->Binder;
      if ((lVar8 == 0) ||
         (lVar8 = *(longlong *)(lVar8 + 0x38 + (ulonglong)pFVar4->GPUIndex * 8), lVar8 == 0)) {
        lVar8 = 0;
LAB_1459e5270:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SRV != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0x145e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        lVar8 = *(longlong *)(lVar8 + 0x80);
        if (lVar8 == 0) goto LAB_1459e5270;
      }
      if (pFVar4->bBindlessResources == false) {
        if ((*(longlong *)(lVar8 + 0x18) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0x103,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar1 = *(uint *)(lVar8 + 0x44);
        pFVar4->LocalSRVs[uVar7 & 0xff].ptr = *(ulong64 *)(lVar8 + 0x38);
        pFVar4->SRVVersions[uVar7 & 0xff] = uVar1;
      }
      pFVar4->BoundSRVMask = pFVar4->BoundSRVMask | 1L << ((ulonglong)(uVar7 & 0xff) & 0x3f);
      pFVar3 = pFVar4->Binder;
      if ((*(longlong *)(lVar8 + 0x18) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xff,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FD3D12RayTracingShaderBindingTableInternal::AddReferencedShaderResource
                (pFVar3->ShaderTable,pFVar3->WorkerIndex,pFVar3->RecordIndex,pFVar3->BindingType,
                 *(FD3D12BaseShaderResource **)(lVar8 + 0x10));
      uVar7 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar7 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<`SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>'::__l4::<lambda_2>_> @ 1459e53f0

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
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_2>_>
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
      `SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::SetSRV
                (param_4->Binder,pFVar5,(uchar)uVar8);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<`SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>'::__l4::<lambda_2>_> @ 1459e5660

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
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_2>_>
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
      `SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::SetSRV
                (param_4->Binder,pFVar5,(uchar)uVar8);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<`SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>'::__l4::<lambda_1>_> @ 1459e58d0

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
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_1>_>
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
      `SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::
      SetTexture(param_4->Binder,pFVar4,(uchar)uVar10);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<`SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>'::__l4::<lambda_1>_> @ 1459e5b70

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
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_1>_>
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
      `SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::
      SetTexture(param_4->Binder,pFVar4,(uchar)uVar10);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// HeapSortInternal<FD3D12RayTracingGeometry_*,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingGeometry_*,`DumpRayTracingGeometries'::__l2::<lambda_2>_>_> @ 1459e6560

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FD3D12RayTracingGeometry_*,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingGeometry_*,_DumpRayTracingGeometries_::__l2::<lambda_2>_>_>
          (FD3D12RayTracingGeometry **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FD3D12RayTracingGeometry_*,_void___cdecl_DumpRayTracingGeometries(EDumpRayTracingGeometryMode,int,FString_const_&,bool,FBufferedOutputDevice_&)_::_2_::<lambda_2>_>
          param_4)

{
  FD3D12RayTracingGeometry *pFVar1;
  FD3D12RayTracingGeometry *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulong64 uVar9;
  int iVar10;
  longlong lVar11;
  ulong64 uVar12;
  int iVar13;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar13 = iVar6;
  iVar10 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_1459e6694:
      if (iVar10 == 0) {
        iVar6 = param_2 + -1;
        lVar11 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar13 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = pFVar1;
            if (1 < iVar6) {
              do {
                iVar10 = iVar13 * 2;
                iVar5 = iVar10 + 1;
                if (iVar10 + 2 < iVar6) {
                  uVar12 = param_1[(longlong)iVar10 + 2]->AccelerationStructureCompactedSize;
                  if (uVar12 == 0) {
                    uVar12 = param_1[(longlong)iVar10 + 2]->_padding_;
                  }
                  uVar9 = param_1[iVar5]->AccelerationStructureCompactedSize;
                  if (uVar9 == 0) {
                    uVar9 = param_1[iVar5]->_padding_;
                  }
                  if (uVar9 < uVar12) {
                    iVar5 = iVar10;
                  }
                  iVar5 = iVar5 + 1;
                }
                pFVar1 = param_1[iVar5];
                pFVar2 = param_1[iVar13];
                uVar12 = pFVar2->AccelerationStructureCompactedSize;
                if (uVar12 == 0) {
                  uVar12 = pFVar2->_padding_;
                }
                uVar9 = pFVar1->AccelerationStructureCompactedSize;
                if (uVar9 == 0) {
                  uVar9 = pFVar1->_padding_;
                }
                if (uVar12 <= uVar9) break;
                param_1[iVar13] = pFVar1;
                param_1[iVar5] = pFVar2;
                iVar13 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar5 = iVar10 + -1;
      iVar6 = iVar13 + -2;
      iVar13 = iVar6;
      iVar10 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      uVar12 = param_1[(longlong)iVar6 + 2]->AccelerationStructureCompactedSize;
      if (uVar12 == 0) {
        uVar12 = param_1[(longlong)iVar6 + 2]->_padding_;
      }
      uVar7 = param_1[iVar8]->AccelerationStructureCompactedSize;
      if (uVar7 == 0) {
        uVar7 = param_1[iVar8]->_padding_;
      }
      if (uVar7 < uVar12) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1[iVar8];
    pFVar2 = param_1[iVar5];
    uVar12 = pFVar2->AccelerationStructureCompactedSize;
    if (uVar12 == 0) {
      uVar12 = pFVar2->_padding_;
    }
    uVar7 = pFVar1->AccelerationStructureCompactedSize;
    if (uVar7 == 0) {
      uVar7 = pFVar1->_padding_;
    }
    if (uVar12 <= uVar7) goto LAB_1459e6694;
    param_1[iVar5] = pFVar1;
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = pFVar2;
    iVar5 = iVar8;
  } while( true );
}

// HeapSortInternal<FD3D12RayTracingPipelineState::FShaderStats,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingPipelineState::FShaderStats,`FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState'::__l2::<lambda_3>_>_> @ 1459e67b0

void __cdecl
AlgoImpl::
HeapSortInternal<FD3D12RayTracingPipelineState::FShaderStats,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingPipelineState::FShaderStats,_FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState_::__l2::<lambda_3>_>_>
          (FShaderStats *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FD3D12RayTracingPipelineState::FShaderStats,_public:___cdecl_FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState(FD3D12Device_*,FRayTracingPipelineStateInitializer_const_&)_::_2_::<lambda_3>_>
          param_4)

{
  FShaderStats *pFVar1;
  FShaderStats *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FShaderStats *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_1459e68c6:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar16 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar15 = param_1 + lVar16;
          do {
            fVar5 = pFVar15->CompileTimeMS;
            uVar6 = pFVar15->StackSize;
            uVar10 = param_1->ShaderSize;
            uVar11 = *(undefined4 *)&param_1->field_0x14;
            pwVar4 = param_1->Name;
            fVar8 = param_1->CompileTimeMS;
            uVar9 = param_1->StackSize;
            param_1->Name = pFVar15->Name;
            param_1->CompileTimeMS = fVar5;
            param_1->StackSize = uVar6;
            uVar7 = *(undefined4 *)&pFVar15->field_0x14;
            param_1->ShaderSize = pFVar15->ShaderSize;
            *(undefined4 *)&param_1->field_0x14 = uVar7;
            pFVar15->Name = pwVar4;
            pFVar15->CompileTimeMS = fVar8;
            pFVar15->StackSize = uVar9;
            pFVar15->ShaderSize = uVar10;
            *(undefined4 *)&pFVar15->field_0x14 = uVar11;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar19 = iVar18 * 2;
                iVar13 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[iVar13].CompileTimeMS <= param_1[(longlong)iVar19 + 2].CompileTimeMS
                      && param_1[(longlong)iVar19 + 2].CompileTimeMS !=
                         param_1[iVar13].CompileTimeMS) {
                    iVar13 = iVar19;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar18].CompileTimeMS < param_1[iVar13].CompileTimeMS ||
                    param_1[iVar18].CompileTimeMS == param_1[iVar13].CompileTimeMS) break;
                pFVar1 = param_1 + iVar13;
                fVar5 = pFVar1->CompileTimeMS;
                uVar6 = pFVar1->StackSize;
                uVar10 = param_1[iVar18].ShaderSize;
                uVar11 = *(undefined4 *)&param_1[iVar18].field_0x14;
                pFVar2 = param_1 + iVar18;
                pwVar4 = pFVar2->Name;
                fVar8 = pFVar2->CompileTimeMS;
                uVar9 = pFVar2->StackSize;
                pFVar2 = param_1 + iVar18;
                pFVar2->Name = pFVar1->Name;
                pFVar2->CompileTimeMS = fVar5;
                pFVar2->StackSize = uVar6;
                uVar7 = *(undefined4 *)&param_1[iVar13].field_0x14;
                param_1[iVar18].ShaderSize = param_1[iVar13].ShaderSize;
                *(undefined4 *)&param_1[iVar18].field_0x14 = uVar7;
                pFVar1 = param_1 + iVar13;
                pFVar1->Name = pwVar4;
                pFVar1->CompileTimeMS = fVar8;
                pFVar1->StackSize = uVar9;
                param_1[iVar13].ShaderSize = uVar10;
                *(undefined4 *)&param_1[iVar13].field_0x14 = uVar11;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[iVar17].CompileTimeMS <= param_1[(longlong)iVar14 + 2].CompileTimeMS &&
          param_1[(longlong)iVar14 + 2].CompileTimeMS != param_1[iVar17].CompileTimeMS) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar13].CompileTimeMS < param_1[iVar17].CompileTimeMS ||
        param_1[iVar13].CompileTimeMS == param_1[iVar17].CompileTimeMS) goto LAB_1459e68c6;
    pFVar15 = param_1 + iVar17;
    fVar5 = pFVar15->CompileTimeMS;
    uVar6 = pFVar15->StackSize;
    iVar14 = iVar17 * 2 + 1;
    uVar10 = param_1[iVar13].ShaderSize;
    uVar11 = *(undefined4 *)&param_1[iVar13].field_0x14;
    pFVar1 = param_1 + iVar13;
    pwVar4 = pFVar1->Name;
    fVar8 = pFVar1->CompileTimeMS;
    uVar9 = pFVar1->StackSize;
    pFVar1 = param_1 + iVar13;
    pFVar1->Name = pFVar15->Name;
    pFVar1->CompileTimeMS = fVar5;
    pFVar1->StackSize = uVar6;
    uVar7 = *(undefined4 *)&param_1[iVar17].field_0x14;
    param_1[iVar13].ShaderSize = param_1[iVar17].ShaderSize;
    *(undefined4 *)&param_1[iVar13].field_0x14 = uVar7;
    pFVar15 = param_1 + iVar17;
    pFVar15->Name = pwVar4;
    pFVar15->CompileTimeMS = fVar8;
    pFVar15->StackSize = uVar9;
    param_1[iVar17].ShaderSize = uVar10;
    *(undefined4 *)&param_1[iVar17].field_0x14 = uVar11;
    iVar13 = iVar17;
  } while( true );
}

// IID_PPV_ARGS_Helper<ID3D12DescriptorHeap> @ 1459e69e0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12DescriptorHeap>(ID3D12DescriptorHeap **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Fence> @ 1459e69f0

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Fence>(ID3D12Fence **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12QueryHeap> @ 1459e6a00

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12QueryHeap>(ID3D12QueryHeap **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12Resource> @ 1459e6a10

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12Resource>(ID3D12Resource **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12StateObject> @ 1459e6a20

void ** __cdecl IID_PPV_ARGS_Helper<ID3D12StateObject>(ID3D12StateObject **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<ID3D12StateObjectProperties> @ 1459e6a30

void ** __cdecl
IID_PPV_ARGS_Helper<ID3D12StateObjectProperties>(ID3D12StateObjectProperties **param_1)

{
  return param_1;
}

// InternalGetDefaultObject<TResourceArray<unsigned_char,64>_> @ 1459e6a40

TResourceArray<unsigned_char,64> * __cdecl
InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::Default.bNeedsCPUAccess = false;
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::Default._padding_ = 0;
      `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
      ::__l3::Default._padding_ = (longlong)&___7__TResourceArray_E_0EA___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return &`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
              ::__l3::Default;
    }
  }
  return &`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
          ::__l3::Default;
}

// IntrinsicAppendHash<unsigned_char,TMemoryImageAllocator<64>_> @ 1459e6ae0

uint __cdecl
Freeze::IntrinsicAppendHash<unsigned_char,TMemoryImageAllocator<64>_>
          (TArray<unsigned_char,TMemoryImageAllocator<64>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FSHA1 *param_4)

{
  uint uVar1;
  
  uVar1 = AppendHashForNameAndSize(param_2->Name,0x10,param_4);
  return uVar1;
}

// IntrinsicGetTargetAlignment<unsigned_char,TMemoryImageAllocator<64>_> @ 1459e6b00

uint __cdecl
Freeze::IntrinsicGetTargetAlignment<unsigned_char,TMemoryImageAllocator<64>_>
          (TArray<unsigned_char,TMemoryImageAllocator<64>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3)

{
  uint uVar1;
  
  uVar1 = param_3->MaxFieldAlignment;
  if (8 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}

// IntrinsicToString<unsigned_char,TMemoryImageAllocator<64>_> @ 1459e6b20

void __cdecl
Freeze::IntrinsicToString<unsigned_char,TMemoryImageAllocator<64>_>
          (TArray<unsigned_char,TMemoryImageAllocator<64>_> *param_1,FTypeLayoutDesc *param_2,
          FPlatformTypeLayoutParameters *param_3,FMemoryToStringContext *param_4)

{
  int iVar1;
  int iVar2;
  FTypeLayoutDesc *pFVar3;
  
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  pFVar3 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::ToString
            ((FMemoryImageAllocatorBase *)param_1,pFVar3,iVar2,iVar1,param_3,param_4);
  return;
}

// IntrinsicUnfrozenCopy<unsigned_char,TMemoryImageAllocator<64>_> @ 1459e6b90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __cdecl
Freeze::IntrinsicUnfrozenCopy<unsigned_char,TMemoryImageAllocator<64>_>
          (FMemoryUnfreezeContent *param_1,TArray<unsigned_char,TMemoryImageAllocator<64>_> *param_2
          ,void *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  void *pvVar3;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  TArray<unsigned_char,TMemoryImageAllocator<64>_>::SetNumZeroed(param_3,param_2->ArrayNum,Default);
  pvVar3 = *(void **)param_3;
  if (((ulonglong)pvVar3 & 1) != 0) {
    pvVar3 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_3);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::CopyUnfrozen
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,pvVar3);
  return 0x10;
}

// IntrinsicWriteMemoryImage<unsigned_char,TMemoryImageAllocator<64>_> @ 1459e6c20

void __cdecl
Freeze::IntrinsicWriteMemoryImage<unsigned_char,TMemoryImageAllocator<64>_>
          (FMemoryImageWriter *param_1,TArray<unsigned_char,TMemoryImageAllocator<64>_> *param_2,
          FTypeLayoutDesc *param_3)

{
  int iVar1;
  FTypeLayoutDesc *pFVar2;
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = StaticGetTypeLayoutDesc<unsigned_char>();
  FMemoryImageAllocatorBase::WriteMemoryImage
            ((FMemoryImageAllocatorBase *)param_2,param_1,pFVar2,iVar1,0x40);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  FMemoryImageWriter::WriteBytes(param_1,&param_2->ArrayNum,4);
  return;
}

// IntroSortInternal<FD3D12RayTracingGeometry_*,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingGeometry_*,`DumpRayTracingGeometries'::__l2::<lambda_2>_>_> @ 1459e6ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FD3D12RayTracingGeometry_*,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingGeometry_*,_DumpRayTracingGeometries_::__l2::<lambda_2>_>_>
          (FD3D12RayTracingGeometry **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FD3D12RayTracingGeometry_*,_void___cdecl_DumpRayTracingGeometries(EDumpRayTracingGeometryMode,int,FString_const_&,bool,FBufferedOutputDevice_&)_::_2_::<lambda_2>_>
          param_4)

{
  FD3D12RayTracingGeometry **ppFVar1;
  FD3D12RayTracingGeometry *pFVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  FD3D12RayTracingGeometry **ppFVar6;
  FD3D12RayTracingGeometry **ppFVar7;
  FD3D12RayTracingGeometry **ppFVar8;
  FD3D12RayTracingGeometry **ppFVar9;
  FD3D12RayTracingGeometry **ppFVar10;
  FD3D12RayTracingGeometry ***pppFVar11;
  float fVar12;
  undefined1 auStack_368 [48];
  FD3D12RayTracingGeometry **local_338;
  FD3D12RayTracingGeometry **local_328;
  FD3D12RayTracingGeometry **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar12;
    memset(local_310,0,0x2e8);
    pppFVar11 = &local_328;
    do {
      ppFVar8 = pppFVar11[1];
      ppFVar9 = *pppFVar11;
      ppFVar1 = pppFVar11[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar9 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar10 = ppFVar9;
      if ((int)local_338 != 0) {
LAB_1459e6d50:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar2 = ppFVar10[iVar3 >> 1];
          ppFVar10[iVar3 >> 1] = *ppFVar10;
          ppFVar6 = ppFVar8 + 1;
          *ppFVar10 = pFVar2;
          ppFVar9 = ppFVar10;
LAB_1459e6d80:
          ppFVar9 = ppFVar9 + 1;
          if (ppFVar9 <= ppFVar8) goto code_r0x0001459e6d89;
          goto LAB_1459e6dc0;
        }
        for (; ppFVar9 = ppFVar10, ppFVar1 = ppFVar10, ppFVar10 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            uVar5 = (*ppFVar9)->AccelerationStructureCompactedSize;
            if (uVar5 == 0) {
              uVar5 = (*ppFVar9)->_padding_;
            }
            uVar4 = (*ppFVar1)->AccelerationStructureCompactedSize;
            if (uVar4 == 0) {
              uVar4 = (*ppFVar1)->_padding_;
            }
            if (uVar4 < uVar5) {
              ppFVar9 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar9;
          *ppFVar9 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_1459e6ea6;
      }
LAB_1459e6e95:
      local_338 = ppFVar1;
      HeapSortInternal<FD3D12RayTracingGeometry_*,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingGeometry_*,_DumpRayTracingGeometries_::__l2::<lambda_2>_>_>
                (ppFVar9,iVar3,param_3,param_4);
LAB_1459e6ea6:
      pppFVar11 = pppFVar11 + -3;
    } while (&local_328 <= pppFVar11);
  }
  return;
code_r0x0001459e6d89:
  uVar5 = (*ppFVar10)->AccelerationStructureCompactedSize;
  if (uVar5 == 0) {
    uVar5 = (*ppFVar10)->_padding_;
  }
  uVar4 = (*ppFVar9)->AccelerationStructureCompactedSize;
  if (uVar4 == 0) {
    uVar4 = (*ppFVar9)->_padding_;
  }
  if (uVar5 <= uVar4) goto LAB_1459e6d80;
LAB_1459e6dc0:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar10) break;
    uVar5 = (*ppFVar6)->AccelerationStructureCompactedSize;
    if (uVar5 == 0) {
      uVar5 = (*ppFVar6)->_padding_;
    }
    uVar4 = (*ppFVar10)->AccelerationStructureCompactedSize;
    if (uVar4 == 0) {
      uVar4 = (*ppFVar10)->_padding_;
    }
  } while (uVar5 <= uVar4);
  if (ppFVar9 <= ppFVar6) {
    pFVar2 = *ppFVar9;
    *ppFVar9 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_1459e6d80;
  }
  pFVar2 = *ppFVar10;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar10 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar9 & 0xfffffffffffffff8U)) {
    if (ppFVar9 < ppFVar8) {
      *pppFVar11 = ppFVar9;
      pppFVar11[1] = ppFVar8;
      *(int *)(pppFVar11 + 2) = (int)local_338;
      pppFVar11 = pppFVar11 + 3;
    }
    if (ppFVar6 <= ppFVar10 + 1) goto LAB_1459e6ea6;
    ppFVar8 = ppFVar7 + -2;
    ppFVar9 = ppFVar10;
  }
  else {
    if (ppFVar10 + 1 < ppFVar6) {
      *pppFVar11 = ppFVar10;
      pppFVar11[1] = ppFVar7 + -2;
      *(int *)(pppFVar11 + 2) = (int)local_338;
      pppFVar11 = pppFVar11 + 3;
    }
    if (ppFVar8 <= ppFVar9) goto LAB_1459e6ea6;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar9 >> 3) + 1;
  ppFVar10 = ppFVar9;
  if ((int)local_338 == 0) goto LAB_1459e6e95;
  goto LAB_1459e6d50;
}

// IntroSortInternal<FD3D12RayTracingPipelineState::FShaderStats,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingPipelineState::FShaderStats,`FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState'::__l2::<lambda_3>_>_> @ 1459e6f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FD3D12RayTracingPipelineState::FShaderStats,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingPipelineState::FShaderStats,_FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState_::__l2::<lambda_3>_>_>
          (FShaderStats *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FD3D12RayTracingPipelineState::FShaderStats,_public:___cdecl_FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState(FD3D12Device_*,FRayTracingPipelineStateInitializer_const_&)_::_2_::<lambda_3>_>
          param_4)

{
  FShaderStats *pFVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  FShaderStats *pFVar12;
  int iVar13;
  FShaderStats *pFVar14;
  FShaderStats *pFVar15;
  FShaderStats *pFVar16;
  FShaderStats *pFVar17;
  FShaderStats *pFVar18;
  FShaderStats **ppFVar19;
  float fVar20;
  undefined1 auStack_378 [48];
  FShaderStats *local_348;
  FShaderStats *local_338;
  FShaderStats *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar20;
    memset(local_320,0,0x2e8);
    ppFVar19 = &local_338;
    do {
      pFVar15 = ppFVar19[1];
      pFVar14 = *ppFVar19;
      pFVar1 = ppFVar19[2];
      local_348._0_4_ = (int)pFVar1;
      iVar13 = (int)(((longlong)pFVar15 - (longlong)pFVar14) / 0x18) + 1;
      pFVar18 = pFVar14;
      if ((int)local_348 != 0) {
LAB_1459e7030:
        if (8 < iVar13) {
          fVar20 = pFVar18->CompileTimeMS;
          uVar5 = pFVar18->StackSize;
          pFVar12 = pFVar15 + 1;
          iVar13 = iVar13 / 2;
          pFVar14 = pFVar18 + iVar13;
          pwVar2 = pFVar14->Name;
          fVar7 = pFVar14->CompileTimeMS;
          uVar8 = pFVar14->StackSize;
          uVar9 = pFVar18[iVar13].ShaderSize;
          uVar10 = *(undefined4 *)&pFVar18[iVar13].field_0x14;
          pFVar14 = pFVar18 + iVar13;
          pFVar14->Name = pFVar18->Name;
          pFVar14->CompileTimeMS = fVar20;
          pFVar14->StackSize = uVar5;
          uVar6 = *(undefined4 *)&pFVar18->field_0x14;
          pFVar18[iVar13].ShaderSize = pFVar18->ShaderSize;
          *(undefined4 *)&pFVar18[iVar13].field_0x14 = uVar6;
          pFVar18->Name = pwVar2;
          pFVar18->CompileTimeMS = fVar7;
          pFVar18->StackSize = uVar8;
          pFVar18->ShaderSize = uVar9;
          *(undefined4 *)&pFVar18->field_0x14 = uVar10;
          pFVar14 = pFVar18;
LAB_1459e7080:
          pFVar16 = pFVar14;
          pFVar14 = pFVar16 + 1;
          if (pFVar14 <= pFVar15) goto code_r0x0001459e7089;
          goto LAB_1459e7096;
        }
        if (pFVar18 < pFVar15) {
          pFVar1 = pFVar18 + 1;
          do {
            pFVar14 = pFVar18;
            if (pFVar1 <= pFVar15) {
              pFVar12 = pFVar1;
              if (0x5f < (ulonglong)((longlong)pFVar15 + (0x18 - (longlong)pFVar1))) {
                do {
                  if (pFVar12->CompileTimeMS < pFVar14->CompileTimeMS) {
                    pFVar14 = pFVar12;
                  }
                  if (pFVar12[1].CompileTimeMS <= pFVar14->CompileTimeMS &&
                      pFVar14->CompileTimeMS != pFVar12[1].CompileTimeMS) {
                    pFVar14 = pFVar12 + 1;
                  }
                  if (pFVar12[2].CompileTimeMS <= pFVar14->CompileTimeMS &&
                      pFVar14->CompileTimeMS != pFVar12[2].CompileTimeMS) {
                    pFVar14 = pFVar12 + 2;
                  }
                  if (pFVar12[3].CompileTimeMS <= pFVar14->CompileTimeMS &&
                      pFVar14->CompileTimeMS != pFVar12[3].CompileTimeMS) {
                    pFVar14 = pFVar12 + 3;
                  }
                  pFVar12 = pFVar12 + 4;
                } while (pFVar12 <= pFVar15 + -3);
              }
              for (; pFVar12 <= pFVar15; pFVar12 = pFVar12 + 1) {
                if (pFVar12->CompileTimeMS < pFVar14->CompileTimeMS) {
                  pFVar14 = pFVar12;
                }
              }
            }
            pwVar2 = pFVar14->Name;
            fVar7 = pFVar14->CompileTimeMS;
            uVar8 = pFVar14->StackSize;
            pFVar12 = pFVar15 + -1;
            uVar9 = pFVar14->ShaderSize;
            uVar10 = *(undefined4 *)&pFVar14->field_0x14;
            fVar20 = pFVar15->CompileTimeMS;
            uVar5 = pFVar15->StackSize;
            pFVar14->Name = pFVar15->Name;
            pFVar14->CompileTimeMS = fVar20;
            pFVar14->StackSize = uVar5;
            uVar6 = *(undefined4 *)&pFVar15->field_0x14;
            pFVar14->ShaderSize = pFVar15->ShaderSize;
            *(undefined4 *)&pFVar14->field_0x14 = uVar6;
            pFVar15->Name = pwVar2;
            pFVar15->CompileTimeMS = fVar7;
            pFVar15->StackSize = uVar8;
            pFVar15->ShaderSize = uVar9;
            *(undefined4 *)&pFVar15->field_0x14 = uVar10;
            pFVar15 = pFVar12;
          } while (pFVar18 < pFVar12);
        }
        goto LAB_1459e71bb;
      }
LAB_1459e71ac:
      local_348 = pFVar1;
      HeapSortInternal<FD3D12RayTracingPipelineState::FShaderStats,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingPipelineState::FShaderStats,_FD3D12RayTracingPipelineState::FD3D12RayTracingPipelineState_::__l2::<lambda_3>_>_>
                (pFVar14,iVar13,param_3,param_4);
LAB_1459e71bb:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_338 <= ppFVar19);
  }
  return;
code_r0x0001459e7089:
  if (pFVar18->CompileTimeMS < pFVar16[1].CompileTimeMS ||
      pFVar18->CompileTimeMS == pFVar16[1].CompileTimeMS) goto LAB_1459e7080;
LAB_1459e7096:
  do {
    pFVar17 = pFVar12;
    pFVar12 = pFVar17 + -1;
    if (pFVar12 <= pFVar18) break;
  } while (pFVar17[-1].CompileTimeMS < pFVar18->CompileTimeMS ||
           pFVar17[-1].CompileTimeMS == pFVar18->CompileTimeMS);
  uVar3 = pFVar17[-1].CompileTimeMS;
  uVar4 = pFVar17[-1].StackSize;
  if (pFVar14 <= pFVar12) {
    pwVar2 = pFVar14->Name;
    fVar20 = pFVar16[1].CompileTimeMS;
    uVar5 = pFVar16[1].StackSize;
    uVar8 = pFVar16[1].ShaderSize;
    uVar10 = *(undefined4 *)&pFVar16[1].field_0x14;
    pFVar14->Name = pFVar12->Name;
    pFVar16[1].CompileTimeMS = (float)uVar3;
    pFVar16[1].StackSize = uVar4;
    uVar6 = *(undefined4 *)&pFVar17[-1].field_0x14;
    pFVar16[1].ShaderSize = pFVar17[-1].ShaderSize;
    *(undefined4 *)&pFVar16[1].field_0x14 = uVar6;
    pFVar12->Name = pwVar2;
    pFVar17[-1].CompileTimeMS = fVar20;
    pFVar17[-1].StackSize = uVar5;
    pFVar17[-1].ShaderSize = uVar8;
    *(undefined4 *)&pFVar17[-1].field_0x14 = uVar10;
    goto LAB_1459e7080;
  }
  pwVar2 = pFVar18->Name;
  fVar20 = pFVar18->CompileTimeMS;
  uVar5 = pFVar18->StackSize;
  uVar8 = pFVar18->ShaderSize;
  uVar10 = *(undefined4 *)&pFVar18->field_0x14;
  lVar11 = (longlong)pFVar12 + (-0x18 - (longlong)pFVar18);
  local_348._0_4_ = (int)local_348 + -1;
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  pFVar18->Name = pFVar12->Name;
  pFVar18->CompileTimeMS = (float)uVar3;
  pFVar18->StackSize = uVar4;
  uVar6 = *(undefined4 *)&pFVar17[-1].field_0x14;
  pFVar18->ShaderSize = pFVar17[-1].ShaderSize;
  *(undefined4 *)&pFVar18->field_0x14 = uVar6;
  pFVar12->Name = pwVar2;
  pFVar17[-1].CompileTimeMS = fVar20;
  pFVar17[-1].StackSize = uVar5;
  pFVar17[-1].ShaderSize = uVar8;
  *(undefined4 *)&pFVar17[-1].field_0x14 = uVar10;
  if ((lVar11 >> 2) - (lVar11 >> 0x3f) < ((longlong)pFVar15 - (longlong)pFVar14) / 0x18) {
    if (pFVar14 < pFVar15) {
      *ppFVar19 = pFVar14;
      ppFVar19[1] = pFVar15;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar12 <= pFVar18 + 1) goto LAB_1459e71bb;
    pFVar15 = pFVar17 + -2;
    pFVar14 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar12) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar17 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_348;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar15 <= pFVar14) goto LAB_1459e71bb;
  }
  iVar13 = (int)(((longlong)pFVar15 - (longlong)pFVar14) / 0x18) + 1;
  pFVar18 = pFVar14;
  if ((int)local_348 == 0) goto LAB_1459e71ac;
  goto LAB_1459e7030;
}

// ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext> @ 1459e72d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>
          *param_7)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ETaskTag EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar13;
  FName FVar14;
  FTaskGraphInterface *pFVar15;
  bool *pbVar16;
  int iVar17;
  ulonglong uVar18;
  FName FVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined1 local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_50;
  int local_48;
  char local_44;
  
  if (param_2 == 0) {
    return;
  }
  FVar13 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ParallelFor");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar12,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar7 = false;
  bVar22 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_1459e7434:
    bVar6 = bVar22;
    bVar5 = bVar7;
    bVar7 = false;
    FVar19 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_78.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1459e7434;
    local_70 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                         ,0x80,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar17 = param_7->ArrayNum;
  iVar21 = iVar10;
  if ((iVar17 != 0) && (iVar21 = iVar17, iVar10 < iVar17)) {
    iVar21 = iVar10;
  }
  if (iVar21 < 2) {
    iVar17 = 0;
    if (0 < param_2) {
      do {
        if ((param_7->ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        `FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>::operator()
                  (param_4,param_7->DataPtr,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < param_2);
    }
    goto LAB_1459e785f;
  }
  uVar18 = 1;
  iVar17 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar20 = 6;
    iVar10 = iVar21 * 6;
    do {
      if (iVar10 <= param_2) {
        uVar3 = (longlong)(param_2 + -1 + iVar10) / (longlong)iVar10;
        uVar18 = uVar3 & 0xffffffff;
        iVar17 = (int)uVar3;
        local_84.Bits = (param_2 + -1 + iVar17) / iVar17;
        if (iVar21 <= (int)local_84.Bits) break;
      }
      iVar17 = (int)uVar18;
      iVar10 = iVar10 - iVar21;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  iVar21 = iVar21 + -1;
  EVar11 = FTaskTagScope::GetCurrentTag();
  local_88 = 6;
  if ((EVar11 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_1459e75ae;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_1459e75ae:
    local_88 = 3;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  FVar14 = (FName)TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (FVar14 == (FName)0x0) {
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    ((FColor_u_0 *)((longlong)FVar14 + 0x54))->Bits = (uint)local_84;
    *(undefined4 *)((longlong)FVar14 + 8) = 0;
    *(int *)((longlong)FVar14 + 0x80) = 0;
    *(undefined ***)FVar14 =
         &`ParallelForImpl::
          ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'
          ::`2'::FParallelForData::_vftable_;
    *(wchar_t **)((longlong)FVar14 + 0x38) = param_1;
    *(<lambda_1> **)((longlong)FVar14 + 0x60) = param_4;
    *(FEventRef **)((longlong)FVar14 + 0x68) = &local_80;
    *(undefined1 *)((longlong)FVar14 + 0x70) = local_88;
    *(int *)((longlong)FVar14 + 0x84) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x40) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x48) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x78) = 0;
    *(int *)((longlong)FVar14 + 0x4c) = param_2;
    *(int *)((longlong)FVar14 + 0x50) = iVar17;
    *(TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>
      **)((longlong)FVar14 + 0x58) = param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar17 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask>_>
                       (0x48,8,iVar21,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask,int>
              ((void *)(*(longlong *)((longlong)FVar14 + 0x78) + (longlong)iVar17 * 0x48),iVar21);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)((longlong)FVar14 + 0x10));
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  piVar1 = (int *)((longlong)FVar14 + 0x48);
  iVar17 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(int *)((longlong)FVar14 + 0x80) <= iVar17) {
    iVar17 = -1;
  }
  if (iVar17 != -1) {
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
    local_70 = FVar14;
    `ParallelForImpl::
    ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::LaunchTask
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
                *)&local_70,iVar17,true);
    if (local_70 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_70 + 8);
      LOCK();
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (((iVar17 == 1) && (piVar1 != (int *)0x0)) && (local_70 != (FName)0x0)) {
        (*(code *)**(undefined8 **)local_70)(local_70,1);
      }
    }
  }
  local_44 = '\0';
  local_50 = FVar14;
  local_48 = iVar21;
  bVar8 = `ParallelForImpl::
          ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
          ::__l2::FParallelExecutor::operator()(&local_50,true);
  if (!bVar8) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar8 = IsInActualRenderingThread(), !bVar8))
    {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar16 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar2 = *pbVar16;
        *pbVar16 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar16 = bVar2;
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar9 == '\0') {
        pFVar15 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar15 + 0x48))
                  (pFVar15,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_50 != (FName)0x0) {
    if (local_44 != '\0') {
      `ParallelForImpl::
      ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
      ::__l2::FParallelExecutor::LaunchTask
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
                  *)&local_50,local_48,true);
    }
    if (local_50 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_50 + 8);
      LOCK();
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar17 == 1) && (piVar1 != (int *)0x0)) {
        (*(code *)**(undefined8 **)local_50)(local_50,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_1459e785f:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>_> @ 1459e7f40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_>
          (ushort param_1,
          ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 6) {
      iVar8 = 5;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 6) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FTracedTask>_> @ 1459e8a30

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_1459e8b46;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_1459e8b46:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder> @ 1459e98c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>
          (FD3D12RayTracingShader *param_1,FD3D12RootSignature *param_2,uint param_3,
          FRHIShaderParameterResource *param_4,uint param_5,FRHITexture **param_6,uint param_7,
          FRHIShaderResourceView **param_8,uint param_9,FRHIUniformBuffer **param_10,uint param_11,
          FRHISamplerState **param_12,uint param_13,FRHIUnorderedAccessView **param_14,uint param_15
          ,void *param_16,FD3D12RayTracingGlobalResourceBinder *param_17)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  EType EVar3;
  byte bVar4;
  FD3D12CommandContext *pFVar5;
  FRHITexture *pFVar6;
  FRHITexture *pFVar7;
  FD3D12Resource *pFVar8;
  FD3D12UniformBuffer *pFVar9;
  TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
  *pTVar10;
  schar *psVar11;
  code *pcVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  FXxHash64 FVar19;
  FXxHash64 FVar20;
  int *piVar21;
  char cVar22;
  ulong64 *puVar23;
  ulonglong uVar24;
  uchar uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  ForElementType<FD3D12RayTracingScene_*> FVar31;
  ForElementType<FD3D12RayTracingScene_*> FVar32;
  ulong64 uVar33;
  FD3D12RayTracingGlobalResourceBinder *pFVar34;
  FRHIUnorderedAccessView **ppFVar35;
  FD3D12RootSignature *this;
  undefined1 auStackY_8f8 [32];
  undefined1 local_8a8;
  undefined1 local_8a7 [7];
  FD3D12RayTracingGlobalResourceBinder *local_8a0;
  FD3D12RootSignature *local_898;
  ForElementType<FD3D12RayTracingScene_*> local_890;
  longlong local_888;
  uint local_880 [2];
  FRHIUniformBuffer **local_878;
  uint local_870;
  uint local_86c;
  FRHIUnorderedAccessView **local_868;
  undefined4 local_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  uint uStack_854;
  undefined1 local_850 [16];
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  uint uStack_834;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  uint uStack_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  uint uStack_814;
  FBindings local_810;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  local_878 = param_10;
  local_868 = param_14;
  local_8a0 = param_17;
  local_898 = param_2;
  local_890 = (ForElementType<FD3D12RayTracingScene_*>)param_1;
  if (((param_1 == (FD3D12RayTracingShader *)0x0) || (param_2 == (FD3D12RootSignature *)0x0)) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("Shader && RootSignature",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x13ec,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  pFVar5 = param_17->CommandContext;
  if ((*(longlong *)&pFVar5->field_0x300 == 0) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  local_810.GPUIndex = *(uint *)(*(longlong *)&pFVar5->field_0x300 + 8);
  plVar16 = &param_1->_padding_;
  if (param_1 == (FD3D12RayTracingShader *)0x0) {
    plVar16 = (longlong *)&DAT_00000010;
  }
  local_810.Binder = param_17;
  uVar24 = 0;
  local_810.ReferencedRayTracingScenes.ArrayMax = 1;
  local_810.UniformBuffers[0]._0_4_ = 0;
  local_810.UniformBuffers[0]._4_4_ = 0;
  local_810.UniformBuffers[1]._0_4_ = 0;
  local_810.UniformBuffers[1]._4_4_ = 0;
  local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData =
       (ForElementType<FD3D12RayTracingScene_*>)0x0;
  local_810.ReferencedRayTracingScenes.ArrayNum = 0;
  local_810.bBindlessResources = (bool)((byte)*plVar16 >> 1 & 1);
  local_810.bBindlessSamplers = (bool)((byte)*plVar16 >> 2 & 1);
  local_810.BoundSRVMask = 0;
  local_810.BoundCBVMask = 0;
  local_810.BoundUAVMask = 0;
  local_810.BoundSamplerMask = 0;
  local_810.UniformBuffers[2]._0_4_ = 0;
  local_810.UniformBuffers[2]._4_4_ = 0;
  local_810.UniformBuffers[3]._0_4_ = 0;
  local_810.UniformBuffers[3]._4_4_ = 0;
  local_810.UniformBuffers[4]._0_4_ = 0;
  local_810.UniformBuffers[4]._4_4_ = 0;
  local_810.UniformBuffers[5]._0_4_ = 0;
  local_810.UniformBuffers[5]._4_4_ = 0;
  local_810.UniformBuffers[6]._0_4_ = 0;
  local_810.UniformBuffers[6]._4_4_ = 0;
  local_810.UniformBuffers[7]._0_4_ = 0;
  local_810.UniformBuffers[7]._4_4_ = 0;
  local_810.UniformBuffers[8]._0_4_ = 0;
  local_810.UniformBuffers[8]._4_4_ = 0;
  local_810.UniformBuffers[9]._0_4_ = 0;
  local_810.UniformBuffers[9]._4_4_ = 0;
  local_810.UniformBuffers[10]._0_4_ = 0;
  local_810.UniformBuffers[10]._4_4_ = 0;
  local_810.UniformBuffers[0xb]._0_4_ = 0;
  local_810.UniformBuffers[0xb]._4_4_ = 0;
  local_810.UniformBuffers[0xc]._0_4_ = 0;
  local_810.UniformBuffers[0xc]._4_4_ = 0;
  local_810.UniformBuffers[0xd]._0_4_ = 0;
  local_810.UniformBuffers[0xd]._4_4_ = 0;
  local_810.UniformBuffers[0xe]._0_4_ = 0;
  local_810.UniformBuffers[0xe]._4_4_ = 0;
  local_810.UniformBuffers[0xf]._0_4_ = 0;
  local_810.UniformBuffers[0xf]._4_4_ = 0;
  if (param_3 != 0) {
    do {
      pFVar6 = (FRHITexture *)param_4->Resource;
      if (pFVar6 != (FRHITexture *)0x0) {
        EVar3 = param_4->Type;
        uVar25 = (uchar)uVar24;
        if (EVar3 == Texture) {
          `SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::
          SetTexture(&local_810,pFVar6,uVar25);
        }
        else if (EVar3 == ResourceView) {
          `SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::
          SetSRV(&local_810,(FRHIShaderResourceView *)pFVar6,uVar25);
        }
        else if (EVar3 == UnorderedAccessView) {
          `SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::
          SetUAV(&local_810,(FRHIUnorderedAccessView *)pFVar6,uVar25);
        }
        else if (EVar3 == Sampler) {
          lVar17 = (&pFVar6->_padding_)[local_810.GPUIndex];
          if ((lVar17 == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("Sampler != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1471,L""), bVar13)) {
            pcVar12 = (code *)swi(3);
            uVar14 = (*pcVar12)();
            return (bool)uVar14;
          }
          if (local_810.bBindlessSamplers == false) {
            local_860 = *(undefined4 *)(lVar17 + 0x68);
            uStack_85c = *(undefined4 *)(lVar17 + 0x6c);
            uStack_858 = *(undefined4 *)(lVar17 + 0x70);
            uStack_854 = *(uint *)(lVar17 + 0x74);
            local_810.LocalSamplers[uVar24 & 0xff].ptr = *(ulong64 *)(lVar17 + 0x68);
            local_810.SamplerVersions[uVar24 & 0xff] = uStack_854;
            local_810.BoundSamplerMask = local_810.BoundSamplerMask | 1L << (uVar24 & 0x3f);
          }
        }
      }
      uVar26 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar26;
      param_4 = param_4 + 1;
    } while (uVar26 < param_3);
  }
  uVar24 = 0;
  if (param_5 != 0) {
    do {
      pFVar6 = *param_6;
      if (pFVar6 != (FRHITexture *)0x0) {
        uVar28 = (ulonglong)local_810.GPUIndex;
        lVar17 = (**(code **)(pFVar6->_padding_ + 0x48))(pFVar6);
        if (lVar17 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = *(longlong *)(lVar17 + 0x200 + uVar28 * 8);
        }
        lVar17 = *(longlong *)(lVar17 + 0x240);
        if (lVar17 == 0) {
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8588839787656375226>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1446,"SRV");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            uVar14 = (*pcVar12)();
            return (bool)uVar14;
          }
          uVar28 = (ulonglong)local_810.GPUIndex;
          pFVar7 = (GBlackTexture->TextureRHI).Reference;
          if ((pFVar7 == (FRHITexture *)0x0) ||
             (lVar17 = (**(code **)(pFVar7->_padding_ + 0x48))(), lVar17 == 0)) {
            lVar17 = 0;
          }
          else {
            lVar17 = *(longlong *)(lVar17 + 0x200 + uVar28 * 8);
          }
          lVar17 = *(longlong *)(lVar17 + 0x240);
          if ((lVar17 == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("SRV != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x144a,L""), bVar13)) {
            pcVar12 = (code *)swi(3);
            uVar14 = (*pcVar12)();
            return (bool)uVar14;
          }
        }
        if (local_810.bBindlessResources == false) {
          if ((*(longlong *)(lVar17 + 0x18) == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("IsInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                  ,0x103,L""), bVar13)) {
            pcVar12 = (code *)swi(3);
            uVar14 = (*pcVar12)();
            return (bool)uVar14;
          }
          local_850 = *(undefined1 (*) [16])(lVar17 + 0x38);
          local_810.LocalSRVs[uVar24 & 0xff].ptr = local_850._0_8_;
          local_810.SRVVersions[uVar24 & 0xff] = local_850._12_4_;
          local_810.BoundSRVMask = local_810.BoundSRVMask | 1L << (uVar24 & 0x3f);
        }
        pFVar34 = local_810.Binder;
        puVar1 = &(local_810.Binder)->CommandContext->field_0x2f8;
        local_870 = 0;
        bVar13 = *(int *)puVar1 != 0;
        if (bVar13) {
          for (; (*(uint *)puVar1 >> local_870 & 1) == 0; local_870 = local_870 + 1) {
          }
        }
        uVar28 = 0x20;
        if (bVar13) {
          uVar28 = (ulonglong)local_870;
        }
        lVar18 = (**(code **)(pFVar6->_padding_ + 0x48))(pFVar6);
        pFVar5 = pFVar34->CommandContext;
        lVar17 = 0;
        if (lVar18 != 0) {
          lVar17 = *(longlong *)(lVar18 + 0x200 + uVar28 * 8);
        }
        pFVar8 = *(FD3D12Resource **)(lVar17 + 400);
        if ((pFVar8 == (FD3D12Resource *)0x0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                ,0x1a5,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        if (*(longlong *)&pFVar5->field_0x188 == 0) {
          (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
        }
        FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&pFVar5->field_0x188,pFVar8);
      }
      uVar26 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar26;
      param_6 = param_6 + 1;
    } while (uVar26 < param_5);
  }
  uVar24 = 0;
  if (param_7 != 0) {
    do {
      if (*param_8 != (FRHIShaderResourceView *)0x0) {
        lVar17 = *(longlong *)(&(*param_8)[4].field_0x10 + (ulonglong)local_810.GPUIndex * 8);
        lVar18 = lVar17 + 0x30;
        if (lVar17 == 0) {
          lVar18 = 0;
        }
        if ((lVar18 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("SRV != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x142e,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        if (local_810.bBindlessResources == false) {
          if ((*(longlong *)(lVar18 + 0x18) == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("IsInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                  ,0x103,L""), bVar13)) {
            pcVar12 = (code *)swi(3);
            uVar14 = (*pcVar12)();
            return (bool)uVar14;
          }
          local_840 = *(undefined4 *)(lVar18 + 0x38);
          uStack_83c = *(undefined4 *)(lVar18 + 0x3c);
          uStack_838 = *(undefined4 *)(lVar18 + 0x40);
          uStack_834 = *(uint *)(lVar18 + 0x44);
          local_810.LocalSRVs[uVar24 & 0xff].ptr = *(ulong64 *)(lVar18 + 0x38);
          local_810.SRVVersions[uVar24 & 0xff] = uStack_834;
          local_810.BoundSRVMask = local_810.BoundSRVMask | 1L << (uVar24 & 0x3f);
        }
        pFVar34 = local_810.Binder;
        if ((*(longlong *)(lVar18 + 0x18) == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xff,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        FD3D12RayTracingGlobalResourceBinder::AddReferencedShaderResource
                  (pFVar34,*(FD3D12BaseShaderResource **)(lVar18 + 0x10));
        local_888 = *(longlong *)(lVar18 + 0x90);
        if (local_888 != 0) {
          FVar32 = (ForElementType<FD3D12RayTracingScene_*>)&local_810.ReferencedRayTracingScenes;
          if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
              (ForElementType<FD3D12RayTracingScene_*>)0x0) {
            FVar32 = local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar32 <= &local_888) {
            FVar32 = (ForElementType<FD3D12RayTracingScene_*>)&local_810.ReferencedRayTracingScenes;
            if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
                (ForElementType<FD3D12RayTracingScene_*>)0x0) {
              FVar32 = local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData;
            }
            if ((&local_888 <
                 (longlong *)
                 ((longlong)FVar32 + (longlong)local_810.ReferencedRayTracingScenes.ArrayMax * 8))
               && (bVar13 = FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar13)) {
              pcVar12 = (code *)swi(3);
              uVar14 = (*pcVar12)();
              return (bool)uVar14;
            }
          }
          uVar26 = local_810.ReferencedRayTracingScenes.ArrayNum;
          if (local_810.ReferencedRayTracingScenes.ArrayNum ==
              local_810.ReferencedRayTracingScenes.ArrayMax) {
            uVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12RayTracingScene_*>_>
                               (0x808,&local_810.ReferencedRayTracingScenes.AllocatorInstance,
                                &local_810.ReferencedRayTracingScenes.ArrayMax);
          }
          local_810.ReferencedRayTracingScenes.ArrayNum = uVar26 + 1;
          FVar32 = (ForElementType<FD3D12RayTracingScene_*>)&local_810.ReferencedRayTracingScenes;
          if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
              (ForElementType<FD3D12RayTracingScene_*>)0x0) {
            FVar32 = local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData;
          }
          *(longlong *)((longlong)FVar32 + (longlong)(int)uVar26 * 8) = local_888;
        }
      }
      uVar26 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar26;
      param_8 = param_8 + 1;
    } while (uVar26 < param_7);
  }
  uVar24 = 0;
  if (param_9 != 0) {
    puVar23 = local_810.RemoteCBVs;
    uVar30 = (ulonglong)param_9;
    uVar28 = uVar24;
    do {
      lVar17 = *(longlong *)
                ((longlong)puVar23 + ((longlong)local_878 - (longlong)local_810.RemoteCBVs));
      if (lVar17 != 0) {
        pFVar9 = *(FD3D12UniformBuffer **)(lVar17 + 0x60 + (ulonglong)local_810.GPUIndex * 8);
        *puVar23 = (pFVar9->ResourceLocation).GPUVirtualAddress;
        local_810.BoundCBVMask = local_810.BoundCBVMask | 1L << (uVar28 & 0x3f);
        puVar23[0x10] = (ulong64)pFVar9;
      }
      uVar28 = uVar28 + 1;
      puVar23 = puVar23 + 1;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  if (param_11 != 0) {
    do {
      if (*param_12 != (FRHISamplerState *)0x0) {
        lVar17 = *(longlong *)(&(*param_12)[1].field_0x10 + (ulonglong)local_810.GPUIndex * 8);
        if ((lVar17 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Sampler != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x1471,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        if (local_810.bBindlessSamplers == false) {
          local_830 = *(undefined4 *)(lVar17 + 0x68);
          uStack_82c = *(undefined4 *)(lVar17 + 0x6c);
          uStack_828 = *(undefined4 *)(lVar17 + 0x70);
          uStack_824 = *(uint *)(lVar17 + 0x74);
          local_810.LocalSamplers[uVar24 & 0xff].ptr = *(ulong64 *)(lVar17 + 0x68);
          local_810.SamplerVersions[uVar24 & 0xff] = uStack_824;
          local_810.BoundSamplerMask = local_810.BoundSamplerMask | 1L << (uVar24 & 0x3f);
        }
      }
      uVar26 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar26;
      param_12 = param_12 + 1;
    } while (uVar26 < param_11);
  }
  uVar24 = 0;
  ppFVar35 = local_868;
  if (param_13 != 0) {
    do {
      if (*ppFVar35 != (FRHIUnorderedAccessView *)0x0) {
        lVar17 = *(longlong *)(&(*ppFVar35)[4].field_0x10 + (ulonglong)local_810.GPUIndex * 8);
        lVar18 = lVar17 + 0x30;
        if (lVar17 == 0) {
          lVar18 = 0;
        }
        if ((lVar18 == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("UAV != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x141c,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        if (local_810.bBindlessResources == false) {
          if ((*(longlong *)(lVar18 + 0x18) == 0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("IsInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                  ,0x103,L""), bVar13)) {
            pcVar12 = (code *)swi(3);
            uVar14 = (*pcVar12)();
            return (bool)uVar14;
          }
          local_820 = *(undefined4 *)(lVar18 + 0x38);
          uStack_81c = *(undefined4 *)(lVar18 + 0x3c);
          uStack_818 = *(undefined4 *)(lVar18 + 0x40);
          uStack_814 = *(uint *)(lVar18 + 0x44);
          local_810.LocalUAVs[uVar24 & 0xff].ptr = *(ulong64 *)(lVar18 + 0x38);
          local_810.UAVVersions[uVar24 & 0xff] = uStack_814;
          local_810.BoundUAVMask = local_810.BoundUAVMask | 1L << (uVar24 & 0x3f);
        }
        pFVar34 = local_810.Binder;
        if ((*(longlong *)(lVar18 + 0x18) == 0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xff,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        FD3D12RayTracingGlobalResourceBinder::AddReferencedShaderResource
                  (pFVar34,*(FD3D12BaseShaderResource **)(lVar18 + 0x10));
      }
      uVar26 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar26;
      ppFVar35 = ppFVar35 + 1;
    } while (uVar26 < param_13);
  }
  FVar32 = local_890;
  pFVar34 = local_8a0;
  local_880[0] = 0xffffffff;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>
            (&local_810,(FRHIShader *)local_890,local_880,&local_878,
             *(FTracker **)&local_8a0->CommandContext->field_0x1c8);
  if ((*(longlong *)((longlong)FVar32 + 0x128) & 1) == 0) {
LAB_1459ea21a:
    if (param_16 != (void *)0x0) goto LAB_1459ea21f;
  }
  else {
    if ((param_15 == 0) || (param_16 == (void *)0x0)) {
      bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("InLooseParameterDataSize && InLooseParameterData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x14e0,
                          L"Shader uses global uniform buffer, but the required loose parameter data is not provided."
                         );
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      goto LAB_1459ea21a;
    }
LAB_1459ea21f:
    if ((*(longlong *)((longlong)FVar32 + 0x128) & 1) != 0) {
      bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x132c,
                          L"Loose parameters are not implemented for global ray tracing shaders (raygen, miss, callable)"
                         );
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      local_810.BoundCBVMask = local_810.BoundCBVMask | 1;
      local_810.RemoteCBVs[0] = 0;
    }
  }
  bVar4 = *(byte *)((longlong)((longlong)FVar32 + 0x128) + 2);
  if (bVar4 < 0x41) {
    if (bVar4 == 0x40) {
      uVar24 = 0xffffffffffffffff;
    }
    else {
      uVar24 = (1L << (bVar4 & 0x3f)) - 1;
    }
    if ((uVar24 & local_810.BoundSRVMask) != uVar24) goto LAB_1459ea297;
  }
  else {
LAB_1459ea297:
    bVar13 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(Shader->ResourceCounts.NumSRVs , Bindings.BoundSRVMask)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x14fa,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
  }
  bVar4 = *(byte *)((longlong)((longlong)FVar32 + 0x128) + 4);
  if (bVar4 < 0x41) {
    if (bVar4 == 0x40) {
      uVar24 = 0xffffffffffffffff;
    }
    else {
      uVar24 = (1L << (bVar4 & 0x3f)) - 1;
    }
    if ((uVar24 & local_810.BoundUAVMask) != uVar24) goto LAB_1459ea2f0;
  }
  else {
LAB_1459ea2f0:
    bVar13 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(Shader->ResourceCounts.NumUAVs , Bindings.BoundUAVMask)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x14fb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
  }
  bVar4 = *(byte *)((longlong)((longlong)FVar32 + 0x128) + 3);
  if (bVar4 < 0x41) {
    if (bVar4 == 0x40) {
      uVar24 = 0xffffffffffffffff;
    }
    else {
      uVar24 = (1L << (bVar4 & 0x3f)) - 1;
    }
    if ((uVar24 & local_810.BoundCBVMask) != uVar24) goto LAB_1459ea349;
  }
  else {
LAB_1459ea349:
    bVar13 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(Shader->ResourceCounts.NumCBs , Bindings.BoundCBVMask)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x14fc,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
  }
  bVar4 = *(byte *)((longlong)((longlong)FVar32 + 0x128) + 1);
  if (bVar4 < 0x41) {
    if (bVar4 == 0x40) {
      uVar24 = 0xffffffffffffffff;
    }
    else {
      uVar24 = (1L << (bVar4 & 0x3f)) - 1;
    }
    if ((uVar24 & local_810.BoundSamplerMask) != uVar24) goto LAB_1459ea3a2;
  }
  else {
LAB_1459ea3a2:
    bVar13 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(Shader->ResourceCounts.NumSamplers, Bindings.BoundSamplerMask)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x14fd,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
  }
  bVar4 = *(byte *)((longlong)((longlong)FVar32 + 0x128) + 2);
  FVar31 = (ForElementType<FD3D12RayTracingScene_*>)pFVar34->DescriptorCache;
  this = local_898;
  local_890 = FVar31;
  if (bVar4 == 0) {
LAB_1459ea565:
    bVar4 = *(byte *)((longlong)((longlong)FVar32 + 0x128) + 4);
    pFVar34 = local_8a0;
    if (bVar4 != 0) {
      if ((*(int *)((longlong)FVar31 + 0x108) < 1) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      pTVar10 = (TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                 *)(((TArray<FD3D12ExplicitDescriptorCache::FWorkerThreadData,TSizedDefaultAllocator<32>_>
                      *)((longlong)FVar31 + 0x100))->AllocatorInstance).Data;
      FVar19 = FXxHash64::HashBuffer(local_810.UAVVersions,(ulonglong)bVar4 * 4);
      FVar20 = FXxHash64::HashBuffer(local_810.LocalUAVs,(ulonglong)bVar4 * 8);
      uVar24 = FVar20.Hash ^ FVar19.Hash;
      psVar11 = (pTVar10->CurrentData).Distances;
      uVar26 = pTVar10->NumSlotsMinusOne & (uint)uVar24;
      uVar28 = (ulonglong)uVar26;
      cVar22 = '\0';
      if ((psVar11 != (schar *)0x0) && (-1 < psVar11[uVar28])) {
        do {
          if (uVar24 == (pTVar10->CurrentData).Keys[uVar28]) {
            piVar21 = (pTVar10->CurrentData).Values + uVar28;
            goto LAB_1459ea647;
          }
          uVar26 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar26;
          cVar22 = cVar22 + '\x01';
        } while (cVar22 <= psVar11[uVar28]);
      }
      piVar21 = Experimental::TSherwoodHashTable_Private::
                TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                ::Add(pTVar10,cVar22,(FData *)pTVar10,uVar26,uVar24,(uint)uVar24,-1);
LAB_1459ea647:
      iVar15 = *piVar21;
      if (iVar15 == -1) {
        iVar15 = FD3D12ExplicitDescriptorCache::Allocate
                           ((FD3D12ExplicitDescriptorCache *)FVar31,local_810.LocalUAVs,(uint)bVar4,
                            D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,0);
        *piVar21 = iVar15;
      }
      if (iVar15 < 0) goto LAB_1459ea89f;
      uVar25 = this->BindSlotMap[0x19];
      if ((uVar25 == 0xff) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlot != 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x151c,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      pFVar34 = local_8a0;
      uVar26 = *(uint *)((longlong)FVar31 + 0x34);
      pFVar5 = local_8a0->CommandContext;
      uVar33 = ((D3D12_GPU_DESCRIPTOR_HANDLE *)((longlong)FVar31 + 0x40))->ptr;
      if (*(longlong *)&pFVar5->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
      }
      plVar16 = *(longlong **)(*(longlong *)&pFVar5->field_0x188 + 0x28);
      piVar21 = (int *)(*(longlong *)&pFVar5->field_0x188 + 0x168);
      *piVar21 = *piVar21 + 1;
      (**(code **)(*plVar16 + 0xf8))(plVar16,uVar25,iVar15 * uVar26 + uVar33);
    }
    if (*(char *)((longlong)((longlong)FVar32 + 0x128) + 3) != '\0') {
      if ((this->BindSlotMap[0x16] != 0xff) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("RootSignature->CBVRDTBindSlot(SF_Compute) == 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1532,
                              L"Root CBV descriptor tables are not implemented for ray tracing shaders."
                             ), bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar26 = FD3D12RootSignature::CBVRDBaseBindSlot(this,SF_Compute);
      if ((uVar26 == 0xff) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlot != 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1535,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar27 = 0;
      if (*(char *)((longlong)((longlong)FVar32 + 0x128) + 3) != '\0') {
        do {
          uVar33 = 0;
          if ((local_810.BoundCBVMask >> ((ulonglong)uVar27 & 0x3f) & 1) != 0) {
            uVar33 = local_810.RemoteCBVs[uVar27];
          }
          pFVar5 = local_8a0->CommandContext;
          if (*(longlong *)&pFVar5->field_0x188 == 0) {
            (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
          }
          plVar16 = *(longlong **)(*(longlong *)&pFVar5->field_0x188 + 0x28);
          piVar21 = (int *)(*(longlong *)&pFVar5->field_0x188 + 0x168);
          *piVar21 = *piVar21 + 1;
          (**(code **)(*plVar16 + 0x128))(plVar16,uVar27 + uVar26,uVar33);
          pFVar34 = local_8a0;
          if (local_810.UniformBuffers[uVar27] != (FD3D12UniformBuffer *)0x0) {
            pFVar8 = (local_810.UniformBuffers[uVar27]->ResourceLocation).UnderlyingResource;
            pFVar5 = local_8a0->CommandContext;
            if ((pFVar8 == (FD3D12Resource *)0x0) &&
               (bVar13 = FDebug::CheckVerifyFailedImpl2
                                   ("Resource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                    ,0x1a5,L""), bVar13)) {
              pcVar12 = (code *)swi(3);
              uVar14 = (*pcVar12)();
              return (bool)uVar14;
            }
            if (*(longlong *)&pFVar5->field_0x188 == 0) {
              (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
            }
            FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&pFVar5->field_0x188,pFVar8);
          }
          uVar27 = uVar27 + 1;
          FVar31 = local_890;
        } while (uVar27 < *(byte *)((longlong)((longlong)FVar32 + 0x128) + 3));
      }
    }
    bVar4 = *(byte *)((longlong)((longlong)FVar32 + 0x128) + 1);
    if (bVar4 != 0) {
      iVar15 = FD3D12ExplicitDescriptorCache::AllocateDeduplicated
                         ((FD3D12ExplicitDescriptorCache *)FVar31,local_810.SamplerVersions,
                          local_810.LocalSamplers,(uint)bVar4,D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER,0);
      if (iVar15 < 0) goto LAB_1459ea89f;
      uVar25 = local_898->BindSlotMap[0x18];
      if ((uVar25 == 0xff) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlot != 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1552,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar26 = *(uint *)((longlong)FVar31 + 0xac);
      pFVar5 = pFVar34->CommandContext;
      uVar33 = ((D3D12_GPU_DESCRIPTOR_HANDLE *)((longlong)FVar31 + 0xb8))->ptr;
      if (*(longlong *)&pFVar5->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
      }
      plVar16 = *(longlong **)(*(longlong *)&pFVar5->field_0x188 + 0x28);
      piVar21 = (int *)(*(longlong *)&pFVar5->field_0x188 + 0x168);
      *piVar21 = *piVar21 + 1;
      (**(code **)(*plVar16 + 0xf8))(plVar16,uVar25,iVar15 * uVar26 + uVar33);
    }
    uVar24 = (ulonglong)local_810.ReferencedRayTracingScenes.ArrayNum;
    local_898 = (FD3D12RootSignature *)
                CONCAT44(local_898._4_4_,local_810.ReferencedRayTracingScenes.ArrayNum);
    FVar32 = (ForElementType<FD3D12RayTracingScene_*>)&local_810.ReferencedRayTracingScenes;
    if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
        (ForElementType<FD3D12RayTracingScene_*>)0x0) {
      FVar32 = local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData;
    }
    local_890 = (ForElementType<FD3D12RayTracingScene_*>)((longlong)FVar32 + uVar24 * 8);
    uVar28 = uVar24;
    while( true ) {
      FVar31 = local_890;
      if ((int)uVar24 != (int)uVar28) {
        local_8a8 = 0;
        `TCheckedPointerIterator<FD3D12RayTracingScene_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_8a8);
      }
      if (FVar32 == FVar31) break;
      pFVar5 = pFVar34->CommandContext;
      lVar17 = *(longlong *)FVar32;
      local_86c = 0;
      bVar13 = *(int *)&pFVar5->field_0x2f8 != 0;
      if (bVar13) {
        for (; (*(uint *)&pFVar5->field_0x2f8 >> local_86c & 1) == 0; local_86c = local_86c + 1) {
        }
      }
      uVar24 = 0x20;
      if (bVar13) {
        uVar24 = (ulonglong)local_86c;
      }
      pFVar8 = *(FD3D12Resource **)(*(longlong *)(lVar17 + 0xf0 + uVar24 * 8) + 0x140);
      if ((pFVar8 == (FD3D12Resource *)0x0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x1a5,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      if (*(longlong *)&pFVar5->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
      }
      FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&pFVar5->field_0x188,pFVar8);
      plVar16 = (longlong *)((uVar24 + 0x16) * 0x10 + lVar17);
      puVar29 = (undefined8 *)*plVar16;
      lVar17 = plVar16[1];
      puVar2 = puVar29 + (int)lVar17;
      while( true ) {
        if ((int)plVar16[1] != (int)lVar17) {
          local_8a7[0] = 0;
          `TCheckedPointerIterator<FD3D12Resource_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_8a7);
        }
        if (puVar29 == puVar2) break;
        pFVar8 = (FD3D12Resource *)*puVar29;
        if ((pFVar8 == (FD3D12Resource *)0x0) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                ,0x1a5,L""), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        if (*(longlong *)&pFVar5->field_0x188 == 0) {
          (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
        }
        FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&pFVar5->field_0x188,pFVar8);
        puVar29 = puVar29 + 1;
      }
      uVar24 = (ulonglong)(uint)local_810.ReferencedRayTracingScenes.ArrayNum;
      FVar32 = (ForElementType<FD3D12RayTracingScene_*>)((longlong)FVar32 + 8);
      uVar28 = (ulonglong)local_898 & 0xffffffff;
      pFVar34 = local_8a0;
    }
    bVar13 = true;
  }
  else {
    if ((*(int *)((longlong)FVar31 + 0x108) < 1) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return (bool)uVar14;
    }
    pTVar10 = (TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
               *)(((TArray<FD3D12ExplicitDescriptorCache::FWorkerThreadData,TSizedDefaultAllocator<32>_>
                    *)((longlong)FVar31 + 0x100))->AllocatorInstance).Data;
    FVar19 = FXxHash64::HashBuffer(local_810.SRVVersions,(ulonglong)bVar4 * 4);
    FVar20 = FXxHash64::HashBuffer(local_810.LocalSRVs,(ulonglong)bVar4 * 8);
    uVar24 = FVar20.Hash ^ FVar19.Hash;
    psVar11 = (pTVar10->CurrentData).Distances;
    uVar26 = pTVar10->NumSlotsMinusOne & (uint)uVar24;
    uVar28 = (ulonglong)uVar26;
    cVar22 = '\0';
    if ((psVar11 != (schar *)0x0) && (-1 < psVar11[uVar28])) {
      do {
        if (uVar24 == (pTVar10->CurrentData).Keys[uVar28]) {
          piVar21 = (pTVar10->CurrentData).Values + uVar28;
          goto LAB_1459ea4a9;
        }
        uVar26 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar26;
        cVar22 = cVar22 + '\x01';
      } while (cVar22 <= psVar11[uVar28]);
    }
    piVar21 = Experimental::TSherwoodHashTable_Private::
              TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
              ::Add(pTVar10,cVar22,(FData *)pTVar10,uVar26,uVar24,(uint)uVar24,-1);
LAB_1459ea4a9:
    iVar15 = *piVar21;
    if (iVar15 == -1) {
      iVar15 = FD3D12ExplicitDescriptorCache::Allocate
                         ((FD3D12ExplicitDescriptorCache *)FVar31,local_810.LocalSRVs,(uint)bVar4,
                          D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,0);
      *piVar21 = iVar15;
    }
    this = local_898;
    if (-1 < iVar15) {
      uVar25 = local_898->BindSlotMap[0x15];
      if ((uVar25 == 0xff) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlot != 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x150c,L""), bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar26 = *(uint *)((longlong)FVar31 + 0x34);
      pFVar5 = local_8a0->CommandContext;
      uVar33 = ((D3D12_GPU_DESCRIPTOR_HANDLE *)((longlong)FVar31 + 0x40))->ptr;
      if (*(longlong *)&pFVar5->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
      }
      plVar16 = *(longlong **)(*(longlong *)&pFVar5->field_0x188 + 0x28);
      piVar21 = (int *)(*(longlong *)&pFVar5->field_0x188 + 0x168);
      *piVar21 = *piVar21 + 1;
      (**(code **)(*plVar16 + 0xf8))(plVar16,uVar25,iVar15 * uVar26 + uVar33);
      goto LAB_1459ea565;
    }
LAB_1459ea89f:
    bVar13 = false;
  }
  if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
      (ForElementType<FD3D12RayTracingScene_*>)0x0) {
    FMemory::Free((void *)local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData);
  }
  return bVar13;
}

// SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder> @ 1459eaae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>
          (FD3D12RayTracingShader *param_1,FD3D12RootSignature *param_2,uint param_3,
          FRHIShaderParameterResource *param_4,uint param_5,FRHITexture **param_6,uint param_7,
          FRHIShaderResourceView **param_8,uint param_9,FRHIUniformBuffer **param_10,uint param_11,
          FRHISamplerState **param_12,uint param_13,FRHIUnorderedAccessView **param_14,uint param_15
          ,void *param_16,FD3D12RayTracingLocalResourceBinder *param_17)

{
  ForElementType<FD3D12RayTracingScene_*> FVar1;
  EType EVar2;
  byte bVar3;
  FRHITexture *pFVar4;
  FRHITexture *pFVar5;
  FD3D12UniformBuffer *pFVar6;
  schar *psVar7;
  FD3D12RayTracingShaderBindingTableInternal *pFVar8;
  code *pcVar9;
  FD3D12RayTracingShader *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  FXxHash64 FVar16;
  FXxHash64 FVar17;
  int *piVar18;
  char cVar19;
  ulong64 *puVar20;
  ulonglong uVar21;
  ulong64 uVar22;
  uchar uVar23;
  uint uVar24;
  longlong lVar25;
  ForElementType<FD3D12RayTracingScene_*> FVar26;
  FD3D12RootSignature *pFVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  FD3D12ExplicitDescriptorCache *pFVar31;
  TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
  *pTVar32;
  FD3D12RayTracingLocalResourceBinder *pFVar33;
  undefined1 auStackY_908 [32];
  undefined1 local_8b8 [4];
  uint local_8b4;
  longlong local_8b0;
  FD3D12RayTracingLocalResourceBinder *local_8a8;
  FD3D12RootSignature *local_8a0;
  uint local_898 [2];
  FD3D12RayTracingShader *local_890;
  FD3D12ExplicitDescriptorCache *local_888;
  FRHIUniformBuffer **local_880;
  void *local_878;
  ulong64 local_870;
  ulong64 local_868;
  undefined4 local_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  uint uStack_854;
  undefined4 local_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  uint uStack_844;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  uint uStack_834;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  uint uStack_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  uint uStack_814;
  FBindings local_810;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_908;
  local_880 = param_10;
  local_888 = (FD3D12ExplicitDescriptorCache *)param_14;
  local_8b4 = param_15;
  local_878 = param_16;
  local_8a8 = param_17;
  local_8a0 = param_2;
  local_890 = param_1;
  if (((param_1 == (FD3D12RayTracingShader *)0x0) || (param_2 == (FD3D12RootSignature *)0x0)) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("Shader && RootSignature",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x13ec,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  local_810.GPUIndex = *(uint *)&param_17->Device->field_0x8;
  plVar14 = &param_1->_padding_;
  if (param_1 == (FD3D12RayTracingShader *)0x0) {
    plVar14 = (longlong *)&DAT_00000010;
  }
  local_810.Binder = param_17;
  uVar21 = 0;
  local_810.ReferencedRayTracingScenes.ArrayMax = 1;
  local_810.UniformBuffers[0]._0_4_ = 0;
  local_810.UniformBuffers[0]._4_4_ = 0;
  local_810.UniformBuffers[1]._0_4_ = 0;
  local_810.UniformBuffers[1]._4_4_ = 0;
  local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData =
       (ForElementType<FD3D12RayTracingScene_*>)0x0;
  local_810.ReferencedRayTracingScenes.ArrayNum = 0;
  local_810.bBindlessResources = (bool)((byte)*plVar14 >> 1 & 1);
  local_810.bBindlessSamplers = (bool)((byte)*plVar14 >> 2 & 1);
  local_810.BoundSRVMask = 0;
  local_810.BoundCBVMask = 0;
  local_810.BoundUAVMask = 0;
  local_810.BoundSamplerMask = 0;
  local_810.UniformBuffers[2]._0_4_ = 0;
  local_810.UniformBuffers[2]._4_4_ = 0;
  local_810.UniformBuffers[3]._0_4_ = 0;
  local_810.UniformBuffers[3]._4_4_ = 0;
  local_810.UniformBuffers[4]._0_4_ = 0;
  local_810.UniformBuffers[4]._4_4_ = 0;
  local_810.UniformBuffers[5]._0_4_ = 0;
  local_810.UniformBuffers[5]._4_4_ = 0;
  local_810.UniformBuffers[6]._0_4_ = 0;
  local_810.UniformBuffers[6]._4_4_ = 0;
  local_810.UniformBuffers[7]._0_4_ = 0;
  local_810.UniformBuffers[7]._4_4_ = 0;
  local_810.UniformBuffers[8]._0_4_ = 0;
  local_810.UniformBuffers[8]._4_4_ = 0;
  local_810.UniformBuffers[9]._0_4_ = 0;
  local_810.UniformBuffers[9]._4_4_ = 0;
  local_810.UniformBuffers[10]._0_4_ = 0;
  local_810.UniformBuffers[10]._4_4_ = 0;
  local_810.UniformBuffers[0xb]._0_4_ = 0;
  local_810.UniformBuffers[0xb]._4_4_ = 0;
  local_810.UniformBuffers[0xc]._0_4_ = 0;
  local_810.UniformBuffers[0xc]._4_4_ = 0;
  local_810.UniformBuffers[0xd]._0_4_ = 0;
  local_810.UniformBuffers[0xd]._4_4_ = 0;
  local_810.UniformBuffers[0xe]._0_4_ = 0;
  local_810.UniformBuffers[0xe]._4_4_ = 0;
  local_810.UniformBuffers[0xf]._0_4_ = 0;
  local_810.UniformBuffers[0xf]._4_4_ = 0;
  if (param_3 != 0) {
    do {
      pFVar4 = (FRHITexture *)param_4->Resource;
      if (pFVar4 != (FRHITexture *)0x0) {
        EVar2 = param_4->Type;
        uVar23 = (uchar)uVar21;
        if (EVar2 == Texture) {
          `SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::
          SetTexture(&local_810,pFVar4,uVar23);
        }
        else if (EVar2 == ResourceView) {
          `SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::
          SetSRV(&local_810,(FRHIShaderResourceView *)pFVar4,uVar23);
        }
        else if (EVar2 == UnorderedAccessView) {
          `SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::
          SetUAV(&local_810,(FRHIUnorderedAccessView *)pFVar4,uVar23);
        }
        else if (EVar2 == Sampler) {
          lVar15 = (&pFVar4->_padding_)[local_810.GPUIndex];
          if ((lVar15 == 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("Sampler != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x1471,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          if (local_810.bBindlessSamplers == false) {
            local_860 = *(undefined4 *)(lVar15 + 0x68);
            uStack_85c = *(undefined4 *)(lVar15 + 0x6c);
            uStack_858 = *(undefined4 *)(lVar15 + 0x70);
            uStack_854 = *(uint *)(lVar15 + 0x74);
            local_810.LocalSamplers[uVar21 & 0xff].ptr = *(ulong64 *)(lVar15 + 0x68);
            local_810.SamplerVersions[uVar21 & 0xff] = uStack_854;
            local_810.BoundSamplerMask = local_810.BoundSamplerMask | 1L << (uVar21 & 0x3f);
          }
        }
      }
      uVar24 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar24;
      param_4 = param_4 + 1;
    } while (uVar24 < param_3);
  }
  uVar21 = 0;
  if (param_5 != 0) {
    do {
      pFVar4 = *param_6;
      if (pFVar4 != (FRHITexture *)0x0) {
        uVar28 = (ulonglong)local_810.GPUIndex;
        lVar15 = (**(code **)(pFVar4->_padding_ + 0x48))(pFVar4);
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = *(longlong *)(lVar15 + 0x200 + uVar28 * 8);
        }
        lVar15 = *(longlong *)(lVar15 + 0x240);
        if (lVar15 == 0) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8588839787656375226>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1446,"SRV");
          if (bVar11) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          uVar28 = (ulonglong)local_810.GPUIndex;
          pFVar5 = (GBlackTexture->TextureRHI).Reference;
          if ((pFVar5 == (FRHITexture *)0x0) ||
             (lVar15 = (**(code **)(pFVar5->_padding_ + 0x48))(), lVar15 == 0)) {
            lVar15 = 0;
          }
          else {
            lVar15 = *(longlong *)(lVar15 + 0x200 + uVar28 * 8);
          }
          lVar15 = *(longlong *)(lVar15 + 0x240);
          if ((lVar15 == 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("SRV != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x144a,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
        }
        if (local_810.bBindlessResources == false) {
          if ((*(longlong *)(lVar15 + 0x18) == 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("IsInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                  ,0x103,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          local_850 = *(undefined4 *)(lVar15 + 0x38);
          uStack_84c = *(undefined4 *)(lVar15 + 0x3c);
          uStack_848 = *(undefined4 *)(lVar15 + 0x40);
          uStack_844 = *(uint *)(lVar15 + 0x44);
          local_810.LocalSRVs[uVar21 & 0xff].ptr = *(ulong64 *)(lVar15 + 0x38);
          local_810.SRVVersions[uVar21 & 0xff] = uStack_844;
          local_810.BoundSRVMask = local_810.BoundSRVMask | 1L << (uVar21 & 0x3f);
        }
        FD3D12RayTracingShaderBindingTableInternal::AddReferencedTexture
                  ((local_810.Binder)->ShaderTable,(local_810.Binder)->WorkerIndex,
                   (local_810.Binder)->RecordIndex,(local_810.Binder)->BindingType,pFVar4);
      }
      uVar24 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar24;
      param_6 = param_6 + 1;
      param_17 = local_8a8;
    } while (uVar24 < param_5);
  }
  uVar21 = 0;
  if (param_7 != 0) {
    do {
      if (*param_8 != (FRHIShaderResourceView *)0x0) {
        lVar15 = *(longlong *)(&(*param_8)[4].field_0x10 + (ulonglong)local_810.GPUIndex * 8);
        lVar25 = lVar15 + 0x30;
        if (lVar15 == 0) {
          lVar25 = 0;
        }
        if ((lVar25 == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("SRV != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x142e,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (local_810.bBindlessResources == false) {
          if ((*(longlong *)(lVar25 + 0x18) == 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("IsInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                  ,0x103,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          local_840 = *(undefined4 *)(lVar25 + 0x38);
          uStack_83c = *(undefined4 *)(lVar25 + 0x3c);
          uStack_838 = *(undefined4 *)(lVar25 + 0x40);
          uStack_834 = *(uint *)(lVar25 + 0x44);
          local_810.LocalSRVs[uVar21 & 0xff].ptr = *(ulong64 *)(lVar25 + 0x38);
          local_810.SRVVersions[uVar21 & 0xff] = uStack_834;
          local_810.BoundSRVMask = local_810.BoundSRVMask | 1L << (uVar21 & 0x3f);
        }
        pFVar33 = local_810.Binder;
        if ((*(longlong *)(lVar25 + 0x18) == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xff,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FD3D12RayTracingShaderBindingTableInternal::AddReferencedShaderResource
                  (pFVar33->ShaderTable,pFVar33->WorkerIndex,pFVar33->RecordIndex,
                   pFVar33->BindingType,*(FD3D12BaseShaderResource **)(lVar25 + 0x10));
        local_8b0 = *(longlong *)(lVar25 + 0x90);
        if (local_8b0 != 0) {
          FVar26 = (ForElementType<FD3D12RayTracingScene_*>)&local_810.ReferencedRayTracingScenes;
          if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
              (ForElementType<FD3D12RayTracingScene_*>)0x0) {
            FVar26 = local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar26 <= &local_8b0) {
            FVar26 = (ForElementType<FD3D12RayTracingScene_*>)&local_810.ReferencedRayTracingScenes;
            if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
                (ForElementType<FD3D12RayTracingScene_*>)0x0) {
              FVar26 = local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData;
            }
            if ((&local_8b0 <
                 (longlong *)
                 ((longlong)FVar26 + (longlong)local_810.ReferencedRayTracingScenes.ArrayMax * 8))
               && (bVar11 = FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
          }
          uVar24 = local_810.ReferencedRayTracingScenes.ArrayNum;
          if (local_810.ReferencedRayTracingScenes.ArrayNum ==
              local_810.ReferencedRayTracingScenes.ArrayMax) {
            uVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12RayTracingScene_*>_>
                               (0x808,&local_810.ReferencedRayTracingScenes.AllocatorInstance,
                                &local_810.ReferencedRayTracingScenes.ArrayMax);
          }
          local_810.ReferencedRayTracingScenes.ArrayNum = uVar24 + 1;
          FVar26 = (ForElementType<FD3D12RayTracingScene_*>)&local_810.ReferencedRayTracingScenes;
          if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
              (ForElementType<FD3D12RayTracingScene_*>)0x0) {
            FVar26 = local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData;
          }
          *(longlong *)((longlong)FVar26 + (longlong)(int)uVar24 * 8) = local_8b0;
        }
      }
      uVar24 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar24;
      param_8 = param_8 + 1;
    } while (uVar24 < param_7);
  }
  uVar21 = 0;
  if (param_9 != 0) {
    puVar20 = local_810.RemoteCBVs;
    uVar30 = (ulonglong)param_9;
    uVar28 = uVar21;
    do {
      lVar15 = *(longlong *)
                (((longlong)local_880 - (longlong)local_810.RemoteCBVs) + (longlong)puVar20);
      if (lVar15 != 0) {
        pFVar6 = *(FD3D12UniformBuffer **)(lVar15 + 0x60 + (ulonglong)local_810.GPUIndex * 8);
        *puVar20 = (pFVar6->ResourceLocation).GPUVirtualAddress;
        local_810.BoundCBVMask = local_810.BoundCBVMask | 1L << (uVar28 & 0x3f);
        puVar20[0x10] = (ulong64)pFVar6;
      }
      uVar28 = uVar28 + 1;
      puVar20 = puVar20 + 1;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
  }
  if (param_11 != 0) {
    do {
      if (*param_12 != (FRHISamplerState *)0x0) {
        lVar15 = *(longlong *)(&(*param_12)[1].field_0x10 + (ulonglong)local_810.GPUIndex * 8);
        if ((lVar15 == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Sampler != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x1471,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (local_810.bBindlessSamplers == false) {
          local_830 = *(undefined4 *)(lVar15 + 0x68);
          uStack_82c = *(undefined4 *)(lVar15 + 0x6c);
          uStack_828 = *(undefined4 *)(lVar15 + 0x70);
          uStack_824 = *(uint *)(lVar15 + 0x74);
          local_810.LocalSamplers[uVar21 & 0xff].ptr = *(ulong64 *)(lVar15 + 0x68);
          local_810.SamplerVersions[uVar21 & 0xff] = uStack_824;
          local_810.BoundSamplerMask = local_810.BoundSamplerMask | 1L << (uVar21 & 0x3f);
        }
      }
      uVar24 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar24;
      param_12 = param_12 + 1;
    } while (uVar24 < param_11);
  }
  uVar21 = 0;
  pFVar31 = local_888;
  if (param_13 != 0) {
    do {
      if (*(FRHIUnorderedAccessView **)pFVar31 != (FRHIUnorderedAccessView *)0x0) {
        lVar15 = *(longlong *)
                  (&(*(FRHIUnorderedAccessView **)pFVar31)[4].field_0x10 +
                  (ulonglong)local_810.GPUIndex * 8);
        lVar25 = lVar15 + 0x30;
        if (lVar15 == 0) {
          lVar25 = 0;
        }
        if ((lVar25 == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("UAV != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x141c,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (local_810.bBindlessResources == false) {
          if ((*(longlong *)(lVar25 + 0x18) == 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("IsInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                  ,0x103,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          local_820 = *(undefined4 *)(lVar25 + 0x38);
          uStack_81c = *(undefined4 *)(lVar25 + 0x3c);
          uStack_818 = *(undefined4 *)(lVar25 + 0x40);
          uStack_814 = *(uint *)(lVar25 + 0x44);
          local_810.LocalUAVs[uVar21 & 0xff].ptr = *(ulong64 *)(lVar25 + 0x38);
          local_810.UAVVersions[uVar21 & 0xff] = uStack_814;
          local_810.BoundUAVMask = local_810.BoundUAVMask | 1L << (uVar21 & 0x3f);
        }
        pFVar33 = local_810.Binder;
        if ((*(longlong *)(lVar25 + 0x18) == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xff,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FD3D12RayTracingShaderBindingTableInternal::AddReferencedShaderResource
                  (pFVar33->ShaderTable,pFVar33->WorkerIndex,pFVar33->RecordIndex,
                   pFVar33->BindingType,*(FD3D12BaseShaderResource **)(lVar25 + 0x10));
      }
      uVar24 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar24;
      pFVar31 = (FD3D12ExplicitDescriptorCache *)((longlong)pFVar31 + 8);
    } while (uVar24 < param_13);
  }
  pFVar10 = local_890;
  local_898[0] = 0xffffffff;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>
            (&local_810,(FRHIShader *)local_890,local_898,&local_880,(FTracker *)0x0);
  uVar24 = local_8b4;
  if ((pFVar10->_padding_ & 1) == 0) {
LAB_1459eb3b7:
    if (local_878 != (void *)0x0) goto LAB_1459eb3c0;
  }
  else {
    if ((local_8b4 == 0) || (local_878 == (void *)0x0)) {
      bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("InLooseParameterDataSize && InLooseParameterData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x14e0,
                          L"Shader uses global uniform buffer, but the required loose parameter data is not provided."
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      goto LAB_1459eb3b7;
    }
LAB_1459eb3c0:
    if ((pFVar10->_padding_ & 1) != 0) {
      local_870 = 0;
      param_17->bHasLooseParameterData = true;
      FD3D12RayTracingShaderBindingTableInternal::SetLooseParameterData
                (param_17->ShaderTable,param_17->WorkerIndex,param_17->RecordIndex,
                 param_17->BindingType,local_878,uVar24,&local_870);
      local_810.BoundCBVMask = local_810.BoundCBVMask | 1;
      local_810.RemoteCBVs[0] = local_870;
    }
  }
  bVar3 = *(byte *)((longlong)&pFVar10->_padding_ + 2);
  if (bVar3 < 0x41) {
    if (bVar3 == 0x40) {
      uVar21 = 0xffffffffffffffff;
    }
    else {
      uVar21 = (1L << (bVar3 & 0x3f)) - 1;
    }
    if ((uVar21 & local_810.BoundSRVMask) != uVar21) goto LAB_1459eb441;
  }
  else {
LAB_1459eb441:
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(Shader->ResourceCounts.NumSRVs , Bindings.BoundSRVMask)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x14fa,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  bVar3 = *(byte *)((longlong)&pFVar10->_padding_ + 4);
  if (bVar3 < 0x41) {
    if (bVar3 == 0x40) {
      uVar21 = 0xffffffffffffffff;
    }
    else {
      uVar21 = (1L << (bVar3 & 0x3f)) - 1;
    }
    if ((uVar21 & local_810.BoundUAVMask) != uVar21) goto LAB_1459eb498;
  }
  else {
LAB_1459eb498:
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(Shader->ResourceCounts.NumUAVs , Bindings.BoundUAVMask)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x14fb,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  bVar3 = *(byte *)((longlong)&pFVar10->_padding_ + 3);
  if (bVar3 < 0x41) {
    if (bVar3 == 0x40) {
      uVar21 = 0xffffffffffffffff;
    }
    else {
      uVar21 = (1L << (bVar3 & 0x3f)) - 1;
    }
    if ((uVar21 & local_810.BoundCBVMask) != uVar21) goto LAB_1459eb4ef;
  }
  else {
LAB_1459eb4ef:
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(Shader->ResourceCounts.NumCBs , Bindings.BoundCBVMask)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x14fc,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  bVar3 = *(byte *)((longlong)&pFVar10->_padding_ + 1);
  if (bVar3 < 0x41) {
    if (bVar3 == 0x40) {
      uVar21 = 0xffffffffffffffff;
    }
    else {
      uVar21 = (1L << (bVar3 & 0x3f)) - 1;
    }
    if ((uVar21 & local_810.BoundSamplerMask) != uVar21) goto LAB_1459eb546;
  }
  else {
LAB_1459eb546:
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("IsCompleteBinding(Shader->ResourceCounts.NumSamplers, Bindings.BoundSamplerMask)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x14fd,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  bVar3 = *(byte *)((longlong)&pFVar10->_padding_ + 2);
  pFVar31 = param_17->DescriptorCache;
  uVar24 = local_8a8->WorkerIndex;
  pFVar33 = local_8a8;
  local_8b4 = uVar24;
  local_888 = pFVar31;
  if (bVar3 == 0) {
LAB_1459eb712:
    bVar3 = *(byte *)((longlong)&local_890->_padding_ + 4);
    pFVar27 = local_8a0;
    if (bVar3 != 0) {
      uVar29 = 0;
      if ((int)uVar24 < (pFVar31->WorkerData).ArrayNum) {
        uVar29 = ~uVar24 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      pTVar32 = (TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                 *)((pFVar31->WorkerData).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x80);
      FVar16 = FXxHash64::HashBuffer(local_810.UAVVersions,(ulonglong)bVar3 * 4);
      FVar17 = FXxHash64::HashBuffer(local_810.LocalUAVs,(ulonglong)bVar3 * 8);
      uVar21 = FVar17.Hash ^ FVar16.Hash;
      psVar7 = (pTVar32->CurrentData).Distances;
      uVar24 = pTVar32->NumSlotsMinusOne & (uint)uVar21;
      uVar28 = (ulonglong)uVar24;
      cVar19 = '\0';
      if ((psVar7 != (schar *)0x0) && (-1 < psVar7[uVar28])) {
        do {
          if (uVar21 == (pTVar32->CurrentData).Keys[uVar28]) {
            piVar18 = (pTVar32->CurrentData).Values + uVar28;
            goto LAB_1459eb807;
          }
          uVar24 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar24;
          cVar19 = cVar19 + '\x01';
        } while (cVar19 <= psVar7[uVar28]);
      }
      piVar18 = Experimental::TSherwoodHashTable_Private::
                TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
                ::Add(pTVar32,cVar19,(FData *)pTVar32,uVar24,uVar21,(uint)uVar21,-1);
LAB_1459eb807:
      iVar13 = *piVar18;
      if (iVar13 == -1) {
        iVar13 = FD3D12ExplicitDescriptorCache::Allocate
                           (pFVar31,local_810.LocalUAVs,(uint)bVar3,
                            D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,local_8b4);
        *piVar18 = iVar13;
      }
      pFVar27 = local_8a0;
      if (iVar13 < 0) goto LAB_1459ebad9;
      bVar3 = local_8a0->BindSlotMap[0x19];
      if ((bVar3 == 0xff) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlot != 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x151c,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      FD3D12RayTracingLocalResourceBinder::SetRootDescriptorTable
                (pFVar33,(uint)bVar3,
                 (D3D12_GPU_DESCRIPTOR_HANDLE)
                 ((ulonglong)(iVar13 * (pFVar31->ViewHeap).DescriptorSize) +
                 (pFVar31->ViewHeap).GPUBase.ptr));
    }
    pFVar10 = local_890;
    if (*(char *)((longlong)&local_890->_padding_ + 3) != '\0') {
      if ((pFVar27->BindSlotMap[0x16] != 0xff) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("RootSignature->CBVRDTBindSlot(SF_Compute) == 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1532,
                              L"Root CBV descriptor tables are not implemented for ray tracing shaders."
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      uVar24 = FD3D12RootSignature::CBVRDBaseBindSlot(pFVar27,SF_Compute);
      if ((uVar24 == 0xff) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlot != 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1535,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      uVar21 = 0;
      if (*(char *)((longlong)&pFVar10->_padding_ + 3) != '\0') {
        do {
          uVar22 = 0;
          iVar13 = (int)uVar21;
          if ((local_810.BoundCBVMask >> (uVar21 & 0x3f) & 1) != 0) {
            uVar22 = local_810.RemoteCBVs[uVar21];
          }
          pFVar27 = pFVar33->RootSignature;
          local_868 = uVar22;
          if ((0x1f < (byte)uVar24) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                  ,0xde,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          pFVar8 = pFVar33->ShaderTable;
          uVar30 = (ulonglong)
                   (pFVar33->ShaderTableOffset +
                   pFVar8->LocalRecordStride * pFVar33->RecordIndex +
                   ((uint)pFVar27->BindSlotOffsetsInDWORDs[uVar24 & 0xff] + iVar13 * 2) * 4 + 0x20);
          uVar28 = (pFVar8->Data)._padding_;
          if (pFVar33->BindingType == Validation) {
            if ((uVar28 & 1) != 0) {
              uVar28 = (longlong)&(pFVar8->Data)._padding_ + ((longlong)uVar28 >> 0x18);
            }
            if ((*(ulong64 *)(uVar30 + uVar28) != uVar22) &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_8588839787656379078>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                    ,0x53a,"FMemory::Memcmp(CurrentData, InData, InDataSize) == 0"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
          }
          else {
            if ((uVar28 & 1) != 0) {
              uVar28 = (longlong)&(pFVar8->Data)._padding_ + ((longlong)uVar28 >> 0x18);
            }
            *(ulong64 *)(uVar30 + uVar28) = uVar22;
          }
          pFVar6 = local_810.UniformBuffers[uVar21];
          if (pFVar6 != (FD3D12UniformBuffer *)0x0) {
            pFVar27 = pFVar33->RootSignature;
            if ((0x1f < (byte)uVar24) &&
               (bVar11 = FDebug::CheckVerifyFailedImpl2
                                   ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                    ,0xde,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            FD3D12RayTracingShaderBindingTableInternal::AddReferencedUniformBuffer
                      (pFVar33->ShaderTable,pFVar33->WorkerIndex,pFVar33->RecordIndex,
                       pFVar33->ShaderTableOffset,
                       ((uint)pFVar27->BindSlotOffsetsInDWORDs[uVar24 & 0xff] + iVar13 * 2) * 4,
                       pFVar33->BindingType,pFVar6);
          }
          uVar21 = (ulonglong)(iVar13 + 1U);
          pFVar31 = local_888;
        } while (iVar13 + 1U < (uint)*(byte *)((longlong)&pFVar10->_padding_ + 3));
      }
    }
    bVar3 = *(byte *)((longlong)&pFVar10->_padding_ + 1);
    if (bVar3 != 0) {
      iVar13 = FD3D12ExplicitDescriptorCache::AllocateDeduplicated
                         (pFVar31,local_810.SamplerVersions,local_810.LocalSamplers,(uint)bVar3,
                          D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER,local_8b4);
      if (iVar13 < 0) goto LAB_1459ebad9;
      bVar3 = local_8a0->BindSlotMap[0x18];
      if ((bVar3 == 0xff) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlot != 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1552,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      FD3D12RayTracingLocalResourceBinder::SetRootDescriptorTable
                (pFVar33,(uint)bVar3,
                 (D3D12_GPU_DESCRIPTOR_HANDLE)
                 ((ulonglong)(iVar13 * (pFVar31->SamplerHeap).DescriptorSize) +
                 (pFVar31->SamplerHeap).GPUBase.ptr));
    }
    iVar13 = local_810.ReferencedRayTracingScenes.ArrayNum;
    uVar21 = (ulonglong)local_810.ReferencedRayTracingScenes.ArrayNum;
    FVar26 = (ForElementType<FD3D12RayTracingScene_*>)&local_810.ReferencedRayTracingScenes;
    if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
        (ForElementType<FD3D12RayTracingScene_*>)0x0) {
      FVar26 = local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<FD3D12RayTracingScene_*>)((longlong)FVar26 + uVar21 * 8);
    while( true ) {
      if ((uint)uVar21 != iVar13) {
        local_8b8[0] = 0;
        `TCheckedPointerIterator<FD3D12RayTracingScene_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_8b8);
      }
      if (FVar26 == FVar1) break;
      bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x13c0,L"Unexpected RayTracingScene reference in local shader bindings");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      uVar21 = (ulonglong)(uint)local_810.ReferencedRayTracingScenes.ArrayNum;
      FVar26 = (ForElementType<FD3D12RayTracingScene_*>)((longlong)FVar26 + 8);
    }
    bVar11 = true;
  }
  else {
    uVar29 = 0;
    if ((int)uVar24 < (pFVar31->WorkerData).ArrayNum) {
      uVar29 = ~uVar24 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    pTVar32 = (TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
               *)((pFVar31->WorkerData).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x80);
    FVar16 = FXxHash64::HashBuffer(local_810.SRVVersions,(ulonglong)bVar3 * 4);
    FVar17 = FXxHash64::HashBuffer(local_810.LocalSRVs,(ulonglong)bVar3 * 8);
    uVar21 = FVar17.Hash ^ FVar16.Hash;
    psVar7 = (pTVar32->CurrentData).Distances;
    uVar29 = pTVar32->NumSlotsMinusOne & (uint)uVar21;
    uVar28 = (ulonglong)uVar29;
    cVar19 = '\0';
    if ((psVar7 != (schar *)0x0) && (-1 < psVar7[uVar28])) {
      do {
        if (uVar21 == (pTVar32->CurrentData).Keys[uVar28]) {
          piVar18 = (pTVar32->CurrentData).Values + uVar28;
          goto LAB_1459eb677;
        }
        uVar29 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar29;
        cVar19 = cVar19 + '\x01';
      } while (cVar19 <= psVar7[uVar28]);
    }
    piVar18 = Experimental::TSherwoodHashTable_Private::
              TSherwoodHashTable<unsigned___int64,int,FD3D12ExplicitDescriptorCache::TIdentityHash<unsigned___int64>_>
              ::Add(pTVar32,cVar19,(FData *)pTVar32,uVar29,uVar21,(uint)uVar21,-1);
LAB_1459eb677:
    iVar13 = *piVar18;
    if (iVar13 == -1) {
      iVar13 = FD3D12ExplicitDescriptorCache::Allocate
                         (pFVar31,local_810.LocalSRVs,(uint)bVar3,
                          D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,uVar24);
      *piVar18 = iVar13;
    }
    if (-1 < iVar13) {
      bVar3 = local_8a0->BindSlotMap[0x15];
      if ((bVar3 == 0xff) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("BindSlot != 0xFF",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x150c,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      pFVar33 = local_8a8;
      FD3D12RayTracingLocalResourceBinder::SetRootDescriptorTable
                (local_8a8,(uint)bVar3,
                 (D3D12_GPU_DESCRIPTOR_HANDLE)
                 ((ulonglong)(iVar13 * (pFVar31->ViewHeap).DescriptorSize) +
                 (pFVar31->ViewHeap).GPUBase.ptr));
      goto LAB_1459eb712;
    }
LAB_1459ebad9:
    bVar11 = false;
  }
  if (local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData !=
      (ForElementType<FD3D12RayTracingScene_*>)0x0) {
    FMemory::Free((void *)local_810.ReferencedRayTracingScenes.AllocatorInstance.SecondaryData);
  }
  return bVar11;
}

// SetUniformBufferResourcesFromTables<`SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0> @ 1459ebc00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>
          (FBindings *param_1,FRHIShader *param_2,uint *param_3,FRHIUniformBuffer ***param_4,
          FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FRHIUniformBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  FRHIUniformBufferLayout *pFVar5;
  longlong lVar6;
  FRHIUnorderedAccessView *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FString *pFVar16;
  FRHIUnorderedAccessView **ppFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_144 [4];
  FRHIUniformBuffer *local_140;
  uint local_138;
  uint local_134;
  int local_130;
  uint local_12c;
  float local_128;
  uint local_124;
  FString local_120;
  longlong local_110;
  longlong local_108;
  uint local_100;
  TRefCountPtr<FRHIUniformBufferLayout_const_> *local_f8;
  <lambda_3> local_f0;
  FString local_e8;
  <lambda_2> local_d8;
  <lambda_1> local_c0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  
  bVar13 = false;
  bVar10 = false;
  bVar12 = false;
  bVar9 = false;
  local_128 = (float)(double)FApp::CurrentTime;
  local_124 = (uint)param_2->_padding_ & *param_3;
  if (local_124 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar14 = -local_124 & local_124;
    local_100 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> local_100 & 1) == 0; local_100 = local_100 + 1) {
      }
    }
    uVar22 = 0x20;
    if (uVar14 != 0) {
      uVar22 = local_100;
    }
    local_124 = local_124 & local_124 - 1;
    local_138 = uVar22;
    if (((int)param_2->_padding_ <= (int)uVar22) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar20 = (longlong)(int)uVar22;
    pFVar3 = (*param_4)[lVar20];
    local_140 = pFVar3;
    local_110 = lVar20;
    if (pFVar3 == (FRHIUniformBuffer *)0x0) {
      if (((int)uVar22 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar22)) {
        bVar9 = true;
        pFVar16 = ::FString::FString(&local_a0,L"<unknown>");
      }
      else {
        if (((int)uVar22 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar12 = true;
        pFVar16 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.AllocatorInstance.
                                              Data + lVar20 * 8),&local_90);
      }
      pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
      if ((bVar9) &&
         (bVar9 = false, local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if ((bVar12) &&
         (bVar12 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      lVar20 = lVar20 * 4;
    }
    else {
      local_134 = ~uVar22 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar22 < (int)param_2->_padding_) {
        uVar14 = local_134;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_f8 = &pFVar3->Layout;
      pFVar5 = local_f8->Reference;
      lVar20 = lVar20 * 4;
      local_108 = lVar20;
      if (pFVar5->Hash != *(uint *)(lVar20 + param_2->_padding_)) {
        local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.Data.ArrayNum = 0;
        local_120.Data.ArrayMax = 0;
        pFVar19 = (pFVar5->Resources).AllocatorInstance.Data;
        iVar2 = (pFVar5->Resources).ArrayNum;
        pFVar4 = pFVar19 + (longlong)iVar2 * 4;
        while( true ) {
          if ((pFVar5->Resources).ArrayNum != iVar2) {
            local_144[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_144);
          }
          lVar20 = local_110;
          uVar22 = local_134;
          uVar14 = local_138;
          if (pFVar19 == pFVar4) break;
          ::FString::PrintfImpl(&local_e8,L"%s%d");
          uVar14 = local_e8.Data.ArrayNum - 1;
          if (local_e8.Data.ArrayNum == 0) {
            uVar14 = 0;
          }
          ::FString::AppendChars(&local_120,(wchar_t *)local_e8.Data.AllocatorInstance.Data,uVar14);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          pFVar19 = pFVar19 + 4;
        }
        local_130 = (pFVar5->Resources).ArrayNum;
        local_12c = pFVar5->ConstantBufferSize;
        uVar15 = 0;
        if ((int)local_138 < (int)param_2->_padding_) {
          uVar15 = local_134;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((int)uVar14 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar14)) {
          bVar10 = true;
          pFVar16 = ::FString::FString(&local_80,L"<unknown>");
        }
        else {
          if ((uVar22 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar13 = true;
          pFVar16 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.
                                                AllocatorInstance.Data + lVar20 * 8),&local_70);
        }
        pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if ((bVar10) &&
           (bVar10 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if ((bVar13) &&
           (bVar13 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        uVar22 = local_138;
        Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        lVar20 = local_108;
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar3 = local_140;
    local_c0.Tracker = &param_5;
    local_c0.CurrentTimeForTextureTimes = &local_128;
    local_c0.Shader = param_2;
    local_c0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_1>_>
              (local_140,uVar22,(uint *)param_2->_padding_,&local_c0);
    local_d8.Tracker = &param_5;
    local_d8.Shader = param_2;
    local_d8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_2>_>
              (pFVar3,uVar22,(uint *)param_2->_padding_,&local_d8);
    local_f0.Binder = param_1;
    EnumerateUniformBufferResources<FRHIResourceCollection,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_3>_>
              (pFVar3,uVar22,(uint *)param_2->_padding_,&local_f0);
    lVar6 = param_2->_padding_;
    uVar14 = *(uint *)(lVar6 + lVar20);
    pFVar4 = (local_140->ResourceTable).AllocatorInstance.Data;
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar6 + (ulonglong)uVar14 * 4);
      puVar21 = (uint *)(lVar6 + 4 + (ulonglong)uVar14 * 4);
      do {
        lVar20 = *(longlong *)(pFVar4 + ((ulonglong)(uVar15 >> 8) & 0xffff) * 8);
        if (lVar20 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                              ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar20 = 0;
LAB_1459ec29d:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Sampler != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1471,L"");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          lVar20 = *(longlong *)(lVar20 + 0x28 + (ulonglong)param_1->GPUIndex * 8);
          if (lVar20 == 0) goto LAB_1459ec29d;
        }
        if (param_1->bBindlessSamplers == false) {
          local_60 = *(undefined4 *)(lVar20 + 0x68);
          uStack_5c = *(undefined4 *)(lVar20 + 0x6c);
          uStack_58 = *(undefined4 *)(lVar20 + 0x70);
          uStack_54 = *(uint *)(lVar20 + 0x74);
          uVar18 = (ulonglong)uVar15 & 0xff;
          param_1->LocalSamplers[uVar18].ptr = *(ulong64 *)(lVar20 + 0x68);
          param_1->SamplerVersions[uVar18] = uStack_54;
          param_1->BoundSamplerMask = param_1->BoundSamplerMask | 1L << ((ulonglong)uVar15 & 0x3f);
        }
        uVar15 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (uVar15 >> 0x18 == uVar22);
    }
    pFVar4 = (local_140->ResourceTable).AllocatorInstance.Data;
    lVar20 = param_2->_padding_;
    uVar14 = *(uint *)(lVar20 + (longlong)(int)uVar22 * 4);
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar20 + (ulonglong)uVar14 * 4);
      puVar21 = (uint *)(lVar20 + 4 + (ulonglong)uVar14 * 4);
      do {
        pFVar7 = *(FRHIUnorderedAccessView **)(pFVar4 + (ulonglong)(ushort)(uVar15 >> 8) * 8);
        if ((pFVar7 == (FRHIUnorderedAccessView *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_5 != (FTracker *)0x0) {
          EVar1 = param_2->Frequency;
          if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
              (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
            lVar20 = 0x10;
          }
          else {
            lVar20 = 0;
          }
          ppFVar17 = RHIValidation::FTracker::FUAVTracker::operator[]
                               ((FUAVTracker *)
                                ((longlong)&param_5->UAVTrackers[0].UAVs.AllocatorInstance.Data +
                                lVar20),uVar15 & 0xff);
          *ppFVar17 = pFVar7;
        }
        `SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>'::__l2::FBindings::
        SetUAV(param_1,pFVar7,(uchar)uVar15);
        uVar15 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (uVar15 >> 0x18 == uVar22);
    }
    if (local_124 == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// SetUniformBufferResourcesFromTables<`SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0> @ 1459ec490

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

void __cdecl
UE::RHI::Private::
SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>
          (FBindings *param_1,FRHIShader *param_2,uint *param_3,FRHIUniformBuffer ***param_4,
          FTracker *param_5)

{
  EShaderFrequency EVar1;
  int iVar2;
  FRHIUniformBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  FRHIUniformBufferLayout *pFVar5;
  longlong lVar6;
  FRHIUnorderedAccessView *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FString *pFVar16;
  FRHIUnorderedAccessView **ppFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_144 [4];
  FRHIUniformBuffer *local_140;
  uint local_138;
  uint local_134;
  int local_130;
  uint local_12c;
  float local_128;
  uint local_124;
  FString local_120;
  longlong local_110;
  longlong local_108;
  uint local_100;
  TRefCountPtr<FRHIUniformBufferLayout_const_> *local_f8;
  <lambda_3> local_f0;
  FString local_e8;
  <lambda_2> local_d8;
  <lambda_1> local_c0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  
  bVar13 = false;
  bVar10 = false;
  bVar12 = false;
  bVar9 = false;
  local_128 = (float)(double)FApp::CurrentTime;
  local_124 = (uint)param_2->_padding_ & *param_3;
  if (local_124 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    uVar14 = -local_124 & local_124;
    local_100 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> local_100 & 1) == 0; local_100 = local_100 + 1) {
      }
    }
    uVar22 = 0x20;
    if (uVar14 != 0) {
      uVar22 = local_100;
    }
    local_124 = local_124 & local_124 - 1;
    local_138 = uVar22;
    if (((int)param_2->_padding_ <= (int)uVar22) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("BufferIndex < SRT.ResourceTableLayoutHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                            ,0x61,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar20 = (longlong)(int)uVar22;
    pFVar3 = (*param_4)[lVar20];
    local_140 = pFVar3;
    local_110 = lVar20;
    if (pFVar3 == (FRHIUniformBuffer *)0x0) {
      if (((int)uVar22 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar22)) {
        bVar9 = true;
        pFVar16 = ::FString::FString(&local_a0,L"<unknown>");
      }
      else {
        if (((int)uVar22 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar12 = true;
        pFVar16 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.AllocatorInstance.
                                              Data + lVar20 * 8),&local_90);
      }
      pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
      if ((bVar9) &&
         (bVar9 = false, local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if ((bVar12) &&
         (bVar12 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      lVar20 = lVar20 * 4;
    }
    else {
      local_134 = ~uVar22 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar22 < (int)param_2->_padding_) {
        uVar14 = local_134;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_f8 = &pFVar3->Layout;
      pFVar5 = local_f8->Reference;
      lVar20 = lVar20 * 4;
      local_108 = lVar20;
      if (pFVar5->Hash != *(uint *)(lVar20 + param_2->_padding_)) {
        local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.Data.ArrayNum = 0;
        local_120.Data.ArrayMax = 0;
        pFVar19 = (pFVar5->Resources).AllocatorInstance.Data;
        iVar2 = (pFVar5->Resources).ArrayNum;
        pFVar4 = pFVar19 + (longlong)iVar2 * 4;
        while( true ) {
          if ((pFVar5->Resources).ArrayNum != iVar2) {
            local_144[0] = 0;
            `TCheckedPointerIterator<FRHIUniformBufferResource_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_144);
          }
          lVar20 = local_110;
          uVar22 = local_134;
          uVar14 = local_138;
          if (pFVar19 == pFVar4) break;
          ::FString::PrintfImpl(&local_e8,L"%s%d");
          uVar14 = local_e8.Data.ArrayNum - 1;
          if (local_e8.Data.ArrayNum == 0) {
            uVar14 = 0;
          }
          ::FString::AppendChars(&local_120,(wchar_t *)local_e8.Data.AllocatorInstance.Data,uVar14);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          pFVar19 = pFVar19 + 4;
        }
        local_130 = (pFVar5->Resources).ArrayNum;
        local_12c = pFVar5->ConstantBufferSize;
        uVar15 = 0;
        if ((int)local_138 < (int)param_2->_padding_) {
          uVar15 = local_134;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((int)uVar14 < 0) || ((param_2->Debug).UniformBufferNames.ArrayNum <= (int)uVar14)) {
          bVar10 = true;
          pFVar16 = ::FString::FString(&local_80,L"<unknown>");
        }
        else {
          if ((uVar22 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar13 = true;
          pFVar16 = ::FName::ToString((FName *)((param_2->Debug).UniformBufferNames.
                                                AllocatorInstance.Data + lVar20 * 8),&local_70);
        }
        pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if ((bVar10) &&
           (bVar10 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if ((bVar13) &&
           (bVar13 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        uVar22 = local_138;
        Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        lVar20 = local_108;
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar3 = local_140;
    local_c0.Tracker = &param_5;
    local_c0.CurrentTimeForTextureTimes = &local_128;
    local_c0.Shader = param_2;
    local_c0.Binder = param_1;
    EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_1>_>
              (local_140,uVar22,(uint *)param_2->_padding_,&local_c0);
    local_d8.Tracker = &param_5;
    local_d8.Shader = param_2;
    local_d8.Binder = param_1;
    EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_2>_>
              (pFVar3,uVar22,(uint *)param_2->_padding_,&local_d8);
    local_f0.Binder = param_1;
    EnumerateUniformBufferResources<FRHIResourceCollection,_UE::RHI::Private::SetUniformBufferResourcesFromTables<_SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>_::__l2::FBindings_&,FRHIUniformBuffer_*_const_*,unsigned_int,0>_::__l4::<lambda_3>_>
              (pFVar3,uVar22,(uint *)param_2->_padding_,&local_f0);
    lVar6 = param_2->_padding_;
    uVar14 = *(uint *)(lVar6 + lVar20);
    pFVar4 = (local_140->ResourceTable).AllocatorInstance.Data;
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar6 + (ulonglong)uVar14 * 4);
      puVar21 = (uint *)(lVar6 + 4 + (ulonglong)uVar14 * 4);
      do {
        lVar20 = *(longlong *)(pFVar4 + ((ulonglong)(uVar15 >> 8) & 0xffff) * 8);
        if (lVar20 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                              ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar20 = 0;
LAB_1459ecb2d:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Sampler != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1471,L"");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          lVar20 = *(longlong *)(lVar20 + 0x28 + (ulonglong)param_1->GPUIndex * 8);
          if (lVar20 == 0) goto LAB_1459ecb2d;
        }
        if (param_1->bBindlessSamplers == false) {
          local_60 = *(undefined4 *)(lVar20 + 0x68);
          uStack_5c = *(undefined4 *)(lVar20 + 0x6c);
          uStack_58 = *(undefined4 *)(lVar20 + 0x70);
          uStack_54 = *(uint *)(lVar20 + 0x74);
          uVar18 = (ulonglong)uVar15 & 0xff;
          param_1->LocalSamplers[uVar18].ptr = *(ulong64 *)(lVar20 + 0x68);
          param_1->SamplerVersions[uVar18] = uStack_54;
          param_1->BoundSamplerMask = param_1->BoundSamplerMask | 1L << ((ulonglong)uVar15 & 0x3f);
        }
        uVar15 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (uVar15 >> 0x18 == uVar22);
    }
    pFVar4 = (local_140->ResourceTable).AllocatorInstance.Data;
    lVar20 = param_2->_padding_;
    uVar14 = *(uint *)(lVar20 + (longlong)(int)uVar22 * 4);
    if (uVar14 != 0) {
      uVar15 = *(uint *)(lVar20 + (ulonglong)uVar14 * 4);
      puVar21 = (uint *)(lVar20 + 4 + (ulonglong)uVar14 * 4);
      do {
        pFVar7 = *(FRHIUnorderedAccessView **)(pFVar4 + (ulonglong)(ushort)(uVar15 >> 8) * 8);
        if ((pFVar7 == (FRHIUnorderedAccessView *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                                ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_5 != (FTracker *)0x0) {
          EVar1 = param_2->Frequency;
          if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
              (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
            lVar20 = 0x10;
          }
          else {
            lVar20 = 0;
          }
          ppFVar17 = RHIValidation::FTracker::FUAVTracker::operator[]
                               ((FUAVTracker *)
                                ((longlong)&param_5->UAVTrackers[0].UAVs.AllocatorInstance.Data +
                                lVar20),uVar15 & 0xff);
          *ppFVar17 = pFVar7;
        }
        `SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>'::__l2::FBindings::SetUAV
                  (param_1,pFVar7,(uchar)uVar15);
        uVar15 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (uVar15 >> 0x18 == uVar22);
    }
    if (local_124 == 0) {
      *param_3 = 0;
      return;
    }
  } while( true );
}

// StaticGetTypeLayoutDesc<unsigned_char> @ 1459ecd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl StaticGetTypeLayoutDesc<unsigned_char>(void)

{
  if ((DAT_1551675ef & 2) == 0) {
    DAT_1551675ef = DAT_1551675ef | 3;
    _DAT_1551675e0 = 1;
    _DAT_155167590 = L"unsigned char";
    _DAT_1551675a8 = TStaticGetTypeLayoutHelper<unsigned_char>::CallWriteMemoryImage;
    _DAT_1551675b0 = TStaticGetTypeLayoutHelper<unsigned_char>::CallUnfrozenCopy;
    _DAT_1551675b8 = TStaticGetTypeLayoutHelper<unsigned_char>::CallAppendHash;
    _DAT_1551675c0 = TStaticGetTypeLayoutHelper<unsigned_char>::CallGetTargetAlignment;
    _DAT_1551675c8 = TStaticGetTypeLayoutHelper<unsigned_char>::CallToString;
    _DAT_1551675a0 = TStaticGetTypeLayoutHelper<unsigned_char>::CallDestroy;
    _DAT_1551675e8 = 1;
    DAT_1551675ec = 0;
    _DAT_1551675e4 = 1;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned_char>::Do(void)'
          ::__l2::TypeBuffer;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>_> @ 1459ecdd0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>_> @ 1459ecde0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>_> @ 1459ecdf0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>_> @ 1459ece00

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*> @ 1459ece10

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>(FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> @ 1459ece20

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>(FNode **param_1)

{
  return (long64)*param_1;
}

// _Checked_x86_x64_countl_zero<unsigned_int> @ 1459ece30

int __cdecl std::_Checked_x86_x64_countl_zero<unsigned_int>(uint param_1)

{
  int iVar1;
  
  if (4 < __isa_available) {
    return LZCOUNT(param_1);
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0x20;
  }
  return 0x1f - iVar1;
}

// _Countl_zero_bsr<unsigned_int> @ 1459ece60

int __cdecl std::_Countl_zero_bsr<unsigned_int>(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0x20;
  }
  return 0x1f - iVar1;
}

// _Countl_zero_lzcnt<unsigned_int> @ 1459ece80

int __cdecl std::_Countl_zero_lzcnt<unsigned_int>(uint param_1)

{
  return LZCOUNT(param_1);
}

// get<1,TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*>_const_> @ 1459ece90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12Buffer ** __cdecl
get<1,TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*>_const_>
          (TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> *param_1)

{
  return (FD3D12Buffer **)&param_1->field_0x8;
}

// get<1,TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_&> @ 1459ecea0

TRefCountPtr<ID3D12Fence> * __cdecl
get<1,TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_&>
          (TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_> *param_1)

{
  return (TRefCountPtr<ID3D12Fence> *)&param_1->field_0x8;
}

// get<2,TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*>_const_> @ 1459eceb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12Texture ** __cdecl
get<2,TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*>_const_>
          (TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> *param_1)

{
  return (FD3D12Texture **)&param_1->field_0x10;
}

// get<0,TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*>_const_> @ 1459ecec0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12Resource ** __cdecl
get<0,TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*>_const_>
          (TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> *param_1)

{
  return (FD3D12Resource **)param_1;
}

// get<0,TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_&> @ 1459eced0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Queue ** __cdecl
get<0,TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_>_&>
          (TTuple<FD3D12Queue_*,TRefCountPtr<ID3D12Fence>_> *param_1)

{
  return (FD3D12Queue **)param_1;
}

// TArray<`CreateSpecializedStateObjects'::__l2::FRayGenShaderSpecialization,TSizedDefaultAllocator<32>_> @ 1459ecf20

TArray<_void___cdecl_CreateSpecializedStateObjects(ID3D12Device5_*,ID3D12RootSignature_*,unsigned_int,unsigned_int,FD3D12RayTracingShaderLibrary_const_&,TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_>_const_&,TMap<FSHAHash,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>_>_const_&,TArray<TRefCountPtr<ID3D12StateObject>,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_&)_::_2_::FRayGenShaderSpecialization,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<`CreateSpecializedStateObjects'::__l2::FRayGenShaderSpecialization,TSizedDefaultAllocator<32>_>
::
TArray<_CreateSpecializedStateObjects_::__l2::FRayGenShaderSpecialization,TSizedDefaultAllocator<32>_>
          (void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  return this;
}

// AsyncWorkload @ 1459ed350

AsyncWorkload * __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::AsyncWorkload::AsyncWorkload
          (AsyncWorkload *this)

{
  this->SyncPointGeneration = 0;
  this->pMasterSet = (ResidencySet *)0x0;
  this->FenceValueToSignal = 0;
  return this;
}

// ~TArray<`CreateSpecializedStateObjects'::__l2::FRayGenShaderSpecialization,TSizedDefaultAllocator<32>_> @ 1459f60a0

void __thiscall
TArray<`CreateSpecializedStateObjects'::__l2::FRayGenShaderSpecialization,TSizedDefaultAllocator<32>_>
::
~TArray<_CreateSpecializedStateObjects_::__l2::FRayGenShaderSpecialization,TSizedDefaultAllocator<32>_>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0> @ 1459f6290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0> @ 1459f62b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,1,1> @ 1459f62d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 1459f6420

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
                 ::_vftable_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
                 ::_vftable_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// operator() @ 1459f9ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
<lambda_112>::operator()
          (<lambda_112> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  wchar_t wVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  wchar_t *_Str;
  EDumpRayTracingGeometryMode EVar9;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  FBufferedOutputDevice local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  EVar9 = Top;
  iVar5 = 0x32;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  if (param_1->ArrayNum != 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    _Str = L"";
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pFVar1;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar8,L"all");
    if (iVar5 == 0) {
      EVar9 = All;
      iVar5 = -1;
    }
    else {
      if ((param_1->ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)pFVar1;
      }
      wVar4 = *pwVar8;
      if ((wVar4 == L'-') || (wVar4 == L'+')) {
        pwVar8 = pwVar8 + 1;
        wVar4 = *pwVar8;
      }
      bVar3 = false;
      if (wVar4 != L'\0') {
        wVar4 = *pwVar8;
        do {
          iVar5 = 0x32;
          if (wVar4 == L'.') {
            EVar9 = Top;
            if (bVar3) goto LAB_1459fa05e;
            bVar3 = true;
          }
          else {
            iVar6 = iswdigit(wVar4);
            EVar9 = Top;
            if (iVar6 == 0) goto LAB_1459fa05e;
          }
          wVar4 = pwVar8[1];
          pwVar8 = pwVar8 + 1;
        } while (wVar4 != L'\0');
      }
      if ((param_1->ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) != 0) {
        _Str = *(wchar_t **)pFVar1;
      }
      iVar5 = _wtoi(_Str);
      EVar9 = Top;
    }
LAB_1459fa05e:
    if (1 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      pFVar7 = pFVar1 + 0x10;
      if ((FScriptContainerElement *)&local_a8 != pFVar7) {
        iVar6 = *(int *)(pFVar1 + 0x18);
        _Src = *(void **)pFVar7;
        local_a8.Data.ArrayNum = iVar6;
        if (((iVar6 != 0) || (local_a8.Data.ArrayMax != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar6,local_a8.Data.ArrayMax,(ForAnyElementType *)&local_a8,iVar6,
                       &local_a8.Data.ArrayMax), iVar6 != 0)) {
          memcpy(local_a8.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
        }
      }
    }
  }
  FBufferedOutputDevice::FBufferedOutputDevice(&local_98);
  DumpRayTracingGeometries(EVar9,iVar5,&local_a8,false,&local_98);
  FBufferedOutputDevice::RedirectTo(&local_98,param_3);
  FBufferedOutputDevice::~FBufferedOutputDevice(&local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1459fb750

bool __thiscall
equality_pipeline_state_desc<FD3D12LowLevelGraphicsPipelineStateDesc>::operator()
          (equality_pipeline_state_desc<FD3D12LowLevelGraphicsPipelineStateDesc> *this,
          FD3D12LowLevelGraphicsPipelineStateDesc *param_1,
          FD3D12LowLevelGraphicsPipelineStateDesc *param_2)

{
  D3D12_INPUT_ELEMENT_DESC *pDVar1;
  D3D12_INPUT_ELEMENT_DESC *pDVar2;
  uint uVar3;
  uint uVar4;
  D3D12_INPUT_ELEMENT_DESC *pDVar5;
  D3D12_INPUT_ELEMENT_DESC *pDVar6;
  int iVar7;
  D3D12_RT_FORMAT_ARRAY *pDVar8;
  uint uVar9;
  uint uVar10;
  
  if (((((((param_1->Desc).PS.BytecodeLength == (param_2->Desc).PS.BytecodeLength) &&
         ((param_1->Desc).VS.BytecodeLength == (param_2->Desc).VS.BytecodeLength)) &&
        ((param_1->Desc).MS.BytecodeLength == (param_2->Desc).MS.BytecodeLength)) &&
       ((((param_1->Desc).AS.BytecodeLength == (param_2->Desc).AS.BytecodeLength &&
         ((param_1->Desc).GS.BytecodeLength == (param_2->Desc).GS.BytecodeLength)) &&
        ((uVar3 = (param_1->Desc).InputLayout.NumElements,
         uVar3 == (param_2->Desc).InputLayout.NumElements &&
         ((uVar4 = (param_1->Desc).RTFormatArray.NumRenderTargets,
          uVar4 == (param_2->Desc).RTFormatArray.NumRenderTargets &&
          ((param_1->Desc).DSVFormat == (param_2->Desc).DSVFormat)))))))) &&
      (((((param_1->Desc).PrimitiveTopologyType == (param_2->Desc).PrimitiveTopologyType &&
         ((((param_1->Desc).Flags == (param_2->Desc).Flags &&
           ((param_1->Desc).pRootSignature == (param_2->Desc).pRootSignature)) &&
          (iVar7 = memcmp(&(param_1->Desc).BlendState,&(param_2->Desc).BlendState,0x148), iVar7 == 0
          )))) && ((((param_1->Desc).SampleMask == (param_2->Desc).SampleMask &&
                    (iVar7 = memcmp(&(param_1->Desc).RasterizerState,
                                    &(param_2->Desc).RasterizerState,0x2c), iVar7 == 0)) &&
                   ((iVar7 = memcmp(&(param_1->Desc).DepthStencilState,
                                    &(param_2->Desc).DepthStencilState,0x38), iVar7 == 0 &&
                    (((param_1->Desc).IBStripCutValue == (param_2->Desc).IBStripCutValue &&
                     ((param_1->Desc).NodeMask == (param_2->Desc).NodeMask)))))))) &&
       ((param_1->Desc).SampleDesc.Count == (param_2->Desc).SampleDesc.Count)))) &&
     ((param_1->Desc).SampleDesc.Quality == (param_2->Desc).SampleDesc.Quality)) {
    uVar10 = 0;
    uVar9 = 0;
    if (uVar4 != 0) {
      pDVar8 = &(param_2->Desc).RTFormatArray;
      do {
        if (*(DXGI_FORMAT *)((longlong)pDVar8 + ((longlong)param_1 - (longlong)param_2)) !=
            pDVar8->RTFormats[0]) {
          return false;
        }
        uVar9 = uVar9 + 1;
        pDVar8 = (D3D12_RT_FORMAT_ARRAY *)(pDVar8->RTFormats + 1);
      } while (uVar9 < uVar4);
    }
    if ((((((param_1->VSHash).Hash[0] == (param_2->VSHash).Hash[0]) &&
          ((param_1->VSHash).Hash[1] == (param_2->VSHash).Hash[1])) &&
         ((param_1->MSHash).Hash[0] == (param_2->MSHash).Hash[0])) &&
        (((param_1->MSHash).Hash[1] == (param_2->MSHash).Hash[1] &&
         ((param_1->ASHash).Hash[0] == (param_2->ASHash).Hash[0])))) &&
       (((((param_1->ASHash).Hash[1] == (param_2->ASHash).Hash[1] &&
          (((param_1->PSHash).Hash[0] == (param_2->PSHash).Hash[0] &&
           ((param_1->PSHash).Hash[1] == (param_2->PSHash).Hash[1])))) &&
         ((param_1->GSHash).Hash[0] == (param_2->GSHash).Hash[0])) &&
        ((param_1->GSHash).Hash[1] == (param_2->GSHash).Hash[1])))) {
      pDVar5 = (param_1->Desc).InputLayout.pInputElementDescs;
      pDVar6 = (param_2->Desc).InputLayout.pInputElementDescs;
      if ((pDVar5 != pDVar6) && (uVar3 != 0)) {
        do {
          pDVar1 = pDVar6 + uVar10;
          pDVar2 = pDVar5 + uVar10;
          if (pDVar2->SemanticIndex != pDVar1->SemanticIndex) {
            return false;
          }
          if (pDVar2->Format != pDVar1->Format) {
            return false;
          }
          if (pDVar2->InputSlot != pDVar1->InputSlot) {
            return false;
          }
          if (pDVar2->AlignedByteOffset != pDVar1->AlignedByteOffset) {
            return false;
          }
          if (pDVar2->InputSlotClass != pDVar1->InputSlotClass) {
            return false;
          }
          if (pDVar2->InstanceDataStepRate != pDVar1->InstanceDataStepRate) {
            return false;
          }
          if ((pDVar2->SemanticName != pDVar1->SemanticName) &&
             (iVar7 = strcmp(pDVar2->SemanticName,pDVar1->SemanticName), iVar7 != 0)) {
            return false;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar3);
      }
      if ((((param_1->VSExtensions == param_2->VSExtensions) &&
           (param_1->MSExtensions == param_2->MSExtensions)) &&
          (param_1->ASExtensions == param_2->ASExtensions)) &&
         (param_1->PSExtensions == param_2->PSExtensions)) {
        return param_1->GSExtensions == param_2->GSExtensions;
      }
    }
  }
  return false;
}

// `default_constructor_closure' @ 1459fc080

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TSharedPtr<FD3D12ShaderResourceView,1>::_default_constructor_closure_
          (TSharedPtr<FD3D12ShaderResourceView,1> *this)

{
  this->Object = (FD3D12ShaderResourceView *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return;
}

// `scalar_deleting_destructor' @ 1459fc090

void * __thiscall
TDoubleLinkedList<unsigned_int>::_scalar_deleting_destructor_
          (TDoubleLinkedList<unsigned_int> *this,uint param_1)

{
  ~TDoubleLinkedList<unsigned_int>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc0d0

void * __thiscall
TDoubleLinkedList<FD3D12OfflineHeapFreeRange>::_scalar_deleting_destructor_
          (TDoubleLinkedList<FD3D12OfflineHeapFreeRange> *this,uint param_1)

{
  ~TDoubleLinkedList<FD3D12OfflineHeapFreeRange>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc1d0

void * __thiscall
TGraphTask<FD3D12RayTracingPipelineCache::FShaderCompileTask>::_scalar_deleting_destructor_
          (TGraphTask<FD3D12RayTracingPipelineCache::FShaderCompileTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc230

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FD3D12ShaderResourceView,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FD3D12ShaderResourceView,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc270

void * __thiscall
TResourceArray<unsigned_char,64>::_scalar_deleting_destructor_
          (TResourceArray<unsigned_char,64> *this,uint param_1)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this->_padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc2c0

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
FD3D12ComputePipelineState::_scalar_deleting_destructor_
          (FD3D12ComputePipelineState *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  FD3D12Adapter *pFVar9;
  
  this->_padding_ = (longlong)&___7FD3D12ComputePipelineState__6B_;
  bVar7 = PipelineStateCache::IsPSOPrecachingEnabled();
  if ((((!bVar7) || (GLowLevelCacheKeepPrecachedPSOs != false)) &&
      (GLowLevelCacheKeepUsedPSOs != false)) ||
     (puVar3 = (undefined8 *)this->_padding_, puVar3 == (undefined8 *)0x0)) goto LAB_1459fc3ad;
  piVar1 = (int *)(puVar3 + 1);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
LAB_1459fc339:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                       ,0x1e6,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar4)();
      return pvVar8;
    }
  }
  else if (iVar2 == 1) goto LAB_1459fc339;
  bVar7 = this->bPSOPrecache;
  if ((bVar7 == false) || (GLowLevelCacheKeepPrecachedPSOs != false)) {
    bVar5 = false;
    bVar6 = false;
    if ((bVar7 != false) || (GLowLevelCacheKeepUsedPSOs != false)) goto LAB_1459fc373;
    bVar7 = true;
  }
  else {
    bVar6 = true;
LAB_1459fc373:
    bVar5 = bVar6;
    bVar7 = false;
  }
  if ((iVar2 == 2) && ((bVar7 || (bVar5)))) {
    pFVar9 = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
    FD3D12PipelineStateCacheBase::RemoveFromLowLevelCache
              ((FD3D12PipelineStateCacheBase *)&pFVar9->PipelineStateCache,
               (FD3D12PipelineState *)this->_padding_,(FD3D12ComputeShader *)this->_padding_,
               (FD3D12RootSignature *)this->_padding_);
  }
LAB_1459fc3ad:
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12ContextCopy::_scalar_deleting_destructor_(FD3D12ContextCopy *this,uint param_1)

{
  FD3D12ContextCommon::~FD3D12ContextCommon((FD3D12ContextCommon *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc440

void * __thiscall
FD3D12DescriptorHeap::_scalar_deleting_destructor_(FD3D12DescriptorHeap *this,uint param_1)

{
  ~FD3D12DescriptorHeap(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc480

void * __thiscall
FD3D12EnhancedBarriersForContext::_scalar_deleting_destructor_
          (FD3D12EnhancedBarriersForContext *this,uint param_1)

{
  FD3D12EnhancedBarriersBatcher *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FD3D12EnhancedBarriersForContext__6B_;
  pFVar1 = (this->Batcher).Ptr;
  if (pFVar1 != (FD3D12EnhancedBarriersBatcher *)0x0) {
    pFVar2 = (pFVar1->GlobalBarriers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->BufferBarriers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->TextureBarriers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->BarrierGroups).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x40);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc520

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall FD3D12GPUFence::_scalar_deleting_destructor_(FD3D12GPUFence *this,uint param_1)

{
  ForElementType<TRefCountPtr<FD3D12SyncPoint>_> FVar1;
  
  FVar1 = (this->SyncPoints).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    FVar1 = (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)&this->SyncPoints;
  }
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
            ((TRefCountPtr<FD3D12SyncPoint> *)FVar1,(this->SyncPoints).ArrayNum);
  FVar1 = (this->SyncPoints).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TRefCountPtr<FD3D12SyncPoint>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void * __thiscall
FD3D12GraphicsPipelineState::_scalar_deleting_destructor_
          (FD3D12GraphicsPipelineState *this,uint param_1)

{
  ~FD3D12GraphicsPipelineState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc5d0

void * __thiscall
FD3D12LegacyBarriersForContext::_scalar_deleting_destructor_
          (FD3D12LegacyBarriersForContext *this,uint param_1)

{
  FD3D12LegacyBarriersBatcher *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FD3D12LegacyBarriersForContext__6B_;
  pFVar1 = (this->Batcher).Ptr;
  if (pFVar1 != (FD3D12LegacyBarriersBatcher *)0x0) {
    pFVar2 = (pFVar1->Barriers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc640

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12MemoryPool::_scalar_deleting_destructor_(FD3D12MemoryPool *this,uint param_1)

{
  longlong *plVar1;
  FD3D12Heap *pFVar2;
  FD3D12Resource *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  
  this->_padding_ = (longlong)&___7FD3D12MemoryPool__6B_;
  pFVar2 = (this->BackingHeap).Reference;
  if (pFVar2 != (FD3D12Heap *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->BackingResource).Reference;
  if (pFVar3 != (FD3D12Resource *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar4 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FRHIMemoryPool::~FRHIMemoryPool((FRHIMemoryPool *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc700

void * __thiscall
FD3D12PipelineState::_scalar_deleting_destructor_(FD3D12PipelineState *this,uint param_1)

{
  ~FD3D12PipelineState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc740

void * __thiscall
FD3D12PipelineStateCacheBase::_scalar_deleting_destructor_
          (FD3D12PipelineStateCacheBase *this,uint param_1)

{
  ~FD3D12PipelineStateCacheBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc780

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12PoolAllocator::_scalar_deleting_destructor_(FD3D12PoolAllocator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIPoolAllocator__;
  this->_padding_ = (longlong)&_vftable__for__ID3D12ResourceAllocator__;
  FRHIPoolAllocator::Destroy((FRHIPoolAllocator *)this);
  pFVar1 = (this->AllocationDataPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingCopyOps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameFencedOperations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRHIPoolAllocator::~FRHIPoolAllocator((FRHIPoolAllocator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc820

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingGeometry::_scalar_deleting_destructor_(FD3D12RayTracingGeometry *this,uint param_1)

{
  ~FD3D12RayTracingGeometry(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc860

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingPipelineState::_scalar_deleting_destructor_
          (FD3D12RayTracingPipelineState *this,uint param_1)

{
  ~FD3D12RayTracingPipelineState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc8a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingScene::_scalar_deleting_destructor_(FD3D12RayTracingScene *this,uint param_1)

{
  ~FD3D12RayTracingScene(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fc8e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingShaderBindingTable::_scalar_deleting_destructor_
          (FD3D12RayTracingShaderBindingTable *this,uint param_1)

{
  FD3D12RayTracingShaderBindingTableInternal *this_00;
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedSBT> FVar3;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FD3D12RayTracingShaderBindingTable *pFVar4;
  FName local_res8;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FD3D12RayTracingShaderBindingTable__6B_;
  FVar3 = StatPtr_STAT_D3D12RayTracingAllocatedSBT;
  for (pFVar4 = (FD3D12RayTracingShaderBindingTable *)this->ShaderTablesPerGPU;
      StatPtr_STAT_D3D12RayTracingAllocatedSBT = FVar3, pFVar4 != this + 1;
      pFVar4 = (FD3D12RayTracingShaderBindingTable *)&pFVar4->_padding_) {
    this_00 = (FD3D12RayTracingShaderBindingTableInternal *)pFVar4->_padding_;
    if (this_00 != (FD3D12RayTracingShaderBindingTableInternal *)0x0) {
      FD3D12RayTracingShaderBindingTableInternal::~FD3D12RayTracingShaderBindingTableInternal
                (this_00);
      ::operator_delete(this_00,0x740,0x40);
    }
    pFVar4->_padding_ = 0;
    FVar3 = StatPtr_STAT_D3D12RayTracingAllocatedSBT;
  }
  if (FVar3 == (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedSBT>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_D3D12RayTracingAllocatedSBT");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingAllocatedSBT>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingAllocatedSBT,
                       *pFVar2,L"Allocated shader binding tables","STATGROUP_D3D12RayTracing",
                       "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_01,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_01->ScopeCount == 0) {
      FThreadStats::Flush(this_01,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_01,false,false);
    }
  }
  RHIValidation::FShaderBindingTable::~FShaderBindingTable((FShaderBindingTable *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fcb00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12RenderQuery::_scalar_deleting_destructor_(FD3D12RenderQuery *this,uint param_1)

{
  longlong *plVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  ulong64 *puVar3;
  FD3D12SyncPoint *pFVar4;
  longlong lVar5;
  FD3D12DynamicRHI *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  this->_padding_ = (longlong)&___7FD3D12RenderQuery__6B_;
  pFVar6 = FD3D12DynamicRHI::SingleD3DRHI;
  lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar7 = (pFVar6->ObjectsToDelete).ArrayNum;
    piVar2 = &(pFVar6->ObjectsToDelete).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar6->ObjectsToDelete).AllocatorInstance,piVar2);
    }
    (pFVar6->ObjectsToDelete).ArrayNum = iVar7 + 1;
    puVar3 = this->Result;
    pFVar8 = (pFVar6->ObjectsToDelete).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
    *(undefined4 *)pFVar8 = 6;
    *(ulong64 **)(pFVar8 + 8) = puVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->Result = (ulong64 *)0x0;
    pFVar4 = (this->SyncPoint).Reference;
    if (pFVar4 != (FD3D12SyncPoint *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
    FD3D12LinkedAdapterObject<FD3D12RenderQuery>::~FD3D12LinkedAdapterObject<FD3D12RenderQuery>
              ((FD3D12LinkedAdapterObject<FD3D12RenderQuery> *)&this->_padding_);
    FRHIResource::~FRHIResource((FRHIResource *)this);
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x98);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// `scalar_deleting_destructor' @ 1459fcc20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12StagingBuffer::_scalar_deleting_destructor_(FD3D12StagingBuffer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FD3D12StagingBuffer__6B_;
  FD3D12ResourceLocation::Clear(&this->ResourceLocation);
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&this->ResourceLocation);
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fcc90

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_::__l2::FTracedTask,int>
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fcda0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRHIRayTracingAccelerationStructure::_scalar_deleting_destructor_
          (FRHIRayTracingAccelerationStructure *this,uint param_1)

{
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fcdf0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRHIRayTracingGeometry::_scalar_deleting_destructor_(FRHIRayTracingGeometry *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FRHIBuffer *this_00;
  
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)(this->Initializer).Segments.AllocatorInstance.Data,
             (this->Initializer).Segments.ArrayNum);
  pFVar1 = (this->Initializer).Segments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->Initializer).IndexBuffer.Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fce70

void * __thiscall
FRHIRayTracingPipelineState::_scalar_deleting_destructor_
          (FRHIRayTracingPipelineState *this,uint param_1)

{
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fcee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRHIRayTracingScene::_scalar_deleting_destructor_(FRHIRayTracingScene *this,uint param_1)

{
  RHIValidation::FResource::~FResource((FResource *)&this->field_0x18);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fcf30

void * __thiscall
FRHIShaderBindingTable::_scalar_deleting_destructor_(FRHIShaderBindingTable *this,uint param_1)

{
  RHIValidation::FShaderBindingTable::~FShaderBindingTable((FShaderBindingTable *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fcf80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateRayTracingGeometryListener::
_scalar_deleting_destructor_(FRecordUpdateRayTracingGeometryListener *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fcfb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateShaderResourceRenameListener::
_scalar_deleting_destructor_(FRecordUpdateShaderResourceRenameListener *this,uint param_1)

{
  FD3D12BaseShaderResource *pFVar1;
  
  pFVar1 = (this->ShaderResource).Reference;
  if (pFVar1 != (FD3D12BaseShaderResource *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fd000

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener::
_scalar_deleting_destructor_(FRecordUpdateTextureReferenceReplaceListener *this,uint param_1)

{
  FD3D12RHITextureReference *this_00;
  
  this_00 = (this->TextureReference).Reference;
  if (this_00 != (FD3D12RHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fd050

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void * __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateUniformBufferListener::
_scalar_deleting_destructor_(FRecordUpdateUniformBufferListener *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fd080

void * __thiscall
FResourceArrayInterface::_scalar_deleting_destructor_(FResourceArrayInterface *this,uint param_1)

{
  *this = (FResourceArrayInterface)&___7FResourceArrayUploadInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1459fd0c0

void * __thiscall
ID3D12BarriersForContext::_scalar_deleting_destructor_(ID3D12BarriersForContext *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AccessIsCompatibleWithQueue @ 1459fd0f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */

bool __cdecl AccessIsCompatibleWithQueue(D3D12_BARRIER_ACCESS param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == D3D12_BARRIER_ACCESS_NO_ACCESS) {
    return true;
  }
  if (param_2 != Graphics) {
    if ((param_2 != AsyncCompute) && (param_2 != All)) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                         ,0x37d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      return false;
    }
    return (param_1 &
           (D3D12_BARRIER_ACCESS_NO_ACCESS|D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE|
            D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
            D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ|
            D3D12_BARRIER_ACCESS_RESOLVE_SOURCE|D3D12_BARRIER_ACCESS_COPY_SOURCE|
            D3D12_BARRIER_ACCESS_COPY_DEST|D3D12_BARRIER_ACCESS_INDIRECT_ARGUMENT|
            D3D12_BARRIER_ACCESS_SHADER_RESOURCE|D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ|
            D3D12_BARRIER_ACCESS_UNORDERED_ACCESS|D3D12_BARRIER_ACCESS_CONSTANT_BUFFER)) == param_1;
  }
  return (param_1 &
         (D3D12_BARRIER_ACCESS_NO_ACCESS|D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE|
          D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
          D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ|
          D3D12_BARRIER_ACCESS_RESOLVE_SOURCE|D3D12_BARRIER_ACCESS_RESOLVE_DEST|
          D3D12_BARRIER_ACCESS_COPY_SOURCE|D3D12_BARRIER_ACCESS_COPY_DEST|
          D3D12_BARRIER_ACCESS_INDIRECT_ARGUMENT|D3D12_BARRIER_ACCESS_STREAM_OUTPUT|
          D3D12_BARRIER_ACCESS_SHADER_RESOURCE|D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ|
          D3D12_BARRIER_ACCESS_DEPTH_STENCIL_WRITE|D3D12_BARRIER_ACCESS_UNORDERED_ACCESS|
          D3D12_BARRIER_ACCESS_RENDER_TARGET|D3D12_BARRIER_ACCESS_INDEX_BUFFER|
          D3D12_BARRIER_ACCESS_CONSTANT_BUFFER|D3D12_BARRIER_ACCESS_VERTEX_BUFFER)) == param_1;
}

// AsyncThreadStart @ 145a03fc0

ulong __cdecl D3DX12Residency::Internal::ResidencyManagerInternal::AsyncThreadStart(void *param_1)

{
  AsyncWorkload *pAVar1;
  ulonglong uVar2;
  BOOL BVar3;
  
  do {
    if (*(longlong *)((longlong)param_1 + 0x58) != *(longlong *)((longlong)param_1 + 0x60)) {
      uVar2 = *(ulonglong *)((longlong)param_1 + 0x58);
      *(longlong *)((longlong)param_1 + 0x58) = *(longlong *)((longlong)param_1 + 0x58) + 1;
      pAVar1 = (AsyncWorkload *)
               (*(longlong *)((longlong)param_1 + 0x10) +
               (uVar2 % *(ulonglong *)((longlong)param_1 + 8)) * 0x18);
      while (pAVar1 != (AsyncWorkload *)0x0) {
        ProcessPagingWork(param_1,pAVar1);
        BVar3 = SetEvent(*(HANDLE *)((longlong)param_1 + 0xc0));
        if (BVar3 == 0) {
          GetLastError();
        }
        if (*(longlong *)((longlong)param_1 + 0x58) == *(longlong *)((longlong)param_1 + 0x60))
        break;
        uVar2 = *(ulonglong *)((longlong)param_1 + 0x58);
        *(longlong *)((longlong)param_1 + 0x58) = *(longlong *)((longlong)param_1 + 0x58) + 1;
        pAVar1 = (AsyncWorkload *)
                 (*(longlong *)((longlong)param_1 + 0x10) +
                 (uVar2 % *(ulonglong *)((longlong)param_1 + 8)) * 0x18);
      }
    }
    WaitForSingleObject(*(HANDLE *)((longlong)param_1 + 0x18),0xffffffff);
    BVar3 = ResetEvent(*(HANDLE *)((longlong)param_1 + 0x18));
    if (BVar3 == 0) {
      GetLastError();
    }
    if (*(char *)((longlong)param_1 + 0x50) != '\0') {
      return 0;
    }
  } while( true );
}

// BuildVARangeTable @ 145a05450

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

VARangeCollection * __cdecl
BuildVARangeTable(VARangeCollection *__return_storage_ptr__,FD3D12CommandContext *param_1,
                 TArrayView<FRHITransition_const_*,int> *param_2)

{
  FRHITransition **ppFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  VARangeCollection *pVVar7;
  ulonglong uVar8;
  FRHITransitionInfo *pFVar9;
  FRHITransition **ppFVar10;
  FRHITransitionInfo *pFVar11;
  undefined1 local_res8 [8];
  ulonglong local_68;
  ulonglong uStack_60;
  TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> local_58;
  
  ppFVar10 = param_2->DataPtr;
  (__return_storage_ptr__->VARanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->VARanges).ArrayNum = 0;
  (__return_storage_ptr__->VARanges).ArrayMax = 0;
  ppFVar1 = ppFVar10 + param_2->ArrayNum;
  do {
    if (ppFVar10 == ppFVar1) {
      return __return_storage_ptr__;
    }
    uVar8 = (ulonglong)(&(*ppFVar10)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
            ~(GRHITransitionPrivateData_AlignInBytes - 1);
    pFVar9 = (FRHITransitionInfo *)(uVar8 + 8);
    iVar2 = *(int *)(uVar8 + 0xd0);
    if (*(FRHITransitionInfo **)(uVar8 + 200) != (FRHITransitionInfo *)0x0) {
      pFVar9 = *(FRHITransitionInfo **)(uVar8 + 200);
    }
    pFVar11 = pFVar9 + iVar2;
    while( true ) {
      if (*(int *)(uVar8 + 0xd0) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar11) break;
      if (((pFVar9->AccessBefore == Discard) && (pFVar9->AccessAfter != Discard)) &&
         (GetResourceBufferAndTexture(&local_58,param_1,pFVar9), local_58._16_8_ != 0)) {
        local_68 = *(ulonglong *)(local_58._16_8_ + 0x1d8);
        uStack_60 = *(longlong *)(local_58._16_8_ + 0x1e8) + local_68;
        if ((uStack_60 < local_68) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("InVARange.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                               ,0x9c7,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pVVar7 = (VARangeCollection *)(*pcVar4)();
          return pVVar7;
        }
        pFVar3 = (__return_storage_ptr__->VARanges).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar3 + (longlong)(__return_storage_ptr__->VARanges).ArrayMax * 0x10)) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pVVar7 = (VARangeCollection *)(*pcVar4)();
          return pVVar7;
        }
        iVar6 = (__return_storage_ptr__->VARanges).ArrayNum;
        if (iVar6 == (__return_storage_ptr__->VARanges).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)__return_storage_ptr__,
                             &(__return_storage_ptr__->VARanges).ArrayMax);
        }
        (__return_storage_ptr__->VARanges).ArrayNum = iVar6 + 1;
        pFVar3 = (__return_storage_ptr__->VARanges).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(ulonglong *)pFVar3 = local_68;
        *(ulonglong *)(pFVar3 + 8) = uStack_60;
      }
      pFVar9 = pFVar9 + 1;
    }
    ppFVar10 = ppFVar10 + 1;
  } while( true );
}

// ChooseIntermediateBarrierValues @ 145a05bf0

/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FD3D12BarrierValues * __cdecl
ChooseIntermediateBarrierValues
          (FD3D12BarrierValues *__return_storage_ptr__,D3D12_BARRIER_SYNC param_1,
          D3D12_BARRIER_SYNC param_2,D3D12_BARRIER_ACCESS param_3,D3D12_BARRIER_ACCESS param_4,
          D3D12_BARRIER_LAYOUT param_5,D3D12_BARRIER_LAYOUT param_6,ERHIPipeline param_7,
          ERHIPipeline param_8)

{
  code *pcVar1;
  bool bVar2;
  D3D12_BARRIER_SYNC DVar3;
  D3D12_BARRIER_ACCESS DVar4;
  D3D12_BARRIER_LAYOUT DVar5;
  FD3D12BarrierValues *pFVar6;
  
  if ((param_7 == None) || ((param_7 & param_7 - Graphics) != None)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("EnumHasOneFlag(InPipeBefore)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0xa17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FD3D12BarrierValues *)(*pcVar1)();
      return pFVar6;
    }
  }
  bVar2 = AccessIsCompatibleWithQueue(param_4,param_7);
  if (bVar2) {
    bVar2 = LayoutIsCompatibleWithQueue(param_6,param_7);
    if (bVar2) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!AccessIsCompatibleWithQueue(InAccessAfter, InPipeBefore) || !LayoutIsCompatibleWithQueue(InLayoutAfter, InPipeBefore)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                         ,0xa19,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FD3D12BarrierValues *)(*pcVar1)();
        return pFVar6;
      }
    }
  }
  bVar2 = LayoutIsCompatibleWithQueue(param_5,param_8);
  if (bVar2) {
    bVar2 = AccessIsCompatibleWithQueue(param_3,param_8);
    if (bVar2) {
      bVar2 = LayoutIsCompatibleWithQueue(param_6,param_7);
      if (bVar2) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!AccessIsCompatibleWithQueue(InAccessBefore, InPipeAfter) || !LayoutIsCompatibleWithQueue(InLayoutAfter, InPipeBefore)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0xa1e,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FD3D12BarrierValues *)(*pcVar1)();
          return pFVar6;
        }
      }
    }
    DVar3 = FilterToQueueCompatibleSync(param_1,param_8);
    __return_storage_ptr__->Sync = DVar3;
    DVar4 = FilterToQueueCompatibleAccess(param_3,param_8);
    __return_storage_ptr__->Access = DVar4;
    __return_storage_ptr__->Layout = param_5;
  }
  else {
    bVar2 = LayoutIsCompatibleWithQueue(param_6,param_7);
    if (bVar2) {
      bVar2 = LayoutIsCompatibleWithQueue(param_5,param_8);
      if (bVar2) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!LayoutIsCompatibleWithQueue(InLayoutAfter, InPipeBefore) || !LayoutIsCompatibleWithQueue(InLayoutBefore, InPipeAfter)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0xa2c,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FD3D12BarrierValues *)(*pcVar1)();
          return pFVar6;
        }
      }
    }
    DVar5 = GetQueueAgnosticVersionOfLayout(param_6);
    bVar2 = LayoutIsCompatibleWithQueue(DVar5,param_7);
    if (bVar2) {
      if (DVar5 == param_6) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("QueueAgnosticLayoutAfter != InLayoutAfter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0xa32,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FD3D12BarrierValues *)(*pcVar1)();
          return pFVar6;
        }
      }
      DVar3 = FilterToQueueCompatibleSync(param_2,All);
      __return_storage_ptr__->Sync = DVar3;
      DVar4 = FilterToQueueCompatibleAccess(param_4,All);
      __return_storage_ptr__->Access = DVar4;
      __return_storage_ptr__->Layout = DVar5;
    }
    else {
      DVar5 = GetQueueAgnosticVersionOfLayout(param_5);
      bVar2 = LayoutIsCompatibleWithQueue(DVar5,param_8);
      if (bVar2) {
        if (DVar5 == param_5) {
          bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("QueueAgnosticLayoutBefore != InLayoutBefore",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                             ,0xa3f,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FD3D12BarrierValues *)(*pcVar1)();
            return pFVar6;
          }
        }
        bVar2 = LayoutIsCompatibleWithQueue(DVar5,param_7);
        if (!bVar2) {
          bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("LayoutIsCompatibleWithQueue(QueueAgnosticLayoutBefore, InPipeBefore)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                             ,0xa42,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FD3D12BarrierValues *)(*pcVar1)();
            return pFVar6;
          }
        }
        DVar3 = FilterToQueueCompatibleSync(param_1,All);
        __return_storage_ptr__->Sync = DVar3;
        DVar4 = FilterToQueueCompatibleAccess(param_3,All);
        __return_storage_ptr__->Access = DVar4;
        __return_storage_ptr__->Layout = DVar5;
      }
      else {
        __return_storage_ptr__->Sync = D3D12_BARRIER_SYNC_ALL;
        __return_storage_ptr__->Access = D3D12_BARRIER_ACCESS_COMMON;
        __return_storage_ptr__->Layout = D3D12_BARRIER_LAYOUT_COMMON;
      }
    }
  }
  return __return_storage_ptr__;
}

// CreateDescriptorHeap @ 145a0b650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeap * __cdecl
CreateDescriptorHeap
          (FD3D12Device *param_1,wchar_t *param_2,ERHIDescriptorHeapType param_3,uint param_4,
          ED3D12DescriptorHeapFlags param_5,bool param_6)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FD3D12DescriptorHeap *pFVar5;
  FD3D12DescriptorHeap *this;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 auStackY_e8 [32];
  TRefCountPtr<ID3D12DescriptorHeap> local_a0;
  wchar_t *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  D3D12_DESCRIPTOR_HEAP_TYPE local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_98 = param_2;
  FString::PrintfImpl(&local_90,L"D3D12Device::CreateDescriptorHeap(%s, %d)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar6.Data = local_90.Data.AllocatorInstance.Data;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,(wchar_t *)FVar6.Data);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  FString::PrintfImpl(&local_80,L"D3D12Device::CreateDescriptorHeap(%s, %d)");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar6.Data = local_80.Data.AllocatorInstance.Data;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar6.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
               ,0x1dc);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  local_60 = Translate(param_3);
  local_58 = param_5 & 1;
  local_54 = 1;
  if (GVirtualMGPU == 0) {
    local_54 = *(undefined4 *)param_1;
  }
  pFVar5 = (FD3D12DescriptorHeap *)0x0;
  local_a0.Reference = (ID3D12DescriptorHeap *)0x0;
  local_5c = param_4;
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12DescriptorHeap *)(*pcVar2)();
    return pFVar5;
  }
  plVar1 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  pcVar2 = *(code **)(*plVar1 + 0x70);
  if (local_a0.Reference != (ID3D12DescriptorHeap *)0x0) {
    (**(code **)((longlong)*(ID3D12Object *)local_a0.Reference + 0x10))();
  }
  iVar4 = (*pcVar2)(plVar1,&local_60,&_GUID_8efb471d_616c_4f49_90f7_127bb763fa51,&local_a0);
  if (iVar4 < 0) {
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar4,
               "Device->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(Heap.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
               ,0x1e5,(ID3D12Device *)0x0,&local_70);
  }
  SetD3D12ObjectName((ID3D12Object *)local_a0.Reference,local_98);
  this = operator_new(0x40);
  if (this != (FD3D12DescriptorHeap *)0x0) {
    pFVar5 = FD3D12DescriptorHeap::FD3D12DescriptorHeap
                       (this,param_1,&local_a0,param_4,param_3,param_5,param_6);
  }
  if (local_a0.Reference != (ID3D12DescriptorHeap *)0x0) {
    (**(code **)((longlong)*(ID3D12Object *)local_a0.Reference + 0x10))();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return pFVar5;
}

// CreateRayTracingBuffer @ 145a0c4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TRefCountPtr<FD3D12Buffer> __cdecl
CreateRayTracingBuffer
          (FD3D12Adapter *param_1,uint param_2,ulong64 param_3,ERayTracingBufferType param_4,
          FDebugName *param_5)

{
  FD3D12Buffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TRefCountPtr<FD3D12Buffer> TVar5;
  FD3D12Buffer *pFVar6;
  ID3D12Pageable *pIVar7;
  undefined4 in_register_00000014;
  FD3D12Adapter *this;
  undefined4 in_register_0000008c;
  ulong64 uVar8;
  FDebugName *in_stack_00000030;
  undefined1 auStackY_258 [32];
  FString local_218;
  ERayTracingBufferType local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int iStack_1fc;
  FScriptContainerElement *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  ERayTracingBufferType local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  int iStack_1c4;
  FScriptContainerElement *local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  ulong64 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  ulong64 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  FRHIBufferCreateDesc local_120;
  FRHIBufferCreateDesc local_e8;
  D3D12_RESOURCE_DESC local_b0;
  D3D12_RESOURCE_DESC local_78;
  ulonglong local_40;
  
  uVar8 = CONCAT44(in_register_0000008c,param_4);
  this = (FD3D12Adapter *)CONCAT44(in_register_00000014,param_2);
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FDebugName::ToString(in_stack_00000030,&local_218);
  if ((uVar8 == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Size != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0xdca,
                         L"Attempting to create ray tracing %s buffer of zero size. Debug name: %s")
     , bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.Reference = (FD3D12Buffer *)(*pcVar2)();
    return (TRefCountPtr<FD3D12Buffer>)TVar5.Reference;
  }
  param_1->_padding_ = 0;
  iVar4 = 1 << ((byte)param_3 & 0x1f);
  if ((int)param_5 == 0) {
    local_1f8 = (FScriptContainerElement *)L"";
    if (local_218.Data.ArrayNum != 0) {
      local_1f8 = local_218.Data.AllocatorInstance.Data;
    }
    uStack_1dc = 0;
    uStack_1d8 = 0;
    local_198 = 1;
    uStack_190 = 0;
    local_b0._4_4_ = uStack_194;
    local_b0.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    uStack_180 = 1;
    uStack_174 = 1;
    uStack_170 = 0;
    local_b0.Alignment = 0;
    uStack_16c = 1;
    uStack_204 = 0;
    uStack_1f0 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1d4 = 0;
    uStack_17c = 0x10001;
    uStack_178 = 0;
    local_b0.Format = DXGI_FORMAT_UNKNOWN;
    local_b0.SampleDesc.Count = 1;
    local_b0.SampleDesc.Quality = 0;
    local_b0.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    local_b0.Height = 1;
    local_b0.DepthOrArraySize = 1;
    local_b0.MipLevels = 1;
    local_168 = 0x100;
    uStack_200 = 0x2000;
    local_b0._52_4_ = uStack_164;
    local_b0.Flags = D3D12_RESOURCE_FLAG_RAYTRACING_ACCELERATION_STRUCTURE;
    local_120._padding_ = (longlong)param_4;
    local_120._padding_ = CONCAT44(iVar4,0x2000);
    local_1e8 = 0x20000;
    local_120.InitialState = BVHWrite;
    local_120.InitAction = Default;
    local_120.ClassName.ComparisonIndex.Value = 0;
    local_120.ClassName.Number = 0;
    local_120.InitialData = (FResourceArrayUploadInterface *)0x0;
    local_120.OwnerName.ComparisonIndex.Value = 0;
    local_120.OwnerName.Number = 0;
    local_208 = param_4;
    iStack_1fc = iVar4;
    local_188 = uVar8;
    local_120.DebugName = (wchar_t *)local_1f8;
    local_b0.Width = uVar8;
    pFVar6 = FD3D12Adapter::CreateRHIBuffer
                       (this,&local_b0,0x100,&local_120,SingleState,BVHWrite|BVHRead,false,
                        (ID3D12ResourceAllocator *)0x0);
    pFVar1 = (FD3D12Buffer *)param_1->_padding_;
    if (pFVar1 != pFVar6) {
      param_1->_padding_ = (longlong)pFVar6;
      if (pFVar6 != (FD3D12Buffer *)0x0) {
        (**(code **)(pFVar6->_padding_ + 8))(&pFVar6->_padding_,local_128);
      }
      if (pFVar1 != (FD3D12Buffer *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x10))();
      }
    }
  }
  else if ((int)param_5 == 1) {
    local_1c0 = (FScriptContainerElement *)L"";
    if (local_218.Data.ArrayNum != 0) {
      local_1c0 = local_218.Data.AllocatorInstance.Data;
    }
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    local_160 = 1;
    uStack_158 = 0;
    local_78._4_4_ = uStack_15c;
    local_78.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    uStack_148 = 1;
    uStack_13c = 1;
    uStack_138 = 0;
    local_78.Alignment = 0;
    uStack_134 = 1;
    uStack_1cc = 0;
    uStack_1b8 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uStack_19c = 0;
    uStack_144 = 0x10001;
    uStack_140 = 0;
    local_78.Format = DXGI_FORMAT_UNKNOWN;
    local_78.SampleDesc.Count = 1;
    local_78.SampleDesc.Quality = 0;
    local_78.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    local_78.Height = 1;
    local_78.DepthOrArraySize = 1;
    local_78.MipLevels = 1;
    local_130 = 4;
    uStack_1c8 = 8;
    local_78._52_4_ = uStack_12c;
    local_78.Flags = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
    local_e8._padding_ = (longlong)param_4;
    local_e8._padding_ = CONCAT44(iVar4,8);
    local_1b0 = 0x400;
    local_e8.InitialState = UAVCompute;
    local_e8.InitAction = Default;
    local_e8.ClassName.ComparisonIndex.Value = 0;
    local_e8.ClassName.Number = 0;
    local_e8.InitialData = (FResourceArrayUploadInterface *)0x0;
    local_e8.OwnerName.ComparisonIndex.Value = 0;
    local_e8.OwnerName.Number = 0;
    local_1d0 = param_4;
    iStack_1c4 = iVar4;
    local_150 = uVar8;
    local_e8.DebugName = (wchar_t *)local_1c0;
    local_78.Width = uVar8;
    pFVar6 = FD3D12Adapter::CreateRHIBuffer
                       (this,&local_78,0x100,&local_e8,Default,UAVCompute,false,
                        (ID3D12ResourceAllocator *)0x0);
    pFVar1 = (FD3D12Buffer *)param_1->_padding_;
    if (pFVar1 != pFVar6) {
      param_1->_padding_ = (longlong)pFVar6;
      if (pFVar6 != (FD3D12Buffer *)0x0) {
        (**(code **)(pFVar6->_padding_ + 8))(&pFVar6->_padding_,local_124);
      }
      if (pFVar1 != (FD3D12Buffer *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x10))();
      }
    }
    pIVar7 = FD3D12Resource::GetPageable(*(FD3D12Resource **)(param_1->_padding_ + 0x140));
    FD3D12Adapter::SetResidencyPriority(this,pIVar7,D3D12_RESIDENCY_PRIORITY_HIGH,(uint)param_3);
  }
  else {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0xdfd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.Reference = (FD3D12Buffer *)(*pcVar2)();
      return (TRefCountPtr<FD3D12Buffer>)TVar5.Reference;
    }
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  return (TRefCountPtr<FD3D12Buffer>)(FD3D12Buffer *)param_1;
}

// CreateRayTracingStateObject @ 145a0c830

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<ID3D12StateObject> __cdecl
CreateRayTracingStateObject
          (ID3D12Device5 *param_1,TArrayView<FDXILLibrary_const_*,int> *param_2,
          TArrayView<wchar_t_const_*,int> *param_3,uint param_4,uint param_5,
          TArrayView<D3D12_HIT_GROUP_DESC_const_,int> *param_6,ID3D12RootSignature *param_7,
          TArrayView<ID3D12RootSignature_*,int> *param_8,TArrayView<unsigned_int,int> *param_9,
          TArrayView<D3D12_EXISTING_COLLECTION_DESC,int> *param_10,D3D12_STATE_OBJECT_TYPE param_11)

{
  wchar_t **ppwVar1;
  ID3D12RootSignature IVar2;
  int *piVar3;
  ID3D12Device5 IVar4;
  FDXILLibrary *pFVar5;
  FName FVar6;
  code *pcVar7;
  undefined8 uVar8;
  TArrayView<unsigned_int,int> *pTVar9;
  TArrayView<D3D12_EXISTING_COLLECTION_DESC,int> *pTVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  TRefCountPtr<ID3D12StateObject> TVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingCreatedPipelines> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingCompiledShaders> FVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  wchar_t **ppwVar28;
  ID3D12RootSignature IVar29;
  undefined4 in_register_0000008c;
  longlong *plVar30;
  uchar auVar31 [8];
  FScriptContainerElement *pFVar32;
  undefined4 local_res18 [2];
  FName local_res20;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  ID3D12RootSignature IStack_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  undefined4 local_108;
  int local_104;
  uint local_100;
  undefined4 local_f8;
  uint local_f4;
  int *local_f0;
  FName local_e8;
  FName local_e0;
  undefined8 local_d8;
  wchar_t *pwStack_d0;
  undefined4 local_c8;
  uint local_c4;
  FScriptContainerElement *local_c0;
  FString local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FScriptContainerElement *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  FName local_70;
  FName local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pTVar9 = param_9;
  plVar30 = (longlong *)CONCAT44(in_register_0000008c,param_4);
  piVar3 = &param_9->ArrayNum;
  local_res20 = (FName)plVar30;
  if ((((param_10->ArrayNum != 0) || (*piVar3 != 1)) && (param_10->ArrayNum != (int)plVar30[1])) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(LocalRootSignatureAssociations.Num() == 0 && LocalRootSignatures.Num() == 1) || (LocalRootSignatureAssociations.Num() == Exports.Num())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x20d,
                          L"There must be exactly one local root signature association per export.")
     , bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  *param_1 = (ID3D12Device5)0x0;
  local_138.Data = (FScriptContainerElement *)0x0;
  uVar23 = *piVar3 + *(int *)(param_7 + 1) + 5 + *(int *)(CONCAT44(in_stack_0000005c,param_11) + 8)
                     + param_3->ArrayNum + (int)plVar30[1];
  local_130 = 0;
  if ((int)uVar23 < 1) {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar23,&local_138,(int *)&local_130,(int *)((longlong)&local_130 + 4));
  }
  uVar23 = *(uint *)(plVar30 + 1);
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  if ((int)uVar23 < 1) {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar23,&local_118,(int *)&local_110,(int *)((longlong)&local_110 + 4));
  }
  local_100 = *(uint *)(plVar30 + 1);
  uVar23 = 0;
  ppwVar28 = param_3->DataPtr;
  ppwVar1 = ppwVar28 + param_3->ArrayNum;
  for (; ppwVar28 != ppwVar1; ppwVar28 = ppwVar28 + 1) {
    IStack_120 = (ID3D12RootSignature)(*ppwVar28 + 0x6c);
    local_d8 = 5;
    uVar24 = 0;
    if ((int)uVar23 < (int)(uint)local_130) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    local_128 = 5;
    uStack_124 = 0;
    pwStack_d0 = (wchar_t *)IStack_120;
    if ((uVar24 == 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
      return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
    }
    lVar20 = (longlong)(int)uVar23;
    uVar23 = uVar23 + 1;
    pFVar32 = local_138.Data + lVar20 * 0x10;
    *(undefined4 *)pFVar32 = local_128;
    *(undefined4 *)(pFVar32 + 4) = uStack_124;
    *(ID3D12RootSignature *)(pFVar32 + 8) = IStack_120;
  }
  local_f4 = param_5;
  if ((8 < param_5) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("ShaderConfig.MaxAttributeSizeInBytes <= 8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x234,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  local_f8 = param_6._0_4_;
  IStack_120 = (ID3D12RootSignature)&local_f8;
  local_128 = 9;
  uVar24 = 0;
  if ((int)uVar23 < (int)(uint)local_130) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  uVar24 = uVar23 + 1;
  *(ulonglong *)(local_138.Data + (longlong)(int)uVar23 * 0x10) = CONCAT44(uStack_124,local_128);
  *(ID3D12RootSignature *)(local_138.Data + (longlong)(int)uVar23 * 0x10 + 8) = IStack_120;
  local_80 = (undefined4)plVar30[1];
  local_78 = *plVar30;
  local_7c = 0;
  uVar27 = 0;
  if ((int)uVar23 < (int)(uint)local_130) {
    uVar27 = ~uVar23 >> 0x1f;
  }
  if (uVar27 == 0) {
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
      return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
    }
  }
  IStack_120 = (ID3D12RootSignature)&local_88;
  local_88 = local_138.Data + (longlong)(int)uVar23 * 0x10;
  local_128 = 7;
  uVar27 = 0;
  if ((int)uVar24 < (int)(uint)local_130) {
    uVar27 = ~uVar24 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  uVar23 = uVar23 + 2;
  *(ulonglong *)(local_138.Data + (longlong)(int)uVar24 * 0x10) = CONCAT44(uStack_124,local_128);
  *(ID3D12RootSignature *)(local_138.Data + (longlong)(int)uVar24 * 0x10 + 8) = IStack_120;
  IVar29 = *param_7;
  IVar2 = (ID3D12RootSignature)((longlong)IVar29 + (longlong)*(int *)(param_7 + 1) * 0x28);
  for (; IVar29 != IVar2; IVar29 = (ID3D12RootSignature)((longlong)IVar29 + 0x28)) {
    local_128 = 0xb;
    uVar24 = 0;
    if ((int)uVar23 < (int)(uint)local_130) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    IStack_120 = IVar29;
    if ((uVar24 == 0) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
      return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
    }
    lVar20 = (longlong)(int)uVar23;
    uVar23 = uVar23 + 1;
    *(ulonglong *)(local_138.Data + lVar20 * 0x10) = CONCAT44(uStack_124,local_128);
    *(ID3D12RootSignature *)(local_138.Data + lVar20 * 0x10 + 8) = IStack_120;
  }
  IStack_120 = (ID3D12RootSignature)&local_108;
  local_108 = 1;
  local_128 = 10;
  uVar24 = 0;
  if ((int)uVar23 < (int)(uint)local_130) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  uVar24 = uVar23 + 1;
  *(ulonglong *)(local_138.Data + (longlong)(int)uVar23 * 0x10) = CONCAT44(uStack_124,local_128);
  *(ID3D12RootSignature *)(local_138.Data + (longlong)(int)uVar23 * 0x10 + 8) = IStack_120;
  local_res18[0] = 0;
  if (GRHIGlobals.RayTracing.SupportsPSOAdditions != false) {
    local_res18[0] = 4;
  }
  IStack_120 = (ID3D12RootSignature)local_res18;
  local_128 = 0;
  uVar27 = 0;
  if ((int)uVar24 < (int)(uint)local_130) {
    uVar27 = ~uVar24 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  uVar8 = CONCAT44(uStack_124,local_128);
  uVar27 = uVar23 + 2;
  local_128 = 1;
  *(undefined8 *)(local_138.Data + (longlong)(int)uVar24 * 0x10) = uVar8;
  *(ID3D12RootSignature *)(local_138.Data + (longlong)(int)uVar24 * 0x10 + 8) = IStack_120;
  IStack_120 = (ID3D12RootSignature)&param_8;
  uVar24 = 0;
  if ((int)uVar27 < (int)(uint)local_130) {
    uVar24 = ~uVar27 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  uVar25 = 0;
  uVar23 = uVar23 + 3;
  *(ulonglong *)(local_138.Data + (longlong)(int)uVar27 * 0x10) = CONCAT44(uStack_124,local_128);
  *(ID3D12RootSignature *)(local_138.Data + (longlong)(int)uVar27 * 0x10 + 8) = IStack_120;
  iVar13 = pTVar9->ArrayNum;
  uVar24 = uVar23;
  if (0 < iVar13) {
    lVar20 = 0;
    do {
      uVar27 = 0;
      if ((int)uVar25 < iVar13) {
        uVar27 = ~uVar25 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      if ((*(longlong *)(lVar20 + (longlong)pTVar9->DataPtr) == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("LocalRootSignatures[SignatureIndex]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x262,L"All local root signatures must be valid"), bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      local_128 = 2;
      uVar27 = 0;
      if ((int)uVar25 < pTVar9->ArrayNum) {
        uVar27 = ~uVar25 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      IStack_120 = (ID3D12RootSignature)(pTVar9->DataPtr + (longlong)(int)uVar25 * 2);
      uVar27 = 0;
      if ((int)uVar24 < (int)(uint)local_130) {
        uVar27 = ~uVar24 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      uVar25 = uVar25 + 1;
      lVar21 = (longlong)(int)uVar24;
      lVar20 = lVar20 + 8;
      uVar24 = uVar24 + 1;
      *(ulonglong *)(local_138.Data + lVar21 * 0x10) = CONCAT44(uStack_124,local_128);
      *(ID3D12RootSignature *)(local_138.Data + lVar21 * 0x10 + 8) = IStack_120;
      iVar13 = pTVar9->ArrayNum;
    } while ((int)uVar25 < iVar13);
  }
  uVar27 = 0;
  if (0 < (int)plVar30[1]) {
    lVar20 = 0;
    lVar21 = 0;
    do {
      pTVar10 = param_10;
      if (param_10->ArrayNum == 0) {
        iVar13 = 0;
      }
      else {
        uVar25 = 0;
        if ((int)uVar27 < param_10->ArrayNum) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
          return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
        }
        iVar13 = *(int *)((longlong)&pTVar10->DataPtr->pExistingCollection + lVar20 * 4);
      }
      uVar26 = ~uVar27 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar27 < (int)local_110) {
        uVar25 = uVar26;
      }
      if ((uVar25 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      pFVar32 = local_118.Data + lVar21;
      local_50 = 0;
      local_60 = 0;
      uStack_58 = 0;
      *(longlong *)pFVar32 = 0;
      *(longlong *)(pFVar32 + 8) = 0;
      *(longlong *)(pFVar32 + 0x10) = 0;
      *(undefined4 *)(pFVar32 + 8) = 1;
      uVar25 = 0;
      if ((int)uVar27 < (int)*(longlong *)((longlong)local_res20 + 8)) {
        uVar25 = uVar26;
      }
      if ((uVar25 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      *(longlong *)(pFVar32 + 0x10) = *(longlong *)local_res20 + lVar20 * 8;
      if ((param_9->ArrayNum <= iVar13) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("LocalRootSignatureIndex < LocalRootSignatures.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x274,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      uVar26 = uVar23 + iVar13;
      uVar25 = 0;
      if ((int)uVar26 < (int)(uint)local_130) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      *(FScriptContainerElement **)pFVar32 = local_138.Data + (longlong)(int)uVar26 * 0x10;
      local_128 = 7;
      uVar25 = 0;
      if ((int)uVar27 < (int)local_110) {
        uVar25 = ~uVar27 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      IStack_120 = (ID3D12RootSignature)(local_118.Data + (longlong)(int)uVar27 * 0x18);
      uVar25 = 0;
      if ((int)uVar24 < (int)(uint)local_130) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      uVar27 = uVar27 + 1;
      lVar22 = (longlong)(int)uVar24;
      lVar20 = lVar20 + 1;
      uVar24 = uVar24 + 1;
      lVar21 = lVar21 + 0x18;
      *(ulonglong *)(local_138.Data + lVar22 * 0x10) = CONCAT44(uStack_124,local_128);
      *(ID3D12RootSignature *)(local_138.Data + lVar22 * 0x10 + 8) = IStack_120;
    } while ((int)uVar27 < (int)*(longlong *)((longlong)local_res20 + 8));
  }
  plVar30 = (longlong *)CONCAT44(in_stack_0000005c,param_11);
  uVar23 = 0;
  iVar13 = (int)plVar30[1];
  if (0 < iVar13) {
    do {
      local_128 = 6;
      uVar27 = 0;
      if ((int)uVar23 < iVar13) {
        uVar27 = ~uVar23 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      IStack_120 = (ID3D12RootSignature)(*plVar30 + (longlong)(int)uVar23 * 0x18);
      uVar27 = 0;
      if ((int)uVar24 < (int)(uint)local_130) {
        uVar27 = ~uVar24 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
        return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
      }
      uVar23 = uVar23 + 1;
      lVar20 = (longlong)(int)uVar24;
      uVar24 = uVar24 + 1;
      *(ulonglong *)(local_138.Data + lVar20 * 0x10) = CONCAT44(uStack_124,local_128);
      *(ID3D12RootSignature *)(local_138.Data + lVar20 * 0x10 + 8) = IStack_120;
      iVar13 = (int)plVar30[1];
    } while ((int)uVar23 < iVar13);
  }
  if (uVar24 != (uint)local_130) {
    bVar11 = FDebug::CheckVerifyFailedImpl2
                       ("Index == Subobjects.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x283,L"All pipeline subobjects must be initialized.");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
      return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
    }
  }
  local_c4 = uVar24;
  if (((int)(uint)local_130 < 1) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  local_c0 = local_138.Data;
  local_c8 = in_stack_00000060;
  bVar12 = IsRHIDeviceNVIDIA();
  bVar11 = false;
  if (bVar12) {
    local_104 = NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread(param_2,0,0x3e9);
    if (local_104 != 0) {
      local_f0 = &local_104;
      bVar12 = `CreateRayTracingStateObject'::__l63::<lambda_1>::operator()(&local_f0);
      bVar11 = false;
      if (!bVar12) goto LAB_145a0d387;
    }
    bVar11 = true;
  }
LAB_145a0d387:
  IVar4 = *param_1;
  pFVar5 = param_2->DataPtr[0x3e];
  if (IVar4 != (ID3D12Device5)0x0) {
    *param_1 = (ID3D12Device5)0x0;
    (**(code **)(*(longlong *)IVar4 + 0x10))();
  }
  iVar13 = (*(code *)pFVar5)(param_2,&local_c8,&_GUID_47016943_fca8_4594_93ea_af258b55346d,param_1);
  if (iVar13 < 0) {
    if (2 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if (iVar13 + 0x7785fffbU < 2) {
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar13,"hr",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                 ,0x2a1,(ID3D12Device *)param_2,&local_b8);
    }
  }
  if (((bVar11) &&
      (iVar13 = NvAPI_D3D12_SetNvShaderExtnSlotSpaceLocalThread(param_2,0xffffffff), iVar13 != 0))
     && (bVar11 = FDebug::CheckVerifyFailedImpl2
                            ("NvapiStatus == NVAPI_OK",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0x2aa,L"NVAPI ERROR %d on clear extensions\n"), bVar11)) {
    pcVar7 = (code *)swi(3);
    TVar14.Reference = (ID3D12StateObject *)(*pcVar7)();
    return (TRefCountPtr<ID3D12StateObject>)TVar14.Reference;
  }
  FVar16 = StatPtr_STAT_D3D12RayTracingCreatedPipelines;
  if (StatPtr_STAT_D3D12RayTracingCreatedPipelines ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingCreatedPipelines>)0x0) {
    pFVar15 = FName::FName(&local_70,"STAT_D3D12RayTracingCreatedPipelines");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingCreatedPipelines>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingCreatedPipelines,
                        *pFVar15,L"Created pipelines (total)","STATGROUP_D3D12RayTracing",
                        "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar6 = *(FName *)FVar16;
  local_res20 = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    local_a8.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_a8.StatData.Pad[0] = '\x01';
    local_a8.StatData.Pad[1] = '\0';
    local_a8.StatData.Pad[2] = '\0';
    local_a8.StatData.Pad[3] = '\0';
    local_a8.StatData.Pad[4] = '\0';
    local_a8.StatData.Pad[5] = '\0';
    local_a8.StatData.Pad[6] = '\0';
    local_a8.StatData.Pad[7] = '\0';
    local_e8 = FVar6;
    local_a8.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar17,&local_a8);
    FStatsTrace::Add(&local_e8,1);
    if (pFVar17->ScopeCount == 0) {
      FThreadStats::Flush(pFVar17,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar17,false,false);
    }
  }
  auVar31[4] = '\0';
  auVar31[5] = '\0';
  auVar31[6] = '\0';
  auVar31[7] = '\0';
  auVar31[0] = (undefined1)local_100;
  auVar31[1] = local_100._1_1_;
  auVar31[2] = local_100._2_1_;
  auVar31[3] = local_100._3_1_;
  if (auVar31 != (uchar  [8])0x0) {
    FVar19 = StatPtr_STAT_D3D12RayTracingCompiledShaders;
    if (StatPtr_STAT_D3D12RayTracingCompiledShaders ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingCompiledShaders>)0x0) {
      pFVar15 = FName::FName(&local_68,"STAT_D3D12RayTracingCompiledShaders");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingCompiledShaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingCompiledShaders,
                          *pFVar15,L"Compiled shaders (total)","STATGROUP_D3D12RayTracing",
                          "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,false,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar19;
    local_res20 = FVar6;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_98.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_e0 = FVar6;
      local_98.StatData.Pad = auVar31;
      local_98.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_98);
      FStatsTrace::Add(&local_e0,(long64)auVar31);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  return (TRefCountPtr<ID3D12StateObject>)(ID3D12StateObject *)param_1;
}

// CreateSpecializedStateObjects @ 145a0f100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
CreateSpecializedStateObjects
          (ID3D12Device5 *param_1,ID3D12RootSignature *param_2,uint param_3,uint param_4,
          FD3D12RayTracingShaderLibrary *param_5,
          TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *param_6,
          TMap<FSHAHash,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>_>
          *param_7,TArray<TRefCountPtr<ID3D12StateObject>,TSizedDefaultAllocator<32>_> *param_8,
          TArray<int,TSizedDefaultAllocator<32>_> *param_9)

{
  FScriptContainerElement **ppFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
  *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  longlong lVar19;
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<TRefCountPtr<ID3D12StateObject>,TSizedDefaultAllocator<32>_> *pTVar21;
  FScriptContainerElement **ppFVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ForAnyElementType *pFVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auStackY_248 [32];
  ForAnyElementType in_stack_fffffffffffffde0;
  undefined4 uVar30;
  ForAnyElementType local_1e8;
  uint local_1e0;
  undefined1 auStack_1dc [12];
  undefined1 local_1d0 [16];
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *local_1c0;
  TArray<TRefCountPtr<ID3D12StateObject>,TSizedDefaultAllocator<32>_> *local_1b8;
  uint local_1b0;
  uint local_1ac;
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> local_188;
  undefined8 uStack_178;
  TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
  *local_170;
  TArray<int,TSizedDefaultAllocator<32>_> *local_168;
  TArrayView<ID3D12RootSignature_*,int> *local_160;
  TArrayView<FDXILLibrary_const_*,int> *local_158;
  TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *local_150;
  uint local_148;
  TArrayView<D3D12_EXISTING_COLLECTION_DESC,int> local_140;
  TArrayView<unsigned_int,int> local_130;
  ID3D12RootSignature local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  TArrayView<wchar_t_const_*,int> local_100;
  FScriptContainerElement *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ForAnyElementType local_d8;
  int local_d0;
  int aiStack_cc [33];
  FScriptContainerElement *local_48 [2];
  ForAnyElementType local_38 [2];
  
  local_38[0].Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_248);
  iVar23 = (param_5->Shaders).ArrayNum;
  local_1b8 = param_8;
  local_168 = param_9;
  local_1c0 = param_6;
  local_170 = (TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
               *)param_7;
  if (iVar23 < 2) {
    return;
  }
  piVar4 = &param_9->ArrayMax;
  local_1b0 = param_4;
  local_1ac = param_3;
  local_160 = (TArrayView<ID3D12RootSignature_*,int> *)param_2;
  local_158 = (TArrayView<FDXILLibrary_const_*,int> *)param_1;
  if (*piVar4 < iVar23) {
    in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)piVar4;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar23,&param_9->AllocatorInstance,param_9->ArrayNum,piVar4);
  }
  iVar23 = 0;
  if (0 < (param_5->Shaders).ArrayNum) {
    do {
      pTVar20 = (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
                (param_9->AllocatorInstance).Data;
      local_1d0._8_4_ = -1;
      if (((pTVar20 <=
            (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
            (local_1d0 + 8)) &&
          (local_1d0 + 8 <
           (int *)((longlong)&(pTVar20->AllocatorInstance).Data + (longlong)*piVar4 * 4))) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)pTVar20,
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_9->ArrayNum;
      if (iVar12 == *piVar4) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_9->AllocatorInstance,piVar4);
        param_9->ArrayNum = iVar12;
      }
      iVar23 = iVar23 + 1;
      param_9->ArrayNum = iVar12 + 1;
      *(undefined4 *)((param_9->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_1d0._8_4_;
    } while (iVar23 < (param_5->Shaders).ArrayNum);
  }
  uVar29 = 0;
  lVar15 = 10;
  lVar19 = (longlong)aiStack_cc;
  do {
    *(undefined8 *)(lVar19 + 0xfffffffffffffff4) = 0;
    *(undefined8 *)(lVar19 + 0xfffffffffffffffc) = 0;
    lVar19 = lVar19 + 0x10;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar18 = 9;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  uVar27 = 0xffffffff;
  iVar12 = -1;
  auStack_1dc._8_4_ = 9;
  iVar23 = local_1c0->ArrayNum;
  local_1e0 = 0;
  auStack_1dc._0_4_ = 0;
  uVar14 = uVar29;
  uVar28 = uVar29;
  if (0 < iVar23) {
    do {
      pTVar20 = local_1c0;
      uVar24 = (uint)uVar29;
      uVar25 = 0;
      if ((int)uVar24 < iVar23) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if (uVar25 == 0) {
        in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)(longlong)iVar23;
        bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      piVar4 = *(int **)((pTVar20->AllocatorInstance).Data + uVar28);
      uVar25 = 10;
      if ((uint)piVar4[6] < 10) {
        uVar25 = piVar4[6];
      }
      if (*piVar4 == 1) {
        uVar13 = uVar25;
        if (uVar25 < (uint)uVar14) {
          uVar13 = (uint)uVar14;
        }
        uVar14 = (ulonglong)uVar13;
        uVar27 = uVar29;
        if (uVar18 < uVar25) {
          uVar25 = uVar18;
        }
      }
      else {
        if (((int)uVar24 <= (int)uVar27) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("EntryIndex > LastRayGenShaderCollectionIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0xa58,
                                L"Ray generation shaders are expected to be first in the UniqueShaderCollections list."
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((uint)auStack_1dc._8_4_ < uVar25) {
          uVar25 = auStack_1dc._8_4_;
        }
        auStack_1dc._8_4_ = uVar25;
        if ((((char)piVar4[0xe] == '\0') &&
            ((*(longlong *)(piVar4 + 0xc) == 0 ||
             (*(char *)(*(longlong *)(piVar4 + 0xc) + 0xd0) == '\0')))) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("bDeserialized || (CompileEvent.IsValid() && CompileEvent->IsComplete())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x3c8,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(piVar4 + 4) == 0) {
          bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("StateObject",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x3c9,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(piVar4 + 4) == 0) {
            UE::Logging::Private::BasicFatalLog
                      ((FStaticBasicLogRecord *)
                       &`public:_struct_D3D12_EXISTING_COLLECTION_DESC___cdecl_FD3D12RayTracingPipelineCache::FEntry::GetCollectionDesc(void)___ptr64'
                        ::__l20::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
        }
        local_188.AllocatorInstance.Data = *(FScriptContainerElement **)(piVar4 + 4);
        local_188.ArrayNum = 0;
        local_188.ArrayMax = 0;
        uStack_178 = 0;
        if (((local_1e8.Data <= &local_188) &&
            (&local_188 <
             (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
             (local_1e8.Data + (longlong)(int)auStack_1dc._0_4_ * 0x18))) &&
           (in_stack_fffffffffffffde0.Data = local_1e8.Data,
           bVar11 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_1e0 == auStack_1dc._0_4_) {
          local_1e0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_1e8,(int *)auStack_1dc);
        }
        lVar19 = (longlong)(int)local_1e0;
        local_1e0 = local_1e0 + 1;
        pFVar2 = local_1e8.Data + lVar19 * 0x18;
        *(undefined4 *)pFVar2 = local_188.AllocatorInstance.Data._0_4_;
        *(undefined4 *)(pFVar2 + 4) = local_188.AllocatorInstance.Data._4_4_;
        *(int *)(pFVar2 + 8) = local_188.ArrayNum;
        *(int *)(pFVar2 + 0xc) = local_188.ArrayMax;
        *(undefined8 *)(local_1e8.Data + lVar19 * 0x18 + 0x10) = uStack_178;
        uVar25 = uVar18;
      }
      uVar18 = uVar25;
      iVar12 = (int)uVar27;
      uVar29 = (ulonglong)(uVar24 + 1);
      iVar23 = local_1c0->ArrayNum;
      uVar28 = uVar28 + 8;
    } while ((int)(uVar24 + 1) < iVar23);
    if (uVar18 == (uint)uVar14) goto LAB_145a0fbc8;
  }
  uVar14 = 0;
  uVar29 = uVar14;
  if (-1 < iVar12) {
    do {
      pTVar20 = local_1c0;
      pTVar16 = (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
                (longlong)local_1c0->ArrayNum;
      uVar25 = (uint)uVar14;
      uVar18 = 0;
      if ((int)uVar25 < local_1c0->ArrayNum) {
        uVar18 = ~uVar25 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)pTVar16, bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      piVar4 = *(int **)((pTVar20->AllocatorInstance).Data + uVar29 * 8);
      if ((*piVar4 != 1) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("Entry->CollectionType == FD3D12RayTracingPipelineCache::ECollectionType::RayGen"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0xa6d,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar18 = auStack_1dc._8_4_;
      if ((uint)piVar4[6] < (uint)auStack_1dc._8_4_) {
        uVar18 = piVar4[6];
      }
      if (uVar18 != 0) {
        uStack_190 = 0xffffffff;
        local_198 = 0;
        local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.ArrayNum = 0;
        local_1a8.ArrayMax = 0;
        if (((char)piVar4[0xe] == '\0') &&
           (((*(longlong *)(piVar4 + 0xc) == 0 ||
             (*(char *)(*(longlong *)(piVar4 + 0xc) + 0xd0) == '\0')) &&
            (bVar11 = FDebug::CheckVerifyFailedImpl2
                                ("bDeserialized || (CompileEvent.IsValid() && CompileEvent->IsComplete())"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                 ,0x3c8,L""), bVar11)))) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(piVar4 + 4) == 0) {
          bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("StateObject",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x3c9,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(longlong *)(piVar4 + 4) == 0) {
            UE::Logging::Private::BasicFatalLog
                      ((FStaticBasicLogRecord *)
                       &`public:_struct_D3D12_EXISTING_COLLECTION_DESC___cdecl_FD3D12RayTracingPipelineCache::FEntry::GetCollectionDesc(void)___ptr64'
                        ::__l20::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
        }
        pTVar9 = local_170;
        local_1a8.AllocatorInstance.Data = *(FScriptContainerElement **)(piVar4 + 4);
        uStack_e8 = 0;
        uStack_e0 = 0;
        local_1a8.ArrayNum = 0;
        local_1a8.ArrayMax = 0;
        local_198 = 0;
        local_f0 = local_1a8.AllocatorInstance.Data;
        iVar23 = TSet<TTuple<FSHAHash,int>,TDefaultMapHashableKeyFuncs<FSHAHash,int,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FSHAHash>
                           (local_170,*(uint *)(*(longlong *)(piVar4 + 2) + 0xf0),
                            (FSHAHash *)(*(longlong *)(piVar4 + 2) + 0xf0));
        if (iVar23 == -1) {
          lVar19 = 0;
LAB_145a0f692:
          bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          lVar19 = (longlong)iVar23 * 0x20 + *(longlong *)&pTVar9->Elements;
          if (lVar19 == 0) goto LAB_145a0f692;
        }
        uStack_190 = *(undefined4 *)(lVar19 + 0x14);
        uVar14 = (ulonglong)uVar18;
        pFVar26 = &local_d8 + uVar14 * 2;
        pTVar20 = (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
                  pFVar26->Data;
        if (((pTVar20 <= &local_1a8) &&
            (&local_1a8 < pTVar20 + (longlong)aiStack_cc[uVar14 * 4] * 2)) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ),
           in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)pTVar20, bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar23 = (&local_d0)[uVar14 * 4];
        if (iVar23 == aiStack_cc[uVar14 * 4]) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,pFVar26,aiStack_cc + uVar14 * 4);
        }
        (&local_d0)[uVar14 * 4] = iVar23 + 1;
        pFVar5 = pFVar26->Data;
        pFVar2 = pFVar5 + (longlong)iVar23 * 0x20;
        *(undefined4 *)pFVar2 = local_1a8.AllocatorInstance.Data._0_4_;
        *(undefined4 *)(pFVar2 + 4) = local_1a8.AllocatorInstance.Data._4_4_;
        *(int *)(pFVar2 + 8) = local_1a8.ArrayNum;
        *(int *)(pFVar2 + 0xc) = local_1a8.ArrayMax;
        pFVar5 = pFVar5 + (longlong)iVar23 * 0x20 + 0x10;
        *(undefined4 *)pFVar5 = (undefined4)local_198;
        *(undefined4 *)(pFVar5 + 4) = local_198._4_4_;
        *(undefined4 *)(pFVar5 + 8) = uStack_190;
        *(undefined4 *)(pFVar5 + 0xc) = uStack_18c;
      }
      uVar14 = (ulonglong)(uVar25 + 1);
      uVar29 = uVar29 + 1;
    } while ((longlong)uVar29 <= (longlong)iVar12);
  }
  pTVar21 = local_1b8;
  pTVar20 = (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
            &local_1b8->ArrayMax;
  local_1c0 = pTVar20;
  if (local_1b8->ArrayMax < 10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,10,&local_1b8->AllocatorInstance,local_1b8->ArrayNum,(int *)pTVar20);
    in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)pTVar20;
  }
  pFVar26 = &local_d8;
  auStack_1dc._8_4_ = local_1e0;
  do {
    pTVar10 = local_168;
    iVar23 = *(int *)&pFVar26[1].Data;
    if (iVar23 != 0) {
      iVar12 = pTVar21->ArrayNum;
      pTVar20 = (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
                pFVar26->Data;
      pTVar16 = pTVar20 + (longlong)iVar23 * 2;
      while( true ) {
        if (*(int *)&pFVar26[1].Data != iVar23) {
          auStack_1dc[4] = 0;
          `TCheckedPointerIterator<`CreateSpecializedStateObjects'::__l2::FRayGenShaderSpecialization_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(auStack_1dc + 4);
        }
        uVar8 = auStack_1dc._8_4_;
        uVar18 = local_1e0;
        uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffde0.Data >> 0x20);
        if (pTVar20 == pTVar16) break;
        if (((local_1e8.Data <= pTVar20) &&
            (pTVar20 < (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_>
                        *)(local_1e8.Data + (longlong)(int)auStack_1dc._0_4_ * 0x18))) &&
           (in_stack_fffffffffffffde0.Data = local_1e8.Data,
           bVar11 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_1e0 == auStack_1dc._0_4_) {
          local_1e0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_1e8,(int *)auStack_1dc);
        }
        lVar19 = (longlong)(int)local_1e0;
        local_1e0 = local_1e0 + 1;
        uVar7 = *(undefined8 *)&pTVar20->ArrayNum;
        *(FScriptContainerElement **)(local_1e8.Data + lVar19 * 0x18) =
             (pTVar20->AllocatorInstance).Data;
        *(undefined8 *)(local_1e8.Data + lVar19 * 0x18 + 8) = uVar7;
        *(FScriptContainerElement **)(local_1e8.Data + lVar19 * 0x18 + 0x10) =
             pTVar20[1].AllocatorInstance.Data;
        uVar18 = pTVar20[1].ArrayNum;
        iVar3 = pTVar10->ArrayNum;
        pTVar17 = (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
                  (longlong)iVar3;
        uVar25 = 0;
        if ((int)uVar18 < iVar3) {
          uVar25 = ~uVar18 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ),
           in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)pTVar17, bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar20 = pTVar20 + 2;
        *(int *)((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) = iVar12;
      }
      uVar29 = (ulonglong)(uint)auStack_1dc._8_4_;
      local_150 = (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
                  local_1e8.Data;
      if (((int)local_1e0 < 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_148 = uVar18;
      local_140.DataPtr = (D3D12_EXISTING_COLLECTION_DESC *)0x0;
      in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)CONCAT44(uVar30,local_1b0);
      local_140.ArrayNum = 0;
      local_130.DataPtr = (uint *)0x0;
      local_130.ArrayNum = 0;
      local_120 = (ID3D12RootSignature)0x0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      local_100.DataPtr = (wchar_t **)0x0;
      local_100.ArrayNum = 0;
      CreateRayTracingStateObject
                ((ID3D12Device5 *)local_1d0,local_158,&local_100,(uint)&local_110,local_1ac,
                 (TArrayView<D3D12_HIT_GROUP_DESC_const_,int> *)in_stack_fffffffffffffde0.Data,
                 &local_120,local_160,&local_130,&local_140,(D3D12_STATE_OBJECT_TYPE)&local_150);
      pTVar21 = local_1b8;
      pTVar16 = local_1c0;
      pTVar20 = (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)
                (local_1b8->AllocatorInstance).Data;
      if (((pTVar20 <=
            (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)local_1d0
           ) && (local_1d0 <
                 &pTVar20->AllocatorInstance + *(int *)&(local_1c0->AllocatorInstance).Data)) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)pTVar20,
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar23 = pTVar21->ArrayNum;
      if (iVar23 == *(int *)&(pTVar16->AllocatorInstance).Data) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar21->AllocatorInstance,(int *)pTVar16);
      }
      pTVar21->ArrayNum = iVar23 + 1;
      pFVar2 = (pTVar21->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + (longlong)iVar23 * 8) = 0;
      *(undefined8 *)(pFVar2 + (longlong)iVar23 * 8) = local_1d0._0_8_;
      if ((ID3D12Device5)local_1d0._0_8_ != (ID3D12Device5)0x0) {
        (**(code **)(*(longlong *)local_1d0._0_8_ + 8))();
      }
      if ((int)local_1e0 < (int)uVar8) {
        in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)auStack_1dc;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar8 - local_1e0,&local_1e8,(int *)&local_1e0,
                   (int *)in_stack_fffffffffffffde0.Data);
      }
      else {
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar29);
        }
        if ((int)uVar8 < (int)local_1e0) {
          uVar18 = local_1e0 - uVar8;
          if ((int)(uVar8 | uVar18) < 0) {
            in_stack_fffffffffffffde0.Data = (FScriptContainerElement *)(longlong)(int)uVar18;
            bVar11 = FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pTVar21 = local_1b8;
          if (uVar18 != 0) {
            iVar23 = (local_1e0 - uVar18) - uVar8;
            if (iVar23 != 0) {
              memmove(local_1e8.Data + (longlong)(int)uVar8 * 0x18,
                      local_1e8.Data + (longlong)(int)uVar8 * 0x18 + (longlong)(int)uVar18 * 0x18,
                      (longlong)iVar23 * 0x18);
            }
            local_1e0 = local_1e0 - uVar18;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,&local_1e8,local_1e0,(int *)auStack_1dc);
            pTVar21 = local_1b8;
          }
        }
      }
      if ((ID3D12Device5)local_1d0._0_8_ != (ID3D12Device5)0x0) {
        (**(code **)(*(longlong *)local_1d0._0_8_ + 0x10))();
      }
    }
    pFVar26 = pFVar26 + 2;
  } while (pFVar26 != (ForAnyElementType *)(local_48 + 2));
LAB_145a0fbc8:
  if ((TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)local_1e8.Data
      != (TArray<FD3D12RayTracingPipelineCache::FEntry_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  ppFVar22 = local_48 + 2;
  lVar19 = 10;
  do {
    ppFVar1 = ppFVar22 + -2;
    ppFVar22 = ppFVar22 + -2;
    lVar19 = lVar19 + -1;
    if (*ppFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(*ppFVar1);
    }
  } while (lVar19 != 0);
  return;
}

// DequeueCompletedSyncPoints @ 145a10ee0

DeviceWideSyncPoint * __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::DequeueCompletedSyncPoints
          (ResidencyManagerInternal *this)

{
  CriticalSection *lpCriticalSection;
  _LIST_ENTRY *p_Var1;
  _LIST_ENTRY *p_Var2;
  DeviceWideSyncPoint *pDVar3;
  uint uVar4;
  ulonglong uVar5;
  _LIST_ENTRY *p_Var6;
  
  lpCriticalSection = &this->AsyncWorkMutex;
  if (lpCriticalSection != (CriticalSection *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  p_Var6 = &this->InFlightSyncPointsHead;
  p_Var1 = p_Var6->Flink;
  while (p_Var1 != p_Var6) {
    pDVar3 = (DeviceWideSyncPoint *)(p_Var1 + -1);
    uVar5 = 0;
    if (*(int *)&p_Var1[-1].Blink != 0) {
      do {
        p_Var2 = (_LIST_ENTRY *)
                 (**(code **)((longlong)*(pDVar3->pQueueSyncPoints[uVar5].pFence)->pFence + 0x40))()
        ;
        if (p_Var2 < p_Var1[uVar5 + 1].Blink) goto LAB_145a10f87;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)&p_Var1[-1].Blink);
    }
    p_Var1 = p_Var6->Flink;
    p_Var1->Blink->Flink = p_Var1->Flink;
    p_Var1->Flink->Blink = p_Var1->Blink;
    ::operator_delete(pDVar3,0x30);
    p_Var1 = p_Var6->Flink;
  }
  pDVar3 = (DeviceWideSyncPoint *)0x0;
LAB_145a10f87:
  if (lpCriticalSection != (CriticalSection *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pDVar3;
}

// Destroy @ 145a111e0

void __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::Destroy(ResidencyManagerInternal *this)

{
  _LIST_ENTRY *p_Var1;
  ID3D12Fence *pIVar2;
  ulonglong uVar3;
  _LIST_ENTRY *p_Var4;
  _LIST_ENTRY *p_Var5;
  BOOL BVar6;
  AsyncWorkload *pAVar7;
  
  pIVar2 = (this->AsyncThreadFence).pFence;
  if (pIVar2 != (ID3D12Fence *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
    (this->AsyncThreadFence).pFence = (ID3D12Fence *)0x0;
  }
  if (this->CompletionEvent != (HANDLE)0xffffffffffffffff) {
    CloseHandle(this->CompletionEvent);
    this->CompletionEvent = (void *)0xffffffffffffffff;
  }
  if (this->CurrentAsyncWorkloadHead != this->CurrentAsyncWorkloadTail) {
    pAVar7 = this->AsyncWorkQueue + this->CurrentAsyncWorkloadHead % this->AsyncWorkQueueSize;
    this->CurrentAsyncWorkloadHead = this->CurrentAsyncWorkloadHead + 1;
    while ((pAVar7 != (AsyncWorkload *)0x0 &&
           (this->CurrentAsyncWorkloadHead != this->CurrentAsyncWorkloadTail))) {
      uVar3 = this->CurrentAsyncWorkloadHead;
      this->CurrentAsyncWorkloadHead = this->CurrentAsyncWorkloadHead + 1;
      pAVar7 = this->AsyncWorkQueue + uVar3 % this->AsyncWorkQueueSize;
    }
  }
  this->FinishAsyncWork = true;
  BVar6 = SetEvent(this->AsyncWorkEvent);
  if (BVar6 == 0) {
    GetLastError();
  }
  if (this->AsyncWorkThread != (HANDLE)0xffffffffffffffff) {
    WaitForSingleObject(this->AsyncWorkThread,0xffffffff);
    CloseHandle(this->AsyncWorkThread);
    this->AsyncWorkThread = (void *)0xffffffffffffffff;
  }
  if (this->AsyncWorkEvent != (HANDLE)0xffffffffffffffff) {
    CloseHandle(this->AsyncWorkEvent);
    this->AsyncWorkEvent = (void *)0xffffffffffffffff;
  }
  if (this->AsyncThreadWorkCompletionEvent != (HANDLE)0xffffffffffffffff) {
    CloseHandle(this->AsyncThreadWorkCompletionEvent);
    this->AsyncThreadWorkCompletionEvent = (void *)0xffffffffffffffff;
  }
  p_Var1 = &this->QueueFencesListHead;
  p_Var4 = (this->QueueFencesListHead).Flink;
  while (p_Var4 != p_Var1) {
    if (p_Var4[-1].Flink != (_LIST_ENTRY *)0x0) {
      (*(code *)(p_Var4[-1].Flink)->Flink[1].Flink)();
      p_Var4[-1].Flink = (_LIST_ENTRY *)0x0;
    }
    p_Var5 = p_Var1->Flink;
    p_Var5->Blink->Flink = p_Var5->Flink;
    p_Var5->Flink->Blink = p_Var5->Blink;
    ::operator_delete(p_Var4 + -1,0x20);
    p_Var4 = p_Var1->Flink;
  }
  p_Var1 = &this->InFlightSyncPointsHead;
  p_Var4 = p_Var1->Flink;
  while (p_Var4 != p_Var1) {
    p_Var4->Blink->Flink = p_Var4->Flink;
    p_Var4->Flink->Blink = p_Var4->Blink;
    ::operator_delete(p_Var4 + -1,0x30);
    p_Var4 = p_Var1->Flink;
  }
  operator_delete__(this->AsyncWorkQueue);
  if (this->Device3 != (ID3D12Device3 *)0x0) {
    (**(code **)((longlong)*this->Device3 + 0x10))();
    this->Device3 = (ID3D12Device3 *)0x0;
  }
  if (this->Adapter != (IDXGIAdapter3 *)0x0) {
    (**(code **)((longlong)*this->Adapter + 0x10))();
    this->Adapter = (IDXGIAdapter3 *)0x0;
  }
  return;
}

// DispatchRays @ 145a11780

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

void __cdecl
DispatchRays(FD3D12CommandContext *param_1,FRayTracingShaderBindings *param_2,
            FD3D12RayTracingPipelineState *param_3,uint param_4,
            FD3D12RayTracingShaderBindingTableInternal *param_5,D3D12_DISPATCH_RAYS_DESC *param_6,
            ED3D12QueueType param_7,FD3D12Buffer *param_8,uint param_9)

{
  FMutex *this;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  char cVar3;
  int iVar4;
  FD3D12Device *pFVar5;
  FD3D12Resource *pFVar6;
  FD3D12RayTracingShader *pFVar7;
  longlong *plVar8;
  ID3D12CommandSignature *pIVar9;
  code *pcVar10;
  ulong64 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  atomic<unsigned_int> aVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_D3D12DispatchRays> FVar20;
  ulong64 *puVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ID3D12StateObject *pIVar25;
  FName FVar26;
  FRHIShaderBindingLayout *pFVar27;
  FD3D12RootSignature *pFVar28;
  FColor_u_0 local_278;
  uint local_274;
  FD3D12Device *local_270;
  FName local_268;
  FD3D12ExplicitDescriptorCache *local_260;
  FD3D12RootSignature *local_258;
  FName local_250;
  longlong local_248;
  FD3D12Adapter *local_240;
  FName local_238;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FD3D12RayTracingShader *local_208;
  longlong local_200;
  FD3D12RayTracingGlobalResourceBinder local_1f8;
  FD3D12RayTracingGlobalResourceBinder local_1e8;
  FName local_1d8 [2];
  FD3D12ExplicitDescriptorCache local_1c8;
  FD3D12ResourceLocation local_b8;
  
  FVar20 = StatPtr_STAT_D3D12DispatchRays;
  if (StatPtr_STAT_D3D12DispatchRays == (FThreadSafeStaticStat<FStat_STAT_D3D12DispatchRays>)0x0) {
    pFVar19 = FName::FName(local_1d8,"STAT_D3D12DispatchRays");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_D3D12DispatchRays>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12DispatchRays,*pFVar19,
                        L"DispatchRays","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                        L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar20;
  bVar13 = false;
  bVar12 = false;
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_145a118ee:
    bVar13 = bVar15;
    bVar12 = bVar14;
    bVar14 = false;
    local_250 = local_238;
    FVar26 = local_238;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_278.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_278._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_268.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0x158a);
        bVar13 = true;
        bVar12 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145a118ee;
    local_250 = FVar26;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar14 = true;
  }
  if ((*(longlong *)&param_1->field_0x300 == 0) &&
     (bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar5 = *(FD3D12Device **)&param_1->field_0x300;
  local_270 = pFVar5;
  if ((*(longlong *)&pFVar5->field_0x10 == 0) &&
     (bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_240 = *(FD3D12Adapter **)&pFVar5->field_0x10;
  local_248 = 0;
  if (param_8 != (FD3D12Buffer *)0x0) {
    uVar16 = 0;
    if ((int)param_7 < (pFVar5->Queues).ArrayNum) {
      uVar16 = ~param_7 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar23 = *(longlong *)((pFVar5->Queues).AllocatorInstance.InlineData[(int)param_7].Pad + 0x250);
    pFVar6 = *(FD3D12Resource **)(lVar23 + 0x140);
    local_248 = lVar23;
    FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)param_1,pFVar6,IndirectArgs,CopyDest,0);
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)param_1,(FD3D12Resource *)param_8->_padding_,
               SRVGraphicsNonPixel|IndirectArgs,CopySrc,0);
    FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)param_1);
    uVar16 = *(uint *)(lVar23 + 400);
    FD3D12ResourceLocation::FD3D12ResourceLocation(&local_b8,local_270);
    puVar21 = FD3D12FastAllocator::Allocate(&local_270->DefaultFastAllocator,0x68,0x100,&local_b8);
    uVar11 = (param_6->RayGenerationShaderRecord).SizeInBytes;
    *puVar21 = (param_6->RayGenerationShaderRecord).StartAddress;
    puVar21[1] = uVar11;
    uVar11 = (param_6->MissShaderTable).SizeInBytes;
    puVar21[2] = (param_6->MissShaderTable).StartAddress;
    puVar21[3] = uVar11;
    uVar11 = (param_6->HitGroupTable).StartAddress;
    puVar21[4] = (param_6->MissShaderTable).StrideInBytes;
    puVar21[5] = uVar11;
    uVar11 = (param_6->HitGroupTable).StrideInBytes;
    puVar21[6] = (param_6->HitGroupTable).SizeInBytes;
    puVar21[7] = uVar11;
    uVar11 = (param_6->CallableShaderTable).SizeInBytes;
    puVar21[8] = (param_6->CallableShaderTable).StartAddress;
    puVar21[9] = uVar11;
    puVar21[10] = (param_6->CallableShaderTable).StrideInBytes;
    local_228 = (local_b8.UnderlyingResource)->DebugName;
    local_220 = pFVar6->DebugName;
    FD3D12CommandContext::CopyBufferRegionChecked
              (param_1,(pFVar6->Resource).Reference,&local_220,(ulonglong)uVar16,
               ((local_b8.UnderlyingResource)->Resource).Reference,&local_228,
               local_b8.OffsetFromBaseOfResource,0x58);
    local_218 = *(FName *)(param_8->_padding_ + 0x9c);
    local_210 = pFVar6->DebugName;
    FD3D12CommandContext::CopyBufferRegionChecked
              (param_1,(pFVar6->Resource).Reference,&local_210,(ulonglong)(uVar16 + 0x58),
               *(ID3D12Resource **)(param_8->_padding_ + 0x20),&local_218,
               (ulonglong)param_9 + param_8->_padding_,0x10);
    FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)param_1,pFVar6,CopyDest,IndirectArgs,0);
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)param_1,(FD3D12Resource *)param_8->_padding_,CopySrc,
               SRVGraphicsNonPixel|IndirectArgs,0);
    FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)param_1);
    FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_b8);
  }
  if ((param_1->StateCache).LastComputePipelineType != RayTracing) {
    (param_1->StateCache).PipelineState.Common.bNeedSetPSO = true;
    (param_1->StateCache).PipelineState.Common.bNeedSetRootConstants = true;
    (param_1->StateCache).PipelineState.Compute.bNeedSetRootSignature = true;
    (param_1->StateCache).LastComputePipelineType = RayTracing;
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  lVar23 = (longlong)(int)param_4;
  local_274 = ~param_4 >> 0x1f;
  uVar16 = 0;
  if ((int)param_4 < (param_3->RayGenShaders).Shaders.ArrayNum) {
    uVar16 = local_274;
  }
  if ((uVar16 == 0) &&
     (bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar7 = *(FD3D12RayTracingShader **)
            ((param_3->RayGenShaders).Shaders.AllocatorInstance.Data + lVar23 * 8);
  local_208 = pFVar7;
  local_200 = lVar23;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.Hash = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.Flags = None;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.NumUniformBufferEntries = 0;
    memset(&`public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
            ::__l2::Default.UniformBufferEntries,0,0xc0);
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayNum = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[0].LayoutName.Data.ArrayMax = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[0].field1_0x10.Flags = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayNum = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[1].LayoutName.Data.ArrayMax = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[1].field1_0x10.Flags = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayNum = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[2].LayoutName.Data.ArrayMax = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[2].field1_0x10.Flags = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayNum = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[3].LayoutName.Data.ArrayMax = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[3].field1_0x10.Flags = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayNum = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[4].LayoutName.Data.ArrayMax = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[4].field1_0x10.Flags = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayNum = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[5].LayoutName.Data.ArrayMax = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[5].field1_0x10.Flags = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayNum = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[6].LayoutName.Data.ArrayMax = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[6].field1_0x10.Flags = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayNum = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[7].LayoutName.Data.ArrayMax = 0;
    `public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
    ::__l2::Default.UniformBufferEntries.Elements[7].field1_0x10.Flags = 0;
    atexit(`FD3D12CommandContext::GetShaderBindingLayout'::__l2::
           _dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&`public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar27 = &`public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
             ::__l2::Default;
  if (param_1->ShaderBindinglayout != (FRHIShaderBindingLayout *)0x0) {
    pFVar27 = param_1->ShaderBindinglayout;
  }
  if (((uint)pFVar7->_padding_ != pFVar27->Hash) &&
     (bVar15 = FDebug::CheckVerifyFailedImpl2
                         ("RayGenShader->ShaderBindingLayoutHash == ShaderBindingLayout.GetHash()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x15e1,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_258 = FD3D12Adapter::GetGlobalRayTracingRootSignature(local_240,pFVar27);
  if ((param_5 == (FD3D12RayTracingShaderBindingTableInternal *)0x0) ||
     (local_260 = param_5->DescriptorCache, local_260 == (FD3D12ExplicitDescriptorCache *)0x0)) {
    if ((*(longlong *)&param_1->field_0x300 == 0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FD3D12ExplicitDescriptorCache::FD3D12ExplicitDescriptorCache
              (&local_1c8,*(FD3D12Device **)&param_1->field_0x300,5);
    if ((local_1c8._padding_ == 0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_1c8.BindlessConfiguration = RayTracing;
    if (*(int *)(local_1c8._padding_ + 0x750) < 1) {
      local_1c8.bBindless = false;
      FD3D12ExplicitDescriptorHeap::Init
                (&local_1c8.ViewHeap,0x50,D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);
      if (local_1c8.bBindless == false) {
        FD3D12ExplicitDescriptorHeap::Init
                  (&local_1c8.SamplerHeap,0x20,D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER);
      }
    }
    else {
      local_1c8.bBindless = true;
    }
    FD3D12CommandContext::SetExplicitDescriptorCache(param_1,&local_1c8);
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    plVar8 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar8 + 0xe8))(plVar8,param_3->GlobalRootSignature);
    pFVar28 = local_258;
    local_1e8.DescriptorCache = &local_1c8;
    local_1e8.CommandContext = param_1;
    param_8._0_1_ =
         SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>
                   (pFVar7,local_258,(param_2->BindlessParameters).ArrayNum,
                    (FRHIShaderParameterResource *)
                    (param_2->BindlessParameters).AllocatorInstance.Data,0x40,param_2->Textures,0x40
                    ,param_2->SRVs,0x10,param_2->UniformBuffers,0x20,param_2->Samplers,0x10,
                    param_2->UAVs,0,(void *)0x0,&local_1e8);
    DestructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
              ((FWorkerThreadData *)local_1c8.WorkerData.AllocatorInstance.Data,
               local_1c8.WorkerData.ArrayNum);
    if ((FWorkerThreadData *)local_1c8.WorkerData.AllocatorInstance.Data != (FWorkerThreadData *)0x0
       ) {
      FMemory::Free(local_1c8.WorkerData.AllocatorInstance.Data);
    }
    FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&local_1c8.SamplerHeap);
    FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&local_1c8.ViewHeap);
  }
  else {
    this = &param_5->DispatchMutex;
    if ((this == (FMutex *)0x0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    LOCK();
    bVar15 = this->State == (atomic<unsigned_char>)0x0;
    if (bVar15) {
      this->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar15) {
      UE::FMutex::LockSlow(this);
    }
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5614,"SetRayTracingShaderResources",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                 ,0x15ee);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5614);
    }
    FD3D12CommandContext::SetExplicitDescriptorCache(param_1,local_260);
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    plVar8 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar8 + 0xe8))(plVar8,param_3->GlobalRootSignature);
    pFVar28 = local_258;
    local_1f8.DescriptorCache = local_260;
    local_1f8.CommandContext = param_1;
    param_8._0_1_ =
         SetRayTracingShaderResources<FD3D12RayTracingGlobalResourceBinder>
                   (local_208,local_258,(param_2->BindlessParameters).ArrayNum,
                    (FRHIShaderParameterResource *)
                    (param_2->BindlessParameters).AllocatorInstance.Data,0x40,param_2->Textures,0x40
                    ,param_2->SRVs,0x10,param_2->UniformBuffers,0x20,param_2->Samplers,0x10,
                    param_2->UAVs,0,(void *)0x0,&local_1f8);
    FD3D12RayTracingShaderBindingTableInternal::UpdateResidency(param_5,param_1);
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (this != (FMutex *)0x0) {
      LOCK();
      aVar2 = this->State;
      this->State = (atomic<unsigned_char>)((char)this->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this);
      }
    }
  }
  FD3D12ContextCommon::BindDiagnosticBuffer((FD3D12ContextCommon *)param_1,pFVar28,Compute);
  pFVar5 = local_270;
  cVar3 = pFVar28->StaticShaderBindingSlot;
  if (-1 < cVar3) {
    uVar24 = 0;
    if (pFVar27->NumUniformBufferEntries != 0) {
      if ((pFVar27->NumUniformBufferEntries == 0) &&
         (bVar15 = FDebug::CheckVerifyFailedImpl2
                             ("Index < NumUniformBufferEntries",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderBindingLayout.h"
                              ,0x61,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      do {
        uVar16 = (pFVar27->UniformBufferEntries).Elements[uVar24].field1_0x10.Flags;
        uVar22 = (uint)uVar24;
        uVar17 = 0;
        if ((int)uVar22 < (param_1->StaticUniformBuffers).ArrayNum) {
          uVar17 = ~uVar22 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar23 = *(longlong *)
                  ((param_1->StaticUniformBuffers).AllocatorInstance.Data +
                  (longlong)(int)uVar22 * 8);
        if (lVar23 == 0) {
          bVar15 = FDebug::CheckVerifyFailedImpl2
                             ("UniformBuffer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x1610,
                              L"Static uniform buffer at index %d is referenced in the shader binding layout but not provided in the last RHISetStaticUniformBuffers() command"
                             );
          if (bVar15) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar23 = 0;
        }
        else {
          lVar23 = *(longlong *)(lVar23 + 0x60 + (ulonglong)*(uint *)&pFVar5->field_0x8 * 8);
        }
        if (*(longlong *)(lVar23 + 0x130) != 0) {
          if (*(longlong *)&param_1->field_0x188 == 0) {
            (**(code **)(*(longlong *)param_1 + 8))(param_1);
          }
          plVar8 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x28);
          piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
          *piVar1 = *piVar1 + 1;
          (**(code **)(*plVar8 + 0x128))
                    (plVar8,(uVar16 >> 4 & 0x3f) + (int)cVar3,*(undefined8 *)(lVar23 + 0x130));
        }
        uVar24 = (ulonglong)(uVar22 + 1);
        FVar26 = local_250;
      } while (uVar22 + 1 < pFVar27->NumUniformBufferEntries);
    }
  }
  if (param_8._0_1_ == false) goto LAB_145a123ca;
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)param_1);
  if (((GRayTracingAllowSpecializedStateObjects == 0) ||
      ((param_3->SpecializedStateObjects).ArrayNum == 0)) ||
     (iVar4 = (param_3->SpecializationIndices).ArrayNum, iVar4 == 0)) {
LAB_145a122d7:
    pIVar25 = (param_3->StateObject).Reference;
  }
  else {
    uVar16 = 0;
    if ((int)param_4 < iVar4) {
      uVar16 = local_274;
    }
    lVar23 = local_200;
    if ((uVar16 == 0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       lVar23 = (longlong)(int)param_4, bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar16 = *(uint *)((param_3->SpecializationIndices).AllocatorInstance.Data + lVar23 * 4);
    if (uVar16 == 0xffffffff) goto LAB_145a122d7;
    uVar17 = 0;
    if ((int)uVar16 < (param_3->SpecializedStateObjects).ArrayNum) {
      uVar17 = ~uVar16 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pIVar25 = *(ID3D12StateObject **)
               ((param_3->SpecializedStateObjects).AllocatorInstance.Data +
               (longlong)(int)uVar16 * 8);
    if (pIVar25 == (ID3D12StateObject *)0x0) goto LAB_145a122d7;
  }
  aVar18 = (atomic<unsigned_int>)FD3D12CommandContext::GetFrameFenceCounter(param_1);
  (param_3->FrameCounter).LastUsedFrame = aVar18;
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  plVar8 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x48);
  piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*plVar8 + 600))(plVar8,pIVar25);
  lVar23 = local_248;
  if (local_248 == 0) {
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    plVar8 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x48);
    piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar8 + 0x260))(plVar8,param_6);
  }
  else {
    pIVar9 = (local_240->DispatchRaysIndirectCommandSignature).Reference;
    if (*(longlong *)&param_1->field_0x188 == 0) {
      (**(code **)(*(longlong *)param_1 + 8))(param_1);
    }
    plVar8 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x48);
    piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar8 + 0x1d8))
              (plVar8,pIVar9,1,*(undefined8 *)(*(longlong *)(lVar23 + 0x140) + 0x20),
               *(undefined8 *)(lVar23 + 400),0,0);
  }
LAB_145a123ca:
  FD3D12CommandContext::UnsetExplicitDescriptorCache(param_1);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// DumpRayTracingGeometries @ 145a13710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
DumpRayTracingGeometries
          (EDumpRayTracingGeometryMode param_1,int param_2,FString *param_3,bool param_4,
          FBufferedOutputDevice *param_5)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FD3D12RayTracingGeometryTracker *this;
  FDateTime this_00;
  IFileManager *pIVar9;
  longlong *plVar10;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStackY_2e8 [32];
  FIdentityFunctor local_290 [8];
  FName local_288;
  uint local_280;
  int local_27c;
  uint local_278;
  longlong local_270;
  longlong *local_268;
  TArray<FD3D12RayTracingGeometry_*,TSizedDefaultAllocator<32>_> local_260;
  longlong local_250;
  undefined4 local_248;
  FBufferedOutputDevice *local_240;
  FString *local_238;
  LPCRITICAL_SECTION local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_1a8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_240 = param_5;
  bVar5 = false;
  bVar4 = false;
  local_27c = param_2;
  local_238 = param_3;
  this = GetD3D12RayTracingGeometryTracker();
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CS;
  local_230 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  TSet<FD3D12RayTracingGeometry_*,DefaultKeyFuncs<FD3D12RayTracingGeometry_*,0>,FDefaultSetAllocator>
  ::Array(&this->Geometries,&local_260);
  AlgoImpl::
  IntroSortInternal<FD3D12RayTracingGeometry_*,int,FIdentityFunctor,TDereferenceWrapper<FD3D12RayTracingGeometry_*,_DumpRayTracingGeometries_::__l2::<lambda_2>_>_>
            ((FD3D12RayTracingGeometry **)local_260.AllocatorInstance.Data,local_260.ArrayNum,
             local_290[0],(<lambda_2> *)local_290);
  FName::FName(&local_288,L"D3D12RayTracing");
  local_250 = 0;
  local_270 = 0;
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)param_5,&local_288,Log,L"Tracked FD3D12RayTracingGeometry objects");
  if ((param_2 < 0) || (local_260.ArrayNum < param_2)) {
    local_27c = local_260.ArrayNum;
    param_2 = local_260.ArrayNum;
  }
  else if (param_2 != local_260.ArrayNum) {
    FOutputDevice::CategorizedLogfImpl
              ((FOutputDevice *)param_5,&local_288,Log,L"Showing %d out of %d");
  }
  plVar10 = (longlong *)0x0;
  local_268 = (longlong *)0x0;
  if (param_4) {
    this_00 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this_00.Ticks,&local_1e0);
    FPaths::ProfilingDir(&local_1f0);
    FString::PrintfImpl(&local_228,L"%sd3d12DumpRayTracingGeometries-%s.csv");
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    pIVar9 = IFileManager::Get();
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_228.Data.ArrayNum != 0) {
      FVar12.Data = local_228.Data.AllocatorInstance.Data;
    }
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar12.Data,0x10);
    pcVar2 = *(code **)(*plVar10 + 0x188);
    local_268 = plVar10;
    pTVar11 = StringCast<char,128,wchar_t>
                        (&local_1a8,
                         L"Name,Size (MBs),Prims,Segments,Compaction,Update,MarkedForDelete\n");
    (*pcVar2)(plVar10,pTVar11->Ptr,0x41);
    if ((void *)local_1a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._padding_);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  uVar14 = 0;
  iVar8 = 0;
  local_280 = 0;
  local_278 = 0;
  uVar15 = uVar14;
  uVar17 = uVar14;
  if (0 < local_260.ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)(uint)uVar15 < local_260.ArrayNum) {
        uVar7 = ~(uint)uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar3 = *(longlong *)(local_260.AllocatorInstance.Data + uVar14);
      lVar16 = *(longlong *)(lVar3 + 0x398);
      if (lVar16 == 0) {
        lVar16 = *(longlong *)(lVar3 + 200);
      }
      if ((int)uVar17 < param_2) {
        if (1 < (param_3->Data).ArrayNum) {
          FDebugName::ToString((FDebugName *)(lVar3 + 0x338),&local_218);
          iVar1 = (param_3->Data).ArrayNum;
          iVar8 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar8 = 0;
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
          }
          iVar8 = FString::Find(&local_218,pwVar13,iVar8,IgnoreCase,FromStart,-1);
          if (iVar8 == -1) {
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
            goto LAB_145a13ac7;
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
        }
        if (param_4) {
          local_248 = *(undefined4 *)(lVar3 + 0xf0);
          if ((((FDebugName *)(lVar3 + 0x338))->Name != (FName)0x0) ||
             (*(int *)(lVar3 + 0x340) != 0)) {
            bVar4 = true;
            FDebugName::ToString((FDebugName *)(lVar3 + 0x338),&local_1d0);
          }
          FString::PrintfImpl(&local_208,L"%s,%.3f,%d,%d,%d,%d,%d\n");
          if ((bVar4) &&
             (bVar4 = false, local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          plVar10 = local_268;
          pcVar2 = *(code **)(*local_268 + 0x188);
          iVar8 = local_208.Data.ArrayNum;
          FVar12.Data = (FScriptContainerElement *)L"";
          if (iVar8 != 0) {
            FVar12.Data = local_208.Data.AllocatorInstance.Data;
          }
          iVar1 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar1 = 0;
          }
          pTVar11 = StringCast<char,128,wchar_t>(&local_108,(wchar_t *)FVar12.Data);
          (*pcVar2)(plVar10,pTVar11->Ptr,(longlong)iVar1);
          FVar12.Data = local_208.Data.AllocatorInstance.Data;
          if ((void *)local_108._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_108._padding_);
            FVar12.Data = local_208.Data.AllocatorInstance.Data;
          }
LAB_145a13d31:
          if (FVar12.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar12.Data);
          }
        }
        else {
          if ((((FDebugName *)(lVar3 + 0x338))->Name != (FName)0x0) ||
             (*(int *)(lVar3 + 0x340) != 0)) {
            bVar5 = true;
            FDebugName::ToString((FDebugName *)(lVar3 + 0x338),&local_1c0);
          }
          FOutputDevice::CategorizedLogfImpl
                    ((FOutputDevice *)local_240,&local_288,Log,
                     L"Name: %s - Size: %.3f MB - Prims: %d - Segments: %d -  Compaction: %d - Update: %d"
                    );
          if (bVar5) {
            bVar5 = false;
            FVar12.Data = local_1c0.Data.AllocatorInstance.Data;
            goto LAB_145a13d31;
          }
        }
        local_270 = local_270 + lVar16;
        local_280 = local_280 + 1;
        uVar17 = (ulonglong)local_280;
        param_3 = local_238;
        param_2 = local_27c;
      }
LAB_145a13ac7:
      iVar8 = (int)uVar17;
      uVar14 = uVar14 + 8;
      local_250 = local_250 + lVar16;
      local_278 = local_278 + 1;
      plVar10 = local_268;
      lpCriticalSection = local_230;
      uVar15 = (ulonglong)local_278;
    } while ((int)local_278 < local_260.ArrayNum);
  }
  if (param_4) {
    if (plVar10 != (longlong *)0x0) {
      (**(code **)*plVar10)(plVar10,1);
    }
  }
  else {
    if ((iVar8 != local_260.ArrayNum) && (iVar8 != 0)) {
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)local_240,&local_288,Log,
                 L"Use command `D3D12.DumpRayTracingGeometries all/N [name]` to dump all or N objects. Optionally add \'name\' to filter entries, such as \'skm_\'."
                );
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)local_240,&local_288,Log,
                 L"Shown %d entries. Size: %.3f MB (%.2f%% of total)");
    }
    FOutputDevice::CategorizedLogfImpl
              ((FOutputDevice *)local_240,&local_288,Log,L"Total size: %.3f MB");
  }
  if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.AllocatorInstance.Data);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// EndTrackingObject @ 145a14710

void __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::EndTrackingObject
          (ResidencyManagerInternal *this,ManagedObject *param_1)

{
  CriticalSection *lpCriticalSection;
  uint *puVar1;
  ulong64 *puVar2;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection != (CriticalSection *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  ((param_1->ListEntry).Blink)->Flink = (param_1->ListEntry).Flink;
  ((param_1->ListEntry).Flink)->Blink = (param_1->ListEntry).Blink;
  if (param_1->ResidencyStatus == RESIDENT) {
    puVar1 = &(this->LRU).NumResidentObjects;
    *puVar1 = *puVar1 - 1;
    puVar2 = &(this->LRU).ResidentSize;
    *puVar2 = *puVar2 - param_1->Size;
  }
  else {
    puVar1 = &(this->LRU).NumEvictedObjects;
    *puVar1 = *puVar1 - 1;
  }
  if (lpCriticalSection != (CriticalSection *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// FilterToQueueCompatibleAccess @ 145a15710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */

D3D12_BARRIER_ACCESS __cdecl
FilterToQueueCompatibleAccess(D3D12_BARRIER_ACCESS param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  bool bVar2;
  D3D12_BARRIER_ACCESS DVar3;
  
  if (param_2 == Graphics) {
    return param_1 & (D3D12_BARRIER_ACCESS_NO_ACCESS|D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE|
                      D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
                      D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ|
                      D3D12_BARRIER_ACCESS_RESOLVE_SOURCE|D3D12_BARRIER_ACCESS_RESOLVE_DEST|
                      D3D12_BARRIER_ACCESS_COPY_SOURCE|D3D12_BARRIER_ACCESS_COPY_DEST|
                      D3D12_BARRIER_ACCESS_INDIRECT_ARGUMENT|D3D12_BARRIER_ACCESS_STREAM_OUTPUT|
                      D3D12_BARRIER_ACCESS_SHADER_RESOURCE|D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ|
                      D3D12_BARRIER_ACCESS_DEPTH_STENCIL_WRITE|D3D12_BARRIER_ACCESS_UNORDERED_ACCESS
                      |D3D12_BARRIER_ACCESS_RENDER_TARGET|D3D12_BARRIER_ACCESS_INDEX_BUFFER|
                      D3D12_BARRIER_ACCESS_CONSTANT_BUFFER|D3D12_BARRIER_ACCESS_VERTEX_BUFFER);
  }
  if ((param_2 != AsyncCompute) && (param_2 != All)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x39f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      DVar3 = (*pcVar1)();
      return DVar3;
    }
    return D3D12_BARRIER_ACCESS_COMMON;
  }
  return param_1 & (D3D12_BARRIER_ACCESS_NO_ACCESS|D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE|
                    D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE|
                    D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ|
                    D3D12_BARRIER_ACCESS_RESOLVE_SOURCE|D3D12_BARRIER_ACCESS_COPY_SOURCE|
                    D3D12_BARRIER_ACCESS_COPY_DEST|D3D12_BARRIER_ACCESS_INDIRECT_ARGUMENT|
                    D3D12_BARRIER_ACCESS_SHADER_RESOURCE|D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ|
                    D3D12_BARRIER_ACCESS_UNORDERED_ACCESS|D3D12_BARRIER_ACCESS_CONSTANT_BUFFER);
}

// FilterToQueueCompatibleSync @ 145a15780

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */

D3D12_BARRIER_SYNC __cdecl
FilterToQueueCompatibleSync(D3D12_BARRIER_SYNC param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  bool bVar2;
  D3D12_BARRIER_SYNC DVar3;
  
  if (param_2 == Graphics) {
    return param_1 & (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
                      D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
                      D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
                      D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
                      D3D12_BARRIER_SYNC_NON_PIXEL_SHADING|D3D12_BARRIER_SYNC_ALL_SHADING|
                      D3D12_BARRIER_SYNC_EXECUTE_INDIRECT|D3D12_BARRIER_SYNC_RESOLVE|
                      D3D12_BARRIER_SYNC_COPY|D3D12_BARRIER_SYNC_RAYTRACING|
                      D3D12_BARRIER_SYNC_COMPUTE_SHADING|D3D12_BARRIER_SYNC_RENDER_TARGET|
                      D3D12_BARRIER_SYNC_DEPTH_STENCIL|D3D12_BARRIER_SYNC_PIXEL_SHADING|
                      D3D12_BARRIER_SYNC_VERTEX_SHADING|D3D12_BARRIER_SYNC_INDEX_INPUT|
                      D3D12_BARRIER_SYNC_DRAW|D3D12_BARRIER_SYNC_ALL);
  }
  if (param_2 == AsyncCompute) {
    return param_1 & (D3D12_BARRIER_SYNC_SPLIT|
                      D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
                      D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
                      D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
                      D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
                      D3D12_BARRIER_SYNC_NON_PIXEL_SHADING|D3D12_BARRIER_SYNC_ALL_SHADING|
                      D3D12_BARRIER_SYNC_EXECUTE_INDIRECT|D3D12_BARRIER_SYNC_COPY|
                      D3D12_BARRIER_SYNC_RAYTRACING|D3D12_BARRIER_SYNC_COMPUTE_SHADING|
                     D3D12_BARRIER_SYNC_ALL);
  }
  if (param_2 == All) {
    return param_1 & (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
                      D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
                      D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
                      D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
                      D3D12_BARRIER_SYNC_NON_PIXEL_SHADING|D3D12_BARRIER_SYNC_ALL_SHADING|
                      D3D12_BARRIER_SYNC_EXECUTE_INDIRECT|D3D12_BARRIER_SYNC_COPY|
                      D3D12_BARRIER_SYNC_RAYTRACING|D3D12_BARRIER_SYNC_COMPUTE_SHADING|
                     D3D12_BARRIER_SYNC_ALL);
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                     ,0x366,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    DVar3 = (*pcVar1)();
    return DVar3;
  }
  return D3D12_BARRIER_SYNC_NONE;
}

// GetAccessCompatibleSync @ 145a17ca0

/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */

D3D12_BARRIER_SYNC __cdecl GetAccessCompatibleSync(D3D12_BARRIER_ACCESS param_1)

{
  int iVar1;
  uint uVar2;
  D3D12_BARRIER_ACCESS DVar3;
  D3D12_BARRIER_SYNC DVar4;
  
  if ((param_1 & ~D3D12_BARRIER_ACCESS_NO_ACCESS) == D3D12_BARRIER_ACCESS_COMMON) {
    return ~D3D12_BARRIER_SYNC_NONE;
  }
  DVar4 = D3D12_BARRIER_SYNC_NONE;
  if (__isa_available < 5) {
    iVar1 = 0x1f;
    if (param_1 != D3D12_BARRIER_ACCESS_COMMON) {
      for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    if (param_1 != D3D12_BARRIER_ACCESS_COMMON) {
      uVar2 = 0x1f - iVar1;
    }
    else {
      uVar2 = 0x20;
    }
  }
  else {
    uVar2 = LZCOUNT(param_1);
  }
  while (uVar2 < 0x20) {
    DVar3 = (1 << ((byte)(0x1f - uVar2) & 0x1f)) - D3D12_BARRIER_ACCESS_VERTEX_BUFFER & param_1;
    DVar4 = DVar4 | AccessCompatibleSync.Elements[0x1f - uVar2];
    if (__isa_available < 5) {
      iVar1 = 0x1f;
      if (DVar3 != D3D12_BARRIER_ACCESS_COMMON) {
        for (; DVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (DVar3 != D3D12_BARRIER_ACCESS_COMMON) {
        uVar2 = 0x1f - iVar1;
      }
      else {
        uVar2 = 0x20;
      }
    }
    else {
      uVar2 = LZCOUNT(DVar3);
    }
  }
  return DVar4;
}

// GetD3D12RayTracingGeometryTracker @ 145a18280

FD3D12RayTracingGeometryTracker * __cdecl GetD3D12RayTracingGeometryTracker(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Instance.CS,4000);
      atexit(`GetD3D12RayTracingGeometryTracker'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&_TSS0);
      return &Instance;
    }
  }
  return &Instance;
}

// GetD3D12ResourceState @ 145a18310

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

D3D12_RESOURCE_STATES __cdecl
GetD3D12ResourceState
          (ED3D12Access param_1,ED3D12QueueType param_2,FD3D12ResourceDesc *param_3,
          FD3D12Texture *param_4)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  D3D12_RESOURCE_STATES DVar4;
  uint *puVar5;
  D3D12_RESOURCE_STATES DVar6;
  ED3D12Access EVar7;
  FName local_38;
  FString local_30;
  
  if (param_1 == Discard) {
    lVar2 = param_3->_padding_;
    if (((lVar2 & 1) != 0) && (param_2 == Direct)) {
      return D3D12_RESOURCE_STATE_RENDER_TARGET;
    }
    if (((lVar2 & 2) != 0) && (param_2 == Direct)) {
      return D3D12_RESOURCE_STATE_DEPTH_WRITE;
    }
    DVar4 = D3D12_RESOURCE_STATE_COMMON;
    if ((lVar2 & 4) != 0) {
      DVar4 = D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
    }
    return DVar4;
  }
  EVar7 = param_1 & ~Discard;
  if (EVar7 < (DSVWrite|CPURead)) {
    if (EVar7 != DSVWrite) {
      if (EVar7 < (UAVMask|CPURead)) {
        if (EVar7 == UAVMask) {
          return D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
        }
        if (EVar7 == Present) {
          return D3D12_RESOURCE_STATE_COMMON;
        }
        if ((EVar7 - UAVCompute & 0xfffffbff) == 0) {
          return D3D12_RESOURCE_STATE_UNORDERED_ACCESS;
        }
      }
      else {
        if (EVar7 == RTV) {
          return D3D12_RESOURCE_STATE_RENDER_TARGET;
        }
        if (EVar7 == CopyDest) {
          return D3D12_RESOURCE_STATE_COPY_DEST;
        }
        if (EVar7 == ResolveDst) {
          return D3D12_RESOURCE_STATE_RESOLVE_DEST;
        }
      }
LAB_145a1843b:
      DVar4 = D3D12_RESOURCE_STATE_COMMON;
      if ((param_4 != (FD3D12Texture *)0x0) &&
         (puVar5 = (uint *)(**(code **)(param_4->_padding_ + 0x20))(param_4),
         DVar4 = D3D12_RESOURCE_STATE_COMMON, (*puVar5 >> 0x1d & 1) != 0)) {
        DVar4 = GetSkipFastClearEliminateStateFlags();
      }
      if (EVar7 != (DSVWrite|DSVRead)) {
        if ((param_1 & (BVHWrite|BVHRead)) == Unknown) {
          if (((param_1 & WritableMask) != Unknown) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("!(EnumHasAnyFlags(D3D12AccessWithoutDiscard, ED3D12Access::WritableMask))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                                 ,0x119,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            DVar4 = (*pcVar1)();
            return DVar4;
          }
          if (((param_1 & ReadOnlyMask) == Unknown) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("EnumHasAnyFlags(D3D12AccessWithoutDiscard, ED3D12Access::ReadOnlyMask)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                                 ,0x11a,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            DVar4 = (*pcVar1)();
            return DVar4;
          }
          DVar6 = D3D12_RESOURCE_STATE_COMMON;
          if (((param_1 & SRVGraphics) != Unknown) &&
             (DVar6 = D3D12_RESOURCE_STATE_COMMON, param_2 == Direct)) {
            DVar6 = DVar4 | D3D12_RESOURCE_STATE_ALL_SHADER_RESOURCE;
          }
          if ((param_1 & SRVCompute) != Unknown) {
            DVar6 = DVar6 | DVar4 | D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
          }
          DVar4 = DVar6 | (D3D12_RESOURCE_STATE_INDEX_BUFFER|
                          D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER);
          if ((param_1 & VertexOrIndexBuffer) == Unknown) {
            DVar4 = DVar6;
          }
          DVar6 = DVar4 | D3D12_RESOURCE_STATE_COPY_SOURCE;
          if ((param_1 & CopySrc) == Unknown) {
            DVar6 = DVar4;
          }
          DVar4 = DVar6 | D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT;
          if ((param_1 & IndirectArgs) == Unknown) {
            DVar4 = DVar6;
          }
          DVar6 = DVar4 | D3D12_RESOURCE_STATE_RESOLVE_SOURCE;
          if ((EVar7 >> 8 & 1) == 0) {
            DVar6 = DVar4;
          }
          DVar4 = DVar6 | D3D12_RESOURCE_STATE_DEPTH_READ;
          if ((EVar7 >> 9 & 1) == 0) {
            DVar4 = DVar6;
          }
          if ((param_1 >> 0x13 & 1) != 0) {
            if (GRHIGlobals.VariableRateShading.SupportsAttachment == false) {
              if ((bLogOnce != false) && (2 < (byte)LogD3D12RHI._0_1_)) {
                if (param_4 == (FD3D12Texture *)0x0) {
                  UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
                }
                else {
                  local_38 = (FName)param_4->_padding_;
                  FName::GetPlainNameString(&local_38,&local_30);
                  UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
                  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_30.Data.AllocatorInstance.Data);
                  }
                }
              }
              bLogOnce = false;
            }
            DVar4 = DVar4 | D3D12_RESOURCE_STATE_SHADING_RATE_SOURCE;
          }
          if (DVar4 == D3D12_RESOURCE_STATE_COMMON) {
            bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("State != D3D12_RESOURCE_STATE_COMMON",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                               ,0x14f,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              DVar4 = (*pcVar1)();
              return DVar4;
            }
            return D3D12_RESOURCE_STATE_COMMON;
          }
          return DVar4;
        }
        goto LAB_145a18475;
      }
    }
    DVar4 = D3D12_RESOURCE_STATE_DEPTH_WRITE;
  }
  else {
    if (Common < EVar7) {
      if (EVar7 == GenericRead) {
        return D3D12_RESOURCE_STATE_GENERIC_READ;
      }
      bVar3 = EVar7 == ReadOnlyExclusiveMask;
LAB_145a18435:
      if (bVar3) {
        return D3D12_RESOURCE_STATE_GENERIC_READ;
      }
      goto LAB_145a1843b;
    }
    if (EVar7 == Common) {
      return D3D12_RESOURCE_STATE_COMMON;
    }
    if ((EVar7 - BVHRead & 0xfffeffff) != 0) {
      bVar3 = EVar7 == ReadOnlyMask;
      goto LAB_145a18435;
    }
LAB_145a18475:
    DVar4 = D3D12_RESOURCE_STATE_RAYTRACING_ACCELERATION_STRUCTURE;
  }
  return DVar4;
}

// GetEBAccess @ 145a18960

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */

D3D12_BARRIER_ACCESS __cdecl GetEBAccess(ED3D12Access param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  bool bVar2;
  D3D12_BARRIER_ACCESS DVar3;
  D3D12_BARRIER_ACCESS DVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_2 == None) {
    iVar6 = 0x4ef;
    pcVar5 = "!\"Enclosing block should never be called\"";
  }
  else {
    if (((param_1 == Unknown) || ((param_1 >> 0x14 & 1) != 0)) || ((param_1 >> 0x15 & 1) != 0)) {
      return D3D12_BARRIER_ACCESS_COMMON;
    }
    if ((param_1 >> 0x12 & 1) == 0) {
      DVar4 = (param_1 & IndirectArgs) << 7;
      DVar3 = DVar4 | (D3D12_BARRIER_ACCESS_INDEX_BUFFER|D3D12_BARRIER_ACCESS_CONSTANT_BUFFER|
                      D3D12_BARRIER_ACCESS_VERTEX_BUFFER);
      if ((param_1 & VertexOrIndexBuffer) == Unknown) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_ACCESS_SHADER_RESOURCE;
      if ((param_1 & SRVMask) == Unknown) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_ACCESS_COPY_SOURCE;
      if ((param_1 & CopySrc) == Unknown) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_ACCESS_RESOLVE_SOURCE;
      if ((param_1 >> 8 & 1) == 0) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ;
      if ((param_1 >> 9 & 1) == 0) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_ACCESS_UNORDERED_ACCESS;
      if ((param_1 & UAVMask) == Unknown) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_ACCESS_RENDER_TARGET;
      if ((param_1 >> 0xc & 1) == 0) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_ACCESS_COPY_DEST;
      if ((param_1 >> 0xd & 1) == 0) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_ACCESS_RESOLVE_DEST;
      if ((param_1 >> 0xe & 1) == 0) {
        DVar3 = DVar4;
      }
      if ((param_1 >> 0xf & 1) != 0) {
        DVar3 = DVar3 & ~D3D12_BARRIER_ACCESS_DEPTH_STENCIL_READ |
                D3D12_BARRIER_ACCESS_DEPTH_STENCIL_WRITE;
      }
      DVar4 = DVar3 | D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_READ;
      if ((param_1 >> 0x10 & 1) == 0) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_ACCESS_RAYTRACING_ACCELERATION_STRUCTURE_WRITE;
      if ((param_1 >> 0x11 & 1) == 0) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_ACCESS_SHADING_RATE_SOURCE;
      if ((param_1 >> 0x13 & 1) == 0) {
        DVar4 = DVar3;
      }
      if (param_2 == All) {
        return DVar4;
      }
      if (((param_2 & param_2 - Graphics) != None) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("EnumHasOneFlag(InPipe)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                             ,0x554,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        DVar3 = (*pcVar1)();
        return DVar3;
      }
      DVar3 = FilterToQueueCompatibleAccess(DVar4,param_2);
      return DVar3;
    }
    if (param_1 == Discard) {
      return D3D12_BARRIER_ACCESS_NO_ACCESS;
    }
    iVar6 = 0x504;
    pcVar5 = "InD3D12Access == ED3D12Access::Discard";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    (pcVar5,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                     ,iVar6,L"");
  if (!bVar2) {
    return D3D12_BARRIER_ACCESS_NO_ACCESS;
  }
  pcVar1 = (code *)swi(3);
  DVar3 = (*pcVar1)();
  return DVar3;
}

// GetEBLayout @ 145a18b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

D3D12_BARRIER_LAYOUT __cdecl
GetEBLayout(ED3D12Access param_1,ERHIPipeline param_2,FD3D12Texture *param_3)

{
  code *pcVar1;
  bool bVar2;
  D3D12_BARRIER_LAYOUT DVar3;
  uint *puVar4;
  int iVar5;
  
  if (param_1 == Unknown) {
    iVar5 = 0x56b;
LAB_145a18b37:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,iVar5,L"");
    if (!bVar2) {
      return D3D12_BARRIER_LAYOUT_UNDEFINED;
    }
    pcVar1 = (code *)swi(3);
    DVar3 = (*pcVar1)();
    return DVar3;
  }
  if ((param_1 & (BVHWrite|BVHRead|VertexOrIndexBuffer|IndirectArgs)) != Unknown) {
    iVar5 = 0x575;
    goto LAB_145a18b37;
  }
  if ((param_1 & (Common|CPURead)) != Unknown) {
    return D3D12_BARRIER_LAYOUT_COMMON;
  }
  if ((param_1 >> 0x15 & 1) != 0) {
    if (param_2 == Graphics) {
      return D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_GENERIC_READ;
    }
    if (param_2 == AsyncCompute) {
      return D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_GENERIC_READ;
    }
    return D3D12_BARRIER_LAYOUT_GENERIC_READ;
  }
  if ((param_1 & param_1 - CPURead) == Unknown) {
    if (param_1 < (RTV|CPURead)) {
      if (param_1 == RTV) {
        return D3D12_BARRIER_LAYOUT_RENDER_TARGET;
      }
      if (param_1 == Present) {
        return D3D12_BARRIER_LAYOUT_COMMON;
      }
      if (param_1 == CopySrc) {
        if (param_2 == Graphics) {
          return D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_COPY_SOURCE;
        }
        if (param_2 == AsyncCompute) {
          return D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_COPY_SOURCE;
        }
        return D3D12_BARRIER_LAYOUT_COPY_SOURCE;
      }
      if (param_1 == ResolveSrc) {
        return D3D12_BARRIER_LAYOUT_RESOLVE_SOURCE;
      }
      if (param_1 == DSVRead) {
        return D3D12_BARRIER_LAYOUT_DEPTH_STENCIL_READ;
      }
      goto LAB_145a18cdc;
    }
    if (param_1 == CopyDest) {
      if (param_2 == Graphics) {
        return D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_COPY_DEST;
      }
      if (param_2 == AsyncCompute) {
        return D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_COPY_DEST;
      }
      return D3D12_BARRIER_LAYOUT_COPY_DEST;
    }
    if (param_1 == ResolveDst) {
      return D3D12_BARRIER_LAYOUT_RESOLVE_DEST;
    }
    if (param_1 == DSVWrite) {
      return D3D12_BARRIER_LAYOUT_DEPTH_STENCIL_WRITE;
    }
    if (param_1 == Discard) {
      return D3D12_BARRIER_LAYOUT_UNDEFINED;
    }
  }
  if (param_1 == (DSVWrite|DSVRead)) {
    return D3D12_BARRIER_LAYOUT_DEPTH_STENCIL_WRITE;
  }
LAB_145a18cdc:
  if ((param_1 & SRVMask) == param_1) {
    DVar3 = D3D12_BARRIER_LAYOUT_COMMON;
    if ((param_3 != (FD3D12Texture *)0x0) &&
       (puVar4 = (uint *)(**(code **)(param_3->_padding_ + 0x20))(param_3),
       DVar3 = D3D12_BARRIER_LAYOUT_COMMON, (*puVar4 >> 0x1d & 1) != 0)) {
      DVar3 = GetSkipFastClearEliminateLayoutFlags();
    }
    if (param_2 == Graphics) {
      return DVar3 | D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_SHADER_RESOURCE;
    }
    if (param_2 == AsyncCompute) {
      return DVar3 | D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_SHADER_RESOURCE;
    }
    return D3D12_BARRIER_LAYOUT_SHADER_RESOURCE;
  }
  if ((param_1 & UAVMask) == param_1) {
    if (param_2 == Graphics) {
      return D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_UNORDERED_ACCESS;
    }
    if (param_2 == AsyncCompute) {
      return D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_UNORDERED_ACCESS;
    }
    return D3D12_BARRIER_LAYOUT_UNORDERED_ACCESS;
  }
  if ((param_1 & ReadOnlyMask) == param_1) {
    if (param_2 == Graphics) {
      return D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_GENERIC_READ;
    }
    if (param_2 != AsyncCompute) {
      if (param_2 == All) {
        if ((param_1 & (RHIAccessLast|DSVRead|ResolveSrc)) != Unknown) {
          return D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_GENERIC_READ;
        }
      }
      else {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0x5f9,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          DVar3 = (*pcVar1)();
          return DVar3;
        }
      }
      return D3D12_BARRIER_LAYOUT_GENERIC_READ;
    }
    if (((param_1 & (RHIAccessLast|DSVRead|ResolveSrc)) != Unknown) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(InD3D12Access, GfxOnlyGenericReadBits)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0x5ec,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      DVar3 = (*pcVar1)();
      return DVar3;
    }
    return D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_GENERIC_READ;
  }
  if ((((param_1 & ReadableMask) == Unknown) || ((param_1 & WritableMask) == Unknown)) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(InD3D12Access, ED3D12Access::ReadableMask) && EnumHasAnyFlags(InD3D12Access, ED3D12Access::WritableMask)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                         ,0x600,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    DVar3 = (*pcVar1)();
    return DVar3;
  }
  if (param_2 == Graphics) {
    return D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_COMMON;
  }
  if (param_2 != AsyncCompute) {
    if (((param_1 & UAVMask) != Unknown) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(InD3D12Access, ED3D12Access::UAVMask)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0x609,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      DVar3 = (*pcVar1)();
      return DVar3;
    }
    return D3D12_BARRIER_LAYOUT_COMMON;
  }
  return D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_COMMON;
}

// GetEBSync @ 145a18ef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */

D3D12_BARRIER_SYNC __cdecl GetEBSync(ED3D12Access param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  bool bVar2;
  D3D12_BARRIER_SYNC DVar3;
  D3D12_BARRIER_SYNC DVar4;
  char *pcVar5;
  int iVar6;
  ED3D12Access EVar7;
  
  if (param_2 == None) {
    iVar6 = 0x455;
    pcVar5 = "!\"Enclosing block should never be called\"";
  }
  else {
    if (((param_1 == Unknown) || ((param_1 >> 0x14 & 1) != 0)) || ((param_1 >> 0x15 & 1) != 0)) {
      return D3D12_BARRIER_SYNC_ALL;
    }
    if ((param_1 >> 0x12 & 1) == 0) {
      DVar4 = param_1 >> 1 & D3D12_BARRIER_SYNC_ALL;
      DVar3 = DVar4 | D3D12_BARRIER_SYNC_EXECUTE_INDIRECT;
      if ((param_1 & IndirectArgs) == Unknown) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | (D3D12_BARRIER_SYNC_ALL_SHADING|D3D12_BARRIER_SYNC_VERTEX_SHADING|
                      D3D12_BARRIER_SYNC_INDEX_INPUT);
      if ((param_1 & VertexOrIndexBuffer) == Unknown) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_SYNC_COMPUTE_SHADING;
      if ((param_1 & SRVCompute) == Unknown) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_SYNC_PIXEL_SHADING;
      if ((param_1 & SRVGraphicsPixel) == Unknown) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_SYNC_NON_PIXEL_SHADING;
      if ((param_1 & SRVGraphicsNonPixel) == Unknown) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_SYNC_COPY;
      if ((param_1 & CopySrc) == Unknown) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_SYNC_RESOLVE;
      if ((param_1 >> 8 & 1) == 0) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_SYNC_DEPTH_STENCIL;
      if ((param_1 >> 9 & 1) == 0) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_SYNC_COMPUTE_SHADING;
      if ((param_1 >> 10 & 1) == 0) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | (D3D12_BARRIER_SYNC_PIXEL_SHADING|D3D12_BARRIER_SYNC_VERTEX_SHADING);
      if ((param_1 >> 0xb & 1) == 0) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_SYNC_RENDER_TARGET;
      if ((param_1 >> 0xc & 1) == 0) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_SYNC_COPY;
      if ((param_1 >> 0xd & 1) == 0) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_SYNC_RESOLVE;
      if ((param_1 >> 0xe & 1) == 0) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | D3D12_BARRIER_SYNC_DEPTH_STENCIL;
      if ((param_1 >> 0xf & 1) == 0) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
                       D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
                       D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
                      D3D12_BARRIER_SYNC_RAYTRACING);
      if ((param_1 >> 0x10 & 1) == 0) {
        DVar3 = DVar4;
      }
      DVar4 = DVar3 | (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
                      D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE);
      if ((param_1 >> 0x11 & 1) == 0) {
        DVar4 = DVar3;
      }
      DVar3 = DVar4 | D3D12_BARRIER_SYNC_PIXEL_SHADING;
      if ((param_1 >> 0x13 & 1) == 0) {
        DVar3 = DVar4;
      }
      if (((DVar3 == D3D12_BARRIER_SYNC_NONE) &&
          ((EVar7 = param_1 & (Present|CPURead), EVar7 == Unknown ||
           ((EVar7 & EVar7 - CPURead) != Unknown)))) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(EBSync != D3D12_BARRIER_SYNC_NONE) || EnumHasAnyOneFlag(InD3D12Access, AccessBitsThatCanBeNone)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                             ,0x4d5,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        DVar3 = (*pcVar1)();
        return DVar3;
      }
      if (param_2 == All) {
        return DVar3;
      }
      if (((param_2 & param_2 - Graphics) != None) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("EnumHasOneFlag(InPipe)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                             ,0x4d9,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        DVar3 = (*pcVar1)();
        return DVar3;
      }
      DVar3 = FilterToQueueCompatibleSync(DVar3,param_2);
      return DVar3;
    }
    if (param_1 == Discard) {
      return D3D12_BARRIER_SYNC_NONE;
    }
    iVar6 = 0x46a;
    pcVar5 = "InD3D12Access == ED3D12Access::Discard";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    (pcVar5,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                     ,iVar6,L"");
  if (!bVar2) {
    return D3D12_BARRIER_SYNC_NONE;
  }
  pcVar1 = (code *)swi(3);
  DVar3 = (*pcVar1)();
  return DVar3;
}

// GetGeometryInitializerDebugString @ 145a19110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
GetGeometryInitializerDebugString
          (FString *__return_storage_ptr__,FRayTracingGeometryInitializer *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  void *pvVar4;
  ulong64 uVar5;
  int iVar6;
  undefined1 auStack_188 [32];
  FString local_168;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  local_158.Base = local_138;
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.CurPos = local_138;
  local_158.End = (wchar_t *)local_38;
  local_158.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_138,10,"DebugName=",10);
  pFVar3 = FDebugName::ToString(&param_1->DebugName,&local_168);
  iVar1 = (pFVar3->Data).ArrayNum;
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  uVar5 = (ulong64)iVar6;
  if (local_158.End < local_158.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,uVar5);
  }
  if (iVar6 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_158.CurPos,pFVar2,uVar5 * 2);
    local_158.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158.End < local_158.CurPos + 0xd) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,0xd);
  }
  local_158.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>(local_158.CurPos,0xd," NumSegments=",0xd);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_158,L"%d");
  if (local_158.End < local_158.CurPos + 10) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,10);
  }
  local_158.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>(local_158.CurPos,10," NumPrims=",10);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_158,L"%u");
  if ((param_1->IndexBuffer).Reference == (FRHIBuffer *)0x0) {
    if (local_158.End < local_158.CurPos + 0xb) {
      TStringBuilderBase<wchar_t>::Extend(&local_158,0xb);
    }
    local_158.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>(local_158.CurPos,0xb," NonIndexed",0xb);
  }
  else {
    if (local_158.End < local_158.CurPos + 0xd) {
      TStringBuilderBase<wchar_t>::Extend(&local_158,0xd);
    }
    local_158.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>(local_158.CurPos,0xd," IndexStride=",0xd);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_158,L"%u");
  }
  if (param_1->OfflineData != (FResourceArrayUploadInterface *)0x0) {
    if (local_158.End < local_158.CurPos + 0xf) {
      TStringBuilderBase<wchar_t>::Extend(&local_158,0xf);
    }
    local_158.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>(local_158.CurPos,0xf," HasOfflineData",0xf);
  }
  if (local_158.End < local_158.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
  }
  *local_158.CurPos = L'\0';
  FString::FString(__return_storage_ptr__,local_158.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return __return_storage_ptr__;
}

// GetLowLevelGraphicsPipelineStateDesc @ 145a194b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FD3D12LowLevelGraphicsPipelineStateDesc * __cdecl
GetLowLevelGraphicsPipelineStateDesc
          (FD3D12LowLevelGraphicsPipelineStateDesc *__return_storage_ptr__,
          FGraphicsPipelineStateInitializer *param_1,FD3D12RootSignature *param_2)

{
  D3D12_CONSERVATIVE_RASTERIZATION_MODE DVar1;
  EPrimitiveType EVar2;
  int iVar3;
  undefined8 uVar4;
  FRHIRasterizerState *pFVar5;
  FRHIDepthStencilState *pFVar6;
  FRHIVertexDeclaration *pFVar7;
  FRHIVertexShader *pFVar8;
  FRHIMeshShader *pFVar9;
  FRHIAmplificationShader *pFVar10;
  FRHIPixelShader *pFVar11;
  FRHIGeometryShader *pFVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  FRHIBlendState *pFVar22;
  D3D12_BLEND_DESC *pDVar23;
  bool bVar24;
  FRHIBlendState *pFVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar30;
  undefined8 *puVar31;
  D3D12_BLEND_DESC *pDVar32;
  ulonglong uVar33;
  longlong lVar34;
  D3D12_RENDER_TARGET_BLEND_DESC *pDVar35;
  D3D12_PRIMITIVE_TOPOLOGY_TYPE DVar36;
  uint uVar37;
  ulong64 uVar38;
  ulong64 uVar39;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined8 local_4b8;
  longlong local_4b0;
  undefined8 uStack_4a8;
  undefined2 local_4a0;
  undefined8 local_49c;
  undefined8 uStack_494;
  undefined8 local_48c;
  undefined8 uStack_484;
  undefined4 local_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined4 local_450;
  longlong local_448;
  longlong lStack_440;
  longlong local_438;
  undefined8 uStack_430;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8 [42];
  undefined8 local_168 [42];
  
  memset(&__return_storage_ptr__->Desc,0,0x2f8);
  __return_storage_ptr__->pRootSignature = param_2;
  (__return_storage_ptr__->Desc).pRootSignature = (param_2->RootSignature).Reference;
  if (param_1->BlendState == (FRHIBlendState *)0x0) {
    local_4b8 = CONCAT35(local_4b8._5_3_,0xf00000004);
    lVar34 = 2;
    local_3e0 = local_4b8;
    local_3b8 = local_4b8;
    local_390 = local_4b8;
    local_368 = local_4b8;
    local_340 = local_4b8;
    local_318 = local_4b8;
    local_2f0 = local_4b8;
    local_2c8 = local_4b8;
    local_408 = 0;
    uStack_400 = ___xmm_00000001000000020000000000000000;
    uStack_3f8 = _UNK_151084ee8;
    uStack_3f0 = ___xmm_00000001000000010000000200000001;
    uStack_3e8 = _UNK_151084ed8;
    local_3d8 = ___xmm_00000001000000020000000000000000;
    uStack_3d0 = _UNK_151084ee8;
    local_3c8 = ___xmm_00000001000000010000000200000001;
    uStack_3c0 = _UNK_151084ed8;
    uStack_3b0 = ___xmm_00000001000000020000000000000000;
    uStack_3a8 = _UNK_151084ee8;
    uStack_3a0 = ___xmm_00000001000000010000000200000001;
    uStack_398 = _UNK_151084ed8;
    local_388 = ___xmm_00000001000000020000000000000000;
    uStack_380 = _UNK_151084ee8;
    local_378 = ___xmm_00000001000000010000000200000001;
    uStack_370 = _UNK_151084ed8;
    uStack_360 = ___xmm_00000001000000020000000000000000;
    uStack_358 = _UNK_151084ee8;
    uStack_350 = ___xmm_00000001000000010000000200000001;
    uStack_348 = _UNK_151084ed8;
    local_338 = ___xmm_00000001000000020000000000000000;
    uStack_330 = _UNK_151084ee8;
    local_328 = ___xmm_00000001000000010000000200000001;
    uStack_320 = _UNK_151084ed8;
    local_310 = ___xmm_00000001000000020000000000000000;
    uStack_308 = _UNK_151084ee8;
    local_300 = ___xmm_00000001000000010000000200000001;
    uStack_2f8 = _UNK_151084ed8;
    local_2e8 = ___xmm_00000001000000020000000000000000;
    uStack_2e0 = _UNK_151084ee8;
    local_2d8 = ___xmm_00000001000000010000000200000001;
    uStack_2d0 = _UNK_151084ed8;
    puVar28 = &local_408;
    puVar27 = local_168;
    do {
      puVar31 = puVar27;
      puVar26 = puVar28;
      uVar4 = puVar26[1];
      uVar14 = puVar26[2];
      uVar15 = puVar26[3];
      *puVar31 = *puVar26;
      puVar31[1] = uVar4;
      uVar4 = puVar26[4];
      uVar16 = puVar26[5];
      puVar31[2] = uVar14;
      puVar31[3] = uVar15;
      uVar14 = puVar26[6];
      uVar15 = puVar26[7];
      puVar31[4] = uVar4;
      puVar31[5] = uVar16;
      uVar4 = puVar26[8];
      uVar16 = puVar26[9];
      puVar31[6] = uVar14;
      puVar31[7] = uVar15;
      uVar14 = puVar26[10];
      uVar15 = puVar26[0xb];
      puVar31[8] = uVar4;
      puVar31[9] = uVar16;
      uVar4 = puVar26[0xc];
      uVar16 = puVar26[0xd];
      puVar31[10] = uVar14;
      puVar31[0xb] = uVar15;
      uVar14 = puVar26[0xe];
      uVar15 = puVar26[0xf];
      puVar31[0xc] = uVar4;
      puVar31[0xd] = uVar16;
      puVar31[0xe] = uVar14;
      puVar31[0xf] = uVar15;
      lVar34 = lVar34 + -1;
      puVar28 = puVar26 + 0x10;
      puVar27 = puVar31 + 0x10;
    } while (lVar34 != 0);
    uVar4 = puVar26[0x11];
    uVar14 = puVar26[0x12];
    uVar15 = puVar26[0x13];
    puVar31[0x10] = puVar26[0x10];
    puVar31[0x11] = uVar4;
    uVar16 = puVar26[0x14];
    uVar17 = puVar26[0x15];
    puVar31[0x12] = uVar14;
    puVar31[0x13] = uVar15;
    uVar14 = puVar26[0x16];
    uVar15 = puVar26[0x17];
    uVar4 = puVar26[0x18];
    puVar31[0x14] = uVar16;
    puVar31[0x15] = uVar17;
    puVar31[0x16] = uVar14;
    puVar31[0x17] = uVar15;
    puVar31[0x18] = uVar4;
    puVar28 = local_168;
  }
  else {
    lVar34 = 2;
    pFVar22 = param_1->BlendState + 1;
    puVar28 = local_2b8;
    do {
      puVar27 = puVar28;
      pFVar25 = pFVar22;
      uVar4 = *(undefined8 *)&pFVar25->field_0x8;
      uVar14 = *(undefined8 *)&pFVar25->field_0x10;
      uVar15 = *(undefined8 *)(pFVar25 + 1);
      *puVar27 = *(undefined8 *)pFVar25;
      puVar27[1] = uVar4;
      uVar4 = *(undefined8 *)&pFVar25[1].field_0x8;
      uVar16 = *(undefined8 *)&pFVar25[1].field_0x10;
      puVar27[2] = uVar14;
      puVar27[3] = uVar15;
      uVar14 = *(undefined8 *)(pFVar25 + 2);
      uVar15 = *(undefined8 *)&pFVar25[2].field_0x8;
      puVar27[4] = uVar4;
      puVar27[5] = uVar16;
      uVar4 = *(undefined8 *)&pFVar25[2].field_0x10;
      uVar16 = *(undefined8 *)(pFVar25 + 3);
      puVar27[6] = uVar14;
      puVar27[7] = uVar15;
      uVar14 = *(undefined8 *)&pFVar25[3].field_0x8;
      uVar15 = *(undefined8 *)&pFVar25[3].field_0x10;
      puVar27[8] = uVar4;
      puVar27[9] = uVar16;
      uVar4 = *(undefined8 *)(pFVar25 + 4);
      uVar16 = *(undefined8 *)&pFVar25[4].field_0x8;
      puVar27[10] = uVar14;
      puVar27[0xb] = uVar15;
      uVar14 = *(undefined8 *)&pFVar25[4].field_0x10;
      uVar15 = *(undefined8 *)(pFVar25 + 5);
      puVar27[0xc] = uVar4;
      puVar27[0xd] = uVar16;
      puVar27[0xe] = uVar14;
      puVar27[0xf] = uVar15;
      lVar34 = lVar34 + -1;
      pFVar22 = (FRHIBlendState *)&pFVar25[5].field_0x8;
      puVar28 = puVar27 + 0x10;
    } while (lVar34 != 0);
    uVar4 = *(undefined8 *)&pFVar25[5].field_0x10;
    uVar14 = *(undefined8 *)(pFVar25 + 6);
    uVar15 = *(undefined8 *)&pFVar25[6].field_0x8;
    puVar27[0x10] = *(undefined8 *)&pFVar25[5].field_0x8;
    puVar27[0x11] = uVar4;
    uVar16 = *(undefined8 *)&pFVar25[6].field_0x10;
    uVar17 = *(undefined8 *)(pFVar25 + 7);
    puVar27[0x12] = uVar14;
    puVar27[0x13] = uVar15;
    uVar14 = *(undefined8 *)&pFVar25[7].field_0x8;
    uVar15 = *(undefined8 *)&pFVar25[7].field_0x10;
    uVar4 = *(undefined8 *)(pFVar25 + 8);
    puVar27[0x14] = uVar16;
    puVar27[0x15] = uVar17;
    puVar27[0x16] = uVar14;
    puVar27[0x17] = uVar15;
    puVar27[0x18] = uVar4;
    puVar28 = local_2b8;
  }
  lVar34 = 2;
  pDVar23 = &(__return_storage_ptr__->Desc).BlendState;
  do {
    pDVar32 = pDVar23;
    puVar27 = puVar28;
    pDVar23 = (D3D12_BLEND_DESC *)(pDVar32->RenderTarget + 3);
    uVar4 = *puVar27;
    uVar14 = puVar27[1];
    uVar15 = puVar27[2];
    uVar16 = puVar27[3];
    pDVar32->AlphaToCoverageEnable = (int)uVar4;
    pDVar32->IndependentBlendEnable = (int)((ulonglong)uVar4 >> 0x20);
    pDVar32->RenderTarget[0].BlendEnable = (int)uVar14;
    pDVar32->RenderTarget[0].LogicOpEnable = (int)((ulonglong)uVar14 >> 0x20);
    uVar4 = puVar27[4];
    uVar14 = puVar27[5];
    pDVar32->RenderTarget[0].SrcBlend = (int)uVar15;
    pDVar32->RenderTarget[0].DestBlend = (int)((ulonglong)uVar15 >> 0x20);
    pDVar32->RenderTarget[0].BlendOp = (int)uVar16;
    pDVar32->RenderTarget[0].SrcBlendAlpha = (int)((ulonglong)uVar16 >> 0x20);
    uVar15 = puVar27[6];
    uVar16 = puVar27[7];
    pDVar32->RenderTarget[0].DestBlendAlpha = (int)uVar4;
    pDVar32->RenderTarget[0].BlendOpAlpha = (int)((ulonglong)uVar4 >> 0x20);
    pDVar32->RenderTarget[0].LogicOp = (int)uVar14;
    pDVar32->RenderTarget[0].RenderTargetWriteMask = (char)((ulonglong)uVar14 >> 0x20);
    *(int3 *)&pDVar32->RenderTarget[0].field_0x25 = (int3)((ulonglong)uVar14 >> 0x28);
    uVar4 = puVar27[8];
    uVar14 = puVar27[9];
    pDVar32->RenderTarget[1].BlendEnable = (int)uVar15;
    pDVar32->RenderTarget[1].LogicOpEnable = (int)((ulonglong)uVar15 >> 0x20);
    pDVar32->RenderTarget[1].SrcBlend = (int)uVar16;
    pDVar32->RenderTarget[1].DestBlend = (int)((ulonglong)uVar16 >> 0x20);
    uVar15 = puVar27[10];
    uVar16 = puVar27[0xb];
    pDVar32->RenderTarget[1].BlendOp = (int)uVar4;
    pDVar32->RenderTarget[1].SrcBlendAlpha = (int)((ulonglong)uVar4 >> 0x20);
    pDVar32->RenderTarget[1].DestBlendAlpha = (int)uVar14;
    pDVar32->RenderTarget[1].BlendOpAlpha = (int)((ulonglong)uVar14 >> 0x20);
    uVar4 = puVar27[0xc];
    uVar14 = puVar27[0xd];
    pDVar32->RenderTarget[1].LogicOp = (int)uVar15;
    pDVar32->RenderTarget[1].RenderTargetWriteMask = (char)((ulonglong)uVar15 >> 0x20);
    *(int3 *)&pDVar32->RenderTarget[1].field_0x25 = (int3)((ulonglong)uVar15 >> 0x28);
    pDVar32->RenderTarget[2].BlendEnable = (int)uVar16;
    pDVar32->RenderTarget[2].LogicOpEnable = (int)((ulonglong)uVar16 >> 0x20);
    uVar15 = puVar27[0xe];
    uVar16 = puVar27[0xf];
    pDVar32->RenderTarget[2].SrcBlend = (int)uVar4;
    pDVar32->RenderTarget[2].DestBlend = (int)((ulonglong)uVar4 >> 0x20);
    pDVar32->RenderTarget[2].BlendOp = (int)uVar14;
    pDVar32->RenderTarget[2].SrcBlendAlpha = (int)((ulonglong)uVar14 >> 0x20);
    pDVar32->RenderTarget[2].DestBlendAlpha = (int)uVar15;
    pDVar32->RenderTarget[2].BlendOpAlpha = (int)((ulonglong)uVar15 >> 0x20);
    pDVar32->RenderTarget[2].LogicOp = (int)uVar16;
    pDVar32->RenderTarget[2].RenderTargetWriteMask = (char)((ulonglong)uVar16 >> 0x20);
    *(int3 *)&pDVar32->RenderTarget[2].field_0x25 = (int3)((ulonglong)uVar16 >> 0x28);
    lVar34 = lVar34 + -1;
    puVar28 = puVar27 + 0x10;
  } while (lVar34 != 0);
  uVar4 = puVar27[0x10];
  uVar14 = puVar27[0x11];
  uVar15 = puVar27[0x12];
  uVar16 = puVar27[0x13];
  (__return_storage_ptr__->Desc).SampleMask = 0xffffffff;
  pDVar23->AlphaToCoverageEnable = (int)uVar4;
  pDVar23->IndependentBlendEnable = (int)((ulonglong)uVar4 >> 0x20);
  pDVar32->RenderTarget[3].SrcBlend = (int)uVar14;
  pDVar32->RenderTarget[3].DestBlend = (int)((ulonglong)uVar14 >> 0x20);
  uVar14 = puVar27[0x14];
  uVar17 = puVar27[0x15];
  pDVar32->RenderTarget[3].BlendOp = (int)uVar15;
  pDVar32->RenderTarget[3].SrcBlendAlpha = (int)((ulonglong)uVar15 >> 0x20);
  pDVar32->RenderTarget[3].DestBlendAlpha = (int)uVar16;
  pDVar32->RenderTarget[3].BlendOpAlpha = (int)((ulonglong)uVar16 >> 0x20);
  uVar15 = puVar27[0x16];
  uVar16 = puVar27[0x17];
  uVar4 = puVar27[0x18];
  pDVar32->RenderTarget[3].LogicOp = (int)uVar14;
  pDVar32->RenderTarget[3].RenderTargetWriteMask = (char)((ulonglong)uVar14 >> 0x20);
  *(int3 *)&pDVar32->RenderTarget[3].field_0x25 = (int3)((ulonglong)uVar14 >> 0x28);
  pDVar32->RenderTarget[4].BlendEnable = (int)uVar17;
  pDVar32->RenderTarget[4].LogicOpEnable = (int)((ulonglong)uVar17 >> 0x20);
  pDVar32->RenderTarget[4].SrcBlend = (int)uVar15;
  pDVar32->RenderTarget[4].DestBlend = (int)((ulonglong)uVar15 >> 0x20);
  pDVar32->RenderTarget[4].BlendOp = (int)uVar16;
  pDVar32->RenderTarget[4].SrcBlendAlpha = (int)((ulonglong)uVar16 >> 0x20);
  pDVar32->RenderTarget[4].DestBlendAlpha = (int)uVar4;
  pDVar32->RenderTarget[4].BlendOpAlpha = (int)((ulonglong)uVar4 >> 0x20);
  pFVar5 = param_1->RasterizerState;
  uVar37 = 0;
  if (pFVar5 == (FRHIRasterizerState *)0x0) {
    puVar28 = &local_558;
    local_558 = ___xmm_00000000000000000000000300000003;
    uStack_550 = _UNK_151084eb8;
    local_548 = 0;
    local_540 = 1;
    local_538 = 0;
    local_530 = 0;
  }
  else {
    local_478 = *(undefined8 *)(pFVar5 + 1);
    uStack_470 = *(undefined8 *)&pFVar5[1].field_0x8;
    local_450 = *(undefined4 *)&pFVar5[2].field_0x10;
    puVar28 = &local_478;
    local_468 = *(undefined8 *)&pFVar5[1].field_0x10;
    uStack_460 = *(undefined8 *)(pFVar5 + 2);
    local_458 = *(undefined8 *)&pFVar5[2].field_0x8;
  }
  uVar4 = *puVar28;
  uVar14 = puVar28[1];
  uVar15 = puVar28[2];
  uVar16 = puVar28[3];
  (__return_storage_ptr__->Desc).RasterizerState.FillMode = (int)uVar4;
  (__return_storage_ptr__->Desc).RasterizerState.CullMode = (int)((ulonglong)uVar4 >> 0x20);
  (__return_storage_ptr__->Desc).RasterizerState.FrontCounterClockwise = (int)uVar14;
  (__return_storage_ptr__->Desc).RasterizerState.DepthBias = (int)((ulonglong)uVar14 >> 0x20);
  uVar4 = puVar28[4];
  DVar1 = *(D3D12_CONSERVATIVE_RASTERIZATION_MODE *)(puVar28 + 5);
  (__return_storage_ptr__->Desc).RasterizerState.DepthBiasClamp = (float)(int)uVar15;
  (__return_storage_ptr__->Desc).RasterizerState.SlopeScaledDepthBias =
       (float)(int)((ulonglong)uVar15 >> 0x20);
  (__return_storage_ptr__->Desc).RasterizerState.DepthClipEnable = (int)uVar16;
  (__return_storage_ptr__->Desc).RasterizerState.MultisampleEnable =
       (int)((ulonglong)uVar16 >> 0x20);
  (__return_storage_ptr__->Desc).RasterizerState.AntialiasedLineEnable = (int)uVar4;
  (__return_storage_ptr__->Desc).RasterizerState.ForcedSampleCount = (int)((ulonglong)uVar4 >> 0x20)
  ;
  (__return_storage_ptr__->Desc).RasterizerState.ConservativeRaster = DVar1;
  pFVar6 = param_1->DepthStencilState;
  if (pFVar6 == (FRHIDepthStencilState *)0x0) {
    plVar29 = &local_4b0;
    local_4b0 = ___xmm_00000000000000020000000100000001;
    uStack_4a8 = _UNK_151084ec8;
    local_4a0 = 0xffff;
    local_49c = ___xmm_00000008000000010000000100000001;
    uStack_494 = _UNK_151084ef8;
    local_47c = 0;
    local_48c = ___xmm_00000008000000010000000100000001;
    uStack_484 = _UNK_151084ef8;
  }
  else {
    local_448 = pFVar6[1]._padding_;
    lStack_440 = pFVar6[1]._padding_;
    local_438 = pFVar6[1]._padding_;
    uStack_430 = *(undefined8 *)&pFVar6[1].ActualDSMode;
    plVar29 = &local_448;
    local_428 = pFVar6[2]._padding_;
    lStack_420 = pFVar6[2]._padding_;
    local_418 = pFVar6[2]._padding_;
  }
  lVar34 = *plVar29;
  lVar18 = plVar29[1];
  lVar19 = plVar29[2];
  lVar20 = plVar29[3];
  (__return_storage_ptr__->Desc).DepthStencilState.DepthEnable = (int)lVar34;
  (__return_storage_ptr__->Desc).DepthStencilState.DepthWriteMask = (int)((ulonglong)lVar34 >> 0x20)
  ;
  (__return_storage_ptr__->Desc).DepthStencilState.DepthFunc = (int)lVar18;
  (__return_storage_ptr__->Desc).DepthStencilState.StencilEnable = (int)((ulonglong)lVar18 >> 0x20);
  lVar18 = plVar29[4];
  lVar21 = plVar29[5];
  (__return_storage_ptr__->Desc).DepthStencilState.StencilReadMask = (char)lVar19;
  (__return_storage_ptr__->Desc).DepthStencilState.StencilWriteMask = (char)((ulonglong)lVar19 >> 8)
  ;
  *(short *)&(__return_storage_ptr__->Desc).DepthStencilState.field_0x12 =
       (short)((ulonglong)lVar19 >> 0x10);
  (__return_storage_ptr__->Desc).DepthStencilState.FrontFace.StencilFailOp =
       (int)((ulonglong)lVar19 >> 0x20);
  (__return_storage_ptr__->Desc).DepthStencilState.FrontFace.StencilDepthFailOp = (int)lVar20;
  (__return_storage_ptr__->Desc).DepthStencilState.FrontFace.StencilPassOp =
       (int)((ulonglong)lVar20 >> 0x20);
  lVar34 = plVar29[6];
  *(longlong *)&(__return_storage_ptr__->Desc).DepthStencilState.FrontFace.StencilFunc = lVar18;
  (__return_storage_ptr__->Desc).DepthStencilState.BackFace.StencilDepthFailOp = (int)lVar21;
  (__return_storage_ptr__->Desc).DepthStencilState.BackFace.StencilPassOp =
       (int)((ulonglong)lVar21 >> 0x20);
  *(longlong *)&(__return_storage_ptr__->Desc).DepthStencilState.BackFace.StencilFunc = lVar34;
  EVar2 = param_1->PrimitiveType;
  if ((EVar2 == PT_TriangleList) || (EVar2 == PT_TriangleStrip)) {
    DVar36 = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
  }
  else {
    DVar36 = D3D12_PRIMITIVE_TOPOLOGY_TYPE_LINE;
    if (EVar2 != PT_LineList) {
      if (EVar2 == PT_PointList) {
        DVar36 = D3D12_PRIMITIVE_TOPOLOGY_TYPE_POINT;
      }
      else {
        bVar24 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5351138129619190370>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                            ,0x262,"0");
        DVar36 = D3D12_PRIMITIVE_TOPOLOGY_TYPE_UNDEFINED;
        if (bVar24) {
          pcVar13 = (code *)swi(3);
          pFVar30 = (FD3D12LowLevelGraphicsPipelineStateDesc *)(*pcVar13)();
          return pFVar30;
        }
      }
    }
  }
  (__return_storage_ptr__->Desc).PrimitiveTopologyType = DVar36;
  TranslateRenderTargetFormats
            (param_1,&(__return_storage_ptr__->Desc).RTFormatArray,
             &(__return_storage_ptr__->Desc).DSVFormat);
  (__return_storage_ptr__->Desc).SampleDesc.Count = (uint)param_1->NumSamples;
  if (8 < param_1->NumSamples) {
    uVar37 = 0xffffffff;
  }
  (__return_storage_ptr__->Desc).SampleDesc.Quality = uVar37;
  pFVar7 = (param_1->BoundShaderState).VertexDeclarationRHI;
  if (pFVar7 != (FRHIVertexDeclaration *)0x0) {
    (__return_storage_ptr__->Desc).InputLayout.NumElements = *(uint *)&pFVar7[0x17].field_0x10;
    (__return_storage_ptr__->Desc).InputLayout.pInputElementDescs =
         (D3D12_INPUT_ELEMENT_DESC *)(pFVar7 + 1);
    __return_storage_ptr__->InputLayoutHash = *(uint *)&pFVar7[0x19].field_0x10;
  }
  pFVar8 = (param_1->BoundShaderState).VertexShaderRHI;
  if (pFVar8 != (FRHIVertexShader *)0x0) {
    iVar3 = *(int *)&pFVar8[1].field_0x8;
    (__return_storage_ptr__->Desc).VS.pShaderBytecode = *(void **)(pFVar8 + 1);
    (__return_storage_ptr__->Desc).VS.BytecodeLength = (longlong)iVar3;
    if (*(int *)&pFVar8[1].field_0x8 == 0) {
      uVar38 = 0;
      uVar39 = 0;
    }
    else {
      uVar38 = *(ulong64 *)(*(longlong *)(pFVar8 + 1) + 4);
      uVar39 = *(ulong64 *)(*(longlong *)(pFVar8 + 1) + 0xc);
    }
    (__return_storage_ptr__->VSHash).Hash[0] = uVar38;
    (__return_storage_ptr__->VSHash).Hash[1] = uVar39;
  }
  pFVar9 = (param_1->BoundShaderState).MeshShaderRHI;
  if (pFVar9 != (FRHIMeshShader *)0x0) {
    iVar3 = *(int *)&pFVar9[1].field_0x8;
    (__return_storage_ptr__->Desc).MS.pShaderBytecode = *(void **)(pFVar9 + 1);
    (__return_storage_ptr__->Desc).MS.BytecodeLength = (longlong)iVar3;
    if (*(int *)&pFVar9[1].field_0x8 == 0) {
      uVar38 = 0;
      uVar39 = 0;
    }
    else {
      uVar38 = *(ulong64 *)(*(longlong *)(pFVar9 + 1) + 4);
      uVar39 = *(ulong64 *)(*(longlong *)(pFVar9 + 1) + 0xc);
    }
    (__return_storage_ptr__->MSHash).Hash[0] = uVar38;
    (__return_storage_ptr__->MSHash).Hash[1] = uVar39;
  }
  pFVar10 = (param_1->BoundShaderState).AmplificationShaderRHI;
  if (pFVar10 != (FRHIAmplificationShader *)0x0) {
    iVar3 = *(int *)&pFVar10[1].field_0x8;
    (__return_storage_ptr__->Desc).AS.pShaderBytecode = *(void **)(pFVar10 + 1);
    (__return_storage_ptr__->Desc).AS.BytecodeLength = (longlong)iVar3;
    if (*(int *)&pFVar10[1].field_0x8 == 0) {
      uVar38 = 0;
      uVar39 = 0;
    }
    else {
      uVar38 = *(ulong64 *)(*(longlong *)(pFVar10 + 1) + 4);
      uVar39 = *(ulong64 *)(*(longlong *)(pFVar10 + 1) + 0xc);
    }
    (__return_storage_ptr__->ASHash).Hash[0] = uVar38;
    (__return_storage_ptr__->ASHash).Hash[1] = uVar39;
  }
  pFVar11 = (param_1->BoundShaderState).PixelShaderRHI;
  if (pFVar11 != (FRHIPixelShader *)0x0) {
    iVar3 = *(int *)&pFVar11[1].field_0x8;
    (__return_storage_ptr__->Desc).PS.pShaderBytecode = *(void **)(pFVar11 + 1);
    (__return_storage_ptr__->Desc).PS.BytecodeLength = (longlong)iVar3;
    if (*(int *)&pFVar11[1].field_0x8 == 0) {
      uVar38 = 0;
      uVar39 = 0;
    }
    else {
      uVar38 = *(ulong64 *)(*(longlong *)(pFVar11 + 1) + 4);
      uVar39 = *(ulong64 *)(*(longlong *)(pFVar11 + 1) + 0xc);
    }
    (__return_storage_ptr__->PSHash).Hash[0] = uVar38;
    (__return_storage_ptr__->PSHash).Hash[1] = uVar39;
  }
  pFVar12 = (param_1->BoundShaderState).GeometryShaderRHI;
  if (pFVar12 != (FRHIGeometryShader *)0x0) {
    iVar3 = *(int *)&pFVar12[1].field_0x8;
    (__return_storage_ptr__->Desc).GS.pShaderBytecode = *(void **)(pFVar12 + 1);
    (__return_storage_ptr__->Desc).GS.BytecodeLength = (longlong)iVar3;
    if (*(int *)&pFVar12[1].field_0x8 == 0) {
      uVar38 = 0;
      uVar39 = 0;
    }
    else {
      uVar38 = *(ulong64 *)(*(longlong *)(pFVar12 + 1) + 4);
      uVar39 = *(ulong64 *)(*(longlong *)(pFVar12 + 1) + 0xc);
    }
    (__return_storage_ptr__->GSHash).Hash[0] = uVar38;
    (__return_storage_ptr__->GSHash).Hash[1] = uVar39;
  }
  pFVar8 = (param_1->BoundShaderState).VertexShaderRHI;
  if ((pFVar8 != (FRHIVertexShader *)0x0) && (0 < *(int *)&pFVar8[1].field_0x28)) {
    __return_storage_ptr__->VSExtensions =
         (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&pFVar8[1].field_0x20;
  }
  pFVar9 = (param_1->BoundShaderState).MeshShaderRHI;
  if ((pFVar9 != (FRHIMeshShader *)0x0) && (0 < *(int *)&pFVar9[1].field_0x28)) {
    __return_storage_ptr__->MSExtensions =
         (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&pFVar9[1].field_0x20;
  }
  pFVar10 = (param_1->BoundShaderState).AmplificationShaderRHI;
  if ((pFVar10 != (FRHIAmplificationShader *)0x0) && (0 < *(int *)&pFVar10[1].field_0x28)) {
    __return_storage_ptr__->ASExtensions =
         (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&pFVar10[1].field_0x20;
  }
  pFVar11 = (param_1->BoundShaderState).PixelShaderRHI;
  if ((pFVar11 != (FRHIPixelShader *)0x0) && (0 < *(int *)&pFVar11[1].field_0x28)) {
    __return_storage_ptr__->PSExtensions =
         (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&pFVar11[1].field_0x20;
  }
  pFVar12 = (param_1->BoundShaderState).GeometryShaderRHI;
  if ((pFVar12 != (FRHIGeometryShader *)0x0) && (0 < *(int *)&pFVar12[1].field_0x28)) {
    __return_storage_ptr__->GSExtensions =
         (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)&pFVar12[1].field_0x20;
  }
  if ((GRHIGlobals.SupportsDepthBoundsTest == false) ||
     (DVar36 = D3D12_PRIMITIVE_TOPOLOGY_TYPE_POINT, param_1->bDepthBounds == false)) {
    DVar36 = D3D12_PRIMITIVE_TOPOLOGY_TYPE_UNDEFINED;
  }
  uVar37 = (__return_storage_ptr__->Desc).RTFormatArray.NumRenderTargets;
  (__return_storage_ptr__->Desc).DepthStencilState.DepthBoundsTestEnable = DVar36;
  if (uVar37 < 8) {
    uVar33 = (ulonglong)(8 - uVar37);
    pDVar35 = (__return_storage_ptr__->Desc).BlendState.RenderTarget + uVar37;
    do {
      pDVar35->BlendEnable = 0;
      pDVar35->LogicOpEnable = 0;
      pDVar35->SrcBlend = 0;
      pDVar35->DestBlend = 0;
      pDVar35->BlendOp = 0;
      pDVar35->SrcBlendAlpha = 0;
      pDVar35->DestBlendAlpha = 0;
      pDVar35->BlendOpAlpha = 0;
      pDVar35->LogicOp = D3D12_LOGIC_OP_CLEAR;
      pDVar35->RenderTargetWriteMask = '\0';
      *(undefined3 *)&pDVar35->field_0x25 = 0;
      uVar33 = uVar33 - 1;
      pDVar35 = pDVar35 + 1;
    } while (uVar33 != 0);
  }
  __return_storage_ptr__->bFromPSOFileCache =
       (bool)((byte)((param_1->field25_0xd2).Flags >> 0xc) & 1);
  return __return_storage_ptr__;
}

// GetQueryHeapPoolIndex @ 145a1a940

uint __cdecl GetQueryHeapPoolIndex(D3D12_QUERY_HEAP_TYPE param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 != D3D12_QUERY_HEAP_TYPE_OCCLUSION) {
    if (param_1 == D3D12_QUERY_HEAP_TYPE_TIMESTAMP) {
      return 1;
    }
    if (param_1 == D3D12_QUERY_HEAP_TYPE_PIPELINE_STATISTICS) {
      return 3;
    }
    if (param_1 == D3D12_QUERY_HEAP_TYPE_COPY_QUEUE_TIMESTAMP) {
      return 2;
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 0;
}

// GetQueueAgnosticVersionOfLayout @ 145a1a9b0

/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

D3D12_BARRIER_LAYOUT __cdecl GetQueueAgnosticVersionOfLayout(D3D12_BARRIER_LAYOUT param_1)

{
  switch(param_1) {
  case D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_COMMON:
  case D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_COMMON:
    return D3D12_BARRIER_LAYOUT_COMMON;
  case D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_GENERIC_READ:
  case D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_GENERIC_READ:
    return D3D12_BARRIER_LAYOUT_GENERIC_READ;
  case D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_UNORDERED_ACCESS:
  case D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_UNORDERED_ACCESS:
    return D3D12_BARRIER_LAYOUT_UNORDERED_ACCESS;
  case D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_SHADER_RESOURCE:
  case D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_SHADER_RESOURCE:
    return D3D12_BARRIER_LAYOUT_SHADER_RESOURCE;
  case D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_COPY_SOURCE:
  case D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_COPY_SOURCE:
    return D3D12_BARRIER_LAYOUT_COPY_SOURCE;
  case D3D12_BARRIER_LAYOUT_DIRECT_QUEUE_COPY_DEST:
  case D3D12_BARRIER_LAYOUT_COMPUTE_QUEUE_COPY_DEST:
    return D3D12_BARRIER_LAYOUT_COPY_DEST;
  default:
    return param_1;
  }
}

// GetRayTracingAccelerationStructureBuildFlags @ 145a1aa30

ERayTracingAccelerationStructureFlags __cdecl
GetRayTracingAccelerationStructureBuildFlags(FRayTracingGeometryInitializer *param_1)

{
  ERayTracingAccelerationStructureFlags EVar1;
  ERayTracingAccelerationStructureFlags EVar2;
  
  EVar1 = FastBuild;
  if (param_1->bFastBuild == false) {
    EVar1 = FastTrace;
  }
  EVar2 = EVar1 | AllowUpdate;
  if (param_1->bAllowUpdate == false) {
    EVar2 = EVar1;
  }
  if ((((param_1->bFastBuild == false) && (param_1->bAllowUpdate == false)) &&
      (param_1->bAllowCompaction != false)) &&
     ((GD3D12RayTracingAllowCompaction != 0 &&
      ((uint)GD3D12RayTracingCompactionMinPrimitiveCount < param_1->TotalPrimitiveCount)))) {
    EVar2 = EVar2 | AllowCompaction;
  }
  if (GRayTracingDebugForceBuildMode == 1) {
    return EVar2 & ~FastTrace | FastBuild;
  }
  if (GRayTracingDebugForceBuildMode == 2) {
    EVar2 = EVar2 & ~FastBuild | FastTrace;
  }
  return EVar2;
}

// GetResourceAndTexture @ 145a1afc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

tuple<FD3D12Resource_*,FD3D12Texture_*> * __cdecl
GetResourceAndTexture
          (tuple<FD3D12Resource_*,FD3D12Texture_*> *__return_storage_ptr__,
          FD3D12CommandContext *param_1,FRHITransitionInfo *param_2)

{
  EType EVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  tuple<FD3D12Resource_*,FD3D12Texture_*> *ptVar5;
  FD3D12Resource *pFVar6;
  longlong lVar7;
  FD3D12View *this;
  ulonglong uVar8;
  
  EVar1 = param_2->Type;
  if (EVar1 == Texture) {
    uVar2 = 0;
    bVar4 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar4) {
      for (; (*(uint *)&param_1->field_0x2f8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar8 = 0x20;
    if (bVar4) {
      uVar8 = (ulonglong)uVar2;
    }
    if ((((param_2->field1_0x8).Resource != (FRHIResource *)0x0) &&
        (lVar7 = (**(code **)(((param_2->field1_0x8).Resource)->_padding_ + 0x48))(), lVar7 != 0))
       && (lVar7 = *(longlong *)(lVar7 + 0x200 + uVar8 * 8), lVar7 != 0)) {
      (__return_storage_ptr__->_Myfirst)._Val = *(FD3D12Resource **)(lVar7 + 400);
      __return_storage_ptr__->_padding_ = lVar7;
      return __return_storage_ptr__;
    }
LAB_145a1b014:
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->_Myfirst)._Val = (FD3D12Resource *)0x0;
    return __return_storage_ptr__;
  }
  if (EVar1 == Buffer) {
    uVar2 = 0;
    bVar4 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar4) {
      for (; (*(uint *)&param_1->field_0x2f8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((param_2->field1_0x8).Resource != (FRHIResource *)0x0) {
      uVar8 = 0x20;
      if (bVar4) {
        uVar8 = (ulonglong)uVar2;
      }
      lVar7 = (&(param_2->field1_0x8).Resource[0x12]._padding_)[uVar8];
      if (lVar7 != 0) {
        (__return_storage_ptr__->_Myfirst)._Val = *(FD3D12Resource **)(lVar7 + 0x140);
        __return_storage_ptr__->_padding_ = 0;
        return __return_storage_ptr__;
      }
    }
    goto LAB_145a1b014;
  }
  if (EVar1 != UAV) {
    if ((EVar1 != BVH) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                           ,0x412,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      ptVar5 = (tuple<FD3D12Resource_*,FD3D12Texture_*> *)(*pcVar3)();
      return ptVar5;
    }
    goto LAB_145a1b014;
  }
  uVar2 = 0;
  bVar4 = *(int *)&param_1->field_0x2f8 != 0;
  if (bVar4) {
    for (; (*(uint *)&param_1->field_0x2f8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if ((param_2->field1_0x8).Texture == (FRHITexture *)0x0) {
    this = (FD3D12View *)0x0;
  }
  else {
    uVar8 = 0x20;
    if (bVar4) {
      uVar8 = (ulonglong)uVar2;
    }
    lVar7 = *(longlong *)
             ((longlong)(&(((param_2->field1_0x8).Texture)->TextureDesc).AliasableFormats + -3) +
             uVar8 * 8);
    this = (FD3D12View *)(lVar7 + 0x30);
    if (lVar7 == 0) {
      this = (FD3D12View *)0x0;
    }
    if (this != (FD3D12View *)0x0) goto LAB_145a1b0b6;
  }
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("UAV",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                     ,0x3ef,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    ptVar5 = (tuple<FD3D12Resource_*,FD3D12Texture_*> *)(*pcVar3)();
    return ptVar5;
  }
  if (this == (FD3D12View *)0x0) {
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->_Myfirst)._Val = (FD3D12Resource *)0x0;
    return __return_storage_ptr__;
  }
LAB_145a1b0b6:
  pFVar6 = FD3D12View::GetResource(this);
  (__return_storage_ptr__->_Myfirst)._Val = pFVar6;
  __return_storage_ptr__->_padding_ = 0;
  return __return_storage_ptr__;
}

// GetResourceBufferAndTexture @ 145a1b190

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> * __cdecl
GetResourceBufferAndTexture
          (TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*>
           *__return_storage_ptr__,FD3D12CommandContext *param_1,FRHITransitionInfo *param_2)

{
  EType EVar1;
  char cVar2;
  FRHITexture *pFVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> *pTVar7;
  FD3D12Resource *pFVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FD3D12Resource *pFVar12;
  ulonglong uVar13;
  FD3D12Resource *pFVar14;
  
  EVar1 = param_2->Type;
  if (EVar1 == Texture) {
    uVar4 = 0;
    bVar6 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar6) {
      for (; (*(uint *)&param_1->field_0x2f8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar13 = 0x20;
    if (bVar6) {
      uVar13 = (ulonglong)uVar4;
    }
    lVar11 = 0;
    lVar9 = lVar11;
    if ((((param_2->field1_0x8).Resource != (FRHIResource *)0x0) &&
        (lVar10 = (**(code **)(((param_2->field1_0x8).Resource)->_padding_ + 0x48))(), lVar10 != 0))
       && (lVar9 = *(longlong *)(lVar10 + 0x200 + uVar13 * 8), lVar9 != 0)) {
      lVar11 = *(longlong *)(lVar9 + 400);
    }
    *(longlong *)__return_storage_ptr__ = lVar11;
    *(longlong *)&__return_storage_ptr__->field_0x10 = lVar9;
LAB_145a1b3b8:
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  if (EVar1 == Buffer) {
    uVar4 = 0;
    bVar6 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar6) {
      for (; (*(uint *)&param_1->field_0x2f8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if ((param_2->field1_0x8).Resource != (FRHIResource *)0x0) {
      uVar13 = 0x20;
      if (bVar6) {
        uVar13 = (ulonglong)uVar4;
      }
      lVar9 = (&(param_2->field1_0x8).Resource[0x12]._padding_)[uVar13];
      if (lVar9 != 0) {
        *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar9 + 0x140);
        *(longlong *)&__return_storage_ptr__->field_0x8 = lVar9;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        return __return_storage_ptr__;
      }
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    return __return_storage_ptr__;
  }
  if (EVar1 != UAV) {
    if ((EVar1 != BVH) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0x9ba,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> *)
               (*pcVar5)();
      return pTVar7;
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    goto LAB_145a1b3b8;
  }
  uVar4 = 0;
  bVar6 = *(int *)&param_1->field_0x2f8 != 0;
  if (bVar6) {
    for (; (*(uint *)&param_1->field_0x2f8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  pFVar12 = (FD3D12Resource *)0x0;
  if ((param_2->field1_0x8).Texture != (FRHITexture *)0x0) {
    uVar13 = 0x20;
    if (bVar6) {
      uVar13 = (ulonglong)uVar4;
    }
    lVar9 = *(longlong *)
             ((longlong)(&(((param_2->field1_0x8).Texture)->TextureDesc).AliasableFormats + -3) +
             uVar13 * 8);
    pFVar8 = (FD3D12Resource *)(lVar9 + 0x30);
    if (lVar9 == 0) {
      pFVar8 = pFVar12;
    }
    if (pFVar8 != (FD3D12Resource *)0x0) {
      pFVar8 = FD3D12View::GetResource((FD3D12View *)pFVar8);
      goto LAB_145a1b275;
    }
  }
  bVar6 = FDebug::CheckVerifyFailedImpl2
                    ("UAV",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                     ,0x9a4,L"");
  pFVar8 = pFVar12;
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TTuple<FD3D12Resource_const_*,FD3D12Buffer_const_*,FD3D12Texture_const_*> *)
             (*pcVar5)();
    return pTVar7;
  }
LAB_145a1b275:
  pFVar3 = (param_2->field1_0x8).Texture;
  cVar2 = (char)pFVar3->_padding_;
  pFVar14 = pFVar12;
  if ((cVar2 == '\0') || (cVar2 == '\x01')) {
    uVar4 = 0;
    bVar6 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar6) {
      for (; (*(uint *)&param_1->field_0x2f8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (pFVar3->_padding_ != 0) {
      uVar13 = 0x20;
      if (bVar6) {
        uVar13 = (ulonglong)uVar4;
      }
      pFVar14 = *(FD3D12Resource **)(pFVar3->_padding_ + 0x1b0 + uVar13 * 8);
    }
  }
  cVar2 = (char)pFVar3->_padding_;
  if ((cVar2 != '\0') && (cVar2 != '\x01')) {
    uVar4 = 0;
    bVar6 = *(int *)&param_1->field_0x2f8 != 0;
    if (bVar6) {
      for (; (*(uint *)&param_1->field_0x2f8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar13 = 0x20;
    if (bVar6) {
      uVar13 = (ulonglong)uVar4;
    }
    if (((longlong *)pFVar3->_padding_ != (longlong *)0x0) &&
       (lVar9 = (**(code **)(*(longlong *)pFVar3->_padding_ + 0x48))(),
       pFVar12 = (FD3D12Resource *)0x0, lVar9 != 0)) {
      pFVar12 = *(FD3D12Resource **)(lVar9 + 0x200 + uVar13 * 8);
    }
  }
  *(FD3D12Resource **)__return_storage_ptr__ = pFVar8;
  *(FD3D12Resource **)&__return_storage_ptr__->field_0x8 = pFVar14;
  *(FD3D12Resource **)&__return_storage_ptr__->field_0x10 = pFVar12;
  return __return_storage_ptr__;
}

// GetShaderIdentifier @ 145a1b4c0

FD3D12ShaderIdentifier * __cdecl
GetShaderIdentifier(FD3D12ShaderIdentifier *__return_storage_ptr__,ID3D12StateObject *param_1,
                   wchar_t *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  FD3D12ShaderIdentifier *pFVar11;
  undefined4 *puVar12;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)0x0;
  iVar10 = (**(code **)*param_1)(param_1,&_GUID_de5fa827_9bf9_4f26_89ff_d7f56fde3860,local_18);
  if (iVar10 < 0) {
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("(((HRESULT)(QueryInterfaceResult)) >= 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x2d8,
                       L"Failed to query pipeline properties from the ray tracing pipeline state object. Result=%08x"
                      );
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FD3D12ShaderIdentifier *)(*pcVar1)();
      return pFVar11;
    }
  }
  puVar12 = (undefined4 *)(**(code **)(*local_18[0] + 0x18))(local_18[0],param_2);
  if (puVar12 == (undefined4 *)0x0) {
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("ShaderIdData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x2cc,L"Couldn\'t find requested export in the ray tracing shader pipeline")
    ;
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FD3D12ShaderIdentifier *)(*pcVar1)();
      return pFVar11;
    }
  }
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar4 = puVar12[3];
  uVar5 = puVar12[4];
  uVar6 = puVar12[5];
  uVar7 = puVar12[6];
  uVar8 = puVar12[7];
  *(undefined4 *)__return_storage_ptr__->Data = *puVar12;
  *(undefined4 *)((longlong)__return_storage_ptr__->Data + 4) = uVar2;
  *(undefined4 *)(__return_storage_ptr__->Data + 1) = uVar3;
  *(undefined4 *)((longlong)__return_storage_ptr__->Data + 0xc) = uVar4;
  *(undefined4 *)(__return_storage_ptr__->Data + 2) = uVar5;
  *(undefined4 *)((longlong)__return_storage_ptr__->Data + 0x14) = uVar6;
  *(undefined4 *)(__return_storage_ptr__->Data + 3) = uVar7;
  *(undefined4 *)((longlong)__return_storage_ptr__->Data + 0x1c) = uVar8;
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return __return_storage_ptr__;
}

// Init @ 145a1e590

void __thiscall
GraphicsPipelineCreationArgs_POD::Init
          (GraphicsPipelineCreationArgs_POD *this,GraphicsPipelineCreationArgs_POD *param_1)

{
  ID3D12RootSignature *pIVar1;
  ulong64 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  D3D12_BLEND DVar6;
  D3D12_BLEND_OP DVar7;
  D3D12_BLEND DVar8;
  GraphicsPipelineCreationArgs_POD *pGVar9;
  longlong lVar10;
  GraphicsPipelineCreationArgs_POD *pGVar11;
  
  lVar10 = 6;
  pGVar9 = param_1;
  pGVar11 = this;
  do {
    pIVar1 = (pGVar9->Desc).Desc.pRootSignature;
    (pGVar11->Desc).pRootSignature = (pGVar9->Desc).pRootSignature;
    (pGVar11->Desc).Desc.pRootSignature = pIVar1;
    uVar2 = (pGVar9->Desc).Desc.VS.BytecodeLength;
    (pGVar11->Desc).Desc.VS.pShaderBytecode = (pGVar9->Desc).Desc.VS.pShaderBytecode;
    (pGVar11->Desc).Desc.VS.BytecodeLength = uVar2;
    uVar2 = (pGVar9->Desc).Desc.MS.BytecodeLength;
    (pGVar11->Desc).Desc.MS.pShaderBytecode = (pGVar9->Desc).Desc.MS.pShaderBytecode;
    (pGVar11->Desc).Desc.MS.BytecodeLength = uVar2;
    uVar2 = (pGVar9->Desc).Desc.AS.BytecodeLength;
    (pGVar11->Desc).Desc.AS.pShaderBytecode = (pGVar9->Desc).Desc.AS.pShaderBytecode;
    (pGVar11->Desc).Desc.AS.BytecodeLength = uVar2;
    uVar2 = (pGVar9->Desc).Desc.PS.BytecodeLength;
    (pGVar11->Desc).Desc.PS.pShaderBytecode = (pGVar9->Desc).Desc.PS.pShaderBytecode;
    (pGVar11->Desc).Desc.PS.BytecodeLength = uVar2;
    uVar2 = (pGVar9->Desc).Desc.GS.BytecodeLength;
    (pGVar11->Desc).Desc.GS.pShaderBytecode = (pGVar9->Desc).Desc.GS.pShaderBytecode;
    (pGVar11->Desc).Desc.GS.BytecodeLength = uVar2;
    iVar3 = (pGVar9->Desc).Desc.BlendState.IndependentBlendEnable;
    iVar4 = (pGVar9->Desc).Desc.BlendState.RenderTarget[0].BlendEnable;
    iVar5 = (pGVar9->Desc).Desc.BlendState.RenderTarget[0].LogicOpEnable;
    (pGVar11->Desc).Desc.BlendState.AlphaToCoverageEnable =
         (pGVar9->Desc).Desc.BlendState.AlphaToCoverageEnable;
    (pGVar11->Desc).Desc.BlendState.IndependentBlendEnable = iVar3;
    (pGVar11->Desc).Desc.BlendState.RenderTarget[0].BlendEnable = iVar4;
    (pGVar11->Desc).Desc.BlendState.RenderTarget[0].LogicOpEnable = iVar5;
    DVar6 = (pGVar9->Desc).Desc.BlendState.RenderTarget[0].DestBlend;
    DVar7 = (pGVar9->Desc).Desc.BlendState.RenderTarget[0].BlendOp;
    DVar8 = (pGVar9->Desc).Desc.BlendState.RenderTarget[0].SrcBlendAlpha;
    (pGVar11->Desc).Desc.BlendState.RenderTarget[0].SrcBlend =
         (pGVar9->Desc).Desc.BlendState.RenderTarget[0].SrcBlend;
    (pGVar11->Desc).Desc.BlendState.RenderTarget[0].DestBlend = DVar6;
    (pGVar11->Desc).Desc.BlendState.RenderTarget[0].BlendOp = DVar7;
    (pGVar11->Desc).Desc.BlendState.RenderTarget[0].SrcBlendAlpha = DVar8;
    lVar10 = lVar10 + -1;
    pGVar9 = (GraphicsPipelineCreationArgs_POD *)
             &(pGVar9->Desc).Desc.BlendState.RenderTarget[0].DestBlendAlpha;
    pGVar11 = (GraphicsPipelineCreationArgs_POD *)
              &(pGVar11->Desc).Desc.BlendState.RenderTarget[0].DestBlendAlpha;
  } while (lVar10 != 0);
  this->Library = param_1->Library;
  SaveByteCode(&(this->Desc).Desc.VS);
  SaveByteCode(&(this->Desc).Desc.MS);
  SaveByteCode(&(this->Desc).Desc.AS);
  SaveByteCode(&(this->Desc).Desc.PS);
  SaveByteCode(&(this->Desc).Desc.GS);
  return;
}

// Initialize @ 145a1f0b0

DWORD __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::Initialize
          (ResidencyManagerInternal *this,ID3D12Device *param_1,uint param_2,IDXGIAdapter *param_3,
          uint param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  int iVar4;
  DWORD DVar5;
  ulong64 uVar6;
  AsyncWorkload *pAVar7;
  HANDLE pvVar8;
  ulong64 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  LARGE_INTEGER local_res8;
  
  this->Device = param_1;
  this->NodeIndex = param_2;
  this->MaxSoftwareQueueLatency = param_4;
  iVar4 = (**(code **)*param_1)(param_1,&_GUID_81dadc15_2bad_4392_93c5_101345c4aa98,&this->Device3);
  if (iVar4 < 0) {
    puVar9 = &(this->AsyncThreadFence).FenceValue;
    *puVar9 = *puVar9 + 1;
  }
  if (param_3 != (IDXGIAdapter *)0x0) {
    (**(code **)*param_3)(param_3,&_GUID_645967a4_1392_4310_a798_8053ce3e93fd,&this->Adapter);
  }
  uVar12 = CONCAT44(0,param_4 + 1);
  this->AsyncWorkQueueSize = uVar12;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar12;
  uVar6 = SUB168(ZEXT816(0x18) * auVar2,0);
  if (SUB168(ZEXT816(0x18) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  pAVar7 = operator_new__(uVar6);
  if (pAVar7 == (AsyncWorkload *)0x0) {
    this->AsyncWorkQueue = (AsyncWorkload *)0x0;
    DVar5 = 0x8007000e;
  }
  else {
    if (uVar12 != 0) {
      puVar9 = &pAVar7->FenceValueToSignal;
      do {
        ((AsyncWorkload *)(puVar9 + -2))->SyncPointGeneration = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 3;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    this->AsyncWorkQueue = pAVar7;
    QueryPerformanceFrequency(&local_res8);
    fVar3 = __real_5f000000;
    lVar10 = 0;
    fVar14 = (float)local_res8.QuadPart * this->cMinEvictionGracePeriod;
    if ((__real_5f000000 <= fVar14) && (fVar14 = fVar14 - __real_5f000000, fVar14 < __real_5f000000)
       ) {
      lVar10 = -0x8000000000000000;
    }
    fVar13 = (float)local_res8.QuadPart * this->cMaxEvictionGracePeriod;
    lVar11 = 0;
    bVar1 = __real_5f000000 <= fVar13;
    this->MinEvictionGracePeriodTicks = (longlong)fVar14 + lVar10;
    if ((bVar1) && (fVar13 = fVar13 - fVar3, fVar13 < fVar3)) {
      lVar11 = -0x8000000000000000;
    }
    this->MaxEvictionGracePeriodTicks = (longlong)fVar13 + lVar11;
    DVar5 = (**(code **)((longlong)*this->Device + 0x120))
                      (this->Device,0,0,&_GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
                       &this->AsyncThreadFence);
    if (-1 < (int)DVar5) {
      pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      this->CompletionEvent = pvVar8;
      if (pvVar8 == (HANDLE)0xffffffffffffffff) {
        DVar5 = GetLastError();
        if (0 < (int)DVar5) {
          DVar5 = DVar5 & 0xffff | 0x80070000;
        }
        if ((int)DVar5 < 0) {
          return DVar5;
        }
      }
      pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      this->AsyncThreadWorkCompletionEvent = pvVar8;
      if (pvVar8 == (HANDLE)0xffffffffffffffff) {
        DVar5 = GetLastError();
        if (0 < (int)DVar5) {
          DVar5 = DVar5 & 0xffff | 0x80070000;
        }
        if ((int)DVar5 < 0) {
          return DVar5;
        }
      }
      pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      this->AsyncWorkEvent = pvVar8;
      if (pvVar8 == (HANDLE)0xffffffffffffffff) {
        DVar5 = GetLastError();
        if (0 < (int)DVar5) {
          DVar5 = DVar5 & 0xffff | 0x80070000;
        }
        if ((int)DVar5 < 0) {
          return DVar5;
        }
      }
      if (this->Device3 == (ID3D12Device3 *)0x0) {
        pvVar8 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,AsyncThreadStart,this,0,(LPDWORD)0x0);
        this->AsyncWorkThread = pvVar8;
        if ((pvVar8 == (HANDLE)0xffffffffffffffff) && (DVar5 = GetLastError(), 0 < (int)DVar5)) {
          DVar5 = DVar5 & 0xffff | 0x80070000;
        }
      }
    }
  }
  return DVar5;
}

// IsCPUAccessible @ 145a1f920

bool __cdecl IsCPUAccessible(D3D12_HEAP_TYPE param_1,D3D12_HEAP_PROPERTIES *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == D3D12_HEAP_TYPE_CUSTOM) {
    if ((param_2 == (D3D12_HEAP_PROPERTIES *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x176,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
    param_1 = param_2->CPUPageProperty;
  }
  if (param_1 == D3D12_CPU_PAGE_PROPERTY_NOT_AVAILABLE) {
    return false;
  }
  return true;
}

// LayoutIsCompatibleWithQueue @ 145a1fce0

/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl LayoutIsCompatibleWithQueue(D3D12_BARRIER_LAYOUT param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *pTVar4;
  
  if (param_2 == Graphics) {
    pTVar4 = (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)&DirectQueueCompatibleLayouts;
    do {
      if (pTVar4->Elements[0] == param_1) goto LAB_145a1fd9f;
      pTVar4 = (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)((longlong)pTVar4 + 4);
    } while (pTVar4 != (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)&DAT_15107737c);
    pTVar4 = (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)0x0;
  }
  else if (param_2 == AsyncCompute) {
    pTVar4 = (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)&ComputeQueueCompatibleLayouts;
    while (pTVar4->Elements[0] != param_1) {
      pTVar4 = (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)((longlong)pTVar4 + 4);
      if (pTVar4 == &AllQueueCompatibleLayouts) {
        return false;
      }
    }
  }
  else {
    if (param_2 != All) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                         ,0x329,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      return false;
    }
    pTVar4 = &AllQueueCompatibleLayouts;
    while (pTVar4->Elements[0] != param_1) {
      pTVar4 = (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)((longlong)pTVar4 + 4);
      if (pTVar4 == (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)&DAT_1510773d8) {
        return false;
      }
    }
  }
LAB_145a1fd9f:
  return pTVar4 != (TStaticArray<D3D12_BARRIER_LAYOUT,8,4294967295> *)0x0;
}

// MatchIntelExtensionVersion @ 145a1fe20

bool __cdecl MatchIntelExtensionVersion(INTCExtensionVersion *param_1)

{
  int iVar1;
  INTCSupportedVersion *pIVar2;
  
  pIVar2 = SupportedExtensionsVersion + 1;
  do {
    if (pIVar2->CVar == (IConsoleVariable *)0x0) {
LAB_145a1fe56:
      if (((param_1->HWFeatureLevel == (pIVar2->Version).HWFeatureLevel) &&
          (param_1->APIVersion == (pIVar2->Version).APIVersion)) &&
         (param_1->Revision == (pIVar2->Version).Revision)) {
        return true;
      }
    }
    else {
      iVar1 = (**(code **)(*(longlong *)pIVar2->CVar + 200))();
      if (iVar1 != 0) goto LAB_145a1fe56;
    }
    pIVar2 = pIVar2 + -1;
    if ((longlong)pIVar2 < 0x154bdba78) {
      return false;
    }
  } while( true );
}

// PrepareAccelerationStructureBuild @ 145a20760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a2170e) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
PrepareAccelerationStructureBuild
          (FD3D12CommandContext *param_1,FD3D12RayTracingScene *param_2,FD3D12Buffer *param_3,
          uint param_4,FD3D12Buffer *param_5,uint param_6,uint param_7,
          EAccelerationStructureBuildMode param_8,
          D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *param_9)

{
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS *pDVar1;
  ID3D12Device1 *pIVar2;
  ERayTracingAccelerationStructureFlags EVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FD3D12Resource *pFVar6;
  FD3D12RayTracingGeometry *pFVar7;
  ID3D12Device12 IVar8;
  FScriptContainerElement *pFVar9;
  IDXGIFactory5 IVar10;
  FRHIComputeCommandList *this;
  FD3D12Buffer *pFVar11;
  code *pcVar12;
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS DVar13;
  FNoopStruct FVar14;
  ID3D12Device12 *pIVar15;
  FD3D12CommandContext *pFVar16;
  TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> *pTVar17;
  bool bVar18;
  byte bVar19;
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS DVar20;
  int iVar21;
  int iVar22;
  atomic<unsigned_int> aVar23;
  ERayTracingAccelerationStructureFlags EVar24;
  longlong lVar25;
  TRefCountPtr<FD3D12Buffer> TVar26;
  ulonglong uVar27;
  ID3D12Device12 *pIVar28;
  IDXGIFactory5 *pIVar29;
  FRHIBreadcrumbAllocator *pFVar30;
  FRHIBreadcrumbNode *pFVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUpdatedTLAS> FVar33;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar34;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBuiltTLAS> FVar35;
  uint uVar36;
  schar sVar37;
  undefined1 *puVar38;
  FNoopStruct FVar39;
  FNoopStruct FVar40;
  ulong64 uVar41;
  uint uVar42;
  schar *psVar43;
  FD3D12ResidencyHandle **ppFVar44;
  ID3D12Device12 *pIVar45;
  IDXGIFactory5 *pIVar46;
  FD3D12Buffer *pFVar47;
  char cVar48;
  TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> *pTVar49;
  bool bVar50;
  undefined1 auStackY_1e98 [32];
  undefined8 in_stack_ffffffffffffe188;
  undefined4 uVar51;
  FNoopStruct local_1e37;
  char local_1e36;
  ID3D12Device12 *local_1e30;
  FD3D12Buffer *local_1e28;
  TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
  local_1e20;
  uint local_1df0;
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *local_1de8;
  ID3D12Device12 *local_1de0;
  FD3D12Buffer *local_1dd8;
  FD3D12Resource *local_1dd0;
  FD3D12Resource *local_1dc8;
  FD3D12RayTracingGeometry *local_1dc0;
  FD3D12CommandContext *local_1db8;
  FD3D12Resource *local_1db0;
  IDXGIFactory5 *local_1da8;
  TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> *local_1da0;
  longlong local_1d98;
  FD3D12RayTracingScene *local_1d90;
  FD3D12Buffer *local_1d88;
  longlong local_1d80;
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS local_1d78;
  uint local_1d60;
  uint local_1d5c;
  uint local_1d58;
  uint local_1d54;
  uint local_1d50;
  undefined1 local_1d48 [56];
  undefined4 local_1d10;
  uint local_1d0c;
  FStatMessage local_1d08;
  FRHIBreadcrumbScope local_1cf8;
  undefined1 local_1ce8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_1ce0;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_1cd0;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_1cc0;
  TRefCountPtr<IDXGIFactory7> local_1cb0;
  HINSTANCE__ *pHStack_1ca8;
  TRefCountPtr<IDXGIDebug> TStack_1ca0;
  void *pvStack_1c98;
  char *local_1c90;
  D3D_ROOT_SIGNATURE_VERSION DStack_1c88;
  bool bStack_1c84;
  bool bStack_1c83;
  bool bStack_1c82;
  undefined1 uStack_1c81;
  undefined8 local_1c80;
  wchar_t *pwStack_1c78;
  FDebugName local_1c70;
  wchar_t local_1c60 [24];
  FName local_1c30;
  undefined1 local_1c28 [24];
  ulonglong uStack_1c10;
  ulonglong local_1c08;
  FRHICommandList_RecursiveHazardous local_1c00;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uVar51 = (undefined4)((ulonglong)in_stack_ffffffffffffe188 >> 0x20);
  uStack_48 = 0x145a2077f;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1e98;
  local_1de8 = param_9;
  local_1d88 = param_5;
  bVar50 = CpuChannel->Enabled < 0;
  local_1dd8 = param_3;
  local_1db8 = param_1;
  local_1d90 = param_2;
  if (bVar50) {
    local_1e36 = '\0';
  }
  else {
    local_1e36 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4377,"PrepareAccelerationStructureBuild_TopLevel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x1119);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4377);
  }
  if ((param_5 == (FD3D12Buffer *)0x0) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("InstanceBuffer != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x111b,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((param_2->Initializer).MaxNumInstances < param_7) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("NumInstances <= Scene.Initializer.MaxNumInstances",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x111c,L"NumInstances must be less or equal to MaxNumInstances"), bVar18)
     ) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (param_8 == Update) {
    if ((param_7 != param_2->NumInstances) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("NumInstances == Scene.NumInstances",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1122,
                            L"Number of instances used to update TLAS must match the number used to build."
                           ), bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    param_2->NumInstances = param_7;
  }
  local_1d60 = 0;
  bVar18 = *(int *)&param_1->field_0x2f8 != 0;
  if (bVar18) {
    for (; (*(uint *)&param_1->field_0x2f8 >> local_1d60 & 1) == 0; local_1d60 = local_1d60 + 1) {
    }
  }
  uVar41 = 0x20;
  if (bVar18) {
    uVar41 = (ulong64)local_1d60;
  }
  if ((*(longlong *)&param_1->field_0x2f0 == 0) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar47 = (FD3D12Buffer *)0x0;
  uVar4 = *(undefined8 *)&param_1->field_0x2f0;
  local_1e28 = (FD3D12Buffer *)0x0;
  if (local_1dd8 == (FD3D12Buffer *)0x0) {
    lVar25 = 0xd8;
    if (param_8 != Update) {
      lVar25 = 0xd0;
    }
    uVar5 = *(undefined8 *)((longlong)&param_2->_padding_ + lVar25);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      FName::FName(&ScratchBufferName,"AutoBuildScratchTLAS");
      _Init_thread_footer(&_TSS0);
    }
    FDebugName::FDebugName(&local_1c70,ScratchBufferName);
    TVar26 = CreateRayTracingBuffer
                       ((FD3D12Adapter *)local_1d48,(uint)uVar4,uVar41,(ERayTracingBufferType)uVar5,
                        (FDebugName *)CONCAT44(uVar51,1));
    if ((FD3D12Buffer *)local_1c28 != TVar26.Reference) {
      pFVar47 = (FD3D12Buffer *)(TVar26.Reference)->_padding_;
      (TVar26.Reference)->_padding_ = 0;
      local_1e28 = pFVar47;
    }
    if (local_1d48._0_8_ != 0) {
      (**(code **)(*(longlong *)(local_1d48._0_8_ + 0xe8) + 0x10))();
    }
    param_4 = 0;
    local_1dd8 = pFVar47;
    if (pFVar47 == (FD3D12Buffer *)0x0) {
      if (param_8 == Update) {
        bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("ScratchBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1139,L"TLAS update requires scratch buffer of at least %lld bytes.");
        if (bVar18) {
code_r0x000145a20a1f:
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else {
        bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("ScratchBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x113d,L"TLAS build requires scratch buffer of at least %lld bytes.");
        if (bVar18) goto code_r0x000145a20a1f;
      }
    }
  }
  local_1c60[8] = L'\0';
  local_1c60[9] = L'\0';
  local_1c60[10] = L'\0';
  local_1c60[0xb] = L'\0';
  local_1c60[0] = L'\0';
  local_1c60[1] = L'\0';
  local_1c60[2] = L'\0';
  local_1c60[3] = L'\0';
  local_1c60[4] = L'\0';
  local_1c60[5] = L'\0';
  local_1c60[6] = L'\0';
  local_1c60[7] = L'\0';
  local_1d78.Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL;
  local_1d78.Flags = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_NONE;
  local_1d78.field4_0x10.InstanceDescs = 0;
  local_1d78.DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
  local_1d78.NumDescs = param_7;
  DVar20 = TranslateRayTracingAccelerationStructureFlags((param_2->Initializer).BuildFlags);
  local_1d78.Flags = DVar20;
  local_1c28._16_8_ = 0;
  uStack_1c10 = 0;
  local_1c08 = 0;
  if ((*(longlong *)&param_1->field_0x300 == 0) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FD3D12Device::GetRaytracingAccelerationStructurePrebuildInfo
            (*(FD3D12Device **)&param_1->field_0x300,&local_1d78,
             (D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO *)(local_1c28 + 0x10));
  if (((ulonglong)param_2->_padding_ < (ulonglong)local_1c28._16_8_) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("PrebuildInfo.ResultDataMaxSizeInBytes <= Scene.SizeInfo.ResultSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x114e,
                          L"TLAS build result buffer now requires %lld bytes, but only %lld was calculated in the constructor."
                         ), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((ulonglong)param_2->_padding_ < uStack_1c10) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("PrebuildInfo.ScratchDataSizeInBytes <= Scene.SizeInfo.BuildScratchSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1152,
                          L"TLAS build scratch buffer now requires %lld bytes, but only %lld was calculated in the constructor."
                         ), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((ulonglong)param_2->_padding_ < local_1c08) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("PrebuildInfo.UpdateScratchDataSizeInBytes <= Scene.SizeInfo.UpdateScratchSize"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1156,
                          L"TLAS update scratch buffer now requires %lld bytes, but only %lld was calculated in the constructor."
                         ), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_1d48._24_8_ = ZEXT48(param_4);
  puVar38 = (undefined1 *)(ulonglong)(uint)local_1dd8->_padding_;
  if (param_8 == Update) {
    if ((puVar38 < &((ID3D12Device2 *)local_1d48._24_8_)->field_0x0 + local_1c08) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("ScratchBufferOffset + PrebuildInfo.UpdateScratchDataSizeInBytes <= ScratchBuffer->GetSize()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x115d,
                            L"TLAS scratch buffer size is %d bytes with offset %d (%d bytes available), but the update requires %lld bytes (NumInstances = %d)."
                           ), bVar18)) {
code_r0x000145a20c43:
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else if ((puVar38 < &((ID3D12Device2 *)local_1d48._24_8_)->field_0x0 + uStack_1c10) &&
          (bVar18 = FDebug::CheckVerifyFailedImpl2
                              ("ScratchBufferOffset + PrebuildInfo.ScratchDataSizeInBytes <= ScratchBuffer->GetSize()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                               ,0x1164,
                               L"TLAS scratch buffer size is %d bytes with offset %d (%d bytes available), but the build requires %lld bytes (NumInstances = %d)."
                              ), bVar18)) goto code_r0x000145a20c43;
  pIVar2 = (ID3D12Device1 *)(param_2->AccelerationStructureBuffers + uVar41);
  local_1d48._16_8_ = pIVar2;
  if ((param_2->AccelerationStructureBuffers[uVar41].Reference == (FD3D12Buffer *)0x0) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("AccelerationStructureBuffer.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x116c,
                          L"Acceleration structure buffer must be set for this scene using RHIBindAccelerationStructureMemory() before build command is issued."
                         ), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar6 = (FD3D12Resource *)(*(FD3D12Buffer **)pIVar2)->_padding_;
  if ((pFVar6 == (FD3D12Resource *)0x0) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar6);
  pFVar6 = (FD3D12Resource *)local_1d88->_padding_;
  if ((pFVar6 == (FD3D12Resource *)0x0) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar6);
  pFVar6 = (FD3D12Resource *)local_1dd8->_padding_;
  if ((pFVar6 == (FD3D12Resource *)0x0) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar6);
  local_1da0 = param_2->ResourcesToMakeResident + uVar41;
  local_1de0 = (ID3D12Device12 *)&local_1da0->ArrayMax;
  local_1da0->ArrayNum = 0;
  if (local_1da0->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_1da0->AllocatorInstance,0,(int *)local_1de0);
  }
  pIVar15 = local_1de0;
  FVar14 = local_1e37;
  local_1d48._8_8_ = SEXT48((param_2->ReferencedGeometries).ArrayNum);
  local_1e20.CurrentData._0_8_ = (ulonglong)(uint)local_1e20.CurrentData._4_4_ << 0x20;
  local_1e20.CurrentData.Values = (FNoopStruct *)0x0;
  local_1e20.NumSlotsMinusOne = 0;
  local_1e20.MaxLookups = '\0';
  local_1e20.NumElements = 0;
  local_1df0 = 0;
  local_1e20.CurrentData.Distances = (schar *)0x0;
  local_1e20.CurrentData.Keys = (FD3D12ResidencyHandle **)0x0;
  if ((longlong)local_1d48._8_8_ < 1) {
    psVar43 = (schar *)0x0;
    cVar48 = !bVar50;
  }
  else {
    local_1d80 = uVar41 * 8 + 0x168;
    local_1d98 = 0;
    pTVar49 = local_1da0;
    FVar39 = local_1e37;
    FVar40 = local_1e37;
    do {
      uVar36 = 0;
      if ((int)local_1df0 < (param_2->ReferencedGeometries).ArrayNum) {
        uVar36 = ~local_1df0 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar50 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_1d5c = 0;
      bVar50 = *(int *)&param_1->field_0x2f8 != 0;
      if (bVar50) {
        for (; (*(uint *)&param_1->field_0x2f8 >> local_1d5c & 1) == 0; local_1d5c = local_1d5c + 1)
        {
        }
      }
      pFVar7 = *(FD3D12RayTracingGeometry **)
                ((param_2->ReferencedGeometries).AllocatorInstance.Data + local_1d98 * 8);
      uVar27 = 0x20;
      if (bVar50) {
        uVar27 = (ulonglong)local_1d5c;
      }
      local_1dc0 = pFVar7;
      if ((pFVar7->bIsAccelerationStructureDirty[uVar27] != false) &&
         (bVar50 = FDebug::CheckVerifyFailedImpl2
                             ("!Geometry->IsDirty(CommandContext.GetGPUIndex())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x11a5,
                              L"Acceleration structures for all geometries must be built before building the top level acceleration structure for the scene."
                             ), bVar50)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar6 = *(FD3D12Resource **)
                (*(longlong *)((longlong)&pFVar7->_padding_ + local_1d80) + 0x140);
      if ((pFVar6 == (FD3D12Resource *)0x0) &&
         (bVar50 = FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x1a5,L""), bVar50)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (*(longlong *)&param_1->field_0x188 == 0) {
        (**(code **)(*(longlong *)param_1 + 8))(param_1);
      }
      FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&param_1->field_0x188,pFVar6);
      bVar50 = false;
      bVar18 = false;
      local_1db0 = *(FD3D12Resource **)
                    (*(longlong *)((longlong)&local_1dc0->_padding_ + local_1d80) + 0x140);
      if ((local_1db0->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
        FD3D12Resource::GetResidencyHandles(local_1db0,&local_1ce0);
        pIVar28 = (ID3D12Device12 *)(local_1ce0.DataPtr + local_1ce0.ArrayNum);
        psVar43 = local_1e20.CurrentData.Distances;
        ppFVar44 = local_1e20.CurrentData.Keys;
        pIVar45 = (ID3D12Device12 *)local_1ce0.DataPtr;
        local_1e30 = pIVar28;
        if ((ID3D12Device12 *)local_1ce0.DataPtr != pIVar28) {
          do {
            IVar8 = *pIVar45;
            if (((GEnableResidencyManagement != false) && (IVar8 != (ID3D12Device12)0x0)) &&
               (*(longlong *)((longlong)IVar8 + 8) != 0)) {
              sVar37 = '\0';
              uVar36 = ((uint)((ulonglong)IVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)IVar8 >> 4)) *
                       -0x7a143595;
              uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
              uVar36 = uVar36 >> 0x10 ^ uVar36;
              uVar42 = uVar36 & local_1e20.NumSlotsMinusOne;
              uVar27 = (ulonglong)uVar42;
              if ((psVar43 != (schar *)0x0) && (-1 < psVar43[uVar27])) {
                do {
                  pIVar28 = local_1e30;
                  bVar50 = bVar18;
                  if (IVar8 == *(ID3D12Device12 *)(ppFVar44 + uVar27)) goto LAB_145a21056;
                  uVar42 = (int)uVar27 + 1;
                  uVar27 = (ulonglong)uVar42;
                  sVar37 = sVar37 + '\x01';
                } while (sVar37 <= psVar43[uVar27]);
              }
              Experimental::TSherwoodHashTable_Private::
              TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
              ::Add(&local_1e20,sVar37,&local_1e20.CurrentData,uVar42,(FD3D12ResidencyHandle *)IVar8
                    ,uVar36,FVar40);
              bVar18 = true;
              pIVar28 = local_1e30;
              psVar43 = local_1e20.CurrentData.Distances;
              ppFVar44 = local_1e20.CurrentData.Keys;
              bVar50 = bVar18;
            }
LAB_145a21056:
            pIVar45 = pIVar45 + 1;
          } while (pIVar45 != pIVar28);
          if (bVar50) goto LAB_145a2106c;
        }
      }
      else {
LAB_145a2106c:
        pFVar9 = (pTVar49->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_1db0) &&
            ((FScriptContainerElement *)&local_1db0 < pFVar9 + (longlong)*(int *)pIVar15 * 8)) &&
           (bVar50 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar50)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar21 = pTVar49->ArrayNum;
        if (iVar21 == *(int *)pIVar15) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar49->AllocatorInstance,(int *)pIVar15);
        }
        pTVar49->ArrayNum = iVar21 + 1;
        *(FD3D12Resource **)((pTVar49->AllocatorInstance).Data + (longlong)iVar21 * 8) = local_1db0;
        psVar43 = local_1e20.CurrentData.Distances;
      }
      pFVar16 = local_1db8;
      pFVar7 = local_1dc0;
      if ((GRHIGlobals.RayTracing.SupportsShaders != false) ||
         (GRHIGlobals.RayTracing.RequiresInlineRayTracingSBT != false)) {
        local_1d50 = 0;
        bVar50 = *(int *)&local_1db8->field_0x2f8 != 0;
        if (bVar50) {
          for (; (*(uint *)&local_1db8->field_0x2f8 >> local_1d50 & 1) == 0;
              local_1d50 = local_1d50 + 1) {
          }
        }
        uVar36 = 0x20;
        if (bVar50) {
          uVar36 = local_1d50;
        }
        bVar50 = FD3D12RayTracingGeometry::BuffersValid(local_1dc0,uVar36);
        if ((!bVar50) &&
           (bVar50 = FDebug::CheckVerifyFailedImpl2
                               ("Geometry->BuffersValid(CommandContext.GetGPUIndex())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x11ae,
                                L"Index & vertex buffers for all geometries must be valid (streamed in) when adding geometry to the top level acceleration structure for the scene"
                               ), bVar50)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        psVar43 = local_1e20.CurrentData.Distances;
        if (pFVar7->_padding_ != 0) {
          local_1d58 = 0;
          bVar50 = *(int *)&pFVar16->field_0x2f8 != 0;
          if (bVar50) {
            for (; (*(uint *)&pFVar16->field_0x2f8 >> local_1d58 & 1) == 0;
                local_1d58 = local_1d58 + 1) {
            }
          }
          uVar27 = 0x20;
          if (bVar50) {
            uVar27 = (ulonglong)local_1d58;
          }
          bVar50 = false;
          bVar18 = false;
          local_1dd0 = *(FD3D12Resource **)
                        (*(longlong *)(pFVar7->_padding_ + 0x1b0 + uVar27 * 8) + 0x140);
          if ((local_1dd0->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
            FD3D12Resource::GetResidencyHandles(local_1dd0,&local_1cd0);
            pIVar28 = (ID3D12Device12 *)(local_1cd0.DataPtr + local_1cd0.ArrayNum);
            psVar43 = local_1e20.CurrentData.Distances;
            ppFVar44 = local_1e20.CurrentData.Keys;
            pIVar45 = (ID3D12Device12 *)local_1cd0.DataPtr;
            local_1e30 = pIVar28;
            if ((ID3D12Device12 *)local_1cd0.DataPtr != pIVar28) {
              do {
                IVar8 = *pIVar45;
                if (((GEnableResidencyManagement != false) && (IVar8 != (ID3D12Device12)0x0)) &&
                   (*(longlong *)((longlong)IVar8 + 8) != 0)) {
                  sVar37 = '\0';
                  uVar36 = ((uint)((ulonglong)IVar8 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)IVar8 >> 4)) * -0x7a143595;
                  uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
                  uVar36 = uVar36 >> 0x10 ^ uVar36;
                  uVar42 = uVar36 & local_1e20.NumSlotsMinusOne;
                  uVar27 = (ulonglong)uVar42;
                  if ((psVar43 != (schar *)0x0) && (-1 < psVar43[uVar27])) {
                    do {
                      pIVar28 = local_1e30;
                      bVar50 = bVar18;
                      if (IVar8 == *(ID3D12Device12 *)(ppFVar44 + uVar27)) goto LAB_145a212a6;
                      uVar42 = (int)uVar27 + 1;
                      uVar27 = (ulonglong)uVar42;
                      sVar37 = sVar37 + '\x01';
                    } while (sVar37 <= psVar43[uVar27]);
                  }
                  Experimental::TSherwoodHashTable_Private::
                  TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
                  ::Add(&local_1e20,sVar37,&local_1e20.CurrentData,uVar42,
                        (FD3D12ResidencyHandle *)IVar8,uVar36,FVar39);
                  bVar18 = true;
                  pIVar28 = local_1e30;
                  psVar43 = local_1e20.CurrentData.Distances;
                  ppFVar44 = local_1e20.CurrentData.Keys;
                  bVar50 = bVar18;
                }
LAB_145a212a6:
                pIVar45 = pIVar45 + 1;
              } while (pIVar45 != pIVar28);
              if (bVar50) goto LAB_145a212bc;
            }
          }
          else {
LAB_145a212bc:
            pFVar9 = (pTVar49->AllocatorInstance).Data;
            if (((pFVar9 <= (FScriptContainerElement *)&local_1dd0) &&
                ((FScriptContainerElement *)&local_1dd0 < pFVar9 + (longlong)*(int *)pIVar15 * 8))
               && (bVar50 = FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar50)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar21 = pTVar49->ArrayNum;
            if (iVar21 == *(int *)pIVar15) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar49->AllocatorInstance,(int *)pIVar15);
            }
            pTVar49->ArrayNum = iVar21 + 1;
            *(FD3D12Resource **)((pTVar49->AllocatorInstance).Data + (longlong)iVar21 * 8) =
                 local_1dd0;
            psVar43 = local_1e20.CurrentData.Distances;
          }
        }
        pTVar17 = local_1da0;
        pFVar16 = local_1db8;
        iVar21 = (int)local_1dc0->_padding_;
        pIVar28 = (ID3D12Device12 *)local_1dc0->_padding_;
        local_1de0 = pIVar28 + (longlong)iVar21 * 5;
        pIVar45 = local_1de0;
        while( true ) {
          local_1e30 = pIVar28;
          if ((int)local_1dc0->_padding_ != iVar21) {
            local_1e37 = (FNoopStruct)0x0;
            `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_1e37);
            psVar43 = local_1e20.CurrentData.Distances;
          }
          pTVar49 = local_1da0;
          FVar39 = local_1e37;
          FVar40 = local_1e37;
          if (pIVar28 == pIVar45) break;
          if (*pIVar28 == (ID3D12Device12)0x0) {
LAB_145a21593:
            pIVar28 = pIVar28 + 5;
          }
          else {
            local_1d54 = 0;
            bVar50 = *(int *)&pFVar16->field_0x2f8 != 0;
            if (bVar50) {
              for (; (*(uint *)&pFVar16->field_0x2f8 >> local_1d54 & 1) == 0;
                  local_1d54 = local_1d54 + 1) {
              }
            }
            uVar27 = 0x20;
            if (bVar50) {
              uVar27 = (ulonglong)local_1d54;
            }
            bVar50 = false;
            bVar18 = false;
            local_1dc8 = *(FD3D12Resource **)
                          (*(longlong *)((longlong)*pIVar28 + 0x1b0 + uVar27 * 8) + 0x140);
            if ((local_1dc8->ReservedResourceData).Ptr != (FD3D12ReservedResourceData *)0x0) {
LAB_145a214f8:
              pFVar9 = (pTVar17->AllocatorInstance).Data;
              if (((pFVar9 <= (FScriptContainerElement *)&local_1dc8) &&
                  ((FScriptContainerElement *)&local_1dc8 < pFVar9 + (longlong)*(int *)pIVar15 * 8))
                 && (bVar50 = FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar50)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar22 = pTVar17->ArrayNum;
              if (iVar22 == *(int *)pIVar15) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar17->AllocatorInstance,(int *)pIVar15);
              }
              pTVar17->ArrayNum = iVar22 + 1;
              *(FD3D12Resource **)((pTVar17->AllocatorInstance).Data + (longlong)iVar22 * 8) =
                   local_1dc8;
              psVar43 = local_1e20.CurrentData.Distances;
              pIVar45 = local_1de0;
              goto LAB_145a21593;
            }
            FD3D12Resource::GetResidencyHandles(local_1dc8,&local_1cc0);
            pIVar29 = (IDXGIFactory5 *)(local_1cc0.DataPtr + local_1cc0.ArrayNum);
            psVar43 = local_1e20.CurrentData.Distances;
            ppFVar44 = local_1e20.CurrentData.Keys;
            pIVar46 = (IDXGIFactory5 *)local_1cc0.DataPtr;
            local_1da8 = pIVar29;
            if ((IDXGIFactory5 *)local_1cc0.DataPtr != pIVar29) {
              do {
                IVar10 = *pIVar46;
                if (((GEnableResidencyManagement != false) && (IVar10 != (IDXGIFactory5)0x0)) &&
                   (*(longlong *)((longlong)IVar10 + 8) != 0)) {
                  sVar37 = '\0';
                  uVar36 = ((uint)((ulonglong)IVar10 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)IVar10 >> 4)) * -0x7a143595;
                  uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
                  uVar36 = uVar36 >> 0x10 ^ uVar36;
                  uVar42 = uVar36 & local_1e20.NumSlotsMinusOne;
                  uVar27 = (ulonglong)uVar42;
                  if ((psVar43 != (schar *)0x0) && (-1 < psVar43[uVar27])) {
                    do {
                      pIVar29 = local_1da8;
                      bVar50 = bVar18;
                      if (IVar10 == *(IDXGIFactory5 *)(ppFVar44 + uVar27)) goto LAB_145a214dd;
                      uVar42 = (int)uVar27 + 1;
                      uVar27 = (ulonglong)uVar42;
                      sVar37 = sVar37 + '\x01';
                    } while (sVar37 <= psVar43[uVar27]);
                  }
                  Experimental::TSherwoodHashTable_Private::
                  TSherwoodHashTable<FD3D12ResidencyHandle_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12ResidencyHandle_*,FNoopStruct>_>
                  ::Add(&local_1e20,sVar37,&local_1e20.CurrentData,uVar42,
                        (FD3D12ResidencyHandle *)IVar10,uVar36,FVar14);
                  bVar18 = true;
                  pIVar29 = local_1da8;
                  psVar43 = local_1e20.CurrentData.Distances;
                  ppFVar44 = local_1e20.CurrentData.Keys;
                  bVar50 = bVar18;
                }
LAB_145a214dd:
                pIVar46 = pIVar46 + 1;
              } while (pIVar46 != pIVar29);
              pIVar28 = local_1e30;
              pIVar45 = local_1de0;
              if (!bVar50) goto LAB_145a21593;
              goto LAB_145a214f8;
            }
            pIVar28 = local_1e30 + 5;
            pIVar45 = local_1de0;
          }
        }
      }
      local_1df0 = local_1df0 + 1;
      local_1d98 = local_1d98 + 1;
      param_2 = local_1d90;
      param_1 = local_1db8;
      pFVar47 = local_1e28;
      cVar48 = local_1e36;
    } while (local_1d98 < (longlong)local_1d48._8_8_);
  }
  if (psVar43 != (schar *)0x0) {
    FMemory::Free(psVar43);
    FMemory::Free(local_1e20.CurrentData.Keys);
    FMemory::Free(local_1e20.CurrentData.Values);
  }
  pHStack_1ca8 = (HINSTANCE__ *)0x0;
  TStack_1ca0.Reference = (IDXGIDebug *)0x0;
  local_1cb0.Reference = (IDXGIFactory7 *)0x0;
  pvStack_1c98 = (void *)0x0;
  local_1e20.NumSlotsMinusOne = 0;
  local_1e20.CurrentData.AllocatedCount = 0;
  local_1e20.CurrentData._4_4_ = 0;
  local_1e20.CurrentData.Distances = (schar *)0x0;
  local_1e20.MaxLookups = '\0';
  local_1e20.CurrentData.Keys = (FD3D12ResidencyHandle **)0x0;
  local_1e20.CurrentData.Values = (FNoopStruct *)0x0;
  local_1e20.NumElements = 0;
  if ((GRHIGlobals.SupportsWaveOperations == false) ||
     (bVar50 = RHISupportsWaveOperations((FStaticShaderPlatform)GMaxRHIShaderPlatform), !bVar50)) {
    bVar50 = false;
  }
  else {
    bVar50 = true;
  }
  if ((GD3D12RayTracingGPUValidation != 0) && (bVar50)) {
    local_1ce8 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      DStack_1c88 = 0x11c4;
      local_1c90 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
      ;
      pwStack_1c78 = L"RTSceneValidation";
      local_1c80._0_4_ = 0;
      local_1c80._4_4_ = 0;
      Desc._padding_._0_4_ = 0x5107d610;
      Desc._padding_._4_4_ = 1;
      Desc._padding_._0_4_ = 0x11c4;
      Desc._padding_._4_1_ = bStack_1c84;
      Desc._padding_._5_1_ = bStack_1c83;
      Desc._padding_._6_1_ = bStack_1c82;
      Desc._padding_._7_1_ = uStack_1c81;
      Desc._padding_._0_4_ = 0;
      Desc._padding_._4_4_ = 0;
      Desc._padding_._0_4_ = 0x51081840;
      Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Desc.Cs,4000);
      Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      Desc.TraceGpuSpecId = 0;
      Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``PrepareAccelerationStructureBuild'::__l160::<lambda_2>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&_TSS0);
    }
    pFVar16 = local_1db8;
    if ((*(longlong *)&local_1db8->field_0x1d8 == 0) &&
       (bVar50 = FDebug::CheckVerifyFailedImpl2
                           ("ExecutingCmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                            ,0x221,L""), bVar50)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    this = *(FRHIComputeCommandList **)&pFVar16->field_0x1d8;
    pFVar30 = FRHIComputeCommandList::GetBreadcrumbAllocator(this);
    pFVar31 = FMemStackBase::Alloc(&pFVar30->Inner,0x50,8);
    pFVar31->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar31->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar31->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar31->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar31->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar31->TraceCpuSpecId = 0;
    pFVar31->TraceCpuMetadataId = 0;
    pFVar31->Data = (FRHIBreadcrumbData *)&Desc;
    pFVar31->Allocator = pFVar30;
    LOCK();
    UNLOCK();
    uVar36 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar31->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar31->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar31->ID = uVar36;
    pFVar31->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar31[1]._padding_ = (longlong)&Desc;
    if ((Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar50 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar50)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&Desc.Cs);
      if (Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar23 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(Desc._padding_._4_4_,(undefined4)Desc._padding_),
                            (char *)CONCAT44(Desc._padding_._4_4_,(undefined4)Desc._padding_),
                            (uint)Desc._padding_);
        LOCK();
        Desc.TraceCpuSpecId = aVar23;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&Desc.Cs);
    }
    pFVar31->TraceCpuSpecId = (uint)Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_1cf8,this,pFVar31);
    local_1ce8 = 1;
    FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
              (&local_1c00,(IRHICommandContext *)&pFVar16->field_0x1c0);
    param_2 = local_1d90;
    FRayTracingValidateSceneBuildParamsCS::Dispatch
              ((FRHICommandList *)&local_1c00,(local_1d90->Initializer).NumTotalSegments,param_7,
               (FRHIBuffer *)local_1d88,param_6,GRHIGlobals.RayTracing.InstanceDescriptorSize);
    FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1c00);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1cf8);
  }
  uVar27 = (ulonglong)param_2->BufferOffset + (*(FD3D12Buffer **)local_1d48._16_8_)->_padding_;
  puVar38 = (undefined1 *)local_1d48._24_8_ + local_1dd8->_padding_;
  if ((uVar27 % (ulonglong)GRHIGlobals.RayTracing.AccelerationStructureAlignment != 0) &&
     (bVar50 = FDebug::CheckVerifyFailedImpl2
                         ("BufferAddress % GRHIGlobals.RayTracing.AccelerationStructureAlignment == 0"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x11d7,L"TLAS buffer (plus offset) must be aligned to %lld bytes."),
     bVar50)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((ulonglong)puVar38 % (ulonglong)GRHIGlobals.RayTracing.ScratchBufferAlignment != 0) &&
     (bVar50 = FDebug::CheckVerifyFailedImpl2
                         ("ScratchAddress % GRHIGlobals.RayTracing.ScratchBufferAlignment == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x11db,
                          L"TLAS scratch buffer (plus offset) must be aligned to %lld bytes."),
     bVar50)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_1c60[0x14] = L'\0';
  local_1c60[0x15] = L'\0';
  local_1c60[0x16] = L'\0';
  local_1c60[0x17] = L'\0';
  local_1c60[0xc] = L'\0';
  local_1c60[0xd] = L'\0';
  local_1c60[0xe] = L'\0';
  local_1c60[0xf] = L'\0';
  local_1c60[0x10] = L'\0';
  local_1c60[0x11] = L'\0';
  local_1c60[0x12] = L'\0';
  local_1c60[0x13] = L'\0';
  (local_1de8->Inputs).Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL;
  (local_1de8->Inputs).Flags = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_NONE;
  (local_1de8->Inputs).NumDescs = 0;
  (local_1de8->Inputs).DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
  (local_1de8->Inputs).field4_0x10.InstanceDescs = 0;
  (local_1de8->Inputs).Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL;
  (local_1de8->Inputs).DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
  (local_1de8->Inputs).NumDescs = param_7;
  (local_1de8->Inputs).field4_0x10.pGeometryDescs =
       (D3D12_RAYTRACING_GEOMETRY_DESC *)((ulonglong)param_6 + local_1d88->_padding_);
  EVar3 = (param_2->Initializer).BuildFlags;
  bVar19 = (byte)EVar3 & 1;
  EVar24 = EVar3 & ~AllowUpdate;
  if ((EVar3 & AllowUpdate) == None) {
    EVar24 = EVar3;
  }
  DVar20 = bVar19 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_COMPACTION;
  if ((EVar24 >> 1 & 1) == 0) {
    DVar20 = (uint)bVar19;
  }
  EVar3 = EVar24 & ~AllowCompaction;
  if ((EVar24 >> 1 & 1) == 0) {
    EVar3 = EVar24;
  }
  DVar13 = DVar20 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PREFER_FAST_TRACE;
  if ((EVar3 >> 2 & 1) == 0) {
    DVar13 = DVar20;
  }
  EVar24 = EVar3 & ~FastTrace;
  if ((EVar3 >> 2 & 1) == 0) {
    EVar24 = EVar3;
  }
  DVar20 = DVar13 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PREFER_FAST_BUILD;
  if ((EVar24 >> 3 & 1) == 0) {
    DVar20 = DVar13;
  }
  EVar3 = EVar24 & ~FastBuild;
  if ((EVar24 >> 3 & 1) == 0) {
    EVar3 = EVar24;
  }
  DVar13 = DVar20 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_MINIMIZE_MEMORY;
  if ((EVar3 >> 4 & 1) == 0) {
    DVar13 = DVar20;
  }
  EVar24 = EVar3 & ~MinimizeMemory;
  if ((EVar3 >> 4 & 1) == 0) {
    EVar24 = EVar3;
  }
  if ((EVar24 != None) &&
     (bVar50 = FDebug::CheckVerifyFailedImpl2
                         ("!EnumHasAnyFlags(Flags, Flags)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1b0,
                          L"Some ERayTracingAccelerationStructureFlags entries were not handled"),
     bVar50)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  (local_1de8->Inputs).Flags = DVar13;
  if (param_8 == Update) {
    if ((((param_2->Initializer).BuildFlags & AllowUpdate) == None) &&
       (bVar50 = FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAllFlags(Scene.Initializer.BuildFlags, ERayTracingAccelerationStructureFlags::AllowUpdate)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x11e7,
                            L"Acceleration structure must be created with FRayTracingGeometryInitializer::bAllowUpdate=true to perform refit / update."
                           ), bVar50)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pDVar1 = &(local_1de8->Inputs).Flags;
    *pDVar1 = *pDVar1 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PERFORM_UPDATE;
    local_1de8->DestAccelerationStructureData = uVar27;
    local_1de8->ScratchAccelerationStructureData = (ulong64)puVar38;
    local_1de8->SourceAccelerationStructureData = uVar27;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145a21cf5;
    FVar33 = StatPtr_STAT_D3D12RayTracingUpdatedTLAS;
    if (StatPtr_STAT_D3D12RayTracingUpdatedTLAS ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUpdatedTLAS>)0x0) {
      pFVar32 = FName::FName((FName *)(local_1c28 + 8),"STAT_D3D12RayTracingUpdatedTLAS");
      FVar33 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUpdatedTLAS>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingUpdatedTLAS,
                          *pFVar32,L"Updated TL AS (per frame)","STATGROUP_D3D12RayTracing",
                          "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,ST_int64,false,false
                          ,MCR_Invalid);
    }
    pFVar11 = *(FD3D12Buffer **)FVar33;
    local_1e28 = pFVar11;
    if (((pFVar11 == (FD3D12Buffer *)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145a21cf5;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar34 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar34);
    }
    local_1d0c = (uint)((ulonglong)pFVar11 >> 0x20) & 0xffffafff | 0xa000;
    local_1d48._48_8_ = (ID3D12Device5 *)0x1;
    local_1d48._32_8_ = pFVar11;
    local_1d10 = (int)pFVar11;
    FThreadStats::AddStatMessage(this_00,(FStatMessage *)(local_1d48 + 0x30));
    pFVar32 = (FName *)(local_1d48 + 0x20);
  }
  else {
    local_1de8->DestAccelerationStructureData = uVar27;
    local_1de8->ScratchAccelerationStructureData = (ulong64)puVar38;
    local_1de8->SourceAccelerationStructureData = 0;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145a21cf5;
    FVar35 = StatPtr_STAT_D3D12RayTracingBuiltTLAS;
    if (StatPtr_STAT_D3D12RayTracingBuiltTLAS ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBuiltTLAS>)0x0) {
      pFVar32 = FName::FName(&local_1c30,"STAT_D3D12RayTracingBuiltTLAS");
      FVar35 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBuiltTLAS>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBuiltTLAS,
                          *pFVar32,L"Built TL AS (per frame)","STATGROUP_D3D12RayTracing",
                          "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,ST_int64,false,false
                          ,MCR_Invalid);
    }
    pFVar11 = *(FD3D12Buffer **)FVar35;
    local_1e28 = pFVar11;
    if (((pFVar11 == (FD3D12Buffer *)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145a21cf5;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      pFVar34 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(pFVar34);
    }
    local_1d08.NameAndInfo.Number = (uint)((ulonglong)pFVar11 >> 0x20) & 0xffffafff | 0xa000;
    local_1d08.StatData.Pad[0] = '\x01';
    local_1d08.StatData.Pad[1] = '\0';
    local_1d08.StatData.Pad[2] = '\0';
    local_1d08.StatData.Pad[3] = '\0';
    local_1d08.StatData.Pad[4] = '\0';
    local_1d08.StatData.Pad[5] = '\0';
    local_1d08.StatData.Pad[6] = '\0';
    local_1d08.StatData.Pad[7] = '\0';
    local_1d48._40_8_ = pFVar11;
    local_1d08.NameAndInfo.Index.Value = (uint)pFVar11;
    FThreadStats::AddStatMessage(this_00,&local_1d08);
    pFVar32 = (FName *)(local_1d48 + 0x28);
  }
  FStatsTrace::Add(pFVar32,1);
  if (this_00->ScopeCount == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
LAB_145a21cf5:
  if (pFVar47 != (FD3D12Buffer *)0x0) {
    (**(code **)(pFVar47->_padding_ + 0x10))();
  }
  if (cVar48 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessPagingWork @ 145a21e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
D3DX12Residency::Internal::ResidencyManagerInternal::ProcessPagingWork
          (ResidencyManagerInternal *this,AsyncWorkload *param_1)

{
  uint *puVar1;
  ulong64 *puVar2;
  CriticalSection *lpCriticalSection;
  LRUCache *pLVar3;
  ManagedObject **ppMVar4;
  undefined4 *puVar5;
  longlong lVar6;
  IDXGIAdapter3 *pIVar7;
  ID3D12Device3 *pIVar8;
  _LIST_ENTRY *p_Var9;
  HANDLE hHandle;
  ID3D12Fence *pIVar10;
  undefined1 auVar11 [16];
  AsyncWorkload *pAVar12;
  uint uVar13;
  int iVar14;
  DeviceWideSyncPoint *pDVar15;
  ulong64 uVar16;
  _LIST_ENTRY *p_Var17;
  ResidencySet *pRVar18;
  int *piVar19;
  IDXGIAdapter3 *pIVar20;
  longlong *plVar21;
  uint uVar22;
  _LIST_ENTRY *p_Var23;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  _LIST_ENTRY *p_Var29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  _LIST_ENTRY **pp_Var33;
  uint uVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_108 [32];
  ID3D12Fence *local_e8;
  longlong local_e0;
  uint local_d8;
  uint local_d4;
  void *local_d0;
  DeviceWideSyncPoint *local_c8;
  AsyncWorkload *local_c0;
  ulonglong local_b8;
  void *local_b0;
  LARGE_INTEGER local_a8 [2];
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uVar24;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  pDVar15 = DequeueCompletedSyncPoints(this);
  uVar30 = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c8 = pDVar15;
  QueryPerformanceCounter(local_a8);
  if (&this->Mutex != (CriticalSection *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  }
  uVar25 = 0xffffffffffffffff;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (longlong)param_1->pMasterSet->CurrentSetSize;
  uVar16 = SUB168(ZEXT816(8) * auVar11,0);
  if (SUB168(ZEXT816(8) * auVar11,8) != 0) {
    uVar16 = 0xffffffffffffffff;
  }
  local_d0 = operator_new__(uVar16);
  auVar11 = ZEXT816(8) * ZEXT416((this->LRU).NumResidentObjects);
  uVar16 = auVar11._0_8_;
  if (auVar11._8_8_ != 0) {
    uVar16 = 0xffffffffffffffff;
  }
  local_b0 = operator_new__(uVar16);
  pRVar18 = local_c0->pMasterSet;
  uVar26 = uVar30;
  if (0 < pRVar18->CurrentSetSize) {
    lVar32 = 0;
    local_b8 = uVar30;
    uVar24 = uVar30;
    do {
      ppMVar4 = pRVar18->ppSet;
      piVar19 = *(int **)((longlong)ppMVar4 + lVar32);
      uVar26 = uVar24;
      if (*piVar19 == 1) {
        uVar26 = (ulonglong)((int)uVar24 + 1);
        *(int **)((longlong)local_d0 + uVar24 * 8) = piVar19;
        puVar5 = *(undefined4 **)((longlong)ppMVar4 + lVar32);
        *puVar5 = 0;
        p_Var23 = (_LIST_ENTRY *)(puVar5 + 0x10a);
        **(undefined8 **)(puVar5 + 0x10c) = p_Var23->Flink;
        p_Var23->Flink->Blink = *(_LIST_ENTRY **)(puVar5 + 0x10c);
        p_Var23->Flink = &(this->LRU).ResidentObjectListHead;
        *(_LIST_ENTRY **)(puVar5 + 0x10c) = (this->LRU).ResidentObjectListHead.Blink;
        ((this->LRU).ResidentObjectListHead.Blink)->Flink = p_Var23;
        puVar1 = &(this->LRU).NumEvictedObjects;
        *puVar1 = *puVar1 - 1;
        puVar1 = &(this->LRU).NumResidentObjects;
        *puVar1 = *puVar1 + 1;
        (this->LRU).ResidentObjectListHead.Blink = p_Var23;
        puVar2 = &(this->LRU).ResidentSize;
        *puVar2 = *puVar2 + *(longlong *)(puVar5 + 4);
        piVar19 = *(int **)((longlong)ppMVar4 + lVar32);
        local_b8 = local_b8 + *(longlong *)(piVar19 + 4);
      }
      uVar27 = (int)uVar30 + 1;
      uVar30 = (ulonglong)uVar27;
      *(ulong64 *)(piVar19 + 6) = local_c0->SyncPointGeneration;
      ((LARGE_INTEGER *)(*(longlong *)((longlong)ppMVar4 + lVar32) + 0x20))->QuadPart =
           (LONGLONG)local_a8[0];
      lVar6 = *(longlong *)((longlong)ppMVar4 + lVar32);
      lVar32 = lVar32 + 8;
      p_Var23 = (_LIST_ENTRY *)(lVar6 + 0x428);
      **(undefined8 **)(lVar6 + 0x430) = p_Var23->Flink;
      p_Var23->Flink->Blink = *(_LIST_ENTRY **)(lVar6 + 0x430);
      p_Var23->Flink = &(this->LRU).ResidentObjectListHead;
      *(_LIST_ENTRY **)(lVar6 + 0x430) = (this->LRU).ResidentObjectListHead.Blink;
      ((this->LRU).ResidentObjectListHead.Blink)->Flink = p_Var23;
      (this->LRU).ResidentObjectListHead.Blink = p_Var23;
      pRVar18 = local_c0->pMasterSet;
      uVar24 = uVar26;
    } while ((int)uVar27 < pRVar18->CurrentSetSize);
    uVar30 = (ulonglong)local_d8;
    local_d4 = (uint)uVar26;
    pDVar15 = local_c8;
  }
  pIVar7 = this->Adapter;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (pIVar7 != (IDXGIAdapter3 *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,this->NodeIndex,0,&local_88);
  }
  uVar24 = this->LocalMemoryBudgetLimit;
  if (uVar24 < local_88) {
    local_88 = uVar24;
  }
  dVar36 = (double)this->cTrimPercentageMemoryUsageThreshold;
  dVar35 = (double)uStack_80 / (double)local_88;
  if (__real_3ff0000000000000 <= (double)uStack_80 / (double)local_88) {
    dVar35 = __real_3ff0000000000000;
  }
  if (dVar36 < dVar35) {
    dVar36 = (__real_3ff0000000000000 -
             (dVar35 - dVar36) /
             (double)(__real_3f800000 - this->cTrimPercentageMemoryUsageThreshold)) *
             (double)(this->MaxEvictionGracePeriodTicks - this->MinEvictionGracePeriodTicks);
    lVar32 = 0;
    if ((__real_43e0000000000000 <= dVar36) &&
       (dVar36 = dVar36 - __real_43e0000000000000, dVar36 < __real_43e0000000000000)) {
      lVar32 = -0x8000000000000000;
    }
    uVar25 = (longlong)dVar36 + lVar32 + this->MinEvictionGracePeriodTicks;
  }
  uVar28 = 0;
  pLVar3 = &this->LRU;
  p_Var23 = (pLVar3->ResidentObjectListHead).Flink;
  uVar31 = uVar28;
  if (uVar24 != 0) {
    uVar31 = uVar25;
  }
  if ((LRUCache *)p_Var23 != pLVar3) {
    do {
      uVar27 = (uint)uVar30;
      if (((pDVar15 != (DeviceWideSyncPoint *)0x0) &&
          ((_LIST_ENTRY *)pDVar15->GenerationID <= p_Var23[-0x41].Flink)) ||
         ((ulonglong)(local_a8[0].QuadPart - (longlong)p_Var23[-0x41].Blink) <= uVar31)) break;
      uVar27 = uVar27 + 1;
      *(_LIST_ENTRY **)((longlong)local_b0 + uVar30 * 8) = p_Var23[-0x42].Flink;
      *(undefined4 *)&p_Var23[-0x43].Blink = 1;
      p_Var23->Blink->Flink = p_Var23->Flink;
      p_Var23->Flink->Blink = p_Var23->Blink;
      p_Var23->Flink = &(this->LRU).EvictedObjectListHead;
      p_Var23->Blink = (this->LRU).EvictedObjectListHead.Blink;
      ((this->LRU).EvictedObjectListHead.Blink)->Flink = p_Var23;
      puVar1 = &(this->LRU).NumResidentObjects;
      *puVar1 = *puVar1 - 1;
      (this->LRU).EvictedObjectListHead.Blink = p_Var23;
      puVar2 = &(this->LRU).ResidentSize;
      *puVar2 = *puVar2 - (longlong)p_Var23[-0x42].Blink;
      puVar1 = &(this->LRU).NumEvictedObjects;
      *puVar1 = *puVar1 + 1;
      p_Var23 = (pLVar3->ResidentObjectListHead).Flink;
      uVar30 = (ulonglong)uVar27;
    } while ((LRUCache *)p_Var23 != pLVar3);
    if (uVar27 != 0) {
      (**(code **)((longlong)*this->Device + 0x118))(this->Device,uVar27,local_b0);
    }
  }
  if ((int)uVar26 != 0) {
    uVar30 = 0;
    local_c8 = (DeviceWideSyncPoint *)((ulonglong)local_c8 & 0xffffffff00000000);
    local_d8 = 0;
    do {
      uVar27 = (uint)uVar28;
      uVar25 = 0;
      pIVar7 = this->Adapter;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      pIVar20 = (IDXGIAdapter3 *)0x0;
      if (pIVar7 != (IDXGIAdapter3 *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,this->NodeIndex,0,&local_88);
        pIVar20 = this->Adapter;
      }
      local_68 = 0;
      lStack_60 = 0;
      if (this->LocalMemoryBudgetLimit < local_88) {
        local_88 = this->LocalMemoryBudgetLimit;
      }
      local_58 = 0;
      uStack_50 = 0;
      if (pIVar20 != (IDXGIAdapter3 *)0x0) {
        (**(code **)((longlong)*pIVar20 + 0x70))(0,this->NodeIndex,1,&local_68);
      }
      local_90 = local_68 + local_88;
      local_98 = uStack_80 + lStack_60;
      uVar34 = (uint)uVar26;
      if ((longlong)(local_90 - local_98) < 1) {
LAB_145a223d1:
        if (uVar27 == uVar34) break;
      }
      else {
        uVar26 = uVar25;
        uVar13 = local_d8;
        if ((uint)uVar30 < uVar34) {
          plVar21 = (longlong *)((longlong)local_d0 + uVar30 * 8);
          uVar24 = uVar30;
          do {
            uVar27 = (uint)uVar28;
            uVar31 = *(longlong *)(*plVar21 + 0x10) + uVar26;
            uVar13 = (uint)uVar24;
            if (local_90 - local_98 < uVar31) break;
            uVar27 = uVar27 + 1;
            uVar28 = (ulonglong)uVar27;
            *plVar21 = *(longlong *)(*plVar21 + 8);
            uVar25 = (ulonglong)((int)uVar25 + 1);
            plVar21 = plVar21 + 1;
            local_c8 = (DeviceWideSyncPoint *)CONCAT44(local_c8._4_4_,uVar27);
            uVar22 = (uint)uVar24 + 1;
            uVar24 = (ulonglong)uVar22;
            uVar26 = uVar31;
            uVar13 = local_d8;
          } while (uVar22 < uVar34);
        }
        local_d8 = uVar13;
        pIVar8 = this->Device3;
        if (pIVar8 == (ID3D12Device3 *)0x0) {
          iVar14 = (**(code **)((longlong)*this->Device + 0x110))(this->Device,uVar25);
          if (-1 < iVar14) goto LAB_145a223cc;
        }
        else {
          local_e0 = (this->AsyncThreadFence).FenceValue + 1;
          local_e8 = (this->AsyncThreadFence).pFence;
          iVar14 = (**(code **)((longlong)*pIVar8 + 400))
                             (pIVar8,0,uVar25,(void *)((longlong)local_d0 + uVar30 * 8));
          if (-1 < iVar14) {
            puVar2 = &(this->AsyncThreadFence).FenceValue;
            *puVar2 = *puVar2 + 1;
LAB_145a223cc:
            local_b8 = local_b8 - uVar26;
            goto LAB_145a223d1;
          }
        }
      }
      p_Var23 = (this->LRU).ResidentObjectListHead.Flink;
      lpCriticalSection = &this->AsyncWorkMutex;
      pp_Var33 = (_LIST_ENTRY **)0x0;
      if ((LRUCache *)p_Var23 != &this->LRU) {
        pp_Var33 = &p_Var23[-0x43].Blink;
      }
      if (lpCriticalSection != (CriticalSection *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      p_Var23 = &this->InFlightSyncPointsHead;
      p_Var9 = p_Var23->Flink;
      while (p_Var9 != p_Var23) {
        uVar30 = 0;
        p_Var29 = p_Var9 + -1;
        if (*(int *)&p_Var9[-1].Blink != 0) {
          do {
            p_Var17 = (_LIST_ENTRY *)(*(code *)(p_Var29[uVar30 + 2].Flink)->Flink->Flink[4].Flink)()
            ;
            if (p_Var17 < p_Var9[uVar30 + 1].Blink) {
              if (lpCriticalSection != (CriticalSection *)0x0) {
                LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              }
              goto LAB_145a2249c;
            }
            uVar27 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar27;
          } while (uVar27 < *(uint *)&p_Var9[-1].Blink);
        }
        p_Var9 = p_Var23->Flink;
        p_Var9->Blink->Flink = p_Var9->Flink;
        p_Var9->Flink->Blink = p_Var9->Blink;
        ::operator_delete(p_Var29,0x30);
        p_Var9 = p_Var23->Flink;
      }
      p_Var29 = (_LIST_ENTRY *)0x0;
      if (lpCriticalSection != (CriticalSection *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
LAB_145a2249c:
      uVar30 = 0;
      if (((pp_Var33 == (_LIST_ENTRY **)0x0) ||
          ((_LIST_ENTRY *)local_c0->SyncPointGeneration <= pp_Var33[3])) ||
         (p_Var29 == (_LIST_ENTRY *)0x0)) goto LAB_145a226c5;
      p_Var9 = p_Var29->Flink;
      p_Var29 = (_LIST_ENTRY *)((longlong)&p_Var9[-1].Blink + 7);
      if (p_Var9 != (_LIST_ENTRY *)local_c0->SyncPointGeneration) {
        p_Var29 = p_Var9;
      }
      if (lpCriticalSection != (CriticalSection *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      if ((this->InFlightSyncPointsHead).Flink != p_Var23) {
LAB_145a224f0:
        p_Var9 = (this->InFlightSyncPointsHead).Flink;
        p_Var23 = p_Var9 + -1;
        if (p_Var9[-1].Flink <= p_Var29) {
          if (p_Var9[-1].Flink < p_Var29) goto code_r0x000145a22507;
          hHandle = this->CompletionEvent;
          if (*(int *)&p_Var9[-1].Blink != 0) {
            do {
              p_Var17 = (_LIST_ENTRY *)
                        (*(code *)(p_Var23[uVar30 + 2].Flink)->Flink->Flink[4].Flink)();
              if (p_Var17 < p_Var9[uVar30 + 1].Blink) {
                p_Var17 = (p_Var23[uVar30 + 2].Flink)->Flink;
                (*(code *)p_Var17->Flink[4].Blink)(p_Var17,p_Var9[uVar30 + 1].Blink,hHandle);
                WaitForSingleObject(hHandle,0xffffffff);
              }
              uVar27 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar27;
            } while (uVar27 < *(uint *)&p_Var9[-1].Blink);
          }
          p_Var9 = (this->InFlightSyncPointsHead).Flink;
          p_Var9->Blink->Flink = p_Var9->Flink;
          p_Var9->Flink->Blink = p_Var9->Blink;
          ::operator_delete(p_Var23,0x30);
        }
      }
      if (lpCriticalSection != (CriticalSection *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      pLVar3 = &this->LRU;
      lVar32 = local_98 + local_b8;
      uVar16 = this->LocalMemoryBudgetLimit;
      p_Var23 = (pLVar3->ResidentObjectListHead).Flink;
      uVar30 = 0;
      while (((LRUCache *)p_Var23 != pLVar3 && (p_Var23[-0x41].Flink <= p_Var29))) {
        uVar25 = local_90;
        if (uVar16 == 0) {
          uVar25 = 0;
        }
        if (lVar32 < (longlong)uVar25) break;
        *(_LIST_ENTRY **)((longlong)local_b0 + uVar30 * 8) = p_Var23[-0x42].Flink;
        *(undefined4 *)&p_Var23[-0x43].Blink = 1;
        p_Var23->Blink->Flink = p_Var23->Flink;
        p_Var23->Flink->Blink = p_Var23->Blink;
        p_Var23->Flink = &(this->LRU).EvictedObjectListHead;
        p_Var23->Blink = (this->LRU).EvictedObjectListHead.Blink;
        ((this->LRU).EvictedObjectListHead.Blink)->Flink = p_Var23;
        puVar1 = &(this->LRU).NumResidentObjects;
        *puVar1 = *puVar1 - 1;
        (this->LRU).EvictedObjectListHead.Blink = p_Var23;
        puVar2 = &(this->LRU).ResidentSize;
        *puVar2 = *puVar2 - (longlong)p_Var23[-0x42].Blink;
        puVar1 = &(this->LRU).NumEvictedObjects;
        *puVar1 = *puVar1 + 1;
        lVar32 = lVar32 - (longlong)p_Var23[-0x42].Blink;
        uVar30 = (ulonglong)((int)uVar30 + 1);
        p_Var23 = (pLVar3->ResidentObjectListHead).Flink;
      }
      (**(code **)((longlong)*this->Device + 0x118))();
      uVar28 = (ulonglong)local_c8 & 0xffffffff;
      uVar26 = (ulonglong)local_d4;
      uVar30 = (ulonglong)local_d8;
    } while( true );
  }
LAB_145a2276c:
  operator_delete__(local_d0);
  operator_delete__(local_b0);
  if (&this->Mutex != (CriticalSection *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->Mutex);
  }
  pAVar12 = local_c0;
  if (this->Device3 == (ID3D12Device3 *)0x0) {
    pIVar10 = (this->AsyncThreadFence).pFence;
    (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,local_c0->FenceValueToSignal);
  }
  pRVar18 = pAVar12->pMasterSet;
  if (pRVar18 != (ResidencySet *)0x0) {
    operator_delete__(pRVar18->ppSet);
    ::operator_delete(pRVar18,0x28);
  }
  pAVar12->pMasterSet = (ResidencySet *)0x0;
  return;
LAB_145a226c5:
  if (local_d8 < local_d4) {
    uVar30 = (ulonglong)(local_d4 - local_d8);
    plVar21 = (longlong *)((longlong)local_d0 + (ulonglong)local_d8 * 8);
    do {
      *plVar21 = *(longlong *)(*plVar21 + 8);
      uVar30 = uVar30 - 1;
      plVar21 = plVar21 + 1;
    } while (uVar30 != 0);
  }
  pIVar8 = this->Device3;
  if (pIVar8 == (ID3D12Device3 *)0x0) {
    (**(code **)((longlong)*this->Device + 0x110))(this->Device,local_d4 - (int)local_c8);
  }
  else {
    local_e0 = (this->AsyncThreadFence).FenceValue + 1;
    local_e8 = (this->AsyncThreadFence).pFence;
    iVar14 = (**(code **)((longlong)*pIVar8 + 400))
                       (pIVar8,0,local_d4 - (int)local_c8,
                        (void *)((longlong)local_d0 + (ulonglong)local_d8 * 8));
    if (-1 < iVar14) {
      puVar2 = &(this->AsyncThreadFence).FenceValue;
      *puVar2 = *puVar2 + 1;
    }
  }
  goto LAB_145a2276c;
code_r0x000145a22507:
  p_Var9->Blink->Flink = p_Var9->Flink;
  p_Var9->Flink->Blink = p_Var9->Blink;
  ::operator_delete(p_Var23,0x30);
  goto LAB_145a224f0;
}

// ProcessTransitionInfoDuringBegin @ 145a22810

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_ACCESS": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

bool __cdecl ProcessTransitionInfoDuringBegin(FResourceState *param_1,FD3D12Texture *param_2)

{
  ERHIPipeline EVar1;
  ERHIPipeline EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  D3D12_BARRIER_SYNC DVar6;
  D3D12_BARRIER_ACCESS DVar7;
  D3D12_BARRIER_LAYOUT DVar8;
  
  EVar1 = param_1->DstPipelines;
  EVar2 = param_1->SrcPipelines;
  if ((EVar2 & EVar1) != EVar1) {
    if (EVar2 != All) {
      DVar6 = GetEBSync(param_1->AccessBefore,EVar2);
      bVar4 = SyncIsCompatibleWithQueue(DVar6,param_1->DstPipelines);
      if (bVar4) {
        DVar7 = GetEBAccess(param_1->AccessBefore,param_1->SrcPipelines);
        bVar4 = AccessIsCompatibleWithQueue(DVar7,param_1->DstPipelines);
        if (bVar4) {
          if (param_2 == (FD3D12Texture *)0x0) {
            return false;
          }
          DVar8 = GetEBLayout(param_1->AccessBefore,param_1->SrcPipelines,param_2);
          bVar4 = LayoutIsCompatibleWithQueue(DVar8,param_1->DstPipelines);
          return !bVar4;
        }
      }
      return true;
    }
    DVar6 = GetEBSync(param_1->AccessBefore,EVar1);
    bVar4 = SyncIsCompatibleWithQueue(DVar6,EVar1);
    if ((!bVar4) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("SyncIsCompatibleWithQueue(GetEBSync(InResourceState.AccessBefore, InResourceState.DstPipelines), InResourceState.DstPipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0xa87,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    EVar1 = param_1->DstPipelines;
    DVar7 = GetEBAccess(param_1->AccessBefore,EVar1);
    bVar4 = AccessIsCompatibleWithQueue(DVar7,EVar1);
    if ((!bVar4) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("AccessIsCompatibleWithQueue(GetEBAccess(InResourceState.AccessBefore, InResourceState.DstPipelines), InResourceState.DstPipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                           ,0xa88,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (param_2 != (FD3D12Texture *)0x0) {
      EVar1 = param_1->DstPipelines;
      DVar8 = GetEBLayout(param_1->AccessBefore,param_1->SrcPipelines,param_2);
      bVar4 = LayoutIsCompatibleWithQueue(DVar8,EVar1);
      if ((!bVar4) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("LayoutIsCompatibleWithQueue( GetEBLayout( InResourceState.AccessBefore, InResourceState.SrcPipelines, InTexture), InResourceState.DstPipelines)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                             ,0xa91,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
  }
  return false;
}

// RegisterD3D12RayTracingGeometry @ 145a289d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl RegisterD3D12RayTracingGeometry(FD3D12RayTracingGeometry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FD3D12RayTracingGeometryTracker *this;
  ulonglong uVar1;
  ulong64 uVar2;
  FD3D12RayTracingGeometry *local_res8;
  FD3D12RayTracingGeometry *local_res10;
  
  this = GetD3D12RayTracingGeometryTracker();
  uVar2 = param_1->AccelerationStructureCompactedSize;
  if (uVar2 == 0) {
    uVar2 = param_1->_padding_;
  }
  lpCriticalSection = &this->CS;
  local_res10 = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<FD3D12RayTracingGeometry_*,DefaultKeyFuncs<FD3D12RayTracingGeometry_*,0>,FDefaultSetAllocator>
    ::Emplace<FD3D12RayTracingGeometry_*_const_&>
              (&this->Geometries,&local_res8,(bool *)&local_res10);
    this->TotalBLASSize = this->TotalBLASSize + uVar2;
    uVar1 = this->TotalBLASSize;
    if (this->TotalBLASSize < this->MaxTotalBLASSize) {
      uVar1 = this->MaxTotalBLASSize;
    }
    this->MaxTotalBLASSize = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000145a28a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetRayTracingCallableShader @ 145a30860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
SetRayTracingCallableShader
          (FD3D12Device *param_1,FD3D12RayTracingShaderBindingTableInternal *param_2,uint param_3,
          FD3D12RayTracingPipelineState *param_4,uint param_5,uint param_6,
          FRHIUniformBuffer **param_7,uint param_8,void *param_9,uint param_10,uint param_11)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulong64 *puVar3;
  FD3D12RayTracingShader *pFVar4;
  code *pcVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FD3D12ShaderIdentifier *pFVar11;
  undefined1 auStackY_458 [32];
  FD3D12RayTracingLocalResourceBinder local_3a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  if (param_2->NumCallableRecords <= param_3) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("RecordIndex < ShaderTable->NumCallableRecords",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1701,
                       L"Callable shader record index is invalid. Make sure that NumCallableShaderSlots is correct in FRayTracingShaderBindingTableInitializer."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar1 = &(param_2->Data)._padding_;
  uVar9 = *plVar1;
  if ((uVar9 & 1) != 0) {
    uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)plVar1;
  }
  pFVar11 = &FD3D12ShaderIdentifier::Null;
  *(uint *)((param_2->CallableShaderTableOffset + 0x2c + param_3 * param_2->LocalRecordStride) +
           uVar9) = param_10;
  if (param_5 != 0xffffffff) {
    uVar8 = 0;
    if ((int)param_5 < (param_4->CallableShaders).Shaders.ArrayNum) {
      uVar8 = ~param_5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = *(FD3D12RayTracingShader **)
              ((param_4->CallableShaders).Shaders.AllocatorInstance.Data +
              (longlong)(int)param_5 * 8);
    FD3D12RayTracingLocalResourceBinder::FD3D12RayTracingLocalResourceBinder
              (&local_3a0,param_1,param_2,pFVar4->LocalRootSignature,Transient,param_3,param_11,
               CallableShader);
    bVar7 = SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>
                      (pFVar4,pFVar4->LocalRootSignature,0,(FRHIShaderParameterResource *)0x0,0,
                       (FRHITexture **)0x0,0,(FRHIShaderResourceView **)0x0,param_6,param_7,0,
                       (FRHISamplerState **)0x0,0,(FRHIUnorderedAccessView **)0x0,param_8,param_9,
                       &local_3a0);
    if (bVar7) {
      uVar8 = 0;
      if ((int)param_5 < (param_4->CallableShaders).Identifiers.ArrayNum) {
        uVar8 = ~param_5 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar11 = (FD3D12ShaderIdentifier *)
                ((param_4->CallableShaders).Identifiers.AllocatorInstance.Data +
                (longlong)(int)param_5 * 0x20);
    }
    if (local_3a0.ReferencedCBResources.AllocatorInstance.SecondaryData !=
        (ForElementType<FD3D12Resource_*>)0x0) {
      FMemory::Free((void *)local_3a0.ReferencedCBResources.AllocatorInstance.SecondaryData);
    }
    if (local_3a0.ReferencedViews.AllocatorInstance.SecondaryData !=
        (ForElementType<FD3D12View_*>)0x0) {
      FMemory::Free((void *)local_3a0.ReferencedViews.AllocatorInstance.SecondaryData);
    }
  }
  uVar9 = *plVar1;
  uVar10 = (ulonglong)(param_3 * param_2->LocalRecordStride + param_2->CallableShaderTableOffset);
  if ((uVar9 & 1) != 0) {
    uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)plVar1;
  }
  uVar6 = *(ulong64 *)((longlong)pFVar11 + 8);
  puVar2 = (undefined8 *)(uVar10 + uVar9);
  *puVar2 = pFVar11->Data[0];
  puVar2[1] = uVar6;
  uVar6 = *(ulong64 *)((longlong)pFVar11 + 0x18);
  puVar3 = (ulong64 *)(uVar10 + 0x10 + uVar9);
  *puVar3 = *(ulong64 *)((longlong)pFVar11 + 0x10);
  puVar3[1] = uVar6;
  return;
}

// SetRayTracingHitGroup @ 145a30b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
SetRayTracingHitGroup
          (FD3D12Device *param_1,FD3D12RayTracingShaderBindingTableInternal *param_2,uint param_3,
          FD3D12RayTracingPipelineState *param_4,uint param_5,FD3D12RayTracingGeometry *param_6,
          uint param_7,uint param_8,FRHIUniformBuffer **param_9,uint param_10,void *param_11,
          uint param_12,ERayTracingLocalShaderBindingType param_13,uint param_14)

{
  longlong *plVar1;
  ulong64 *puVar2;
  undefined8 *puVar3;
  FD3D12RayTracingShader *pFVar4;
  schar *psVar5;
  FShaderRecordCacheKey *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FXxHash64 FVar14;
  ulonglong uVar15;
  uint *puVar16;
  FD3D12ShaderIdentifier *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FRHIUniformBuffer **ppFVar22;
  uint *puVar23;
  byte bVar24;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  schar sVar29;
  undefined1 auStackY_5f8 [32];
  FRHIUniformBuffer **local_528;
  FRHIUniformBuffer **ppFStack_520;
  FRHIUniformBuffer **local_518;
  FRHIUniformBuffer **ppFStack_510;
  FRHIUniformBuffer **local_508;
  FRHIUniformBuffer **ppFStack_500;
  ulong64 local_4f8;
  uint uStack_4f0;
  uint uStack_4ec;
  FShaderRecordCacheKey *local_4e8;
  uint *local_4e0;
  FD3D12Device *local_4d8;
  void *local_4d0;
  undefined1 local_4c8 [16];
  FRHIUniformBuffer **local_4b8;
  FRHIUniformBuffer **ppFStack_4b0;
  FRHIUniformBuffer **local_4a8;
  FRHIUniformBuffer **ppFStack_4a0;
  FRHIUniformBuffer **local_498;
  FRHIUniformBuffer **ppFStack_490;
  FString local_488;
  undefined8 local_478;
  ulong64 uStack_470;
  ulong64 local_468;
  ulong64 uStack_460;
  FRHIUniformBuffer **local_458 [4];
  FRHIUniformBuffer **local_438;
  FRHIUniformBuffer **ppFStack_430;
  undefined1 local_428 [16];
  FRHIUniformBuffer **local_418 [4];
  FRHIUniformBuffer **local_3f8;
  FRHIUniformBuffer **ppFStack_3f0;
  ulong64 local_3e8;
  uint uStack_3e0;
  uint uStack_3dc;
  FShaderRecordCacheKey local_3d8;
  FD3D12RayTracingLocalResourceBinder local_398;
  ulonglong local_40;
  uint *puVar25;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  puVar23 = (uint *)0x0;
  local_4d0 = param_11;
  local_4d8 = param_1;
  if (param_2->HitGroupIndexingMode == Disallow) {
    if ((param_3 != 0) || (param_4 == (FD3D12RayTracingPipelineState *)0x0)) {
      bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("RecordIndex == 0 && Pipeline",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1697,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (param_4 == (FD3D12RayTracingPipelineState *)0x0) {
        return;
      }
    }
    uVar26 = 0;
    if ((int)param_5 < (param_4->HitGroupShaders).Identifiers.ArrayNum) {
      uVar26 = ~param_5 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar1 = &(param_2->Data)._padding_;
    uVar18 = *plVar1;
    pFVar20 = (param_4->HitGroupShaders).Identifiers.AllocatorInstance.Data +
              (longlong)(int)param_5 * 0x20;
    uVar15 = (ulonglong)(param_3 * param_2->LocalRecordStride + param_2->HitGroupShaderTableOffset);
    if ((uVar18 & 1) != 0) {
      uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)plVar1;
    }
    uVar8 = *(undefined8 *)(pFVar20 + 8);
    puVar3 = (undefined8 *)(uVar15 + uVar18);
    *puVar3 = *(undefined8 *)pFVar20;
    puVar3[1] = uVar8;
    uVar8 = *(undefined8 *)(pFVar20 + 0x18);
    puVar3 = (undefined8 *)(uVar15 + 0x10 + uVar18);
    *puVar3 = *(undefined8 *)(pFVar20 + 0x10);
    puVar3[1] = uVar8;
  }
  else {
    if ((param_2->NumHitRecords <= param_3) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("RecordIndex < ShaderTable->NumHitRecords",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x169f,
                            L"Hit group record index is invalid. Make sure that NumGeometrySegments and NumShaderSlotsPerGeometrySegment is correct in FRayTracingShaderBindingTableInitializer."
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((uint)param_6->_padding_ <= param_7) {
      if (((param_6->DebugName).Name == (FName)0x0) && ((param_6->DebugName).Number == 0)) {
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("GeometrySegmentIndex < NumGeometrySegments",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x16a5,
                            L"Segment %d is out of range for ray tracing geometry \'%s\' that contains %d segments"
                           );
      }
      else {
        FDebugName::ToString(&param_6->DebugName,&local_488);
        bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("GeometrySegmentIndex < NumGeometrySegments",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x16a5,
                            L"Segment %d is out of range for ray tracing geometry \'%s\' that contains %d segments"
                           );
        if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.Data.AllocatorInstance.Data);
        }
      }
      if (bVar10 != false) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (((param_2->Lifetime == Persistent) && (param_13 == Persistent)) && (param_8 != 0)) {
      uVar18 = (ulonglong)param_8;
      ppFVar22 = param_9;
      do {
        if (((*ppFVar22 != (FRHIUniformBuffer *)0x0) &&
            (*(int *)((*ppFVar22)[1]._padding_ + 0x150) != 2)) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("UB->UniformBufferUsage == UniformBuffer_MultiFrame",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x16b0,
                                L"Trying to bind non multiframe uniform buffer to persistent SBT: %s"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ppFVar22 = ppFVar22 + 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    FD3D12RayTracingShaderBindingTableInternal::SetHitGroupGeometrySystemParameters
              (param_2,param_14,param_13,param_3,param_6,param_12,param_7);
    if (((param_2->ShaderBindingMode & RTPSO) != Disabled) &&
       (param_4 != (FD3D12RayTracingPipelineState *)0x0)) {
      uVar19 = ~param_5 >> 0x1f;
      uVar12 = 0;
      uVar26 = uVar12;
      if ((int)param_5 < (param_4->HitGroupShaders).Shaders.ArrayNum) {
        uVar26 = uVar19;
      }
      if ((uVar26 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_4f8 = 0;
      uStack_4ec = 0;
      pFVar4 = *(FD3D12RayTracingShader **)
                ((param_4->HitGroupShaders).Shaders.AllocatorInstance.Data +
                (longlong)(int)param_5 * 8);
      uStack_4f0 = 0;
      if ((((GRayTracingCacheShaderRecords == 0) || (param_10 != 0)) || (5 < param_8 - 1)) ||
         ((param_13 != Transient && (param_2->Lifetime != Transient)))) {
        local_4c8 = ZEXT816(0);
        local_498 = local_508;
        ppFStack_490 = ppFStack_500;
        bVar10 = false;
        local_4a8 = local_518;
        ppFStack_4a0 = ppFStack_510;
        local_4b8 = local_528;
        ppFStack_4b0 = ppFStack_520;
        FVar14.Hash = local_4f8;
        uVar26 = uStack_4ec;
        uVar21 = uStack_4f0;
      }
      else {
        bVar10 = true;
        local_4f8 = 0;
        uStack_4ec = param_5;
        uStack_4f0 = param_8;
        if (6 < param_8) {
          uStack_4f0 = 6;
        }
        uVar18 = (ulonglong)uStack_4f0;
        memcpy(&local_528,param_9,uVar18 << 3);
        FVar14 = FXxHash64::HashBuffer(&local_528,uVar18 << 3);
        local_4c8._8_4_ = uStack_4f0;
        local_4c8._0_8_ = FVar14.Hash;
        local_4c8._12_4_ = uStack_4ec;
        local_4e0 = &param_2->NumHitRecords + (ulonglong)param_14 * 0x50;
        local_458[0] = local_528;
        local_458[1] = ppFStack_520;
        local_4b8 = local_528;
        ppFStack_4b0 = ppFStack_520;
        psVar5 = *(schar **)(local_4e0 + 0x32);
        local_458[2] = local_518;
        local_458[3] = ppFStack_510;
        local_438 = local_508;
        ppFStack_430 = ppFStack_500;
        local_428 = local_4c8;
        local_4a8 = local_518;
        ppFStack_4a0 = ppFStack_510;
        local_498 = local_508;
        ppFStack_490 = ppFStack_500;
        puVar16 = puVar23;
        if ((psVar5 != (schar *)0x0) &&
           (uVar18 = (ulonglong)(local_4e0[0x38] & (uint)FVar14.Hash), -1 < psVar5[uVar18])) {
          local_4e8 = *(FShaderRecordCacheKey **)(local_4e0 + 0x34);
          puVar25 = puVar23;
          do {
            if (((FVar14.Hash == local_4e8[uVar18].Hash) &&
                (uStack_4ec == local_4e8[uVar18].ShaderIndex)) &&
               (uStack_4f0 == local_4e8[uVar18].NumUniformBuffers)) {
              puVar27 = puVar23;
              if (uStack_4f0 == 0) {
LAB_145a31021:
                puVar16 = *(uint **)(local_4e0 + 0x36) + uVar18;
                break;
              }
              while (local_458[(longlong)puVar27] ==
                     local_4e8[uVar18].UniformBuffers[(longlong)puVar27]) {
                uVar26 = (int)puVar27 + 1;
                puVar27 = (uint *)(ulonglong)uVar26;
                if (uStack_4f0 <= uVar26) goto LAB_145a31021;
              }
            }
            uVar18 = (ulonglong)((int)uVar18 + 1);
            bVar24 = (char)puVar25 + 1;
            puVar25 = (uint *)(ulonglong)bVar24;
          } while ((char)bVar24 <= psVar5[uVar18]);
        }
        uVar26 = uStack_4ec;
        uVar21 = uStack_4f0;
        local_4f8 = FVar14.Hash;
        if (puVar16 != (uint *)0x0) {
          uVar26 = uVar12;
          if ((int)param_5 < (param_4->HitGroupShaders).Identifiers.ArrayNum) {
            uVar26 = uVar19;
          }
          if ((uVar26 == 0) &&
             (bVar11 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar18 = (param_2->Data)._padding_;
          plVar1 = &(param_2->Data)._padding_;
          pFVar20 = (param_4->HitGroupShaders).Identifiers.AllocatorInstance.Data +
                    (longlong)(int)param_5 * 0x20;
          uVar15 = (ulonglong)
                   (param_3 * param_2->LocalRecordStride + param_2->HitGroupShaderTableOffset);
          if ((uVar18 & 1) != 0) {
            uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)plVar1;
          }
          uVar8 = *(undefined8 *)(pFVar20 + 8);
          puVar3 = (undefined8 *)(uVar15 + uVar18);
          *puVar3 = *(undefined8 *)pFVar20;
          puVar3[1] = uVar8;
          uVar8 = *(undefined8 *)(pFVar20 + 0x18);
          puVar3 = (undefined8 *)(uVar15 + 0x10 + uVar18);
          *puVar3 = *(undefined8 *)(pFVar20 + 0x10);
          puVar3[1] = uVar8;
          uVar26 = param_2->LocalRecordStride;
          iVar13 = param_2->HitGroupShaderTableOffset + 0x40;
          uVar18 = *plVar1;
          if ((uVar18 & 1) != 0) {
            uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)plVar1;
          }
          memcpy((void *)((uVar26 * param_3 + iVar13) + uVar18),
                 (void *)((uVar26 * *puVar16 + iVar13) + uVar18),(ulonglong)(uVar26 - 0x40));
          param_13 = Validation;
          FVar14.Hash = local_4c8._0_8_;
          uVar26 = local_4c8._12_4_;
          uVar21 = local_4c8._8_4_;
        }
      }
      FD3D12RayTracingLocalResourceBinder::FD3D12RayTracingLocalResourceBinder
                (&local_398,local_4d8,param_2,pFVar4->LocalRootSignature,param_13,param_3,param_14,
                 HitGroup);
      bVar11 = SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>
                         (pFVar4,pFVar4->LocalRootSignature,0,(FRHIShaderParameterResource *)0x0,0,
                          (FRHITexture **)0x0,0,(FRHIShaderResourceView **)0x0,param_8,param_9,0,
                          (FRHISamplerState **)0x0,0,(FRHIUnorderedAccessView **)0x0,param_10,
                          local_4d0,&local_398);
      auVar9 = local_4c8;
      if (bVar11) {
        if (bVar10) {
          sVar29 = '\0';
          local_418[0] = local_4b8;
          local_418[1] = ppFStack_4b0;
          psVar5 = param_2->WorkerData[param_14].ShaderRecordCache.Table.CurrentData.Distances;
          uVar28 = param_2->WorkerData[param_14].ShaderRecordCache.Table.NumSlotsMinusOne &
                   (uint)FVar14.Hash;
          uVar18 = (ulonglong)uVar28;
          local_418[2] = local_4a8;
          local_418[3] = ppFStack_4a0;
          local_3f8 = local_498;
          ppFStack_3f0 = ppFStack_490;
          local_3e8 = local_4c8._0_8_;
          uStack_3e0 = local_4c8._8_4_;
          uStack_3dc = local_4c8._12_4_;
          if ((psVar5 != (schar *)0x0) && (-1 < psVar5[uVar18])) {
            pFVar6 = param_2->WorkerData[param_14].ShaderRecordCache.Table.CurrentData.Keys;
            do {
              if (((FVar14.Hash == pFVar6[uVar18].Hash) && (uVar26 == pFVar6[uVar18].ShaderIndex))
                 && (uVar21 == pFVar6[uVar18].NumUniformBuffers)) {
                puVar16 = puVar23;
                if (uVar21 == 0) goto LAB_145a31378;
                while (local_418[(longlong)puVar16] ==
                       pFVar6[uVar18].UniformBuffers[(longlong)puVar16]) {
                  uVar28 = (int)puVar16 + 1;
                  puVar16 = (uint *)(ulonglong)uVar28;
                  if (uVar21 <= uVar28) goto LAB_145a31378;
                }
              }
              uVar28 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar28;
              sVar29 = sVar29 + '\x01';
            } while (sVar29 <= psVar5[uVar18]);
          }
          local_3d8.UniformBuffers[0] = local_4b8;
          local_3d8.UniformBuffers[1] = ppFStack_4b0;
          local_3d8.UniformBuffers[2] = local_4a8;
          local_3d8.UniformBuffers[3] = ppFStack_4a0;
          local_3d8.UniformBuffers[4] = local_498;
          local_3d8.UniformBuffers[5] = ppFStack_490;
          local_3d8.Hash = local_4c8._0_8_;
          local_3d8.NumUniformBuffers = local_4c8._8_4_;
          local_3d8.ShaderIndex = local_4c8._12_4_;
          local_4c8 = auVar9;
          Experimental::TSherwoodHashTable_Private::
          TSherwoodHashTable<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int>_>
          ::Add((TSherwoodHashTable<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int,Experimental::TSherwoodHashKeyFuncs<FD3D12RayTracingShaderBindingTableInternal::FShaderRecordCacheKey,unsigned_int>_>
                 *)(param_2->WorkerData + param_14),sVar29,(FData *)(param_2->WorkerData + param_14)
                ,uVar28,&local_3d8,(uint)FVar14.Hash,param_3);
          auVar9 = local_4c8;
        }
LAB_145a31378:
        local_4c8 = auVar9;
        if ((int)param_5 < (param_4->HitGroupShaders).Identifiers.ArrayNum) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = (FD3D12ShaderIdentifier *)
                  ((param_4->HitGroupShaders).Identifiers.AllocatorInstance.Data +
                  (longlong)(int)param_5 * 0x20);
      }
      else {
        pFVar17 = &FD3D12ShaderIdentifier::Null;
      }
      local_478 = pFVar17->Data[0];
      uStack_470 = *(ulong64 *)((longlong)pFVar17 + 8);
      uVar18 = (param_2->Data)._padding_;
      local_468 = *(ulong64 *)((longlong)pFVar17 + 0x10);
      uStack_460 = *(ulong64 *)((longlong)pFVar17 + 0x18);
      uVar15 = (ulonglong)
               (param_3 * param_2->LocalRecordStride + param_2->HitGroupShaderTableOffset);
      if (param_13 == Validation) {
        if ((uVar18 & 1) != 0) {
          uVar18 = (longlong)&(param_2->Data)._padding_ + ((longlong)uVar18 >> 0x18);
        }
        iVar13 = memcmp((void *)(uVar15 + uVar18),&local_478,0x20);
        if ((iVar13 != 0) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_8588839787656379078>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x53a,"FMemory::Memcmp(CurrentData, InData, InDataSize) == 0"),
           bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        if ((uVar18 & 1) != 0) {
          uVar18 = (longlong)&(param_2->Data)._padding_ + ((longlong)uVar18 >> 0x18);
        }
        *(undefined8 *)(uVar15 + uVar18) = local_478;
        ((undefined8 *)(uVar15 + uVar18))[1] = uStack_470;
        puVar2 = (ulong64 *)(uVar15 + 0x10 + uVar18);
        *puVar2 = local_468;
        puVar2[1] = uStack_460;
      }
      if (local_398.ReferencedCBResources.AllocatorInstance.SecondaryData !=
          (ForElementType<FD3D12Resource_*>)0x0) {
        FMemory::Free((void *)local_398.ReferencedCBResources.AllocatorInstance.SecondaryData);
      }
      if (local_398.ReferencedViews.AllocatorInstance.SecondaryData !=
          (ForElementType<FD3D12View_*>)0x0) {
        FMemory::Free((void *)local_398.ReferencedViews.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// SetRayTracingMissShader @ 145a314d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
SetRayTracingMissShader
          (FD3D12Device *param_1,FD3D12RayTracingShaderBindingTableInternal *param_2,uint param_3,
          FD3D12RayTracingPipelineState *param_4,uint param_5,uint param_6,
          FRHIUniformBuffer **param_7,uint param_8,void *param_9,uint param_10,uint param_11)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulong64 *puVar3;
  FD3D12RayTracingShader *pFVar4;
  code *pcVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FD3D12ShaderIdentifier *pFVar11;
  undefined1 auStackY_448 [32];
  FD3D12RayTracingLocalResourceBinder local_398;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_448;
  if (param_2->NumMissRecords <= param_3) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("RecordIndex < ShaderTable->NumMissRecords",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1729,
                       L"Miss shader record index is invalid. Make sure that NumMissShaderSlots is correct in FRayTracingShaderBindingTableInitializer."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar1 = &(param_2->Data)._padding_;
  uVar10 = *plVar1;
  if ((uVar10 & 1) != 0) {
    uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)plVar1;
  }
  *(uint *)((param_2->MissShaderTableOffset + 0x2c + param_3 * param_2->LocalRecordStride) + uVar10)
       = param_10;
  uVar8 = 0;
  if ((int)param_5 < (param_4->MissShaders).Shaders.ArrayNum) {
    uVar8 = ~param_5 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = *(FD3D12RayTracingShader **)
            ((param_4->MissShaders).Shaders.AllocatorInstance.Data + (longlong)(int)param_5 * 8);
  FD3D12RayTracingLocalResourceBinder::FD3D12RayTracingLocalResourceBinder
            (&local_398,param_1,param_2,pFVar4->LocalRootSignature,Transient,param_3,param_11,
             MissShader);
  bVar7 = SetRayTracingShaderResources<FD3D12RayTracingLocalResourceBinder>
                    (pFVar4,pFVar4->LocalRootSignature,0,(FRHIShaderParameterResource *)0x0,0,
                     (FRHITexture **)0x0,0,(FRHIShaderResourceView **)0x0,param_6,param_7,0,
                     (FRHISamplerState **)0x0,0,(FRHIUnorderedAccessView **)0x0,param_8,param_9,
                     &local_398);
  if (bVar7) {
    uVar8 = 0;
    if ((int)param_5 < (param_4->MissShaders).Identifiers.ArrayNum) {
      uVar8 = ~param_5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar11 = (FD3D12ShaderIdentifier *)
              ((param_4->MissShaders).Identifiers.AllocatorInstance.Data +
              (longlong)(int)param_5 * 0x20);
  }
  else {
    pFVar11 = &FD3D12ShaderIdentifier::Null;
  }
  uVar10 = (ulonglong)(param_3 * param_2->LocalRecordStride + param_2->MissShaderTableOffset);
  if (param_3 == 0) {
    param_2->bWasDefaultMissShaderSet = true;
  }
  uVar9 = *plVar1;
  if ((uVar9 & 1) != 0) {
    uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)plVar1;
  }
  uVar6 = *(ulong64 *)((longlong)pFVar11 + 8);
  puVar2 = (undefined8 *)(uVar10 + uVar9);
  *puVar2 = pFVar11->Data[0];
  puVar2[1] = uVar6;
  uVar6 = *(ulong64 *)((longlong)pFVar11 + 0x18);
  puVar3 = (ulong64 *)(uVar10 + 0x10 + uVar9);
  *puVar3 = *(ulong64 *)((longlong)pFVar11 + 0x10);
  puVar3[1] = uVar6;
  if (local_398.ReferencedCBResources.AllocatorInstance.SecondaryData !=
      (ForElementType<FD3D12Resource_*>)0x0) {
    FMemory::Free((void *)local_398.ReferencedCBResources.AllocatorInstance.SecondaryData);
  }
  if (local_398.ReferencedViews.AllocatorInstance.SecondaryData != (ForElementType<FD3D12View_*>)0x0
     ) {
    FMemory::Free((void *)local_398.ReferencedViews.AllocatorInstance.SecondaryData);
  }
  return;
}

// SyncIsCompatibleWithQueue @ 145a33900

/* WARNING: Enum "D3D12_BARRIER_SYNC": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl SyncIsCompatibleWithQueue(D3D12_BARRIER_SYNC param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == D3D12_BARRIER_SYNC_NONE) {
    return true;
  }
  if (param_2 == Graphics) {
    return (param_1 &
           (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
            D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
            D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
            D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
            D3D12_BARRIER_SYNC_NON_PIXEL_SHADING|D3D12_BARRIER_SYNC_ALL_SHADING|
            D3D12_BARRIER_SYNC_EXECUTE_INDIRECT|D3D12_BARRIER_SYNC_RESOLVE|D3D12_BARRIER_SYNC_COPY|
            D3D12_BARRIER_SYNC_RAYTRACING|D3D12_BARRIER_SYNC_COMPUTE_SHADING|
            D3D12_BARRIER_SYNC_RENDER_TARGET|D3D12_BARRIER_SYNC_DEPTH_STENCIL|
            D3D12_BARRIER_SYNC_PIXEL_SHADING|D3D12_BARRIER_SYNC_VERTEX_SHADING|
            D3D12_BARRIER_SYNC_INDEX_INPUT|D3D12_BARRIER_SYNC_DRAW|D3D12_BARRIER_SYNC_ALL)) ==
           param_1;
  }
  if (param_2 == AsyncCompute) {
    return (param_1 &
           (D3D12_BARRIER_SYNC_SPLIT|D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
            D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
            D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
            D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
            D3D12_BARRIER_SYNC_NON_PIXEL_SHADING|D3D12_BARRIER_SYNC_ALL_SHADING|
            D3D12_BARRIER_SYNC_EXECUTE_INDIRECT|D3D12_BARRIER_SYNC_COPY|
            D3D12_BARRIER_SYNC_RAYTRACING|D3D12_BARRIER_SYNC_COMPUTE_SHADING|D3D12_BARRIER_SYNC_ALL)
           ) == param_1;
  }
  if (param_2 != All) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12EnhancedBarriers.cpp"
                       ,0x354,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return false;
  }
  return (param_1 &
         (D3D12_BARRIER_SYNC_COPY_RAYTRACING_ACCELERATION_STRUCTURE|
          D3D12_BARRIER_SYNC_BUILD_RAYTRACING_ACCELERATION_STRUCTURE|
          D3D12_BARRIER_SYNC_CLEAR_UNORDERED_ACCESS_VIEW|
          D3D12_BARRIER_SYNC_EMIT_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO|
          D3D12_BARRIER_SYNC_NON_PIXEL_SHADING|D3D12_BARRIER_SYNC_ALL_SHADING|
          D3D12_BARRIER_SYNC_EXECUTE_INDIRECT|D3D12_BARRIER_SYNC_COPY|D3D12_BARRIER_SYNC_RAYTRACING|
          D3D12_BARRIER_SYNC_COMPUTE_SHADING|D3D12_BARRIER_SYNC_ALL)) == param_1;
}

// Translate @ 145a33f40

D3D12_DESCRIPTOR_HEAP_TYPE __cdecl Translate(ERHIDescriptorHeapType param_1)

{
  code *pcVar1;
  bool bVar2;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar3;
  
  if (param_1 != Standard) {
    if (param_1 == Sampler) {
      return D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER;
    }
    if (param_1 == RenderTarget) {
      return D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    }
    if (param_1 == DepthStencil) {
      return D3D12_DESCRIPTOR_HEAP_TYPE_DSV;
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.h"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      DVar3 = (*pcVar1)();
      return DVar3;
    }
  }
  return D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
}

// TranslateClusterTriangleDesc @ 145a33fb0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

_NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC * __cdecl
TranslateClusterTriangleDesc
          (_NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC
           *__return_storage_ptr__,FRayTracingClusterOperationCLASInitializer *param_1)

{
  EVertexElementType EVar1;
  code *pcVar2;
  bool bVar3;
  _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC *p_Var4;
  ulong uVar5;
  
  uVar5 = 0;
  EVar1 = param_1->VertexFormat;
  __return_storage_ptr__->vertexFormat = 0;
  __return_storage_ptr__->maxGeometryIndexValue = 0;
  __return_storage_ptr__->maxUniqueGeometryCountPerArg = 0;
  __return_storage_ptr__->maxTriangleCountPerArg = 0;
  __return_storage_ptr__->maxVertexCountPerArg = 0;
  __return_storage_ptr__->maxTotalTriangleCount = 0;
  __return_storage_ptr__->maxTotalVertexCount = 0;
  __return_storage_ptr__->minPositionTruncateBitCount = 0;
  if (EVar1 == VET_Float3) {
    uVar5 = 6;
  }
  else {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x17f4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      p_Var4 = (_NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC *)
               (*pcVar2)();
      return p_Var4;
    }
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Format != DXGI_FORMAT_UNKNOWN",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x17f7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      p_Var4 = (_NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC *)
               (*pcVar2)();
      return p_Var4;
    }
  }
  __return_storage_ptr__->maxGeometryIndexValue = param_1->MaxGeometryIndex;
  __return_storage_ptr__->maxUniqueGeometryCountPerArg = param_1->MaxUniqueGeometryCount;
  __return_storage_ptr__->maxTriangleCountPerArg = param_1->MaxTriangleCount;
  __return_storage_ptr__->maxVertexCountPerArg = param_1->MaxVertexCount;
  __return_storage_ptr__->maxTotalTriangleCount = param_1->MaxTotalTriangleCount;
  __return_storage_ptr__->maxTotalVertexCount = param_1->MaxTotalVertexCount;
  __return_storage_ptr__->minPositionTruncateBitCount = param_1->MinPositionTruncateBitCount;
  __return_storage_ptr__->vertexFormat = uVar5;
  return __return_storage_ptr__;
}

// TranslateMoveOperation @ 145a34070

uint __cdecl
TranslateMoveOperation
          (FRayTracingClusterOperationMoveInitializer *param_1,
          _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUTS *param_2)

{
  ERayTracingClusterOperationMoveType EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  param_2->type = NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_TYPE_MOVE_CLUSTER_OBJECT;
  (param_2->field4_0x10).clasDesc.maxClasCountPerArg = param_1->MaxBytes;
  EVar1 = param_1->Type;
  if (EVar1 == BOTTOM_LEVEL) {
    (param_2->field4_0x10).clasDesc.maxTotalClasCount = 0;
  }
  else {
    if (EVar1 == CLUSTER_LEVEL) {
      (param_2->field4_0x10).clasDesc.maxTotalClasCount = 1;
      return 8;
    }
    if (EVar1 == TEMPLATE) {
      (param_2->field4_0x10).clasDesc.maxTotalClasCount = 2;
      return 8;
    }
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x181c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return 8;
}

// TranslateRayTracingAccelerationStructureFlags @ 145a34100

D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS __cdecl
TranslateRayTracingAccelerationStructureFlags(ERayTracingAccelerationStructureFlags param_1)

{
  code *pcVar1;
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS DVar2;
  byte bVar3;
  bool bVar4;
  D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAGS DVar5;
  ERayTracingAccelerationStructureFlags EVar6;
  ERayTracingAccelerationStructureFlags EVar7;
  
  bVar3 = (byte)param_1 & 1;
  EVar7 = param_1 & ~AllowUpdate;
  if ((param_1 & AllowUpdate) == None) {
    EVar7 = param_1;
  }
  EVar6 = EVar7 & ~AllowCompaction;
  if ((EVar7 >> 1 & 1) == 0) {
    EVar6 = EVar7;
  }
  DVar5 = bVar3 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_ALLOW_COMPACTION;
  if ((EVar7 >> 1 & 1) == 0) {
    DVar5 = (uint)bVar3;
  }
  EVar7 = EVar6 & ~FastTrace;
  if ((EVar6 >> 2 & 1) == 0) {
    EVar7 = EVar6;
  }
  DVar2 = DVar5 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PREFER_FAST_TRACE;
  if ((EVar6 >> 2 & 1) == 0) {
    DVar2 = DVar5;
  }
  EVar6 = EVar7 & ~FastBuild;
  if ((EVar7 >> 3 & 1) == 0) {
    EVar6 = EVar7;
  }
  DVar5 = DVar2 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_PREFER_FAST_BUILD;
  if ((EVar7 >> 3 & 1) == 0) {
    DVar5 = DVar2;
  }
  DVar2 = DVar5 | D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_MINIMIZE_MEMORY;
  if ((EVar6 >> 4 & 1) == 0) {
    DVar2 = DVar5;
  }
  EVar7 = EVar6 & ~MinimizeMemory;
  if ((EVar6 >> 4 & 1) == 0) {
    EVar7 = EVar6;
  }
  if (EVar7 != None) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(Flags, Flags)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1b0,L"Some ERayTracingAccelerationStructureFlags entries were not handled"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      DVar5 = (*pcVar1)();
      return DVar5;
    }
  }
  return DVar2;
}

// TranslateRayTracingGeometryDescs @ 145a341d0

void __cdecl
TranslateRayTracingGeometryDescs
          (FRayTracingGeometryInitializer *param_1,
          TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  FRHIBuffer *pFVar5;
  D3D12_RAYTRACING_GEOMETRY_DESC *pDVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  uint local_res8;
  longlong local_res18;
  FString local_b8;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((param_2->ArrayNum != (param_1->Segments).ArrayNum) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("Output.Num() == Initializer.Segments.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xcd4,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_1->GeometryType != RTGT_Triangles) {
    iVar14 = 1;
    if (param_1->GeometryType == RTGT_Procedural) goto LAB_145a34263;
    bVar13 = FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                        ,0x1c0,L"Unexpected ray tracing geometry type");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar14 = 0;
LAB_145a34263:
  uVar19 = 0;
  uVar16 = 0;
  local_res8 = 0;
  if (0 < (param_1->Segments).ArrayNum) {
    lVar18 = 0;
    local_res18 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar19 < (param_1->Segments).ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar17 = (param_1->Segments).AllocatorInstance.Data + lVar18;
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("Segment.VertexBuffer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0xcde,L"Position vertex buffer is required for ray tracing geometry."
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(pFVar17 + 0x10) == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("Segment.VertexBufferStride",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0xcdf,L"Non-zero position vertex buffer stride is required."), bVar13
         )) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((((byte)pFVar17[0x10] & 3) != 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("Segment.VertexBufferStride % 4 == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0xce0,
                              L"Position vertex buffer stride must be aligned to 4 bytes for ByteAddressBuffer loads to work."
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(pFVar17 + 0x14) == 0) && (*(int *)(pFVar17 + 0x1c) != 0)) {
        FDebugName::ToString(&param_1->DebugName,&local_b8);
        bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("Segment.MaxVertices != 0 || Segment.NumPrimitives == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xce4,
                            L"FRayTracingGeometrySegment.MaxVertices for \'%s\' must contain number of positions in the vertex buffer or maximum index buffer value+1 if index buffer is provided."
                           );
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (param_1->GeometryType == RTGT_Triangles) {
        if (((*(int *)(pFVar17 + 8) != 3) && (*(int *)(pFVar17 + 8) != 4)) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Segment.VertexBufferElementType == VET_Float3 || Segment.VertexBufferElementType == VET_Float4"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0xce9,L"Only float3/4 vertex buffers are currently implemented."),
           bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(uint *)(pFVar17 + 0x10) < 0xc) &&
           (bVar13 = FDebug::CheckVerifyFailedImpl2
                               ("Segment.VertexBufferStride >= 12",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0xcea,
                                L"Only deinterleaved float3 position vertex buffers are currently implemented."
                               ), bVar13)) {
code_r0x000145a34497:
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else if (((param_1->GeometryType == RTGT_Procedural) && (*(uint *)(pFVar17 + 0x10) < 0x18)) &&
              (bVar13 = FDebug::CheckVerifyFailedImpl2
                                  ("Segment.VertexBufferStride >= (2 * sizeof(FVector3f))",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                   ,0xcee,
                                   L"Procedural geometry vertex buffer must contain at least 2xFloat3 that defines 3D bounding boxes of primitives."
                                  ), bVar13)) goto code_r0x000145a34497;
      pFVar5 = (param_1->IndexBuffer).Reference;
      if (((pFVar5 != (FRHIBuffer *)0x0) &&
          ((pFVar5->Desc).Size <
           (*(int *)(pFVar17 + 0x1c) + *(int *)(pFVar17 + 0x18)) * (pFVar5->Desc).Stride * 3 +
           param_1->IndexBufferOffset)) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("Initializer.IndexBuffer->GetSize() >= (Segment.FirstPrimitive + Segment.NumPrimitives) * FD3D12RayTracingGeometry::IndicesPerPrimitive * IndexStride + Initializer.IndexBufferOffset"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0xcf5,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_80 = 0;
      local_58 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (ulonglong)CONCAT14(pFVar17[0x20] != (FScriptContainerElement)0x0,iVar14);
      local_68 = 0;
      uStack_60 = 0;
      if (pFVar17[0x21] == (FScriptContainerElement)0x0) {
        local_88 = (ulonglong)CONCAT14(pFVar17[0x20] != (FScriptContainerElement)0x0,iVar14) |
                   0x200000000;
      }
      if (iVar14 == 0) {
        iVar4 = *(int *)(pFVar17 + 8);
        if (iVar4 == 2) {
          local_78 = 0x1000000000;
        }
        else if ((iVar4 == 3) || (iVar4 == 4)) {
          local_78 = 0x600000000;
        }
        else if (iVar4 == 0xc) {
          local_78 = 0x2200000000;
        }
        else {
          bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0xd1c,L"");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if ((param_1->IndexBuffer).Reference == (FRHIBuffer *)0x0) {
          if (((param_1->Segments).ArrayNum != 1) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("Initializer.Segments.Num() == 1",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0xd2b,
                                  L"Non-indexed geometry with multiple segments is not implemented."
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_78 = local_78 & 0xffffffff00000000;
          uVar16 = param_1->TotalPrimitiveCount * 3;
          if (*(uint *)(pFVar17 + 0x14) < uVar16) {
            uVar16 = *(uint *)(pFVar17 + 0x14);
          }
          uStack_70 = CONCAT44(uVar16,(undefined4)uStack_70);
        }
        else {
          local_78 = CONCAT44(local_78._4_4_,0x2a);
          uStack_70 = CONCAT44(*(undefined4 *)(pFVar17 + 0x14),*(int *)(pFVar17 + 0x1c) * 3);
        }
      }
      else if (iVar14 == 1) {
        uStack_80 = (ulonglong)*(uint *)(pFVar17 + 0x1c);
      }
      else {
        bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0xd36,L"Unexpected ray tracing geometry type");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar12 = local_58;
      uVar16 = local_res8 + *(int *)(pFVar17 + 0x1c);
      uVar8 = (undefined4)local_88;
      uVar9 = local_88._4_4_;
      uVar10 = (undefined4)uStack_80;
      uVar11 = uStack_80._4_4_;
      uVar15 = 0;
      if ((int)uVar19 < param_2->ArrayNum) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      local_a8 = local_78;
      uStack_a0 = uStack_70;
      local_98 = local_68;
      uStack_90 = uStack_60;
      if ((uVar15 == 0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = uVar19 + 1;
      pDVar6 = param_2->DataPtr;
      lVar18 = lVar18 + 0x28;
      puVar1 = (undefined4 *)((longlong)&pDVar6->Type + local_res18);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      puVar2 = (ulonglong *)((longlong)&pDVar6->field2_0x8 + local_res18 + 8);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a0;
      puVar3 = (undefined8 *)((longlong)&pDVar6->field2_0x8 + local_res18 + 0x18);
      *puVar3 = local_98;
      puVar3[1] = uStack_90;
      *(undefined8 *)((longlong)&pDVar6->field2_0x8 + local_res18 + 0x28) = uVar12;
      local_res18 = local_res18 + 0x38;
      local_res8 = uVar16;
    } while ((int)uVar19 < (param_1->Segments).ArrayNum);
  }
  if ((uVar16 != param_1->TotalPrimitiveCount) &&
     (bVar13 = FDebug::CheckVerifyFailedImpl2
                         ("ComputedPrimitiveCountForValidation == Initializer.TotalPrimitiveCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0xd40,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// TranslateRenderTargetFormats @ 145a347b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
TranslateRenderTargetFormats
          (FGraphicsPipelineStateInitializer *param_1,D3D12_RT_FORMAT_ARRAY *param_2,
          DXGI_FORMAT *param_3)

{
  ETextureCreateFlags EVar1;
  uint uVar2;
  DXGI_FORMAT DVar3;
  DXGI_FORMAT DVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = 0;
  if (param_1->RenderTargetsEnabled != 0) {
    iVar8 = param_1->RenderTargetsEnabled - 1;
    lVar5 = (longlong)iVar8;
    iVar6 = -1;
    if (-1 < iVar8) {
      do {
        iVar6 = iVar8;
        if ((param_1->RenderTargetFormats).Elements[lVar5] != '\0') break;
        iVar8 = iVar8 + -1;
        lVar5 = lVar5 + -1;
        iVar6 = -1;
      } while (-1 < lVar5);
    }
    uVar2 = iVar6 + 1;
  }
  uVar7 = 0;
  param_2->NumRenderTargets = uVar2;
  if (param_1->RenderTargetsEnabled != 0) {
    do {
      EVar1 = (param_1->RenderTargetFlags).Elements[uVar7];
      DVar3 = UE::DXGIUtilities::GetPlatformTextureResourceFormat
                        (GPixelFormats[(param_1->RenderTargetFormats).Elements[uVar7]].
                         PlatformFormat,EVar1);
      if ((EVar1 & SRGB) == None) {
        switch(DVar3 - DXGI_FORMAT_R8G8B8A8_TYPELESS) {
        case DXGI_FORMAT_UNKNOWN:
          DVar4 = DXGI_FORMAT_R8G8B8A8_UNORM;
          break;
        default:
          goto switchD_145a3487c_caseD_1;
        case DXGI_FORMAT_R32_SINT:
          DVar4 = DXGI_FORMAT_BC1_UNORM;
          break;
        case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
          DVar4 = DXGI_FORMAT_BC2_UNORM;
          break;
        case DXGI_FORMAT_R8G8_UNORM:
          DVar4 = DXGI_FORMAT_BC3_UNORM;
          break;
        case DXGI_FORMAT_R8_SNORM:
          DVar4 = DXGI_FORMAT_B8G8R8A8_UNORM;
          break;
        case DXGI_FORMAT_BC1_TYPELESS:
          DVar4 = DXGI_FORMAT_BC7_UNORM;
        }
      }
      else {
        switch(DVar3 - DXGI_FORMAT_R8G8B8A8_TYPELESS) {
        case DXGI_FORMAT_UNKNOWN:
          DVar4 = DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
          break;
        default:
switchD_145a3487c_caseD_1:
          if (DVar3 == DXGI_FORMAT_R32G8X24_TYPELESS) {
            DVar4 = DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS;
          }
          else if (DVar3 == DXGI_FORMAT_R32_TYPELESS) {
            DVar4 = DXGI_FORMAT_R32_FLOAT;
          }
          else if (DVar3 == DXGI_FORMAT_R24G8_TYPELESS) {
            DVar4 = DXGI_FORMAT_R24_UNORM_X8_TYPELESS;
          }
          else {
            DVar4 = DXGI_FORMAT_R16_UNORM;
            if (DVar3 != DXGI_FORMAT_R16_TYPELESS) {
              DVar4 = DVar3;
            }
          }
          break;
        case DXGI_FORMAT_R32_SINT:
          DVar4 = DXGI_FORMAT_BC1_UNORM_SRGB;
          break;
        case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
          DVar4 = DXGI_FORMAT_BC2_UNORM_SRGB;
          break;
        case DXGI_FORMAT_R8G8_UNORM:
          DVar4 = DXGI_FORMAT_BC3_UNORM_SRGB;
          break;
        case DXGI_FORMAT_R8_SNORM:
          DVar4 = DXGI_FORMAT_B8G8R8A8_UNORM_SRGB;
          break;
        case DXGI_FORMAT_BC1_TYPELESS:
          DVar4 = DXGI_FORMAT_BC7_UNORM_SRGB;
        }
      }
      param_2->RTFormats[uVar7] = DVar4;
      uVar2 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar2;
    } while (uVar2 < param_1->RenderTargetsEnabled);
  }
  DVar3 = UE::DXGIUtilities::GetPlatformTextureResourceFormat
                    (GPixelFormats[param_1->DepthStencilTargetFormat].PlatformFormat,
                     param_1->DepthStencilTargetFlag);
  if (DVar3 == DXGI_FORMAT_R32G8X24_TYPELESS) {
    *param_3 = DXGI_FORMAT_D32_FLOAT_S8X24_UINT;
    return;
  }
  if (DVar3 != DXGI_FORMAT_R32_TYPELESS) {
    if (DVar3 != DXGI_FORMAT_R24G8_TYPELESS) {
      DVar4 = DXGI_FORMAT_D16_UNORM;
      if (DVar3 != DXGI_FORMAT_R16_TYPELESS) {
        DVar4 = DVar3;
      }
      *param_3 = DVar4;
      return;
    }
    *param_3 = DXGI_FORMAT_D24_UNORM_S8_UINT;
    return;
  }
  *param_3 = DXGI_FORMAT_D32_FLOAT;
  return;
}

// UnregisterD3D12RayTracingGeometry @ 145a36520

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl UnregisterD3D12RayTracingGeometry(FD3D12RayTracingGeometry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FD3D12RayTracingGeometryTracker *this;
  ulong64 uVar1;
  
  this = GetD3D12RayTracingGeometryTracker();
  uVar1 = param_1->AccelerationStructureCompactedSize;
  if (uVar1 == 0) {
    uVar1 = param_1->_padding_;
  }
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<FD3D12RayTracingGeometry_*,DefaultKeyFuncs<FD3D12RayTracingGeometry_*,0>,FDefaultSetAllocator>
    ::Remove(&this->Geometries,param_1);
    this->TotalBLASSize = this->TotalBLASSize - uVar1;
                    /* WARNING: Could not recover jumptable at 0x000145a3658a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// MemoryPool'' @ 1503c8120

void __cdecl `dynamic_atexit_destructor_for_'FD3D12SyncPoint::MemoryPool__(void)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  do {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FD3D12SyncPoint::MemoryPool);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
  } while (aVar1 != (atomic<void_*>)0x0);
  return;
}

// NullTransformBuffer'' @ 1503c8180

void __cdecl `dynamic_atexit_destructor_for_'FD3D12RayTracingGeometry::NullTransformBuffer__(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  TRefCountPtr<FRHIBuffer> this;
  bool bVar4;
  uint uVar5;
  
  this.Reference = FD3D12RayTracingGeometry::NullTransformBuffer.Reference;
  if (FD3D12RayTracingGeometry::NullTransformBuffer.Reference == (FRHIBuffer *)0x0) {
    return;
  }
  LOCK();
  plVar1 = &(FD3D12RayTracingGeometry::NullTransformBuffer.Reference)->_padding_;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)(uint)lVar3 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = (uint)lVar3 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this.Reference);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12AllowDiscardResources'' @ 1503c81a0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12AllowDiscardResources__(void)

{
  CVarD3D12AllowDiscardResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12AllowDiscardResources);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12BatchResourceBarriers'' @ 1503c81c0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12BatchResourceBarriers__(void)

{
  CVarD3D12BatchResourceBarriers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12BatchResourceBarriers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12ExplicitDeduplicateSamplers'' @ 1503c81e0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12ExplicitDeduplicateSamplers__(void)

{
  CVarD3D12ExplicitDeduplicateSamplers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12ExplicitDeduplicateSamplers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12ExplicitViewDescriptorHeapSize'' @ 1503c8200

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12ExplicitViewDescriptorHeapSize__(void)

{
  CVarD3D12ExplicitViewDescriptorHeapSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12ExplicitViewDescriptorHeapSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12ExtraDiagnosticBufferMemory'' @ 1503c8220

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12ExtraDiagnosticBufferMemory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12ExtraDiagnosticBufferMemory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12GPUTimeout'' @ 1503c8240

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12GPUTimeout__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12GPUTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12RHIStablePowerState'' @ 1503c8260

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12RHIStablePowerState__(void)

{
  CVarD3D12RHIStablePowerState._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12RHIStablePowerState);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12RayTracingAllowCompaction'' @ 1503c8280

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12RayTracingAllowCompaction__(void)

{
  CVarD3D12RayTracingAllowCompaction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12RayTracingAllowCompaction)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12RayTracingCompactionMinPrimitiveCount'' @ 1503c82a0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12RayTracingCompactionMinPrimitiveCount__(void)

{
  CVarD3D12RayTracingCompactionMinPrimitiveCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12RayTracingCompactionMinPrimitiveCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12RayTracingGPUValidation'' @ 1503c82c0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12RayTracingGPUValidation__(void)

{
  CVarD3D12RayTracingGPUValidation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarD3D12RayTracingGPUValidation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarD3D12RayTracingMaxBatchedCompaction'' @ 1503c82e0

void __cdecl _dynamic_atexit_destructor_for__CVarD3D12RayTracingMaxBatchedCompaction__(void)

{
  CVarD3D12RayTracingMaxBatchedCompaction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarD3D12RayTracingMaxBatchedCompaction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableDiscardOfDepthResources'' @ 1503c8300

void __cdecl _dynamic_atexit_destructor_for__CVarDisableDiscardOfDepthResources__(void)

{
  CVarDisableDiscardOfDepthResources._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableDiscardOfDepthResources)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarInsertOuterOcclusionQuery'' @ 1503c8320

void __cdecl
D3D12RHI::RHIConsoleVariables::_dynamic_atexit_destructor_for__CVarInsertOuterOcclusionQuery__(void)

{
  CVarInsertOuterOcclusionQuery._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInsertOuterOcclusionQuery);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLowLevelCacheKeepUsedPSOs'' @ 1503c8340

void __cdecl _dynamic_atexit_destructor_for__CVarLowLevelCacheKeepUsedPSOs__(void)

{
  CVarLowLevelCacheKeepUsedPSOs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLowLevelCacheKeepUsedPSOs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOPrecacheKeepLowLevel'' @ 1503c8360

void __cdecl _dynamic_atexit_destructor_for__CVarPSOPrecacheKeepLowLevel__(void)

{
  CVarPSOPrecacheKeepLowLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOPrecacheKeepLowLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPSOStallWarningThresholdInMs'' @ 1503c8380

void __cdecl _dynamic_atexit_destructor_for__CVarPSOStallWarningThresholdInMs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPSOStallWarningThresholdInMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingAllowSpecializedStateObjects'' @ 1503c83a0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingAllowSpecializedStateObjects__(void)

{
  CVarRayTracingAllowSpecializedStateObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingAllowSpecializedStateObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingDebugForceFastTrace'' @ 1503c83c0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingDebugForceFastTrace__(void)

{
  CVarRayTracingDebugForceFastTrace._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingDebugForceFastTrace);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingShaderRecordCache'' @ 1503c83e0

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingShaderRecordCache__(void)

{
  CVarRayTracingShaderRecordCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingShaderRecordCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingSpecializeStateObjects'' @ 1503c8400

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingSpecializeStateObjects__(void)

{
  CVarRayTracingSpecializeStateObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRayTracingSpecializeStateObjects);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503c8420

void __cdecl
`FD3D12CommandContext::GetShaderBindingLayout'::__l2::_dynamic_atexit_destructor_for__Default__
          (void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &`public:_class_FRHIShaderBindingLayout_const&___ptr64___cdecl_FD3D12CommandContext::GetShaderBindingLayout(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__;
  lVar2 = 8;
  do {
    piVar1 = piVar3 + -6;
    piVar3 = piVar3 + -6;
    lVar2 = lVar2 + -1;
    if (*(void **)piVar1 != (void *)0x0) {
      FMemory::Free(*(void **)piVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 1503c8470

void __cdecl
`InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<unsigned_char,64>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<unsigned_char,64>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503c84a0

void __cdecl
``FD3D12CommandContext::RHIBuildAccelerationStructures'::__l100::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c84a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1503c84c0

void __cdecl
``PrepareAccelerationStructureBuild'::__l160::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c84c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GD3D12DumpRayTracingGeometriesCmd'' @ 1503c84e0

void __cdecl _dynamic_atexit_destructor_for__GD3D12DumpRayTracingGeometriesCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GD3D12DumpRayTracingGeometriesCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GD3D12DumpRayTracingGeometriesToCSVCmd'' @ 1503c8500

void __cdecl _dynamic_atexit_destructor_for__GD3D12DumpRayTracingGeometriesToCSVCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GD3D12DumpRayTracingGeometriesToCSVCmd);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 1503c8520

void __cdecl
`GetD3D12RayTracingGeometryTracker'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Instance.CS);
  ::Instance.Geometries.HashSize = 0;
  if (::Instance.Geometries.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)::Instance.Geometries.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FD3D12RayTracingGeometry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FD3D12RayTracingGeometry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FD3D12RayTracingGeometry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance);
  return;
}

// operator() @ 1504d62c0

bool __thiscall `CreateRayTracingStateObject'::__l63::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8588839787656379757>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8588839787656379757>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

